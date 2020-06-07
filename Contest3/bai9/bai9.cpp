#include<iostream>
#include<algorithm>

using namespace std;

struct job
{
    int jobID, deadline, profit;
};

bool cmp(job a, job b){
    if(a.profit > b.profit) return true;
    else return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        job a[1005];
        bool check[1005];
        int profits=0, dem=0;
        for(int i=0; i<n; i++){
            cin >> a[i].jobID >> a[i].deadline >> a[i].profit;
            check[i]=false;
        }
        sort(a, a+n, cmp);
        // for(int i=0; i<n; i++){
        //     cout << a[i].jobID << " " << a[i].deadline << " " << a[i].profit << endl;
        // }
        // cout <<endl;
        for(int i=0; i<n; i++){
            for(int j=a[i].deadline; j>0; j--){
                if(check[j]==false){
                    // cout << a[i].jobID << " " << a[i].deadline << " " << a[i].profit << endl;
                    check[j]=true;
                    profits+=a[i].profit;
                    dem++;
                    break;
                }
            }
        }

        cout << dem << " " << profits << endl;
    }
    return 0;
}