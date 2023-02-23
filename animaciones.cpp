#include "animaciones.h"




//FUNCIONON MENU PRINCIPAL
void menu()
{
    cout<<"  +---+------------------+"<<endl;
    cout<<"  | ";
    rlutil::setColor(rlutil::LIGHTCYAN);
    cout<<"1";
    rlutil::setColor(rlutil::WHITE);
    cout<<" |->  JUGAR         |"<<endl;
    cout<<"  +---+------------------|"<<endl;
    cout<<"  | ";
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    cout<<"2";
    rlutil::setColor(rlutil::WHITE);
    cout<<" |->  ESTADÍSTICAS  |"<<endl;
    cout<<"  +---+------------------|"<<endl;
    cout<<"  | ";
    rlutil::setColor(rlutil::LIGHTCYAN);
    cout<<"3";
    rlutil::setColor(rlutil::WHITE);
    cout<<" |->  CERDITOS      |"<<endl;
    cout<<"  +---+------------------|"<<endl;
    cout<<"  | ";
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    cout<<"0";
    rlutil::setColor(rlutil::WHITE);
    cout<<" |->  SALIR         |"<<endl;
    cout<<"  +---+------------------+"<<endl;
}




void m_imperial()
{
    Beep(440,500);
    Beep(440,500);
    Beep(440,500);
    Beep(349,350);
    Beep(523,150);
    Beep(440,500);
    Beep(349,350);
    Beep(523,150);
    Beep(440,1000);
    Beep(659,500);
    Beep(659,500);
    Beep(659,500);
    Beep(698,350);
    Beep(523,150);
    Beep(415,500);
    Beep(349,350);
    Beep(523,150);
    Beep(440,1000);
}




void veng()
{
    for(int i=0; i<2; i++)
    {
        Beep(440,1600);
        Sleep(100);
        Beep(440,350);
        //Sleep(100);
        Beep(440,450);
        //Sleep(100);
        Beep(660,300);
        //Sleep(200);
        Beep(580,1100);
        Beep(520,800);
        Beep(490,800);
        Beep(440,1200);
        Sleep(400);
    }
}




void led_zeppelin()
{
    Beep(880,250);
    Beep(988,250);
    Beep(523*2,600);
    Beep(988,300);
    Beep(523*2,600);
    Beep(659*2,600);
    Beep(988,1000);
    Beep(659,250);
    Beep(659,250);
    Beep(880,600);
    Beep(784,300);
    Beep(880,600);
    Beep(523*2,600);
    Beep(784,1000);
    Beep(659,600);
    Beep(698,800);
    Beep(659,300);
    Beep(698,600);
    Beep(523*2,600);
    Beep(659,980);
    Beep(523*2,250);
    Beep(523*2,250);
    Beep(523*2,250);
    Beep(988,600);
    Beep(739,300);
    Beep(739,600);
    Beep(988,600);
    Beep(988,1000);
    Beep(880,250);
    Beep(988,250);
    Beep(523*2,600);
    Beep(988,300);
    Beep(523*2,600);
    Beep(659*2,600);
    Beep(988,1000);
    Beep(659,250);
    Beep(659,250);
    Beep(880,600);
    Beep(784,300);
    Beep(880,600);
    Beep(523*2,600);
    Beep(784,1000);
    Beep(659,600);
    Beep(698,800);
    Beep(659,300);
    Beep(698,600);
    Beep(523*2,600);
    Beep(659,980);
    Beep(523*2,250);
    Beep(523*2,250);
    Beep(523*2,250);
    Beep(988,600);
    Beep(739,300);
    Beep(739,600);
    Beep(988,600);
    Beep(988,1000);
}




///FUNCION Logo Cerdo img_menu(int numero de animacion, con o sin menú, con o sin distancia)
void img_menu(int anima, int m,bool espacio)
{
    string spc;
    if(espacio)
    {
        spc="                              ";
    }
    else
    {
        spc="";
    }
    system("cls");
    if(m==0)
    {
        cout<<spc<<endl;
        cout<<spc<<"                      ";
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<"GRAN ";
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"CERDO";
        rlutil::setColor(rlutil::WHITE);
        cout<<"         __________________  "<<endl;
        cout<<spc<<"                                        |                  | "<<endl;
        cout<<spc<<"                                        | (2) INFO PARCIAL | "<<endl;
        cout<<spc<<"                                        | (3) CERDITOS     | "<<endl;
        cout<<spc<<"                        __   __         | (0) SALIR        | "<<endl;
        cout<<spc<<"                        \\/---\\/         |__________________| "<<endl;
    }
    else
    {
        cout<<spc<<endl;
        cout<<spc<<"                       ";
        rlutil::setColor(rlutil::LIGHTCYAN);
        cout<<"GRAN ";
        rlutil::setColor(rlutil::LIGHTMAGENTA);
        cout<<"CERDO  "<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<spc<<"                                   "<<endl;
        cout<<spc<<"                                   "<<endl;
        cout<<spc<<"                                   "<<endl;
        cout<<spc<<"                        __   __    "<<endl;
        cout<<spc<<"                        \\/---\\/  "<<endl;
    }
    switch(anima)
    {
    case 1:
        cout<<spc<<"                         )o o(        "<<endl;
        cout<<spc<<"                        ( (-) )       "<<endl;
        break;
    case 2:
        cout<<spc<<"                         )° °(        "<<endl;
        cout<<spc<<"                        ( (*) )       "<<endl;
        break;
    case 3:
        cout<<spc<<"                         )- -(        "<<endl;
        cout<<spc<<"                        ( (') )       "<<endl;
        break;
    case 4:
        cout<<spc<<"                         )$ $(        "<<endl;
        cout<<spc<<"                        ( (-) )       "<<endl;
        break;
    case 5:
        cout<<spc<<"                         ). -(        "<<endl;
        cout<<spc<<"                        ( (-) )       "<<endl;
        break;
    case 6:
        cout<<spc<<"                         )- -(        "<<endl;
        cout<<spc<<"                        ( (o) )       "<<endl;
        break;
    case 7:
        cout<<spc<<"                         )% %(        "<<endl;
        cout<<spc<<"                        ( (o) )       "<<endl;
        break;
    case 8:
        cout<<spc<<"                         )X X(        "<<endl;
        cout<<spc<<"                        ( (x) )       "<<endl;
        break;
    default:
        cout<<spc<<"                         ). .(        "<<endl;
        cout<<spc<<"                        ( (o) )       "<<endl;
    }
    cout<<spc<<"                         )   (        "<<endl;
    cout<<spc<<"                        /     \\       "<<endl;
    cout<<spc<<"                       (       )6     "<<endl;
    cout<<spc<<"                      ( \\ /-\\ / )     "<<endl;
    cout<<spc<<"                       w'W   W'w      "<<endl;
    cout<<endl;
}




