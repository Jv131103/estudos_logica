class Retangulo{
    constructor(largura, altura){
        this.largura = largura;
        this.altura = altura;
    }

    repr(){
        return `Retangulo(largura=${this.largura}, altura=${this.altura})`;
    }

    area(){
        return this.largura * this.altura;
    }
}


ret = new Retangulo(4, 5);
console.log(ret.repr());
console.log(`Área = ${ret.area()}`);
