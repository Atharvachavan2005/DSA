class Solution:
    def findComplement(self, num: int) -> int:

        bit= len(bin(num))-2
        all_ones = (1<<bit) -1
        return all_ones - num
