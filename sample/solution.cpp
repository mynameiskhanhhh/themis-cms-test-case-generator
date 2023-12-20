// Example solution for finding the longest increasing subsequence in O(n log n)
#include<bits/stdc++.h>
using namespace std;

const int N = 100005;
int a[N], n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    vector<int> ans;
    for (int i=1; i<=n; i++) {
        auto k = lower_bound(ans.begin(), ans.end(), a[i]);
        if (k == ans.end()) ans.push_back(a[i]);
        else *k = a[i];
    }
    cout << ans.size() << "\n";

    return 0;
}