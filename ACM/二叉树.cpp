#include<bits/stdc++.h>
using namespace std;

struct BstNode{
	int data;
	BstNode * left;
	BstNode * right;
	
};
typedef struct BstNode Bst;

	Bst * Delete(Bst*root,int data)
{
	if(root == NULL) return root;
	else if(data < root->data) root->left = Delete(root->left,data);
	else if(data > root->data) root ->right = Delete(root->right,data);//注意这里，当找到相等的数据自动执行下面的语句
	else{  
		if(root -> left == NULL && root->right == NULL)//没有孩子的情况
		{
			delete root;
			root == NULL;
		}
		else if(root -> left == NULL)//有一个孩子的情况
		{
			Bst * temp = root;
			root = root->right;
			delete temp;
		}
		
		else if(root->right == NULL)
		{
			Bst * temp = root;
			root = root->left;
			delete temp;
			
		}
		else{//有两个孩子的情况
			Bst *temp = FindMin(root->right);
			root -> data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}
bool IsSubtreeLesser(Node*root,int value//检查二叉数的每个元素都小于某个值
{
	if(root == NULL)
	return true;
	if(root->data <=)
}

bool IsSubtreeGreater(Node*root,int value)
{
	
}
bool ISBinarySearchTree(Bst *root)//判断是否为二叉树
{
	if(root == NULL)
	return true;
	if()
}
void Preorder(Bst * root)//前序深度遍历
{
	if(root == NULL)
	return;
	printf("%c",root->data);
	Preorder(root->left);//这个是你左边的递归循环完之后，开始找右边的递归
	Preorder(root->right);
}
void Inorder(Bst * root)//中序
{
	if(root == NULL)
	return;
	Inorder(root->left);
	printf("%c",root->data);
	Inorder(root->right);
}
void Backorder(Bst * root)//后序
{
	if(root == NULL)
	return;
	Backorder(root -> left);
	Backorder(root -> right);
	printf("%c",root->data);
}
int findheight(Bst * root)//二叉树的高度
{
	if(root == NULL)
	return -1;
	return max(findheight(root->left),findheight(root->right))+1;//递归很巧妙的方法，
	//如果root->下一个为零那么返回-1则进入上一个递归返还的值为-1进行计算，这样挨个进行下去，就可以找到数的高度
}

void LevelOrder(Bst * root)//广度优先排序
{
	if(root == NULL) return;
	queue<Node*>Q;
	Q.push(root); 
	while(Q.empty != NULL)
	{
		Bst *current = Q.front();
		cout<<current -> data<<" ";
		if(current->left != NULL)
		Q.push(current -> left);
		if(current->right != NULL)
		Q.push(current -> right);
		Q.pop();
	}
}

Bst*GetNewNode(int data)
{
	Bst*newNode = new BstNode();
	newNode -> data = data;
	newNode->left = newNode->right =  NULL;
	return newNode;
}
bool Search(BstNode*root,int data)
{
	if(root == NULL)
	return false;
	else if(root->data == data)
	return true;
	else if(data <= root->data)
	return Search(root->left,data);
	else return Search(root->right,data);
}
Bst* Insert(Bst*root,int data){
	if(root == NULL)
	{
		root=GetNewNode(data);
	}
	else if(data <= root -> data)
	{
		root->left = Insert(root->left,data);
	}
	else
	{
		root->right = Insert(root->right,data);
	}
	return root;
}

int main()
{      
	BstNode * root = NULL;
	int number;
	cin>>number;
	root=Insert(root,2);
	root=Insert(root,3);
	root=Insert(root,4);
	root=Insert(root,5);
	if(Search(root,number) == true)
	cout<<"find";
	else
	cout<<"NOT";
    return 0;
}   