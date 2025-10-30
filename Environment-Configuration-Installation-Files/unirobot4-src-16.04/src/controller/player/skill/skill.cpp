#include <memory>
#include "skill.hpp"
#include "task/walk_task.hpp"
#include "task/action_task.hpp"
#include "task/look_task.hpp"
#include "core/worldmodel.hpp"
#include "robot/robot.hpp"

using namespace std;
using namespace Eigen;
using namespace robot_math;

const double skill_goto_max_speed = 0.035;   // 0.035before
const double skill_goto_stop_distance = 0.2; //走向目标点误差
const double skill_goto_stop_direction = 10.0;
const double skill_goto_turn_direction = 10.0;

task_ptr skill_goto(const self_block &self, const Eigen::Vector2d &target, double dir) //入场动作
{
    static bool not_rotate = true;
    Vector2d target_in_self = target - self.global;
    double dis = target_in_self.norm();
    LOG(LOG_DEBUG) << "X:" << self.global.x() << "\tY:" << self.global.y() << "\tDIS:" << dis << endll; //新加
    if (dis > skill_goto_stop_distance && not_rotate)
    {
        double azi_deg = azimuth_deg(target_in_self);
        double temp = normalize_deg(azi_deg - self.dir);
        bound(-skill_goto_turn_direction, skill_goto_turn_direction, temp); // bound函数限制temp不超过最大或最小值
        // LOG(LOG_DEBUG) << "skil_goto-if" << endll;                          //新加
        return make_shared<WalkTask>(skill_goto_max_speed, 0.0, temp, true);
    }
    else if (fabs(self.dir - dir) > skill_goto_stop_direction) //调整转向面向进攻方向
    {
        not_rotate = false;
        double temp_dir = normalize_deg(dir - self.dir);
        bound(-skill_goto_turn_direction, skill_goto_turn_direction, temp_dir);
        // LOG(LOG_DEBUG) << "skil_goto-else if" << endll; //新加
        return make_shared<WalkTask>(0.0, 0.0, temp_dir, true);
    }
    else
    {
        not_rotate = true;
        Vector2d X = WM->self().global;                  //新加
        LOG(LOG_DEBUG) << "DIR:" << self.dir << endll;   //新加
        LOG(LOG_DEBUG) << X(0) << "  " << X(1) << endll; //新加
        // LOG(LOG_DEBUG) << "skil_goto-else" << endll;     //新加
        return make_shared<WalkTask>(0.0, 0.0, 0.0, false);
    }
}

task_ptr skill_penalty_kick() //点球动作
{
    ball_block ball = WM->ball();
    self_block self = WM->self();
    float ball_dir = azimuth_deg(ball.self);
    float ball_dis = ball.self.norm();
    double self2left_dir=10.0;
    double self2right_dir=0.0;
        //调整方向
        if (self.dir > self2left_dir)
        {
            
            LOG(LOG_INFO)<<"self2left_dir="<<self2left_dir<<endl;
            LOG(LOG_INFO) << "Skill_Kick_Ball: right转向，调整方向" << endl;
            return make_shared<WalkTask>(-0.005, 0.00, -5.0, true);
        }
        else if (self.dir < self2right_dir)
        {
            LOG(LOG_INFO)<<"self2right_dir="<<self2right_dir<<endl;
            LOG(LOG_INFO) << "Skill_Kick_Ball: left转向，调整方向" << endl;
            return make_shared<WalkTask>(-0.005, 0.00, 5.0, true);
            
        }
        //调整左右
        else if (ball.alpha > -0.09 && self.dir < self2left_dir && self.dir > self2right_dir)
        {
           /* if(ball.beta>0.50)
            {
                tasks.push_back(std::make_shared<WalkTask>(-0.01, 0.0, 0.0, true));
                 LOG(LOG_INFO) << "FSMStateKickBall: 后退" << endl;
            }*/
            
            LOG(LOG_INFO) << "Skill_KickBall: right横移，调整左右" << endl;
            return make_shared<WalkTask>(0.0, -0.01, 0, true);
        }
        else if (ball.alpha < -0.18 && self.dir < self2left_dir && self.dir > self2right_dir)
        {
           /* if(ball.beta>0.50)
            {
                tasks.push_back(std::make_shared<WalkTask>(-0.01, 0.0, 0.0, true));
                 LOG(LOG_INFO) << "FSMStateKickBall: 后退" << endl;
            }*/
            
            LOG(LOG_INFO) << "Skill_KickBall: left横移，调整左右" << endl;
            return make_shared<WalkTask>(0.0, 0.01, 0, true);
        }
        else
        {
            //调整前后
            if (ball.beta < 0.41) // ball.beta < 0.39 BEFORE
            {
                LOG(LOG_WARN)<<"ball_alpha="<<ball.alpha<<endl;
                LOG(LOG_INFO) << "FSMStateKickBall: 前进" << endl;
                return make_shared<WalkTask>(0.015, 0.0, 0, true);

            }
            else if (ball.beta > 0.45) // 45before
            {
                
                LOG(LOG_WARN)<<"ball_beta="<<ball.beta<<endl;
                LOG(LOG_INFO) << "FSMStateKickBall: 后退" << endl;
                return make_shared<WalkTask>(-0.01, 0.0, 0.0, true);
            }
            else
            {
                // kicked = true;
                
                LOG(LOG_INFO) << "FSMStateKickBall: 踢球" << endl;
                return make_shared<ActionTask>("left_little_kick");
                
            }
            
        }
    
}