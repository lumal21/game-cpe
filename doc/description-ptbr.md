# Game X

Game estilo sandbox.

### Características do game
  * Mundo aberto com diferentes terrenos e entidades autônomas;
  * Liberdade para mover o avatar e interagir com o ambiente;

### Detalhes técnicos
O game será escrito utilizando a linguagem C++ no padrão MVC.

#### Organização estrutural

O mundo implementado será bidimensional. Qualquer posição espacial do mundo poderá (leia-se deverá) ser referenciada através de um par ordenado (A, B) tal que "A" e "B" pertencem aos números naturais. "A" representa a posição vertical e "B" a posição horizontal. Qualquer elemento do jogo ativo assume uma posição (A, B) em um instante qualquer da execução.

O mundo será composto de quatro elementos:
  * Terreno: Terra, água, relva, deserto, etc.
  * Objetos
    * Dinâmicos: Pedra, ferramenta, etc.
    * Estáticos: Árvore, rocha, etc.
  * Entidade autônoma: Animal, pessoa, monstro, etc.
  * Avatar: A entidade controlada pelo jogador.