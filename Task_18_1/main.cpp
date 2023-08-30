#include <iostream>
#include <vector>

void swapvec(std::vector<int>& vec, int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = vec[i];
    }
}

void inputData(std::vector<int>& array_a, int size)
{
    std::cout << "Enter thr data in the array A: ";

    for(int i = 0; i < size; i++)
    {
        std::cout   << "Enter element " 
                    << i+1 
                    << ": ";
        std::cin    >> array_a[i];
    }
    std::cout << std::endl;
}

void inputData(int* array_b, int size)
{
    std::cout << "Enter thr data in the array B: ";

    for(int i = 0; i < size; i++)
    {
        std::cout   << "Enter element " 
                    << i+1 
                    << ": ";
        std::cin    >> array_b[i];
    }
    std::cout << std::endl;
}

void printResult(std::vector<int>& vec, int size) {
    std::cout << "Result vector: ";
    for (int i = 0; i < size; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void printResult(int* arr, int size) {
    std::cout << "Result array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int size = 0;
    std::cout << "Enter the size of array: ";
    std::cin >> size;

    std::vector<int> array_a(size);
    int array_b[size];

    inputData(array_a, size);
    inputData(array_b, size);

    swapvec(array_a, array_b, size);

    printResult(array_a, size);
    printResult(array_b, size);
}
