// Regex antigas e novas (Mercosul)
const RE_ANTIGA = /^[A-Z]{3}-?\d{4}$/;
const RE_MERCOSUL = /^[A-Z]{3}\d[A-Z]\d{2}$/;

function validar_placa_br(placa) {
  /**
   * Retorna [true, 'ANTIGA'|'MERCOSUL'] se válida, senão [false, ''].
   * Aceita letras minúsculas e ignora espaços nas pontas.
   */
  const p = placa.trim().toUpperCase();

  if (RE_ANTIGA.test(p)) return [true, "ANTIGA"];
  if (RE_MERCOSUL.test(p)) return [true, "MERCOSUL"];
  return [false, ""];
}

// -------------------- Testes --------------------
const placas = [
  "ABC-1234",   // antiga (com hífen)
  "ABC1234",    // antiga (sem hífen)
  "BRA2E19",    // mercosul
  "abc1d23",    // mercosul (minúsculas)
  "AB-1234",    // inválida
  "ABCD-1234",  // inválida
  "ABC12D3",    // inválida (ordem errada)
];

for (const p of placas) {
  const [ok, tipo] = validar_placa_br(p);
  console.log(`${p.padEnd(10)} -> ${ok ? "Válida: " + tipo : "Inválida"}`);
}
