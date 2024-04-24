//This Program is prepared by 23CS069 MEGH PATEL

#include<iostream>
using namespace std;
const float PI=3.14;
float area(float r)
{
    return PI*r*r;
}
float area(int a,int b)
{
    return a*b;
}
float area(int a,int b,int c)
{
    return a*b*c;
}
int main()
{
    float radius,height,width,length;
    int choice;
    cout<<"Here we have the following options for area"<<endl<<"[1]Circle"<<endl<<"[2]Rectangle"<<endl<<"[3]Cuboid"<<endl<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"Enter the radius of the circle:";
            cin>>radius;
            float ans=area(radius);
            cout<<endl<<"Area:"<<ans;
            break;
        }
        case 2:
        {
            cout<<"Enter the length:";
            cin>>length;
            cout<<"Enter the breadth";
            cin>>width;

            float ans=area(length,width);
            cout<<endl<<"Area:"<<ans;
            break;
        }
        case 3:
        {
            cout<<"Enter the length:";
            cin>>length;
            cout<<"Enter the breadth";
            cin>>width;
            cout<<"Enter the height";
            cin>>height;
            float ans=area(length,width,height);
            cout<<endl<<"Area:"<<ans;
            break;
        }
        default:
        {
            cout<<"Please enter a valid value";
            exit(0);
        }
    }


}
