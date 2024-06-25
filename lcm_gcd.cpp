#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long GCD = gcd(A, B);
        long long LCM = (A * B) / GCD;
        return {LCM, GCD};
    }
    
    long long gcd(long long A, long long B) {
        if (B == 0) return A;
        return gcd(B, A % B);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A, B;
        cin >> A >> B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
