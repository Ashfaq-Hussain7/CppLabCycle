#include<iostream>
class vector 
{
    private:
        float i_comp,j_comp,k_comp;
    public:
        float operator*(const vector&);
        friend std::istream & operator>>(std::istream&,vector&);
        friend std::ostream & operator<<(std::ostream&,vector&);
};
std::istream & operator>>(std::istream& in,vector& X)
{
    std::cout<<"Enter the i component of the vector"<<std::endl;
    std::cin>>X.i_comp;
    std::cout<<"Enter the j component of the vector"<<std::endl;
    std::cin>>X.j_comp;
    std::cout<<"Enter the k component of the vector"<<std::endl;
    std::cin>>X.k_comp;
    return(in);
}
std::ostream & operator<<(std::ostream& out,vector& X)
{
    if(X.j_comp>0;X.k_comp>0)
    {
        out<<X.i_comp<<"i + "<<X.j_comp<<"j + "<<X.k_comp<<"k"<<std::endl;
    }
    else
    {
        if(X.j_comp<0;X.k_comp<0)
        {
            out<<X.i_comp<<"i  "<<X.j_comp<<"j  "<<X.k_comp<<"k"<<std::endl;
        }
        else if(X.j_comp>0)
        {
            out<<X.i_comp<<"i  "<<X.j_comp<<"j + "<<X.k_comp<<"k"<<std::endl;
        }
        else
        {
            out<<X.i_comp<<"i + "<<X.j_comp<<"j  "<<X.k_comp<<"k"<<std::endl;
        }
    }
    return out;   
}
float vector:: operator*(const vector& A)
{
    float dot_product;
    dot_product=(i_comp*A.i_comp)+(j_comp*A.j_comp)+(k_comp*A.k_comp);
    return dot_product;
}
int main()
{
    vector V1,V2;
    float dot_product;
    std::cout<<"Vector 1: "<<std::endl;
    std::cin>>V1;
    std::cout<<"Vector 2: "<<std::endl;
    std::cin>>V2;
    std::cout<<"The first vector= "<<V1;
    std::cout<<"The second vector= "<<V2;
    dot_product=V1*V2;
    std::cout<<"The dot product of the two vectors: "<<dot_product<<std::endl;
    return(0); 
}