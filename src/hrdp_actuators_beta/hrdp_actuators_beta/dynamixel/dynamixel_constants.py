# VELOCITY CONSTANTS #

PI = 3.14

MAX_LIN_VEL = 0.22
MAX_ANG_VEL = 2.84

LINEAR_VEL_STEP_SIZE = 0.01
ANGULAR_VEL_STEP_SIZE = 0.1

# MODE CONSTANTS #

NEUTRAL = 0
FRONT = 1
BACK = 2
ROTATE_CCW = 3
ROTATE_CW = 4

mode_hasher = {
    0 : 'NEUTRAL',
    1 : 'FRONT',
    2 : 'BACK',
    3 : 'ROTATE_CCW',
    4 : 'ROTATE_CW'
}