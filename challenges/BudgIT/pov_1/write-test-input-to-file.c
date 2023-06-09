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
         "\x01\x00\x00\x00";
      static unsigned int write_00000_00000_len = 4;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);

static unsigned char write_00001_00000[] = 
         "\x71\x44\x6d\x51\x4e\x69\x79\x50\x64\x07";
      static unsigned int write_00001_00000_len = 10;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = cgc_append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);

static unsigned char write_00002_00000[] = 
         "\x01\x00\x00\x00";
      static unsigned int write_00002_00000_len = 4;
      unsigned char *write_00002 = NULL;
      unsigned int write_00002_len = 0;
      write_00002 = cgc_append_buf(write_00002, &write_00002_len, write_00002_00000, write_00002_00000_len);

static unsigned char write_00003_00000[] = 
         "\x01\x00\x00\x00";
      static unsigned int write_00003_00000_len = 4;
      unsigned char *write_00003 = NULL;
      unsigned int write_00003_len = 0;
      write_00003 = cgc_append_buf(write_00003, &write_00003_len, write_00003_00000, write_00003_00000_len);

static unsigned char write_00004_00000[] = 
         "\x42\x41\x43\x4f\x4e\x07";
      static unsigned int write_00004_00000_len = 6;
      unsigned char *write_00004 = NULL;
      unsigned int write_00004_len = 0;
      write_00004 = cgc_append_buf(write_00004, &write_00004_len, write_00004_00000, write_00004_00000_len);

static unsigned char write_00005_00000[] = 
         "\x01\x00\x00\x00";
      static unsigned int write_00005_00000_len = 4;
      unsigned char *write_00005 = NULL;
      unsigned int write_00005_len = 0;
      write_00005 = cgc_append_buf(write_00005, &write_00005_len, write_00005_00000, write_00005_00000_len);

static unsigned char write_00006_00000[] = 
         "\x01\x00\x00\x00";
      static unsigned int write_00006_00000_len = 4;
      unsigned char *write_00006 = NULL;
      unsigned int write_00006_len = 0;
      write_00006 = cgc_append_buf(write_00006, &write_00006_len, write_00006_00000, write_00006_00000_len);

static unsigned char write_00007_00000[] = 
         "\x33\x41\x6e\x74\x74\x35\x63\x57\x57\x07";
      static unsigned int write_00007_00000_len = 10;
      unsigned char *write_00007 = NULL;
      unsigned int write_00007_len = 0;
      write_00007 = cgc_append_buf(write_00007, &write_00007_len, write_00007_00000, write_00007_00000_len);

static unsigned char write_00008_00000[] = 
         "\x01\x00\x00\x00";
      static unsigned int write_00008_00000_len = 4;
      unsigned char *write_00008 = NULL;
      unsigned int write_00008_len = 0;
      write_00008 = cgc_append_buf(write_00008, &write_00008_len, write_00008_00000, write_00008_00000_len);

static unsigned char write_00009_00000[] = 
         "\x06\x00\x00\x00";
      static unsigned int write_00009_00000_len = 4;
      unsigned char *write_00009 = NULL;
      unsigned int write_00009_len = 0;
      write_00009 = cgc_append_buf(write_00009, &write_00009_len, write_00009_00000, write_00009_00000_len);

static unsigned char write_00010_00000[] = 
         "\x42\x41\x43\x4f\x4e\x07";
      static unsigned int write_00010_00000_len = 6;
      unsigned char *write_00010 = NULL;
      unsigned int write_00010_len = 0;
      write_00010 = cgc_append_buf(write_00010, &write_00010_len, write_00010_00000, write_00010_00000_len);

static unsigned char write_00011_00000[] = 
         "\x01\x00\x00\x00";
      static unsigned int write_00011_00000_len = 4;
      unsigned char *write_00011 = NULL;
      unsigned int write_00011_len = 0;
      write_00011 = cgc_append_buf(write_00011, &write_00011_len, write_00011_00000, write_00011_00000_len);

static unsigned char write_00012_00000[] = 
         "\x42\x41\x43\x4f\x4e\x07";
      static unsigned int write_00012_00000_len = 6;
      unsigned char *write_00012 = NULL;
      unsigned int write_00012_len = 0;
      write_00012 = cgc_append_buf(write_00012, &write_00012_len, write_00012_00000, write_00012_00000_len);


static unsigned char write_00013_00000[] = 
         "\x01\x00\x00\x00";
      static unsigned int write_00013_00000_len = 4;
      unsigned char *write_00013 = NULL;
      unsigned int write_00013_len = 0;
      write_00013 = cgc_append_buf(write_00013, &write_00013_len, write_00013_00000, write_00013_00000_len);

static unsigned char write_00014_00000[] = 
         "\x06\x00\x00\x00";
      static unsigned int write_00014_00000_len = 4;
      unsigned char *write_00014 = NULL;
      unsigned int write_00014_len = 0;
      write_00014 = cgc_append_buf(write_00014, &write_00014_len, write_00014_00000, write_00014_00000_len);

static unsigned char write_00015_00000[] = 
         "\x42\x41\x43\x4f\x4e\x07";
      static unsigned int write_00015_00000_len = 6;
      unsigned char *write_00015 = NULL;
      unsigned int write_00015_len = 0;
      write_00015 = cgc_append_buf(write_00015, &write_00015_len, write_00015_00000, write_00015_00000_len);

static unsigned char write_00016_00000[] = 
         "\x07\x00\x00\x00";
      static unsigned int write_00016_00000_len = 4;
      unsigned char *write_00016 = NULL;
      unsigned int write_00016_len = 0;
      write_00016 = cgc_append_buf(write_00016, &write_00016_len, write_00016_00000, write_00016_00000_len);

static unsigned char write_00017_00000[] = 
         "\x08\x00\x00\x00";
      static unsigned int write_00017_00000_len = 4;
      unsigned char *write_00017 = NULL;
      unsigned int write_00017_len = 0;
      write_00017 = cgc_append_buf(write_00017, &write_00017_len, write_00017_00000, write_00017_00000_len);

    FILE *ptr = fopen(output_file_name, "wb");


    fwrite(write_00000, write_00000_len, 1, ptr);
    fwrite(write_00001, write_00001_len, 1, ptr);
    fwrite(write_00002, write_00002_len, 1, ptr);
    fwrite(write_00003, write_00003_len, 1, ptr);
    fwrite(write_00004, write_00004_len, 1, ptr);
    fwrite(write_00005, write_00005_len, 1, ptr);
    fwrite(write_00006, write_00006_len, 1, ptr);
    fwrite(write_00007, write_00007_len, 1, ptr);
    fwrite(write_00008, write_00008_len, 1, ptr);
    fwrite(write_00009, write_00009_len, 1, ptr);
    fwrite(write_00010, write_00010_len, 1, ptr);
    fwrite(write_00011, write_00011_len, 1, ptr);
    fwrite(write_00012, write_00012_len, 1, ptr);
    fwrite(write_00013, write_00013_len, 1, ptr);
    fwrite(write_00014, write_00014_len, 1, ptr);
    fwrite(write_00015, write_00015_len, 1, ptr);
    fwrite(write_00016, write_00016_len, 1, ptr);
    fwrite(write_00017, write_00017_len, 1, ptr);


    fclose(ptr);
    return 0;
}
    
