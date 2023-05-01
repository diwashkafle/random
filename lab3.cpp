//Lab 3: Implement Chinese Remainder Theorem
#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int extendedEuclidean(int a, int b)
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
    return old_s;
}
int main()
{
    int M[10], m[10], a[10], y[10], n, i;
    int mo = 1;
    int x = 0;
    cout<<"n? ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter a"<<i<<" : ";
        cin>>a[i];
        cout<<"Enter m"<<i<<" : ";
        cin>>m[i];
        mo = mo*m[i];
    }
    //Compute M
    for(i=1;i<=n;i++)
        M[i] = mo/m[i];
    //Compute y
    for(i=1;i<=n;i++)
        y[i] = extendedEuclidean(M[i],m[i]);
    for(i=1;i<=n;i++)
        x = x + a[i]*M[i]*y[i];
    cout<<"Solution is hahaha"<<x<<endl;
    return 0;
}
