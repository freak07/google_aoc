/**
 * Copyright 2020-2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \file aoc-interface.h
 *
 * Autogenerated AoC interface matching AoC source code
 * associated with the following source code:
 *
 *   hash: 9314bb022fb3f993bc153de66d6c91081ebf2362
 *
 * DO NOT MODIFY THIS FILE
 *
 */

#ifndef AOC_INTERFACE_H_
#define AOC_INTERFACE_H_


#ifdef __KERNEL__
  #include <linux/kernel.h>
#else
  #include <stdint.h>
#endif


/**
 * System timer tick [hz].  All time counts will be based on tick running at this frequency.
 *
 * UUID: 6ff8a9e0249904d2059bb069dfcd5357
 */
#define AOC_TIMER_FREQUENCY 4096000


/**
 * List of supported commands.
 */
enum AOC_COMMAND {
  CMD_RING_BIND_ID = 5, /* ->  struct CMD_RING_BIND */
  CMD_SYS_VERSION_GET_ID = 6, /* ->  struct CMD_SYS_VERSION_GET */
  CMD_SYS_BANNER_ID = 7, /* ->  struct CMD_CORE_GENERIC */
  CMD_SYS_STATS_TOT_ID = 8, /* ->  struct CMD_SYS_STATS_TOT */
  CMD_SYS_STATS_INFO_GET_ID = 9, /* ->  struct CMD_SYS_STATS_INFO_GET */
  CMD_SYS_STATS_TIMED_GET_ID = 10, /* ->  struct CMD_SYS_STATS_TIMED_GET */
  CMD_SYS_STATS_DATA_GET_ID = 11, /* ->  struct CMD_SYS_STATS_DATA_GET */
  CMD_SYS_STATS_ID = 12, /* ->  struct CMD_CORE_GENERIC */
  CMD_SYS_LOGIC_TRACE_ENABLE_ID = 13, /* ->  struct CMD_ENABLE */
  CMD_SYS_LOGIC_TRACE_SCHEME_SET_ID = 14, /* ->  struct CMD_CORE_LOGIC_TRACE_SCHEME */
  CMD_SYS_LOGIC_TRACE_SCHEME_GET_ID = 15, /* ->  struct CMD_CORE_LOGIC_TRACE_SCHEME */
  CMD_DBG_WATCHDOG_TRIGGER_ID = 16, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_TREE_ID = 17, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_INFO_ID = 18, /* ->  struct CMD_DBG_INFO */
  CMD_DBG_HEAP_ID = 19, /* ->  struct CMD_DBG_HEAP */
  CMD_DBG_LEVEL_GET_ID = 21, /* ->  struct CMD_DBG_LEVEL_GET */
  CMD_DBG_CONTROLLERS_ID = 22, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_FILTERS_ID = 23, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_PIPES_ID = 24, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_POOLS_ID = 25, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_RINGS_ID = 26, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_IPCS_ID = 27, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_FSM_ID = 28, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_TASKS_ID = 29, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_POWERMAN_ID = 30, /* ->  struct CMD_DBG_POWERMAN */
  CMD_DBG_TIMER_ID = 31, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_LOG_ID = 32, /* ->  struct CMD_DBG_LOG */
  CMD_DBG_TIMESTAMP_ID = 33, /* ->  struct CMD_ENABLE */
  CMD_DBG_INTCNTRL_ID = 34, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_IPC_SPACES_ID = 35, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_IPC_CHANNELS_ID = 36, /* ->  struct CMD_CORE_GENERIC */
  CMD_DBG_MEM_SET_ID = 37, /* ->  struct CMD_DBG_MEM_SET */
  CMD_DBG_MEM_DUMP_ID = 38, /* ->  struct CMD_DBG_MEM_DUMP */
  CMD_IPC_NOTIF_ENABLE_ID = 100, /* ->  struct CMD_IPC_NOTIF_ENABLE */
  CMD_AUDIO_OUTPUT_SINK_ID = 200, /* ->  struct CMD_AUDIO_OUTPUT_SINK */
  CMD_AUDIO_OUTPUT_SOURCE_ID = 201, /* ->  struct CMD_AUDIO_OUTPUT_SOURCE */
  CMD_AUDIO_OUTPUT_BIND_ID = 202, /* ->  struct CMD_AUDIO_OUTPUT_BIND */
  CMD_AUDIO_INPUT_MIC_POWER_ON_ID = 203, /* ->  struct CMD_AUDIO_INPUT_MIC_POWER_ON */
  CMD_AUDIO_OUTPUT_WAV_PLAYBACK_ID = 203, /* ->  struct CMD_AUDIO_OUTPUT_WAV_PLAYBACK */
  CMD_AUDIO_INPUT_MIC_POWER_OFF_ID = 204, /* ->  struct CMD_AUDIO_INPUT_MIC_POWER_OFF */
  CMD_AUDIO_OUTPUT_GAIN_ID = 204, /* ->  struct CMD_AUDIO_OUTPUT_GAIN */
  CMD_AUDIO_INPUT_MIC_GET_POWER_STATE_ID = 205, /* ->  struct CMD_AUDIO_INPUT_MIC_GET_POWER_STATE */
  CMD_AUDIO_OUTPUT_FX_EQ_ID = 205, /* ->  struct CMD_AUDIO_OUTPUT_FX_EQ */
  CMD_AUDIO_INPUT_HOTWORD_ENABLE_AEC_ID = 206, /* ->  struct CMD_HDR */
  CMD_AUDIO_OUTPUT_EP_SETUP_ID = 206, /* ->  struct CMD_AUDIO_OUTPUT_EP_SETUP */
  CMD_AUDIO_INPUT_HOTWORD_DISABLE_AEC_ID = 207, /* ->  struct CMD_HDR */
  CMD_AUDIO_OUTPUT_DECODE_ID = 207, /* ->  struct CMD_AUDIO_OUTPUT_DECODE */
  CMD_AUDIO_OUTPUT_AEC_NOTIFY_ID = 208, /* ->  struct CMD_AUDIO_OUTPUT_AEC_NOTIFY */
  CMD_AUDIO_OUTPUT_SET_PARAMETER_ID = 209, /* ->  struct CMD_AUDIO_OUTPUT_SET_PARAMETER */
  CMD_AUDIO_INPUT_MODEM_INPUT_START_ID = 210, /* ->  struct CMD_HDR */
  CMD_AUDIO_OUTPUT_SET_PARAMETER_BULK_ID = 210, /* ->  struct CMD_AUDIO_OUTPUT_SET_PARAMETER_BULK */
  CMD_AUDIO_INPUT_MODEM_INPUT_STOP_ID = 211, /* ->  struct CMD_HDR */
  CMD_AUDIO_OUTPUT_GET_PARAMETER_ID = 211, /* ->  struct CMD_AUDIO_OUTPUT_GET_PARAMETER */
  CMD_AUDIO_OUTPUT_GET_PARAMETER_BULK_ID = 212, /* ->  struct CMD_AUDIO_OUTPUT_GET_PARAMETER_BULK */
  CMD_AUDIO_OUTPUT_SET_GET_PARAM_BULK_ID = 213, /* ->  struct CMD_AUDIO_OUTPUT_SET_GET_PARAM_BULK */
  CMD_AUDIO_INPUT_BT_CAPTURE_START_ID = 214, /* ->  struct CMD_HDR */
  CMD_AUDIO_OUTPUT_GET_BLOCKS_ID = 214, /* ->  struct CMD_AUDIO_OUTPUT_GET_BLOCKS */
  CMD_AUDIO_INPUT_BT_CAPTURE_STOP_ID = 215, /* ->  struct CMD_HDR */
  CMD_AUDIO_OUTPUT_GET_MODULES_ID = 215, /* ->  struct CMD_AUDIO_OUTPUT_GET_MODULES */
  CMD_AUDIO_INPUT_BT_DECODER_START_ID = 216, /* ->  struct CMD_HDR */
  CMD_AUDIO_OUTPUT_RESYNC_AUDIO_SINK_ID = 216, /* ->  struct CMD_AUDIO_OUTPUT_RESYNC_AUDIO_SINK */
  CMD_AUDIO_INPUT_BT_DECODER_STOP_ID = 217, /* ->  struct CMD_HDR */
  CMD_AUDIO_INPUT_BT_DECODER_ENABLE_OUTPUT_ID = 218, /* ->  struct CMD_AUDIO_INPUT_BT_ENABLE_OUTPUT */
  CMD_AUDIO_INPUT_BT_DECODER_DISABLE_OUTPUT_ID = 219, /* ->  struct CMD_AUDIO_INPUT_BT_DISABLE_OUTPUT */
  CMD_AUDIO_INPUT_IN_CALL_SELECT_START_ID = 220, /* ->  struct CMD_HDR */
  CMD_AUDIO_INPUT_IN_CALL_SELECT_STOP_ID = 221, /* ->  struct CMD_HDR */
  CMD_AUDIO_INPUT_IN_CALL_SELECT_ENABLE_OUTPUT_ID = 222, /* ->  struct CMD_AUDIO_INPUT_IN_CALL_SELECT_ENABLE_OUTPUT */
  CMD_AUDIO_INPUT_IN_CALL_SELECT_DISABLE_OUTPUT_ID = 223, /* ->  struct CMD_AUDIO_INPUT_IN_CALL_SELECT_DISABLE_OUTPUT */
  CMD_AUDIO_INPUT_MIC_RECORD_AP_SET_PARAMS_ID = 224, /* ->  struct CMD_AUDIO_INPUT_MIC_RECORD_AP_SET_PARAMS */
  CMD_AUDIO_INPUT_MIC_RECORD_AP_START_ID = 225, /* ->  struct CMD_HDR */
  CMD_AUDIO_INPUT_MIC_RECORD_AP_STOP_ID = 226, /* ->  struct CMD_HDR */
  CMD_AUDIO_OUTPUT_CFG_HAPTICS_ID = 226, /* ->  struct CMD_AUDIO_OUTPUT_CFG_HAPTICS */
  CMD_AUDIO_INPUT_HOTWORD_START_ID = 227, /* ->  struct CMD_HDR */
  CMD_AUDIO_OUTPUT_CFG_SIGGEN_ID = 227, /* ->  struct CMD_AUDIO_OUTPUT_CFG_SIGGEN */
  CMD_AUDIO_INPUT_HOTWORD_STOP_ID = 228, /* ->  struct CMD_HDR */
  CMD_AUDIO_INPUT_MIC_LOOPBACK_START_ID = 229, /* ->  struct CMD_AUDIO_INPUT_ENABLE_MIC_LOOPBACK */
  CMD_AUDIO_INPUT_MIC_LOOPBACK_STOP_ID = 230, /* ->  struct CMD_HDR */
};

