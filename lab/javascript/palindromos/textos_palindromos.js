function text_is_palinder(text){
    let value = String(text).toLowerCase();
    // remove tudo que não for [a-z0-9]
    value = value.replace(/[^a-z0-9]/g, '');
    // compara com a string invertida
    return value === value.split("").reverse().join("");
}


function text_is_palinder2(text){
  let filtered = "";
  for (const ch of String(text).toLowerCase()) {
    if (('a' <= ch && ch <= 'z') || ('0' <= ch && ch <= '9')) {
      filtered += ch;
    }
  }
  return filtered === filtered.split("").reverse().join("");
}


function text_is_palinder_fast(text){
  const s = String(text).toLowerCase()
    // (opcional) remover acentos
    // .normalize("NFD").replace(/[\u0300-\u036f]/g, "")
    .replace(/[^a-z0-9]/g, '');

  let i = 0, j = s.length - 1;
  while (i < j) {
    if (s[i] !== s[j]) return false;
    i++; j--;
  }
  return true;
}


console.log(text_is_palinder("Socorram-me subi no onibus em Marrocos!"));
console.log(text_is_palinder2("Socorram-me subi no onibus em Marrocos!"));
console.log(text_is_palinder_fast("Socorram-me subi no onibus em Marrocos!"));
