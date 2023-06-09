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
         "\x6e\x65\x77\x0a";
      static unsigned int write_00000_00000_len = 4;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);

static unsigned char write_00001_00000[] = 
         "\x73\x64\x20\x31\x0a";
      static unsigned int write_00001_00000_len = 5;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = cgc_append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);

static unsigned char write_00002_00000[] = 
         "\x74\x31\x74\x30\x0a";
      static unsigned int write_00002_00000_len = 5;
      unsigned char *write_00002 = NULL;
      unsigned int write_00002_len = 0;
      write_00002 = cgc_append_buf(write_00002, &write_00002_len, write_00002_00000, write_00002_00000_len);

static unsigned char write_00003_00000[] = 
         "\x71\x75\x69\x74\x0a";
      static unsigned int write_00003_00000_len = 5;
      unsigned char *write_00003 = NULL;
      unsigned int write_00003_len = 0;
      write_00003 = cgc_append_buf(write_00003, &write_00003_len, write_00003_00000, write_00003_00000_len);

    FILE *ptr = fopen(output_file_name, "wb");


    fwrite(write_00000, write_00000_len, 1, ptr);
    fwrite(write_00001, write_00001_len, 1, ptr);
    fwrite(write_00002, write_00002_len, 1, ptr);
    fwrite(write_00003, write_00003_len, 1, ptr);


    fclose(ptr);
    return 0;
}
    
