#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >> n;
   string s;
   cin.ignore();
   int maxx,d;
   while(n>0)
   {

       getline(cin, s);
       int b[200];
       maxx=0;
       for(int i=0; i<150; i++) b[i]=0;
       for(int i=0; i<s.length(); i++)
       {
           if(s[i]>='A' && s[i]<='Z'){
                int x= s[i]-0;
                b[x]++;
                maxx = max(b[x],maxx);
           }
       }

       int dem=0;
       char a;
       for(int i=0; i<150; i++)
       {
           if(b[i]==maxx){
                dem++;
                a=i+0;
           }
           if(dem>1) break;
       }
       if(dem!=1) cout << "NOT POSSIBLE" << endl;
       else
       {
            if(a>='E' && a<='Z'){
                d= a- 'E';
            }
            else if(a<'E' && a>='A'){
                d= 5- ('E'-a) +21;
            }
            cout << d << " ";

            for(int i=0; i<s.length(); i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    int mahoa=s[i]-d;
                    if(mahoa >= 65){
                        char c = mahoa;
                        cout << c;
                    }
                    else{
                        mahoa = 65-mahoa;
                        char c= 91-mahoa;
                        cout << c;
                    }
                }
                else cout << " ";
            }
       }
       cout << endl;
       n--;
   }
}
