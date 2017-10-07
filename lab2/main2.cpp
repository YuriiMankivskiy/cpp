#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
float q, e, t, y,z,x,c,v,b,n;
double w, r,a;
a = 15E6;
q = 0.0000007;
w = 180000000;
e = 0.0000187;
r = pow(5,10) - 18;
t = 0.1 * 10 - 10;
y = 1.0004 * 10 + 18;

z = 0.1E+6;
x = 1.87E-18;
c = 17E+3;
v = 0.14E-8;
b = 11E+4; 
n = 3E-14;

printf( "1. %.1e \n",q );
printf( "2. %e \n",w );
printf( "3. %e \n",e );
printf( "4. %e \n",r );
printf( "5. %f \n",t );
printf( "6. %.3e \n",y );

printf( "7. %f \n",a );
printf( "7. %g \n",z );
printf( "8. %1.20f \n",x );
printf( "9. %g \n",c );
printf( "10. %1.10g \n",v );
printf( "11. %g \n",b );
printf( "12. %1.14g",n );

	return 0;
}	
