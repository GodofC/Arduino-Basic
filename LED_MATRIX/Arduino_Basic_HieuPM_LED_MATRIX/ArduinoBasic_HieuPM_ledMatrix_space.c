#include <LED_MATRIX.h>
/***********************************************************************************************************************
*PROTOTYPE
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
*Function {void} dicordinate
*@Brief Turn off the specific led locate in the cordinate made of row and column number;
*@Para  row: row'number where the led located
        col: column'number where the led located
*@Return [none]
*/
void dicordinate(uint8_t row, uint8_t col);
/***********************************************************************************************************************
*CODE
***********************************************************************************************************************/
void setup()
{
    pinMode(ROW1, OUTPUT);
    pinMode(ROW2, OUTPUT);
    pinMode(ROW3, OUTPUT);
    pinMode(ROW4, OUTPUT);
    pinMode(ROW5, OUTPUT);
    pinMode(ROW6, OUTPUT);
    pinMode(ROW7, OUTPUT);
    pinMode(ROW8, OUTPUT);
    pinMode(COL1, OUTPUT);
    pinMode(COL2, OUTPUT);
    pinMode(COL3, OUTPUT);
    pinMode(COL4, OUTPUT);
    pinMode(COL5, OUTPUT);
    pinMode(COL6, OUTPUT);
    pinMode(COL7, OUTPUT);
    pinMode(COL8, OUTPUT);
}
void loop()
{ 
    uint8_t i,j;
    uint16_t k;
    uint32_t resultHi;
    uint32_t resultLo;
    uint32_t symbolHigh;
    uint32_t symbolLow;
    for( i=1; i <= 64; i++)
    {
        if(i%8 != 0)
        {
            dicordinate((i-1)/8+1,i%8+8);
        }
        else
        {
            dicordinate((i-1)/8+1,16);
        }
    }
    for (j = 0; j < 5; j++)
    {
        symbolHigh = makerHanoi[0][j];
        symbolLow = makerHanoi[1][j];
        /* flashing the character sequence 1000 time */
        for(k=1;k<1000;k++)
        {
            /*scan the whole 64 bit, whenever a bit == 1 flashing that led */
            for(i=1;i<=64;i++)
            {
                if(i<=32)
                {
                    resultHi = symbolHigh & 0x80000000;
                    resultHi = resultHi >> 31;
                    if(resultHi == 1)
                    {
                        if(i%8 != 0)
                        {
                            cordinate((i-1)/8+1,i%8+8); 
                        }
                        else
                        {
                            cordinate((i-1)/8+1,16);
                        }
                    }
                    symbolHigh = symbolHigh << 1;
                }
                else
                {
                    resultLo = symbolLow & 0x80000000;
                    resultLo = resultLo >>31;
                    if(resultLo == 1)
                    {
                        if(i%8 != 0)
                        {
                            cordinate((i-1)/8+1,i%8+8); 
                        }
                        else
                        {
                            cordinate((i-1)/8+1,16);
                        }
                    }   
                    symbolLow = symbolLow << 1;
                }
            }   
        }
        delay(500);
    }
}
void cordinate(uint8_t row, uint8_t col)
{
    digitalWrite(row,HIGH);
    digitalWrite(col,LOW);
    delay(10);
    digitalWrite(row,LOW);
    digitalWrite(col,HIGH);
}
void dicordinate(uint8_t row, uint8_t col)
{
    digitalWrite(row,LOW);
    digitalWrite(col,HIGH);
}