#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin >> n;
        if(n==0) break;
        else
        {
            int a[10000];
            for(int i=0; i<6*n; i++) cin >> a[i];
            int dem=1;
            for(int i=0; i<6*n; i++)
            {
                if(dem==a[i]){
                    dem++;
                    i=0;
                }
            }
            if(dem==50) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}
