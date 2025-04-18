#ifndef BANK_UTILS_HPP
#define BANK_UTILS_HPP

#include <string>
#include <vector>
#include <cstdint>

#include "./customer.hpp"
#include "./account.hpp"
#include "./data_management.hpp"

std::uint64_t generate_customer_id();

std::string generate_account_number();

bool validate_customer_login(std::uint64_t customer_id, const std::string& password);

bool validate_account_login(const std::string& account_number, const std::string& account_password);

#endif
