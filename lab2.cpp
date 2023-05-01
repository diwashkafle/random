//Lab 2: Implementation of Extended Euclidean Algorithm
#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void extendedEuclidean(int a, int b)
{
   int old_s, s, old_t, t, quotient, old_r, r, p;
   old_r =a;
   r = b;
   if (old_r < r)
    swap(&old_r, &r);
   old_s = 1;
   s  = 0;
   old_t = 0;
   t = 1;
   while(r!=0)
    {
        quotient = old_r/r;
        //Computing s
        p = old_s - quotient*s;
        old_s = s;
        s = p;
        //Computing t
        p = old_t - quotient*t;
        old_t = t;
        t = p;
        //Computing r
        p = old_r - quotient*r;
        old_r = r;
        r = p;
    }
    if (a<b)
        swap(&old_s, &old_t);
    cout<<"GCD is "<<old_r<<endl;
    cout<<"Value of s and t are "<<old_s<<","<<old_t<<endl;
    // cout<<"Value of t is "<<old_t<<endl;
}
int main()
{
    int a, b;
    cout<<"Enter a and b ";
    cin>>a>>b;
    extendedEuclidean(a,b);
    return 0;
}