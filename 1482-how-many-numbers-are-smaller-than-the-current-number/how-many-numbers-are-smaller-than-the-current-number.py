class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        sort_list= sorted(nums)
        hashmap={}
        for i , v in enumerate(sort_list):
            if v not in hashmap:
                hashmap[v]=i
        res=[]
        for i in nums:
            res.append(hashmap[i])
        return res