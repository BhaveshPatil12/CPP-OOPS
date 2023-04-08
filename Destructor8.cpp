#include<iostream>
using namespace std;
class base {
   public:
    virtual ~base() {
        cout << "Destructor base." << endl;
    }
};
class derived : publicbase {
    public:
    ~derived() {
        cout << "Destructor derived." << endl;
    }
}

int main() {
    base* b = new derived; 
    delete b;
    return 0;
}