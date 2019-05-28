#pragma once

#include <blueprint/Node.h>

namespace guilab
{

class Node : public bp::Node
{
public:
    Node(const std::string& title);

    RTTR_ENABLE(bp::Node)

}; // Node

}