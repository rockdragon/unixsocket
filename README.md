# unixsocket
unix socket practise

* Preparation
```shell
sudo apt-get install build-essential
```

* Installation
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

* Compilation
```shell
cd ./intro  
gcc daytimetcpcli.c -o daytimetcpcli -lunp 
```
* References
<http://blog.csdn.net/a649518776/article/details/6724121>
