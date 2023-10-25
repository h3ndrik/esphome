#include "i2s_audio_vu_meter.h"

#ifdef USE_ESP32_FRAMEWORK_ARDUINO

#include "esphome/core/log.h"

namespace esphome {
namespace i2s_audio {

static const char *const TAG = "audio";


void I2SAudioVUMeter::setup() {
  ESP_LOGCONFIG(TAG, "Setting up Audio VU Meter...");
}

void I2SAudioVUMeter::loop() {
  
}

void I2SAudioVUMeter::dump_config() {
  ESP_LOGCONFIG(TAG, "  Device: %s", this->device_);
}

}  // namespace i2s_audio
}  // namespace esphome

#endif  // USE_ESP32_FRAMEWORK_ARDUINO
