/// [FastPimpl - source]
#include "widget_fast_pimpl_test.hpp"  // sample::Widget

// Some ugly headers for the implementation

namespace sample {

struct Widget::Impl {  // Implementation to hide
  int Do(short param) const;

  // Something ugly
};

Widget::Widget() : pimpl_(Impl{/*some initializers*/}) {}

Widget::Widget(Widget&& other) noexcept = default;
Widget::Widget(const Widget& other) = default;
Widget& Widget::operator=(Widget&& other) noexcept = default;
Widget& Widget::operator=(const Widget& other) = default;
Widget::~Widget() = default;

int Widget::DoSomething(short param) const { return pimpl_->Do(param); }

}  // namespace sample
/// [FastPimpl - source]

namespace sample {

int Widget::Impl::Do(short) const { return 42; }
}  // namespace sample
