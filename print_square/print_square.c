int print_char(char);
void print_top_or_bottom(int);

void print_square(int n)
{
  int i;
  int j;

  if (n == 1)
    {
      print_char('o');
      print_char('\n');
    }

  else if (n > 1)
    {
      print_top_or_bottom(n);
      for (j = 2; j < n; j++)
	{
	  print_char('|');
	  for (i = 2; i < n; i++)
	    print_char(' ');
	  print_char('|');
	  print_char('\n');
	}
      print_top_or_bottom(n);
    }
}

void print_top_or_bottom(int n)
{
  int i;

  print_char('o');
  for (i = 2; i < n; i++)
    print_char('-');
  print_char('o');
  print_char('\n');
}
