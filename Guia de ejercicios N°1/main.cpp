#include <iostream>

using namespace std;

int main()
{




    /*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
 por un operario y el valor que se le paga por hora trabajada y listar por pantalla
 el sueldo que le corresponda.

//0. Declarar variables
    float cantHoras;
    float valorHora;
    float sueldo;

//1.Ingresar datos

    cout << "Ingrese cantidad de horas:  ";
    cin >> cantHoras;
    cout << endl;
    cout << "Ingrese Valor de hora: ";
    cin >> valorHora;
    cout << endl;
//2.Procesar Datos
    sueldo = cantHoras*valorHora;
//3.Egreso

    cout << sueldo;*/



     /*Hacer un programa que solicite por teclado que se ingresen dos números y
 luego guardarlos en dos variables distintas. A continuación se deben
 intercambiar mutuamente los valores en ambas variables y mostrarlos por
 pantalla*/


    /*int a;
    int b;
    int c;

    cin >> a;
    cin >> b;


    c = a;
    a = b;
    b = c;

    cout << a << b;*/




     /*Unaconcesionaria deautos paga a los vendedores un sueldo fijo de $5000 más
 $700 de premio por cada auto vendido. Hacer un programa que permita
 ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
 informar por pantalla el sueldo total a pagar.*/


    /*int cantidadDeAutos;
    const int SUELDO_FIJO = 5000;
    const int PREMIO = 700;
    int sueldo;

    cout << "Ingrese cantidad de autos vendidos: " ;
    cin >> cantidadDeAutos;
    cout << endl;

    sueldo = cantidadDeAutos*PREMIO + SUELDO_FIJO;
    cout << "El sueldo es: " << sueldo;
    cout << endl;*/

/*Hacerun programa para ingresar por teclado la cantidad de asientos totales en
 un avión y la cantidad de pasajes ocupados y luego calcular e informar el
 porcentaje de ocupación y el porcentaje de no ocupación del mismo.*/

    /*int asientosTotales;
    float asientosOcupados;
    float porcentajeOcupacion;
    float porcentajeNoOcupacion;
    cout << "Ingrese la cantidad de asientos totales: ";
    cin >> asientosTotales;
    cout << endl;
    cout << "Ingrese la cantidad de asientos ocupados: ";
    cin >> asientosOcupados;
    cout << endl;

    porcentajeOcupacion = (asientosOcupados * 100) / asientosTotales;
    porcentajeNoOcupacion = (asientosTotales - asientosOcupados) * 100 / asientosTotales;

    cout << "El porcentaje de ocupacion es del: " << porcentajeOcupacion << " Porcieto.";
    cout  << endl << endl;
    cout << "El porcentaje de No ocupacion es del: " << porcentajeNoOcupacion << " Porciento.";
    cout  << endl << endl;

/* Esta mal, porque el ingreso de datos en este ejemplo son numeros enteros,
 es incorrecto declaralo como numero flotanto si sabemos el numero exacto e
 ntero de asientos totales y ocupados */


    /*int asientosTotales;
    int asientosOcupados;
    float porcentajeOcupacion;
    float porcentajeNoOcupacion;
    cout << "Ingrese la cantidad de asientos totales: ";
    cin >> asientosTotales;
    cout << endl;
    cout << "Ingrese la cantidad de asientos ocupados: ";
    cin >> asientosOcupados;
    cout << endl;

    porcentajeOcupacion = ((float) asientosOcupados * 100) / asientosTotales;
    porcentajeNoOcupacion = (asientosTotales - (float) asientosOcupados) * 100 / asientosTotales;

    cout << "El porcentaje de ocupacion es del: " << porcentajeOcupacion << " Porcieto.";
    cout  << endl << endl;
    cout << "El porcentaje de No ocupacion es del: " << porcentajeNoOcupacion << " Porciento.";
    cout  << endl << endl;*/



/*Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
programa para ingresar por teclado la cantidad de alfajores vendidos de cada
una de las tres marcas y luego se informe el porcentaje de ventas para cada
una de ellas.*/






    /*int a;
    int b;
    int c;
    int totalDeLasTresMarcas;
    float porcentajeDea;
    float porcetajeDeb;
    float porcentajeDec;
    cout << "Ingrese la cantidad de alfajores a: ";
    cin >> a;
    cout << endl << endl;
    cout << "Ingrese la cantidad de alfajore b: ";
    cin >> b;
    cout << endl << endl;
    cout << "Ingrese la cantidad de alfajores c: ";
    cin >> c;
    cout << endl << endl;

    totalDeLasTresMarcas = a + b + c;

    porcentajeDea = (a * 100)/ (float)totalDeLasTresMarcas;
    cout << "El porcentaje de a es: " << porcentajeDea;
    cout << endl << endl;
    porcetajeDeb = (b * 100)/ (float)totalDeLasTresMarcas;
    cout << "El porcentaje de b es: " << porcetajeDeb;
    cout << endl << endl;
    porcentajeDec = (c * 100)/ (float)totalDeLasTresMarcas;
    cout << "El porcentaje de c es: " << porcentajeDec;
    cout<< endl;*/


/*Hacer un programa para que un comercio ingrese por teclado la recaudación en
pesos para cada una de las cuatro semanas del mes. El programa debe listar la
recaudación promedio por semana y el porcentaje de recaudación por semana.*/





    /*int semanaUno;
    int semanaDos;
    int semanaTres;
    int semanaCuatro;
    int recaudacionTotal;
    float recaudacionUno;
    float recaudacionDos;
    float recaudacionTres;
    float recaudacionCuatro;
    float promedioSemana;

    cout << "Ingrese la recaudacion de la semana Uno: ";
    cin >> semanaUno;
    cout << "Ingrese la recaudacion de la semana Dos: ";
    cin >> semanaDos;
    cout << "Ingrese la recaudacion de la semana Tres: ";
    cin >> semanaTres;
    cout << "Ingrese la recaudacion de la semana Cuatro: ";
    cin >> semanaCuatro;


    recaudacionTotal = semanaUno + semanaDos + semanaTres + semanaCuatro;
    recaudacionUno = ((float)semanaUno * 100) / recaudacionTotal;
    recaudacionDos = ((float)semanaDos * 100) / recaudacionTotal;
    recaudacionTres = ((float)semanaTres * 100)/ recaudacionTotal;
    recaudacionCuatro = ((float)semanaCuatro * 100) / recaudacionTotal;
    promedioSemana = recaudacionTotal / 4;


    cout << "El promedio por semana es: ";
    cout << promedioSemana;
    cout << endl;
    cout << "El porcentaje recaudado de la semana Uno es: ";
    cout << recaudacionUno;
    cout << endl;
    cout << "El porcentaje recaudado de la semana Dos es: ";
    cout << recaudacionDos;
    cout << endl;
    cout << "El porcentaje recaudado de la semana Tres es: ";
    cout << recaudacionTres;
    cout << endl;
    cout << "El porcentaje recaudado de la semana Cuatro es: ";
    cout << recaudacionCuatro;
    cout << endl;*/






/* Hacer un programa para ingresar por teclado el importe de una venta y el
porcentaje de descuento aplicada a la misma y luego informar por pantalla el
importe a pagar.*/

    float valorVenta;
    float descuento;
    float valorReal;
    float importePagar;

    cout <<  "Ingrese el importe de venta: " ;
    cin >> valorVenta;
    cout << endl;
    cout << "Ingrese el porcentaje de descuento: " ;
    cin >> descuento;
    cout << endl;



        valorReal = (descuento * valorVenta)/100;
        importePagar = valorVenta - valorReal;

         cout << "El importe a pagar con el descuento es de: " ;
         cout << importePagar;
         cout <<  endl;












































    return 0;
}
