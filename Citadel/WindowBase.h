#pragma once

namespace CitadelCore {

class WindowBase {
  public:
    WindowBase();
    ~WindowBase();

  public:
    int Run();

  private:
    int m_screenWidth;
};

}; // namespace CitadelCore
