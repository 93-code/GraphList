/* 11:52 2015-04-10 Friday */
#ifndef _HEAD_H_
#define _HEAD_H_

#define N 5 
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
#endif

