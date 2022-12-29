#include <iostream>
using namespace std;
//20102185
//20102186
int main()
{
    int pilihan, jmlBeli, harga, hargaBarang, potongan, totalByr, totalBeli; kembali:
    char beli,belanjaLagi;

    cout<<"\t Toko Elektronik Jakta";cout<<endl;
    cout<<"\t Jl.Prof. M. Yamin Purwokerto";cout<<endl;
    cout<<endl;
    cout<<" ===================================================="; cout<<endl;

    cout << "============ MENU BARANG ELEKTRONIK ============" << endl;
    cout << "1. Mouse" << endl;
    cout << "2. Keyboard" << endl;
    cout << "3. Headset" << endl;
    cout << "4. Microphone" << endl;
    cout << "5. Gaming Chair" << endl;
    cout << "Masukkan Pilihan Anda : ";
    cin >> pilihan;
    cout << endl;
    cout << "Jumlah Pembelian : ";
    cin >> jmlBeli;cout << endl;
    if(pilihan == 1){

        cout << "JENIS MOUSE" << endl;
        cout << "1. Logitech G402 Hyperion Fury" << endl;
        cout << "2. Razer Deathadder Elite" << endl;
        cout << "3. Digital Alliance G8 Revival" << endl;
        cout << "4. Steelseries Rival 650 Wireless" << endl;
        cout << endl;
        cout << "Masukkan jenis mouse : ";
        cin >> pilihan;

        switch(pilihan){
        case 1:
            cout << "Mouse Logitech G402 Hyperion Fury";
            hargaBarang = 366000;
            harga = 366000 * jmlBeli;
            break;
        case 2:
            cout << "Razer Deathadder Elite";
            hargaBarang = 895000;
            harga = 895000 * jmlBeli;
            break;
        case 3:
            cout << "Digital Alliance G8 Revival";
            hargaBarang = 235000;
            harga = 235000 * jmlBeli;
            break;
        case 4:
            cout << "Steelseries Rival 650 Wireless";
            hargaBarang = 1800000;
            harga = 1800000 * jmlBeli;
            break;
        }

    }else if(pilihan == 2){
        cout << "JENIS KEYBOARD" << endl;
        cout << "1. SteelSeries Apex Pro TKL RGB" << endl;
        cout << "2. Logitech G Pro Tenkeyless" << endl;
        cout << "3. Razer Huntsman Elite" << endl;
        cout << "4. Roccat Vulcan 120 Aimo RGB" << endl;
        cout << endl;
        cout << "Masukkan jenis keyboard : ";
        cin >> pilihan;

        switch(pilihan){
        case 1:
            cout << "SteelSeries Apex Pro TKL RGB";
            hargaBarang = 2920000;
            harga = 2920000 * jmlBeli;
            break;
        case 2:
            cout << "Logitech G Pro Tenkeyless";
            hargaBarang = 1601000;
            harga = 1601000 * jmlBeli;
            break;
        case 3:
            cout << "Razer Huntsman Elite";
            hargaBarang = 3690000;
            harga = 3690000 * jmlBeli;
            break;
        case 4:
            cout << "Roccat Vulcan 120 Aimo RGB";
            hargaBarang = 3360600;
            harga = 3360600 * jmlBeli;
            break;
        }
    }else if(pilihan == 3){
        cout << "JENIS HEADSET" << endl;
        cout << "1. SteelSeries Arctis 7" << endl;
        cout << "2. Razer Nari Ultimate" << endl;
        cout << "3. HyperX Cloud Flight" << endl;
        cout << "4. Logitech G Pro X" << endl;
        cout << endl;
        cout << "Masukkan jenis headset : ";
        cin >> pilihan;

        switch(pilihan){
        case 1:
            cout << "SteelSeries Arctis 7";
            hargaBarang = 2415000;
            harga = 2415000 * jmlBeli;
            break;
        case 2:
            cout << "Razer Nari Ultimate";
            hargaBarang = 3635000;
            harga = 3635000 * jmlBeli;
            break;
        case 3:
            cout << "HyperX Cloud Flight";
            hargaBarang = 2457500;
            harga = 2457500 * jmlBeli;
            break;
        case 4:
            cout << "Logitech GPro X";
            hargaBarang = 2653500;
            harga = 2653500 * jmlBeli;
            break;
        }
    }else if(pilihan == 4){
        cout << "JENIS MICROPHONE" << endl;
        cout << "1. HyperX SoloCast" << endl;
        cout << "2. Elgato Wave 3" << endl;
        cout << "3. Razer Seiren Emote" << endl;
        cout << "4. Fantech Leviosa MCX01" << endl;
        cout << endl;
        cout << "Masukkan jenis microphone : ";
        cin >> pilihan;

        switch(pilihan){
        case 1:
            cout << "HyperX SoloCast";
            hargaBarang = 1049000;
            harga = 1049000 * jmlBeli;
            break;
        case 2:
            cout << "Elgato Wave 3";
            hargaBarang = 3499000;
            harga = 3499000 * jmlBeli;
            break;
        case 3:
            cout << "Razer Seiren Emote";
            hargaBarang = 2649000;
            harga = 2649000 * jmlBeli;
            break;
        case 4:
            cout << "Fantech Leviosa MCX01";
            hargaBarang = 519000;
            harga = 519000 * jmlBeli;
            break;
        }
    }else if(pilihan == 5){
        cout << "JENIS GAMING CHAIR" << endl;
        cout << "1. STracing Superior Series" << endl;
        cout << "2. Fantech GCI88" << endl;
        cout << "3. Cougar Armor S" << endl;
        cout << "4. Rexus RGC 101" << endl;
        cout << endl;
        cout << "Masukkan jenis gaming chair : ";
        cin >> pilihan;


        switch(pilihan){
        case 1:
            cout << "STracing Superior Series";
            hargaBarang = 3000000;
            harga = 3000000 * jmlBeli;
            break;
        case 2:
            cout << "Fantech GCI88";
            hargaBarang = 2599000;
            harga = 2599000 * jmlBeli;
            break;
        case 3:
            cout << "Cougar Armor S";
            hargaBarang = 3550000;
            harga = 3550000 * jmlBeli;
            break;
        case 4:
            cout << "ThunderX3 TC5";
            hargaBarang = 2799000;
            harga = 2799000 * jmlBeli;
            break;
        }

    }
          cout << endl;

        cout << " Jumlah Barang : " << jmlBeli << endl;
        cout << " Harga Barang : Rp." << hargaBarang << endl;

    if (jmlBeli > 2) {
            potongan = 0.3 * harga;
            } else {
                    potongan= 0;
            }

            cout << " Total Harga Barang : Rp." << harga << endl;
            cout << " Potongan Harga : Rp." << potongan << endl;
            totalByr= harga - potongan;

			cout << " ====================================================" << endl;
            cout << " Total Bayar : Rp."<<totalByr << endl;
            cout << " ====================================================" << endl;
            cout << endl;
            cout << " Belanja Lagi? [Y/T] : ";
            cin >> belanjaLagi;
            cout << endl;

		if(belanjaLagi=='Y' || belanjaLagi=='y')
            {
                goto kembali;}
        if(belanjaLagi=='T' || belanjaLagi=='t')
            {
                goto selesai;} selesai:


    return 0;
}

