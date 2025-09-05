function maior_entre_dois(n1, n2){
    return (n1 > n2) ? n1:n2;
}


function maior_entre_dois_enxuta(n1, n2){
    return Math.max(n1, n2);
}


const prompt = require('prompt-sync')();
let [n1, n2] = prompt().split(" ").map(Number);
console.log(maior_entre_dois_enxuta(n1, n2));
