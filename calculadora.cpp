#include <iostream>
using namespace std;

//Funciones.

double cortos(double c1, double c2);
double parciales(double p1, double p2);
double notaproyecto(double proyecto);
double laboratorios(double L1, double L2, double L3, double L4, double L5, double L6, double L7, double L8, double L9);


//Proceso de ingreso de datos de las notas.

int main(){

//declaracion de variables.

    double c1, c2, p1, p2, proyecto, l1, l2, l3, l4, l5, l6, l7, l8, l9;
    double promediocortos;
    double promedioparciales;
    double promediolaboratorios;
    double notafinal;

//Ingreso de notas de cortos.

    cout << "Hola Ingeniero, saquemos el promedio de los cortos\n";
    cout << "Ingrese la nota de su primer corto: ";
    cin >> c1;

    cout << "Ahora ingrese la nota de su segundo corto: ";
    cin >> c2;

    promediocortos = cortos(c1, c2);
    cout <<"Ahora vamos con los parciales\n";

//Ingreso de datos de parcial.

    cout << "Bien, ahora ingrese la nota de su parcial uno: ";
    cin >> p1;

    cout << "Bien, ahora ingrese la nota de su parcial dos: ";
    cin >> p2;

    promedioparciales = parciales(p1, p2);

//Ingreso de datos de los laboratorios.

    cout <<"Pasaremos con las notas de los laboratorios\n";
    cout << "Ahora ingrese la nota de el laboratorio 1: ";
    cin >> l1;

    cout << "Ahora ingrese la nota de el laboratorio 2: ";
    cin >> l2;

    cout << "Ahora ingrese la nota de el laboratorio 3: ";
    cin >> l3;

    cout << "Ahora ingrese la nota de el laboratorio 4: ";
    cin >> l4;

    cout << "Ahora ingrese la nota de el laboratorio 5: ";
    cin >> l5;

    cout << "Ahora ingrese la nota de el laboratorio 6: ";
    cin >> l6;

    cout << "Ahora ingrese la nota de el laboratorio 7: ";
    cin >> l7;

    cout << "Ahora ingrese la nota de el laboratorio 8: ";
    cin >> l8;

    cout << "Ahora ingrese la nota de el laboratorio 9: ";
    cin >> l9;

    promediolaboratorios=laboratorios(l1, l2, l3, l4, l5, l6, l7, l8, l9);

//Ingreso de notas del proyecto.

    cout <<"Por ultimo el proyecto\n";
    cout <<"Ahora ingrese por ultimo la nota del proyecto: ";
    cin >> proyecto;

    proyecto=notaproyecto(proyecto);


//Sumatoria de los promedios sobre las operaciones que se hicieron mas abajo.

    notafinal=promedioparciales+promediocortos+proyecto+promediolaboratorios;



//Condiciones para verificar si el usuario aprobo o reprobo.

    if(notafinal<6){

        cout <<"No aprobo la materia, su nota es: " << notafinal;
    
    }else{
        cout <<"Felicidades aprobo la materia con una nota final de:" << notafinal;
    }



    return 0;
}

//Operacion para sacar el promedio de los cortos.


double cortos(double c1, double c2){

    double promediocortos = (c1 + c2) / 2 * (0.20);

    return promediocortos;
}

//Operacion para sacar el promedio de los parciales.


    double parciales(double p1, double p2){

        double promedioparciales = (p1 + p2) /2 * (0.35);

        return promedioparciales;
}

//Operacion para sacar el promedio de los laboratorios.

    double laboratorios(double L1, double L2, double L3, double L4, double L5, double L6, double L7, double L8, double L9){

        double promediolaboratorios =(L1+L2+L3+L4+L5+L6+L7+L8+L9)/9 *(0.20);

        return promediolaboratorios;
}

//Operacion para sacar el promedio del proyecto.

    double notaproyecto(double proyecto){
    
        double promedioproyecto=(proyecto)*0.25;

        return promedioproyecto; 
}


//Juan Eduardo Villavicencio Mendez - 00365224