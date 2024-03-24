#include <iostream>
#include <windows.h>
using namespace std;

const int n = 64;


int main()
{
    long long head, tail , freq ;
    int i=0;
    int s=0;
    int* a=new int[n];
    int sum=0;
    int sum1=0;
    int sum2=0;
    for(i=0;i<n;i++){
        cin>>s;
        a[i]=s;
    }
    QueryPerformanceFrequency((LARGE_INTEGER *)&freq );
    QueryPerformanceCounter((LARGE_INTEGER *)&head);

    for (i=0;i < n; i += 2) {
        sum1 += a[i];
        sum2 += a[i + 1];
         }
    sum = sum1 + sum2;
   

    QueryPerformanceCounter((LARGE_INTEGER *)&tail );
    cout<<sum<<" "<<endl;

    cout << (tail-head) * 1000.0 / freq<<"ms";
    return 0;
}
