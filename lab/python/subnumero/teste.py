# Número em que vamos procurar subnúmeros
numero = 57238

# Quantidade de dígitos que queremos extrair de cada "bloco"
qtd_digitos = 2

# O loop extrai blocos de 'qtd_digitos' do número da direita para a esquerda

# A condição 'numero > 10**(qtd_digitos - 1)' garante que ainda restam dígitos
# suficientes para formar um número com a quantidade desejada de dígitos.

# Exemplo: se qtd_digitos = 2, paramos o loop quando numero < 10
# (ou seja, só restaria 1 dígito)

while numero > 10**(qtd_digitos - 1):
    # Extrai os últimos 'qtd_digitos' dígitos de 'numero'
    # Exemplo: se numero = 57238 e qtd_digitos = 2, então 57238 % 100 = 38
    resto = numero % 10**qtd_digitos

    # Mostra o bloco extraído
    print(resto)

    # Remove o último dígito de 'numero' para preparar a próxima iteração
    # Isso é feito com divisão inteira por 10
    numero //= 10
