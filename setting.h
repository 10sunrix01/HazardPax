// ====================================================================================================================================
// ======== [Other not so exciting stuff :)] =================================================================================================================
// ====================================================================================================================================

/*** Created by: 
 *     ______   __  __   __   __   ______   __   __  __          ______   ______   ______  ______   __  __   ______   ______   ______  
 *    /\  ___\ /\ \/\ \ /\ "-.\ \ /\  == \ /\ \ /\_\_\_\        /\___  \ /\  __ \ /\  == \/\  ___\ /\ \_\ \ /\  __ \ /\  ___\ /\__  _\ 
 *    \ \___  \\ \ \_\ \\ \ \-.  \\ \  __< \ \ \\/_/\_\/_       \/_/  /__\ \  __ \\ \  _-/\ \ \____\ \  __ \\ \  __ \\ \___  \\/_/\ \/ 
 *     \/\_____\\ \_____\\ \_\\"\_\\ \_\ \_\\ \_\ /\_\/\_\    &   /\_____\\ \_\ \_\\ \_\   \ \_____\\ \_\ \_\\ \_\ \_\\/\_____\  \ \_\ 
 *      \/_____/ \/_____/ \/_/ \/_/ \/_/ /_/ \/_/ \/_/\/_/        \/_____/ \/_/\/_/ \/_/    \/_____/ \/_/\/_/ \/_/\/_/ \/_____/   \/_/ 
 *                                                                                                                                     
 */
// COMPILE: gcc -o hazard main.c
//
// ====================================================================================================================================
//=========================
#define normal  "\x1B[0m"
#define red  "\x1B[31m"
#define green  "\x1B[32m"
#define yellow  "\x1B[33m"
#define blue  "\x1B[34m"
#define purple  "\x1B[35m"
#define cyan  "\x1B[36m"
#define white  "\x1B[37m"
#define red  "\x1B[31m"

// ========================

void show_help(void) /* The help menu */
{
  system("clear");

  printf("\t%s===============================================\n%s", red, normal);
  printf("\t\t%s _   _                        _ %s\n", red, normal);
  printf("\t\t%s| | | |                      | |%s\n", red, normal);
  printf("\t\t%s| |_| | __ _ ______ _ _ __ __| |\n%s", red, normal);
  printf("\t\t%s|  _  |/ _` |_  / _` | '__/ _` |\n%s", red, normal);
  printf("\t\t%s| | | | (_| |/ / (_| | | | (_| |\n%s", cyan, normal);
  printf("\t\t%s\\_| |_/\\__,_/___\\__,_|_|  \\__,_|\n%s", cyan, normal);
  printf("\t%s===============================================\n\n%s", cyan, normal);

  printf("\t\t%s[%s+%s]%s Games Avaliable/Commands:\n\n", blue, green, blue, normal);

  printf("\t\t\t%s[%s+%s]%s[Tic Tac Toe]:\n\n", blue, green, blue, normal);
  printf("\t\t\t\t%s--TTT [-pvp][-pvc]\n\n%s", green, normal);
  
  printf("\t\t\t\t%s[-pvp]%s ---> Player vs. Player\n", green, normal);
  printf("\t\t\t\t%s[-pvc]%s ---> Player vs. Computer\n\n", green, normal);

  printf("\t\t\t%s[%s+%s]%s[Guessing Number]:\n\n", blue, green, blue, normal);
  printf("\t\t\t\t%s--GN\n\n%s", green, normal);
  
  printf("\t\t\t%s[%s+%s]%s[Rock, Paper, Scissors]:\n\n", blue, green, blue, normal);
  printf("\t\t\t\t%s--RPS\n\n%s", green, normal);

  printf("\t\t\t%s[%s+%s]%s[Highest Card]:\n\n", blue, green, blue, normal);
  printf("\t\t\t\t%s--CARD\n\n%s", green, normal);

}

  
