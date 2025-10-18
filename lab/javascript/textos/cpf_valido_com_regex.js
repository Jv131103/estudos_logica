function is_cpf(cpf) {
  cpf = cpf.trim();
  const regex = /^\d{3}\.\d{3}\.\d{3}-\d{2}$/;
  return regex.test(cpf);
}

const cpfs = [
  "123.456.789-10",
  "111.111.111-11",
  "12345678910",
  "12.3456.789-10",
  "123.456.789-100"
];

for (const cpf of cpfs) {
  console.log(`${cpf} -> ${is_cpf(cpf) ? "Válido" : "Inválido"}`);
}
