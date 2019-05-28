#pragma once

#include "guilab/node/Widget.h"

namespace guilab
{
namespace node
{

class Button : public Widget
{
public:
    Button() : Widget("Button") {}

    std::string title;

    RTTR_ENABLE(Widget)

}; // Button

class RadioButton : public Widget
{
public:
    RadioButton() : Widget("RadioButton") {}

    std::string title;

    RTTR_ENABLE(Widget)

}; // RadioButton

class CheckBox : public Widget
{
public:
    CheckBox() : Widget("CheckBox") {}

    std::string title;

    RTTR_ENABLE(Widget)

}; // CheckBox

class Slider : public Widget
{
public:
    Slider() : Widget("Slider") {}

    RTTR_ENABLE(Widget)

}; // Slider

class ListBox : public Widget
{
public:
    ListBox() : Widget("ListBox") {}

    RTTR_ENABLE(Widget)

}; // ListBox

class ComboBox : public Widget
{
public:
    ComboBox() : Widget("ComboBox") {}

    RTTR_ENABLE(Widget)

}; // ComboBox

class Spinner : public Widget
{
public:
    Spinner() : Widget("Spinner") {}

    RTTR_ENABLE(Widget)

}; // Spinner

class TreeView : public Widget
{
public:
    TreeView() : Widget("TreeView") {}

    RTTR_ENABLE(Widget)

}; // TreeView

class GridView : public Widget
{
public:
    GridView() : Widget("GridView") {}

    RTTR_ENABLE(Widget)

}; // GridView

}
}