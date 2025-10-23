/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
let x={
   toBe: function(x){
        if(x===val)return true;
        else throw new Error("Not Equal");
    },
    notToBe: function(y){
        if(y!==val)return true;
        else throw new Error("Equal");
    }
};
return x
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */