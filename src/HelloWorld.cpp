#include "HelloWorld.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/godot.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/classes/engine.hpp>

using namespace godot;

HelloWorld::HelloWorld()
{
    /* 编辑时和运行时判断,区分工具代码和逻辑代码,在编辑时不玉莹process */
    if (Engine::get_singleton()->is_editor_hint())
    {
        set_process_mode(Node::ProcessMode::PROCESS_MODE_DISABLED);
    }

    UtilityFunctions::print("Hello World!");
}

HelloWorld::~HelloWorld()
{
}

void HelloWorld::_bind_methods()
{
}

void HelloWorld::hello_world(String words)
{
}

void HelloWorld::_process(double delta)
{
    UtilityFunctions::print("process");
}
