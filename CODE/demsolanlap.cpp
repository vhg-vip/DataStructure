#include<bits/stdc++.h>

using namespace std;

int n;
int a[30];

void doi()
{
    int k=a[0];
    for(int i=0; i<n-1; i++)
    {
        a[i]= abs(a[i]-a[i+1]);
    }
    a[n-1]= abs(a[n-1]-k);
}

int main()
{
    int dem=0,cas=1;
    while(1)
    {
        cin >> n;
        if(n==0) break;
        else
        {
            for(int i=0; i<n; i++) cin >> a[i];
            int kt=1;
            for(int i=0; i<n; i++)
            {
                if(a[i]!=a[0]){
                    kt=0;
                    break;
                }
            }
            if(kt==0)
            {
                int kt1=0;
                for(int i=0; i<1000; i++)
                {
                    dem=i+1;
                    doi();
                    int kt2=1;
                    for(int i=0; i<n; i++)
                    {
                        if(a[i]!=a[0]){
                            kt2=0;
                            break;
                        }
                    }
                    if(kt2==1)
                    {
                        kt1=1;
                        break;
                    }
                }
                if(kt1==0) cout << "Case " << cas << ": not attained" << endl;
                else cout << "Case " << cas << ": "<< dem << " iterations" << endl;
            }

            else cout << "Case " << cas << ": 0 iterations" << endl;
            cas++;
        }
    }
}
