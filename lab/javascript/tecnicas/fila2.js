const FILA = [];


function is_empty(){
    return FILA.length == 0;
}


function enqueue(valor){
    FILA.push(valor);
}


function dequeue(){
    if (is_empty()){
        return null;
    }
    return FILA.pop(0);
}

function view(){
    console.log(FILA);
}

enqueue(10)
enqueue(20)
view()
let removido = dequeue()
console.log("Removido -", removido)
view()
