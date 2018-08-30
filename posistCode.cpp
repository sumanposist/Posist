#include<bits/stdc++.h>
#include<ctime.h>
using namespace std;
int sum=0;
int nodeid=0;
int nodeno=0;
// structure for node to save data
struct Node
{
 string timestamp;
 string data;
 int nodeNumber;
 string nodeId;
 struct Node *refrenceNodeId;
 struct Node *leftchildRefrenceNodeId;
 struct Node *rightchildRefrenceNodeId;
 struct Node *genesisReferenceNodeId;
 string HashValue;
};
// formation of tree
// inserting the values in the  tree
struct Node* insertNode(struct Node *genesisNode,string key)
{
    if(genesisNode==NULL)
    {
        struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
        ptr->timestamp=time_t;
        ptr->data=data;
        ptr->nodeNumber=nodeno++;
        ptr->nodeId=nodeid++;
        ptr->leftchildRefrenceNodeId=NULL;
        ptr->rightchildRefrenceNodeId=NULL;
   }
   if(key<genesisNode->data)
   {
       genesisNode->leftchildRefrenceNodeId=insertNode(genesisNode->leftchildRefrenceNodeId);
   }
   else
   {
       genesisNode->rightchildRefrenceNodeId=insertNode(genesisNode->rightchildRefrenceNodeId);
   }
   return genesisNode;
};

// structure for dynamic list
struct node
{
    int ownerid
    float value;
    string ownerName;
    struct node *next;
}*start=NULL,*end=NULL;



void encryption(int ownerId,string ownerName,float value)
{
    string s=ownerName;
    string f=value;
    int n=ownerId

    //encryption of owner name
    // encryption tecnique used is increasing every character with +1 in its ASCII value

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='z' ||s[i]=='Z')
        {
           s[i]=s[i]+1;
        }
        else if(s[i]==' ')
        {
            s[i]=s[i];
        }
        else
        {
            s[i]=s[i]+1;
        }
    }
    // *******************
    // encryption of ownerid
    // encryption tecnique used id reversing the ownerid
    int rev=1;
    while(n>0)
    {
        int r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }


    // encryption of floating value
    // floation value remain same in the encryption


}
void decryption(int ownerId,string ownerName,float value)
{
    string s=ownerName;
    string f=value;
    int n=ownerId;
    //decryption of ownerName
     for(int i=0;i<s.size();i++)
    {
        if(s[i]=='z' ||s[i]=='Z')
        {
           s[i]=s[i]-1;
        }
        else if(s[i]==' ')
        {
            s[i]=s[i];
        }
        else
        {
            s[i]=s[i]-1;
        }
    }
   // decryption of ownerId
   int rev=1;
    while(n>0)
    {
        int r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
}
int main()
{
    // n is the size of dynamic list
    int n;
    cin>>n;
    //constructing dynamic list with
    // data ownerId, floation value and ownername
    for(int i=0;i<n;i++)
    {
        struct node *ptr=(struct Node*)malloc(sizeof(struct Node));
        int ownerid;
        float value;
        string ownername;
        cout<<"Enter owner id";
        cin>>ownerid;
        cout<<"Enter floating value";
        cin>>value;
        cout<<"Enter owner name";
        cin>>ownername;

        ptr->ownerid=ownerid;
        ptr->value=value;
        ptr->ownerName=ownername
        if(start==NULL)
        {
            start=ptr;
            end=ptr;

        }
        else
        {
            end->next=ptr;
            end=end->next;
        }
    }


}
