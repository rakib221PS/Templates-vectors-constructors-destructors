#include <algorithm>
#include <iostream>
#include <vector>

struct Vector
{
    int number;
    std::vector<int> vec;
    Vector(int n) : number(n),
                    vec(number)
    // vec.resize(number)
    {
        for (int i = 0; i < number; i++)
        {
            // vec[i].push_back(i);
            vec[i] = i * i;
        }
    }
// this method is not working.
    Vector()
    {
        int sum = 0;
        for (int i = 0; i < number; i++)
        {
            sum += vec[i];
        }
        std::cout << sum;
    }
 
    Vector(const Vector &data) : vec(data.vec)
    {
        int sum = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            sum += vec[i];
        }
        std::cout << sum;
        // std::cout<<number;
    }
};

int main()
{
    int size = 4;
    // std::cout << "Size of vector: ";
    // std::cin >> size;
    // std::vector<int>vec;
    Vector data(size);
    for (int i = 0; i < size; i++)
    {
        std::cout << data.vec[i] << " ";
    }
    std::cout << std::endl;
    // Vector data1;// why it is not working?
    std::cout << "-----------------------" << std::endl;
    Vector data2 = data;
    return 0;
}