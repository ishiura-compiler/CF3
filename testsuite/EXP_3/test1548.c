#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = 190528078LL;
volatile int64_t x16 = 1737466078612122LL;
volatile uint8_t x21 = 5U;
uint64_t x22 = 263374054266839LLU;
static int32_t x30 = -250;
uint32_t x32 = 83780079U;
int8_t x33 = INT8_MAX;
uint64_t t8 = 291447LLU;
int32_t x55 = INT32_MAX;
uint64_t t14 = 43790657LLU;
int16_t x79 = 3;
uint16_t x80 = 3335U;
volatile int32_t x82 = 7;
static uint16_t x84 = UINT16_MAX;
static int64_t x86 = INT64_MIN;
int64_t t17 = -5706988LL;
int64_t x92 = INT64_MIN;
volatile int64_t x98 = 366264688464776LL;
int16_t x100 = 34;
static volatile int32_t x107 = INT32_MIN;
int32_t x117 = 181;
int16_t x121 = INT16_MAX;
int8_t x122 = INT8_MIN;
volatile int32_t x123 = INT32_MIN;
int16_t x124 = -1;
static uint32_t x130 = UINT32_MAX;
int16_t x136 = -12;
static volatile uint64_t t27 = 127401358578LLU;
int32_t x154 = -1;
int8_t x155 = INT8_MIN;
static int64_t x164 = INT64_MIN;
int32_t x169 = 119;
static uint8_t x180 = 0U;
int16_t x192 = INT16_MIN;
int8_t x194 = INT8_MIN;
int32_t x200 = INT32_MIN;
static int16_t x206 = -3;
int8_t x216 = -39;
static int64_t x219 = 122646636LL;
volatile int16_t x220 = INT16_MIN;
int32_t t43 = 572653;
uint32_t x225 = 993917267U;
static uint32_t x226 = 0U;
uint64_t x228 = 999995045LLU;
volatile uint32_t t44 = 7064129U;
uint64_t t46 = 38520LLU;
uint32_t x245 = UINT32_MAX;
int8_t x249 = -2;
int16_t x251 = -1;
static volatile int32_t t49 = -25;
int16_t x253 = INT16_MIN;
uint64_t x254 = 29395544528541988LLU;
int64_t x271 = -1LL;
volatile uint32_t x274 = 3U;
static int64_t t54 = 699LL;
uint32_t x279 = 4242U;
int32_t t55 = -45748;
volatile int64_t x283 = INT64_MAX;
int8_t x284 = 2;
int32_t x287 = INT32_MIN;
static uint32_t x297 = 1U;
volatile uint8_t x301 = UINT8_MAX;
volatile uint32_t x305 = 973U;
volatile uint32_t t63 = 1472U;
volatile uint64_t x319 = 1463778345LLU;
int16_t x327 = -1;
static uint16_t x334 = UINT16_MAX;
uint32_t x336 = 10U;
int64_t x341 = -121058234708623LL;
static volatile int32_t x342 = 5;
volatile int32_t x343 = INT32_MIN;
static int8_t x355 = -1;
int32_t x358 = -98;
int64_t x367 = INT64_MIN;
volatile int64_t x379 = -100302239463104599LL;
int64_t x381 = -139728510925601LL;
volatile int64_t t76 = -924356131086112LL;
int8_t x387 = 1;
uint64_t t79 = 2LLU;
uint32_t x401 = 232U;
uint16_t x404 = 21358U;
uint32_t t80 = 104532927U;
volatile uint32_t x411 = 0U;
volatile uint64_t x415 = 322130822950123969LLU;
volatile int32_t t82 = -736;
volatile int16_t x417 = INT16_MIN;
uint64_t t83 = 32009LLU;
int8_t x426 = INT8_MAX;
volatile int16_t x428 = 88;
int32_t t84 = 3190732;
int32_t x432 = 0;
uint32_t t85 = 39575U;
int16_t x449 = 1274;
uint8_t x459 = 85U;
uint16_t x462 = 369U;
int32_t t92 = 789347;
volatile int8_t x485 = 1;
int64_t t95 = -7LL;
int32_t x497 = -1;
volatile int64_t x499 = INT64_MIN;
volatile int32_t x504 = INT32_MIN;
static uint64_t t98 = 505287020LLU;
int32_t x505 = INT32_MAX;
static int32_t x508 = INT32_MAX;


