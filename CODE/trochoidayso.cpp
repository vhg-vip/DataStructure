#include<bits/stdc++.h>

using namespace std;

void doi(long long a[4])
{
    long long k=a[0];
    for(int i=0; i<3; i++){
        a[i]= abs(a[i]-a[i+1]);
    }
    a[3]= abs(a[3]-k);
}

int main()
{
    long long a[4];
    while(1)
    {
        for(int i=0; i<4; i++) cin >> a[i];
        if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0) break;
        else
        {
            int dem=0;
            while(1)
            {
                if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3]) break;
                else{
                    doi(a);
                    dem++;
                }
            }
            cout << dem << endl;
        }
    }
}
