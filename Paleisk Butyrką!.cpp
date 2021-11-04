#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include <SFML\Window.hpp>
#include <SFML\System.hpp>
#include <math.h>
#include <cstdlib>
#include <vector>
#include <random>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <MMSystem.h>

using namespace sf;

class Bullet
{
public:
    Sprite shape;

    Bullet(Texture *texture, Vector2f pos)
    {
        this->shape.setTexture(*texture);

        this->shape.setScale(0.1f, 0.1f);

        this->shape.setPosition(pos);
    }
    ~Bullet () {}
};

class Lazeris
{
public:
    Sprite shape;

    Lazeris(Texture *texture, Vector2u windowSize)
    {
        this->shape.setTexture(*texture);

        this->shape.setScale(1.f,1.f);

        this->shape.setPosition(0,0);
    }
    ~Lazeris () {}
};

class Player
{
public:
    Sprite shape;
    Texture *texture;
    int Gyvybes;
    int MAXGyvybes;

    std::vector <Bullet> bullets;

    Player(Texture *texture)
    {
        this->MAXGyvybes = 10;
        this->Gyvybes = this->MAXGyvybes;

        this->texture = texture;
        this->shape.setTexture(*texture);

        this->shape.setScale(0.25f,0.25f);
    }
    ~Player() {}

};

class Airinas
{
public:
    Sprite shape;
    int Gyvybes;
    int MAXGyvybes;

    Airinas (Texture *texture, Vector2u windowSize)
    {
        this->MAXGyvybes = 75;
        this->Gyvybes = MAXGyvybes;

        this->shape.setTexture(*texture);
        this->shape.setPosition(900,150);
        this->shape.setScale(0.5f,0.5f);
    }
    ~Airinas(){}
};

class Ostapenko
{
public:
    Sprite shape;
    int Gyvybes;
    int MAXGyvybes;

    Ostapenko (Texture *texture, Vector2u windowSize)
    {
        this->MAXGyvybes = 100;
        this->Gyvybes = MAXGyvybes;

        this->shape.setTexture(*texture);
        this->shape.setPosition(800,0);
    }
    ~Ostapenko(){}
};

class Kopustas
{
public:
    Sprite shape;

    Kopustas (Texture *texture, Vector2u windowSize)
    {
        this->shape.setTexture(*texture);
        this->shape.setPosition(windowSize.x - this->shape.getGlobalBounds().width, rand()%(int)(windowSize.y - this->shape.getGlobalBounds().height));
        this->shape.setScale(0.5f,0.5f);
    }
    ~Kopustas(){}
};

class Kava
{
public:
    Sprite shape;
    Kava (Texture *texture, Vector2u windowSize)
    {
        this->shape.setTexture(*texture);
        this->shape.setPosition(windowSize.x - this->shape.getGlobalBounds().width, rand()%(int)(windowSize.y - this->shape.getGlobalBounds().height));
        this->shape.setScale(0.4f,0.4f);
    }
    ~Kava(){}
};

class Morkos
{
public:
    Sprite shape;
    Morkos (Texture *texture, Vector2u windowSize)
    {
        this->shape.setTexture(*texture);
        this->shape.setPosition(windowSize.x - this->shape.getGlobalBounds().width, rand()%(int)(windowSize.y - this->shape.getGlobalBounds().height));
        this->shape.setScale(0.5f,0.5f);
    }
    ~Morkos(){}
};

class Cesnakas
{
public:
    Sprite shape;
    Cesnakas (Texture *texture, Vector2u windowSize)
    {
        this->shape.setTexture(*texture);
        this->shape.setPosition(windowSize.x - this->shape.getGlobalBounds().width, rand()%(int)(windowSize.y - this->shape.getGlobalBounds().height));
        this->shape.setScale(0.4f,0.4f);
    }
    ~Cesnakas(){}
};

class Svogunas
{
public:
    Sprite shape;
    Svogunas (Texture *texture, Vector2u windowSize)
    {
        this->shape.setTexture(*texture);
        this->shape.setPosition(windowSize.x - this->shape.getGlobalBounds().width, rand()%(int)(windowSize.y - this->shape.getGlobalBounds().height));
        this->shape.setScale(0.5f,0.5f);
    }
    ~Svogunas(){}
};

class Cinas
{
public:
    Sprite shape;
    int Gyvybes;
    int MAXGyvybes;

    Cinas (Texture *texture, Vector2u windowSize)
        {
    this->MAXGyvybes = 100;
    this->Gyvybes = MAXGyvybes;

    this->shape.setTexture(*texture);
    this->shape.setPosition(1000,0);
    this->shape.setScale(1.f,1.f);
        }
    ~Cinas () {}
};


class Dudu
{
public:
    Sprite shape;
    int Gyvybes;
    int MAXGyvybes;

    Dudu(Texture *texture, Vector2u windowSize)
    {
        this->MAXGyvybes = 0.5;
        this->Gyvybes = this->MAXGyvybes;

        this->shape.setTexture(*texture);

        this->shape.setPosition(windowSize.x - this->shape.getGlobalBounds().width, rand()%(int)(windowSize.y - this->shape.getGlobalBounds().height));
        this->shape.setScale(0.7f,0.7f);
    }

    ~Dudu() {}
};

class Ramonas
{
public:
    Sprite shape;

    int Gyvybes;
    int MAXGyvybes;
    Ramonas (Texture *texture, Vector2u windowSize)
        {
    this->MAXGyvybes = 25;
    this->Gyvybes = MAXGyvybes;

    this->shape.setTexture(*texture);
    this->shape.setPosition(830,0);
    this->shape.setScale(1.f,1.f);
        }
    ~Ramonas () {}
};

class Enemy
{
public:
    Sprite shape;
    int Gyvybes;
    int MAXGyvybes;

    Enemy(Texture *texture, Vector2u windowSize)
    {
        this->MAXGyvybes = 0.5;
        this->Gyvybes = this->MAXGyvybes;

        this->shape.setTexture(*texture);

        this->shape.setScale(0.15f, 0.15f);

        this->shape.setPosition(windowSize.x - this->shape.getGlobalBounds().width, rand()%(int)(windowSize.y - this->shape.getGlobalBounds().height));
    }

    ~Enemy() {}
};

