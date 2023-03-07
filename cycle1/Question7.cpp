#include<iostream>
class matrix
{
    private:
        int **p;
        int r,c;
    public:
        matrix(){}
        matrix(int, int);
        void get_element(int i, int j, int value)
        {
            p[i][j]=value;        
        }
        int put_element(int i, int j)
        {
            return p[i][j];
        }
        void recieve(void);
        void show(void);
        void matrix_add(matrix , matrix);
        void matrix_mult(matrix , matrix);
        void matrix_transpose(matrix);
        void matrix_trace(matrix);
};
matrix::matrix(int a, int b)
{
    r=a;
    c=b;
    p=new int*[r];
    for(int i=0;i<r;i++)
    {
        p[i]=new int[c];
    }
} 
void matrix::recieve()
{
    int value;
    std::cout<<"Enter the elements of the matrix: "<<std::endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            std::cin>>value;
            get_element(i,j,value);
        }
    }
}
void matrix::matrix_add(matrix m1, matrix m2)
{
    matrix m3(m1.r,m1.c);
    if(m1.r==m2.r and m1.c==m2.c)
    {
        for(int i=0;i<m3.r;i++)
        {
            for(int j=0;j<m3.c;j++)
            {
                m3.p[i][j]=m1.p[i][j]+m2.p[i][j];
            }
        }
        std::cout<<"The sum of two matrix: "<<std::endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                std::cout<<m3.p[i][j]<<"\t";
            }
            std::cout<<std::endl;
        }
    }
    else
    {
        std::cout<<"***INVALID-Cannot Add, Check the Dimensions*** \n";
    }
}
void matrix::matrix_mult(matrix m1, matrix m2)
{
    matrix m3(m1.r,m2.c);
    if(m1.c==m2.r)
    {
        for(int i=0;i<m3.r;i++)
        {       
            for(int j=0;j<m3.c;j++)
            {
                int value=0;
                for(int k=0;k<m2.r;k++)
                {
                    
                    value+=m1.p[i][k]*m2.p[k][j];
                    m3.p[i][j]=value;
    
                }
            }
        }
        std::cout<<"The product of two matrix: \n";
        for(int i=0;i<m3.r;i++)
        {
            for(int j=0;j<m3.c;j++)
            {
                std::cout<<m3.p[i][j]<<"\t";
            }
            std::cout<<std::endl;
        }

    }
    else
    {
        std::cout<<"***INVALID-Cannot Multiply,Check the Dimensions***"<<std::endl;
    }
}
void matrix::matrix_transpose(matrix m1)
{
   matrix m2(m1.c,m1.r);
    for(int i=0;i<m1.r;i++)
    {
        for(int j=0;j<m1.c;j++)
        {
            m2.p[i][j]=m1.p[j][i];
        }
    }
    std::cout<<"The transpose of the matrix : "<<std::endl;
    for(int j=0;j<m2.r;j++)
    {
        for(int i=0;i<m2.c;i++)
        {
            std::cout<<m2.p[j][i]<<"\t";
        }
        std::cout<<std::endl;
    }
}
int main()
{
    matrix x(2,2);
    matrix y(2,2);
    matrix z,w,h; 
    x.recieve();
    y.recieve();
    x.matrix_add(x,y);
    w.matrix_mult(x,y);
    h.matrix_transpose(y);
    return(0); 
}