 #include <bits/h>
using namespace std;

int main() {
	int t; cin>>t; while(t--){
	    int n; cin>>n;
	    int a[n]; for(int i=0; i<n; i++) cin>>a[i];
	    cout<<*min_element(a,a+n)<<'\n';
	}
	return 0;
}

