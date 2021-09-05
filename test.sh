#!/bin/bash
ARG="               -552	60	-681	671	-828             "
./push_swap $ARG | ./checker_linux $ARG
./push_swap $ARG
