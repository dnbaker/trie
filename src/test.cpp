#include "fxit.h"
#include "SuRF/include/surf.hpp"

int main(int argc, char *argv[]) {
    fx::FxFile ff(argc == 1 ? "z2.fa": (const char *)argv[1]);
    std::vector<std::string> strs;
    for(const auto &s: ff) 
        strs.push_back(s.s_);
    std::sort(strs.begin(), strs.end());
    surf::SuRF sup(strs);
}
