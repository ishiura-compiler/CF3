#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x7 = 7U;
int64_t x11 = 961481LL;
volatile uint32_t x15 = UINT32_MAX;
static int32_t t3 = -60;
uint64_t x17 = UINT64_MAX;
volatile int16_t x19 = 65;
int16_t x22 = -1;
uint32_t x25 = 14994138U;
static volatile int8_t x31 = 0;
int8_t x37 = -1;
static volatile int8_t x42 = -36;
static volatile int16_t x55 = -1;
volatile int8_t x58 = -1;
uint64_t x60 = UINT64_MAX;
int8_t x67 = 0;
int16_t x73 = -31;
volatile int32_t x74 = INT32_MAX;
static uint32_t x78 = 240640U;
uint32_t x86 = 182U;
uint16_t x103 = 6581U;
volatile int32_t x108 = -1;
static int32_t t23 = -4495987;
static uint32_t x110 = UINT32_MAX;
uint64_t x117 = UINT64_MAX;
int8_t x118 = INT8_MIN;
uint32_t x119 = 5033562U;
volatile int64_t t25 = INT64_MAX;
volatile int32_t x124 = -1;
static int8_t x130 = -2;
uint16_t x132 = 30219U;
uint8_t x145 = UINT8_MAX;
static uint32_t x146 = 894193U;
int8_t x147 = 0;
int16_t x148 = INT16_MIN;
volatile int32_t t32 = -69757;
volatile uint32_t x163 = 543U;
uint64_t x164 = 12410LLU;
int16_t x165 = INT16_MAX;
int16_t x176 = INT16_MIN;
volatile int32_t t35 = -5;
int32_t t36 = 598753;
int64_t x191 = INT64_MAX;
volatile int32_t x201 = -1;
volatile int64_t t40 = -154091229379868575LL;
volatile uint16_t x206 = UINT16_MAX;
volatile int16_t x211 = INT16_MIN;
static volatile int32_t t42 = -385314325;
static uint8_t x228 = UINT8_MAX;
volatile int32_t t45 = -962;
volatile uint8_t x229 = UINT8_MAX;
int16_t x232 = INT16_MIN;
volatile int32_t t46 = 7808;
volatile int16_t x235 = -1;
static int8_t x239 = 3;
uint8_t x244 = 124U;
uint64_t x272 = 3LLU;
static volatile uint64_t t54 = 1940743LLU;
int8_t x278 = INT8_MAX;
int64_t t55 = 11LL;
static int8_t x295 = -1;
static int8_t x297 = -1;
volatile int8_t x311 = INT8_MIN;
uint8_t x324 = 3U;
uint64_t x325 = UINT64_MAX;
uint8_t x326 = 0U;
int8_t x343 = INT8_MIN;
static int32_t x346 = 2;
static uint8_t x350 = UINT8_MAX;
volatile int32_t x351 = -1;
int32_t x359 = 40;
volatile int32_t x362 = 8218276;
int64_t x365 = INT64_MIN;
static volatile int64_t t73 = 178064LL;
int64_t x382 = -1LL;
static volatile uint32_t x384 = 0U;
uint64_t x390 = 1368700610422556LLU;
int64_t x394 = -1LL;
uint64_t x398 = 2LLU;
volatile uint8_t x406 = 1U;
int64_t x407 = 227011704923685LL;
int64_t x422 = -7LL;
uint32_t x423 = 5U;
volatile int16_t x424 = INT16_MIN;
volatile uint8_t x426 = 20U;
uint16_t x434 = 2U;
volatile int8_t x445 = 1;
int16_t x446 = -1;
int8_t x452 = -1;
static uint8_t x453 = 7U;
uint64_t x454 = 397738LLU;
uint64_t x458 = UINT64_MAX;
int16_t x468 = -1;
volatile int32_t t91 = 1;
static int64_t x469 = INT64_MAX;
uint8_t x470 = UINT8_MAX;
uint32_t x475 = UINT32_MAX;
int16_t x479 = INT16_MIN;
volatile uint64_t t94 = 1113786502183065LLU;
int8_t x484 = INT8_MIN;
int32_t x494 = INT32_MAX;
volatile uint16_t x500 = 2U;
int32_t t97 = -187027547;
uint32_t x507 = 7283984U;
volatile uint64_t x512 = 4LLU;