int main ()
{
    using namespace std;
    srand(time(NULL));
sf::SoundBuffer fortnite;
sf::Sound soundfortnite;
fortnite.loadFromFile ("Fortnite.wav");
soundfortnite.setBuffer(fortnite);

sf::SoundBuffer ajajai;
sf::Sound soundajajai;
ajajai.loadFromFile ("ajajai.wav");
soundajajai.setBuffer(ajajai);

sf::Music minecraftmusic;
minecraftmusic.openFromFile ("minecraft.wav");
minecraftmusic.setVolume(60.f);

    int kunokultura,biologija,chemija,daile,ekonomika,fizika,geografija,it,istorija,lietuviu,matematika,muzika,technologijos,anglu,uzsienioantra,praleistos,valandos,laikmatis;
    double mokinioindeksas,mokinioindeksas1,mokinioindeksas2,mokinioindeksas3;
    laikmatis=5;
    char a;
    minecraftmusic.play();
    cout << "Si programa apskaiciuos Jusu Mokinio Indeksa. Pasiekus tam tikra rezultata, gausite priza!" << endl;
    _sleep (2000);
    cout << " " << endl;
    cout << "Pirmiausia Jums reikia ivesti visu pamoku metinius vidurkius, suapvalintus iki vienetu." << endl;
    _sleep (1000);
    cout << " " << endl;
    cout << "Iveskite savo kuno kulturos pazymi: " << endl;
    cin >> kunokultura;
    if(kunokultura==1337) goto zaidimas1;
    cout << "Iveskite savo biologijos pazymi: " << endl;
    cin >> biologija;
    cout << "Iveskite savo chemijos pazymi: " << endl;
    cin >> chemija;
    cout << "Iveskite savo dailes pazymi: " << endl;
    cin >> daile;
    cout << "Iveskite savo ekonomikos pazymi: " << endl;
    cin >> ekonomika;
    cout << "Iveskite savo fizikos pazymi: " << endl;
    cin >> fizika;
    cout << "Iveskite savo geografijos pazymi: " << endl;
    cin >> geografija;
    cout << "Iveskite savo IT pazymi: " << endl;
    cin >> it;
    cout << "Iveskite savo istorijos pazymi: " << endl;
    cin >> istorija;
    cout << "Iveskite savo lietuviu kalbos pazymi: " << endl;
    cin >> lietuviu;
    cout << "Iveskite savo matematikos pazymi: " << endl;
    cin >> matematika;
    cout << "Iveskite savo muzikos pazymi: " << endl;
    cin >> muzika;
    cout << "Iveskite savo technologiju pazymi: " << endl;
    cin >> technologijos;
    cout << "Iveskite savo anglu kalbos pazymi: " << endl;
    cin >> anglu;
    cout << "Iveskite savo antrosios uzsienio kalbos pazymi: " << endl;
    cin >> uzsienioantra;
    _sleep(1000);
    cout << " " << endl;
    cout << "Iveskite praleistu ir nepateisintu pamoku per metus skaiciu: " << endl;
    cin >> praleistos;
    if (praleistos>10) praleistos==10;
    _sleep(1000);
    cout << " " << endl;
    cout << "Iveskite savo socialiniu valandu skaiciu: " << endl;
    cin >> valandos;
    if(valandos>10)
        valandos=10;
    mokinioindeksas1=(kunokultura+biologija+chemija+daile+ekonomika+fizika+geografija+it+istorija+lietuviu+matematika+muzika+technologijos+anglu+uzsienioantra)/15*10;
    mokinioindeksas2=100-(praleistos*4);
    mokinioindeksas3=valandos*10;
    mokinioindeksas=(mokinioindeksas1+mokinioindeksas2+mokinioindeksas3)/3;
    _sleep(750);
    cout << " " << endl;
    cout << "Duomenys gauti. Skaiciuojamas jusu Mokinio Indeksas.";
    cout << " " << endl;
    while (laikmatis>=1) {
    _sleep(1000);
    cout << "Iki rezultatu liko: " << setw(5) << laikmatis << endl;
    _sleep(300);
    laikmatis--;
    }
    _sleep(300);
    cout << " " << endl;
    minecraftmusic.stop();

    if (mokinioindeksas1<50 && mokinioindeksas2<50 && mokinioindeksas<50) {
    cout << "JUSU MOKINIO INDEKSAS YRA " << fixed << setprecision(2) << mokinioindeksas << endl;
    cout << " " << endl;
    soundajajai.play();
    _sleep(7000);
    cout << "IS NEI VIENOS SRITIES NEGAVOTE PATENKINAMO REZULTATO. DARYKITE ISVADAS!";
    cout << " " << endl;
    return 0;
    }

    else if (mokinioindeksas>=80) {
        cout << "Sveikiname, jusu Mokinio Indeksas yra " << fixed << setprecision(2) << mokinioindeksas <<endl;
        cout << " " << endl;
        soundfortnite.play();
        _sleep(1000);
        cout << "Ta proga siulome jums pazaisti zaidima: Paspauskite bet kuri klaviaturos mygtuka, noredami testi.";
        cout << " " << endl;
        char key = 'a';
        if (key = _getch())
        {
            goto zaidimas1;
        }
    }

    else if (mokinioindeksas1<50) {

        cout << "Jusu Mokinio Indeksas yra " << fixed << setprecision(2) << mokinioindeksas << endl;
        cout << " "<<endl;
        soundajajai.play();
        _sleep(7000);
        cout << "Esu jumis nusivyles. Privalote mokytis geriau!";
        cout << " "<<endl;
        return 0;
    }

    else if (mokinioindeksas2<50) {
        cout << "Jusu Mokinio Indeksas yra " << fixed << setprecision(2) << mokinioindeksas << endl;
        cout << " " <<endl;
        soundajajai.play();
        _sleep(7000);
        cout << "Esu jumis nusivyles. Pradekite lankyti pamokas!";
        cout << " " <<endl;
        return 0;
    }
    else if (mokinioindeksas3<50) {
        cout << "Jusu Mokinio Indeksas yra " << fixed << setprecision(2) << mokinioindeksas << endl;
        cout << " "<<endl;
        soundajajai.play();
        _sleep(7000);
        cout << "Esu jumis nusivyles. Dirbkite daugiau socialinio darbo!";
        cout << " " <<endl;
        return 0;
    }

    else if (mokinioindeksas<80) {
        cout << "Jusu Mokinio Indeksas yra " << fixed << setprecision(2) << mokinioindeksas << endl;
        cout << " " << endl;
        soundajajai.play();
        _sleep(1000);
        cout << "Slapta priza gaunate tik tuomet, kai jusu Mokinio Indeksas siekia 80. Galbut kita karta!";
        cout << " " << endl;
        _sleep(6000);
        return 0;
    }

    zaidimas1:
    srand(time(NULL));

    RenderWindow window(VideoMode(1280, 720), "Paleisk Butyrka!", Style::Default);
    window.setFramerateLimit(120);

    Music cinasa;
    cinasa.openFromFile ("Garsai/cinas.wav");

    Music darude;
    darude.openFromFile ("Muzika/darude.wav");

    Music netsky;
    netsky.openFromFile ("Muzika/netsky.wav");
    netsky.setVolume(20.f);

    Music samba;
    samba.openFromFile ("Muzika/samba.wav");

    Music rozi;
    rozi.openFromFile ("Muzika/rozi.wav");

    Music loveisagame;
    loveisagame.openFromFile ("Muzika/loveisagame.wav");
    loveisagame.setVolume(20.f);

    Music alamenthe;
    alamenthe.openFromFile ("Muzika/alamenthe.wav");
    loveisagame.setVolume(20.f);

    SoundBuffer visiemate;
    visiemate.loadFromFile ("Garsai/visiemate.wav");
    Sound soundvisiemate;
    soundvisiemate.setBuffer(visiemate);

    SoundBuffer buffer;
    buffer.loadFromFile ("Garsai/labasvakaras.wav");
    Sound sound;
    sound.setBuffer(buffer);

    SoundBuffer butyrkosnebus;
    Sound soundbutyrkosnebus;
    butyrkosnebus.loadFromFile ("Garsai/butyrkosnebus.wav");
    soundbutyrkosnebus.setBuffer(butyrkosnebus);

    SoundBuffer bananas;
    Sound soundbananas;
    bananas.loadFromFile ("Garsai/bananas.wav");
    soundbananas.setBuffer(bananas);

    SoundBuffer didziausiapagarba;
    Sound sounddidziausiapagarba;
    didziausiapagarba.loadFromFile ("Garsai/didziausiapagarba.wav");
    sounddidziausiapagarba.setBuffer(didziausiapagarba);

    SoundBuffer gerbiamieji;
    Sound soundgerbiamieji;
    gerbiamieji.loadFromFile ("Garsai/gerbiamieji.wav");
    soundgerbiamieji.setBuffer(gerbiamieji);

    SoundBuffer kasjuokinga;
    Sound soundkasjuokinga;
    kasjuokinga.loadFromFile ("Garsai/kasjuokinga.wav");
    soundkasjuokinga.setBuffer(kasjuokinga);

    SoundBuffer kiekmetuku;
    Sound soundkiekmetuku;
    kiekmetuku.loadFromFile ("Garsai/kiekmetuku.wav");
    soundkiekmetuku.setBuffer(kiekmetuku);

    SoundBuffer kopiktas;
    Sound soundkopiktas;
    kopiktas.loadFromFile ("Garsai/kopiktas.wav");
    soundkopiktas.setBuffer(kopiktas);

    SoundBuffer miau;
    Sound soundmiau;
    miau.loadFromFile ("Garsai/miau.wav");
    soundmiau.setBuffer(miau);

    SoundBuffer nejuokai;
    Sound soundnejuokai;
    nejuokai.loadFromFile ("Garsai/nejuokai.wav");
    soundnejuokai.setBuffer(nejuokai);

    SoundBuffer nesirodyk;
    Sound soundnesirodyk;
    nesirodyk.loadFromFile ("Garsai/nesirodyk.wav");
    soundnejuokai.setBuffer(nesirodyk);

    SoundBuffer nevartoju;
    Sound soundnevartoju;
    nevartoju.loadFromFile ("Garsai/nevartoju.wav");
    soundnevartoju.setBuffer(nevartoju);

    SoundBuffer neverti;
    Sound soundneverti;
    neverti.loadFromFile ("Garsai/neverti.wav");
    soundneverti.setBuffer(neverti);

    SoundBuffer noritbutyrkos;
    Sound soundnoritbutyrkos;
    noritbutyrkos.loadFromFile ("Garsai/noritbutyrkos.wav");
    soundnoritbutyrkos.setBuffer(noritbutyrkos);

    SoundBuffer nurausiu;
    Sound soundnurausiu;
    nurausiu.loadFromFile ("Garsai/nurausiu.wav");
    soundnurausiu.setBuffer(nurausiu);

    SoundBuffer nusispjaut;
    Sound soundnusispjaut;
    nusispjaut.loadFromFile ("Garsai/nusispjaut.wav");
    soundnusispjaut.setBuffer(nusispjaut);

    SoundBuffer pakankamaistipriai;
    Sound soundpakankamaistipriai;
    pakankamaistipriai.loadFromFile ("Garsai/pakankamaistipriai.wav");
    soundpakankamaistipriai.setBuffer(pakankamaistipriai);

    SoundBuffer paskutine;
    Sound soundpaskutine;
    paskutine.loadFromFile ("Garsai/paskutine.wav");
    soundpaskutine.setBuffer(paskutine);

    SoundBuffer praeityje;
    Sound soundpraeityje;
    praeityje.loadFromFile ("Garsai/praeityje.wav");
    soundpraeityje.setBuffer(praeityje);

    SoundBuffer takeliai;
    Sound soundtakeliai;
    takeliai.loadFromFile ("Garsai/takeliai.wav");
    soundtakeliai.setBuffer(takeliai);

    SoundBuffer taksto;
    Sound soundtaksto;
    taksto.loadFromFile ("Garsai/taksto.wav");
    soundtaksto.setBuffer(taksto);

    SoundBuffer nesamone;
    Sound soundnesamone;
    nesamone.loadFromFile ("Garsai/nesamone.wav");
    soundnesamone.setBuffer(nesamone);

    SoundBuffer tiesiogine;
    Sound soundtiesiogine;
    tiesiogine.loadFromFile ("Garsai/tiesiogine.wav");
    soundtiesiogine.setBuffer(tiesiogine);

    SoundBuffer turekitomeny;
    Sound soundturekitomeny;
    turekitomeny.loadFromFile ("Garsai/turekitomeny.wav");
    soundturekitomeny.setBuffer(turekitomeny);

    SoundBuffer zdarova;
    Sound soundzdarova;
    zdarova.loadFromFile ("Garsai/zdarova.wav");
    soundzdarova.setBuffer(zdarova);

    SoundBuffer lnk;
    Sound soundlnk;
    lnk.loadFromFile ("Garsai/lnk.wav");
    soundlnk.setBuffer(lnk);

    SoundBuffer zdarovabratva;
    Sound soundzdarovabratva;
    zdarovabratva.loadFromFile ("Garsai/zdarovabratva.wav");
    soundzdarovabratva.setBuffer(zdarovabratva);

    SoundBuffer ubs;
    Sound soundubs;
    ubs.loadFromFile ("Garsai/ubs.wav");
    soundubs.setBuffer(ubs);

    SoundBuffer mamyte;
    Sound soundmamyte;
    mamyte.loadFromFile ("Garsai/mamytegelbek.wav");
    soundmamyte.setBuffer(mamyte);

    SoundBuffer airinasa;
    Sound soundairinasa;
    airinasa.loadFromFile ("Garsai/airinas.wav");
    soundairinasa.setBuffer(airinasa);
    soundairinasa.setVolume(80.f);

    SoundBuffer ramonas1;
    Sound soundramonas1;
    ramonas1.loadFromFile ("Garsai/ramonas1.wav");
    soundramonas1.setBuffer(ramonas1);

    SoundBuffer ramonas2;
    Sound soundramonas2;
    ramonas2.loadFromFile ("Garsai/ramonas2.wav");
    soundramonas2.setBuffer(ramonas2);

    SoundBuffer ramonas3;
    Sound soundramonas3;
    ramonas3.loadFromFile ("Garsai/ramonas3.wav");
    soundramonas3.setBuffer(ramonas3);

    SoundBuffer ramonas4;
    Sound soundramonas4;
    ramonas4.loadFromFile ("Garsai/ramonas4.wav");
    soundramonas4.setBuffer(ramonas4);

    SoundBuffer ramonas5;
    Sound soundramonas5;
    ramonas5.loadFromFile ("Garsai/ramonas5.wav");
    soundramonas5.setBuffer(ramonas5);

    SoundBuffer ramonas6;
    Sound soundramonas6;
    ramonas6.loadFromFile ("Garsai/ramonas6.wav");
    soundramonas6.setBuffer(ramonas6);

    SoundBuffer ramonas7;
    Sound soundramonas7;
    ramonas7.loadFromFile ("Garsai/ramonas7.wav");
    soundramonas7.setBuffer(ramonas7);

    Music music;
    music.openFromFile ("Muzika/deep.wav");

    Music csgomusic;
    csgomusic.openFromFile ("Muzika/csgo.wav");

    Music sowhat;
    sowhat.openFromFile ("Muzika/sowhat.wav");

    Music butyrkamusic;
    butyrkamusic.openFromFile ("Muzika/butyrka.wav");

    Music allineed;
    allineed.openFromFile ("Muzika/allineed.wav");

    Music crazydream;
    crazydream.openFromFile ("Muzika/crazydream.wav");
    crazydream.setVolume(23.f);

    Music intwos;
    intwos.openFromFile ("Muzika/intwos.wav");
    intwos.setVolume(23.f);

    Font font;
    font.loadFromFile("Sriftas/BebasNeue-Regular.otf");

    Texture fonas;
    fonas.loadFromFile("Teksturos/fonas.jpg");
    Sprite sprite;
    sprite.setTexture(fonas);

    Texture intro;
    intro.loadFromFile("Teksturos/intro.jpg");
    Sprite introsprite;
    introsprite.setTexture(intro);

    Texture outro;
    outro.loadFromFile("Teksturos/outro.jpg");
    Sprite outrosprite;
    outrosprite.setTexture(outro);

    Texture outro2;
    outro2.loadFromFile("Teksturos/outro2.jpg");
    Sprite outro2sprite;
    outro2sprite.setTexture(outro2);

    Texture playerTex;
    playerTex.loadFromFile("Teksturos/djalexbit.png");

    Texture enemyTex;
    enemyTex.loadFromFile ("Teksturos/butyrka.png");

    Texture bulletTex;
    bulletTex.loadFromFile ("Teksturos/kulka.png");

    Texture airinasTex;
    airinasTex.loadFromFile ("Teksturos/airinas.png");

    Texture cinasTex;
    cinasTex.loadFromFile ("Teksturos/cinas.png");

    Texture ramonasTex;
    ramonasTex.loadFromFile ("Teksturos/ramonas.png");

    Texture kopustasTex;
    kopustasTex.loadFromFile ("Teksturos/kopustas.png");

    Texture kavaTex;
    kavaTex.loadFromFile ("Teksturos/kava.png");

    Texture morkosTex;
    morkosTex.loadFromFile ("Teksturos/morkos.png");

    Texture cesnakasTex;
    cesnakasTex.loadFromFile ("Teksturos/cesnakas.png");

    Texture svogunasTex;
    svogunasTex.loadFromFile ("Teksturos/svogunas.png");

    Texture ostapenkoTex;
    ostapenkoTex.loadFromFile ("Teksturos/ostapenko.png");

    Texture duduTex;
    duduTex.loadFromFile ("Teksturos/dudu.png");

    Texture lazerisTex;
    lazerisTex.loadFromFile ("Teksturos/lazeris.png");

    Text scoreText;
    scoreText.setFont(font);
    scoreText.setCharacterSize(40);
    scoreText.setFillColor(Color::White);
    scoreText.setPosition(10.f, 10.f);
    int pradzia=0;
zaidimas:
    minecraftmusic.stop();
    int score=0;
    int numeris;

    Player player(&playerTex);
    int saudymouzsaldymas = 30;
    int lazeriouzsaldymas = 300000;

    Text hpText;
    hpText.setFont(font);
    hpText.setCharacterSize(20);
    hpText.setFillColor(Color::White);

    Text gameover;
    gameover.setFont(font);
    gameover.setString(std::to_string(score));
    gameover.setCharacterSize(120);
    gameover.setFillColor(Color::White);
    gameover.setPosition(610,330);

    int priesuatsiradimolaikas = 0;
    int duduatsiradimolaikas = 0;

    std::vector<Enemy> enemies;
    std::vector<Airinas> airinas;
    std::vector<Cinas> cinas;
    std::vector<Ramonas> ramonas;
    std::vector<Kopustas> kopustas;
    std::vector<Kava> kava;
    std::vector<Morkos> morkos;
    std::vector<Cesnakas> cesnakas;
    std::vector<Svogunas> svogunas;
    std::vector<Ostapenko> ostapenko;
    std::vector<Dudu> dudu;
    std::vector<Lazeris> lazeris;

    airinas.push_back(Airinas(&airinasTex, window.getSize()));
    cinas.push_back(Cinas(&cinasTex, window.getSize()));
    ramonas.push_back(Ramonas(&ramonasTex, window.getSize()));
    kopustas.push_back(Kopustas(&kopustasTex, window.getSize()));
    kava.push_back(Kava(&kavaTex, window.getSize()));
    morkos.push_back(Morkos(&morkosTex, window.getSize()));
    cesnakas.push_back(Cesnakas(&cesnakasTex, window.getSize()));
    svogunas.push_back(Svogunas(&svogunasTex, window.getSize()));
    ostapenko.push_back(Ostapenko(&ostapenkoTex, window.getSize()));
    dudu.push_back(Dudu(&duduTex, window.getSize()));
    lazeris.push_back(Lazeris(&lazerisTex, window.getSize()));

    Text ehpText;
    hpText.setFont(font);
    hpText.setCharacterSize(20);
    hpText.setFillColor(Color::White);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
            {
                if (event.type == Event::Closed)
                {
                    butyrkamusic.stop();
                    window.close();
                }

            }
        if(pradzia==0){
        if(Keyboard::isKeyPressed(Keyboard::F) == false)
            csgomusic.play();
        while(!Keyboard::isKeyPressed(Keyboard::F))
        {
            {
            window.draw(introsprite);
            window.display();
            }
            if(Keyboard::isKeyPressed(Keyboard::Escape) == true)
            {
                window.close();
                csgomusic.stop();
                }
            if(Keyboard::isKeyPressed(Keyboard::F) == true)

            pradzia++;

        }
        }


        if(pradzia==1)
        {
            csgomusic.stop();
            music.play();
            sound.play();
            pradzia++;
        }
        if(Keyboard::isKeyPressed(Keyboard::P) && Keyboard::isKeyPressed(Keyboard::F1))
        {
            music.stop();
            score=score+950;
            _sleep(500);
        }

        if(Keyboard::isKeyPressed(Keyboard::P) && Keyboard::isKeyPressed(Keyboard::F2))
        {
            music.stop();
            score=score+1950;
            _sleep(500);
        }

        if(Keyboard::isKeyPressed(Keyboard::P) && Keyboard::isKeyPressed(Keyboard::F3))
        {
            music.stop();
            score=score+2950;
            _sleep(500);
        }

        if(Keyboard::isKeyPressed(Keyboard::P) && Keyboard::isKeyPressed(Keyboard::F4))
        {
            music.stop();
            score=score+3950;
            _sleep(500);
        }

        if(Keyboard::isKeyPressed(Keyboard::P) && Keyboard::isKeyPressed(Keyboard::F5))
        {
            music.stop();
            score=score+4950;
            _sleep(500);
        }

        if(Keyboard::isKeyPressed(Keyboard::W))
            player.shape.move(0.f,-10.f);
        if(Keyboard::isKeyPressed(Keyboard::A))
            player.shape.move(-10.f,0.f);
        if(Keyboard::isKeyPressed(Keyboard::S))
            player.shape.move(0.f,10.f);
        if(Keyboard::isKeyPressed(Keyboard::D))
            player.shape.move(10.f,0.f);

        if(Mouse::isButtonPressed(Mouse::Right) && lazeriouzsaldymas >100 && score>4000){
        for(size_t i=0;i<lazeris.size(); i++)
        {
            if(Mouse::isButtonPressed(Mouse::Right)) lazeris[i].shape.move(20.f, 0.f);

            if(lazeris[i].shape.getPosition().x > window.getSize().x)
            {
            {
                lazeris[i].shape.setPosition(0,0);
                lazeriouzsaldymas = 0; }
                if(!Mouse::isButtonPressed(Mouse::Right))
                {
                {lazeriouzsaldymas = 0;
                lazeris[i].shape.setPosition(0,0);
            }
            }
            for (size_t k=0;k<lazeris.size();k++)
            {
                if(lazeris[i].shape.getGlobalBounds().intersects(enemies[k].shape.getGlobalBounds()))
                {
                    if(enemies[k].Gyvybes <= 0)
                    {
                        enemies.erase(enemies.begin()+k);
                            score=score+5;
                            if(score!=1000 && score!=2000 && score!=3000 && score!=4000)
                            if(score==1000)
                                {
                                    music.stop();
                                    soundairinasa.play();
                                }
                                if(score==2000)
                                    {
                                        sowhat.stop();
                                        cinasa.play();
                                    }
                                    if(score==3000)
                                    {
                                        crazydream.stop();
                                        soundramonas1.play();
                                    }
                                    if(score==4000)
                                    {
                                        loveisagame.stop();
                                        darude.play();
                                    }
                    }
                    else enemies[k].Gyvybes--;
                }
            }
        }
        }
        }

        if (lazeriouzsaldymas<100)
            lazeriouzsaldymas++;

        hpText.setPosition(player.shape.getPosition().x, player.shape.getPosition().y - hpText.getGlobalBounds().height);
        hpText.setString(std::to_string(player.Gyvybes) + "/" + std::to_string(player.MAXGyvybes));

        if(player.shape.getPosition().x<=0)
            player.shape.setPosition(0.f, player.shape.getPosition().y);
        if(player.shape.getPosition().x>=window.getSize().x - player.shape.getGlobalBounds().width)
            player.shape.setPosition(window.getSize().x - player.shape.getGlobalBounds().width, player.shape.getPosition().y);
        if(player.shape.getPosition().y<=0)
            player.shape.setPosition(player.shape.getPosition().x, 0.f);
        if(player.shape.getPosition().y>=window.getSize().y - player.shape.getGlobalBounds().height)
            player.shape.setPosition(player.shape.getPosition().x, window.getSize().y - player.shape.getGlobalBounds().height);

        if(saudymouzsaldymas < 40)
            saudymouzsaldymas++;

        if(Mouse::isButtonPressed(Mouse::Left) && saudymouzsaldymas >=40 && score!=3000 && score!=3005 && score!=3010 && score!=3015 && score!=3020 && score!=3025 && score!=3030)
        {
            player.bullets.push_back(Bullet(&bulletTex, player.shape.getPosition()));
            saudymouzsaldymas = 0;
        }

        for(size_t i=0;i<player.bullets.size(); i++)
        {
            player.bullets[i].shape.move(20.f, 0.f);

            if(player.bullets[i].shape.getPosition().x > window.getSize().x)
            {
                player.bullets.erase(player.bullets.begin() + i);
                break;
            }
            for (size_t k=0;k<enemies.size();k++)
            {
                if(player.bullets[i].shape.getGlobalBounds().intersects(enemies[k].shape.getGlobalBounds()))
                {
                    if(enemies[k].Gyvybes == 0)
                    {
                        enemies.erase(enemies.begin()+k);
                            if(score!=1000 && score!=2000 && score!=3000 && score!=4000  && score!=5000)
                            score=score+5;
                            if(score==1000)
                                {
                                    music.stop();
                                    soundairinasa.play();
                                }
                                if(score==2000)
                                    {
                                        sowhat.stop();
                                        cinasa.play();
                                    }
                                    if(score==3000)
                                    {
                                        crazydream.stop();
                                        soundramonas1.play();
                                    }
                                    if(score==4000)
                                    {
                                        loveisagame.stop();
                                        darude.play();
                                    }

                        if (score%100==0 && score!=1000  && score!=2000 && score!=3000 && score!=3100 && score!=4000 && score!=5000)
                        {
                            numeris = rand() % 24 + 1;
                            if(numeris==1)
                            soundbananas.play();
                            if(numeris==2)
                            soundbutyrkosnebus.play();
                            if(numeris==3)
                            sounddidziausiapagarba.play();
                            if(numeris==4)
                            soundgerbiamieji.play();
                            if(numeris==5)
                            soundkasjuokinga.play();
                            if(numeris==6)
                            soundkopiktas.play();
                            if(numeris==7)
                            soundmiau.play();
                            if(numeris==8)
                            soundnejuokai.play();
                            if(numeris==9)
                            soundnesirodyk.play();
                            if(numeris==10)
                            soundnevartoju.play();
                            if(numeris==11)
                            soundneverti.play();
                            if(numeris==12)
                            soundnoritbutyrkos.play();
                            if(numeris==13)
                            soundnurausiu.play();
                            if(numeris==14)
                            soundnusispjaut.play();
                            if(numeris==15)
                            soundpakankamaistipriai.play();
                            if(numeris==16)
                            soundpaskutine.play();
                            if(numeris==17)
                            soundpraeityje.play();
                            if(numeris==18)
                            soundtakeliai.play();
                            if(numeris==19)
                            soundtaksto.play();
                            if(numeris==20)
                            soundtiesiogine.play();
                            if(numeris==21)
                            soundturekitomeny.play();
                            if(numeris==22)
                            soundzdarova.play();
                            if(numeris==23)
                            soundzdarovabratva.play();
                            if(numeris==24)
                            soundlnk.play();
                        }
                    }
                    else enemies[k].Gyvybes--;
                    player.bullets.erase(player.bullets.begin() + i);
                    break;
                }
            }
        }

        if(score==1000)
            {
                        for (size_t i=0;i<airinas.size();i++)
        {
            if (player.shape.getGlobalBounds().intersects(airinas[i].shape.getGlobalBounds()))
            {
                soundairinasa.stop();
                player.Gyvybes=0;
                if(player.Gyvybes == 0)
                {
                    goto rip;
                }
            }

        for(size_t i=0;i<player.bullets.size(); i++)
        {
            player.bullets[i].shape.move(20.f, 0.f);
            if(player.bullets[i].shape.getPosition().x > window.getSize().x)
            {
                player.bullets.erase(player.bullets.begin() + i);
                break;
            }
            for (size_t k=0;k<airinas.size();k++)
            {
                if(player.bullets[i].shape.getGlobalBounds().intersects(airinas[k].shape.getGlobalBounds()))
                {
                    player.bullets.erase(player.bullets.begin() + i);
                    if (airinas[i].Gyvybes==1)
                    {
                        soundairinasa.stop();
                        soundnesamone.play();
                    }
                    if (airinas[i].Gyvybes<0)
                    {
                    airinas.erase(airinas.begin() + k);
                    score=score+100;
                            if(score==1100)
        {
            sowhat.play();
        }
                    }
                    else airinas[i].Gyvybes--;
                    break;
                }
            }
        }
            }
            }

if(score==2000)

            {
                        for (size_t i=0;i<cinas.size();i++)
        {
            cinas[i].shape.move(-.2f, 0.f);
            if (player.shape.getGlobalBounds().intersects(cinas[i].shape.getGlobalBounds()))
            {
                cinasa.stop();
                player.Gyvybes=0;
                if(player.Gyvybes == 0)
                {
                    goto rip;
                }
            }

        for(size_t i=0;i<player.bullets.size(); i++)
        {
            player.bullets[i].shape.move(20.f, 0.f);
            if(player.bullets[i].shape.getPosition().x > window.getSize().x)
            {
                player.bullets.erase(player.bullets.begin() + i);
                break;
            }
            for (size_t k=0;k<cinas.size();k++)
            {
                if(player.bullets[i].shape.getGlobalBounds().intersects(cinas[k].shape.getGlobalBounds()))
                {
                    player.bullets.erase(player.bullets.begin() + i);
                    if (cinas[i].Gyvybes==1)
                    {
                        cinasa.stop();
                        soundvisiemate.play();
                    }
                    if (cinas[i].Gyvybes<0)
                    {
                    cinas.erase(cinas.begin() + k);
                    score=score+100;
                        if(score==2100)
                        {
                            crazydream.play();
                        }
                    }
                    else cinas[i].Gyvybes--;
                    break;
                }
            }
        }
            }
            }
if(score==3000){
            {
                        for (size_t i=0;i<ramonas.size();i++)
        {
            if (player.shape.getGlobalBounds().intersects(ramonas[i].shape.getGlobalBounds()))
            {
                soundramonas1.stop();
                player.Gyvybes=0;
                if(player.Gyvybes == 0)
                {
                    goto rip;
                }
            }
            }
            }
if(soundramonas1.getStatus() == sf::SoundSource::Status::Stopped)
{
    score=score+5;
    soundramonas2.play();
}
}
if(score==3005)
{
        for (size_t i=0;i<kopustas.size();i++)
        {
            kopustas[i].shape.move(-10.f, 0.f);

            if(kopustas[i].shape.getPosition().x <= 0 - kopustas[i].shape.getGlobalBounds().width)
            {
                kopustas.erase(kopustas.begin() + i);
                score=score+5;
                soundramonas3.play();
                break;
            }
            if (kopustas[i].shape.getGlobalBounds().intersects(player.shape.getGlobalBounds()))
            {
                soundramonas2.stop();
                goto rip;
            }
                break;
            }
}
if(score==3010){
            {
                        for (size_t i=0;i<kava.size();i++)
        {
            kava[i].shape.move(-10.f, 0.f);

            if (player.shape.getGlobalBounds().intersects(kava[i].shape.getGlobalBounds()))
            {
                soundramonas3.stop();
                player.Gyvybes=0;
                if(player.Gyvybes == 0)
                {
                    goto rip;
                }
            }
            }
            }
if(soundramonas3.getStatus() == sf::SoundSource::Status::Stopped)
{
    score=score+5;
    soundramonas4.play();
}
}

if(score==3015){
            {
                        for (size_t i=0;i<kava.size();i++)
        {
            morkos[i].shape.move(-15.f, 0.f);

            if (player.shape.getGlobalBounds().intersects(morkos[i].shape.getGlobalBounds()))
            {
                soundramonas4.stop();
                player.Gyvybes=0;
                if(player.Gyvybes == 0)
                {
                    goto rip;
                }
            }
            }
            }
if(soundramonas4.getStatus() == sf::SoundSource::Status::Stopped)
{
    score=score+5;
    soundramonas5.play();
}
}

if(score==3020){
            {
                        for (size_t i=0;i<cesnakas.size();i++)
        {
            cesnakas[i].shape.move(-15.f, 0.f);

            if (player.shape.getGlobalBounds().intersects(cesnakas[i].shape.getGlobalBounds()))
            {
                soundramonas5.stop();
                player.Gyvybes=0;
                if(player.Gyvybes == 0)
                {
                    goto rip;
                }
            }
            }
            }
if(soundramonas5.getStatus() == sf::SoundSource::Status::Stopped)
{
    score=score+5;
    soundramonas6.play();
}
}

if(score==3025){
            {
                        for (size_t i=0;i<svogunas.size();i++)
        {
            svogunas[i].shape.move(-15.f, 0.f);

            if (player.shape.getGlobalBounds().intersects(svogunas[i].shape.getGlobalBounds()))
            {
                soundramonas6.stop();
                player.Gyvybes=0;
                if(player.Gyvybes == 0)
                {
                    goto rip;
                }
            }
            }
            }
if(soundramonas6.getStatus() == sf::SoundSource::Status::Stopped)
{
    score=score+5;
    soundramonas7.play();
}
}
if(soundramonas7.getStatus() == sf::SoundSource::Status::Stopped && score==3030)
{
    score=score+70;
    soundkiekmetuku.play();
    loveisagame.play();
}

if(score==4000)
{
    for (size_t i=0;i<ostapenko.size();i++)
        {
            if (player.shape.getGlobalBounds().intersects(ostapenko[i].shape.getGlobalBounds()))
            {
                darude.stop();
                player.Gyvybes=0;
                if(player.Gyvybes == 0)
                {
                    goto rip;
                }
            }
        }
        for(size_t i=0;i<player.bullets.size(); i++)
        {
            player.bullets[i].shape.move(20.f, 0.f);

            if(player.bullets[i].shape.getPosition().x > window.getSize().x)
            {
                player.bullets.erase(player.bullets.begin() + i);
                break;
            }
            for (size_t k=0;k<ostapenko.size();k++)
            {
                if(player.bullets[i].shape.getGlobalBounds().intersects(ostapenko[k].shape.getGlobalBounds()))
                {
                    if(ostapenko[k].Gyvybes < 1)
                    {
                        darude.stop();
                        netsky.play();
                    }
                    if(ostapenko[k].Gyvybes == 0)
                    {
                        ostapenko.erase(ostapenko.begin()+k);
                        score=score+100;
                    }
                    else ostapenko[k].Gyvybes--;
                    player.bullets.erase(player.bullets.begin() + i);
                    break;
                }
            }
        }
}
if(score==4000)
{
for (size_t i=0;i<dudu.size();i++)
        {
            dudu[i].shape.move(-12.f, 0.f);

            if(dudu[i].shape.getPosition().x <= 0 - dudu[i].shape.getGlobalBounds().width)
            {
                dudu.erase(dudu.begin() + i);
                break;
            }
            if (dudu[i].shape.getGlobalBounds().intersects(player.shape.getGlobalBounds()))
            {
                dudu.erase(dudu.begin() + i);
                player.Gyvybes--;
            }
            if(player.Gyvybes == 1)
            {
                soundubs.play();
                alamenthe.play();
            }
            if(player.Gyvybes<=0){
                    darude.stop();
                    goto rip;
                }
                break;
            }
        }

        if(score>=0 && score<=200)
        {

        if(priesuatsiradimolaikas < 39)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=39)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>200 && score<=400)
        {
        if(priesuatsiradimolaikas < 38)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=38)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>400 && score<=600)
        {
        if(priesuatsiradimolaikas < 37)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=37)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>600 && score<=800)
        {
        if(priesuatsiradimolaikas < 36)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=36)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>800 && score<1000)
        {
        if(priesuatsiradimolaikas < 35)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=35)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>1000 && score<=1200)
        {
        if(priesuatsiradimolaikas < 34)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=34)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>1200 && score<=1400)
        {
        if(priesuatsiradimolaikas < 33)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=33)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>1400 && score<=1600)
        {
        if(priesuatsiradimolaikas < 32)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=32)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>1600 && score<=1800)
        {
        if(priesuatsiradimolaikas < 31)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=31)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>1800 && score<2000)
        {
        if(priesuatsiradimolaikas < 30)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=30)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>=2100 && score<=2200)
        {
        if(priesuatsiradimolaikas < 29)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=29)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>2200 && score<=2400)
        {
        if(priesuatsiradimolaikas < 28)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=28)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>2400 && score<=2600)
        {
        if(priesuatsiradimolaikas < 27)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=27)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>2600 && score<=2800)
        {
        if(priesuatsiradimolaikas < 26)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=26)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>2800 && score<3000)
        {
        if(priesuatsiradimolaikas < 25)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=25)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>=3100 && score<=3200)
        {
        if(priesuatsiradimolaikas < 24)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=24)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>3200 && score<=3400)
        {
        if(priesuatsiradimolaikas < 23)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=23)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>3400 && score<=3600)
        {
        if(priesuatsiradimolaikas < 22)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=22)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>3600 && score<=3800)
        {
        if(priesuatsiradimolaikas < 21)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=21)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>3800 && score<4000)
        {
        if(priesuatsiradimolaikas < 20)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=20)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score==4000)
        {
        if(duduatsiradimolaikas < 1)
            duduatsiradimolaikas++;

        if(duduatsiradimolaikas >=1)
        {
            dudu.push_back(Dudu(&duduTex, window.getSize()));
            duduatsiradimolaikas = 0;
        }
        }

        if(score>4000 && score<=4200)
        {
        if(priesuatsiradimolaikas < 19)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=19)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>4200 && score<=4400)
        {
        if(priesuatsiradimolaikas < 18)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=18)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>4400 && score<=4600)
        {
        if(priesuatsiradimolaikas < 17)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=17)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>4600 && score<=4800)
        {
        if(priesuatsiradimolaikas < 16)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=16)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>4800 && score<5000)
        {
        if(priesuatsiradimolaikas < 15)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=15)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>=5000 && score<=5200)
        {
        if(priesuatsiradimolaikas < 14)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=14)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>5200 && score<=5400)
        {
        if(priesuatsiradimolaikas < 13)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=13)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>5400 && score<=5600)
        {
        if(priesuatsiradimolaikas < 12)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=12)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>5600 && score<=5800)
        {
        if(priesuatsiradimolaikas < 11)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=11)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>5800 && score<=6000)
        {
        if(priesuatsiradimolaikas < 10)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=10)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>6000 && score<=6200)
        {
        if(priesuatsiradimolaikas < 9)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=9)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>6200 && score<=6400)
        {
        if(priesuatsiradimolaikas < 8)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=8)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>6400 && score<=6600)
        {
        if(priesuatsiradimolaikas < 7)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=7)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>6600 && score<=6800)
        {
        if(priesuatsiradimolaikas < 6)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=6)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>6800 && score<=7000)
        {
        if(priesuatsiradimolaikas < 5)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=5)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>7000 && score<=7200)
        {
        if(priesuatsiradimolaikas < 4)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=4)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>7200 && score<=7400)
        {
        if(priesuatsiradimolaikas < 3)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=3)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>7400 && score<=7600)
        {
        if(priesuatsiradimolaikas < 2)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=2)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        if(score>7600)
        {
        if(priesuatsiradimolaikas < 1)
            priesuatsiradimolaikas++;

        if(priesuatsiradimolaikas >=1)
        {
            enemies.push_back(Enemy(&enemyTex, window.getSize()));
            priesuatsiradimolaikas = 0;
        }
        }

        for (size_t i=0;i<enemies.size();i++)
        {
            enemies[i].shape.move(-5.f, 0.f);

            if(enemies[i].shape.getPosition().x <= 0 - enemies[i].shape.getGlobalBounds().width)
            {
                enemies.erase(enemies.begin() + i);
                break;
            }
            if (enemies[i].shape.getGlobalBounds().intersects(player.shape.getGlobalBounds()))
            {
                enemies.erase(enemies.begin() + i);
                player.Gyvybes--;
                if(player.Gyvybes == 0)
                {
                    music.stop();
                    if(score>5000) samba.play();
                    goto rip;
                }
                if(player.Gyvybes == 1)
                    {
                        soundubs.play();
                    }
                break;
            }
        }

        scoreText.setString("Taskai: "+ std::to_string(score));
        gameover.setString(std::to_string(score));

        window.clear();

        window.draw(sprite);

        if(score==1000)
        {
            for(size_t i = 0; i < airinas.size(); i++)
            {
                window.draw(airinas[i].shape);
            }
        }

        if(score==2000)
        {
            for(size_t i = 0; i < cinas.size(); i++)
            {
                window.draw(cinas[i].shape);
            }
        }

        if(score==3005)
        {
            for(size_t i = 0; i < kopustas.size(); i++)
            {
                window.draw(kopustas[i].shape);
            }
        }

        if(score==3010)
        {
            for(size_t i = 0; i < kava.size(); i++)
            {
                window.draw(kava[i].shape);
            }
        }

        if(score==3015)
        {
            for(size_t i = 0; i < morkos.size(); i++)
            {
                window.draw(morkos[i].shape);
            }
        }

        if(score==3020)
        {
            for(size_t i = 0; i < cesnakas.size(); i++)
            {
                window.draw(cesnakas[i].shape);
            }
        }

        if(score==3025)
        {
            for(size_t i = 0; i < svogunas.size(); i++)
            {
                window.draw(svogunas[i].shape);
            }
        }

        if(score>=3000 && score<=3030)
        {
            for(size_t i = 0; i < ramonas.size(); i++)
            {
                window.draw(ramonas[i].shape);
            }
        }

        if(score==4000)
        {
            for(size_t i = 0; i < dudu.size(); i++)
            {
                window.draw(dudu[i].shape);
            }
        }
        if(score==4000)
        {
            for(size_t i = 0; i < ostapenko.size(); i++)
            {
                window.draw(ostapenko[i].shape);
            }
        }

        window.draw(player.shape);

        for (size_t i=0; i<player.bullets.size(); i++)
        {
            window.draw(player.bullets[i].shape);
        }

        for (size_t i=0; i<lazeris.size(); i++ && score>4000)
        {
            if(Mouse::isButtonPressed(Mouse::Right))
            window.draw(lazeris[i].shape);
        }

        for (size_t i=0; i<enemies.size(); i++)
        {
            window.draw(enemies[i].shape);
        }
        window.draw(scoreText);
        window.draw(hpText);
        window.display();

    }
    rip:
        {
            music.stop();
            sowhat.stop();
            crazydream.stop();
            loveisagame.stop();
            netsky.stop();
        if(!Keyboard::isKeyPressed(Keyboard::F))
            if(score<=4000){
            butyrkamusic.play();
            }
        while(!Keyboard::isKeyPressed(Keyboard::F))
            {
                if(score<=4000){
            window.draw(outrosprite);
                }
                if(score>4000){
            window.draw(outro2sprite);
                }
            window.draw(gameover);
            window.display();
            _sleep(100);
            if(Keyboard::isKeyPressed(Keyboard::Escape))
            {
                window.close();
                samba.stop();
                butyrkamusic.stop();
                soundubs.stop();
                }

            if(Keyboard::isKeyPressed(Keyboard::F))
            {
                samba.stop();
            butyrkamusic.stop();
            soundubs.stop();
            pradzia=1;
            goto zaidimas;
            }

        }
    }
    return 0;
}


