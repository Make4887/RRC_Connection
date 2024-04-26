rm -r src/*
rm -r build/*
mkdir src
mkdir build
asn1c rrc-15.6.asn1 -D src -pdu=auto -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps

gcc -g -Isrc -I. -o build/serv main_serv.c Connection_coder.c src/*.c -lsctp -DPDU=auto -DASN_DISABLE_OER_SUPPORT
gcc -g -Isrc -I. -o build/cli main_cli.c Connection_coder.c src/*.c -lsctp -DPDU=auto -DASN_DISABLE_OER_SUPPORT

./build/serv
./build/cli