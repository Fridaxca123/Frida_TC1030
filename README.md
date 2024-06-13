# Frida_TC1030
Este es mi proyecto de la materia Programación Orientada a Objetos. Es una plataforma de audio donde el usuario se puede registar, realiza el calculo de pago, consultar su subscripción y ademas permite consultar contenido a la plataforma (la plataforma te asigna de manera aleatoria una cancion o podcast para escuchar). Este sistema permite administrar tanto el aspecto de  contenido como de los usarios. 

# Funcionalidad
La clase principal es enterprise, la cual crea el objeto de empresa que proporciona informacion sobre esta. Por medio de asociacion esta clase se relaciona con subscribe, la cual crea un objetos con los datos de el usuario y atraves de clases con relacion de herencia determina el precio de la subscripcion. La clase emterprise tambien se realciona pod emedio de agregacion con content la cual es una clase abstracta que tiene como herencia a las clases de music y podcast, estas muestrar el contenido disponible en la plataforma.

# Consideraciones
El programa solo corre en consola y esta escrito en C++ por lo que corre en todos los sistemas operativos
Algunos de los casos en los que mi proyecto dejaria de funcionar son los siguientes: 
- Si se ingresa un string en los valores que pide int el codigo colapsa. 
- El arreglo content limite 5, para fines practicos, asi que si se crean mas objetos que este limite el codigo podria llegar a tronar.
- Debido a que solo son 5 canciones y 5 podcast y se seleccionan de manera aleatoria, se pueden repetir los que te asigna ya que la seleccion es limitada.
- El arreglo subscription tiene limite de 2 para fines practicos, si se agregan mas el codigo comienza a ciclarse.
- Para la funcion 5 del menu primero se debe haber registrado al usuario, si este no se registro primero la funcion 5 de mostrar subscripccion no funcionara. 

# Mejoras que hice a mi proyecto a lo largo de las semanas 
-Cambie el concepto de mi proyecto debido a que no me gustaba el tema, antes era de una empresa que manejaba los empleados y articulos adquiridos. 
- El mayor cambio que hice fue que esraba implementando erroneamente un arreglo que guardaba los datos de contenidos dentro de la clase de contenido. Lo anterior estaba completamente mal y tuve que cambiar el arreglo tanto en el codigo como en el uml para que este estuvira en la clase principal enterprise. 
- Tambien lleve a cabo varios cambios en mi uml principalmente en los metodos y en que estaba usando flechascon relleno para representar herencia y esto estaba mal.
- Para que el usuario pudiera consultar su subscripcion porteriormente cree un arreglo que guardara la subscripcion. 

