#include<bits/stdc++.h>

using namespace std;

int64_t m=1000000007;

int dequy(int64_t a, int64_t b)
{
    int64_t k;
    if(b==0) return 1;
    if(b%2==0){
        k=dequy(a,b/2);
        return (k*k)%m;
    }
    else{
        k=dequy(a,b-1);
        return (k*a)%m;
    }
}

int main()
{
    int64_t a,b;
    while(1)
    {
        cin >> a >> b;
        if(a==0 && b==0) break;
        else{
            cout << dequy(a,b) << endl;
        }
    }
    return 0;
}
