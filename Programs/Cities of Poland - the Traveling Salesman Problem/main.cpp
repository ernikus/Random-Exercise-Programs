#include<iostream>

using std::cout;
using std::endl;
using std::string;

void wroclaw_road(string const miasto[20], int const droga[20][20])
{
    int dl_test = 0;
    int nm_dlugosc = 99999;
    int nw_dlugosc = 0;
    int miasta_id_nw[6];
    int miasta_id_nm[6];

    for(int i=1; i<20; i++)
        for(int j=1; j<20; j++)
        {
            if(i==j)
                continue;

            for(int k=1; k<20; k++)
            {
                if(k==i||k==j)
                    continue;

                for(int l=1; l<20; l++)
                {
                    if(l==i||l==j||l==k)
                        continue;

                    if(droga[1][i]==0||droga[i][j]==0||droga[j][k]==0||droga[k][l]==0)
                        continue;
                    
                    dl_test = droga[1][i];
                    dl_test += droga[i][j];
                    dl_test += droga[j][k];
                    dl_test += droga[k][l];
                     
                    //cout << droga[i][j] << " + " << droga[j][k] << " + " << droga[k][m] << " + " << droga[m][p] << " = " << dl_test << endl;

                    if(dl_test>nw_dlugosc)
                    {
                        nw_dlugosc = dl_test;
                        miasta_id_nw[1] = 1;
                        miasta_id_nw[2] = i;
                        miasta_id_nw[3] = j;
                        miasta_id_nw[4] = k;
                        miasta_id_nw[5] = l;
                    }

                    if(dl_test<nm_dlugosc)
                    {
                        nm_dlugosc = dl_test;
                        miasta_id_nm[1] = 1;
                        miasta_id_nm[2] = i;
                        miasta_id_nm[3] = j;
                        miasta_id_nm[4] = k;
                        miasta_id_nm[5] = l;
                    }
                }
            }
        }

    cout << "Najkrotsza droga miedzy 5 miastami( ";
    for(int i=1; i<6; i++)
    {
        cout << miasto[miasta_id_nm[i]];
        if(i!=5)
            cout << "-";
    }
    cout << " ) to:\t" << nm_dlugosc << endl;

    cout << "Najdluzsza droga miedzy 5 miastami( ";
    for(int i=1; i<6; i++)
    {
        cout << miasto[miasta_id_nw[i]];
        if(i!=5)
            cout << "-";
    }
    cout << " ) to:\t" << nw_dlugosc << endl;
}

void short_road(string const miasto[20], int const droga[20][20])
{
    int dl_test = 0;
    int nm_dlugosc = 99999;
    int nw_dlugosc = 0;
    int miasta_id_nw[6];
    int miasta_id_nm[6];

    for(int i=1; i<20; i++)
        for(int j=1; j<20; j++)
        {
            if(i==j)
                continue;

            for(int k=1; k<20; k++)
            {
                if(k==i||k==j)
                    continue;

                for(int m=1; m<20; m++)
                {
                    if(m==i||m==j||m==k)
                        continue;

                    for(int p=1; p<20; p++)
                    {
                        if(p==i||p==j||p==k||p==m)
                            continue;

                        if(droga[i][j]==0||droga[j][k]==0||droga[k][m]==0||droga[m][p]==0)
                            continue;
                        
                        dl_test = droga[i][j];
                        dl_test += droga[j][k];
                        dl_test += droga[k][m];
                        dl_test += droga[m][p];

                        //cout << droga[i][j] << " + " << droga[j][k] << " + " << droga[k][m] << " + " << droga[m][p] << " = " << dl_test << endl;

                        if(dl_test>nw_dlugosc)
                        {
                            nw_dlugosc = dl_test;
                            miasta_id_nw[1] = i;
                            miasta_id_nw[2] = j;
                            miasta_id_nw[3] = k;
                            miasta_id_nw[4] = m;
                            miasta_id_nw[5] = p;
                        }

                        if(dl_test<nm_dlugosc)
                        {
                            nm_dlugosc = dl_test;
                            miasta_id_nm[1] = i;
                            miasta_id_nm[2] = j;
                            miasta_id_nm[3] = k;
                            miasta_id_nm[4] = m;
                            miasta_id_nm[5] = p;
                        }
                    }
                }
            }
        }

    cout << "Najkrotsza droga miedzy 5 miastami( ";
    for(int i=1; i<6; i++)
    {
        cout << miasto[miasta_id_nm[i]];
        if(i!=5)
            cout << "-";
    }
    cout << " ) to:\t" << nm_dlugosc << endl;

    cout << "Najdluzsza droga miedzy 5 miastami( ";
    for(int i=1; i<6; i++)
    {
        cout << miasto[miasta_id_nw[i]];
        if(i!=5)
            cout << "-";
    }
    cout << " ) to:\t" << nw_dlugosc << endl;
}

