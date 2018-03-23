//Begins

bool beg()
{

  bool good = true;

  if( !tsl.begin() ) good = false;
  if( !bmp.begin() ) good = false;

  return good;
  
}

