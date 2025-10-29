from abc import ABC, abstractmethod


class Animal(ABC):
    @abstractmethod
    def falar(self):
        return


class Cachorro(Animal):
    def falar(self):
        return "Au au"


class Gato(Animal):
    def falar(self):
        return "Miau"


cachorro_carvao = Cachorro()
print("Cachorro:", cachorro_carvao.falar())

gato_butters = Gato()
print("Gato:", gato_butters.falar())
