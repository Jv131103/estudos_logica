def ispar(number):
    return number % 2 == 0


def return_par_ou_impar(number):
    return "Par" if ispar(number) else "Ímpar"


print("**" * 10)
for i in range(0, 10):
    print(f"{i} is {return_par_ou_impar(i)}")
    print("**" * 10)
