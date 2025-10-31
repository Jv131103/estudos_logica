class Formas{
    area() {
        throw new Error("Área é obrigado a ser chamado e definido");
    }
}


class Quadrado extends Formas{
    constructor(lado1, lado2){
        super();
        this.lado1 = lado1;
        this.lado2 = lado2;
    }

    area(){
        return this.lado1 * this.lado2;
    }
}


class Circulo extends Formas{
    constructor(raio){
        super();
        this.raio = raio;
        this.pi = 3.14;
    }

    area(){
        return this.pi * this.raio**2;
    }
}


class Triangulo extends Formas{
    constructor(base, altura){
        super();
        this.base = base;
        this.altura = altura;
    }

    area(){
        return this.base * this.altura / 2;
    }
}


const quadrado = new Quadrado(2, 2);
console.log(quadrado.area());
const circulo = new Circulo(2);
console.log(circulo.area());
const triangulo = new Triangulo(2, 2)
console.log(triangulo.area());
