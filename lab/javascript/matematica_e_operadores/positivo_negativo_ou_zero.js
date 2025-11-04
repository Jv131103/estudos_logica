function numberIs(number){
    if (number === 0){
        return "Zero";
    } else if (number > 0){
        return "Positive";
    } else {
        return "Negative";
    }
}


for (let i = -10; i < 11; i++){
    console.log(`${i} = ${numberIs(i)}`);
    console.log();
}
