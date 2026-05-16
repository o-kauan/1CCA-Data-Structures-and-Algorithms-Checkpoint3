## 1CCA-Data-Structures-and-Algorithms-Checkpoint3

## Integrantes: 
Guilherme Figueira Velloso RM 568827, 

José Augusto Ribeiro Freire Manfrinato RM 571151, 

Thiago Soalheiro Diamantino RM 569316, 

Kauan Damasceno de Lima RM 573727, 

João Augusto Poloniato Telles RM 571443, 

Lais da Silva Dias RM 569943.
## O que é o projeto? 
Esta atividade consiste no desenvolvimento de um software em linguagem C que simula as operações básicas de um Caixa Eletrônico (ATM). 
O objetivo principal é aplicar os conceitos fundamentais de programação estruturada em um cenário do mundo real. 
O projeto foi realizado de forma colaborativa em equipe.
## Como funciona o projeto: 
O sistema opera em um ciclo contínuo de interação com o usuário através do console, iniciando com um saldo padrão de 1000.00.
O fluxo principal funciona da seguinte maneira. Menu Interativo ao iniciar, o programa apresenta um menu visual com as opções disponíveis.
Processamento de Escolhas onde o usuário digita o número da operação desejada. O sistema valida se a opção é correta e direciona para a funcionalidade correspondente. 
Caso o usuário insira uma opção fora do intervalo, um aviso de opção inválida é exibido. Fluxo de Repetição utilizando um loop,
após finalizar qualquer operação o sistema exibe o menu novamente, permitindo que o usuário faça novas movimentações até que decida voluntariamente encerrar o programa digitando a opção zero.
## Operações Financeiras. 
Consultar Saldo: exibe o saldo atualizado da conta. 

Realizar Saque: solicita um valor para saque. O sistema verifica duas condições vitais, se o valor é positivo e se há saldo suficiente antes de debitar. Se não houver, a operação é bloqueada e o usuário é avisado. 

Realizar Depósito: adiciona o valor informado ao saldo atual, verificando antes se o valor inserido é maior que zero para evitar depósitos inválidos. 

Sair: encerra a execução com uma mensagem de despedida.
## Aspectos Técnicos do Código:
Para garantir a estabilidade e organização do sistema, algumas lógicas foram aplicadas. Modularização de Funções onde o código evita acumular tudo no método principal. 
Cada operação tem a sua própria função dedicada, facilitando a manutenção e leitura. Tratamento de Buffer de Teclado logo após a leitura da opção do menu para limpeza da entrada. 
Isso impede que o programa entre em um loop infinito ou quebre caso o usuário digite acidentalmente uma letra ou caractere especial em vez de um número. 
Retorno de Valores Atualizados onde as funções de saque e depósito recebem o valor do saldo como parâmetro, realizam as validações matemáticas e retornam o novo saldo atualizado de volta para a função principal.
## Histórico de Contribuições. 
O grupo desenvolveu o projeto em conjunto durante as aulas e ao longo da semana. A divisão das implementações principais foi a seguinte. 

José Manfrinato fez a lógica de Consultar Saldo. 

Kauan Damasceno tratou da criação do arquivo principal e estruturação do Menu. 

Thiago Soalheiro assumiu o sistema de opções e a organização do projeto. 

João Augusto e Lais da Silva encarregaram-se da lógica de Realizar Saque e Realizar Depósito. 

Guilherme Velloso ficou com o sistema de saída.
