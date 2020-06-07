#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,s;
    cin >> m >> s;
    int a[100],b[100], dem=0, k=0;
    if(m==1 && s==0) cout << "0 0" << endl;
    else if(s==0 || s>9*m) cout << "-1 -1" << endl;
    else
    {
        while(s>=0 && m>0)
        {
            if(s>=9){
                a[dem]= 9;
                dem++;
                s-=9;
                m--;
            }
            else if(s>0 && s<9){
                a[dem]= s;
                s-=s;
                dem++;
                m--;
            }
            else{
                a[dem]=0;
                m--;
                dem++;
            }
        }
        for(int i=dem-1; i>=0; i--)
        {
            b[k]=a[i];
            k++;
        }
        if(b[0]==0){
            b[0]=1;
            for(int i=1; i<k; i++){
                if(b[i]!=0){
                    b[i]=b[i]-1;
                    break;
                }
            }
        }
        for(int i=0; i<k; i++) cout << b[i];
        cout << " ";
        for(int i=0; i<dem; i++) cout << a[i];
    }
}

8 5 3
9 4 2
