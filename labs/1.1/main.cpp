// Prettify code
#include <iostream>
using namespace std;

void swap(int& num1, int& num2)
{
  int tmp;
  tmp = num1;
  num1 = num2;
  num2 = tmp;
}
void init(int mas[], int size)
{
  for (int i = 0; i < size; i = i+1)
    mas[i] = i + 100;
}

float r;

int main() {
  // int a = 5, b = 6;
  // swap(a, b);
  // const int N1 = 10;
  // int mas1[10];
  // init(mas1, N1);
  // const int N2 = 100;
  // int mas2[100];
  // init(mas2, N2);

  // double a = 1.23e4;   // 1.23 × 10^4 = 12300
  // double b = 5.67e-3;  // 5.67 × 10^-3 = 0.00567

  // const float PI = 3.14;
  // PI = 3.15; // error: assignment of read-only variable 'PI'

  // float r = 10;

  int a = 2;
  int b = 5;
  std::cout << "b % a = " << b % a << std::endl;

  if (b % a == 1) {
    std::cout << "a is odd" << std::endl;
  } else {
    std::cout << "a is even" << std::endl;
  }

  int axxx = 0xf;
  int v = 07;

  return 0;
}