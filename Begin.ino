//Begins

bool beg()
{

  bool good = true;

  if( !tsl.begin() ) good = false;
  if( !bmp.begin() ) good = false;
  SD.begin(chipSelect);
  if( !card.init(SPI_HALF_SPEED, chipSelect) ) good = false;

  return good;
  
}

