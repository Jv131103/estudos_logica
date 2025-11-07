// Implementação de pilha usando array
const PILHA = [];

function estaVazia() {
  return PILHA.length === 0;
}

function empilha(valor) {
  PILHA.push(valor);
}

function desempilha() {
  if (estaVazia()) {
    return null; // mesmo comportamento do Python (None)
  }
  return PILHA.pop();
}

function topo() {
  if (estaVazia()) {
    return null;
  }
  return PILHA[PILHA.length - 1];
}

function tamanho(){
    return PILHA.length
}

// --- Teste equivalente ao Python ---
empilha(10);
empilha(20);
empilha(30);

console.log(desempilha()); // 30
console.log(topo());       // 20
console.log(PILHA);        // [10, 20]
console.log(tamanho())