int main()
{
    
    //ustawianie danych do drogi
    int droga[20][20];

    //ustawiamy domyslna wartosc na 0
    for(int i=1; i<20; i++)
        for(int j=1; j<20; j++)
            droga[i][j] = 0;

    //wpisuje moje dane
    droga[1][2] = 188;
    droga[1][3] = 171;
    droga[1][4] = 121;
    droga[1][5] = 169;

    droga[2][6] = 80;
    droga[2][7] = 98;
    
    droga[3][6] = 123;
    droga[3][7] = 147;
    droga[3][8] = 96;
    
    droga[4][8] = 52;
    droga[4][9] = 117;
    droga[4][10] = 126;

    droga[5][9] = 125;
    droga[5][10] = 79;
    droga[5][11] = 116;

    droga[6][12] = 174;

    droga[7][12] = 177;

    droga[8][13] = 132;

    droga[9][14] = 133;

    droga[10][15] = 108;

    droga[11][15] = 192;

    droga[12][16] = 157;

    droga[13][16] = 178;

    droga[14][17] = 194;

    droga[15][18] = 194;

    droga[16][19] = 195;

    droga[16][19] = 195;
    
    droga[17][19] = 122;

    droga[18][19] = 181;
    ///


    
    /*
    //jesli wartosci w tablicy nie bedzie rowna 0 to sie wypisze
    for(int i=1; i<20; i++)
        for(int j=1; j<20; j++)
            if(droga[i][j]!=0)
                if(droga[i][j]!=0)
                cout << "droga[" << i << "][" << j << "] -\t" << droga[i][j] << endl;

    cout << endl << endl;
    */

    //nazwy miast
    string miasto[20];

    miasto[1] = "Wroclaw";
    miasto[2] = "Gniezno";
    miasto[3] = "Poznan";
    miasto[4] = "Kalisz";
    miasto[5] = "Czestochowa";
    miasto[6] = "Bydgoszcz";
    miasto[7] = "Torun";
    miasto[8] = "Konin";
    miasto[9] = "Lodz";
    miasto[10] = "Piotrkow";
    miasto[11] = "Krakow";
    miasto[12] = "Gdansk";
    miasto[13] = "Plock";
    miasto[14] = "Warszawa";
    miasto[15] = "Radom";
    miasto[16] = "Olsztyn";
    miasto[17] = "Bialystok";
    miasto[18] = "Ostrow";
    miasto[19] = "Suwalki";

    //2. Najkrotsza droga miedzy 5 miastami od Wro (w jedna strone)
    wroclaw_road(miasto, droga);

    for(int i=1; i<20; i++)
        for(int j=1; j<20; j++)
            if(droga[i][j]!=0)
                if(droga[j][i]!=0)
                    continue;
                else
                    droga[j][i] = droga[i][j];
            else
                if(droga[j][i]!=0)
                    droga[i][j] = droga[j][i];
                else
                    continue;

    cout << "***" << endl;
    
    wroclaw_road(miasto, droga);


    /*
    for(int i=1; i<20; i++)
        cout << "miasto [" << i << "] - " << "\t" << miasto[i] << endl;
    */

    //1. Najkrotsza i Najdluzsza droga miedzy 5 miastami

    cout << "***" << endl;
    short_road(miasto, droga);
    
    return 0;
}