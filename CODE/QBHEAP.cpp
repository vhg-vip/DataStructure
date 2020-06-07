#include<bits/stdc++.h>

using namespace std;

priority_queue <int> heap;
int a[100000];

int main()
{
    string s;
    getline(cin, s);
    while(s!="")
    {
        char c=s[0];
        if(c=='+'){
            long x;
            s.erase(0,1);
            x= atoi(s.c_str());
            if(heap.size()<15000)
            heap.push(x);
        }
        else if(!heap.empty()){
            int a=heap.top();
            while(!heap.empty() && heap.top()==a) heap.pop();
        }
        getline(cin, s);
    }
    int k=0;
    while(!heap.empty()){
        a[k] = heap.top();
        while(a[k]==heap.top() && !heap.empty()) heap.pop();
        k++;
    }
    cout << k << endl;
    for(int i=0; i<k; i++) cout << a[i] << endl;
}
