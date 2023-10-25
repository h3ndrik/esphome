import esphome.config_validation as cv
import esphome.codegen as cg
from esphome.const import CONF_ID, CONF_MODE
from esphome.components import vu_meter, esp32

CODEOWNERS = ["@h3ndrik"]
DEPENDENCIES = ["i2s_audio"]

CONF_DEVICE = "i2s_device"

CONFIG_SCHEMA = cv.Schema({
  cv.Required(CONF_DEVICE): cv.string,
}).extend(cv.COMPONENT_SCHEMA)



async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)

    cg.add(var.set_my_required_key(config[CONF_DEVICE]))
