#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = 60U;
volatile uint32_t x15 = UINT32_MAX;
uint8_t x25 = UINT8_MAX;
volatile int16_t x27 = 42;
int32_t x42 = INT32_MIN;
int8_t x45 = INT8_MAX;
int16_t x47 = 1;
int64_t x60 = -918LL;
volatile uint64_t x61 = UINT64_MAX;
uint16_t x65 = 1U;
volatile int32_t x67 = 509866;
volatile uint32_t x76 = UINT32_MAX;
static int8_t x97 = INT8_MAX;
int8_t x98 = INT8_MIN;
volatile int16_t x105 = INT16_MIN;
volatile int8_t x106 = -1;
volatile uint16_t x107 = 3U;
static volatile int32_t x110 = -3182629;
int32_t x112 = INT32_MIN;
int32_t x125 = -1291750;
static uint64_t t18 = 3805040683LLU;
int16_t x129 = INT16_MIN;
static int16_t x136 = 905;
uint64_t x142 = 1LLU;
int32_t x145 = INT32_MIN;
static volatile int32_t x162 = -1;
static volatile uint64_t t26 = 340228LLU;
int64_t x192 = 4645372LL;
int32_t x195 = 60739845;
static uint8_t x196 = 0U;
volatile int64_t t31 = -637674818803059151LL;
volatile int32_t x216 = -1783;
int8_t x219 = INT8_MIN;
uint32_t x220 = 28442590U;
int64_t x228 = INT64_MAX;
volatile uint8_t x242 = UINT8_MAX;
int16_t x243 = INT16_MAX;
volatile uint32_t t37 = 2U;
volatile int16_t x248 = 1;
int32_t x249 = -1;
volatile uint32_t x250 = 42695426U;
int64_t t40 = -495290212011039701LL;
int8_t x284 = INT8_MIN;
int32_t x291 = 1;
static int8_t x292 = -1;
int64_t x293 = 6LL;
int32_t x294 = INT32_MIN;
int8_t x295 = INT8_MIN;
int64_t t46 = 103277412767833467LL;
int64_t x298 = 145305950LL;
uint32_t x301 = 27986U;
volatile int16_t x305 = 625;
int16_t x308 = -27;
int16_t x320 = INT16_MIN;
int8_t x331 = INT8_MAX;
static volatile int32_t x341 = INT32_MIN;
int16_t x342 = INT16_MIN;
uint64_t x343 = UINT64_MAX;
static uint32_t x345 = UINT32_MAX;
volatile uint32_t t56 = 42755475U;
uint16_t x349 = 1U;
uint64_t x350 = 525646807190744885LLU;
uint16_t x351 = UINT16_MAX;
static volatile uint8_t x362 = 0U;
static volatile uint64_t t59 = 1033284681662633225LLU;
uint64_t x375 = 94921284370LLU;
int64_t x376 = -797439094330LL;
int8_t x381 = INT8_MIN;
int64_t x382 = INT64_MAX;
int32_t x384 = 2;
int64_t t62 = -3040375886349LL;
uint32_t x387 = 198461U;
uint64_t t63 = 24522LLU;
uint64_t x391 = 1029651489342784LLU;
int16_t x392 = INT16_MAX;
int64_t x393 = -1LL;
int32_t x394 = -434;
int8_t x399 = INT8_MIN;
int64_t t66 = 34145785LL;
int32_t x402 = INT32_MIN;
uint32_t x409 = 3620U;
volatile int64_t x412 = INT64_MIN;
volatile uint64_t x434 = UINT64_MAX;
int8_t x451 = -1;
int8_t x456 = -1;
static int32_t x457 = -1;
volatile int32_t t73 = 92393;
int64_t x474 = INT64_MIN;
static int8_t x476 = -1;
static int8_t x483 = INT8_MAX;
uint64_t x487 = 224LLU;
static int8_t x491 = INT8_MAX;
uint16_t x494 = 6U;
uint8_t x496 = 124U;
int16_t x503 = -1;
volatile int32_t t83 = 354;
static int16_t x510 = INT16_MIN;
volatile int32_t x521 = INT32_MIN;
int32_t x522 = INT32_MIN;
volatile uint64_t x527 = UINT64_MAX;
volatile int8_t x529 = INT8_MIN;
int16_t x531 = 3561;
uint32_t t88 = 111U;
int16_t x546 = INT16_MIN;
uint64_t t90 = 525679057LLU;
uint64_t t92 = 1515336087691204LLU;
int32_t x570 = 1;
uint16_t x575 = 1079U;
int64_t x578 = -1LL;
volatile int16_t x586 = INT16_MIN;
volatile int8_t x589 = -14;
uint16_t x592 = 10485U;
volatile int32_t t97 = -13469;
int32_t x602 = INT32_MAX;


