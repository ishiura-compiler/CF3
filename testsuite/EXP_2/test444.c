#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
static int32_t x10 = -1;
int8_t x12 = INT8_MIN;
int16_t x18 = INT16_MAX;
int64_t t7 = 1329LL;
volatile int8_t x51 = INT8_MIN;
volatile int32_t t10 = -3313297;
int8_t x79 = 3;
int16_t x82 = INT16_MIN;
static int64_t x88 = -423320348856031769LL;
int32_t t14 = 183;
volatile uint32_t x111 = 32187U;
int8_t x113 = 0;
uint32_t x116 = UINT32_MAX;
static volatile uint32_t t16 = 54U;
volatile int16_t x118 = INT16_MIN;
int32_t x121 = INT32_MIN;
int16_t x125 = INT16_MIN;
int16_t x130 = -453;
static volatile uint8_t x140 = UINT8_MAX;
uint64_t x143 = UINT64_MAX;
volatile int8_t x144 = 6;
static int64_t x146 = 294LL;
int32_t x148 = -53804;
static int16_t x149 = INT16_MIN;
uint64_t x158 = 136517583531346LLU;
int64_t x159 = -1LL;
static uint64_t x162 = UINT64_MAX;
int16_t x167 = -1;
int16_t x169 = 491;
int16_t x172 = INT16_MIN;
uint32_t x201 = UINT32_MAX;
int16_t x206 = -9911;
static uint32_t x214 = 61475U;
int32_t x223 = INT32_MIN;
uint32_t x230 = 0U;
int32_t x231 = -13912688;
int32_t t37 = 123;
static int64_t x238 = 662LL;
int8_t x239 = INT8_MIN;
int64_t x249 = INT64_MIN;
volatile int32_t t40 = -420;
static int64_t x253 = INT64_MIN;
int32_t t41 = 81336;
volatile uint8_t x267 = 4U;
volatile int16_t x281 = -1;
int8_t x282 = INT8_MAX;
static uint64_t x284 = 0LLU;
int32_t t48 = -530;
int8_t x314 = -1;
uint64_t x318 = 30650LLU;
static uint32_t x319 = 6U;
int32_t x320 = 2589746;
volatile int8_t x321 = 0;
int64_t x325 = INT64_MAX;
volatile int8_t x328 = -61;
volatile int32_t x333 = INT32_MIN;
int64_t x337 = INT64_MIN;
int64_t x353 = -1LL;
volatile int32_t x354 = -1;
uint64_t x356 = UINT64_MAX;
int16_t x361 = INT16_MAX;
static int64_t x368 = INT64_MAX;
volatile int32_t t60 = -717390055;
int32_t t61 = -235;
volatile int8_t x377 = 7;
volatile int16_t x393 = -1;
int8_t x395 = 0;
static volatile int32_t x403 = INT32_MIN;
volatile uint32_t t66 = 118939962U;
uint16_t x409 = 14694U;
volatile int16_t x410 = -1029;
volatile int32_t x421 = 277350;
uint16_t x428 = 58U;
int8_t x432 = 0;
int32_t t71 = -217;
volatile int8_t x437 = INT8_MAX;
static int16_t x443 = -1;
static volatile int32_t x449 = INT32_MIN;
static volatile uint64_t x450 = 3859868LLU;
uint32_t x453 = 223U;
volatile int32_t t76 = -4036118;
int16_t x472 = INT16_MIN;
int32_t t78 = 10067901;
volatile int8_t x476 = INT8_MIN;
int64_t x478 = -1LL;
uint16_t x485 = 584U;
static int16_t x490 = 10135;
int8_t x492 = -1;
volatile int8_t x493 = INT8_MIN;
int8_t x494 = 14;
int16_t x495 = INT16_MIN;
uint8_t x496 = UINT8_MAX;
uint16_t x504 = UINT16_MAX;
int16_t x505 = -1;
int32_t x519 = INT32_MIN;
volatile uint64_t t87 = 2427719998897306LLU;
static int32_t t88 = 118388;
static int16_t x526 = INT16_MIN;
int32_t t89 = 2683767;
static uint32_t x529 = 1910U;
int32_t t90 = 42406648;
int32_t x541 = INT32_MIN;
int32_t x542 = -1;
int8_t x543 = INT8_MAX;
int16_t x547 = -1;
static uint32_t x553 = 2523U;
uint16_t x554 = 685U;
volatile int64_t x555 = -1LL;
uint32_t x558 = UINT32_MAX;
static int16_t x565 = -1;
static volatile int32_t t96 = 7;


