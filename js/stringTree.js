const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function stringTree(x) {
    if (x <= 0)
        return [];
    
    let arvore = [];
    let espaco = x - 1;

    for (let i = 0; i < x; i++) {
        let linha = '';
        if (espaco > 0) {
            for (let j = 0; j < espaco; j++)
                linha += ' ';
        }
        for (let j = 0; j < (x-espaco); j++) {
            linha += "#";
        }
        espaco--;
        arvore.push(linha);
    }    
    return arvore;
}


rl.question('Altura da árvore: ', (x) => {
    rl.close();
    let arvore = stringTree(x);

    for (let i = 0; i < x; i++)
        console.log(arvore[i]);
});