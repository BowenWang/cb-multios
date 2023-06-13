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

/* cgc_append_var original code
unsigned char *cgc_append_var(const char *var, unsigned char *buf, unsigned int *buflen) {
   unsigned char *newbuf = buf;
   cgc_size_t varlen;
   unsigned char *varbuf = cgc_getenv(var, &varlen);
   if (varbuf != NULL) {
      newbuf = (unsigned char*)cgc_realloc(buf, *buflen + varlen);
      cgc_memcpy(newbuf + *buflen, varbuf, varlen);
      cgc_free(varbuf);
      *buflen += varlen;
   }
   return newbuf;
}
*/

unsigned char *cgc_append_var_4byte_0(const char *var, unsigned char *buf, unsigned int *buflen) {
   unsigned char *newbuf = buf;
   size_t varlen = 4;
   //unsigned char *varbuf = cgc_getenv(var, &varlen);
   unsigned char *varbuf = (unsigned char*)malloc(varlen);
   memset(varbuf, 0, varlen);

   if (varbuf != NULL) {
      //newbuf = (unsigned char*)cgc_realloc(buf, *buflen + varlen);
      newbuf = (unsigned char*)malloc(*buflen + varlen);
      memcpy(newbuf, buf, *buflen);
      memcpy(newbuf+*buflen, varbuf, varlen);
      *buflen += varlen;
   }

   return newbuf;
}

int main(int argc, char *argv[]){
    char *output_file_name = argv[1];

static unsigned char write_00000_00000[] = 
         "\xaa\xa8\xac\xad\xac";
      static unsigned int write_00000_00000_len = 5;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);

static unsigned char write_00001_00000[] = 
         "\xae\xac\xb0\xf8\xfb\xe9\x39\x17\xef\xb8\xf1\xc9\xfc\xd4\x2a\x6c"
         "\xc6\x6b\xdc\x64\xbe\x83\xf3\x97\x16\xa4\x5d\x96\x0e\xfd\x3e\x81"
         "\x0f\xd6\xd2\x23\xe6\x35\xef\x36\x32\x26\xb8\x11\xd2\x3a\xfa\x6a"
         "\x6a\x21\xb8\xe9\x05\xb7\x5c\xac\xed\xcc\xf5\x5f\xd0\x20\xdd\xa6"
         "\x4f\x70\x52\xe1\x68\x59\xb3\xd3\x45\x9f\x46\xc1";
      static unsigned int write_00001_00000_len = 76;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = cgc_append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);

static unsigned char write_00002_00000[] = 
         "\x31\x33\x33\x26\x4b\x59\x69\xc7\x9f\xf3\x24\x19\x60\x3d\x81\x39"
         "\x84\x92\xe2\x1f\xba\xea\xa8\x53\x70";
      static unsigned int write_00002_00000_len = 25;
      unsigned char *write_00002 = NULL;
      unsigned int write_00002_len = 0;
      write_00002 = cgc_append_buf(write_00002, &write_00002_len, write_00002_00000, write_00002_00000_len);

    FILE *ptr = fopen(output_file_name, "wb");


    fwrite(write_00000, write_00000_len, 1, ptr);
    fwrite(write_00001, write_00001_len, 1, ptr);
    
    fclose(ptr);
    return 0;
}
    
