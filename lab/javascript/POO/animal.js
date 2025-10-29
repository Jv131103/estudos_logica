// Classe base
class Animal {
  falar() {
    throw new Error("O método 'falar()' deve ser implementado pela subclasse.");
  }
}

// Subclasse Cachorro
class Cachorro extends Animal {
  falar() {
    return "Au au";
  }
}

// Subclasse Gato
class Gato extends Animal {
  falar() {
    return "Miau";
  }
}

// Teste
const cachorro = new Cachorro();
console.log("Cachorro:", cachorro.falar());

const gato = new Gato();
console.log("Gato:", gato.falar());
