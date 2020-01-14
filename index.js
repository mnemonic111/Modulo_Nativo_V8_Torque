//const mymodule = require("binding")("mymodule"); // Carga del modulo mediante "binding"-
const mymodulecomp = require('./build/Release/mymodule'); //Cargamos el modulo compilado directamente.

const sum = mymodulecomp.suma(1,3);

console.log(`El resultado es: ${sum}`);