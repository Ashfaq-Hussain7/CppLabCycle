#include <iostream>
class matrix
{
private:
    int **p;
    int d1, d2;

public:
    matrix(int a, int b);
    void get_element(int i, int j, int value)
    {
        p[i][j] = value;
    }
    int put_element(int i, int j)
    {
        return p[i][j];
    }
    ~matrix()
    {
        for (int i = 0; i < d1; i++)
        {
            delete p[i];
        }
        delete p;
    }
};
matrix::matrix(int x, int y)
{
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for (int i = 0; i < d1; i++)
    {
        p[i] = new int[d2];
    }
}
int main()
{
    int m, n;
    std::cout << "Enter the size of the matrix: ";
    std::cin >> m >> n;
    matrix A(m, n);
    std::cout << "Enter the elements row by row";
    int value;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> value;
            A.get_element(i, j, value);
        }
    }
    std::cout << "The entered matrix is" << std::endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << A.put_element(i, j) << " ";
        }
        std::cout << "\n";
    }
    return (0);
}