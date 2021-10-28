#include <iostream>
using namespace std;
struct student
{
    int real;
    int imag;
};
struct student add(struct student s,struct student s1)
{
    struct student d;
        d.real=s.real+s1.real;
        d.imag=s.imag+s1.imag;
        return d;
}
struct student sub(struct student s,struct student s1)
{
    struct student d;
        d.real=s.real-s1.real;
        d.imag=s.imag-s1.imag;
        return d;
}
struct student mul(struct student s,struct student s1)
{
    struct student d;
        d.real=(s.real*s1.real)-(s.imag*s1.imag);
        d.imag=(s.real*s1.imag)+(s.imag*s1.real);
        return d;
}

int main()
{
    struct student st1={2,3};
    struct student st2={3,2};
    struct student addition=add(st1,st2);
    cout<<addition.real<<"+i"<<addition.imag<<endl;
    struct student subtraction=sub(st1,st2);
    cout<<subtraction.real<<"+i"<<subtraction.imag<<endl;
    struct student multiplication=mul(st1,st2);
    cout<<multiplication.real<<"+i"<<multiplication.imag<<endl;
}
