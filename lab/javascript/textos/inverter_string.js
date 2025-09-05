function inverter(string) {
    let invertido = "";
    for (let i = string.length - 1; i >= 0; i--) {
        invertido += string[i];
    }
    console.log(invertido);
    return invertido;
}

inverter("casa");

if (inverter("radar") === "radar") {
    console.log("É palíndromo");
}
