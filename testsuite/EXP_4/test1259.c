#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 23U;
uint64_t x8 = 155469LLU;
int8_t x14 = INT8_MAX;
volatile uint8_t x37 = 81U;
volatile int32_t x54 = INT32_MAX;
uint8_t x62 = 122U;
int16_t x86 = 4;
int64_t t12 = -1923641LL;
int16_t x89 = INT16_MAX;
int8_t x90 = 0;
int32_t t13 = 138121;
static uint32_t x102 = UINT32_MAX;
int32_t x104 = 299;
volatile uint64_t t14 = 6966645660636LLU;
uint16_t x113 = UINT16_MAX;
uint16_t x114 = 34U;
volatile int64_t x115 = INT64_MIN;
int64_t x125 = 119512270772874431LL;
static uint64_t x128 = 169838544719LLU;
int64_t t16 = -384176LL;
int8_t x129 = -1;
volatile int32_t t17 = 54615807;
int16_t x140 = INT16_MIN;
int64_t t18 = 10611673311197125LL;
int16_t x144 = INT16_MAX;
int16_t x147 = INT16_MIN;
uint8_t x158 = UINT8_MAX;
int16_t x241 = 40;
uint8_t x242 = UINT8_MAX;
int32_t t29 = 6699232;
volatile uint16_t x249 = 3U;
volatile uint32_t x250 = UINT32_MAX;
volatile int8_t x264 = 58;
int8_t x269 = INT8_MAX;
static uint16_t x296 = 13880U;
volatile int32_t t37 = 27855216;
static uint16_t x313 = 26003U;
int32_t x329 = -1341;
int16_t x331 = INT16_MIN;
static uint32_t x339 = UINT32_MAX;
static int64_t x341 = INT64_MAX;
volatile uint16_t x349 = 0U;
uint64_t x350 = 1409933201331386739LLU;
volatile uint16_t x351 = UINT16_MAX;
uint64_t t51 = 1357286795LLU;
int32_t x407 = INT32_MAX;
int64_t x408 = -1LL;
volatile int16_t x464 = -7;
int64_t x470 = INT64_MAX;
static int8_t x488 = INT8_MIN;
uint64_t t65 = 267887735LLU;
static volatile int32_t t66 = -8465;
uint32_t x510 = UINT32_MAX;
static uint64_t x521 = UINT64_MAX;
volatile uint8_t x523 = UINT8_MAX;
volatile int32_t x524 = INT32_MIN;
uint16_t x529 = 105U;
static volatile int32_t t69 = 1;
int32_t x536 = -1;
uint32_t t70 = 1U;
volatile uint32_t t71 = 379111U;
int16_t x554 = 14;
static uint32_t x555 = 2301U;
int8_t x586 = 0;
volatile int32_t t78 = 3;
static int16_t x592 = -206;
uint32_t x599 = UINT32_MAX;
volatile int32_t t81 = 1577;
uint8_t x609 = UINT8_MAX;
static uint8_t x629 = 11U;
int32_t x640 = INT32_MIN;
volatile int32_t t87 = -5339466;
int16_t x644 = -1;
int32_t x645 = INT32_MIN;
volatile int16_t x652 = -1;
int32_t x667 = -1;
int8_t x686 = 2;
uint16_t x698 = 81U;
uint64_t x700 = UINT64_MAX;
volatile int32_t t98 = -182821014;
int32_t x703 = 2198337;
uint32_t t99 = 1092988957U;


