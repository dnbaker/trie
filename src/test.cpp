#include "fxit.h"
#include "SuRF/include/surf.hpp"

int main(int argc, char *argv[]) {
    {
       fx::FxFile ff(argc == 1 ? "z2.fa": (const char *)argv[1]);
       surf::SuRF(ff.sbegin(), ff.send());
    }
}
