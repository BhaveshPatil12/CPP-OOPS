#include<iostream>
using namespace std;
class B 
{
                public:
                        virtual void Display(void) 
                        {
                                cout << "\n The member function Display( ) " ;
                                cout <<       "of the \"Base Class B\" is invoked \n" ;
                        }
};
class D1 : public B 
{
                public:
                        void Display(void)
                        {
                                cout << "\n The member function Display( ) " ;
                                cout <<  "of the \"Derived Class D1\" is invoked \n" ;
                        }
};

class D2 : public B 
{
                public:
                     void Display(void)
                     {
                        cout << "\n The member function Display() " ;
                        cout << "of the \"Derived Class D2\" is invoked " ;
                     }
};

int main()
{
    B* base_ptr ;
    D1 der1_obj ;  
    base_ptr = &der1_obj ;
    base_ptr->Display( );
    D2 der2_obj ;
    base_ptr = &der2_obj ; 
    base_ptr->Display( );   
return 0;
}