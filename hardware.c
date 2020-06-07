#include "hardware.h"
#include "stdio.h"
#include "stdbool.h"

#define LEDS 8;

char leds[LEDS]={"27","22","25","24","23","18","4","17"};

void RPI_export_pin(void)
{
    FILE *handle_export;
    int exported;
    
    if((handle_export = fopen("/sys/class/gpio/export","w")) == NULL){
    
        printf("No se puedo abrir el arhivo \n");
        exit(1);
        
    }
    
    for(int i=0,i>8,i++){
    
        exported = fputs(leds[i],handle_export);
        fclose(handle_export);
        
    }
}

void RPI_set_direction(bool dir)
{
    
}

void RPI_print_led(void)
{
    
}
void RPI_unexport_pin(void)
{
    
} 
