#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char *output_file_name = argv[1];


    FILE *ptr = fopen(output_file_name, "wb");
    fwrite(write_00000_00000, write_00000_00000_len, 1, ptr);
    fwrite(write_00001_00000, write_00001_00000_len, 1, ptr);
    fwrite(write_00002_00000, write_00002_00000_len, 1, ptr);
    fwrite(write_00003_00000, write_00003_00000_len, 1, ptr);
    fwrite(write_00004_00000, write_00004_00000_len, 1, ptr);
    fwrite(write_00005_00000, write_00005_00000_len, 1, ptr);
    fwrite(write_00006_00000, write_00006_00000_len, 1, ptr);

    fclose(ptr);
    return 0;
}
    
