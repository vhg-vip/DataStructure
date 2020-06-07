#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a,b,c,d,p,m,g;
    cin >> a >> b >> c >> d >> p >> m >> g;
    int p1=p,m1=m,g1=g;
    int dem1=0,dem2=0,dem3=0;
    while(p>a+b)
    {
        p-=(a+b);
    }
    if(p>0 && p<=a) dem1++;
    while(p1>c+d)
    {
        p1-=(c+d);
    }
    if(p1>0 && p1 <=c) dem1++;
    if(dem1==1) cout << "one" << endl;
    else if(dem1==2) cout << "both" << endl;
    else cout << "none" << endl;

    while(m>a+b)
    {
        m-=(a+b);
    }
    if(m>0 && m<=a) dem2++;
    while(m1>c+d)
    {
        m1-=(c+d);
    }
    if(m1>0 && m1 <=c) dem2++;
    if(dem2==1) cout << "one" << endl;
    else if(dem2==2) cout << "both" << endl;
    else cout << "none" << endl;

    while(g>a+b)
    {
        g-=(a+b);
    }
    if(g>0 && g<=a) dem3++;
    while(g1>c+d)
    {
        g1-=(c+d);
    }
    if(g1>0 && g1 <=c) dem3++;
    if(dem3==1) cout << "one" << endl;
    else if(dem3==2) cout << "both" << endl;
    else cout << "none" << endl;
    return 0;
}
