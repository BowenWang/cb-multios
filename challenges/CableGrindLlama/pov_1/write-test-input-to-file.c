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
         "\x34\x01\x00\x00";
      static unsigned int write_00000_00000_len = 4;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);

static unsigned char write_00001_00000[] = 
         "\x01\x00\x00\x00\x00\x00\x00\x00\x1c\x01\x00\x00\x14\x01\x00\x00"
         "\x00\x00\x00\x00\x10\x01\x10\x10\x00\x00\x00\x00\x14\x01\x00\x00"
         "\x89\xf1\xcd\x37\x6e\xdd\x57\xfd\x3a\xf7\x7c\xe6\xb2\x19\x07\xf3"
         "\xed\xaf\x02\xd4\x54\x00\x00\x00\x15\x77\xbe\x15\x20\xa0\x93\x47"
         "\x01\x99\xbb\x0e\xe1\xd5\x3a\x75\x41\xf0\x55\x1e\x01\xb2\x2e\x83"
         "\x2c\x9e\x5e\x44\xf1\x45\x08\x01\xfc\x24\xa4\x6c\x43\x41\x15\xe9"
         "\x12\xa8\x77\xfa\x5a\xbe\x73\x65\x4d\x04\x60\x7c\xe4\x40\x60\xe6"
         "\xa1\xa1\x8d\x01\x8b\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41"
         "\x41\x41\x41\x41\x41\x00\xbb\xf9\x02\x37\xc2\x82\x19\x35\x01\x00"
         "\x2a\xfa\x78\xab\x3b\x6c\xe9\xcf\x01\x41\x00\xee\x84\x91\xe7\x33"
         "\x60\x5d\x2b\x41\x00\x01\xd0\xff\xa3\x78\x03\xed\x22\x69\xc5\x01"
         "\x00\xf6\x01\x00\x43\xa3\x74\x01\x96\xd5\x6a\xbe\x63\x6d\x3e\x12"
         "\x33\x9e\x41\x00";
      static unsigned int write_00001_00000_len = 308;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = cgc_append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);

    FILE *ptr = fopen(output_file_name, "wb");


    fwrite(write_00000, write_00000_len, 1, ptr);
    fwrite(write_00001, write_00001_len, 1, ptr);

    fclose(ptr);
    return 0;
}
    
