#include<iostream>
#include<graphics.h>
#include<stdlib.h>
using namespace std;

    {
       public:
        virtualvoid draw()=0;
    };
	class draw_rectangle:public shape
    {
       public:
        void draw()  { rectangle(225,225,180,180);  }
    };
    {
       public:
        void draw()  { arc(200,200,45,135,100);  }
    };
    {
       public:
        void draw()  { circle(200,200,60);  }
    };
int main()
    {
       int driver=VGA;
       int mode=VGAHI;
       int error_code;

       initgraph(&driver,&mode,"..\\Bgi");

       error_code=graphresult( );

       if(error_code!=grOk)
          {
            restorecrtmode( );
            textmode(BW80);
            clrscr( );

            cout<<" \n Fatal Error  : Graphic Driver not initialized"<<endl;
            cout<<" Error Reason : "<<grapherrormsg(error_code)<<endl;
            cout<<" \n Press any key to exit...";

            getch( );
            exit(1);
    }

    shape *ptr;
    draw_rectangle r;
    draw_arc a;
    draw_circle c;

    ptr=&r;
    ptr->draw();

    ptr=&a;
    ptr->draw();

    ptr=&c;
    ptr->draw();

    getch();
    closegraph();
    return 0;
}