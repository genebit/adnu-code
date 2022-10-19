function swap(obj) {
  let temp = obj.a;
  obj.a = obj.b;
  obj.b = temp;
}

function checkIfSorted(arr, size, starters) {
  for (let i = 0; i < size - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      starters.start_front++;
      starters.start_end--;

      return false;
    }
  }
  return true;
}

function checkIfSorted(arr, size) {
  for (let i = 0; i < size - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      return false;
    }
  }
  return true;
}

let arr = [4, 0, 2, 1, 1, 5];
let size = arr.length;

let starters = {
  start_front: 0,
  start_end: size - 1,
};

let is_arr_sorted = checkIfSorted(arr, size);
// while (!is_arr_sorted) {
//   // forward traverse
//   for (let i = starters.start_front; i < starters.start_end; ++i) {
//     let next = i + 1;
//     if (arr[i] > arr[next]) swap(arr[i], arr[next]);
//   }

//   // backwards traverse
//   for (let i = starters.start_end; i > starters.start_front; --i) {
//     let prev = i - 1;
//     if (arr[prev] > arr[i]) swap(arr[prev], arr[i]);
//   }

//   // check if the array is sorted, otherwise keep sorting
//   let arr_already_sorted = checkIfSorted(arr, size, starters);
//   if (arr_already_sorted) {
//     is_arr_sorted = true;
//   }
// }

console.log(arr);

// function setup() {
//   createCanvas(800, 500);
// }

// function draw() {
//   background("#f3f3f3");
// }
