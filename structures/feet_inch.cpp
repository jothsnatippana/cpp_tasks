#include <iostream>
using namespace std;
struct distance 
{
    int feet;
    int inch;
};
struct distance add(struct distance d1,struct distance d2)
{
    struct distance d;
    d.feet=d1.feet+d2.feet;
    if((d1.inch+d2.inch)>=12)
    {
        d.feet+=((d1.inch+d2.inch)/12);
        d.inch=(d1.inch+d2.inch)-(((d1.inch+d2.inch)/12)*12);
    }
    else
      d.inch=d1.inch+d2.inch;
      return d;
}
int main(){
        struct distance d1={12,12};
        struct distance d2={12,12};
        struct distance d=add(d1,d2);
        cout<<d.feet<<" "<<d.inch;
}
