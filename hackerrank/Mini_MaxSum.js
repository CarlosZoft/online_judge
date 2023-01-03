"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .replace(/\s*$/, "")
    .split("\n")
    .map((str) => str.replace(/\s*$/, ""));

  main();
});

function readLine() {
  return inputString[currentLine++];
}

// Complete the miniMaxSum function below.
function miniMaxSum(arr) {
  var smaller = arr[0];
  var bigger = arr[0];
  for (var i in arr) {
    if (arr[i] < smaller) smaller = arr[i];
    else if (arr[i] > bigger) bigger = arr[i];
  }
  var sum1 = (prev, next) => prev + next;

  var sum = arr.reduce(sum1);
  console.log(`${sum - bigger} ${sum - smaller}`);
}

function main() {
  const arr = readLine()
    .split(" ")
    .map((arrTemp) => parseInt(arrTemp, 10));

  miniMaxSum(arr);
}
