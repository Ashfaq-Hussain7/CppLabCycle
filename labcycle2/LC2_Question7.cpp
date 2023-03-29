#include<iostream>
class alpha
{
    private:
        int x;
    public:
        alpha(int i)
        {
            x=i;
            std::cout<<"*Alpha Has Been Initianlised*"<<std::endl;
        }
        void show_x(void)
        {
            std::cout<<"The Value Of x: "<<x<<std::endl;
        }
};
class beta 
{
    private:
        float y;
    public:
        beta(float j)
        {
            y=j;
            std::cout<<"*Beta Has Been Initialised*"<<std::endl;
        }
        void show_y(void)
        {
            std::cout<<"The Value Of y: "<<y<<std::endl;
        }
};
class gamma:public beta,public alpha
{
    private:
        int m,n;
    public:
        gamma(int a,float b,int c,int d):alpha(a),beta(b)
        {
            m=c;
            n=d;
            std::cout<<"*Gamma Has Been Initialised*"<<std::endl;
        }
        void show_mn(void)
        {
            std::cout<<"The Value Of m: "<<m<<std::endl;
            std::cout<<"The Value Of n: "<<n<<std::endl;
        }
};
int main()
{
    gamma g(1,2.5,3,4);
    g.show_x();
    g.show_y();
    g.show_mn();
    return(0);
}