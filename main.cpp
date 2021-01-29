#include <iostream>

using namespace std;

int main()
{
    int buku, harga=3000;
    cout<<"diskon toko buku" <<endl;
    cout<<"harga buku:"<<harga<<endl;
    cout<<"masukan jumlah buku:";
    cin>>buku;
    if (buku>=5)
    {
        cout<<"mendapat potongan harga sebesar 15%"<<endl;
        cout<<"harga buku menjadi : "<<(harga*buku-(harga*buku/100*15));
    }
    else if (buku>=3)
    {
        cout<<"mendapat potongan harga sebesar 10%"<<endl;
        cout<<"harga buku menjadi : "<<(harga*buku-(harga*buku/100*10));
    }
    else if (buku>=2)
    {
        cout<<"mendapat potongan harga sebesar 5%"<<endl;
        cout<<"harga buku menjadi : "<<(harga*buku-(harga*buku/100*5));
    }
}
