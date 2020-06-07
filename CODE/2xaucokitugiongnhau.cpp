#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test=1;
    while(1)
    {
        string a,b;
        cin >> a >> b;
        if(a=="END" && b=="END") break;
        else
        {
            int n,m;
            n=a.length();
            m=b.length();
            if(n!=m) cout << "Case " << test << ": different" << endl;
            else
            {
                for(int i=0; i<n; i++){
                    for(int j=0; j<n; j++){
                        if(a[j]>a[i]) swap(a[j],a[i]);
                    }
                }
                for(int i=0; i<m; i++){
                    for(int j=0; j<m; j++){
                        if(b[j]>b[i]) swap(b[j],b[i]);
                    }
                }

                int kt=1;
                for(int i=0; i<n; i++)
                {
                    if(a[i]!=b[i]){
                        kt=0;
                        break;
                    }
                }
                if(kt==0) cout << "Case " << test << ": different" << endl;
                else cout << "Case " << test << ": same" << endl;
            }
        }
        test++;
    }
}
