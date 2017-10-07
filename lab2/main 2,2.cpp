#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
double z,s,x,y,q,w,e;
int a,b,c;
float m;

x = 3.265;
y = 0.333;
z = 0.447 * pow(10,-4);
q = pow(2,(y,x)) + pow(3,x*y);
w = fabs(x) + (1 / (pow(y,2) + 1));
e = y * (atan(z) - 1/3 );
s = q - (w/e);
printf("s =%f \n",s);

cout<<"a =";
cin>>a;
cout<<"b =";
cin>>b;
cout<<"c =";
cin>>c;

b = b + c;
c = b - c;
b = b - c;
cout<<a<<"|";
cout<<b<<"|";
cout<<c<<"| \n";

cout<<"m= ";
cin>>m;
if ((m>0) && (m<360)) printf("m= %f",m/180);
else printf("pomulka");






return 0;
}	
