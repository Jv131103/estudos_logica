// Versão 1 — usando "alfabeto.indexOf" (intuitiva)
function cesar(texto, deslocamento = 2) {
  const A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const up = texto.toUpperCase();
  const k = ((deslocamento % 26) + 26) % 26;

  let out = "";
  for (const ch of up) {
    const i = A.indexOf(ch);
    out += (i >= 0) ? A[(i + k) % 26] : ch;
  }
  return out;
}

// Versão 2 — usando charCode/ord+chr (matemática)
function cesar2(texto, deslocamento = 2) {
  const up = texto.toUpperCase();
  const k = ((deslocamento % 26) + 26) % 26;
  let out = "";

  for (const ch of up) {
    const code = ch.charCodeAt(0);
    if (code >= 65 && code <= 90) {
      const pos = code - 65;
      const novo = (pos + k) % 26;
      out += String.fromCharCode(novo + 65);
    } else {
      out += ch;
    }
  }
  return out;
}

// Versão 3 — "maketrans/translate" (tabela de mapeamento)
function cesar3(texto, deslocamento = 2) {
  const A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const k = ((deslocamento % 26) + 26) % 26;
  const cif = A.slice(k) + A.slice(0, k); // alfabeto deslocado

  const mapa = new Map();
  for (let i = 0; i < 26; i++) {
    mapa.set(A[i], cif[i]);       // maiúsculas
    mapa.set(A[i].toLowerCase(), cif[i].toLowerCase()); // minúsculas (se quiser preservar)
  }

  // Como Python upper() + translate devolvia tudo MAIÚSCULO,
  // vamos replicar esse comportamento:
  const up = texto.toUpperCase();
  let out = "";
  for (const ch of up) {
    out += mapa.get(ch) ?? ch;
  }
  return out;
}


console.log(cesar("abc", 2));     // CDE
console.log(cesar("xyz", 3));     // ABC
console.log(cesar("Renato", 5));  // WJSFYT
console.log();
console.log(cesar2("abc", 2));    // CDE
console.log(cesar2("xyz", 3));    // ABC
console.log(cesar2("Renato", 5)); // WJSFYT
console.log();
console.log(cesar3("abc", 2));    // CDE
console.log(cesar3("xyz", 3));    // ABC
console.log(cesar3("Renato", 5)); // WJSFYT
