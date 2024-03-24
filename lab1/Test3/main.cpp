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
    for(i=0;i<n;i++){
        cin>>s;
        a[i]=s;
    }
    QueryPerformanceFrequency((LARGE_INTEGER *)&freq );
    QueryPerformanceCounter((LARGE_INTEGER *)&head);

    for (i = 0; i < n; i++)
        sum += a[i];

    QueryPerformanceCounter((LARGE_INTEGER *)&tail );
    cout<<sum<<" "<<endl;

    cout << (tail-head) * 1000.0 / freq<<"ms";
    return 0;
}
