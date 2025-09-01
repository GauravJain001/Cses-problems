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

//algo
//how many 5 * even number that is the number of zeros
// Every multiple of 5 contributes at least one 5.
// Numbers like 25 = 5×5 contribute two 5’s → add an extra count (n/25).
// Numbers like 125 = 5×5×5 contribute three 5’s → add another count (n/125).
//We never double-count, because each step only counts the extra 5s contributed by higher powers.
// 25 /5 give 1 + 25 /25 gives 1 qnd 25 = 5*5 two fives hence it works

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    long long zeros = 0;
    for (long long p = 5; p <= n; p *= 5) {
        zeros += n / p;
    }
    cout << zeros;


    return 0;
}