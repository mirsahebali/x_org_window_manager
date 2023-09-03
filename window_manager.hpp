extern "C" {
#include "X11/Xlib.h"
}
#include "memory"

class WindowManager {
public:
  // Factory method for creating a WindowManager instance and establishing a
  // connection to the XServer and
  static ::std::unique_ptr<WindowManager> Create();
  // Disconnects from X-Server
  ~WindowManager();
  // The entry point to this class
  void Run();

private:
  // Invoked internally by Create()
  WindowManager(Display *display);
  // Handles the underlying display Xlib struct
  Display *display_;
  // Handles the root window
  const Window root_;
};
