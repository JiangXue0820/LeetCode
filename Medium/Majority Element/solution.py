class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        m, n, cm, cn = 0, 1, 0, 0
        for num in nums:
            if num == m: 
                cm += 1
            elif num == n:
                cn += 1
            elif cm == 0:
                m, cm = num, 1
            elif cn == 0:
                n, cn = num, 1
            else:
                cm -= 1
                cn -= 1

        
        return [num for num in (m, n) if nums.count(num) > len(nums) // 3]
    

