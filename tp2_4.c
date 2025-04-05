#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
};

void listarPCs(struct compu PC[], int cantidad);

int main()
{

    srand(time(NULL));

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
                         "Pentium"};

    
    int cantidad = 5;

    struct compu PC[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        PC[i].velocidad = 1 + rand() % (3);
        PC[i].anio = 2015 + rand() % (2024 - 2015 + 1);
        PC[i].cantidad_nucleos = 1 + rand() % (8);

        int indiceTipos = rand() % 6;
        
        PC[i].tipo_cpu = tipos[indiceTipos];
        
    }

    listarPCs(PC, cantidad);

    return 0;
}

void listarPCs(struct compu PC[], int cantidad){

    for (int i = 0; i < cantidad; i++)
    {
        printf("La pc numero, %d tiene velocidad de: %d, es del anio: %d, tiene %d nucleos y es del tipo: %s\n", i,PC[i].velocidad, PC[i].anio, PC[i].cantidad_nucleos, PC[i].tipo_cpu);
    }
    
}