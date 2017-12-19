#pragma once
#include "UdpSocket.hpp"
#include "WifiStation.hpp"
#include "utilities.h"
#include "credentials.hpp"          // Saved ssid and password
#include <freertos/event_groups.h>

class UdpServer : public WifiStation
{
public:

    // Constructor
    UdpServer(port_t Port=UDP_DEFAULT_PORT);

    // Initialize wifi
    void Initialize();
        
    // Initializes socket
    void InitializeSocket();

    // Wait for packet
    void WaitForPacket(bool block=true);

private:

    // Socket set up as a server, that listens for requests
    UdpSocket mServerSocket;
};