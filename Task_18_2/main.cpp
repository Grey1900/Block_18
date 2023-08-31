#include <iostream>

int countWays(int n, int k = 3)
{
    int counter = 0;
    
    if(n == 0)
        return 1;
    else if(n < 0)
        return 0;
    
    for(int i = 1; i <= k; i++)
    {
        counter += countWays(n-i, k);
    }

    return counter;
}

int main()
{
    int n = 0, k = 0;
    std::cout   << "Enter the number of steps: ";
    std::cin    >> n;
    std::cout   << "Enter the max jump length: ";
    std::cin    >> k;

    std::cout   << "Numbers of ways: "
                << countWays(n, k)
                << std::endl;
}
