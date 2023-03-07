#include<iostream>
class time
{
    private:
       int hours;
       int minutes;
       int seconds;
    public:
       void input(void)
       {
        std::cout<<"Enter hours, minutes and seconds"<<std::endl;
        std::cin>>hours>>minutes>>seconds;
       }
       time add(time,time);
       void display();
};
time time::add(time t1, time t2)
{
    seconds=t1.seconds+t2.seconds;
    minutes=seconds/60;
    seconds=seconds%60;
    minutes=t1.minutes+t2.minutes+minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=t1.hours+t2.hours+hours;
}
void time::display(void)
{
    std::cout<<hours<<"Hours "<<minutes<<"Minutes "<<seconds<<"Seconds";
}
int main()
{
    time t1,t2,t3;
    std::cout<<"***Time 1*** "<<std::endl;
    t1.input();
    std::cout<<"***Time 2*** "<<std::endl;
    t2.input();
    t3.add(t1,t2);
    std::cout<<"***Total Time*** "<<std::endl;
    t3.display();
    return(0);
}