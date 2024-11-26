#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mat[5][5];
    int xp,yp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                xp=i+1;
                yp=j+1;
            }
        }
    }
    int result = abs(3-xp)+abs(3-yp);
    cout<<result<<endl;
}