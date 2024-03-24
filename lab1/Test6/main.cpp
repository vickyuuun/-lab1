#include <iostream>
#include <windows.h>
using namespace std;

const int n = 64;


int main()
{
    long long head, tail , freq ;
    int i=0;
    int s=0;
    int m=0;
    int* a=new int[n];
    int sum=0;
    for(i=0;i<n;i++){
        cin>>s;
        a[i]=s;
    }
    QueryPerformanceFrequency((LARGE_INTEGER *)&freq );
    QueryPerformanceCounter((LARGE_INTEGER *)&head);


   for (m = n; m > 1; m /= 2)
     for (i = 0; i < m / 2; i++)
        a[i ] = a[i*2] + a[i *2 + 1];

    sum=a[0];
    QueryPerformanceCounter((LARGE_INTEGER *)&tail );
    cout<<sum<<" "<<endl;

    cout << (tail-head) * 1000.0 / freq<<"ms";
    return 0;
}
