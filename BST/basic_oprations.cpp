#include<bits/stdc++.h>
using namespace std;

#define lli long long int 
#define vi vector<int> 
#define MOD 10000007
#define MAX INT_MAX
#define  MIN INT_MIN
#define all(v) (v).begin(), (v).end() 


void print_mat(vector< vector<int> > &a ){
    for(auto i=0;i<(int)a.size();i++){
        for(auto j=0;j < (int)a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

struct Node{
	int val;
	Node *left;
	Node *right;
	Node(int x){
		val = x; left = right = NULL;
	}
};
bool search(Node *root, int x){

	if(!root)
		return false;
	else if(root->val == x) 
		return true;	
	else if(root->val > x)
		return search(root->left, x);
		
	return search(root->right, x);
	
}


void solve(){
		
		Node* root = new Node(10); 
	    root->left = new Node(9); 
	    root->left->left = new Node(11); 
		root->right = new Node(15); 
		root->right->left = new Node(13); 
	    root->right->right = new Node(16); 
		cout<<(search(root, 13) ? "Node is there\n" : "Node isn't there\n");
	
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

    int t;
    cin>>t;
    while(t--){

        
	solve();

    }


    return 0;
}
