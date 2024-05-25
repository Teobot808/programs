#include <iostream>
#include <string> // for string and to_string()

int window_size[2] = {1800, 1000};    //  the first value is x and the second is y

std::string batt_stat = "batt_statt: ";
std::string avg_vel = "AVG_VEL: ";
std::string ampere = "Actual_AMP: ";
std::string velocity = "Actual_VEL: ";
std::string exrunremain = "ExRUNREMAIN: ";
std::string temperature = "Temp: ";
std::string time_remain = "Time_remain: ";
std::string com_type = "COM_type: ";

std::string prefix[8] = {"batt_statt: ", "AVG_VEL: ", "Actual_AMP: ", "Actual_VEL: ", "ExRUNREMAIN: ", "Temp: ", "Time_remain: ", "COM_type: "};



int batt_stat_pos[2] = {(window_size[0] / 6),( window_size[1]/5)};
int avg_vel_pos[2] = {(window_size[0] / 6),(( window_size[1]/5)*2)};
int ampere_pos[2] = {(window_size[0] / 6),(( window_size[1]/5)*3)};
int velocity_pos[2] = {(window_size[0] / 2),(( window_size[1]/2)*1)};
int exrunremain_pos[2] = {((window_size[0]/6)*5), ((window_size[1]/5)*1)};
int temperature_pos[2] = {((window_size[0]/6)*5), ((window_size[1]/5)*2)};    // 300 200
int time_remain_pos[2] = {((window_size[0]/6)*5), ((window_size[1]/5)*3)};
int com_type_pos[2] = {((window_size[0]/6)*5), ((window_size[1]/5)*4)};

int pos[8][2] = {{30, 30}, {30, 50}, {30, 70}, {30, 90}, {30, 110}, {(window_size[0]/6), (window_size[1]/5)}, {30, 150}, {30, 170}};

int count = 8;   //number of things to be displayed


