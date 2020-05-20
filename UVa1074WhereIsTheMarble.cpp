#define LOCAL
#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
#define LOCAL
int n,q,x,kase=0;
int a[100000];
int main(){
    #ifdef LOCAL
        freopen("data.in","r",stdin);
        freopen("data.out","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    while(scanf("%d%d",&n,&x)==2&&n){
        printf("CASE# %d\n",++kase);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        while(q--){
            int p=lower_bound(a,a+n,x)-a;
            if(a[p]==x)
                printf("%d is inside\n",x);
            else
                printf("%d is not inside\n",x);
        }

    }
    //for (int i=0;i<n;i++) cin>>a[i];
    
    //cout<<<<endl;
    return 0;
}