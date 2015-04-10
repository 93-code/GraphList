/* 11:52 2015-04-10 Friday */
#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main()
{
    
    LinkGraph **g = Create_Graph_List();

    Input_Graph_Edge(g);

    Print_Graph_List(g);

    return 0;
}