void txt_gran_cerdo()
{
    int color_1=11,color_2=13,aux=0;
    system("cls");
    for(int i=0; i<7; i++)
    {
        Sleep(5+(i*60));
        cout<<endl<<endl<<endl;
        rlutil::setColor(color_2);
        cout<<endl<<"                _____ _____            _   _                   ";
        cout<<endl<<"               / ____|  __ \\     /\\   | \\ | |                  ";
        cout<<endl<<"              | |  __| |__) |   /  \\  |  \\| |                  ";
        cout<<endl<<"              | | |_ |  _  /   / /\\ \\ | . ` |                  ";
        cout<<endl<<"              | |__| | | \\ \\  / ____ \\| |\\  |                  ";
        cout<<endl<<"               \\_____|_|  \\_\\/_/    \\_\\_| \\_|                  ";
        cout<<endl<<"                                                               ";
        cout<<endl<<"                                                               ";
        rlutil::setColor(color_1);
        cout<<endl<<"                 _____ ______ _____  _____   ____       _   _   _ ";
        cout<<endl<<"                / ____|  ____|  __ \\|  __ \\ / __ \\     | | | | | |";
        cout<<endl<<"               | |    | |__  | |__) | |  | | |  | |    | | | | | |";
        cout<<endl<<"               | |    |  __| |  _  /| |  | | |  | |    | | | | | |";
        cout<<endl<<"               | |____| |____| | \\ \\| |__| | |__| |    |_| |_| |_|";
        cout<<endl<<"                \\_____|______|_|  \\_\\_____/ \\____/     (_) (_) (_)";
        cout<<endl<<endl<<endl;
        Sleep(50+(i*100));
        if(i==6)
        {
            Sleep(2000);
        }
        system("cls");
        aux=color_1;
        color_1=color_2;
        color_2=aux;
    }
    rlutil::setColor(rlutil::WHITE);
}




void txt_oink()
{
    for(int i=0; i<2; i++)
    {
        system("cls");
        Sleep(500);
        cout<<endl<<endl<<endl<<endl<<endl<<endl;
        for(int j=0; j<3; j++)
        {
            cout<<endl<<"                                                                    ___ ___ _   _ _  __  _   _   _  ";
            cout<<endl<<"                                                                   / _ \\_ _| \\ | | |/ / | | | | | | ";
            cout<<endl<<"                                                                  | | | | ||  \\| | ' /  | | | | | | ";
            cout<<endl<<"                                                                  | |_| | || |\\  | . \\  |_| |_| |_| ";
            cout<<endl<<"                                                                   \\___/___|_| \\_|_|\\_\\ (_) (_) (_) ";
            cout<<endl<<endl<<endl;
        }
        Sleep(500);
        if(i==4)
        {
            Sleep(1000);
        }
    }
    system("cls");
    img_cerdo(1,3);
}




void hundido_x2()
{
    system("cls");
    for(int i=0; i<2; i++)
    {
        Sleep(500);
        cout<<endl<<endl<<endl<<endl;
        cout<<endl<<"                                                                                                         _               ";
        cout<<endl<<"                                                    _____ ______    _    _ _    _ _   _ _____ _____ ____|/               ";
        cout<<endl<<"                                                   / ____|  ____|  | |  | | |  | | \\ | |  __ \\_   _/ __ \\                ";
        cout<<endl<<"                                                  | (___ | |__     | |__| | |  | |  \\| | |  | || || |  | |               ";
        cout<<endl<<"                                                   \\___ \\|  __|    |  __  | |  | | . ` | |  | || || |  | |               ";
        cout<<endl<<"                                                   ____) | |____   | |  | | |__| | |\\  | |__| || || |__| |               ";
        cout<<endl<<"                                                  |_____/|______|  |_|  |_|\\____/|_| \\_|_____/_____\\____/                ";
        cout<<endl<<"                                                                                                                         ";
        cout<<endl<<"                                                                                                                         ";
        cout<<endl<<"                                           ______ _   _    ______ _        ____          _____  _____   ____      _   __ ";
        cout<<endl<<"                                          |  ____| \\ | |  |  ____| |      |  _ \\   /\\   |  __ \\|  __ \\ / __ \\    |/  / / ";
        cout<<endl<<"                                          | |__  |  \\| |  | |__  | |      | |_) | /  \\  | |__) | |__) | |  | |  (_) | |  ";
        cout<<endl<<"                                          |  __| | . ` |  |  __| | |      |  _ < / /\\ \\ |  _  /|  _  /| |  | |      | |  ";
        cout<<endl<<"                                          | |____| |\\  |  | |____| |____  | |_) / ____ \\| | \\ \\| | \\ \\| |__| |   _  | |  ";
        cout<<endl<<"                                          |______|_| \\_|  |______|______| |____/_/    \\_\\_|  \\_\\_|  \\_\\\\____/   (_) | |  ";
        cout<<endl<<"                                                                                                                     \\_\\ ";
        cout<<endl<<"                                                                                                                         ";
        cout<<endl<<"                                                                     __   __   ___                                       ";
        cout<<endl<<"                                                                     \\ \\ / /  |__ \\                                      ";
        cout<<endl<<"                                                                      \\ V /      ) |                                     ";
        cout<<endl<<"                                                                       > <      / /                                      ";
        cout<<endl<<"                                                                      / . \\    / /_                                      ";
        cout<<endl<<"                                                                     /_/ \\_\\  |____|                                     ";
        cout<<endl<<endl<<endl<<endl;
        Sleep(1000);
        if(i==4)
        {
            Sleep(2000);
        }
        system("cls");
    }
}




void hundido()
{
    system("cls");
    for(int i=0; i<2; i++)
    {
        Sleep(500);
        cout<<endl<<endl<<endl;
        cout<<endl<<"                                                                                                       _               ";
        cout<<endl<<"                                                  _____ ______    _    _ _    _ _   _ _____ _____ ____|/               ";
        cout<<endl<<"                                                 / ____|  ____|  | |  | | |  | | \\ | |  __ \\_   _/ __ \\                ";
        cout<<endl<<"                                                | (___ | |__     | |__| | |  | |  \\| | |  | || || |  | |               ";
        cout<<endl<<"                                                 \\___ \\|  __|    |  __  | |  | | . ` | |  | || || |  | |               ";
        cout<<endl<<"                                                 ____) | |____   | |  | | |__| | |\\  | |__| || || |__| |               ";
        cout<<endl<<"                                                |_____/|______|  |_|  |_|\\____/|_| \\_|_____/_____\\____/                ";
        cout<<endl<<"                                                                                                                       ";
        cout<<endl<<"                                                                                                                       ";
        cout<<endl<<"                                         ______ _   _    ______ _        ____          _____  _____   ____      _   __ ";
        cout<<endl<<"                                        |  ____| \\ | |  |  ____| |      |  _ \\   /\\   |  __ \\|  __ \\ / __ \\    |/  / / ";
        cout<<endl<<"                                        | |__  |  \\| |  | |__  | |      | |_) | /  \\  | |__) | |__) | |  | |  (_) | |  ";
        cout<<endl<<"                                        |  __| | . ` |  |  __| | |      |  _ < / /\\ \\ |  _  /|  _  /| |  | |      | |  ";
        cout<<endl<<"                                        | |____| |\\  |  | |____| |____  | |_) / ____ \\| | \\ \\| | \\ \\| |__| |   _  | |  ";
        cout<<endl<<"                                        |______|_| \\_|  |______|______| |____/_/    \\_\\_|  \\_\\_|  \\_\\\\____/   (_) | |  ";
        cout<<endl<<"                                                                                                                   \\_\\ ";
        cout<<endl<<"                                                                                                                       ";
        cout<<endl<<endl<<endl<<endl;
        Sleep(1000);
        if(i==4)
        {
            Sleep(2000);
        }
        system("cls");
    }
}




