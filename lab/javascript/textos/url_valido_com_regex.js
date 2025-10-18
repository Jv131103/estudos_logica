function is_url(url) {
  const regex = /^https?:\/\/[\w.-]+\.[a-zA-Z]{2,}(\/[^\s]*)?$/;
  return regex.test(url);
}

const urls = [
  "https://www.google.com",
  "http://meusite.org",
  "https://openai.com/research",
  "https://sub.dominio.gov.br/teste",
  "ftp://arquivo.com",          // inválido
  "http://",                    // inválido
  "https://meu site.com",       // inválido (espaço)
  "https://meusite"             // inválido (sem TLD)
];

for (const u of urls) {
  console.log(`${u.padEnd(35)} -> ${is_url(u) ? "Válido" : "Inválido"}`);
}
