#include "apiClient.hpp"

#include <memory>
#include <string>

// project dependencies
#include "json.hpp"

#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "httplib.h"

using json = nlohmann::json;

// Constructor to initialize the server address
apiClient::apiClient(const std::string& serverAddress) {
    // Determine whether to use HTTP or HTTPS client
    if (serverAddress.find("https://") == 0) {
        sslClient = std::make_unique<httplib::SSLClient>(serverAddress.substr(8)); // Strip "https://"
    } else if (serverAddress.find("http://") == 0) {
        client = std::make_unique<httplib::Client>(serverAddress.substr(7)); // Strip "http://"
    } else {
        std::cerr << "Runtime Error: Invalid server address. Target must start with http:// or https://" << std::endl;
        std::exit(EXIT_FAILURE);
    }
}

void apiClient::setEndpoint(const std::string& endpoint) {
    if (!endpoint.empty() && endpoint[0] != '/') {
        std::cerr << "Runtime Error: Invalid endpoint address. Endpoint must start /" << std::endl;
        std::cerr << "Working example: --endpoint \"/printJson\"" << std::endl;
        std::exit(EXIT_FAILURE);
    } else if (endpoint.empty()) {
        this->endpoint = endpoint;
    } else {
        this->endpoint = endpoint;
    }
}

void apiClient::setParameter(const std::string& parameter) {
    this->parameter = parameter;
}

void apiClient::setPayload(const json& payload) {
    this->payload = payload;
}

std::string apiClient::sendGETRequest() const {
    const std::string requestCombined = (endpoint.empty() ? "/" : endpoint) + (parameter.empty() ? "" : parameter);

    httplib::Result res;

    if (sslClient) {
        res = sslClient->Get(requestCombined.c_str());
    } else if (client) {
        res = client->Get(requestCombined.c_str());
    } else {
        std::cout << "Neither client nor sslClient is initialized." << std::endl;
    }

    if (res) {
        if (res->status == 200) {
            return "200";
        } else {
            return "Server returned error: " + std::to_string(res->status);
        }
    }
    return "Error: " + errorToString(res.error());
}

std::string apiClient::sendPOSTRequest() const {
    const std::string requestCombined = (endpoint.empty() ? "/" : endpoint) + (parameter.empty() ? "" : parameter);

    if (endpoint.empty()) {
        return "Error: Endpoint is not set.";
    }
    if (payload.empty()) {
        return "Error: Payload is not set.";
    }

    httplib::Result res;

    if (sslClient) {
        sslClient->set_read_timeout(7, 0);
        sslClient->set_write_timeout(7, 0);
        res = sslClient->Post(requestCombined.c_str(), payload.dump(), "application/json");
    } else if (client) {
        res = client->Post(requestCombined.c_str(), payload.dump(), "application/json");
    } else {
        std::cout << "Neither client nor sslClient is initialized." << std::endl;
    }

    if (res) {
        if (res->status == 200) {
            return "200";
        } else {
            return "Server returned error: " + std::to_string(res->status);
        }
    }
    return "Error: " + errorToString(res.error());
}

std::string apiClient::errorToString(httplib::Error err) const {
    switch (err) {
        case httplib::Error::Success:
            return "Success";
        case httplib::Error::Connection:
            return "Connection error";
        case httplib::Error::BindIPAddress:
            return "Bind IP address error";
        case httplib::Error::Read:
            return "Read error";
        case httplib::Error::Write:
            return "Write error";
        case httplib::Error::ExceedRedirectCount:
            return "Exceeded redirect count";
        case httplib::Error::Canceled:
            return "Request canceled";
        case httplib::Error::SSLConnection:
            return "SSL connection error";
        case httplib::Error::SSLLoadingCerts:
            return "SSL loading certificates error";
        case httplib::Error::SSLServerVerification:
            return "SSL server verification error";
        default:
            return "Unknown error";
    }
}
