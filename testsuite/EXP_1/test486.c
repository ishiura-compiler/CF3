#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x15 = 59910;
static volatile uint32_t x16 = UINT32_MAX;
uint64_t x23 = 165153LLU;
int32_t x31 = INT32_MIN;
volatile int32_t t5 = 48552;
uint32_t t6 = 15053U;
int16_t x41 = -1;
volatile int8_t x43 = 7;
volatile int64_t x55 = INT64_MAX;
volatile int16_t x56 = INT16_MIN;
volatile uint64_t t11 = 192461395283LLU;
uint8_t x73 = UINT8_MAX;
volatile int16_t x75 = INT16_MIN;
int32_t t13 = 103;
uint8_t x83 = 0U;
static int64_t t16 = 375166771LL;
int64_t x104 = -1LL;
uint64_t t19 = 1314332725925LLU;
static volatile uint64_t t20 = 762273649759923LLU;
volatile int16_t x116 = INT16_MIN;
int32_t t21 = 87807;
static uint64_t t24 = 548830073362LLU;
int16_t x157 = -1;
int8_t x177 = 9;
volatile int32_t t35 = -47413842;
uint64_t x197 = 1326451440383657LLU;
int16_t x200 = INT16_MIN;
int8_t x202 = INT8_MIN;
int8_t x206 = 0;
volatile int64_t t42 = 0LL;
volatile uint64_t x219 = UINT64_MAX;
static volatile uint64_t t43 = 1LLU;
int32_t x242 = -1;
static int16_t x244 = -1;
int16_t x247 = -62;
uint16_t x250 = 34U;
volatile int16_t x266 = INT16_MIN;
uint8_t x276 = 56U;
int64_t x285 = 1280LL;
int32_t x287 = INT32_MAX;
static int32_t x291 = INT32_MIN;
int32_t t56 = -3009;
uint8_t x297 = 0U;
static int32_t x301 = -1;
int32_t x303 = 1036224727;
static int32_t t58 = -53257;
static int32_t x311 = INT32_MIN;
int8_t x315 = -24;
volatile int32_t t61 = 240;
int64_t x323 = INT64_MAX;
static uint32_t x326 = UINT32_MAX;
uint32_t x336 = 347068U;
volatile uint64_t t66 = 465504778400802LLU;
volatile uint32_t x341 = 11U;
volatile int32_t t68 = 7;
static int64_t x355 = -1LL;
uint64_t x357 = UINT64_MAX;
static volatile int64_t x358 = INT64_MIN;
static volatile int8_t x370 = INT8_MIN;
volatile uint64_t t72 = 209696543LLU;
static uint64_t x381 = 222792546211787757LLU;
int32_t x382 = -1;
int8_t x394 = -3;
int32_t x395 = INT32_MAX;
volatile int64_t x400 = INT64_MIN;
static uint64_t x401 = 1302491105LLU;
int8_t x413 = INT8_MIN;
uint8_t x422 = 1U;
static int32_t x423 = INT32_MAX;
int64_t t83 = 12434LL;
int16_t x432 = INT16_MIN;
uint32_t t84 = 12U;
volatile uint64_t x449 = 5783216235LLU;
int32_t x450 = INT32_MIN;
static uint64_t x454 = UINT64_MAX;
volatile uint8_t x460 = UINT8_MAX;
uint8_t x471 = 20U;
static int8_t x475 = INT8_MAX;
uint64_t x476 = 2249920589182539LLU;
uint64_t t91 = 18374775843480LLU;
uint32_t x478 = 467U;
uint32_t t92 = 3665020U;
volatile uint64_t t93 = 4158756392521LLU;
int64_t t94 = 190727580787134LL;
uint8_t x503 = UINT8_MAX;
static volatile uint64_t t96 = 3035429093690467310LLU;
volatile uint64_t x508 = 3LLU;
static int16_t x516 = -294;


