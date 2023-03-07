#include<iostream>
#include<string.h>
class student
{
    private:
        std::string name;
        char grade[5];
        int roll_no;
        float marks[3];
    public:
        void input();
        void calcgrade();
        void display();
};
void student::input()
{
    std::cout<<"Enter the name of the student";
    std::cin>>name;
    std::cout<<"Enter the roll no: ";
    std::cin>>roll_no;
    std::cout<<"Enter the marks obtained in 3 subjects: ";
    for(int i=0;i<3;i++)
    {
        std::cout<<"Marks obtained in subject "<<i+1<<": ";
        std::cin>>marks[i];
    }
}
void student::calcgrade()
{
    for(int i=0;i<5;i++)
    {
        if(marks>=90 and marks<100)
        {
            grade[i]=A;
        }
        else if(marks>=80 and marks<90)
        {
            grade[i]=B;
        }
        else if(marks>=70 and marks<80)
        {
            grade[i]=C;
        }
        else if(marks>=60 and marks<70)
        {
            grade[i]=D;
        }
        else if(marks>=50 and marks<60)
        {
            grade[i]=E;
        }
    }
}
void student::display()
{
    std::cout<<"The name of the student: "<<name<<std::endl;
    std::cout<<"The roll no is: "<<roll_no<<std::endl;
    for(int i=0;i<3;i++)
    {
        std::cout<<"Marks obtained in subject "<<i+1<<": "<<grade[i]<<std::endl;
    }
}
int main()
{
    student s1,s2;
    std::string option;
    std::cout<<"Enter the details of the student: ".
    s1.input();
    s1.display();
    do
    {
        std::cout<<"\nDo you want to continue(yes/no): ";
        cin>>option;
        if (option=="yes")
        {
            std::cout<<"\nEnter the details";
            s2.input();
            s2.display();
        }
    }
    while (option=="yes")
    return(0);    
}