function maior(val1, val2){
    if (val1 > val2){
        return val1;
    }
    return val2;
}


function kadane(arr){
    let soma_atual = arr[0];
    let soma_max = arr[0];

    for (let i=0; i < arr.length; i++){
        soma_atual = maior(arr[i], soma_atual + arr[i]);
        soma_max = maior(soma_max, soma_atual);
    }

    return soma_max;
}


function kadane2(arr) {
  let somaAtual = arr[0], somaMax = arr[0];
  for (let i = 1; i < arr.length; i++) {
    somaAtual = Math.max(arr[i], somaAtual + arr[i]);
    somaMax = Math.max(somaMax, somaAtual);
  }
  return somaMax;
}

const arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
console.log(kadane(arr));
console.log(kadane2(arr));

