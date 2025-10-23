/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const res=arr.filter((val,index)=>{
      return   fn(val,index);
    }
    );
    return res;
};