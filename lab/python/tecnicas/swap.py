a, b = 5, 10
print("Antes:", a, b)

# usando temp
temp = a
a = b
b = temp
print("Depois (com temp):", a, b)

# Pythonic (sem temp)
a, b = b, a
print("Depois (Pythonic):", a, b)
