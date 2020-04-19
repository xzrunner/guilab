#pragma once

#include <vector>
#include <memory>

namespace ur2 { class Device; class Context; }
namespace bp { class Node; }
namespace egui { struct Context; }

namespace guilab
{

class Evaluator
{
public:
    static void Update(const std::vector<std::shared_ptr<bp::Node>>& nodes);
    static void Draw(const ur2::Device& dev, ur2::Context& ur_ctx,
        const std::vector<std::shared_ptr<bp::Node>>& nodes, egui::Context& ctx);

}; // Evaluator

}