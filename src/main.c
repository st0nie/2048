#include "utils.h"
#include <stdio.h>
#include "map.h"

int
main ()
{
  while (1)
    {
      show_menu ();
      enter_menu (prompt ());
    }
}
