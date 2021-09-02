#include<bits/stdc++.h>
using namespace std;

class student{ 
string name;
int age;
bool gender;
public:



void setName(string s)
{
    name=s;
}

void printName()
{
    cout<<"Name = "<<name<<endl;
}

void printInfo()
{
    cout<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"Gender = "<<gender<<endl;
}

void setter(string s,int ag,int g)
{
    name=s;
    age=ag;
    gender=g;
}

void getter()
{
    cout<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"Gender = "<<gender<<endl;
}


};





int main()
{
    student a;
  //  a.name="riyan";
//we cannot access the private datamembers of the class in main function 
//to acces themm we use setter 
//to print them we use getter

string s;
getline(cin,s);
int ag;
cin>>ag;
bool g;
cin>>g;

//a.setName(s);
//a.printName();

a.setter(s,ag,g);
a.getter(); //this is to print all the values.




    return 0;
}

