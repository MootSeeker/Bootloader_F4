//===========================================================================================================
/**
 * @file   debug.h
 *
 * @brief  Brief description of the content of debug.h
 * @author Kevin Perillo, Rotronic AG (c)
 *
 * Detailed description of the content of debug.h
 * ...
 * ...
 *
 * Module abbreviation: TEM
 *
 * @date   May 24, 2022 - first implementation
 * @date   xx.xx.xxxx - Changes ...
 *
 * @todo   ...
 *
 * @test   ...
 *
 * @bug    ...
 *
 * @version 1.0
 */


#ifndef DEBUG_H
#define DEBUG_H

//...........................................................................................................
/**
 * @brief  Global release of debug information
 */
#define DEBUG_ON 1      // Global release of debug information

//...........................................................................................................
/**
 * @brief   Activate or deactivate different debug modes
 */

#ifdef DEBUG_ON

//...........................................................................................................
/**
 * @brief   Define debug port
 */

#define DEBUG_UART_ON	//Show debug message from UART

#endif

//...........................................................................................................
/**
 * @brief  Definitions for debug actions
 */
#define DEBUG_STRING_LEN_MAX           100  // Maximal length of debug character buffer
#define WELCOME_MESSAGE "-------------------------- Bootloader F4 -----------------------------"

//===========================================================================================================
//
/**
 * @brief  Global function prototypes
 *
 * Section for module-specific global function prototypes
 */

//...........................................................................................................
/**
  * @brief  Debug function: Similar to the printf command for data output via UART interface
  * @note   - Select right UART interface!
  * @param  List of parameters, same as in printf function
  * @retval none
  */
void debug_printf( const char * format, ... );

//...........................................................................................................
/**
  * @brief  Debug function: Similar to the printf command for data output via UART interface
  * @note   - Select right UART interface!
  * @note   - Without Carriage Return and Line Feed at the end
  * @param  List of parameters, same as in printf function
  * @retval none
  */
void debug_printf_without_cr_lf( const char * format, ... );

#endif /* END debug.h */
