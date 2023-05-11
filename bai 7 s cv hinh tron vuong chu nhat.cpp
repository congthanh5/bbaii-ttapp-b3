#include <stdio.h>
/*
  %d: so nguyen
  %f: so thuc
  %c: Ky tu
  %s: Chuoi
*/
int main(){
	float cd, cr;
    printf("nhap chieu dai la: ");
    scanf("%f", &cd);
    printf("\nnhap chieu rong la:");
    scanf("%f", &cr);
    
    float shcn = cd * cr, cvhcn = (cd+cr)*2;
    printf("shcn = %.2f", shcn);
    printf("\ncvhcn = %.2f", cvhcn);
    
    float canh;
    printf("\n\nnhap canh hinh vuong");
    scanf("%f", &canh);
    
    float cvhv = canh * 4, dthv = canh * canh;
    printf("cvhv = %.2f", cvhv);
    printf("\ndthv = %.2f", dthv);
    
    float dk, bk;
    printf("\n\nnhap ban kinh hinh tron: ");
    scanf("%f", &bk);
    printf("\nNhap duong kinh hinh tron: ");
    scanf("%f", &dk);
    
    float cvht = dk*3.14, sht = bk * bk *3.14;
    printf("cvht = %.2f", cvht);
    printf("\nsht = %.2f", sht);
    
    
    
	return 0;
}

