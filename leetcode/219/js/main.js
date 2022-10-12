/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
 var containsNearbyDuplicate = function(nums, k) {
  const n2index = new Map()
  for(let index = 0; index < nums.length; index++) {
    const prevIndex = n2index.get(nums[index])
    if (prevIndex != undefined) { // 已存在
      if (index - prevIndex <= k) return true
    }
    n2index.set(nums[index], index)
  }
  return false
};