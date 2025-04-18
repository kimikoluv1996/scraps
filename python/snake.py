def character(value):
    print(chr(value))


def pascal(value: str):
    lista = list()
    for word in value.split():
        x = word.capitalize()
        lista.append(x)

    return "".join(lista)

print(pascal("hell world bay bay"))
