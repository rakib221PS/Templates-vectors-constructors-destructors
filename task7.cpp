
#include <iostream>
#include <vector>

void inputElement(std::vector<std::vector<int>> &vec, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            vec[i][j] = i * j;
        }
    }
}

void outPutSum(std::vector<std::vector<int>> &vec, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << vec[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n;
    std::cout << "Size of vector: ";
    std::cin >> n;
    std::vector<std::vector<int>> vec(n, std::vector<int>(n));
    // vec.resize(size);
    inputElement(vec, n);
    outPutSum(vec, n);
    return 0;
}