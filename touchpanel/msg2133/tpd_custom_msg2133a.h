#ifndef TOUCHPANEL_H__
#define TOUCHPANEL_H__
 
#define TPD_CALIBRATION_MATRIX  {962,0,0,0,1600,0,0,0};
//#define TPD_HAVE_CALIBRATION
//#define TPD_HAVE_BUTTON
//#define TPD_HAVE_TREMBLE_ELIMINATION

#ifndef TPD_HAVE_BUTTON
//#define TPD_HAVE_BUTTON
#endif
#define TPD_BUTTON_HEIGH        (100)
#define TPD_KEY_COUNT           4
#define TPD_KEYS                { KEY_BACK, KEY_HOMEPAGE , KEY_MENU,KEY_BRIGHTNESSUP}
#define TPD_KEYS_DIM            {{60,850,120,TPD_BUTTON_HEIGH},{180,850,120,TPD_BUTTON_HEIGH},{300,850,120,TPD_BUTTON_HEIGH}, {420,850,120,TPD_BUTTON_HEIGH}}

#define TOUCH_ADDR_MSG20XX   (0x4C>>1)
#define TPD_I2C_NUMBER       1
//#define TP_PROXIMITY_SENSOR  
//#define TP_FIRMWARE_UPDATE
//#define TPD_X_INVERT
//#define TPD_Y_INVERT

#endif /* TOUCHPANEL_H__ */
