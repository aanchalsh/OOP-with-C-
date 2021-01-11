#include<iostream>
using namespace std;
class Shape
{
    public: double a,b;
        void get_data ()
        {
            cin>>a>>b;
        }
        virtual void display_area () = 0;
};
 
class Triangle:public Shape
{
    public: void display_area ()
    {
        cout<<"Area of triangle is	:	"<<0.5*a*b<<endl;
    }
};
 
class Rectangle:public Shape
{
    public: void display_area ()
    {
        cout<<"Area of rectangle is :		"<<a*b<<endl;
    }
};
 
int main()
{   
    Triangle t;
    Shape *st = &t;
    cout<<"\nTRIANGLE DATA\n"<<endl;
    cout<<"Enter base and altitude	:	";
    st->get_data();
    st->display_area();
    cout<<"\nRECTANGLE DATA\n"<<endl;
    Rectangle r;
    Shape *sr = &r;
    cout<<"Enter length and breadth:	";
    sr->get_data();
    sr->display_area();
    return 0;   
}
