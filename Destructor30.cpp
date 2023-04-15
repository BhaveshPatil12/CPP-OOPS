#include<iostream>
#include<stdafx.h>
using namespace std;
class convertch
{
public:
  virtual char* convertChar() = 0;
  ~convertch(){};
};

class MakeLower :public convertch
{
public:
  MakeLower(char *passLetter)
  {
    tolower = true;
    Letter = new char[30];
    strcpy(Letter, passLetter);
  }

  virtual ~MakeLower()
  {
    cout<< "called ~MakeLower()"<<"\n";
    delete[] Letter;
  }

  char* convertChar()
  {
    size_t len = strlen(Letter);
    for(int i= 0;i<len;i++)
      Letter[i] = Letter[i] + 32;
    return Letter;
  }