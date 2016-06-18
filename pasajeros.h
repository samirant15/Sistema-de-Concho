#ifndef PASAJEROS_H_INCLUDED
#define PASAJEROS_H_INCLUDED

typedef struct
{
    char nombre[20]; //nombre completo
    int id;
    char lugarDeTrabajo[10];
    double celular;
    char companiaCel[10];
}pasajero;

pasajero AgregarPasajero();
void AgregarPasajeros(pasajero[], int, int);
void MostrarPasajeros(pasajero cliente[], int tam);


#endif // PASAJEROS_H_INCLUDED

