#ifndef DATA_MANAGEMENT_HPP
#define DATA_MANAGEMENT_HPP

#include <string>
#include <vector>

#include "./customer.hpp"
#include "./account.hpp"
#include "./bank_utils.hpp"

void load_customers_data(std::vector<std::string>& customers);

void save_customer_data(const std::vector<std::string>& customers);

#endif
