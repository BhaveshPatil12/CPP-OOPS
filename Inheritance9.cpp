#include<iostream>
using namespace std;
class Base
{
        private:
             int basedata1 ;
        protected:
             int basedata2 ;
        public:
             int basedata3 ;
             void get_base_data()
             {
                cout << "\n Enter basedata1: ";
                cin >> basedata1 ;  // accessible 
                cout << "\n Enter basedata2: ";
                cin >> basedata2 ;  // accessible
                cout << "\n Enter basedata3: ";
                cin >> basedata3 ;  // accessible
             }
void display_base_data()
        {
                cout << "\n basedata1 = " << basedata1;
                cout << "\n basedata2 = " << basedata2;
                cout << "\n basedata2 = " << basedata3;
        }
} ; 
class Derive : public Base
{
        private:
                int derivedata1 ;
        protected:
                int derivedata2 ;
        public:
                int derivedata3 ;
void get_derive_data()
        {
                cout << "\n Enter basedata1: ";
                cin >> basedata1 ;  
                cout << "\n Enter basedata2: "; 
                cin >> basedata2 ;  
                cout << "\n Enter basedata3: ";
                cin >> basedata3 ;  
                cout << "\n Enter derivedata1: "; 
                cin >> derivedata1 ;  
                cout << "\n Enter derivedata2: ";
                cin >> derivedata2 ;  
                cout << "\n Enter  derivedata3: ";
                cin >> derivedata3 ;  
        }
void display_derive_data()
        {
                cout << "\n basedata1 = " << basedata1;
                cout << "\n basedata2 = " << basedata2;
                cout << "\n basedata2 = " << basedata3;
                cout << "\n derivedata1 = " << derivedata1;
                        out << "\n derivedata2 = " << derivedata2;
                cout << "\n derivedata2 = " << derivedata3;
        }
} ; 
int main()
{
        Base bobj ;
        bobj.basedata1 = 10 ; 
        bobj.basedata2 = 20 ; 
        bobj.basedata3 = 30 ; 
        bobj.get_base_data();  
        bobj.display_base_data(); 
Derive  dobj ;
        dobj.basedata1 = 5 ; 
        dobj.basedata2 = 6 ; 
        dobj.basedata3 = 7 ; 
        dobj.derivedata1 = 8 ; 
        dobj.derivedata2 = 9 ; 
        dobj.derivedata3 = 10 ; 
        dobj.get_base_data() ; 
        dobj.display_base_data() ;  
        dobj.get_derive_data();   
        dobj.display_derive_data(); 
return 0;
}