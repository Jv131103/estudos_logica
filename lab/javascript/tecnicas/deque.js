class Deque {
  constructor() {
    this.data = [];
  }

  pushFront(value) {
    // Inserir no início
    this.data = [value, ...this.data];
  }

  pushBack(value) {
    // Inserir no fim
    this.data.push(value);
  }

  popFront() {
    if (this.data.length === 0) {
      console.log("Deque vazio!");
      return null;
    }
    return this.data.shift(); // remove o primeiro
  }

  popBack() {
    if (this.data.length === 0) {
      console.log("Deque vazio!");
      return null;
    }
    return this.data.pop(); // remove o último
  }

  show() {
    console.log("Deque final:", this.data);
  }
}

// Teste
const deque = new Deque();
deque.pushFront(1);
deque.pushBack(2);
deque.popFront();
deque.show();
