 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"hardware.h"


char leds[LEDS]={"27","22","25","24","23","18","4","17"};




static FILE * handle_export;
static FILE * handle_direction;
static int nWritten;


/* MAPEO FISICO

LED 0 = GPIO 17
LED 1 = GPIO 4
LED 2 = GPIO 18
LED 3 = GPIO 23
LED 4 = GPIO 24
LED 5 = GPIO 25
LED 6 = GPIO 22
LED 7 = GPIO 27
*/

void RPI_export_pin (void){
/****************************LED 0********************************/
//Exportamos pin:
  if ((handle_export = fopen("/sys/class/gpio/export","w")) == NULL)
    {
      printf("Cannot open EXPORT File. Try again later.\n");
      exit(1);
    }
  nWritten=fputs("17",handle_export);
  if (nWritten==-1)
    {
      printf ("Cannot EXPORT PIN . Try again later.\n");
      exit(1);
    }
  else
    printf("EXPORT File opened succesfully \n");

  fclose(handle_export);
/******************************LED 1********************************/
//Exportamos pin:
  if ((handle_export = fopen("/sys/class/gpio/export","w")) == NULL)
    {
      printf("Cannot open EXPORT File. Try again later.\n");
      exit(1);
    }
  nWritten=fputs("4",handle_export);
  if (nWritten==-1)
    {
      printf ("Cannot EXPORT PIN . Try again later.\n");
      exit(1);
    }
  else
    printf("EXPORT File opened succesfully \n");

  fclose(handle_export);
/******************************LED 2********************************/
//Exportamos pin:
  if ((handle_export = fopen("/sys/class/gpio/export","w")) == NULL)
    {
      printf("Cannot open EXPORT File. Try again later.\n");
      exit(1);
    }
  nWritten=fputs("18",handle_export);
  if (nWritten==-1)
    {
      printf ("Cannot EXPORT PIN . Try again later.\n");
      exit(1);
    }
  else
    printf("EXPORT File opened succesfully \n");

  fclose(handle_export);
/******************************LED 3********************************/
//Exportamos pin:
  if ((handle_export = fopen("/sys/class/gpio/export","w")) == NULL)
    {
      printf("Cannot open EXPORT File. Try again later.\n");
      exit(1);
    }
  nWritten=fputs("23",handle_export);
  if (nWritten==-1)
    {
      printf ("Cannot EXPORT PIN . Try again later.\n");
      exit(1);
    }
  else
    printf("EXPORT File opened succesfully \n");

  fclose(handle_export);
/******************************LED 4********************************/
//Exportamos pin:
  if ((handle_export = fopen("/sys/class/gpio/export","w")) == NULL)
    {
      printf("Cannot open EXPORT File. Try again later.\n");
      exit(1);
    }
  nWritten=fputs("24",handle_export);
  if (nWritten==-1)
    {
      printf ("Cannot EXPORT PIN . Try again later.\n");
      exit(1);
    }
  else
    printf("EXPORT File opened succesfully \n");

  fclose(handle_export);
/******************************LED 5********************************/
//Exportamos pin:
  if ((handle_export = fopen("/sys/class/gpio/export","w")) == NULL)
    {
      printf("Cannot open EXPORT File. Try again later.\n");
      exit(1);
    }
  nWritten=fputs("25",handle_export);
  if (nWritten==-1)
    {
      printf ("Cannot EXPORT PIN . Try again later.\n");
      exit(1);
    }
  else
    printf("EXPORT File opened succesfully \n");

  fclose(handle_export);
/******************************LED 6********************************/
//Exportamos pin:
  if ((handle_export = fopen("/sys/class/gpio/export","w")) == NULL)
    {
      printf("Cannot open EXPORT File. Try again later.\n");
      exit(1);
    }
  nWritten=fputs("22",handle_export);
  if (nWritten==-1)
    {
      printf ("Cannot EXPORT PIN . Try again later.\n");
      exit(1);
    }
  else
    printf("EXPORT File opened succesfully \n");

  fclose(handle_export);
/******************************LED 7********************************/
//Exportamos pin:
  if ((handle_export = fopen("/sys/class/gpio/export","w")) == NULL)
    {
      printf("Cannot open EXPORT File. Try again later.\n");
      exit(1);
    }
  nWritten=fputs("27",handle_export);
  if (nWritten==-1)
    {
      printf ("Cannot EXPORT PIN . Try again later.\n");
      exit(1);
    }
  else
    printf("EXPORT File opened succesfully \n");

  fclose(handle_export);
/******************************FIN LEDS******************************/
}//Esta funcion verifica que todos los pines esten correctamente conectados 



