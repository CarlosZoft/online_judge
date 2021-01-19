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

// Complete the climbingLeaderboard function below.
function climbingLeaderboard(scores, alice) {
var newScore = [], rank = [];
let position = 1;
newScore[0] = scores[0];
for(var i=1,j=0;i<scores.length;i++){
    if(scores[i]!=scores[i-1])newScore[++j]=scores[i] ;      
}
newScore.reverse();
function busca(vetor,size,number)
{
    var esq = -1, dir = newScore.length;
    while (esq < dir - 1)
    {
        var half = Math.floor((esq + dir) / 2);
        if (newScore[half] <= alice[h])
            esq = half;
        else
            dir = half;
    }
    return dir;
}
var tam = newScore.length+1;
for(var h in alice){
    rank.push(tam-busca(newScore, newScore.length,alice[h]));
}
return rank;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const rankedCount = parseInt(readLine().trim(), 10);

    const ranked = readLine().replace(/\s+$/g, '').split(' ').map(rankedTemp => parseInt(rankedTemp, 10));

    const playerCount = parseInt(readLine().trim(), 10);

    const player = readLine().replace(/\s+$/g, '').split(' ').map(playerTemp => parseInt(playerTemp, 10));

    const result = climbingLeaderboard(ranked, player);

    ws.write(result.join('\n') + '\n');

    ws.end();
}
