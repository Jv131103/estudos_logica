const stack = [];        // pilha vazia

function push(x) {       // empilha
  stack.push(x);
}

function pop() {         // desempilha com segurança
  if (stack.length === 0) throw new Error("Pilha vazia");
  return stack.pop();
}

// demo
push(1);
push(2);
console.log(pop());  // 2
console.log(stack);  // [1]
