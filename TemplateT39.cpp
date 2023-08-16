#include<iostream>   
#include<vector>      
#include<algorithm>  
using namespace std;  
template<typename T>
bool sort_predicate(const T & a, const T & b)
{
    return a < b;
}

template<typename T>
void generic_sort(std::vector<T> & arr)
{
    std::sort(arr.begin(), arr.end(), &sort_predicate<T>);
}

void test_function_sort()
{
    std::vector<int> numbers = { 3,6,4,2,5,7,1 };
    generic_sort(numbers);
    for (int number : numbers)
    {
        std::cout << number << " ";
    }
}