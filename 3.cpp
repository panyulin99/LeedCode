class Solution {
    public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
	int mlen = 0;
	int m[256] = {0};
	for (int i = 0; i < s.length(); i++) {
  	    if (m[s[i]] == 0 || m[s[i]] < left) {
                mlen = max(mlen, i - left + 1);
	    } else {
       	        left = m[s[i]];
              }
	m[s[i]] = i + 1;
	}
	return mlen;
    }
};
