#include<stdio.h>
#include<stdlib.h>

long int n,m,a[200001],b[200001];

struct node{
    long int data;
    struct node *left;
    struct node *right;
}Node;

struct node *root=NULL;

struct node* create(long int n){
    struct node *temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=n;
    temp1->left=NULL;
    temp1->right=NULL;
    return temp1;
}

int insert(struct node *start,long int e){
  if(root==NULL){
      start=create(e);
      root=start;
      return 0;
  }

  else if(start->right==NULL&&e>start->data){start->right=create(e);return 0;}
  else if(start->left==NULL&&e<start->data){start->left=create(e);return 0;}
  else if(start->data==e)return 1;
  else if(e>start->data)insert(start->right,e);
  else if(e<start->data)insert(start->left,e);

}


int main(){

long int temp,c=0;
    scanf("%ld %ld",&n,&m);
    for(int i=0;i<n;i++)scanf("%ld",&a[i]);
    for(int i=0;i<m;i++)scanf("%ld",&b[i]);

    for(long int i=0;i<n;i++){
      if(c==n+m-1)break;
        for(long int j=0;j<m;j++){
            temp=a[i]+b[j];
            if(insert(root,temp)==0){c++;printf("%ld %ld\n",i,j);}
        }
    }

    return 0;
}
