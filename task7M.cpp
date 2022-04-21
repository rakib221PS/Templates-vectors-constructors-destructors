#include <iostream>
#include <vector>

struct Table
{
    int number;

    Table(std::vector<std::vector<int>> &vec, int n) : number(n)
    {
        for (int i = 0; i < number; i++)
        {
            for (int j = 0; j < number; j++)
            {
                vec[i][j] = i * j;
            }
        }
    }

    Table(std::vector<std::vector<int>> &vec){
            for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            std::cout << vec[i][j] << " ";
        }
        std::cout << std::endl;
    }
    }
};

int main()
{
    int n;
    std::cout << "Size of vector: ";
    std::cin >> n;
    std::vector<std::vector<int>> vec(n, std::vector<int>(n));
    vec.resize(n);
    Table Multiplicaton(vec, n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         std::cout << vec[i][j] << " ";
    //     }
        
    // }
    
    Table Multiplicaton1(vec);
    // outPutSum(vec, n);
    return 0;
}