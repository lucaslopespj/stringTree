<h1>String Tree</h1>

<h2>Problema:</h2>
<p>Dado um numero inteiro N imprimir o seguinte padrão de "árvore" de Strings
de acordo com o tamanho dado:</p>

<pre>
N = 1
    #

N = 2 
    #
   ##

N = 4
    #
   ##
  ###
 ####

N = 7
      #
     ##
    ###
   ####
  #####
 ######
#######
</pre>

<h2>Soluções</h2>
<p>Apresento a solução desse problema em um algoritmo impelementado em C, JavaScript e Python</p>

<p>Em especial gosto mais da solução em C pois usa <em>alocação dinâmica</em> de memória.</p>

<h3>Como testar</h3>

<h4>C:</h4>
<p>Para compilar o código em C você num terminal Linux pode fazer:<br>
    <code>$ gcc stringTree.c -o stringTree -Wall -ansi -pedantic -O2</code><br>
    <br>Após compilado execute com o seguinte comando:<br>
    <code>$ ./stringTree</code>
</p>

<h4>JavaScript:</h4>
<p>Para executar o código em JavaScript <b>precisa ter NodeJS instaldo</b>.
Após baixar a pasta <strong>js</strong> faça <code>npm install</code> para instalar o pacote <em>readline</em> do NodeJS. Após isso basta digitar:
    <code>$ node stringTree.js</code>
</p>

<h4>Python:</h4>
<p>Para executar o código em Python poderá usar um terminal Linux:<br>
    <code>$ python3 stringTree.py</code>
</p>