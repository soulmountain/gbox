/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */ 
#include "../../application.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * main
 */
tb_int_t main(tb_int_t argc, tb_char_t** argv)
{
    // ok?
    return gb_application_main(argc, argv, gb_application_init);
}
