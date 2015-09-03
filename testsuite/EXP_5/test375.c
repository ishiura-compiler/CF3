#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -224816934;
int8_t x2 = -1;
static uint16_t x9 = 4540U;
volatile uint16_t x10 = 10U;
int8_t x15 = 1;
static volatile uint8_t x18 = 0U;
static int64_t t4 = 2042001733242LL;
volatile int64_t t7 = 121059033926614033LL;
int16_t x43 = -114;
int8_t x44 = -1;
uint64_t t11 = 743LLU;
int8_t x75 = 6;
int8_t x78 = INT8_MIN;
uint64_t t14 = 5787700126816453LLU;
uint64_t x92 = 909LLU;
uint32_t x94 = 1104806U;
static volatile int64_t t17 = -11009594LL;
static uint64_t x115 = 38630156542LLU;
uint64_t t19 = 104LLU;
volatile int8_t x118 = 6;
int16_t x119 = INT16_MAX;
uint64_t x120 = 59774395LLU;
static uint32_t x143 = 36U;
int8_t x158 = INT8_MIN;
int8_t x164 = INT8_MAX;
uint32_t t27 = 938489U;
uint8_t x190 = UINT8_MAX;
int64_t x201 = INT64_MAX;
volatile int64_t t31 = 8194235301667578LL;
static uint16_t x206 = UINT16_MAX;
uint8_t x209 = 0U;
static int32_t x211 = 799;
int64_t t33 = 58967567784994LL;
static int8_t x218 = -1;
int8_t x219 = -27;
uint32_t x223 = 5356U;
int32_t x265 = -28370;
uint16_t x273 = 3198U;
volatile uint64_t t41 = 515LLU;
uint64_t x287 = UINT64_MAX;
volatile uint64_t t43 = 2823591596634684640LLU;
uint32_t x291 = UINT32_MAX;
static uint64_t t44 = 2010463623521090724LLU;
int16_t x295 = -1862;
uint16_t x314 = 29U;
static uint64_t x326 = 32902650657279LLU;
uint32_t x361 = 20057U;
uint32_t x363 = 1684449169U;
static volatile int8_t x364 = -1;
int16_t x365 = 3846;
volatile uint8_t x370 = 0U;
int16_t x379 = -94;
static volatile int32_t x388 = -1;
int32_t x389 = INT32_MAX;
static uint32_t x391 = UINT32_MAX;
int8_t x405 = INT8_MIN;
volatile int16_t x416 = -1;
int64_t t61 = -500494259108977495LL;
int8_t x427 = INT8_MAX;
uint32_t x428 = 5545U;
static uint32_t t62 = 729000043U;
int16_t x435 = INT16_MAX;
volatile int64_t x462 = -6713418LL;
int32_t x484 = 2605345;
static uint16_t x491 = UINT16_MAX;
int32_t x492 = -1;
int32_t x495 = -1;
volatile uint64_t t74 = 16908040505453781LLU;
static volatile int16_t x514 = INT16_MIN;
static int8_t x516 = -1;
uint32_t x521 = UINT32_MAX;
int32_t x538 = -4;
volatile uint64_t t78 = 8440LLU;
uint64_t t79 = 7203LLU;
int16_t x563 = 0;
volatile int64_t t83 = -92158529709LL;
uint64_t x580 = 6292789850217724LLU;
uint32_t x586 = 1U;
volatile uint8_t x596 = UINT8_MAX;
static int16_t x598 = -3150;
volatile uint64_t x602 = UINT64_MAX;
uint64_t t88 = 228LLU;
uint64_t x606 = UINT64_MAX;
int32_t x608 = -1;
int32_t x613 = 28;
int8_t x615 = -1;
int16_t x616 = INT16_MIN;
int32_t x617 = -21904;
volatile int64_t x620 = INT64_MIN;
int64_t t91 = -4668762081051LL;
volatile uint64_t t92 = 3791LLU;
static int64_t x644 = -1LL;
static volatile int8_t x658 = 1;
uint64_t x659 = 3071LLU;
static uint32_t t96 = 1977211050U;
uint16_t x665 = 2149U;
static volatile uint64_t t97 = 34445867LLU;
int8_t x673 = INT8_MAX;
int32_t t99 = -20927;


