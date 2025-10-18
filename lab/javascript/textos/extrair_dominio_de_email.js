function is_email(email) {
  const regex = /^[\w.-]+@[\w.-]+\.\w{2,}$/;
  return regex.test(email);
}

function extract_dominio(email) {
  if (!is_email(email)) return "Não é EMAIL";

  const match = email.match(/@([\w.-]+\.[a-zA-Z]{2,})$/);
  return match ? match[1] : "Domínio não encontrado";
}

// -------------------- Testes --------------------
const data_emails = [
  "teste@email.com.br",
  "olamundo.com",
  "jvj12@teste.com",
  "teste@gmail.com"
];

for (const data_email of data_emails) {
  console.log(`${data_email.padEnd(25)} -> ${extract_dominio(data_email)}`);
}
