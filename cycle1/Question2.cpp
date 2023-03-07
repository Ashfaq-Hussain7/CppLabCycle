#include <iostream>
#include <cmath>
int area(int a)
{
    int c_area;
    c_area = a*a;
    return c_area;
}
int area(int l, int b)
{
    int c_area;
    c_area = l * b;
    return c_area;
}
int area(float x, float y, float z )
{
    int c_area;
    float s;
    s = (x + y + z) / 2;
    c_area = sqrt(s * (s - x) * (s - y) * (s - z));
    return c_area;
}
float area(float r)
{
    int c_area;
    const double pi = 3.14;
    c_area = pi * pow(r, 2);
    return c_area;
}
float area(int m, int n, int h)
{
    int c_area;
    c_area = ((m + n) * h) / 2;
    return c_area;
}
int main()
{
    int a, l, b, h, m, n;
    float x, y, z, r;
    int w;
    while (w != 6)
    {
        std::cout << "Choose an option: ";
        std::cout << "\n1.Square";
        std::cout << "\n2.Rectangle";
        std::cout << "\n3.Triangle";
        std::cout << "\n4.Circle";
        std::cout << "\n5.Trapezium";
        std::cout << "\n6.Exit" << std::endl;
        std::cout << "Enter your choice";
        std::cin >> w;
        switch (w)
        {
        case 1:
        {
            std::cout << "Enter the side of the square" <<std::endl;
            std::cin >> a;
            std::cout << "The area of square= " << area(a);
            break;
        }
        case 2:
        {
            std::cout << "Enter the length and breadth" <<std::endl;
            std::cin >> l >> b;
            std::cout << "The area of rectangle= " << area(l, b);
            break;
        }
        case 3:
        {
            std::cout << "Enter the sides of the trinagle" <<std::endl;
            std::cin >> x >> y >> z;
            std::cout << "The area of the triangle= " << area(x, y, z);
            break;
        }
        case 4:
        {
            std::cout << "Enter the radius of the circle" <<std::endl;
            std::cin >> r;
            std::cout << "The area of the circle= " << area(r);
            break;
        }
        case 5:
        {
            std::cout << "Enter the two parallel sides and heigth of the trapezium" <<std::endl;
            std::cin >> m >> n >> h;
            std::cout << "The area of the trapezium= " << area(m, n, h);
            break;
        }
        case 6:
        {
            std::cout << "EXIT!!!";
            break;
        }
        default:
        {
            std::cout << "ERROR! WRONG CHOICE" <<std::endl;
        }
        }
        return (0);
    }
}