#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        int d = 0;
        int n = s.length()-1;
        while(k--){
            int tmp = s[n], index = n;
            for(int i=n; i>=d; i--){
                if(tmp <= s[i]){
                    tmp = s[i];
                    index = i;
                }
            }
            if(index>d){
                swap(s[d],s[index]);
            }
            d++;
        }
        cout << s << endl;
    }
}