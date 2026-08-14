/* TinyUSB configuration for the SPIDriver firmware (RP2040, single CDC). */
#ifndef SPIDRIVER_TUSB_CONFIG_H
#define SPIDRIVER_TUSB_CONFIG_H

/* RHPort number used for device (RP2040 native USB is port 0) */
#ifndef BOARD_TUD_RHPORT
#define BOARD_TUD_RHPORT 0
#endif

#ifndef BOARD_TUD_MAX_SPEED
#define BOARD_TUD_MAX_SPEED OPT_MODE_FULL_SPEED
#endif

#define CFG_TUD_ENABLED 1
#define CFG_TUD_MAX_SPEED BOARD_TUD_MAX_SPEED

/* CDC class only */
#define CFG_TUD_CDC 1
#define CFG_TUD_MSC 0
#define CFG_TUD_HID 0
#define CFG_TUD_MIDI 0
#define CFG_TUD_VENDOR 0

/* Bump RX so 64-byte command bursts survive a waveform redraw */
#define CFG_TUD_CDC_RX_BUFSIZE 256
#define CFG_TUD_CDC_TX_BUFSIZE 256
#define CFG_TUD_CDC_EP_BUFSIZE 64

#endif /* SPIDRIVER_TUSB_CONFIG_H */