void img_cerdo(int estado,int vueltas)
{
    string spc="                                  ";
    for(int i=0; i<vueltas; i++)
    {
        cout<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOd0WMXkONMMMMMMMMMMMMWX0OxdoolllollloodkOKNWMMWMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMWWWWWNXKKklcckNxlodKMWWWWWKkdollcclloddxxxxxxddoolccclox0NWMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMWXkdooooc;:lloxdxOodNWNOl:clloxOKXXXXXXXKKKKKKKXXXKK0kolccoONMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMWWWWWMNkccoxdllodkOOkd::kolko::lkKXXXKKKKXXXKKKKKKKKKKKKKKKKKKK0kl::xXWWMMMWWMMWMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMWWWWWXOdol:clc:;oOKKK0o;;;ok;.;lkKXKKKKKKKKKXXXXXXKKKKKKKKKKKKKKKKKKK0d::xOkOXKkxkXMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMWWWKxddld0KKXKdo0K00Oo,,ldx;,o0KKKKKKKKKKKXXXXXXXXXXKKKKKKKKKKKKKKKKKKK0o:dOxocoOdl0MMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMWWNklloxkkOXKXK0Okdoccloxxl;lOKKKKKKKKKKKKKXXXXXXXXXXXKKKKKKKKKKKKKKKKK0KKKXXX0ocokdl0WMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMNd:oOXkdO0KKXKKKkocclol;.,xKKKKKKKKKKKKKKKKXXXXXXXXKKKKKKKKKKKKKKKKKKK0K0KOdxKKkllo:lXMM";
        cout<<endl<<spc<<"WMMMMMNXNWWWOc:kWN0x0KKXKKKKK0kddx:.,kKKKKKKKKKKKKKKKKKKKXXXKKKKKKKKKKKKKKKKKKKKK0000Kk,'ldOOOd:kWMM";
        cout<<endl<<spc<<"NWMWW0dooONKxl:dNNkdOOO00KK0KKKKKXx,oKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0000K0:;kxoll:c0MMM";
        cout<<endl<<spc<<"WNWMKllOocxkkdlOWXl:dk00000K00KKKKO;lKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0KK0OOOKKKK000000K0:,0MWKOOXWMMM";
        cout<<endl<<spc<<"WNNNxclcoldOOxkNNkokK0kd::x0K00K0KO:lKKKKKKKKKKKKKKKKKKKKKKKKKKKKKOdxdlodxO0K00000000K0:,0MMMMMMMMMM";
        cout<<endl<<spc<<"MWW0cc:.,:oO0kxOkdxkd::dxolk00000KO:oKKKKKKKKKKKKKKKKKKKKKKKKKKKKKd;cldOKKKK0000000Ok0k';KMMMMMMMMMM";
        cout<<endl<<spc<<"MMWk;l:..'coO0OO0kl,:xxkNNocOK000K0cc0K0KKKKKKKKKKKKKKKKKKKKKKKKklcd0KKKKK00000000KolOl.lNMMMMMMMMMM";
        cout<<endl<<spc<<"MMMk,cc...,:lkOOko,cKWXdkNdcO000000l;kK0Okxxkkk0KKKKKKKKKKKKKK0o:o0KKK00KKKK000000O::d,'OMMMMMMMMMMM";
        cout<<endl<<spc<<"MWWKc,;,..;;,ldc::oxXWW0dklo000000k::OK00OOkxdcldOKK0KKKKKKKKO:;kK0KKK00K00K00000Od,c:.dNMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMNOxxo;,,,;:coKW0OXWKl:dO0000Okc.:O000000KK0kolloOK0KKKKK0:,kK00K00000000000Okd;','oNWMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMWKo;cldxodkdccolok0000Okd;;l::x000000000K0Oo:d0KKKKKd.cKK0000000000OOkxdo;..,xNWMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMWOocclllloodk00OOOkxl;,l0WXd::dO000000000Kd;dOkOOOc.l00000000kolcc::;;...'xNMWMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMWXxc,,;:lodddoc:;;:o0WMMMWXxoccldkO0000KO;,ddddxc.;xO0000000Oxdoool:'':c:lOWWMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMWWWNKkddolccclldkKNWMMMMMMMWWXOc,oO0000K0c..''''...cdxO0000000000Oxxxc':oc,dNMMWMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMWMMWMMMMWWWWWWMMMMMMMMMMMMMWWMO:d0000000c.:,.coooc,,ldxkOO00000Oxdddxc':d:'dNMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXll0000000l,xl,kMMMWKo:;;:lodxxkOOxddddd,.;c',0MMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMWdcO00000Kd'ld,dWMMMMWN0xolccc::dOxdxdll:.',':0MMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMNKOcl000000Kk,;d,cNMMMMMMWMMMWNNKx:oxxdd;,'.'cxKWMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKdlllok0OOOOO0k;;d,cNMMMMMMMMMMMMWWWOl:::::ldx0NWMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMx,ldoxO0OO000Oc';;,kWWMMMMMMMMMMMMMMMWKkxOXWWMMWMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNxc',oxkkxolc'..;l0WWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0dc::::cclodOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMWMWNXXNWWWMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<endl<<endl;
        Sleep(5);
        system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMW0dx0WWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMWNK0xlcclkOxOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMWWWWMWWXkolllc;,:ccoxddKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMWWWN0Oxolccll:,,:oolclxdkWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMWNOdlokxkKKOocdO0KOl;:dokWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMWWMW0ocokxxk0K0ooO000kc,:lcoXMMMMWNNXK00000000OOOOOO0000KXXNWWWWMMMWWMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MWMN0OXWWWOc:xNWKkOKX0xk0Oko:,;::dXNXOxollllccllllllllllloooollllllllldxOKNWWMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"WWKoloo0N0o:;kWWkd0KKKKkdolcclol:dxl:cldxk00KKKKKKKKXXXXXXXXXXKKK00OkxdolllldONWMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"WKl:dxclxdo:c0WKookO00KKK0KKKKK0l':ok0KKKKKKKKKKKKKXXXXXXXXXKKKKKKKKKKKKKKOxoccxXWMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"Xo:c,::oOOdxKNKolxk00000KKKKKKK0l:kKKKKKKKKKKKKKKKXXXXXXXXXXXXXXKKKKKKKKKKKKK0x:cOWMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"x:c,..;oO0xx0OooOOkdl:cx0KKKKKKOcc0KKKKKKKKKKKKKKKKXXXXXXXXXXXXXKKKKKKKKKKKKKKK0l;xNWWWMMMMMMMMMMMMM";
        cout<<endl<<spc<<"c:l'..,lx00OkkxoccclxxclO0K000Kx:o0kO0KKKKKKKKKKKKXXXXXXXXXXXXKKKKKKKKKKKKKKKKKK0l;kWMWWWMMMMMMMMMMM";
        cout<<endl<<spc<<"c;c,..':lk0OOko;cOOx0WklxK0000Kd:codxO0KKKKKKKKKKKXXXXXXXXXXXXKKKKKKKKKKKKKKKKKKKO:;xkONWWWWMMMMMMMM";
        cout<<endl<<spc<<"klc:'';;;lxdc:;lKWXxkNklkK00000d';kKKKKKKK00KKKKKKKKXXXXXXXXXKKKKKKKKKKKKKKKKKKKK0xoxxlokxxONMMMMMMM";
        cout<<endl<<spc<<"WNXKd;,,,;cclk0OKWW0xxld000000Oo';kKKKKKK0dd0KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK00000x::xxlkWMMMMMM";
        cout<<endl<<spc<<"MWMMWOc:llloxKXkkK0dllx00000OOo;::lk00KKKKklxKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0K0dlx0Oo:oxldNMWWMMM";
        cout<<endl<<spc<<"MMMMMWKdccooloolcoooxO0000Okdc'.:c:lx00KKKKdckKKKKKKKKKKKKKKKKKKKKKKKKKK0O00000KK0l;lxOkocooxXWWNWMM";
        cout<<endl<<spc<<"MMMMMMWW0o;;codkkO00OOOkdolccloxkkO0000KKK0d;oKKKKKKKKKKKK0kOKKKKKKKKKKK0kxk00000d:oxoxOkoco0NWWNWWM";
        cout<<endl<<spc<<"MMMMMMMMMWKxlc::clloolccloxO0000000000OOOkxc,dKKKKKKKKKKKKdlkKKKKKKKKKK000kox00Oxcc0NOolocoKWMMMWWWM";
        cout<<endl<<spc<<"MMMMMMMMMMMWNX0kdol;,cdO0000OOkkkkxxxddolc:,cxOO0000KKKKOkc:OKKKKKKKK000000xcdko;;kNWWXOxkKNWMMMWNWM";
        cout<<endl<<spc<<"MMMMMMMMMMMWWMMMWNkcldk00Okxxdoc::;;;;;,...':clodxxkkkOOxc',xKKKKKKKKK00000k:;:':OWWWWWWWWWWWMMMWWWM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMWNd;:okOxdlc:;;;:::::;;;,,;;,'..',;;:clool,'oOKKKKKKKK000KK0c..'lXMWWMMMMWWMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMWWNOolc:;,;:clolc;:codkOKXNNX0kxoc::;,'''''.;xO00KK000000K0Kd,cl:kKXNWWMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMWWMWKd;.;lol:;;cd0NWMMMMMMMMMMMMWWWNXKOkdo:':dk00000000000Kkc:lclooodkKWWWMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMWXOdc:clx0NWMMMMMMMMMMMMMMMMMMMMMMMMWNx,;oxkO0000000000Okxollclolcd0WMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMWWWNXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWOc,;ldxkO000000000000kdc:ldc:kWMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXkc;,,;:clodxkOO000000Od;:o:;kWMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0kdollcc:;:ldkO00000x,;l,lNMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWNX0xl;cxOO00OOl';,lNMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNk,;dOOOxxo..:OWMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWNd';dkkc:;'dXWMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWNo',c:,;ckNWWMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMNklclkNWMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMMMMMMMMMMMMM";
        cout<<endl<<endl<<endl;
        Sleep(5);
        system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNNXXKKKKXXNWWWWWMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMWWWWMMMWNNWMMMMMMMMMMMMMMMMMMWNXKOkxdolooolllloolodkKNXKXNNKO0NWMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMWWWN0xxkKNKOkxkKWMMMMMMMMMMMWWN0kdolloodxkOO0000000OkxolcldkxxddxddKWWMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMWMWX0kxdllccldddkOdkNMMWWNNXK0OxdolloxkO0KKKKKKKKKKKKKKKK000kk0KKOoldkdd0WMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMWWXkoooolcldkOkocokdxXKkdoooolloddxO0KKKKKKKKKKKKKKKKKKKKKK00KKKOkOOxool:oKMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMWW0l:looccx0000d:;oxlllcloxkO0KKKKXXKKKKKKXKKKKKKKKKKKKKKKKKKK000OocokkkocxNMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMWWNKkdl:lol::x000Od::co:';oOKKKKKKKKKKKKKXXXXXXKKKKKKKKKKKKKKKKKKK000Kk:':ooloOWWMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMWWKkddox0KKKkxkkkdl::::''lOKKKKKKKKKKKKXXXXXXXXXXXXKKKKKKKKKKKKKKK0KK000x;:kOOKNWMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMNkoodxkO0KKXK0kdc;;;;,.;x0KKKKKKKKKKKKXXXXXXXXXXXXXKKKKKKKKKKKK00KK00000Ol;kWMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMWWNkcoOXkxOKKKKXKKK0Okxl,:kKKKKKKKKKKKKKXXXXXXXXXXXXXKKKKKKKKKKKKOkxxkO0K000d,l0XXXNWMMMMMMM";
        cout<<endl<<spc<<"MMMWWNNWWW0l:xNW0dOKKKKKKKKKKKKOllOKKKKKKKKKKKKKXXXXXXXXXXXXKKKKKKKKKKKKKK0Okddk0000k;;loooodk0XNWWW";
        cout<<endl<<spc<<"MMWNOodkXXkl;cKWOoxkO0KKKKKKKKK0dcxKKKKKKKKKKKKKKXXXXXXXKKKKKKKKK0OKKKKKKKKK0Oxdx00Od,;oxxxddolcdKNW";
        cout<<endl<<spc<<"MMWOcldllxxocdXXxldO0OkxO0KKKKKKd:dKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0xk0KKKKKK00000koloddloooollodl:;oKN";
        cout<<endl<<spc<<"MMXo:ccccdOxd0XklxOkoc::lk0KKK00xcdOO0KKKKKKKKKKKKKKKKKKKKKKKKKKkox0KKKK0000000OlcxO00000Oxdoc;',l0N";
        cout<<endl<<spc<<"MW0c:;.':oOOkkOxdolccd0OooO0K000kc:dxO00K0OkkOKKKKKKKKKKKKKKKKKOdclk0KKKK000000kox0000000OO0Oxc':ONW";
        cout<<endl<<spc<<"MWOcc;..'cdO000Od:ck0kONOox00000x:ck0KKKK0Oxook0KKKKKKKKKKKKKKKOd:,ck0KKK0000000OO0OO0000OOOkxdc:kNW";
        cout<<endl<<spc<<"MWOccc'..,:lxkxo::xNWKkOklx00000x;;dO0KKKKK00xoox0KKKKKKKKKKKKKK0kl::ok00000000000OxlcodkOOOOdc;;dNW";
        cout<<endl<<spc<<"MWXd::;'',;,:l:cdOOKWWOoldO0000Od,.,ok00000KK0koclxOKKKKK0000OOOkkxo:,;lxkO000000Okd:':olclodl;:xKWW";
        cout<<endl<<spc<<"MMMNKOOxl;,;;:ld0XOxkkoldO00OOkl,','';ok000000Oxc;;oOOOkkkxdollc:::;,...';cldxxddol:,dXNXOxollxKWMMM";
        cout<<endl<<spc<<"MMMMMMMWXOlccloooddoodxOOOOOxo;'';ll;';lxO0000Ox:',:llc:;,''',,,;:clloxkkdl::;;;;;:ckNWMWMMWNWWMMMMM";
        cout<<endl<<spc<<"MMMMMMMWWWXOdlc:codxkkkkxdl:;,:codo::dOOO0000Okc'.'',;;:codk0KKXNNWWWMMMMMWNK0OOO0XNWMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMWNOdlcccccc:,',:codxdc:lk0000000Oxc:dO00KXNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMWWWWWNXK00Oo,;cclddlclxO000000Oko:ckNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMW0dl;;loccdO000000Okdc:o0WWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMWNk:;;lxxxO000Okdc:ckNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMNd;:olcxOOkxoc:lkXWWMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMW0oll::odoc::lOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNKdlllokKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<endl<<endl;
        Sleep(5);
        system("cls");
    }
    if (estado ==1)
    {
        cout<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMWWNNK0O0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMWKxoddl:ldddONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMNKOd:lOKK0kk0KkooKWMMMMMMMMMMMMMMMMMMMMMWWNNXK00OOOOO000KXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMWOlc:,;xOddOKKKKKOloXMMMMMMMMMMMMMMMWN0kdoolllllllllllllllclloodk0XWMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMKl::;lokxl,;ok0000d:dKNMMMMMMMMMWXOdlccloxkO00KKKXXXXXXXKKK00Oxdollox0NMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMWNOccl;;:ccccol:ldxOOxolokNMMMMWXklccoxOKKKKKKKKKKKXXXXXXXXXXKKKKKKK0xoclxXWMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMXl;clo:;:ccdkOKkodO0XXKKxlo0WNOo:cdOKKKKKKKKKXXXXXXXXXXXXXXXXXKKKKKKKKK0xccxNMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMW0dol:;:o0Kxx0KKKKKKKKKKK0dcdc;lkKKKKKKKKKKKKXXXXXXXXXXXXXXXXXXKKKKKKKKKKKx:ck00XWMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMWWXd:l0WWkd0KKKKKKKKKKKK0l'cOKKKKKKKKKKKKKKKXXXXXXXXXXXXXXXXXXKKKKKKKKKKKkodkdoOK0KNMMMMMMMMMM";
        cout<<endl<<spc<<"MMXkxOXWKo:,xWWkdOOO0KKKKKKKKKKx:dKKKKKKKKKKKKKKKKKKXXXXXXXXXXXXXXXKKKKKKKKKKKKKKXXKocdxoxNMMMMMMMMM";
        cout<<endl<<spc<<"MNdcollkkd:,xWNdldkOK0O0KKKKKKKO:l0KKKKKKKKKKKKKKKKKKXXXXXXKKXKKKKKKKKKKKKKKKKKKOk0KxcoOolXMMMMMMMMM";
        cout<<endl<<spc<<"Mk:cdl:lkkodXWkld00ko::d0KKKK0KOcl0KKKKKKKKKKKKKKKKKKKKXXXKKKKKKKKKKKKKKKKKKKKKKOlo0OococlXMMMMMMMMM";
        cout<<endl<<spc<<"No:c,,;lk0kdOOooxdc:okxldO0000K0ol0KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKOO0KKl,oOko::dXMMMMMMMMM";
        cout<<endl<<spc<<"Xlcc..':oO0OOOOd:;oxkKWOlxK00000d:xKKKKKKKKKKKKKKKKKKKKKKKKKKK0xx0KKKKKKKKKKklxK0c.,locl0NWMMMMMMMMM";
        cout<<endl<<spc<<"Kc:l'..':lkOOOxc;dNNOdK0ld000000x;l0K000KKKKK000KKKKKKKKKKKK0xcckKKKKKKKKKKKOc;kk;;kkxkXWMMMMMMMMMMM";
        cout<<endl<<spc<<"No;c;...;:cdxl;:oONWNkxolk00000Oo;oK0oo0K0KKK0ddO0KKKKKKKKXKo',dKKKKKKKKKKKK0c,oc'dNMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MXxllc,','';:cdKNOONNkclk0000Oko;cOKOcc0KKKKKKk:cOXKKKKKKKKKd',kKKKKKKK0000Kk;,:'lXMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMWWWN0d:;:clooxkdlooodO0OOOkd:.'dkOO::OK0KKKKO:l0KKKKKKKKKKx',x0KKKKKK0000O:..'lXMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMWKdlclllllloxkOOOOkxo:,:c;,:ldc,dK00KKKOco0000000000Kx''oO0KKK00000O:..:kNMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMWXOdc;;:cooddol:;;:oONWXxc'''.cOK000KO:cxxxxxxxxxxxd,.:dO00000000o':kXWMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMWWN0kxoooollodk0NWMMMMWXo';',d0000KOc,:::::::ccc::,..:dkO00000Oc;xKWMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMWWWWWMMMMMMMMMMMWO:lo,cOK0000l,;;;;;;;,;;,.....'ldkO0000kdocdNMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXl:d:;k00000ocONNNNNNNNNXOl;,'..,cokO00000o:0MMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd:dl;xK0000x:kWWMMMMMMMMMWXd;:l:';okO0000oc0MMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNOclxccO00000x:xWWMMMMMMMMNKOdcoxo;ckO00000llKMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKxl:,cc:d00000Oo;xWWMMMMMMWOlc:;:ccclk000000x:dNMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWO:'.,cclk00OOkd::0MMMMMMMMWx;,'.;lcok000OOkd:lKMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0d:,';oxxxdoc;:kWMMMMMMMMMNOl;,,''cxxxdoc::dXMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOolc::;;:cdKWMMMMMMMMMMMMWNXOoc:::cclokKWMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXK00KXWMMMMMMMMMMMMMMMMMMMMWNXXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<endl<<endl;

        Sleep(300);
        system("cls");
        rlutil::setColor(rlutil::LIGHTGREEN);
        cout<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMWWNNK0O0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMWKxoddl:ldddONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMNKOd:lOKK0kk0KkooKWMMMMMMMMMMMMMMMMMMMMMWWNNXK00OOOOO000KXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMWOlc:,;xOddOKKKKKOloXMMMMMMMMMMMMMMMWN0kdoolllllllllllllllclloodk0XWMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMKl::;lokxl,;ok0000d:dKNMMMMMMMMMWXOdlccloxkO00KKKXXXXXXXKKK00Oxdollox0NMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMWNOccl;;:ccccol:ldxOOxolokNMMMMWXklccoxOKKKKKKKKKKKXXXXXXXXXXKKKKKKK0xoclxXWMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMXl;clo:;:ccdkOKkodO0XXKKxlo0WNOo:cdOKKKKKKKKKXXXXXXXXXXXXXXXXXKKKKKKKKK0xccxNMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMW0dol:;:o0Kxx0KKKKKKKKKKK0dcdc;lkKKKKKKKKKKKKXXXXXXXXXXXXXXXXXXKKKKKKKKKKKx:ck00XWMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMWWXd:l0WWkd0KKKKKKKKKKKK0l'cOKKKKKKKKKKKKKKKXXXXXXXXXXXXXXXXXXKKKKKKKKKKKkodkdoOK0KNMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMXkxOXWKo:,xWWkdOOO0KKKKKKKKKKx:dKKKKKKKKKKKKKKKKKKXXXXXXXXXXXXXXXKKKKKKKKKKKKKKXXKocdxoxNMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MNdcollkkd:,xWNdldkOK0O0KKKKKKKO:l0KKKKKKKKKKKKKKKKKKXXXXXXKKXKKKKKKKKKKKKKKKKKKOk0KxcoOolXMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"Mk:cdl:lkkodXWkld00ko::d0KKKK0KOcl0KKKKKKKKKKKKKKKKKKKKXXXKKKKKKKKKKKKKKKKKKKKKKOlo0OococlXMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"No:c,,;lk0kdOOooxdc:okxldO0000K0ol0KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKOO0KKl,oOko::dXMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"Xlcc..':oO0OOOOd:;oxkKWOlxK00000d:xKKKKKKKKKKKKKKKKKKKKKKKKKKK0xx0KKKKKKKKKKklxK0c.,locl0NWMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"Kc:l'..':lkOOOxc;dNNOdK0ld000000x;l0K000KKKKK000KKKKKKKKKKKK0xcckKKKKKKKKKKKOc;kk;;kkxkXWMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"No;c;...;:cdxl;:oONWNkxolk00000Oo;oK0oo0K0KKK0ddO0KKKKKKKKXKo',dKKKKKKKKKKKK0c,oc'dNMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MXxllc,','';:cdKNOONNkclk0000Oko;cOKOcc0KKKKKKk:cOXKKKKKKKKKd',kKKKKKKK0000Kk;,:'lXMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMWWWN0d:;:clooxkdlooodO0OOOkd:.'dkOO::OK0KKKKO:l0KKKKKKKKKKx',x0KKKKKK0000O:..'lXMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMWKdlclllllloxkOOOOkxo:,:c;,:ldc,dK00KKKOco0000000000Kx''oO0KKK00000O:..:kNMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMWXOdc;;:cooddol:;;:oONWXxc'''.cOK000KO:cxxxxxxxxxxxd,.:dO00000000o':kXWMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMWWN0kxoooollodk0NWMMMMWXo';',d0000KOc,:::::::ccc::,..:dkO00000Oc;xKWMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMWWWWWMMMMMMMMMMMWO:lo,cOK0000l,;;;;;;;,;;,.....'ldkO0000kdocdNMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXl:d:;k00000ocONNNNNNNNNXOl;,'..,cokO00000o:0MMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd:dl;xK0000x:kWWMMMMMMMMMWXd;:l:';okO0000oc0MMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNOclxccO00000x:xWWMMMMMMMMNKOdcoxo;ckO00000llKMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKxl:,cc:d00000Oo;xWWMMMMMMWOlc:;:ccclk000000x:dNMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWO:'.,cclk00OOkd::0MMMMMMMMWx;,'.;lcok000OOkd:lKMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0d:,';oxxxdoc;:kWMMMMMMMMMNOl;,,''cxxxdoc::dXMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOolc::;;:cdKWMMMMMMMMMMMMWNXOoc:::cclokKWMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXK00KXWMMMMMMMMMMMMMMMMMMMMWNXXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<endl<<endl;
        rlutil::setColor(rlutil::WHITE);
        Sleep(1000);
        system("cls");
    }
    else
    {
        cout<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNXXXXXXNWWMMMMWWMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0xolclllooolllodxOXWWWWMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMWWXXXWMMMMMMMMMMMMMMMMWNK0Okkxdddo;;cdkO00KKKK00Okdlc:cxKWMWMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMWWN0doloodxkXWMMMMMMWX0kddoolooooooooddkKXKKKKKKKKKKKKKK0Oo:;oKWMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMWN0xol::oOKKKKOxdxKWWKkdlllodkO0KXXXXXXXXXXXKKKKKKKKKKKKKKKKKKK0d;;kWMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMWWWKxccoxxolx0KXXKKXKkodo;'ck0KKKKKKKKKXXXXXXXXXXXKKKKKKKKKKKKKKKKKKKk:;x0KNKkk0NMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMWWNk:;lk0KKklcdk0KKKKKKxlc:,dKKKKKKKKKXXXXXXXXXXXXKKKKKKK00KKKK00000000kodkxdodxxx0NMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMNdcdkkkxO0ko:,;codxxxoc;;:d0KKKKKKKKKKKKXXXXXXXXKKKKKKK000KKK000000000OxxO0xldOxdlkNWWMMMMMMM";
        cout<<endl<<spc<<"MMMMMMWkcooloddk0K0Okdc;;;;;;,,o0KKKKKKKKKKKKKKKKKKKKXXKKKKKK0000KK0000000000OocxO0koxxlcl0WMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMXl:cok00xlxKKKKKK0kkxkxoco0KKKKKKKKKKKKKKKKKKKKKKKKK0000000KKK00000000Ox:,:lxOkkklckXWMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMKc;okkKWNxck00KKKKKKKK00dclx0KKKKKKKKKKKKKKKKKKKKKKKKKK00KKKK0OkO000Okxc';c::coxd::0WWMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMKl;xkdOXNO:lk0KKKKKKKKK00kl;lOKKKKKKKKKKKKKKKKKKKKKKK0O0KKKKK0Oxdoooddl,.'cddl:,;lkNMMMMMMMMMM";
        cout<<endl<<spc<<"MXkddkklcox0KK0olkkdooodk0K00000xc,oKKKKKKKKKKKKKKKKKKKKKK0xok0KKKK0KK0Odl::,.'coooddcc0NKkkKWWMMMMM";
        cout<<endl<<spc<<"Xl:l:;lodxodxxloxl::odl:;:lk000Oxl'cO0OkO0KKKKKKKKKKKKKK00xclk0KKKK0000000kl'';::cc::lllolc,c0WMMMMM";
        cout<<endl<<spc<<"O:lc,;cdO0Okkkkd:ckk0WW0ooc;lkkxo:.,c:,:ldO0KKKKKKKKKKKKkol;:xO0KKK000000000x;,cxO0Oc':oddlc::kWMMMM";
        cout<<endl<<spc<<"0:cl..::lO0O00k::0WKx0WNxdOc';:;:;;clodxxxO0K00OOkkOKKKK0d:,,lxO000000000000OdxO0000Ol';lllc;,xNMMMM";
        cout<<endl<<spc<<"Xl;o:..::ck0Ox:'cdddllolc:llcldxkO00KKKK000OkxolcldxOOOOkdc,.,lxkO00000000000Oxk00OO0Od:;:cc,;OWWMMM";
        cout<<endl<<spc<<"W0c:l:'':;;od:;lxddol:;:oxk00000000000Okxol:;;;;coddddoooool:'':oxxkOO000000OOl:dOOOOO0Okxdo;;0MWMMM";
        cout<<endl<<spc<<"WW0c,,,',,.';cool::cldk0000000000Okxoc:;;;,..',;;;;,,'',;;;;;'..':lddxxxkkxxddo;':dkkkOOkxo,,kWMMMMM";
        cout<<endl<<spc<<"MW0lclcodlc;;;;'.:ok000000000Oxoc:;:cldk0XX0Okxxxxxkxdollcclodxko,.';cooooooll:'',;,:loooc;;xNMMMMMM";
        cout<<endl<<spc<<"WKc:ollkOOxocc;'ckkdk0OOOkxoc;;:lxOKNWMMMMMMMMMMMMMMMMMMMMMMMMMWWXkl;''',,,,,',cOX0dc:;;:co0NMMMMMMM";
        cout<<endl<<spc<<"MKl;,;dxoc:;:c,,dd:ckkkdl:,;lx0NWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOxollldkKNWWMMWNXXXNWWMMMMMMMM";
        cout<<endl<<spc<<"MMNKd::;:cokKNOlc,.:lc:,,ckXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMWNXXNWMMMMWNXOo:::cd0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMWNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<endl<<endl;
        Sleep(300);
        system("cls");
        rlutil::setColor(rlutil::LIGHTRED);
        cout<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNXXXXXXNWWMMMMWWMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0xolclllooolllodxOXWWWWMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMWWXXXWMMMMMMMMMMMMMMMMWNK0Okkxdddo;;cdkO00KKKK00Okdlc:cxKWMWMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMWWN0doloodxkXWMMMMMMWX0kddoolooooooooddkKXKKKKKKKKKKKKKK0Oo:;oKWMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMWN0xol::oOKKKKOxdxKWWKkdlllodkO0KXXXXXXXXXXXKKKKKKKKKKKKKKKKKKK0d;;kWMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMWWWKxccoxxolx0KXXKKXKkodo;'ck0KKKKKKKKKXXXXXXXXXXXKKKKKKKKKKKKKKKKKKKk:;x0KNKkk0NMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMWWNk:;lk0KKklcdk0KKKKKKxlc:,dKKKKKKKKKXXXXXXXXXXXXKKKKKKK00KKKK00000000kodkxdodxxx0NMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMNdcdkkkxO0ko:,;codxxxoc;;:d0KKKKKKKKKKKKXXXXXXXXKKKKKKK000KKK000000000OxxO0xldOxdlkNWWMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMWkcooloddk0K0Okdc;;;;;;,,o0KKKKKKKKKKKKKKKKKKKKXXKKKKKK0000KK0000000000OocxO0koxxlcl0WMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMXl:cok00xlxKKKKKK0kkxkxoco0KKKKKKKKKKKKKKKKKKKKKKKKK0000000KKK00000000Ox:,:lxOkkklckXWMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMKc;okkKWNxck00KKKKKKKK00dclx0KKKKKKKKKKKKKKKKKKKKKKKKKK00KKKK0OkO000Okxc';c::coxd::0WWMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMKl;xkdOXNO:lk0KKKKKKKKK00kl;lOKKKKKKKKKKKKKKKKKKKKKKK0O0KKKKK0Oxdoooddl,.'cddl:,;lkNMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MXkddkklcox0KK0olkkdooodk0K00000xc,oKKKKKKKKKKKKKKKKKKKKKK0xok0KKKK0KK0Odl::,.'coooddcc0NKkkKWWMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"Xl:l:;lodxodxxloxl::odl:;:lk000Oxl'cO0OkO0KKKKKKKKKKKKKK00xclk0KKKK0000000kl'';::cc::lllolc,c0WMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"O:lc,;cdO0Okkkkd:ckk0WW0ooc;lkkxo:.,c:,:ldO0KKKKKKKKKKKKkol;:xO0KKK000000000x;,cxO0Oc':oddlc::kWMMMM";
        Sleep(15);
        cout<<endl<<spc<<"0:cl..::lO0O00k::0WKx0WNxdOc';:;:;;clodxxxO0K00OOkkOKKKK0d:,,lxO000000000000OdxO0000Ol';lllc;,xNMMMM";
        Sleep(15);
        cout<<endl<<spc<<"Xl;o:..::ck0Ox:'cdddllolc:llcldxkO00KKKK000OkxolcldxOOOOkdc,.,lxkO00000000000Oxk00OO0Od:;:cc,;OWWMMM";
        Sleep(15);
        cout<<endl<<spc<<"W0c:l:'':;;od:;lxddol:;:oxk00000000000Okxol:;;;;coddddoooool:'':oxxkOO000000OOl:dOOOOO0Okxdo;;0MWMMM";
        Sleep(15);
        cout<<endl<<spc<<"WW0c,,,',,.';cool::cldk0000000000Okxoc:;;;,..',;;;;,,'',;;;;;'..':lddxxxkkxxddo;':dkkkOOkxo,,kWMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MW0lclcodlc;;;;'.:ok000000000Oxoc:;:cldk0XX0Okxxxxxkxdollcclodxko,.';cooooooll:'',;,:loooc;;xNMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"WKc:ollkOOxocc;'ckkdk0OOOkxoc;;:lxOKNWMMMMMMMMMMMMMMMMMMMMMMMMMWWXkl;''',,,,,',cOX0dc:;;:co0NMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MKl;,;dxoc:;:c,,dd:ckkkdl:,;lx0NWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOxollldkKNWWMMWNXXXNWWMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMNKd::;:cokKNOlc,.:lc:,,ckXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMWNXXNWMMMMWNXOo:::cd0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMWNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        Sleep(15);
        cout<<endl<<spc<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
        cout<<endl<<endl<<endl;

        rlutil::setColor(rlutil::WHITE);
        Sleep(1000);
        system("cls");
    }
}




