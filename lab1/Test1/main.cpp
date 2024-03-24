#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int i,j;
    int s;
    int n=3;
    int *a=new int[n];
    int *sum=new int[n];
    int** b=new int*[n];
    for (i=0;i<n;i++){
        cin>>s;
        a[i]=s;
    }
    for(i=0;i<n;i++){
        b[i]=new int[n];
        for(j=0;j<n;j++){
            cin>>s;
            b[i][j]=s;
        }
    }


    long long head, tail , freq ;
    QueryPerformanceFrequency((LARGE_INTEGER *)&freq );
    QueryPerformanceCounter((LARGE_INTEGER *)&head);

    for(i = 0; i < n; i++){
          sum[i] = 0.0;
       for(j = 0; j < n; j++){
            sum[i] += b[j][i] * a[j ];
       }
        cout<<sum[i]<<" ";

    }
    cout<<endl;
    QueryPerformanceCounter((LARGE_INTEGER *)&tail );
    cout<<endl;
    cout << (tail-head) * 1000.0 / freq<<"ms" << endl ;


    return 0;
}

