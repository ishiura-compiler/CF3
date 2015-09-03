#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x12 = 4LLU;
int8_t x25 = 11;
static int16_t x50 = -12;
int16_t x63 = INT16_MIN;
volatile int64_t x65 = INT64_MIN;
int32_t x80 = -28;
static volatile int64_t t9 = -84050988640LL;
uint32_t x103 = UINT32_MAX;
int8_t x106 = 0;
volatile uint8_t x107 = 2U;
static volatile uint16_t x109 = 11U;
uint8_t x123 = 44U;
int64_t t15 = -3LL;
volatile int32_t t16 = -7825;
uint64_t x139 = 170LLU;
uint64_t x140 = 19LLU;
int8_t x146 = -1;
int8_t x163 = -12;
int16_t x169 = -1606;
uint32_t x170 = UINT32_MAX;
int64_t x173 = INT64_MIN;
static uint16_t x176 = UINT16_MAX;
volatile int64_t t24 = 53564620300313LL;
int8_t x177 = -1;
int32_t x179 = 641932004;
volatile int32_t x199 = INT32_MIN;
uint32_t t27 = 82U;
uint16_t x215 = 921U;
int16_t x243 = INT16_MIN;
int32_t x263 = INT32_MAX;
static int64_t t35 = 2894362LL;
uint64_t t36 = 421191103277205LLU;
static volatile uint64_t t38 = 227555259614214796LLU;
static int64_t x307 = INT64_MIN;
volatile uint8_t x308 = 97U;
volatile int64_t t40 = 382336408033LL;
uint32_t t41 = 10473U;
static int64_t x315 = -411220879966568011LL;
uint64_t t42 = 8688334465LLU;
int32_t x349 = INT32_MIN;
int16_t x350 = -1;
static int32_t x352 = INT32_MIN;
static uint32_t t47 = 628486U;
int32_t x376 = 22969;
uint64_t t52 = 25902LLU;
int64_t x381 = 1095275LL;
int32_t x383 = -14009930;
int64_t x411 = INT64_MIN;
int64_t t54 = -1713796589LL;
int8_t x418 = 1;
volatile int16_t x419 = INT16_MIN;
int64_t t55 = -421765543049949LL;
int8_t x425 = INT8_MIN;
int8_t x428 = -5;
volatile int64_t t58 = 1494717186LL;
int64_t x437 = 97838LL;
uint64_t t62 = 15539080LLU;
static int32_t x472 = INT32_MIN;
volatile int32_t t63 = -154928164;
uint64_t t64 = 32525591113130LLU;
uint16_t x488 = UINT16_MAX;
volatile int32_t t65 = 214211;
uint64_t x500 = 277425LLU;
int8_t x508 = INT8_MIN;
static int16_t x512 = -1;
static int32_t x515 = INT32_MIN;
int8_t x521 = -1;
uint64_t x523 = 3942349915225743LLU;
int64_t t72 = 65179LL;
volatile int16_t x542 = INT16_MIN;
int64_t x543 = INT64_MIN;
volatile uint8_t x546 = 2U;
int64_t x553 = -1LL;
uint16_t x554 = UINT16_MAX;
int16_t x559 = INT16_MAX;
static int16_t x569 = -235;
static uint32_t t78 = 13384125U;
volatile uint64_t t79 = 1297422872734289LLU;
int8_t x580 = -1;
int16_t x582 = -2;
uint64_t x584 = 1632676638760055LLU;
uint64_t t81 = 70049971455LLU;
int8_t x586 = -1;
int8_t x588 = 3;
int8_t x593 = INT8_MIN;
int32_t x601 = INT32_MAX;
volatile uint8_t x603 = 118U;
static volatile int32_t t84 = -1968842;
uint64_t x618 = 3656LLU;
int32_t x634 = -317334222;
volatile int64_t x641 = 2970LL;
int64_t x644 = -1LL;
int64_t t90 = 744089876332688LL;
int16_t x651 = INT16_MIN;
uint32_t x652 = 79946U;
int16_t x663 = 237;
int64_t x667 = 1007790855LL;
int32_t x682 = INT32_MAX;
volatile int32_t t95 = -114;
int16_t x686 = INT16_MIN;
volatile int8_t x688 = 5;
uint16_t x696 = 6340U;
volatile uint32_t t99 = 2189U;


