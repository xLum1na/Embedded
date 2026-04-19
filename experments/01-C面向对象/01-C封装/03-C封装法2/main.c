#include "servo.h"
#include "stdio.h"


int main() 
{
    servo_dev_t servo1 = NULL;
    timer_handle_t timer_handle = NULL;

    servo_create(&servo1);
    const servo_config_t cfg = {0};
    servo1->servo_ops->init(servo1, &cfg);
    servo1->servo_ops->set_target_angle(servo1, 100);
    printf("target angle = [%f]\r\n", servo1->target_angle);

    servo1->current_angle = 19;
    float current_angle;
    servo1->servo_ops->get_current_angle(servo1, &current_angle);
    printf("current angle = [%f]\r\n", current_angle);



    return 0;
}

