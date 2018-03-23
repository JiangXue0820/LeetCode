class Solution(object):
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        # Use ^ operator for XOR
        return bin(x^y).count("1")
