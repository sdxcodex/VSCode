#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n ,d;
    cin >> n;
    vector<int>num;
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
       cin>>d;
       num.push_back(d);
    }
    int j = 0;
    ans.push_back(num[0]);
    for (int i = 1; i < n; i++)
    {
        int t = ans[j]^num[i];
        ans.push_back(t);
        j++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" " ;
    }
    return 0;
}