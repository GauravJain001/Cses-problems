#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <iomanip>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <numeric>
typedef long long ll;
using namespace std;
void f(ll n){
    cout << n << " ";
    while(n > 1){
        if(n%2 == 0){
            n /= 2;
            cout << n << " ";
        }else{
            n = (n*3)+1;
            cout << n << " ";
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    f(n);

    return 0;
}