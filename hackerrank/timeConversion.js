"use strict";

const fs = require("fs");

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((str) => str.trim());

  main();
});

function readLine() {
  return inputString[currentLine++];
}

/*
 * Complete the timeConversion function below.
 */
function timeConversion(s) {
  var tam = s.length;
  var string = s.split(":");
  if (s[tam - 2] === "A") {
    if (parseInt(string[0]) > 12)
      return `${12 - parseInt(string[0])}:${string[1]}:${
        string[2][0] + string[2][1]
      }`;
    else if (parseInt(string[0]) == 0 || parseInt(string[0]) == 12)
      return `00:${string[1]}:${string[2][0] + string[2][1]}`;
    else return `${string[0]}:${string[1]}:${string[2][0] + string[2][1]}`;
  } else if (s[tam - 2] === "P") {
    if (parseInt(string[0]) < 12)
      return `${parseInt(string[0]) + 12}:${string[1]}:${
        string[2][0] + string[2][1]
      }`;
    else return `${string[0]}:${string[1]}:${string[2][0] + string[2][1]}`;
  }
}

function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const s = readLine();

  let result = timeConversion(s);

  ws.write(result + "\n");

  ws.end();
}
