function is_bissexto(year){
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return true;
    }
    return false;
}


let anos = [1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010,
    2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022,
    2023, 2024, 2025
];

for (let i=0; i<anos.length; i++){
    if (is_bissexto(anos[i])){
        console.log(`${anos[i]} é Bissexto`);
    } else{
        console.log(`${anos[i]} Não é Bissexto`);
    }
}
