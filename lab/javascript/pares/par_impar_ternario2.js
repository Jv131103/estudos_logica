function ispar(number){
    return number % 2 === 0;
}


function return_par_ou_impar(number){
    return (ispar(number)) ? "Par" : "Ímpar";
}


console.log("********************");
for (let i=0; i <= 10; i++){
    console.log(`${i} is ${return_par_ou_impar(i)}`)
    console.log("********************");
}
