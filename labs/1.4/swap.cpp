#include <iostream>

using namespace std;

void swap(int& A, int& B) {
  int temp = A;
  A = B;
  B = temp;
}

void swap2(int A, int B) {
  int temp = A;
  A = B;
  B = temp;
}

int main() {
  int A, B;
  A = 2;
  B = 3;

  swap2(A, B);

  cout << "A = " << A << endl;
  cout << "B = " << B << endl;

  swap(A, B);
  cout << "A = " << A << endl;
  cout << "B = " << B << endl;

  return 0;
}