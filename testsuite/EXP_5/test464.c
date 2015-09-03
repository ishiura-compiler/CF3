#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x6 = -1;
int64_t x8 = -1LL;
volatile int32_t t1 = 16132744;
int32_t t2 = 0;
static volatile int64_t x26 = -129LL;
int32_t x29 = INT32_MAX;
uint32_t x30 = 97879177U;
volatile int32_t x36 = INT32_MAX;
int64_t x52 = INT64_MIN;
static volatile uint64_t x62 = 14LLU;
uint8_t x66 = 1U;
uint64_t x78 = 482186943669083717LLU;
uint32_t x92 = UINT32_MAX;
volatile int32_t t14 = -453;
int16_t x105 = -26;
int16_t x108 = INT16_MAX;
uint64_t x109 = UINT64_MAX;
int8_t x123 = -61;
volatile int64_t x124 = 38LL;
static volatile uint64_t x134 = UINT64_MAX;
uint64_t x142 = 4794865773018LLU;
uint32_t x143 = 1021U;
static uint16_t x147 = 354U;
static int8_t x162 = INT8_MIN;
volatile int32_t t26 = -2727333;
static int16_t x178 = 1;
int32_t t27 = 137;
int32_t x185 = INT32_MIN;
uint8_t x186 = 29U;
static volatile int16_t x197 = INT16_MIN;
int8_t x200 = INT8_MAX;
uint16_t x207 = 1626U;
int8_t x208 = INT8_MIN;
int32_t t35 = 1129325;
volatile int64_t x228 = INT64_MIN;
volatile int32_t x229 = 0;
uint64_t x231 = UINT64_MAX;
volatile int16_t x234 = -534;
uint64_t x251 = 198LLU;
int16_t x252 = INT16_MIN;
volatile int16_t x256 = 12;
uint32_t x267 = UINT32_MAX;
uint64_t x272 = 0LLU;
int16_t x281 = INT16_MIN;
uint16_t x285 = 460U;
static int32_t x289 = INT32_MIN;
int8_t x296 = -6;
int32_t t50 = 1;
static volatile int32_t t51 = -374;
uint8_t x303 = 1U;
int16_t x304 = INT16_MIN;
static int8_t x312 = -39;
uint64_t x313 = UINT64_MAX;
int8_t x326 = -1;
uint8_t x328 = 26U;
uint32_t x329 = 42549U;
uint8_t x335 = 2U;
int8_t x346 = INT8_MIN;
volatile int32_t t60 = 1111;
int16_t x352 = -6069;
int64_t x358 = INT64_MIN;
int32_t t62 = -1;
int32_t t63 = -7245;
int8_t x368 = -1;
volatile int32_t t64 = 85259;
uint8_t x370 = 1U;
uint8_t x372 = 44U;
static int32_t t66 = 8;
uint64_t x382 = UINT64_MAX;
uint8_t x383 = 75U;
uint8_t x387 = 2U;
int32_t x389 = 229026;
static int16_t x391 = -1;
static int32_t x407 = INT32_MIN;
int32_t x408 = -1;
uint32_t x410 = 16U;
int8_t x433 = INT8_MIN;
int16_t x438 = INT16_MIN;
int16_t x466 = INT16_MIN;
int32_t x473 = -1;
volatile int32_t t82 = -994902201;
int16_t x482 = 2;
uint8_t x487 = UINT8_MAX;
static int32_t x488 = -1;
volatile int32_t t85 = -13;
static uint8_t x490 = UINT8_MAX;
volatile uint16_t x491 = UINT16_MAX;
volatile int32_t t86 = 1282;
uint32_t x500 = 1117U;
int32_t x504 = 1522;
static uint8_t x508 = 2U;
int32_t t91 = -29299248;
static uint16_t x536 = 1U;
volatile int32_t t95 = -213043;
uint64_t x547 = 1670LLU;
static volatile int32_t t97 = 57714512;
int16_t x555 = INT16_MIN;


