A função do código é calcular e imprimir a área de diversas formas geometricas.

Os principios feridos no código foram:

Princípio da Responsabilidade Única (SRP):
    A classe Retangulo e a classe Quadrado possuem as funções de armazenarem os dados para calcular suas respectivas áreas, além de calcular as áreas, violando assim o SRP, pois elas possuem mais de uma função.

Princípio do Aberto/Fechado (OCP):
    Para adicionar um novo tipo de forma, seria necessário modificar a função "printArea()", violando assim  o OCP, que afirma que as classes devem ser abertas para extensão, mas fechadas para modificação.

Princípio da Substituição de Liskov (LSP):
    A classe "Quadrado" herda da classe "Retangulo", mas substitui o comportamento dos métodos "setLargura()" e "setAltura()", o que viola o princípio de substituição de Liskov. O contrato de comportamento estabelecido pela classe base (Retangulo) não é mantido pela classe derivada (Quadrado).

Princípio da Inversão de Dependência (DIP):
    Não é uma violação direta neste código, mas em uma implementação mais ampla, a dependência direta da função printArea() com a classe Retangulo e Quadrado pode ser considerada uma violação do DIP. Idealmente, a função "printArea()" deve depender de uma abstração em vez de classes concretas.


Porque o novo código respeita os princípios

Princípio da Responsabilidade Única (SRP):
    As classes ""Circulo"" e "Quadrado" tem apenas uma responsabilidade, que é armazenar e fornecer informações sobre um círculo e sobre um quadrado respectivamente. Enquanto as
    classes ""Circulo"AreaCalculator" e "QuadradoAreaCalculator" têm apenas a responsabilidade de calcular as áreas
    A classe "Printer" também tem uma única responsabilidade, que é imprimir a área de uma forma.

Princípio Aberto/Fechado (OCP):
    As classes "Circulo", Quadrado, "CirculoAreaCalculator", "QuadradoAreaCalculator" e "Printer" estão abertas para extensão, mas fechadas para modificação.

Princípio da Substituição de Liskov (LSP):
    As subclasses "Circulo" e "Quadrado" substituem sua classe base Forma sem afetar o comportamento do programa. Ou seja, onde quer que uma Forma seja usada, uma "Circulo" ou "Quadrado" pode ser usada no lugar sem problemas.

Princípio da Segregação de Interfaces (ISP):
    Não há interfaces grandes e complexas sendo implementadas por nenhuma classe. Cada classe tem apenas os métodos necessários para cumprir sua responsabilidade específica.
