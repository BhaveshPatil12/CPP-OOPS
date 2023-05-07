#include<iostream>
using namespace::std;
class Father
{
private:
int a;
public:
void set(int x)
{
a = x;
}
void out()
{
std::cout << "The value of a is " << a << std::endl;
}
};
class Son : public Father
{
private:
int b;
public:
void set(int m, int n)
{
Father::set(m);
b = n;
}
void out()
{
Father::out();
std::cout << "The value of b is " << b << std::endl;
}
};
class GrandSon : public Son
{
private:
int c;
public:
void set(int g, int h, int k)
{
Son::set(g, h);
c = k;
}
 
void out()
{
Son::out();
std::cout << "The value of c is " << c << std::endl;
}
}; 
int main()
{
GrandSon obj;
obj.set(1, 2, 3);
obj.out();
}