class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128, -1);   // ASCII char -> last index it appeared
        int best = 0, left = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            if (lastSeen[c] >= left)     // repeat, and it's inside our window
                left = lastSeen[c] + 1;

            lastSeen[c] = right;
            best = max(best, right - left + 1);
        }
        return best;
    }
};