void sonido_y_txt()
{
    system("cls");
    Beep(440,1600);
    Sleep(100);
    rlutil::setColor(rlutil::LIGHTCYAN);
    cout<<endl<<endl<<endl;
    cout<<endl<<"                _____ _____            _   _                   ";
    Beep(440,350);
    cout<<endl<<"               / ____|  __ \\     /\\   | \\ | |                  ";
    Beep(440,450);
    cout<<endl<<"              | |  __| |__) |   /  \\  |  \\| |                  ";
    Beep(580,1100);
    cout<<endl<<"              | | |_ |  _  /   / /\\ \\ | . ` |                  ";
    Beep(520,800);
    cout<<endl<<"              | |__| | | \\ \\  / ____ \\| |\\  |                  ";
    Beep(490,800);
    cout<<endl<<"               \\_____|_|  \\_\\/_/    \\_\\_| \\_|                  ";
    Beep(440,1200);
    cout<<endl<<"                                                               ";
    rlutil::setColor(rlutil::LIGHTMAGENTA);
    cout<<endl<<"                                                               ";
    Beep(440,350);
    Beep(440,450);
    cout<<endl<<"                 _____ ______ _____  _____   ____       _   _   _ ";
    Beep(660,300);
    cout<<endl<<"                / ____|  ____|  __ \\|  __ \\ / __ \\     | | | | | |";
    Beep(580,1100);
    cout<<endl<<"               | |    | |__  | |__) | |  | | |  | |    | | | | | |";
    Beep(520,800);
    cout<<endl<<"               | |    |  __| |  _  /| |  | | |  | |    | | | | | |";
    Beep(490,800);
    cout<<endl<<"               | |____| |____| | \\ \\| |__| | |__| |    |_| |_| |_|";
    cout<<endl<<"                \\_____|______|_|  \\_\\_____/ \\____/     (_) (_) (_)";
    Beep(440,1200);
    rlutil::setColor(rlutil::WHITE);
    Sleep(100);
    cout<<endl<<endl<<endl;
    system("cls");
}




