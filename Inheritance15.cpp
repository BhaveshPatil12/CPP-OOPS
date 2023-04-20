#include<iostream>
using namespace std;

class A
{
        protected:
                int x ;
        public:
                A( )  
                {
                     x = 0 ;
                     cout << "\n Constructor of class A without any argument is invoked" ;
                }
                A(int X) 
                {
                      x = X ;
                      cout << "\n Constructor of class A with one argument is invoked" ;
                }
                void Enter_x(void)
                {  cout << "\n\t Enter the value of x: " ; cin >> x ; }
                void Display_x(void)
                { cout << "\n\t x = " << x ; }
};

class B : public A
{
        protected:
                int y ;
        public:
                B( ) : A( ) 
                {
                        y = 0;
                        cout << "\n Constructor of class B without any argument is invoked" ;
                }
                B( int X,  
                         int Y )
                                 : A(X)   
                {
                        y = Y;
                        cout << "\n Constructor of class B with two arguments in invoked" ;
                }
                void Enter_y(void)
                { cout << "\t Enter the value of y: " ; cin >> y ;  }
                void Display_y(void)
                { cout << "\n\t y = " << y ;  }
};

class C : public B
{
        private:
                int z ;
        public:
                C( ) : B( )   
                {
                       z = 0;
                       cout << "\n Constructor of class C without any argument is invoked\n" ;
                }
                
                C(int X, int Y,   
                                int Z)     
                                              : B(X, Y)  
                {
                       z = Z ;
                       cout << "\n Constructor of class C with three arguments is invoked" ;
                }
                void Enter_z(void)
                { cout << "\t Enter the value of z: " ; cin >> z ; }
                void Display_z(void)
                { cout << "\n\t z = " << z ; }
};
int main()
{
                cout << "\n The first object is in use now******** \n " ;
                C c1 ;
                c1.Enter_x( );
                c1.Enter_y( );
                c1.Enter_z( );
                c1.Display_x( );
                c1.Display_y( );
                c1.Display_z( );
                cout << "\n\n The second object is in use now******** \n" ;
                C c2(5, 6, 7) ;
                c2.Display_x( );
                c2.Display_y( );
                c2.Display_z( );
return 0;
}