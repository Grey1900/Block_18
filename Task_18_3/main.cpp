#include <iostream>

void evendigits(long long number, int* ans)
{
    if(number == 0)
        return;
    if(number%10%2 == 0)
        (*ans)++;
    number /= 10;
    evendigits(number, ans);
}

long long inputData(void)
{
    long long number = 0;
    std::cout   << "Enter the number: ";
    std::cin    >> number;
    return number;
}

void printResult(int* ans)
{
    std::cout   << "The number of even digits is equal to: "
                << *ans
                << std::endl;
}

int main()
{
    int ans = 0;
    
    evendigits(inputData(), &ans);
    
    printResult(&ans);
}
