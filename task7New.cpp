#include <iostream>
#include <vector>

struct Table
{
    int rows, columns;
    // std::vector<std::vector<int>> vec;
    std::vector<std::vector<int>> vec;

    Table(int n, int m) : rows(n), columns(m)
    {
        for (int i = 0; i < rows; i++)
        {
            std::vector<int> v1;

            for (int j = 0; j < columns; j++)
            {
                v1.push_back(i * j);
            }

            vec.push_back(v1);
        }
    }
};

int main()
{
    int rows, columns;
    std::cout << "Enter (rows,columns): ";
    std::cin >> rows >> columns;
    Table data(rows, columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout<<data.vec[i][j] << std::endl; 
        }
        
    }
    
}