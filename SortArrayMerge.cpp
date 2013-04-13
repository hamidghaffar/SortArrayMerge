#include "stdafx.h"
#include <iostream>

using namespace std;
int* merge(int a[], int b[] , int n , int m){
  int* c = new int[n+m];
	int i =0 , j = 0;
	for(int q=0; q<m+n ; q++){
		if(i==n){
			c[q]=b[j];
			j++;
		}else if(j == m){
			c[q]=a[i];
			i++;
		}
		else if(a[i] < b[j]){
			c[q]=a[i];
			i++;
		}else{
			c[q]=b[j];
			j++;
		}
	}
	return c;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n,m;
	cout<<"n = ";
	cin>>n;
	int* a = new int[n];
	for(int i=0 ; i<n ; i++){
		cin>>a[i];
	}
	cout<<"m = ";
	cin>>m;
	int* b = new int[m];
	for(int i=0 ; i<m ; i++){
		cin>>b[i];
	}
	int* c ;
	c = merge(a,b,n,m);
	for(int i=0 ; i<n+m ; i++){
		cout<<c[i]<<' ';
	}
	return 0;
}
