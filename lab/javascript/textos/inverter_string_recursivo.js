function inverterString(texto, i=1){
    if (texto === ""){
        return "";
    }

    ultima_posicao = texto.length - i;
    if (ultima_posicao <= 0){
        return texto[ultima_posicao];
    }
    return texto[ultima_posicao] + inverterString(texto, i+1);
}

function inverterStringJS(s){
  if (s.length <= 1) return s;
  return s[s.length - 1] + inverterString(s.slice(0, -1));
}


console.log(inverterString("casa")); // asac
console.log(inverterString(""));     // ""
console.log("");
console.log(inverterStringJS("casa")); // asac
console.log(inverterStringJS(""));     // ""
