using namespace std;

int findMedian(int a[], int n){
    priority_queue<int>s;
    priority_queue<int,vector<int>,greater<int>>g;
    s.push(a[0]);
    int med = s.top();
    cout<<med<<endl;
    for(int i=1; i<n; i++){
        int x = a[i];
        if(s.size()>g.size()){
            if(x<med){
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else{
                g.push(x);
            }
            med = (s.top()+g.top())/2;
        }
        else if(s.size()==g.size()){
            if(x<med){
                s.push(x);
                med = s.top();
            }
            else{
                g.push(x);
                med = g.top();
            }
        }
        else{
            if(x>med){
                s.push(g.top());
                g.pop();
                g.push(x);
            }
            else
                s.push(x);
            med = (s.top()+g.top())/2;
        }
        cout<<med<<endl;
    }
}

int main()
 {

	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
            cin>>a[i];
	    }
	    findMedian(a,n);
	
	return 0;
}