void tres_dados()
{
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"                                    _____        _____ _______ _____ _____    _____  ______            _    _  ____  _____            "<<endl;
    cout<<"                            /\\     |  __ \\ /\\   |  __ \\__   __|_   _|  __ \\  |  __ \\|  ____|     /\\   | |  | |/ __ \\|  __ \\     /\\    "<<endl;
    cout<<"                           /  \\    | |__) /  \\  | |__) | | |    | | | |__) | | |  | | |__       /  \\  | |__| | |  | | |__) |   /  \\   "<<endl;
    cout<<"                          / /\\ \\   |  ___/ /\\ \\ |  _  /  | |    | | |  _  /  | |  | |  __|     / /\\ \\ |  __  | |  | |  _  /   / /\\ \\  "<<endl;
    cout<<"                         / ____ \\  | |  / ____ \\| | \\ \\  | |   _| |_| | \\ \\  | |__| | |____   / ____ \\| |  | | |__| | | \\ \\  / ____ \\ "<<endl;
    cout<<"                        /_/    \\_\\ |_| /_/    \\_\\_|  \\_\\ |_|  |_____|_|  \\_\\ |_____/|______| /_/    \\_\\_|  |_|\\____/|_|  \\_\\/_/    \\_\\"<<endl;
    cout<<"                                                                                                                                      "<<endl;
    cout<<"                                                                                                                                      "<<endl;
    cout<<"                                        _____ ______        _ _    _ ______ _____             _____ ____  _   _                       "<<endl;
    cout<<"                                       / ____|  ____|      | | |  | |  ____/ ____|   /\\      / ____/ __ \\| \\ | |                      "<<endl;
    cout<<"                                      | (___ | |__         | | |  | | |__ | |  __   /  \\    | |   | |  | |  \\| |                      "<<endl;
    cout<<"                                       \\___ \\|  __|    _   | | |  | |  __|| | |_ | / /\\ \\   | |   | |  | | . ` |                      "<<endl;
    cout<<"                                       ____) | |____  | |__| | |__| | |___| |__| |/ ____ \\  | |___| |__| | |\\  |                      "<<endl;
    cout<<"                                      |_____/|______|  \\____/ \\____/|______\\_____/_/    \\_\\  \\_____\\____/|_| \\_|                      "<<endl;
    cout<<"                                                                                                                                      "<<endl;
    cout<<"                                                                                                                                      "<<endl;
    cout<<"                                              ____        _____          _____   ____   _____    _   _   _                            "<<endl;
    cout<<"                                             |___ \\      |  __ \\   /\\   |  __ \\ / __ \\ / ____|  | | | | | |                           "<<endl;
    cout<<"                                               __) |     | |  | | /  \\  | |  | | |  | | (___    | | | | | |                           "<<endl;
    cout<<"                                              |__ <      | |  | |/ /\\ \\ | |  | | |  | |\\___ \\   | | | | | |                           "<<endl;
    cout<<"                                              ___) |     | |__| / ____ \\| |__| | |__| |____) |  |_| |_| |_|                           "<<endl;
    cout<<"                                             |____/      |_____/_/    \\_\\_____/ \\____/|_____/   (_) (_) (_)                           "<<endl;
    Sleep(3000);
}