void f0(void) {
	volatile uint64_t x9 = UINT64_MAX;
	static uint16_t x10 = 0U;
	static volatile int8_t x11 = 0;
	int8_t x12 = INT8_MAX;
	static uint64_t t0 = 12LLU;

	t0 = (((x9*x10)|x11)%x12);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 43U;
	int16_t x14 = INT16_MIN;
	uint32_t t1 = 339759U;

	t1 = (((x13*x14)|x15)%x16);

	if (t1 != 4293585414U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x17 = 3654384U;
	uint8_t x18 = UINT8_MAX;
	volatile int16_t x19 = INT16_MIN;
	static int16_t x20 = -1;
	uint32_t t2 = 1U;

	t2 = (((x17*x18)|x19)%x20);

	if (t2 != 4294946064U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = -1;
	volatile uint8_t x22 = 6U;
	volatile int16_t x24 = 29;
	volatile uint64_t t3 = 5921LLU;

	t3 = (((x21*x22)|x23)%x24);

	if (t3 != 19LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x25 = 10U;
	int32_t x26 = 952;
	int64_t x27 = -5818600LL;
	static volatile uint64_t x28 = UINT64_MAX;
	volatile uint64_t t4 = 1LLU;

	t4 = (((x25*x26)|x27)%x28);

	if (t4 != 18446744073703733048LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	uint16_t x32 = 1U;

	t5 = (((x29*x30)|x31)%x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = UINT8_MAX;
	uint32_t x34 = 3U;
	int8_t x35 = -5;
	int8_t x36 = INT8_MIN;

	t6 = (((x33*x34)|x35)%x36);

	if (t6 != 127U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x42 = 16996191719813149LL;
	int32_t x44 = INT32_MIN;
	int64_t t7 = 1549511LL;

	t7 = (((x41*x42)|x43)%x44);

	if (t7 != -1107193881LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x53 = -1;
	uint16_t x54 = 859U;
	int64_t t8 = -259874527538165503LL;

	t8 = (((x53*x54)|x55)%x56);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x57 = -14;
	int8_t x58 = 1;
	static uint32_t x59 = 1152092036U;
	volatile uint16_t x60 = 2356U;
	volatile uint32_t t9 = 306281500U;

	t9 = (((x57*x58)|x59)%x60);

	if (t9 != 490U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = -1LL;
	static uint16_t x62 = 7U;
	int64_t x63 = INT64_MAX;
	int8_t x64 = INT8_MIN;
	int64_t t10 = 818727594LL;

	t10 = (((x61*x62)|x63)%x64);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = -1;
	uint64_t x70 = 66785585243204LLU;
	uint8_t x71 = 5U;
	static int64_t x72 = 4476773885500036LL;

	t11 = (((x69*x70)|x71)%x72);

	if (t11 != 2368879864160093LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x74 = 455;
	static int64_t x76 = INT64_MAX;
	int64_t t12 = -605607359LL;

	t12 = (((x73*x74)|x75)%x76);

	if (t12 != -15047LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = -48097;
	static uint16_t x78 = 218U;
	volatile int32_t x79 = 250;
	int32_t x80 = INT32_MIN;

	t13 = (((x77*x78)|x79)%x80);

	if (t13 != -10484994) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = -1LL;
	int32_t x82 = INT32_MAX;
	uint16_t x84 = 251U;
	int64_t t14 = -2620632LL;

	t14 = (((x81*x82)|x83)%x84);

	if (t14 != -186LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = 2U;
	uint32_t x86 = 117599202U;
	volatile int16_t x87 = -1;
	uint16_t x88 = UINT16_MAX;
	volatile uint32_t t15 = 547024873U;

	t15 = (((x85*x86)|x87)%x88);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x89 = 8LL;
	int16_t x90 = INT16_MIN;
	static uint32_t x91 = UINT32_MAX;
	static int32_t x92 = -1;

	t16 = (((x89*x90)|x91)%x92);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = -1;
	int32_t x94 = INT32_MAX;
	int32_t x95 = INT32_MIN;
	static volatile int32_t x96 = -1;
	volatile int32_t t17 = 15248;

	t17 = (((x93*x94)|x95)%x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x101 = INT8_MIN;
	uint8_t x102 = 72U;
	int32_t x103 = -1;
	volatile int64_t t18 = 24347816157896124LL;

	t18 = (((x101*x102)|x103)%x104);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x105 = UINT8_MAX;
	uint64_t x106 = UINT64_MAX;
	int8_t x107 = -27;
	volatile int64_t x108 = INT64_MIN;

	t19 = (((x105*x106)|x107)%x108);

	if (t19 != 9223372036854775781LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x109 = 87U;
	int64_t x110 = 58775442226382968LL;
	uint64_t x111 = 1977420437863815LLU;
	volatile int16_t x112 = INT16_MAX;

	t20 = (((x109*x110)|x111)%x112);

	if (t20 != 23855LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = INT8_MAX;
	static int16_t x114 = 152;
	int32_t x115 = INT32_MIN;

	t21 = (((x113*x114)|x115)%x116);

	if (t21 != -13464) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = -1;
	int16_t x120 = INT16_MIN;
	volatile uint32_t t22 = 80954U;

	t22 = (((x117*x118)|x119)%x120);

	if (t22 != 32767U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = 1;
	static int64_t x122 = INT64_MIN;
	static int32_t x123 = 20;
	uint32_t x124 = UINT32_MAX;
	int64_t t23 = 14400453012LL;

	t23 = (((x121*x122)|x123)%x124);

	if (t23 != -2147483628LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = -1;
	volatile int8_t x126 = 0;
	static uint64_t x127 = 1125631440931LLU;
	uint64_t x128 = 62209914435920595LLU;

	t24 = (((x125*x126)|x127)%x128);

	if (t24 != 1125631440931LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MIN;
	static int16_t x130 = INT16_MAX;
	static uint8_t x131 = 124U;
	volatile uint64_t x132 = 44LLU;
	static volatile uint64_t t25 = 3760245LLU;

	t25 = (((x129*x130)|x131)%x132);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x133 = INT8_MIN;
	volatile int8_t x134 = INT8_MIN;
	uint16_t x135 = 4U;
	uint8_t x136 = 5U;
	int32_t t26 = 2628;

	t26 = (((x133*x134)|x135)%x136);

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = 16417U;
	int32_t x138 = -1;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t27 = -590109119;

	t27 = (((x137*x138)|x139)%x140);

	if (t27 != -33) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = -1;
	static int64_t x142 = 87091052762241510LL;
	uint8_t x143 = 12U;
	int16_t x144 = 7881;
	int64_t t28 = -533064665969618857LL;

	t28 = (((x141*x142)|x143)%x144);

	if (t28 != -6068LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x145 = UINT8_MAX;
	uint8_t x146 = 108U;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = 16LLU;
	uint64_t t29 = 12651733205LLU;

	t29 = (((x145*x146)|x147)%x148);

	if (t29 != 4LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x149 = 5U;
	int32_t x150 = -1;
	static volatile int16_t x151 = -1;
	static int16_t x152 = -1;
	volatile int32_t t30 = -369093;

	t30 = (((x149*x150)|x151)%x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x153 = 249U;
	static volatile uint8_t x154 = UINT8_MAX;
	int64_t x155 = INT64_MIN;
	volatile int8_t x156 = INT8_MAX;
	volatile int64_t t31 = 131917429390588833LL;

	t31 = (((x153*x154)|x155)%x156);

	if (t31 != -6LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x158 = INT64_MAX;
	int64_t x159 = -314LL;
	int16_t x160 = INT16_MAX;
	volatile int64_t t32 = 98378683554737942LL;

	t32 = (((x157*x158)|x159)%x160);

	if (t32 != -313LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x161 = UINT64_MAX;
	int16_t x162 = INT16_MIN;
	static volatile int16_t x163 = -27;
	int16_t x164 = INT16_MIN;
	uint64_t t33 = 2005607LLU;

	t33 = (((x161*x162)|x163)%x164);

	if (t33 != 32741LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = 25U;
	uint16_t x174 = 14U;
	uint32_t x175 = UINT32_MAX;
	static int64_t x176 = INT64_MIN;
	volatile int64_t t34 = -2079262467685391LL;

	t34 = (((x173*x174)|x175)%x176);

	if (t34 != 4294967295LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x178 = 1;
	volatile uint8_t x179 = UINT8_MAX;
	int16_t x180 = INT16_MIN;

	t35 = (((x177*x178)|x179)%x180);

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x181 = 5944252040221342046LLU;
	uint16_t x182 = 14878U;
	int32_t x183 = 1637641;
	int16_t x184 = INT16_MIN;
	uint64_t t36 = 135240301172LLU;

	t36 = (((x181*x182)|x183)%x184);

	if (t36 != 4890765049538149645LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x185 = UINT8_MAX;
	volatile uint8_t x186 = 25U;
	int64_t x187 = INT64_MIN;
	int64_t x188 = -1LL;
	volatile int64_t t37 = -1743736LL;

	t37 = (((x185*x186)|x187)%x188);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = INT8_MIN;
	uint8_t x194 = UINT8_MAX;
	static uint16_t x195 = UINT16_MAX;
	int16_t x196 = -2;
	volatile int32_t t38 = -51114485;

	t38 = (((x193*x194)|x195)%x196);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x198 = 2241709086989459495LL;
	int64_t x199 = INT64_MAX;
	uint64_t t39 = 7853LLU;

	t39 = (((x197*x198)|x199)%x200);

	if (t39 != 32767LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x201 = 7U;
	uint16_t x203 = 59U;
	int64_t x204 = -85LL;
	int64_t t40 = 2513429379002659LL;

	t40 = (((x201*x202)|x203)%x204);

	if (t40 != -72LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x205 = -86;
	int32_t x207 = 517387783;
	static int16_t x208 = 1269;
	volatile int32_t t41 = 6214982;

	t41 = (((x205*x206)|x207)%x208);

	if (t41 != 1255) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x209 = -1LL;
	volatile int32_t x210 = INT32_MAX;
	int32_t x211 = INT32_MIN;
	int16_t x212 = -1;

	t42 = (((x209*x210)|x211)%x212);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x217 = 0;
	static uint32_t x218 = UINT32_MAX;
	uint32_t x220 = 4808U;

	t43 = (((x217*x218)|x219)%x220);

	if (t43 != 1959LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MAX;
	static int64_t t44 = 96493227244621LL;

	t44 = (((x233*x234)|x235)%x236);

	if (t44 != -32647LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x241 = 22U;
	volatile int64_t x243 = -1LL;
	int64_t t45 = -1LL;

	t45 = (((x241*x242)|x243)%x244);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x245 = 3292165U;
	int8_t x246 = INT8_MIN;
	int8_t x248 = INT8_MIN;
	volatile uint32_t t46 = 2443483U;

	t46 = (((x245*x246)|x247)%x248);

	if (t46 != 66U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x249 = UINT8_MAX;
	int64_t x251 = -1LL;
	uint64_t x252 = 3LLU;
	uint64_t t47 = 524301LLU;

	t47 = (((x249*x250)|x251)%x252);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x261 = -1;
	static uint64_t x262 = 668596411876226281LLU;
	int8_t x263 = -1;
	uint8_t x264 = 3U;
	static volatile uint64_t t48 = 627587309094952LLU;

	t48 = (((x261*x262)|x263)%x264);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x265 = 0U;
	volatile int16_t x267 = INT16_MIN;
	volatile int8_t x268 = INT8_MAX;
	uint32_t t49 = 393694748U;

	t49 = (((x265*x266)|x267)%x268);

	if (t49 != 14U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x269 = 3U;
	int16_t x270 = -1;
	int64_t x271 = -1LL;
	int16_t x272 = INT16_MAX;
	volatile int64_t t50 = -1LL;

	t50 = (((x269*x270)|x271)%x272);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x273 = INT8_MIN;
	int32_t x274 = -1;
	uint64_t x275 = UINT64_MAX;
	static volatile uint64_t t51 = 3LLU;

	t51 = (((x273*x274)|x275)%x276);

	if (t51 != 15LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x277 = 2014U;
	int8_t x278 = -1;
	int8_t x279 = INT8_MAX;
	static int8_t x280 = INT8_MAX;
	volatile uint32_t t52 = 655U;

	t52 = (((x277*x278)|x279)%x280);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = -1;
	static volatile int16_t x282 = INT16_MAX;
	static int8_t x283 = 1;
	int16_t x284 = INT16_MIN;
	int32_t t53 = -2636;

	t53 = (((x281*x282)|x283)%x284);

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x286 = 3U;
	uint8_t x288 = UINT8_MAX;
	int64_t t54 = 7633701994912599LL;

	t54 = (((x285*x286)|x287)%x288);

	if (t54 != 127LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x289 = -1LL;
	int8_t x290 = -1;
	int16_t x292 = -1;
	int64_t t55 = 136631631595289LL;

	t55 = (((x289*x290)|x291)%x292);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x293 = 30;
	int16_t x294 = 1214;
	volatile int16_t x295 = -1;
	int32_t x296 = INT32_MIN;

	t56 = (((x293*x294)|x295)%x296);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x298 = INT16_MIN;
	uint32_t x299 = 1833712U;
	int32_t x300 = -1;
	uint32_t t57 = 5249U;

	t57 = (((x297*x298)|x299)%x300);

	if (t57 != 1833712U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x302 = 6;
	static int16_t x304 = INT16_MAX;

	t58 = (((x301*x302)|x303)%x304);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x305 = 2LLU;
	static uint16_t x306 = UINT16_MAX;
	uint64_t x307 = 455848LLU;
	int32_t x308 = INT32_MAX;
	uint64_t t59 = 3977738668121209861LLU;

	t59 = (((x305*x306)|x307)%x308);

	if (t59 != 524286LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x309 = 1203;
	volatile int64_t x310 = -1LL;
	uint64_t x312 = 3046844LLU;
	uint64_t t60 = 42040755113844695LLU;

	t60 = (((x309*x310)|x311)%x312);

	if (t60 != 402453LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x313 = -1;
	int16_t x314 = INT16_MAX;
	int16_t x316 = 902;

	t61 = (((x313*x314)|x315)%x316);

	if (t61 != -23) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x317 = -1;
	int32_t x318 = 498290049;
	int32_t x319 = -1;
	int64_t x320 = -1LL;
	int64_t t62 = -1835950656665247217LL;

	t62 = (((x317*x318)|x319)%x320);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x321 = -95;
	static int16_t x322 = INT16_MIN;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t63 = INT64_MAX;

	t63 = (((x321*x322)|x323)%x324);

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x325 = -1;
	int32_t x327 = INT32_MIN;
	uint32_t x328 = 24543352U;
	volatile uint32_t t64 = 13U;

	t64 = (((x325*x326)|x327)%x328);

	if (t64 != 12212025U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x329 = INT16_MAX;
	uint8_t x330 = 1U;
	int64_t x331 = 94942059140709451LL;
	uint8_t x332 = UINT8_MAX;
	volatile int64_t t65 = -8259844674LL;

	t65 = (((x329*x330)|x331)%x332);

	if (t65 != 124LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x333 = 1;
	uint64_t x334 = 1472798LLU;
	int32_t x335 = INT32_MAX;

	t66 = (((x333*x334)|x335)%x336);

	if (t66 != 173931LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x342 = 15U;
	uint64_t x343 = 2LLU;
	int16_t x344 = 2927;
	uint64_t t67 = 1948840122994443609LLU;

	t67 = (((x341*x342)|x343)%x344);

	if (t67 != 167LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x345 = -1;
	volatile int8_t x346 = INT8_MIN;
	volatile int16_t x347 = -1;
	static volatile int8_t x348 = 56;

	t68 = (((x345*x346)|x347)%x348);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x353 = 0U;
	static int32_t x354 = -7286;
	int16_t x356 = INT16_MIN;
	volatile int64_t t69 = 93880786757638642LL;

	t69 = (((x353*x354)|x355)%x356);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x359 = INT16_MAX;
	int32_t x360 = 4527;
	uint64_t t70 = 5331306LLU;

	t70 = (((x357*x358)|x359)%x360);

	if (t70 != 4038LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x361 = UINT8_MAX;
	int16_t x362 = 2866;
	int16_t x363 = 7145;
	uint8_t x364 = 93U;
	static int32_t t71 = -19;

	t71 = (((x361*x362)|x363)%x364);

	if (t71 != 52) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int32_t x371 = -1;
	static int32_t x372 = INT32_MIN;

	t72 = (((x369*x370)|x371)%x372);

	if (t72 != 2147483647LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x373 = INT16_MAX;
	static uint64_t x374 = UINT64_MAX;
	volatile int16_t x375 = -1;
	int64_t x376 = INT64_MAX;
	uint64_t t73 = 7849307069LLU;

	t73 = (((x373*x374)|x375)%x376);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x377 = UINT8_MAX;
	volatile int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MAX;
	static volatile int32_t t74 = 3873;

	t74 = (((x377*x378)|x379)%x380);

	if (t74 != -32640) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x383 = 5;
	volatile uint8_t x384 = 54U;
	uint64_t t75 = 5253818797546826LLU;

	t75 = (((x381*x382)|x383)%x384);

	if (t75 != 35LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x389 = -1;
	uint16_t x390 = 752U;
	volatile int8_t x391 = INT8_MAX;
	int16_t x392 = INT16_MAX;
	int32_t t76 = -7804347;

	t76 = (((x389*x390)|x391)%x392);

	if (t76 != -641) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x393 = -1;
	uint64_t x396 = 3942895344724LLU;
	volatile uint64_t t77 = 83295049LLU;

	t77 = (((x393*x394)|x395)%x396);

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x397 = 2U;
	int8_t x398 = -1;
	int64_t x399 = 1067362050LL;
	volatile int64_t t78 = -14877609415282712LL;

	t78 = (((x397*x398)|x399)%x400);

	if (t78 != -2LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x402 = INT32_MAX;
	static int8_t x403 = INT8_MIN;
	int32_t x404 = 1310;
	uint64_t t79 = 4LLU;

	t79 = (((x401*x402)|x403)%x404);

	if (t79 != 99LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x405 = 0;
	uint64_t x406 = 889278839LLU;
	int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	uint64_t t80 = 42157646LLU;

	t80 = (((x405*x406)|x407)%x408);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x414 = 9U;
	int32_t x415 = -364542;
	int32_t x416 = INT32_MIN;
	volatile int32_t t81 = 98399749;

	t81 = (((x413*x414)|x415)%x416);

	if (t81 != -1150) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x421 = -1;
	uint16_t x424 = 1U;
	int32_t t82 = -1796;

	t82 = (((x421*x422)|x423)%x424);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x425 = -1;
	uint32_t x426 = 1200730819U;
	static int64_t x427 = INT64_MIN;
	volatile int32_t x428 = -320002530;

	t83 = (((x425*x426)|x427)%x428);

	if (t83 != -51935081LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x429 = 16326U;
	static volatile uint8_t x430 = 72U;
	uint16_t x431 = 6U;

	t84 = (((x429*x430)|x431)%x432);

	if (t84 != 1175478U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x445 = 757096LLU;
	static int8_t x446 = -1;
	int64_t x447 = INT64_MIN;
	static int32_t x448 = INT32_MAX;
	volatile uint64_t t85 = 157954476178647LLU;

	t85 = (((x445*x446)|x447)%x448);

	if (t85 != 2146726555LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x451 = -1;
	static int64_t x452 = 12593LL;
	uint64_t t86 = 1LLU;

	t86 = (((x449*x450)|x451)%x452);

	if (t86 != 11565LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x453 = INT8_MIN;
	static uint32_t x455 = 0U;
	uint32_t x456 = 355717U;
	uint64_t t87 = 2151976162647LLU;

	t87 = (((x453*x454)|x455)%x456);

	if (t87 != 128LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x457 = 22989174967308582LL;
	uint64_t x458 = 4866LLU;
	int16_t x459 = INT16_MIN;
	uint64_t t88 = 6052863178017LLU;

	t88 = (((x457*x458)|x459)%x460);

	if (t88 != 65LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x465 = INT16_MIN;
	static uint16_t x466 = 12U;
	int16_t x467 = INT16_MIN;
	int32_t x468 = -492;
	static volatile int32_t t89 = 31758;

	t89 = (((x465*x466)|x467)%x468);

	if (t89 != -296) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x469 = -1;
	uint64_t x470 = 32914143LLU;
	int8_t x472 = -33;
	volatile uint64_t t90 = 92549113439931LLU;

	t90 = (((x469*x470)|x471)%x472);

	if (t90 != 18446744073676637493LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x473 = 3U;
	static uint32_t x474 = 6U;

	t91 = (((x473*x474)|x475)%x476);

	if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x477 = 872U;
	volatile int8_t x479 = INT8_MIN;
	static uint8_t x480 = 1U;

	t92 = (((x477*x478)|x479)%x480);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x481 = 3U;
	volatile int8_t x482 = -7;
	volatile uint8_t x483 = 22U;
	volatile uint64_t x484 = 187098233029LLU;

	t93 = (((x481*x482)|x483)%x484);

	if (t93 != 157566327602LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x485 = 488786153LL;
	int16_t x486 = -1;
	int16_t x487 = -1;
	int64_t x488 = INT64_MAX;

	t94 = (((x485*x486)|x487)%x488);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x497 = INT8_MAX;
	int8_t x498 = INT8_MIN;
	int16_t x499 = -474;
	int64_t x500 = -1LL;
	volatile int64_t t95 = 602309581LL;

	t95 = (((x497*x498)|x499)%x500);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x501 = INT32_MIN;
	volatile uint64_t x502 = UINT64_MAX;
	uint16_t x504 = 1U;

	t96 = (((x501*x502)|x503)%x504);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x505 = UINT16_MAX;
	int16_t x506 = INT16_MAX;
	uint32_t x507 = 151U;
	uint64_t t97 = 5225557259LLU;

	t97 = (((x505*x506)|x507)%x508);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x509 = -1110646464LL;
	int32_t x510 = INT32_MIN;
	int64_t x511 = INT64_MAX;
	int8_t x512 = INT8_MIN;
	volatile int64_t t98 = 25585913643493987LL;

	t98 = (((x509*x510)|x511)%x512);

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x513 = -29;
	int16_t x514 = INT16_MAX;
	int8_t x515 = INT8_MIN;
	volatile int32_t t99 = 91;

	t99 = (((x513*x514)|x515)%x516);

	if (t99 != -99) { NG(); } else { ; }
	
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

