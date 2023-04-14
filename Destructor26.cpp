#include<iostream>
using namespace std;
class B {
   public:
   virtual ~B()=0; 
};
B::~B() {
   std::cout << "Pure virtual destructor is called";
}
class D : public B {
   public:
   ~D() {
      cout << "~D() is executed"<<endl;
   }
};
int main() {
   B *bptr=new D();
   delete bptr;
   return 0;
}