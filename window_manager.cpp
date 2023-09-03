#include "window_manager.hpp"
#include <X11/Xlib.h>
#include <glog/logging.h>
#include <memory>

using ::std::unique_ptr;

unique_ptr<WindowManager> WindowManager::Create() {
  // 1. Open X display.
  Display *display = XOpenDisplay(nullptr);
  if (display == nullptr) {
    LOG(ERROR) << "Failed to open X display" << XDisplayName(nullptr);
    return nullptr;
  }
  // 2.  Constructs window manager instance
  return unique_ptr<WindowManager>(new WindowManager(display));
}
WindowManager::WindowManager(Display *display)
    : display_(CHECK_NOTNULL(display)), root_(DefaultRootWindow(display_)) {}

WindowManager::~WindowManager() { XCloseDisplay(display_); }

void WindowManager::Run() { /* TOD0 */
}
