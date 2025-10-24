/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let res=nums.reduce((val,curr)=>
       fn(val,curr),init
    );
    return res;
};