# Pilha (Stack)

"Pilha é uma estrutura linear de dados que pode ser acessada somente por uma de suas extremidades para armazenar e recuperar dados." (Drozdek, 2016)

As operações de adição e remoção de elementos em uma pilha podem ser operadas somente em seu último endereço de armazenamento.

Uma pilha segue o princípio LIFO (Last In First Out), de modo que o ultimo elemento a ser adicionado à pilha será o primeiro a ser removido.

Como em uma caixa profunda de livros, para ter acesso ao ultimo livro no fundo da caixa e sobreposto por vários outros livros, você teria que retirar o ultimo livro, ou seja, o livro no topo da caixa sucessivamente até alcançar o livro desejado no final da pilha de livros.

## Interface de Operações

### push()

Insere um elemento no topo (ultimo espaço de armazenamento disponível) da pilha.

### pop()

Remove e retorna o ultimo elemento da pilha.

### peek()

Retorna o ultimo elemento da pilha.

### isEmpty()

Retorna verdadeiro se nenhum elemento esteja armazenado na pilha, e falso caso esteja.

### isFull()

Retorna verdadeiro se a capacidade de armazenamento da pilha estiver esgotada, e falso caso a pilha ainda possua espaço para armazenamento disponível.

## Complexidade de Tempo das Operações de uma Pilha

* **push()**: O(1)
* **pop()**: O(1)
* **peek()**: O(1)
* **isEmpty()**: O(1)
* **isFull()**: O(1)

## Pilhas Estáticas vs Pilhas Dinâmicas

### Pilha Estática

Pilhas estáticas possuem sua capacidade de armazenamento fixa, essa capacidade pode ser definida na implementação ou em seu momento de instanciamento pelo usuário.

Geralmente pilhas estáticas são implementadas utilizando arrays, que em grande parte das linguagens de programação possuem tamanhos fixos.

### Pilha Dinâmica

Uma pilha dinâmica não possue sua capacidade de armazenamento fixa, isso significa que de acordo com o uso das operações de inserção de elementos (push) ou remoção de elementos (pop) em uma pilha, sua capacidade de armazenamento aumenta ou diminui em tempo de execução.

Uma das maneiras possíveis de implementar pilhas dinâmicas é utilizando listas encadeadas.

## Exemplo de Implementações de Pilhas

* [Pilhas em Java](https://github.com/Maelton-SI/estruturas-de-dados/tree/Java/Java/implementations/stack)

## Exemplos de Uso de Pilhas

**Em breve...**

## Referências

* Estruturas de Dados e Algorítmos em Java (Tradução da 2ª Edição) - Robert Lafore
* Estrutura de Dados e Algorítmos em C++ (Tradução da 4ª Edição norte americana) - Adam Drozdek
* [Stack in C - Scaler Topics](https://www.scaler.com/topics/stack-in-c/)