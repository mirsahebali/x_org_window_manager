#include "iostream"
using namespace std;
int range(int a, int b) {
  static long long int i;
  static int state = 0;
  switch (state) {
  case 0:
    state = 1;
    for (i = a; i < b; i++) {
      return i;
    case 1:
      cout << "control at  range" << endl;
    }
  }
  state = 0;
  return 0;
}
int main(int argc, char *argv[]) {
  int i;
  for (; range(1, 5);) {
    cout << "Control at main" << i << endl;
  }
  return 0;
}
