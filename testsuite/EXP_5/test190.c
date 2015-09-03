#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 584807;
volatile int64_t x13 = INT64_MAX;
int8_t x15 = 0;
volatile int32_t t3 = 180081;
volatile uint16_t x22 = 435U;
volatile int16_t x23 = 705;
uint32_t x29 = 7977U;
uint32_t x30 = UINT32_MAX;
uint32_t x31 = 31162081U;
int32_t t6 = -235641;
int64_t x49 = -1LL;
volatile int8_t x54 = INT8_MIN;
int8_t x61 = -1;
int32_t t12 = -14164;
volatile int64_t x84 = INT64_MIN;
int32_t x94 = -1;
int32_t x100 = INT32_MIN;
int64_t x102 = -1LL;
volatile uint16_t x138 = 9U;
int32_t x139 = 421257749;
volatile int16_t x147 = INT16_MIN;
static uint8_t x148 = 110U;
int16_t x158 = INT16_MIN;
int16_t x160 = -1;
static volatile int8_t x162 = INT8_MIN;
int16_t x163 = INT16_MIN;
static uint32_t x164 = UINT32_MAX;
volatile int32_t x167 = -1;
static int64_t x168 = -1LL;
int64_t x171 = -623214LL;
int8_t x174 = INT8_MIN;
uint8_t x183 = 51U;
static volatile int32_t t30 = 4018;
volatile uint8_t x189 = 50U;
volatile uint32_t x205 = 5U;
volatile int32_t x207 = -1;
static volatile int8_t x226 = INT8_MIN;
static int8_t x227 = 6;
volatile uint64_t x231 = 51298204LLU;
int32_t x240 = -1;
static volatile int32_t t41 = 9;
volatile uint16_t x260 = 31845U;
int8_t x267 = INT8_MIN;
int32_t t45 = -168946816;
uint16_t x271 = 14U;
int32_t x273 = INT32_MAX;
uint32_t x276 = 6655187U;
volatile int32_t t47 = -30414;
int16_t x280 = -1;
static int8_t x295 = INT8_MIN;
uint16_t x308 = 119U;
int16_t x310 = -13924;
int16_t x311 = 1436;
int32_t t54 = -32317;
static int16_t x313 = -1;
int16_t x326 = INT16_MAX;
static int32_t x337 = 41;
static int32_t x339 = INT32_MIN;
static volatile int16_t x340 = 394;
uint32_t x358 = 209440163U;
int16_t x373 = -1;
int16_t x376 = -1;
static volatile int32_t t65 = -655617912;
volatile int16_t x378 = INT16_MIN;
volatile int32_t x380 = INT32_MIN;
int32_t t67 = -86;
int64_t x390 = -1LL;
volatile int32_t t68 = 5510185;
static volatile int8_t x394 = INT8_MAX;
int32_t t69 = 0;
volatile uint32_t x399 = UINT32_MAX;
uint16_t x403 = 3U;
volatile int32_t t71 = -356383;
uint8_t x405 = 13U;
int16_t x415 = INT16_MAX;
static int16_t x423 = INT16_MAX;
volatile int32_t t76 = 70347405;
int32_t x428 = INT32_MIN;
static uint64_t x447 = 6234394019598LLU;
volatile int32_t t81 = 1762;
uint8_t x459 = UINT8_MAX;
int32_t t85 = -2556756;
int64_t x468 = 6341680LL;
static volatile uint64_t x471 = 1074251842LLU;
int16_t x477 = INT16_MIN;
int64_t x486 = 37575088592LL;
int32_t x498 = -322105119;
int16_t x503 = -1337;
static uint32_t x516 = 907U;
int8_t x519 = INT8_MIN;
int32_t x521 = INT32_MIN;
volatile int32_t t98 = 45641;
static int32_t x529 = 4508;
int64_t x530 = 53877467228064LL;
int8_t x532 = -1;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int32_t x2 = 12;
	int8_t x3 = -1;
	int16_t x4 = -2034;
	volatile int32_t t0 = 31;

	t0 = (x1==((x2-x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2200U;
	static int8_t x6 = INT8_MIN;
	int32_t x7 = -1334430;
	int32_t x8 = -1;

	t1 = (x5==((x6-x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = -1;
	int64_t x16 = INT64_MIN;
	int32_t t2 = -3515;

	t2 = (x13==((x14-x15)-x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x17 = INT16_MIN;
	int16_t x18 = -26;
	static uint8_t x19 = 6U;
	volatile uint8_t x20 = UINT8_MAX;

	t3 = (x17==((x18-x19)-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 104U;
	volatile int32_t x24 = -1;
	int32_t t4 = -1;

	t4 = (x21==((x22-x23)-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x25 = UINT8_MAX;
	static uint64_t x26 = 525319358LLU;
	static uint8_t x27 = 22U;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t5 = 796445;

	t5 = (x25==((x26-x27)-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x32 = UINT32_MAX;

	t6 = (x29==((x30-x31)-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	uint8_t x34 = UINT8_MAX;
	static volatile int8_t x35 = INT8_MAX;
	int16_t x36 = -1;
	static volatile int32_t t7 = 617063;

	t7 = (x33==((x34-x35)-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	uint64_t x38 = 384493043993041054LLU;
	volatile uint8_t x39 = 7U;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t8 = 330423;

	t8 = (x37==((x38-x39)-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = INT64_MAX;
	int16_t x46 = INT16_MAX;
	int32_t x47 = 0;
	uint8_t x48 = 5U;
	static int32_t t9 = 214;

	t9 = (x45==((x46-x47)-x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x50 = INT16_MIN;
	int64_t x51 = -95010454491LL;
	int32_t x52 = INT32_MAX;
	int32_t t10 = -36;

	t10 = (x49==((x50-x51)-x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = UINT8_MAX;
	int16_t x55 = -1678;
	int8_t x56 = INT8_MIN;
	int32_t t11 = -1216;

	t11 = (x53==((x54-x55)-x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = INT16_MAX;
	int8_t x63 = INT8_MAX;
	static volatile int16_t x64 = INT16_MAX;

	t12 = (x61==((x62-x63)-x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = 96U;
	uint8_t x74 = 95U;
	uint32_t x75 = UINT32_MAX;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t13 = -4322240;

	t13 = (x73==((x74-x75)-x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x81 = INT32_MIN;
	volatile int32_t x82 = -1;
	uint8_t x83 = 2U;
	static volatile int32_t t14 = 375266;

	t14 = (x81==((x82-x83)-x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x93 = -1;
	int32_t x95 = -1;
	volatile int8_t x96 = -3;
	volatile int32_t t15 = -1033398;

	t15 = (x93==((x94-x95)-x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = -8506335;
	int8_t x98 = INT8_MAX;
	static uint32_t x99 = 523764044U;
	int32_t t16 = -52;

	t16 = (x97==((x98-x99)-x100));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = 1960;
	int32_t x103 = -234081;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t17 = -1;

	t17 = (x101==((x102-x103)-x104));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x117 = 24042451LL;
	int64_t x118 = 19187644282931359LL;
	uint64_t x119 = 6LLU;
	static volatile int16_t x120 = -1;
	volatile int32_t t18 = -178355;

	t18 = (x117==((x118-x119)-x120));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = -1;
	uint8_t x127 = UINT8_MAX;
	uint32_t x128 = 1363U;
	static int32_t t19 = -3400343;

	t19 = (x125==((x126-x127)-x128));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x133 = 2050764319537804962LL;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = 2756710668LLU;
	volatile uint16_t x136 = 14U;
	volatile int32_t t20 = -108;

	t20 = (x133==((x134-x135)-x136));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x137 = -1971;
	uint16_t x140 = UINT16_MAX;
	static int32_t t21 = -151;

	t21 = (x137==((x138-x139)-x140));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x145 = INT32_MAX;
	uint32_t x146 = 143148U;
	int32_t t22 = -1;

	t22 = (x145==((x146-x147)-x148));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x153 = -1;
	uint16_t x154 = 8U;
	uint8_t x155 = 93U;
	int8_t x156 = INT8_MIN;
	static volatile int32_t t23 = 7555792;

	t23 = (x153==((x154-x155)-x156));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x157 = UINT8_MAX;
	int32_t x159 = 4941;
	int32_t t24 = -5642008;

	t24 = (x157==((x158-x159)-x160));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x161 = -1;
	static int32_t t25 = -473;

	t25 = (x161==((x162-x163)-x164));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x165 = UINT32_MAX;
	uint16_t x166 = 15U;
	volatile int32_t t26 = -2730244;

	t26 = (x165==((x166-x167)-x168));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x169 = INT64_MIN;
	int16_t x170 = -319;
	uint8_t x172 = 104U;
	int32_t t27 = -935199040;

	t27 = (x169==((x170-x171)-x172));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x173 = 457118500146LLU;
	volatile uint8_t x175 = 13U;
	int8_t x176 = INT8_MAX;
	volatile int32_t t28 = -213188388;

	t28 = (x173==((x174-x175)-x176));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x181 = 1674U;
	volatile int32_t x182 = -13336;
	int8_t x184 = -60;
	volatile int32_t t29 = 1747;

	t29 = (x181==((x182-x183)-x184));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x185 = 11U;
	int32_t x186 = 9371;
	static int8_t x187 = INT8_MAX;
	volatile int32_t x188 = 1014;

	t30 = (x185==((x186-x187)-x188));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x190 = 2592U;
	uint8_t x191 = 10U;
	uint64_t x192 = 1LLU;
	int32_t t31 = -1;

	t31 = (x189==((x190-x191)-x192));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x197 = INT16_MIN;
	volatile int64_t x198 = INT64_MIN;
	int64_t x199 = -134812616LL;
	uint8_t x200 = UINT8_MAX;
	int32_t t32 = -15574971;

	t32 = (x197==((x198-x199)-x200));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x206 = INT8_MIN;
	volatile int16_t x208 = -1;
	volatile int32_t t33 = -9645;

	t33 = (x205==((x206-x207)-x208));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x213 = 89263U;
	int32_t x214 = INT32_MIN;
	static volatile int8_t x215 = -1;
	uint64_t x216 = UINT64_MAX;
	int32_t t34 = -3834776;

	t34 = (x213==((x214-x215)-x216));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x217 = INT16_MIN;
	static int64_t x218 = INT64_MIN;
	volatile int32_t x219 = INT32_MIN;
	uint64_t x220 = 0LLU;
	volatile int32_t t35 = 14;

	t35 = (x217==((x218-x219)-x220));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x225 = INT64_MAX;
	int16_t x228 = INT16_MIN;
	volatile int32_t t36 = -821487;

	t36 = (x225==((x226-x227)-x228));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x229 = 79687148LLU;
	uint8_t x230 = UINT8_MAX;
	int32_t x232 = INT32_MAX;
	int32_t t37 = 0;

	t37 = (x229==((x230-x231)-x232));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x233 = 3983LLU;
	volatile int16_t x234 = INT16_MAX;
	int32_t x235 = -7221042;
	volatile uint16_t x236 = 5034U;
	static volatile int32_t t38 = -669915;

	t38 = (x233==((x234-x235)-x236));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x237 = 0;
	volatile uint64_t x238 = UINT64_MAX;
	volatile int32_t x239 = -1;
	int32_t t39 = 36718;

	t39 = (x237==((x238-x239)-x240));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x241 = INT16_MAX;
	int32_t x242 = -1;
	volatile int32_t x243 = 0;
	static int32_t x244 = INT32_MIN;
	static int32_t t40 = 1362572;

	t40 = (x241==((x242-x243)-x244));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x245 = 1;
	int64_t x246 = -1LL;
	volatile int64_t x247 = -8LL;
	int32_t x248 = INT32_MIN;

	t41 = (x245==((x246-x247)-x248));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x249 = UINT8_MAX;
	int32_t x250 = 141;
	int8_t x251 = INT8_MIN;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t42 = -6643;

	t42 = (x249==((x250-x251)-x252));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x257 = UINT32_MAX;
	int32_t x258 = -1;
	static uint16_t x259 = UINT16_MAX;
	volatile int32_t t43 = -127111748;

	t43 = (x257==((x258-x259)-x260));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x261 = INT64_MIN;
	uint64_t x262 = UINT64_MAX;
	volatile uint32_t x263 = 2704U;
	static uint64_t x264 = 9045355311798LLU;
	volatile int32_t t44 = 885721376;

	t44 = (x261==((x262-x263)-x264));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x265 = -2117918368LL;
	int32_t x266 = INT32_MIN;
	volatile int16_t x268 = INT16_MIN;

	t45 = (x265==((x266-x267)-x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x269 = UINT16_MAX;
	static volatile int32_t x270 = INT32_MAX;
	static int8_t x272 = -1;
	static int32_t t46 = 238326;

	t46 = (x269==((x270-x271)-x272));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x274 = 31;
	int8_t x275 = -23;

	t47 = (x273==((x274-x275)-x276));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x277 = -1LL;
	int32_t x278 = -155;
	int32_t x279 = -232014220;
	static volatile int32_t t48 = 0;

	t48 = (x277==((x278-x279)-x280));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x281 = UINT8_MAX;
	int64_t x282 = 345889939264597LL;
	static uint32_t x283 = 205U;
	int8_t x284 = INT8_MIN;
	int32_t t49 = -45610;

	t49 = (x281==((x282-x283)-x284));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x289 = 11455;
	int8_t x290 = -1;
	uint8_t x291 = 3U;
	volatile int16_t x292 = INT16_MIN;
	static volatile int32_t t50 = 379855;

	t50 = (x289==((x290-x291)-x292));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x293 = 1U;
	static volatile uint8_t x294 = 63U;
	static int8_t x296 = -1;
	int32_t t51 = 0;

	t51 = (x293==((x294-x295)-x296));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x297 = 0U;
	int32_t x298 = INT32_MAX;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t52 = 24;

	t52 = (x297==((x298-x299)-x300));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x305 = -1LL;
	static uint8_t x306 = UINT8_MAX;
	uint8_t x307 = 9U;
	static volatile int32_t t53 = 1;

	t53 = (x305==((x306-x307)-x308));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x309 = INT64_MAX;
	static int32_t x312 = -1;

	t54 = (x309==((x310-x311)-x312));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x314 = -1;
	int8_t x315 = INT8_MIN;
	static int8_t x316 = -1;
	int32_t t55 = 106052;

	t55 = (x313==((x314-x315)-x316));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x321 = INT64_MIN;
	uint32_t x322 = UINT32_MAX;
	volatile int32_t x323 = 44;
	volatile uint8_t x324 = 91U;
	int32_t t56 = 18480;

	t56 = (x321==((x322-x323)-x324));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x325 = 869U;
	volatile int16_t x327 = -1;
	static int16_t x328 = -1;
	volatile int32_t t57 = -24170;

	t57 = (x325==((x326-x327)-x328));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x338 = 1LLU;
	volatile int32_t t58 = -207;

	t58 = (x337==((x338-x339)-x340));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x341 = INT64_MIN;
	uint64_t x342 = 40762LLU;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = 45U;
	volatile int32_t t59 = 0;

	t59 = (x341==((x342-x343)-x344));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x345 = 3U;
	volatile uint32_t x346 = UINT32_MAX;
	static uint32_t x347 = 10159548U;
	int8_t x348 = -27;
	int32_t t60 = 0;

	t60 = (x345==((x346-x347)-x348));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x349 = 34581653U;
	uint64_t x350 = 274117669293LLU;
	int8_t x351 = -31;
	volatile int16_t x352 = -1;
	volatile int32_t t61 = -321;

	t61 = (x349==((x350-x351)-x352));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x353 = INT32_MIN;
	static uint8_t x354 = UINT8_MAX;
	uint16_t x355 = 335U;
	int16_t x356 = -1;
	int32_t t62 = -7;

	t62 = (x353==((x354-x355)-x356));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x357 = -3;
	int32_t x359 = -1;
	uint8_t x360 = 3U;
	int32_t t63 = 506282;

	t63 = (x357==((x358-x359)-x360));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = -1;
	int8_t x367 = -4;
	static int16_t x368 = -1;
	int32_t t64 = -200;

	t64 = (x365==((x366-x367)-x368));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x374 = INT8_MIN;
	int32_t x375 = -931118527;

	t65 = (x373==((x374-x375)-x376));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x377 = UINT64_MAX;
	volatile uint16_t x379 = 185U;
	volatile int32_t t66 = -58903;

	t66 = (x377==((x378-x379)-x380));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x381 = INT64_MAX;
	static int16_t x382 = -1;
	int8_t x383 = -14;
	volatile uint16_t x384 = UINT16_MAX;

	t67 = (x381==((x382-x383)-x384));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x389 = 11315953045347LL;
	static int16_t x391 = INT16_MIN;
	static volatile uint16_t x392 = UINT16_MAX;

	t68 = (x389==((x390-x391)-x392));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x393 = 13;
	static int64_t x395 = INT64_MAX;
	int16_t x396 = -1;

	t69 = (x393==((x394-x395)-x396));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x397 = INT8_MAX;
	int32_t x398 = -298503;
	int16_t x400 = -9205;
	volatile int32_t t70 = 166;

	t70 = (x397==((x398-x399)-x400));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x401 = INT8_MAX;
	volatile uint16_t x402 = 1U;
	int8_t x404 = INT8_MIN;

	t71 = (x401==((x402-x403)-x404));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x406 = -1LL;
	static int16_t x407 = INT16_MIN;
	static int8_t x408 = 2;
	int32_t t72 = -2;

	t72 = (x405==((x406-x407)-x408));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x409 = -17506136893419564LL;
	volatile int16_t x410 = 290;
	volatile int16_t x411 = INT16_MIN;
	int8_t x412 = -1;
	int32_t t73 = 392;

	t73 = (x409==((x410-x411)-x412));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x413 = INT32_MIN;
	uint32_t x414 = 30U;
	static volatile int32_t x416 = -1;
	volatile int32_t t74 = -457;

	t74 = (x413==((x414-x415)-x416));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x417 = INT8_MAX;
	int8_t x418 = INT8_MIN;
	uint8_t x419 = UINT8_MAX;
	int8_t x420 = INT8_MIN;
	static int32_t t75 = 72549;

	t75 = (x417==((x418-x419)-x420));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x421 = -53;
	int16_t x422 = 7;
	static int16_t x424 = INT16_MIN;

	t76 = (x421==((x422-x423)-x424));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x425 = 191U;
	int64_t x426 = 466LL;
	int16_t x427 = INT16_MAX;
	volatile int32_t t77 = -61346;

	t77 = (x425==((x426-x427)-x428));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x429 = 12U;
	int16_t x430 = -1;
	static uint64_t x431 = UINT64_MAX;
	volatile int32_t x432 = -1;
	volatile int32_t t78 = 41124522;

	t78 = (x429==((x430-x431)-x432));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x437 = -11;
	static int64_t x438 = INT64_MIN;
	uint64_t x439 = UINT64_MAX;
	static uint16_t x440 = UINT16_MAX;
	int32_t t79 = 6466;

	t79 = (x437==((x438-x439)-x440));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x441 = INT8_MIN;
	uint64_t x442 = 31563760141LLU;
	static int32_t x443 = INT32_MIN;
	static int8_t x444 = -15;
	int32_t t80 = 3;

	t80 = (x441==((x442-x443)-x444));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x445 = 4U;
	int64_t x446 = -58LL;
	static volatile uint8_t x448 = 25U;

	t81 = (x445==((x446-x447)-x448));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x449 = INT8_MIN;
	volatile uint8_t x450 = 0U;
	int64_t x451 = -16424923730255LL;
	int16_t x452 = INT16_MIN;
	int32_t t82 = 192;

	t82 = (x449==((x450-x451)-x452));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x453 = 3633742;
	static volatile uint32_t x454 = UINT32_MAX;
	volatile int16_t x455 = -30;
	static volatile uint64_t x456 = 145069354LLU;
	static int32_t t83 = -114;

	t83 = (x453==((x454-x455)-x456));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x457 = -1;
	int32_t x458 = -423;
	static int16_t x460 = INT16_MAX;
	int32_t t84 = -50294;

	t84 = (x457==((x458-x459)-x460));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x461 = -1;
	uint64_t x462 = 23251324483LLU;
	static int32_t x463 = 90569543;
	int32_t x464 = INT32_MIN;

	t85 = (x461==((x462-x463)-x464));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x465 = 2497742637323864LL;
	static int16_t x466 = INT16_MIN;
	static volatile int32_t x467 = -98337;
	static volatile int32_t t86 = 29;

	t86 = (x465==((x466-x467)-x468));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x469 = -1LL;
	static uint16_t x470 = 2905U;
	uint64_t x472 = UINT64_MAX;
	int32_t t87 = -499281;

	t87 = (x469==((x470-x471)-x472));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x478 = INT8_MIN;
	uint8_t x479 = 1U;
	int8_t x480 = 0;
	int32_t t88 = 646110919;

	t88 = (x477==((x478-x479)-x480));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x485 = INT64_MIN;
	int16_t x487 = INT16_MIN;
	int16_t x488 = -1;
	volatile int32_t t89 = -17828872;

	t89 = (x485==((x486-x487)-x488));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x493 = INT8_MIN;
	static int16_t x494 = INT16_MAX;
	int32_t x495 = -539669213;
	volatile int16_t x496 = 0;
	volatile int32_t t90 = 1;

	t90 = (x493==((x494-x495)-x496));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x497 = INT16_MIN;
	int8_t x499 = INT8_MIN;
	static uint8_t x500 = UINT8_MAX;
	volatile int32_t t91 = 15616859;

	t91 = (x497==((x498-x499)-x500));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x501 = INT32_MIN;
	uint64_t x502 = UINT64_MAX;
	static uint8_t x504 = 28U;
	int32_t t92 = -18;

	t92 = (x501==((x502-x503)-x504));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x505 = -15LL;
	int16_t x506 = INT16_MIN;
	volatile int32_t x507 = INT32_MIN;
	int64_t x508 = -611LL;
	int32_t t93 = -820360525;

	t93 = (x505==((x506-x507)-x508));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x509 = INT32_MIN;
	static int64_t x510 = -258146LL;
	int32_t x511 = -1;
	static int32_t x512 = INT32_MAX;
	static int32_t t94 = -59;

	t94 = (x509==((x510-x511)-x512));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x513 = -1;
	static int8_t x514 = 62;
	uint8_t x515 = UINT8_MAX;
	volatile int32_t t95 = 90;

	t95 = (x513==((x514-x515)-x516));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x517 = 4907U;
	int32_t x518 = 1213182;
	int32_t x520 = -1;
	volatile int32_t t96 = -5963;

	t96 = (x517==((x518-x519)-x520));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x522 = -57;
	static volatile uint64_t x523 = 1717LLU;
	uint8_t x524 = 0U;
	int32_t t97 = 759041;

	t97 = (x521==((x522-x523)-x524));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x525 = -1;
	uint16_t x526 = 5U;
	static volatile int16_t x527 = -1;
	int64_t x528 = INT64_MAX;

	t98 = (x525==((x526-x527)-x528));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x531 = -164197827;
	int32_t t99 = -53;

	t99 = (x529==((x530-x531)-x532));

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

