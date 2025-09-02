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

// here min(l,r) bocz 8+1 is also 9 but second pile will be empty after 1st move hence we check if
// the pile which contains less coins can keep up with max pile
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