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

    // algo
    // find the max of z = max(x,y)
    // then observations -- 
    //1. even square is (z,1)
    //2. odd square is (1,z)
    // then find manhatten distance between the two points 
    // then add subtract it from square and voila

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        ll t;
        cin >> t;
        while(t--){
            ll x,y;
            cin >> x >> y;
            ll z = max(x,y);
            // cout << z << endl;
            ll sq = z * z;
            // cout << "---" << sq << endl;
            ll x1,y1;
            if(sq%2 == 0){
                x1 = z;
                y1 = 1;
            }
            else{
                // cout << "e";
                x1 = 1;
                y1 = z;
            }
            // cout << x1 << y1 << endl;
            // cout << x << y<< endl;
            ll dif = abs(x-x1)+abs(y-y1);
            // cout << dif << endl;
            cout << sq - dif << endl;


        }
        


        return 0;
    }