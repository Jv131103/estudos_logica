print("DICT NORMAL:")
d1 = {"a": 1}
d2 = {"b": 2}
d3 = {**d1, **d2}   # cria um novo
print(d1, d2, d3)   # {'a':1} {'b':2} {'a':1,'b':2}
print("DICT IN-PLACE")
d1 = {"a": 1}
d2 = {"b": 2}
d1.update(d2)
print(d1)           # {'a':1,'b':2} (alterado)

print("CONJUNTOS NORMAL:")
s1 = {1, 2}
s2 = {2, 3}
s3 = s1 | s2
print(s1, s2, s3)   # {1,2} {2,3} {1,2,3}
print("CONJUNTOS IN-PLACE:")
s1 = {1, 2}
s2 = {2, 3}
s1 |= s2
print(s1)           # {1,2,3}
