#include <iostream>
#include <algorithm>

using namespace std;

struct task
{
    int start;
    int finish;
};

bool cmp(task a, task b)
{
    if (a.finish < b.finish)
        return true;
    // if(a.start < b.start) return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        task a[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].start;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].finish;
        }
        sort(a, a + n, cmp);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i].start << " " << a[i].finish << endl;
        // }
        int dem = 1;
        int k = 0;
        for (int i = 1; i < n; i++)
        {
            if(a[k].finish <= a[i].start){
                // cout << a[i].start << " " << a[i].finish << endl;
                dem++;
                k=i;
            }
        }
        cout << dem << endl;
    }
}