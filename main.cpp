#include <iostream>
#include <cpr/cpr.h>

int main(int argc, char* argv[]) {
    const std::string url = "http://localhost:8000/api/json/v2";

    std::string methodStr;

    if (argc <= 1) {
        methodStr = "systemInfo";
    } else {
        methodStr = argv[1];
    }

    std::string body = R"({"id":0, "jsonrpc":"2.0","method":")" + methodStr + R"(","params":[]})";

    cpr::Response r = cpr::Post(cpr::Url{url}, cpr::Body(body));

    if (r.error) {
        std::cout << "(surl) " + r.error.message << std::endl;
        return 0;
    }

    if (r.text.empty()) {
        std::cout << "(surl) server doesnt return any text in response." << std::endl;
    } else {
        std::cout << r.text << std::endl;
    }

    return 0;
}