#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <godot_cpp/classes/node2d.hpp>

namespace godot
{
    class HelloWorld : public Node2D
    {
        GDCLASS(HelloWorld, Node2D);

    private:
        /* data */
        double speed;
        Vector2 velocity;

    protected:
        static void _bind_methods();

    public:
        HelloWorld();
        ~HelloWorld();

        void hello_world(String words);

        void _process(double delta) override;
    };

} // namespace godot

#endif