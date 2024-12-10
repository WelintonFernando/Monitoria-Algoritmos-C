# Controle de Livros Emprestados
  
O IFSP necessita controlar os empréstimos realizados na biblioteca, pois alguns livros já
não se encontram mais nas dependências da biblioteca, para isso a Roberta convidou
vocês para implementar uma pequena aplicação capaz de gerenciar os livros
emprestados. Para gerenciar os livros emprestados são necessários os seguintes itens:
numero do tombo, título, autores, ano, quantidade de empréstimo e situação.

## Livro  
| tombo | titulo | autores | ano | emprestimos | situação|  
|--------|------|----------|--------|--------|---|  
|1|Aprendendo Java|Deitel|2004|3|D|
|2|Aprendendo C   |Zanatta|2011|12|E|
|3|Estruturas de Dados|Marcelo|2001|4|E|
|4|Sistemas Operacionais 2|Trevisani|2025|3|D|
|5|Aprendendo Kotlin|Max|2020|7|E|
  
Para que o programa ajude a Roberta no controle dos livros emprestados, ele deve
permitir realizar as seguintes atividades:  

1. ncluir novos livros, a situação desse livro deve ser D – Disponível e a quantidade de empréstimos deve ser 0;  

2. Alterar, pesquisar e excluir/recuperar livros, como também a exclusão física dos registros excluídos logicamente. Quando alterar, a quantidade de empréstimos não deve ser alterada.

3. Apresentar a lista de livros com sua situação Emprestado ou Disponível e ao final apresentar a quantidade de empréstimos já realizado pela biblioteca, considerando todos os livros;  

4. Incluir um novo empréstimo, para isso deve-se solicitar o número de tombo do livro, localizar o livro no arquivo e apresentar seus dados e perguntar ao usuário se o livro será emprestado, caso ele confirme, alterar a situação do livro para E – Emprestado e aumentar em 1 a quantidade de empréstimos. Só poderá realizar o empréstimos para livros que estiverem disponíveis.  

5. Realizar a devolução do livro, onde deverá solicitar o número do tombo, apresentar os dados do livro e solicitar ao usuário se deseja devolver o livro. Quando o livro for devolvido deve-se alterar a situação para D – Disponível.  

6. Apresentar uma relação de livros que estão emprestados e no final apresentar a quantidade de livros que estão emprestados. 
