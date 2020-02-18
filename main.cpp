
#include <iostream>
#include <fstream>
#include <clocale>                                   // ��� �������� �����, ���� ��� ����� �����
#include "complex.h"

using namespace std;

class Pointer {
private:
  double x;
  double y;
public:
  Pointer() {
    x = 0;
    y = 0;
  }
  Pointer(double _x, double _y) {
    x = _x;
    y = _y;
  }
  ~Pointer() {
    x = 0;
    y = 0;
  }
  int distance(Pointer &c) {
    int res;
    res = sqrt((pow(x, 2.0) - pow(c.x, 2.0)) + (pow(y, 2.0) - pow(c.y, 2.0)));
    return res;
  }
  friend std::ostream& operator<< (std::ostream &out, const Pointer &c);
  
};

std::ostream& operator<< (std::ostream &out, const Pointer &c) {
  out << "x = " << c.x << " y = " << c.y;
  return out;
}

int main() {
  setlocale(LC_CTYPE, "Russian");
  Pointer x(3, 2);
  Pointer z;
  cout << "�������� ����� x � ������������ (3,2): " << x << endl;
  cout << "�������� ����� z � ������������ (0,0): " << z << endl;
  int res;
  res = x.distance(z);
  cout << "���������� �� ����� x �� z: " << res << endl;
  system("pause");
}