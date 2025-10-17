function is_cep(cep) {
  cep = cep.trim(); // remove espaços extras
  const regex = /^[0-9]{5}-[0-9]{3}$/;
  return regex.test(cep);
}

const data_ceps = ["12345-678", "0028978-123", "99990-9999", "24561-009"];

for (const cep of data_ceps) {
  if (is_cep(cep)) {
    console.log(`${cep} -> Válido`);
  } else {
    console.log(`${cep} -> Inválido`);
  }
}
