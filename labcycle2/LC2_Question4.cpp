#include<iostream>
class matrix
{
    private:
        int **p;
        int rows,coloumns;
    public:
        matrix(){}
        matrix(int r, int c)
        {
            rows=r;
            coloumns=c;
            p=new int*[rows];
            for(int i=0;i<rows;i++)
            {
                p[i]=new int[coloumns];
            }
        }
        void recieve_order()
        {
            std::cout<<"Enter the rows and coloumns of the matrix: "<<std::endl;
            std::cin>>rows>>coloumns;
        }
        void alloc_matrix();
        void get_matrix();
        void display_matrix();
        void operator +(const matrix&);
        void operator *(const matrix&);
};
void matrix::alloc_matrix()
{
    p = new int *[rows];
	for (int i = 0; i < rows; ++i) 
    {
		p[i] = new int [coloumns];
	}
}
void matrix::get_matrix()
{
    std::cout<<"Enter the Values"<<std::endl;
	for (int i = 0; i < rows; ++i) 
    {
		std::cout<<"Row = "<<i+1<<std::endl;
		for (int j = 0; j < coloumns; ++j) 
        {
			std::cin>>p[i][j];
		}
	}
}
void matrix::display_matrix()
{
	std::cout<<"The Matrix is of order "<<rows<<"x"<<coloumns<<std::endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < coloumns; ++j)
        {
			std::cout<<p[i][j]<<"\t";
		}
		std::cout<<"\n";
	}
}
void matrix::operator +(const matrix&A)
{
    if(rows==A.rows and coloumns==A.coloumns)
    {
		matrix sum(rows,coloumns);
		for (int i = 0; i < rows; ++i) 
        {
			for (int j = 0; j < coloumns; ++j)
            {
				sum.p[i][j]=p[i][j]+A.p[i][j];
			}
		}
		sum.display_matrix();
    }
    else 
    {
        std::cout<<"***This Operation Is Not Possible***"<<std::endl;
    }
}
void matrix::operator *(const matrix&A)
{
    if (coloumns==A.rows) 
    {
		matrix product(rows,A.coloumns);
		for (int i = 0; i < rows; ++i) 
        {
			for (int j = 0; j < A.coloumns; ++j) 
            {
				int sum=0;
				for (int k = 0; k < coloumns; ++k) 
                {
					sum = p[i][k]*A.p[k][j]+sum;
					product.p[i][j] = sum;
				}
			}
		}
		product.display_matrix();
	} 
    else 
    {
		std::cout<<"***This Operation Is Not Possible***"<<std::endl;
	}
}
int main()
{
    int choice1,choice2;
    std::cout<<"Do You Want To Continue\n1.Start\n2.Quit"<<std::endl;
    std::cin>>choice1;
    if(choice1==1)
    {
        matrix M1,M2;
        std::cout<<"Matrix 1: "<<std::endl;
        M1.recieve_order();
        M1.alloc_matrix();
        M1.get_matrix();
        std::cout<<std::endl;
        std::cout<<"Matrix 2: "<<std::endl;
        M2.recieve_order();
        M2.alloc_matrix();
        M2.get_matrix();
        do
        {
            int option;
            std::cout<<"***Choose The Operation***\n1.Matrix Addition\n2.Matrix Multiplication"<<std::endl;
            std::cin>>option;
            switch(option)
            {
                case 1:
                    M1+M2;
                    break;
                case 2:
                    M1*M2;
                    break;
            }
            std::cout<<"\n1.Continue\n2.Quit"<<std::endl;
            std::cin>>choice2;
        } while (choice2==1);
    }
    else
    {
        std::cout<<"***EXITED***"<<std::endl;
        return(0);
    }
    return(0);
}