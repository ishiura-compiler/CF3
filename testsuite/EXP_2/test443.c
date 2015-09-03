#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 292960218342807LLU;
int16_t x2 = INT16_MIN;
uint64_t x14 = 52175721535LLU;
int8_t x26 = INT8_MAX;
int8_t x27 = INT8_MIN;
int32_t x30 = INT32_MAX;
static uint64_t x31 = UINT64_MAX;
int64_t t4 = -206LL;
int64_t x34 = -1LL;
static volatile int64_t t5 = INT64_MIN;
int32_t x40 = -1;
volatile int32_t t6 = 13;
volatile int32_t t7 = INT32_MIN;
uint16_t x45 = UINT16_MAX;
uint64_t x47 = 3809693084LLU;
int32_t t9 = -1984;
volatile int32_t x57 = INT32_MAX;
static volatile int32_t t11 = 38924;
int32_t x64 = INT32_MIN;
static uint8_t x86 = 105U;
int32_t t16 = INT32_MIN;
uint32_t x89 = UINT32_MAX;
volatile int16_t x91 = INT16_MIN;
int32_t x92 = INT32_MIN;
int8_t x102 = -55;
volatile uint32_t x108 = 4338514U;
static int32_t t20 = 196122;
int32_t x133 = INT32_MIN;
static int32_t x142 = -1;
int8_t x143 = INT8_MIN;
int8_t x144 = INT8_MAX;
int64_t x152 = -8LL;
static int16_t x155 = INT16_MIN;
volatile uint16_t x177 = UINT16_MAX;
int32_t t29 = -4550639;
int8_t x187 = -1;
static int64_t x189 = -13829409077LL;
uint16_t x199 = UINT16_MAX;
uint32_t t32 = 1U;
volatile int64_t x201 = -192785230LL;
static int8_t x204 = INT8_MIN;
int32_t x205 = INT32_MIN;
int8_t x206 = INT8_MIN;
static int64_t x210 = INT64_MIN;
volatile uint16_t x211 = 0U;
volatile int32_t t36 = -9;
static uint64_t t38 = 626276274115LLU;
int64_t x229 = -1LL;
uint16_t x241 = 7379U;
static volatile int16_t x243 = INT16_MIN;
volatile int64_t t40 = 328232LL;
volatile int8_t x246 = INT8_MIN;
uint32_t t41 = 65837219U;
static volatile int8_t x251 = 1;
static int32_t x252 = INT32_MIN;
static volatile int32_t t42 = INT32_MIN;
uint16_t x255 = 295U;
volatile int32_t t43 = -29543548;
uint8_t x257 = 11U;
static int32_t t44 = 50635;
int8_t x262 = INT8_MAX;
uint32_t t45 = 11141U;
int64_t x278 = 38LL;
uint32_t x280 = UINT32_MAX;
static uint32_t t48 = 7511798U;
static int32_t t49 = 155173;
int32_t t50 = -165;
int64_t x297 = -1LL;
int64_t x299 = -9239972635881LL;
static int16_t x314 = 290;
static int16_t x324 = INT16_MAX;
int8_t x333 = 1;
uint64_t x348 = UINT64_MAX;
uint8_t x358 = 0U;
int16_t x360 = INT16_MIN;
int32_t t60 = -3345;
static uint64_t x363 = UINT64_MAX;
uint64_t x370 = 2005986916107LLU;
int64_t x376 = 1605608540696257LL;
volatile int32_t t65 = 14923;
int32_t x396 = -174;
static volatile int8_t x397 = INT8_MAX;
int16_t x400 = INT16_MAX;
uint64_t x403 = UINT64_MAX;
int8_t x404 = INT8_MIN;
int16_t x405 = INT16_MAX;
volatile uint32_t x406 = 65114235U;
volatile int32_t x408 = 8;
int32_t x418 = -1;
int64_t x420 = INT64_MIN;
uint32_t x423 = 22360290U;
int32_t t72 = 2167;
static int16_t x425 = INT16_MIN;
static uint16_t x437 = 26292U;
uint64_t x451 = UINT64_MAX;
int64_t t78 = INT64_MIN;
static int16_t x463 = 16;
static uint64_t x467 = UINT64_MAX;
static int16_t x476 = INT16_MIN;
static int32_t t82 = 998021;
volatile uint64_t x491 = 109166482466LLU;
static int32_t x493 = 108883;
volatile int32_t t84 = INT32_MIN;
uint32_t x503 = 116U;
static uint64_t t85 = 357LLU;
static uint64_t x508 = 1076942830120LLU;
int8_t x513 = -1;
volatile uint32_t t87 = 3765644U;
int32_t x518 = 1;
int16_t x520 = INT16_MAX;
int16_t x521 = 3;
uint16_t x527 = 11692U;
int8_t x528 = INT8_MIN;
volatile int16_t x551 = INT16_MIN;
int8_t x573 = INT8_MAX;
int8_t x586 = 1;


