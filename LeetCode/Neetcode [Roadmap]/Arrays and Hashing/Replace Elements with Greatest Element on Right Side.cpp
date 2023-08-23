/**
 * @param {number[]} arr
 * @return {number[]}
 */
var replaceElements = function(arr) {
    for (let i = 0; i < arr.length - 1; i++) {
        let v = arr.slice(i + 1, arr.length);
        arr[i] = Math.max(...v);
    }
    arr[arr.length - 1] = -1;
    return arr;
};