void RPI_set_direction(void){
/****************************LED 0********************************/
//Establecemos direccion de pin:
  if ((handle_direction = fopen("/sys/class/gpio/gpio17/direction","w")) == NULL)   //Abrimos en modo escribir a archivo del pin
  {
    printf("Cannot open DIRECTION File");       //Si no se puede abrir, error
    exit(1);
  }
      // Set pin Direction
  if ((nWritten=fputs("out",handle_direction))==-1)               //Establecemos pin como salida OUT
  {
    printf("Cannot open DIRECTION pin. Try again later.\n");       //Si no se puede escribir, error
    exit(1);
  }
  else
  {
    printf("DIRECTION File for PIN opened succesfully\n");
  }
  fclose(handle_direction);
/******************************LED 1********************************/
//Establecemos direccion de pin:
  if ((handle_direction = fopen("/sys/class/gpio/gpio4/direction","w")) == NULL)   //Abrimos en modo escribir a archivo del pin
  {
    printf("Cannot open DIRECTION File");       //Si no se puede abrir, error
    exit(1);
  }
    // Set pin Direction
  if ((nWritten=fputs("out",handle_direction))==-1)               //Establecemos pin como salida OUT
    {
    printf("Cannot open DIRECTION pin. Try again later.\n");       //Si no se puede escribir, error
    exit(1);
    }
  else
    {
      printf("DIRECTION File for PIN opened succesfully\n");
    }
  fclose(handle_direction);
/******************************LED 2********************************/
//Establecemos direccion de pin:
  if ((handle_direction = fopen("/sys/class/gpio/gpio18/direction","w")) == NULL)   //Abrimos en modo escribir a archivo del pin
  {
    printf("Cannot open DIRECTION File");       //Si no se puede abrir, error
    exit(1);
  }
      // Set pin Direction
  if ((nWritten=fputs("out",handle_direction))==-1)               //Establecemos pin como salida OUT
  {
    printf("Cannot open DIRECTION pin. Try again later.\n");       //Si no se puede escribir, error
    exit(1);
  }
  else
  {
    printf("DIRECTION File for PIN opened succesfully\n");
  }
  fclose(handle_direction);    // Be carefull do this for EACH pin !!!
/******************************LED 3********************************/
//Establecemos direccion de pin:
  if ((handle_direction = fopen("/sys/class/gpio/gpio23/direction","w")) == NULL)   //Abrimos en modo escribir a archivo del pin
  {
    printf("Cannot open DIRECTION File");       //Si no se puede abrir, error
    exit(1);
  }
      // Set pin Direction
  if ((nWritten=fputs("out",handle_direction))==-1)               //Establecemos pin como salida OUT
  {
    printf("Cannot open DIRECTION pin. Try again later.\n");       //Si no se puede escribir, error
    exit(1);
  }
  else
  {
    printf("DIRECTION File for PIN opened succesfully\n");
  }
  fclose(handle_direction);
/******************************LED 4********************************/
//Establecemos direccion de pin:
  if ((handle_direction = fopen("/sys/class/gpio/gpio24/direction","w")) == NULL)   //Abrimos en modo escribir a archivo del pin
  {
    printf("Cannot open DIRECTION File");       //Si no se puede abrir, error
    exit(1);
  }
      // Set pin Direction
  if ((nWritten=fputs("out",handle_direction))==-1)               //Establecemos pin como salida OUT
  {
    printf("Cannot open DIRECTION pin. Try again later.\n");       //Si no se puede escribir, error
    exit(1);
  }
  else
  {
    printf("DIRECTION File for PIN opened succesfully\n");
  }
  fclose(handle_direction);
/******************************LED 5********************************/
//Establecemos direccion de pin:
  if ((handle_direction = fopen("/sys/class/gpio/gpio25/direction","w")) == NULL)   //Abrimos en modo escribir a archivo del pin
  {
    printf("Cannot open DIRECTION File");       //Si no se puede abrir, error
    exit(1);
  }
      // Set pin Direction
  if ((nWritten=fputs("out",handle_direction))==-1)               //Establecemos pin como salida OUT
  {
    printf("Cannot open DIRECTION pin. Try again later.\n");       //Si no se puede escribir, error
    exit(1);
  }
  else
  {
    printf("DIRECTION File for PIN opened succesfully\n");
  }
  fclose(handle_direction);
/******************************LED 6********************************/
//Establecemos direccion de pin:
  if ((handle_direction = fopen("/sys/class/gpio/gpio22/direction","w")) == NULL)   //Abrimos en modo escribir a archivo del pin
  {
    printf("Cannot open DIRECTION File");       //Si no se puede abrir, error
    exit(1);
  }
      // Set pin Direction
  if ((nWritten=fputs("out",handle_direction))==-1)               //Establecemos pin como salida OUT
  {
    printf("Cannot open DIRECTION pin. Try again later.\n");       //Si no se puede escribir, error
    exit(1);
  }
  else
  {
    printf("DIRECTION File for PIN opened succesfully\n");
  }
  fclose(handle_direction);
/******************************LED 7********************************/
//Establecemos direccion de pin:
  if ((handle_direction = fopen("/sys/class/gpio/gpio27/direction","w")) == NULL)   //Abrimos en modo escribir a archivo del pin
  {
    printf("Cannot open DIRECTION File");       //Si no se puede abrir, error
    exit(1);
  }
      // Set pin Direction
  if ((nWritten=fputs("out",handle_direction))==-1)               //Establecemos pin como salida OUT
  {
    printf("Cannot open DIRECTION pin. Try again later.\n");       //Si no se puede escribir, error
    exit(1);
  }
  else
  {
    printf("DIRECTION File for PIN opened succesfully\n");
  }
  fclose(handle_direction);
/******************************FIN LEDS******************************/
}