void f0(void) {
	volatile int8_t x9 = INT8_MIN;
	uint32_t x10 = 41267U;
	int16_t x11 = INT16_MAX;
	volatile uint64_t t0 = 7LLU;

	t0 = ((x9^x10)/(x11/x12));

	if (t0 != 524346LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x26 = -23;
	static volatile int32_t x27 = 8802;
	int8_t x28 = INT8_MAX;
	volatile int32_t t1 = 8036;

	t1 = ((x25^x26)/(x27/x28));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x49 = -1;
	int64_t x51 = -167213347584340LL;
	volatile int64_t x52 = 664523LL;
	int64_t t2 = -570169100006005LL;

	t2 = ((x49^x50)/(x51/x52));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x57 = 3U;
	int8_t x58 = 8;
	int8_t x59 = -1;
	int8_t x60 = -1;
	int32_t t3 = -20;

	t3 = ((x57^x58)/(x59/x60));

	if (t3 != 11) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x61 = -95;
	int8_t x62 = INT8_MIN;
	uint64_t x64 = 25571135882077LLU;
	volatile uint64_t t4 = 132686269724LLU;

	t4 = ((x61^x62)/(x63/x64));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MAX;
	int16_t x68 = -5;
	volatile int64_t t5 = -184793347LL;

	t5 = ((x65^x66)/(x67/x68));

	if (t5 != -21474836509LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x73 = INT16_MAX;
	static int64_t x74 = INT64_MAX;
	int8_t x75 = -1;
	uint32_t x76 = 368U;
	volatile int64_t t6 = 4879953128957625LL;

	t6 = ((x73^x74)/(x75/x76));

	if (t6 != 790274035456LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x77 = 1740U;
	int8_t x78 = -1;
	uint16_t x79 = 326U;
	static uint32_t t7 = 3632636U;

	t7 = ((x77^x78)/(x79/x80));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x93 = INT8_MIN;
	uint64_t x94 = 129756399511LLU;
	int64_t x95 = -6329LL;
	volatile int64_t x96 = 111LL;
	volatile uint64_t t8 = 601279535858882LLU;

	t8 = ((x93^x94)/(x95/x96));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x97 = 380U;
	volatile int32_t x98 = -4409214;
	int64_t x99 = INT64_MIN;
	volatile uint16_t x100 = 12912U;

	t9 = ((x97^x98)/(x99/x100));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x101 = 617;
	uint8_t x102 = 43U;
	uint32_t x104 = 6221994U;
	uint32_t t10 = 410U;

	t10 = ((x101^x102)/(x103/x104));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x105 = 3705587974LL;
	int64_t x108 = -1LL;
	volatile int64_t t11 = -19707921LL;

	t11 = ((x105^x106)/(x107/x108));

	if (t11 != -1852793987LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MIN;
	int64_t t12 = -20LL;

	t12 = ((x109^x110)/(x111/x112));

	if (t12 != -32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x113 = -1;
	uint64_t x114 = UINT64_MAX;
	int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MAX;
	uint64_t t13 = 3214323081908998LLU;

	t13 = ((x113^x114)/(x115/x116));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x121 = INT64_MIN;
	volatile int8_t x122 = -1;
	volatile uint32_t x124 = 10U;
	volatile int64_t t14 = -2445813007LL;

	t14 = ((x121^x122)/(x123/x124));

	if (t14 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x125 = INT64_MAX;
	int16_t x126 = 1;
	int64_t x127 = INT64_MAX;
	uint8_t x128 = UINT8_MAX;

	t15 = ((x125^x126)/(x127/x128));

	if (t15 != 255LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x129 = -10650358;
	int8_t x130 = -7;
	volatile int16_t x131 = INT16_MIN;
	int32_t x132 = -1;

	t16 = ((x129^x130)/(x131/x132));

	if (t16 != 325) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x137 = INT8_MAX;
	volatile int8_t x138 = INT8_MIN;
	static uint64_t t17 = 57104807LLU;

	t17 = ((x137^x138)/(x139/x140));

	if (t17 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x141 = 5U;
	static int64_t x142 = INT64_MAX;
	int32_t x143 = -1;
	uint64_t x144 = 707LLU;
	uint64_t t18 = 431271378734LLU;

	t18 = ((x141^x142)/(x143/x144));

	if (t18 != 353LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x145 = -1;
	volatile int8_t x147 = INT8_MIN;
	volatile int64_t x148 = -1LL;
	static int64_t t19 = 437784230000015LL;

	t19 = ((x145^x146)/(x147/x148));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x157 = 3651315886LLU;
	int32_t x158 = -12;
	int16_t x159 = INT16_MIN;
	int16_t x160 = -84;
	volatile uint64_t t20 = 48559LLU;

	t20 = ((x157^x158)/(x159/x160));

	if (t20 != 47299343769380091LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x161 = 5266U;
	int8_t x162 = -6;
	uint8_t x164 = 1U;
	int32_t t21 = -3;

	t21 = ((x161^x162)/(x163/x164));

	if (t21 != 439) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x165 = 18U;
	int16_t x166 = INT16_MAX;
	int8_t x167 = -1;
	uint64_t x168 = 494LLU;
	uint64_t t22 = 2269828129537619861LLU;

	t22 = ((x165^x166)/(x167/x168));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x171 = -169LL;
	int32_t x172 = 4;
	int64_t t23 = 0LL;

	t23 = ((x169^x170)/(x171/x172));

	if (t23 != -38LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x174 = INT16_MIN;
	volatile int64_t x175 = INT64_MAX;

	t24 = ((x173^x174)/(x175/x176));

	if (t24 != 65535LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x178 = UINT8_MAX;
	int8_t x180 = INT8_MIN;
	volatile int32_t t25 = -13766700;

	t25 = ((x177^x178)/(x179/x180));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MAX;
	volatile uint8_t x187 = UINT8_MAX;
	volatile int16_t x188 = 3;
	int64_t t26 = 435682184LL;

	t26 = ((x185^x186)/(x187/x188));

	if (t26 != -108510259231850496LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x197 = 3U;
	uint32_t x198 = UINT32_MAX;
	int8_t x200 = INT8_MIN;

	t27 = ((x197^x198)/(x199/x200));

	if (t27 != 255U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x209 = -1;
	volatile int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MAX;
	volatile int8_t x212 = 5;
	static volatile int32_t t28 = -55454;

	t28 = ((x209^x210)/(x211/x212));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x213 = 165392827384358LLU;
	int16_t x214 = 1;
	volatile int8_t x216 = -60;
	volatile uint64_t t29 = 3626LLU;

	t29 = ((x213^x214)/(x215/x216));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = INT8_MIN;
	int32_t x227 = 28671;
	static volatile uint16_t x228 = 8U;
	static volatile int32_t t30 = -960;

	t30 = ((x225^x226)/(x227/x228));

	if (t30 != 599353) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x233 = INT8_MIN;
	static int16_t x234 = -151;
	uint16_t x235 = 744U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t31 = -536;

	t31 = ((x233^x234)/(x235/x236));

	if (t31 != -46) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x241 = -2;
	volatile uint8_t x242 = 2U;
	int8_t x244 = INT8_MAX;
	int32_t t32 = 790024633;

	t32 = ((x241^x242)/(x243/x244));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x249 = 28U;
	int32_t x250 = INT32_MAX;
	int64_t x251 = INT64_MAX;
	volatile int64_t x252 = INT64_MAX;
	volatile int64_t t33 = 6704533131LL;

	t33 = ((x249^x250)/(x251/x252));

	if (t33 != 2147483619LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = 11;
	static volatile int32_t x259 = INT32_MIN;
	static uint16_t x260 = UINT16_MAX;
	int32_t t34 = 186;

	t34 = ((x257^x258)/(x259/x260));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x261 = 152704LL;
	int8_t x262 = INT8_MIN;
	int64_t x264 = -1LL;

	t35 = ((x261^x262)/(x263/x264));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x265 = -1;
	uint64_t x266 = 2216LLU;
	static int32_t x267 = -1;
	int16_t x268 = -1;

	t36 = ((x265^x266)/(x267/x268));

	if (t36 != 18446744073709549399LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x270 = 1031558U;
	int16_t x271 = -1;
	uint64_t x272 = 16156298013085LLU;
	uint64_t t37 = 11812321643LLU;

	t37 = ((x269^x270)/(x271/x272));

	if (t37 != 8078149008253LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x285 = 0;
	uint64_t x286 = 1065LLU;
	static int32_t x287 = INT32_MIN;
	uint64_t x288 = 131675961102935LLU;

	t38 = ((x285^x286)/(x287/x288));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x297 = INT64_MIN;
	int64_t x298 = 67739015LL;
	uint64_t x299 = UINT64_MAX;
	static int8_t x300 = 1;
	static uint64_t t39 = 1742230LLU;

	t39 = ((x297^x298)/(x299/x300));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x305 = UINT32_MAX;
	int16_t x306 = INT16_MAX;

	t40 = ((x305^x306)/(x307/x308));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x309 = INT16_MIN;
	volatile uint32_t x310 = 64911711U;
	volatile int16_t x311 = INT16_MIN;
	int16_t x312 = -1;

	t41 = ((x309^x310)/(x311/x312));

	if (t41 != 129091U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x313 = INT16_MAX;
	volatile uint64_t x314 = 970588451509838010LLU;
	int32_t x316 = -1;

	t42 = ((x313^x314)/(x315/x316));

	if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int32_t x318 = INT32_MIN;
	static int8_t x319 = -1;
	static uint32_t x320 = UINT32_MAX;
	uint64_t t43 = 193LLU;

	t43 = ((x317^x318)/(x319/x320));

	if (t43 != 2147483647LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x325 = INT8_MAX;
	volatile int16_t x326 = -1;
	volatile uint16_t x327 = UINT16_MAX;
	static int16_t x328 = 19;
	volatile int32_t t44 = -1;

	t44 = ((x325^x326)/(x327/x328));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x341 = INT64_MIN;
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	int16_t x344 = INT16_MIN;
	int64_t t45 = 647788776409LL;

	t45 = ((x341^x342)/(x343/x344));

	if (t45 != 32767LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x351 = UINT64_MAX;
	static uint64_t t46 = 2LLU;

	t46 = ((x349^x350)/(x351/x352));

	if (t46 != 2147483647LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x353 = 2322071U;
	int32_t x354 = INT32_MIN;
	static uint32_t x355 = 221173620U;
	uint32_t x356 = 332U;

	t47 = ((x353^x354)/(x355/x356));

	if (t47 != 3227U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x358 = INT32_MIN;
	uint16_t x359 = 2U;
	uint64_t x360 = 1LLU;
	uint64_t t48 = 394111642981059124LLU;

	t48 = ((x357^x358)/(x359/x360));

	if (t48 != 1073741823LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x361 = 94U;
	int8_t x362 = INT8_MAX;
	volatile int16_t x363 = INT16_MIN;
	static uint8_t x364 = UINT8_MAX;
	volatile int32_t t49 = 54;

	t49 = ((x361^x362)/(x363/x364));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x369 = 266015769567768LLU;
	int16_t x370 = INT16_MIN;
	int64_t x371 = -2743275584498LL;
	uint8_t x372 = UINT8_MAX;
	static uint64_t t50 = 97875029LLU;

	t50 = ((x369^x370)/(x371/x372));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x373 = INT16_MIN;
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = INT64_MIN;
	volatile uint64_t t51 = 88937352704373LLU;

	t51 = ((x373^x374)/(x375/x376));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x377 = INT32_MAX;
	static int8_t x378 = 23;
	volatile uint64_t x379 = UINT64_MAX;
	static int16_t x380 = 14817;

	t52 = ((x377^x378)/(x379/x380));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x382 = INT32_MAX;
	int8_t x384 = INT8_MIN;
	int64_t t53 = 21474348LL;

	t53 = ((x381^x382)/(x383/x384));

	if (t53 != 19610LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x409 = INT64_MIN;
	int16_t x410 = 1;
	static int64_t x412 = INT64_MIN;

	t54 = ((x409^x410)/(x411/x412));

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x417 = INT64_MIN;
	static uint32_t x420 = 2574U;

	t55 = ((x417^x418)/(x419/x420));

	if (t55 != -5527667510009LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x426 = INT8_MAX;
	static int8_t x427 = -14;
	volatile int32_t t56 = -121993002;

	t56 = ((x425^x426)/(x427/x428));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x429 = 2;
	int64_t x430 = INT64_MAX;
	int32_t x431 = -5620;
	static volatile int64_t x432 = 3194LL;
	static int64_t t57 = -90043307206LL;

	t57 = ((x429^x430)/(x431/x432));

	if (t57 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x433 = INT16_MIN;
	int16_t x434 = INT16_MIN;
	uint32_t x435 = UINT32_MAX;
	int64_t x436 = -1LL;

	t58 = ((x433^x434)/(x435/x436));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x438 = INT64_MAX;
	int64_t x439 = INT64_MIN;
	static int32_t x440 = INT32_MAX;
	int64_t t59 = -32371964LL;

	t59 = ((x437^x438)/(x439/x440));

	if (t59 != -2147483646LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x449 = INT16_MIN;
	int8_t x450 = INT8_MIN;
	int8_t x451 = INT8_MIN;
	static uint32_t x452 = 7U;
	uint32_t t60 = 6014748U;

	t60 = ((x449^x450)/(x451/x452));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x453 = -1;
	uint32_t x454 = 1273129229U;
	volatile int64_t x455 = 10751079197276373LL;
	int64_t x456 = 14LL;
	volatile int64_t t61 = 5752472692098LL;

	t61 = ((x453^x454)/(x455/x456));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x457 = UINT16_MAX;
	uint64_t x458 = 959304289115364LLU;
	int64_t x459 = INT64_MIN;
	static int8_t x460 = INT8_MIN;

	t62 = ((x457^x458)/(x459/x460));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x469 = INT32_MIN;
	int16_t x470 = INT16_MIN;
	int32_t x471 = INT32_MIN;

	t63 = ((x469^x470)/(x471/x472));

	if (t63 != 2147450880) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x477 = -1LL;
	int16_t x478 = INT16_MIN;
	uint64_t x479 = UINT64_MAX;
	int8_t x480 = -1;

	t64 = ((x477^x478)/(x479/x480));

	if (t64 != 32767LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x485 = -1;
	volatile int8_t x486 = INT8_MIN;
	int32_t x487 = -686579;

	t65 = ((x485^x486)/(x487/x488));

	if (t65 != -12) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x497 = 106782257361154LLU;
	int16_t x498 = 660;
	int8_t x499 = INT8_MIN;
	uint64_t t66 = 268339964317LLU;

	t66 = ((x497^x498)/(x499/x500));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x505 = 22499343571LL;
	volatile uint16_t x506 = 29706U;
	int64_t x507 = INT64_MIN;
	static int64_t t67 = -8004775695984LL;

	t67 = ((x505^x506)/(x507/x508));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x509 = INT16_MIN;
	uint64_t x510 = 362543567304342LLU;
	uint8_t x511 = 96U;
	uint64_t t68 = 202755704729063LLU;

	t68 = ((x509^x510)/(x511/x512));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x513 = UINT8_MAX;
	int16_t x514 = -1;
	int64_t x516 = -1LL;
	int64_t t69 = 54760661LL;

	t69 = ((x513^x514)/(x515/x516));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x522 = 17U;
	int16_t x524 = 34;
	static uint64_t t70 = 833889LLU;

	t70 = ((x521^x522)/(x523/x524));

	if (t70 != 159090LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x525 = 236389LLU;
	volatile int64_t x526 = INT64_MAX;
	int64_t x527 = INT64_MIN;
	volatile int32_t x528 = INT32_MIN;
	volatile uint64_t t71 = 15147976553LLU;

	t71 = ((x525^x526)/(x527/x528));

	if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x533 = -1;
	int64_t x534 = INT64_MIN;
	volatile int16_t x535 = -1;
	uint32_t x536 = 179406U;

	t72 = ((x533^x534)/(x535/x536));

	if (t72 != 385286437898607LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x537 = UINT64_MAX;
	int8_t x538 = 19;
	int64_t x539 = -1LL;
	int8_t x540 = -1;
	volatile uint64_t t73 = 521643689LLU;

	t73 = ((x537^x538)/(x539/x540));

	if (t73 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x541 = 24285U;
	uint32_t x544 = 67U;
	int64_t t74 = 58845444417676280LL;

	t74 = ((x541^x542)/(x543/x544));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x545 = -9;
	int64_t x547 = INT64_MIN;
	uint16_t x548 = UINT16_MAX;
	static int64_t t75 = -22079034255352LL;

	t75 = ((x545^x546)/(x547/x548));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x555 = -2;
	uint32_t x556 = 787U;
	volatile int64_t t76 = 33306LL;

	t76 = ((x553^x554)/(x555/x556));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x557 = 197197U;
	static uint32_t x558 = UINT32_MAX;
	uint8_t x560 = UINT8_MAX;
	uint32_t t77 = 750121686U;

	t77 = ((x557^x558)/(x559/x560));

	if (t77 != 33552891U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x570 = 14462U;
	volatile uint16_t x571 = 55U;
	static uint32_t x572 = 1U;

	t78 = ((x569^x570)/(x571/x572));

	if (t78 != 78090051U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x573 = UINT64_MAX;
	uint8_t x574 = 18U;
	int64_t x575 = -70151866859664LL;
	int32_t x576 = -23741301;

	t79 = ((x573^x574)/(x575/x576));

	if (t79 != 6242880446761LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x577 = INT32_MIN;
	volatile int8_t x578 = INT8_MIN;
	static int32_t x579 = 113;
	int32_t t80 = 1995;

	t80 = ((x577^x578)/(x579/x580));

	if (t80 != -19004278) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x581 = 26363779985LL;
	int32_t x583 = INT32_MIN;

	t81 = ((x581^x582)/(x583/x584));

	if (t81 != 1632744206704352LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x585 = -1LL;
	volatile int64_t x587 = INT64_MIN;
	static int64_t t82 = 4339478779760LL;

	t82 = ((x585^x586)/(x587/x588));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x594 = 1;
	int16_t x595 = 373;
	int8_t x596 = INT8_MAX;
	int32_t t83 = -117521;

	t83 = ((x593^x594)/(x595/x596));

	if (t83 != -63) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x602 = -14;
	static int8_t x604 = -50;

	t84 = ((x601^x602)/(x603/x604));

	if (t84 != 1073741817) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x617 = -1;
	volatile int32_t x619 = INT32_MIN;
	int16_t x620 = INT16_MIN;
	uint64_t t85 = 9980LLU;

	t85 = ((x617^x618)/(x619/x620));

	if (t85 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x621 = INT16_MIN;
	uint16_t x622 = 49U;
	volatile int8_t x623 = -1;
	volatile uint64_t x624 = UINT64_MAX;
	uint64_t t86 = 15805752714316LLU;

	t86 = ((x621^x622)/(x623/x624));

	if (t86 != 18446744073709518897LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x625 = 56721305;
	int8_t x626 = INT8_MIN;
	int32_t x627 = -312379;
	volatile uint16_t x628 = 428U;
	static int32_t t87 = -29;

	t87 = ((x625^x626)/(x627/x628));

	if (t87 != 77807) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x633 = 0U;
	static int8_t x635 = INT8_MIN;
	static int8_t x636 = INT8_MAX;
	static volatile uint32_t t88 = 32U;

	t88 = ((x633^x634)/(x635/x636));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x642 = INT64_MIN;
	uint32_t x643 = 408U;
	int64_t t89 = -2749291974LL;

	t89 = ((x641^x642)/(x643/x644));

	if (t89 != 22606304011898953LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x645 = -1;
	int64_t x646 = -1LL;
	volatile int16_t x647 = INT16_MIN;
	static volatile int16_t x648 = INT16_MIN;

	t90 = ((x645^x646)/(x647/x648));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x649 = -32;
	int16_t x650 = -13637;
	volatile uint32_t t91 = 9872107U;

	t91 = ((x649^x650)/(x651/x652));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x653 = 22U;
	static uint64_t x654 = UINT64_MAX;
	static volatile int32_t x655 = INT32_MAX;
	int32_t x656 = INT32_MAX;
	uint64_t t92 = 708684443LLU;

	t92 = ((x653^x654)/(x655/x656));

	if (t92 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x661 = INT8_MIN;
	uint64_t x662 = 2432493347041717LLU;
	volatile int8_t x664 = -1;
	volatile uint64_t t93 = 1LLU;

	t93 = ((x661^x662)/(x663/x664));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x665 = INT8_MIN;
	uint8_t x666 = 1U;
	int32_t x668 = -12845;
	int64_t t94 = -15502397241166LL;

	t94 = ((x665^x666)/(x667/x668));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x681 = 50U;
	int16_t x683 = INT16_MIN;
	int32_t x684 = 3;

	t95 = ((x681^x682)/(x683/x684));

	if (t95 != -196619) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x685 = UINT32_MAX;
	uint8_t x687 = 115U;
	uint32_t t96 = 9U;

	t96 = ((x685^x686)/(x687/x688));

	if (t96 != 1424U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x689 = INT16_MAX;
	int16_t x690 = INT16_MIN;
	int32_t x691 = -5684;
	volatile int32_t x692 = -1;
	static volatile int32_t t97 = -6395;

	t97 = ((x689^x690)/(x691/x692));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x693 = UINT8_MAX;
	int8_t x694 = -1;
	volatile int16_t x695 = INT16_MIN;
	volatile int32_t t98 = 306803446;

	t98 = ((x693^x694)/(x695/x696));

	if (t98 != 51) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x697 = INT16_MIN;
	volatile int16_t x698 = -3207;
	int32_t x699 = -1;
	uint32_t x700 = 14713244U;

	t99 = ((x697^x698)/(x699/x700));

	if (t99 != 101U) { NG(); } else { ; }
	
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