void f0(void) {
	volatile int16_t x1 = -1;
	int8_t x2 = INT8_MIN;
	int8_t x3 = -1;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 1442795997LL;

	t0 = ((x1<=(x2*x3))^x4);

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	uint32_t x8 = 21U;
	volatile uint32_t t1 = 75291U;

	t1 = ((x5<=(x6*x7))^x8);

	if (t1 != 21U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -6;
	volatile uint16_t x10 = 104U;
	volatile int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = 3;

	t2 = ((x9<=(x10*x11))^x12);

	if (t2 != 126) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1009U;
	int64_t x14 = -1LL;
	int16_t x16 = 3643;

	t3 = ((x13<=(x14*x15))^x16);

	if (t3 != 3643) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	int64_t x20 = INT64_MIN;
	int64_t t4 = INT64_MIN;

	t4 = ((x17<=(x18*x19))^x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static volatile int16_t x23 = -1;
	volatile int64_t x24 = INT64_MIN;
	int64_t t5 = -1442500110943582832LL;

	t5 = ((x21<=(x22*x23))^x24);

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 1845U;
	static int16_t x27 = INT16_MIN;
	volatile int32_t x28 = 26274;
	static volatile int32_t t6 = 158616968;

	t6 = ((x25<=(x26*x27))^x28);

	if (t6 != 26275) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	static int64_t x30 = -52306812LL;
	volatile uint8_t x32 = 6U;
	volatile int32_t t7 = 2511;

	t7 = ((x29<=(x30*x31))^x32);

	if (t7 != 6) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	static volatile int8_t x34 = 0;
	int32_t x35 = INT32_MIN;
	static int64_t x36 = -1LL;
	volatile int64_t t8 = 561789LL;

	t8 = ((x33<=(x34*x35))^x36);

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x38 = INT8_MAX;
	int32_t x39 = -1;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 187;

	t9 = ((x37<=(x38*x39))^x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -15;
	volatile int16_t x43 = 1;
	uint32_t x44 = 25U;
	uint32_t t10 = 246U;

	t10 = ((x41<=(x42*x43))^x44);

	if (t10 != 25U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 1396U;
	int16_t x46 = INT16_MAX;
	volatile int8_t x47 = INT8_MAX;
	int8_t x48 = INT8_MAX;
	static int32_t t11 = 8084;

	t11 = ((x45<=(x46*x47))^x48);

	if (t11 != 126) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 1758721177272LLU;
	volatile int16_t x50 = -242;
	static int16_t x51 = INT16_MIN;
	int32_t x52 = -1;
	int32_t t12 = -665710;

	t12 = ((x49<=(x50*x51))^x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 6U;
	uint64_t x54 = 930138478585419LLU;
	int32_t x56 = -131;
	int32_t t13 = 21650539;

	t13 = ((x53<=(x54*x55))^x56);

	if (t13 != -132) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int8_t x59 = INT8_MIN;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x57<=(x58*x59))^x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int8_t x62 = -1;
	int64_t x63 = -2516284LL;
	uint64_t x64 = 164915145324271995LLU;
	uint64_t t15 = 18119194486897LLU;

	t15 = ((x61<=(x62*x63))^x64);

	if (t15 != 164915145324271994LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -1;
	int32_t x66 = INT32_MAX;
	uint64_t x68 = 11LLU;
	uint64_t t16 = 354346104363584646LLU;

	t16 = ((x65<=(x66*x67))^x68);

	if (t16 != 10LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x75 = 0U;
	int8_t x76 = 1;
	volatile int32_t t17 = 397844998;

	t17 = ((x73<=(x74*x75))^x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = -1;
	uint16_t x79 = 1U;
	volatile uint32_t x80 = 234596U;
	static uint32_t t18 = 95435810U;

	t18 = ((x77<=(x78*x79))^x80);

	if (t18 != 234596U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	int32_t x82 = 0;
	int16_t x83 = -1;
	uint16_t x84 = UINT16_MAX;
	int32_t t19 = -2664935;

	t19 = ((x81<=(x82*x83))^x84);

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = INT8_MIN;
	volatile int32_t x87 = -1;
	static int32_t x88 = -23;
	static int32_t t20 = 1;

	t20 = ((x85<=(x86*x87))^x88);

	if (t20 != -23) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x93 = UINT8_MAX;
	uint8_t x94 = UINT8_MAX;
	volatile uint64_t x95 = 1836028186LLU;
	int8_t x96 = INT8_MAX;
	int32_t t21 = 108198976;

	t21 = ((x93<=(x94*x95))^x96);

	if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = -1;
	int32_t x102 = -555;
	uint16_t x104 = 4U;
	volatile int32_t t22 = -19973987;

	t22 = ((x101<=(x102*x103))^x104);

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = UINT64_MAX;
	volatile uint8_t x106 = 0U;
	int16_t x107 = INT16_MAX;

	t23 = ((x105<=(x106*x107))^x108);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 7247U;
	volatile int32_t x111 = INT32_MAX;
	int8_t x112 = -12;
	int32_t t24 = 15579;

	t24 = ((x109<=(x110*x111))^x112);

	if (t24 != -11) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x120 = INT64_MAX;

	t25 = ((x117<=(x118*x119))^x120);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x121 = -2121;
	static int8_t x122 = 1;
	uint16_t x123 = 10U;
	int32_t t26 = 1016;

	t26 = ((x121<=(x122*x123))^x124);

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x129 = 17U;
	int8_t x131 = -1;
	int32_t t27 = 14;

	t27 = ((x129<=(x130*x131))^x132);

	if (t27 != 30219) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x137 = -171;
	uint32_t x138 = 0U;
	static int16_t x139 = INT16_MIN;
	int8_t x140 = -30;
	volatile int32_t t28 = -25;

	t28 = ((x137<=(x138*x139))^x140);

	if (t28 != -30) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = -6611LL;
	int8_t x142 = 0;
	static uint8_t x143 = 36U;
	static int32_t x144 = INT32_MIN;
	int32_t t29 = 14954;

	t29 = ((x141<=(x142*x143))^x144);

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t t30 = 5;

	t30 = ((x145<=(x146*x147))^x148);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x149 = INT8_MAX;
	static int8_t x150 = 7;
	uint8_t x151 = 100U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t31 = -3934;

	t31 = ((x149<=(x150*x151))^x152);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x157 = 167LL;
	static volatile int32_t x158 = 568;
	static int64_t x159 = 4235521093193176LL;
	uint16_t x160 = 23U;

	t32 = ((x157<=(x158*x159))^x160);

	if (t32 != 22) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x161 = UINT16_MAX;
	int32_t x162 = -1;
	volatile uint64_t t33 = 3677576086912LLU;

	t33 = ((x161<=(x162*x163))^x164);

	if (t33 != 12411LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x166 = -1;
	uint16_t x167 = 0U;
	int32_t x168 = -52984;
	volatile int32_t t34 = -14392627;

	t34 = ((x165<=(x166*x167))^x168);

	if (t34 != -52984) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x173 = -1;
	static volatile uint64_t x174 = UINT64_MAX;
	uint8_t x175 = 111U;

	t35 = ((x173<=(x174*x175))^x176);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x181 = 4944U;
	static int64_t x182 = -1LL;
	int16_t x183 = INT16_MIN;
	volatile int32_t x184 = 199030;

	t36 = ((x181<=(x182*x183))^x184);

	if (t36 != 199031) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x185 = UINT32_MAX;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = -1;
	static int32_t t37 = 30;

	t37 = ((x185<=(x186*x187))^x188);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = -1;
	static uint64_t x190 = UINT64_MAX;
	static int8_t x192 = -1;
	int32_t t38 = 176642253;

	t38 = ((x189<=(x190*x191))^x192);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x197 = -1;
	static uint64_t x198 = UINT64_MAX;
	int64_t x199 = INT64_MIN;
	volatile int32_t x200 = INT32_MAX;
	static int32_t t39 = INT32_MAX;

	t39 = ((x197<=(x198*x199))^x200);

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x202 = 19LL;
	int32_t x203 = INT32_MIN;
	int64_t x204 = -1LL;

	t40 = ((x201<=(x202*x203))^x204);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x205 = INT8_MIN;
	static int32_t x207 = -1;
	int8_t x208 = -1;
	volatile int32_t t41 = -939516936;

	t41 = ((x205<=(x206*x207))^x208);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x209 = 1LLU;
	int8_t x210 = 0;
	volatile uint8_t x212 = 5U;

	t42 = ((x209<=(x210*x211))^x212);

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x217 = 0U;
	int32_t x218 = INT32_MIN;
	int64_t x219 = -647LL;
	int8_t x220 = -61;
	static int32_t t43 = -5570;

	t43 = ((x217<=(x218*x219))^x220);

	if (t43 != -62) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x221 = 849U;
	int64_t x222 = INT64_MAX;
	static volatile uint64_t x223 = 918914367008035LLU;
	int8_t x224 = INT8_MIN;
	volatile int32_t t44 = 57232;

	t44 = ((x221<=(x222*x223))^x224);

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x225 = UINT32_MAX;
	static uint16_t x226 = 326U;
	volatile int8_t x227 = INT8_MIN;

	t45 = ((x225<=(x226*x227))^x228);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x230 = -1;
	uint32_t x231 = UINT32_MAX;

	t46 = ((x229<=(x230*x231))^x232);

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x233 = 3772U;
	static volatile uint64_t x234 = 9882LLU;
	uint32_t x236 = 14170U;
	uint32_t t47 = 58353223U;

	t47 = ((x233<=(x234*x235))^x236);

	if (t47 != 14171U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = -7271898999859417LL;
	static uint16_t x240 = 6392U;
	int32_t t48 = -236919;

	t48 = ((x237<=(x238*x239))^x240);

	if (t48 != 6393) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x241 = INT8_MIN;
	uint64_t x242 = 231007757019650LLU;
	static int32_t x243 = INT32_MIN;
	static int32_t t49 = -72;

	t49 = ((x241<=(x242*x243))^x244);

	if (t49 != 124) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x249 = -1;
	volatile int32_t x250 = -1;
	int32_t x251 = -1;
	int64_t x252 = 105567514557LL;
	int64_t t50 = 3472LL;

	t50 = ((x249<=(x250*x251))^x252);

	if (t50 != 105567514556LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x253 = 10474U;
	static uint64_t x254 = 41942145278LLU;
	volatile int16_t x255 = -1;
	static int32_t x256 = INT32_MAX;
	int32_t t51 = 489454548;

	t51 = ((x253<=(x254*x255))^x256);

	if (t51 != 2147483646) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x257 = 0;
	uint8_t x258 = UINT8_MAX;
	static uint16_t x259 = 476U;
	int64_t x260 = -1LL;
	volatile int64_t t52 = 23524745LL;

	t52 = ((x257<=(x258*x259))^x260);

	if (t52 != -2LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x265 = -1;
	int32_t x266 = 2593;
	int16_t x267 = -1;
	uint16_t x268 = 0U;
	static int32_t t53 = -96;

	t53 = ((x265<=(x266*x267))^x268);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x269 = INT8_MAX;
	static int16_t x270 = INT16_MIN;
	uint16_t x271 = UINT16_MAX;

	t54 = ((x269<=(x270*x271))^x272);

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x277 = INT32_MIN;
	static int64_t x279 = -1LL;
	int64_t x280 = 3195809807242989LL;

	t55 = ((x277<=(x278*x279))^x280);

	if (t55 != 3195809807242988LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x281 = -1LL;
	uint32_t x282 = 2055960U;
	int8_t x283 = INT8_MIN;
	int8_t x284 = 0;
	int32_t t56 = 18120191;

	t56 = ((x281<=(x282*x283))^x284);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x285 = INT16_MAX;
	static int8_t x286 = 7;
	uint16_t x287 = UINT16_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t57 = -2523;

	t57 = ((x285<=(x286*x287))^x288);

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = INT16_MAX;
	int32_t x290 = -26;
	int16_t x291 = INT16_MIN;
	volatile int16_t x292 = INT16_MIN;
	static volatile int32_t t58 = 4323977;

	t58 = ((x289<=(x290*x291))^x292);

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	int16_t x296 = 7643;
	volatile int32_t t59 = -32;

	t59 = ((x293<=(x294*x295))^x296);

	if (t59 != 7643) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x298 = -63;
	volatile uint32_t x299 = 0U;
	uint16_t x300 = 2003U;
	int32_t t60 = 525632;

	t60 = ((x297<=(x298*x299))^x300);

	if (t60 != 2003) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x309 = INT64_MIN;
	static volatile int16_t x310 = -3;
	static uint64_t x312 = UINT64_MAX;
	uint64_t t61 = 60389855946326331LLU;

	t61 = ((x309<=(x310*x311))^x312);

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x317 = INT32_MAX;
	static uint32_t x318 = 233U;
	int32_t x319 = INT32_MIN;
	uint32_t x320 = UINT32_MAX;
	uint32_t t62 = 22616360U;

	t62 = ((x317<=(x318*x319))^x320);

	if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x321 = -61;
	int32_t x322 = 595791;
	volatile uint8_t x323 = UINT8_MAX;
	volatile int32_t t63 = 0;

	t63 = ((x321<=(x322*x323))^x324);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x327 = INT16_MAX;
	volatile int16_t x328 = INT16_MAX;
	static volatile int32_t t64 = -200738;

	t64 = ((x325<=(x326*x327))^x328);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x329 = 11;
	static int16_t x330 = INT16_MIN;
	int16_t x331 = -437;
	int32_t x332 = INT32_MIN;
	int32_t t65 = -1807424;

	t65 = ((x329<=(x330*x331))^x332);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = -1;
	volatile int64_t x334 = -1LL;
	int64_t x335 = -2638848239234381959LL;
	static uint32_t x336 = UINT32_MAX;
	volatile uint32_t t66 = 6627475U;

	t66 = ((x333<=(x334*x335))^x336);

	if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x337 = INT64_MIN;
	volatile int64_t x338 = 10370512861LL;
	static int8_t x339 = -1;
	uint8_t x340 = UINT8_MAX;
	int32_t t67 = 1;

	t67 = ((x337<=(x338*x339))^x340);

	if (t67 != 254) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x341 = INT16_MIN;
	int32_t x342 = -1;
	int32_t x344 = INT32_MIN;
	int32_t t68 = 3987;

	t68 = ((x341<=(x342*x343))^x344);

	if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x345 = UINT8_MAX;
	uint16_t x347 = UINT16_MAX;
	uint8_t x348 = UINT8_MAX;
	static int32_t t69 = 0;

	t69 = ((x345<=(x346*x347))^x348);

	if (t69 != 254) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = -1LL;
	int32_t x352 = INT32_MIN;
	volatile int32_t t70 = INT32_MIN;

	t70 = ((x349<=(x350*x351))^x352);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x357 = INT8_MAX;
	static uint64_t x358 = 8182985724195434LLU;
	static int8_t x360 = -1;
	volatile int32_t t71 = -32861;

	t71 = ((x357<=(x358*x359))^x360);

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x361 = 1012051807U;
	volatile uint32_t x363 = 1718562U;
	uint32_t x364 = UINT32_MAX;
	uint32_t t72 = 375648665U;

	t72 = ((x361<=(x362*x363))^x364);

	if (t72 != 4294967294U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x366 = 500254152;
	static uint32_t x367 = UINT32_MAX;
	static int64_t x368 = 3LL;

	t73 = ((x365<=(x366*x367))^x368);

	if (t73 != 2LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x377 = -1;
	static int8_t x378 = INT8_MIN;
	int16_t x379 = 175;
	volatile int64_t x380 = 1301348035311549213LL;
	int64_t t74 = 24895556702LL;

	t74 = ((x377<=(x378*x379))^x380);

	if (t74 != 1301348035311549213LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x381 = 2438505522747584LLU;
	uint16_t x383 = UINT16_MAX;
	uint32_t t75 = 42U;

	t75 = ((x381<=(x382*x383))^x384);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x389 = INT64_MIN;
	int16_t x391 = -775;
	int64_t x392 = INT64_MAX;
	int64_t t76 = 863LL;

	t76 = ((x389<=(x390*x391))^x392);

	if (t76 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x393 = INT64_MIN;
	int16_t x395 = -1;
	int64_t x396 = INT64_MAX;
	int64_t t77 = 68015037LL;

	t77 = ((x393<=(x394*x395))^x396);

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x397 = 101;
	volatile int8_t x399 = INT8_MIN;
	static volatile uint64_t x400 = UINT64_MAX;
	static uint64_t t78 = 3828490LLU;

	t78 = ((x397<=(x398*x399))^x400);

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x405 = -1;
	volatile uint8_t x408 = 1U;
	volatile int32_t t79 = -3;

	t79 = ((x405<=(x406*x407))^x408);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x413 = -5271284;
	int32_t x414 = INT32_MAX;
	int8_t x415 = -1;
	uint64_t x416 = 42167217275149LLU;
	volatile uint64_t t80 = 16763058LLU;

	t80 = ((x413<=(x414*x415))^x416);

	if (t80 != 42167217275149LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x421 = -14;
	volatile int32_t t81 = 13292006;

	t81 = ((x421<=(x422*x423))^x424);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x425 = INT64_MIN;
	int16_t x427 = INT16_MAX;
	int32_t x428 = -366621603;
	static int32_t t82 = -2;

	t82 = ((x425<=(x426*x427))^x428);

	if (t82 != -366621604) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x433 = UINT16_MAX;
	static int8_t x435 = INT8_MAX;
	int32_t x436 = 4594;
	int32_t t83 = -8133;

	t83 = ((x433<=(x434*x435))^x436);

	if (t83 != 4594) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x437 = 475105;
	uint16_t x438 = 10U;
	static int64_t x439 = 56478LL;
	int32_t x440 = INT32_MIN;
	int32_t t84 = -57;

	t84 = ((x437<=(x438*x439))^x440);

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x441 = 392;
	int16_t x442 = INT16_MIN;
	volatile int64_t x443 = 14798LL;
	int64_t x444 = 2LL;
	static int64_t t85 = 11255404357LL;

	t85 = ((x441<=(x442*x443))^x444);

	if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x447 = INT8_MIN;
	uint32_t x448 = UINT32_MAX;
	static volatile uint32_t t86 = 2758U;

	t86 = ((x445<=(x446*x447))^x448);

	if (t86 != 4294967294U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x449 = 1004;
	int64_t x450 = 499731844LL;
	int32_t x451 = -54813890;
	int32_t t87 = 2502;

	t87 = ((x449<=(x450*x451))^x452);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x455 = 135LLU;
	int16_t x456 = INT16_MIN;
	volatile int32_t t88 = 1;

	t88 = ((x453<=(x454*x455))^x456);

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x457 = INT64_MAX;
	static uint8_t x459 = 2U;
	int32_t x460 = INT32_MAX;
	static volatile int32_t t89 = 460;

	t89 = ((x457<=(x458*x459))^x460);

	if (t89 != 2147483646) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x461 = UINT64_MAX;
	volatile int16_t x462 = -1;
	uint16_t x463 = 17U;
	volatile int64_t x464 = INT64_MAX;
	static int64_t t90 = INT64_MAX;

	t90 = ((x461<=(x462*x463))^x464);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x465 = 53075266459660LL;
	int32_t x466 = INT32_MAX;
	int8_t x467 = -1;

	t91 = ((x465<=(x466*x467))^x468);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x471 = UINT32_MAX;
	int32_t x472 = INT32_MIN;
	volatile int32_t t92 = INT32_MIN;

	t92 = ((x469<=(x470*x471))^x472);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x473 = 30U;
	volatile uint8_t x474 = 59U;
	uint16_t x476 = 0U;
	static volatile int32_t t93 = 7666161;

	t93 = ((x473<=(x474*x475))^x476);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x477 = INT16_MIN;
	int64_t x478 = -1LL;
	volatile uint64_t x480 = 3LLU;

	t94 = ((x477<=(x478*x479))^x480);

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x481 = -342;
	uint16_t x482 = 476U;
	uint64_t x483 = UINT64_MAX;
	volatile int32_t t95 = 3;

	t95 = ((x481<=(x482*x483))^x484);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x493 = -1LL;
	static int8_t x495 = -1;
	int16_t x496 = INT16_MAX;
	volatile int32_t t96 = 1702594;

	t96 = ((x493<=(x494*x495))^x496);

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x497 = 112U;
	volatile uint16_t x498 = UINT16_MAX;
	int64_t x499 = -1LL;

	t97 = ((x497<=(x498*x499))^x500);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x505 = INT16_MIN;
	uint8_t x506 = UINT8_MAX;
	int32_t x508 = INT32_MIN;
	int32_t t98 = INT32_MIN;

	t98 = ((x505<=(x506*x507))^x508);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x509 = -1;
	uint16_t x510 = UINT16_MAX;
	static int8_t x511 = INT8_MIN;
	volatile uint64_t t99 = 815591362462LLU;

	t99 = ((x509<=(x510*x511))^x512);

	if (t99 != 4LLU) { NG(); } else { ; }
	
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

