# Vetor (array)

"Um vetor é a estrutura de armazenamento de dados mais comumente usada; é predefinida na maioria das linguagens de programação." (Lafore, 2004)

É uma estrutura de dados linear, ou seja, seus elementos são armazenados em ordem sequencial, de modo que cada elemento tem um antecessor e um sucessor, com exceção do primeiro e último elemento, que possuem apenas um sucessor e um único antecessor respectivamente. 

Um vetor representa uma sequência linear de uma dimensão composta de elementos indexados, na maioria das linguagens de programação vetores são estáticos (possuem uma quantidade fixa de elementos) e seus elementos são do mesmo tipo.

Vetores são utilizados para implementar muitas outras estruturas de dados, tais como pilhas, filas, listas, etc...

Por possuir elementos indexados, sua grande vantagem é o acesso em tempo **O(*1*)** a qualquer um dos elementos através de seu índice.

### Principais funcionalidades:

* Inserir elemento: **O(*1*)**

* Pesquisar elemento (especificando-se o elemento e não seu índice)
    * Elementos duplicados permitidos: **O(*n*)**
    * Elementos duplicados não permitidos: **M(*n/2*)**, **O(*n*)**

* Deletar elemento (especificando-se o elemento e não seu índice)
    * Deletar todas as ocorrências do elemento em um array passível de duplicações: **O(*n*)**
        * Pesquisar elemento: **O(*n*)**
        * Remanejamento dos elementos no array (para não permitir espaços vazios entre elementos): **Mais que M(*n/2*)**, **O(*n*)**
    * Deletar apenas a primeira ocorrência do elemento no array: **O(*n*)**
        * Pesquisar elemento: **M(*n/2*)**, **O(*n*)**
        * Remanejamento dos elementos no array:  **M(*n/2*)**, **O(*n*)**

* Retornar o tamanho (quantidade de elementos) do array: **O(*1*)**

# Referências

* Estruturas de Dados & Algorítmos em Java (Tradução da Segunda Edição) - Robert Lafore

* [Scaller Topics - R Vectors](https://www.scaler.com/topics/vector-in-r/)

* [[ED] Aula 1 - Tipo abstrato de dados (TAD) e Vetores dinâmicos](https://youtu.be/W5yFwUtfpns?si=XjGj98k4eNoWy24i)
