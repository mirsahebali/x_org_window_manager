#include "iostream"
#include "window_manager.hpp"
#include <cstdlib>
#include <glog/logging.h>
#include <memory>
using ::std::unique_ptr;

int main(int argc, char *argv[]) {
  ::google::InitGoogleLogging(argv[0]);
  unique_ptr<WindowManager> window_manager(WindowManager::Create());
  if (!window_manager) {
    LOG(ERROR) << "Failed to initialize the window manager";
    return EXIT_FAILURE;
  }

  window_manager->Run();
  return EXIT_SUCCESS;
}
