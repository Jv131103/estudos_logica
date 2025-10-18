function minusculaEMaiuscula1(texto) {
  console.log("VERSÃO 1: toUpperCase e toLowerCase");
  console.log(texto.toLowerCase());
  console.log(texto.toUpperCase());
}

function minusculaEMaiuscula2(texto) {
  console.log("VERSÃO 2: ASCII manual");

  let minusculas = "";
  let maiusculas = "";

  for (const c of texto) {
    const code = c.charCodeAt(0);
    if (code >= 65 && code <= 90) {
      // 'A' a 'Z'
      minusculas += String.fromCharCode(code + 32);
      maiusculas += c;
    } else if (code >= 97 && code <= 122) {
      // 'a' a 'z'
      minusculas += c;
      maiusculas += String.fromCharCode(code - 32);
    } else {
      minusculas += c;
      maiusculas += c;
    }
  }

  console.log(minusculas);
  console.log(maiusculas);
}

function minusculaEMaiuscula3(texto) {
  console.log("VERSÃO 3: mapeamento (substituição manual)");

  const letrasMaiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const letrasMinusculas = "abcdefghijklmnopqrstuvwxyz";

  const mapMinusculas = new Map();
  const mapMaiusculas = new Map();

  for (let i = 0; i < letrasMaiusculas.length; i++) {
    mapMinusculas.set(letrasMaiusculas[i], letrasMinusculas[i]);
    mapMaiusculas.set(letrasMinusculas[i], letrasMaiusculas[i]);
  }

  let minusculas = "";
  let maiusculas = "";

  for (const c of texto) {
    if (mapMinusculas.has(c)) {
      minusculas += mapMinusculas.get(c);
      maiusculas += c;
    } else if (mapMaiusculas.has(c)) {
      minusculas += c;
      maiusculas += mapMaiusculas.get(c);
    } else {
      minusculas += c;
      maiusculas += c;
    }
  }

  console.log(minusculas);
  console.log(maiusculas);
}

// ------------------- Testes -------------------
const testes = ["Ola", "TESTE", "salve", "Python"];

for (const t of testes) {
  minusculaEMaiuscula1(t);
  minusculaEMaiuscula2(t);
  minusculaEMaiuscula3(t);
  console.log();
}
