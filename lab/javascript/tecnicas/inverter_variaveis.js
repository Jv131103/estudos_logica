const prompt = require('prompt-sync')();


function versao1(){
    let [n1, n2] = prompt().split(" ").map(Number);
    
    let temp = n1;
    n1 = n2;
    n2 = temp;

    console.log(n1, n2);
}

function versao2(){
    let [n1, n2] = prompt().split(" ").map(Number);
    [n2, n1] = [n1, n2];
    console.log(n1, n2);
}


// versao1();
versao2();
