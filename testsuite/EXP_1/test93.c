#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = INT8_MAX;
int64_t x7 = INT64_MIN;
volatile int32_t t1 = 154834604;
volatile int64_t t2 = 0LL;
static int8_t x23 = -2;
volatile int8_t x26 = 2;
int16_t x31 = 5625;
volatile int32_t t8 = 3517;
int8_t x41 = INT8_MIN;
int64_t x43 = INT64_MIN;
uint16_t x44 = 22U;
volatile uint8_t x57 = UINT8_MAX;
static int16_t x58 = INT16_MAX;
int32_t t11 = -81332576;
uint8_t x64 = 0U;
volatile int32_t t12 = 857011369;
uint16_t x69 = 1133U;
uint64_t x83 = 145368LLU;
volatile int8_t x87 = INT8_MIN;
volatile uint32_t t17 = 2408070U;
volatile int64_t x98 = -1LL;
uint32_t x103 = 1U;
volatile uint32_t t20 = 1051533U;
uint16_t x105 = 1U;
int64_t x126 = -1LL;
static uint8_t x127 = UINT8_MAX;
int32_t x129 = -1;
volatile uint8_t x135 = 89U;
int16_t x139 = INT16_MAX;
volatile int16_t x147 = INT16_MAX;
static int64_t x156 = -1LL;
volatile int64_t t30 = -1778500553781LL;
uint32_t x157 = 268U;
volatile int16_t x160 = INT16_MIN;
int8_t x175 = -1;
uint64_t t33 = 270998456180967103LLU;
uint64_t x181 = UINT64_MAX;
int16_t x184 = INT16_MIN;
volatile int32_t t35 = 6329;
volatile uint64_t t36 = 8668228278888249LLU;
static int64_t x211 = INT64_MIN;
int32_t t39 = -22051809;
static uint64_t x219 = 11387420LLU;
int32_t t40 = 573199850;
int64_t x222 = 51088411871169LL;
uint32_t t41 = 44U;
uint16_t x226 = 129U;
int32_t x231 = -1;
uint16_t x238 = 30U;
static int16_t x245 = 0;
int32_t x250 = -1;
int64_t x252 = -206LL;
static int32_t t47 = -124226051;
volatile int32_t x264 = INT32_MAX;
int64_t x266 = -74859539LL;
int32_t t49 = -481;
int16_t x269 = INT16_MIN;
int16_t x270 = INT16_MAX;
volatile uint64_t x271 = UINT64_MAX;
uint64_t x274 = UINT64_MAX;
int32_t t51 = 3927;
static int64_t x287 = INT64_MIN;
int8_t x293 = 47;
int16_t x321 = 1604;
uint16_t x323 = 688U;
int64_t t62 = -671641015788405LL;
volatile int32_t t63 = -8;
uint32_t x329 = 1736067U;
int8_t x332 = -3;
int8_t x333 = 23;
uint64_t x334 = 934151691083LLU;
uint64_t x336 = UINT64_MAX;
uint8_t x343 = 1U;
uint64_t x344 = 376648972969LLU;
int64_t x355 = 448LL;
volatile uint32_t x361 = 58996455U;
int64_t x363 = INT64_MAX;
volatile uint32_t x364 = UINT32_MAX;
volatile uint16_t x377 = UINT16_MAX;
int64_t x382 = INT64_MIN;
int16_t x387 = INT16_MIN;
volatile int32_t t76 = 875;
uint16_t x390 = 32532U;
int8_t x398 = 7;
static int8_t x402 = INT8_MIN;
int32_t x414 = -82659;
static volatile uint64_t t82 = 184440868142023LLU;
uint8_t x421 = 9U;
int64_t x422 = INT64_MIN;
static int64_t t85 = 1409844060295160LL;
int16_t x448 = 0;
volatile int32_t t89 = -5137;
int16_t x463 = -1;
static int32_t x470 = -235926;
int16_t x473 = INT16_MAX;
int8_t x486 = INT8_MIN;
static volatile int32_t t98 = 1626;


