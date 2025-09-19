function mdc(a, b) {
    a = Math.abs(a);
    b = Math.abs(b);

    if (a === 0 && b === 0) {
        throw new Error("MDC indefinido para (0,0)");
    }

    while (b !== 0) {
        let temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

function mmc(a, b) {
    if (a === 0 || b === 0) {
        return 0;
    }
    return Math.abs(a * b) / mdc(a, b);
}

console.log(mmc(12, 18)); // 36
