#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <numeric>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);


    ll ans = 0;
    ll curCnt = 0;
    char cur = s[0];
    for(int i=0;i<s.size();i++){
        if(cur == s[i]){
            curCnt++;
            
        }else{
            curCnt = 1;
            cur = s[i];
        }
        ans = max(ans,curCnt);
    }
    cout << ans;


   
}   