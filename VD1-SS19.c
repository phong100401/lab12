#include<stdio.h>
struct strucintcal{
	char name[20];
	int numb;
	float amt;
};
void main(){
	struct strucintcal xyz;
	void intcal(struct strucintcal);
	printf("Enter customer name: \n");
	gets(xyz.name);
	printf("Enter customer number: \n");
	scanf("%d",&xyz.numb);
	printf("Enter principal amount: \n");
	scanf("%f",&xyz.amt);
	intcal(xyz);
	getch();
}
void intcal(struct strucintcal abc){
	float si,rate=5.5,yrs=2.5;
	si=(abc.amt*rate*yrs)/100;
	printf("The customer name is %s\n",abc.name);
	printf("The customer number is %d\n",abc.numb);
	printf("The amount is %f\n",abc.amt);
	printf("The interest is %f\n",si);
	return;
}
