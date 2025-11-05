import { createRequire } from "node:module";
const require = createRequire(import.meta.url);
const prompt = require("prompt-sync")({ sigint: true });

function pond() {
  let somaPesos = 0;
  let somaProdutos = 0;

  while (true) {
    let entrada = prompt("Nota (ou FIM): ").trim().toUpperCase();
    if (entrada === "FIM") break;

    const nota = Number(entrada);
    if (Number.isNaN(nota)) {
      console.log("⚠️ Entrada inválida de nota. Tente de novo.");
      continue;
    }

    const pesoEntrada = prompt("Peso: ").trim();
    const peso = Number(pesoEntrada);
    if (Number.isNaN(peso)) {
      console.log("⚠️ Entrada inválida de peso. Tente de novo.");
      continue;
    }

    somaProdutos += nota * peso;
    somaPesos += peso;
  }

  if (somaPesos === 0) {
    console.log("❌ Erro: Peso total zero — média impossível.");
    return;
  }

  console.log("Média ponderada =", somaProdutos / somaPesos);
}

pond();
