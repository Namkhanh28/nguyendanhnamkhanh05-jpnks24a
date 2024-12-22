#include <stdio.h>

int main(){
	int a,b,c,temp;
	printf("Nhap so thu nhat: \n");
	scanf("%d", &a);
	printf("Nhap so thu hai: \n");
	scanf("%d", &b);
	printf("Nhap so thu ba: \n");
	scanf("%d", &c);
	printf("Truoc khi sap xep:%d %d %d \n", a,b,c);
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	if(a>c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
	printf("Ket qua sau khi sap xep: %d %d %d \n ", a,b,c);
	return 0;
}

