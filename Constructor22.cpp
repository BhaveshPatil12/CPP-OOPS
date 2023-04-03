#include<iostream>
#include<string.h>
using namespace std;
class Plant
{
        public:
                int plant_code;
                char plant_name[100];
                char plant_type[100];
                float price;
        public:
                Plant(int pcode, char *pname, char *ptype, float pprice)
                {
                        plant_code=pcode;
                        strcpy(plant_name,pname);
                        strcpy(plant_type,ptype);
                        price=pprice;
                }
                void accept();
                void display();

                ~ Plant(){}
};
void Plant :: accept()
{
        cout<<"\n Enter Plant Details \n";
        cout<<"\n Enter Plant Code  :  ";
        cin>>plant_code;
        cout<<"\n Enter Plant Name  :  ";
        cin>>plant_name;
        cout<<"\n Enter Plant Type  :  ";
        cin>>plant_type;
        cout<<"\n Enter Plant Price :  ";
        cin>>price;
}
void Plant :: display()
{
        cout<<"\n -------------------------------";
        cout<<"\n Displaying Plant Details";
        cout<<"\n -------------------------------";
        cout<<"\n Plant Code  :  "<<plant_code;
        cout<<"\n Plant Name  :  "<<plant_name;
        cout<<"\n Plant Type  :  "<<plant_type;
        cout<<"\n Plant Price :  "<<price;
}
int main()
{
        int cnt,i;
        cout<<"\n Enter No. of Plant Details You Want?  :  ";
        cin>>cnt;
        for(i=0;i<cnt;i++)
        {
                Plant p(p.plant_code, p.plant_name, p.plant_type, p.price);
                p.accept();
                p.display();
        }
        return 0;
}