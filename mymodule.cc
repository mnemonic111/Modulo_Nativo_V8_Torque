#include <nan.h>

using namespace v8;

//Definimos nuestra funcion (suma es el nombre de la funcion)
NAN_METHOD(suma) {
    
    //Validamos los parametros de entrada que se envian desde JS.
    if (!info[0]->IsNumber() && !info[2]->IsNumber() ) {
        //Si los argumentos son invalidos arrojamos una exception
        Nan::ThrowError("Argumentos invalidos");
        return;
    }

    //obtenemos los valores
    double a = info[0]->NumberValue();
    double b = info[1]->NumberValue();

    //Calculamos la suma
    Local<Number> result = Nan::New(a+b);
    info.GetReturnValue().Set(result);
}

NAN_MODULE_INIT(Init) {
    //exportamos la función suma
    Nan::Set(target, Nan::New("suma").ToLocalChecked(), 
            Nan::GetFunction(Nan::New<FunctionTemplate>(suma)).ToLocalChecked());
}

NODE_MODULE(mymodule, Init);