void f0(void) {
	static uint8_t x3 = 30U;
	int16_t x4 = -1;
	int32_t t0 = -7;

	t0 = (x1&((x2*x3)*x4));

	if (t0 != 26) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x11 = -1;
	uint8_t x12 = 9U;
	volatile int32_t t1 = 14339845;

	t1 = (x9&((x10*x11)*x12));

	if (t1 != 4516) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = UINT32_MAX;
	uint64_t x14 = 1831LLU;
	static volatile int32_t x16 = -1634;
	volatile uint64_t t2 = 3LLU;

	t2 = (x13&((x14*x15)*x16));

	if (t2 != 4291975442LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MIN;
	int8_t x19 = INT8_MAX;
	volatile int16_t x20 = 325;
	static volatile int64_t t3 = 4266425LL;

	t3 = (x17&((x18*x19)*x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MAX;
	int64_t x23 = -1LL;
	volatile uint32_t x24 = 1U;

	t4 = (x21&((x22*x23)*x24));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 1032672U;
	uint8_t x26 = UINT8_MAX;
	int64_t x27 = -1LL;
	static volatile int64_t x28 = -1LL;
	static volatile int64_t t5 = -3344037854764932LL;

	t5 = (x25&((x26*x27)*x28));

	if (t5 != 224LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 229833967LLU;
	uint32_t x30 = 439640335U;
	volatile int16_t x31 = INT16_MIN;
	volatile uint8_t x32 = 2U;
	volatile uint64_t t6 = 35LLU;

	t6 = (x29&((x30*x31)*x32));

	if (t6 != 212860928LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	static int64_t x34 = -1LL;
	static uint16_t x35 = UINT16_MAX;
	int16_t x36 = 0;

	t7 = (x33&((x34*x35)*x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -1320;
	int8_t x42 = INT8_MIN;
	int32_t t8 = -483703;

	t8 = (x41&((x42*x43)*x44));

	if (t8 != -15872) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 146783450LLU;
	static int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -1;
	static uint64_t t9 = 764LLU;

	t9 = (x49&((x50*x51)*x52));

	if (t9 != 142606336LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	static int64_t x54 = -1LL;
	int64_t x55 = INT64_MAX;
	int64_t x56 = -1LL;
	int64_t t10 = 1622531299318LL;

	t10 = (x53&((x54*x55)*x56));

	if (t10 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x61 = 1297U;
	static volatile int32_t x62 = INT32_MIN;
	uint64_t x63 = 4980LLU;
	static int64_t x64 = -1LL;

	t11 = (x61&((x62*x63)*x64));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x73 = 12U;
	static uint8_t x74 = 6U;
	int16_t x76 = 0;
	volatile int32_t t12 = 1;

	t12 = (x73&((x74*x75)*x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = UINT32_MAX;
	int8_t x79 = INT8_MIN;
	static int16_t x80 = INT16_MIN;
	uint32_t t13 = 39044877U;

	t13 = (x77&((x78*x79)*x80));

	if (t13 != 3758096384U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 1U;
	static uint64_t x82 = 1003680LLU;
	volatile uint32_t x83 = UINT32_MAX;
	uint64_t x84 = UINT64_MAX;

	t14 = (x81&((x82*x83)*x84));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x89 = -1LL;
	int64_t x90 = 1LL;
	int64_t x91 = INT64_MIN;
	uint64_t t15 = 8207775019345810550LLU;

	t15 = (x89&((x90*x91)*x92));

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x93 = UINT16_MAX;
	static volatile int32_t x95 = INT32_MIN;
	uint8_t x96 = 1U;
	volatile uint32_t t16 = 41U;

	t16 = (x93&((x94*x95)*x96));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = INT64_MAX;
	volatile int16_t x102 = -1;
	int64_t x103 = -1LL;
	uint16_t x104 = UINT16_MAX;

	t17 = (x101&((x102*x103)*x104));

	if (t17 != 65535LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x109 = UINT16_MAX;
	int8_t x110 = -18;
	int16_t x111 = INT16_MIN;
	int8_t x112 = 1;
	int32_t t18 = 765;

	t18 = (x109&((x110*x111)*x112));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x113 = -2246443;
	int64_t x114 = INT64_MIN;
	int16_t x116 = INT16_MAX;

	t19 = (x113&((x114*x115)*x116));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = UINT32_MAX;
	static volatile uint64_t t20 = 523842426232886LLU;

	t20 = (x117&((x118*x119)*x120));

	if (t20 != 735083934LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = INT8_MIN;
	static int16_t x126 = INT16_MIN;
	uint32_t x127 = 0U;
	static uint64_t x128 = UINT64_MAX;
	uint64_t t21 = 5699594006149151LLU;

	t21 = (x125&((x126*x127)*x128));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x137 = INT8_MIN;
	static int32_t x138 = -1;
	int32_t x139 = 52944;
	uint16_t x140 = 16089U;
	volatile int32_t t22 = 1698;

	t22 = (x137&((x138*x139)*x140));

	if (t22 != -851816064) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x141 = 0U;
	int16_t x142 = INT16_MIN;
	int16_t x144 = -63;
	uint32_t t23 = 3143U;

	t23 = (x141&((x142*x143)*x144));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x145 = 49U;
	uint64_t x146 = 1015LLU;
	int16_t x147 = INT16_MIN;
	static int8_t x148 = INT8_MAX;
	static uint64_t t24 = 1061367427328453LLU;

	t24 = (x145&((x146*x147)*x148));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x154 = 153U;
	volatile uint64_t x155 = 5407LLU;
	uint8_t x156 = 1U;
	uint64_t t25 = 6231063131200105478LLU;

	t25 = (x153&((x154*x155)*x156));

	if (t25 != 135LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x157 = -36;
	int64_t x159 = -4940058LL;
	int8_t x160 = -31;
	volatile int64_t t26 = 955997LL;

	t26 = (x157&((x158*x159)*x160));

	if (t26 != -19602150144LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x161 = 10U;
	static int16_t x162 = INT16_MIN;
	uint32_t x163 = 446678286U;

	t27 = (x161&((x162*x163)*x164));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MAX;
	int8_t x171 = INT8_MIN;
	uint32_t x172 = UINT32_MAX;
	uint32_t t28 = 388953501U;

	t28 = (x169&((x170*x171)*x172));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x189 = 375U;
	uint32_t x191 = UINT32_MAX;
	uint8_t x192 = UINT8_MAX;
	volatile uint32_t t29 = 0U;

	t29 = (x189&((x190*x191)*x192));

	if (t29 != 375U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x197 = 25;
	int32_t x198 = -66313243;
	int64_t x199 = -1LL;
	int32_t x200 = INT32_MIN;
	int64_t t30 = -1925580938289LL;

	t30 = (x197&((x198*x199)*x200));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x202 = INT8_MAX;
	static uint32_t x203 = 28882U;
	int16_t x204 = 0;

	t31 = (x201&((x202*x203)*x204));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x205 = 436579525;
	uint8_t x207 = 1U;
	uint8_t x208 = 35U;
	int32_t t32 = 14;

	t32 = (x205&((x206*x207)*x208));

	if (t32 != 44229) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x210 = UINT8_MAX;
	int64_t x212 = -183426489LL;

	t33 = (x209&((x210*x211)*x212));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x217 = 1LLU;
	static int8_t x220 = -1;
	volatile uint64_t t34 = 242042402257LLU;

	t34 = (x217&((x218*x219)*x220));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x221 = INT64_MAX;
	volatile uint8_t x222 = 1U;
	int8_t x224 = -1;
	volatile int64_t t35 = 7913948719757902LL;

	t35 = (x221&((x222*x223)*x224));

	if (t35 != 4294961940LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x237 = 820U;
	int16_t x238 = INT16_MIN;
	static int64_t x239 = 269197LL;
	volatile int8_t x240 = -1;
	int64_t t36 = 334853305LL;

	t36 = (x237&((x238*x239)*x240));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x249 = INT32_MAX;
	int32_t x250 = -56;
	int8_t x251 = INT8_MIN;
	volatile int16_t x252 = INT16_MAX;
	volatile int32_t t37 = -14;

	t37 = (x249&((x250*x251)*x252));

	if (t37 != 234873856) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x253 = 3U;
	uint16_t x254 = 208U;
	static volatile uint8_t x255 = 17U;
	static int16_t x256 = -61;
	volatile int32_t t38 = 241200878;

	t38 = (x253&((x254*x255)*x256));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x266 = INT32_MAX;
	uint16_t x267 = 0U;
	uint8_t x268 = 119U;
	int32_t t39 = 368222;

	t39 = (x265&((x266*x267)*x268));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x269 = 233689U;
	static int8_t x270 = -1;
	volatile uint8_t x271 = 10U;
	int8_t x272 = -1;
	uint32_t t40 = 55174413U;

	t40 = (x269&((x270*x271)*x272));

	if (t40 != 8U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x274 = 631;
	volatile uint32_t x275 = UINT32_MAX;
	volatile uint64_t x276 = UINT64_MAX;

	t41 = (x273&((x274*x275)*x276));

	if (t41 != 118LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x277 = INT64_MIN;
	uint8_t x278 = 4U;
	volatile uint8_t x279 = 3U;
	volatile int16_t x280 = -1;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x277&((x278*x279)*x280));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x285 = -4138;
	uint8_t x286 = 1U;
	int16_t x288 = 1;

	t43 = (x285&((x286*x287)*x288));

	if (t43 != 18446744073709547478LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x289 = INT32_MAX;
	static uint64_t x290 = 2LLU;
	int32_t x292 = INT32_MAX;

	t44 = (x289&((x290*x291)*x292));

	if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x293 = 14;
	int32_t x294 = -27;
	int8_t x296 = -3;
	static volatile int32_t t45 = -11;

	t45 = (x293&((x294*x295)*x296));

	if (t45 != 10) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x297 = 0U;
	volatile int8_t x298 = INT8_MIN;
	static int16_t x299 = INT16_MIN;
	int16_t x300 = -219;
	volatile int32_t t46 = 125;

	t46 = (x297&((x298*x299)*x300));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x313 = INT8_MAX;
	int16_t x315 = INT16_MAX;
	uint16_t x316 = 7U;
	volatile int32_t t47 = -384215603;

	t47 = (x313&((x314*x315)*x316));

	if (t47 != 53) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x321 = 0U;
	uint64_t x322 = 1LLU;
	int8_t x323 = 40;
	int8_t x324 = -1;
	volatile uint64_t t48 = 38LLU;

	t48 = (x321&((x322*x323)*x324));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x325 = 237982LL;
	int8_t x327 = INT8_MAX;
	uint32_t x328 = UINT32_MAX;
	uint64_t t49 = 1514346061LLU;

	t49 = (x325&((x326*x327)*x328));

	if (t49 != 40990LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = 7;
	static volatile uint16_t x339 = 3U;
	int8_t x340 = -1;
	volatile int32_t t50 = -94;

	t50 = (x337&((x338*x339)*x340));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x362 = 1U;
	uint32_t t51 = 2725748U;

	t51 = (x361&((x362*x363)*x364));

	if (t51 != 18505U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x366 = -2216978076LL;
	static volatile int8_t x367 = 33;
	int64_t x368 = -1LL;
	int64_t t52 = 11221865743422344LL;

	t52 = (x365&((x366*x367)*x368));

	if (t52 != 2564LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x369 = -1;
	uint64_t x371 = 229241LLU;
	int32_t x372 = -1;
	volatile uint64_t t53 = 10LLU;

	t53 = (x369&((x370*x371)*x372));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x373 = INT64_MAX;
	uint32_t x374 = UINT32_MAX;
	static uint8_t x375 = 1U;
	int8_t x376 = INT8_MIN;
	static volatile int64_t t54 = -353068650007LL;

	t54 = (x373&((x374*x375)*x376));

	if (t54 != 128LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x377 = -15307;
	static int32_t x378 = 13664;
	uint32_t x380 = UINT32_MAX;
	uint32_t t55 = 205016374U;

	t55 = (x377&((x378*x379)*x380));

	if (t55 != 1277952U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x385 = 1246479;
	static uint16_t x386 = UINT16_MAX;
	static uint64_t x387 = 149765LLU;
	volatile uint64_t t56 = 26713617990793446LLU;

	t56 = (x385&((x386*x387)*x388));

	if (t56 != 1114373LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x390 = UINT16_MAX;
	static uint64_t x392 = 116391743553189599LLU;
	uint64_t t57 = 1838724267137LLU;

	t57 = (x389&((x390*x391)*x392));

	if (t57 != 1516746463LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x406 = -1;
	int16_t x407 = INT16_MAX;
	int64_t x408 = -14231320336LL;
	int64_t t58 = 628156287943102LL;

	t58 = (x405&((x406*x407)*x408));

	if (t58 != 466317673449600LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x409 = UINT16_MAX;
	int8_t x410 = 1;
	int8_t x411 = -1;
	int16_t x412 = 19;
	int32_t t59 = 29756003;

	t59 = (x409&((x410*x411)*x412));

	if (t59 != 65517) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x413 = -1;
	static volatile int16_t x414 = -1;
	int8_t x415 = INT8_MIN;
	volatile int32_t t60 = 5;

	t60 = (x413&((x414*x415)*x416));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x417 = INT64_MAX;
	int8_t x418 = 26;
	static int16_t x419 = -1;
	volatile int8_t x420 = 3;

	t61 = (x417&((x418*x419)*x420));

	if (t61 != 9223372036854775730LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x425 = -1;
	volatile int32_t x426 = 15883;

	t62 = (x425&((x426*x427)*x428));

	if (t62 != 2595112253U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x433 = INT32_MAX;
	uint8_t x434 = UINT8_MAX;
	int8_t x436 = INT8_MIN;
	volatile int32_t t63 = -6083145;

	t63 = (x433&((x434*x435)*x436));

	if (t63 != 1077968768) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x437 = INT16_MIN;
	uint64_t x438 = UINT64_MAX;
	int32_t x439 = INT32_MIN;
	int32_t x440 = INT32_MAX;
	volatile uint64_t t64 = 255183002LLU;

	t64 = (x437&((x438*x439)*x440));

	if (t64 != 4611686016279904256LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x441 = 0U;
	uint64_t x442 = UINT64_MAX;
	volatile int8_t x443 = -1;
	int64_t x444 = INT64_MIN;
	static volatile uint64_t t65 = 10831908652030801LLU;

	t65 = (x441&((x442*x443)*x444));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x461 = 2898627LLU;
	uint64_t x463 = 9LLU;
	static int64_t x464 = 5335293160583205LL;
	uint64_t t66 = 117216777909LLU;

	t66 = (x461&((x462*x463)*x464));

	if (t66 != 2690LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x469 = INT8_MIN;
	volatile int8_t x470 = -1;
	volatile uint64_t x471 = 3730674946427621LLU;
	int32_t x472 = INT32_MIN;
	uint64_t t67 = 394494855884199882LLU;

	t67 = (x469&((x470*x471)*x472));

	if (t67 != 13365036017879351296LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x473 = INT32_MIN;
	static uint32_t x474 = 54U;
	uint64_t x475 = UINT64_MAX;
	static int32_t x476 = -1;
	static volatile uint64_t t68 = 1598653163968LLU;

	t68 = (x473&((x474*x475)*x476));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x477 = 60132;
	volatile int64_t x478 = -450LL;
	uint8_t x479 = 23U;
	int16_t x480 = -1;
	int64_t t69 = 154370408748450654LL;

	t69 = (x477&((x478*x479)*x480));

	if (t69 != 10340LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x481 = INT64_MAX;
	uint64_t x482 = UINT64_MAX;
	int32_t x483 = INT32_MAX;
	uint64_t t70 = 8884271995619366570LLU;

	t70 = (x481&((x482*x483)*x484));

	if (t70 != 9217777101072482593LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x489 = 7652;
	static int8_t x490 = INT8_MIN;
	int32_t t71 = 45;

	t71 = (x489&((x490*x491)*x492));

	if (t71 != 7552) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x493 = INT8_MAX;
	int8_t x494 = -2;
	static uint64_t x496 = 169207098LLU;
	static uint64_t t72 = 12671515LLU;

	t72 = (x493&((x494*x495)*x496));

	if (t72 != 116LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x497 = INT64_MAX;
	static int64_t x498 = -269LL;
	int8_t x499 = 0;
	int64_t x500 = INT64_MAX;
	static volatile int64_t t73 = 47137742401LL;

	t73 = (x497&((x498*x499)*x500));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x505 = INT8_MAX;
	static uint64_t x506 = UINT64_MAX;
	uint32_t x507 = UINT32_MAX;
	uint32_t x508 = 14914193U;

	t74 = (x505&((x506*x507)*x508));

	if (t74 != 17LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x513 = -1;
	static int16_t x515 = INT16_MIN;
	volatile int32_t t75 = 4036;

	t75 = (x513&((x514*x515)*x516));

	if (t75 != -1073741824) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x522 = 13;
	uint8_t x523 = UINT8_MAX;
	static uint64_t x524 = UINT64_MAX;
	uint64_t t76 = 3373LLU;

	t76 = (x521&((x522*x523)*x524));

	if (t76 != 4294963981LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x525 = 68677639154289LL;
	int8_t x526 = 1;
	volatile uint64_t x527 = UINT64_MAX;
	int64_t x528 = -4044444061871LL;
	static volatile uint64_t t77 = 265171221LLU;

	t77 = (x525&((x526*x527)*x528));

	if (t77 != 2353675632673LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x537 = INT32_MIN;
	static uint64_t x539 = UINT64_MAX;
	uint64_t x540 = 10938LLU;

	t78 = (x537&((x538*x539)*x540));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x541 = 2180U;
	volatile int32_t x542 = INT32_MAX;
	uint64_t x543 = UINT64_MAX;
	int16_t x544 = -1;

	t79 = (x541&((x542*x543)*x544));

	if (t79 != 2180LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x549 = 312923247U;
	uint8_t x550 = UINT8_MAX;
	volatile int16_t x551 = 1;
	volatile uint32_t x552 = UINT32_MAX;
	uint32_t t80 = 1673U;

	t80 = (x549&((x550*x551)*x552));

	if (t80 != 312923137U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x557 = -1;
	volatile int32_t x558 = 616;
	uint64_t x559 = UINT64_MAX;
	uint32_t x560 = 1574U;
	uint64_t t81 = 1682644300642196210LLU;

	t81 = (x557&((x558*x559)*x560));

	if (t81 != 18446744073708582032LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x561 = -1;
	static volatile uint64_t x562 = UINT64_MAX;
	int8_t x564 = -31;
	uint64_t t82 = 4096672964446LLU;

	t82 = (x561&((x562*x563)*x564));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x569 = INT8_MAX;
	static int64_t x570 = -1LL;
	volatile uint32_t x571 = 5536U;
	static int8_t x572 = -6;

	t83 = (x569&((x570*x571)*x572));

	if (t83 != 64LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x577 = 11U;
	uint64_t x578 = UINT64_MAX;
	static uint16_t x579 = 653U;
	static uint64_t t84 = 86835857537196128LLU;

	t84 = (x577&((x578*x579)*x580));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x585 = INT32_MIN;
	uint64_t x587 = 1617LLU;
	volatile uint16_t x588 = 3913U;
	static uint64_t t85 = 4313391688LLU;

	t85 = (x585&((x586*x587)*x588));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x593 = INT8_MIN;
	uint32_t x594 = 0U;
	uint16_t x595 = 0U;
	volatile uint32_t t86 = 215632168U;

	t86 = (x593&((x594*x595)*x596));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x597 = 2U;
	int16_t x599 = 355;
	uint8_t x600 = 1U;
	volatile int32_t t87 = -146654;

	t87 = (x597&((x598*x599)*x600));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x601 = INT64_MAX;
	static volatile uint64_t x603 = 1125187564524LLU;
	int32_t x604 = -392248332;

	t88 = (x601&((x602*x603)*x604));

	if (t88 != 7854459639506910992LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x605 = INT16_MIN;
	volatile int8_t x607 = INT8_MIN;
	volatile uint64_t t89 = 8LLU;

	t89 = (x605&((x606*x607)*x608));

	if (t89 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x614 = -1;
	static volatile int32_t t90 = 0;

	t90 = (x613&((x614*x615)*x616));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x618 = 10U;
	volatile int8_t x619 = 0;

	t91 = (x617&((x618*x619)*x620));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x633 = UINT64_MAX;
	uint64_t x634 = 95794304849LLU;
	int32_t x635 = INT32_MAX;
	static uint32_t x636 = UINT32_MAX;

	t92 = (x633&((x634*x635)*x636));

	if (t92 != 815816860800456529LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x641 = 1342LLU;
	static int32_t x642 = -955679;
	int8_t x643 = INT8_MAX;
	static volatile uint64_t t93 = 214217293048LLU;

	t93 = (x641&((x642*x643)*x644));

	if (t93 != 32LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x645 = UINT32_MAX;
	volatile int16_t x646 = INT16_MAX;
	int64_t x647 = -1LL;
	int16_t x648 = -1;
	volatile int64_t t94 = 8224081LL;

	t94 = (x645&((x646*x647)*x648));

	if (t94 != 32767LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x657 = -3;
	static int16_t x660 = INT16_MIN;
	uint64_t t95 = 484033LLU;

	t95 = (x657&((x658*x659)*x660));

	if (t95 != 18446744073608921088LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x661 = -1;
	int16_t x662 = INT16_MIN;
	uint32_t x663 = 18080U;
	uint32_t x664 = UINT32_MAX;

	t96 = (x661&((x662*x663)*x664));

	if (t96 != 592445440U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x666 = 7409318242573704LLU;
	uint32_t x667 = UINT32_MAX;
	volatile int32_t x668 = INT32_MIN;

	t97 = (x665&((x666*x667)*x668));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x669 = INT32_MIN;
	int8_t x670 = INT8_MAX;
	int8_t x671 = INT8_MIN;
	uint16_t x672 = UINT16_MAX;
	int32_t t98 = INT32_MIN;

	t98 = (x669&((x670*x671)*x672));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x674 = -1;
	uint16_t x675 = 449U;
	uint16_t x676 = 459U;

	t99 = (x673&((x674*x675)*x676));

	if (t99 != 117) { NG(); } else { ; }
	
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

