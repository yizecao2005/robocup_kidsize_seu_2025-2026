#include <list>
#include "player.hpp"
#include "task/look_task.hpp"
#include "task/walk_task.hpp"
#include "task/action_task.hpp"
#include "core/worldmodel.hpp"
#include "configuration.hpp"
#include "math/math.hpp"
#include "vision/vision.hpp"
#include "skill/skill.hpp"

using namespace std;
using namespace robot;
using namespace Eigen;
using namespace robot_math;
using namespace motion;


std::list<task_ptr> Player::play_without_gc()
{
    list<task_ptr> tasks;
    if(!played_)
        played_ = true;
    LOG(LOG_INFO)<<judge_count_<<endl;    
    Eigen::Vector2d temp_pos_(1,0);    
    Eigen::Vector2d middle_pos_ = init_pos_+temp_pos_;
    if(judge_count_==1)
    {
        tasks.push_back(skill_goto(WM->self(), middle_pos_, 0.0));   
    }
    else
    {
        tasks = fsm_->Tick();
    }
    return tasks;
}
