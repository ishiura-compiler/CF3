#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x6 = INT64_MIN;
volatile uint8_t x21 = 3U;
uint32_t x31 = 58751435U;
int32_t x33 = -2989;
volatile int64_t t6 = -189804109LL;
static uint64_t x38 = UINT64_MAX;
volatile int64_t t7 = INT64_MIN;
int64_t x41 = -1LL;
volatile uint32_t x42 = UINT32_MAX;
int8_t x61 = 0;
volatile int32_t t13 = 2176226;
static int8_t x71 = -1;
int64_t t14 = -15LL;
static uint16_t x76 = UINT16_MAX;
uint64_t x77 = 451LLU;
uint32_t t16 = 1U;
int16_t x87 = -1;
int32_t t18 = -50595;
static volatile uint32_t x90 = 17U;
volatile int32_t x91 = INT32_MAX;
static int32_t x98 = INT32_MAX;
int32_t x114 = -152;
volatile uint32_t x115 = 613325292U;
int32_t x119 = INT32_MIN;
static volatile int16_t x120 = INT16_MAX;
volatile int32_t t23 = -2903791;
int64_t x121 = -1LL;
uint32_t x124 = UINT32_MAX;
uint64_t x125 = 431719954LLU;
int8_t x126 = INT8_MIN;
int32_t t26 = -24390;
volatile int32_t x143 = INT32_MIN;
volatile int64_t x146 = -1LL;
int64_t x160 = -4731453LL;
uint16_t x176 = UINT16_MAX;
int64_t x177 = -1LL;
int64_t x192 = INT64_MAX;
volatile int32_t t37 = 44310;
static uint64_t x207 = 102924588629229LLU;
int32_t t38 = 4631656;
int64_t x239 = 0LL;
uint64_t x255 = 22968195307LLU;
int64_t x277 = 1LL;
volatile uint16_t x278 = 1U;
uint64_t x281 = 447LLU;
static int32_t x286 = INT32_MIN;
volatile int64_t t50 = INT64_MAX;
uint8_t x296 = 15U;
int8_t x301 = 2;
int64_t x302 = -1LL;
int8_t x308 = 1;
uint32_t x310 = 3U;
static int32_t t55 = 63922;
uint32_t x320 = 209348601U;
int8_t x321 = INT8_MIN;
uint64_t x327 = 3338001LLU;
static volatile uint8_t x329 = UINT8_MAX;
uint16_t x334 = UINT16_MAX;
int16_t x335 = INT16_MIN;
int8_t x337 = INT8_MIN;
uint16_t x338 = 12972U;
volatile uint64_t t62 = 351LLU;
int8_t x363 = 58;
static uint16_t x378 = 30U;
volatile int16_t x380 = INT16_MIN;
uint8_t x393 = 2U;
int32_t x394 = 505530;
static int64_t x409 = 837735863LL;
static uint8_t x410 = UINT8_MAX;
static int8_t x413 = INT8_MIN;
uint8_t x420 = 7U;
int32_t t75 = 0;
int8_t x451 = INT8_MIN;
volatile int16_t x455 = INT16_MIN;
uint8_t x458 = 5U;
uint32_t x460 = 168U;
uint32_t t79 = 2019496814U;
int8_t x461 = 0;
static int64_t x462 = INT64_MIN;
uint16_t x464 = 700U;
int32_t x469 = 877;
int64_t x471 = -1LL;
int32_t t81 = 631;
uint64_t x474 = 337667LLU;
uint32_t t82 = 106U;
volatile int8_t x481 = INT8_MIN;
volatile int64_t t83 = -2477207398LL;
static int16_t x485 = INT16_MAX;
static int16_t x486 = INT16_MIN;
uint64_t x490 = 102958215219LLU;
static int8_t x498 = 0;
int64_t x508 = -583275421LL;
int16_t x516 = 2466;
uint8_t x518 = 27U;
uint32_t x522 = 16U;
volatile int64_t t91 = INT64_MIN;
int64_t t93 = INT64_MAX;
static uint32_t x540 = 1470U;
uint32_t x541 = 251094679U;
int8_t x547 = -3;
static int16_t x550 = INT16_MIN;
uint64_t x559 = UINT64_MAX;


