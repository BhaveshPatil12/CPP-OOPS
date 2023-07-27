#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
int main()
{
    int arr[26];
    std::ifstream file("test.cpp");
    std::string str;
 
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }    
    while (getline(file, str))
    {
        int i = 0;
        while (str[i] != '\0')
        {
            if (isalpha(str[i]))
                arr[(str[i] - 'a')]++;
            i++;
        }
    }
    std::cout << "Count of character \'a\' - \'z\'\n";
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        std::cout << c << " " << (arr[i] + '0') << "\t";
        if ((i + 1) % 6 == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl;
    file.close();
}