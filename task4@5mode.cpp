#include <iostream>
#include <vector>
#include <algorithm>

struct Vector{
    int number;
    std::vector<int>vec;
    Vector(int n):
    number(n)
    // vec.resize(number)
    {
        for (int i = 0; i < number; i++)
        {
            // vec[i] = i*i;
            vec.push_back(i);
        }
        
    }
};

int main()
{
    int size;
    std::cout << "Size of vector: ";
    std::cin >> size;
    Vector data(size);
    for (int i = 0; i < size; i++)
    {
        std::cout<<data.vec[i]<<std::endl;
    }
    
    return 0;
}