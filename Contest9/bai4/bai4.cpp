#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector <int> a[1000];
    int b[100][100];
    for(int i=1; i<=n; i++){
        string s;
        getline(cin, s);
        int tmp = 0;
        for(int j=0; j<=s.length(); j++){
            if(s[j] == ' ' || j == s.length()){
                a[i].push_back(tmp);
                tmp=0;
            }
            else{
                tmp = tmp*10+s[j]-'0';
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<a[i].size(); j++){
            if(a[i][j]>i){
                cout << i << " " << a[i][j] << endl;
            }
        }
    }
}