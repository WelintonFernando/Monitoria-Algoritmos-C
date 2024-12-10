# Loja do Mané Portugês
  
O Mané Portugueis necessita controlar os fiados de sua mercearia, visto que o mesmo é
amigo de todas as pessoas da vila e para cada um dos fregueses ele tem uma ficha que
contém as seguintes informações: código, nome, telefone, limite e gastos do mês. Sendo
que o cliente só poderá comprar enquanto estiver dentro do limite estabelecido pelo
Mané.

## Cliente  
| codigo | nome | telefone | limite | gastos |  
|--------|------|----------|--------|--------|  
| 1 |Ângela Ferreira|(18) 977664433|250,00|100,00| 
| 2 |Márcio de Oliveira|(12) 999213312|250,00|100,00|
| 3 |Antonio Carlos|(11) 961998777|250,00|100,00|
| 4 |Cláudia Santos|(17) 970707060|250,00|100,00|
| 5 |Gustavo Marques|(15) 911432123|250,00|100,00|  
  
Para que o programa possa suprir as necessidades do Mané Portugueis, ele deve permitir
realizar as seguintes atividades:
1. Incluir, alterar, pesquisar e excluir/recuperar clientes, como também a exclusão
física dos registros excluídos logicamente.;  

2. Apresentar a lista de clientes;

3. Incluir uma nova venda, para isso deve-se indicar o código do cliente e o valor da venda, se o valor da venda for superior ao permitido para o cliente, não efetuar a venda e enviar uma mensagem dizendo que o valor gasto será superior ao limite do cliente. Se estiver dentro do limite estabelecido, acrescentar o valor da venda ao valor dos gastos no arquivo.  

4. Apresentar a listagem de clientes que possuem dívida com o mané, apresentando o nome do cliente, o telefone de contato e o valor da dívida. No final do relatório deverá ser impresso o total que o Mané tem de fiado.  

5. Apresentar uma listagem geral apresentando todos os clientes com seus dados e também o valor que pode ser gasto por cada um dos clientes, que é a diferença entre o limite e o valor gasto até o momento;  

6. Realizar a quitação da dívida, onde solicitando o código do cliente, deverá apresentar todas as informações esse cliente e solicitar o valor a ser pago pelo cliente. Subtrair o valor pago pelo cliente dos gastos e guardar no arquivo novamente.
