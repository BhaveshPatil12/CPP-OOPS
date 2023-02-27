#include<iostream>
using namespace std;
class Name {
 private:
  char name[30];
 public:
  void getName() {
    cout << "Enter Name : ";
    cin.getline(name, 30);
  }
  string swapName() {
    int index, index_2 = 0;
    char temp[30];
    for (index = 0; name[index]; index++) {
      if (name[index] == ' ') {
        index++;
        for (index_2 = 0; name[index]; index++, index_2++) {
          temp[index_2] = name[index];
        }
        break;
      }
    }
    temp[index_2] = ' ';
    index_2++;
    for (index = 0; name[index]; index_2++, index++) {
      temp[index_2] = name[index];
      if (name[index] == 32) {
        break;
      }
    }
    temp[index_2] = 0;
    return temp;
  }
};

int main() 
{
  Name N;
  string name;
  N.getName();
  name = N.swapName();
  cout << "Name : " << name << endl;
  return 0;
}

