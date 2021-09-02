#include<bits/stdc++.h>
using namespace std;

class student 
{
    public:
string name;
int age;
bool gender;

student()
{
    cout<<"default constructor is called !"<<endl;
}


student(string s,int a,int g)   ///this is called as the parameterised constructor.
{
    cout<<"\n I am being called automatically as soon as the object is created !"<<endl;
name=s;
age=a;
gender=g;
}

void printInfo()
{
    cout<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"Gender = "<<gender<<endl;
}

student(student &a) //This is our own defined copy constructor (not shallow copy ) deep copy
{
name=a.name;
age=a.age;
gender=a.gender;
}

// bool operator == (student &a)
// {
//     if(name==a.name && age==a.age && gender=a.gender)
    // return true;
// }

~student()
{
    cout<<name<<endl;
    cout<<"I am destroyer and will be destroying the objectes after the return 0!"<<endl;

}


};





int main()
{
    string s="riyan";
   student a(s,24,1);

   a.printInfo();
   student b();
   student c=a;//copy constuctor (student c(a);)
    
    c.printInfo();

/// operator overloading 
if(c==a)
{
    cout<<"same objects!"<<endl;
}
else{
    cout<<"different objects!"<<endl;
}





    return 0;
}