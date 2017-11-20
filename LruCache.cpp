struct node
{
	int val;
	struct node *prev,*next;
};
struct node *head=NULL;
unordered_map<int,struct node*> m;
unordered_map<int,int> d;
int capacity;
void push(int data)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->val=data;
	newnode->prev=NULL;
	if(head==NULL)
		newnode->next=NULL;
	else
	{
		newnode->next=head;
		head->prev=newnode;
	}
	head=newnode;
	m.insert(pair<int,struct node*>(data,newnode));
}

int pop(int data)
{
	unordered_map<int,struct node*>::iterator it;
	struct node* temp;
	it=m.find(data);
	temp=it->second;
	int item=temp->val;
	if(temp->next==NULL&&temp->prev==NULL)
		head=NULL;
	else if(temp->next==NULL&&temp->prev!=NULL)
	{
		(temp->prev)->next=NULL;
	}
	else{
	(temp->next)->prev=temp->prev;
	(temp->prev)->next=temp->next;
	}
	free(temp);
	m.erase(data);
	return item;
}


LRUCache::LRUCache(int cap) {
    
     capacity=cap;
    m.clear();
    d.clear();
    if(head!=NULL)
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            struct node *prev=temp;
            temp=temp->next;
            free(prev);
        }
    }
    head=NULL;

}

int LRUCache::get(int key) {
    unordered_map<int,int>::iterator t;
	t=d.find(key);
	if(t==d.end())
		return -1;
	else
	{
		if((head->val)==key)
		{
			return t->second;
		}
		pop(key);
		push(key);
		return t->second;
	}

}

void LRUCache::set(int key, int value) {
    
    unordered_map<int,int>::iterator t;
	t=d.find(key);
	if(t!=d.end()){
		t->second=value;
		if((head->val)==key)
			return;
		pop(key);
		push(key);
		return;
	}
	if(capacity>0)
	{
		d.insert(pair<int,int>(key,value));
		push(key);
		capacity=capacity-1;
	}
	else
	{
		struct node *temp=head,*prev;
		while(temp!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		int v=prev->val;
		pop(prev->val);
		d.erase(v);
		d.insert(pair<int,int>(key,value));
		push(key);
	}

}
