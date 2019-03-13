#include <iostream>

using namespace std;

struct Firstfac : public Http::Handler {
    void onRequest(const Http::Request& req, Http::ResponseWriter response) {
        response.send(Http::Code::Ok,4);
    }
};
struct ristReverse : public Http::Handler {
    void onRequest(const Http::Request& req, Http::ResponseWriter response) {
        response.send(Http::Code::Ok,"codebyte");
    }
};
struct AlphabetS : public Http::Handler {
    void onRequest(const Http::Request& req, Http::ResponseWriter response) {
        response.send(Http::Code::Ok,"codebyte");
    }
};

int main() {
    Http::listenAndServe<Firstfac>("http://localhost/api/firstfactorial/");
    Http::listenAndServe<ristReverse>("http://localhost/api/ristreverse/");
    Http::listenAndServe<AlphabetS>("http://localhost/api/alphabetsoup/");
}
