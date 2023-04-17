#include<stdio.h>

    int u;
    int visited[3] = {0,0,0};
    int a[3][3] = {
        {0,1,1,},
        {1,0,1,},
        {0,0,0,}

    };

void DFS(int i)
{
    printf("%d",i);
    visited[i] = 1;
    for(int j = 0;j<3;j++)
    {

        if(a[i][j]==1 && !visited[j])
        {
            DFS(j);
        }
    }


}


void main()
{

    int u;
    int visited[3] = {0,0,0};
    int a[7][7] = {
        {0,1,1,},
        {1,0,1,},
        {0,0,0,}

    };

    DFS(1);


}