#include<iostream>
using namespace std;
class Height {
   private:
      int feet;             
      int inches;           
   public:
      Height() {
         feet = 0;
         inches = 0;
      }
      Height(int f, int i) {
         feet = f;
         inches = i;
      }
      void operator = (const Height &h) { 
         feet = h.feet;
         inches = h.inches;
      }
      void displayDistance() {
         cout << feet <<  " feet " <<  inches << "inches " << endl;
      }
};

int main() {
    Height H1(6, 2), H2(5, 10);
    cout << "Student 1 Height : "; 
    H1.displayDistance();
    cout << "Student 2 Height : "; 
    H2.displayDistance();
    H1 = H2;
    cout << endl;
    cout << "Student 1 Height : "; 
    H1.displayDistance();
    cout << "Student 2 Height : "; 
    H2.displayDistance();
   return 0;
}