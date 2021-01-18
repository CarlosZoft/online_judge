'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the plusMinus function below.
function plusMinus(arr) {
    var tam = arr.length;
    var sum1 = 0, sum2 = 0, sum3 = 0;
    arr.forEach(number => {
        if(number === 0)sum3++;
        else if(number > 0)sum1++;
        else sum2++;
    })
    sum1 /= tam;
    sum2 /= tam;
    sum3 /= tam;
    console.log(sum1.toFixed(6)+'\n' +sum2.toFixed(6) +'\n'+ sum3.toFixed(6) + '\n')

}

function main() {
    const n = parseInt(readLine(), 10);

    const arr = readLine().split(' ').map(arrTemp => parseInt(arrTemp, 10));

    plusMinus(arr);
}
