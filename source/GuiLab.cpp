#include "guilab/GuiLab.h"
#include "guilab/PinCallback.h"
// trigger
#include "guilab/node/action.h"
#include "guilab/node/condition.h"
#include "guilab/node/event.h"
// widget
#include "guilab/node/container.h"
#include "guilab/node/input.h"
#include "guilab/node/navigation.h"
#include "guilab/node/output.h"
#include "guilab/node/primitive.h"
#include "guilab/node/selection.h"

#include <blueprint/node/Hub.h>

namespace guilab
{

CU_SINGLETON_DEFINITION(GuiLab);

extern void regist_rttr();

GuiLab::GuiLab()
{
    regist_rttr();

    InitNodes();

    InitPinCallback();
}

void GuiLab::InitNodes()
{
    auto add_node = [&](rttr::type t)
    {
        auto obj = t.create();
        if (!obj.is_valid()) {
            auto str = t.get_name().to_string();
            printf("%s\n", str.c_str());
        }
        assert(obj.is_valid());
        auto node = obj.get_value<bp::NodePtr>();
        assert(node);
        m_nodes.push_back(node);
    };

    auto add_nodes = [&](const rttr::array_range<rttr::type>& list) {
        for (auto& t : list) {
            add_node(t);
        }
    };

    add_node(rttr::type::get<bp::node::Hub>());

    add_nodes(rttr::type::get<node::Widget>().get_derived_classes());
}

}