#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x15 = 83872LLU;
static uint8_t x18 = 1U;
volatile int32_t t5 = 1;
int16_t x33 = 1;
int8_t x34 = INT8_MIN;
static volatile int32_t t6 = -90257417;
int32_t t7 = -4;
int8_t x44 = INT8_MIN;
volatile int32_t t8 = -1;
volatile int32_t t10 = -134720;
int64_t x60 = INT64_MAX;
int8_t x73 = 3;
uint64_t x74 = 12404249702740LLU;
volatile int16_t x78 = -1;
volatile uint8_t x81 = 1U;
uint8_t x82 = UINT8_MAX;
int16_t x103 = INT16_MIN;
volatile int8_t x109 = INT8_MIN;
volatile uint32_t x111 = 12085351U;
uint64_t x117 = UINT64_MAX;
int8_t x126 = -22;
int16_t x128 = -6;
static int16_t x138 = INT16_MAX;
volatile int64_t x143 = INT64_MIN;
uint32_t x144 = 1U;
int64_t x146 = 878LL;
static int32_t t25 = -29;
static int8_t x164 = INT8_MIN;
static uint32_t x170 = UINT32_MAX;
uint16_t x181 = UINT16_MAX;
uint32_t x186 = UINT32_MAX;
static int32_t t33 = 78;
int8_t x205 = -1;
volatile int8_t x206 = -1;
static volatile uint32_t x209 = UINT32_MAX;
static int64_t x217 = -1LL;
static int16_t x247 = 1;
int64_t x248 = -1LL;
int32_t x250 = 3;
int16_t x261 = 33;
int32_t x264 = -80;
int64_t x266 = 37931638LL;
int64_t x267 = INT64_MIN;
int8_t x271 = -1;
static int32_t x272 = -1;
int8_t x281 = INT8_MIN;
uint16_t x283 = 4U;
int32_t x296 = INT32_MIN;
volatile int16_t x301 = INT16_MIN;
int64_t x310 = -1LL;
int32_t x311 = -1;
uint16_t x314 = 0U;
int32_t t57 = 56130288;
uint16_t x329 = UINT16_MAX;
int32_t x332 = INT32_MAX;
uint64_t x333 = 442801LLU;
volatile int8_t x335 = 2;
int32_t x339 = -1;
volatile int32_t t63 = 389254;
int16_t x373 = -1;
static volatile int32_t t70 = 604;
uint32_t x390 = UINT32_MAX;
static volatile int8_t x397 = 13;
int64_t x400 = INT64_MAX;
uint16_t x401 = UINT16_MAX;
uint16_t x404 = UINT16_MAX;
volatile int32_t t73 = 10917263;
int32_t t77 = -6113074;
volatile int16_t x438 = -11078;
volatile uint64_t x439 = 253349LLU;
uint32_t x440 = 1411888U;
volatile int32_t t81 = 1;
volatile int32_t t82 = -158644;
int8_t x457 = 2;
int8_t x458 = 34;
static uint32_t x467 = UINT32_MAX;
volatile int8_t x474 = INT8_MAX;
int16_t x491 = INT16_MIN;
int8_t x493 = INT8_MAX;
static int8_t x496 = -1;
int8_t x500 = 13;
int32_t t93 = 0;
static uint16_t x511 = 3841U;
volatile int32_t t95 = 138587115;
volatile int64_t x519 = INT64_MAX;
int8_t x522 = INT8_MIN;
static uint8_t x528 = UINT8_MAX;
volatile int16_t x530 = -5;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = UINT32_MAX;
	uint8_t x3 = 83U;
	int64_t x4 = 103LL;
	volatile int32_t t0 = 923;

	t0 = (((x1*x2)/x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = 94U;
	int16_t x10 = 25;
	int16_t x11 = -1171;
	uint32_t x12 = 60U;
	volatile int32_t t1 = -205884;

	t1 = (((x9*x10)/x11)<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	volatile uint8_t x14 = UINT8_MAX;
	static volatile uint64_t x16 = 1306302918080203712LLU;
	volatile int32_t t2 = 15695471;

	t2 = (((x13*x14)/x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	volatile int8_t x19 = INT8_MIN;
	static int8_t x20 = -1;
	static volatile int32_t t3 = 99;

	t3 = (((x17*x18)/x19)<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 94020452;
	uint32_t x22 = 403U;
	uint32_t x23 = 88U;
	int64_t x24 = INT64_MIN;
	volatile int32_t t4 = 2187053;

	t4 = (((x21*x22)/x23)<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = INT16_MAX;
	uint16_t x30 = 10U;
	int32_t x31 = INT32_MIN;
	volatile int64_t x32 = -1LL;

	t5 = (((x29*x30)/x31)<=x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x35 = INT32_MIN;
	static volatile uint8_t x36 = UINT8_MAX;

	t6 = (((x33*x34)/x35)<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = -1;
	int32_t x39 = -2010904;
	int8_t x40 = INT8_MAX;

	t7 = (((x37*x38)/x39)<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x41 = 10304;
	static uint64_t x42 = 705307676LLU;
	int8_t x43 = 8;

	t8 = (((x41*x42)/x43)<=x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = -623;
	uint8_t x50 = 115U;
	uint8_t x51 = 15U;
	uint8_t x52 = 7U;
	int32_t t9 = -1;

	t9 = (((x49*x50)/x51)<=x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = INT8_MAX;
	volatile uint8_t x54 = UINT8_MAX;
	static uint64_t x55 = UINT64_MAX;
	volatile uint64_t x56 = 126250030LLU;

	t10 = (((x53*x54)/x55)<=x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x57 = 1131638059758LLU;
	uint8_t x58 = 1U;
	static int32_t x59 = INT32_MIN;
	volatile int32_t t11 = -416956518;

	t11 = (((x57*x58)/x59)<=x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x75 = INT64_MAX;
	uint64_t x76 = UINT64_MAX;
	static int32_t t12 = 238095;

	t12 = (((x73*x74)/x75)<=x76);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = 6582105233275LLU;
	int16_t x79 = INT16_MIN;
	int16_t x80 = 807;
	volatile int32_t t13 = 0;

	t13 = (((x77*x78)/x79)<=x80);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x83 = -29;
	int8_t x84 = 1;
	volatile int32_t t14 = -484232935;

	t14 = (((x81*x82)/x83)<=x84);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x93 = -28;
	static int16_t x94 = INT16_MIN;
	int32_t x95 = 18;
	static uint32_t x96 = 1631410U;
	volatile int32_t t15 = -225142;

	t15 = (((x93*x94)/x95)<=x96);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x101 = -515170967LL;
	int8_t x102 = INT8_MIN;
	int16_t x104 = -1;
	int32_t t16 = -214939;

	t16 = (((x101*x102)/x103)<=x104);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x110 = -1;
	static volatile int32_t x112 = -1;
	volatile int32_t t17 = 27016;

	t17 = (((x109*x110)/x111)<=x112);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x113 = -261237438626979LL;
	int16_t x114 = INT16_MIN;
	uint16_t x115 = 3367U;
	static uint64_t x116 = UINT64_MAX;
	volatile int32_t t18 = 468905562;

	t18 = (((x113*x114)/x115)<=x116);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x118 = INT32_MIN;
	static int8_t x119 = 8;
	int64_t x120 = 2548239763LL;
	volatile int32_t t19 = 47895;

	t19 = (((x117*x118)/x119)<=x120);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x125 = -219;
	uint32_t x127 = UINT32_MAX;
	volatile int32_t t20 = 180;

	t20 = (((x125*x126)/x127)<=x128);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x129 = -1LL;
	uint64_t x130 = UINT64_MAX;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = -1;
	volatile int32_t t21 = -184352674;

	t21 = (((x129*x130)/x131)<=x132);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x133 = 110U;
	volatile uint64_t x134 = 787261051181482282LLU;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = 75U;
	volatile int32_t t22 = 143805;

	t22 = (((x133*x134)/x135)<=x136);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x137 = -1;
	static volatile int32_t x139 = INT32_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t23 = 61;

	t23 = (((x137*x138)/x139)<=x140);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x141 = 14345U;
	volatile int16_t x142 = -1;
	int32_t t24 = -2889;

	t24 = (((x141*x142)/x143)<=x144);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x145 = -14420;
	int64_t x147 = INT64_MAX;
	int16_t x148 = 209;

	t25 = (((x145*x146)/x147)<=x148);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x153 = UINT16_MAX;
	static volatile int32_t x154 = -1;
	int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	volatile int32_t t26 = 128972297;

	t26 = (((x153*x154)/x155)<=x156);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x161 = INT8_MIN;
	uint8_t x162 = 3U;
	int64_t x163 = -1LL;
	volatile int32_t t27 = 3;

	t27 = (((x161*x162)/x163)<=x164);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x169 = 662857U;
	volatile uint8_t x171 = 1U;
	int32_t x172 = INT32_MIN;
	static int32_t t28 = -910194;

	t28 = (((x169*x170)/x171)<=x172);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x173 = -2;
	int8_t x174 = INT8_MIN;
	int16_t x175 = 3;
	uint16_t x176 = 573U;
	static int32_t t29 = -883857848;

	t29 = (((x173*x174)/x175)<=x176);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x182 = UINT8_MAX;
	int64_t x183 = -34370315LL;
	int8_t x184 = 0;
	volatile int32_t t30 = 87;

	t30 = (((x181*x182)/x183)<=x184);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x185 = UINT16_MAX;
	int32_t x187 = -1;
	uint32_t x188 = 204675U;
	int32_t t31 = -163225135;

	t31 = (((x185*x186)/x187)<=x188);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x189 = -1;
	static int8_t x190 = -1;
	uint16_t x191 = UINT16_MAX;
	uint8_t x192 = 2U;
	int32_t t32 = -25;

	t32 = (((x189*x190)/x191)<=x192);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x193 = 2250146874700LLU;
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	int32_t x196 = -238868888;

	t33 = (((x193*x194)/x195)<=x196);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x197 = INT32_MAX;
	int32_t x198 = -1;
	int8_t x199 = INT8_MIN;
	uint32_t x200 = 2614U;
	volatile int32_t t34 = 6;

	t34 = (((x197*x198)/x199)<=x200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x201 = -279LL;
	static volatile uint8_t x202 = 1U;
	uint32_t x203 = 1U;
	uint64_t x204 = UINT64_MAX;
	int32_t t35 = 21787596;

	t35 = (((x201*x202)/x203)<=x204);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x207 = 94U;
	volatile int8_t x208 = INT8_MAX;
	volatile int32_t t36 = -14921534;

	t36 = (((x205*x206)/x207)<=x208);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x210 = INT32_MAX;
	uint64_t x211 = 180045086664926LLU;
	uint16_t x212 = 6200U;
	int32_t t37 = -33261654;

	t37 = (((x209*x210)/x211)<=x212);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x214 = INT8_MIN;
	int32_t x215 = -19;
	uint16_t x216 = 196U;
	volatile int32_t t38 = 21;

	t38 = (((x213*x214)/x215)<=x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x218 = UINT16_MAX;
	static int8_t x219 = INT8_MIN;
	int16_t x220 = -3;
	volatile int32_t t39 = 3;

	t39 = (((x217*x218)/x219)<=x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x229 = -1;
	uint32_t x230 = UINT32_MAX;
	uint64_t x231 = 8552385947124953548LLU;
	volatile int32_t x232 = 3942;
	volatile int32_t t40 = 0;

	t40 = (((x229*x230)/x231)<=x232);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x233 = 2U;
	int16_t x234 = INT16_MIN;
	static volatile uint16_t x235 = 7U;
	static uint64_t x236 = 98465623429401667LLU;
	static volatile int32_t t41 = -7;

	t41 = (((x233*x234)/x235)<=x236);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x237 = -1LL;
	static int32_t x238 = INT32_MIN;
	uint64_t x239 = UINT64_MAX;
	uint8_t x240 = 50U;
	volatile int32_t t42 = -92472;

	t42 = (((x237*x238)/x239)<=x240);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x241 = UINT32_MAX;
	uint16_t x242 = UINT16_MAX;
	uint8_t x243 = 3U;
	static int32_t x244 = INT32_MIN;
	static volatile int32_t t43 = -7;

	t43 = (((x241*x242)/x243)<=x244);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x245 = 8800LLU;
	static uint64_t x246 = UINT64_MAX;
	volatile int32_t t44 = -27;

	t44 = (((x245*x246)/x247)<=x248);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x249 = -1;
	uint16_t x251 = UINT16_MAX;
	int64_t x252 = -1LL;
	int32_t t45 = 4675;

	t45 = (((x249*x250)/x251)<=x252);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x257 = UINT8_MAX;
	int64_t x258 = 1991401375863LL;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MAX;
	volatile int32_t t46 = -396;

	t46 = (((x257*x258)/x259)<=x260);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x262 = 14U;
	int16_t x263 = 371;
	int32_t t47 = 74312;

	t47 = (((x261*x262)/x263)<=x264);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x265 = 6563;
	int32_t x268 = -7;
	int32_t t48 = -60;

	t48 = (((x265*x266)/x267)<=x268);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x269 = 5479U;
	uint32_t x270 = 21406U;
	static int32_t t49 = 1;

	t49 = (((x269*x270)/x271)<=x272);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x277 = UINT64_MAX;
	int16_t x278 = INT16_MIN;
	int16_t x279 = -1;
	uint16_t x280 = UINT16_MAX;
	static volatile int32_t t50 = 1177516;

	t50 = (((x277*x278)/x279)<=x280);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x282 = INT8_MIN;
	static int8_t x284 = -1;
	int32_t t51 = -78338153;

	t51 = (((x281*x282)/x283)<=x284);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x289 = UINT16_MAX;
	static int32_t x290 = -24;
	uint16_t x291 = UINT16_MAX;
	volatile int64_t x292 = INT64_MIN;
	static volatile int32_t t52 = 1416;

	t52 = (((x289*x290)/x291)<=x292);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x293 = UINT32_MAX;
	static int32_t x294 = INT32_MAX;
	int64_t x295 = -592111LL;
	static volatile int32_t t53 = 1606;

	t53 = (((x293*x294)/x295)<=x296);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x302 = 0U;
	volatile uint16_t x303 = 23302U;
	int8_t x304 = 20;
	static volatile int32_t t54 = 253824369;

	t54 = (((x301*x302)/x303)<=x304);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x305 = INT32_MAX;
	uint64_t x306 = 892499330LLU;
	int8_t x307 = 2;
	int32_t x308 = INT32_MAX;
	volatile int32_t t55 = 1;

	t55 = (((x305*x306)/x307)<=x308);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x309 = 5673;
	int64_t x312 = -1LL;
	volatile int32_t t56 = 16;

	t56 = (((x309*x310)/x311)<=x312);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x313 = 424594640U;
	static volatile uint16_t x315 = 2U;
	int16_t x316 = -89;

	t57 = (((x313*x314)/x315)<=x316);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x325 = UINT32_MAX;
	uint16_t x326 = 20U;
	volatile uint16_t x327 = UINT16_MAX;
	int32_t x328 = -1;
	volatile int32_t t58 = -6040076;

	t58 = (((x325*x326)/x327)<=x328);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x330 = 3U;
	int64_t x331 = -1193613835111949371LL;
	int32_t t59 = -88169909;

	t59 = (((x329*x330)/x331)<=x332);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x334 = INT64_MAX;
	uint64_t x336 = 6247575618460112742LLU;
	volatile int32_t t60 = -9638;

	t60 = (((x333*x334)/x335)<=x336);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x337 = 49;
	volatile uint8_t x338 = 89U;
	volatile int64_t x340 = INT64_MAX;
	volatile int32_t t61 = 30;

	t61 = (((x337*x338)/x339)<=x340);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x341 = -7688;
	int64_t x342 = -238LL;
	int32_t x343 = -1982237;
	volatile int64_t x344 = -17647070381405398LL;
	int32_t t62 = 15;

	t62 = (((x341*x342)/x343)<=x344);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x349 = -1LL;
	uint64_t x350 = 5LLU;
	uint32_t x351 = 211497U;
	uint32_t x352 = 1111847U;

	t63 = (((x349*x350)/x351)<=x352);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x354 = 0;
	uint16_t x355 = 113U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t64 = 69;

	t64 = (((x353*x354)/x355)<=x356);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x357 = 7045894806852LLU;
	int16_t x358 = INT16_MAX;
	int32_t x359 = INT32_MIN;
	static uint8_t x360 = UINT8_MAX;
	volatile int32_t t65 = 79634;

	t65 = (((x357*x358)/x359)<=x360);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x361 = 1U;
	uint32_t x362 = 14041U;
	static uint16_t x363 = 25704U;
	int64_t x364 = INT64_MIN;
	volatile int32_t t66 = -6083;

	t66 = (((x361*x362)/x363)<=x364);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x365 = -166;
	static int8_t x366 = 36;
	int64_t x367 = -1LL;
	uint32_t x368 = 210666U;
	int32_t t67 = 928840539;

	t67 = (((x365*x366)/x367)<=x368);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x369 = 1;
	uint16_t x370 = 9445U;
	int32_t x371 = -1;
	int64_t x372 = 1410133189079135753LL;
	volatile int32_t t68 = 42656;

	t68 = (((x369*x370)/x371)<=x372);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x374 = INT32_MAX;
	int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MIN;
	int32_t t69 = 36401714;

	t69 = (((x373*x374)/x375)<=x376);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x377 = INT8_MIN;
	int16_t x378 = 0;
	uint16_t x379 = 203U;
	int64_t x380 = INT64_MIN;

	t70 = (((x377*x378)/x379)<=x380);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x389 = -643;
	int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MAX;
	int32_t t71 = 37121587;

	t71 = (((x389*x390)/x391)<=x392);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x398 = INT16_MAX;
	uint16_t x399 = UINT16_MAX;
	static volatile int32_t t72 = 91;

	t72 = (((x397*x398)/x399)<=x400);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x402 = -182127LL;
	int64_t x403 = INT64_MAX;

	t73 = (((x401*x402)/x403)<=x404);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x409 = 2557;
	int16_t x410 = -29;
	int64_t x411 = INT64_MIN;
	int16_t x412 = -3644;
	volatile int32_t t74 = -92031074;

	t74 = (((x409*x410)/x411)<=x412);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x413 = INT64_MAX;
	int8_t x414 = 1;
	int16_t x415 = -1;
	uint16_t x416 = 16100U;
	int32_t t75 = -3;

	t75 = (((x413*x414)/x415)<=x416);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x421 = INT64_MIN;
	uint64_t x422 = 170620115309999453LLU;
	int64_t x423 = INT64_MIN;
	static uint64_t x424 = 3247572377022207LLU;
	volatile int32_t t76 = -9608;

	t76 = (((x421*x422)/x423)<=x424);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x425 = 12354;
	int16_t x426 = INT16_MIN;
	int64_t x427 = -1LL;
	int8_t x428 = INT8_MIN;

	t77 = (((x425*x426)/x427)<=x428);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x437 = -1;
	volatile int32_t t78 = -13534985;

	t78 = (((x437*x438)/x439)<=x440);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x441 = -667;
	uint64_t x442 = 126319518LLU;
	int8_t x443 = INT8_MIN;
	volatile int32_t x444 = INT32_MIN;
	volatile int32_t t79 = 53232;

	t79 = (((x441*x442)/x443)<=x444);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x445 = 2164555U;
	static int8_t x446 = INT8_MAX;
	int64_t x447 = INT64_MAX;
	int8_t x448 = INT8_MIN;
	volatile int32_t t80 = 105192378;

	t80 = (((x445*x446)/x447)<=x448);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x449 = 161783U;
	int8_t x450 = -1;
	static volatile int16_t x451 = -24;
	static uint64_t x452 = UINT64_MAX;

	t81 = (((x449*x450)/x451)<=x452);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x453 = 15;
	int8_t x454 = 32;
	volatile int32_t x455 = -1;
	uint8_t x456 = 0U;

	t82 = (((x453*x454)/x455)<=x456);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x459 = INT32_MIN;
	static int8_t x460 = INT8_MIN;
	int32_t t83 = -226011788;

	t83 = (((x457*x458)/x459)<=x460);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x465 = 1;
	uint16_t x466 = 5976U;
	int8_t x468 = INT8_MIN;
	static volatile int32_t t84 = 363;

	t84 = (((x465*x466)/x467)<=x468);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x469 = UINT32_MAX;
	static int16_t x470 = INT16_MIN;
	int32_t x471 = -319360;
	int32_t x472 = -25;
	int32_t t85 = 1;

	t85 = (((x469*x470)/x471)<=x472);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x473 = 4858868331LLU;
	int16_t x475 = -1;
	static int8_t x476 = INT8_MAX;
	volatile int32_t t86 = -1748;

	t86 = (((x473*x474)/x475)<=x476);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x477 = -1;
	int32_t x478 = 4;
	static uint32_t x479 = 60554943U;
	int16_t x480 = INT16_MIN;
	volatile int32_t t87 = 66403684;

	t87 = (((x477*x478)/x479)<=x480);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x481 = -276LL;
	int16_t x482 = INT16_MAX;
	static uint8_t x483 = UINT8_MAX;
	uint32_t x484 = UINT32_MAX;
	volatile int32_t t88 = 570585;

	t88 = (((x481*x482)/x483)<=x484);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x489 = -867;
	static int8_t x490 = INT8_MAX;
	int64_t x492 = INT64_MIN;
	volatile int32_t t89 = 1500;

	t89 = (((x489*x490)/x491)<=x492);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x494 = INT8_MIN;
	int32_t x495 = INT32_MIN;
	volatile int32_t t90 = -77344;

	t90 = (((x493*x494)/x495)<=x496);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x497 = 30877U;
	volatile int16_t x498 = INT16_MIN;
	static uint16_t x499 = 126U;
	int32_t t91 = -21274694;

	t91 = (((x497*x498)/x499)<=x500);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x501 = 74U;
	int16_t x502 = -1;
	int64_t x503 = -48353LL;
	static int16_t x504 = INT16_MIN;
	int32_t t92 = -17999954;

	t92 = (((x501*x502)/x503)<=x504);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x505 = 1971788979LLU;
	uint64_t x506 = 875632596844LLU;
	int8_t x507 = INT8_MIN;
	volatile uint64_t x508 = 4169375543129768719LLU;

	t93 = (((x505*x506)/x507)<=x508);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x509 = 0U;
	int32_t x510 = INT32_MIN;
	volatile uint16_t x512 = UINT16_MAX;
	volatile int32_t t94 = -3805;

	t94 = (((x509*x510)/x511)<=x512);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x513 = -1LL;
	int32_t x514 = 65;
	static int8_t x515 = -1;
	volatile uint8_t x516 = 62U;

	t95 = (((x513*x514)/x515)<=x516);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x517 = 124U;
	int8_t x518 = INT8_MIN;
	int64_t x520 = -1LL;
	int32_t t96 = -474184012;

	t96 = (((x517*x518)/x519)<=x520);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x521 = -4222;
	uint32_t x523 = 66553U;
	int64_t x524 = -1LL;
	volatile int32_t t97 = -109;

	t97 = (((x521*x522)/x523)<=x524);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x525 = -13;
	static uint16_t x526 = 4U;
	volatile uint32_t x527 = 796422U;
	int32_t t98 = 55053336;

	t98 = (((x525*x526)/x527)<=x528);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x529 = INT8_MIN;
	static int64_t x531 = INT64_MIN;
	static int32_t x532 = 551;
	static int32_t t99 = 7;

	t99 = (((x529*x530)/x531)<=x532);

	if (t99 != 1) { NG(); } else { ; }
	
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

