#pragma once

#ifdef USE_ESP32_FRAMEWORK_ARDUINO

#include "../i2s_audio.h"

#include <driver/i2s.h>

#include "esphome/core/component.h"
#include "esphome/core/helpers.h"

#include <Audio.h>

namespace esphome {
namespace i2s_audio {


class I2SAudioVUMeter : public Component {
 public:
  void setup() override;
  float get_setup_priority() const override { return esphome::setup_priority::LATE; }

  void loop() override;

  void dump_config() override;

  void set_my_required_key(std::string device) { this->device_ = device; }
 protected:
  std::string device_;

};

}  // namespace i2s_audio
}  // namespace esphome

#endif  // USE_ESP32_FRAMEWORK_ARDUINO
