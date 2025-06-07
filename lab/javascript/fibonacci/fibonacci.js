function fibonacci(n){
    let n1 = 0;
    let n2 = 1;

    if (n === 0){
        return 0;
    } else if (n === 1) {
        return 1;
    }

    for (let i = 2; i <= n; i++) {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }

    return n2;
}


function fibonacci_recursivo(n) {
    if (n === 0) {
        return 0;
    } else if (n === 1) {
        return 1;
    }

    return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}


console.log(fibonacci(6));
console.log(fibonacci_recursivo(6));
