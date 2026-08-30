class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, len = 0;

        for (int i = 0; i < s.size(); i++) {
            // odd length, centered at i
            int l = i, r = i;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                l--;
                r++;
            }
            if (r - l - 1 > len) {
                len = r - l - 1;
                start = l + 1;
            }

            // even length, centered between i and i+1
            l = i;
            r = i + 1;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                l--;
                r++;
            }
            if (r - l - 1 > len) {
                len = r - l - 1;
                start = l + 1;
            }
        }

        return s.substr(start, len);
    }
};