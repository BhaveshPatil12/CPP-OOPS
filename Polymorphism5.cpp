#include<iostream>
using namespace std;
class Shape   
{
                public:
                        virtual void Enter_data( ) = 0;  
                        virtual void Area( ) = 0 ;            
};
class Rectangle : public Shape 
{
                private:
                        float length ;
                        float breadth ;
                
                public:
                        void Enter_data(void)
                        {
                                cout << "\n Enter the data for the Rectangle........" ;
                                cout << "\n\t Enter the length of the rectangle: " ;
                                cin >> length ;
                                cout << "\t Enter the breadth of the rectangle: " ;
                                cin >> breadth ;
                        }
                        void Area(void)
                        {
                                cout << "\n\t The area of the rectangle = " << (length * breadth) ;
                        }
};

class Circle : public Shape
{
                private:
                        float radius ;
                public:
                        void Enter_data(void)
                        {
                                cout << "\n\n Enter the data for the Circle..........." ;
                                cout << "\n\t Enter the radius of the circle: " ;
                                cin >> radius ;
                        }
                        void Area(void)
                        {
                                cout << "\n\t The area of the circle = " << (3.14 * radius * radius) ;
                        }
};
int main()
{
                Shape* shp ; 
                Rectangle rec ; 
                shp = &rec ;
                shp->Enter_data( ) ;
                shp->Area( );
                Circle cir ;     
                shp = &cir ;
                shp->Enter_data( );
                shp->Area( );
return 0;
}