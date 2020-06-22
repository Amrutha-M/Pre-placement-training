//C++ program to overload &gt operator


#include<iostream>
using namespace std;
 
class Big
{
    private:
        int n;
         
    public:
        void setNum(int x)
        {
            n=x;
        }
       
        int dispNum(void)
        {
            return n;
        }
       
        Big operator >(Big &obj)
        {
            return ((this->n > obj.n)? *this : obj);
        }
};
int main()
{
    Big n1,n2,Gr;
    int i,t;
    long a,b;
    cout<<"Enter the Number of Test Cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter Values for a and b : "<<endl;
        cin>>a>>b;
       
        n1.setNum(a);
        n2.setNum(b);
       
        Gr=n1>n2;
        cout << "Big of Two Number is : " << Gr.dispNum()<<endl<<endl;
    }
    return 0;
}