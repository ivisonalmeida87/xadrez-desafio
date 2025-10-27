# Movimentação de Peças de Xadrez em C  
Desafios Nível Novato, Aventureiro e Mestre

## Descrição Geral
Este projeto implementa simulações de movimentação de peças de xadrez usando linguagem C e estruturas de repetição (or, while, do-while), loops aninhados e lógica mais avançada.

Cada arquivo .c representa um nível de desafio proposto em sala:
- **Nível Novato (xadrez_novato.c)**
- **Nível Aventureiro (xadrez_aventureiro.c)**
- **Nível Mestre (xadrez_mestre.c)**

O foco é imprimir no terminal, passo a passo, como cada peça se move.

---

## Nível Novato (xadrez_novato.c)

### O que o programa faz
Simula os movimentos de 3 peças:
- **Torre**: anda em linha reta horizontal/vertical. No programa, anda 5 casas para a direita.  
- **Bispo**: anda na diagonal. No programa, anda 5 casas na diagonal para cima e para a direita (Cima Direita).  
- **Rainha**: pode andar em todas as direções. No programa, anda 8 casas para a esquerda.  

### Conceitos usados
- or
- printf
- Variáveis inteiras simples
- Saída clara no console

---

## Nível Aventureiro (xadrez_aventureiro.c)

### O que o programa faz
Adiciona o movimento do **Cavalo**, que se move em L.  
Utiliza **loop aninhado** (um loop dentro do outro) para simular o movimento em duas etapas.

### Conceitos usados
- or
- Loop aninhado
- Impressão detalhada do movimento

---

## Nível Mestre (xadrez_mestre.c)

### O que o programa faz
Versão mais avançada:
- Simula Torre, Bispo, Rainha e Cavalo com lógica mais estruturada.  
- Mostra cada bloco com o nome da peça e seus movimentos.  

Exemplo de saída:
Torre:
Direita
Direita
Direita

Bispo:
Cima Direita
Cima Direita
Cima Direita

### Conceitos usados
- Loops simples e aninhados
- Organização em blocos
- Impressão ordenada no console

---

## Como compilar e executar

`powershell
chcp 65001
gcc xadrez_novato.c -o xadrez_novato.exe -std=c99
gcc xadrez_aventureiro.c -o xadrez_aventureiro.exe -std=c99
gcc xadrez_mestre.c -o xadrez_mestre.exe -std=c99

.\xadrez_novato.exe
.\xadrez_aventureiro.exe
.\xadrez_mestre.exe
Autor

Ivison Almeida
Disciplina: Lógica de Programação em C
Tema: Movimentação de Peças de Xadrez