/**
 * List of available notifications.
 */
enum AOC_NOTIFICATION {
  NOTIF_AUDIO_INPUT_AP_MIC_RECORD_DATA_AVAILABLE_ID = 11, /* ->  struct NOTIF */
};

enum DATA_TYPE {
  DATA_TYPE_CMD = 0,
  DATA_TYPE_NOTIF,
  DATA_TYPE_SIGNAL,
  DATA_TYPE_MSG,
};

struct CONTAINER_HDR {
  uint8_t type; /* For valid values, refer to "enum DATA_TYPE" */
  uint8_t cntr;
  uint16_t len;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_INPUT_HOTWORD_ENABLE_AEC_ID, UUID: 182253d37f2c1abf0b3d7e7d663b6a15
 *   CMD_AUDIO_INPUT_HOTWORD_DISABLE_AEC_ID, UUID: 60d38364d6e3a56db52b4ae6ef3330ee
 *   CMD_AUDIO_INPUT_MODEM_INPUT_START_ID, UUID: 0a2c8d91a294b462dcdac931b7d0e8f5
 *   CMD_AUDIO_INPUT_MODEM_INPUT_STOP_ID, UUID: a1ab309b642fe763e33e7277cac596a1
 *   CMD_AUDIO_INPUT_BT_CAPTURE_START_ID, UUID: 05d5076beb3f512e815d86d738a63a87
 *   CMD_AUDIO_INPUT_BT_CAPTURE_STOP_ID, UUID: 0ef0b4f3c977d0977c5fbc357f08f8ef
 *   CMD_AUDIO_INPUT_BT_DECODER_START_ID, UUID: a611b2c4ab2970528b30a3c0e70a33cb
 *   CMD_AUDIO_INPUT_BT_DECODER_STOP_ID, UUID: 04ac830ab65f08085b25e64d453ba9d0
 *   CMD_AUDIO_INPUT_IN_CALL_SELECT_START_ID, UUID: dbfe4fb7b69f6258d15ea3fae0275a8b
 *   CMD_AUDIO_INPUT_IN_CALL_SELECT_STOP_ID, UUID: 5380851321b19297144c6eaf7f6978dd
 *   CMD_AUDIO_INPUT_MIC_RECORD_AP_START_ID, UUID: 8628164eb555884b4359db0d11cd6873
 *   CMD_AUDIO_INPUT_MIC_RECORD_AP_STOP_ID, UUID: 87bfb8e1ee154e195f9c06054ab0ffbc
 *   CMD_AUDIO_INPUT_HOTWORD_START_ID, UUID: 872bab980499adfc8b6e89b8ce9f083d
 *   CMD_AUDIO_INPUT_HOTWORD_STOP_ID, UUID: 90d92460104e4bc6c2d9c9a0f635b5c9
 *   CMD_AUDIO_INPUT_MIC_LOOPBACK_STOP_ID, UUID: 956c8b0572bea5028c3d287470f19f78
 */
struct CMD_HDR {
  struct CONTAINER_HDR parent;
  uint16_t id;
  int16_t reply;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_SYS_BANNER_ID, UUID: 7f3783aedbae03854d3cb2851aa07b40
 *   CMD_SYS_STATS_ID, UUID: 6dafca1b50ff4f7aacc4006c0e104b7e
 *   CMD_DBG_WATCHDOG_TRIGGER_ID, UUID: 2fad4cb475c496c9f76c32dca4c0136a
 *   CMD_DBG_TREE_ID, UUID: da949c27a8bc2dc785655f91075aca1a
 *   CMD_DBG_CONTROLLERS_ID, UUID: 71bc548e4d11016c86ef267c16a161d9
 *   CMD_DBG_FILTERS_ID, UUID: 63cb8f092494b957fcd93039d904613f
 *   CMD_DBG_PIPES_ID, UUID: d3a52cad717826918f484ef64874d181
 *   CMD_DBG_POOLS_ID, UUID: d1c958027b2ed6f8a4bfab4e29deb01f
 *   CMD_DBG_RINGS_ID, UUID: 26ff9e044e65510775291abe87405fbc
 *   CMD_DBG_IPCS_ID, UUID: 7b9075e0318eba314f60f62fe53cda03
 *   CMD_DBG_FSM_ID, UUID: b082cbc3dd47affcbed81f2f6a8bdc26
 *   CMD_DBG_TASKS_ID, UUID: 821763f8cd27aa29b90a86ef77bb794c
 *   CMD_DBG_TIMER_ID, UUID: ac7f67e633131cfd09d18498faaa66d0
 *   CMD_DBG_INTCNTRL_ID, UUID: d35af9493e8b7346f322651855961d21
 *   CMD_DBG_IPC_SPACES_ID, UUID: f89239963c881425d919527452eedcc7
 *   CMD_DBG_IPC_CHANNELS_ID, UUID: 47239853e10637d6ff8121e84fd692fd
 */
struct CMD_CORE_GENERIC {
  struct CMD_HDR parent;
  int32_t core;
} __attribute__((packed));

enum DbgHeapMode {
  DBG_HEAP_NONE = 0,
  DBG_HEAP_TRACE,
  DBG_HEAP_CRC_INFO,
  DBG_HEAP_CRC,
};

/**
 * Structure associated with the following commands:
 *
 *   CMD_DBG_HEAP_ID, UUID: 85e7278dbc868c35ff2c8a3dcc0d8447
 */
struct CMD_DBG_HEAP {
  struct CMD_CORE_GENERIC parent;
  uint32_t crc;
  uint8_t mode; /* For valid values, refer to "enum DbgHeapMode" */
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_RING_BIND_ID, UUID: 83c7fd9ba41a12ead4920ddbe02ce8fb
 */
struct CMD_RING_BIND {
  struct CMD_HDR parent;
  int32_t pin;
  uint16_t ipc_tag;
  uint32_t write_descr;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_IPC_NOTIF_ENABLE_ID, UUID: 80822072da6458b080f488c1b16ab008
 */
struct CMD_IPC_NOTIF_ENABLE {
  struct CMD_HDR parent;
  uint32_t tag;
  uint8_t enable;
} __attribute__((packed));

#define CMD_SYS_VERSION_SIZE_MAX (64) /* UUID: 523a9f7b743ea29ea23a18c0879b0dcc */

/**
 * Structure associated with the following commands:
 *
 *   CMD_SYS_VERSION_GET_ID, UUID: a55b87f7dced9dc940f821514344afb0
 */
struct CMD_SYS_VERSION_GET {
  struct CMD_CORE_GENERIC parent;
  char version[CMD_SYS_VERSION_SIZE_MAX];
  char link_time[CMD_SYS_VERSION_SIZE_MAX];
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_SYS_STATS_TOT_ID, UUID: d3bacb0018cda42370e66d13020c60b8
 */
struct CMD_SYS_STATS_TOT {
  struct CMD_CORE_GENERIC parent;
  int32_t tot;
} __attribute__((packed));

enum STATS_TYPE {
  STATS_TYPE_TIMED_STATUS = 0,
  STATS_TYPE_DATA_TRANSFER,
};

#define STATS_ENTRY_LEN (7) /* UUID: 733b57b1d8a9342523a49b8c37ad2d0a */

struct STATS_ENTRY_INFO {
  char name[STATS_ENTRY_LEN];
  uint8_t type; /* For valid values, refer to "enum STATS_TYPE" */
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_SYS_STATS_INFO_GET_ID, UUID: a64551efd22e0590c51862fbdae982d0
 */
struct CMD_SYS_STATS_INFO_GET {
  struct CMD_CORE_GENERIC parent;
  int32_t index;
  struct STATS_ENTRY_INFO info;
} __attribute__((packed));

struct STATS_TIMED_STATUS {
  uint64_t counter;
  uint64_t cumulative_time;
  uint64_t timestamp_enter_last;
  uint64_t timestamp_exit_last;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_SYS_STATS_TIMED_GET_ID, UUID: d01577d896b1ce3c5406f93768bbccb4
 */
struct CMD_SYS_STATS_TIMED_GET {
  struct CMD_CORE_GENERIC parent;
  int32_t index;
  struct STATS_TIMED_STATUS timed;
} __attribute__((packed));

struct STATS_DATA_TRANSFER {
  uint64_t counter;
  uint64_t counter_failed;
  uint64_t transfer_tx;
  uint64_t transfer_rx;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_SYS_STATS_DATA_GET_ID, UUID: 2b508f8f52029e2f70505c9055ca50ce
 */
struct CMD_SYS_STATS_DATA_GET {
  struct CMD_CORE_GENERIC parent;
  int32_t index;
  struct STATS_DATA_TRANSFER transfer;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_SYS_LOGIC_TRACE_ENABLE_ID, UUID: 432fd371a0d5419f2d4e3e66f1b3f296
 *   CMD_DBG_TIMESTAMP_ID, UUID: a3776fb0d645d229eb361f7667ad22b2
 */
struct CMD_ENABLE {
  struct CMD_CORE_GENERIC parent;
  uint8_t enable;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_SYS_LOGIC_TRACE_SCHEME_SET_ID, UUID: 7188029a1fbb346bc53225b3afe5b030
 *   CMD_SYS_LOGIC_TRACE_SCHEME_GET_ID, UUID: fbb537085ace7493c9ee3208ceaf8bdb
 */
struct CMD_CORE_LOGIC_TRACE_SCHEME {
  struct CMD_CORE_GENERIC parent;
  int8_t scheme;
} __attribute__((packed));

#define EFWObject_kNameSize (16) /* UUID: 7488eddabe0654e3f0ac58cda17a1530 */

/**
 * Structure associated with the following commands:
 *
 *   CMD_DBG_INFO_ID, UUID: b68f8b693a8e2f56412d3c9fd0764f3f
 */
struct CMD_DBG_INFO {
  struct CMD_CORE_GENERIC parent;
  char string[EFWObject_kNameSize];
  uint8_t system;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_DBG_LEVEL_GET_ID, UUID: d9802e9e0e84b713e0efe86f3b2c7d29
 */
struct CMD_DBG_LEVEL_GET {
  struct CMD_CORE_GENERIC parent;
  char string[EFWObject_kNameSize];
  uint8_t system;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_DBG_POWERMAN_ID, UUID: 6636d2dceee1973b26d4033d28e5ff1c
 */
struct CMD_DBG_POWERMAN {
  struct CMD_CORE_GENERIC parent;
  uint8_t standby_modify;
  uint8_t standby_on;
  uint8_t retention_modify;
  uint8_t retention_on;
  uint8_t shutdown_modify;
  uint8_t shutdown_on;
  uint8_t status;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_DBG_LOG_ID, UUID: 84ed33f0d9a49a2e41bfc9f716205c0e
 */
struct CMD_DBG_LOG {
  struct CMD_CORE_GENERIC parent;
  uint8_t reset;
  uint8_t marker;
} __attribute__((packed));

enum DbgMemMode {
  DBG_MEM_MODE_32 = 0,
  DBG_MEM_MODE_16,
  DBG_MEM_MODE_8,
  DBG_MEM_MODE_RANGE,
};

/**
 * Structure associated with the following commands:
 *
 *   CMD_DBG_MEM_SET_ID, UUID: a0053bf6a498c6e83468ef77d59c669e
 */
struct CMD_DBG_MEM_SET {
  struct CMD_CORE_GENERIC parent;
  uint32_t address;
  uint32_t value;
  uint8_t mode; /* For valid values, refer to "enum DbgMemMode" */
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_DBG_MEM_DUMP_ID, UUID: 67540c4b228399c23f5f6b21a2e1a5aa
 */
struct CMD_DBG_MEM_DUMP {
  struct CMD_CORE_GENERIC parent;
  uint32_t address;
  uint32_t size;
} __attribute__((packed));

enum BTDecoderOutputIndex {
  BT_MODEM_OUTPUT_INDEX = 0,
  BT_AP_OUTPUT_INDEX,
  BT_HOTWORD_OUTPUT_INDEX,
  BT_DECODER_NUM_OUTPUTS,
};

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_INPUT_BT_DECODER_ENABLE_OUTPUT_ID, UUID: 6bd35b8cffeec1206902c14eb5f9e401
 */
struct CMD_AUDIO_INPUT_BT_ENABLE_OUTPUT {
  struct CMD_HDR parent;
  uint8_t output_index; /* For valid values, refer to "enum BTDecoderOutputIndex" */
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_INPUT_BT_DECODER_DISABLE_OUTPUT_ID, UUID: cec4f3b03bdd0a37f4c4353e26ba2502
 */
struct CMD_AUDIO_INPUT_BT_DISABLE_OUTPUT {
  struct CMD_HDR parent;
  uint8_t output_index; /* For valid values, refer to "enum BTDecoderOutputIndex" */
} __attribute__((packed));

enum InCallSelectOutputIndex {
  IN_CALL_SELECT_MODEM_IN_OUTPUT_INDEX = 0,
  IN_CALL_SELECT_MODEM_TX_OUTPUT_INDEX,
  IN_CALL_SELECT_NUM_OUTPUTS,
};

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_INPUT_IN_CALL_SELECT_ENABLE_OUTPUT_ID, UUID: 5147459e76383f48f7e007fa6075e0da
 */
struct CMD_AUDIO_INPUT_IN_CALL_SELECT_ENABLE_OUTPUT {
  struct CMD_HDR parent;
  uint8_t output_index; /* For valid values, refer to "enum InCallSelectOutputIndex" */
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_INPUT_IN_CALL_SELECT_DISABLE_OUTPUT_ID, UUID: c77d1d596c29725d591d56cf8b0196af
 */
struct CMD_AUDIO_INPUT_IN_CALL_SELECT_DISABLE_OUTPUT {
  struct CMD_HDR parent;
  uint8_t output_index; /* For valid values, refer to "enum InCallSelectOutputIndex" */
} __attribute__((packed));

enum SampleRate {
  SR_8KHZ = 0,
  SR_16KHZ,
  SR_24KHZ,
  SR_32KHZ,
  SR_44K1HZ,
  SR_48KHZ,
  SR_96KHZ,
  SR_192KHZ,
};

enum Format {
  FRMT_FLOATING_POINT = 0,
  FRMT_FIXED_POINT,
};

enum BitsPerSample {
  WIDTH_8_BIT = 0,
  WIDTH_16_BIT,
  WIDTH_24_BIT,
  WIDTH_32_BIT,
};

enum Channels {
  CH_RESERVED = 0,
  CH_MONO,
  CH_STEREO,
  CH_3,
  CH_4,
  CH_5_1,
};

struct channelMetadataUnpacked {
  uint8_t chan; /* For valid values, refer to "enum Channels" */
  uint8_t bits; /* For valid values, refer to "enum BitsPerSample" */
  uint8_t sr; /* For valid values, refer to "enum SampleRate" */
  uint8_t format; /* For valid values, refer to "enum Format" */
  uint8_t offset;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_INPUT_MIC_RECORD_AP_SET_PARAMS_ID, UUID: 88e874b0bf912eaa12c985252e24b326
 */
struct CMD_AUDIO_INPUT_MIC_RECORD_AP_SET_PARAMS {
  struct CMD_HDR parent;
  struct channelMetadataUnpacked requested_format;
  uint8_t pdm_mask;
  uint8_t period_ms;
  uint8_t num_periods;
  uint8_t sample_rate; /* For valid values, refer to "enum SampleRate" */
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_INPUT_MIC_LOOPBACK_START_ID, UUID: d800eb409b3d37ae286675ce5c7c073f
 */
struct CMD_AUDIO_INPUT_ENABLE_MIC_LOOPBACK {
  struct CMD_HDR parent;
  uint8_t sample_rate; /* For valid values, refer to "enum SampleRate" */
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_INPUT_MIC_POWER_ON_ID, UUID: 4030346301bb91faf04e5b0e76f68e34
 */
struct CMD_AUDIO_INPUT_MIC_POWER_ON {
  struct CMD_HDR parent;
  uint8_t mic_index;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_INPUT_MIC_POWER_OFF_ID, UUID: e91a955e15cde47288937c7a1df2b283
 */
struct CMD_AUDIO_INPUT_MIC_POWER_OFF {
  struct CMD_HDR parent;
  uint8_t mic_index;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_INPUT_MIC_GET_POWER_STATE_ID, UUID: b5959fe6522417f55ab8fe812a5cac17
 */
struct CMD_AUDIO_INPUT_MIC_GET_POWER_STATE {
  struct CMD_HDR parent;
  uint8_t mic_index;
  uint8_t power_state;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_SINK_ID, UUID: 45962b78a7af9dc66a915fc0629db1de
 */
struct CMD_AUDIO_OUTPUT_SINK {
  struct CMD_HDR parent;
  uint8_t sink;
  uint8_t on;
  uint8_t timestamping;
} __attribute__((packed));

enum EntrypointMode {
  ENTRYPOINT_MODE_OFF = 0,
  ENTRYPOINT_MODE_PLAYBACK,
  ENTRYPOINT_MODE_VOICE_TX,
  ENTRYPOINT_MODE_VOICE_RX,
  ENTRYPOINT_MODE_HAPTICS,
  ENTRYPOINT_MODE_DECODE_OFFLOAD,
  ENTRYPOINT_MODE_SIGGEN,
};

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_SOURCE_ID, UUID: f85277fb09319ffd8d3081edce3bf2d8
 */
struct CMD_AUDIO_OUTPUT_SOURCE {
  struct CMD_HDR parent;
  uint8_t source;
  uint8_t mode; /* For valid values, refer to "enum EntrypointMode" */
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_BIND_ID, UUID: 5c0ef76ebf767ff152a5cd6567525fab
 */
struct CMD_AUDIO_OUTPUT_BIND {
  struct CMD_HDR parent;
  uint8_t src;
  uint8_t dst;
  uint8_t bind;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_WAV_PLAYBACK_ID, UUID: 053176d6d8c217a8876f8a2ed2c1705c
 */
struct CMD_AUDIO_OUTPUT_WAV_PLAYBACK {
  struct CMD_HDR parent;
  uint8_t sink;
  uint8_t on;
  uint32_t address;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_GAIN_ID, UUID: 9aa958e99020e71530839a1ead12343b
 */
struct CMD_AUDIO_OUTPUT_GAIN {
  struct CMD_HDR parent;
  uint8_t sink;
  uint8_t channel;
  uint16_t gain;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_FX_EQ_ID, UUID: 12f4cb0122b8189edee6a849df5af66f
 */
struct CMD_AUDIO_OUTPUT_FX_EQ {
  struct CMD_HDR parent;
  uint8_t sink;
  int8_t l;
  int8_t m;
  int8_t h;
} __attribute__((packed));

struct EntrypointDescriptorUnpacked {
  uint32_t address;
  uint32_t watermark;
  uint32_t length;
  struct channelMetadataUnpacked metadata;
  uint8_t channel;
  uint8_t wraparound;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_EP_SETUP_ID, UUID: 6f28fd11188321fcb9527b1074baf1ce
 */
struct CMD_AUDIO_OUTPUT_EP_SETUP {
  struct CMD_HDR parent;
  struct EntrypointDescriptorUnpacked d;
  uint8_t on;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_DECODE_ID, UUID: 449f41b26885ab2522007fe7fa5aa926
 */
struct CMD_AUDIO_OUTPUT_DECODE {
  struct CMD_HDR parent;
  struct EntrypointDescriptorUnpacked raw_ep_descr;
  uint32_t address;
  int32_t size;
  uint8_t codec;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_AEC_NOTIFY_ID, UUID: 5f0290d132825732db2a1557835f0599
 */
struct CMD_AUDIO_OUTPUT_AEC_NOTIFY {
  struct CMD_HDR parent;
  int32_t index;
  uint8_t on;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_RESYNC_AUDIO_SINK_ID, UUID: 39d7ce4e208ddc8e9421ed86e85debb9
 */
struct CMD_AUDIO_OUTPUT_RESYNC_AUDIO_SINK {
  struct CMD_HDR parent;
  uint8_t sink;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_GET_PARAMETER_ID, UUID: f5a3647963762119f5076649d7631251
 */
struct CMD_AUDIO_OUTPUT_GET_PARAMETER {
  struct CMD_HDR parent;
  uint8_t block;
  uint8_t component;
  uint32_t key;
  uint32_t val;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_GET_PARAMETER_BULK_ID, UUID: 16c6943a6b978a8b0879b998a31797c9
 */
struct CMD_AUDIO_OUTPUT_GET_PARAMETER_BULK {
  struct CMD_HDR parent;
  uint8_t block;
  uint8_t component;
  uint32_t rx_offset;
  uint32_t rx_address;
  uint32_t rx_size;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_SET_PARAMETER_ID, UUID: 1a70d4d5d8a39b987f16e4a95fa37bd5
 */
struct CMD_AUDIO_OUTPUT_SET_PARAMETER {
  struct CMD_HDR parent;
  uint8_t block;
  uint8_t component;
  uint32_t key;
  uint32_t val;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_SET_PARAMETER_BULK_ID, UUID: 2b6ffada0fb04f029e778cc4d0e3579b
 */
struct CMD_AUDIO_OUTPUT_SET_PARAMETER_BULK {
  struct CMD_HDR parent;
  uint8_t block;
  uint8_t component;
  uint32_t tx_offset;
  uint32_t tx_address;
  uint32_t tx_size;
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_SET_GET_PARAM_BULK_ID, UUID: 99319135e0aeb804e09a24230a80e4f9
 */
struct CMD_AUDIO_OUTPUT_SET_GET_PARAM_BULK {
  struct CMD_HDR parent;
  uint8_t block;
  uint8_t component;
  uint16_t tx_offset;
  uint16_t rx_offset;
  uint32_t tx_address;
  uint32_t rx_address;
  uint16_t tx_size;
  uint16_t rx_size;
} __attribute__((packed));

enum ASP_BLK_CMD_ID {
  ASP_CMD_ID_NONE = 0,
  ASP_CMD_ID_GET_MODULE,
  ASP_CMD_ID_GET_TAP_PT,
  ASP_CMD_ID_SET_TAP_PT,
  ASP_NUM_CMD_ID,
};

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_GET_BLOCKS_ID, UUID: f7e34f17de0d45674818cf59e1ee45d1
 */
struct CMD_AUDIO_OUTPUT_GET_BLOCKS {
  struct CMD_HDR parent;
  uint8_t block;
  uint8_t component;
  uint8_t cmd; /* For valid values, refer to "enum ASP_BLK_CMD_ID" */
  uint32_t val;
} __attribute__((packed));

enum ASP_MODULE_ID {
  ASP_ID_NONE = 0,
  ASP_ID_GAIN = 0,
  ASP_ID_BASE,
  ASP_ID_EQ = 1,
  ASP_ID_WAVES,
  ASP_ID_FM,
  ASP_ID_LIMITERTD,
  ASP_ID_AGC,
  ASP_ID_SURROUNDRECORD,
  ASP_ID_MULTICHANNEL_IIR,
  ASP_ID_MBDRC,
  ASP_ID_WAVES01,
  ASP_ID_WAVES02,
  ASP_ID_WAVES03,
  ASP_ID_SRC01,
  ASP_ID_SRC02,
  ASP_ID_PASS,
  ASP_ID_MIXER,
  ASP_ID_IIREQ,
  ASP_ID_DUMMY2,
  ASP_ID_DUMMY3,
  ASP_NUM_MODULE,
};

enum AUDIO_BLOCK_ID {
  ABLOCK_SPEAKER = 16,
  ABLOCK_HEADPHONE,
  ABLOCK_BT,
  ABLOCK_MODEM,
  ABLOCK_USB,
  AUDIO_OUTPUT_BLOCKS,
};

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_GET_MODULES_ID, UUID: ec3f82e36a5492ba8edec5ee7dd287c2
 */
struct CMD_AUDIO_OUTPUT_GET_MODULES {
  struct CMD_HDR parent;
  uint8_t block;
  uint8_t component;
  uint8_t blk; /* For valid values, refer to "enum AUDIO_BLOCK_ID" */
  uint8_t module; /* For valid values, refer to "enum ASP_MODULE_ID" */
  uint32_t val;
} __attribute__((packed));

enum HapticsMode {
  HAPTICS_MODE_OFF = 0,
  HAPTICS_MODE_PCM,
  HAPTICS_MODE_FX,
};

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_CFG_HAPTICS_ID, UUID: 34e639645244006c281a21cd04f5f201
 */
struct CMD_AUDIO_OUTPUT_CFG_HAPTICS {
  struct CMD_HDR parent;
  uint8_t mode; /* For valid values, refer to "enum HapticsMode" */
} __attribute__((packed));

/**
 * Structure associated with the following commands:
 *
 *   CMD_AUDIO_OUTPUT_CFG_SIGGEN_ID, UUID: ff3b45005d0ed41902540c6a5f445e45
 */
struct CMD_AUDIO_OUTPUT_CFG_SIGGEN {
  struct CMD_HDR parent;
  uint8_t wf_type;
  uint16_t wf_period;
  uint32_t wf_amplitude;
} __attribute__((packed));

struct NOTIF_HDR {
  struct CONTAINER_HDR parent;
  uint32_t id;
  uint32_t tag;
} __attribute__((packed));

#define notif_payload (36) /* UUID: 21377ce718fd3e9bec883f8fb476c056 */

/**
 * Structure associated with the following notifications:
 *
 *   NOTIF_AUDIO_INPUT_AP_MIC_RECORD_DATA_AVAILABLE_ID, UUID: 227a04e5c2af674048667cb5a57c4fc1
 */
struct NOTIF {
  struct NOTIF_HDR parent;
  uint8_t payload[notif_payload];
} __attribute__((packed));



/**
 * Helper function to initialize commands
 *
 * \param[out] cmd Pointer to command structure to initialize
 * \param[in] id Command ID.  Refer to \ref AOC_COMMAND
 * \param[in] length Command length (size of the command structure)
 */
static inline void AocCmdHdrSet(struct CMD_HDR * cmd, uint16_t id, uint16_t length) {
  static uint8_t cmd_cntr_ = 0;

  cmd->parent.type = DATA_TYPE_CMD;
  cmd->parent.cntr = cmd_cntr_++;
  cmd->parent.len = length;
  cmd->id = id;
}


/**
 * Total number of UUID strings to check against the FW image.
 */
#define AOC_UUID_ENTRIES (83)

/**
 * UUID entry size.
 */
#define AOC_UUID_SIZE (16)


/**
 * Function to check interface compatibility
 *
 * \param[in] addr UUID table's address
 * \param[in] size UUID table's size
 *
 * \return 0 if compatibility is Ok, -1 otherwise
 */
inline int AocInterfaceCheck(const void * addr, int size) {
  static const uint8_t uuid_array[AOC_UUID_ENTRIES][AOC_UUID_SIZE] = { 
      { 0x04, 0xac, 0x83, 0x0a, 0xb6, 0x5f, 0x08, 0x08, 0x5b, 0x25, 0xe6, 0x4d, 0x45, 0x3b, 0xa9, 0xd0},
      { 0x05, 0x31, 0x76, 0xd6, 0xd8, 0xc2, 0x17, 0xa8, 0x87, 0x6f, 0x8a, 0x2e, 0xd2, 0xc1, 0x70, 0x5c},
      { 0x05, 0xd5, 0x07, 0x6b, 0xeb, 0x3f, 0x51, 0x2e, 0x81, 0x5d, 0x86, 0xd7, 0x38, 0xa6, 0x3a, 0x87},
      { 0x0a, 0x2c, 0x8d, 0x91, 0xa2, 0x94, 0xb4, 0x62, 0xdc, 0xda, 0xc9, 0x31, 0xb7, 0xd0, 0xe8, 0xf5},
      { 0x0e, 0xf0, 0xb4, 0xf3, 0xc9, 0x77, 0xd0, 0x97, 0x7c, 0x5f, 0xbc, 0x35, 0x7f, 0x08, 0xf8, 0xef},
      { 0x12, 0xf4, 0xcb, 0x01, 0x22, 0xb8, 0x18, 0x9e, 0xde, 0xe6, 0xa8, 0x49, 0xdf, 0x5a, 0xf6, 0x6f},
      { 0x16, 0xc6, 0x94, 0x3a, 0x6b, 0x97, 0x8a, 0x8b, 0x08, 0x79, 0xb9, 0x98, 0xa3, 0x17, 0x97, 0xc9},
      { 0x18, 0x22, 0x53, 0xd3, 0x7f, 0x2c, 0x1a, 0xbf, 0x0b, 0x3d, 0x7e, 0x7d, 0x66, 0x3b, 0x6a, 0x15},
      { 0x1a, 0x70, 0xd4, 0xd5, 0xd8, 0xa3, 0x9b, 0x98, 0x7f, 0x16, 0xe4, 0xa9, 0x5f, 0xa3, 0x7b, 0xd5},
      { 0x21, 0x37, 0x7c, 0xe7, 0x18, 0xfd, 0x3e, 0x9b, 0xec, 0x88, 0x3f, 0x8f, 0xb4, 0x76, 0xc0, 0x56},
      { 0x22, 0x7a, 0x04, 0xe5, 0xc2, 0xaf, 0x67, 0x40, 0x48, 0x66, 0x7c, 0xb5, 0xa5, 0x7c, 0x4f, 0xc1},
      { 0x26, 0xff, 0x9e, 0x04, 0x4e, 0x65, 0x51, 0x07, 0x75, 0x29, 0x1a, 0xbe, 0x87, 0x40, 0x5f, 0xbc},
      { 0x2b, 0x50, 0x8f, 0x8f, 0x52, 0x02, 0x9e, 0x2f, 0x70, 0x50, 0x5c, 0x90, 0x55, 0xca, 0x50, 0xce},
      { 0x2b, 0x6f, 0xfa, 0xda, 0x0f, 0xb0, 0x4f, 0x02, 0x9e, 0x77, 0x8c, 0xc4, 0xd0, 0xe3, 0x57, 0x9b},
      { 0x2f, 0xad, 0x4c, 0xb4, 0x75, 0xc4, 0x96, 0xc9, 0xf7, 0x6c, 0x32, 0xdc, 0xa4, 0xc0, 0x13, 0x6a},
      { 0x34, 0xe6, 0x39, 0x64, 0x52, 0x44, 0x00, 0x6c, 0x28, 0x1a, 0x21, 0xcd, 0x04, 0xf5, 0xf2, 0x01},
      { 0x39, 0xd7, 0xce, 0x4e, 0x20, 0x8d, 0xdc, 0x8e, 0x94, 0x21, 0xed, 0x86, 0xe8, 0x5d, 0xeb, 0xb9},
      { 0x40, 0x30, 0x34, 0x63, 0x01, 0xbb, 0x91, 0xfa, 0xf0, 0x4e, 0x5b, 0x0e, 0x76, 0xf6, 0x8e, 0x34},
      { 0x43, 0x2f, 0xd3, 0x71, 0xa0, 0xd5, 0x41, 0x9f, 0x2d, 0x4e, 0x3e, 0x66, 0xf1, 0xb3, 0xf2, 0x96},
      { 0x44, 0x9f, 0x41, 0xb2, 0x68, 0x85, 0xab, 0x25, 0x22, 0x00, 0x7f, 0xe7, 0xfa, 0x5a, 0xa9, 0x26},
      { 0x45, 0x96, 0x2b, 0x78, 0xa7, 0xaf, 0x9d, 0xc6, 0x6a, 0x91, 0x5f, 0xc0, 0x62, 0x9d, 0xb1, 0xde},
      { 0x47, 0x23, 0x98, 0x53, 0xe1, 0x06, 0x37, 0xd6, 0xff, 0x81, 0x21, 0xe8, 0x4f, 0xd6, 0x92, 0xfd},
      { 0x51, 0x47, 0x45, 0x9e, 0x76, 0x38, 0x3f, 0x48, 0xf7, 0xe0, 0x07, 0xfa, 0x60, 0x75, 0xe0, 0xda},
      { 0x52, 0x3a, 0x9f, 0x7b, 0x74, 0x3e, 0xa2, 0x9e, 0xa2, 0x3a, 0x18, 0xc0, 0x87, 0x9b, 0x0d, 0xcc},
      { 0x53, 0x80, 0x85, 0x13, 0x21, 0xb1, 0x92, 0x97, 0x14, 0x4c, 0x6e, 0xaf, 0x7f, 0x69, 0x78, 0xdd},
      { 0x5c, 0x0e, 0xf7, 0x6e, 0xbf, 0x76, 0x7f, 0xf1, 0x52, 0xa5, 0xcd, 0x65, 0x67, 0x52, 0x5f, 0xab},
      { 0x5f, 0x02, 0x90, 0xd1, 0x32, 0x82, 0x57, 0x32, 0xdb, 0x2a, 0x15, 0x57, 0x83, 0x5f, 0x05, 0x99},
      { 0x60, 0xd3, 0x83, 0x64, 0xd6, 0xe3, 0xa5, 0x6d, 0xb5, 0x2b, 0x4a, 0xe6, 0xef, 0x33, 0x30, 0xee},
      { 0x63, 0xcb, 0x8f, 0x09, 0x24, 0x94, 0xb9, 0x57, 0xfc, 0xd9, 0x30, 0x39, 0xd9, 0x04, 0x61, 0x3f},
      { 0x66, 0x36, 0xd2, 0xdc, 0xee, 0xe1, 0x97, 0x3b, 0x26, 0xd4, 0x03, 0x3d, 0x28, 0xe5, 0xff, 0x1c},
      { 0x67, 0x54, 0x0c, 0x4b, 0x22, 0x83, 0x99, 0xc2, 0x3f, 0x5f, 0x6b, 0x21, 0xa2, 0xe1, 0xa5, 0xaa},
      { 0x6b, 0xd3, 0x5b, 0x8c, 0xff, 0xee, 0xc1, 0x20, 0x69, 0x02, 0xc1, 0x4e, 0xb5, 0xf9, 0xe4, 0x01},
      { 0x6d, 0xaf, 0xca, 0x1b, 0x50, 0xff, 0x4f, 0x7a, 0xac, 0xc4, 0x00, 0x6c, 0x0e, 0x10, 0x4b, 0x7e},
      { 0x6f, 0x28, 0xfd, 0x11, 0x18, 0x83, 0x21, 0xfc, 0xb9, 0x52, 0x7b, 0x10, 0x74, 0xba, 0xf1, 0xce},
      { 0x6f, 0xf8, 0xa9, 0xe0, 0x24, 0x99, 0x04, 0xd2, 0x05, 0x9b, 0xb0, 0x69, 0xdf, 0xcd, 0x53, 0x57},
      { 0x71, 0x88, 0x02, 0x9a, 0x1f, 0xbb, 0x34, 0x6b, 0xc5, 0x32, 0x25, 0xb3, 0xaf, 0xe5, 0xb0, 0x30},
      { 0x71, 0xbc, 0x54, 0x8e, 0x4d, 0x11, 0x01, 0x6c, 0x86, 0xef, 0x26, 0x7c, 0x16, 0xa1, 0x61, 0xd9},
      { 0x73, 0x3b, 0x57, 0xb1, 0xd8, 0xa9, 0x34, 0x25, 0x23, 0xa4, 0x9b, 0x8c, 0x37, 0xad, 0x2d, 0x0a},
      { 0x74, 0x88, 0xed, 0xda, 0xbe, 0x06, 0x54, 0xe3, 0xf0, 0xac, 0x58, 0xcd, 0xa1, 0x7a, 0x15, 0x30},
      { 0x7b, 0x90, 0x75, 0xe0, 0x31, 0x8e, 0xba, 0x31, 0x4f, 0x60, 0xf6, 0x2f, 0xe5, 0x3c, 0xda, 0x03},
      { 0x7f, 0x37, 0x83, 0xae, 0xdb, 0xae, 0x03, 0x85, 0x4d, 0x3c, 0xb2, 0x85, 0x1a, 0xa0, 0x7b, 0x40},
      { 0x80, 0x82, 0x20, 0x72, 0xda, 0x64, 0x58, 0xb0, 0x80, 0xf4, 0x88, 0xc1, 0xb1, 0x6a, 0xb0, 0x08},
      { 0x82, 0x17, 0x63, 0xf8, 0xcd, 0x27, 0xaa, 0x29, 0xb9, 0x0a, 0x86, 0xef, 0x77, 0xbb, 0x79, 0x4c},
      { 0x83, 0xc7, 0xfd, 0x9b, 0xa4, 0x1a, 0x12, 0xea, 0xd4, 0x92, 0x0d, 0xdb, 0xe0, 0x2c, 0xe8, 0xfb},
      { 0x84, 0xed, 0x33, 0xf0, 0xd9, 0xa4, 0x9a, 0x2e, 0x41, 0xbf, 0xc9, 0xf7, 0x16, 0x20, 0x5c, 0x0e},
      { 0x85, 0xe7, 0x27, 0x8d, 0xbc, 0x86, 0x8c, 0x35, 0xff, 0x2c, 0x8a, 0x3d, 0xcc, 0x0d, 0x84, 0x47},
      { 0x86, 0x28, 0x16, 0x4e, 0xb5, 0x55, 0x88, 0x4b, 0x43, 0x59, 0xdb, 0x0d, 0x11, 0xcd, 0x68, 0x73},
      { 0x87, 0x2b, 0xab, 0x98, 0x04, 0x99, 0xad, 0xfc, 0x8b, 0x6e, 0x89, 0xb8, 0xce, 0x9f, 0x08, 0x3d},
      { 0x87, 0xbf, 0xb8, 0xe1, 0xee, 0x15, 0x4e, 0x19, 0x5f, 0x9c, 0x06, 0x05, 0x4a, 0xb0, 0xff, 0xbc},
      { 0x88, 0xe8, 0x74, 0xb0, 0xbf, 0x91, 0x2e, 0xaa, 0x12, 0xc9, 0x85, 0x25, 0x2e, 0x24, 0xb3, 0x26},
      { 0x90, 0xd9, 0x24, 0x60, 0x10, 0x4e, 0x4b, 0xc6, 0xc2, 0xd9, 0xc9, 0xa0, 0xf6, 0x35, 0xb5, 0xc9},
      { 0x95, 0x6c, 0x8b, 0x05, 0x72, 0xbe, 0xa5, 0x02, 0x8c, 0x3d, 0x28, 0x74, 0x70, 0xf1, 0x9f, 0x78},
      { 0x99, 0x31, 0x91, 0x35, 0xe0, 0xae, 0xb8, 0x04, 0xe0, 0x9a, 0x24, 0x23, 0x0a, 0x80, 0xe4, 0xf9},
      { 0x9a, 0xa9, 0x58, 0xe9, 0x90, 0x20, 0xe7, 0x15, 0x30, 0x83, 0x9a, 0x1e, 0xad, 0x12, 0x34, 0x3b},
      { 0xa0, 0x05, 0x3b, 0xf6, 0xa4, 0x98, 0xc6, 0xe8, 0x34, 0x68, 0xef, 0x77, 0xd5, 0x9c, 0x66, 0x9e},
      { 0xa1, 0xab, 0x30, 0x9b, 0x64, 0x2f, 0xe7, 0x63, 0xe3, 0x3e, 0x72, 0x77, 0xca, 0xc5, 0x96, 0xa1},
      { 0xa3, 0x77, 0x6f, 0xb0, 0xd6, 0x45, 0xd2, 0x29, 0xeb, 0x36, 0x1f, 0x76, 0x67, 0xad, 0x22, 0xb2},
      { 0xa5, 0x5b, 0x87, 0xf7, 0xdc, 0xed, 0x9d, 0xc9, 0x40, 0xf8, 0x21, 0x51, 0x43, 0x44, 0xaf, 0xb0},
      { 0xa6, 0x11, 0xb2, 0xc4, 0xab, 0x29, 0x70, 0x52, 0x8b, 0x30, 0xa3, 0xc0, 0xe7, 0x0a, 0x33, 0xcb},
      { 0xa6, 0x45, 0x51, 0xef, 0xd2, 0x2e, 0x05, 0x90, 0xc5, 0x18, 0x62, 0xfb, 0xda, 0xe9, 0x82, 0xd0},
      { 0xac, 0x7f, 0x67, 0xe6, 0x33, 0x13, 0x1c, 0xfd, 0x09, 0xd1, 0x84, 0x98, 0xfa, 0xaa, 0x66, 0xd0},
      { 0xb0, 0x82, 0xcb, 0xc3, 0xdd, 0x47, 0xaf, 0xfc, 0xbe, 0xd8, 0x1f, 0x2f, 0x6a, 0x8b, 0xdc, 0x26},
      { 0xb5, 0x95, 0x9f, 0xe6, 0x52, 0x24, 0x17, 0xf5, 0x5a, 0xb8, 0xfe, 0x81, 0x2a, 0x5c, 0xac, 0x17},
      { 0xb6, 0x8f, 0x8b, 0x69, 0x3a, 0x8e, 0x2f, 0x56, 0x41, 0x2d, 0x3c, 0x9f, 0xd0, 0x76, 0x4f, 0x3f},
      { 0xc7, 0x7d, 0x1d, 0x59, 0x6c, 0x29, 0x72, 0x5d, 0x59, 0x1d, 0x56, 0xcf, 0x8b, 0x01, 0x96, 0xaf},
      { 0xce, 0xc4, 0xf3, 0xb0, 0x3b, 0xdd, 0x0a, 0x37, 0xf4, 0xc4, 0x35, 0x3e, 0x26, 0xba, 0x25, 0x02},
      { 0xd0, 0x15, 0x77, 0xd8, 0x96, 0xb1, 0xce, 0x3c, 0x54, 0x06, 0xf9, 0x37, 0x68, 0xbb, 0xcc, 0xb4},
      { 0xd1, 0xc9, 0x58, 0x02, 0x7b, 0x2e, 0xd6, 0xf8, 0xa4, 0xbf, 0xab, 0x4e, 0x29, 0xde, 0xb0, 0x1f},
      { 0xd3, 0x5a, 0xf9, 0x49, 0x3e, 0x8b, 0x73, 0x46, 0xf3, 0x22, 0x65, 0x18, 0x55, 0x96, 0x1d, 0x21},
      { 0xd3, 0xa5, 0x2c, 0xad, 0x71, 0x78, 0x26, 0x91, 0x8f, 0x48, 0x4e, 0xf6, 0x48, 0x74, 0xd1, 0x81},
      { 0xd3, 0xba, 0xcb, 0x00, 0x18, 0xcd, 0xa4, 0x23, 0x70, 0xe6, 0x6d, 0x13, 0x02, 0x0c, 0x60, 0xb8},
      { 0xd8, 0x00, 0xeb, 0x40, 0x9b, 0x3d, 0x37, 0xae, 0x28, 0x66, 0x75, 0xce, 0x5c, 0x7c, 0x07, 0x3f},
      { 0xd9, 0x80, 0x2e, 0x9e, 0x0e, 0x84, 0xb7, 0x13, 0xe0, 0xef, 0xe8, 0x6f, 0x3b, 0x2c, 0x7d, 0x29},
      { 0xda, 0x94, 0x9c, 0x27, 0xa8, 0xbc, 0x2d, 0xc7, 0x85, 0x65, 0x5f, 0x91, 0x07, 0x5a, 0xca, 0x1a},
      { 0xdb, 0xfe, 0x4f, 0xb7, 0xb6, 0x9f, 0x62, 0x58, 0xd1, 0x5e, 0xa3, 0xfa, 0xe0, 0x27, 0x5a, 0x8b},
      { 0xe9, 0x1a, 0x95, 0x5e, 0x15, 0xcd, 0xe4, 0x72, 0x88, 0x93, 0x7c, 0x7a, 0x1d, 0xf2, 0xb2, 0x83},
      { 0xec, 0x3f, 0x82, 0xe3, 0x6a, 0x54, 0x92, 0xba, 0x8e, 0xde, 0xc5, 0xee, 0x7d, 0xd2, 0x87, 0xc2},
      { 0xf5, 0xa3, 0x64, 0x79, 0x63, 0x76, 0x21, 0x19, 0xf5, 0x07, 0x66, 0x49, 0xd7, 0x63, 0x12, 0x51},
      { 0xf7, 0xe3, 0x4f, 0x17, 0xde, 0x0d, 0x45, 0x67, 0x48, 0x18, 0xcf, 0x59, 0xe1, 0xee, 0x45, 0xd1},
      { 0xf8, 0x52, 0x77, 0xfb, 0x09, 0x31, 0x9f, 0xfd, 0x8d, 0x30, 0x81, 0xed, 0xce, 0x3b, 0xf2, 0xd8},
      { 0xf8, 0x92, 0x39, 0x96, 0x3c, 0x88, 0x14, 0x25, 0xd9, 0x19, 0x52, 0x74, 0x52, 0xee, 0xdc, 0xc7},
      { 0xfb, 0xb5, 0x37, 0x08, 0x5a, 0xce, 0x74, 0x93, 0xc9, 0xee, 0x32, 0x08, 0xce, 0xaf, 0x8b, 0xdb},
      { 0xff, 0x3b, 0x45, 0x00, 0x5d, 0x0e, 0xd4, 0x19, 0x02, 0x54, 0x0c, 0x6a, 0x5f, 0x44, 0x5e, 0x45},
    };
  int start = 0;
  int last = size / AOC_UUID_SIZE;
  int entry;
  int rc = 0;

  /*
   * The UUIDs entries are sorted therefore moving the start of the
   * inner loop is enough to minimize the search checks
   */

  for (entry = 0; entry < AOC_UUID_ENTRIES; entry++) {
    const uint8_t * uuid = &(uuid_array[entry][0]);
    int index;

    rc = -1;

    for (index = start; index < last; index += 1) {
      const uint8_t * ptr;
      int j;

      ptr = &(((const uint8_t *)addr)[index * AOC_UUID_SIZE]);

      for (j = 0; j < AOC_UUID_SIZE; j++) {
        if (uuid[j] != ptr[j]) {
          break;
        }
      }
      if (j == AOC_UUID_SIZE) {
        if (index == start) {
          start += 1;
        }
        rc = 0;
        break;
      }
    }
    if (index == last) {
      rc = -1;
      break;
    }
  }
  return rc;
}


#endif /* AOC_INTERFACE_H_ */

