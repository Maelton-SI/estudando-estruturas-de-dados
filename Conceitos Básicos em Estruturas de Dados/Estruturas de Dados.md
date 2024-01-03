# O que são estruturas de dados?

Dado um conjunto de dados que precisa ser processado ou armazenado na memória, faz-se necessária uma estrutura, uma forma de organizar esses dados. Uma estrutura de dados dita a organização de dados na memória de um computador ou dispositivo de armazenamento.

As estruturas de dados são utilizadas para armazenar, organizar e manipular informações, idealmente de forma performática, desempenhando papel fundamental na programação, pois permitem que os dados sejam acessados e gerenciados de maneira eficaz e idealmente, de maneira eficiente.

As estruturas de dados são implementações concretas de tipos de dados abstratos, esses tipos de dados abstratos possuem características que definem a forma com que as estruturas de dados organizam os dados e coleções de dados na memória de um computador para que sejam processados ou armazenados em algum dispositivo.

**Keywords:** ***estruturas de dados***, [***implementações concretas***](./Tipos%20de%20Dados.md), [***tipos de dados abstratos.***](./Tipos%20de%20Dados.md)

# Exemplos de Estruturas de Dados

## Array (Vetor)

"Um vetor é a estrutura de armazenamento de dados mais comumente usada; é predefinida na maioria das linguagens de programação." (Lafore, 2004)

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

* Tamanho (quantidade de elementos) do array: **O(*1*)**
