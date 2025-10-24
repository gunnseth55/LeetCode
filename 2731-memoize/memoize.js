/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    const cache={};
    return function(...args) {
        let str=JSON.stringify(args);
        if(str in cache){
            return cache[str];
        }
        cache[str]=fn(...args);
        return cache[str];
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */