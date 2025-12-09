```
arduino-cli core update-index
arduino-cli core install esp32:esp32

arduino-cli compile --fqbn esp32:esp32:esp32s3 --build-property "board_build.arduino.usb_cdc_on_boot=1" --build-property "board_build.arduino.usb_msc=0" --build-property "board_build.arduino.upload_mode=usb" ./esp32.ino
arduino-cli upload -p COM4 --fqbn esp32:esp32:esp32s3 ./esp32.ino
```
