#include "utils.h"
#include "game.h"

void
enter_menu (int n)
{
  switch (n)
    {
    case 1:
      game_start_new ();
      break;
    case 2:
      game_start_continue ();
      break;
    }
}
