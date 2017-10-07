#include <stdio.h>
int main(void){
	int i;
	int count = 0;
	char num[101] = {'0'};
	int out[4];
	scanf("%s", num);
	for(i=0;num[i] != '\0';i++){
		count += num[i];
		count -= '0';
	}
	i = 0;
	while(count > 0){
		out[i] = count%10;
		i++;
		count /= 10;
	}
	i--;
	while(i>0){
		if(out[i] == 0)printf("ling ");
		else if(out[i] == 1)printf("yi ");
		else if(out[i] == 2)printf("er ");
		else if(out[i] == 3)printf("san ");
		else if(out[i] == 4)printf("si ");
		else if(out[i] == 5)printf("wu ");
		else if(out[i] == 6)printf("liu ");
		else if(out[i] == 7)printf("qi ");
		else if(out[i] == 8)printf("ba ");
		else if(out[i] == 9)printf("jiu ");		
		i--;
	}
	if(out[i] == 0)printf("ling");
	else if(out[i] == 1)printf("yi");
	else if(out[i] == 2)printf("er");
	else if(out[i] == 3)printf("san");
	else if(out[i] == 4)printf("si");
	else if(out[i] == 5)printf("wu");
	else if(out[i] == 6)printf("liu");
	else if(out[i] == 7)printf("qi");
	else if(out[i] == 8)printf("ba");
	else if(out[i] == 9)printf("jiu");
	return 0;
}