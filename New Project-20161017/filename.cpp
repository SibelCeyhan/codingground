#include <iostream>
#include <cmath>
using namespace std;

double b,c,degree,radians,a2;
const float PI = 3.142;
int main ()
{
cout<<"Bitte geben Sie Ihre Länge b & c ein "<<endl;
cin>>b>>c;
cout<<" Bitte geben Sie Ihren Winkel zwischen ihnen in Grad ein"<<endl;
cin>>radians;
radians= (degree*PI/180);
a2 = pow(b,2)+ pow(c,2) - (2*b*c*cos(radians));

cout<<"Ihre Antwort ist"<<a2<<endl;

return 0 ;
}