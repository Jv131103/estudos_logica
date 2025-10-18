function is_valid_date(date) {
  const regex = /^(0[1-9]|[12]\d|3[01])\/(0[1-9]|1[0-2])\/\d{2,4}$/;
  return regex.test(date);
}

const dates = [
  "25/12/2025",
  "23/02/25",
  "13/12/2025",
  "45/19/2024",
  "00/00/00",
  "5/2/2024"
];

for (const d of dates) {
  console.log(`${d.padEnd(10)} -> ${is_valid_date(d) ? "Válida" : "Inválida"}`);
}
