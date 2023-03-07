#include<iostream>
#include<cstring>
class strings
{
    private:
         char *strs;
         int length;
    public:
        strings()
        {
            length=0;
            strs=new char[length+1];
        }
        strings(const char *s)
        {
            length= strlen(s);
            strs=new char[length+1];
            strcpy(strs,s);
        }
        void display(void)
        {
            std::cout<<strs<<std::endl;
        }
        int get_length(void)
        {
            return length;
        }
        void concatenate(strings,strings);
};
void strings::concatenate(strings a, strings b)
{
    length=a.length+b.length;
    delete strs;
    strs=new char[length+1];
    strcpy(strs,a.strs);
    strcat(strs,b.strs);
}
int main()
{
    strings S1;
    strings name1("BEN");
    strings name2("SON");
    S1.concatenate(name1,name2);
    name1.display();
    name2.display();
    S1.display();
    return(0);
}