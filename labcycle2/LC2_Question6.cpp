#include<iostream>
#include<iomanip>
class student
{
    protected:
        char name[15];
        int roll_no;
    public:
        void get_rollno()
        {
            std::cout<<"Enter Youe Name: "<<std::endl;
            std::cin>>name;
            std::cout<<"Enter The Roll Number: "<<std::endl;
            std::cin>>roll_no;
        }
        void display_rollno()
        {
            std::cout<<"The Student Name Is: "<<name<<std::endl;
            std::cout<<"The Roll Number Is: "<<roll_no<<std::endl;
        }
};
class test:virtual public student
{
    protected:
        float sub1,sub2;
    public:
        void get_marks()
        {
            std::cout<<"Enter The Marks For Subject 1: "<<std::endl;
            std::cin>>sub1;
            std::cout<<"Enter The Marks For Subject 2: "<<std::endl;
            std::cin>>sub2;
        }
        void display_marks()
        {
            std::cout<<"The Marks Scored For Subject 1: "<<sub1<<std::endl;
             std::cout<<"The Marks Scored For Subject 2: "<<sub2<<std::endl;
        }
};
class sports:virtual public student
{
    protected:
        int score;
    public:
        void get_score()
        {
            std::cout<<"Enter The Marks For Sports Activities: "<<std::endl;
            std::cin>>score;
        }
        void display_score()
        {
            std::cout<<"The Marks Scored In Sports Is: "<<score<<std::endl;
        }
};
class result:public test,public sports
{
    private:
        float result;
    public:
        void get_result()
        {
            result=sub1 + sub2 + score;
        }
        void display_result()
        {
            display_rollno();
            display_marks();
            display_score();
            display_result();
            std::cout<<"The Total Marks Obtained By The Student Is: "<<result<<std::endl;
        }
};
int main()
{
    int option1,option2;
    std::cout<<"Do You Want To Continue?\n1.Start\n2.Quit"<<std::endl;
    std::cin>>option1;
    if(option1==1)
    {
        do
        {
            result X;
            X.display_rollno();
            X.display_marks();
            X.display_score();
            X.display_result();
            std::cout<<"Do You Want To Continue?\n1.Contiue\n2.Quit"<<std::endl;
            std::cin>>option2;
        }while(option2==1);
    }
    return (0);
}