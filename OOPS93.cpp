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
  void sumRow() {
    int row, column, sumrow;
    cout << "\nEntered Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << matrix[row][column] << "  ";
      }
      cout << "\n";
    }
    cout << "\n";
    for (row = 0; row < 3; row++) {
      sumrow = 0;
      for (column = 0; column < 3; column++) {
        sumrow = sumrow + matrix[row][column];
      }
      cout << "Sum of " << row << " row is " << sumrow << endl;
    }
  }
};
int main() {
  Matrix M;
  M.getMatrix();
  M.sumRow();
  return 0;
}