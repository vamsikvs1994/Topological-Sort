#include<stdio.h>


int v_entry[100];

int v_exit[100];

int visited[100];

int sorted_list[100];

int input[100][100];

int  sorted_list[100];

 

void VISIT (int);

int nodes;

int v=1;

int x=1;

int N=1;

int valid_paths;

 

void main()

{

       printf("Enter number of vertices:\t");

     scanf("%d", &nodes);

       

       for(int i = 1; i <= nodes; i++)

     {

               for(int j = 1; j <= nodes; j++)

               {

           input[i][j]=9999;

               }

               

         }

 
 input[1][6]=1;
 input[2][7]=1;
 input[3][8]=1;
 input[4][8]=1;
 input[5][9]=1;
 input[6][10]=1;
 input[6][10]=1;
 input[7][11]=1;
 input[8][12]=1;
 input[8][13]=1;
 input[9][14]=1;
 input[10][15]=1;
 input[11][16]=1;
 input[12][16]=1;
 input[12][17]=1;
 input[13][17]=1;
 input[14][17]=1;
 input[16][18]=1;
 input[16][19]=1;
 input[18][21]=1;
 input[19][21]=1;
 input[18][20]=1;
 input[20][22]=1;
 input[21][22]=1;

  
        for(v=1; v<=nodes;v++)
        {
               while(visited[v]!=1 && v<=nodes)

               {
                        printf("\n Main Visited node is %d\n",v);

                       VISIT(v);


               }
        }


printf("The sorted topological order of nodes is as follows:\n");
      for(int j=1;j<=nodes;j++)      
{
    printf("sorted_list[%d] = %d\t",j,sorted_list[j]);
}
    
}

 

void VISIT(int v)

{

   visited[v]=1;

   v_entry[v] =N;

   N=N+1;

   for(int j=1;j<=nodes;j++)

   {

       if(input[v][j]==1 && visited[j]!=1)

       {
           printf("\n Related visited nodes are %d\n",j);
           VISIT(j);


       }

   }
   
   v_exit[v]=N;

   N=N+1;
   sorted_list[x] = v; 
    x++;



}