#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
static uint64_t t0 = 22230974260LLU;
volatile int64_t x10 = 215668639LL;
int32_t t2 = -577825;
int16_t x24 = 864;
int64_t x32 = -1LL;
static uint64_t x34 = UINT64_MAX;
static uint32_t x41 = 257336974U;
uint16_t x42 = UINT16_MAX;
static uint16_t x44 = 18U;
volatile int64_t t6 = 1260LL;
int16_t x45 = INT16_MAX;
int64_t x46 = 17LL;
uint8_t x72 = 99U;
uint64_t t10 = 200566181599049LLU;
volatile int8_t x75 = -1;
uint32_t x77 = UINT32_MAX;
static uint8_t x81 = UINT8_MAX;
volatile uint32_t x83 = 27U;
volatile int8_t x91 = 59;
int16_t x100 = INT16_MIN;
uint64_t x102 = UINT64_MAX;
int64_t x105 = -51LL;
uint64_t x106 = 8LLU;
uint32_t x107 = 116U;
int64_t t20 = 646845LL;
int8_t x119 = -1;
int32_t x120 = INT32_MAX;
int8_t x126 = -15;
int16_t x132 = -55;
static int16_t x137 = -1;
volatile int32_t x149 = -1;
static uint16_t x150 = 387U;
static volatile int32_t t27 = -108;
int32_t x153 = INT32_MIN;
int8_t x161 = -1;
static volatile int64_t x167 = INT64_MIN;
static int8_t x184 = INT8_MIN;
int32_t x194 = -32008;
int64_t x210 = -468444LL;
int32_t x212 = INT32_MIN;
int64_t x213 = INT64_MAX;
int8_t x215 = INT8_MIN;
int32_t t39 = -1;
volatile int8_t x246 = -3;
int8_t x248 = 0;
int8_t x261 = 3;
volatile int16_t x262 = INT16_MIN;
int8_t x281 = -1;
uint16_t x283 = UINT16_MAX;
int32_t x290 = INT32_MIN;
uint32_t t45 = 133269647U;
static uint8_t x301 = 10U;
int32_t t48 = 360539268;
int8_t x305 = INT8_MIN;
uint64_t t49 = 872815436772979709LLU;
uint64_t t50 = 116LLU;
uint64_t x321 = UINT64_MAX;
int8_t x325 = -1;
int8_t x337 = INT8_MAX;
volatile int64_t t54 = 25879903585540715LL;
static uint64_t x345 = 48628437386033LLU;
volatile uint64_t t55 = 157LLU;
uint32_t x349 = 151251U;
uint64_t x352 = 850673LLU;
volatile int32_t t58 = 8882;
volatile int64_t t60 = 1LL;
static int64_t t61 = 3097913LL;
int16_t x391 = INT16_MAX;
int16_t x396 = 7;
int16_t x398 = INT16_MIN;
uint8_t x406 = 1U;
int32_t t67 = 977;
int16_t x416 = INT16_MAX;
int8_t x436 = INT8_MAX;
static uint16_t x437 = 821U;
static volatile uint32_t t71 = UINT32_MAX;
int8_t x447 = -33;
int64_t x448 = -1LL;
uint64_t x459 = UINT64_MAX;
int16_t x460 = 536;
static uint64_t t74 = 1832LLU;
volatile uint8_t x466 = 6U;
static int32_t t76 = 11445911;
int16_t x469 = INT16_MIN;
int16_t x474 = INT16_MIN;
static volatile int8_t x479 = 3;
uint8_t x481 = 25U;
static uint8_t x486 = 93U;
int32_t t81 = -494;
static volatile int64_t t83 = -1813923731836807524LL;
int32_t x511 = -30441;
int16_t x527 = -1;
volatile int64_t t86 = -274284312460LL;
static volatile uint64_t x542 = 1059LLU;
static int32_t x543 = -28064;
int16_t x557 = -7;
uint8_t x577 = UINT8_MAX;
int8_t x578 = -1;
int8_t x585 = 1;
static uint32_t x589 = UINT32_MAX;
static int16_t x593 = INT16_MIN;
static int8_t x601 = INT8_MAX;
static uint32_t x602 = 62302U;
int16_t x604 = -1;
static uint32_t t98 = 237U;


