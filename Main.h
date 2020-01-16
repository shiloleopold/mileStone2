//
// Created by yanivmadmon on 1/17/20.
//

#ifndef MILESTONE2_MAIN_H
#define MILESTONE2_MAIN_H
#include "server_side.h"
#include "MySerialServer.h"
#include "ClientHandler.h"

#include <iterator>
#include <random>

#include "MySerialServer.h"
#include "StringReverser.h"
#include "FileCacheManager.h"
#include "CacheManager.h"
#include "MyTestClientHandler.h"


using namespace std;

namespace boot {
    template<typename S>

    class Main {
        int main(int argc, char* args[]){
            MySerialServer *server  =  new MySerialServer();
            ClientHandler *client = new MyTestClientHandler();
            Solver<string, string> *solver = new StringReverser();
            CacheManager<string,string> *cache = new FileCacheManager<string,S>;
            server->open(atoi(args[0]),client);
        }
    };
};




#endif //MILESTONE2_MAIN_H