void f0(void) {
	uint32_t x5 = 408559363U;
	static int16_t x7 = INT16_MIN;
	int32_t t0 = 3075714;

	t0 = (x5<((x6*x7)<=x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MIN;
	static int8_t x14 = INT8_MIN;
	static uint16_t x15 = 12752U;
	static int16_t x16 = -1;

	t1 = (x13<((x14*x15)<=x16));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x17 = INT64_MIN;
	uint8_t x18 = 29U;
	uint32_t x19 = 999U;
	volatile int8_t x20 = INT8_MAX;

	t2 = (x17<((x18*x19)<=x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MIN;
	static int16_t x22 = INT16_MIN;
	volatile uint64_t x23 = 11854442LLU;
	uint32_t x24 = 1435282U;
	volatile int32_t t3 = -2035463;

	t3 = (x21<((x22*x23)<=x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 1672826082U;
	int16_t x27 = INT16_MAX;
	int16_t x28 = -1;
	int32_t t4 = 510857039;

	t4 = (x25<((x26*x27)<=x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x31 = INT32_MAX;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t5 = 269674;

	t5 = (x29<((x30*x31)<=x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = INT8_MAX;
	uint32_t x34 = 14224043U;
	int32_t x35 = INT32_MIN;
	int32_t t6 = 919;

	t6 = (x33<((x34*x35)<=x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x41 = 623351144LLU;
	uint32_t x42 = 50U;
	int32_t x43 = INT32_MIN;
	uint16_t x44 = 1157U;
	volatile int32_t t7 = -119;

	t7 = (x41<((x42*x43)<=x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	static int16_t x46 = -1;
	int32_t x47 = 14353484;
	volatile uint64_t x48 = 3LLU;
	static volatile int32_t t8 = 40932;

	t8 = (x45<((x46*x47)<=x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = -1770;
	static int32_t x50 = 16;
	int32_t x51 = -1;
	volatile int32_t t9 = 4;

	t9 = (x49<((x50*x51)<=x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MIN;
	static int32_t x58 = -73491;
	volatile uint32_t x59 = UINT32_MAX;
	static int32_t x60 = -1651;
	int32_t t10 = 74039;

	t10 = (x57<((x58*x59)<=x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x61 = UINT32_MAX;
	int32_t x63 = -308328;
	int16_t x64 = -250;
	int32_t t11 = 2;

	t11 = (x61<((x62*x63)<=x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 1734503325LLU;
	volatile int8_t x67 = 3;
	int8_t x68 = 22;
	int32_t t12 = 457082;

	t12 = (x65<((x66*x67)<=x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = UINT64_MAX;
	static int8_t x79 = -1;
	uint8_t x80 = 1U;
	int32_t t13 = -3649066;

	t13 = (x77<((x78*x79)<=x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x89 = INT32_MIN;
	int64_t x90 = -1LL;
	int8_t x91 = -1;

	t14 = (x89<((x90*x91)<=x92));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x97 = INT64_MIN;
	uint8_t x98 = UINT8_MAX;
	int8_t x99 = INT8_MIN;
	int32_t x100 = -303075956;
	int32_t t15 = -42;

	t15 = (x97<((x98*x99)<=x100));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x106 = 7U;
	uint16_t x107 = UINT16_MAX;
	static volatile int32_t t16 = -179705285;

	t16 = (x105<((x106*x107)<=x108));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x110 = -1;
	static uint32_t x111 = UINT32_MAX;
	int8_t x112 = INT8_MIN;
	int32_t t17 = 3878;

	t17 = (x109<((x110*x111)<=x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x121 = -1;
	int8_t x122 = INT8_MIN;
	int32_t t18 = -196686568;

	t18 = (x121<((x122*x123)<=x124));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x125 = 611263U;
	uint32_t x126 = 3907U;
	volatile uint8_t x127 = UINT8_MAX;
	int32_t x128 = INT32_MAX;
	volatile int32_t t19 = 1005752;

	t19 = (x125<((x126*x127)<=x128));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int16_t x135 = INT16_MAX;
	int32_t x136 = INT32_MAX;
	volatile int32_t t20 = 0;

	t20 = (x133<((x134*x135)<=x136));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x141 = UINT16_MAX;
	int64_t x144 = 3224139619062705LL;
	static volatile int32_t t21 = -122220428;

	t21 = (x141<((x142*x143)<=x144));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x145 = INT32_MAX;
	uint32_t x146 = 2022U;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t22 = 5;

	t22 = (x145<((x146*x147)<=x148));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = -1LL;
	int16_t x151 = INT16_MIN;
	int16_t x152 = -1;
	volatile int32_t t23 = 3069688;

	t23 = (x149<((x150*x151)<=x152));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x153 = INT64_MIN;
	uint16_t x154 = UINT16_MAX;
	uint64_t x155 = UINT64_MAX;
	int32_t x156 = -133;
	int32_t t24 = 172651280;

	t24 = (x153<((x154*x155)<=x156));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x161 = -194572722;
	uint8_t x163 = 1U;
	int32_t x164 = 1427838;
	int32_t t25 = 231794;

	t25 = (x161<((x162*x163)<=x164));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x169 = -1;
	static int16_t x170 = INT16_MIN;
	int64_t x171 = 340LL;
	volatile int16_t x172 = 7;

	t26 = (x169<((x170*x171)<=x172));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x177 = -10865309027016496LL;
	int32_t x179 = INT32_MIN;
	static volatile int64_t x180 = INT64_MIN;

	t27 = (x177<((x178*x179)<=x180));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x187 = 10892;
	int8_t x188 = INT8_MAX;
	static int32_t t28 = -85449;

	t28 = (x185<((x186*x187)<=x188));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x189 = 25126757451116LL;
	int8_t x190 = -1;
	volatile uint16_t x191 = 31U;
	volatile int16_t x192 = 22;
	int32_t t29 = 50;

	t29 = (x189<((x190*x191)<=x192));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x193 = 1735443U;
	uint64_t x194 = UINT64_MAX;
	uint32_t x195 = 21U;
	static int32_t x196 = INT32_MIN;
	static int32_t t30 = 4529;

	t30 = (x193<((x194*x195)<=x196));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x198 = INT64_MIN;
	static uint64_t x199 = UINT64_MAX;
	volatile int32_t t31 = 27;

	t31 = (x197<((x198*x199)<=x200));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x205 = -2;
	uint32_t x206 = 30402U;
	volatile int32_t t32 = 1570;

	t32 = (x205<((x206*x207)<=x208));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x209 = 729588566LLU;
	uint32_t x210 = UINT32_MAX;
	volatile int32_t x211 = INT32_MAX;
	int8_t x212 = INT8_MAX;
	int32_t t33 = 33;

	t33 = (x209<((x210*x211)<=x212));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = 470763966017429LL;
	int64_t x215 = -554LL;
	static int16_t x216 = INT16_MIN;
	static int32_t t34 = 6023;

	t34 = (x213<((x214*x215)<=x216));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x221 = -577940520803LL;
	static int8_t x222 = INT8_MIN;
	int32_t x223 = 95;
	static int16_t x224 = 3;

	t35 = (x221<((x222*x223)<=x224));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x225 = 2U;
	static uint64_t x226 = UINT64_MAX;
	static uint16_t x227 = 6186U;
	volatile int32_t t36 = -14468243;

	t36 = (x225<((x226*x227)<=x228));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x230 = INT16_MIN;
	volatile int16_t x232 = INT16_MIN;
	volatile int32_t t37 = 1462538;

	t37 = (x229<((x230*x231)<=x232));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x233 = -1;
	int32_t x235 = 326;
	int8_t x236 = -58;
	int32_t t38 = 46713756;

	t38 = (x233<((x234*x235)<=x236));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x237 = INT16_MIN;
	int8_t x238 = -1;
	int8_t x239 = -1;
	int64_t x240 = INT64_MIN;
	int32_t t39 = 172230995;

	t39 = (x237<((x238*x239)<=x240));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;
	uint64_t x243 = 259476056361680LLU;
	uint32_t x244 = UINT32_MAX;
	int32_t t40 = -11811;

	t40 = (x241<((x242*x243)<=x244));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x249 = INT16_MAX;
	int16_t x250 = -1;
	static int32_t t41 = 1;

	t41 = (x249<((x250*x251)<=x252));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x253 = -1;
	int16_t x254 = INT16_MIN;
	uint64_t x255 = 806789808595LLU;
	int32_t t42 = 10;

	t42 = (x253<((x254*x255)<=x256));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x257 = INT8_MAX;
	int32_t x258 = -1;
	int64_t x259 = 7LL;
	int32_t x260 = INT32_MIN;
	static int32_t t43 = -4018;

	t43 = (x257<((x258*x259)<=x260));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x261 = -1;
	uint32_t x262 = 657412817U;
	uint8_t x263 = 28U;
	uint8_t x264 = UINT8_MAX;
	static int32_t t44 = -26087;

	t44 = (x261<((x262*x263)<=x264));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x265 = UINT16_MAX;
	volatile int8_t x266 = INT8_MIN;
	uint16_t x268 = 0U;
	volatile int32_t t45 = -2;

	t45 = (x265<((x266*x267)<=x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x269 = 3155;
	static int64_t x270 = 71186466536LL;
	static volatile int8_t x271 = INT8_MAX;
	static int32_t t46 = 1;

	t46 = (x269<((x270*x271)<=x272));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x282 = 20;
	int16_t x283 = INT16_MIN;
	static int8_t x284 = 1;
	int32_t t47 = 5582787;

	t47 = (x281<((x282*x283)<=x284));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x286 = 20U;
	uint32_t x287 = 20962079U;
	static int16_t x288 = -1;
	int32_t t48 = -53774862;

	t48 = (x285<((x286*x287)<=x288));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x290 = UINT32_MAX;
	int32_t x291 = 528087;
	int64_t x292 = INT64_MAX;
	volatile int32_t t49 = 4149280;

	t49 = (x289<((x290*x291)<=x292));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x293 = 65057087794LLU;
	volatile int16_t x294 = -3;
	uint16_t x295 = 6811U;

	t50 = (x293<((x294*x295)<=x296));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x297 = 17U;
	int32_t x298 = INT32_MIN;
	int8_t x299 = 1;
	uint32_t x300 = 350U;

	t51 = (x297<((x298*x299)<=x300));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x301 = -1;
	static int8_t x302 = -1;
	volatile int32_t t52 = 181;

	t52 = (x301<((x302*x303)<=x304));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x309 = UINT8_MAX;
	uint16_t x310 = 4U;
	volatile uint32_t x311 = 272150U;
	int32_t t53 = -68443597;

	t53 = (x309<((x310*x311)<=x312));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = -1535LL;
	int16_t x316 = INT16_MIN;
	volatile int32_t t54 = 60755;

	t54 = (x313<((x314*x315)<=x316));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x317 = 14;
	volatile uint16_t x318 = 2U;
	volatile uint64_t x319 = UINT64_MAX;
	volatile int32_t x320 = -1;
	volatile int32_t t55 = 11533;

	t55 = (x317<((x318*x319)<=x320));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x325 = 5821973U;
	uint16_t x327 = 5760U;
	int32_t t56 = -1464;

	t56 = (x325<((x326*x327)<=x328));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x330 = 3143LLU;
	volatile int8_t x331 = -7;
	uint32_t x332 = UINT32_MAX;
	volatile int32_t t57 = 280790;

	t57 = (x329<((x330*x331)<=x332));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = -121;
	static int8_t x334 = 39;
	static int64_t x336 = INT64_MIN;
	int32_t t58 = -1508;

	t58 = (x333<((x334*x335)<=x336));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x341 = INT64_MIN;
	static int8_t x342 = 3;
	uint64_t x343 = 3250184545791394LLU;
	int32_t x344 = -1;
	int32_t t59 = -25951;

	t59 = (x341<((x342*x343)<=x344));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x345 = -3;
	uint32_t x347 = UINT32_MAX;
	uint64_t x348 = 89509739LLU;

	t60 = (x345<((x346*x347)<=x348));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x349 = INT64_MIN;
	uint32_t x350 = UINT32_MAX;
	volatile uint32_t x351 = UINT32_MAX;
	static int32_t t61 = -1;

	t61 = (x349<((x350*x351)<=x352));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x357 = 428464590LLU;
	static uint8_t x359 = 1U;
	int16_t x360 = INT16_MIN;

	t62 = (x357<((x358*x359)<=x360));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x361 = -1;
	uint32_t x362 = 358U;
	uint32_t x363 = 8981677U;
	int16_t x364 = 2035;

	t63 = (x361<((x362*x363)<=x364));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x365 = INT8_MIN;
	volatile uint32_t x366 = 228U;
	uint16_t x367 = 8805U;

	t64 = (x365<((x366*x367)<=x368));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x369 = 1U;
	uint8_t x371 = 118U;
	static int32_t t65 = -783343;

	t65 = (x369<((x370*x371)<=x372));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x373 = 25U;
	static uint16_t x374 = 1U;
	static volatile int32_t x375 = INT32_MAX;
	uint64_t x376 = 13616547821420LLU;

	t66 = (x373<((x374*x375)<=x376));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x377 = UINT32_MAX;
	uint32_t x378 = 1107161851U;
	int32_t x379 = -100878604;
	static volatile int16_t x380 = INT16_MIN;
	static volatile int32_t t67 = 321;

	t67 = (x377<((x378*x379)<=x380));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x381 = INT16_MAX;
	uint16_t x384 = 97U;
	int32_t t68 = 4;

	t68 = (x381<((x382*x383)<=x384));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x385 = -6LL;
	int8_t x386 = -7;
	static int16_t x388 = INT16_MIN;
	static volatile int32_t t69 = 16626;

	t69 = (x385<((x386*x387)<=x388));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x390 = -1;
	static uint32_t x392 = 10671561U;
	static int32_t t70 = -147171877;

	t70 = (x389<((x390*x391)<=x392));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x393 = 130762U;
	volatile int8_t x394 = -1;
	uint32_t x395 = 960U;
	int16_t x396 = INT16_MIN;
	static int32_t t71 = -1;

	t71 = (x393<((x394*x395)<=x396));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x405 = 1478837369086032LLU;
	uint8_t x406 = 0U;
	int32_t t72 = -36;

	t72 = (x405<((x406*x407)<=x408));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x409 = 3779U;
	volatile uint64_t x411 = 60172662LLU;
	uint64_t x412 = 61102529310886LLU;
	static volatile int32_t t73 = 1116;

	t73 = (x409<((x410*x411)<=x412));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x413 = 3868132784236LLU;
	uint64_t x414 = 1171894217330061910LLU;
	static uint64_t x415 = 1276771983572LLU;
	int16_t x416 = INT16_MIN;
	static int32_t t74 = 6643398;

	t74 = (x413<((x414*x415)<=x416));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x434 = UINT32_MAX;
	static volatile uint32_t x435 = UINT32_MAX;
	volatile int64_t x436 = -4642460707602322LL;
	volatile int32_t t75 = -6072;

	t75 = (x433<((x434*x435)<=x436));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x437 = -2721;
	static volatile uint32_t x439 = UINT32_MAX;
	uint16_t x440 = 11770U;
	int32_t t76 = 989;

	t76 = (x437<((x438*x439)<=x440));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x441 = INT16_MIN;
	volatile int8_t x442 = INT8_MAX;
	static int8_t x443 = INT8_MAX;
	int8_t x444 = -3;
	int32_t t77 = 160153;

	t77 = (x441<((x442*x443)<=x444));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x445 = -2423;
	int16_t x446 = 1;
	static uint16_t x447 = 22U;
	int64_t x448 = 116253912446750363LL;
	volatile int32_t t78 = 44;

	t78 = (x445<((x446*x447)<=x448));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x461 = INT8_MAX;
	static uint32_t x462 = 6500U;
	int32_t x463 = INT32_MAX;
	uint64_t x464 = UINT64_MAX;
	int32_t t79 = -1034;

	t79 = (x461<((x462*x463)<=x464));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x465 = UINT16_MAX;
	static int32_t x467 = -38871;
	int16_t x468 = 62;
	int32_t t80 = -975333;

	t80 = (x465<((x466*x467)<=x468));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x469 = INT64_MIN;
	int8_t x470 = -1;
	static uint8_t x471 = 1U;
	int64_t x472 = INT64_MIN;
	int32_t t81 = -2969;

	t81 = (x469<((x470*x471)<=x472));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x474 = INT8_MIN;
	static int32_t x475 = 2;
	uint8_t x476 = 1U;

	t82 = (x473<((x474*x475)<=x476));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x477 = UINT16_MAX;
	volatile int16_t x478 = INT16_MAX;
	int16_t x479 = 3;
	volatile int64_t x480 = -1LL;
	static volatile int32_t t83 = 107833;

	t83 = (x477<((x478*x479)<=x480));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x481 = INT64_MIN;
	int32_t x483 = -346704;
	int64_t x484 = -1LL;
	volatile int32_t t84 = 30976;

	t84 = (x481<((x482*x483)<=x484));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x485 = INT64_MIN;
	volatile uint32_t x486 = UINT32_MAX;

	t85 = (x485<((x486*x487)<=x488));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x489 = INT8_MIN;
	static volatile int64_t x492 = INT64_MIN;

	t86 = (x489<((x490*x491)<=x492));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x497 = 41204U;
	volatile uint64_t x498 = 7618407LLU;
	static uint16_t x499 = 29084U;
	int32_t t87 = -211446;

	t87 = (x497<((x498*x499)<=x500));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x501 = 2164U;
	uint8_t x502 = 3U;
	int8_t x503 = 63;
	int32_t t88 = 43957;

	t88 = (x501<((x502*x503)<=x504));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x505 = INT8_MIN;
	int16_t x506 = 0;
	int8_t x507 = INT8_MIN;
	int32_t t89 = -3233188;

	t89 = (x505<((x506*x507)<=x508));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x509 = 60558U;
	int16_t x510 = INT16_MAX;
	uint32_t x511 = UINT32_MAX;
	volatile int8_t x512 = INT8_MAX;
	volatile int32_t t90 = -1036341;

	t90 = (x509<((x510*x511)<=x512));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x517 = UINT8_MAX;
	static volatile int64_t x518 = INT64_MAX;
	int16_t x519 = -1;
	static int8_t x520 = -9;

	t91 = (x517<((x518*x519)<=x520));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x521 = INT64_MIN;
	static int32_t x522 = INT32_MAX;
	static volatile int8_t x523 = -1;
	static int16_t x524 = 582;
	volatile int32_t t92 = -1013477458;

	t92 = (x521<((x522*x523)<=x524));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x525 = 1;
	int8_t x526 = -1;
	int16_t x527 = INT16_MAX;
	int16_t x528 = 0;
	volatile int32_t t93 = -7733194;

	t93 = (x525<((x526*x527)<=x528));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x533 = -1;
	int16_t x534 = INT16_MIN;
	static uint64_t x535 = 1927612LLU;
	volatile int32_t t94 = -18413;

	t94 = (x533<((x534*x535)<=x536));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x537 = INT8_MIN;
	int64_t x538 = -2090864176LL;
	int8_t x539 = 27;
	volatile int8_t x540 = -1;

	t95 = (x537<((x538*x539)<=x540));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x545 = INT16_MAX;
	static volatile uint32_t x546 = 773954U;
	int8_t x548 = INT8_MAX;
	int32_t t96 = -1034541549;

	t96 = (x545<((x546*x547)<=x548));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x549 = 27;
	int16_t x550 = -1;
	uint16_t x551 = 872U;
	uint64_t x552 = 18LLU;

	t97 = (x549<((x550*x551)<=x552));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x553 = INT64_MAX;
	int16_t x554 = INT16_MAX;
	volatile uint16_t x556 = UINT16_MAX;
	volatile int32_t t98 = 3;

	t98 = (x553<((x554*x555)<=x556));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x565 = -15187;
	int64_t x566 = INT64_MAX;
	int8_t x567 = 0;
	int32_t x568 = INT32_MAX;
	int32_t t99 = 921410;

	t99 = (x565<((x566*x567)<=x568));

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

