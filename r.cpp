#define LOCAL
#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
#define LOCAL
//int n,m;
//int a[100000];
const int maxn=10000;
int main(){
    #ifdef LOCAL
        freopen("data.in","r",stdin);
        freopen("data.out","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    //ifstream infile;
    //infile.open("in.txt");
    //cin.rdbuf(infile.rdbuf());
    //cin>>n;
    //for (int i=0;i<n;i++) cin>>a[i];
    int n,q,x,a[maxn],kase=0;
    while(scanf("%d%d",&n,&q)==2&&n){
        printf("CASE# %d:\n",++kase);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        while(q--){
            scanf("%d",&x);
            int p=lower_bound(a,a+n,x) -a;
            if(a[p]==x)printf("%d found at %d\n",x,p+1);
            else printf("%d not found\n",x);

        }
    }
    //cout<<<<endl;
    return 0;
}