//This Program is prepared by 23CS069 MEGH PATEL

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<string>
using namespace std;

struct employee
{   
    private:
    long mobile_no;
    int no_of_employee,id;
    string name,qualification;
    float experience;

    public:
    void getdata()
    {
            cout<<"Enter an employee id:";
            cin>>id;
            if(id<1000)
            {
                cout<<endl<<"****************************************"<<endl<<endl<<"ERROR:ENTERED EMPLOYEE ID DOES NOT EXIST"<<endl<<endl<<"****************************************"<<endl;
                exit(0);
            }
            cout<<endl<<"----------------------------------------"<<endl<<endl;

            cout<<"Employee name\t:";
            cin.ignore();
            getline(cin,name);

            cout<<"Qualification\t:";
            cin.ignore();
            getline(cin,qualification);
            
            cout<<"Experince\t:";
            cin>>experience;

            cout<<"Contact number\t:";
            cin>>mobile_no;
            
            cout<<endl<<"-----------------------------------------"<<endl<<endl;
            
            
    }
};

int main()
{
    string *choice= new string;
    employee *e=new employee();
    e->getdata();

    cout<<"Press Y to get another employee detail,press N to exit:";
    cin.clear();
    cin>>*choice;

    delete e;

    if(*choice=="Y")
    {   
        delete choice;
        cout<<endl;
        main();
    }
    else
    return 0;
}