#include<iostream>
using namespace std;
class apple {
    public:
    int roll;
    apple(){      
        roll=5;
        cout << "Roll is " << roll << endl;
    };
    ~apple(){      
        roll=-5;
        cout << "Roll is " << roll << endl;
    };
};
int main(){
    apple obj1;
    return 0;
}