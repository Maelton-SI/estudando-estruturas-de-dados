# Funções


**Funções** são estruturas que agrupam um **bloco de comandos**, que retornam um **único valor** ao final de sua execução:

```
tipo nome_funcao(tipo parametro1, tipo parametro2) {
    
    codigo...
    return valor_de_retorno;
}
```

* Toda **função** deve ter um **tipo**. Esse **tipo** determina qual será o **tipo** de seu valor de retorno

* Uma função pode não ter **parâmetros**, basta não infromá-los

* Na linguagem C, funções **não** ´podem ser declaradas **dentro** de outras funções.

* Na linguagem C, não pode existir sobrecarga de funções.

<br>

# Passagem de Parâmetros

Em C existem duas formas de realizar a passagem de parâmetros de uma função. São elas a passagem por valor e a passagem por referência.

## Passagem por valor

É feito uma cópia **argumento/valor** (ou **variável**), que pode ser usada e alterada dentro da função **sem afetar** a variável da qual ela foi gerada.

Observe o trecho de código exemplo abaixo e veja sua execução:

**Código:**
```
#include <stdio.h>

int increases(int x) {
    x += 1; 
    return x;
}

int main() {

    int a = 10;
    printf("a> %d\n\n", a);

    int b = increases(a);
    printf("b> %d\n", b);

    printf("a> %d\n\n", a);

    return 0;
}
```

**Execução:**

![](images/execucoes-4.png)

## Passagem por referência

