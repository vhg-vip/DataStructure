#include<iostream>
#include<stack>

using namespace std;

int main(){
    int a[10000];
    int dem=0;
    while(1){
        string s;
        cin >> s;
        if(s == "push"){
            int x; cin >> x;
            a[dem]=x;
            dem++;
        }
        else if(s == "pop"){
            dem--;
        }
        else if(s == "show"){
            if(dem<=0) cout << "empty";
            else
                for(int i=0; i<dem; i++) cout << a[i] << " ";
            cout << endl;
        }
    }

}