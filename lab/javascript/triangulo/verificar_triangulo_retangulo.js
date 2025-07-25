function is_right_triangle(a, b, c){
    let maior, catetos;
    if (a > b & a > c){
        maior = a;
        catetos = b**2 + c**2;
    } else if (b > a & b > c) {
        maior = b;
        catetos = a**2 + c**2;
    } else {
        maior = c;
        catetos = a**2 + b**2;
    }
    return maior**2 == catetos;
}


function jstonic_is_rigth_triangle(a, b, c){
    let lados = [a, b, c].sort((x, y) => x - y);
    let [cateto1, cateto2, hipotenusa] = lados;
    return hipotenusa ** 2 === cateto1 ** 2 + cateto2 ** 2;
}


console.log(is_right_triangle(3, 4, 5));  // true
console.log(is_right_triangle(10, 10, 50));  // false
console.log();
console.log(jstonic_is_rigth_triangle(3, 4, 5));  // true
console.log(jstonic_is_rigth_triangle(10, 10, 50));  // false
