function removerAcentos(txt) {
  return txt.normalize("NFD").replace(/[\u0300-\u036f]/g, "");
}

function palinder(text) {
  text = removerAcentos(text.trim().toLowerCase());
  let contrario = "";
  for (let i = text.length - 1; i >= 0; i--) {
    contrario += text[i];
  }
  return contrario === text;
}

function palinder2(text) {
  text = removerAcentos(text.trim().toLowerCase());
  const original = [...text];
  const contrario = [];
  for (let i = text.length - 1; i >= 0; i--) {
    contrario.push(text[i]);
  }
  return JSON.stringify(original) === JSON.stringify(contrario);
}

function palinder3(text) {
  text = removerAcentos(text.trim().toLowerCase());
  return text === [...text].reverse().join("");
}

console.log(palinder("abá"));
console.log(palinder2("abá"));
console.log(palinder3("abá"));
