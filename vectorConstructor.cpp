
#include <iostream>
#include <vector>

struct Vector
{
    int n;
    std::vector<std::vector<int>> vec;
    Vector(int n) : n(n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // problem is here
                vec[i][j] = i * j;
                // it is giving error: Exception has occurred.
                // Segmentation fault
            }
        }
    }
};

int main()
{
    int n = 3;
    // std::cout << "Size of vector: ";
    // std::cin >> n;
    Vector data(n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         std::cout << data[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }
    return 0;
}