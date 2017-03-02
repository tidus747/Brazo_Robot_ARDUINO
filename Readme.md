# Control de un brazo robot de 4 grados de libertad basado en ARDUINO

Estos códigos han sido utilizados para la serie de tutoriales creada por Piensa 3D en su canal de [YouTube](http://youtube.com/piensa3d). Con respecto a la construcción del brazo robot nos hemos basado en las siguientes referencias que posteriormente hemos fabricado usando una impresora BQ Prusa Hephestos i3. Los links de referencia son los siguientes:

* https://github.com/codebendercc/MatrixMath
* http://www.thingiverse.com/thing:994180/#files
* http://www.instructables.com/id/Building-the-Robotic-Arm-with-3DP-Arduino/step3/Assemble-Robotic-Arm/


## Breve introducción al funcionamiento
Las dos variantes del código que hemos publicado son muy sencillas. En la denominada *Brazo_Robot* se implementa el control serial del robot implementando también las restricciones constructivas (en caso de construir tu propio brazo, las restricciones constructivas deben cambiarse). Por otra parte, en la implementación *Brazo_robot_simple* se pretende testear que todos los motores funcionan correctamente por lo que el movimiento realizado es arbitrario.

## Trabajo futuro
Aún estamos trabajando en mejorar el control del brazo robótico e incluso estamos evaluando incorporar control visual al robot para el cálculo automático de los parámetros de Denavit-Hatenberg. Iremos publicando todas las novedades ...
