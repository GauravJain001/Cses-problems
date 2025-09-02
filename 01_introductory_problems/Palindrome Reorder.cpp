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
    int n = s.size();
    unordered_map<char,int>mpp;
    for(auto chr : s){
        mpp[chr] ++;
    }
    int numOdd = 0;
    char oddChar;
    for(auto pair: mpp){
        if(pair.second%2 == 1){
            numOdd++;
            oddChar = pair.first;
        }
    }
    if(numOdd > 1){
        cout << "NO SOLUTION";
        return 0;
    }
    string half = "";
    string ans = "";
    
    for(auto pair : mpp){
        for(int i=0;i<pair.second/2;i++){
            half += pair.first;
        }
    }
    ans += half;
    if(numOdd == 1){
        ans += oddChar;
    }
    reverse(half.begin(),half.end());
    ans += half;
    cout << ans;
   



    return 0;
}