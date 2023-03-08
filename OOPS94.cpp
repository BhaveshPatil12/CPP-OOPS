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
  void sparseMatrix() {
    int row, column, counter = 0;
    cout << "\nEntered Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << matrix[row][column] << "  ";
      }
      cout << "\n";
    }
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        if (matrix[row][column] == 0) {
          counter++;
        }
      }
    }
    if ((counter > ((row * column) / 2))) {
      cout << "\nIt is a Sparse Matrix!" << endl;
    } else {
      cout << "\nIt is not a Sparse Matrix!" << endl;
    }
  }
};
int main() {
  Matrix M;
  M.getMatrix();
  M.sparseMatrix();
  return 0;
}