 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int T; cin >> T;
    while(T--)
    {
        int n; cin >> n;
        string s; cin >> s;
        if(is_sorted(s.begin(), s.end()))
        {
            cout << 0 << "\n";
            continue;
        }
        
        string t = s;
        sort(t.begin(), t.end());
        cout << 1 << "\n";
        vector<int> ans;
        for(int i = 0; i <n; i++)
        {
            if(s[i] != t[i])
                ans.push_back(i+1);
        }
        cout << ans.size() << " ";
        for(int i = 0; i <ans.size(); i++)
            cout << ans[i] << " ";
        cout<<endl;
    }        
 
return 0;
}