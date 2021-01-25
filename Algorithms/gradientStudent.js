'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

function gradingStudents(grades) {
    var resp;
    var newArray = [];
    for(var i=0 ; i< grades.length; i++){
        var ultimo = grades[i]%10;
        if( grades[i] < 36)newArray.push(grades[i]);
        else if(grades[i]%10 == 0) newArray.push(grades[i]);
        else {
            (ultimo < 5 && ultimo != 0) ? resp = (5-ultimo) : resp = (10-ultimo);
            (resp < 3) ? newArray.push(resp+grades[i]) : newArray.push(grades[i]);
        }
    }
    return newArray;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const gradesCount = parseInt(readLine().trim(), 10);

    let grades = [];

    for (let i = 0; i < gradesCount; i++) {
        const gradesItem = parseInt(readLine().trim(), 10);
        grades.push(gradesItem);
    }

    const result = gradingStudents(grades);

    ws.write(result.join('\n') + '\n');

    ws.end();
}
