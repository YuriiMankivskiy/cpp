#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** ) {
int a, b, c, d, v;
cout<<"Mankivskiy Yurii\n";
setlocale(LC_ALL, "Russian");
cout<<"Эй, Сова,\nГляди веселее. Льется\nВесенний дождь\n";
cout<< "x1x2-x2x3-x3x2 \n"; 
cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;
cout<<"c= ";
cin>>c;
cout<<"d= ";
cin>>d;
v = (a - d * (c / a - d) / a + d) - (5 / pow(c,2));
cout<<"v= "<<v;
return 0;
}