void f0(void) {
	static volatile int8_t x6 = INT8_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t0 = -55143575;

	t0 = (((x5+x6)==x7)-x8);

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	uint16_t x10 = 1451U;
	int8_t x11 = -15;
	uint8_t x12 = UINT8_MAX;

	t1 = (((x9+x10)==x11)-x12);

	if (t1 != -255) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	int8_t x14 = INT8_MIN;
	static int32_t x15 = INT32_MAX;
	static int64_t x16 = -9LL;

	t2 = (((x13+x14)==x15)-x16);

	if (t2 != 9LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -3;
	int8_t x18 = 3;
	uint16_t x19 = 24U;
	uint8_t x20 = UINT8_MAX;
	int32_t t3 = -441147;

	t3 = (((x17+x18)==x19)-x20);

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -2;
	int8_t x22 = -1;
	uint8_t x24 = 34U;
	volatile int32_t t4 = -4508157;

	t4 = (((x21+x22)==x23)-x24);

	if (t4 != -34) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 217U;
	static uint64_t x27 = 8485504310758169445LLU;
	int8_t x28 = INT8_MIN;
	int32_t t5 = -253706584;

	t5 = (((x25+x26)==x27)-x28);

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -919;
	static int8_t x30 = -7;
	static uint32_t x32 = 0U;
	uint32_t t6 = 60629477U;

	t6 = (((x29+x30)==x31)-x32);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	uint8_t x34 = 30U;
	uint16_t x35 = UINT16_MAX;
	static uint16_t x36 = UINT16_MAX;
	int32_t t7 = -612389390;

	t7 = (((x33+x34)==x35)-x36);

	if (t7 != -65535) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	static uint8_t x38 = 0U;
	int8_t x39 = -1;
	int8_t x40 = -1;

	t8 = (((x37+x38)==x39)-x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = 9417;
	static int32_t t9 = 276363843;

	t9 = (((x41+x42)==x43)-x44);

	if (t9 != -22) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x49 = 12LLU;
	int16_t x50 = 117;
	int8_t x51 = 58;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t10 = 7167140;

	t10 = (((x49+x50)==x51)-x52);

	if (t10 != -255) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x59 = 16;
	volatile int32_t x60 = 406812130;

	t11 = (((x57+x58)==x59)-x60);

	if (t11 != -406812130) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 2118U;
	static uint64_t x62 = 289726262073082LLU;
	static uint64_t x63 = 1225229195LLU;

	t12 = (((x61+x62)==x63)-x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x70 = INT64_MIN;
	int64_t x71 = 3624017543326LL;
	volatile uint16_t x72 = UINT16_MAX;
	static int32_t t13 = -53732421;

	t13 = (((x69+x70)==x71)-x72);

	if (t13 != -65535) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MIN;
	uint64_t x74 = 13849652047862039LLU;
	uint16_t x75 = 1U;
	uint16_t x76 = 773U;
	int32_t t14 = 113494;

	t14 = (((x73+x74)==x75)-x76);

	if (t14 != -773) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x81 = UINT64_MAX;
	static volatile int64_t x82 = -1033612620546LL;
	int64_t x84 = INT64_MAX;
	int64_t t15 = -79886845369LL;

	t15 = (((x81+x82)==x83)-x84);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = 27U;
	int32_t x86 = INT32_MIN;
	int32_t x88 = 72;
	volatile int32_t t16 = 7;

	t16 = (((x85+x86)==x87)-x88);

	if (t16 != -72) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x89 = 3907541;
	int8_t x90 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	uint32_t x92 = 164143U;

	t17 = (((x89+x90)==x91)-x92);

	if (t17 != 4294803153U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = UINT16_MAX;
	uint32_t x94 = 930776463U;
	int8_t x95 = 1;
	uint32_t x96 = 842973U;
	volatile uint32_t t18 = 35U;

	t18 = (((x93+x94)==x95)-x96);

	if (t18 != 4294124323U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MAX;
	int32_t x99 = INT32_MAX;
	int32_t x100 = -1;
	volatile int32_t t19 = 48348125;

	t19 = (((x97+x98)==x99)-x100);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	uint64_t x102 = 243618633416888239LLU;
	uint32_t x104 = 31276723U;

	t20 = (((x101+x102)==x103)-x104);

	if (t20 != 4263690573U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x106 = -1;
	static uint64_t x107 = UINT64_MAX;
	int16_t x108 = INT16_MIN;
	int32_t t21 = 824540;

	t21 = (((x105+x106)==x107)-x108);

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x109 = UINT16_MAX;
	volatile int16_t x110 = INT16_MIN;
	volatile int32_t x111 = -1;
	volatile uint8_t x112 = 1U;
	int32_t t22 = -84112;

	t22 = (((x109+x110)==x111)-x112);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = 16224161405035045LLU;
	uint16_t x114 = 24U;
	static int8_t x115 = -1;
	uint32_t x116 = UINT32_MAX;
	uint32_t t23 = 758758075U;

	t23 = (((x113+x114)==x115)-x116);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = 0;
	int8_t x128 = -4;
	volatile int32_t t24 = 134;

	t24 = (((x125+x126)==x127)-x128);

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x130 = -1;
	volatile int8_t x131 = 7;
	int32_t x132 = -2;
	volatile int32_t t25 = -979;

	t25 = (((x129+x130)==x131)-x132);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = 5;
	int16_t x136 = 1;
	static volatile int32_t t26 = 20582009;

	t26 = (((x133+x134)==x135)-x136);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x137 = 483732LL;
	int16_t x138 = -1;
	volatile uint64_t x140 = UINT64_MAX;
	uint64_t t27 = 193932675258247LLU;

	t27 = (((x137+x138)==x139)-x140);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x145 = UINT32_MAX;
	uint8_t x146 = 14U;
	volatile uint64_t x148 = 6LLU;
	static volatile uint64_t t28 = 2019001289LLU;

	t28 = (((x145+x146)==x147)-x148);

	if (t28 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x149 = UINT32_MAX;
	static uint16_t x150 = 341U;
	int32_t x151 = INT32_MIN;
	static int64_t x152 = -1LL;
	int64_t t29 = -1097LL;

	t29 = (((x149+x150)==x151)-x152);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MIN;
	static uint16_t x155 = UINT16_MAX;

	t30 = (((x153+x154)==x155)-x156);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x158 = 1U;
	int64_t x159 = -1LL;
	volatile int32_t t31 = 0;

	t31 = (((x157+x158)==x159)-x160);

	if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = 12528;
	int32_t x162 = INT32_MIN;
	int16_t x163 = INT16_MIN;
	uint64_t x164 = 48125185311148145LLU;
	volatile uint64_t t32 = 6630928839LLU;

	t32 = (((x161+x162)==x163)-x164);

	if (t32 != 18398618888398403471LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x173 = -46421352;
	volatile int32_t x174 = -13546612;
	volatile uint64_t x176 = 629LLU;

	t33 = (((x173+x174)==x175)-x176);

	if (t33 != 18446744073709550987LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x182 = -1;
	int8_t x183 = -1;
	static int32_t t34 = 4054;

	t34 = (((x181+x182)==x183)-x184);

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x185 = UINT64_MAX;
	uint16_t x186 = 1U;
	int16_t x187 = -1;
	static int32_t x188 = -712586;

	t35 = (((x185+x186)==x187)-x188);

	if (t35 != 712586) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x189 = 76U;
	int64_t x190 = INT64_MIN;
	static uint8_t x191 = 50U;
	uint64_t x192 = UINT64_MAX;

	t36 = (((x189+x190)==x191)-x192);

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = -719;
	uint32_t x202 = 1160U;
	volatile uint64_t x203 = UINT64_MAX;
	uint16_t x204 = 655U;
	volatile int32_t t37 = -1080;

	t37 = (((x201+x202)==x203)-x204);

	if (t37 != -655) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x205 = INT8_MIN;
	uint32_t x206 = UINT32_MAX;
	uint8_t x207 = 23U;
	int8_t x208 = -38;
	volatile int32_t t38 = 0;

	t38 = (((x205+x206)==x207)-x208);

	if (t38 != 38) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = -1;
	int16_t x212 = -1;

	t39 = (((x209+x210)==x211)-x212);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x217 = INT64_MIN;
	uint16_t x218 = 27877U;
	int16_t x220 = -5;

	t40 = (((x217+x218)==x219)-x220);

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = -1LL;
	int32_t x223 = -1;
	volatile uint32_t x224 = UINT32_MAX;

	t41 = (((x221+x222)==x223)-x224);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x225 = 0;
	int16_t x227 = 995;
	int32_t x228 = 351;
	int32_t t42 = 416;

	t42 = (((x225+x226)==x227)-x228);

	if (t42 != -351) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x229 = UINT64_MAX;
	volatile uint16_t x230 = 4712U;
	volatile int16_t x232 = 3000;
	int32_t t43 = 248292301;

	t43 = (((x229+x230)==x231)-x232);

	if (t43 != -3000) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x237 = INT64_MIN;
	int8_t x239 = -20;
	volatile uint8_t x240 = 36U;
	static volatile int32_t t44 = 58;

	t44 = (((x237+x238)==x239)-x240);

	if (t44 != -36) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x246 = -1;
	uint16_t x247 = UINT16_MAX;
	int32_t x248 = INT32_MAX;
	volatile int32_t t45 = -7563583;

	t45 = (((x245+x246)==x247)-x248);

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x249 = -1LL;
	volatile int8_t x251 = INT8_MAX;
	static int64_t t46 = 784051899486LL;

	t46 = (((x249+x250)==x251)-x252);

	if (t46 != 206LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x253 = 1;
	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MAX;

	t47 = (((x253+x254)==x255)-x256);

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x261 = INT8_MAX;
	static uint32_t x262 = 44609U;
	volatile int64_t x263 = INT64_MAX;
	static int32_t t48 = 62863;

	t48 = (((x261+x262)==x263)-x264);

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x265 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	static int8_t x268 = INT8_MIN;

	t49 = (((x265+x266)==x267)-x268);

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x272 = 114U;
	int32_t t50 = 247;

	t50 = (((x269+x270)==x271)-x272);

	if (t50 != -113) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x273 = 1U;
	int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;

	t51 = (((x273+x274)==x275)-x276);

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x277 = 7U;
	uint8_t x278 = 1U;
	int16_t x279 = -15211;
	int64_t x280 = -1LL;
	volatile int64_t t52 = -137102772LL;

	t52 = (((x277+x278)==x279)-x280);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x281 = -93LL;
	uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 9U;
	static int32_t t53 = 490582746;

	t53 = (((x281+x282)==x283)-x284);

	if (t53 != -9) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x285 = -5890701689LL;
	static int16_t x286 = INT16_MAX;
	static int32_t x288 = -16;
	volatile int32_t t54 = 43;

	t54 = (((x285+x286)==x287)-x288);

	if (t54 != 16) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x289 = INT8_MIN;
	volatile uint32_t x290 = 748572U;
	uint64_t x291 = UINT64_MAX;
	uint16_t x292 = 1701U;
	volatile int32_t t55 = 6;

	t55 = (((x289+x290)==x291)-x292);

	if (t55 != -1701) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x294 = 976U;
	int32_t x295 = -332;
	static int64_t x296 = -1194LL;
	volatile int64_t t56 = -30386846716867LL;

	t56 = (((x293+x294)==x295)-x296);

	if (t56 != 1194LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MIN;
	static int64_t x303 = INT64_MAX;
	int8_t x304 = -1;
	volatile int32_t t57 = 4716;

	t57 = (((x301+x302)==x303)-x304);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x305 = INT16_MIN;
	uint16_t x306 = 51U;
	static int16_t x307 = -11;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t58 = -3151159;

	t58 = (((x305+x306)==x307)-x308);

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x309 = INT32_MIN;
	static uint64_t x310 = 1126317199187LLU;
	volatile uint64_t x311 = 257278779862145614LLU;
	uint8_t x312 = 34U;
	static int32_t t59 = 988255;

	t59 = (((x309+x310)==x311)-x312);

	if (t59 != -34) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x313 = INT32_MIN;
	static uint64_t x314 = 22LLU;
	int64_t x315 = INT64_MIN;
	uint8_t x316 = 6U;
	volatile int32_t t60 = 8;

	t60 = (((x313+x314)==x315)-x316);

	if (t60 != -6) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x317 = INT32_MIN;
	uint16_t x318 = UINT16_MAX;
	static volatile uint64_t x319 = 504327231LLU;
	static int32_t x320 = 303;
	volatile int32_t t61 = 1;

	t61 = (((x317+x318)==x319)-x320);

	if (t61 != -303) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x322 = 117;
	int64_t x324 = INT64_MAX;

	t62 = (((x321+x322)==x323)-x324);

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x325 = -1;
	volatile int32_t x326 = INT32_MAX;
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MIN;

	t63 = (((x325+x326)==x327)-x328);

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x330 = UINT32_MAX;
	static int32_t x331 = -181677;
	volatile int32_t t64 = -526127573;

	t64 = (((x329+x330)==x331)-x332);

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x335 = -4;
	uint64_t t65 = 1514284LLU;

	t65 = (((x333+x334)==x335)-x336);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x337 = UINT8_MAX;
	int64_t x338 = INT64_MIN;
	static int16_t x339 = INT16_MIN;
	volatile int16_t x340 = -1;
	static volatile int32_t t66 = 199179065;

	t66 = (((x337+x338)==x339)-x340);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x341 = -24773;
	uint8_t x342 = 0U;
	volatile uint64_t t67 = 1LLU;

	t67 = (((x341+x342)==x343)-x344);

	if (t67 != 18446743697060578647LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = INT64_MAX;
	int32_t x346 = -295592462;
	int16_t x347 = INT16_MIN;
	volatile int64_t x348 = -1LL;
	int64_t t68 = -1629852088128769LL;

	t68 = (((x345+x346)==x347)-x348);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x349 = -5673;
	int32_t x350 = -1;
	volatile int32_t x351 = INT32_MIN;
	volatile uint8_t x352 = 28U;
	int32_t t69 = 3;

	t69 = (((x349+x350)==x351)-x352);

	if (t69 != -28) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x353 = 222431515882718163LLU;
	int32_t x354 = 724631057;
	int16_t x356 = -1;
	volatile int32_t t70 = 54720;

	t70 = (((x353+x354)==x355)-x356);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x362 = 1;
	volatile uint32_t t71 = 1533U;

	t71 = (((x361+x362)==x363)-x364);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x365 = INT8_MAX;
	volatile int8_t x366 = INT8_MIN;
	volatile int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MAX;
	volatile int32_t t72 = -902431;

	t72 = (((x365+x366)==x367)-x368);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x369 = 5U;
	static int16_t x370 = 3869;
	uint8_t x371 = UINT8_MAX;
	int8_t x372 = 11;
	static volatile int32_t t73 = -4431;

	t73 = (((x369+x370)==x371)-x372);

	if (t73 != -11) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = INT16_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t74 = 26737;

	t74 = (((x377+x378)==x379)-x380);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = 1;
	static int64_t x383 = -1LL;
	int8_t x384 = -27;
	volatile int32_t t75 = -3613;

	t75 = (((x381+x382)==x383)-x384);

	if (t75 != 27) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = INT16_MIN;
	static int8_t x386 = -1;
	volatile int16_t x388 = INT16_MAX;

	t76 = (((x385+x386)==x387)-x388);

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x389 = INT16_MIN;
	int16_t x391 = 24;
	uint64_t x392 = 924LLU;
	static uint64_t t77 = 748856LLU;

	t77 = (((x389+x390)==x391)-x392);

	if (t77 != 18446744073709550692LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x397 = 1358;
	uint8_t x399 = 49U;
	int64_t x400 = -176785840321223461LL;
	volatile int64_t t78 = 179581887LL;

	t78 = (((x397+x398)==x399)-x400);

	if (t78 != 176785840321223461LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x401 = INT8_MAX;
	int16_t x403 = -117;
	volatile int8_t x404 = INT8_MIN;
	int32_t t79 = -917068;

	t79 = (((x401+x402)==x403)-x404);

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x405 = UINT16_MAX;
	uint8_t x406 = 15U;
	int64_t x407 = INT64_MIN;
	volatile uint64_t x408 = 105827476185LLU;
	volatile uint64_t t80 = 461243LLU;

	t80 = (((x405+x406)==x407)-x408);

	if (t80 != 18446743967882075431LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x413 = 1186U;
	uint32_t x415 = 559168980U;
	int64_t x416 = -1058370641501095450LL;
	static volatile int64_t t81 = 135393999042712059LL;

	t81 = (((x413+x414)==x415)-x416);

	if (t81 != 1058370641501095450LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x417 = INT8_MIN;
	int16_t x418 = INT16_MAX;
	int64_t x419 = INT64_MIN;
	uint64_t x420 = UINT64_MAX;

	t82 = (((x417+x418)==x419)-x420);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x423 = UINT32_MAX;
	int64_t x424 = 939369LL;
	int64_t t83 = 11684586219LL;

	t83 = (((x421+x422)==x423)-x424);

	if (t83 != -939369LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x425 = UINT8_MAX;
	static uint32_t x426 = 61472U;
	int32_t x427 = -1;
	int32_t x428 = INT32_MAX;
	int32_t t84 = -378;

	t84 = (((x425+x426)==x427)-x428);

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x429 = UINT64_MAX;
	uint16_t x430 = 7U;
	int8_t x431 = -2;
	int64_t x432 = -186160128LL;

	t85 = (((x429+x430)==x431)-x432);

	if (t85 != 186160128LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x433 = INT8_MIN;
	int16_t x434 = 1;
	volatile int16_t x435 = -1;
	volatile uint16_t x436 = 130U;
	static volatile int32_t t86 = 1210;

	t86 = (((x433+x434)==x435)-x436);

	if (t86 != -130) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x437 = 5006329U;
	int32_t x438 = -35;
	uint32_t x439 = 0U;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t87 = -16017760;

	t87 = (((x437+x438)==x439)-x440);

	if (t87 != -255) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x441 = -1;
	int16_t x442 = INT16_MIN;
	int16_t x443 = -1;
	int32_t x444 = INT32_MAX;
	int32_t t88 = -12;

	t88 = (((x441+x442)==x443)-x444);

	if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x445 = 1;
	uint32_t x446 = UINT32_MAX;
	int16_t x447 = 14;

	t89 = (((x445+x446)==x447)-x448);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x449 = INT8_MAX;
	int64_t x450 = INT64_MIN;
	volatile int16_t x451 = -1811;
	static volatile uint16_t x452 = 135U;
	int32_t t90 = 26;

	t90 = (((x449+x450)==x451)-x452);

	if (t90 != -135) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x453 = 1428;
	int64_t x454 = INT64_MIN;
	int8_t x455 = -1;
	uint32_t x456 = UINT32_MAX;
	uint32_t t91 = 1292276009U;

	t91 = (((x453+x454)==x455)-x456);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x457 = 0;
	volatile uint16_t x458 = 67U;
	int8_t x459 = -1;
	int8_t x460 = 45;
	static volatile int32_t t92 = -33302968;

	t92 = (((x457+x458)==x459)-x460);

	if (t92 != -45) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x461 = UINT64_MAX;
	int16_t x462 = INT16_MAX;
	static int8_t x464 = INT8_MIN;
	volatile int32_t t93 = 23;

	t93 = (((x461+x462)==x463)-x464);

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x465 = UINT32_MAX;
	volatile int32_t x466 = -14485;
	static uint32_t x467 = UINT32_MAX;
	int64_t x468 = -1LL;
	static volatile int64_t t94 = -1053LL;

	t94 = (((x465+x466)==x467)-x468);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x469 = -562;
	uint16_t x471 = UINT16_MAX;
	int16_t x472 = INT16_MAX;
	volatile int32_t t95 = -804406600;

	t95 = (((x469+x470)==x471)-x472);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x474 = INT16_MIN;
	int8_t x475 = INT8_MIN;
	uint64_t x476 = 22533659LLU;
	static volatile uint64_t t96 = 1012269601LLU;

	t96 = (((x473+x474)==x475)-x476);

	if (t96 != 18446744073687017957LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x481 = -1;
	volatile int32_t x482 = 2060104;
	static uint16_t x483 = 0U;
	uint16_t x484 = 3U;
	static int32_t t97 = -6;

	t97 = (((x481+x482)==x483)-x484);

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x485 = UINT32_MAX;
	int64_t x487 = INT64_MAX;
	int8_t x488 = -1;

	t98 = (((x485+x486)==x487)-x488);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x489 = -9576634203340LL;
	volatile int16_t x490 = 52;
	int64_t x491 = -1LL;
	int8_t x492 = INT8_MIN;
	int32_t t99 = 1;

	t99 = (((x489+x490)==x491)-x492);

	if (t99 != 128) { NG(); } else { ; }
	
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

