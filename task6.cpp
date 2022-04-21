#include <iostream>
#include <vector>

void inputElement(std::vector<std::string> &vec)
{
    int i = 0;
    std::string answer;
    std::string str;
    while (1)
    {
        std::cout << "Enter line for position for [" << i << "]: ";
        std::cin>>str;
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

void ouputElementInRevers(const std::vector<std::string> &vec){
    for (int i = vec.size()-1; i>= 0; i--)
    {
        std::cout<<vec[i]<<std::endl;
    }
    
}

int main()
{
    // int size;
    // std::cout << "Size of vector: ";
    // std::cin >> size;
    std::vector<std::string> vec;
    // vec.resize(5);
    inputElement(vec);
    ouputElementInRevers(vec);
    return 0;
}