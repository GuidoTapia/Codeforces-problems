#include <iostream>
#include <vector>
#include <math.h>
#define PI 3.141592653589793238462643383279502884
using namespace std;
long double gcd(long double a, long double b){
  if(a<b)
    swap(a,b);
  while(b>0.00001){
    int aux=a/b;
    long double c=a;
    a=b;
    b=c-a*aux;
  }
  return a;
}
long double gcd2(long double a, long double b){
  if(a<b)
      swap(a,b);
  while(b>0.00001){
    a-=b;
    if(a<b)
      swap(a,b);
  }
  return a;
}

int main() {
  long double x[3];
  long double y[3];
  cin.precision(10);
  cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2];
  long double A=x[0]*(y[1]-y[2])-y[0]*(x[1]-x[2])+x[1]*y[2]-x[2]*y[1];
  long double aux1=x[0]*x[0]+y[0]*y[0];
  long double aux2=x[1]*x[1]+y[1]*y[1];
  long double aux3=x[2]*x[2]+y[2]*y[2];
  long double B=aux1*(y[2]-y[1])+aux2*(y[0]-y[2])+aux3*(y[1]-y[0]);
  long double C=aux1*(x[1]-x[2])+aux2*(x[2]-x[0])+aux3*(x[0]-x[1]);
  long double h=-B/(2.0*A);
  long double k=-C/(2.0*A);
  //cout<<h<<' '<<k;
  long double ang[3];
  aux1=h-x[0];
  aux2=k-y[0];
  aux3=h-x[1];
  long double aux4=k-y[1];
  ang[0]=acos((aux1*aux3+aux2*aux4)/(sqrt(aux1*aux1+aux2*aux2)*sqrt(aux3*aux3+aux4*aux4)));
  aux1=h-x[1];
  aux2=k-y[1];
  aux3=h-x[2];
  aux4=k-y[2];
  ang[1]=acos((aux1*aux3+aux2*aux4)/(sqrt(aux1*aux1+aux2*aux2)*sqrt(aux3*aux3+aux4*aux4)));
  aux1=h-x[2];
  aux2=k-y[2];
  aux3=h-x[0];
  aux4=k-y[0];
  ang[2]=acos((aux1*aux3+aux2*aux4)/(sqrt(aux1*aux1+aux2*aux2)*sqrt(aux3*aux3+aux4*aux4)));
  if(isnan(ang[0]))
    ang[0]=PI;
  if(isnan(ang[1]))
    ang[1]=PI;
  if(isnan(ang[2]))
    ang[2]=PI;
  long double angulo=gcd2(gcd2(ang[0],ang[2]),gcd2(2*PI-ang[1],ang[1]));
  cout.precision(10);
  //cout<<ang[0]<<ang[1]<<ang[2]<<endl<<angulo<<endl<<(2*PI/angulo)<<endl
  cout<<(2*PI/angulo)*(aux1*aux1+aux2*aux2)*sin(angulo)/2;
}