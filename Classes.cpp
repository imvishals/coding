#include<iostream>
using namespace std;
class sample
{
private:
    char a;
    int x;
    float y;
protected:
    int z;
public:
    sample()
    {
        a='#';
        x=0;
        y=0.0;
    }
    void getinput()
    {
        cin>>a>>x>>y;
    }
    void display()
    {
        cout<<a<<" "<<x<<" "<<y;
        z=2*x;
    }
};
class sample1: public sample
{
public:

    void dispvar()
    {
        cout<<"\nProtected Variable:"<<z;
    }
};
int main()
{
    sample A;
    sample1 B;
    B.getinput();
    B.display();
    B.dispvar();
}

