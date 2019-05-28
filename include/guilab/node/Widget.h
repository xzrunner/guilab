#pragma once

#include "guilab/Node.h"
#include "guilab/PinType.h"

#include <blueprint/Pin.h>

namespace guilab
{
namespace node
{

class Widget : public Node
{
public:
    Widget(const std::string& name)
        : Node(name)
    {
        AddPin(std::make_shared<bp::Pin>(false, 0, PIN_WIDGET, "Out", *this));

        Layout();
    }

    std::string title;

    RTTR_ENABLE(Node)

}; // Widget

}
}