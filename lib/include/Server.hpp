#pragma once

#include "SessionRoom.hpp"

class Server: public std::enable_shared_from_this<Server>
{
private:
    std::unordered_map<int, RoomShPtr> id2room;
    std::unordered_set<ConnectionShPtr> free_connections;
    tcp::acceptor acceptor_;

    void doAccept();

public:
    Server(boost::asio::io_context& io_context, const tcp::endpoint& endpoint);

    RoomShPtr createNewRoom();
    RoomShPtr getRoom(int room_id);
};