void supera_50_T()
{
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"                                                _                            _                       _                     "<<endl;
    cout<<"                                /\\             | |                          | |                     | |                    "<<endl;
    cout<<"                               /  \\   _ __ ___ | |__   ___  ___             | |_   _  __ _  __ _  __| | ___  _ __ ___  ___ "<<endl;
    cout<<"                              / /\\ \\ | '_ ` _ \\| '_ \\ / _ \\/ __|        _   | | | | |/ _` |/ _` |/ _` |/ _ \\| '__/ _ \\/ __|"<<endl;
    cout<<"                             / ____ \\| | | | | | |_) | (_) \\__ \\       | |__| | |_| | (_| | (_| | (_| | (_) | | |  __/\\__ \\"<<endl;
    cout<<"                            /_/    \\_\\_| |_| |_|_.__/ \\___/|___/        \\____/ \\__,_|\\__, |\\__,_|\\__,_|\\___/|_|  \\___||___/"<<endl;
    cout<<"                                                                                      __/ |                                "<<endl;
    cout<<"                                                                                     |___/                                 "<<endl;
    cout<<"                                                                                                                           "<<endl;
    cout<<"                                                 ___ _   _ _ __   ___ _ __ __ _ _ __ ___  _ __                             "<<endl;
    cout<<"                                                / __| | | | '_ \\ / _ \\ '__/ _` | '__/ _ \\| '_ \\                            "<<endl;
    cout<<"                                                \\__ \\ |_| | |_) |  __/ | | (_| | | | (_) | | | |                           "<<endl;
    cout<<"                                                |___/\\__,_| .__/ \\___|_|  \\__,_|_|  \\___/|_| |_|                           "<<endl;
    cout<<"                                                          | |                                                              "<<endl;
    cout<<"                                                          |_|                                                              "<<endl;
    cout<<"                                             _____  ___    _______ _____  _    _ ______       _____                        "<<endl;
    cout<<"                                            | ____|/ _ \\  |__   __|  __ \\| |  | |  ____/\\    / ____|                       "<<endl;
    cout<<"                                            | |__ | | | |    | |  | |__) | |  | | |__ /  \\  | (___                         "<<endl;
    cout<<"                                            |___ \\| | | |    | |  |  _  /| |  | |  __/ /\\ \\  \\___ \\                        "<<endl;
    cout<<"                                             ___) | |_| |    | |  | | \\ \\| |__| | | / ____ \\ ____) |                       "<<endl;
    cout<<"                                            |____/ \\___/     |_|  |_|  \\_\\\\____/|_|/_/    \\_\\_____/                        "<<endl;
    Sleep(3000);
}





