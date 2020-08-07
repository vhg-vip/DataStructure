#include<iostream>
#include<queue>

using namespace std;

bool check(int n){
    bool chuaxet[6] = {true};
    bool t = true;
    for(int i=0; i<6; i++) chuaxet[i] = true;
    while(n>0){
        int k = n%10;
        if(chuaxet[k]==true) chuaxet[k] = false;
        else t = false;
        n = n/10;
    }
    if(t == true) return true;
    else return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        queue<int> q;
        int dem=0;
        // q.push(0);
        for(int i=0; i<=5; i++) q.push(i);
        while(1){
            int k = q.front();
            q.pop();
            if(k>=l && k<=r && check(k)==true){
                dem++;
                // cout << k << " ";
            } 
            else if(k>r) break;
            for(int i=0; i<=5; i++){
                if(k>0)
                q.push(k*10+i);
            }
        }
        cout << dem << endl;
    }
}