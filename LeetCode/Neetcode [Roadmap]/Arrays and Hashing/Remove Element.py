class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        index = 0
        L = len(nums)
        for i in range(L):
            if nums[i] != val:
                nums[index] = nums[i]
                index += 1
        return index