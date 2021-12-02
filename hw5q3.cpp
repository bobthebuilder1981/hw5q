#include<iostream>
#include<cmath>
using namespace std;
unsigned int dexp(unsigned int x, unsigned int y, unsigned int n)
{
unsigned int k;
long long int temp;
temp = pow(x, y);
k = temp % n;
return k;
}
int main()
{
unsigned int x, y, n;
unsigned int solution;
cout <<"Please enter the value of x in the formula(x^y%n): ";
cin >> x;
cout <<"Please enter the value of y in the formula(x^y%n): ";
cin >> y;
cout <<"Please enter the value of n in the formula(x^y%n): ";
cin >> n;
solution = dexp(x, y, n);
cout <<"(x^y%n) = " << solution << endl;
return 0;
}
