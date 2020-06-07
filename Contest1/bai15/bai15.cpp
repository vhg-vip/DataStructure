#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t ;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        char a[100];
        int n=s.length();
        for(int i=0; i<s.length(); i++){
            a[i]=s[i];
        }
        cout << k << " ";
        if(next_permutation(a, a+n)){
            for(int i=0; i<n; i++) cout << a[i];
        }
        else{
            cout << "BIGGEST";
        }
        cout << endl;
    }
    
}