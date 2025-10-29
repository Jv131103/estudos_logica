class Circulo{
    constructor(raio){
        this.raio = raio;
        this.pi = 3.141;
    }

    area(){
        return this.pi * this.raio**2;
    }

    perimetro(){
        return 2 * this.pi * this.raio;
    }
}


c = new Circulo(3);
console.log(`Área = ${c.area().toFixed(2)}, Perímetro = ${c.perimetro().toFixed(2)}`)
