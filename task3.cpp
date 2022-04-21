// when I try to run data3 and data4 in same time then it give me this error:
// -----------------------------------------------------------------------------
// task3.cpp:55:5: error: 'Matrix::Matrix(const Matrix&)' cannot be overloaded with 'Matrix::Matrix(const Matrix&)'
//    55 |     Matrix(const Matrix &data) : rows(data.rows),
//       |     ^~~~~~
// task3.cpp:39:5: note: previous declaration 'Matrix::Matrix(const Matrix&)'
//    39 |     Matrix(const Matrix &n) : columns(n.columns),
//       |     ^~~~~~
// #include <iostream>
// ----------------------------------------------------------------------------------
// My another question is that when I have copied this, what actually happened here? Data copy or pointer copy?
#include <iostream>
struct Matrix
{
    int rows, columns;
    float **array;
    Matrix(int _m, int _n) : rows(_m),
                             columns(_n),
                             array(new float *[rows])
    {
        for (int i = 0; i < rows; i++)
        {
            array[i] = new float[columns];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                array[i][j] = i + j;
            }
        }
    }

    Matrix(int _n) : columns(_n),
                     array(new float *[columns])
    {
        for (int i = 0; i < columns; i++)
        {
            array[i] = new float[columns];
        }
        for (int i = 0; i < columns; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                array[i][j] = i * i + j + 1;
            }
        }
    }
    // Matrix(const Matrix &n) : columns(n.columns),
    //                           array(new float *[columns])
    // {
    //     for (int i = 0; i < columns; i++)
    //     {
    //         array[i] = new float[columns];
    //     }
    //     for (int i = 0; i < columns; i++)
    //     {
    //         for (int j = 0; j < columns; j++)
    //         {
    //             array[i][j] = n.array[i][j];
    //         }
    //     }
    // }

    Matrix(const Matrix &data) : rows(data.rows),
                                 columns(data.columns),
                                 array(new float *[rows])
    {
        for (int i = 0; i < rows; i++)
        {
            array[i] = new float[columns];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                array[i][j] = data.array[i][j];
            }
        }
        array[0][0] = 444444;
        array[0][1] = 444444;
    }
    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] array[i];
        }
        delete[] array;
    }
};

int main()
{
    int rows, columns;
    std::cin >> rows >> columns;
    Matrix data(rows, columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << data.array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "------ data2 --------" << std::endl;
    Matrix data2(columns);
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << data2.array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    // std::cout << "------ data3 --------" << std::endl;
    // Matrix data3(data);
    // for (int i = 0; i < columns; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         std::cout << data3.array[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }
    std::cout << "------ data4 --------" << std::endl;
    Matrix data4 = data;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << data4.array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}