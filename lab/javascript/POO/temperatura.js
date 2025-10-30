class Temperatura {
  static convertCelsiusToFahrenheit(celsius) {
    return (celsius * 1.8) + 32;
  }
}

// Chamada direta pela classe
console.log(Temperatura.convertCelsiusToFahrenheit(20));
