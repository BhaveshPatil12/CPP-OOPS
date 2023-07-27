#include<iostream>
#include<fstream>
int main()
{
    int count = 0;
    std::string line;
    std::ifstream file("main.cpp");
 
    while (getline(file, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ' || line[i] == '\t')
                count++;
        }
    }
    std::cout << "Number of white-space characters"
              << " is " << count << "\n.";
    return 0;
}