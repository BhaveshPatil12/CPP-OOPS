#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    std::ofstream outputFile("log.txt", std::ios::app);

    if (outputFile.is_open()) {
        outputFile << "New log entry." << std::endl;
        outputFile.close();
        std::cout << "Log entry appended." << std::endl;
    } else {
        std::cerr << "Unable to open file." << std::endl;
    }

    return 0;
}