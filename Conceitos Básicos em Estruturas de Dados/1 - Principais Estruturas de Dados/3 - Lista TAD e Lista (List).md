# Lista TAD (Tipo Abstrato de Dados)

Uma lista enquanto tipo abstrato de dados "(algumas vezes chamada de lista linear) é um grupo de itens organizados em uma ordem linear. [...] Listas suportam certas operações fundamentais." (Lafore, 2004)

"Não confunda a lista TAD com a lista encadeada [...] Uma lista é definida por sua interface: os métodos específicos usados para interagir com ela. Essa interface pode ser implementada por várias estruturas, inclusive vetores e listas encadeadas. A lista é uma abstração de tais estruturas de dados." (Lafore, 2004)

As listas são normalmente implementadas como listas encadeadas (encadeamento simples ou duplo) ou como arrays, geralmente de comprimento variável ou arrays dinâmicos.

## Lista Ordenada

Listas podem ser ordenadas, ou seja, possuir seus dados armazenados de acordo com uma ordem e lógica de classificação.

Por exemplo, uma lógica de classificação para uma ordem crescente (do menor item para o maior) ou decrescente (do maior item para o menor).

# Lista (List)

Uma lista é uma estrutura de dados utilizada para armazenar elementos, iguais ou distintos, do mesmo tipo ou de tipos diferentes de forma sequencial.

Embora a lista apresente algumas semelhanças a aos array, em um array apenas podemos armazenar elementos do mesmo tipo e em uma lista, em algumas linguagens tais como Python e Javascript, podemos armazenar em uma única lista elementos de diferentes tipos de dados. Algumas linguagens não oferecem uma estrutura de dados de lista , mas oferecem o uso de arrays associativos ou algum tipo de tabela para emular listas.

A forma padrão de implementar listas, originada na linguagem de programação Lisp, é fazer com que cada elemento da lista contenha seu valor e um ponteiro indicando a localização do próximo elemento na lista.

## Interface de Operações

A interface de operações de uma lista pode variar de acordo com a implementação de cada linguagem de programação que a disponibilizar, porém podemos destacar algumas das operações mais utilizadas:

## add(element)

Insere um elemento no final (ultimo espaço de armazenamento disponível) da lista.

## pop()

Remove e retorna o ultimo elemento da lista.

## insert(index, element)

Insere um dado elemento em um dado index da lista.

## remove(element)

Remove a primeira ocorrência de um dado valor na lista.

## get(index)

Retorna o elemento em um dado index da lista.

## indexOf(object)

Retorna o index da primeira ocorrência de um dado objeto na lista.

## contains(object)

Retorna verdadeiro se um dado objeto estiver armazenado na lista, e falso caso o contrário.

## isEmpty()

Retorna verdadeiro se nenhum elemento esteja armazenado na lista, e falso caso esteja.

## size()

Retorna o tamanho (quantidade de elementos armazenados) da lista.

## Referências

* [Listas](Anexos/04-listas.pdf) - [Prof. MSc. Ricardo Nunes](https://www.escavador.com/sobre/5594419/ricardo-rubens-gomes-nunes-filho)

* [List (abstract data type) - Wikipedia](https://en.wikipedia.org/wiki/List_(abstract_data_type))

* [List in Data Structure - Scaler Topics](https://www.scaler.com/topics/list-in-data-structure/)

* [Java Interface List<E> - Oracle](https://docs.oracle.com/javase/8/docs/api/java/util/List.html)

* Estruturas de Dados e Algorítmos em Java (Tradução da 2ª Edição) - Robert Lafore