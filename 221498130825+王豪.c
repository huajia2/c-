#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
#define Status int
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef struct{
	char name[10];
	char phone[20];
}ElemType;
typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;
Status Listlnsert_L(LinkList L,int i,ElemType e){
	LNode *p=L;
	int j=0;
	while (p&&j<i-1){
		p=p->next;
		++j;
	}
	if(!p||j>i-1){
		return ERROR;
	}
	LNode*s=(LinkList)malloc(sizeof(LNode));
	if(s==NULL){
		exit(OVERFLOW);
	}
	s->data=e;
	s->next=p->next;
	p->next=s;
	return OK;
}
Status ListDelete_L(LinkList L, int i){
	LNode*p=L;
	int j=0;	
	while(p->next&&j<i-1){
		p=p->next;
		++j;
	}
	if((!p->next)||j>i-1){
		return ERROR;
	}
	LNode*q=p->next;
	free(q);
	return OK;
}
Status GetElem_L(LinkList L,int i,ElemType*e){
	LNode*p=L->next;
	int j=1;
	while(p&&j<i){
		p=p->next;
		++j;
	}
	if(!p||j>i){
		return ERROR;
	}
	*e=p->data;
	return OK;
}
int ElemlsEqual(ElemType e1,ElemType e2){
	if (strcmp(e1.name, e2.name) == 0 &&
		strcmp(e1.phone, e2.phone) == 0) {
		return 1;
	}
	return 0;
}

int LocateElem_L(LinkList L,ElemType e){
	ElemType temp_e;
	LNode*p=L->next;
	int j=1;
	while(p){
		temp_e=p->data;
		if (ElemlsEqual(temp_e,e)){
			return j;
		}
		p=p->next;
		j++;
	}
	return 0;
	}
	void pintElem(ElemType e){
		printf("{%s,%s}\r\n",e.name,e.phone);
	}
	void printList(LinkList L) {
		LNode*p=L->next;
		if(L->next==NULL){
			return;
		}
		printf("��ǰ������������Ԫ��Ϊ�� \r\n");
		while(p){
			pintElem(p->data);
			p=p->next;
		}
		printf("\r\n\n");
	}

	void printMenu(void){
	printf("\t\t------��������Ļ����������ʵ��------\r\n");
	printf("\t\t------1.����Ԫ��e------\r\n");
	printf("\t\t------2.ɾ����i��Ԫ��------\r\n");
	printf("\t\t------3.��ȡ��i��Ԫ��------\r\n");
	printf("\t\t------4.�жϵ�i��Ԫ��e�Ƿ����------\r\n");
	}
	void getElemFormConsole(ElemType*e) {
		printf("���������� �ֻ��ţ��س���ʾ������:\r\n");
		scanf_s("%s", e->name, 20);
		scanf_s("%s", e->phone, 20);
	}

	void FunctionNo1(LinkList L){
		ElemType e;
		int i;
		system("cls");
		printf("������Ҫ�����λ�ã��س���ʾ��������\r\n");
		scanf_s("%d",&i,4);
		getElemFormConsole(&e);
		int result=Listlnsert_L(L,i,e);
		if(result!=OK){
			printf("�������ʧ�ܣ�");
			system("pause");
		}
	}
	void FunctionNo2(LinkList L) {
		int i;
		system("cls");
		printf("������Ҫɾ����λ�ã��س���ʾ������:\r\n");
		scanf_s("%d", &i, 4);
		int result = ListDelete_L(L, i);
		if (result != OK) {
			printf("ɾ������ʧ��!");
			system("pause");
		}
	}
	void FunctionNo3(LinkList L){
		int i;
		ElemType e;
		system("cls");
		printf("������Ҫ��ѯ��λ�ã��س���ʾ��������\r\n");
		scanf_s("%d",&i,4);
		int result=GetElem_L(L,i,&e);
		if(result != OK){
			printf("��ѯ����ʧ�ܣ�");
			system("pause");
			return;
		}
		printf("\r\n��ѯ�����ĵ�%d��Ԫ��Ϊ��",i);
     	pintElem(e);
		system("pause");
	}
		void FunctionNo4(LinkList L){
			ElemType e;
			system("cls");
			getElemFormConsole(&e);
			int result = LocateElem_L(L,e);
			if(!result){
				printf("���ҵ�Ԫ��e�����ڣ�");
			}
			else{
				printf("���ҵ�Ԫ��e���ڣ�λ���ǵ�%d��",result);
			}
			system("pause");
		}
		#define FUNCTION01 1
		#define FUNCTION02 2
		#define FUNCTION03 3
		#define FUNCTION04 4
		void main(){
			LinkList L;
			int selectFun = 0;
			LNode*s=(LinkList)malloc(sizeof(LNode));
			if(s==NULL){
				exit(OVERFLOW);
				exit(OVERFLOW);
			}
			s->next=NULL;
			L=s;
			while(1){
			system("cls");
			printList(L);
			printMenu();
			printf("���������ѡ�񣺣��س���ʾ����)\r\n");
			scanf_s("%d",&selectFun,4);
			switch(selectFun){
			case FUNCTION01:
					FunctionNo1(L);
					break;
			case FUNCTION02:
					FunctionNo2(L);
					break;
			case FUNCTION03:
				FunctionNo3(L);
				break;
			case FUNCTION04:
				FunctionNo4(L);
				break;
				default:;
			}
		}
			
	}
		
	
	
	
