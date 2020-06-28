#include "module.h"
#include <stdio.h>

void test_write_and_extract(void){
    printf("~~~~~~<begin function : %s()>~~~~~~~\n", __func__);
    SPA paris = {40, 1500000.3, "paris"};
    SPA result = {-1,-1.1,"nothing"};
    int count = 2000;
    char line[2000];
    asso_write(&paris,count, line);
    printf("%s\n", line);
    asso_extract(&result, line);
    printf("%lf %d %s\n", result.balance, result.count, result.name);
    printf("~~~~~~<end function : %s()>~~~~~~~\n", __func__);
}


///////////////////////////////////////////

void test_file(void){
    printf("~~~~~~<begin function : %s()>~~~~~~~\n", __func__);
    char filename[]="test.txt";
    SPA paris = {40, 1500000.3, "paris"};
    SPA result = {-1,-1.1,"nothing"};
    file_write(filename, &paris);
    file_read(filename, &result);
    printf("%lf %d %s\n", result.balance, result.count, result.name);


    printf("~~~~~~<end function : %s()>~~~~~~~\n", __func__);

}




void test_bin(void){
    printf("~~~~~~<begin function : %s()>~~~~~~~\n", __func__);
    char line1[]="voila";
    char line2[6];
    char filename[]="test.bin";
    bin_write(line1, sizeof(char), 6,filename);
    bin_read(line2, sizeof(char),6,filename);
    printf("%s\n",line2);
    printf("~~~~~~<end function : %s()>~~~~~~~\n", __func__);
}


int main(void){
    test_write_and_extract();
    test_file();
    test_bin();



    return 0;
}

