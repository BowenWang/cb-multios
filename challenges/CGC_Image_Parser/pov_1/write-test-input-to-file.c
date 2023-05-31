#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char *output_file_name = argv[1];
static unsigned char write_00000_00000[] = 
         "\x31\x0a";
      static unsigned int write_00000_00000_len = 2;

static unsigned char write_00001_00000[] = 
         "\x79\x64\x7a\x71\x6d\x7a\x6b\x78\x6d\x61\x65\x0a";
      static unsigned int write_00001_00000_len = 12;

static unsigned char write_00002_00000[] = 
         "\x1a\x00\x24\xc7\xee\x85\x14\x53\x80\x00\x04\xd0\x13\x48\x2d\x20"
         "\xb4\x02\xd2\x0b\x40\x0d\x00\x34\x02\xd0\x03\x40";
      static unsigned int write_00002_00000_len = 28;

static unsigned char write_00003_00000[] = 
         "\x34\x0a";
      static unsigned int write_00003_00000_len = 2;

static unsigned char write_00004_00000[] = 
         "\x79\x64\x7a\x71\x6d\x7a\x6b\x78\x6d\x61\x65\x0a";
      static unsigned int write_00004_00000_len = 12;

static unsigned char write_00005_00000[] = 
         "\x35\x0a";
      static unsigned int write_00005_00000_len = 2;

    FILE *ptr = fopen(output_file_name, "wb");
    fwrite(write_00000_00000, write_00000_00000_len, 1, ptr);
    fwrite(write_00001_00000, write_00001_00000_len, 1, ptr);
    fwrite(write_00002_00000, write_00002_00000_len, 1, ptr);
    fwrite(write_00003_00000, write_00003_00000_len, 1, ptr);
    fwrite(write_00004_00000, write_00004_00000_len, 1, ptr);
    fwrite(write_00005_00000, write_00005_00000_len, 1, ptr);

    fclose(ptr);
    return 0;
}
    
