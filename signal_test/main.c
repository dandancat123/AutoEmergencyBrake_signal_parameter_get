/*------------------------测试车辆参数------------------------*/
#include <stdio.h>
#include <time.h>

#define calc_t   500                                  //计算过去0.5s的值

float v, dis_rel, pres, v_d[calc_t], lca_d[calc_t], pres_d [calc_t], acce_d[calc_t];

int main(int argc, const char * argv[]) {
    clock_t begin, end;                                     //计时-开始
    double cost;
    begin = clock();
    
    printf("Hello, World!\n");
    
    int i;
    for(i=0;i<500;i++){
        v_d[i] = i;
    }
    
    end = clock();                                          //计时-结束
    cost = (double)(end - begin)/CLOCKS_PER_SEC*1000;

    
    return 0;
}
