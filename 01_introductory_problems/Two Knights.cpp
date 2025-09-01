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
// 1. so combination only gets uniques while permutation gets all
// simple approch get all the postions where two knights can be placed then subtract bad postions
// for getting all the postions where knight can be placed simple combinations formaule
// c = n!/ r!(n-r)!
// here n would be total postions available then would be s*s since it is a square board
// and r would be 2 since we have to place two knights
// c = s^2! / 2(s^2 - 2)!
// formulae can be simplified to 
// (s^2) * (s^2 )

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
}