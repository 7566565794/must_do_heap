using namespace std;

int main()
 {
     int t;
     cin>>t;
     
     while(t--){
         int k,n;
         cin>>k>>n;
         int a[n];
         for(int i=0; i<n; i++)
            cin>>a[i];
         priority_queue<int, vector<int>,greater<int> > q;
         int i=0; 
         for(i = 0; i<n && i<k-1; i++){
             q.push(a[i]);
             cout<<"-1 ";
         }
         if(i<n){
                q.push(a[i++]);
             cout<<q.top()<<" ";
         }
         while(i<n){
             if(a[i]>q.top()){
                 q.pop();
                 q.push(a[i]);
             }
             cout<<q.top()<<" ";
             i++;
         }
         cout<<endl;
     }
	
	return 0;
}
