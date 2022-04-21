
#include <cmath>
#include <iostream>

struct Point
{
    int x, y, n;
    int *point_array;
    Point(int size) : n(size),
                      point_array(new int [n])
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << "------------------------" << std::endl;
            std::cout << "Point for p1(x1,y1) :";
// task2m.cpp:16:40: error: request for member 'x' in '*(((Point*)this)->Point::point_array + ((sizetype)(((unsigned int)i) * 4)))', which is of non-class type 'int'
//    16 |             std::cin >> point_array[i].x;
//       |                                        ^
// task2m.cpp:17:40: error: request for member 'y' in '*(((Point*)this)->Point::point_array + ((sizetype)(((unsigned int)i) * 4)))', which is of non-class type 'int'
//    17 |             std::cin >> point_array[i].y;
            std::cin >> point_array[i].x;
            std::cin >> point_array[i].y;
        }
    }
};

int main()
{
    int pointX, pointY, size;
    std::cout << "Enter array size: ";
    std::cin >> size;
    Point data(size);

    return 0;
}