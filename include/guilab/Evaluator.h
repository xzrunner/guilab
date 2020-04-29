#pragma once

#include <vector>
#include <memory>

namespace ur { class Device; class Context; }
namespace bp { class Node; }
namespace egui { struct Context; }

namespace guilab
{

class Evaluator
{
public:
    static void Update(const std::vector<std::shared_ptr<bp::Node>>& nodes);
    static void Draw(const ur::Device& dev, ur::Context& ur_ctx,
        const std::vector<std::shared_ptr<bp::Node>>& nodes, egui::Context& ctx);

}; // Evaluator

}