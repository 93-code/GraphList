/* 11:52 2015-04-10 Friday */
#ifndef _HEAD_H_
#define _HEAD_H_

#define N 9 
#define ADDR_LEN sizeof(int)

typedef int VTYPE;
typedef struct Vnode
{
    VTYPE v;
    struct Vnode *next;
}LinkGraph;

extern LinkGraph **Create_Graph_List();
extern int Input_Graph_Edge(LinkGraph **g);
extern int Print_Graph_List(LinkGraph **g);
extern int One_Graph_List(LinkGraph *g);
extern int Insert_Order_List(LinkGraph *g,VTYPE data);
extern void BFS(LinkGraph **g,VTYPE v);

//<<<<<<< HEAD
//=======
//////////////////////
typedef int DATATYPE;

//链表节点的类型
//>>>>>>> d340452b7af9f82a4f56b5721e4e5b7a7999b1df
typedef struct node 
{
    DATATYPE data;
    struct node *next;
}LinkNode;

///////////////////////////////////////////////////////////////////
typedef struct 
{
    LinkNode *front;
    LinkNode *rear;
}LinkQueue;

extern LinkQueue *create_linkqueue();
extern int is_empty_linkqueue(LinkQueue *q);
extern int enter_linkqueue(LinkQueue *q,DATATYPE data);
//<<<<<<< HEAD
extern VTYPE delete_linkqueue(LinkQueue *q);
//=======
extern DATATYPE delete_linkqueue(LinkQueue *q);
//>>>>>>> d340452b7af9f82a4f56b5721e4e5b7a7999b1df
#endif

