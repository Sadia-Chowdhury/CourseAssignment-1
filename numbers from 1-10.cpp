
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//cout<<fixed<<setprecision(2);

    int t=10;

    int prev1 = 1;
    int prev2 = 0;
    for (int i = 1; i <= t; i++)
    {
        if (i > 2)
        {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            cout<<curr<<" ";
        }
        else if (i == 1)
            cout<<prev2<<" ";
        else if (i == 2)
            cout<<prev1<<" ";
    }
    cout<<endl;
    return 0;
}

