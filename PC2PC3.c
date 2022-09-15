#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int convertCharToHexa(char character){

  if ( character >= 0x30 && character <= 0x39 ){
    return character - 0x30;
  }
  if ( character >= 0x41 && character <= 0x46 ) {
      return character - 0x41 + 10;
  }
  if ( character >= 0x61 && character <= 0x66 ){
     return character - 0x61 + 10;
  }
  return 0;
}

int offsetHexaAddDigit(int hexa, int digit){
  hexa = hexa << 4;
  hexa += digit;
  return hexa;
}

int convertHexaToBinary(char* hexa){
  if ( hexa[0] == '\0' ) {
      return 0x0;
  }else{
    int count = 0;
    int binary = convertCharToHexa(hexa[count]);

    count++;
    while ( hexa[count] != '\0'){
        int hexDigit = convertCharToHexa(hexa[count]);
        binary = offsetHexaAddDigit(binary,hexDigit);
        count++;
    } 

    return binary;
  } 
}

int main(int argc, char* argv[]){
    if (argc == 4){
      if (strcmp(argv[1], "encode") == 0){
        if (strcmp(argv[2],"--input") == 0){
            char* hexStr = argv[3];
            int hexBinary = convertHexaToBinary(hexStr);
            printf("Hexadecimal: %b\n", hexBinary);
        }
      }
    }else{
        printf("Debe ingresar todos los parametros necesarios");
    }
    return 0;
}