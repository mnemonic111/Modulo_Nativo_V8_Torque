# Creación de un módulo nativo para Node.

## Dependencias:

* __*Nan*__ (“Native abstraction for nodejs”):
Nos permite estandarizar la codificación de nuestros módulos independientemente de la versión del motor **V8** que estemos 
corriendo.
* __*node-gyp*__ :
* __*bindings*__:


# Compilar el módulo
- Para compilar el módulo debemos ejecutar el siguiente comando en la consola

*Preparamos la compilación*:

> [./node_modules/.bin/]node-gyp configure

*Compilamos*:

> [./node_modules/.bin/]node-gyp build

- Posteriormente a la compilación creamos un directorio 

