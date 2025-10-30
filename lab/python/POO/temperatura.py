class Temperatura:
    @staticmethod
    def convert_celcius_to_fahrenheit(celcius):
        return (celcius * 1.8) + 32


t = Temperatura()
print(t.convert_celcius_to_fahrenheit(20))
