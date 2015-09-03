#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x10 = 2U;
volatile uint32_t x12 = 438U;
int8_t x19 = 8;
uint8_t x20 = 4U;
volatile int16_t x28 = INT16_MIN;
volatile int32_t t6 = 444749;
uint64_t x29 = 95067711521871LLU;
static int16_t x30 = INT16_MAX;
uint16_t x31 = UINT16_MAX;
volatile int32_t t9 = 165570581;
uint8_t x46 = 0U;
static uint32_t x48 = UINT32_MAX;
uint32_t t10 = 4015U;
int64_t x52 = -880572485888121968LL;
int16_t x67 = INT16_MAX;
uint64_t x73 = 2972488852LLU;
uint16_t x86 = 1585U;
int8_t x89 = INT8_MIN;
uint8_t x92 = UINT8_MAX;
static int8_t x106 = -6;
static int16_t x108 = -1;
volatile int32_t t20 = 14;
volatile uint32_t x112 = UINT32_MAX;
volatile int8_t x113 = INT8_MIN;
int32_t x123 = -1;
int32_t t25 = -54;
static uint32_t x138 = UINT32_MAX;
uint64_t x157 = 2LLU;
volatile uint64_t x160 = 52832247860LLU;
uint32_t x171 = 1013U;
int32_t x172 = 118412222;
volatile int64_t x183 = INT64_MAX;
int64_t x185 = -1LL;
static uint32_t x187 = UINT32_MAX;
int64_t x198 = -7LL;
uint16_t x200 = 15966U;
uint64_t x210 = 221799LLU;
volatile int16_t x222 = INT16_MAX;
volatile int32_t t40 = -70785;
volatile uint32_t x230 = 4U;
uint16_t x235 = UINT16_MAX;
int16_t x237 = 330;
int8_t x240 = INT8_MAX;
int64_t x242 = 1589LL;
static int32_t x245 = -1;
uint64_t x246 = 258405423LLU;
uint64_t x253 = 12955766623416LLU;
int16_t x270 = 27;
static uint8_t x273 = 6U;
int16_t x275 = INT16_MIN;
uint32_t x276 = UINT32_MAX;
volatile int32_t t52 = 140354;
int32_t x286 = -1;
uint16_t x297 = UINT16_MAX;
uint32_t x314 = 2U;
int32_t x315 = 171318901;
int32_t x317 = -7;
int8_t x320 = -17;
static int8_t x323 = INT8_MIN;
static int64_t t61 = 1830768597LL;
static volatile int64_t t62 = 50842LL;
int16_t x334 = INT16_MIN;
int8_t x337 = INT8_MAX;
int8_t x345 = -1;
uint8_t x348 = UINT8_MAX;
uint64_t x351 = 5761874744962348LLU;
volatile int32_t t68 = 216830;
int32_t x367 = -1;
static uint8_t x377 = 3U;
volatile int64_t t73 = 0LL;
int8_t x390 = -1;
int32_t x391 = INT32_MAX;
uint16_t x396 = 15U;
static int8_t x407 = 1;
static volatile uint8_t x413 = 119U;
volatile int32_t t79 = 175231;
uint8_t x422 = 0U;
volatile uint16_t x430 = UINT16_MAX;
volatile int64_t x453 = INT64_MIN;
static int32_t x461 = INT32_MAX;
static int16_t x465 = INT16_MAX;
int8_t x466 = INT8_MIN;
static int32_t x474 = -1;
volatile int32_t x486 = -1;
volatile int32_t t92 = 75;
int32_t t95 = -3;
volatile int32_t x506 = INT32_MIN;
int64_t x507 = -19635LL;
int32_t x512 = 45;
uint64_t t98 = 60LLU;
static int64_t x524 = -1LL;


