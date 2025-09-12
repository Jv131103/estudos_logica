function normalizar(string){
    return String(string).toLowerCase().replace(/\s+/g, "");
}


function is_palinder(string){
    if (! string){
        return false;
    }

    let new_string = normalizar(string);

    return new_string === new_string.split("").reverse().join("");
}


let testes = ["", "a", "aa", "ab", "Radar", "a sac a"];
testes.forEach(element => {
    if (is_palinder(element)){
        console.log("SIM");
    } else{
        console.log("NAO");
    }
});
