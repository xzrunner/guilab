#include "guilab/PinCallback.h"
#include "guilab/PinType.h"

#include <painting0/Color.h>
#include <blueprint/Pin.h>

#include <string>

namespace
{

const pt0::Color COL_DEFAULT    = pt0::Color(255, 255, 255);

const pt0::Color COL_WIDGET     = pt0::Color(132, 228, 231);
const pt0::Color COL_PRIMITIVE  = pt0::Color(154, 239, 146);

const pt0::Color COL_ACTION     = pt0::Color(246, 255, 154);
const pt0::Color COL_CONDITION  = pt0::Color(251, 203, 244);
const pt0::Color COL_EVENT      = pt0::Color(251, 203, 244);

std::string get_desc_func(const std::string& name, int type)
{
    std::string ret = name;
    //switch (type)
    //{
    //case guilab::PIN_TEXTURE:
    //    ret += "(T)";
    //    break;
    //}
    return ret;
}

const pt0::Color& get_color_func(int type)
{
    switch (type)
    {
    case guilab::PIN_WIDGET:
        return COL_WIDGET;
    case guilab::PIN_PRIMITIVE:
        return COL_PRIMITIVE;

    case guilab::PIN_ACTION:
        return COL_ACTION;
    case guilab::PIN_CONDITION:
        return COL_CONDITION;
    case guilab::PIN_EVENT:
        return COL_EVENT;

    default:
        return COL_DEFAULT;
    }
}

bool can_type_cast_func(int type_from, int type_to)
{
    if (type_from == type_to) {
        return true;
    }
    if (type_from == bp::PIN_ANY_VAR ||
        type_to == bp::PIN_ANY_VAR) {
        return true;
    }

    return false;
}

}

namespace guilab
{

void InitPinCallback()
{
    bp::Pin::SetExtendFuncs({
        get_desc_func,
        get_color_func,
        can_type_cast_func
    });
}

}