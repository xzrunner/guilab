#include "guilab/Evaluator.h"
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

#include <easygui/ImGui.h>
#include <easygui/Context.h>
#include <facade/Facade.h>
#include <renderpipeline/RenderMgr.h>

#include <iostream>

namespace guilab
{

void Evaluator::Update(const std::vector<std::shared_ptr<bp::Node>>& nodes)
{
}

void Evaluator::Draw(const ur2::Device& dev, ur2::Context& ur_ctx,
                     const std::vector<std::shared_ptr<bp::Node>>& nodes, egui::Context& ctx)
{
    static bool last_frame_dirty = false;

//    ur::Blackboard::Instance()->GetRenderContext().BindTexture(CURR_TEXID, 0);

    ctx.BeginDraw(dev);

    uint32_t uid = 1;
    for (auto& node : nodes)
    {
        auto bp_type = node->get_type();
        if (bp_type == rttr::type::get<node::Widget>())
        {
            int zz = 0;
        }
        if (bp_type.is_derived_from<node::Widget>())
        {
            int zz = 0;
            if (bp_type == rttr::type::get<node::Button>())
            {
                if (egui::button(uid++, "btn0", 200, 300, 100, 50, ctx, last_frame_dirty)) {
                    std::cout << "on click one" << '\n';
                }
            }
        }
    }

    ctx.EndDraw(dev, ur_ctx);

    last_frame_dirty = facade::Facade::Instance()->Flush(false);
    rp::RenderMgr::Instance()->Flush(dev, ur_ctx);

    ///

    //static uint32_t last_time = 0;
    //uint32_t curr_time = glp_get_time();
    //const float dt = (curr_time - last_time) / 1000000.0f;
    //last_time = curr_time;

    ctx.Update(0.03f);
}

}