#include<iostream>    
using namespace std;    
class operatorOverlaodingExample    
{    
   private:    
      int myVar;    
   public:    
       operatorOverlaodingExample(): myVar(8){}    
       void operator ++(){     
          myVar = myVar + 20;     
       }    
       void display() {     
          cout << "The updated value is: " << myVar;     
          cout << "\n\n";
       }    
};  

int main()    
{    
    operatorOverlaodingExample obj; 
    ++obj;  
    obj.display();    
    return 0;    
}    