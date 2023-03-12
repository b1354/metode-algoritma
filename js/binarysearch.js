function binarySearch(someArr, search) {
  let arrLength = someArr.length;
  let middleVal = parseInt(arrLength/2);
  let value = 0;

  if (search == someArr[middleVal]) {
    return middleVal;
  }

  else if (search < someArr[middleVal]) {
    for (let i = middleVal; i >= 0; i--) {
      if (search == someArr[i]) {
        return i;
      }
    }
  }

  else if (search > someArr[middleVal]) {
    for (let i = middleVal; i <= arrLength; i++) {
      if (search == someArr[i]) {
        return i;
      }
    }
  }

  return 0;
}

console.log(binarySearch([1,2,3,4,5], 3));
console.log(binarySearch([10,11,12,13,15], 3));
console.log(binarySearch([11111, 11115, 11122, 11124], 11115));
console.log(binarySearch([1000,1001,1002,1003,1004,1005,1006], 1006));