void ultima_ronda()
{
    system("cls");
    for(int i=0; i<4; i++)
    {
        Sleep(10+(i*100));
        cout<<endl<<endl<<endl;
        cout<<"                                                                _"<<endl;
        cout<<"                                                               |/"<<endl;
        cout<<"                                                            _    _ _   _______ _____ __  __                "<<endl;
        cout<<"                                                           | |  | | | |__   __|_   _|  \\/  |   /\\          "<<endl;
        cout<<"                                                           | |  | | |    | |    | | | \\  / |  /  \\         "<<endl;
        cout<<"                                                           | |  | | |    | |    | | | |\\/| | / /\\ \\        "<<endl;
        cout<<"                                                           | |__| | |____| |   _| |_| |  | |/ ____ \\       "<<endl;
        cout<<"                                                            \\____/|______|_|  |_____|_|  |_/_/    \\_\\      "<<endl;
        cout<<"                                                                                                           "<<endl;
        cout<<"                                                                                                           "<<endl;
        cout<<"                                                       _____   ____  _   _ _____              _    _    _  "<<endl;
        cout<<"                                                      |  __ \\ / __ \\| \\ | |  __ \\   /\\       | |  | |  | | "<<endl;
        cout<<"                                                      | |__) | |  | |  \\| | |  | | /  \\      | |  | |  | | "<<endl;
        cout<<"                                                      |  _  /| |  | | . ` | |  | |/ /\\ \\     | |  | |  | | "<<endl;
        cout<<"                                                      | | \\ \\| |__| | |\\  | |__| / ____ \\    |_|  |_|  |_| "<<endl;
        cout<<"                                                      |_|  \\_\\\\____/|_| \\_|_____/_/    \\_\\   (_)  (_)  (_) "<<endl;
        cout<<endl<<endl<<endl;
        Sleep(50+(i*100));
        if(i==3)
        {
            Sleep(2000);
        }
        system("cls");
    }
}
