class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        theMap=set();
        for i in nums:
            if(i in theMap):
                return True
            else:
                theMap.add(i)


        return False

