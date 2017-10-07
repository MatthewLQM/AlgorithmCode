#include<stdio.h>

int main()
{
    int head=0,n=0,v=0;
    scanf("%d%d%d",&head,&n,&v);
    
    int address=0,data=0,next=0,prior=0,ppp=0;
    int node[100000][3]={0};// 0-prior   1-Data 2-Next  
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&address,&data,&next);
        node[address][1]=data;
        node[address][2]=next;
    }
     
    next=head; //修补前指针 
    prior=head;
    for(int i=0;i<n;i++)
    {
        node[next][0]=prior;
        prior=next;  
        next=node[next][2];
        while(next<0)
        {
                     n=i+1;
                     break;
                     
        }
    }
    ppp=next;//node[next][0]=prior;
        
        
    prior=-1;
    next=head;
    if(v<=1) v=n+1;
    for(int i=0;i<n;)
    {
        next=head; 
        if(i+v<=n)
        {
            for(int j=i;j<i+v;j++)
            {
                if(j==i) next=head;
                else next=node[next][2];
            }
     
            head=node[next][2];
            for(int j=i;j<i+v;j++)
            {
                 if(j) printf(" %05d\n",next);
                 printf("%05d %d",next,node[next][1]);
                  
                 next=node[next][0];       
            }
        }
        else
        { 
            for(int j=i;j<n;j++)
            {
                 if(j) printf(" %05d\n",next);
                 printf("%05d %d",next,node[next][1]);
                 next=node[next][2];       
            } 
        }
            
        i+=v;    
    }
    printf(" %d",ppp);
    return 0;
}