<h1>Nivel Básico</h1>

Seja bem-vindo jovem padawan, provavelmente se você está por aqui, ainda está iniciando sua jornada na Linguagem C. 

<p align='center'>
<img src="https://media.giphy.com/media/3ohuAxV0DfcLTxVh6w/giphy.gif" alt="this slowpoke moves" width="800" height="400">
</p>

Meu nome é <strong>Gabriel Vieira</strong>, e eu serei o seu mestre nessa jornada.

Aqui nesse README explico todos os códigos presentes nesta pasta, para que você consiga compreender melhor todos os códigos. 
<h2><strong>Bons Estudos!</strong></h2>

<br>

> <h2> Triângulos </h2>

Um dos exemplos mais conhecidos dos iniciantes de programação, são esses lindos triângulos. Normalmente você terá que plotar um triângulo em várias posições, e de bases diferentes.
Esse exercício serve para você treinar o seu conhecimento com o laço for. 

> <bold><h3>Linhas</h3></bold>

> <bold><h4>Nosso código Linha vertical:</h4></bold>

```c
int main() {
   int i, tamanho, base;
   printf("insira o tamanho das linhas:\n");
   scanf("%i",&tamanho);

   /* Linha Vertical */
   for (i=0; i<tamanho;i++){
      printf("*");
      printf("\n");
   }
   return 0;
 }

```

Vejamos como funciona o script:

> <bold><h3>Variáveis</h3></bold>

Nossas variáveis são números inteiros, onde:
- i = Operador para o laço for
- tamanho = Altura da linha

```c   
int i, tamanho;
```

Antes de começar com os triângulos, vamos entender como fazer linhas com o laço for. 

Nessa parte, estamos printando uma mensagem na tela do usuário, para que ele insira o tamanho da linha que ele deseja. 

```c

   printf("insira o tamanho da linha:\n");
   scanf("%i",&tamanho);

```

Aqui está o laço for, responsável por mostrar a figura.

```c   
   for (i=0; i<tamanho;i++){
      printf("*");
      printf("\n");
   }
 ```
 
 Traduzindo o funcionamento do laço:
  
<strong>Sintaxe:</strong>

```c
for(valor_inicial; condição_final; valor_incremento)
 {
    instruções;
 }
 ```

 Iniciamos o laço ```for```  com  ``` i = 0 ```. O laço irá rodar até que o valor de ```i``` seja menor que o valor do ```tamanho``` setado pelo usuário. Enquanto o valor de ```i``` for menor, faremos a operação i+1, representada pelo ```i++```.
 
 As instruçoes contidas dentro do ```for``` são as funções de ```printf``` que irão imprimir na tela a figura desejada. 
 - ``` printf("*"); ``` desenha o asterisco
 - ```printf("\n");``` responsável por pular uma linha 
 
 > Nosso código Linha horizontal:
 
 ```c
 
int main() {
  int i, tamanho;
  for (i=tamanho; i>0;i--){
    printf("*");
  }
}  
 ```
 
 > <bold><h3>Variáveis</h3></bold>

Nossas variáveis são números inteiros, onde:
- i = Operador para o laço for
- tamanho = Largura da Linha

```c   
int i, tamanho;
```

Aqui está o laço for novamente, responsável por mostrar a figura.

```c 
for (i=tamanho; i>0;i--){
  printf("*");
}
```
Nesse laço, existem duas diferenças interessantes com relação ao laço anterior:
- Como a linha é horiznta, não precisamos pular uma linha
- O valor de incremento agora é valor de decremento

Nesse for, iniciamos com o valor de ```i``` igual ao valor de ```tamanho```. O laço irá rodar até que ```i```  seja maior do que zero, e enquanto essa condição não for satisfeita, fazemos a operação ```i-1``` representada por ```i--```
 A instrução contida dentro do ```for```  irá imprimir na tela a figura desejada. 
 - ``` printf("*"); ``` desenha o asterisco
