#ifndef _TEMPO_H_
#define _TEMPO_H_
class Tempo {
    private:
        short hora;
        short min;
        short segundo;
    public:
        void setHora(short h);
        void setMin(short m);
        void setSegundo(short s);
        short getHora();
        short getMin();
        short getSegundo();

        Tempo();
        Tempo(short h, short m, short s);
        Tempo operator+(const Tempo &t) const;
};
#endif