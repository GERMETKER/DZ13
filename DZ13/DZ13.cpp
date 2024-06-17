#include <iostream>
#include <Windows.h>
#include <vector>
#include <random>
int main()
{
    int size = 10;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    std::vector<int> randArr(size);
    std::vector<int> sortArr;
    int kolv = 0;
    for (int i = 0; i < size; i++)
    {
        randArr[i] = -20 + rand() % 41;
    }
    for (int i : randArr)
    {

        std::cout << i << " ";
        if (i > 0)
        {
            kolv++;
        }
    }
    std::cout << "\n\n";
    while (randArr.size() != kolv)
    {
        for (int i : randArr)
        {
            if (i <= 0)
            {
                std::erase(randArr, i);
            }
        }
    }
    for (int i : randArr)
    {
        std::cout << i << " ";
    }
    std::cout << "\n\n";
    for (int i : randArr)
    {
        sortArr.insert(sortArr.begin() + sortArr.size(), i);
    }
    for (int i : sortArr)
    {
        std::cout << i << " ";
    }
    std::cout << "\n\n";
    std::sort(sortArr.begin(), sortArr.end());
    for (int i : sortArr)
    {
        std::cout << i << " ";
    }
    std::cout << "\n\n";
    return 0;
}