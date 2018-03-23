void getTSL()
{

  uint16_t x = tsl.getLuminosity(TSL2561_VISIBLE);
  saveData((String)(x, DEC));
  uint32_t lum = tsl.getFullLuminosity();
  uint16_t ir, full;
  ir = lum >> 16;
  full = lum & 0xFFFF;
  saveData((String)"IR: " + ir);
  saveData((String)"Full: " + full);
  saveData((String)"Visible: " + (full - ir));
  saveData((String)"Lux: " + tsl.calculateLux(full, ir));

}

