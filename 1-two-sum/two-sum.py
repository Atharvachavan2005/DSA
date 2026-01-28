class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap={}
        for i , value in enumerate(nums):
            diff = target- value
            if diff in hashmap:
                return [i, hashmap[diff]]
            hashmap[value]=i