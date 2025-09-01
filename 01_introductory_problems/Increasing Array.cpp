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

    //6 
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(vec[i] < vec[i-1]){
            ans += (vec[i-1]-vec[i]);
            vec[i] = vec[i] + (vec[i-1]-vec[i]);
        }

    }
    cout << ans;
}