#pragma once

#include <memory>
#include <string>

// project dependencies
#include "json.hpp"

#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httplib.h"

class apiClient {
public:
    explicit apiClient(const std::string& serverAddress);

    void setEndpoint(const std::string& endpoint);
    void setParameter(const std::string& parameter);
    void setPayload(const nlohmann::json& payload);

    std::string sendGETRequest() const;
    std::string sendPOSTRequest() const;

private:
    std::unique_ptr<httplib::Client> client;
    std::unique_ptr<httplib::SSLClient> sslClient;

    std::string endpoint;
    std::string parameter;
    nlohmann::json payload;

    std::string errorToString(httplib::Error err) const;
};
