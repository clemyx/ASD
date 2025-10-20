#include <string>

class studente{
    public:
        void set_matricola(const std::string &nuova_matricola);
        void set_nome(const std::string &nome);
        void set_cognome(const std::string &cognome);
        void set_eta(const int &eta);
        std::string get_matricola() const;
        std::string get_nome() const;
        std::string get_cognome() const;
        int get_eta() const;
        void print_matricola();
        void print_nome();
        void print_cognome();
        void print_eta();
    private:
        std::string matricola;
        std::string nome;
        std::string cognome;
        int eta;

};