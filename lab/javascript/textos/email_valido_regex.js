function is_email(email) {
  // Mesmo padrão do seu Python
  const regex = /^[\w.-]+@[\w.-]+\.\w{2,}$/;
  return regex.test(email);
}

const data_emails = ['teste@email.com', 'olamundo.com', 'jvj12@teste.com'];

for (const email of data_emails) {
  if (is_email(email)) {
    console.log(`${email} → Válido`);
  } else {
    console.log(`${email} → Inválido`);
  }
}
