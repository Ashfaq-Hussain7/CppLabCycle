#include<iostream>
class item
{
    private:
        static int count;
    public:
        item()
        {
            count++;
        }
        static int o_count()
        {
            return count;
        }
};
int item::count;
int main()
{
    int c=0;
    int a;
    int i=0;
    std::cout<<"Enter the required number of objects: "<<std::endl;
    std::cin>>a;
    item b[a];
    c=item::o_count();
    std::cout<<"The number of objects= "<<c;
    return 0;
}
