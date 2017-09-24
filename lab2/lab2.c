#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a; 
	float x,y;
	while(1)
	{
	    printf("1 加法运算\n");
	    printf("2 减法运算\n");
	    printf("3 乘法运算\n");
	    printf("4 除法运算\n");
	    printf("5 三角形面积运算\n");
	    printf("6 矩形面积运算\n");
	    printf("7 圆面积运算\n");
	    printf("8 正方形面积运算\n");
	    printf("0 退出运算\n");
	    printf("请输入数字参与运算：");
	    scanf("%d",&a);
	    if(a>0&&a<7)
		{
			printf("请输入两个整数用空格隔开：");
	        scanf("%f %f", &x,&y); 
			switch(a)
	        {
		        case 1:printf("结果为%f",x+y);
		        break;
		        case 2:printf("结果为%f",x-y);
		        break;
		        case 3:printf("结果为%f",x*y);
		        break;
		        case 4:printf("结果为%f",x/y);
	      	    break;
	      	    case 5:printf("结果为%f",1/2*x*y);
	      	    break;
	      	    case 6:printf("结果为%f",x*y);
	      	    break;
	      	    
	      	    
		    }
	   }
	    else if(a==7)
	   {
	   	    printf("请输入半径：");
	   	    scanf("%f",&x); 
	   	    printf("结果为%f",3.14*x*x);
	   }
	   else if(a==8)
	   {
	   	    printf("请输入边长：");
	   	    scanf("%f",&x); 
	   	    printf("结果为%f",x*x);
	   }
	   else exit(0);
	   printf("\n\n");
	   
	
	}
	
	
	
}
