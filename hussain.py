
#Problem:

#Given an array nums of size n, return the majority element.

#The majority element is the element that appears more than ⌊n / 2⌋ times.
#You may assume that the majority element always exists in the array.

#Solution:

class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        checked=[]
        count = 0
        curCount = 0
        element = -1
        for i in range(0,len(nums)):
            if nums[i] not in checked:
                curCount = 1
                checked.append(nums[i])
                for j in range(i+1,len(nums)):
                    if nums[j] == nums[i]:
                        curCount+=1
                if curCount>=count and curCount>(len(nums)//2):
                    count = curCount
                    element = nums[i]
        return element