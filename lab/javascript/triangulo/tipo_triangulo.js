function tipo_triangulo(a, b, c){
    if (a == b == c){
        return "Equilátero"
    } else if (a == b || b == c || a == c){
        return "Isósceles"
    }
    else{
        return "Escaleno"
    }
}


console.log(tipo_triangulo(5, 5, 5))  // Equilátero
console.log(tipo_triangulo(5, 5, 3))  // Isósceles
console.log(tipo_triangulo(5, 3, 5))  // Isósceles
console.log(tipo_triangulo(3, 5, 5))  // Isósceles
console.log(tipo_triangulo(3, 4, 5))  // Escaleno
