#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i]= a[i]- 'A' + 'a';
    }
    int b[150];
    for(int i=0; i<123; i++) b[i]=0;
    for(int i=0; i<n; i++)
    {
        int s=a[i];
        if(s>=97 && s<=122) b[s]++;
    }
    int kt=1;
    for(int i=97; i<123; i++){
        if(b[i]==0){
            kt=0;
            break;
        }
    }

    if(kt==1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
