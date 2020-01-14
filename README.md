# Creación de un módulo nativo para Node.

## Dependencias:

* __*Nan*__ (“Native abstraction for nodejs”):
Nos permite estandarizar la codificación de nuestros módulos independientemente de la versión del motor **V8** que estemos 
corriendo.
* __*node-gyp*__ : Facilita nuestra construcción de compilación y generacion de nuestos modulos nativos.
* __*bindings*__: "Bindea" variables necesarias en la compilación. 

# Construcción del archivo *"Binding.gyp"*

El archivo debe tener el siguiente formato:

```javascript
{
    "targets": [
        {
            "target_name":"mymodule",
            "sources": ["mymodule.cc"],
            "include_dirs": [
                "<!(node -e \"require('nan')\")"
            ]
        }
    ]
}
```

Donde podemos ver que se define como JSON y tiene una etiqueta llamada "_targets_" que contiene lo siguiente:

_*target_name*_: Define el nombre del módulo.

_*sources*_: Archivos que serán compilados.

_*include_dirs*_: Directorios y dependencias que se incluyen.

> _*NOTA*_: Como se puede apreciar en incllude_Dirs se coloca el comando de node incluyendo como requerido el paquete "nan" importado anteriormente.

# Crear el fichero fuente de nuestro módulo.
> Ver el archivo "mymodule.cc"


# Compilar el módulo
- Para compilar el módulo debemos ejecutar el siguiente comando en la consola.

*Preparamos la compilación*:

> [./node_modules/.bin/]node-gyp configure

*Compilamos*:

> [./node_modules/.bin/]node-gyp build

> **_NOTA_**: Hy 
- Posteriormente a la compilación creamos un directorio

# Probar nuestro nuevo módulo.

- En primer lugar debemos de crear un nuevo archivo, esta vez llamado "*index.js*"
