#include <iostream>
#include <vector>
#include <algorithm>

void inputElement(std::vector<int> &vec)
{
       for (int i = 0; i < vec.size(); i++)
    {
        vec[i]=i*i;
    }
}

int outPutSum(const std::vector<int> &vec)
{
    int sum = 0;
       for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }
    return sum;
}

void maxMinAve(const std::vector<int> &vec, int sum){
    std::cout<<"Max element "<<*min_element(vec.begin(),vec.end())<<std::endl;
    std::cout<<"Max element "<<*max_element(vec.begin(),vec.end())<<std::endl;
    std::cout<<"Average "<< sum/(double)vec.size()<<std::endl;
}

int main()
{
    int size;
    std::cout << "Size of vector: ";
    std::cin >> size;
    std::vector<int> vec;
    vec.resize(size);
    inputElement(vec);
    int sum = outPutSum(vec);
    std::cout<<sum<<std::endl;
    maxMinAve(vec,sum);
    return 0;
}