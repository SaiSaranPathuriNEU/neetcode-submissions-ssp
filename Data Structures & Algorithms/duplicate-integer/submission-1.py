class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        if len(nums) == 0 or nums == None: return False

        seen = set()

        for n in nums:
            if n in seen:
                return True
            seen.add(n)
        
        return False


