#ifndef CPPCOURSE_TEHTAVA1_09_H
#define CPPCOURSE_TEHTAVA1_09_H


class Ajoneuvo {
protected:
    int huippunopeus;
    int kayttoonottovuosi;
    double paino;

public:
    Ajoneuvo(int huippunopeus, int kayttoonottovuosi, double paino)
        : huippunopeus(huippunopeus),
          kayttoonottovuosi(kayttoonottovuosi),
          paino(paino) {}
};

class Auto : public Ajoneuvo {
protected:
    int ovien_lkm;
    int renkaiden_lkm;

public:
    Auto(int huippunopeus, int kayttoonottovuosi, double paino,
         int ovien_lkm, int renkaiden_lkm)
        : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino),
          ovien_lkm(ovien_lkm),
          renkaiden_lkm(renkaiden_lkm) {}
};

class Henkiloauto : public Auto {
private:
    int matkustajien_maksimi;

public:
    Henkiloauto(int huippunopeus, int kayttoonottovuosi, double paino,
                int ovien_lkm, int renkaiden_lkm, int matkustajien_maksimi)
        : Auto(huippunopeus, kayttoonottovuosi, paino, ovien_lkm, renkaiden_lkm),
          matkustajien_maksimi(matkustajien_maksimi) {}
};

class KuormaAuto : public Auto {
private:
    double kuorman_maksimipaino;

public:
    KuormaAuto(int huippunopeus, int kayttoonottovuosi, double paino,
               int ovien_lkm, int renkaiden_lkm, double kuorman_maksimipaino)
        : Auto(huippunopeus, kayttoonottovuosi, paino, ovien_lkm, renkaiden_lkm),
          kuorman_maksimipaino(kuorman_maksimipaino) {}
};

class Lentokone : public Ajoneuvo {
private:
    double maksimilentokorkeus;

public:
    Lentokone(int huippunopeus, int kayttoonottovuosi, double paino,
              double maksimilentokorkeus)
        : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino),
          maksimilentokorkeus(maksimilentokorkeus) {}
};

class Laiva : public Ajoneuvo {
private:
    double maksimisyvays;

public:
    Laiva(int huippunopeus, int kayttoonottovuosi, double paino,
          double maksimisyvays)
        : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino),
          maksimisyvays(maksimisyvays) {}
};



#endif //CPPCOURSE_TEHTAVA1_09_H