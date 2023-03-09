#include<iostream>
using namespace std;
class Matrix {
 private:
  int matrix1[3][3], matrix2[3][3];
 public:
  void getMatrix() {
    cout << "Enter 1st Matrix elements :" << endl;
    for (int row = 0; row < 3; row++) {
      for (int column = 0; column < 3; column++) {
        cout << "[" << row << "][" << column << "]: ";
        cin >> matrix1[row][column];
      }
    }
    cout << "\nEnter 2nd Matrix elements :" << endl;
    for (int row = 0; row < 3; row++) {
      for (int column = 0; column < 3; column++) {
        cout << "[" << row << "][" << column << "]: ";
        cin >> matrix2[row][column];
      }
    }
  }
  void subtractMatrix() {
    int subtract[3][3], row, column;
    cout << "\nEntered 1st Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << matrix1[row][column] << "  ";
      }
      cout << "\n";
    }
    cout << "\nEntered 2nd Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << matrix2[row][column] << "  ";
      }
      cout << "\n";
    }
    cout << "\n";
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        subtract[row][column] = matrix1[row][column] - matrix2[row][column];
      }
    }
    cout << "\nSubtracted Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << subtract[row][column] << "  ";
      }
      cout << endl;
    }
  }
};
int main() {
}
  Matrix M;
  M.getMatrix();
  M.subtractMatrix();
  return 0;
}