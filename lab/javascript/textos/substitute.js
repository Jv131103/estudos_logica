function myReplace1(string, palavra, troca) {
  // troca todas as ocorrências (como str.replace do Python sem regex)
  return string.split(palavra).join(troca);
}

function myReplace2(string, palavra, troca) {
  // implementação manual sem regex (varrendo e montando o resultado)
  if (palavra.length === 0) return string; // evita loop infinito
  let out = "";
  for (let i = 0; i < string.length; ) {
    // se casa a partir de i
    if (string.startsWith(palavra, i)) {
      out += troca;
      i += palavra.length;
    } else {
      out += string[i];
      i++;
    }
  }
  return out;
}

function myReplace3(string, palavra, troca, ignore_case = false) {
  // regex seguro (escapa a palavra)
  const escape = (s) => s.replace(/[.*+?^${}()|[\]\\]/g, "\\$&");
  const flags = ignore_case ? "gi" : "g";
  const re = new RegExp(escape(palavra), flags);
  return string.replace(re, troca);
}

// ---- testes (equivalentes aos do Python)
console.log(myReplace1("Eu gosto de Python", "Python", "C"));
console.log(myReplace2("Eu gosto de Python", "Python", "C"));
console.log(myReplace3("Eu gosto de Python", "Python", "C"));
console.log();

console.log(myReplace1("Eu", "Eu", "Salve Cachorro"));
console.log(myReplace2("Eu", "Eu", "Salve Cachorro"));
console.log(myReplace3("Eu", "Eu", "Salve Cachorro"));
console.log();

console.log(myReplace1("Droga, errei aqui,", ",", " "));
console.log(myReplace2("Droga, errei aqui,", ",", " "));
console.log(myReplace3("Droga, errei aqui,", ",", " "));
