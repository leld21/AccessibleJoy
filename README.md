# AccessibleJoy
Projeto final - IHS
<br />
Objetivo Final: Conseguir rodar comandos no terminal e execucao de scripts a partir do pressionamento de botões ou sequencia de comandos do joystick, 
além disso, será possível mover o cursor do mouse a partir de um analógico e utilizar os botões do mesmo a partir do joystick para melhorar a usabilidade.
<br />
<br />
Ao apertar um determinado botao, ou sequencia de comando anteriormente determinado, sera executado um script dentro da pasta programa, que pode ser modificada 
posteriormente, com a execucao de algum programa, codigo, ou sequencia de botoes.
<br />
<br />
O Arquivo principal eh o hid-sony.c.
<br />

<br />

Descrição/Description:
<br />
Módulo pro linux que subistitui o driver padrao do dualshock 4 (hid-sony.c) para realizar algumas coisas como : mover o mouse com analogico direito, apertar botões do mouse e/ou teclado e relacionar ao aperto de botões ( X,triangulo, quadrado, bola ) e sequencia de comandos (analogico esquerdo pra direita + triangulo ) a execução de scripts ( na pasta programas).
<br />
<br />
Module for linux that replaces the standard dualshock 4 driver (hid-sony.c) to do some things like: move the mouse with the right joystick, press mouse and/or keyboard keys and bind to the press of buttons ( X, triangle, square, circle) and sequence of commands (left analogue to right + triangle) the execution of scripts (in the programas folder).
<br />
<br />
COMO FAZER FUNCIONAR/HOW MAKE IT WORK:
<br />
primeiro conecta seu dualshock4 no bluetooth/ first connect your dualshock4 on bluetooth;
<br />
então/then :
<br />
rmmod hid-sony
<br />
insmod hid-sony.ko
<br />
<br />
TO-DO:
<br />
Ainda ta faltando colocar no módulo mais opções de comandos, como por exemplo analogico esquerdo pra baixo + circulo, analogico esquerdo pra direita + x, etc, e fazer os executaveis relacionados.
<br />
Falta também melhorar a função de mover o cursor, pois está limitado a uma resolução absoluta de 255x255, talvez usando o input_report_rel seja uma opção.
<br />
Por fim alguns dos programas abertos, como a calculadora (X) e firefox(Circulo) demoram um pouco pra abrir.
<br/>
<br />
It still lacks to put more command options in the module, such as left joystick down + circle, left joystick right + x, etc, and scripts for them.
<br />
Also needs to improve the function of moving the cursor, as it is limited to an absolute resolution of 255x255, perhaps using input_report_rel is an option.
<br />
Finally, some of the programs opened, such as the calculator (X) and firefox (Circulo) take a while to open.
