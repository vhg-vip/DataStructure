#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string gray, bin = "";
        cin >> gray;
        bin += gray[0];
        for(int i=0; i<gray.length()-1; i++){
            if(bin[i] != gray[i+1]){
                bin += '1';
            }
            else bin += '0';
        }
        cout << bin << endl;
    }
    
}