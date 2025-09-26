function fatorial(n) {
    let result = 1;
    let expression = '';

    for (let i = n; i > 1; i--) {
        result *= i;
        expression += i + ' x ';
    }
    expression += '1 = ' + result;
    return expression;
}

console.log(fatorial(5));