void RPI_unexport_pin(void){
/****************************LED 0********************************/
//Un-Exportamos pin:
  if ((handle_export = fopen("/sys/class/gpio/unexport","w")) == NULL)
    {
      printf("Cannot open UNEXPORT File. Try again later.\n");
      exit(1);
    }
  nWritten=fputs("17",handle_export);
  if (nWritten==-1)
    {
      printf ("Cannot UNEXPORT PIN . Try again later.\n");
      exit(1);
    }
  else
    printf("UNEXPORTED File succesfully \n");

  fclose(handle_export);
/****************************LED 1********************************/
//Un-Exportamos pin:
    if ((handle_export = fopen("/sys/class/gpio/unexport","w")) == NULL)
      {
        printf("Cannot UNEXPORT File. Try again later.\n");
        exit(1);
      }
    nWritten=fputs("4",handle_export);
    if (nWritten==-1)
      {
        printf ("Cannot UNEXPORT PIN . Try again later.\n");
        exit(1);
      }
    else
      printf("UNEXPORTED File succesfully \n");

    fclose(handle_export);
/****************************LED 2********************************/
//Un-Exportamos pin:
      if ((handle_export = fopen("/sys/class/gpio/unexport","w")) == NULL)
        {
          printf("Cannot UNEXPORT File. Try again later.\n");
          exit(1);
        }
      nWritten=fputs("18",handle_export);
      if (nWritten==-1)
        {
          printf ("Cannot UNEXPORT PIN . Try again later.\n");
          exit(1);
        }
      else
        printf("UNEXPORTED File succesfully \n");

      fclose(handle_export);
/****************************LED 3********************************/
//Un-Exportamos pin:
    if ((handle_export = fopen("/sys/class/gpio/unexport","w")) == NULL)
      {
        printf("Cannot UNEXPORT File. Try again later.\n");
        exit(1);
      }
    nWritten=fputs("23",handle_export);
    if (nWritten==-1)
      {
        printf ("Cannot UNEXPORT PIN . Try again later.\n");
        exit(1);
      }
    else
      printf("UNEXPORTED File succesfully \n");

    fclose(handle_export);
/****************************LED 4********************************/
//Un-Exportamos pin:
    if ((handle_export = fopen("/sys/class/gpio/unexport","w")) == NULL)
      {
        printf("Cannot UNEXPORT File. Try again later.\n");
        exit(1);
      }
    nWritten=fputs("24",handle_export);
    if (nWritten==-1)
      {
        printf ("Cannot UNEXPORT PIN . Try again later.\n");
        exit(1);
      }
    else
      printf("UNEXPORTED File succesfully \n");

    fclose(handle_export);
/****************************LED 5********************************/
//Un-Exportamos pin:
    if ((handle_export = fopen("/sys/class/gpio/unexport","w")) == NULL)
      {
        printf("Cannot UNEXPORT File. Try again later.\n");
        exit(1);
      }
    nWritten=fputs("25",handle_export);
    if (nWritten==-1)
      {
        printf ("Cannot UNEXPORT PIN . Try again later.\n");
        exit(1);
      }
    else
      printf("UNEXPORTED File succesfully \n");

    fclose(handle_export);
/****************************LED 6********************************/
//Un-Exportamos pin:
    if ((handle_export = fopen("/sys/class/gpio/unexport","w")) == NULL)
      {
        printf("Cannot UNEXPORT File. Try again later.\n");
        exit(1);
      }
    nWritten=fputs("22",handle_export);
    if (nWritten==-1)
      {
        printf ("Cannot UNEXPORT PIN . Try again later.\n");
        exit(1);
      }
    else
      printf("UNEXPORTED File succesfully \n");

    fclose(handle_export);
/****************************LED 7********************************/
//Un-Exportamos pin:
    if ((handle_export = fopen("/sys/class/gpio/unexport","w")) == NULL)
      {
        printf("Cannot UNEXPORT File. Try again later.\n");
        exit(1);
      }
    nWritten=fputs("27",handle_export);
    if (nWritten==-1)
      {
        printf ("Cannot UNEXPORT PIN . Try again later.\n");
        exit(1);
      }
    else
      printf("UNEXPORTED File succesfully \n");

    fclose(handle_export);
}



void RPI_print_led(void)
{
    
}