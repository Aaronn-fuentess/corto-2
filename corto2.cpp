#include <iostream>
using namespace std;
int main()
{

    int saldo = 200, saldo_restante, faltante;
    int edad, talla, genero, deportivo_hombre = 80, formal_hombre = 120, premium_hombre = 250, casual_mujer = 70, elegante_mujer = 100, premium_mujer = 250, opcion;

    cout << "bienvenido al payless de plaza merliot :)" << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "ingrese su edad para saber su talla de zapato adecuada: ";
    cin >> edad;

    if (edad < 0 || edad > 100)
    {
        cout << "edad no valida...";
    }

    else
    {
        if (edad > 0 && edad <= 12)
        {
            talla = 34;
            cout << "edad:  " << edad << endl;
            cout << "talla  recomendada: " << talla << endl;
        }

        else if (edad >= 13 && edad <= 17)
        {
            talla = 38;
            cout << "edad: " << edad << endl;
            cout << "talla recomendada: " << talla << endl;
        }

        else if (edad >= 18 && edad <= 64)
        {
            talla = 40;
            cout << "edad: " << edad << endl;
            cout << "talla recomendada: " << talla << endl;
        }

        else if (edad > 65 && edad <= 100)
        {
            talla = 42;
            cout << "edad: " << edad;
            cout << "talla recomendada: " << talla << endl;
        }
    }

    cout << "ingrese su genero: 1= hombre. 2=mujer";
    cin >> genero;

    switch (genero)
    {
    case 1:
        cout << "para calzado de hombre tenemos las siguientes opciones: " << endl;
        cout << "1. Zapato Deportivo: $80 (descuento del 20%, precio con descuento $64)." << endl;
        cout << "2. Zapato Formal: $120 (descuento del 20%, precio con descuento $96)" << endl;
        cout << "3. Zapato Premium: $250 (descuento del 20%, precio con descuento $200)." << endl;

        cout << "que opcion desea comprar?? eliga 1, 2 o 3:" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "ustes eligio: Zapato Deportivo y este cuesta $" << deportivo_hombre << ". Su saldo actual es de: $" << saldo << endl;
            if (saldo >= deportivo_hombre)
            {
                cout << "Ok. si le alcanza para comprar este producto. procediendo con la compra...";
                saldo_restante = saldo - deportivo_hombre;
                cout << "ya estuvo su compra. su saldo restante es: $" << saldo_restante;
            }
            else
            {
                faltante = saldo - deportivo_hombre;
                cout << "viejo no te alcanza para comprar esto. ni modo te faltan: $" << faltante;
            }
            break;

        case 2:
            cout << "ustes eligio: Zapato Formal y este cuesta $" << formal_hombre << ". Su saldo actual es de: $" << saldo << endl;
            if (saldo >= formal_hombre)
            {
                cout << "Ok. si le alcanza para comprar este producto. procediendo con la compra...";
                saldo_restante = saldo - formal_hombre;
                cout << "ya estuvo su compra. su saldo restante es: $" << saldo_restante;
            }
            else
            {
                faltante = saldo - formal_hombre;
                cout << "viejo no te alcanza para comprar esto. ni modo te faltan: $" << faltante;
            }
            break;

        case 3:
            cout << "ustes eligio: Zapato premium y este cuesta $" << premium_hombre << ". Su saldo actual es de: $" << saldo << endl;
            if (saldo >= premium_hombre)
            {
                cout << "Ok. si le alcanza para comprar este producto. procediendo con la compra...";
                saldo_restante = saldo - premium_hombre;
                cout << "ya estuvo su compra. su saldo restante es: $" << saldo_restante;
            }
            else
            {
                faltante = saldo - premium_hombre;
                cout << "viejo no te alcanza para comprar esto. ni modo te faltan: $" << faltante;
            }
            break;

        default:
            cout << "el numero ingresado no es una opcion...";
            break;
        }

        break;

    case 2:
        cout << "Para calcado de mujer tenemos las siguientes opciones: " << endl;
        cout << "1. Zapato Casual: $70 (descuento del 15%, precio con descuento)" << endl;
        cout << "2. Zapato Elegante: $100 (descuento del 15%, precio con descuento)." << endl;
        cout << "3. Zapato Premium: $250 (descuento del 15%, precio con descuento)" << endl;

        cout << "que opcion desea comprar?? eliga 1, 2 o 3:" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "ustes eligio: Zapato Casual y este cuesta $" << casual_mujer << ". Su saldo actual es de: $" << saldo << endl;
            if (saldo >= casual_mujer)
            {
                cout << "Ok. si le alcanza para comprar este producto. procediendo con la compra...";
                saldo_restante = saldo - casual_mujer;
                cout << "ya estuvo su compra. su saldo restante es: $" << saldo_restante;
            }
            else
            {
                faltante = saldo - casual_mujer;
                cout << "viejo no te alcanza para comprar esto. ni modo te faltan: $" << faltante;
            }
            break;

        case 2:
            cout << "ustes eligio: Zapato elegante y este cuesta $" << elegante_mujer << ". Su saldo actual es de: $" << saldo << endl;
            if (saldo >= elegante_mujer)
            {
                cout << "Ok. si le alcanza para comprar este producto. procediendo con la compra...";
                saldo_restante = saldo - elegante_mujer;
                cout << "ya estuvo su compra. su saldo restante es: $" << saldo_restante;
            }
            else
            {
                faltante = saldo - elegante_mujer;
                cout << "viejo no te alcanza para comprar esto. ni modo te faltan: $" << faltante;
            }
            break;

        case 3:
            cout << "ustes eligio: Zapato premium y este cuesta $" << premium_mujer << ". Su saldo actual es de: $" << saldo << endl;
            if (saldo >= premium_mujer)
            {
                cout << "Ok. si le alcanza para comprar este producto. procediendo con la compra...";
                saldo_restante = saldo - premium_mujer;
                cout << "ya estuvo su compra. su saldo restante es: $" << saldo_restante;
            }
            else
            {
                faltante = saldo - premium_mujer;
                cout << "viejo no te alcanza para comprar esto. ni modo te faltan: $" << faltante;
            }
            break;

        default:
            cout << "el numero ingresado no es una opcion...";
            break;
        }
        break;

    default:
        cout << "solo esos productos tenemos xd";
        break;
    }

    return 0;
}