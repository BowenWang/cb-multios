#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char *output_file_name = argv[1];
static unsigned char write_00000_00000[] = 
         "\x31\x0a";
      static unsigned int write_00000_00000_len = 2;

static unsigned char write_00001_00000[] = 
         "\x30\x30\x0a";
      static unsigned int write_00001_00000_len = 3;

static unsigned char write_00002_00000[] = 
         "\x30\x30\x0a\x0a";
      static unsigned int write_00002_00000_len = 4;

static unsigned char write_00003_00000[] = 
         "\x41\x41\x0a";
      static unsigned int write_00003_00000_len = 3;

static unsigned char write_00004_00000[] = 
         "\x30\x30\x0a";
      static unsigned int write_00004_00000_len = 3;

static unsigned char write_00005_00000[] = 
         "\x30\x30\x0a";
      static unsigned int write_00005_00000_len = 3;

static unsigned char write_00006_00000[] = 
         "\x30\x30\x0a";
      static unsigned int write_00006_00000_len = 3;

static unsigned char write_00007_00000[] = 
         "\x30\x30\x0a";
      static unsigned int write_00007_00000_len = 3;

static unsigned char write_00008_00000[] = 
         "\x41\x41\x41\x41\x41\x41\x41\x41\x0a";
      static unsigned int write_00008_00000_len = 9;

static unsigned char write_00009_00000[] = 
         "\x30\x30\x0a";
      static unsigned int write_00009_00000_len = 3;

    FILE *ptr = fopen(output_file_name, "wb");
    fwrite(write_00000_00000, write_00000_00000_len, 1, ptr);
    fwrite(write_00001_00000, write_00001_00000_len, 1, ptr);
    fwrite(write_00002_00000, write_00002_00000_len, 1, ptr);
    fwrite(write_00003_00000, write_00003_00000_len, 1, ptr);
    fwrite(write_00004_00000, write_00004_00000_len, 1, ptr);
    fwrite(write_00005_00000, write_00005_00000_len, 1, ptr);
    fwrite(write_00006_00000, write_00006_00000_len, 1, ptr);
    fwrite(write_00007_00000, write_00007_00000_len, 1, ptr);
    fwrite(write_00008_00000, write_00008_00000_len, 1, ptr);
    fwrite(write_00009_00000, write_00009_00000_len, 1, ptr);


    fclose(ptr);
    return 0;
}
    
