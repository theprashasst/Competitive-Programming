/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    typedef long long ll;
    int mySqrt(int x) {
        ll left=1,right=x;
        while(left<=right){
            ll mid= left + (right-left)/2;
            if (mid*mid==x) return mid;
            else if (mid*mid >x) right=mid-1;
            else left= mid+1;
        }
        return right;
    }
};
// @lc code=end

