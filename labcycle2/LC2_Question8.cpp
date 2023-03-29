#include<iostream>
class shape
{
    protected:
        float area;
    public:
        virtual void acquire_data()=0;  //Abstract calss//
        virtual void get_area()=0;
};
class circle:public shape
{
    private:
        float radius;
    public:
        void acquire_data()
        {
            std::cout<<"*Enter the radius of the Circle: *"<<std::endl;
            std::cin>>radius;
        }
        void get_area()
        {
            area=3.14*(radius)*(radius);
            std::cout<<"The Area Of The Circle Is: "<<area<<std::endl;
        }
};
class square:public shape
{
    private:
        int side;
    public:
        void acquire_data()
        {
            std::cout<<"*Enter the side of the Square: *"<<std::endl;
            std::cin>>side;
        }
        void get_area()
        {
            area=side*side;
            std::cout<<"The Area Of The Square Is: "<<area<<std::endl;
        }
};
class ellipse:public shape
{
    private:
        float majaxis,minaxis;
    public:
        void acquire_data()
        {
            std::cout<<"*Enter the majaxis of the Ellipse: *"<<std::endl;
            std::cin>>majaxis;
            std::cout<<"*Enter the minaxis of the Ellipse: *"<<std::endl;
            std::cin>>minaxis;
        }
        void get_area()
        {
            area=3.14*majaxis*minaxis;
            std::cout<<"The Area Of The Ellipse Is: "<<area<<std::endl;
        }
};
class rectangle:public shape
{
    private:
        int breadth,length;
    public:
        void acquire_data()
        {
            std::cout<<"*Enter the Breadth of the Rectangle: *"<<std::endl;
            std::cin>>breadth;
            std::cout<<"*Enter the Length of the Rectangle: *"<<std::endl;
            std::cin>>length;
        }
        void get_area()
        {
            area=length*breadth;
            std::cout<<"The Area Of The Rectangle Is: "<<area<<std::endl;
        }
};
int main()
{
    int option1,option2;
    std::cout<<"Would You Like To Start The Operations?\n1.YES\n2.NO"<<std::endl;
    std::cin>>option1;
    if(option1==1)
    {
        do
        {
            int choice;
            shape *shpointer;
            std::cout<<"Choose The Operation\n1.Area of Circle\n2.Area of Square\n3.Area of Ellipse\n4.Area of Recatngle"<<std::endl;
            std::cin>>choice;
            switch (choice)
            {
            case 1:
                shpointer=new circle;
                shpointer->acquire_data();
                shpointer->get_area();
                break;
            case 2:
                shpointer=new square;
                shpointer->acquire_data();
                shpointer->get_area();
                break;
            case 3:
                shpointer=new ellipse;
                shpointer->acquire_data();
                shpointer->get_area();
                break;
            case 4:
                shpointer=new rectangle;
                shpointer->acquire_data();
                shpointer->get_area();
                break;
            default:
                break;
            }
            std::cout<<"Do You Want To Continue?\n1.Continue\n2.Exit"<<std::endl;
            std::cin>>option2;
        }while(option2==1);
    }
    if(option1==2 or option2==2)
    {
        std::cout<<"****Exited****"<<std::endl;
    }
    return(0);
}