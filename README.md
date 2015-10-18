# unixsocket
unix socket practise

1. install build-essential
```shell
sudo apt-get install build-essential
```

2. a building series via these commands:
```shell
./configure

cd libfree
make

cd ../libgai
make

sudo cp libunp.a /usr/lib
sudo cp libunp.a /usr/lib64

sudo cp lib/unp.h /usr/include
sudo cp config.h /usr/include
```

3. compile sources:
```shell
cd ./intro  
gcc daytimetcpcli.c -o daytimetcpcli -lunp 
```
