#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x1 = UINT8_MAX;
uint16_t x2 = 6U;
int32_t x3 = INT32_MIN;
uint32_t t1 = 0U;
int16_t x20 = INT16_MAX;
volatile int64_t x28 = -1LL;
static volatile int64_t t4 = -3400343LL;
int64_t x33 = -41018698846LL;
static int64_t x59 = INT64_MIN;
int64_t x70 = INT64_MAX;
uint8_t x80 = 2U;
volatile int32_t x86 = -1;
int8_t x87 = INT8_MIN;
static int64_t x101 = INT64_MIN;
static uint32_t x104 = 729162219U;
volatile uint32_t t14 = 59U;
int64_t x117 = INT64_MAX;
uint16_t x118 = 158U;
uint16_t x119 = 5750U;
static int8_t x122 = 57;
volatile int32_t t19 = 2;
int8_t x138 = 8;
volatile int32_t t20 = -3;
uint8_t x144 = 5U;
uint64_t x184 = 241935777LLU;
static int64_t x191 = INT64_MIN;
int32_t x193 = -9356;
uint32_t x202 = UINT32_MAX;
volatile int64_t t29 = 74521901451766LL;
int16_t x223 = 9033;
int64_t t30 = -598909LL;
volatile int8_t x261 = -13;
int16_t x266 = INT16_MIN;
volatile uint64_t t35 = 3331501541195522819LLU;
uint8_t x271 = 3U;
static int32_t x274 = INT32_MIN;
volatile int32_t x277 = INT32_MAX;
int32_t x280 = -1;
uint32_t x283 = UINT32_MAX;
uint32_t t40 = 345U;
uint32_t x299 = 9591750U;
int8_t x300 = 13;
volatile uint64_t x305 = UINT64_MAX;
uint16_t x306 = 14176U;
volatile int32_t t43 = -85469;
int32_t x318 = INT32_MAX;
uint64_t x319 = UINT64_MAX;
volatile int8_t x323 = INT8_MIN;
uint64_t x325 = UINT64_MAX;
volatile uint16_t x348 = 907U;
int8_t x352 = INT8_MIN;
static int8_t x370 = -4;
volatile int32_t x394 = 2072;
static int16_t x395 = INT16_MIN;
int8_t x412 = 32;
static volatile int64_t t53 = -8495932888LL;
volatile int8_t x422 = INT8_MAX;
uint16_t x424 = 111U;
volatile int16_t x428 = INT16_MIN;
uint16_t x435 = 5708U;
volatile int16_t x437 = INT16_MIN;
uint32_t x459 = 2917U;
static volatile uint32_t t58 = 69U;
uint16_t x473 = 13810U;
int32_t x475 = INT32_MAX;
uint64_t t60 = 18382098386505LLU;
uint32_t x489 = 824310050U;
uint32_t x490 = 1753971584U;
uint16_t x492 = 1U;
volatile int32_t t61 = -1091;
volatile int16_t x499 = INT16_MIN;
int16_t x500 = INT16_MIN;
int16_t x504 = -42;
int32_t x595 = -2;
int64_t x597 = 80987313529816LL;
int64_t x598 = INT64_MIN;
volatile uint16_t x599 = 1117U;
int64_t x613 = -1LL;
int8_t x615 = INT8_MIN;
static uint16_t x621 = UINT16_MAX;
uint16_t x622 = 0U;
uint32_t x623 = 1371U;
static uint16_t x624 = 3U;
static uint16_t x627 = 66U;
int32_t x628 = -1;
static int8_t x632 = -5;
int8_t x641 = -1;
int64_t x645 = INT64_MAX;
uint64_t t79 = 5191708655064119636LLU;
volatile int64_t x666 = 5LL;
static int16_t x668 = 102;
uint32_t x673 = 0U;
int8_t x674 = INT8_MAX;
int64_t x675 = 6414213039661788LL;
static int32_t x683 = 9203997;
int32_t x697 = INT32_MAX;
volatile uint32_t t87 = 11U;
int16_t x702 = INT16_MIN;
int64_t x713 = -546817194085LL;
int8_t x715 = -14;
int64_t x716 = 3LL;
int64_t x721 = INT64_MIN;
static uint32_t x723 = UINT32_MAX;
volatile uint32_t t90 = 28953U;
static uint32_t x732 = 63U;
int16_t x741 = -8004;
uint32_t x742 = 4564591U;
static int16_t x748 = INT16_MAX;
int64_t t95 = 1486372667620117LL;
int8_t x770 = -3;


