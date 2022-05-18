#include <iostream>
#include<stdio.h>
using namespace std;
int main(void){
	int r,y; 
	int bool_value;
	
	printf("please input r:\n");
	scanf("%d",&r);
	scanf(" y = %2.10f \n ", 3.1415926535897932384626433832795);
	scanf("%d",&y);
	
	if(r > 0 ){
	    printf(" r*r*y ==> %d\n",r > y);
	}else if(r < 0){
	    printf("please input r:\n");
	    scanf("%d",&r);
	}
	
	return 0;
}
