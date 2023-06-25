#include<iostream>   
using namespace std;
class Math  
{
    int num;  
    public:   
    void setValue(int val){
        num = val;
    }
    Math operator + (Math &obj){  
        Math temp;  
        temp.num = num + obj.num;  
        return (temp);  
    }
    Math operator - (Math &obj){  
        Math temp;  
        temp.num = num - obj.num;  
        return (temp);  
    }
    Math operator * (Math &obj){  
        Math temp;  
        temp.num = num * obj.num;  
        return (temp);  
    }
    Math operator / (Math &obj){  
        Math temp;  
        temp.num = num / obj.num;  
        return (temp);  
    }
    void getValue(){  
        cout << num;  
    }         
};
int main ()  
{
    Math obj1, obj2, resObj;  
    obj1.setValue(20);  
    obj2.setValue(10);
    cout << "Obj 1: ";
    obj1.getValue();
    cout << "\nObj 2: ";
    obj2.getValue();
    resObj = obj1 + obj2;  
    cout << "\n\nObj1 + Obj2 : " ;  
    resObj.getValue();      
    resObj = obj1 - obj2;
    cout << "\nObj1 - Obj2 : " ;  
    resObj.getValue();      
    resObj = obj1 * obj2;  
    cout << "\nObj1 * Obj2 : " ;  
    resObj.getValue();
    resObj = obj1 / obj2;  
    cout << "\nObj1 / Obj2 : " ;  
    resObj.getValue();
    return 0;     
}  