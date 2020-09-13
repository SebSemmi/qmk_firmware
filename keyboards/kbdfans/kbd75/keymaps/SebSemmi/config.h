#pragma once

#undef VENDOR_ID
#undef PRODUCT_ID

#define VENDOR_ID 0x05ac
#define PRODUCT_ID 0x0221

/* turn off RGB when computer sleeps */
#ifdef RGB_DI_PIN
#define RGBLIGHT_SLEEP
#endif
