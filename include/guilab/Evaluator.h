#pragma once

#include <vector>
#include <memory>

namespace bp { class Node; }
namespace egui { class Context; }

namespace guilab
{

class Evaluator
{
public:
    static void Update(const std::vector<std::shared_ptr<bp::Node>>& nodes);
    static void Draw(const std::vector<std::shared_ptr<bp::Node>>& nodes, egui::Context& ctx);

}; // Evaluator

}