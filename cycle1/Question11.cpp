#include<iostream>
class class_2;
class class_1
{
    private:
        int x;
    public:
        class_1(int a)
        {
            x=a;
        }
        friend void swap(class_1,class_2);
};
class class_2
{
    private:
        int y;
    public:
        class_2(int b)
        {
            y=b;
        }
        friend void swap(class_1,class_2);
};
void swap(class_1 c, class_2 d)
{
    int temp;
    temp=c.x;
    c.x=d.y;
    d.y=temp;
    std::cout<<"After swapping the values of class_1: "<<c.x<<std::endl;
    std::cout<<"After swapping the values of class_2: "<<d.y<<std::endl;
}
int main()
{
    int num1,num2;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>num2;
    class_1 c(num1);
    class_2 d(num2);
    swap(c,d);
    return(0);
}