#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = -1;
int32_t x22 = INT32_MIN;
int16_t x24 = -1;
int64_t x29 = -25994559LL;
int32_t x31 = -1;
static int8_t x32 = -1;
static volatile uint64_t t5 = 233LLU;
volatile uint64_t t7 = 254960LLU;
int32_t x64 = INT32_MAX;
int32_t x71 = -1;
uint32_t x81 = 8365708U;
uint64_t t13 = 5477586524LLU;
int16_t x116 = -1;
volatile uint64_t t14 = 1659500883079188LLU;
volatile int64_t x117 = INT64_MIN;
volatile int64_t t15 = -1LL;
static int64_t x127 = -3132629309850420LL;
uint64_t x143 = 117089655243LLU;
int64_t t18 = -116541LL;
volatile uint16_t x169 = UINT16_MAX;
uint16_t x170 = 2U;
int32_t x171 = INT32_MIN;
static uint32_t x173 = 2666164U;
uint16_t x174 = 2684U;
uint32_t t20 = 0U;
int16_t x178 = INT16_MAX;
volatile int64_t x181 = -1223757794LL;
int16_t x186 = INT16_MIN;
static volatile uint32_t x187 = 64570188U;
uint32_t x223 = UINT32_MAX;
static uint32_t x234 = 68430674U;
int16_t x237 = 29;
int64_t x239 = 486206757384LL;
static uint16_t x240 = 3U;
volatile uint8_t x281 = UINT8_MAX;
int16_t x282 = INT16_MIN;
uint8_t x291 = UINT8_MAX;
int16_t x311 = INT16_MAX;
int32_t x318 = INT32_MIN;
static int32_t x319 = 19;
int32_t x339 = INT32_MIN;
volatile int64_t t37 = -9LL;
uint8_t x347 = 1U;
uint32_t x366 = 27511U;
uint32_t t43 = 0U;
int64_t x375 = INT64_MAX;
volatile int64_t t47 = -31141624458LL;
uint8_t x446 = 3U;
int8_t x448 = INT8_MAX;
static uint64_t t52 = UINT64_MAX;
uint32_t x463 = 7444050U;
int16_t x471 = INT16_MAX;
volatile uint32_t x475 = UINT32_MAX;
static int8_t x496 = INT8_MAX;
int8_t x512 = INT8_MIN;
volatile int32_t t57 = 446830;
int32_t x546 = -2769;
volatile uint32_t t60 = 718468420U;
int64_t x559 = 4518258LL;
int8_t x573 = INT8_MAX;
volatile uint64_t x575 = 2855100228658077LLU;
int16_t x580 = 1977;
uint16_t x588 = 26U;
uint64_t x589 = 1608627191126LLU;
int16_t x592 = INT16_MIN;
uint16_t x614 = 172U;
int8_t x616 = -1;
int8_t x622 = -56;
static int32_t x623 = INT32_MIN;
uint64_t x627 = UINT64_MAX;
volatile uint64_t t70 = UINT64_MAX;
volatile int8_t x630 = INT8_MIN;
int32_t x648 = -6;
volatile int8_t x649 = -5;
uint8_t x653 = 25U;
int64_t x655 = INT64_MAX;
uint16_t x656 = 20949U;
volatile int64_t t74 = -26671007LL;
static uint16_t x658 = 4053U;
int8_t x672 = INT8_MIN;
uint8_t x673 = 48U;
int16_t x681 = INT16_MAX;
uint64_t t80 = 6771296764379963139LLU;
volatile uint8_t x693 = UINT8_MAX;
int64_t t81 = 3116971811674564LL;
static uint16_t x711 = UINT16_MAX;
int16_t x727 = INT16_MIN;
uint64_t t85 = 27767838991LLU;
uint64_t x756 = 1186489252200285355LLU;
int8_t x765 = 7;
int16_t x779 = -363;
uint8_t x790 = 1U;
int16_t x793 = INT16_MIN;
uint32_t x794 = 55U;
int16_t x798 = -1;
uint32_t x799 = 203364U;
uint64_t x802 = 24681475789LLU;
int64_t x809 = 0LL;
static uint32_t x840 = UINT32_MAX;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MAX;
	int32_t x3 = INT32_MAX;
	volatile uint64_t t0 = 6776146LLU;

	t0 = ((x1|x2)/(x3/x4));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 29471U;
	int8_t x10 = 0;
	int8_t x11 = -1;
	static int64_t x12 = -1LL;
	volatile int64_t t1 = 838LL;

	t1 = ((x9|x10)/(x11/x12));

	if (t1 != 29471LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x21 = 5U;
	int16_t x23 = INT16_MAX;
	int32_t t2 = -351251539;

	t2 = ((x21|x22)/(x23/x24));

	if (t2 != 65537) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = 68606349U;
	int32_t x26 = INT32_MAX;
	int32_t x27 = 2592946;
	int8_t x28 = INT8_MIN;
	uint32_t t3 = 85592U;

	t3 = ((x25|x26)/(x27/x28));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x30 = -1LL;
	volatile int64_t t4 = -23573601219LL;

	t4 = ((x29|x30)/(x31/x32));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = -1;
	volatile int16_t x34 = 14007;
	uint64_t x35 = UINT64_MAX;
	static int8_t x36 = 6;

	t5 = ((x33|x34)/(x35/x36));

	if (t5 != 6LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -1;
	uint8_t x38 = 11U;
	int64_t x39 = INT64_MIN;
	int64_t x40 = 11148173197109301LL;
	static volatile int64_t t6 = 7587253472217LL;

	t6 = ((x37|x38)/(x39/x40));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x45 = 61372461087701740LL;
	int8_t x46 = INT8_MAX;
	volatile uint32_t x47 = 30115U;
	uint64_t x48 = 805LLU;

	t7 = ((x45|x46)/(x47/x48));

	if (t7 != 1658715164532479LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = INT16_MIN;
	uint16_t x62 = 2054U;
	int32_t x63 = INT32_MIN;
	static volatile int32_t t8 = -40;

	t8 = ((x61|x62)/(x63/x64));

	if (t8 != 30714) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x69 = -575864082;
	int8_t x70 = INT8_MIN;
	uint16_t x72 = 1U;
	static volatile int32_t t9 = 7;

	t9 = ((x69|x70)/(x71/x72));

	if (t9 != 18) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x82 = UINT64_MAX;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;
	volatile uint64_t t10 = 7703LLU;

	t10 = ((x81|x82)/(x83/x84));

	if (t10 != 65535LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x85 = -1;
	volatile uint64_t x86 = 761913394257LLU;
	uint32_t x87 = 204373341U;
	static uint8_t x88 = 30U;
	volatile uint64_t t11 = 1LLU;

	t11 = ((x85|x86)/(x87/x88));

	if (t11 != 2707801205222LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x105 = -1LL;
	volatile int64_t x106 = 1LL;
	volatile int64_t x107 = INT64_MIN;
	static volatile int8_t x108 = INT8_MIN;
	volatile int64_t t12 = -1039876083730LL;

	t12 = ((x105|x106)/(x107/x108));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x109 = 502LLU;
	static int64_t x110 = 54409027580051LL;
	volatile uint8_t x111 = 1U;
	volatile int8_t x112 = -1;

	t13 = ((x109|x110)/(x111/x112));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x113 = -1;
	uint64_t x114 = 22545940225001916LLU;
	int64_t x115 = 2842973361LL;

	t14 = ((x113|x114)/(x115/x116));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x118 = -1;
	static int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MIN;

	t15 = ((x117|x118)/(x119/x120));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x125 = 2365575746LL;
	int32_t x126 = 236926;
	int16_t x128 = INT16_MIN;
	static volatile int64_t t16 = 494043307397978593LL;

	t16 = ((x125|x126)/(x127/x128));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x141 = UINT32_MAX;
	volatile int8_t x142 = 1;
	uint8_t x144 = UINT8_MAX;
	static volatile uint64_t t17 = 12272003620LLU;

	t17 = ((x141|x142)/(x143/x144));

	if (t17 != 9LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x149 = INT32_MIN;
	int64_t x150 = -1LL;
	int16_t x151 = INT16_MIN;
	volatile uint16_t x152 = 10875U;

	t18 = ((x149|x150)/(x151/x152));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x172 = 53203853682889LLU;
	static volatile uint64_t t19 = 6371154LLU;

	t19 = ((x169|x170)/(x171/x172));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x175 = 2U;
	int32_t x176 = -1;

	t20 = ((x173|x174)/(x175/x176));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x177 = -57875;
	volatile uint32_t x179 = UINT32_MAX;
	int32_t x180 = -1;
	volatile uint32_t t21 = 2561U;

	t21 = ((x177|x178)/(x179/x180));

	if (t21 != 4294934527U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x182 = 4LL;
	int32_t x183 = INT32_MAX;
	volatile int8_t x184 = INT8_MIN;
	volatile int64_t t22 = 11990303326420328LL;

	t22 = ((x181|x182)/(x183/x184));

	if (t22 != 72LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x185 = INT64_MIN;
	int8_t x188 = INT8_MAX;
	volatile int64_t t23 = 113708LL;

	t23 = ((x185|x186)/(x187/x188));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x217 = 2007LLU;
	static uint8_t x218 = 5U;
	int16_t x219 = -21;
	int8_t x220 = 15;
	uint64_t t24 = 6082616728LLU;

	t24 = ((x217|x218)/(x219/x220));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x221 = INT8_MIN;
	static volatile uint32_t x222 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	uint32_t t25 = UINT32_MAX;

	t25 = ((x221|x222)/(x223/x224));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x225 = 24U;
	volatile int64_t x226 = -1LL;
	int64_t x227 = -448867605059146844LL;
	uint16_t x228 = UINT16_MAX;
	int64_t t26 = -1LL;

	t26 = ((x225|x226)/(x227/x228));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x233 = 16;
	int64_t x235 = INT64_MAX;
	uint32_t x236 = UINT32_MAX;
	int64_t t27 = 0LL;

	t27 = ((x233|x234)/(x235/x236));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x238 = UINT16_MAX;
	static volatile int64_t t28 = 21571765280LL;

	t28 = ((x237|x238)/(x239/x240));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x261 = 10033957U;
	volatile int64_t x262 = INT64_MIN;
	int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MIN;
	int64_t t29 = 410905753435956004LL;

	t29 = ((x261|x262)/(x263/x264));

	if (t29 != -127LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x283 = 3329597423LL;
	int16_t x284 = 23;
	volatile int64_t t30 = 0LL;

	t30 = ((x281|x282)/(x283/x284));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x285 = UINT32_MAX;
	int32_t x286 = INT32_MAX;
	volatile int16_t x287 = INT16_MIN;
	int8_t x288 = -1;
	static uint32_t t31 = 379375152U;

	t31 = ((x285|x286)/(x287/x288));

	if (t31 != 131071U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x289 = 5320221217LL;
	volatile int16_t x290 = INT16_MAX;
	int8_t x292 = INT8_MAX;
	volatile int64_t t32 = -15760LL;

	t32 = ((x289|x290)/(x291/x292));

	if (t32 != 2660122623LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x309 = INT64_MAX;
	int16_t x310 = INT16_MAX;
	int8_t x312 = -12;
	int64_t t33 = -33575072761517LL;

	t33 = ((x309|x310)/(x311/x312));

	if (t33 != -3378524555624460LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x313 = 34;
	uint8_t x314 = 19U;
	static int64_t x315 = INT64_MAX;
	int64_t x316 = 2260765090LL;
	volatile int64_t t34 = 172774LL;

	t34 = ((x313|x314)/(x315/x316));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x317 = INT64_MAX;
	uint8_t x320 = 2U;
	volatile int64_t t35 = -83815588254801LL;

	t35 = ((x317|x318)/(x319/x320));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = -1;
	static uint16_t x323 = UINT16_MAX;
	uint8_t x324 = 43U;
	static int32_t t36 = -899728693;

	t36 = ((x321|x322)/(x323/x324));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x337 = UINT16_MAX;
	uint8_t x338 = 41U;
	static int64_t x340 = 504591LL;

	t37 = ((x337|x338)/(x339/x340));

	if (t37 != -15LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	volatile int16_t x344 = INT16_MAX;
	int64_t t38 = 924LL;

	t38 = ((x341|x342)/(x343/x344));

	if (t38 != 128LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x345 = 64054039978765LL;
	uint16_t x346 = 22U;
	volatile int64_t x348 = -1LL;
	int64_t t39 = 9LL;

	t39 = ((x345|x346)/(x347/x348));

	if (t39 != -64054039978783LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x349 = 441847578U;
	static uint64_t x350 = 1LLU;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = INT32_MIN;
	uint64_t t40 = 730355505963358942LLU;

	t40 = ((x349|x350)/(x351/x352));

	if (t40 != 441847579LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MAX;
	int16_t x355 = -1;
	uint64_t x356 = 141LLU;
	volatile uint64_t t41 = 1381287114950148LLU;

	t41 = ((x353|x354)/(x355/x356));

	if (t41 != 141LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x357 = INT64_MAX;
	static volatile uint64_t x358 = 738LLU;
	volatile int8_t x359 = 1;
	static int32_t x360 = -1;
	volatile uint64_t t42 = 148967784027LLU;

	t42 = ((x357|x358)/(x359/x360));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x365 = 1331;
	int16_t x367 = INT16_MIN;
	static int8_t x368 = -1;

	t43 = ((x365|x366)/(x367/x368));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x369 = 1053264U;
	int16_t x370 = INT16_MIN;
	int64_t x371 = 13058640598LL;
	volatile int32_t x372 = 265727346;
	volatile int64_t t44 = 453391LL;

	t44 = ((x369|x370)/(x371/x372));

	if (t44 != 87651820LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x373 = -14017;
	int8_t x374 = 1;
	int32_t x376 = -64153;
	static int64_t t45 = -8001611LL;

	t45 = ((x373|x374)/(x375/x376));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x389 = INT64_MIN;
	volatile int32_t x390 = -1;
	int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MIN;
	int64_t t46 = 10017LL;

	t46 = ((x389|x390)/(x391/x392));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x397 = INT8_MIN;
	int64_t x398 = -426612LL;
	uint16_t x399 = UINT16_MAX;
	uint32_t x400 = 7U;

	t47 = ((x397|x398)/(x399/x400));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x417 = INT16_MIN;
	static int8_t x418 = INT8_MAX;
	int32_t x419 = 277;
	int16_t x420 = -1;
	int32_t t48 = -12795;

	t48 = ((x417|x418)/(x419/x420));

	if (t48 != 117) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x421 = -127;
	uint32_t x422 = 9446384U;
	static uint8_t x423 = UINT8_MAX;
	int8_t x424 = 54;
	volatile uint32_t t49 = 394919954U;

	t49 = ((x421|x422)/(x423/x424));

	if (t49 != 1073741820U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x445 = UINT32_MAX;
	int64_t x447 = INT64_MAX;
	volatile int64_t t50 = -52456853LL;

	t50 = ((x445|x446)/(x447/x448));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x449 = -1;
	static volatile uint16_t x450 = 0U;
	int64_t x451 = INT64_MIN;
	int32_t x452 = INT32_MIN;
	int64_t t51 = 3916966296209LL;

	t51 = ((x449|x450)/(x451/x452));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x453 = 14U;
	static int64_t x454 = -1LL;
	int16_t x455 = -1;
	uint64_t x456 = UINT64_MAX;

	t52 = ((x453|x454)/(x455/x456));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x461 = 29;
	static int16_t x462 = INT16_MAX;
	uint16_t x464 = UINT16_MAX;
	uint32_t t53 = 4586190U;

	t53 = ((x461|x462)/(x463/x464));

	if (t53 != 289U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x469 = 2625169;
	int8_t x470 = INT8_MIN;
	static int16_t x472 = INT16_MAX;
	volatile int32_t t54 = -935;

	t54 = ((x469|x470)/(x471/x472));

	if (t54 != -111) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x473 = -94;
	uint16_t x474 = 1U;
	uint32_t x476 = UINT32_MAX;
	uint32_t t55 = 52825U;

	t55 = ((x473|x474)/(x475/x476));

	if (t55 != 4294967203U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x493 = INT64_MIN;
	uint8_t x494 = 0U;
	int64_t x495 = INT64_MIN;
	static int64_t t56 = 174434497LL;

	t56 = ((x493|x494)/(x495/x496));

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x509 = -1;
	int32_t x510 = -128469;
	volatile int16_t x511 = INT16_MIN;

	t57 = ((x509|x510)/(x511/x512));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x517 = -10;
	volatile uint32_t x518 = UINT32_MAX;
	int64_t x519 = INT64_MAX;
	uint16_t x520 = UINT16_MAX;
	int64_t t58 = -82612027LL;

	t58 = ((x517|x518)/(x519/x520));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x533 = INT32_MIN;
	int8_t x534 = INT8_MIN;
	uint8_t x535 = UINT8_MAX;
	static uint16_t x536 = 27U;
	volatile int32_t t59 = 50979929;

	t59 = ((x533|x534)/(x535/x536));

	if (t59 != -14) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x545 = 43U;
	uint32_t x547 = 1901049324U;
	uint16_t x548 = 27911U;

	t60 = ((x545|x546)/(x547/x548));

	if (t60 != 63058U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x557 = 233419253699188987LLU;
	int64_t x558 = INT64_MIN;
	volatile int16_t x560 = -1;
	uint64_t t61 = 453118646482LLU;

	t61 = ((x557|x558)/(x559/x560));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x574 = 146087708;
	uint32_t x576 = 32567U;
	static volatile uint64_t t62 = 4871174863954803624LLU;

	t62 = ((x573|x574)/(x575/x576));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x577 = -1;
	uint8_t x578 = 14U;
	uint64_t x579 = 1998426328LLU;
	volatile uint64_t t63 = 39624575299982829LLU;

	t63 = ((x577|x578)/(x579/x580));

	if (t63 != 18248979878763LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x585 = 1;
	uint8_t x586 = 0U;
	int64_t x587 = INT64_MIN;
	int64_t t64 = 6570346LL;

	t64 = ((x585|x586)/(x587/x588));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x590 = -1;
	static int32_t x591 = -610173;
	volatile uint64_t t65 = 59168LLU;

	t65 = ((x589|x590)/(x591/x592));

	if (t65 != 1024819115206086200LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x593 = 25468177196023247LLU;
	int8_t x594 = INT8_MIN;
	static int16_t x595 = -11852;
	int32_t x596 = -1;
	uint64_t t66 = 258305506LLU;

	t66 = ((x593|x594)/(x595/x596));

	if (t66 != 1556424575912044LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x605 = INT64_MIN;
	uint8_t x606 = UINT8_MAX;
	int8_t x607 = INT8_MIN;
	volatile int8_t x608 = 59;
	volatile int64_t t67 = -7396276782387LL;

	t67 = ((x605|x606)/(x607/x608));

	if (t67 != 4611686018427387776LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x613 = UINT16_MAX;
	uint16_t x615 = 74U;
	int32_t t68 = -1156884;

	t68 = ((x613|x614)/(x615/x616));

	if (t68 != -885) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x621 = 0;
	int8_t x624 = INT8_MAX;
	int32_t t69 = -17;

	t69 = ((x621|x622)/(x623/x624));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x625 = UINT64_MAX;
	volatile int64_t x626 = INT64_MIN;
	int64_t x628 = -9LL;

	t70 = ((x625|x626)/(x627/x628));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x629 = 10771576LLU;
	int64_t x631 = INT64_MAX;
	int32_t x632 = 5;
	volatile uint64_t t71 = 43651475250447431LLU;

	t71 = ((x629|x630)/(x631/x632));

	if (t71 != 9LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x645 = -2;
	int16_t x646 = INT16_MIN;
	uint16_t x647 = 1434U;
	static volatile int32_t t72 = 73604;

	t72 = ((x645|x646)/(x647/x648));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x650 = -1;
	int32_t x651 = INT32_MIN;
	uint8_t x652 = 33U;
	static int32_t t73 = -27;

	t73 = ((x649|x650)/(x651/x652));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x654 = INT8_MIN;

	t74 = ((x653|x654)/(x655/x656));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x657 = INT32_MAX;
	static volatile int16_t x659 = INT16_MIN;
	int16_t x660 = INT16_MIN;
	int32_t t75 = INT32_MAX;

	t75 = ((x657|x658)/(x659/x660));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x661 = 0;
	int16_t x662 = -1;
	int8_t x663 = INT8_MIN;
	uint32_t x664 = 264U;
	uint32_t t76 = 991259550U;

	t76 = ((x661|x662)/(x663/x664));

	if (t76 != 264U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x669 = INT64_MIN;
	int64_t x670 = -371313159LL;
	volatile int64_t x671 = INT64_MIN;
	volatile int64_t t77 = -2500170267703939LL;

	t77 = ((x669|x670)/(x671/x672));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x674 = INT32_MAX;
	uint64_t x675 = 13229636100075LLU;
	volatile int16_t x676 = 18;
	uint64_t t78 = 307605460071957451LLU;

	t78 = ((x673|x674)/(x675/x676));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x682 = -462119610LL;
	uint64_t x683 = UINT64_MAX;
	static int32_t x684 = INT32_MIN;
	static volatile uint64_t t79 = 176563LLU;

	t79 = ((x681|x682)/(x683/x684));

	if (t79 != 18446744073247457279LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x689 = 2U;
	int8_t x690 = 13;
	static uint64_t x691 = UINT64_MAX;
	int16_t x692 = INT16_MIN;

	t80 = ((x689|x690)/(x691/x692));

	if (t80 != 15LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x694 = -8105;
	volatile int64_t x695 = 51240758706846437LL;
	volatile int8_t x696 = INT8_MIN;

	t81 = ((x693|x694)/(x695/x696));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x705 = 15U;
	int32_t x706 = -1;
	int16_t x707 = INT16_MAX;
	volatile int8_t x708 = INT8_MAX;
	volatile int32_t t82 = 266671383;

	t82 = ((x705|x706)/(x707/x708));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x709 = 848937348LLU;
	volatile int16_t x710 = -1;
	uint32_t x712 = 56U;
	volatile uint64_t t83 = 38477LLU;

	t83 = ((x709|x710)/(x711/x712));

	if (t83 != 15766447926247480LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x713 = 113521838LL;
	int64_t x714 = INT64_MIN;
	uint32_t x715 = 250040955U;
	uint32_t x716 = 234285319U;
	int64_t t84 = 3701295LL;

	t84 = ((x713|x714)/(x715/x716));

	if (t84 != -9223372036741253970LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x725 = INT16_MIN;
	uint8_t x726 = 23U;
	static volatile uint64_t x728 = 4423972LLU;

	t85 = ((x725|x726)/(x727/x728));

	if (t85 != 4423972LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x733 = -1;
	volatile int64_t x734 = INT64_MIN;
	volatile int32_t x735 = INT32_MIN;
	int16_t x736 = INT16_MIN;
	volatile int64_t t86 = -4061475267014102027LL;

	t86 = ((x733|x734)/(x735/x736));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x753 = UINT8_MAX;
	uint64_t x754 = UINT64_MAX;
	static volatile int16_t x755 = -1;
	uint64_t t87 = 59398LLU;

	t87 = ((x753|x754)/(x755/x756));

	if (t87 != 1229782938247303441LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x766 = -1;
	int64_t x767 = -27626LL;
	int64_t x768 = -1LL;
	volatile int64_t t88 = -64292296505LL;

	t88 = ((x765|x766)/(x767/x768));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x773 = 3875U;
	uint8_t x774 = UINT8_MAX;
	int32_t x775 = -354674405;
	volatile int8_t x776 = -1;
	volatile int32_t t89 = 1;

	t89 = ((x773|x774)/(x775/x776));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x777 = UINT32_MAX;
	int16_t x778 = -1;
	int64_t x780 = -1LL;
	volatile int64_t t90 = 3151818188748LL;

	t90 = ((x777|x778)/(x779/x780));

	if (t90 != 11831865LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x785 = UINT32_MAX;
	volatile int32_t x786 = INT32_MIN;
	int16_t x787 = INT16_MAX;
	static int32_t x788 = -1;
	uint32_t t91 = 142583U;

	t91 = ((x785|x786)/(x787/x788));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x789 = INT32_MIN;
	int64_t x791 = INT64_MIN;
	static uint32_t x792 = UINT32_MAX;
	int64_t t92 = -1LL;

	t92 = ((x789|x790)/(x791/x792));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x795 = INT8_MAX;
	int8_t x796 = -54;
	volatile uint32_t t93 = 40U;

	t93 = ((x793|x794)/(x795/x796));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x797 = 1U;
	static int16_t x800 = INT16_MAX;
	uint32_t t94 = 3488U;

	t94 = ((x797|x798)/(x799/x800));

	if (t94 != 715827882U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x801 = INT32_MIN;
	int64_t x803 = INT64_MIN;
	static volatile uint16_t x804 = UINT16_MAX;
	volatile uint64_t t95 = 7200479LLU;

	t95 = ((x801|x802)/(x803/x804));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x810 = INT8_MIN;
	int16_t x811 = INT16_MAX;
	volatile uint8_t x812 = 22U;
	volatile int64_t t96 = -14728430257012109LL;

	t96 = ((x809|x810)/(x811/x812));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x825 = 3LL;
	int8_t x826 = 3;
	volatile int64_t x827 = INT64_MIN;
	int8_t x828 = INT8_MIN;
	volatile int64_t t97 = 16237931961LL;

	t97 = ((x825|x826)/(x827/x828));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x833 = INT8_MIN;
	int8_t x834 = INT8_MAX;
	int8_t x835 = INT8_MAX;
	uint8_t x836 = 10U;
	int32_t t98 = 1801048;

	t98 = ((x833|x834)/(x835/x836));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x837 = -1;
	int8_t x838 = -1;
	int16_t x839 = -1;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = ((x837|x838)/(x839/x840));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