void f0(void) {
	uint64_t x1 = 1042258796LLU;
	volatile int8_t x2 = -8;
	volatile int8_t x3 = INT8_MIN;
	uint16_t x4 = 13407U;
	static uint64_t t0 = 9488531443392LLU;

	t0 = ((x1*x2)+(x3<=x4));

	if (t0 != 18446744065371481249LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int64_t x6 = 1854157271LL;
	static uint16_t x7 = 16U;
	volatile uint16_t x8 = 5816U;

	t1 = ((x5*x6)+(x7<=x8));

	if (t1 != -1854157270LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	static int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MAX;
	volatile int32_t t2 = 56807063;

	t2 = ((x13*x14)+(x15<=x16));

	if (t2 != 16384) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 25103LLU;
	static int64_t x18 = -14LL;
	static uint8_t x19 = 28U;
	volatile int8_t x20 = 1;
	volatile uint64_t t3 = 26724489850230LLU;

	t3 = ((x17*x18)+(x19<=x20));

	if (t3 != 18446744073709200174LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x23 = INT8_MIN;
	uint32_t x24 = 1U;
	static uint64_t t4 = 2307243LLU;

	t4 = ((x21*x22)+(x23<=x24));

	if (t4 != 1316870271334195LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = 143;
	int64_t x31 = INT64_MIN;
	volatile int32_t t5 = 4;

	t5 = ((x29*x30)+(x31<=x32));

	if (t5 != -35749) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MAX;
	static int64_t x36 = -1LL;
	int32_t t6 = -3;

	t6 = ((x33*x34)+(x35<=x36));

	if (t6 != 8322945) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 756U;
	int8_t x38 = -1;
	volatile int32_t x39 = 821848493;
	uint64_t x40 = 43LLU;
	uint32_t t7 = 248309U;

	t7 = ((x37*x38)+(x39<=x40));

	if (t7 != 4294966540U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	int32_t x44 = -694416240;

	t8 = ((x41*x42)+(x43<=x44));

	if (t8 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = UINT16_MAX;
	volatile uint32_t x46 = 7747U;
	int64_t x47 = INT64_MIN;
	volatile int16_t x48 = -1;
	volatile uint32_t t9 = 474U;

	t9 = ((x45*x46)+(x47<=x48));

	if (t9 != 507699646U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	static volatile uint64_t x50 = 587559636738710LLU;
	uint32_t x51 = 113U;
	int32_t x52 = 1493;
	volatile uint64_t t10 = 3376130218061336LLU;

	t10 = ((x49*x50)+(x51<=x52));

	if (t10 != 18371536440206996737LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -1LL;
	volatile uint64_t x54 = 186637LLU;
	static uint32_t x56 = 54760U;
	uint64_t t11 = 220090LLU;

	t11 = ((x53*x54)+(x55<=x56));

	if (t11 != 18446744073709364979LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x57 = 42U;
	int8_t x58 = INT8_MAX;
	int8_t x59 = -10;
	int8_t x60 = INT8_MAX;
	int32_t t12 = 0;

	t12 = ((x57*x58)+(x59<=x60));

	if (t12 != 5335) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -60;
	static volatile int16_t x70 = INT16_MIN;
	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	int32_t t13 = 241;

	t13 = ((x69*x70)+(x71<=x72));

	if (t13 != 1966081) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = -1;
	uint64_t x74 = 1206LLU;
	int64_t x75 = INT64_MIN;
	int16_t x76 = -5;

	t14 = ((x73*x74)+(x75<=x76));

	if (t14 != 18446744073709550411LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = -3;
	static uint16_t x78 = 11U;
	int32_t t15 = 1606442;

	t15 = ((x77*x78)+(x79<=x80));

	if (t15 != -32) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -1;
	static uint32_t x83 = 57811855U;
	volatile int32_t t16 = -2;

	t16 = ((x81*x82)+(x83<=x84));

	if (t16 != -7) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = 1;
	uint64_t x87 = 147277954070953LLU;
	static int8_t x88 = INT8_MIN;

	t17 = ((x85*x86)+(x87<=x88));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = 28905U;
	uint16_t x90 = UINT16_MAX;
	static uint8_t x91 = 1U;
	volatile int32_t t18 = -30685;

	t18 = ((x89*x90)+(x91<=x92));

	if (t18 != 1894289175) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MIN;
	static uint64_t x99 = 5909888LLU;
	volatile int64_t t19 = -227181743LL;

	t19 = ((x97*x98)+(x99<=x100));

	if (t19 != -46881880123491328LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	uint16_t x108 = 6U;
	int32_t t20 = 12;

	t20 = ((x105*x106)+(x107<=x108));

	if (t20 != -65534) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x113 = UINT64_MAX;
	uint16_t x114 = UINT16_MAX;
	int16_t x115 = INT16_MAX;
	static int32_t x116 = 2;
	uint64_t t21 = 46146468LLU;

	t21 = ((x113*x114)+(x115<=x116));

	if (t21 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x118 = 15U;
	int32_t x119 = INT32_MAX;
	static int32_t x120 = 96262;
	volatile int32_t t22 = 233049863;

	t22 = ((x117*x118)+(x119<=x120));

	if (t22 != 2715) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t t23 = -8999;

	t23 = ((x121*x122)+(x123<=x124));

	if (t23 != -4194175) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -1;
	int16_t x126 = -2882;
	static int64_t x127 = INT64_MIN;
	volatile uint8_t x128 = 12U;
	static int32_t t24 = 52788;

	t24 = ((x125*x126)+(x127<=x128));

	if (t24 != 2883) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x129 = 23U;
	volatile int64_t x131 = -1LL;
	int32_t x132 = 72600;
	volatile uint32_t t25 = 876838590U;

	t25 = ((x129*x130)+(x131<=x132));

	if (t25 != 4294967274U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = INT32_MAX;
	uint64_t x134 = UINT64_MAX;
	uint8_t x135 = UINT8_MAX;
	volatile uint64_t t26 = 4019LLU;

	t26 = ((x133*x134)+(x135<=x136));

	if (t26 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x137 = INT64_MAX;
	volatile uint64_t x138 = 11124LLU;
	static int64_t x139 = -2865178867LL;
	static uint64_t x140 = 3681929796292879LLU;

	t27 = ((x137*x138)+(x139<=x140));

	if (t27 != 18446744073709540492LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x141 = -44;
	static volatile uint8_t x142 = 0U;
	static uint16_t x143 = 103U;
	static int8_t x144 = -30;
	int32_t t28 = 1;

	t28 = ((x141*x142)+(x143<=x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x149 = 0U;
	volatile int8_t x150 = -1;
	uint16_t x151 = UINT16_MAX;
	uint8_t x152 = 26U;
	volatile int32_t t29 = 855;

	t29 = ((x149*x150)+(x151<=x152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x153 = -1;
	uint16_t x156 = 7U;
	static int32_t t30 = 48274127;

	t30 = ((x153*x154)+(x155<=x156));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x157 = -61107;
	int64_t x158 = 3913482LL;
	int32_t x159 = 69;
	uint16_t x160 = 74U;
	volatile int64_t t31 = -104909241263667359LL;

	t31 = ((x157*x158)+(x159<=x160));

	if (t31 != -239141144573LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x161 = UINT32_MAX;
	int32_t x162 = -1;
	int16_t x163 = 19;
	uint32_t t32 = 1366U;

	t32 = ((x161*x162)+(x163<=x164));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x170 = 0;
	int64_t x171 = INT64_MAX;
	int16_t x172 = INT16_MAX;
	volatile int32_t t33 = -975989;

	t33 = ((x169*x170)+(x171<=x172));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x177 = -1;
	int8_t x178 = INT8_MIN;
	static volatile int64_t x179 = INT64_MIN;
	int32_t t34 = -19311617;

	t34 = ((x177*x178)+(x179<=x180));

	if (t34 != 129) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x185 = 3;
	static int64_t x186 = 261897879567126LL;
	int64_t x187 = 333LL;
	volatile int16_t x188 = -1;
	volatile int64_t t35 = -166LL;

	t35 = ((x185*x186)+(x187<=x188));

	if (t35 != 785693638701378LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x189 = INT32_MIN;
	uint16_t x190 = 1U;
	int64_t x191 = INT64_MIN;
	volatile int32_t t36 = 11;

	t36 = ((x189*x190)+(x191<=x192));

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x193 = 2441U;
	int64_t x195 = -169969970139690869LL;
	volatile uint64_t x196 = UINT64_MAX;
	uint32_t t37 = 111917U;

	t37 = ((x193*x194)+(x195<=x196));

	if (t37 != 4294654849U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x197 = -1;
	volatile int16_t x198 = INT16_MIN;
	uint32_t x199 = 1069238U;
	int32_t t38 = -111352115;

	t38 = ((x197*x198)+(x199<=x200));

	if (t38 != 32769) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = -15;
	int16_t x202 = -1;
	int64_t x203 = 429609398LL;
	static int64_t x204 = INT64_MIN;
	int32_t t39 = 1;

	t39 = ((x201*x202)+(x203<=x204));

	if (t39 != 15) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x205 = INT16_MAX;
	int32_t x207 = INT32_MAX;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t40 = -34;

	t40 = ((x205*x206)+(x207<=x208));

	if (t40 != -98301) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x213 = -1LL;
	static int8_t x214 = -51;
	int32_t x215 = -1;
	int64_t t41 = 11318773LL;

	t41 = ((x213*x214)+(x215<=x216));

	if (t41 != 51LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x217 = UINT8_MAX;
	uint16_t x218 = UINT16_MAX;
	int32_t t42 = -26394;

	t42 = ((x217*x218)+(x219<=x220));

	if (t42 != 16711425) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	int64_t x224 = 364771468440365LL;

	t43 = ((x221*x222)+(x223<=x224));

	if (t43 != 4194305) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x227 = -17461082LL;

	t44 = ((x225*x226)+(x227<=x228));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x233 = UINT64_MAX;
	int64_t x234 = -1LL;
	int16_t x235 = INT16_MAX;
	uint64_t x236 = 13LLU;
	uint64_t t45 = 171LLU;

	t45 = ((x233*x234)+(x235<=x236));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x237 = INT8_MAX;
	uint64_t x238 = 154LLU;
	int32_t x239 = -150974938;
	int8_t x240 = INT8_MIN;

	t46 = ((x237*x238)+(x239<=x240));

	if (t46 != 19559LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x241 = INT32_MIN;
	uint64_t x242 = 4LLU;
	int32_t x243 = INT32_MIN;
	uint8_t x244 = 22U;
	uint64_t t47 = 3855156871065886LLU;

	t47 = ((x241*x242)+(x243<=x244));

	if (t47 != 18446744065119617025LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x246 = -1LL;
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = INT16_MIN;
	volatile int64_t t48 = -127651862123LL;

	t48 = ((x245*x246)+(x247<=x248));

	if (t48 != -4294967295LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x250 = INT8_MAX;
	uint64_t x252 = UINT64_MAX;

	t49 = ((x249*x250)+(x251<=x252));

	if (t49 != -253) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MAX;
	volatile uint64_t t50 = 139894476LLU;

	t50 = ((x253*x254)+(x255<=x256));

	if (t50 != 14444232795342372865LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x257 = 389U;
	static int32_t x258 = -1;
	int16_t x259 = INT16_MIN;
	int8_t x260 = 8;
	volatile int32_t t51 = -7807200;

	t51 = ((x257*x258)+(x259<=x260));

	if (t51 != -388) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x261 = 0;
	static int16_t x262 = INT16_MAX;
	static int32_t x263 = INT32_MIN;
	uint32_t x264 = 3664U;
	int32_t t52 = -1;

	t52 = ((x261*x262)+(x263<=x264));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x269 = 11796436672016LLU;
	int16_t x270 = 0;
	volatile int64_t x272 = INT64_MIN;
	volatile uint64_t t53 = 29615285266637LLU;

	t53 = ((x269*x270)+(x271<=x272));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x273 = 546473118224LL;
	volatile uint32_t x275 = UINT32_MAX;
	int32_t x276 = INT32_MIN;

	t54 = ((x273*x274)+(x275<=x276));

	if (t54 != 1639419354672LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x277 = INT8_MAX;
	int16_t x278 = INT16_MIN;
	volatile uint8_t x280 = UINT8_MAX;

	t55 = ((x277*x278)+(x279<=x280));

	if (t55 != -4161536) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x281 = INT32_MAX;
	int64_t x282 = -1LL;
	int64_t t56 = 127LL;

	t56 = ((x281*x282)+(x283<=x284));

	if (t56 != -2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x285 = UINT16_MAX;
	int8_t x286 = -4;
	int8_t x288 = INT8_MAX;
	volatile int32_t t57 = 15;

	t57 = ((x285*x286)+(x287<=x288));

	if (t57 != -262139) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x289 = INT64_MAX;
	static int64_t x290 = -1LL;
	uint32_t x291 = 479700746U;
	static int8_t x292 = -11;
	static int64_t t58 = -56055578537110LL;

	t58 = ((x289*x290)+(x291<=x292));

	if (t58 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x298 = 11258608003LLU;
	uint64_t x299 = 499LLU;
	uint16_t x300 = UINT16_MAX;
	volatile uint64_t t59 = 169534084236339LLU;

	t59 = ((x297*x298)+(x299<=x300));

	if (t59 != 11258608004LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MAX;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t60 = -68533820;

	t60 = ((x301*x302)+(x303<=x304));

	if (t60 != -8355840) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x306 = INT16_MIN;
	volatile uint64_t x307 = UINT64_MAX;
	uint64_t x308 = 206LLU;
	uint32_t t61 = 2696U;

	t61 = ((x305*x306)+(x307<=x308));

	if (t61 != 4263084032U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = -1;
	int64_t x310 = INT64_MAX;
	int8_t x311 = -1;
	int16_t x312 = -19;
	int64_t t62 = -1LL;

	t62 = ((x309*x310)+(x311<=x312));

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x313 = UINT32_MAX;
	static uint8_t x314 = UINT8_MAX;
	volatile int64_t x315 = -1LL;
	volatile int64_t x316 = 10724LL;

	t63 = ((x313*x314)+(x315<=x316));

	if (t63 != 4294967042U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x317 = INT32_MIN;
	uint64_t x318 = UINT64_MAX;
	int32_t x320 = -291259854;
	volatile uint64_t t64 = 11182425450351166LLU;

	t64 = ((x317*x318)+(x319<=x320));

	if (t64 != 2147483649LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = -1;
	static int32_t x326 = -1;
	static int16_t x328 = INT16_MAX;
	int32_t t65 = -146160;

	t65 = ((x325*x326)+(x327<=x328));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile uint64_t x330 = 13511613242LLU;
	static uint16_t x331 = 2U;
	int8_t x332 = -1;
	volatile uint64_t t66 = 99466424LLU;

	t66 = ((x329*x330)+(x331<=x332));

	if (t66 != 885483573814470LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x333 = UINT32_MAX;
	int64_t x335 = INT64_MIN;
	volatile uint32_t t67 = 22031372U;

	t67 = ((x333*x334)+(x335<=x336));

	if (t67 != 4294901762U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x344 = INT8_MIN;
	int64_t t68 = 191724135170LL;

	t68 = ((x341*x342)+(x343<=x344));

	if (t68 != -605291173543114LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x345 = INT8_MIN;
	int16_t x346 = 10;
	int64_t x347 = 1360877097LL;
	int16_t x348 = INT16_MIN;
	int32_t t69 = 2;

	t69 = ((x345*x346)+(x347<=x348));

	if (t69 != -1280) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x349 = -1;
	int64_t x350 = -1LL;
	volatile int64_t x351 = INT64_MIN;
	static int8_t x352 = 1;
	int64_t t70 = -1LL;

	t70 = ((x349*x350)+(x351<=x352));

	if (t70 != 2LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x353 = UINT16_MAX;
	volatile uint32_t x354 = 18652U;
	int32_t x356 = -1;
	volatile uint32_t t71 = 392795786U;

	t71 = ((x353*x354)+(x355<=x356));

	if (t71 != 1222358821U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x357 = 175444480U;
	static uint16_t x359 = 120U;
	uint8_t x360 = 92U;
	static volatile uint32_t t72 = 729100U;

	t72 = ((x357*x358)+(x359<=x360));

	if (t72 != 4281277440U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x361 = INT8_MIN;
	static uint64_t x362 = UINT64_MAX;
	volatile int32_t x363 = -1;
	volatile uint16_t x364 = 85U;
	uint64_t t73 = 472042607LLU;

	t73 = ((x361*x362)+(x363<=x364));

	if (t73 != 129LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = -1;
	int32_t x368 = INT32_MIN;
	volatile int32_t t74 = -48193;

	t74 = ((x365*x366)+(x367<=x368));

	if (t74 != 129) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x377 = INT16_MIN;
	int64_t x378 = 421060LL;
	int8_t x380 = INT8_MIN;
	int64_t t75 = -28864LL;

	t75 = ((x377*x378)+(x379<=x380));

	if (t75 != -13797294079LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x382 = -347;
	volatile uint8_t x383 = 11U;
	static uint64_t x384 = UINT64_MAX;

	t76 = ((x381*x382)+(x383<=x384));

	if (t76 != 48485793291183548LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x385 = UINT32_MAX;
	uint32_t x386 = 19482U;
	int16_t x388 = -4;
	static volatile uint32_t t77 = 90196U;

	t77 = ((x385*x386)+(x387<=x388));

	if (t77 != 4294947814U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x393 = -1;
	static int8_t x394 = -9;
	static uint16_t x395 = 12216U;
	static int16_t x396 = -1;
	volatile int32_t t78 = -7208;

	t78 = ((x393*x394)+(x395<=x396));

	if (t78 != 9) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x397 = 3971344402352LLU;
	static uint64_t x398 = 13537395333631LLU;
	volatile uint32_t x399 = UINT32_MAX;
	uint32_t x400 = 16761U;

	t79 = ((x397*x398)+(x399<=x400));

	if (t79 != 7083620597372639312LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x402 = 191U;
	uint8_t x403 = 2U;

	t80 = ((x401*x402)+(x403<=x404));

	if (t80 != 44313U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x409 = 603378584U;
	int64_t x410 = -1LL;
	static int8_t x412 = INT8_MAX;
	static volatile int64_t t81 = 118811289122LL;

	t81 = ((x409*x410)+(x411<=x412));

	if (t81 != -603378583LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x413 = 504;
	uint8_t x414 = UINT8_MAX;
	volatile int32_t x416 = -1;

	t82 = ((x413*x414)+(x415<=x416));

	if (t82 != 128521) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x418 = 9170939368LLU;
	static uint64_t x419 = UINT64_MAX;
	static int64_t x420 = INT64_MAX;

	t83 = ((x417*x418)+(x419<=x420));

	if (t83 != 18446443560368340992LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x425 = INT8_MIN;
	int8_t x427 = INT8_MAX;

	t84 = ((x425*x426)+(x427<=x428));

	if (t84 != -16256) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x429 = -30;
	volatile uint32_t x430 = 61668548U;
	static int32_t x431 = INT32_MIN;

	t85 = ((x429*x430)+(x431<=x432));

	if (t85 != 2444910857U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x445 = INT16_MIN;
	static volatile int16_t x446 = INT16_MAX;
	int64_t x447 = 929227476LL;
	uint16_t x448 = 66U;
	int32_t t86 = 834;

	t86 = ((x445*x446)+(x447<=x448));

	if (t86 != -1073709056) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x450 = INT16_MIN;
	int32_t x451 = INT32_MAX;
	int16_t x452 = INT16_MIN;
	volatile int32_t t87 = -3970;

	t87 = ((x449*x450)+(x451<=x452));

	if (t87 != -41746432) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x453 = 30;
	volatile uint16_t x454 = 1580U;
	int32_t x455 = -1;
	int16_t x456 = INT16_MAX;
	volatile int32_t t88 = -2742;

	t88 = ((x453*x454)+(x455<=x456));

	if (t88 != 47401) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x457 = UINT64_MAX;
	int32_t x458 = -86589;
	uint32_t x460 = 997475U;
	uint64_t t89 = 1695495666837058026LLU;

	t89 = ((x457*x458)+(x459<=x460));

	if (t89 != 86590LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x461 = -1;
	uint16_t x463 = 367U;
	int8_t x464 = INT8_MAX;
	int32_t t90 = -5229822;

	t90 = ((x461*x462)+(x463<=x464));

	if (t90 != -369) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x465 = 3;
	volatile uint8_t x466 = 40U;
	int64_t x467 = INT64_MAX;
	int64_t x468 = INT64_MIN;
	volatile int32_t t91 = 14;

	t91 = ((x465*x466)+(x467<=x468));

	if (t91 != 120) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x473 = -1;
	int8_t x474 = INT8_MIN;
	volatile int8_t x475 = -25;
	volatile int64_t x476 = INT64_MAX;

	t92 = ((x473*x474)+(x475<=x476));

	if (t92 != 129) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x477 = INT16_MAX;
	uint64_t x478 = 55224591212091LLU;
	static volatile uint64_t x479 = UINT64_MAX;
	uint16_t x480 = UINT16_MAX;
	volatile uint64_t t93 = 141276737273556535LLU;

	t93 = ((x477*x478)+(x479<=x480));

	if (t93 != 1809544180246585797LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x486 = -3;
	int64_t x487 = INT64_MIN;
	static volatile int16_t x488 = INT16_MIN;
	volatile int32_t t94 = -231408;

	t94 = ((x485*x486)+(x487<=x488));

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x489 = 1384041LL;
	int8_t x490 = INT8_MAX;
	static int16_t x491 = -1;
	volatile uint64_t x492 = UINT64_MAX;

	t95 = ((x489*x490)+(x491<=x492));

	if (t95 != 175773208LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x493 = INT8_MAX;
	int16_t x494 = -95;
	volatile int32_t x495 = INT32_MAX;
	volatile int64_t x496 = INT64_MIN;
	volatile int32_t t96 = -14;

	t96 = ((x493*x494)+(x495<=x496));

	if (t96 != -12065) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x498 = -390010;
	int64_t x500 = INT64_MAX;
	volatile int32_t t97 = -30;

	t97 = ((x497*x498)+(x499<=x500));

	if (t97 != 390011) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x501 = UINT64_MAX;
	int32_t x502 = 7711;
	int32_t x503 = INT32_MIN;

	t98 = ((x501*x502)+(x503<=x504));

	if (t98 != 18446744073709543906LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x506 = UINT64_MAX;
	static int64_t x507 = INT64_MIN;
	uint64_t t99 = 678697526LLU;

	t99 = ((x505*x506)+(x507<=x508));

	if (t99 != 18446744071562067970LLU) { NG(); } else { ; }
	
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

