#!/bin/bash

usuario="Jv131103"      # Adicione seu nome de usuário do GitHub
repositorio="estudos_logica"  # Adicione o nome do repositório

# Função para imprimir mensagens coloridas
print_msg() {
    cor=$1
    msg=$2
    case $cor in
        verde) echo -e "\e[32m$msg\e[0m" ;;
        vermelho) echo -e "\e[31m$msg\e[0m" ;;
        amarelo) echo -e "\e[33m$msg\e[0m" ;;
        *) echo "$msg" ;;
    esac
}

# Verifica se usuário e repositório foram preenchidos
if [ -z "$usuario" ] || [ -z "$repositorio" ]; then
    print_msg vermelho "Erro: Preencha as variáveis 'usuario' e 'repositorio' antes de executar o script."
    exit 1
fi

# Iniciar repositório Git
print_msg amarelo "Iniciando git init..."
git init || { print_msg vermelho "Erro ao iniciar repositório."; exit 1; }
print_msg verde "Repositório Git iniciado com sucesso!"

# Adicionar arquivos e fazer commit
print_msg amarelo "Adicionando arquivos e realizando commit..."
git add . && git commit -m "feat/initial_project" || {
    print_msg vermelho "Erro ao adicionar ou commitar arquivos."; exit 1;
}
print_msg verde "Arquivos adicionados e commit realizado com sucesso!"

# Adicionar repositório remoto
print_msg amarelo "Adicionando repositório remoto..."
git remote add origin https://github.com/$usuario/$repositorio.git || {
    print_msg vermelho "Erro ao adicionar repositório remoto."; exit 1;
}
print_msg verde "Repositório remoto configurado com sucesso!"

# Enviar para o GitHub (forçando push)
print_msg amarelo "Enviando para o GitHub..."
git branch -M main
git push -u origin main --force || {
    print_msg vermelho "Erro ao fazer push para o GitHub."; exit 1;
}
print_msg verde "Push realizado com sucesso!"

print_msg verde "🚀 Projeto enviado com sucesso! Fim da execução."
