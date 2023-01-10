class Solution(object):
    def isPalindrome(self, x):
        b=str(x)
        return b == b[::-1]
        """
        :type x: int
        :rtype: bool
        """