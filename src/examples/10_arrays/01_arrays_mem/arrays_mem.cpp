// write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout;
using std::string;

void use_stack_array()
{
    const auto SIZE = 3;
    int numbers[SIZE]{5, 8, 0};

    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << "\n";
    }

    numbers[2] = 10;
    cout << numbers[2] << "\n";
}

void array_months()
{
    const auto SIZE = 3;
    int month_numbers[SIZE]{1, 2, 3};
    string month_names[SIZE]{"Jan", "Feb", "Mar"};
    for (auto i = 0; i < SIZE; i++)
    {
        cout << month_numbers[i] << " " << month_names[i] << "\n";
    }

    month_names[0] = "Janurary";
    cout << month_names << "\n";
}

void array_and_pointers()
{
    const auto SIZE = 3;
    int numbers[SIZE]{5, 8, 0};

    cout << numbers << "\n";  // address
    cout << *numbers << "\n"; // 5

    int *ptr = numbers;
    cout << *ptr << "\n"; // 5

    *ptr++;

    cout << *ptr << "\n"; // 8

    *ptr++;

    cout << *ptr << "\n"; // 0
}

void display_array(int *nums)
{
    for (auto i = 0; nums[i] != -1; i++)
    {
        cout << nums[i] << "\n";
    }
}

void display_array(int *nums, const int SIZE)
{
    for (auto i = 0; i < SIZE; i++)
    {
        cout << nums[i] << "\n";
    }
}