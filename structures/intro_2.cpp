#include <iostream>
using namespace std;
struct student 
{
    int rollno;
    string name;
    int marks;
    int age;
}s1[16];
int main()
{
    for(int i=1;i<=15;i++)
    {
        cin>>s1[i].rollno>>s1[i].name>>s1[i].marks>>s1[i].age;
    }
     for(int i=1;i<=15;i++)
    {
        cout<<s1[i].rollno<<s1[i].name<<s1[i].marks<<s1[i].age<<endl;
    }
  
}
