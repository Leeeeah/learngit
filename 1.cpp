#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
const int maxn=101;
int a[maxn][maxn]={0};
int b[maxn][maxn]={0};

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int row;
        cin>>row;
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=i;j++)
            {
                b[i][j]=max(b[i-1][j-1],b[i-1][j])+a[i][j];
            }
        }
        // for(int i=1;i<=row;i++)
        // {
        //     for(int j=1;j<=i;j++)
        //     {
        //         cout<<b[i][j]<<' ';
        //     }
        //     cout<<endl;
        // }
        int maxi=b[row][1];
        for(int i=1;i<=row;i++)
        {
            if(b[row][i]>maxi)
            {
                maxi=b[row][i];
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}