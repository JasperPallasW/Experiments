#include<stdio.h>
#include<conio.h>
#include<math.h>

//Prototype UDF
void option(int a, int r, float p, float q);

//Main Function
void main()
{
	int choice,z;
	float x,y;
	clrscr();

	//Title
	printf("--- Mathematical Library Functions ---\n\n");

	//List Options
	printf("Choose your operation.\n\n");
	printf("1. Square Root\n");
	printf("2. Absolute value (int)\n");
	printf("3. Absolute value (float)\n");
	printf("4. Round Up\n");
	printf("5. Round Down\n");
	printf("6. Sine of X\n");
	printf("7. Cosine of X\n");
	printf("8. Tangent of X\n");
	printf("9. X to the power Y\n");
	printf("10. Remainder for floats\n\n");

	//Choose Option
	printf("Enter your choice: ");
	scanf("%d",&choice);


	//Input from user
	if(choice<=8)
	{
		if(choice==2)
		{
			printf("Enter value: ");
			scanf("%d",&z);
		}
		else
		{
			printf("Enter value: ");
			scanf("%f",&x);
		}
	}
	else
	{
		printf("Enter value 1: ");
		scanf("%f",&x);
		printf("Enter value 2: ");
		scanf("%f",&y);
	}

	//Call UDF
	option(choice,z,x,y);
	getch();
}

//UDF Definition
void option(int a, int r, float p, float q)
{
	switch(a)
	{
		case 1: printf("\nSquare Root %.2f = %.2f",p,sqrt(p)); break;
		case 2: printf("\nAbsolute value (int) %d = %d",r,abs(r)); break;
		case 3: printf("\nAbsolute value (float) %.2f = %.2f",p,fabs(p)); break;
		case 4: printf("\nRound up %.2f = %.2f",p,ceil(p)); break;
		case 5: printf("\nRound down %.2f = %.2f",p,floor(p)); break;
		case 6: printf("\nSine of %.2f = %.2f",p,sin(p)); break;
		case 7: printf("\nCosine of %.2f = %.2f",p,cos(p)); break;
		case 8: printf("\nTangent of %.2f = %.2f",p,tan(p)); break;
		case 9: printf("\n%.2f to the power %.2f = %.2f",p,q,pow(p,q)); break;
		case 10: printf("\nRemainder for floats %.2f by %.2f = %.2f",p,q,fmod(p,q)); break;
		default: printf("\nYour choice is not available!");
	}
}