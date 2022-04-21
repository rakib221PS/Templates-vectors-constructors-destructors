#include <iostream>
#include <vector>

struct Vector
{
    std::vector<std::string> vec;

    Vector()
    {
        int i = 0;
        std::string answer;
        std::string str;
        while (1)
        {
            std::cout << "Enter line for position for [" << i << "]: ";
            std::cin >> str;
            vec.push_back(str);
            std::cout << "Do you want to continue?('end' for stop and yes for continue): ";
            std::cin >> answer;
            if (answer == "end")
            {
                break;
            }
            else
            {
                i++;
            }
        }
    }
    Vector(const Vector &vector)
    {
        for (int i = vector.vec.size() - 1; i >= 0; i--)
        {
            std::cout << vector.vec[i] << std::endl;
        }
    }
    // Vector(int size)
    // {
    //     for (int i = size - 1; i >= 0; i--)
    //     {
    //         std::cout << vec[i] << std::endl;
    //     }
    // }
};

int main()
{
    Vector s1;
    int size = s1.vec.size();
    std::cout<<size;
    // for (int i = 0; i < 3; i++)
    // {
    //     std::cout<<s1.vec[i]<<std::endl;
    // }
    Vector s3 = s1;
    // Vector s2(size);

    return 0;
}