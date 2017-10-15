#include <stdio.h>
#include <stdlib.h>
#include "linktable.h"
#define CMD_MAX_LEN 128
#define DESC_LEN 1024
#define CMD_NUM 10
int help();
int quit();
int add();
int sub();
int mul();
int divi();
typedef struct DataNode
{
    tLinkTableNode *pNext;
    char* cmd;
    char* desc;
    int   (*handler)();
    struct DataNode *next;
}tDataNode;
tDataNode *FindCmd(tLinkTable *head, char *cmd)
{
    tDataNode* pNode=(tDataNode*)GetLinkTableHead(head);
     while(pNode !=NULL)
    {
        if(strcmp(pNode->cmd,cmd)==0)
        {
            return pNode;
        }
        pNode=(tDataNode*)GetNextLinkTableNode(head,(tLinkTableNode*)pNode);
    }
    return NULL;
}   
int ShowAllCmd(tLinkTable* head)
{
    tDataNode *pNode=(tDataNode*)GetLinkTableHead(head);
    while(pNode !=NULL)
    {
        printf("%s - %s\n",pNode->cmd,pNode->desc);
        pNode =(tDataNode*)GetNextLinkTableNode(head,(tLinkTableNode*)pNode);
    }
    return 0;
}
int InitMenuData(tLinkTable ** ppLinkTable)
{
    *ppLinkTable=CreateLinkTable();
    tDataNode* pNode=(tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd="help";
    pNode->desc="Menu List:";
    pNode->handler=help;
    AddLinkTableNode(*ppLinkTable,(tLinkTableNode *)pNode);

    pNode=(tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd="version";
    pNode->desc="Menu V2.0";
    pNode->handler=NULL;
    AddLinkTableNode(*ppLinkTable,(tLinkTableNode *)pNode);

    pNode=(tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd="quit";
    pNode->desc="Quit Menu V2.0";
    pNode->handler=quit;
    AddLinkTableNode(*ppLinkTable,(tLinkTableNode *)pNode);
    
    pNode=(tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd="add";
    pNode->desc="add operation";
    pNode->handler=add;
    AddLinkTableNode(*ppLinkTable,(tLinkTableNode *)pNode);
    
    pNode=(tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd="sub";
    pNode->desc="sub operation";
    pNode->handler=sub;
    AddLinkTableNode(*ppLinkTable,(tLinkTableNode *)pNode);

    pNode=(tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd="mul";
    pNode->desc="mul operation";
    pNode->handler=mul;
    AddLinkTableNode(*ppLinkTable,(tLinkTableNode *)pNode);

    pNode=(tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd="divi";
    pNode->desc="divi operation";
    pNode->handler=divi;
    AddLinkTableNode(*ppLinkTable,(tLinkTableNode *)pNode);
    
    
    return 0;
}
tLinkTable* head=NULL;
int main()
{
    InitMenuData(&head);
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("Please Input Command >");
        scanf("%s",cmd);
        tDataNode *p = FindCmd(head,cmd);
        if(p == NULL)
        {
            printf("This is a wrong cmd!\n");
            continue;
         }
         printf("%s - %s\n",p->cmd,p->desc);
         if(p -> handler != NULL)
        {
            p -> handler();
        }
     }
}
int help()
{
    ShowAllCmd(head);
    return 0;
}
int quit()
{
    exit(0);
}
int add()
{
    int x,y;
    printf("please input two numbers x y:");
    scanf("%d %d", &x,&y);
    printf("x+y=%d",x+y);
    printf("\n");
}
 sub()
{
    int x,y;
    printf("please input two numbers x y:");
    scanf("%d %d", &x,&y);
    printf("x-y=%d",x-y);
    printf("\n");
}

int mul()
{
    int x,y;
    printf("please input two numbers x y:");
    scanf("%d %d", &x,&y);
    printf("x*y=%d",x*y);
    printf("\n");
}

int divi()
{
int x,y;
    printf("please input two numbers x y:");
    scanf("%d %d", &x,&y);
    printf("x/y=%d",x/y);
    printf("\n");
}
