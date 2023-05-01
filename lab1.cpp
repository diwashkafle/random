//Lab 1: Implementation of Euclidean Algorithm
#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int gcd(int a, int b)
{
    int r;
    if (a<b)
        swap(&a, &b);
    if (b == 0)
        return a;
    else
    {
        while(b != 0)
        {
            r = a%b;
            a = b;
            b = r;
        }
        return a;
    }
}
int main()
{
    int a, b;
    cout<<"Enter a and b ";
    cin>>a>>b;
    cout<<"Greatest common divisor is "<<gcd(a,b)<<endl;
    return 0;
}