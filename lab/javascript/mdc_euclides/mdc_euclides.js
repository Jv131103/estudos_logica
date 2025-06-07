function mdc(a, b){
    if (b === 0) {
        return a;
    }
    return mdc(b, a % b);
}


function mdc2(a, b){
    while (b !== 0) {
        let temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}


console.log(mdc(18, 12));
console.log(mdc2(18, 12));
