# Left Child Right Sibling Representation

É uma representação diferente de uma árvore de aridade n que consiste em utilizar duas referencias, uma para o primeiro filho e outra para o primeiro irmão a direita, em vez de utilizar um array para armezenar as referencias de todos os nós.

## Vantagens

- Essa representação utiliza menos memória, visto que limita o número de referências a no máximo duas por nó.

- É mais fácil de ser codificada.

## Desvantagens

- Operações básicas como procurar/inserir/deletar tendem a levar mais tempo para encontrar o elemento apropriado, pois no pior caso seria necessário percorrer todos os irmãos do nó para aplicar alguma dessas funções.
