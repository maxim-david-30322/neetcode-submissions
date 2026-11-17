class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:

        hash_set=set(nums)
        longest=0
        length=0

        if len(hash_set) == 1:
            return 1
        if len(hash_set)==0:
            return 0
        longest=1
        for num in nums:
            
            if  num-1 not in hash_set:
                length=1
                next_nr=num+1
                while next_nr in hash_set:
                    length+=1
                    next_nr+=1
                longest = max(longest, length)
    
        return longest




