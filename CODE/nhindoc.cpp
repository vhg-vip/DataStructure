#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,dem;
    cin >> n;
    while(n>0)
    {
        string a;
        cin >> a;
        int b[1000];
        int m=a.length();
        for(int i=0; i<m; i++) b[i]=a[i]-48;
        int x=10;
        for(int i=0; i<m; i++)
        {
            dem=0;
            if(x!=b[i]){
                x=b[i];
                for(int j=i; j<m; j++){
                    if(b[j]==x) dem++;
                    else break;
                }
                cout << dem << x;
            }
        }
        cout << endl;
        n--;
    }
}
