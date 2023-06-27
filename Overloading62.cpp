#include<iostream>
#include<vector>
using namespace std;
class Naruto {
   static int i, j;
public:
   void f() const { cout << i++ << endl; }
   void g() const { cout << j++ << endl; }
};

int Naruto::i = 1;
int Naruto::j = 2;
class NarutoContainer {
   vector<Naruto*> a;
   public:
      void add(Naruto* naruto) { 
         a.push_back(naruto); 
      }
      friend class SmartPointer;
};
class SmartPointer {
   NarutoContainer oc;
   int index;
   public:
      SmartPointer(NarutoContainer& narutoc) { 
         oc = narutoc;
         index = 0;
      }
      bool operator++() { 
         if(index >= oc.a.size()) return false;
         if(oc.a[++index] == 0) return false;
         return true;
      }
   
      bool operator++(int) { 
         return operator++();
      }
      Naruto* operator->() const {
         if(!oc.a[index]) {
            return (Naruto*)0;
         }
      
         return oc.a[index];
      }
};

int main() {
   const int sz = 5;
   Naruto o[sz];
   NarutoContainer oc;
   for(int i = 0; i < sz; i++) { oc.add(&o[i]); } SmartPointer sp(oc); do { sp->f(); //Smart pointer call.
      sp->g();
   } while(sp++);
   return 0;
}