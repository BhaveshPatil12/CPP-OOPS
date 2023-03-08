#include<iostream>
using namespace std;
class Matrix {
 private:
  int matrix[3][3];
 public:
  void getMatrix() {
    cout << "Enter Matrix elements :" << endl;
    for (int row = 0; row < 3; row++) {
      for (int column = 0; column < 3; column++) {
        cout << "[" << row << "][" << column << "]: ";
        cin >> matrix[row][column];
      }
    }
  }
  void identityMatrix() {
    int row, column, check = 1;
    cout << "\nEntered Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << matrix[row][column] << "  ";
      }
      cout << "\n";
    }
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        if (matrix[row][column] != 1 && matrix[row][column] != 0) {
          check = 0;
          break;
        }
      }
    }
    if (check == 1) {
      cout << "\nThe matrix is an identity matrix!" << endl;
    } else {
      cout << "\nThe matrix is not an identity matrix!" << endl;
    }
  }
};
int main() {
  Matrix M;
  M.getMatrix();
  M.identityMatrix();
  return 0;
}