function remover_espacos_exagerados1(text, one_pharase = false) {
  text = text.trim(); // remove espaços no início e fim

  if (one_pharase) {
    return text.replace(/ /g, ""); // remove todos os espaços
  }

  let uniao = "";
  let cont = 0;

  for (let i = 0; i < text.length; i++) {
    const char = text[i];
    if (char.trim() !== "") { // se não for espaço
      uniao += char;
      cont = 0;
    } else {
      if (cont === 0) {
        uniao += " "; // adiciona só o primeiro espaço
        cont++;
      }
    }
  }
  return uniao;
}

function remover_espacos_exagerados2(text, one_pharase = false) {
  text = text.trim();
  if (one_pharase) {
    return text.replace(/ /g, "");
  }
  return text.split(/\s+/).join(" ");
}

// -------------------- Testes --------------------
let texto = "esse  texto  veio todo quebrado";
console.log(remover_espacos_exagerados1(texto));
console.log(remover_espacos_exagerados2(texto));

texto = "o la";
console.log(remover_espacos_exagerados1(texto, true));
console.log(remover_espacos_exagerados2(texto, true));
