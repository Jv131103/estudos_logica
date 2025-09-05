const fs = require("fs");

function retornarInformacoesArquivo(arquivo) {
    try {
        let texto = fs.readFileSync(arquivo, "utf-8");

        console.log(`caracteres: ${texto.length}`);
        console.log(`linhas: ${texto.split(/\r?\n/).length}`);
        console.log(`palavras: ${texto.split(/\s+/).filter(Boolean).length}`);
    } catch (err) {
        console.error("Erro ao ler o arquivo:", err.message);
    }
}

retornarInformacoesArquivo("/home/debianjv/Documentos/estudos_logica/requirements.txt");
