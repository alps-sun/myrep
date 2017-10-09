#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linklist.h"


int  help();
void add();
void mul();
void sub();
void divi();
void TriA();
void RecA();
void RouA();
void SquA();
void quit();

#define CMD_MAX_LEN 128
#define DESC_LEN    1024
#define CMD_NUM     10

static tDataNode head[]=
{
    {"help",  "this is a help cmd",       help,&head[1]},
    {"add",   "add operation",            add, &head[2]},
    {"sub",   "sub operation",            sub, &head[3]},
    {"mul",   "mul operation",            mul, &head[4]},
    {"divi",  "division operation",       divi,&head[5]},
    {"tria",  "TriangleArea operation",   TriA,&head[6]},
    {"reca",  "RectangularArea operation",RecA,&head[7]},
    {"roua",  "RoundArea operation",      RouA,&head[8]},
    {"squa",  "SquareArea operation",     SquA,&head[9]},
    {"quit",  "quit the program",         quit,NULL}
	 
	
};

int main()
{
    char cmd[CMD_MAX_LEN];
    while(1)
    {
	printf("Input a cmd number >");
	scanf("%s", cmd);
	tDataNode *p=FindCmd(head,cmd);
	if(p==NULL)
	{
	    printf("This is a wrong cmd,pleae iuput again:\n");
	    continue;
	}
	printf("%s - %s\n", p->cmd, p->desc);
	if(p->handler!=NULL)
	{
            p->handler();
	}
    }
    return 0;
}

int help()
{
    ShowAllCmd(head);
    return 0;
}

void add()
{
    float x,y;
    printf("please input two numbers x y:");
    scanf("%f %f", &x,&y);
    printf("x+y=%f\n",x+y);
}

void sub()
{
    float x,y;
    printf("please input two numbers x y:");
    scanf("%f %f", &x,&y);
    printf("x-y=%f\n",x-y);
}

void mul()
{
    float x,y;
    printf("please input two numbers x y:");
    scanf("%f %f", &x,&y);
    printf("x*y=%f\n",x*y);
}

void divi()
{
    float x,y;
    printf("please input two numbers x y:");
    scanf("%f %f", &x,&y);
    printf("x/y=%f\n",x/y);
}

void TriA()
{
    float x,y;
    printf("please input two numbers x y:");
    scanf("%f %f", &x,&y);
    printf("TriangleArea=%f\n",x*y/2);
}
void RecA()
{
    float x,y;
    printf("please input two numbers x y:");
    scanf("%f %f", &x,&y);
    printf("RectangularArea=%f\n",x*y);
}

void RouA()
{
    float x;
    printf("please input radius x:");
    scanf("%f",&x); 
    printf("RoundArea=%f\n",3.14*x*x);
}

void SquA()
{
    float x;
    printf("please input length x:");
    scanf("%f",&x); 
    printf("SquareArea=%f\n",x*x);
}



void quit()
{
    exit(0);
}

