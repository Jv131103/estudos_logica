const queue = [];  // Fila vazia

function enqueue(x) {
    queue.push(x);  // enfileira
}

function dequeue() {
    if (queue.length === 0) throw new Error("FILA VAZIA!");
    return queue.splice(0, 1);
}

// demo
enqueue('A');
enqueue('B');
console.log(dequeue());  // ['A']
console.log(queue);  // ['B']
