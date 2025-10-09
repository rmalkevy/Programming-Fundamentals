#include <iostream>

using namespace std;

void task1() {
  int A;
  cout << "Enter number A: ";
    cin >> A;

  if (A > 0)
    A = A + 1;
  else
    A - 2;
  cout << "Result: " << A << endl;
}

void task2() {
  int A, B;
  cout << "Enter A & B: ";
  cin >> A >> B;

  if (A == B)
    cout << "A equals B" << endl;
  else
    cout << "A does not equals B" << endl;
}

void swap(int& A, int& B) {
  int temp = A;
  A = B;
  B = temp;
}

int main() {
  task1();
  task2();

  int A, B, C;
  A = 2;
  B = 3;
  C = 4;

  int temp = A;
  A = B;
  B = temp;
  swap(A, B);

  int D = 2;
  int E = 3;


  return 0;
}