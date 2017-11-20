#define max 10000000
int tope;
int min;
int a[max],m[max];

void init() {
    tope=-1;
    min=INT_MAX;
}
void push(int x) {
	tope++;
	a[tope]=x;
	if(min>x)
		min=x;
	m[tope]=min;
}

void pop() {
	if(tope==-1){
		
	}
	else{
		tope--;
		if(tope!=-1)
			min=m[tope];
			else min=INT_MAX;
	}
}

int top() {
	if(tope==-1){
		return -1;
	}
	else
	return a[tope];
}

int getMin() {
	if(tope==-1)
		return -1;
	else
	return m[tope];
}