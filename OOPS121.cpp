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
        cout << "[" << column << "][" << column << "]:";
        cin >> matrix[row][column];
      }
    }
  }
  void sumColumn() {
    int row, column, sumcolumn;
    cout << "\nEntered Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << matrix[row][column] << "  ";
      }
      cout << "\n";
    }
    cout << "\n";
    for (row = 0; row < 3; row++) {
      sumcolumn = 0;
      for (column = 0; column < 3; column++) {
        sumcolumn = sumcolumn + matrix[column][row];
      }
      cout << "Sum of " << row << " column is " << sumcolumn << endl;
    }
  }
};
int main() {
  Matrix M;
  M.getMatrix();
  M.sumColumn();
  return 0;
}