void f0(void) {
	int8_t x1 = 0;
	volatile uint64_t x2 = 42109115842918882LLU;
	int16_t x3 = 608;
	int8_t x4 = -1;
	volatile int32_t t0 = -1666782;

	t0 = ((x1<(x2*x3))&x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 44;
	int8_t x6 = -7;
	int32_t x7 = -1;
	uint8_t x8 = 49U;
	int32_t t1 = -251860502;

	t1 = ((x5<(x6*x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 1;
	volatile uint32_t x11 = 16U;
	static uint32_t t2 = 11278U;

	t2 = ((x9<(x10*x11))&x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -56709;

	t3 = ((x13<(x14*x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1387473015316LL;
	volatile int8_t x18 = INT8_MIN;
	volatile int32_t t4 = 413;

	t4 = ((x17<(x18*x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = 58;
	int16_t x23 = INT16_MIN;
	volatile int64_t x24 = -1LL;
	volatile int64_t t5 = -3916237157163LL;

	t5 = ((x21<(x22*x23))&x24);

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x26 = INT32_MIN;
	uint32_t x27 = 114U;

	t6 = ((x25<(x26*x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x32 = 19;
	int32_t t7 = -1931;

	t7 = ((x29<(x30*x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = 25;
	uint64_t x34 = 1433LLU;
	volatile int64_t x35 = -18967LL;
	int16_t x36 = -1;
	static volatile int32_t t8 = -174726;

	t8 = ((x33<(x34*x35))&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = UINT16_MAX;
	static int16_t x38 = INT16_MAX;
	volatile int32_t x39 = 6779;
	uint16_t x40 = UINT16_MAX;

	t9 = ((x37<(x38*x39))&x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -5;
	int16_t x47 = INT16_MAX;

	t10 = ((x45<(x46*x47))&x48);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 991U;
	int32_t x50 = INT32_MAX;
	static uint32_t x51 = 217379U;
	static int64_t t11 = -3LL;

	t11 = ((x49<(x50*x51))&x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t12 = 1956731969LLU;

	t12 = ((x65<(x66*x67))&x68);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MIN;
	int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MIN;
	uint8_t x72 = 5U;
	volatile int32_t t13 = -834639175;

	t13 = ((x69<(x70*x71))&x72);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x74 = INT8_MAX;
	volatile int16_t x75 = INT16_MAX;
	int8_t x76 = -1;
	volatile int32_t t14 = -686021;

	t14 = ((x73<(x74*x75))&x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x77 = UINT16_MAX;
	uint64_t x78 = 25LLU;
	volatile uint32_t x79 = UINT32_MAX;
	static int16_t x80 = INT16_MAX;
	volatile int32_t t15 = 607;

	t15 = ((x77<(x78*x79))&x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = INT64_MAX;
	int8_t x87 = INT8_MIN;
	int16_t x88 = 19;
	int32_t t16 = 8177;

	t16 = ((x85<(x86*x87))&x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x90 = INT16_MIN;
	static int16_t x91 = INT16_MIN;
	int32_t t17 = 1844619;

	t17 = ((x89<(x90*x91))&x92);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MIN;
	int32_t x98 = -1;
	int32_t x99 = -18253;
	static volatile int8_t x100 = 1;
	volatile int32_t t18 = 0;

	t18 = ((x97<(x98*x99))&x100);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = -1;
	uint64_t x103 = 4635061LLU;
	int16_t x104 = INT16_MIN;
	volatile int32_t t19 = -507730800;

	t19 = ((x101<(x102*x103))&x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = INT16_MAX;
	uint16_t x107 = 13597U;

	t20 = ((x105<(x106*x107))&x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x109 = 97U;
	int64_t x110 = 3LL;
	int8_t x111 = INT8_MIN;
	static uint32_t t21 = 68211381U;

	t21 = ((x109<(x110*x111))&x112);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x114 = 13U;
	int32_t x115 = 125166061;
	uint16_t x116 = 2179U;
	volatile int32_t t22 = -19299;

	t22 = ((x113<(x114*x115))&x116);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x121 = INT16_MIN;
	volatile uint64_t x122 = UINT64_MAX;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t23 = -430348;

	t23 = ((x121<(x122*x123))&x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = 1;
	volatile int8_t x126 = -1;
	volatile int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	static int32_t t24 = 1359489;

	t24 = ((x125<(x126*x127))&x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x129 = 4U;
	int64_t x130 = 36288215498LL;
	int8_t x131 = 1;
	volatile uint16_t x132 = 3U;

	t25 = ((x129<(x130*x131))&x132);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = INT16_MIN;
	volatile int32_t x139 = -1;
	int64_t x140 = -218LL;
	int64_t t26 = -17136240019707LL;

	t26 = ((x137<(x138*x139))&x140);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x141 = 7;
	int8_t x142 = -1;
	static int8_t x143 = -32;
	volatile int64_t x144 = INT64_MIN;
	volatile int64_t t27 = 2706LL;

	t27 = ((x141<(x142*x143))&x144);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x153 = -1LL;
	int8_t x154 = INT8_MIN;
	static uint64_t x155 = 465088LLU;
	int16_t x156 = -212;
	int32_t t28 = -1;

	t28 = ((x153<(x154*x155))&x156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x158 = INT8_MIN;
	uint32_t x159 = 1203425351U;
	volatile uint64_t t29 = 58LLU;

	t29 = ((x157<(x158*x159))&x160);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x169 = -1;
	int16_t x170 = INT16_MIN;
	volatile int32_t t30 = 0;

	t30 = ((x169<(x170*x171))&x172);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x173 = 691591U;
	volatile uint16_t x174 = 1405U;
	int64_t x175 = -254LL;
	uint16_t x176 = 7U;
	static volatile int32_t t31 = 8;

	t31 = ((x173<(x174*x175))&x176);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = -1;
	uint8_t x184 = 96U;
	static volatile int32_t t32 = -23745;

	t32 = ((x181<(x182*x183))&x184);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x186 = -10363708LL;
	int16_t x188 = 0;
	static volatile int32_t t33 = 1;

	t33 = ((x185<(x186*x187))&x188);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x197 = -1LL;
	int32_t x199 = 1015374;
	volatile int32_t t34 = 6;

	t34 = ((x197<(x198*x199))&x200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x201 = 3908701844LL;
	uint64_t x202 = 44LLU;
	static int16_t x203 = INT16_MIN;
	uint32_t x204 = 1104630515U;
	volatile uint32_t t35 = 42U;

	t35 = ((x201<(x202*x203))&x204);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x209 = INT16_MAX;
	uint64_t x211 = UINT64_MAX;
	uint8_t x212 = 114U;
	int32_t t36 = 571;

	t36 = ((x209<(x210*x211))&x212);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x213 = 90U;
	volatile int16_t x214 = INT16_MIN;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = 2;
	static volatile int32_t t37 = -3552776;

	t37 = ((x213<(x214*x215))&x216);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x217 = UINT16_MAX;
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = -1017868LL;
	int64_t x220 = INT64_MIN;
	static int64_t t38 = -57LL;

	t38 = ((x217<(x218*x219))&x220);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x221 = -1;
	int8_t x223 = 7;
	int32_t x224 = -1;
	volatile int32_t t39 = 1654938;

	t39 = ((x221<(x222*x223))&x224);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x225 = -1;
	uint32_t x226 = UINT32_MAX;
	int32_t x227 = -1;
	uint8_t x228 = 95U;

	t40 = ((x225<(x226*x227))&x228);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x229 = 1U;
	uint8_t x231 = UINT8_MAX;
	static uint8_t x232 = 12U;
	static volatile int32_t t41 = 244;

	t41 = ((x229<(x230*x231))&x232);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x233 = -3;
	uint8_t x234 = 91U;
	int32_t x236 = -1;
	int32_t t42 = 153717;

	t42 = ((x233<(x234*x235))&x236);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x238 = INT8_MAX;
	int32_t x239 = 3601819;
	int32_t t43 = 508572830;

	t43 = ((x237<(x238*x239))&x240);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x241 = INT16_MIN;
	int8_t x243 = -1;
	int64_t x244 = -1LL;
	int64_t t44 = -385342139LL;

	t44 = ((x241<(x242*x243))&x244);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x247 = 0;
	uint32_t x248 = 2U;
	volatile uint32_t t45 = 14U;

	t45 = ((x245<(x246*x247))&x248);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x254 = -1;
	uint16_t x255 = 70U;
	static int16_t x256 = 20;
	static volatile int32_t t46 = 677238;

	t46 = ((x253<(x254*x255))&x256);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x261 = INT16_MAX;
	int16_t x262 = 1982;
	int16_t x263 = INT16_MAX;
	int16_t x264 = -125;
	volatile int32_t t47 = -769484977;

	t47 = ((x261<(x262*x263))&x264);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x265 = INT16_MAX;
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = -1;
	int16_t x268 = INT16_MIN;
	static volatile int32_t t48 = -172536185;

	t48 = ((x265<(x266*x267))&x268);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x269 = UINT16_MAX;
	uint32_t x271 = UINT32_MAX;
	int8_t x272 = -8;
	static volatile int32_t t49 = -1;

	t49 = ((x269<(x270*x271))&x272);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x274 = -5152341LL;
	static volatile uint32_t t50 = 218638661U;

	t50 = ((x273<(x274*x275))&x276);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x277 = INT64_MAX;
	int16_t x278 = INT16_MIN;
	uint64_t x279 = UINT64_MAX;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t51 = 2209616;

	t51 = ((x277<(x278*x279))&x280);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x282 = 23096266470LLU;
	int16_t x283 = INT16_MAX;
	static volatile int8_t x284 = 1;

	t52 = ((x281<(x282*x283))&x284);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x285 = 128U;
	uint64_t x287 = 197000LLU;
	static int32_t x288 = -1;
	static volatile int32_t t53 = -530899542;

	t53 = ((x285<(x286*x287))&x288);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x293 = UINT16_MAX;
	int64_t x294 = -1LL;
	uint64_t x295 = 3969310LLU;
	int64_t x296 = 204269208061305LL;
	int64_t t54 = 1376897LL;

	t54 = ((x293<(x294*x295))&x296);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x298 = 343170919LLU;
	int32_t x299 = -260;
	static volatile int64_t x300 = -438LL;
	int64_t t55 = 908414611899608LL;

	t55 = ((x297<(x298*x299))&x300);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x305 = UINT8_MAX;
	static int32_t x306 = INT32_MAX;
	uint8_t x307 = 0U;
	int8_t x308 = INT8_MIN;
	int32_t t56 = 0;

	t56 = ((x305<(x306*x307))&x308);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	static int8_t x311 = INT8_MAX;
	int16_t x312 = -1279;
	volatile int32_t t57 = -180369;

	t57 = ((x309<(x310*x311))&x312);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x313 = INT8_MAX;
	int8_t x316 = 0;
	volatile int32_t t58 = -72487;

	t58 = ((x313<(x314*x315))&x316);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x318 = -1;
	volatile int16_t x319 = -3;
	int32_t t59 = -1;

	t59 = ((x317<(x318*x319))&x320);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x321 = 828888317LL;
	uint16_t x322 = UINT16_MAX;
	int32_t x324 = INT32_MIN;
	static int32_t t60 = -89;

	t60 = ((x321<(x322*x323))&x324);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x325 = INT64_MIN;
	uint8_t x326 = 11U;
	static int8_t x327 = -1;
	static int64_t x328 = INT64_MAX;

	t61 = ((x325<(x326*x327))&x328);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x329 = -1LL;
	static volatile uint8_t x330 = UINT8_MAX;
	uint32_t x331 = 64202U;
	int64_t x332 = -30359873514LL;

	t62 = ((x329<(x330*x331))&x332);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x333 = 1;
	static int32_t x335 = -1;
	static volatile int16_t x336 = INT16_MAX;
	static int32_t t63 = 1;

	t63 = ((x333<(x334*x335))&x336);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x338 = INT8_MAX;
	int32_t x339 = 417;
	static uint8_t x340 = 4U;
	static volatile int32_t t64 = 10036;

	t64 = ((x337<(x338*x339))&x340);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x341 = 20U;
	static volatile int8_t x342 = -1;
	static volatile int8_t x343 = -1;
	volatile int64_t x344 = 24247188LL;
	volatile int64_t t65 = 97LL;

	t65 = ((x341<(x342*x343))&x344);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MAX;
	volatile int32_t t66 = -571757465;

	t66 = ((x345<(x346*x347))&x348);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x349 = -1172;
	uint8_t x350 = UINT8_MAX;
	int32_t x352 = -2315;
	volatile int32_t t67 = -7;

	t67 = ((x349<(x350*x351))&x352);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x353 = 1U;
	static volatile uint64_t x354 = 2LLU;
	uint16_t x355 = UINT16_MAX;
	volatile int32_t x356 = INT32_MIN;

	t68 = ((x353<(x354*x355))&x356);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x357 = INT32_MIN;
	int16_t x358 = 16344;
	int16_t x359 = INT16_MAX;
	uint32_t x360 = 1768283980U;
	uint32_t t69 = 54362728U;

	t69 = ((x357<(x358*x359))&x360);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x361 = 2;
	volatile uint32_t x362 = UINT32_MAX;
	volatile int16_t x363 = -1618;
	volatile int32_t x364 = -502834;
	int32_t t70 = 119;

	t70 = ((x361<(x362*x363))&x364);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x365 = -1;
	static volatile int16_t x366 = INT16_MIN;
	volatile int8_t x368 = INT8_MIN;
	int32_t t71 = 307;

	t71 = ((x365<(x366*x367))&x368);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x369 = 148712267910127LLU;
	volatile int32_t x370 = 0;
	int32_t x371 = -1;
	static uint8_t x372 = 3U;
	static int32_t t72 = -42655;

	t72 = ((x369<(x370*x371))&x372);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x378 = 9686U;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = INT64_MAX;

	t73 = ((x377<(x378*x379))&x380);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x381 = UINT16_MAX;
	uint32_t x382 = 15384749U;
	uint64_t x383 = 10637LLU;
	volatile uint64_t x384 = 2205220070074332LLU;
	uint64_t t74 = 588788LLU;

	t74 = ((x381<(x382*x383))&x384);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x389 = -62211211;
	uint8_t x392 = UINT8_MAX;
	int32_t t75 = 1755530;

	t75 = ((x389<(x390*x391))&x392);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x393 = INT8_MIN;
	static uint16_t x394 = 4014U;
	volatile uint32_t x395 = 6U;
	volatile int32_t t76 = -88268;

	t76 = ((x393<(x394*x395))&x396);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x397 = 3985U;
	static uint16_t x398 = 187U;
	int16_t x399 = -32;
	int16_t x400 = INT16_MIN;
	int32_t t77 = 5;

	t77 = ((x397<(x398*x399))&x400);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x405 = INT32_MIN;
	uint32_t x406 = 627418U;
	uint64_t x408 = 838680514342152LLU;
	volatile uint64_t t78 = 59070LLU;

	t78 = ((x405<(x406*x407))&x408);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x414 = 0U;
	uint32_t x415 = 0U;
	int16_t x416 = INT16_MAX;

	t79 = ((x413<(x414*x415))&x416);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x421 = 1;
	volatile uint32_t x423 = UINT32_MAX;
	int64_t x424 = 4269739949328149574LL;
	static int64_t t80 = -4588414835430643246LL;

	t80 = ((x421<(x422*x423))&x424);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x425 = -2LL;
	volatile int16_t x426 = INT16_MIN;
	static int32_t x427 = -1;
	volatile int64_t x428 = -1LL;
	int64_t t81 = -554LL;

	t81 = ((x425<(x426*x427))&x428);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x429 = INT8_MIN;
	int8_t x431 = INT8_MAX;
	volatile int8_t x432 = 1;
	volatile int32_t t82 = 1298;

	t82 = ((x429<(x430*x431))&x432);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x437 = 29;
	uint8_t x438 = UINT8_MAX;
	volatile int16_t x439 = INT16_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t83 = 97;

	t83 = ((x437<(x438*x439))&x440);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x441 = INT16_MAX;
	uint8_t x442 = UINT8_MAX;
	int8_t x443 = INT8_MIN;
	static int32_t x444 = INT32_MIN;
	volatile int32_t t84 = -3;

	t84 = ((x441<(x442*x443))&x444);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x454 = 7769;
	uint16_t x455 = 32U;
	int64_t x456 = -644LL;
	volatile int64_t t85 = 2829139079321063796LL;

	t85 = ((x453<(x454*x455))&x456);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x462 = -4428790594616LL;
	int16_t x463 = 0;
	int64_t x464 = INT64_MAX;
	static int64_t t86 = 5637059513856141LL;

	t86 = ((x461<(x462*x463))&x464);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x467 = -1LL;
	volatile uint16_t x468 = UINT16_MAX;
	volatile int32_t t87 = -1007;

	t87 = ((x465<(x466*x467))&x468);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x473 = 2415U;
	int64_t x475 = -4818887324LL;
	static volatile uint8_t x476 = 3U;
	int32_t t88 = 31;

	t88 = ((x473<(x474*x475))&x476);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = 2;
	int16_t x478 = INT16_MIN;
	int8_t x479 = -1;
	volatile int8_t x480 = INT8_MIN;
	static int32_t t89 = -423263;

	t89 = ((x477<(x478*x479))&x480);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x481 = -4575317680915717092LL;
	uint32_t x482 = 177U;
	uint64_t x483 = 802LLU;
	uint32_t x484 = UINT32_MAX;
	volatile uint32_t t90 = 9323423U;

	t90 = ((x481<(x482*x483))&x484);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x485 = 1LLU;
	uint64_t x487 = UINT64_MAX;
	uint32_t x488 = UINT32_MAX;
	static uint32_t t91 = 1833627U;

	t91 = ((x485<(x486*x487))&x488);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x489 = -1;
	uint16_t x490 = UINT16_MAX;
	uint16_t x491 = 382U;
	static int8_t x492 = INT8_MIN;

	t92 = ((x489<(x490*x491))&x492);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x493 = INT32_MIN;
	static int64_t x494 = 59402087250LL;
	int64_t x495 = -13LL;
	volatile int8_t x496 = -1;
	int32_t t93 = -66;

	t93 = ((x493<(x494*x495))&x496);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x497 = -1LL;
	int8_t x498 = 62;
	uint32_t x499 = 46U;
	uint64_t x500 = 1330324655LLU;
	volatile uint64_t t94 = 97369665976188226LLU;

	t94 = ((x497<(x498*x499))&x500);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x501 = INT64_MIN;
	uint16_t x502 = 0U;
	uint64_t x503 = 1LLU;
	int8_t x504 = INT8_MIN;

	t95 = ((x501<(x502*x503))&x504);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x505 = UINT16_MAX;
	volatile int16_t x508 = INT16_MIN;
	volatile int32_t t96 = 0;

	t96 = ((x505<(x506*x507))&x508);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x509 = UINT16_MAX;
	uint16_t x510 = 3U;
	int8_t x511 = 1;
	static int32_t t97 = 44;

	t97 = ((x509<(x510*x511))&x512);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x517 = 1221001241951486517LLU;
	int8_t x518 = -1;
	int64_t x519 = -1LL;
	static uint64_t x520 = 3LLU;

	t98 = ((x517<(x518*x519))&x520);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x521 = 1;
	int16_t x522 = -1;
	uint16_t x523 = UINT16_MAX;
	static int64_t t99 = -86LL;

	t99 = ((x521<(x522*x523))&x524);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

