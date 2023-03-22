#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,s;
    float area;
    cout<<"Enter a value: ";
    cin>>a;
    cout<<"Enter b value: ";
    cin>>b;
    cout<<"Enter c value: ";
    cin>>c;

    s=(a+b+c)/2;
    cout<<"The area of sides of triangle is: "<<s<<endl;

    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of triangle is: "<<area;

    return 0;
}
