# https://leetcode.com/problems/product-of-array-except-self


class Solution:

    def productExceptSelf(self, nums: List[int]) -> List[int]:
        length = len(nums)
        product = [1] * length
        leftProduct = 1
        rightProduct = 1
        for i in range(1, length):
            leftProduct = nums[i - 1] * leftProduct
            product[i] *= leftProduct
            rightProduct = nums[-i] * rightProduct
            product[length - i - 1] *= rightProduct
        return product
