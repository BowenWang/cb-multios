#include<stdio.h>
#include<stdlib.h>

unsigned char *cgc_append_buf(unsigned char *buf, unsigned int *buflen, unsigned char *sbuf, unsigned int sbuflen) {
   /*
    * original code
   unsigned char *newbuf = buf;
   if (sbuf != NULL) {
      newbuf = (unsigned char*)cgc_realloc(buf, *buflen + sbuflen);
      cgc_memcpy(newbuf + *buflen, sbuf, sbuflen);
      *buflen += sbuflen;
   }
   return newbuf;
   */
    unsigned char *newbuf = buf;
    if (sbuf != NULL) {
        newbuf = (unsigned char*)malloc(*buflen + sbuflen);
        memcpy(newbuf, buf, *buflen);
        memcpy(newbuf + *buflen, sbuf, sbuflen);
        *buflen += sbuflen;
    }
    return newbuf;
}

int main(int argc, char *argv[]){
    char *output_file_name = argv[1];

      static unsigned char write_00000_00000[] = 
         "\x28\x42\x43\x56\x79\x51\x36\x53\x52\x64\x69\x31\x42\x48\x63\x64"
         "\x46\x55\x56\x32\x57\x32\x27\x27\x27\x29";
      static unsigned int write_00000_00000_len = 26;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);

        static unsigned char write_00001_00000[] = 
         "\x28\x53\x47\x09\x27\x27\x29";
      static unsigned int write_00001_00000_len = 7;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = cgc_append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);

static unsigned char write_00002_00000[] = 
         "\x28\x52\x27\x29";
      static unsigned int write_00002_00000_len = 4;
unsigned char *write_00002 = NULL;
      unsigned int write_00002_len = 0;
      write_00002 = cgc_append_buf(write_00002, &write_00002_len, write_00002_00000, write_00002_00000_len);

static unsigned char write_00003_00000[] = 
         "\x28\x44\x27\x29";
      static unsigned int write_00003_00000_len = 4;
unsigned char *write_00003 = NULL;
      unsigned int write_00003_len = 0;
      write_00003 = cgc_append_buf(write_00003, &write_00003_len, write_00003_00000, write_00003_00000_len);

static unsigned char write_00004_00000[] = 
         "\x28\x54\x00\x27\x29";
      static unsigned int write_00004_00000_len = 5;
unsigned char *write_00004 = NULL;
      unsigned int write_00004_len = 0;
      write_00004 = cgc_append_buf(write_00004, &write_00004_len, write_00004_00000, write_00004_00000_len);

static unsigned char write_00005_00000[] = 
         "\x28\x51\x02\x27\x29";
      static unsigned int write_00005_00000_len = 5;
unsigned char *write_00005 = NULL;
      unsigned int write_00005_len = 0;
      write_00005 = cgc_append_buf(write_00005, &write_00005_len, write_00005_00000, write_00005_00000_len);

static unsigned char write_00006_00000[] = 
         "\x28\x44\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x45\x46\x01\x27\x47\x01"
         "\x27\x27\x45\x46\x01\x27\x47\x01\x27\x27\x27\x29";
      static unsigned int write_00006_00000_len = 5004;
      unsigned char *write_00006 = NULL;
      unsigned int write_00006_len = 0;
      write_00006 = cgc_append_buf(write_00006, &write_00006_len, write_00006_00000, write_00006_00000_len);

    FILE *ptr = fopen(output_file_name, "wb");
    /*
    fwrite(write_00000_00000, write_00000_00000_len, 1, ptr);
    fwrite(write_00001_00000, write_00001_00000_len, 1, ptr);
    fwrite(write_00002_00000, write_00002_00000_len, 1, ptr);
    fwrite(write_00003_00000, write_00003_00000_len, 1, ptr);
    fwrite(write_00004_00000, write_00004_00000_len, 1, ptr);
    fwrite(write_00005_00000, write_00005_00000_len, 1, ptr);
    fwrite(write_00006_00000, write_00006_00000_len, 1, ptr);
*/
    fwrite(write_00000, write_00000_len, 1, ptr);
    fwrite(write_00001, write_00001_len, 1, ptr);
    fwrite(write_00002, write_00002_len, 1, ptr);
    fwrite(write_00003, write_00003_len, 1, ptr);
    fwrite(write_00004, write_00004_len, 1, ptr);
    fwrite(write_00005, write_00005_len, 1, ptr);
    fwrite(write_00006, write_00006_len, 1, ptr);

    fclose(ptr);
    return 0;
}
    