void f0(void) {
	static uint8_t x4 = 3U;
	volatile int32_t t0 = -7;

	t0 = ((x1<=x2)%(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = UINT8_MAX;
	volatile int16_t x14 = INT16_MIN;
	uint32_t x15 = 3054366U;
	uint16_t x16 = 30715U;

	t1 = ((x13<=x14)%(x15/x16));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x17 = 981799LLU;
	int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MAX;
	static volatile int32_t t2 = 516;

	t2 = ((x17<=x18)%(x19/x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MAX;
	uint64_t x26 = 59LLU;
	uint64_t x27 = UINT64_MAX;
	volatile uint64_t t3 = 483141LLU;

	t3 = ((x25<=x26)%(x27/x28));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x29 = -1;
	volatile uint64_t x30 = UINT64_MAX;
	static int64_t x31 = 782733985LL;
	int16_t x32 = INT16_MIN;

	t4 = ((x29<=x30)%(x31/x32));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x34 = 61071762U;
	static volatile int64_t x35 = INT64_MAX;
	int64_t x36 = -687350870411601LL;
	int64_t t5 = -600348647858278LL;

	t5 = ((x33<=x34)%(x35/x36));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = -1;
	int16_t x42 = -46;
	volatile uint64_t x43 = UINT64_MAX;
	int64_t x44 = INT64_MIN;
	volatile uint64_t t6 = 27807873023243486LLU;

	t6 = ((x41<=x42)%(x43/x44));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x57 = 48U;
	uint32_t x58 = 13883795U;
	int64_t x60 = -12692398542958LL;
	int64_t t7 = -1397250375350804245LL;

	t7 = ((x57<=x58)%(x59/x60));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x69 = 27;
	uint16_t x71 = 391U;
	int8_t x72 = INT8_MIN;
	int32_t t8 = 37538034;

	t8 = ((x69<=x70)%(x71/x72));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x77 = -1;
	static volatile int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	int32_t t9 = -3954;

	t9 = ((x77<=x78)%(x79/x80));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x81 = 2U;
	int32_t x82 = INT32_MIN;
	uint64_t x83 = UINT64_MAX;
	uint16_t x84 = 2944U;
	volatile uint64_t t10 = 666469LLU;

	t10 = ((x81<=x82)%(x83/x84));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x85 = 1U;
	uint64_t x88 = 2793952585LLU;
	static uint64_t t11 = 301983467571LLU;

	t11 = ((x85<=x86)%(x87/x88));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x89 = 959441LLU;
	uint16_t x90 = 2U;
	int8_t x91 = INT8_MAX;
	volatile int16_t x92 = -1;
	static volatile int32_t t12 = -186687;

	t12 = ((x89<=x90)%(x91/x92));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x93 = 1413LLU;
	static int32_t x94 = 454717392;
	static uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t13 = -15174154;

	t13 = ((x93<=x94)%(x95/x96));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x102 = INT16_MAX;
	int16_t x103 = INT16_MIN;

	t14 = ((x101<=x102)%(x103/x104));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x105 = 29803438LLU;
	int16_t x106 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	uint8_t x108 = 2U;
	static volatile int32_t t15 = -6934;

	t15 = ((x105<=x106)%(x107/x108));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x120 = 2994;
	int32_t t16 = 456;

	t16 = ((x117<=x118)%(x119/x120));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x121 = -132327115LL;
	volatile uint64_t x123 = 1860006270315360971LLU;
	uint8_t x124 = 1U;
	uint64_t t17 = 4428141LLU;

	t17 = ((x121<=x122)%(x123/x124));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x129 = INT32_MIN;
	int8_t x130 = INT8_MIN;
	uint64_t x131 = 167148933097LLU;
	volatile int16_t x132 = 1105;
	volatile uint64_t t18 = 20247801802LLU;

	t18 = ((x129<=x130)%(x131/x132));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x133 = -101;
	uint8_t x134 = 94U;
	uint16_t x135 = 14634U;
	static uint16_t x136 = 6826U;

	t19 = ((x133<=x134)%(x135/x136));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x137 = -1;
	int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MAX;

	t20 = ((x137<=x138)%(x139/x140));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x141 = INT64_MAX;
	static int64_t x142 = -1LL;
	int8_t x143 = INT8_MIN;
	int32_t t21 = -1;

	t21 = ((x141<=x142)%(x143/x144));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x181 = -1;
	int16_t x182 = -332;
	int16_t x183 = -111;
	static volatile uint64_t t22 = 86085096872LLU;

	t22 = ((x181<=x182)%(x183/x184));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x185 = INT64_MAX;
	uint8_t x186 = 4U;
	int16_t x187 = -1;
	uint8_t x188 = 1U;
	int32_t t23 = -25;

	t23 = ((x185<=x186)%(x187/x188));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x189 = 0;
	uint64_t x190 = 310636884618LLU;
	uint64_t x192 = 2963278LLU;
	static uint64_t t24 = 120576259855LLU;

	t24 = ((x189<=x190)%(x191/x192));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x194 = 125374;
	int64_t x195 = INT64_MAX;
	uint64_t x196 = 26760461980358487LLU;
	volatile uint64_t t25 = 17LLU;

	t25 = ((x193<=x194)%(x195/x196));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x197 = UINT8_MAX;
	volatile int64_t x198 = -968916252LL;
	static volatile uint64_t x199 = 346LLU;
	int8_t x200 = INT8_MAX;
	static volatile uint64_t t26 = 14288381LLU;

	t26 = ((x197<=x198)%(x199/x200));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x201 = 10337U;
	static volatile int64_t x203 = INT64_MIN;
	volatile int64_t x204 = 270441300374656162LL;
	volatile int64_t t27 = -4277LL;

	t27 = ((x201<=x202)%(x203/x204));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x209 = -4699;
	static int16_t x210 = INT16_MIN;
	uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MAX;
	volatile uint32_t t28 = 340564U;

	t28 = ((x209<=x210)%(x211/x212));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x217 = -1;
	static volatile uint32_t x218 = UINT32_MAX;
	int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MAX;

	t29 = ((x217<=x218)%(x219/x220));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x221 = 59U;
	static int64_t x222 = INT64_MAX;
	int64_t x224 = -1LL;

	t30 = ((x221<=x222)%(x223/x224));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x241 = 7831;
	uint8_t x242 = 34U;
	int32_t x243 = INT32_MIN;
	volatile int16_t x244 = INT16_MIN;
	int32_t t31 = 682710;

	t31 = ((x241<=x242)%(x243/x244));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x245 = 8075712199572LLU;
	static int32_t x246 = INT32_MAX;
	int64_t x247 = -1LL;
	uint64_t x248 = 6424916323035714784LLU;
	static uint64_t t32 = 506LLU;

	t32 = ((x245<=x246)%(x247/x248));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x253 = -40;
	uint32_t x254 = 22310U;
	static int64_t x255 = -218062885LL;
	int16_t x256 = INT16_MIN;
	int64_t t33 = 852821LL;

	t33 = ((x253<=x254)%(x255/x256));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x262 = 9674099141518922LLU;
	volatile int32_t x263 = INT32_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t34 = 15140908;

	t34 = ((x261<=x262)%(x263/x264));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x265 = 1U;
	int64_t x267 = INT64_MAX;
	static uint64_t x268 = 1LLU;

	t35 = ((x265<=x266)%(x267/x268));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x269 = 9U;
	static volatile int32_t x270 = INT32_MIN;
	volatile int8_t x272 = -1;
	volatile int32_t t36 = 475493688;

	t36 = ((x269<=x270)%(x271/x272));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x273 = 1629LL;
	int16_t x275 = INT16_MIN;
	int8_t x276 = 56;
	volatile int32_t t37 = 27019;

	t37 = ((x273<=x274)%(x275/x276));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x278 = 15030U;
	int64_t x279 = -3LL;
	int64_t t38 = 969807709720906728LL;

	t38 = ((x277<=x278)%(x279/x280));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x281 = -105LL;
	uint16_t x282 = 65U;
	static volatile int8_t x284 = -46;
	uint32_t t39 = 305457U;

	t39 = ((x281<=x282)%(x283/x284));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x293 = 228;
	int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	static uint32_t x296 = 9740U;

	t40 = ((x293<=x294)%(x295/x296));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = -1;
	uint32_t t41 = 497U;

	t41 = ((x297<=x298)%(x299/x300));

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x307 = INT64_MAX;
	volatile int32_t x308 = INT32_MIN;
	volatile int64_t t42 = 13261787LL;

	t42 = ((x305<=x306)%(x307/x308));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x309 = UINT64_MAX;
	int8_t x310 = -1;
	int32_t x311 = INT32_MIN;
	int16_t x312 = -109;

	t43 = ((x309<=x310)%(x311/x312));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x317 = INT64_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile uint64_t t44 = 1765797LLU;

	t44 = ((x317<=x318)%(x319/x320));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x321 = UINT64_MAX;
	volatile uint8_t x322 = UINT8_MAX;
	uint64_t x324 = 858786601LLU;
	uint64_t t45 = 9872LLU;

	t45 = ((x321<=x322)%(x323/x324));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x326 = -1;
	uint32_t x327 = UINT32_MAX;
	uint8_t x328 = UINT8_MAX;
	volatile uint32_t t46 = 44500U;

	t46 = ((x325<=x326)%(x327/x328));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x345 = 953U;
	uint8_t x346 = UINT8_MAX;
	static int64_t x347 = INT64_MIN;
	int64_t t47 = 61997076150LL;

	t47 = ((x345<=x346)%(x347/x348));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x349 = INT16_MAX;
	volatile int32_t x350 = INT32_MIN;
	volatile int32_t x351 = 485525251;
	static int32_t t48 = -52;

	t48 = ((x349<=x350)%(x351/x352));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x361 = -1;
	int32_t x362 = 1284;
	volatile int8_t x363 = INT8_MIN;
	static int8_t x364 = INT8_MAX;
	volatile int32_t t49 = 1036;

	t49 = ((x361<=x362)%(x363/x364));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x369 = -1;
	static int64_t x371 = INT64_MAX;
	int32_t x372 = INT32_MIN;
	int64_t t50 = -5675LL;

	t50 = ((x369<=x370)%(x371/x372));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x393 = 143LLU;
	int8_t x396 = INT8_MIN;
	static int32_t t51 = -26598857;

	t51 = ((x393<=x394)%(x395/x396));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x401 = INT8_MAX;
	uint8_t x402 = UINT8_MAX;
	int64_t x403 = 675374644235646LL;
	volatile int64_t x404 = -1LL;
	int64_t t52 = 510088109LL;

	t52 = ((x401<=x402)%(x403/x404));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x409 = INT32_MIN;
	int16_t x410 = INT16_MAX;
	volatile int64_t x411 = 43270193577146LL;

	t53 = ((x409<=x410)%(x411/x412));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x421 = -1;
	int32_t x423 = INT32_MIN;
	int32_t t54 = -3307287;

	t54 = ((x421<=x422)%(x423/x424));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x425 = 3587791;
	static uint64_t x426 = 103575202LLU;
	uint32_t x427 = UINT32_MAX;
	static uint32_t t55 = 83U;

	t55 = ((x425<=x426)%(x427/x428));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x433 = -19136;
	uint64_t x434 = UINT64_MAX;
	int8_t x436 = -18;
	int32_t t56 = 2735092;

	t56 = ((x433<=x434)%(x435/x436));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x438 = 10;
	int64_t x439 = INT64_MIN;
	int64_t x440 = -4427463272LL;
	volatile int64_t t57 = 3463619418361312276LL;

	t57 = ((x437<=x438)%(x439/x440));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x457 = UINT16_MAX;
	volatile int16_t x458 = 275;
	static int8_t x460 = INT8_MAX;

	t58 = ((x457<=x458)%(x459/x460));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x461 = 45U;
	int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MIN;
	static volatile int8_t x464 = INT8_MIN;
	int32_t t59 = -12498;

	t59 = ((x461<=x462)%(x463/x464));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x474 = 154U;
	uint64_t x476 = 122546LLU;

	t60 = ((x473<=x474)%(x475/x476));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x491 = -14;

	t61 = ((x489<=x490)%(x491/x492));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x497 = INT16_MIN;
	uint64_t x498 = UINT64_MAX;
	static volatile int32_t t62 = 0;

	t62 = ((x497<=x498)%(x499/x500));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x501 = -1;
	int16_t x502 = INT16_MIN;
	static int8_t x503 = INT8_MAX;
	volatile int32_t t63 = 211132326;

	t63 = ((x501<=x502)%(x503/x504));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x505 = -401;
	uint16_t x506 = 8U;
	int16_t x507 = -1;
	uint64_t x508 = 1016766LLU;
	static volatile uint64_t t64 = 1489LLU;

	t64 = ((x505<=x506)%(x507/x508));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x533 = -1LL;
	uint8_t x534 = 3U;
	volatile uint8_t x535 = UINT8_MAX;
	volatile int16_t x536 = 36;
	volatile int32_t t65 = -3983;

	t65 = ((x533<=x534)%(x535/x536));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x537 = -1;
	int8_t x538 = 1;
	int32_t x539 = 11428230;
	volatile int8_t x540 = INT8_MAX;
	int32_t t66 = -437;

	t66 = ((x537<=x538)%(x539/x540));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x569 = UINT16_MAX;
	static int8_t x570 = INT8_MIN;
	int64_t x571 = INT64_MIN;
	int8_t x572 = 23;
	volatile int64_t t67 = -1LL;

	t67 = ((x569<=x570)%(x571/x572));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x577 = INT16_MAX;
	uint32_t x578 = UINT32_MAX;
	static int16_t x579 = INT16_MIN;
	int8_t x580 = INT8_MAX;
	volatile int32_t t68 = 107;

	t68 = ((x577<=x578)%(x579/x580));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x581 = 103065U;
	int8_t x582 = -1;
	volatile uint64_t x583 = 6479675277440332332LLU;
	uint32_t x584 = 1U;
	volatile uint64_t t69 = 15185052914LLU;

	t69 = ((x581<=x582)%(x583/x584));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x593 = 192608U;
	static int32_t x594 = 516;
	int64_t x596 = -1LL;
	int64_t t70 = 9728LL;

	t70 = ((x593<=x594)%(x595/x596));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x600 = UINT8_MAX;
	static volatile int32_t t71 = 21;

	t71 = ((x597<=x598)%(x599/x600));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x609 = -1;
	static uint16_t x610 = UINT16_MAX;
	uint32_t x611 = 64509U;
	uint16_t x612 = 121U;
	static volatile uint32_t t72 = 66997228U;

	t72 = ((x609<=x610)%(x611/x612));

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x614 = INT16_MAX;
	static int16_t x616 = -24;
	volatile int32_t t73 = 417;

	t73 = ((x613<=x614)%(x615/x616));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t t74 = 440260U;

	t74 = ((x621<=x622)%(x623/x624));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x625 = INT16_MIN;
	int8_t x626 = 1;
	volatile int32_t t75 = 7822;

	t75 = ((x625<=x626)%(x627/x628));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x629 = -23089746738LL;
	uint64_t x630 = UINT64_MAX;
	static uint64_t x631 = UINT64_MAX;
	static uint64_t t76 = 30013091379938966LLU;

	t76 = ((x629<=x630)%(x631/x632));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x642 = INT16_MIN;
	volatile int64_t x643 = -1LL;
	int8_t x644 = -1;
	static int64_t t77 = 5899306399004102LL;

	t77 = ((x641<=x642)%(x643/x644));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x646 = 1692U;
	int32_t x647 = INT32_MAX;
	int16_t x648 = -25;
	static volatile int32_t t78 = -587;

	t78 = ((x645<=x646)%(x647/x648));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x649 = -1;
	uint8_t x650 = 19U;
	int8_t x651 = INT8_MIN;
	volatile uint64_t x652 = 120169LLU;

	t79 = ((x649<=x650)%(x651/x652));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x653 = -24;
	static int8_t x654 = INT8_MIN;
	static volatile int32_t x655 = INT32_MAX;
	int16_t x656 = -1;
	int32_t t80 = -244638;

	t80 = ((x653<=x654)%(x655/x656));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x661 = -1LL;
	uint32_t x662 = 573364U;
	volatile int16_t x663 = INT16_MIN;
	static volatile int8_t x664 = INT8_MIN;
	int32_t t81 = 359929049;

	t81 = ((x661<=x662)%(x663/x664));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x665 = INT16_MIN;
	static uint16_t x667 = UINT16_MAX;
	volatile int32_t t82 = 27;

	t82 = ((x665<=x666)%(x667/x668));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x676 = -1;
	int64_t t83 = -148LL;

	t83 = ((x673<=x674)%(x675/x676));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x677 = 2U;
	int32_t x678 = -1633;
	int64_t x679 = INT64_MIN;
	uint16_t x680 = 171U;
	int64_t t84 = 9085LL;

	t84 = ((x677<=x678)%(x679/x680));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x681 = 3U;
	int8_t x682 = 11;
	static int16_t x684 = 393;
	int32_t t85 = -363270391;

	t85 = ((x681<=x682)%(x683/x684));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x689 = 2U;
	uint64_t x690 = UINT64_MAX;
	int64_t x691 = 4390278125226LL;
	uint32_t x692 = 1062375053U;
	static int64_t t86 = -51775729LL;

	t86 = ((x689<=x690)%(x691/x692));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x698 = INT16_MIN;
	volatile uint32_t x699 = UINT32_MAX;
	volatile int32_t x700 = INT32_MAX;

	t87 = ((x697<=x698)%(x699/x700));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x701 = INT64_MIN;
	static volatile int64_t x703 = INT64_MIN;
	volatile int16_t x704 = 1;
	int64_t t88 = 28LL;

	t88 = ((x701<=x702)%(x703/x704));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x714 = INT8_MIN;
	int64_t t89 = -280975503483355LL;

	t89 = ((x713<=x714)%(x715/x716));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x722 = 494757105437LLU;
	static int8_t x724 = -48;

	t90 = ((x721<=x722)%(x723/x724));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x729 = INT64_MIN;
	int64_t x730 = INT64_MIN;
	int64_t x731 = INT64_MAX;
	static int64_t t91 = 9287008LL;

	t91 = ((x729<=x730)%(x731/x732));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x743 = INT64_MIN;
	uint8_t x744 = UINT8_MAX;
	volatile int64_t t92 = 48LL;

	t92 = ((x741<=x742)%(x743/x744));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x745 = -1;
	uint8_t x746 = UINT8_MAX;
	int32_t x747 = INT32_MIN;
	static int32_t t93 = -31276;

	t93 = ((x745<=x746)%(x747/x748));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x753 = 5U;
	int64_t x754 = INT64_MIN;
	volatile int64_t x755 = 82822858106479LL;
	static uint8_t x756 = UINT8_MAX;
	static int64_t t94 = -28051758932LL;

	t94 = ((x753<=x754)%(x755/x756));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x761 = 14LLU;
	uint64_t x762 = 289293708144LLU;
	static volatile int64_t x763 = INT64_MAX;
	int8_t x764 = INT8_MAX;

	t95 = ((x761<=x762)%(x763/x764));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x765 = INT16_MIN;
	volatile int32_t x766 = INT32_MIN;
	volatile int8_t x767 = -26;
	int64_t x768 = -1LL;
	int64_t t96 = -18483923102838180LL;

	t96 = ((x765<=x766)%(x767/x768));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x769 = -476996;
	volatile int8_t x771 = INT8_MIN;
	int64_t x772 = 127LL;
	static int64_t t97 = 2337606371LL;

	t97 = ((x769<=x770)%(x771/x772));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x781 = 24060776550076LL;
	volatile int32_t x782 = INT32_MIN;
	int64_t x783 = 344307523724LL;
	int32_t x784 = INT32_MAX;
	volatile int64_t t98 = -1LL;

	t98 = ((x781<=x782)%(x783/x784));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x793 = 1;
	volatile uint8_t x794 = 2U;
	uint32_t x795 = 2844970U;
	static int8_t x796 = INT8_MAX;
	volatile uint32_t t99 = 956847U;

	t99 = ((x793<=x794)%(x795/x796));

	if (t99 != 1U) { NG(); } else { ; }
	
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

