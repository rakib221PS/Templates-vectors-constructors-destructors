#include <iostream>

struct FloatArray
{
    int size;
    float *data;

    FloatArray(int _size) : size(_size), data(new float[size])
    {
        for (int i = 0; i < size; i++)
        {
            data[i] = i * i;
        }
    }

    ~FloatArray()
    {
        delete[] data;
    }
};

int main()
{
    FloatArray squares(5);

    std::cout << squares.size << std::endl;
    squares.data[2] = 45677;

    for (int i = 0; i < squares.size; i++)
    {
        std::cout << squares.data[i] << " ";
    }
    std::cout << std::endl;
}