void f0(void) {
	uint64_t x5 = 19781453319294LLU;
	static uint16_t x6 = 21147U;
	int32_t x7 = -1;
	int32_t x8 = INT32_MAX;
	uint64_t t0 = 37511LLU;

	t0 = (((x5^x6)*x7)-x8);

	if (t0 != 18446724290108727580LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	int32_t x11 = 0;
	int16_t x12 = -1;
	int64_t t1 = -30111151215764LL;

	t1 = (((x9^x10)*x11)-x12);

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = UINT8_MAX;
	int64_t x14 = -1LL;
	int8_t x16 = INT8_MAX;
	volatile int64_t t2 = 46075724LL;

	t2 = (((x13^x14)*x15)-x16);

	if (t2 != -1099511627647LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 7811599LLU;
	int32_t x18 = -931406;
	static volatile uint64_t x19 = 9LLU;
	int8_t x20 = -1;
	volatile uint64_t t3 = 43346076481385875LLU;

	t3 = (((x17^x18)*x19)-x20);

	if (t3 != 18446744073638173094LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x26 = INT16_MIN;
	int64_t x28 = -81820009979379LL;
	volatile int64_t t4 = -3788541654LL;

	t4 = (((x25^x26)*x27)-x28);

	if (t4 != 81820008613833LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x33 = 4U;
	volatile uint16_t x34 = UINT16_MAX;
	int16_t x35 = INT16_MIN;
	uint64_t x36 = UINT64_MAX;
	uint64_t t5 = 85191LLU;

	t5 = (((x33^x34)*x35)-x36);

	if (t5 != 2147647489LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x41 = UINT64_MAX;
	static uint64_t x43 = UINT64_MAX;
	int8_t x44 = INT8_MIN;
	volatile uint64_t t6 = 1097998042403LLU;

	t6 = (((x41^x42)*x43)-x44);

	if (t6 != 18446744071562068097LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x46 = INT32_MIN;
	volatile int8_t x48 = 44;
	volatile int32_t t7 = 3445129;

	t7 = (((x45^x46)*x47)-x48);

	if (t7 != -2147483565) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 86009917850532LLU;
	static uint16_t x50 = 148U;
	int32_t x51 = 1815;
	int8_t x52 = -1;
	static volatile uint64_t t8 = 1LLU;

	t8 = (((x49^x50)*x51)-x52);

	if (t8 != 156108000898505041LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = 1830884754677961LLU;
	int32_t x58 = INT32_MAX;
	int64_t x59 = -1653208579065LL;
	uint64_t t9 = 75LLU;

	t9 = (((x57^x58)*x59)-x60);

	if (t9 != 4306736455551104528LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x62 = -1;
	static int32_t x63 = INT32_MAX;
	static uint32_t x64 = 1070747194U;
	uint64_t t10 = 774027LLU;

	t10 = (((x61^x62)*x63)-x64);

	if (t10 != 18446744072638804422LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x66 = UINT64_MAX;
	int16_t x68 = INT16_MAX;
	static uint64_t t11 = 5428429041770333LLU;

	t11 = (((x65^x66)*x67)-x68);

	if (t11 != 18446744073708499117LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x69 = 0U;
	volatile uint64_t x70 = 60LLU;
	uint64_t x71 = 285953LLU;
	int16_t x72 = 11952;
	uint64_t t12 = 945848201LLU;

	t12 = (((x69^x70)*x71)-x72);

	if (t12 != 17145228LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = 2U;
	volatile uint8_t x74 = UINT8_MAX;
	uint32_t x75 = 761523957U;
	uint32_t t13 = 2U;

	t13 = (((x73^x74)*x75)-x76);

	if (t13 != 3687000098U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MIN;
	static uint64_t x95 = 324172162362550LLU;
	int64_t x96 = INT64_MAX;
	volatile uint64_t t14 = 40499114029655635LLU;

	t14 = (((x93^x94)*x95)-x96);

	if (t14 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x99 = INT8_MAX;
	uint64_t x100 = 954442171354983LLU;
	volatile uint64_t t15 = 0LLU;

	t15 = (((x97^x98)*x99)-x100);

	if (t15 != 18445789631538196506LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x108 = UINT16_MAX;
	volatile int32_t t16 = -11147;

	t16 = (((x105^x106)*x107)-x108);

	if (t16 != 32766) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x109 = -1;
	uint64_t x111 = 930560LLU;
	volatile uint64_t t17 = 5120985LLU;

	t17 = (((x109^x110)*x111)-x112);

	if (t17 != 2963773795328LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x126 = INT64_MAX;
	volatile uint64_t x127 = UINT64_MAX;
	volatile uint8_t x128 = 100U;

	t18 = (((x125^x126)*x127)-x128);

	if (t18 != 9223372036853483959LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x130 = -4633821;
	int32_t x131 = -1;
	volatile int32_t x132 = -1;
	int32_t t19 = 89;

	t19 = (((x129^x130)*x131)-x132);

	if (t19 != -4639522) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x133 = 4876;
	int16_t x134 = INT16_MIN;
	static volatile uint64_t x135 = 373944901848LLU;
	uint64_t t20 = 46998LLU;

	t20 = (((x133^x134)*x135)-x136);

	if (t20 != 18436314002507206295LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x137 = -1LL;
	int16_t x138 = INT16_MIN;
	int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MAX;
	volatile int64_t t21 = 21738205LL;

	t21 = (((x137^x138)*x139)-x140);

	if (t21 != -70366596726783LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x141 = INT64_MIN;
	int64_t x143 = -1LL;
	int8_t x144 = INT8_MIN;
	static volatile uint64_t t22 = 141237256936441907LLU;

	t22 = (((x141^x142)*x143)-x144);

	if (t22 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x146 = 19611688110747LLU;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	static uint64_t t23 = 42106944400LLU;

	t23 = (((x145^x146)*x147)-x148);

	if (t23 != 2510351039640192LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x149 = 250889U;
	uint8_t x150 = 3U;
	int16_t x151 = INT16_MAX;
	int16_t x152 = -1;
	uint32_t t24 = 12192U;

	t24 = (((x149^x150)*x151)-x152);

	if (t24 != 3925945335U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x161 = 344U;
	int8_t x163 = -1;
	volatile int8_t x164 = 1;
	volatile int32_t t25 = 23514;

	t25 = (((x161^x162)*x163)-x164);

	if (t25 != 344) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x177 = INT32_MAX;
	volatile int64_t x178 = INT64_MIN;
	static uint64_t x179 = 13524595LLU;
	int16_t x180 = INT16_MIN;

	t26 = (((x177^x178)*x179)-x180);

	if (t26 != 9252415883449606541LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x181 = UINT16_MAX;
	volatile int8_t x182 = -1;
	static int32_t x183 = -1;
	int32_t x184 = INT32_MAX;
	int32_t t27 = -5717594;

	t27 = (((x181^x182)*x183)-x184);

	if (t27 != -2147418111) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x185 = INT32_MIN;
	volatile int8_t x186 = INT8_MIN;
	int8_t x187 = -1;
	int32_t x188 = -1;
	volatile int32_t t28 = -1889;

	t28 = (((x185^x186)*x187)-x188);

	if (t28 != -2147483519) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x189 = INT8_MAX;
	int32_t x190 = -1;
	volatile uint32_t x191 = 168007U;
	int64_t t29 = -4922041051LL;

	t29 = (((x189^x190)*x191)-x192);

	if (t29 != 4268817028LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x193 = UINT16_MAX;
	volatile int64_t x194 = -51LL;
	static volatile int64_t t30 = 2204436336LL;

	t30 = (((x193^x194)*x195)-x196);

	if (t30 != -3977609489670LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x205 = INT16_MAX;
	int32_t x206 = -1;
	volatile int64_t x207 = -1LL;
	volatile int8_t x208 = INT8_MAX;

	t31 = (((x205^x206)*x207)-x208);

	if (t31 != 32641LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x213 = -39380999;
	uint16_t x214 = 232U;
	volatile uint32_t x215 = 1599322569U;
	uint32_t t32 = 671U;

	t32 = (((x213^x214)*x215)-x216);

	if (t32 != 2975820880U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x217 = 1U;
	int16_t x218 = INT16_MAX;
	volatile uint32_t t33 = 1226U;

	t33 = (((x217^x218)*x219)-x220);

	if (t33 != 4262330658U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x225 = INT32_MIN;
	uint64_t x226 = 454978515227252LLU;
	int8_t x227 = -1;
	static uint64_t t34 = 0LLU;

	t34 = (((x225^x226)*x227)-x228);

	if (t34 != 9223827013733199245LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x233 = INT8_MIN;
	uint32_t x234 = 99808U;
	int32_t x235 = INT32_MAX;
	int16_t x236 = INT16_MIN;
	volatile uint32_t t35 = 50U;

	t35 = (((x233^x234)*x235)-x236);

	if (t35 != 132512U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x237 = 100405772760636540LLU;
	volatile uint16_t x238 = 7U;
	int64_t x239 = INT64_MIN;
	static uint16_t x240 = 2U;
	static uint64_t t36 = 29708LLU;

	t36 = (((x237^x238)*x239)-x240);

	if (t36 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x241 = 734U;
	uint32_t x244 = 886739216U;

	t37 = (((x241^x242)*x243)-x244);

	if (t37 != 3426086095U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x245 = -1;
	int64_t x246 = -1LL;
	int32_t x247 = -1;
	int64_t t38 = -2929937LL;

	t38 = (((x245^x246)*x247)-x248);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = INT32_MIN;
	volatile uint32_t t39 = 377757318U;

	t39 = (((x249^x250)*x251)-x252);

	if (t39 != 126384899U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x253 = UINT8_MAX;
	uint16_t x254 = 4438U;
	static volatile int64_t x255 = -586LL;
	volatile int64_t x256 = -1LL;

	t40 = (((x253^x254)*x255)-x256);

	if (t40 != -2649305LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x257 = INT16_MIN;
	uint64_t x258 = 90074167775454LLU;
	int16_t x259 = -1800;
	static int32_t x260 = INT32_MAX;
	uint64_t t41 = 1056731375LLU;

	t41 = (((x257^x258)*x259)-x260);

	if (t41 != 162133499891771153LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x273 = 16087;
	uint8_t x274 = UINT8_MAX;
	int32_t x275 = -3653;
	volatile int16_t x276 = INT16_MAX;
	int32_t t42 = -6961384;

	t42 = (((x273^x274)*x275)-x276);

	if (t42 != -58159303) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x281 = INT16_MAX;
	uint16_t x282 = 484U;
	uint64_t x283 = UINT64_MAX;
	volatile uint64_t t43 = 9LLU;

	t43 = (((x281^x282)*x283)-x284);

	if (t43 != 18446744073709519461LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x285 = -2;
	volatile uint16_t x286 = UINT16_MAX;
	volatile int8_t x287 = INT8_MIN;
	volatile int32_t x288 = -76157796;
	static int32_t t44 = 1;

	t44 = (((x285^x286)*x287)-x288);

	if (t44 != 84546276) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	int64_t t45 = -59839750068567035LL;

	t45 = (((x289^x290)*x291)-x292);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x296 = 0;

	t46 = (((x293^x294)*x295)-x296);

	if (t46 != 274877906176LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x297 = -1LL;
	static int16_t x299 = -14179;
	volatile uint64_t x300 = UINT64_MAX;
	uint64_t t47 = 3450223357LLU;

	t47 = (((x297^x298)*x299)-x300);

	if (t47 != 2060293079230LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x302 = INT16_MIN;
	int64_t x303 = -234LL;
	volatile int16_t x304 = 1974;
	int64_t t48 = -489645764260LL;

	t48 = (((x301^x302)*x303)-x304);

	if (t48 != -1005021230250LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x306 = -1;
	int32_t x307 = -1;
	volatile int32_t t49 = 0;

	t49 = (((x305^x306)*x307)-x308);

	if (t49 != 653) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x309 = -1;
	volatile int16_t x310 = INT16_MIN;
	int64_t x311 = -1LL;
	volatile int8_t x312 = 21;
	static int64_t t50 = -6030285LL;

	t50 = (((x309^x310)*x311)-x312);

	if (t50 != -32788LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MAX;
	int8_t x319 = 1;
	int32_t t51 = -825830;

	t51 = (((x317^x318)*x319)-x320);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x325 = UINT8_MAX;
	static volatile uint16_t x326 = 2049U;
	uint16_t x327 = 279U;
	volatile uint16_t x328 = 201U;
	int32_t t52 = -977953;

	t52 = (((x325^x326)*x327)-x328);

	if (t52 != 642057) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	uint8_t x332 = 0U;
	static volatile uint64_t t53 = 4194815290LLU;

	t53 = (((x329^x330)*x331)-x332);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x333 = INT8_MAX;
	int8_t x334 = 7;
	int8_t x335 = -1;
	uint64_t x336 = 495725LLU;
	uint64_t t54 = 311633LLU;

	t54 = (((x333^x334)*x335)-x336);

	if (t54 != 18446744073709055771LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x344 = INT8_MIN;
	volatile uint64_t t55 = 10445447041465101LLU;

	t55 = (((x341^x342)*x343)-x344);

	if (t55 != 18446744071562100864LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x346 = -1;
	volatile int16_t x347 = -5968;
	uint8_t x348 = 0U;

	t56 = (((x345^x346)*x347)-x348);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x352 = 2017114426400LLU;
	volatile uint64_t t57 = 530069778426LLU;

	t57 = (((x349^x350)*x351)-x352);

	if (t57 != 8192321612618679468LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x353 = INT32_MIN;
	int8_t x354 = 1;
	static volatile int8_t x355 = 1;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t58 = -1;

	t58 = (((x353^x354)*x355)-x356);

	if (t58 != -2147450879) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x361 = INT32_MIN;
	uint64_t x363 = 949937954057921755LLU;
	volatile int16_t x364 = -773;

	t59 = (((x361^x362)*x363)-x364);

	if (t59 != 6691132516113318661LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x373 = -860LL;
	uint16_t x374 = 3U;
	volatile uint64_t t60 = 275512028660802LLU;

	t60 = (((x373^x374)*x375)-x376);

	if (t60 != 18446663523607940856LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x377 = INT16_MAX;
	static volatile uint16_t x378 = 3U;
	int16_t x379 = INT16_MIN;
	static int32_t x380 = INT32_MIN;
	int32_t t61 = -410;

	t61 = (((x377^x378)*x379)-x380);

	if (t61 != 1073872896) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x383 = -1;

	t62 = (((x381^x382)*x383)-x384);

	if (t62 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x385 = 254752LLU;
	int64_t x386 = -116248169LL;
	int16_t x388 = INT16_MIN;

	t63 = (((x385^x386)*x387)-x388);

	if (t63 != 18446720998161495707LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x389 = 104U;
	volatile int32_t x390 = -1;
	volatile uint64_t t64 = 1007019LLU;

	t64 = (((x389^x390)*x391)-x392);

	if (t64 != 18338630667328526529LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x395 = INT8_MIN;
	static uint64_t x396 = 438704719122702779LLU;
	uint64_t t65 = 178037085433651406LLU;

	t65 = (((x393^x394)*x395)-x396);

	if (t65 != 18008039354586793413LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x397 = -75695899157983LL;
	int32_t x398 = INT32_MAX;
	int32_t x400 = INT32_MAX;

	t66 = (((x397^x398)*x399)-x400);

	if (t66 != 9688990566125825LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x401 = -357;
	uint64_t x403 = 349LLU;
	static volatile int64_t x404 = -1LL;
	static uint64_t t67 = 67237037388LLU;

	t67 = (((x401^x402)*x403)-x404);

	if (t67 != 749471668560LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x410 = 21134245631430646LLU;
	static int32_t x411 = INT32_MIN;
	volatile uint64_t t68 = 641426298LLU;

	t68 = (((x409^x410)*x411)-x412);

	if (t68 != 9098818358932930560LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x433 = -1LL;
	static int8_t x435 = INT8_MAX;
	uint32_t x436 = 9U;
	uint64_t t69 = 10LLU;

	t69 = (((x433^x434)*x435)-x436);

	if (t69 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x437 = INT16_MIN;
	static uint32_t x438 = 243546747U;
	int16_t x439 = INT16_MIN;
	int16_t x440 = -1;
	volatile uint32_t t70 = 1189549160U;

	t70 = (((x437^x438)*x439)-x440);

	if (t70 != 583172097U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x449 = 179166934U;
	volatile uint8_t x450 = UINT8_MAX;
	int16_t x452 = -1;
	uint32_t t71 = 1387U;

	t71 = (((x449^x450)*x451)-x452);

	if (t71 != 4115800536U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x453 = 1305250735417008LLU;
	int32_t x454 = INT32_MIN;
	uint16_t x455 = UINT16_MAX;
	volatile uint64_t t72 = 37065799851695999LLU;

	t72 = (((x453^x454)*x455)-x456);

	if (t72 != 6694180332419324241LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x458 = UINT16_MAX;
	int32_t x459 = -1;
	static uint16_t x460 = UINT16_MAX;

	t73 = (((x457^x458)*x459)-x460);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x461 = INT8_MIN;
	int16_t x462 = 2;
	int64_t x463 = -375125612424LL;
	int64_t x464 = -1LL;
	volatile int64_t t74 = 8333140650745LL;

	t74 = (((x461^x462)*x463)-x464);

	if (t74 != 47265827165425LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x465 = INT16_MIN;
	volatile uint64_t x466 = 119LLU;
	volatile int64_t x467 = INT64_MIN;
	static uint32_t x468 = 331U;
	static volatile uint64_t t75 = 114939500717LLU;

	t75 = (((x465^x466)*x467)-x468);

	if (t75 != 9223372036854775477LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x473 = 3542U;
	volatile int16_t x475 = -1;
	int64_t t76 = 126LL;

	t76 = (((x473^x474)*x475)-x476);

	if (t76 != 9223372036854772267LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x477 = 1U;
	int16_t x478 = -1;
	volatile uint64_t x479 = 665714LLU;
	int8_t x480 = INT8_MIN;
	uint64_t t77 = 3584914LLU;

	t77 = (((x477^x478)*x479)-x480);

	if (t77 != 18446744073708220316LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x481 = INT16_MIN;
	volatile int16_t x482 = INT16_MAX;
	uint64_t x484 = UINT64_MAX;
	volatile uint64_t t78 = 2208682926LLU;

	t78 = (((x481^x482)*x483)-x484);

	if (t78 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x485 = -2;
	int8_t x486 = INT8_MIN;
	int32_t x488 = -8900;
	volatile uint64_t t79 = 2078328LLU;

	t79 = (((x485^x486)*x487)-x488);

	if (t79 != 37124LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x489 = -1;
	volatile uint64_t x490 = 60864238LLU;
	int8_t x492 = -34;
	uint64_t t80 = 413732217230139LLU;

	t80 = (((x489^x490)*x491)-x492);

	if (t80 != 18446744065979793297LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x493 = 3;
	static int16_t x495 = INT16_MIN;
	int32_t t81 = -2085223;

	t81 = (((x493^x494)*x495)-x496);

	if (t81 != -163964) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x497 = 140561715353340963LLU;
	volatile int64_t x498 = INT64_MAX;
	static uint32_t x499 = 0U;
	int16_t x500 = 5;
	static volatile uint64_t t82 = 206LLU;

	t82 = (((x497^x498)*x499)-x500);

	if (t82 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x501 = -501;
	int32_t x502 = -1;
	int16_t x504 = INT16_MIN;

	t83 = (((x501^x502)*x503)-x504);

	if (t83 != 32268) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x509 = 1305;
	int8_t x511 = -1;
	static int16_t x512 = INT16_MIN;
	int32_t t84 = -38693;

	t84 = (((x509^x510)*x511)-x512);

	if (t84 != 64231) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x523 = INT32_MIN;
	volatile int16_t x524 = -1;
	int32_t t85 = 63373;

	t85 = (((x521^x522)*x523)-x524);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x525 = -1;
	int32_t x526 = INT32_MIN;
	int16_t x528 = -1;
	static volatile uint64_t t86 = 1LLU;

	t86 = (((x525^x526)*x527)-x528);

	if (t86 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x530 = -1;
	int16_t x532 = 7;
	int32_t t87 = -951881;

	t87 = (((x529^x530)*x531)-x532);

	if (t87 != 452240) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x537 = INT16_MIN;
	uint32_t x538 = 50405U;
	int8_t x539 = -31;
	int32_t x540 = -1;

	t88 = (((x537^x538)*x539)-x540);

	if (t88 != 1484870U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x541 = 2022879609U;
	int16_t x542 = 1;
	static int32_t x543 = 1;
	uint8_t x544 = 71U;
	uint32_t t89 = 37330839U;

	t89 = (((x541^x542)*x543)-x544);

	if (t89 != 2022879537U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x545 = -1;
	uint16_t x547 = UINT16_MAX;
	uint64_t x548 = 15940729718LLU;

	t90 = (((x545^x546)*x547)-x548);

	if (t90 != 18446744059916207243LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x549 = 0U;
	int16_t x550 = -1;
	volatile int8_t x551 = INT8_MIN;
	static int8_t x552 = 27;
	int32_t t91 = -155257;

	t91 = (((x549^x550)*x551)-x552);

	if (t91 != 101) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x553 = -1LL;
	volatile uint64_t x554 = 55986441859LLU;
	static volatile uint8_t x555 = 100U;
	static volatile int8_t x556 = INT8_MIN;

	t92 = (((x553^x554)*x555)-x556);

	if (t92 != 18446738475065365744LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x569 = 4;
	uint8_t x571 = 0U;
	int16_t x572 = -4046;
	int32_t t93 = -811;

	t93 = (((x569^x570)*x571)-x572);

	if (t93 != 4046) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x573 = INT16_MIN;
	int16_t x574 = INT16_MIN;
	uint8_t x576 = UINT8_MAX;
	int32_t t94 = -1;

	t94 = (((x573^x574)*x575)-x576);

	if (t94 != -255) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x577 = INT32_MIN;
	int16_t x579 = INT16_MIN;
	uint32_t x580 = 15795158U;
	volatile int64_t t95 = -12997516376LL;

	t95 = (((x577^x578)*x579)-x580);

	if (t95 != -70368759940054LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x585 = 1;
	static int16_t x587 = 84;
	uint32_t x588 = UINT32_MAX;
	static volatile uint32_t t96 = 2659488U;

	t96 = (((x585^x586)*x587)-x588);

	if (t96 != 4292214869U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x590 = 0;
	int16_t x591 = -1;

	t97 = (((x589^x590)*x591)-x592);

	if (t97 != -10471) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x597 = INT64_MIN;
	int64_t x598 = -128129793494LL;
	uint64_t x599 = 179014LLU;
	uint64_t x600 = UINT64_MAX;
	uint64_t t98 = 52331723519636LLU;

	t98 = (((x597^x598)*x599)-x600);

	if (t98 != 18423807046857016701LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x601 = INT32_MAX;
	int32_t x603 = INT32_MAX;
	int64_t x604 = -131105LL;
	volatile int64_t t99 = 68129828679025989LL;

	t99 = (((x601^x602)*x603)-x604);

	if (t99 != 131105LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

