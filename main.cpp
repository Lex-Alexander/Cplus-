#include <iostream>


int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int sum = 0;
    int number;

    for (int i = 1; i <= n; ++ i){
    std::cout << "Enter: " << n << " numbers: ";
    std::cin >> number;
    sum += number;

    }

    std::cout << "sum of " << n << " Entered numbers is " << sum <<std::endl;





}
