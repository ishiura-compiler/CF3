#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 81708994;
int16_t x11 = INT16_MIN;
static volatile int32_t t1 = 150;
uint16_t x13 = 0U;
static volatile int8_t x25 = 0;
volatile int16_t x37 = INT16_MIN;
int8_t x45 = -1;
int8_t x46 = INT8_MAX;
int16_t x47 = -1;
int32_t t9 = 27;
int64_t x55 = 199591LL;
int16_t x57 = -1;
uint64_t x59 = 629LLU;
volatile int32_t t11 = 802;
int8_t x71 = INT8_MAX;
int32_t x85 = INT32_MIN;
int16_t x93 = -22;
volatile int32_t t20 = -826998;
int16_t x105 = INT16_MAX;
uint32_t x110 = 5857U;
int32_t t22 = 253947543;
int8_t x116 = -1;
int32_t t23 = -166507;
static int8_t x127 = INT8_MIN;
volatile uint16_t x128 = 5035U;
uint16_t x137 = UINT16_MAX;
int8_t x139 = 0;
int32_t x143 = -1;
uint64_t x147 = 366725402LLU;
int8_t x148 = -1;
int32_t t30 = 1;
uint8_t x163 = 43U;
int8_t x164 = -1;
static volatile uint32_t x167 = 71909419U;
volatile int64_t x176 = -12088225998392LL;
int8_t x185 = 23;
uint64_t x186 = 203LLU;
int32_t t39 = -525346;
uint32_t x195 = UINT32_MAX;
uint64_t x196 = UINT64_MAX;
static volatile int32_t t41 = 4131;
int16_t x206 = -1;
volatile int64_t x212 = INT64_MAX;
uint64_t x214 = UINT64_MAX;
static volatile int16_t x215 = INT16_MIN;
static volatile uint8_t x224 = 22U;
int16_t x239 = INT16_MIN;
static int16_t x243 = -1;
static volatile int32_t t52 = 0;
static int64_t x249 = -1LL;
volatile int8_t x277 = -1;
uint64_t x283 = 1362387301204025LLU;
int32_t x284 = -1;
static int32_t x285 = 7543083;
uint64_t x287 = 432513613LLU;
int32_t x299 = INT32_MAX;
int32_t t60 = -394;
volatile int8_t x303 = INT8_MAX;
uint64_t x305 = UINT64_MAX;
static int32_t x309 = -443689;
uint8_t x328 = 20U;
static int32_t t65 = -1240;
uint8_t x334 = UINT8_MAX;
int32_t t68 = 46;
volatile int16_t x341 = -1;
int32_t t69 = 419614;
volatile uint16_t x354 = 486U;
static volatile int32_t t71 = -163821;
static int32_t x361 = INT32_MAX;
int64_t x362 = 17864350LL;
uint64_t x373 = 66213894044061LLU;
int32_t x374 = -1;
static uint8_t x376 = UINT8_MAX;
int16_t x408 = -1;
int32_t t78 = -124583;
static int16_t x412 = INT16_MAX;
volatile uint64_t x413 = 15661874800009LLU;
static volatile int32_t x423 = INT32_MAX;
int64_t x424 = INT64_MIN;
volatile int32_t t82 = 38522852;
uint64_t x449 = UINT64_MAX;
static volatile int32_t x450 = 106303;
int32_t x452 = -1;
int16_t x455 = INT16_MAX;
int8_t x457 = 4;
int16_t x458 = INT16_MAX;
uint64_t x467 = 3016660602512658036LLU;
volatile int32_t t88 = -13079689;
static volatile int32_t t89 = 416;
int8_t x475 = -1;
int64_t x480 = INT64_MIN;
int8_t x487 = -14;
uint16_t x491 = UINT16_MAX;
int16_t x498 = INT16_MAX;
static int8_t x502 = INT8_MAX;
static int32_t t97 = 324834188;
int8_t x509 = 25;
int16_t x510 = INT16_MAX;
int16_t x511 = -1;
int32_t t99 = 3400;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	volatile int32_t x3 = -684993;
	uint32_t x4 = 5734017U;
	volatile int32_t t0 = -335001;

	t0 = (x1<((x2*x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	int16_t x10 = -1;
	static int16_t x12 = -10946;

	t1 = (x9<((x10*x11)&x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = UINT64_MAX;
	volatile int32_t x15 = -15323;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t2 = 35665413;

	t2 = (x13<((x14*x15)&x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	static int32_t x18 = 89;
	int8_t x19 = -1;
	uint16_t x20 = 4U;
	static volatile int32_t t3 = -16122;

	t3 = (x17<((x18*x19)&x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = -7365667;
	uint64_t x27 = 2017471037649239LLU;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t4 = -133;

	t4 = (x25<((x26*x27)&x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MAX;
	volatile int16_t x30 = -1;
	int64_t x31 = -1LL;
	uint16_t x32 = 28486U;
	volatile int32_t t5 = -510;

	t5 = (x29<((x30*x31)&x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = -1;
	uint8_t x35 = UINT8_MAX;
	volatile int16_t x36 = INT16_MIN;
	int32_t t6 = -164531562;

	t6 = (x33<((x34*x35)&x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x38 = -8651985408287LL;
	uint64_t x39 = 514357996LLU;
	volatile uint64_t x40 = UINT64_MAX;
	static volatile int32_t t7 = -842495448;

	t7 = (x37<((x38*x39)&x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x48 = 8430772LLU;
	int32_t t8 = -22888799;

	t8 = (x45<((x46*x47)&x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = -5;
	int16_t x51 = -1;
	int8_t x52 = -1;

	t9 = (x49<((x50*x51)&x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -33169846929405200LL;
	int8_t x54 = INT8_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t10 = -28;

	t10 = (x53<((x54*x55)&x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x58 = 195U;
	uint64_t x60 = 237110441008691580LLU;

	t11 = (x57<((x58*x59)&x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = 3219924LL;
	volatile int64_t x62 = INT64_MIN;
	uint64_t x63 = 1536LLU;
	static int64_t x64 = INT64_MIN;
	volatile int32_t t12 = -797;

	t12 = (x61<((x62*x63)&x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x69 = INT16_MIN;
	volatile int8_t x70 = 25;
	static volatile int64_t x72 = INT64_MAX;
	int32_t t13 = -714678;

	t13 = (x69<((x70*x71)&x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = UINT32_MAX;
	int8_t x75 = -60;
	int8_t x76 = INT8_MIN;
	int32_t t14 = -7;

	t14 = (x73<((x74*x75)&x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x77 = 4U;
	int64_t x78 = INT64_MAX;
	uint16_t x79 = 0U;
	static uint32_t x80 = UINT32_MAX;
	int32_t t15 = -766174;

	t15 = (x77<((x78*x79)&x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x81 = INT16_MIN;
	int64_t x82 = 26903994145170608LL;
	uint8_t x83 = 0U;
	uint8_t x84 = 49U;
	int32_t t16 = 90380;

	t16 = (x81<((x82*x83)&x84));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x86 = -1;
	int8_t x87 = -1;
	uint32_t x88 = 6918U;
	volatile int32_t t17 = 42499;

	t17 = (x85<((x86*x87)&x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = INT32_MAX;
	volatile int32_t x90 = 115;
	int32_t x91 = -174233;
	int16_t x92 = INT16_MIN;
	int32_t t18 = 647841870;

	t18 = (x89<((x90*x91)&x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = -1;
	volatile uint64_t x95 = 11LLU;
	int8_t x96 = INT8_MIN;
	volatile int32_t t19 = 31342;

	t19 = (x93<((x94*x95)&x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x101 = INT64_MIN;
	volatile uint8_t x102 = 1U;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MIN;

	t20 = (x101<((x102*x103)&x104));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x106 = 0U;
	volatile uint64_t x107 = 59370LLU;
	volatile int64_t x108 = -1LL;
	volatile int32_t t21 = 2;

	t21 = (x105<((x106*x107)&x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x109 = INT32_MAX;
	int64_t x111 = -1LL;
	uint32_t x112 = 62U;

	t22 = (x109<((x110*x111)&x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x113 = 0U;
	uint32_t x114 = UINT32_MAX;
	int64_t x115 = 144024LL;

	t23 = (x113<((x114*x115)&x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x121 = 3747U;
	volatile uint16_t x122 = 217U;
	uint16_t x123 = 0U;
	uint16_t x124 = 5605U;
	int32_t t24 = -170382;

	t24 = (x121<((x122*x123)&x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x125 = 48014545U;
	int8_t x126 = INT8_MIN;
	static volatile int32_t t25 = -8107;

	t25 = (x125<((x126*x127)&x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x133 = 22U;
	volatile int64_t x134 = INT64_MIN;
	uint64_t x135 = 1315LLU;
	int16_t x136 = -5;
	int32_t t26 = 11164;

	t26 = (x133<((x134*x135)&x136));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x138 = 43258929LLU;
	int8_t x140 = INT8_MAX;
	volatile int32_t t27 = 54;

	t27 = (x137<((x138*x139)&x140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MAX;
	int8_t x142 = -1;
	static int8_t x144 = 0;
	int32_t t28 = -5514;

	t28 = (x141<((x142*x143)&x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = 10;
	int8_t x146 = INT8_MIN;
	volatile int32_t t29 = -12;

	t29 = (x145<((x146*x147)&x148));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x149 = 1U;
	int8_t x150 = INT8_MIN;
	int32_t x151 = 1;
	uint8_t x152 = 0U;

	t30 = (x149<((x150*x151)&x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MIN;
	static uint64_t x155 = 14513LLU;
	volatile uint16_t x156 = 5U;
	int32_t t31 = 664;

	t31 = (x153<((x154*x155)&x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = 1;
	uint16_t x158 = 2U;
	uint8_t x159 = 29U;
	int64_t x160 = -1LL;
	int32_t t32 = -377772;

	t32 = (x157<((x158*x159)&x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	volatile uint8_t x162 = UINT8_MAX;
	static int32_t t33 = 4830;

	t33 = (x161<((x162*x163)&x164));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = INT64_MAX;
	static uint64_t x166 = 11640721317886880LLU;
	uint32_t x168 = 48228U;
	int32_t t34 = -1;

	t34 = (x165<((x166*x167)&x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x173 = 270999246U;
	static volatile int64_t x174 = -624LL;
	static int8_t x175 = INT8_MIN;
	volatile int32_t t35 = -7;

	t35 = (x173<((x174*x175)&x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x177 = 59224502244061LLU;
	static volatile int32_t x178 = 1336;
	int8_t x179 = 3;
	uint64_t x180 = 1LLU;
	int32_t t36 = -5198;

	t36 = (x177<((x178*x179)&x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = INT16_MAX;
	uint8_t x182 = 0U;
	uint32_t x183 = 120909316U;
	static int8_t x184 = 2;
	static int32_t t37 = 174;

	t37 = (x181<((x182*x183)&x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x187 = -1LL;
	int8_t x188 = -53;
	static volatile int32_t t38 = -23135497;

	t38 = (x185<((x186*x187)&x188));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = 2LLU;
	volatile int16_t x190 = -1;
	int8_t x191 = -1;
	int32_t x192 = INT32_MIN;

	t39 = (x189<((x190*x191)&x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x193 = 3;
	uint16_t x194 = 141U;
	volatile int32_t t40 = -509;

	t40 = (x193<((x194*x195)&x196));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x197 = INT16_MIN;
	uint16_t x198 = 2U;
	int32_t x199 = -1;
	static uint8_t x200 = 1U;

	t41 = (x197<((x198*x199)&x200));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x201 = INT8_MIN;
	volatile uint8_t x202 = 49U;
	int8_t x203 = -1;
	int16_t x204 = INT16_MIN;
	volatile int32_t t42 = 0;

	t42 = (x201<((x202*x203)&x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = INT64_MIN;
	int8_t x207 = 25;
	int32_t x208 = INT32_MIN;
	volatile int32_t t43 = 11762;

	t43 = (x205<((x206*x207)&x208));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x209 = 6188;
	static int64_t x210 = -136901500LL;
	volatile uint16_t x211 = 2915U;
	volatile int32_t t44 = 807032329;

	t44 = (x209<((x210*x211)&x212));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x213 = 372410U;
	uint64_t x216 = UINT64_MAX;
	int32_t t45 = -244516497;

	t45 = (x213<((x214*x215)&x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = INT16_MIN;
	static uint16_t x219 = 279U;
	int8_t x220 = 1;
	volatile int32_t t46 = -43166001;

	t46 = (x217<((x218*x219)&x220));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MAX;
	int32_t x223 = -1;
	int32_t t47 = -160068;

	t47 = (x221<((x222*x223)&x224));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x230 = 0U;
	volatile int8_t x231 = INT8_MIN;
	int8_t x232 = 0;
	static int32_t t48 = -1;

	t48 = (x229<((x230*x231)&x232));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MIN;
	volatile int8_t x234 = INT8_MIN;
	uint32_t x235 = 369647520U;
	int64_t x236 = INT64_MIN;
	volatile int32_t t49 = -459608;

	t49 = (x233<((x234*x235)&x236));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x237 = INT16_MIN;
	uint16_t x238 = UINT16_MAX;
	int64_t x240 = -272LL;
	static volatile int32_t t50 = 1127490;

	t50 = (x237<((x238*x239)&x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x241 = 111575131U;
	int16_t x242 = 9;
	int8_t x244 = -1;
	static volatile int32_t t51 = 70;

	t51 = (x241<((x242*x243)&x244));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x245 = -1LL;
	int32_t x246 = INT32_MAX;
	int32_t x247 = 1;
	int32_t x248 = -37363644;

	t52 = (x245<((x246*x247)&x248));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x250 = -1;
	uint8_t x251 = 1U;
	static int32_t x252 = INT32_MIN;
	int32_t t53 = 183042;

	t53 = (x249<((x250*x251)&x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = INT8_MIN;
	volatile int8_t x262 = INT8_MAX;
	static int8_t x263 = -1;
	uint64_t x264 = 60234117612715992LLU;
	volatile int32_t t54 = -572507;

	t54 = (x261<((x262*x263)&x264));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x273 = INT8_MIN;
	uint32_t x274 = UINT32_MAX;
	volatile int16_t x275 = 7;
	volatile uint8_t x276 = 100U;
	volatile int32_t t55 = 511122091;

	t55 = (x273<((x274*x275)&x276));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x278 = INT16_MIN;
	uint16_t x279 = 14U;
	int32_t x280 = 216021953;
	int32_t t56 = 690;

	t56 = (x277<((x278*x279)&x280));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x281 = -3422;
	int8_t x282 = INT8_MAX;
	static int32_t t57 = -210;

	t57 = (x281<((x282*x283)&x284));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x286 = INT16_MIN;
	int64_t x288 = -1LL;
	int32_t t58 = -106845744;

	t58 = (x285<((x286*x287)&x288));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x293 = UINT8_MAX;
	int8_t x294 = -1;
	static int64_t x295 = 18972LL;
	static uint8_t x296 = 2U;
	static int32_t t59 = 62;

	t59 = (x293<((x294*x295)&x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = INT32_MAX;
	uint64_t x298 = 3039LLU;
	int32_t x300 = -1;

	t60 = (x297<((x298*x299)&x300));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x301 = 0U;
	static int16_t x302 = INT16_MIN;
	uint16_t x304 = 3523U;
	static volatile int32_t t61 = -118803;

	t61 = (x301<((x302*x303)&x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x306 = 83U;
	int16_t x307 = -1;
	uint8_t x308 = 13U;
	int32_t t62 = 829;

	t62 = (x305<((x306*x307)&x308));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x310 = INT16_MAX;
	int16_t x311 = 6897;
	int64_t x312 = INT64_MIN;
	static volatile int32_t t63 = 29522;

	t63 = (x309<((x310*x311)&x312));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x313 = INT8_MIN;
	volatile int64_t x314 = INT64_MAX;
	int32_t x315 = 1;
	static int64_t x316 = INT64_MIN;
	int32_t t64 = -1;

	t64 = (x313<((x314*x315)&x316));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = INT32_MAX;
	static uint8_t x326 = 1U;
	int64_t x327 = INT64_MIN;

	t65 = (x325<((x326*x327)&x328));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x329 = 39;
	volatile int16_t x330 = INT16_MIN;
	int16_t x331 = 15988;
	int16_t x332 = INT16_MIN;
	volatile int32_t t66 = 182;

	t66 = (x329<((x330*x331)&x332));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x333 = UINT64_MAX;
	static uint64_t x335 = UINT64_MAX;
	static volatile int8_t x336 = -1;
	volatile int32_t t67 = -513;

	t67 = (x333<((x334*x335)&x336));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = -1;
	int32_t x338 = -1;
	uint8_t x339 = 72U;
	int64_t x340 = INT64_MIN;

	t68 = (x337<((x338*x339)&x340));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x342 = INT16_MIN;
	uint64_t x343 = 1106501LLU;
	int32_t x344 = INT32_MAX;

	t69 = (x341<((x342*x343)&x344));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = -1;
	uint8_t x346 = 1U;
	volatile int64_t x347 = -15523LL;
	int64_t x348 = INT64_MIN;
	volatile int32_t t70 = -248366;

	t70 = (x345<((x346*x347)&x348));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x353 = 128926033;
	int64_t x355 = 14366246LL;
	int8_t x356 = INT8_MIN;

	t71 = (x353<((x354*x355)&x356));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x357 = -1;
	int8_t x358 = 7;
	int8_t x359 = 15;
	int16_t x360 = INT16_MIN;
	int32_t t72 = 6;

	t72 = (x357<((x358*x359)&x360));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x363 = -1;
	static int16_t x364 = 60;
	volatile int32_t t73 = -648;

	t73 = (x361<((x362*x363)&x364));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x375 = INT32_MAX;
	volatile int32_t t74 = -994883193;

	t74 = (x373<((x374*x375)&x376));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x381 = INT16_MAX;
	volatile uint16_t x382 = 13U;
	uint64_t x383 = 117485016LLU;
	int64_t x384 = INT64_MIN;
	int32_t t75 = 6679397;

	t75 = (x381<((x382*x383)&x384));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x393 = 30361788U;
	int16_t x394 = -1;
	static volatile int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t76 = -3840186;

	t76 = (x393<((x394*x395)&x396));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x397 = UINT16_MAX;
	volatile int32_t x398 = -1;
	int8_t x399 = 62;
	static int16_t x400 = INT16_MAX;
	int32_t t77 = 4142322;

	t77 = (x397<((x398*x399)&x400));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x405 = INT8_MAX;
	int8_t x406 = INT8_MAX;
	static int16_t x407 = -272;

	t78 = (x405<((x406*x407)&x408));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x409 = -1LL;
	int16_t x410 = 13;
	static int64_t x411 = -4LL;
	int32_t t79 = 606667;

	t79 = (x409<((x410*x411)&x412));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x414 = -1;
	static volatile uint16_t x415 = 10U;
	int32_t x416 = 364427;
	int32_t t80 = -2;

	t80 = (x413<((x414*x415)&x416));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x421 = -1;
	int64_t x422 = -82404LL;
	volatile int32_t t81 = 514;

	t81 = (x421<((x422*x423)&x424));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x429 = 0;
	uint32_t x430 = 71336U;
	int16_t x431 = -1;
	int8_t x432 = 6;

	t82 = (x429<((x430*x431)&x432));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x433 = 29888U;
	static volatile uint8_t x434 = UINT8_MAX;
	uint32_t x435 = UINT32_MAX;
	volatile int8_t x436 = 1;
	int32_t t83 = 1;

	t83 = (x433<((x434*x435)&x436));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x445 = INT32_MIN;
	static volatile uint8_t x446 = 44U;
	int64_t x447 = -1LL;
	int64_t x448 = -26LL;
	int32_t t84 = -134;

	t84 = (x445<((x446*x447)&x448));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x451 = -200136354284LL;
	int32_t t85 = 8;

	t85 = (x449<((x450*x451)&x452));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x453 = -1LL;
	volatile int8_t x454 = -1;
	uint64_t x456 = 776583603213LLU;
	volatile int32_t t86 = 24291958;

	t86 = (x453<((x454*x455)&x456));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x459 = -1LL;
	uint32_t x460 = UINT32_MAX;
	volatile int32_t t87 = 2;

	t87 = (x457<((x458*x459)&x460));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x465 = INT64_MIN;
	int32_t x466 = -1;
	static int16_t x468 = INT16_MIN;

	t88 = (x465<((x466*x467)&x468));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x469 = 14194;
	int32_t x470 = -1;
	int8_t x471 = -8;
	uint8_t x472 = 1U;

	t89 = (x469<((x470*x471)&x472));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x473 = 21;
	int16_t x474 = INT16_MIN;
	volatile int64_t x476 = -1472175413LL;
	int32_t t90 = -1;

	t90 = (x473<((x474*x475)&x476));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x477 = 3LLU;
	uint32_t x478 = 0U;
	volatile uint32_t x479 = 694U;
	volatile int32_t t91 = -945559096;

	t91 = (x477<((x478*x479)&x480));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x481 = INT32_MIN;
	static uint16_t x482 = UINT16_MAX;
	int16_t x483 = INT16_MIN;
	int64_t x484 = -1LL;
	volatile int32_t t92 = -163153783;

	t92 = (x481<((x482*x483)&x484));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x485 = 1;
	int32_t x486 = -1;
	int8_t x488 = 0;
	volatile int32_t t93 = -836621;

	t93 = (x485<((x486*x487)&x488));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x489 = -1;
	int8_t x490 = INT8_MAX;
	int8_t x492 = -1;
	volatile int32_t t94 = 1;

	t94 = (x489<((x490*x491)&x492));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x497 = INT64_MIN;
	int32_t x499 = -1;
	static volatile int32_t x500 = 2700;
	volatile int32_t t95 = 545;

	t95 = (x497<((x498*x499)&x500));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x501 = INT16_MIN;
	static uint8_t x503 = 70U;
	static int64_t x504 = -15349925408380LL;
	volatile int32_t t96 = 109183388;

	t96 = (x501<((x502*x503)&x504));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x505 = INT64_MIN;
	static int16_t x506 = -1;
	uint16_t x507 = UINT16_MAX;
	uint32_t x508 = 6708U;

	t97 = (x505<((x506*x507)&x508));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x512 = INT16_MAX;
	int32_t t98 = 65413;

	t98 = (x509<((x510*x511)&x512));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x513 = INT16_MAX;
	int32_t x514 = INT32_MIN;
	volatile uint64_t x515 = 37113094425LLU;
	uint8_t x516 = UINT8_MAX;

	t99 = (x513<((x514*x515)&x516));

	if (t99 != 0) { NG(); } else { ; }
	
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