void f0(void) {
	int8_t x1 = 6;
	int64_t x2 = 80843654043045332LL;
	uint32_t x4 = UINT32_MAX;

	t0 = ((x1-x2)|(x3*x4));

	if (t0 != 18446744073683038771LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 2U;
	int8_t x11 = INT8_MAX;
	static volatile uint64_t x12 = UINT64_MAX;
	static uint64_t t1 = 483LLU;

	t1 = ((x9-x10)|(x11*x12));

	if (t1 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MIN;
	volatile int16_t x15 = INT16_MAX;
	uint8_t x16 = 43U;

	t2 = ((x13-x14)|(x15*x16));

	if (t2 != 2147483605) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = 18;
	uint32_t x22 = 5145419U;
	static int32_t x23 = -1;
	volatile uint32_t t3 = 926U;

	t3 = ((x21-x22)|(x23*x24));

	if (t3 != 4294966503U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x29 = INT16_MAX;
	uint16_t x30 = UINT16_MAX;
	static int32_t x31 = -1;
	volatile int64_t t4 = 8650411347478801LL;

	t4 = ((x29-x30)|(x31*x32));

	if (t4 != -32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = 597347518LL;
	volatile uint32_t x35 = 216U;
	int32_t x36 = INT32_MIN;
	static volatile uint64_t t5 = 2750959889818875611LLU;

	t5 = ((x33-x34)|(x35*x36));

	if (t5 != 597347519LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x43 = -23050479333088020LL;

	t6 = ((x41-x42)|(x43*x44));

	if (t6 != -414908627840287073LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x47 = INT8_MIN;
	int32_t x48 = 414;
	volatile int64_t t7 = 5638043205LL;

	t7 = ((x45-x46)|(x47*x48));

	if (t7 != -32786LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MAX;
	static int64_t x50 = -4723612563020552LL;
	uint64_t x51 = 28477LLU;
	uint8_t x52 = 12U;
	volatile uint64_t t8 = 595721LLU;

	t8 = ((x49-x50)|(x51*x52));

	if (t8 != 4723612563390431LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x57 = -61;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = INT16_MAX;
	uint64_t x60 = UINT64_MAX;
	uint64_t t9 = 562494104182733886LLU;

	t9 = ((x57-x58)|(x59*x60));

	if (t9 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x69 = UINT32_MAX;
	volatile uint8_t x70 = UINT8_MAX;
	static uint64_t x71 = UINT64_MAX;

	t10 = ((x69-x70)|(x71*x72));

	if (t10 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int16_t x76 = -2;
	int32_t t11 = -54662457;

	t11 = ((x73-x74)|(x75*x76));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x78 = 315U;
	static int64_t x79 = -1LL;
	int16_t x80 = INT16_MAX;
	int64_t t12 = -6826674LL;

	t12 = ((x77-x78)|(x79*x80));

	if (t12 != -315LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x82 = INT16_MIN;
	volatile uint16_t x84 = UINT16_MAX;
	uint32_t t13 = 3119U;

	t13 = ((x81-x82)|(x83*x84));

	if (t13 != 1769471U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MIN;
	uint64_t x87 = UINT64_MAX;
	volatile int8_t x88 = INT8_MIN;
	static volatile uint64_t t14 = 343780549793113000LLU;

	t14 = ((x85-x86)|(x87*x88));

	if (t14 != 128LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = INT16_MIN;
	uint8_t x90 = 36U;
	int16_t x92 = -1;
	static volatile int32_t t15 = -78899743;

	t15 = ((x89-x90)|(x91*x92));

	if (t15 != -35) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x97 = INT8_MIN;
	volatile int16_t x98 = INT16_MIN;
	volatile uint32_t x99 = UINT32_MAX;
	uint32_t t16 = 77U;

	t16 = ((x97-x98)|(x99*x100));

	if (t16 != 65408U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = 19174851783LLU;
	uint16_t x103 = 10U;
	volatile uint16_t x104 = UINT16_MAX;
	static uint64_t t17 = 0LLU;

	t17 = ((x101-x102)|(x103*x104));

	if (t17 != 19174916094LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x108 = 431U;
	static uint64_t t18 = 111857LLU;

	t18 = ((x105-x106)|(x107*x108));

	if (t18 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x109 = INT8_MIN;
	volatile int16_t x110 = INT16_MIN;
	volatile uint64_t x111 = UINT64_MAX;
	static int64_t x112 = INT64_MAX;
	volatile uint64_t t19 = 167422712606114719LLU;

	t19 = ((x109-x110)|(x111*x112));

	if (t19 != 9223372036854808449LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x113 = 6360U;
	volatile int32_t x114 = -1;
	int64_t x115 = -3LL;
	int8_t x116 = -1;

	t20 = ((x113-x114)|(x115*x116));

	if (t20 != 6363LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = 1471952;
	int16_t x118 = INT16_MIN;
	volatile int32_t t21 = 1021055;

	t21 = ((x117-x118)|(x119*x120));

	if (t21 != -2145978927) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x121 = 1431LL;
	int16_t x122 = 6;
	volatile int64_t x123 = -10LL;
	int16_t x124 = -2500;
	volatile int64_t t22 = 4LL;

	t22 = ((x121-x122)|(x123*x124));

	if (t22 != 26041LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x125 = -1;
	int8_t x127 = INT8_MAX;
	int32_t x128 = -1;
	int32_t t23 = -1;

	t23 = ((x125-x126)|(x127*x128));

	if (t23 != -113) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = 254154LLU;
	static int16_t x130 = -1;
	int16_t x131 = 13;
	static volatile uint64_t t24 = 7178925691LLU;

	t24 = ((x129-x130)|(x131*x132));

	if (t24 != 18446744073709551103LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x138 = 1704049LL;
	static int64_t x139 = INT64_MAX;
	int64_t x140 = -1LL;
	static volatile int64_t t25 = -1900LL;

	t25 = ((x137-x138)|(x139*x140));

	if (t25 != -1704049LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x145 = UINT64_MAX;
	int8_t x146 = 28;
	static uint32_t x147 = 175U;
	volatile int16_t x148 = INT16_MIN;
	uint64_t t26 = 263LLU;

	t26 = ((x145-x146)|(x147*x148));

	if (t26 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x151 = UINT16_MAX;
	static int16_t x152 = INT16_MIN;

	t27 = ((x149-x150)|(x151*x152));

	if (t27 != -388) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x154 = 0;
	static volatile uint64_t x155 = 2146385600481851LLU;
	uint8_t x156 = 1U;
	volatile uint64_t t28 = 1973253577726059LLU;

	t28 = ((x153-x154)|(x155*x156));

	if (t28 != 18446744073026177595LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x162 = 22U;
	uint16_t x163 = 13806U;
	static volatile int8_t x164 = INT8_MIN;
	int32_t t29 = 3906500;

	t29 = ((x161-x162)|(x163*x164));

	if (t29 != -23) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = 54;
	volatile uint16_t x166 = 2U;
	static uint64_t x168 = UINT64_MAX;
	uint64_t t30 = 149732934893638332LLU;

	t30 = ((x165-x166)|(x167*x168));

	if (t30 != 9223372036854775860LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = INT8_MIN;
	static uint32_t x170 = 233955917U;
	volatile uint64_t x171 = 0LLU;
	uint16_t x172 = UINT16_MAX;
	uint64_t t31 = 7227882971015937653LLU;

	t31 = ((x169-x170)|(x171*x172));

	if (t31 != 4061011251LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x173 = 18888LLU;
	int64_t x174 = 25LL;
	uint64_t x175 = UINT64_MAX;
	uint16_t x176 = 0U;
	uint64_t t32 = 460LLU;

	t32 = ((x173-x174)|(x175*x176));

	if (t32 != 18863LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x181 = -24276996948818LL;
	int64_t x182 = INT64_MIN;
	int16_t x183 = -1;
	volatile int64_t t33 = -3033LL;

	t33 = ((x181-x182)|(x183*x184));

	if (t33 != 9223347759857826990LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x193 = INT32_MIN;
	static volatile int8_t x195 = -1;
	volatile int8_t x196 = INT8_MAX;
	int32_t t34 = -2;

	t34 = ((x193-x194)|(x195*x196));

	if (t34 != -119) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x209 = 986636U;
	uint32_t x211 = UINT32_MAX;
	volatile int64_t t35 = -3480LL;

	t35 = ((x209-x210)|(x211*x212));

	if (t35 != 2148938728LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x214 = 1157LL;
	volatile int8_t x216 = INT8_MIN;
	volatile int64_t t36 = 35734817271445284LL;

	t36 = ((x213-x214)|(x215*x216));

	if (t36 != 9223372036854774650LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x217 = INT64_MIN;
	int8_t x218 = -25;
	uint64_t x219 = 582398591000885100LLU;
	int8_t x220 = 0;
	static volatile uint64_t t37 = 71337556699LLU;

	t37 = ((x217-x218)|(x219*x220));

	if (t37 != 9223372036854775833LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x237 = 10466359677LLU;
	int16_t x238 = -1;
	volatile uint16_t x239 = UINT16_MAX;
	static uint64_t x240 = 0LLU;
	uint64_t t38 = 26813113LLU;

	t38 = ((x237-x238)|(x239*x240));

	if (t38 != 10466359678LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x241 = INT16_MAX;
	volatile int8_t x242 = INT8_MIN;
	uint8_t x243 = 44U;
	uint8_t x244 = UINT8_MAX;

	t39 = ((x241-x242)|(x243*x244));

	if (t39 != 44031) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x245 = INT32_MIN;
	int64_t x247 = INT64_MAX;
	int64_t t40 = 0LL;

	t40 = ((x245-x246)|(x247*x248));

	if (t40 != -2147483645LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x263 = -1;
	static int32_t x264 = INT32_MAX;
	static volatile int32_t t41 = 1450;

	t41 = ((x261-x262)|(x263*x264));

	if (t41 != -2147450877) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x269 = INT8_MAX;
	uint8_t x270 = UINT8_MAX;
	volatile int8_t x271 = INT8_MAX;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t42 = 12;

	t42 = ((x269-x270)|(x271*x272));

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x282 = UINT8_MAX;
	int16_t x284 = INT16_MAX;
	volatile int32_t t43 = 3687;

	t43 = ((x281-x282)|(x283*x284));

	if (t43 != -255) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x285 = INT16_MIN;
	int64_t x286 = 641LL;
	int8_t x287 = INT8_MAX;
	uint8_t x288 = 0U;
	volatile int64_t t44 = -2164991622196LL;

	t44 = ((x285-x286)|(x287*x288));

	if (t44 != -33409LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x289 = 2U;
	int32_t x291 = -8069;
	uint32_t x292 = 244U;

	t45 = ((x289-x290)|(x291*x292));

	if (t45 != 4292998462U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x293 = 6511842349177737LLU;
	uint8_t x294 = UINT8_MAX;
	uint16_t x295 = UINT16_MAX;
	volatile uint64_t x296 = 3870399917443567960LLU;
	uint64_t t46 = 1022578610560628LLU;

	t46 = ((x293-x294)|(x295*x296));

	if (t46 != 3933806300549316266LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x297 = INT32_MAX;
	uint16_t x298 = 1U;
	uint16_t x299 = 1852U;
	volatile uint8_t x300 = 28U;
	volatile int32_t t47 = -306;

	t47 = ((x297-x298)|(x299*x300));

	if (t47 != 2147483646) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x302 = -1;
	static int8_t x303 = 13;
	static volatile int8_t x304 = INT8_MIN;

	t48 = ((x301-x302)|(x303*x304));

	if (t48 != -1653) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x306 = UINT64_MAX;
	uint64_t x307 = 499743653140265LLU;
	int64_t x308 = INT64_MIN;

	t49 = ((x305-x306)|(x307*x308));

	if (t49 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x309 = 336840217844LLU;
	int64_t x310 = INT64_MIN;
	volatile int8_t x311 = -1;
	int16_t x312 = 32;

	t50 = ((x309-x310)|(x311*x312));

	if (t50 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x313 = UINT16_MAX;
	int16_t x314 = -1;
	volatile int64_t x315 = -1LL;
	int32_t x316 = 6000;
	static int64_t t51 = 125022563900LL;

	t51 = ((x313-x314)|(x315*x316));

	if (t51 != -6000LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x322 = -1;
	volatile uint16_t x323 = UINT16_MAX;
	uint8_t x324 = 2U;
	uint64_t t52 = 25850522506205LLU;

	t52 = ((x321-x322)|(x323*x324));

	if (t52 != 131070LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x326 = INT8_MIN;
	int16_t x327 = -1;
	uint16_t x328 = 7626U;
	int32_t t53 = 3;

	t53 = ((x325-x326)|(x327*x328));

	if (t53 != -7553) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x338 = 30452121974444935LL;
	static int16_t x339 = INT16_MAX;
	static uint32_t x340 = UINT32_MAX;

	t54 = ((x337-x338)|(x339*x340));

	if (t54 != -30452121287529223LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x346 = -1;
	volatile int32_t x347 = -9;
	int8_t x348 = -2;

	t55 = ((x345-x346)|(x347*x348));

	if (t55 != 48628437386034LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x350 = 0;
	int32_t x351 = INT32_MIN;
	volatile uint64_t t56 = 4933511349073342LLU;

	t56 = ((x349-x350)|(x351*x352));

	if (t56 != 18444917267352407763LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x357 = -1LL;
	int32_t x358 = -1;
	uint64_t x359 = 174560487258LLU;
	static volatile int32_t x360 = -1;
	volatile uint64_t t57 = 361408484110LLU;

	t57 = ((x357-x358)|(x359*x360));

	if (t57 != 18446743899149064358LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x361 = 1;
	volatile int8_t x362 = INT8_MIN;
	uint8_t x363 = UINT8_MAX;
	uint8_t x364 = 0U;

	t58 = ((x361-x362)|(x363*x364));

	if (t58 != 129) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x365 = UINT32_MAX;
	static uint64_t x366 = 16182883715084LLU;
	uint64_t x367 = 2088393923536998LLU;
	int32_t x368 = -11249;
	static volatile uint64_t t59 = 87182364709LLU;

	t59 = ((x365-x366)|(x367*x368));

	if (t59 != 18446743288283592699LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x373 = -1;
	int16_t x374 = INT16_MAX;
	int64_t x375 = -9224LL;
	int16_t x376 = INT16_MAX;

	t60 = ((x373-x374)|(x375*x376));

	if (t60 != -23544LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MIN;
	volatile int32_t x387 = 53496;
	int16_t x388 = -1;

	t61 = ((x385-x386)|(x387*x388));

	if (t61 != -20728LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x389 = 21;
	int8_t x390 = -1;
	uint16_t x392 = 1U;
	volatile int32_t t62 = 389;

	t62 = ((x389-x390)|(x391*x392));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x393 = -50;
	uint32_t x394 = 15369370U;
	static int8_t x395 = 3;
	static volatile uint32_t t63 = 131655026U;

	t63 = ((x393-x394)|(x395*x396));

	if (t63 != 4279597877U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x397 = -185041933;
	int64_t x399 = -308571LL;
	int32_t x400 = INT32_MIN;
	static int64_t t64 = 2173717860LL;

	t64 = ((x397-x398)|(x399*x400));

	if (t64 != -185009165LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x401 = INT16_MIN;
	volatile int8_t x402 = INT8_MIN;
	uint32_t x403 = 131062837U;
	static int16_t x404 = INT16_MIN;
	uint32_t t65 = 106500819U;

	t65 = ((x401-x402)|(x403*x404));

	if (t65 != 4294934656U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x405 = 16339U;
	int32_t x407 = INT32_MAX;
	uint64_t x408 = UINT64_MAX;
	uint64_t t66 = 1946515649245364966LLU;

	t66 = ((x405-x406)|(x407*x408));

	if (t66 != 18446744071562084307LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x409 = -235;
	static int8_t x410 = INT8_MAX;
	int16_t x411 = -197;
	volatile int32_t x412 = 142;

	t67 = ((x409-x410)|(x411*x412));

	if (t67 != -322) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x413 = -1;
	static int64_t x414 = INT64_MAX;
	int8_t x415 = 56;
	static int64_t t68 = 49554053264620724LL;

	t68 = ((x413-x414)|(x415*x416));

	if (t68 != -9223372036852940856LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x433 = 1944051481U;
	int32_t x434 = 0;
	int16_t x435 = INT16_MIN;
	volatile uint32_t t69 = 54909U;

	t69 = ((x433-x434)|(x435*x436));

	if (t69 != 4292861721U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x438 = 22514U;
	static uint32_t x439 = 1430U;
	int8_t x440 = -1;
	static uint32_t t70 = 2540U;

	t70 = ((x437-x438)|(x439*x440));

	if (t70 != 4294966123U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x441 = UINT32_MAX;
	int16_t x442 = INT16_MIN;
	uint16_t x443 = 10U;
	int8_t x444 = INT8_MIN;

	t71 = ((x441-x442)|(x443*x444));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x445 = -3;
	static uint32_t x446 = UINT32_MAX;
	volatile int64_t t72 = -1LL;

	t72 = ((x445-x446)|(x447*x448));

	if (t72 != 4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x453 = -2;
	uint64_t x454 = UINT64_MAX;
	volatile int8_t x455 = INT8_MIN;
	int8_t x456 = INT8_MIN;
	static volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x453-x454)|(x455*x456));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x457 = UINT32_MAX;
	uint32_t x458 = 364655U;

	t74 = ((x457-x458)|(x459*x460));

	if (t74 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x461 = -1LL;
	volatile int16_t x462 = 19;
	uint64_t x463 = 223820027416532LLU;
	int64_t x464 = -1LL;
	uint64_t t75 = 12154864028LLU;

	t75 = ((x461-x462)|(x463*x464));

	if (t75 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x465 = UINT16_MAX;
	int16_t x467 = 1;
	int16_t x468 = -2;

	t76 = ((x465-x466)|(x467*x468));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x470 = INT16_MIN;
	int8_t x471 = -30;
	int16_t x472 = -123;
	volatile int32_t t77 = -453177910;

	t77 = ((x469-x470)|(x471*x472));

	if (t77 != 3690) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x473 = UINT64_MAX;
	uint32_t x475 = UINT32_MAX;
	int8_t x476 = 1;
	static volatile uint64_t t78 = 3214440821435945LLU;

	t78 = ((x473-x474)|(x475*x476));

	if (t78 != 4294967295LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x477 = INT32_MAX;
	int8_t x478 = INT8_MAX;
	int8_t x480 = 2;
	static int32_t t79 = 5981;

	t79 = ((x477-x478)|(x479*x480));

	if (t79 != 2147483526) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x482 = 36760580485514LL;
	int64_t x483 = 0LL;
	static uint8_t x484 = 0U;
	static int64_t t80 = -264031657786LL;

	t80 = ((x481-x482)|(x483*x484));

	if (t80 != -36760580485489LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x485 = 4U;
	uint8_t x487 = 0U;
	static int8_t x488 = INT8_MIN;

	t81 = ((x485-x486)|(x487*x488));

	if (t81 != -89) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x493 = INT8_MIN;
	volatile int64_t x494 = -283LL;
	int16_t x495 = -214;
	int16_t x496 = INT16_MAX;
	int64_t t82 = -1009495367294052562LL;

	t82 = ((x493-x494)|(x495*x496));

	if (t82 != -7012129LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x501 = INT8_MIN;
	static int64_t x502 = INT64_MIN;
	volatile int16_t x503 = INT16_MAX;
	volatile int32_t x504 = -19526;

	t83 = ((x501-x502)|(x503*x504));

	if (t83 != -58LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x509 = INT8_MAX;
	volatile int32_t x510 = -21691;
	uint32_t x512 = 5243865U;
	volatile uint32_t t84 = 1408U;

	t84 = ((x509-x510)|(x511*x512));

	if (t84 != 3580263807U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x517 = -21LL;
	int8_t x518 = 0;
	volatile int8_t x519 = INT8_MIN;
	volatile int64_t x520 = -1LL;
	volatile int64_t t85 = 14476562LL;

	t85 = ((x517-x518)|(x519*x520));

	if (t85 != -21LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x525 = INT16_MAX;
	int8_t x526 = -1;
	int64_t x528 = INT64_MAX;

	t86 = ((x525-x526)|(x527*x528));

	if (t86 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x529 = INT8_MIN;
	int16_t x530 = -1;
	volatile int64_t x531 = INT64_MIN;
	uint64_t x532 = 1LLU;
	uint64_t t87 = 792LLU;

	t87 = ((x529-x530)|(x531*x532));

	if (t87 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x533 = 2U;
	int64_t x534 = -1LL;
	int16_t x535 = 3916;
	int16_t x536 = INT16_MIN;
	volatile int64_t t88 = 2096634LL;

	t88 = ((x533-x534)|(x535*x536));

	if (t88 != -128319485LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x541 = INT16_MAX;
	int16_t x544 = INT16_MAX;
	volatile uint64_t t89 = 13815857772673LLU;

	t89 = ((x541-x542)|(x543*x544));

	if (t89 != 18446744072789983228LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x549 = 8434U;
	static int8_t x550 = -1;
	uint32_t x551 = UINT32_MAX;
	uint32_t x552 = 4U;
	static uint32_t t90 = UINT32_MAX;

	t90 = ((x549-x550)|(x551*x552));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x558 = 36;
	volatile uint32_t x559 = 62655442U;
	uint8_t x560 = 2U;
	uint32_t t91 = 286U;

	t91 = ((x557-x558)|(x559*x560));

	if (t91 != 4294967285U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x561 = INT16_MIN;
	static int64_t x562 = 271017548843LL;
	static int8_t x563 = -1;
	volatile uint8_t x564 = UINT8_MAX;
	static volatile int64_t t92 = 128697332LL;

	t92 = ((x561-x562)|(x563*x564));

	if (t92 != -43LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x573 = 1U;
	static volatile uint32_t x574 = 649296706U;
	int8_t x575 = -1;
	int64_t x576 = 57288607414LL;
	int64_t t93 = 18789518LL;

	t93 = ((x573-x574)|(x575*x576));

	if (t93 != -55945871873LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x579 = 3;
	volatile uint16_t x580 = UINT16_MAX;
	static volatile int32_t t94 = -61;

	t94 = ((x577-x578)|(x579*x580));

	if (t94 != 196605) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x586 = INT8_MAX;
	static uint16_t x587 = UINT16_MAX;
	int16_t x588 = INT16_MIN;
	static volatile int32_t t95 = -13090478;

	t95 = ((x585-x586)|(x587*x588));

	if (t95 != -126) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x590 = 254U;
	static int16_t x591 = INT16_MAX;
	uint16_t x592 = 1U;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = ((x589-x590)|(x591*x592));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x594 = 117864452167487093LL;
	static int16_t x595 = -1;
	static int8_t x596 = INT8_MIN;
	volatile int64_t t97 = 18LL;

	t97 = ((x593-x594)|(x595*x596));

	if (t97 != -117864452167519861LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x603 = 38U;

	t98 = ((x601-x602)|(x603*x604));

	if (t98 != 4294967291U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x605 = 3;
	volatile int64_t x606 = -1LL;
	int16_t x607 = INT16_MIN;
	volatile uint64_t x608 = 16007412LLU;
	static volatile uint64_t t99 = 502437127056778LLU;

	t99 = ((x605-x606)|(x607*x608));

	if (t99 != 18446743549178675204LLU) { NG(); } else { ; }
	
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

