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
    int t;
    cin >> t;
    int sum;
    while(t--){
        int l,r;
        cin >> l >> r;
        sum = l + r;
        if(sum%3 == 0 && min(l,r)*2 >= max(l,r)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }


    return 0;
}