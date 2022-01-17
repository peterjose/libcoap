/**
 * @file custom_scanner.h
 * @author Peter Jose
 * @brief 
 * @version 0.1
 * @date 2022-01-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _CUSTOM_SCANNER_H_
#define _CUSTOM_SCANNER_H_

int custom_client_scanner_fn(char uri_str[],char outputfile_name[], int timeout, int *outputFlag);

int custom_client_fn(int argc, char *argv[]);

#endif /* _CUSTOM_SCANNER_H_ */