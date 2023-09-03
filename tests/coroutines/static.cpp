#include "iostream"
#include <functional>
using namespace std;

void func() {
  static int count = 0;
  cout << "from static variable inside a function " << count << endl;
  count++;
}
void func2() {
  int count = 0;
  cout << "from normal variable inside a function " << count << endl;
  count++;
}
class Statest {
public:
  static int variable;
};

int Statest::variable = 88;
int main(int argc, char *argv[]) {
  Statest::variable++;
  cout << Statest::variable << endl;
  cout << Statest::variable << endl;
  Statest::variable++;
  cout << Statest::variable << endl;
  Statest::variable++;
  cout << Statest::variable << endl;
  Statest::variable++;
  cout << Statest::variable << endl;
  Statest::variable++;
  cout << Statest::variable << endl;
  Statest::variable++;
  cout << Statest::variable << endl;
  Statest::variable++;
  cout << Statest::variable << endl;
  Statest::variable++;
  cout << Statest::variable << endl;
  Statest::variable++;
  cout << "Log" << endl;
  return 0;
}
