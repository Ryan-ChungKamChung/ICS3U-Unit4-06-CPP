// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program displays every possible RGB value

#include <iostream>


main() {
    // this function displays every possible RGB value
    const int MAX_VALUE = 255;
    int loop_counter1;
    int loop_counter2;
    int loop_counter3;

    // process & output
    for (loop_counter1 = 0; loop_counter1 < MAX_VALUE + 1; loop_counter1++) {
        for (loop_counter2 = 0; loop_counter2 < MAX_VALUE + 1;
             loop_counter2++) {
            for (loop_counter3 = 0; loop_counter3 < MAX_VALUE + 1;
                 loop_counter3++) {
            std::cout << "RGB(" << loop_counter1 << "," << loop_counter2
            << "," << loop_counter3 << ")" << std::endl;
            }
        }
    }
}
