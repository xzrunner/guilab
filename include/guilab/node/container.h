#pragma once

#include "guilab/node/Widget.h"

namespace guilab
{
namespace node
{

class Window : public Widget
{
public:
    Window() : Widget("Window") {}

    RTTR_ENABLE(Widget)

}; // Window

}
}