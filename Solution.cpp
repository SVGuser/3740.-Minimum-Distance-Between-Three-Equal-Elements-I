#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDistance(vector<int> &nums) {
      int n = nums.size();
      unordered_map <int, vector<int>> pos;
      int ans = INT_MAX;
      for (int i = 0; i < n; i++) {
        pos[nums[i]].push_back(i);
      }
      for (auto &p:pos) {
        auto &indices = p.second;
        if (indices.size() >= 3) {
            for (int j = 0; j + 2 < indices.size(); j++) {
                    int dist = 2 * (indices[j+2] - indices[j]);
                    ans = min(ans, dist);
            }
        }
      }
      return ans == INT_MAX ? -1 : ans;
    }
};
