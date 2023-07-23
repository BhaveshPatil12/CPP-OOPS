#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	const char *fileName="test.txt";
	ifstream file;
	file.open(fileName,ios::in);
	if(!file)
	{
		cout<<"Error in opening file!!!"<<endl;
		return -1;
	}
	while (!file.eof()) 
	{
		file >> noskipws >> ch;
		cout << ch;	
	}
	file.close();
	return 0;
}