void f0(void) {
	int32_t x1 = -1;
	int16_t x2 = -4182;
	int8_t x3 = 0;
	static int8_t x4 = -1;
	int32_t t0 = 260159694;

	t0 = (((x1*x2)<x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 19321LLU;
	int8_t x7 = -1;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = INT64_MIN;

	t1 = (((x5*x6)<x7)*x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = -621;
	static volatile int32_t x18 = 187494;
	int32_t x19 = -422214;
	int16_t x20 = INT16_MIN;
	int32_t t2 = -7;

	t2 = (((x17*x18)<x19)*x20);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x22 = 212387646LLU;
	int8_t x23 = -5;
	uint16_t x24 = 106U;
	volatile int32_t t3 = -176019349;

	t3 = (((x21*x22)<x23)*x24);

	if (t3 != 106) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = 0;
	int16_t x26 = -3953;
	static volatile int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	volatile int64_t t4 = 171LL;

	t4 = (((x25*x26)<x27)*x28);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = 8477845LLU;
	uint32_t x32 = 1517006U;
	uint32_t t5 = 172U;

	t5 = (((x29*x30)<x31)*x32);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MIN;
	int64_t x36 = INT64_MIN;

	t6 = (((x33*x34)<x35)*x36);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = 525816261644504LL;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;

	t7 = (((x37*x38)<x39)*x40);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x43 = -1;
	int16_t x44 = -1;
	volatile int32_t t8 = 15606;

	t8 = (((x41*x42)<x43)*x44);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = 3078218LL;
	int8_t x46 = INT8_MIN;
	int64_t x47 = -1LL;
	uint64_t x48 = 81784540747001182LLU;
	volatile uint64_t t9 = 90LLU;

	t9 = (((x45*x46)<x47)*x48);

	if (t9 != 81784540747001182LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x50 = INT16_MIN;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = INT64_MIN;
	static volatile int64_t t10 = INT64_MIN;

	t10 = (((x49*x50)<x51)*x52);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	uint8_t x54 = 3U;
	int32_t x55 = INT32_MIN;
	int32_t x56 = -10535497;
	volatile int32_t t11 = -3335356;

	t11 = (((x53*x54)<x55)*x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = UINT64_MAX;
	int16_t x58 = INT16_MIN;
	uint16_t x59 = 27U;
	volatile int64_t x60 = INT64_MIN;
	int64_t t12 = -950359LL;

	t12 = (((x57*x58)<x59)*x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x62 = -1;
	int8_t x63 = 1;
	volatile int16_t x64 = 26;

	t13 = (((x61*x62)<x63)*x64);

	if (t13 != 26) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = 7297LL;
	static uint16_t x70 = 3U;
	int64_t x72 = -5121337814971LL;

	t14 = (((x69*x70)<x71)*x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -5;
	uint64_t x74 = UINT64_MAX;
	int64_t x75 = 1079018529469276LL;
	static volatile int32_t t15 = -2204;

	t15 = (((x73*x74)<x75)*x76);

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x78 = INT16_MIN;
	static int64_t x79 = INT64_MIN;
	uint32_t x80 = 326U;

	t16 = (((x77*x78)<x79)*x80);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 11U;
	int64_t x82 = -5LL;
	volatile int16_t x83 = INT16_MAX;
	volatile uint32_t x84 = 801019470U;
	uint32_t t17 = 57589018U;

	t17 = (((x81*x82)<x83)*x84);

	if (t17 != 801019470U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x86 = -3;
	volatile int16_t x88 = INT16_MIN;

	t18 = (((x85*x86)<x87)*x88);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = -1;
	uint64_t x92 = 47LLU;
	volatile uint64_t t19 = 271426930487393869LLU;

	t19 = (((x89*x90)<x91)*x92);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -1;
	static int32_t x99 = INT32_MIN;
	int16_t x100 = -1;
	volatile int32_t t20 = 3;

	t20 = (((x97*x98)<x99)*x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x105 = 4U;
	static uint8_t x106 = 2U;
	int64_t x107 = -31023133LL;
	int32_t x108 = -34;
	int32_t t21 = -231;

	t21 = (((x105*x106)<x107)*x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x113 = INT8_MIN;
	int32_t x116 = -1;
	volatile int32_t t22 = 0;

	t22 = (((x113*x114)<x115)*x116);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MAX;
	volatile int8_t x118 = INT8_MAX;

	t23 = (((x117*x118)<x119)*x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x122 = 4052448LLU;
	uint32_t x123 = 4857130U;
	static volatile uint32_t t24 = 87220U;

	t24 = (((x121*x122)<x123)*x124);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x127 = 100U;
	uint8_t x128 = UINT8_MAX;
	int32_t t25 = 17;

	t25 = (((x125*x126)<x127)*x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x133 = 527288413733616LL;
	uint16_t x134 = 59U;
	int32_t x135 = INT32_MAX;
	int32_t x136 = -32688886;

	t26 = (((x133*x134)<x135)*x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x137 = 18;
	static int32_t x138 = 106562610;
	int16_t x139 = 1152;
	int64_t x140 = 1LL;
	int64_t t27 = -5784404941809246LL;

	t27 = (((x137*x138)<x139)*x140);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x142 = -1;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t28 = -762441632;

	t28 = (((x141*x142)<x143)*x144);

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x145 = INT16_MAX;
	volatile int16_t x147 = 1;
	static int8_t x148 = -1;
	int32_t t29 = 432017;

	t29 = (((x145*x146)<x147)*x148);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x153 = 1177LLU;
	volatile uint8_t x154 = 53U;
	uint8_t x155 = 95U;
	int16_t x156 = -4;
	volatile int32_t t30 = 219;

	t30 = (((x153*x154)<x155)*x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x157 = 80U;
	static uint16_t x158 = UINT16_MAX;
	int16_t x159 = INT16_MIN;
	volatile int64_t t31 = -1017LL;

	t31 = (((x157*x158)<x159)*x160);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = -11569599012LL;
	volatile int64_t x175 = -1883023253078763345LL;
	volatile int32_t t32 = -146;

	t32 = (((x173*x174)<x175)*x176);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x178 = -1LL;
	int64_t x179 = INT64_MIN;
	int16_t x180 = -1;
	int32_t t33 = -1;

	t33 = (((x177*x178)<x179)*x180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x181 = 64U;
	int64_t x182 = -1LL;
	int16_t x183 = INT16_MIN;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t34 = -261501;

	t34 = (((x181*x182)<x183)*x184);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x185 = 7289;
	volatile int16_t x186 = -1;
	uint64_t x187 = UINT64_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t35 = INT32_MIN;

	t35 = (((x185*x186)<x187)*x188);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x189 = 15U;
	uint32_t x190 = UINT32_MAX;
	int16_t x191 = INT16_MIN;
	volatile int64_t t36 = 14091LL;

	t36 = (((x189*x190)<x191)*x192);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x201 = 7034U;
	int8_t x202 = 3;
	int64_t x203 = -1LL;
	uint16_t x204 = UINT16_MAX;

	t37 = (((x201*x202)<x203)*x204);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x205 = -1;
	int16_t x206 = INT16_MIN;
	int8_t x208 = INT8_MIN;

	t38 = (((x205*x206)<x207)*x208);

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x217 = -50;
	uint32_t x218 = UINT32_MAX;
	uint16_t x219 = 0U;
	int64_t x220 = INT64_MIN;
	volatile int64_t t39 = -195663LL;

	t39 = (((x217*x218)<x219)*x220);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x221 = INT16_MAX;
	int16_t x222 = -1;
	volatile int16_t x223 = INT16_MAX;
	int64_t x224 = 240491244LL;
	volatile int64_t t40 = 14815372LL;

	t40 = (((x221*x222)<x223)*x224);

	if (t40 != 240491244LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = -1LL;
	uint16_t x231 = 1U;
	int16_t x232 = -1476;
	int32_t t41 = 8630170;

	t41 = (((x229*x230)<x231)*x232);

	if (t41 != -1476) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x237 = UINT32_MAX;
	static int32_t x238 = 1766;
	int64_t x240 = INT64_MIN;
	volatile int64_t t42 = -2037699LL;

	t42 = (((x237*x238)<x239)*x240);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x241 = 0;
	volatile int64_t x242 = -1LL;
	int32_t x243 = 167300702;
	volatile uint32_t x244 = UINT32_MAX;
	uint32_t t43 = UINT32_MAX;

	t43 = (((x241*x242)<x243)*x244);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = -20;
	static volatile int8_t x246 = 3;
	int16_t x247 = -82;
	static int64_t x248 = INT64_MIN;
	int64_t t44 = 112464911687LL;

	t44 = (((x245*x246)<x247)*x248);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x249 = 14LLU;
	volatile uint64_t x250 = 123502LLU;
	int64_t x251 = INT64_MIN;
	int64_t x252 = -1950412754394LL;
	volatile int64_t t45 = 4053465446LL;

	t45 = (((x249*x250)<x251)*x252);

	if (t45 != -1950412754394LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x253 = -3541;
	int64_t x254 = -1LL;
	int16_t x256 = -1;
	int32_t t46 = -4;

	t46 = (((x253*x254)<x255)*x256);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x261 = INT8_MAX;
	static uint8_t x262 = 62U;
	int8_t x263 = INT8_MAX;
	int32_t x264 = -14737;
	int32_t t47 = -1692;

	t47 = (((x261*x262)<x263)*x264);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x279 = 41U;
	int32_t x280 = INT32_MIN;
	int32_t t48 = INT32_MIN;

	t48 = (((x277*x278)<x279)*x280);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x282 = 1LL;
	uint8_t x283 = 63U;
	int16_t x284 = 1;
	int32_t t49 = 626013;

	t49 = (((x281*x282)<x283)*x284);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x285 = 50036099U;
	static int8_t x287 = INT8_MIN;
	static int64_t x288 = INT64_MAX;

	t50 = (((x285*x286)<x287)*x288);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x289 = -1LL;
	int8_t x290 = INT8_MIN;
	uint16_t x291 = 3079U;
	int8_t x292 = INT8_MAX;
	int32_t t51 = -122460851;

	t51 = (((x289*x290)<x291)*x292);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x293 = 475U;
	static volatile uint32_t x294 = 0U;
	int8_t x295 = INT8_MIN;
	volatile int32_t t52 = 164;

	t52 = (((x293*x294)<x295)*x296);

	if (t52 != 15) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x303 = INT32_MAX;
	static int8_t x304 = INT8_MAX;
	static int32_t t53 = 175;

	t53 = (((x301*x302)<x303)*x304);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x305 = -1;
	int16_t x306 = 49;
	int8_t x307 = INT8_MAX;
	volatile int32_t t54 = 32140;

	t54 = (((x305*x306)<x307)*x308);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x309 = -1;
	static volatile uint64_t x311 = UINT64_MAX;
	static uint8_t x312 = 6U;

	t55 = (((x309*x310)<x311)*x312);

	if (t55 != 6) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x317 = 5218394LLU;
	uint16_t x318 = UINT16_MAX;
	volatile int64_t x319 = INT64_MIN;
	static uint32_t t56 = 0U;

	t56 = (((x317*x318)<x319)*x320);

	if (t56 != 209348601U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x322 = -9;
	static int32_t x323 = -106727128;
	int16_t x324 = INT16_MIN;
	volatile int32_t t57 = 1252;

	t57 = (((x321*x322)<x323)*x324);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x325 = INT16_MIN;
	static uint32_t x326 = 13U;
	int64_t x328 = INT64_MIN;
	volatile int64_t t58 = 4735824422LL;

	t58 = (((x325*x326)<x327)*x328);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x330 = 208590663639603LLU;
	static int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MAX;
	int32_t t59 = INT32_MAX;

	t59 = (((x329*x330)<x331)*x332);

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x333 = -1;
	volatile int64_t x336 = -1LL;
	int64_t t60 = -63210275376558573LL;

	t60 = (((x333*x334)<x335)*x336);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x339 = INT16_MIN;
	volatile uint8_t x340 = 11U;
	int32_t t61 = 32953;

	t61 = (((x337*x338)<x339)*x340);

	if (t61 != 11) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x349 = 167U;
	uint16_t x350 = 2U;
	volatile uint32_t x351 = 282U;
	uint64_t x352 = 678813566LLU;

	t62 = (((x349*x350)<x351)*x352);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x353 = 1126554361U;
	volatile int32_t x354 = -1;
	int32_t x355 = INT32_MAX;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t63 = 56825111;

	t63 = (((x353*x354)<x355)*x356);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x357 = 1103254;
	int32_t x358 = 52;
	uint32_t x359 = 593045U;
	uint32_t x360 = UINT32_MAX;
	volatile uint32_t t64 = 20915523U;

	t64 = (((x357*x358)<x359)*x360);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x361 = 14424;
	uint64_t x362 = 7179999501715678LLU;
	volatile int8_t x364 = INT8_MIN;
	int32_t t65 = -951;

	t65 = (((x361*x362)<x363)*x364);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x365 = 8;
	int32_t x366 = -1;
	static int16_t x367 = INT16_MAX;
	int32_t x368 = 3;
	int32_t t66 = 3914625;

	t66 = (((x365*x366)<x367)*x368);

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x377 = 1224U;
	int16_t x379 = INT16_MIN;
	int32_t t67 = 15322;

	t67 = (((x377*x378)<x379)*x380);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x381 = INT16_MIN;
	static int16_t x382 = 3529;
	uint64_t x383 = 927727LLU;
	volatile int8_t x384 = -1;
	volatile int32_t t68 = -834;

	t68 = (((x381*x382)<x383)*x384);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x389 = -7735160864829LL;
	static uint64_t x390 = UINT64_MAX;
	uint32_t x391 = 184U;
	int16_t x392 = 18;
	volatile int32_t t69 = 481241573;

	t69 = (((x389*x390)<x391)*x392);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x395 = INT32_MIN;
	static int16_t x396 = -1;
	int32_t t70 = -15;

	t70 = (((x393*x394)<x395)*x396);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x411 = 602862971LL;
	int8_t x412 = INT8_MAX;
	volatile int32_t t71 = -5640;

	t71 = (((x409*x410)<x411)*x412);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x414 = -12;
	volatile uint32_t x415 = 1544U;
	uint32_t x416 = UINT32_MAX;
	static volatile uint32_t t72 = UINT32_MAX;

	t72 = (((x413*x414)<x415)*x416);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x417 = -1;
	volatile int16_t x418 = INT16_MIN;
	uint16_t x419 = UINT16_MAX;
	int32_t t73 = -4611001;

	t73 = (((x417*x418)<x419)*x420);

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x429 = 0LLU;
	int32_t x430 = INT32_MIN;
	static uint8_t x431 = 7U;
	int32_t x432 = INT32_MIN;
	volatile int32_t t74 = INT32_MIN;

	t74 = (((x429*x430)<x431)*x432);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x433 = INT8_MIN;
	uint8_t x434 = UINT8_MAX;
	int32_t x435 = INT32_MIN;
	static volatile int32_t x436 = INT32_MIN;

	t75 = (((x433*x434)<x435)*x436);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x441 = INT16_MIN;
	uint16_t x442 = 0U;
	uint64_t x443 = UINT64_MAX;
	int8_t x444 = -14;
	int32_t t76 = 593953514;

	t76 = (((x441*x442)<x443)*x444);

	if (t76 != -14) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x449 = 1;
	uint8_t x450 = 3U;
	volatile int32_t x452 = -127;
	volatile int32_t t77 = -15007308;

	t77 = (((x449*x450)<x451)*x452);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x453 = -1;
	int32_t x454 = 1972523;
	volatile int16_t x456 = -1;
	int32_t t78 = 0;

	t78 = (((x453*x454)<x455)*x456);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x457 = -31LL;
	static int32_t x459 = 49510205;

	t79 = (((x457*x458)<x459)*x460);

	if (t79 != 168U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x463 = -1;
	int32_t t80 = 7942;

	t80 = (((x461*x462)<x463)*x464);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x470 = -30656;
	uint8_t x472 = 24U;

	t81 = (((x469*x470)<x471)*x472);

	if (t81 != 24) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x473 = -1;
	uint32_t x475 = 45164836U;
	uint32_t x476 = 14U;

	t82 = (((x473*x474)<x475)*x476);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x482 = 406U;
	static uint64_t x483 = 32843077645LLU;
	int64_t x484 = 6182965121104LL;

	t83 = (((x481*x482)<x483)*x484);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x487 = 675U;
	static uint8_t x488 = 3U;
	int32_t t84 = -6382;

	t84 = (((x485*x486)<x487)*x488);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x489 = UINT16_MAX;
	volatile uint32_t x491 = 912575358U;
	int16_t x492 = INT16_MIN;
	int32_t t85 = -235;

	t85 = (((x489*x490)<x491)*x492);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x493 = 0;
	static volatile int8_t x494 = INT8_MIN;
	int8_t x495 = -13;
	static int32_t x496 = 1;
	int32_t t86 = -709710566;

	t86 = (((x493*x494)<x495)*x496);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x497 = -1;
	uint8_t x499 = 1U;
	static int16_t x500 = INT16_MIN;
	int32_t t87 = 128542432;

	t87 = (((x497*x498)<x499)*x500);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x505 = UINT32_MAX;
	int16_t x506 = -1;
	uint16_t x507 = 156U;
	int64_t t88 = 56670146379403LL;

	t88 = (((x505*x506)<x507)*x508);

	if (t88 != -583275421LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x513 = -444LL;
	volatile int32_t x514 = -1;
	volatile uint8_t x515 = 113U;
	volatile int32_t t89 = 19;

	t89 = (((x513*x514)<x515)*x516);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x517 = 24114146U;
	volatile int8_t x519 = INT8_MAX;
	int32_t x520 = INT32_MIN;
	int32_t t90 = -933652;

	t90 = (((x517*x518)<x519)*x520);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x521 = 45;
	volatile int16_t x523 = -1;
	static int64_t x524 = INT64_MIN;

	t91 = (((x521*x522)<x523)*x524);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x525 = 23U;
	uint8_t x526 = UINT8_MAX;
	int8_t x527 = 58;
	int16_t x528 = -174;
	volatile int32_t t92 = 1194787;

	t92 = (((x525*x526)<x527)*x528);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x529 = UINT16_MAX;
	int8_t x530 = -1;
	int8_t x531 = 47;
	int64_t x532 = INT64_MAX;

	t93 = (((x529*x530)<x531)*x532);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x533 = -107291LL;
	int64_t x534 = 14505LL;
	int8_t x535 = -23;
	uint64_t x536 = 24150574695410LLU;
	volatile uint64_t t94 = 1017LLU;

	t94 = (((x533*x534)<x535)*x536);

	if (t94 != 24150574695410LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x537 = 447734U;
	int8_t x538 = INT8_MAX;
	int64_t x539 = -1LL;
	static uint32_t t95 = 2085426U;

	t95 = (((x537*x538)<x539)*x540);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x542 = 47U;
	static volatile uint64_t x543 = 6LLU;
	int8_t x544 = -1;
	volatile int32_t t96 = -55091;

	t96 = (((x541*x542)<x543)*x544);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x545 = 13997;
	uint64_t x546 = UINT64_MAX;
	int64_t x548 = -1LL;
	static volatile int64_t t97 = -6682336LL;

	t97 = (((x545*x546)<x547)*x548);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x549 = -60;
	volatile uint8_t x551 = UINT8_MAX;
	uint16_t x552 = 402U;
	volatile int32_t t98 = 147086025;

	t98 = (((x549*x550)<x551)*x552);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x557 = UINT8_MAX;
	uint8_t x558 = 1U;
	int64_t x560 = 7663889LL;
	static int64_t t99 = 498LL;

	t99 = (((x557*x558)<x559)*x560);

	if (t99 != 7663889LL) { NG(); } else { ; }
	
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

