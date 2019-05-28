#pragma once

#include <blueprint/typedef.h>

#include <cu/cu_macro.h>

#include <vector>

namespace guilab
{

class GuiLab
{
public:
    auto& GetAllNodes() { return m_nodes; }

private:
    void InitNodes();

private:
    std::vector<bp::NodePtr> m_nodes;

    CU_SINGLETON_DECLARATION(GuiLab)

}; // GuiLab

}