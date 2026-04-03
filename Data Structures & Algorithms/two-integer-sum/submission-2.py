class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        hmap = {}

        for i in range(len(nums)):
            diff = target - nums[i]

            if diff in hmap:
                return [hmap[diff], i]

            hmap[nums[i]] = i

           

        return []


#7 - 3
#4 
#have you seen 4 before ?? no
#3: 0 add to the {}
#
#7 - 4
#3
#
#3 in the before??
#yes int he map, reutrn value of 3 the index which 0 and current index 0
