#pragma once

#undef VENDOR_ID
#undef PRODUCT_ID
#undef MANUFACTURER
#undef PRODUCT
#undef DESCRIPTION

#define VENDOR_ID 0x05ac
#define PRODUCT_ID 0x0221
#define MANUFACTURER SebSemmi
#define PRODUCT KBD75v2
#define DESCRIPTION a KBD75v2 with macOS ISO-DE Layout

/* turn off RGB when computer sleeps */
#ifdef RGB_DI_PIN
#define RGBLIGHT_SLEEP
#endif
