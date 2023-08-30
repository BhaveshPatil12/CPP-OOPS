#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    std::string fileName = "nonexistent.txt";
    std::ifstream inputFile(fileName);

    if (!inputFile) {
        std::cerr << "File not found: " << fileName << std::endl;
    } else {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    }
    return 0;
}