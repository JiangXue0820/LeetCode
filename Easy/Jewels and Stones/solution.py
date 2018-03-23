class Solution(object):
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        
        num_jewels = 0
        for i in xrange(len(J)):
            num_jewels += S.count(J[i])
        return num_jewels
