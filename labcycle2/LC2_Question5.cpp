#include<iostream>
class X
{
    protected:
        int x;
    public:
        void get_x(int);
};
class Y
{
    protected:
        int y;
    public:
        void get_y(int);
};
class Z:public X,public Y
{
    public:
        void display(void);
};
class W:public Z
{
    public:
        void display(void);
};
void X::get_x(int a)
{
    x=a;
}
void Y::get_y(int b)
{
    y=b;
}
void Z::display(void)
{
    std::cout<<"***Addition Operation***"<<std::endl;
    std::cout<<"Enter the first number: "<<std::endl;
    std::cin>>x;
    std::cout<<"Enter the second number: "<<std::endl;
    std::cin>>y;
    std::cout<<"The sum of two number: "<<x+y<<std::endl;
}
void W::display(void)
{
    std::cout<<"***Average Operation***"<<std::endl;
    std::cout<<"Enter the first number: "<<std::endl;
    std::cin>>x;
    std::cout<<"Enter the second number: "<<std::endl;
    std::cin>>y;
    std::cout<<"The average of the two numbers is: "<<(x+y)/2<<std::endl;
}
int main()
{
    Z sum;
    W average;
    sum.display();
    average.display();
    return(0);
}