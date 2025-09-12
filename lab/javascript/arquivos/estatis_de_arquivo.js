const fs = require("fs");

function lerTexto(caminho) {
    try {
        return fs.readFileSync(caminho, "utf-8");
    } catch (err) {
        if (err.code === "ENOENT") {
            console.log("Erro: arquivo não encontrado.");
        } else if (err.code === "EACCES") {
            console.log("Erro: permissão negada.");
        } else {
            console.log("Erro desconhecido:", err.message);
        }
        process.exit(1);
    }
}

function contarCaracteres(texto) {
    return texto.length;
}

function contarLinhas(texto) {
    return texto.split(/\r?\n/).length;
}

function contarPalavras(texto) {
    return texto.trim().split(/\s+/).filter(Boolean).length;
}

function main() {
    const caminho = require("prompt-sync")()("Digite o caminho do arquivo: ");
    const texto = lerTexto(caminho);

    console.log(`Caracteres: ${contarCaracteres(texto)}`);
    console.log(`Linhas: ${contarLinhas(texto)}`);
    console.log(`Palavras: ${contarPalavras(texto)}`);
}

main();
