#include<iostream>
using namespace std;
class T4Tutorials{
 int a;
 public:
 void SET_Number(int a){
  this->a=a;
 } 
 int GET_Number(){
  return a;
 }
};

T4Tutorials operator !( T4Tutorials obj){
 if(obj.GET_Number()%2==0){
  cout<<"It is a even number."<<endl;
 }
 else{cout<<"It is a odd number "<<endl;
}
}

int main(){
 T4Tutorials obj;
 int num;
 cout<<"Please Enter a number :"<<endl;
 cin>>num;
 obj.SET_Number(num);
 !obj;
}