void f0(void) {
	static volatile uint64_t x1 = 10120337LLU;
	uint32_t x3 = UINT32_MAX;
	int16_t x4 = -1;
	int32_t t0 = -61888258;

	t0 = ((x1<(x2*x3))-x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	int64_t x11 = 60166011LL;
	volatile int32_t t1 = -1;

	t1 = ((x9<(x10*x11))-x12);

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = -21415502163685874LL;
	int8_t x15 = INT8_MAX;
	int8_t x16 = 1;
	static volatile int32_t t2 = 7510260;

	t2 = ((x13<(x14*x15))-x16);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = 0;
	int64_t x19 = 91209LL;
	int16_t x20 = 123;
	int32_t t3 = -481106;

	t3 = ((x17<(x18*x19))-x20);

	if (t3 != -122) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x21 = UINT64_MAX;
	static int16_t x22 = -1;
	uint32_t x23 = UINT32_MAX;
	uint16_t x24 = UINT16_MAX;
	int32_t t4 = 85;

	t4 = ((x21<(x22*x23))-x24);

	if (t4 != -65535) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = INT16_MIN;
	volatile int8_t x30 = -18;
	int8_t x31 = -1;
	int32_t x32 = 79478;
	volatile int32_t t5 = 801921;

	t5 = ((x29<(x30*x31))-x32);

	if (t5 != -79477) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = 0LLU;
	int32_t x38 = -720783979;
	uint32_t x39 = 4U;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t6 = 13326785014395819LLU;

	t6 = ((x37<(x38*x39))-x40);

	if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = -1;
	int8_t x46 = INT8_MAX;
	uint64_t x47 = 1080234LLU;
	static int64_t x48 = INT64_MAX;

	t7 = ((x45<(x46*x47))-x48);

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = 0;
	int8_t x50 = INT8_MIN;
	volatile uint8_t x52 = 67U;
	volatile int32_t t8 = 52;

	t8 = ((x49<(x50*x51))-x52);

	if (t8 != -66) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x53 = -15;
	int32_t x54 = 3;
	int64_t x55 = -339711LL;
	int64_t x56 = 39302657734LL;
	int64_t t9 = -1244351403554941222LL;

	t9 = ((x53<(x54*x55))-x56);

	if (t9 != -39302657734LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = UINT16_MAX;
	int16_t x58 = 1;
	static uint32_t x59 = 4125574U;
	int16_t x60 = INT16_MIN;

	t10 = ((x57<(x58*x59))-x60);

	if (t10 != 32769) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x77 = -58696733462LL;
	int64_t x78 = -1LL;
	int64_t x80 = -20LL;
	int64_t t11 = 123334378816546942LL;

	t11 = ((x77<(x78*x79))-x80);

	if (t11 != 21LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x81 = 767U;
	volatile uint8_t x83 = UINT8_MAX;
	int8_t x84 = INT8_MIN;
	static int32_t t12 = -14;

	t12 = ((x81<(x82*x83))-x84);

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x85 = 5462U;
	volatile int32_t x86 = 8997;
	static uint8_t x87 = 3U;
	volatile int64_t t13 = -325934396146555LL;

	t13 = ((x85<(x86*x87))-x88);

	if (t13 != 423320348856031770LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = -1LL;
	static int16_t x95 = INT16_MIN;
	uint16_t x96 = 127U;

	t14 = ((x93<(x94*x95))-x96);

	if (t14 != -126) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x109 = UINT32_MAX;
	int32_t x110 = INT32_MIN;
	int64_t x112 = INT64_MAX;
	volatile int64_t t15 = 20LL;

	t15 = ((x109<(x110*x111))-x112);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x114 = -1;
	volatile uint16_t x115 = UINT16_MAX;

	t16 = ((x113<(x114*x115))-x116);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x117 = -1;
	int16_t x119 = -1;
	volatile int64_t x120 = -1LL;
	volatile int64_t t17 = 157778890LL;

	t17 = ((x117<(x118*x119))-x120);

	if (t17 != 2LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x122 = 26555634U;
	static volatile int16_t x123 = -338;
	uint8_t x124 = 1U;
	int32_t t18 = -298272;

	t18 = ((x121<(x122*x123))-x124);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x126 = -1;
	uint16_t x127 = 168U;
	static int16_t x128 = -1;
	static volatile int32_t t19 = -85;

	t19 = ((x125<(x126*x127))-x128);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x129 = -1;
	volatile int32_t x131 = -1417;
	int32_t x132 = -1;
	int32_t t20 = 22153164;

	t20 = ((x129<(x130*x131))-x132);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x137 = INT16_MIN;
	static uint16_t x138 = UINT16_MAX;
	static int16_t x139 = INT16_MAX;
	volatile int32_t t21 = 17939217;

	t21 = ((x137<(x138*x139))-x140);

	if (t21 != -254) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x141 = UINT8_MAX;
	int64_t x142 = INT64_MIN;
	volatile int32_t t22 = -2633262;

	t22 = ((x141<(x142*x143))-x144);

	if (t22 != -5) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x145 = 11U;
	int16_t x147 = INT16_MAX;
	volatile int32_t t23 = 726;

	t23 = ((x145<(x146*x147))-x148);

	if (t23 != 53805) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x150 = 11562208806LL;
	volatile uint32_t x151 = 7960U;
	uint16_t x152 = 4919U;
	volatile int32_t t24 = -2777;

	t24 = ((x149<(x150*x151))-x152);

	if (t24 != -4918) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x157 = 6785079;
	uint32_t x160 = 3U;
	uint32_t t25 = 51945415U;

	t25 = ((x157<(x158*x159))-x160);

	if (t25 != 4294967294U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x161 = INT32_MAX;
	static int8_t x163 = -1;
	static uint16_t x164 = UINT16_MAX;
	volatile int32_t t26 = 879;

	t26 = ((x161<(x162*x163))-x164);

	if (t26 != -65535) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x165 = INT64_MIN;
	int16_t x166 = -1;
	uint64_t x168 = 1952910207LLU;
	volatile uint64_t t27 = 159331856715685627LLU;

	t27 = ((x165<(x166*x167))-x168);

	if (t27 != 18446744071756641410LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x170 = 12U;
	int32_t x171 = -1;
	static int32_t t28 = 0;

	t28 = ((x169<(x170*x171))-x172);

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x197 = INT8_MIN;
	static volatile uint16_t x198 = 1U;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = 7U;
	static int32_t t29 = 18;

	t29 = ((x197<(x198*x199))-x200);

	if (t29 != -7) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x202 = INT16_MAX;
	int8_t x203 = -7;
	int64_t x204 = INT64_MAX;
	static int64_t t30 = 157LL;

	t30 = ((x201<(x202*x203))-x204);

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x205 = INT64_MIN;
	static int8_t x207 = -5;
	static int32_t x208 = INT32_MAX;
	volatile int32_t t31 = 120;

	t31 = ((x205<(x206*x207))-x208);

	if (t31 != -2147483646) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x209 = -1;
	static uint64_t x210 = 86930484882803LLU;
	int8_t x211 = 26;
	static uint16_t x212 = UINT16_MAX;
	volatile int32_t t32 = -7;

	t32 = ((x209<(x210*x211))-x212);

	if (t32 != -65535) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x213 = INT16_MIN;
	int32_t x215 = INT32_MIN;
	int16_t x216 = 197;
	volatile int32_t t33 = -510665;

	t33 = ((x213<(x214*x215))-x216);

	if (t33 != -197) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x221 = 4;
	int8_t x222 = 0;
	uint32_t x224 = UINT32_MAX;
	static uint32_t t34 = 20689U;

	t34 = ((x221<(x222*x223))-x224);

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x225 = INT8_MAX;
	volatile int16_t x226 = 1;
	uint32_t x227 = 6426190U;
	volatile int64_t x228 = 320316LL;
	int64_t t35 = 15468LL;

	t35 = ((x225<(x226*x227))-x228);

	if (t35 != -320315LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x229 = -1LL;
	static int64_t x232 = 15LL;
	volatile int64_t t36 = 1374198314173511685LL;

	t36 = ((x229<(x230*x231))-x232);

	if (t36 != -14LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x233 = INT64_MIN;
	int16_t x234 = 48;
	static int16_t x235 = -1;
	static int16_t x236 = 0;

	t37 = ((x233<(x234*x235))-x236);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x237 = 30096513069267LLU;
	int32_t x240 = -3985;
	int32_t t38 = -14316;

	t38 = ((x237<(x238*x239))-x240);

	if (t38 != 3986) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x245 = 53U;
	int64_t x246 = -1LL;
	static int64_t x247 = -27377908605166463LL;
	int8_t x248 = INT8_MIN;
	int32_t t39 = -7813419;

	t39 = ((x245<(x246*x247))-x248);

	if (t39 != 129) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x250 = UINT16_MAX;
	int16_t x251 = 2;
	int8_t x252 = INT8_MIN;

	t40 = ((x249<(x250*x251))-x252);

	if (t40 != 129) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x254 = 0U;
	int64_t x255 = INT64_MIN;
	volatile int16_t x256 = INT16_MIN;

	t41 = ((x253<(x254*x255))-x256);

	if (t41 != 32769) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x261 = 9472;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = INT8_MAX;
	int32_t x264 = INT32_MAX;
	static int32_t t42 = -76876;

	t42 = ((x261<(x262*x263))-x264);

	if (t42 != -2147483646) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x265 = INT8_MIN;
	volatile int16_t x266 = 10;
	volatile uint32_t x268 = 3844U;
	uint32_t t43 = 905958455U;

	t43 = ((x265<(x266*x267))-x268);

	if (t43 != 4294963453U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x277 = 118;
	static volatile int8_t x278 = -5;
	int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t44 = 47137;

	t44 = ((x277<(x278*x279))-x280);

	if (t44 != 32769) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x283 = -5;
	volatile uint64_t t45 = 6007LLU;

	t45 = ((x281<(x282*x283))-x284);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x293 = INT8_MAX;
	static int8_t x294 = 10;
	static uint16_t x295 = UINT16_MAX;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t46 = 760LLU;

	t46 = ((x293<(x294*x295))-x296);

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MAX;
	int64_t x303 = -1LL;
	uint8_t x304 = 12U;
	int32_t t47 = -193;

	t47 = ((x301<(x302*x303))-x304);

	if (t47 != -11) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x309 = INT16_MAX;
	int32_t x310 = 827;
	uint8_t x311 = 4U;
	int32_t x312 = -1;

	t48 = ((x309<(x310*x311))-x312);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x313 = -1;
	static volatile int64_t x315 = INT64_MAX;
	volatile int16_t x316 = 2336;
	int32_t t49 = -8113006;

	t49 = ((x313<(x314*x315))-x316);

	if (t49 != -2336) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x317 = 63U;
	int32_t t50 = 12494552;

	t50 = ((x317<(x318*x319))-x320);

	if (t50 != -2589745) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x322 = -943712765347LL;
	static int8_t x323 = INT8_MIN;
	uint64_t x324 = 6946481232159LLU;
	volatile uint64_t t51 = 8071080LLU;

	t51 = ((x321<(x322*x323))-x324);

	if (t51 != 18446737127228319458LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x326 = UINT64_MAX;
	static uint32_t x327 = UINT32_MAX;
	int32_t t52 = 13112734;

	t52 = ((x325<(x326*x327))-x328);

	if (t52 != 62) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x334 = INT16_MAX;
	static uint8_t x335 = 8U;
	uint32_t x336 = UINT32_MAX;
	volatile uint32_t t53 = 668U;

	t53 = ((x333<(x334*x335))-x336);

	if (t53 != 2U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x338 = 382460LL;
	int8_t x339 = INT8_MIN;
	static volatile uint16_t x340 = 1U;
	static volatile int32_t t54 = -248095809;

	t54 = ((x337<(x338*x339))-x340);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x345 = UINT16_MAX;
	static int32_t x346 = INT32_MIN;
	uint32_t x347 = UINT32_MAX;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t55 = 2U;

	t55 = ((x345<(x346*x347))-x348);

	if (t55 != 2U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x355 = INT8_MIN;
	uint64_t t56 = 469LLU;

	t56 = ((x353<(x354*x355))-x356);

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x357 = -38881307368LL;
	int64_t x358 = -1LL;
	int8_t x359 = -1;
	static uint8_t x360 = UINT8_MAX;
	static volatile int32_t t57 = -185151;

	t57 = ((x357<(x358*x359))-x360);

	if (t57 != -254) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x362 = INT16_MIN;
	int64_t x363 = -1LL;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t58 = -16354;

	t58 = ((x361<(x362*x363))-x364);

	if (t58 != 32769) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x365 = INT32_MAX;
	uint32_t x366 = UINT32_MAX;
	int32_t x367 = INT32_MAX;
	volatile int64_t t59 = 13747524658062633LL;

	t59 = ((x365<(x366*x367))-x368);

	if (t59 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x369 = 2652LLU;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = 304234;
	int16_t x372 = -1634;

	t60 = ((x369<(x370*x371))-x372);

	if (t60 != 1635) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x373 = -20;
	uint8_t x374 = 2U;
	uint32_t x375 = UINT32_MAX;
	static volatile int16_t x376 = -1;

	t61 = ((x373<(x374*x375))-x376);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x378 = -1LL;
	int32_t x379 = 27;
	static uint16_t x380 = 36U;
	static int32_t t62 = -176;

	t62 = ((x377<(x378*x379))-x380);

	if (t62 != -36) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = 0;
	uint16_t x387 = 16U;
	uint8_t x388 = UINT8_MAX;
	int32_t t63 = -293;

	t63 = ((x385<(x386*x387))-x388);

	if (t63 != -255) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x389 = -60779531LL;
	static uint8_t x390 = UINT8_MAX;
	static int64_t x391 = -1LL;
	uint64_t x392 = 702810876340040021LLU;
	uint64_t t64 = 226728818819LLU;

	t64 = ((x389<(x390*x391))-x392);

	if (t64 != 17743933197369511596LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x394 = 1545U;
	uint8_t x396 = UINT8_MAX;
	int32_t t65 = -13;

	t65 = ((x393<(x394*x395))-x396);

	if (t65 != -255) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x401 = INT64_MIN;
	uint32_t x402 = 32673955U;
	volatile uint32_t x404 = 4309U;

	t66 = ((x401<(x402*x403))-x404);

	if (t66 != 4294962988U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x405 = INT16_MAX;
	int64_t x406 = -1LL;
	volatile uint32_t x407 = 1416U;
	volatile uint64_t x408 = UINT64_MAX;
	uint64_t t67 = 15905470818805LLU;

	t67 = ((x405<(x406*x407))-x408);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x411 = 7253U;
	volatile int16_t x412 = -1;
	static int32_t t68 = -22;

	t68 = ((x409<(x410*x411))-x412);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x422 = 29U;
	int64_t x423 = -701131751456813LL;
	int16_t x424 = INT16_MAX;
	static volatile int32_t t69 = -2536334;

	t69 = ((x421<(x422*x423))-x424);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x425 = -1LL;
	static uint16_t x426 = 1512U;
	int32_t x427 = 7;
	volatile int32_t t70 = -252;

	t70 = ((x425<(x426*x427))-x428);

	if (t70 != -57) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x429 = 1LLU;
	volatile int8_t x430 = INT8_MIN;
	volatile int8_t x431 = -1;

	t71 = ((x429<(x430*x431))-x432);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x433 = 27;
	int16_t x434 = -8;
	volatile int8_t x435 = 1;
	volatile int8_t x436 = -1;
	int32_t t72 = -510;

	t72 = ((x433<(x434*x435))-x436);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x438 = -1;
	volatile int32_t x439 = INT32_MAX;
	volatile uint8_t x440 = 20U;
	static volatile int32_t t73 = 6275986;

	t73 = ((x437<(x438*x439))-x440);

	if (t73 != -20) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x441 = 924U;
	uint16_t x442 = UINT16_MAX;
	uint32_t x444 = 95000U;
	uint32_t t74 = 339584664U;

	t74 = ((x441<(x442*x443))-x444);

	if (t74 != 4294872296U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x451 = 34805U;
	int32_t x452 = 79099666;
	int32_t t75 = -40;

	t75 = ((x449<(x450*x451))-x452);

	if (t75 != -79099666) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x454 = 10625299388LLU;
	int16_t x455 = -1;
	volatile int8_t x456 = -10;

	t76 = ((x453<(x454*x455))-x456);

	if (t76 != 11) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x465 = 10U;
	uint16_t x466 = 818U;
	int16_t x467 = 30;
	uint64_t x468 = 2774683846LLU;
	volatile uint64_t t77 = 1121778425642LLU;

	t77 = ((x465<(x466*x467))-x468);

	if (t77 != 18446744070934867771LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x469 = INT16_MIN;
	int64_t x470 = 14543865521LL;
	int16_t x471 = INT16_MIN;

	t78 = ((x469<(x470*x471))-x472);

	if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x473 = 15U;
	static volatile int16_t x474 = 34;
	uint8_t x475 = 116U;
	volatile int32_t t79 = -244;

	t79 = ((x473<(x474*x475))-x476);

	if (t79 != 129) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x477 = 2852288721LLU;
	uint16_t x479 = UINT16_MAX;
	volatile int64_t x480 = 15944791005741LL;
	static int64_t t80 = 7626142LL;

	t80 = ((x477<(x478*x479))-x480);

	if (t80 != -15944791005740LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x486 = 4LLU;
	uint64_t x487 = 229679059061955LLU;
	uint64_t x488 = UINT64_MAX;
	uint64_t t81 = 63LLU;

	t81 = ((x485<(x486*x487))-x488);

	if (t81 != 2LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x489 = INT32_MAX;
	uint32_t x491 = 31U;
	volatile int32_t t82 = 17461284;

	t82 = ((x489<(x490*x491))-x492);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t t83 = 68433461;

	t83 = ((x493<(x494*x495))-x496);

	if (t83 != -255) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x501 = INT64_MIN;
	int8_t x502 = INT8_MIN;
	static int64_t x503 = -466LL;
	int32_t t84 = 58622176;

	t84 = ((x501<(x502*x503))-x504);

	if (t84 != -65534) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x506 = UINT32_MAX;
	volatile int8_t x507 = INT8_MIN;
	int8_t x508 = -2;
	volatile int32_t t85 = 317;

	t85 = ((x505<(x506*x507))-x508);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x513 = 1;
	int8_t x514 = -1;
	int64_t x515 = 35876831184LL;
	volatile int16_t x516 = -1;
	int32_t t86 = -35664810;

	t86 = ((x513<(x514*x515))-x516);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x517 = INT16_MIN;
	volatile uint64_t x518 = 102782329326140LLU;
	uint64_t x520 = UINT64_MAX;

	t87 = ((x517<(x518*x519))-x520);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x521 = INT32_MIN;
	int16_t x522 = INT16_MIN;
	static int16_t x523 = -8071;
	int16_t x524 = -1;

	t88 = ((x521<(x522*x523))-x524);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x525 = -1;
	int64_t x527 = -59238496LL;
	volatile int8_t x528 = 0;

	t89 = ((x525<(x526*x527))-x528);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MAX;
	static volatile uint8_t x532 = 106U;

	t90 = ((x529<(x530*x531))-x532);

	if (t90 != -105) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x544 = -107656LL;
	volatile int64_t t91 = -7LL;

	t91 = ((x541<(x542*x543))-x544);

	if (t91 != 107657LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x545 = INT8_MAX;
	int8_t x546 = INT8_MIN;
	static volatile int32_t x548 = -201;
	int32_t t92 = -5620975;

	t92 = ((x545<(x546*x547))-x548);

	if (t92 != 202) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x556 = INT32_MAX;
	int32_t t93 = 1;

	t93 = ((x553<(x554*x555))-x556);

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x557 = 385423699U;
	uint8_t x559 = 68U;
	static int64_t x560 = -1LL;
	int64_t t94 = 7LL;

	t94 = ((x557<(x558*x559))-x560);

	if (t94 != 2LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x561 = 6U;
	volatile int8_t x562 = 0;
	int16_t x563 = -1;
	int64_t x564 = -1LL;
	int64_t t95 = 7963LL;

	t95 = ((x561<(x562*x563))-x564);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x566 = UINT32_MAX;
	uint64_t x567 = 3648149750608LLU;
	int8_t x568 = INT8_MAX;

	t96 = ((x565<(x566*x567))-x568);

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x573 = UINT16_MAX;
	int8_t x574 = -33;
	int16_t x575 = INT16_MAX;
	int16_t x576 = INT16_MIN;
	volatile int32_t t97 = 132;

	t97 = ((x573<(x574*x575))-x576);

	if (t97 != 32768) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x577 = INT32_MIN;
	int16_t x578 = -1;
	int8_t x579 = INT8_MIN;
	static uint8_t x580 = 6U;
	int32_t t98 = -42;

	t98 = ((x577<(x578*x579))-x580);

	if (t98 != -5) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x581 = -280633;
	int16_t x582 = 0;
	uint16_t x583 = 21354U;
	volatile int64_t x584 = -1LL;
	static volatile int64_t t99 = -129389LL;

	t99 = ((x581<(x582*x583))-x584);

	if (t99 != 2LL) { NG(); } else { ; }
	
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

