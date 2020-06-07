#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
     cin.ignore();
    while (t--)
    {
       
        string s;
        getline(cin, s);
        stack<char> st;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == ' '){
                while (!st.empty()){
                    cout << st.top();
                    st.pop();
                }
                cout << " ";
            }
            else{
                st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}