void f0(void) {
	uint8_t x3 = 2U;
	uint16_t x4 = 2222U;
	volatile int32_t t0 = -55754782;

	t0 = ((x1<(x2*x3))+x4);

	if (t0 != 2223) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 1;
	static int64_t x15 = 12366186431854LL;
	uint64_t x16 = 43204591037998750LLU;
	volatile uint64_t t1 = 2012896LLU;

	t1 = ((x13<(x14*x15))+x16);

	if (t1 != 43204591037998751LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x21 = INT32_MIN;
	volatile int8_t x22 = -13;
	int64_t x23 = -1174763LL;
	uint8_t x24 = 0U;
	int32_t t2 = -94;

	t2 = ((x21<(x22*x23))+x24);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = 13110;
	int8_t x28 = INT8_MIN;
	int32_t t3 = -1444;

	t3 = ((x25<(x26*x27))+x28);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = 50U;
	static int64_t x32 = INT64_MIN;

	t4 = ((x29<(x30*x31))+x32);

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = UINT32_MAX;
	static int16_t x35 = -1;
	int64_t x36 = INT64_MIN;

	t5 = ((x33<(x34*x35))+x36);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = 30U;
	static uint16_t x38 = UINT16_MAX;
	static volatile uint32_t x39 = 1250U;

	t6 = ((x37<(x38*x39))+x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -1;
	static int8_t x42 = -25;
	uint64_t x43 = UINT64_MAX;
	int32_t x44 = INT32_MIN;

	t7 = ((x41<(x42*x43))+x44);

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x46 = 7362;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t8 = -34607;

	t8 = ((x45<(x46*x47))+x48);

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x49 = -1LL;
	static int16_t x50 = -15786;
	int16_t x51 = INT16_MAX;
	int8_t x52 = -15;

	t9 = ((x49<(x50*x51))+x52);

	if (t9 != -15) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x53 = UINT64_MAX;
	uint32_t x54 = 715003372U;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = 121U;
	static volatile int32_t t10 = 3;

	t10 = ((x53<(x54*x55))+x56);

	if (t10 != 121) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x58 = 6U;
	int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MIN;

	t11 = ((x57<(x58*x59))+x60);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -1;
	uint8_t x62 = UINT8_MAX;
	volatile int16_t x63 = INT16_MIN;
	volatile int32_t t12 = INT32_MIN;

	t12 = ((x61<(x62*x63))+x64);

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = UINT8_MAX;
	volatile uint32_t x66 = 850U;
	volatile uint8_t x67 = UINT8_MAX;
	volatile int64_t x68 = INT64_MIN;
	int64_t t13 = -134743995811912234LL;

	t13 = ((x65<(x66*x67))+x68);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x77 = -1;
	int16_t x78 = -1;
	int64_t x79 = -194LL;
	int16_t x80 = INT16_MAX;
	int32_t t14 = -77647185;

	t14 = ((x77<(x78*x79))+x80);

	if (t14 != 32768) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x81 = 24U;
	static uint64_t x82 = 295365978008272409LLU;
	static volatile int16_t x83 = INT16_MAX;
	int16_t x84 = 13491;
	int32_t t15 = -63;

	t15 = ((x81<(x82*x83))+x84);

	if (t15 != 13492) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x85 = INT16_MIN;
	static uint64_t x87 = 36151631843389881LLU;
	static volatile int32_t x88 = INT32_MIN;

	t16 = ((x85<(x86*x87))+x88);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x90 = -550;
	int32_t t17 = INT32_MIN;

	t17 = ((x89<(x90*x91))+x92);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x101 = UINT16_MAX;
	uint8_t x103 = 95U;
	static uint32_t x104 = UINT32_MAX;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = ((x101<(x102*x103))+x104);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = -3;
	static uint64_t x106 = 1139094LLU;
	static int32_t x107 = INT32_MAX;
	volatile uint32_t t19 = 96556U;

	t19 = ((x105<(x106*x107))+x108);

	if (t19 != 4338514U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x109 = UINT16_MAX;
	uint16_t x110 = 1011U;
	int64_t x111 = 2LL;
	uint8_t x112 = 12U;

	t20 = ((x109<(x110*x111))+x112);

	if (t20 != 12) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x117 = INT64_MIN;
	int8_t x118 = INT8_MIN;
	static int8_t x119 = INT8_MIN;
	static volatile int8_t x120 = INT8_MIN;
	volatile int32_t t21 = -540063512;

	t21 = ((x117<(x118*x119))+x120);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x121 = -13;
	int64_t x122 = -1LL;
	uint8_t x123 = 79U;
	volatile uint32_t x124 = UINT32_MAX;
	uint32_t t22 = UINT32_MAX;

	t22 = ((x121<(x122*x123))+x124);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = INT16_MIN;
	uint16_t x126 = 1U;
	int8_t x127 = 1;
	static int16_t x128 = INT16_MAX;
	static volatile int32_t t23 = -55925;

	t23 = ((x125<(x126*x127))+x128);

	if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x134 = -1;
	uint16_t x135 = UINT16_MAX;
	volatile uint8_t x136 = 1U;
	int32_t t24 = -153;

	t24 = ((x133<(x134*x135))+x136);

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x141 = 7U;
	static volatile int32_t t25 = -1101;

	t25 = ((x141<(x142*x143))+x144);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x149 = INT8_MAX;
	static int16_t x150 = INT16_MIN;
	uint64_t x151 = UINT64_MAX;
	static int64_t t26 = -40932108544LL;

	t26 = ((x149<(x150*x151))+x152);

	if (t26 != -7LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x153 = 27;
	uint64_t x154 = 111035994LLU;
	volatile int8_t x156 = 1;
	volatile int32_t t27 = -342979322;

	t27 = ((x153<(x154*x155))+x156);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x178 = INT8_MAX;
	int8_t x179 = 1;
	int8_t x180 = INT8_MIN;
	volatile int32_t t28 = 61829629;

	t28 = ((x177<(x178*x179))+x180);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int16_t x182 = 0;
	int8_t x183 = INT8_MAX;
	static int16_t x184 = -7440;

	t29 = ((x181<(x182*x183))+x184);

	if (t29 != -7440) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x185 = INT64_MAX;
	static int8_t x186 = 58;
	static volatile int16_t x188 = INT16_MAX;
	int32_t t30 = -228628526;

	t30 = ((x185<(x186*x187))+x188);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x190 = 2;
	int32_t x191 = -27324674;
	int64_t x192 = 306242951861301LL;
	static int64_t t31 = -7142476LL;

	t31 = ((x189<(x190*x191))+x192);

	if (t31 != 306242951861302LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x197 = INT64_MAX;
	int8_t x198 = INT8_MIN;
	uint32_t x200 = 61U;

	t32 = ((x197<(x198*x199))+x200);

	if (t32 != 61U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x202 = INT8_MIN;
	int64_t x203 = -1LL;
	volatile int32_t t33 = -736058;

	t33 = ((x201<(x202*x203))+x204);

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x207 = INT8_MIN;
	int32_t x208 = -1;
	volatile int32_t t34 = -211057;

	t34 = ((x205<(x206*x207))+x208);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x209 = INT16_MIN;
	uint64_t x212 = 36563939533758LLU;
	uint64_t t35 = 27779996LLU;

	t35 = ((x209<(x210*x211))+x212);

	if (t35 != 36563939533759LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x213 = -3;
	static int64_t x214 = 10477LL;
	static uint8_t x215 = 3U;
	uint8_t x216 = UINT8_MAX;

	t36 = ((x213<(x214*x215))+x216);

	if (t36 != 256) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x217 = 861627304685302278LLU;
	uint8_t x218 = 0U;
	volatile int64_t x219 = INT64_MIN;
	int16_t x220 = INT16_MAX;
	int32_t t37 = -102;

	t37 = ((x217<(x218*x219))+x220);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x221 = INT16_MAX;
	int32_t x222 = -1;
	uint8_t x223 = UINT8_MAX;
	static uint64_t x224 = 2380LLU;

	t38 = ((x221<(x222*x223))+x224);

	if (t38 != 2380LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x230 = 46219LL;
	volatile int32_t x231 = -29;
	int32_t x232 = INT32_MIN;
	volatile int32_t t39 = INT32_MIN;

	t39 = ((x229<(x230*x231))+x232);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x242 = INT8_MIN;
	static int64_t x244 = 230498LL;

	t40 = ((x241<(x242*x243))+x244);

	if (t40 != 230499LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x245 = INT8_MIN;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = 40698U;

	t41 = ((x245<(x246*x247))+x248);

	if (t41 != 40699U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x249 = INT8_MIN;
	int16_t x250 = -13486;

	t42 = ((x249<(x250*x251))+x252);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x253 = -21;
	static uint32_t x254 = 43U;
	uint8_t x256 = 28U;

	t43 = ((x253<(x254*x255))+x256);

	if (t43 != 28) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x258 = INT16_MAX;
	uint64_t x259 = 10LLU;
	static int8_t x260 = -6;

	t44 = ((x257<(x258*x259))+x260);

	if (t44 != -5) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x261 = UINT64_MAX;
	static int16_t x263 = INT16_MIN;
	volatile uint32_t x264 = 1489856867U;

	t45 = ((x261<(x262*x263))+x264);

	if (t45 != 1489856867U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x269 = INT16_MIN;
	int32_t x270 = -1;
	int8_t x271 = -1;
	int64_t x272 = INT64_MIN;
	static volatile int64_t t46 = 207796075LL;

	t46 = ((x269<(x270*x271))+x272);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x273 = INT64_MIN;
	volatile uint16_t x274 = 127U;
	int16_t x275 = 1;
	uint64_t x276 = 315LLU;
	uint64_t t47 = 1113364660306636LLU;

	t47 = ((x273<(x274*x275))+x276);

	if (t47 != 316LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x277 = INT16_MIN;
	volatile uint32_t x279 = 1965427998U;

	t48 = ((x277<(x278*x279))+x280);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x282 = 50;
	uint32_t x283 = UINT32_MAX;
	int16_t x284 = INT16_MIN;

	t49 = ((x281<(x282*x283))+x284);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x289 = -1LL;
	volatile uint32_t x290 = 153762104U;
	volatile uint16_t x291 = UINT16_MAX;
	volatile int32_t x292 = -305403;

	t50 = ((x289<(x290*x291))+x292);

	if (t50 != -305402) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x293 = UINT64_MAX;
	uint16_t x294 = 1699U;
	static int16_t x295 = -1;
	static uint32_t x296 = UINT32_MAX;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = ((x293<(x294*x295))+x296);

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x298 = 2U;
	int8_t x300 = -28;
	int32_t t52 = 438863;

	t52 = ((x297<(x298*x299))+x300);

	if (t52 != -28) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x305 = INT64_MIN;
	int32_t x306 = 1;
	int64_t x307 = 90774725961489LL;
	int16_t x308 = -1;
	int32_t t53 = -1784;

	t53 = ((x305<(x306*x307))+x308);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x313 = UINT64_MAX;
	int8_t x315 = -1;
	uint16_t x316 = UINT16_MAX;
	static int32_t t54 = -200;

	t54 = ((x313<(x314*x315))+x316);

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x317 = 1700U;
	uint32_t x318 = 180821U;
	uint64_t x319 = 2245633LLU;
	uint16_t x320 = 798U;
	volatile int32_t t55 = 9471;

	t55 = ((x317<(x318*x319))+x320);

	if (t55 != 799) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x321 = INT16_MIN;
	int32_t x322 = -3837;
	uint16_t x323 = 2917U;
	static volatile int32_t t56 = -13;

	t56 = ((x321<(x322*x323))+x324);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x334 = -11;
	uint8_t x335 = 3U;
	volatile int64_t x336 = INT64_MIN;
	volatile int64_t t57 = INT64_MIN;

	t57 = ((x333<(x334*x335))+x336);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x337 = UINT8_MAX;
	static int16_t x338 = INT16_MIN;
	int8_t x339 = 25;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = ((x337<(x338*x339))+x340);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x345 = INT32_MAX;
	int8_t x346 = -1;
	int8_t x347 = -7;
	static uint64_t t59 = UINT64_MAX;

	t59 = ((x345<(x346*x347))+x348);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x357 = INT32_MIN;
	volatile int64_t x359 = 35950094854LL;

	t60 = ((x357<(x358*x359))+x360);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x361 = -552709956;
	int32_t x362 = INT32_MIN;
	int8_t x364 = INT8_MAX;
	static volatile int32_t t61 = 11261092;

	t61 = ((x361<(x362*x363))+x364);

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x365 = -1LL;
	uint32_t x366 = UINT32_MAX;
	static int64_t x367 = -1LL;
	int16_t x368 = -30;
	int32_t t62 = -3083;

	t62 = ((x365<(x366*x367))+x368);

	if (t62 != -30) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x369 = UINT16_MAX;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t63 = 40084344;

	t63 = ((x369<(x370*x371))+x372);

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x373 = 12LLU;
	volatile int32_t x374 = -1;
	static int16_t x375 = INT16_MAX;
	volatile int64_t t64 = -963LL;

	t64 = ((x373<(x374*x375))+x376);

	if (t64 != 1605608540696258LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x385 = 10U;
	int64_t x386 = INT64_MIN;
	static uint64_t x387 = 24367574236LLU;
	volatile int8_t x388 = -1;

	t65 = ((x385<(x386*x387))+x388);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x389 = -1;
	uint64_t x390 = 13LLU;
	static int8_t x391 = INT8_MIN;
	int32_t x392 = -1;
	int32_t t66 = 6470256;

	t66 = ((x389<(x390*x391))+x392);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x393 = -5;
	uint16_t x394 = 713U;
	static int16_t x395 = INT16_MAX;
	static int32_t t67 = 730;

	t67 = ((x393<(x394*x395))+x396);

	if (t67 != -173) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x398 = 0LLU;
	int8_t x399 = INT8_MIN;
	volatile int32_t t68 = 146792525;

	t68 = ((x397<(x398*x399))+x400);

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x401 = INT32_MIN;
	int64_t x402 = -1LL;
	int32_t t69 = -535672922;

	t69 = ((x401<(x402*x403))+x404);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x407 = 122U;
	int32_t t70 = -113695;

	t70 = ((x405<(x406*x407))+x408);

	if (t70 != 9) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x417 = INT64_MIN;
	static int32_t x419 = -1;
	int64_t t71 = -31LL;

	t71 = ((x417<(x418*x419))+x420);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x421 = INT8_MIN;
	uint32_t x422 = UINT32_MAX;
	static volatile uint8_t x424 = UINT8_MAX;

	t72 = ((x421<(x422*x423))+x424);

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x426 = INT16_MIN;
	int16_t x427 = 6;
	int8_t x428 = INT8_MIN;
	static volatile int32_t t73 = 4995446;

	t73 = ((x425<(x426*x427))+x428);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x433 = 13U;
	int64_t x434 = -5342560546LL;
	uint64_t x435 = 4301586204720116047LLU;
	uint16_t x436 = 0U;
	static int32_t t74 = 96803;

	t74 = ((x433<(x434*x435))+x436);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x438 = 1;
	int8_t x439 = -15;
	int64_t x440 = INT64_MIN;
	static int64_t t75 = INT64_MIN;

	t75 = ((x437<(x438*x439))+x440);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x445 = INT16_MIN;
	int16_t x446 = -2;
	volatile uint8_t x447 = 4U;
	int16_t x448 = INT16_MIN;
	volatile int32_t t76 = -1830;

	t76 = ((x445<(x446*x447))+x448);

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x449 = -1;
	volatile int8_t x450 = -1;
	volatile uint16_t x452 = 1977U;
	int32_t t77 = -28706891;

	t77 = ((x449<(x450*x451))+x452);

	if (t77 != 1977) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x457 = INT8_MIN;
	int16_t x458 = 118;
	uint64_t x459 = 3788729203031LLU;
	static int64_t x460 = INT64_MIN;

	t78 = ((x457<(x458*x459))+x460);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x461 = -442;
	int64_t x462 = -1LL;
	uint64_t x464 = 485366240854715311LLU;
	uint64_t t79 = 99667583047861391LLU;

	t79 = ((x461<(x462*x463))+x464);

	if (t79 != 485366240854715312LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x465 = INT8_MIN;
	volatile int8_t x466 = INT8_MIN;
	static volatile int8_t x468 = INT8_MIN;
	volatile int32_t t80 = -34;

	t80 = ((x465<(x466*x467))+x468);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x473 = 600U;
	static volatile int16_t x474 = INT16_MIN;
	volatile uint64_t x475 = 148LLU;
	static volatile int32_t t81 = -75229894;

	t81 = ((x473<(x474*x475))+x476);

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x481 = -8455032502LL;
	uint64_t x482 = UINT64_MAX;
	volatile int16_t x483 = 1342;
	uint8_t x484 = 2U;

	t82 = ((x481<(x482*x483))+x484);

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x489 = INT64_MAX;
	int16_t x490 = 24;
	int16_t x492 = -67;
	static int32_t t83 = 5122;

	t83 = ((x489<(x490*x491))+x492);

	if (t83 != -67) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x494 = INT64_MAX;
	int32_t x495 = -1;
	static int32_t x496 = INT32_MIN;

	t84 = ((x493<(x494*x495))+x496);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x501 = 75613809345174500LLU;
	uint64_t x502 = 5280LLU;
	uint64_t x504 = 481016576924LLU;

	t85 = ((x501<(x502*x503))+x504);

	if (t85 != 481016576924LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x505 = INT64_MIN;
	uint32_t x506 = 1853608610U;
	int8_t x507 = INT8_MIN;
	volatile uint64_t t86 = 47396701620990LLU;

	t86 = ((x505<(x506*x507))+x508);

	if (t86 != 1076942830121LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x514 = 4810LL;
	static int16_t x515 = 12043;
	uint32_t x516 = UINT32_MAX;

	t87 = ((x513<(x514*x515))+x516);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x517 = 0;
	static uint16_t x519 = 28U;
	volatile int32_t t88 = -1;

	t88 = ((x517<(x518*x519))+x520);

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x522 = UINT8_MAX;
	int8_t x523 = INT8_MIN;
	int16_t x524 = -1;
	volatile int32_t t89 = 18414;

	t89 = ((x521<(x522*x523))+x524);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x525 = -10870LL;
	static uint16_t x526 = 16854U;
	int32_t t90 = 1186081;

	t90 = ((x525<(x526*x527))+x528);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x537 = 23U;
	static int8_t x538 = -1;
	int8_t x539 = INT8_MIN;
	int64_t x540 = -1LL;
	int64_t t91 = -1LL;

	t91 = ((x537<(x538*x539))+x540);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x545 = INT32_MAX;
	uint8_t x546 = UINT8_MAX;
	static int16_t x547 = INT16_MAX;
	uint8_t x548 = 3U;
	volatile int32_t t92 = 0;

	t92 = ((x545<(x546*x547))+x548);

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x549 = 61;
	uint8_t x550 = 24U;
	uint16_t x552 = UINT16_MAX;
	int32_t t93 = -1;

	t93 = ((x549<(x550*x551))+x552);

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x557 = -1;
	volatile uint32_t x558 = UINT32_MAX;
	static uint32_t x559 = 50U;
	volatile int64_t x560 = INT64_MAX;
	volatile int64_t t94 = INT64_MAX;

	t94 = ((x557<(x558*x559))+x560);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x565 = -794422007194759LL;
	int64_t x566 = INT64_MAX;
	volatile uint32_t x567 = 1U;
	int64_t x568 = 35LL;
	int64_t t95 = -1477400798LL;

	t95 = ((x565<(x566*x567))+x568);

	if (t95 != 36LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x574 = 2018732LLU;
	volatile int32_t x575 = INT32_MIN;
	int8_t x576 = 7;
	int32_t t96 = -234543;

	t96 = ((x573<(x574*x575))+x576);

	if (t96 != 8) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x577 = -1LL;
	int8_t x578 = 7;
	uint8_t x579 = 2U;
	int32_t x580 = INT32_MIN;
	int32_t t97 = 12;

	t97 = ((x577<(x578*x579))+x580);

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x581 = INT32_MIN;
	static int64_t x582 = 1LL;
	int8_t x583 = INT8_MIN;
	int32_t x584 = INT32_MIN;
	static volatile int32_t t98 = 2963;

	t98 = ((x581<(x582*x583))+x584);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x585 = 419U;
	int8_t x587 = 3;
	uint64_t x588 = UINT64_MAX;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = ((x585<(x586*x587))+x588);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

