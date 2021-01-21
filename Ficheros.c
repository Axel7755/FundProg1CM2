#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE* Archivo;
    Archivo = fopen("Ejemplo1.docx", "wt");
    fputs("Es muy similar a un printf\n", Archivo);
    fputs("Por lo que de igual manera se pueden guardar variables en el archivo\n", Archivo);
    fputs("Y el contenido de las mismas", Archivo);
    fclose(Archivo);
    printf("Proceso completado");
    return 0;
}