void f0(void) {
	int16_t x5 = -1;
	static int16_t x7 = INT16_MIN;
	int32_t t0 = -832091542;

	t0 = (x5&(x6<<(x7==x8)));

	if (t0 != 23) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 1;
	volatile int32_t x10 = 32;
	int32_t x11 = 7183070;
	int64_t x12 = 59429304767102525LL;
	static volatile int32_t t1 = -117;

	t1 = (x9&(x10<<(x11==x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MAX;
	uint32_t x15 = UINT32_MAX;
	uint16_t x16 = 20U;
	int32_t t2 = -142;

	t2 = (x13&(x14<<(x15==x16)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = UINT16_MAX;
	int16_t x26 = 14939;
	volatile uint32_t x27 = UINT32_MAX;
	volatile int8_t x28 = -1;
	volatile int32_t t3 = 1205;

	t3 = (x25&(x26<<(x27==x28)));

	if (t3 != 29878) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = 192;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t4 = -318674;

	t4 = (x29&(x30<<(x31==x32)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MIN;
	static int8_t x40 = 25;
	volatile uint64_t t5 = 3326037963361580778LLU;

	t5 = (x37&(x38<<(x39==x40)));

	if (t5 != 81LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x41 = 2071060730082504LLU;
	uint64_t x42 = 37199804LLU;
	int8_t x43 = -1;
	int32_t x44 = INT32_MAX;
	static uint64_t t6 = 590027580507726077LLU;

	t6 = (x41&(x42<<(x43==x44)));

	if (t6 != 35099784LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MAX;
	int32_t x47 = INT32_MAX;
	int64_t x48 = 10704180LL;
	volatile int32_t t7 = -1;

	t7 = (x45&(x46<<(x47==x48)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x53 = INT64_MIN;
	int64_t x55 = 19630219282650778LL;
	int8_t x56 = INT8_MIN;
	int64_t t8 = -13142547070LL;

	t8 = (x53&(x54<<(x55==x56)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x61 = UINT32_MAX;
	int64_t x63 = -1LL;
	uint8_t x64 = UINT8_MAX;
	volatile uint32_t t9 = 286U;

	t9 = (x61&(x62<<(x63==x64)));

	if (t9 != 122U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x69 = INT64_MIN;
	int16_t x70 = 239;
	uint16_t x71 = 1815U;
	static int64_t x72 = INT64_MIN;
	volatile int64_t t10 = -52LL;

	t10 = (x69&(x70<<(x71==x72)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x81 = INT16_MIN;
	uint64_t x82 = 7564833LLU;
	volatile int32_t x83 = -187588;
	int32_t x84 = INT32_MAX;
	volatile uint64_t t11 = 3489LLU;

	t11 = (x81&(x82<<(x83==x84)));

	if (t11 != 7536640LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x85 = INT64_MIN;
	int64_t x87 = -44822370LL;
	static int64_t x88 = 174220742637453LL;

	t12 = (x85&(x86<<(x87==x88)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x91 = 69628997661626LL;
	int16_t x92 = INT16_MIN;

	t13 = (x89&(x90<<(x91==x92)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x101 = 747LLU;
	uint8_t x103 = 6U;

	t14 = (x101&(x102<<(x103==x104)));

	if (t14 != 747LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x116 = -2243;
	int32_t t15 = -11318104;

	t15 = (x113&(x114<<(x115==x116)));

	if (t15 != 34) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x126 = 6;
	int16_t x127 = INT16_MAX;

	t16 = (x125&(x126<<(x127==x128)));

	if (t16 != 6LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x130 = 1;
	int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MIN;

	t17 = (x129&(x130<<(x131==x132)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x137 = -4159LL;
	volatile int32_t x138 = INT32_MAX;
	static uint8_t x139 = UINT8_MAX;

	t18 = (x137&(x138<<(x139==x140)));

	if (t18 != 2147479489LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x141 = INT8_MIN;
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MIN;
	volatile uint64_t t19 = 55260318888LLU;

	t19 = (x141&(x142<<(x143==x144)));

	if (t19 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x145 = INT8_MIN;
	static uint64_t x146 = 705LLU;
	volatile int64_t x148 = -1799148524293816761LL;
	volatile uint64_t t20 = 4390760218915536820LLU;

	t20 = (x145&(x146<<(x147==x148)));

	if (t20 != 640LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x157 = -1LL;
	int16_t x159 = INT16_MAX;
	int32_t x160 = INT32_MIN;
	int64_t t21 = 356LL;

	t21 = (x157&(x158<<(x159==x160)));

	if (t21 != 255LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x165 = INT64_MAX;
	volatile uint32_t x166 = 40813U;
	int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	volatile int64_t t22 = -27549059132LL;

	t22 = (x165&(x166<<(x167==x168)));

	if (t22 != 40813LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x169 = UINT8_MAX;
	volatile int64_t x170 = INT64_MAX;
	int64_t x171 = INT64_MAX;
	int16_t x172 = INT16_MAX;
	volatile int64_t t23 = -76545204613LL;

	t23 = (x169&(x170<<(x171==x172)));

	if (t23 != 255LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x193 = UINT16_MAX;
	int16_t x194 = 43;
	int16_t x195 = -27;
	uint32_t x196 = UINT32_MAX;
	int32_t t24 = 1;

	t24 = (x193&(x194<<(x195==x196)));

	if (t24 != 43) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x201 = UINT32_MAX;
	int32_t x202 = 108960;
	int32_t x203 = 102;
	static int8_t x204 = INT8_MIN;
	uint32_t t25 = 1155U;

	t25 = (x201&(x202<<(x203==x204)));

	if (t25 != 108960U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x205 = INT32_MIN;
	uint64_t x206 = 13297LLU;
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = 1;
	static volatile uint64_t t26 = 2242081554976019LLU;

	t26 = (x205&(x206<<(x207==x208)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x213 = -53;
	uint8_t x214 = 1U;
	int64_t x215 = INT64_MIN;
	static int16_t x216 = -2;
	static int32_t t27 = 221;

	t27 = (x213&(x214<<(x215==x216)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x233 = 6U;
	static volatile int8_t x234 = 1;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = 5;
	volatile int32_t t28 = 1414;

	t28 = (x233&(x234<<(x235==x236)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x243 = 23154046LL;
	volatile int32_t x244 = -1;

	t29 = (x241&(x242<<(x243==x244)));

	if (t29 != 40) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x251 = -5025;
	uint8_t x252 = UINT8_MAX;
	uint32_t t30 = 849954U;

	t30 = (x249&(x250<<(x251==x252)));

	if (t30 != 3U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x253 = 47U;
	volatile int64_t x254 = INT64_MAX;
	int16_t x255 = -1;
	int64_t x256 = INT64_MAX;
	static volatile int64_t t31 = 1708697286LL;

	t31 = (x253&(x254<<(x255==x256)));

	if (t31 != 47LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x261 = 1;
	uint64_t x262 = 4111225LLU;
	volatile int64_t x263 = INT64_MIN;
	uint64_t t32 = 740359275338484LLU;

	t32 = (x261&(x262<<(x263==x264)));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x265 = 7629113U;
	uint8_t x266 = UINT8_MAX;
	int8_t x267 = INT8_MIN;
	static int8_t x268 = INT8_MIN;
	uint32_t t33 = 1210919347U;

	t33 = (x265&(x266<<(x267==x268)));

	if (t33 != 312U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x270 = 7530U;
	int64_t x271 = -204LL;
	volatile uint16_t x272 = 18U;
	static volatile int32_t t34 = -1317801;

	t34 = (x269&(x270<<(x271==x272)));

	if (t34 != 106) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x285 = 45201872868LL;
	int32_t x286 = 256838236;
	int32_t x287 = INT32_MIN;
	volatile int64_t x288 = 670888LL;
	volatile int64_t t35 = 5516893441LL;

	t35 = (x285&(x286<<(x287==x288)));

	if (t35 != 101515844LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x289 = -1485;
	volatile uint8_t x290 = 1U;
	int16_t x291 = 13;
	int32_t x292 = -1;
	int32_t t36 = 1;

	t36 = (x289&(x290<<(x291==x292)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x293 = INT8_MAX;
	int8_t x294 = 1;
	uint8_t x295 = 119U;

	t37 = (x293&(x294<<(x295==x296)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x301 = INT32_MAX;
	volatile uint8_t x302 = 12U;
	uint8_t x303 = 6U;
	int64_t x304 = INT64_MIN;
	volatile int32_t t38 = -751664;

	t38 = (x301&(x302<<(x303==x304)));

	if (t38 != 12) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x309 = INT8_MAX;
	uint8_t x310 = UINT8_MAX;
	int16_t x311 = -1;
	uint32_t x312 = UINT32_MAX;
	volatile int32_t t39 = 40402390;

	t39 = (x309&(x310<<(x311==x312)));

	if (t39 != 126) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x314 = 112LL;
	volatile uint16_t x315 = 113U;
	int32_t x316 = -1;
	static volatile int64_t t40 = -104LL;

	t40 = (x313&(x314<<(x315==x316)));

	if (t40 != 16LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x330 = 176302LL;
	int32_t x332 = INT32_MAX;
	int64_t t41 = 3LL;

	t41 = (x329&(x330<<(x331==x332)));

	if (t41 != 176258LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x337 = INT8_MIN;
	uint64_t x338 = 3891854LLU;
	int64_t x340 = INT64_MIN;
	volatile uint64_t t42 = 474257544618LLU;

	t42 = (x337&(x338<<(x339==x340)));

	if (t42 != 3891840LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x342 = 12661635543LLU;
	uint64_t x343 = 1649997LLU;
	int16_t x344 = INT16_MIN;
	uint64_t t43 = 1445992928716055LLU;

	t43 = (x341&(x342<<(x343==x344)));

	if (t43 != 12661635543LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x352 = -10785;
	uint64_t t44 = 3000882604531999LLU;

	t44 = (x349&(x350<<(x351==x352)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x353 = 7;
	uint64_t x354 = UINT64_MAX;
	int16_t x355 = INT16_MIN;
	int32_t x356 = -1560;
	uint64_t t45 = 0LLU;

	t45 = (x353&(x354<<(x355==x356)));

	if (t45 != 7LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x357 = INT16_MAX;
	static volatile uint8_t x358 = 47U;
	volatile uint32_t x359 = UINT32_MAX;
	uint16_t x360 = 3784U;
	static int32_t t46 = -22917753;

	t46 = (x357&(x358<<(x359==x360)));

	if (t46 != 47) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x361 = 10;
	volatile uint8_t x362 = UINT8_MAX;
	int32_t x363 = 182313;
	volatile int16_t x364 = INT16_MAX;
	volatile int32_t t47 = -1039440;

	t47 = (x361&(x362<<(x363==x364)));

	if (t47 != 10) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x369 = -1;
	uint8_t x370 = 0U;
	volatile int32_t x371 = 5;
	volatile uint64_t x372 = 78LLU;
	volatile int32_t t48 = 72585613;

	t48 = (x369&(x370<<(x371==x372)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x373 = -1;
	static uint64_t x374 = 209059LLU;
	uint8_t x375 = 1U;
	int16_t x376 = INT16_MIN;
	volatile uint64_t t49 = 303450LLU;

	t49 = (x373&(x374<<(x375==x376)));

	if (t49 != 209059LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x377 = 844;
	uint32_t x378 = 65413U;
	uint32_t x379 = 2123850U;
	uint8_t x380 = UINT8_MAX;
	uint32_t t50 = 97206929U;

	t50 = (x377&(x378<<(x379==x380)));

	if (t50 != 772U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x381 = 8U;
	uint64_t x382 = 5014LLU;
	int16_t x383 = INT16_MAX;
	int64_t x384 = INT64_MIN;

	t51 = (x381&(x382<<(x383==x384)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x389 = INT32_MIN;
	volatile uint8_t x390 = UINT8_MAX;
	uint64_t x391 = 133086881949LLU;
	uint16_t x392 = 0U;
	volatile int32_t t52 = 21181;

	t52 = (x389&(x390<<(x391==x392)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x393 = -1;
	volatile uint16_t x394 = 16450U;
	uint64_t x395 = UINT64_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t53 = -186113;

	t53 = (x393&(x394<<(x395==x396)));

	if (t53 != 16450) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x397 = 52LL;
	volatile int16_t x398 = INT16_MAX;
	uint32_t x399 = 19U;
	volatile int16_t x400 = -46;
	int64_t t54 = 701776225738232716LL;

	t54 = (x397&(x398<<(x399==x400)));

	if (t54 != 52LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x401 = -763;
	static int32_t x402 = INT32_MAX;
	int32_t x403 = INT32_MIN;
	int64_t x404 = 412LL;
	volatile int32_t t55 = -3295366;

	t55 = (x401&(x402<<(x403==x404)));

	if (t55 != 2147482885) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x405 = INT64_MAX;
	uint32_t x406 = 1U;
	volatile int64_t t56 = 29483077LL;

	t56 = (x405&(x406<<(x407==x408)));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x409 = 43;
	uint32_t x410 = 8788U;
	volatile uint64_t x411 = 924566086954LLU;
	uint32_t x412 = UINT32_MAX;
	static volatile uint32_t t57 = 22U;

	t57 = (x409&(x410<<(x411==x412)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x413 = INT32_MIN;
	volatile int8_t x414 = 1;
	static int64_t x415 = INT64_MIN;
	volatile uint64_t x416 = 1448955731304179LLU;
	volatile int32_t t58 = 220214910;

	t58 = (x413&(x414<<(x415==x416)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x445 = INT64_MIN;
	volatile uint64_t x446 = UINT64_MAX;
	uint16_t x447 = UINT16_MAX;
	uint16_t x448 = 435U;
	uint64_t t59 = 244128LLU;

	t59 = (x445&(x446<<(x447==x448)));

	if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x449 = INT16_MIN;
	static int8_t x450 = 2;
	int32_t x451 = INT32_MIN;
	uint64_t x452 = 53935052864LLU;
	volatile int32_t t60 = -5142;

	t60 = (x449&(x450<<(x451==x452)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x457 = -1LL;
	uint16_t x458 = 2U;
	static int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MAX;
	int64_t t61 = 67203320LL;

	t61 = (x457&(x458<<(x459==x460)));

	if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x461 = INT32_MAX;
	static volatile uint64_t x462 = 615412059023LLU;
	uint16_t x463 = UINT16_MAX;
	volatile uint64_t t62 = 3298224LLU;

	t62 = (x461&(x462<<(x463==x464)));

	if (t62 != 1231735695LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x469 = INT16_MIN;
	static int8_t x471 = INT8_MIN;
	uint16_t x472 = UINT16_MAX;
	int64_t t63 = -171LL;

	t63 = (x469&(x470<<(x471==x472)));

	if (t63 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x481 = INT64_MIN;
	static uint32_t x482 = UINT32_MAX;
	volatile int8_t x483 = -2;
	uint8_t x484 = UINT8_MAX;
	volatile int64_t t64 = -192016446953LL;

	t64 = (x481&(x482<<(x483==x484)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x485 = INT16_MIN;
	uint64_t x486 = 198196942LLU;
	uint64_t x487 = 1082502226104LLU;

	t65 = (x485&(x486<<(x487==x488)));

	if (t65 != 198180864LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x501 = -1;
	volatile uint16_t x502 = UINT16_MAX;
	int32_t x503 = INT32_MAX;
	int32_t x504 = INT32_MAX;

	t66 = (x501&(x502<<(x503==x504)));

	if (t66 != 131070) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x509 = 27U;
	volatile int32_t x511 = -3163;
	uint8_t x512 = 6U;
	volatile uint32_t t67 = 439527U;

	t67 = (x509&(x510<<(x511==x512)));

	if (t67 != 27U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x522 = 32U;
	uint64_t t68 = 0LLU;

	t68 = (x521&(x522<<(x523==x524)));

	if (t68 != 32LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x530 = 21U;
	int64_t x531 = INT64_MAX;
	int64_t x532 = 7288533032382570LL;

	t69 = (x529&(x530<<(x531==x532)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x533 = INT32_MIN;
	uint32_t x534 = 2942711U;
	static uint8_t x535 = 6U;

	t70 = (x533&(x534<<(x535==x536)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x537 = -89;
	uint32_t x538 = 2410U;
	volatile uint16_t x539 = 5U;
	uint32_t x540 = UINT32_MAX;

	t71 = (x537&(x538<<(x539==x540)));

	if (t71 != 2338U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x541 = INT32_MAX;
	int16_t x542 = INT16_MAX;
	int8_t x543 = INT8_MAX;
	volatile int16_t x544 = INT16_MIN;
	static int32_t t72 = 3979609;

	t72 = (x541&(x542<<(x543==x544)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x553 = UINT8_MAX;
	static uint64_t x556 = 1LLU;
	volatile int32_t t73 = -7545177;

	t73 = (x553&(x554<<(x555==x556)));

	if (t73 != 14) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x561 = UINT16_MAX;
	volatile int8_t x562 = INT8_MAX;
	int16_t x563 = -1;
	uint64_t x564 = 111266199140LLU;
	volatile int32_t t74 = 654;

	t74 = (x561&(x562<<(x563==x564)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x565 = UINT32_MAX;
	int16_t x566 = INT16_MAX;
	uint8_t x567 = UINT8_MAX;
	int8_t x568 = INT8_MIN;
	static volatile uint32_t t75 = 141551U;

	t75 = (x565&(x566<<(x567==x568)));

	if (t75 != 32767U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x573 = INT8_MAX;
	volatile uint16_t x574 = 27271U;
	int32_t x575 = INT32_MAX;
	uint8_t x576 = UINT8_MAX;
	static int32_t t76 = 28;

	t76 = (x573&(x574<<(x575==x576)));

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x581 = -1;
	uint8_t x582 = 0U;
	int16_t x583 = INT16_MIN;
	static int64_t x584 = 2942432434LL;
	int32_t t77 = 237041761;

	t77 = (x581&(x582<<(x583==x584)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x585 = -1011887718;
	static int16_t x587 = 230;
	int16_t x588 = 4;

	t78 = (x585&(x586<<(x587==x588)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x589 = -22;
	uint64_t x590 = 223569863LLU;
	int64_t x591 = INT64_MAX;
	static uint64_t t79 = 53709143536241433LLU;

	t79 = (x589&(x590<<(x591==x592)));

	if (t79 != 223569858LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x597 = UINT16_MAX;
	volatile uint8_t x598 = UINT8_MAX;
	uint32_t x600 = 194331350U;
	volatile int32_t t80 = 20641;

	t80 = (x597&(x598<<(x599==x600)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x601 = UINT8_MAX;
	static uint16_t x602 = UINT16_MAX;
	int32_t x603 = 0;
	uint64_t x604 = 1210821174293382052LLU;

	t81 = (x601&(x602<<(x603==x604)));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x610 = 46478330375172LLU;
	int32_t x611 = -1;
	uint64_t x612 = UINT64_MAX;
	static volatile uint64_t t82 = 14125305790779LLU;

	t82 = (x609&(x610<<(x611==x612)));

	if (t82 != 8LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x613 = INT16_MAX;
	int8_t x614 = INT8_MAX;
	int16_t x615 = INT16_MIN;
	uint32_t x616 = UINT32_MAX;
	static int32_t t83 = 68402;

	t83 = (x613&(x614<<(x615==x616)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x617 = INT32_MIN;
	volatile int32_t x618 = INT32_MAX;
	int8_t x619 = -1;
	uint16_t x620 = 5U;
	volatile int32_t t84 = 12375903;

	t84 = (x617&(x618<<(x619==x620)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x621 = INT64_MIN;
	static volatile int32_t x622 = 680298274;
	static int16_t x623 = -1;
	uint16_t x624 = 3U;
	volatile int64_t t85 = 35954431047104604LL;

	t85 = (x621&(x622<<(x623==x624)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x630 = 9348635426449LL;
	static volatile int8_t x631 = INT8_MIN;
	int16_t x632 = INT16_MAX;
	volatile int64_t t86 = 6LL;

	t86 = (x629&(x630<<(x631==x632)));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x637 = INT32_MIN;
	uint8_t x638 = UINT8_MAX;
	int8_t x639 = 26;

	t87 = (x637&(x638<<(x639==x640)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x641 = 6995U;
	static uint8_t x642 = UINT8_MAX;
	uint8_t x643 = UINT8_MAX;
	volatile int32_t t88 = -56595;

	t88 = (x641&(x642<<(x643==x644)));

	if (t88 != 83) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x646 = 30;
	int32_t x647 = INT32_MIN;
	static int64_t x648 = INT64_MIN;
	volatile int32_t t89 = -2;

	t89 = (x645&(x646<<(x647==x648)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x649 = INT8_MIN;
	int64_t x650 = INT64_MAX;
	volatile uint32_t x651 = 2060098U;
	int64_t t90 = -91085958006459LL;

	t90 = (x649&(x650<<(x651==x652)));

	if (t90 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x653 = 2215U;
	volatile int16_t x654 = INT16_MAX;
	uint64_t x655 = UINT64_MAX;
	int8_t x656 = INT8_MIN;
	volatile uint32_t t91 = 629196U;

	t91 = (x653&(x654<<(x655==x656)));

	if (t91 != 2215U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x657 = 10U;
	uint32_t x658 = UINT32_MAX;
	int32_t x659 = -2619;
	static uint8_t x660 = 46U;
	volatile uint32_t t92 = 395139239U;

	t92 = (x657&(x658<<(x659==x660)));

	if (t92 != 10U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x665 = -1;
	uint64_t x666 = 43219718LLU;
	uint64_t x668 = 97994222LLU;
	static uint64_t t93 = 54483LLU;

	t93 = (x665&(x666<<(x667==x668)));

	if (t93 != 43219718LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x673 = -1;
	uint32_t x674 = 2554991U;
	uint8_t x675 = UINT8_MAX;
	uint64_t x676 = 39LLU;
	volatile uint32_t t94 = 6258U;

	t94 = (x673&(x674<<(x675==x676)));

	if (t94 != 2554991U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x685 = -1;
	int64_t x687 = 260963916837386169LL;
	uint8_t x688 = 69U;
	static volatile int32_t t95 = 2;

	t95 = (x685&(x686<<(x687==x688)));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x689 = INT16_MIN;
	uint64_t x690 = 121933LLU;
	volatile int8_t x691 = -31;
	int32_t x692 = 1;
	volatile uint64_t t96 = 536647669LLU;

	t96 = (x689&(x690<<(x691==x692)));

	if (t96 != 98304LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x693 = INT8_MAX;
	int64_t x694 = INT64_MAX;
	volatile uint32_t x695 = 246U;
	uint16_t x696 = 890U;
	volatile int64_t t97 = -71453887206LL;

	t97 = (x693&(x694<<(x695==x696)));

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x697 = -1;
	volatile int32_t x699 = INT32_MIN;

	t98 = (x697&(x698<<(x699==x700)));

	if (t98 != 81) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x701 = -1;
	static uint32_t x702 = 508U;
	int32_t x704 = INT32_MIN;

	t99 = (x701&(x702<<(x703==x704)));

	if (t99 != 508U) { NG(); } else { ; }
	
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

