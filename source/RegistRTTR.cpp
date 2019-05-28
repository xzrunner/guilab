#include "guilab/node/action.h"
#include "guilab/node/condition.h"
#include "guilab/node/event.h"

#include "guilab/node/selection.h"
#include "guilab/node/navigation.h"
#include "guilab/node/input.h"
#include "guilab/node/output.h"
#include "guilab/node/container.h"

#include "guilab/node/primitive.h"

#include <ee0/ReflectPropTypes.h>

#include <js/RTTR.h>

RTTR_REGISTRATION
{

// Selection

rttr::registration::class_<guilab::node::Button>("guilab::Button")
    .constructor<>()
;

rttr::registration::class_<guilab::node::RadioButton>("guilab::RadioButton")
    .constructor<>()
;

rttr::registration::class_<guilab::node::CheckBox>("guilab::CheckBox")
    .constructor<>()
;

rttr::registration::class_<guilab::node::Slider>("guilab::Slider")
    .constructor<>()
;

rttr::registration::class_<guilab::node::ListBox>("guilab::ListBox")
    .constructor<>()
;

rttr::registration::class_<guilab::node::ComboBox>("guilab::ComboBox")
    .constructor<>()
;

rttr::registration::class_<guilab::node::Spinner>("guilab::Spinner")
    .constructor<>()
;

rttr::registration::class_<guilab::node::TreeView>("guilab::TreeView")
    .constructor<>()
;

rttr::registration::class_<guilab::node::GridView>("guilab::GridView")
    .constructor<>()
;

// Navigation

rttr::registration::class_<guilab::node::Link>("guilab::Link")
    .constructor<>()
;

rttr::registration::class_<guilab::node::Tab>("guilab::Tab")
    .constructor<>()
;

rttr::registration::class_<guilab::node::Scrollbar>("guilab::Scrollbar")
    .constructor<>()
;

// Input

rttr::registration::class_<guilab::node::TextBox>("guilab::TextBox")
    .constructor<>()
;

// Output

rttr::registration::class_<guilab::node::Label>("guilab::Label")
    .constructor<>()
;

rttr::registration::class_<guilab::node::Tooltip>("guilab::Tooltip")
    .constructor<>()
;

rttr::registration::class_<guilab::node::BalloonHelp>("guilab::BalloonHelp")
    .constructor<>()
;

rttr::registration::class_<guilab::node::ProgressBar>("guilab::ProgressBar")
    .constructor<>()
;

// Container

rttr::registration::class_<guilab::node::Window>("guilab::Window")
    .constructor<>()
;

}

namespace guilab
{

void regist_rttr()
{
}

}