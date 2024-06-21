#include<iostream>
using namespace std;
int main()
{
int n; // n representa un numero
cout<<"Ingrese un numero: "; cin>>n;
cout<<"los primeros "<<n<<" multiplos de 7 son: ";
int m=1; // m representa un valor que ira creciento para multiplicar por 7
while(n>0)
{
cout<<7*m<<" ";
m++;
n--;
}
return 0;
}
