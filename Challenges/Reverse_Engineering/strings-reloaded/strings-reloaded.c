#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>

void main(char argc, char* argv[1])
{
    char flag[100];
    char* string0 = "XudAKrls";
    char* string1 = "egZaFYcG";
    char* string2 = "wWqkYJVH";
    char* string3 = "dUaxwnUt";
    char* string4 = "UpoUnCvI";
    char* string5 = "MQQioVqY";
    char* string6 = "WQjycxNB";
    char* string7 = "tEkRuYHt";
    char* string8 = "oSHukcNU";
    char* string9 = "OXczvxpT";
    char* string10 = "Zuqwzgvm";
    char* string11 = "ucpMlSDU";
    char* string12 = "RMoJGPYF";
    char* string13 = "SYxZtSqs";
    char* string14 = "zBmqoXfB";
    char* string15 = "yFTryYcd";
    char* string16 = "rLIQsPIR";
    char* string17 = "lKzNSgCr";
    char* string18 = "BpiccWyY";
    char* string19 = "lDkgDLqX";
    char* string20 = "NogxFlGP";
    char* string21 = "hxramHBi";
    char* string22 = "TFKIIwlM";
    char* string23 = "XDSxhTgc";
    char* string24 = "dTlmUnLD";
    char* string25 = "bevZZumJ";
    char* string26 = "YseqtIKc";
    char* string27 = "McvWpENy";
    char* string28 = "aWoZloWB";
    char* string29 = "vLnsxXUy";
    char* string30 = "RFeSORtZ";
    char* string31 = "AejKuLQB";
    char* string32 = "YtPwgHCY";
    char* string33 = "pBzRMLHU";
    char* string34 = "uhcGZerv";
    char* string35 = "kYMgChHo";
    char* string36 = "xZBflKYM";
    char* string37 = "VqhkBILq";
    char* string38 = "CAemktXb";
    char* string39 = "CikNXIYR";
    char* string40 = "CNvGzweN";
    char* string41 = "qXTWqeQw";
    char* string42 = "RkjgVgWW";
    char* string43 = "RDfyYsal";
    char* string44 = "uBlujPID";
    char* string45 = "ifzIsxLz";
    char* string46 = "oRrWkeGB";
    char* string47 = "dWtiZBfR";
    char* string48 = "TpktdAPq";
    char* string49 = "aAvYLHBT";
    char* string50 = "rwWrIPar";
    char* string51 = "dMnrawUk";
    char* string52 = "LYHxTlRP";
    char* string53 = "NUbQkBsA";
    char* string54 = "rrpEuyIC";
    char* string55 = "gfpLJdpT";
    char* string56 = "zgejyJfx";
    char* string57 = "FYAXFefY";
    char* string58 = "NxUURrCi";
    char* string59 = "qYwtAjXL";
    char* string60 = "kXGSVtzH";
    char* string61 = "Udglkwhx";
    char* string62 = "rJGPfpLm";
    char* string63 = "MpvOleON";
    char* string64 = "aefTobFM";
    char* string65 = "KzaEvZAG";
    char* string66 = "FEzVStFT";
    char* string67 = "YBDIqirK";
    char* string68 = "xkcCFXha";
    char* string69 = "fmWwcIHm";
    char* string70 = "YlTlAxYn";
    char* string71 = "AJRgxCgG";
    char* string72 = "sQiAmbhW";
    char* string73 = "xmaNDmEl";
    char* string74 = "vOKiztux";
    char* string75 = "HrCPjuUM";
    char* string76 = "YcxwkIPg";
    char* string77 = "GBQfDTLZ";
    char* string78 = "tzAVUZfM";
    char* string79 = "wVkwTWVP";
    char* string80 = "QEZuhCoX";
    char* string81 = "XrhOaBLX";
    char* string82 = "leIrKsNo";
    char* string83 = "KkQylTHj";
    char* string84 = "YjtrJMNY";
    char* string85 = "OrludICG";
    char* string86 = "cPxMKzrL";
    char* string87 = "xchXKQZx";
    char* string88 = "ILnGJwaD";
    char* string89 = "wleRlpfz";
    char* string90 = "OHAJmopQ";
    char* string91 = "FHCbiaXr";
    char* string92 = "QTreTSwd";
    char* string93 = "lGRIFsiN";
    char* string94 = "hdaisqIj";
    char* string95 = "gtmHvxpD";
    char* string96 = "GsCNpVqz";
    char* string97 = "DsvdMkHC";
    char* string98 = "FKjxLaxJ";
    char* string99 = "mUYHNvmu";
    char* string100 = "zQnIEDDB";
    char* string101 = "SIfeJVJZ";
    char* string102 = "etwuQbvt";
    char* string103 = "UGMYrwVd";
    char* string104 = "NGhqQVKj";
    char* string105 = "FPeRmEnV";
    char* string106 = "nHssBfDU";
    char* string107 = "tQhkUzYF";
    char* string108 = "RWHFOezM";
    char* string109 = "lvAyoRVI";
    char* string110 = "LctjGAoo";
    char* string111 = "YjShYbrG";
    char* string112 = "eATyDmva";
    char* string113 = "iDojjwwr";
    char* string114 = "ALpgxVLP";
    char* string115 = "yWrMYlSa";
    char* string116 = "ySvXPuxm";
    char* string117 = "QZukkcGN";
    char* string118 = "MUBJqjxx";
    char* string119 = "ndOUYtyH";
    char* string120 = "SbeZwzbY";
    char* string121 = "vHrZhRLv";
    char* string122 = "YJwmFiUK";
    char* string123 = "XuelCDQy";
    char* string124 = "egTZiUhX";
    char* string125 = "cBktaYnl";
    char* string126 = "TpCxEzag";
    char* string127 = "EhLLTaaa";
    char* string128 = "ozwLQvbL";
    char* string129 = "uYDAimPb";
    char* string130 = "bpfENdBh";
    char* string131 = "wWXkGTnG";
    char* string132 = "vEIQhPHr";
    char* string133 = "TYiKAKvq";
    char* string134 = "okmVDYbZ";
    char* string135 = "UIrBESQT";
    char* string136 = "fVFvaZuq";
    char* string137 = "lAxVZgiY";
    char* string138 = "xVYYZERs";
    char* string139 = "qoUNgCnS";
    char* string140 = "gJHWSqrs";
    char* string141 = "qBcCOOEf";
    char* string142 = "wvSFDPHP";
    char* string143 = "TsmNJvvd";
    char* string144 = "oQCTKDyA";
    char* string145 = "mDezcSKF";
    char* string146 = "bKmTEKqS";
    char* string147 = "OGjCMMXN";
    char* string148 = "IQOnMHEm";
    char* string149 = "CmFhsVJh";

    strcat(flag, string4);
    strcat(flag, string61);
    strcat(flag, string123);

    int i = 0;
    unsigned char temp[SHA_DIGEST_LENGTH];
    char buf[SHA_DIGEST_LENGTH*2];
    memset(buf, 0x0, SHA_DIGEST_LENGTH*2);
    memset(temp, 0x0, SHA_DIGEST_LENGTH);
    SHA1(flag, strlen(flag), temp);
    for (i=0; i < SHA_DIGEST_LENGTH; i++)
    {
        sprintf((char*)&(buf[i*2]), "%02x", temp[i]);
    }

    printf("The SHA1 hash is: %s", buf);
}