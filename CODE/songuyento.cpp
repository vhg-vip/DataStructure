#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int nto(int n)
{
   if(n<2) return 0;
       else{
            for(int i=2; i<=sqrt(n); i++){
                if(n%i==0) return 0;
            }
            return 1;
       }
}

int main()
{
    int k;
    cin >> k;
    for(int t=0; t<k; t++)
    {
        int n;
        cin >> n;
        int k,dem=0;
        if(nto(n)==1) dem++;
        for(int i=2; i<=n/2; i++)
        {
            k=0;
            if(nto(i)==1){
                for(int j=i; j<=n; j++){
                    if(nto(j)==1){
                        k+=j;
                        if(k==n) dem++;
                        if(k>n) continue;
                    }
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}





