#include<iostream>
using namespace std;
class Rectangle {    
  public:  
    Rectangle() {     
      cout << "Constructor gets invoked automatically!!";
      cout << "\nA rectangle has 4 sides, 4 corners, and 4 right angles";
    }
    ~Rectangle() {     
      cout << "\n\nDestructor gets invoked automatically!!";
    }
};
 
int main() {
  Rectangle rct;   
  return 0;
}