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
         "\xaa\xa8\xac\x98\xe3\xe3\xe3\xe3\x87\xbf\x5f\x18\xeb\x86\xe4\xa4"
         "\xcc\x72\xfd\xc4\xf4\x4d\x3d\x81\x91\x1e\xbe\xa1\x2b\xca\xd2\x40"
         "\x3e\x1b\xf9\x0b\xfd\xda\x3e\x73\x68\x94\x7f\x5c\xf0\x0c\x4d\x98"
         "\x4d\x6c\xb2\x9d\x01\x76\xff\x0b";
      static unsigned int write_00000_00000_len = 56;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);

static unsigned char write_00001_00000[] = 
         "\xf3\xf1\xf4\x88\x76\x7e\x94\x07\x7f\x47\x06\xe6\xc4\x6a\xa3\x14"
         "\x3a\xe8\x65\x4c\x83\x44\xd9\x38\x44\x60\x59\xc3\xc5\x8a\x17\xee"
         "\x39\x01\x7f\xd7\xc0\x31\x6f\x4f\x38\x91\xf1\x5a\x25\xf2\xfa\xe3"
         "\xef\xd3\xf0\xd2\xee\x67\x25\x12\x84\x63\xd7\xab\x52\x35\x09\xd4"
         "\xa8\xa5\x10\xf2\xf3\xa0\xff\x2e\xf2\x72\x14\x83\x6e\xb3\x70\x85"
         "\xfb\xdb\xf7\xb9\x6b\xc4\x41\x7b\xbf\x41\x5b\x83\x9e\xec\x56\xe3"
         "\x4a\xbb\x83\x5f\x58\x31\x18\xa5\xee\xf0\x6a\xb6\x7b\x33\xe7\x63"
         "\xf2\xdd\x55\xf1\x62\x48\x53\xca\x9d\xb0\xfb\x26\xa9\x0f\xb2\xf9"
         "\xdd\xe2\x19\xc6\x82\xc9\xe3\x97\x87\xfc\xf0\x75\x79\xd3\x4a\x02"
         "\xda\x5d\x67\x06\x3f\xa6\x5a\x67\x5d\x35\x72\x1b\xea\x1b\x37\xe8"
         "\x8a\x4b\xf2\x29\x4f\xfb\xc8\x45\xcf\x67\xb9\xb6\xf1\xeb\x76\x5c"
         "\xa4\x57\xd1\xde\x06\x26\xf2\x8b\x48\xb5\x75\xf3\xac\x0b\x84\x6a"
         "\x07\xce\x00\xa5\xf2\xe5\xdc\x9c\x9e\x10\x88\xa3\x97\xdf\x3a\x4a"
         "\x4c\xdd\xf6\xbb\x6a\x65\x6f\x3d\x4d\x0c\x7c\x9e\xed\x19\xae\x57"
         "\x6b\xdc\x7c\x10\xca\x03\x08\x2c\xbb\x25\x5d\x11\xcb\x6b\x37\x59"
         "\x06\x67\x19\x50\xf2\x50\x57\xf9\x1a\x0b\xd3\x5c\x57\xf4\xcd\x03"
         "\x6d\xf3\x7d\x0e\xb5\x08\xea\x9b\x00\x30\x91\x10\x0e\x3a\xfa\xb2"
         "\x5a\x1f\x67\x21\x43\xb1\xed\xb7\xc6\x4d\xe6\xef\x3e\x47\x57\x93"
         "\x93\x51\x17\x1c\xcd\x69\x2e\xf1\x3b\xa2\x09\x8e\xf7\xa8\xec\x7f"
         "\x22\xa1\x70\x8b\x78\xa7\xb9\xd1\xec\x2e\x7c\x61\xc2\x3b\xd6\xc4"
         "\xa2\xb1\xf7\x3c\x00\x08\x4e\x6c\xfc\xe8\x7d\xdf\x18\x27\xeb\xc0"
         "\xd1\x8e\xa3\xae\x66\x5e\xcf\x46\x66\x7e\x3d\x34\xe2\x16\x08\x87"
         "\x42\x47\xa0\xf0\xd3\xa6\xb9\xa3\x8d\xc2\x9b\x96\x3a\xdc\x5c\xd5"
         "\xa2\xeb\x53\x3c\x9a\xc3\x6b\x39\x86\x89\xfd\x73\xc0\xeb\x7b\x83"
         "\x23\xb8";
      static unsigned int write_00001_00000_len = 386;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = cgc_append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);

    FILE *ptr = fopen(output_file_name, "wb");


    fwrite(write_00000, write_00000_len, 1, ptr);
    fwrite(write_00001, write_00001_len, 1, ptr);
    
    fclose(ptr);
    return 0;
}
    
