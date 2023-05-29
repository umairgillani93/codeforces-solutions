// arr = [2, 5, 1, 10, 6]
// for k = 1..
// either choose to mins or 1 max | sum(arr) should be MAX
//
// sort the arr first in ascending order
// arr becomes -> [1, 2, 5, 6, 10]
//
// add arr[0] + arr[1] < arr[size() - 1] -> 1 + 2 < 10; remove 1, 2 (two minimums)
// add arr[0] + arr[1] < arr[size() - 1] -> 1 + 2 > 10; remove 10, (one max)
//
// [5, 6, 10]
//
// for k = 2..
// [5, 6]
//
// sum([5, 6]) = 11

