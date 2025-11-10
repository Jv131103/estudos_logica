def is_anagram(text1, text2):
    dict_contador = {}

    for text in text1:
        dict_contador[text] = dict_contador.get(text, 0) + 1

    for text in text2:
        if text not in dict_contador:
            return False
        dict_contador[text] -= 1

        if dict_contador[text] == 0:
            del dict_contador[text]

    return not dict_contador


print(is_anagram("amor", "roma"))
print(is_anagram("casa", "caso"))
