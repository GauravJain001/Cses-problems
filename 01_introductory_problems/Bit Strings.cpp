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

ll binaryExponentiation(ll base,ll power){
   // square the base 
   // divide power by 2
   // on odd power update the result
   const ll MOD = 1000000007;
   ll res = 1;
   while (power > 0)
   {
    if(power%2 == 1){
        res = (res * base) % MOD;
    }
    base = (base * base) % MOD;
    power = power/2;
   }
   return res % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    const ll MOD = 1000000007; 
   
    ll n;
    cin >> n;
    // ll ans = 1;
    // for(int i=0;i<n;i++){
    //     ans *=2;
    //     ans %= MOD;
    // }
    // cout << ans;
    cout << binaryExponentiation(2,n);

    return 0;
}