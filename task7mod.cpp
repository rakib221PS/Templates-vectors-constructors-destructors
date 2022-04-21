
#include <iostream>
#include <vector>

struct Vector
{
    int number;
    std::vector<std::vector<int>> vec;
    // std::vector<std::vector<int>> vec(number, std::vector<int>(number));
    Vector(int n):
    number(n)
    {
        for (int i = 0; i < number; i++)
        {
            for (int j = 0; j < number; j++)
            {
                // vec[i][j]=i+j;
                // vec[i][j].push_back(i*j);
            }
            
        }
        
    }
    Vector(){
        for (int i = 0; i < number; i++)
        {
            for (int i = 0; i < number; i++)
            {
                // std::cout << vec[i][i]<<" ";
            }
            
        }
        
    }
};

int main()
{
    int n;
    std::cout << "Size of vector: ";
    std::cin >> n;
    Vector data(n);
    // Vector v_c;
    // vec.resize(size);
    // inputElement(v_c, n);
    // outPutSum(v_c, n);
    return 0;
}