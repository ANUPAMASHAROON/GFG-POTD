class Solution:
    def isPalindromeUtil(self, s, l, r):
        if l >= r:
            return True
        if s[l] != s[r]:
            return False
        return self.isPalindromeUtil(s, l+1, r-1)

    def isPalindrome(self, s):
        return self.isPalindromeUtil(s, 0, len(s)-1)