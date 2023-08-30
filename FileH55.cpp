#include<iostream>
#include<fstream>
using namespace std;
int main() {
    int data[5] = {10, 20, 30, 40, 50};

    std::ofstream binaryOutputFile("data.bin", std::ios::binary);

    if (binaryOutputFile.is_open()) {
        binaryOutputFile.write(reinterpret_cast<char*>(data), sizeof(data));
        binaryOutputFile.close();
        std::cout << "Binary data written to file successfully." << std::endl;
    } else {
        std::cerr << "Unable to open file." << std::endl;
    }

    return 0;
}