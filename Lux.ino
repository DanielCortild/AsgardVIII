void getTSL()
{

  String data = "Lux: ";

  uint16_t x = tsl.getLuminosity(TSL2561_VISIBLE);
  data += (String)(x);
  data += ";";
  uint32_t lum = tsl.getFullLuminosity();
  uint16_t ir, full;
  ir = lum >> 16;
  full = lum & 0xFFFF;
  data += (String)(ir);
  data += ";";
  data += (String)(full);
  data += ";";
  data += (String)(full - ir);
  data += ";";
  data += (String)(tsl.calculateLux(full, ir));

  saveData(data);

}

