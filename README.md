## Features

- Sign in, sign up, change password
- Play alone
- Play PVP on the same network
- Ranking system based on point

## Tech

Project sử dụng:
- C : Server
- C++: CLient
- QML: FrontEnd 
- Qt Framework 
- MySQL: Database

## Installation Qt

```sh
sudo apt install qt5-default
```

## Run Project

#### _1. Server

##### 1.1.MYSQL Server, library Dev MySQL 
```sh
sudo apt install mysql-server libmysqlclient-dev
```

##### 1.2. Import database.sql

##### 1.3. Run Server

```sh
cd server/
make
./server <PORT>
```

#### _2. Client

##### 2.1. Install Lib GL 

```sh
sudo apt install libgl1-mesa-dev
```

##### 2.2. Run Client

```sh
cd client/
qmake
make install
./client <ip server> <port>
```





