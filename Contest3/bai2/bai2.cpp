#include<iostream>

using namespace std;

long findmax(long n){
    int x=1;
    int max=0;
    while(n>0){
        int k=n%10;
        if(k==5) k=6;
        max += k*x;
        x*=10;
        n/=10;
    }
    return max;
}

long findmin(long n){
    int x=1;
    int min=0;
    while(n>0){
        int k=n%10;
        if(k==6) k=5;
        min += k*x;
        x*=10;
        n/=10;
    }
    return min;
}

int main(){
    long a,b;
    cin >> a >> b;
    cout << findmin(a)+findmin(b) << " " << findmax(a)+findmax(b);
    
}