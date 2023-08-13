#include <iostream>
using namespace std;
template <typename t> t multiply(t first, t second)
{
	return first * second;
}
int main()
{
	auto result = multiply(10, 20);
	std::cout << "Multiplication OF 10 and 20: " << result
			<< std::endl;
	return 0;
}