#include<iostream>
using namespace std;
int main()
{
	double tot_beli, potongan, jum_bayar;
	cout <<"total pembelian Rp. ";
	cin>>tot_beli;
	if (tot_beli>=50000)
	potongan = 0.2*tot_beli;
	cout<<"besarnya potongan Rp."<<potongan<<endl;
	jum_bayar=tot_beli-potongan;
	cout<<"jumlah yanng harus dibayarkan Rp."<<jum_bayar;
}
