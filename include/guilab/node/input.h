#pragma once

#include "guilab/node/Widget.h"

namespace guilab
{
namespace node
{

class TextBox : public Widget
{
public:
    TextBox() : Widget("TextBox") {}

    RTTR_ENABLE(Widget)

}; // TextBox

//class ComboBox : public Widget
//{
//public:
//    ComboBox()
//        : Widget("ComboBox")
//    {
//        AddPin(std::make_shared<bp::Pin>(true, 0, PIN_WIDGET, "Out", *this));
//
//        Layout();
//    }
//
//    RTTR_ENABLE(Widget)
//
//}; // ComboBox

}
}