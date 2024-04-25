A função do código é calcular e imprimir a área de diversas formas geometricas.

Os
 principios feridos no código foram:

1- Responsabilidade única
	A função "imprimirArea" além de imprimir a área, ela seleciona qual tipo de figura que vai ser imprimida.

2- Princípio aberto-fechado
	Se novos tipos de figuras forem adicionados, a função "imprimirArea" precisaria ser modificada para lidar com os novos casos.

3- Princípio da substituição de Liskov
	Não existe herança explícita neste código, mas o tipo "Figura" é usado para representar diferentes tipos de figuras e a substituição da "Figura" por uma subclasse não é transparente, pois é necessário fazer uma conversão de tipo.

4- Princípio da Segregação da Interface 
	Não há interfaces explícitas neste código, mas a função "imprimirArea" está dependendo do tipo específico Figura, o que pode levar a problemas se mais métodos relacionados a figuras forem adicionados no futuro.


Porque o novo código respeita os princípios

1- Responsabilidade única
    Agora a função "imprimirArea" apenas imprime o resultado calculado.

2- Princípio aberto-fechado
    Caso novas formas geometricas sejam adicionadas, a função "imprimirArea" não é mais prejudicada, sendo necessário apenas criar uma struct com os valores necessários para calcular a área e a função que calcula a mesma.

3- Princípio da substituição de Liskov
    As subclasses criadas podem ser usadas em qualquer lugar que a base "FormaGeometrica" é esperada sem afetar o comportamento do programa.

4- Princípio da segregação de interfaces
    As structs "Retangulo" e "Circulo" implementam apenas os métodos que são relevantes para elas, nenhuma classe é forçada a implementar métodos que não usa.