/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let i=0;
    const res=arr.map((val,index)=>{
       return fn(val,index);
    });
    return res;
};