#include<iostream>
#include<fstream>
#include<vector>
 
int main()
{
    std::string line;
    std::vector<std::string> v;
    std::ifstream file("main.cpp");
 
    while (getline(file, line))
    {
        v.push_back(line);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        std::cout << v[i] << std::endl;
    }
    return 0;
}