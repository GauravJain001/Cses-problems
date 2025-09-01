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
// check sum of first n+1 number 1 to n
// if sum is even only then possible
// if possible take two sets then add the max ones to one set till it's set is smaller than
// equal to halfsum 
// if i becomes bigger then requires number to reach halfsum for set 1 add it to set 2

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll sum = ((n+1)*(n))/2;
    if(sum%2 == 1){
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    vector<ll>s1;
    vector<ll>s2;
    ll halfSum = sum/2;
    ll curSum= 0;
    for(int i=n;i>=1;i--){
        if(curSum + i <= halfSum){
            curSum += i;
            s1.push_back(i);
        }else{
            s2.push_back(i);
        }
    }
    cout << s1.size() << endl;
    for(int i=0;i<s1.size();i++){
        cout << s1[i] << " ";
    }
    cout << "\n";
    cout << s2.size() << endl;
    for(int i=0;i<s2.size();i++){
        cout << s2[i] << " ";
    }

    return 0;
}