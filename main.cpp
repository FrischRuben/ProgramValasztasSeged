#include <iostream>
using namespace std;

int utvalaszto();


int main()
{
    utvalaszto();
    return 0;
}

int utvalaszto() {
    int first;
    cout << "Miert szeretnel megtanulni programozni? \n"
            "--------------------------------------- \n"
            "Nyomj 1-est, ha: A gyerekek miatt \n"
            "Nyomj 2-est, ha: A penz miatt \n"
            "Nyomj 3-ast, ha: Fogalmam sincs, javasolj egy nyelvet! \n"
            "Nyomj 4-est, ha: Szorakozasbol \n"
            "Nyomj 5-ost, ha: Mert erdekel \n"<< endl;
    cin >> first;

////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////
    switch(first){
        case 1:
            cout << "Szamodra a megfelelo valasztas a Python" << endl;
            system ("pause");
            break;
////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////
        case 2:
            int case2per1;
            cout << "Milyen modon szeretnel inkabb penzt keresni? \n"
                    "-------------------------------------------- \n"
                    "Nyomj 1-est, ha: Valakinek dolgozni szeretnel, allast szeretnel! \n"
                    "Nyomj 2-est, ha: Van egy jo otleted, sajat magadnak dolgoznal!" << endl;

            cin >> case2per1;


            switch(case2per1) {
                case 1:
                    int case2per1per1;
                    cout << "Milyen platformon, területen? \n"
                            "----------------------------- \n"
                            "Nyomj 1-est ha: 3D, jatek \n"
                            "Nyomj 2-est, ha: Mobil alkalmazasok \n"
                            "Nyomj 3-ast, ha: Gazdasagi terulet \n"
                            "Nyomj 4-est, ha: Web \n"
                            "Nyomj 5-ost, ha: Nagy cegeknek programozas \n"
                            "Nyomj 6-ost, ha: Csak a penz erdekel!\n" << endl;
                    cin >> case2per1per1;

                    switch(case2per1per1){
                        case 1:
                            cout << "Szamodra a megfelelo valasztas a C++" << endl;
                            system ("pause");
                            break;

                        case 2:
                            int iosorandroid;
                            cout << "Milyen rendszerre programoznal? \n"
                                    "------------------------------- \n"
                                    "Nyomj 1-est ha: IOS \n"
                                    "Nyomj 2-est ha: Android \n" << endl;
                            cin >> iosorandroid;

                            switch(iosorandroid) {
                                case 1:
                                    cout << "Szamodra a megfelelo valasztas az OBJECTIVE-C" << endl;
                                    system ("pause");
                                    break;
                                case 2:
                                    cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                    system ("pause");
                                    break;
                            }
                            break;
break;


                        case 3:
                            int microsoft12;
                            cout << "Mi a velemenyed a Microsoftrol? \n"
                                    "------------------------------- \n"
                                    "Nyomj 1-est ha: Utalod \n"
                                    "Nyomj 2-est ha: Semleges \n"
                                    "Nyomj 3-ast ha: Imadod \n" << endl;
                            cin >> microsoft12;
                            switch(microsoft12) {
                                case 1:
                                   cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                   system ("pause");
                                    break;
                                case 2:
                                    cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                    system ("pause");
                                    break;
                                case 3:
                                    cout << "Szamodra a megfelelo valasztas a C#" <<endl;
                                    system ("pause");
                                    break;
                            }
                            break;

                        case 4:
                            int frontorend;
                            cout << "Front-end: Webes feluletek VAGY Back-end: A weboldalak mogott rejlo komponensek \n"
                                    "------------------------------------------------------------------------------- \n"
                                    "Nyomj 1-est, ha: Front-end \n"
                                    "Nyomj 2-est, ha: Back-end \n"  << endl;
                            cin >> frontorend;
                            switch(frontorend) {
                                    case 1:
                                        cout << "Szamodra a megfelelo valasztas a JAVASCRIPT" << endl;
                                        system ("pause");
                                        break;

                                    case 2:
                                        int nagyvorstartup;
                                        cout << "Hol akarsz dolgozni? \n"
                                                "--------------------\n"
                                                "Nyomj 1-est, ha: Nagyvallalat \n"
                                                "Nyomj 2-est, ha: Startup \n" << endl;
                                        cin >> nagyvorstartup;


                                        switch(nagyvorstartup) {
                                            case 1:
                                                int microsoft;
                                                cout << "Mi a velemenyed a Microsoftrol? \n"
                                                        "------------------------------- \n"
                                                        "Nyomj 1-est ha: Utalod \n"
                                                        "Nyomj 2-est ha: Semleges \n"
                                                        "Nyomj 3-ast ha: Imadod \n" << endl;
                                                cin >> microsoft;

                                                    switch(microsoft) {
                                                        case 1:
                                                           cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                           system ("pause");
                                                            break;
                                                        case 2:
                                                            cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                            system ("pause");
                                                            break;
                                                        case 3:
                                                            cout << "Szamodra a megfelelo valasztas a C#" <<endl;
                                                            system ("pause");
                                                            break;
                                                    }
                                            break;
                                            case 2:
                                                int startup;
                                                cout << "Szeretnel kiprobalni valami uj, nem kiforrt dolgot, tele lehetosegekkel? \n"
                                                        "------------------------------------------------------------------------ \n"
                                                        "Nyomj 1-est, ha: Igen \n"
                                                        "Nyomj 2-est, ha: Nem tudom \n"
                                                        "Nyomj 3-ast, ha: Nem \n" << endl;
                                                cin >> startup;
                                                switch(startup) {
                                                        case 1:
                                                            cout << "Szamodra a megfelelo nyelv a JAVASCRIPT" << endl;
                                                            system ("pause");
                                                            break;
                                                        case 2:
                                                            int kedvenc;
                                                            cout << "Melyik a kedvenc jatekot? \n"
                                                                    "------------------------- \n"
                                                                    "Nyomj 1-est, ha: Lego \n"
                                                                    "Nyomj 2-est, ha: Play-Doh \n"
                                                                    "Nyomj 3-ast, ha: Regi, kopott fakockak \n" << endl;
                                                            cin >> kedvenc;
                                                            switch(kedvenc) {
                                                                case 1:
                                                                    cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                    system ("pause");
                                                                    break;
                                                                case 2:
                                                                    cout << "Szamodra a megfelelo valasztas a Ruby" << endl;
                                                                    system ("pause");
                                                                    break;
                                                                case 3:
                                                                    cout << "Szamodra a megfelelo valasztas a PHP" << endl;
                                                                    system ("pause");
                                                                    break;
                                                                    }
                                                        break;
                                                        case 3:
                                                            int kedvenc2;
                                                            cout << "Melyik a kedvenc jatekot? \n"
                                                                    "------------------------- \n"
                                                                    "Nyomj 1-est, ha: Lego \n"
                                                                    "Nyomj 2-est, ha: Play-Doh \n"
                                                                    "Nyomj 3-ast, ha: Regi, kopott fakockak \n" << endl;
                                                            cin >> kedvenc2;
                                                            switch(kedvenc2) {
                                                                case 1:
                                                                    cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                    system ("pause");
                                                                    break;
                                                                case 2:
                                                                    cout << "Szamodra a megfelelo valasztas a Ruby" << endl;
                                                                    system ("pause");
                                                                    break;
                                                                case 3:
                                                                    cout << "Szamodra a megfelelo valasztas a PHP" << endl;
                                                                    system ("pause");
                                                                    break;
                                                                    }
                                                            break;
                                                            }
                                                break;
                                        }
                            }
                            break;


                        case 5:
                            int cegvalasztas;
                            cout << "Melyik cegnek szeretnel dolgozni? \n"
                                    "--------------------------------- \n"
                                    "Nyomj 1-est, ha: Mircosoft \n"
                                    "Nyomj 2-est, ha: Apple \n"
                                    "Nyomj 3-ast, ha: Google \n"
                                    "Nyomj 4-est, ha: Facebook \n" << endl;
                            cin >> cegvalasztas;
                                        switch(cegvalasztas) {
                                            case 1:
                                                cout << "Szamodra a megfelelo valasztas a C#" << endl;
                                                system ("pause");
                                                break;
                                            case 2:
                                                cout << "Szamodra a megfelelo valasztas a OBJECTIVE-C" << endl;
                                                system ("pause");
                                                break;
                                            case 3:
                                                cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                system ("pause");
                                                break;
                                            case 4:
                                                cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                system ("pause");
                                                break;
                                        }
                            break;

                        case 6:
                            cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                            system ("pause");
                            break;

            }
            break;
                        case 2: //startup
                            int startupval;
                            cout << "Milyen platformon, teruleten? \n"
                                    "----------------------------- \n"
                                    "Nyomj 1-est, ha: 3D, jatek \n"
                                    "Nyomj 2-est, ha: Mobil alkalmazas \n"
                                    "Nyomj 3-ast, ha: Gazdasagi terulet \n"
                                    "Nyomj 4-est, ha: Web \n" << endl;
                            cin >> startupval;
                                        switch(startupval) {
                                            case 1:
                                                cout << "Szamodra a megfelelo valasztas a C++" << endl;
                                                system ("pause");
                                                break;
                                            case 2:
                                                int iosorandroid3;
                                                cout << "Milyen rendszerre programoznal? \n"
                                                        "------------------------------- \n"
                                                        "Nyomj 1-est ha: IOS \n"
                                                        "Nyomj 2-est ha: Android \n" << endl;
                                                cin >> iosorandroid3;

                                                switch(iosorandroid3) {
                                                    case 1:
                                                        cout << "Szamodra a megfelelo valasztas az OBJECTIVE-C" << endl;
                                                        system ("pause");
                                                        break;
                                                    case 2:
                                                        cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                        system ("pause");
                                                        break;
                                                }
                                                break;
                                            case 3:
                                                int microsoft3;
                                                cout << "Mi a velemenyed a Microsoftrol? \n"
                                                        "------------------------------- \n"
                                                        "Nyomj 1-est ha: Utalod \n"
                                                        "Nyomj 2-est ha: Semleges \n"
                                                        "Nyomj 3-ast ha: Imadod \n" << endl;
                                                cin >> microsoft3;

                                                    switch(microsoft3) {
                                                        case 1:
                                                           cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                           system ("pause");
                                                            break;
                                                        case 2:
                                                            cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                            system ("pause");
                                                            break;
                                                        case 3:
                                                            cout << "Szamodra a megfelelo valasztas a C#" <<endl;
                                                            system ("pause");
                                                            break;
                                                    }
                                                break;

                                            case 4:
                                                int startupweb;
                                                cout << "Valos idoben frissulo webalkalmazast szeretnel? \n"
                                                        "Nyomj 1-est, ha: Igen \n"
                                                        "Nyomj 2-est, ha: Nem \n" << endl;
                                                cin >> startupweb;
                                                        switch(startupweb) {
                                                            case 1: // igen
                                                                cout << "Szamodra a megfelelo valasztas a JAVASCRIPT" << endl;
                                                                system ("pause");
                                                                break;
                                                            case 2: //nem
                                                                int startup10;
                                                                cout << "Szeretnel kiprobalni valami uj, nem kiforrt dolgot, tele lehetosegekkel? \n"
                                                                        "------------------------------------------------------------------------ \n"
                                                                        "Nyomj 1-est, ha: Igen \n"
                                                                        "Nyomj 2-est, ha: Nem tudom \n"
                                                                        "Nyomj 3-ast, ha: Nem \n" << endl;
                                                                cin >> startup10;
                                                                        switch(startup10) {
                                                                            case 1:
                                                                                cout << "Szamodra a megfelelo nyelv a JAVASCRIPT" << endl;
                                                                                system ("pause");
                                                                                break;
                                                                            case 2:
                                                                                int kedvenc11;
                                                                                cout << "Melyik a kedvenc jatekot? \n"
                                                                                        "------------------------- \n"
                                                                                        "Nyomj 1-est, ha: Lego \n"
                                                                                        "Nyomj 2-est, ha: Play-Doh \n"
                                                                                        "Nyomj 3-ast, ha: Regi, kopott fakockak \n" << endl;
                                                                                cin >> kedvenc11;
                                                                                    switch(kedvenc11) {
                                                                                        case 1:
                                                                                            cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 2:
                                                                                            cout << "Szamodra a megfelelo valasztas a Ruby" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 3:
                                                                                            cout << "Szamodra a megfelelo valasztas a PHP" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                            }
                                                                                break;
                                                                            case 3:
                                                                                int kedvenc129;
                                                                                cout << "Melyik a kedvenc jatekot? \n"
                                                                                        "------------------------- \n"
                                                                                        "Nyomj 1-est, ha: Lego \n"
                                                                                        "Nyomj 2-est, ha: Play-Doh \n"
                                                                                        "Nyomj 3-ast, ha: Regi, kopott fakockak \n" << endl;
                                                                                cin >> kedvenc129;
                                                                                    switch(kedvenc129) {
                                                                                        case 1:
                                                                                            cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 2:
                                                                                            cout << "Szamodra a megfelelo valasztas a Ruby" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 3:
                                                                                            cout << "Szamodra a megfelelo valasztas a PHP" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                            }
                                                                                break;


                                                                        }
                                                                break;
                                                        }
                                                break;
                                        }
            break;
}
break;
            case 3: //fogalmam sincs
                cout << "Szamodra a megfelelo valasztas a Python" << endl;
                system ("pause");
            break;



            case 4:
                int otlet;
                cout << "Van sajat program otleted? \n"
                        "Nyomj 1-est, ha: Van \n"
                        "Nyomj 2-est, ha: Nincs \n" << endl;
                cin >> otlet;
                            switch(otlet) {
                                case 1:
                                    int startupva1212999;
                            cout << "Milyen platformon, teruleten? \n"
                                    "----------------------------- \n"
                                    "Nyomj 1-est, ha: 3D, jatek \n"
                                    "Nyomj 2-est, ha: Mobil alkalmazas \n"
                                    "Nyomj 3-ast, ha: Gazdasagi terulet \n"
                                    "Nyomj 4-est, ha: Web \n" << endl;
                            cin >> startupva1212999;
                                        switch(startupva1212999) {
                                            case 1:
                                                cout << "Szamodra a megfelelo valasztas a C++" << endl;
                                                system ("pause");
                                                break;
                                            case 2:
                                                int iosorandroid34;
                                                cout << "Milyen rendszerre programoznal? \n"
                                                        "------------------------------- \n"
                                                        "Nyomj 1-est ha: IOS \n"
                                                        "Nyomj 2-est ha: Android \n" << endl;
                                                cin >> iosorandroid34;

                                                switch(iosorandroid34) {
                                                    case 1:
                                                        cout << "Szamodra a megfelelo valasztas az OBJECTIVE-C" << endl;
                                                        system ("pause");
                                                        break;
                                                    case 2:
                                                        cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                        system ("pause");
                                                        break;
                                                }
                                                break;
                                            case 3:
                                                int microsoft322;
                                                cout << "Mi a velemenyed a Microsoftrol? \n"
                                                        "------------------------------- \n"
                                                        "Nyomj 1-est ha: Utalod \n"
                                                        "Nyomj 2-est ha: Semleges \n"
                                                        "Nyomj 3-ast ha: Imadod \n" << endl;
                                                cin >> microsoft322;

                                                    switch(microsoft322) {
                                                        case 1:
                                                           cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                           system ("pause");
                                                            break;
                                                        case 2:
                                                            cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                            system ("pause");
                                                            break;
                                                        case 3:
                                                            cout << "Szamodra a megfelelo valasztas a C#" <<endl;
                                                            system ("pause");
                                                            break;
                                                    }
                                                break;

                                            case 4:
                                                int startupweb22;
                                                cout << "Valos idoben frissulo webalkalmazast szeretnel? \n"
                                                        "Nyomj 1-est, ha: Igen \n"
                                                        "Nyomj 2-est, ha: Nem \n" << endl;
                                                cin >> startupweb22;
                                                        switch(startupweb22) {
                                                            case 1: // igen
                                                                cout << "Szamodra a megfelelo valasztas a JAVASCRIPT" << endl;
                                                                system ("pause");
                                                                break;
                                                            case 2: //nem
                                                                int startup100;
                                                                cout << "Szeretnel kiprobalni valami uj, nem kiforrt dolgot, tele lehetosegekkel? \n"
                                                                        "------------------------------------------------------------------------ \n"
                                                                        "Nyomj 1-est, ha: Igen \n"
                                                                        "Nyomj 2-est, ha: Nem tudom \n"
                                                                        "Nyomj 3-ast, ha: Nem \n" << endl;
                                                                cin >> startup100;
                                                                        switch(startup100) {
                                                                            case 1:
                                                                                cout << "Szamodra a megfelelo nyelv a JAVASCRIPT" << endl;
                                                                                system ("pause");
                                                                                break;
                                                                            case 2:
                                                                                int kedvenc112;
                                                                                cout << "Melyik a kedvenc jatekot? \n"
                                                                                        "------------------------- \n"
                                                                                        "Nyomj 1-est, ha: Lego \n"
                                                                                        "Nyomj 2-est, ha: Play-Doh \n"
                                                                                        "Nyomj 3-ast, ha: Regi, kopott fakockak \n" << endl;
                                                                                        system ("pause");
                                                                                cin >> kedvenc112;
                                                                                    switch(kedvenc112) {
                                                                                        case 1:
                                                                                            cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 2:
                                                                                            cout << "Szamodra a megfelelo valasztas a Ruby" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 3:
                                                                                            cout << "Szamodra a megfelelo valasztas a PHP" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                            }
                                                                                break;
                                                                            case 3:
                                                                                int kedvenc122;
                                                                                cout << "Melyik a kedvenc jatekot? \n"
                                                                                        "------------------------- \n"
                                                                                        "Nyomj 1-est, ha: Lego \n"
                                                                                        "Nyomj 2-est, ha: Play-Doh \n"
                                                                                        "Nyomj 3-ast, ha: Regi, kopott fakockak \n" << endl;
                                                                                cin >> kedvenc122;
                                                                                    switch(kedvenc122) {
                                                                                        case 1:
                                                                                            cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 2:
                                                                                            cout << "Szamodra a megfelelo valasztas a Ruby" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 3:
                                                                                            cout << "Szamodra a megfelelo valasztas a PHP" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                            }
                                                                                break;


                                                                        }
                                                                break;
                                                        }
                                                break;
                                        }
                                                                break;
                                                                                        case 2:
                                                                                            int tanulas;
                                                                                            cout << "Hogyan szeretnel tanulni? \n"
                                                                                                    "Nyomj 1-est, ha: A legkonnyebben \n"
                                                                                                    "Nyomj 2-est, ha: A leghatekonyabban \n"
                                                                                                    "Nyomj 3-ast, ha: Nehezebben \n"
                                                                                                    "Nyomj 4-est, ha: Nehezen, nem ajanlott kezdoknek \n" << endl;
                                                                                            cin >> tanulas;
                                                                                                        switch(tanulas) {
                                                                                                                case 1:
                                                                                                                    cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                                                                    system ("pause");
                                                                                                                    break;
                                                                                                                case 2:
                                                                                                                    cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                                                                    system ("pause");
                                                                                                                    break;
                                                                                                                case 3:
                                                                                                                    cout << "Szamodra a megfelelo valasztas a C vagy JAVA" << endl;
                                                                                                                    system ("pause");
                                                                                                                    break;
                                                                                                                case 4:
                                                                                                                    cout << "Szamodra a megfelelo valasztas a C++" << endl;
                                                                                                                    system ("pause");
                                                                                                                    break;
                                                                                                        }

                                                                                            break;
                                        break;
                            }
                        break;
                    case 5:
                int otlet99;
                cout << "Van sajat program otleted? \n"
                        "Nyomj 1-est, ha: Van \n"
                        "Nyomj 2-est, ha: Nincs \n" << endl;
                cin >> otlet99;
                            switch(otlet99) {
                                case 1:
                                    int startupva121212;
                            cout << "Milyen platformon, teruleten? \n"
                                    "----------------------------- \n"
                                    "Nyomj 1-est, ha: 3D, jatek \n"
                                    "Nyomj 2-est, ha: Mobil alkalmazas \n"
                                    "Nyomj 3-ast, ha: Gazdasagi terulet \n"
                                    "Nyomj 4-est, ha: Web \n" << endl;
                            cin >> startupva121212;
                                        switch(startupva121212) {
                                            case 1:
                                                cout << "Szamodra a megfelelo valasztas a C++" << endl;
                                                system ("pause");
                                                break;
                                            case 2:
                                                int iosorandroid3412;
                                                cout << "Milyen rendszerre programoznal? \n"
                                                        "------------------------------- \n"
                                                        "Nyomj 1-est ha: IOS \n"
                                                        "Nyomj 2-est ha: Android \n" << endl;
                                                cin >> iosorandroid3412;

                                                switch(iosorandroid3412) {
                                                    case 1:
                                                        cout << "Szamodra a megfelelo valasztas az OBJECTIVE-C" << endl;
                                                        system ("pause");
                                                        break;
                                                    case 2:
                                                        cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                        system ("pause");
                                                        break;
                                                }
                                                break;
                                            case 3:
                                                int microsoft32212;
                                                cout << "Mi a velemenyed a Microsoftrol? \n"
                                                        "------------------------------- \n"
                                                        "Nyomj 1-est ha: Utalod \n"
                                                        "Nyomj 2-est ha: Semleges \n"
                                                        "Nyomj 3-ast ha: Imadod \n" << endl;
                                                cin >> microsoft32212;

                                                    switch(microsoft32212) {
                                                        case 1:
                                                           cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                           system ("pause");
                                                            break;
                                                        case 2:
                                                            cout << "Szamodra a megfelelo valasztas a JAVA" << endl;
                                                            system ("pause");
                                                            break;
                                                        case 3:
                                                            cout << "Szamodra a megfelelo valasztas a C#" <<endl;
                                                            system ("pause");
                                                            break;
                                                    }
                                                break;

                                            case 4:
                                                int startupweb2212;
                                                cout << "Valos idoben frissulo webalkalmazast szeretnel? \n"
                                                        "Nyomj 1-est, ha: Igen \n"
                                                        "Nyomj 2-est, ha: Nem \n" << endl;
                                                cin >> startupweb2212;
                                                        switch(startupweb2212) {
                                                            case 1: // igen
                                                                cout << "Szamodra a megfelelo valasztas a JAVASCRIPT" << endl;
                                                                system ("pause");
                                                                break;
                                                            case 2: //nem
                                                                int startup10012;
                                                                cout << "Szeretnel kiprobalni valami uj, nem kiforrt dolgot, tele lehetosegekkel? \n"
                                                                        "------------------------------------------------------------------------ \n"
                                                                        "Nyomj 1-est, ha: Igen \n"
                                                                        "Nyomj 2-est, ha: Nem tudom \n"
                                                                        "Nyomj 3-ast, ha: Nem \n" << endl;
                                                                cin >> startup10012;
                                                                        switch(startup10012) {
                                                                            case 1:
                                                                                cout << "Szamodra a megfelelo nyelv a JAVASCRIPT" << endl;
                                                                                system ("pause");
                                                                                break;
                                                                            case 2:
                                                                                int kedvenc11212;
                                                                                cout << "Melyik a kedvenc jatekot? \n"
                                                                                        "------------------------- \n"
                                                                                        "Nyomj 1-est, ha: Lego \n"
                                                                                        "Nyomj 2-est, ha: Play-Doh \n"
                                                                                        "Nyomj 3-ast, ha: Regi, kopott fakockak \n" << endl;
                                                                                cin >> kedvenc11212;
                                                                                    switch(kedvenc11212) {
                                                                                        case 1:
                                                                                            cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 2:
                                                                                            cout << "Szamodra a megfelelo valasztas a Ruby" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 3:
                                                                                            cout << "Szamodra a megfelelo valasztas a PHP" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                            }
                                                                                break;
                                                                            case 3:
                                                                                int kedvenc12212;
                                                                                cout << "Melyik a kedvenc jatekot? \n"
                                                                                        "------------------------- \n"
                                                                                        "Nyomj 1-est, ha: Lego \n"
                                                                                        "Nyomj 2-est, ha: Play-Doh \n"
                                                                                        "Nyomj 3-ast, ha: Regi, kopott fakockak \n" << endl;
                                                                                cin >> kedvenc12212;
                                                                                    switch(kedvenc12212) {
                                                                                        case 1:
                                                                                            cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 2:
                                                                                            cout << "Szamodra a megfelelo valasztas a Ruby" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                        case 3:
                                                                                            cout << "Szamodra a megfelelo valasztas a PHP" << endl;
                                                                                            system ("pause");
                                                                                            break;
                                                                                            }
                                                                                break;


                                                                        }
                                                                break;
                                                        }
                                                break;
                                        }
                            break;
                                                                                        case 2:
                                                                                            int tanulas12;
                                                                                            cout << "Hogyan szeretnel tanulni? \n"
                                                                                                    "Nyomj 1-est, ha: A legkonnyebben \n"
                                                                                                    "Nyomj 2-est, ha: A leghatekonyabban \n"
                                                                                                    "Nyomj 3-ast, ha: Nehezebben \n"
                                                                                                    "Nyomj 4-est, ha: Nehezen, nem ajanlott kezdoknek \n" << endl;
                                                                                            cin >> tanulas12;
                                                                                                        switch(tanulas12) {
                                                                                                                case 1:
                                                                                                                    cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                                                                    system ("pause");
                                                                                                                    break;
                                                                                                                case 2:
                                                                                                                    cout << "Szamodra a megfelelo valasztas a Python" << endl;
                                                                                                                    system ("pause");
                                                                                                                    break;
                                                                                                                case 3:
                                                                                                                    cout << "Szamodra a megfelelo valasztas a C vagy JAVA" << endl;
                                                                                                                    system ("pause");
                                                                                                                    break;
                                                                                                                case 4:
                                                                                                                    cout << "Szamodra a megfelelo valasztas a C++" << endl;
                                                                                                                    system ("pause");
                                                                                                                    break;
                                                                                                        }

                                                                                            break;
                                        break;
                            }
    } //switch first ends here
} //function valaszto ends here
