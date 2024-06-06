# Frida_TC1030
Este es mi proyecto de la materia Programación Orientada a Objetos. Es una plataforma de audio donde el usuario se puede registar, realiza el calculo de pago y ademas permite consultar contenido a la plataforma. Este sistema permite administrar tanto el aspecto de  contenido como de los usarios. 

# Funcionalidad
La clase principal es enterprise, la cual crea el objeto de empresa que proporciona informacion sobre esta. Por medio de asociacion esta clase se relaciona con subscribe, la cual crea un objetos con los datos de el usuario y atraves de clases con relacion de herencia determina el precio de la subscripcion. La clase emterprise tambien se realciona pod emedio de agregacion con content la cual es una clase abstracta que tiene como herencia a las clases de music y podcast, estas muestrar el contenido disponible en la plataforma.

# Consideraciones
El programa solo corre en consola y esta escrito en C++ por lo que corre en todos los sistemas operativos
Algunos de los casos en los que mi proyecto dejaria de funcionar son los siguientes: 
- Si se ingresa un tipo de dato que no corresponde con el de la variable.
- La clase content tiene un arreglo con limite 5, para fines practicos, asi que si se crean mas objetos que este limite el codigo podria llegar a tronar.
  
