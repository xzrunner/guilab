#pragma once

#include "guilab/node/Widget.h"

namespace guilab
{
namespace node
{

class Label : public Widget
{
public:
    Label() : Widget("Label") {}

    RTTR_ENABLE(Widget)

}; // Label

class Tooltip : public Widget
{
public:
    Tooltip() : Widget("Tooltip") {}

    RTTR_ENABLE(Widget)

}; // Tooltip

class BalloonHelp : public Widget
{
public:
    BalloonHelp() : Widget("BalloonHelp") {}

    RTTR_ENABLE(Widget)

}; // BalloonHelp

class ProgressBar : public Widget
{
public:
    ProgressBar() : Widget("ProgressBar") {}

    RTTR_ENABLE(Widget)

}; // ProgressBar

}
}