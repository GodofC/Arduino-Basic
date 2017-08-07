/***********************************************************************************************************************
 *Author: HieuPM
 *Date Modifed: 7/27/2017 10h25
 *Name: Arduino_Basic_HieuPM_ledMatrix
 **********************************************************************************************************************/
flashing maker on the ledMatrix screen!


/***********************************************************************************************************************
*Function 1
***********************************************************************************************************************/
/*
*Function {void} cordinate
*@Brief Turn on the specific led locate in the cordinate made of row and column number and turn it off shortly
*@Para  row: row'number where the led located
        col: column'number where the led located
*@Return [none]
*/
void cordinate(uint8_t row, uint8_t col);
/*
/***********************************************************************************************************************
*Function 2
***********************************************************************************************************************/
*Function {void} dicordinate
*@Brief Turn off the specific led locate in the cordinate made of row and column number;
*@Para  row: row'number where the led located
        col: column'number where the led located
*@Return [none]
*/
void dicordinate(uint8_t row, uint8_t col);