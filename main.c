/**
  ****************************************************************************
  * @file    main.c
  * @author  ELMETHENNI BELLIL Mohamed Yassine
  * @brief   Macros 
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
 
#define INTEL 1 // here we give INTEL 1 because we will work just on it  we will not use other define NOINTEL, we can call NOINTEL with changing INTEL 0 in plce of 1 


#define ADDMUL(a,b) (INTEL)?(a+b):(a*b) // here we will take the decision to do addition or multiplication from the state of INTEL (1 or 0)
#define MAXmin(a,b) (INTEL)?((a<b)? a:b):((a>b)? a:b) // here we will take the decision to choose one of the comparisation after looking for the state of INTEL (1 or 0)
/* Private function prototypes -----------------------------------------------*/
static int sum(int var1,int var2);
static int mul( int var1, int var2);
#define X 10
#define Y 3
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  int sommulti = ADDMUL(X,Y);// we call our Macros and we add our sets X and Y
  int comparaison = MAXmin(X,Y); 
  
  while(1)
  {
  }
}


/**************************************END OF FILE**************************************/
