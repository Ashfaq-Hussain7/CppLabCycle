#include<iostream>
#include<cmath>
class vector
{
    private:
        float i_comp,j_comp,k_comp;

    public:
        float mag;
        void get_vector();
        void show_vector();
        void v_magnitude();
        void operator ==(const vector&);
        void operator !=(const vector&);
        void operator <(const vector&);
        void operator <=(const vector&);
        void operator >(const vector&);
        void operator >=(const vector&);
};
void vector::get_vector()
{
    std::cout<<"Enter the i component of the vector"<<std::endl;
    std::cin>>i_comp;
    std::cout<<"Enter the j component of the vector"<<std::endl;
    std::cin>>j_comp;
    std::cout<<"Enter the k component of the vector"<<std::endl;
    std::cin>>k_comp;
}
void vector::show_vector()
{
    if(j_comp>=0;k_comp>=0)
    {
        std::cout<<i_comp<<"i + "<<j_comp<<"j + "<<k_comp<<"k"<<std::endl; 
    }
    else
    {
        if(j_comp<0;k_comp<0)
        {
            std::cout<<i_comp<<"i "<<j_comp<<"j "<<k_comp<<"k"<<std::endl;
        }
        else if(j_comp<0)
        {
            std::cout<<i_comp<<"i "<<j_comp<<"j + "<<k_comp<<"k"<<std::endl;
        }
        else
        {
            std::cout<<i_comp<<"i + "<<j_comp<<"j "<<k_comp<<"k +"<<std::endl;
        }
    }
}
void vector::v_magnitude()
{
    mag=sqrt((i_comp*i_comp)+(j_comp*j_comp)+(k_comp*k_comp));
    std::cout<<"The magnitude of the vector is= "<<mag<<std::endl;
}
void vector::operator ==(const vector &V)
{
    if(mag==V.mag)
    {
        std::cout<<"The vectors are equal"<<std::endl;
    }
    else
    {
        std::cout<<"The vectors are not equal"<<std::endl;
    }
}
void vector::operator !=(const vector &V)
{
    if(mag!=V.mag)
    {
        std::cout<<"The vectors are not equal"<<std::endl;
    }
    else
    {
        std::cout<<"The vectors are equal"<<std::endl;        
    }
}
void vector::operator <(const vector &V)
{
    if(mag<V.mag)
    {
        std::cout<<"Vector 2 is greater"<<std::endl;   
    }
    else
    {
        std::cout<<"Vector 1 is greater"<<std::endl;
    }
}
void vector::operator <=(const vector &V)
{
    if(mag<V.mag)
    {
        std::cout<<"Vector 2 is greater"<<std::endl;   
    }
    else if(mag==V.mag)
    {
        std::cout<<"The vectors are equal"<<std::endl;
    }
    else
    {
        std::cout<<"Vector 1 is greater"<<std::endl;
    }
}
void vector::operator >(const vector &V)
{
    if(mag>V.mag)
    {
        std::cout<<"Vector 1 is greater"<<std::endl;   
    }
    else
    {
        std::cout<<"Vector 2 is greater"<<std::endl;
    }
}
void vector::operator >=(const vector &V)
{
    if(mag>V.mag)
    {
        std::cout<<"Vector 1 is greater"<<std::endl;   
    }
    else if(mag==V.mag)
    {
        std::cout<<"The vectors are equal"<<std::endl;
    }
    else
    {
        std::cout<<"Vector 2 is greater"<<std::endl;
    }
}

int main()
{
    vector A,B;
    int choice1,choice2;
    std::cout<<"The vector 1:"<<std::endl;
    A.get_vector();
    std::cout<<"The vector 2:"<<std::endl;
    B.get_vector();
    std::cout<<"The first vector is: "<<std::endl;
    A.show_vector();
    std::cout<<"The second vector is: "<<std::endl;
    B.show_vector();
    std::cout<<"The magnitude of the first vector is: "<<std::endl;
    A.v_magnitude();
   std::cout<<"The magnitude of the second vector is: "<<std::endl;
    B.v_magnitude();
    do
    {
        std::cout<<"***Pick The Required Operation*** \n1.Vector 1=Vector 2 \n2.Vector 1!=Vector 2 \n3.Vector 1<Vector 2 \n4.Vector 1<=Vector 2 \n5.Vector 1>Vector 2 \n6.Vector 1>=Vector 2 "<<std::endl;
        std::cin>>choice1;
        switch(choice1)
        {
            case 1:
                A==B;
                break;
            case 2:
                A!=B;
                break;
            case 3:
                A<B;
                break;
            case 4:
                A<=B;
                break;
            case 5:
                A>B;
                break;
            case 6:
                A>=B;
                break;
        }
        std::cout<<"Do you want to continue?\n1.Continue\n2.Exit"<<std::endl;
        std::cin>>choice2;
    }while(choice2==1);
    if(choice2==2)
    {
        std::cout<<"***You Have Exited***"<<std::endl;
    }
    return(0);
}