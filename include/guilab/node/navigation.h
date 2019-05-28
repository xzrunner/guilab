#pragma once

#include "guilab/node/Widget.h"

namespace guilab
{
namespace node
{

class Link : public Widget
{
public:
    Link() : Widget("Link") {}

    RTTR_ENABLE(Widget)

}; // Link

class Tab : public Widget
{
public:
    Tab() : Widget("Tab") {}

    RTTR_ENABLE(Widget)

}; // Tab

class Scrollbar : public Widget
{
public:
    Scrollbar() : Widget("Scrollbar") {}

    RTTR_ENABLE(Widget)

}; // Scrollbar

}
}