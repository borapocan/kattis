#include<stdio.h>
int main(){int n,a,m=1e5;scanf("%d",&n);while(n--)scanf("%d",&a),m=a<m?a:m;printf("%d",m);}
