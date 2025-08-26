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
    ll n;
    cin >> n;
    ll sum1 = 0;
    ll temp;
    for(int i=0;i<n-1;i++){
        cin >> temp;
        sum1+=temp;
    }
    ll sum2 = (n*(n+1))/2;
    cout << sum2 - sum1;


    return 0;
}