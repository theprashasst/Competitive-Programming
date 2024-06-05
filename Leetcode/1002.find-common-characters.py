#
# @lc app=leetcode id=1002 lang=python3
#
# [1002] Find Common Characters
#

# @lc code=start
from collections import Counter
class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        cntr= Counter(words[0] )
        for word in words:
            cntr=cntr&Counter(word)
        return [key for key, count in cntr.items() for _ in range(count)]
        
# @lc code=end

