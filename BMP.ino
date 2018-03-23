void getBMP()
{

  saveData((String)"BMP: " + bmp.readTemperature() + "-" + bmp.readPressure() + "-" + bmp.readAltitude(1033.25));
  
}

