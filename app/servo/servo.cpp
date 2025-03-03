#include "servo.hpp"
#include <array>
#include <cassert>
#include <cmath>
#include <functional>
#include <utility>

namespace Servo {

    void Servo::set_angle(float const angle) const noexcept
    {
        this->pwm_device.set_compare_voltage(this->angle_to_voltage(angle));
    }

    void Servo::set_angle_max() const noexcept
    {
        this->pwm_device.set_compare_max();
    }

    void Servo::set_angle_min() const noexcept
    {
        this->pwm_device.set_compare_min();
    }

}; // namespace Servo