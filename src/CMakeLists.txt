include_directories(lib)
add_subdirectory(lib)
add_subdirectory(controller)

if("${CMAKE_SYSTEM_PROCESSOR}" STREQUAL "x86_64")
    add_subdirectory(tools)
endif()

install(DIRECTORY data DESTINATION "${CMAKE_INSTALL_PREFIX}/${CMAKE_SYSTEM_PROCESSOR}")

