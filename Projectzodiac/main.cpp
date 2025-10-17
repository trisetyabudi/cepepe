#include <iostream>

using namespace std;

int main()
{
    cout << "Program Zodiac!" << endl;
    int bln,tgl;
        cout<<"Inputkan Bulan Lahir Anda(1-12):";
        cin>>bln;
        cout<<"Inputkan Tanggal Lahir Anda :";
        cin>>tgl;

            if (bln>0 && bln<=12 )
                {
                    if ((bln==12 && tgl>=20 && tgl<=31 )|| (bln==1 && tgl>=1 && tgl<=19))
                        {
                            cout<<"Bintang Kejora";
                        }
                    else if ((bln==1 && tgl>=20 && tgl<=31 )|| (bln==2 && tgl>=1 && tgl<=19))
                        {
                            cout<<"Bintang Tujuh";
                        }




                }
            else
                {cout<<"Bulan Invalid";}

    return 0;
}
