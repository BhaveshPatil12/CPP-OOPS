#include<iostream>
#include<fstream>
using namespace std;
class student
{
    private:
        char name[30];
        int age;
    public:
        void getData(void)
        {
            cout<<"\nEnter name :: ";
            cin.getline(name,30);
            cout<<"\nEnter age :: ";
            cin>>age;
        }

        void showData(void)
        {
            cout<<"\nName :: "<<name<<"\n\nAge :: "<<age<<endl;
        }
};

int main()
{
    student s;
    ofstream file;
    file.open("C:\\Users\\acer\\Documents\\file4.txt",ios::out);
    if(!file)
    {
      cout<<"\nError in creating file......"<<endl;
      return 0;
    }
    cout<<"\nFile created successfully.........."<<endl;
    s.getData();    
    file.write((char*)&s,sizeof(s));    
    file.close();   
    cout<<"\nFile saved and closed succesfully......."<<endl;
    ifstream file1;
    file1.open("C:\\Users\\acer\\Documents\\file4.txt",ios::in);
    if(!file1){
        cout<<"\nError in opening file.......";
        return 0;
    }
    cout<<"\nReading data from the text File :: \n";
    file1.read((char*)&s,sizeof(s));
    s.showData();
    file1.close();
    return 0;
}