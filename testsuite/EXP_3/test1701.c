#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
volatile int16_t x2 = INT16_MIN;
volatile int8_t x3 = 29;
static int64_t x5 = INT64_MIN;
static volatile int16_t x7 = -168;
int8_t x8 = 7;
int64_t x14 = -1LL;
uint64_t t3 = 3219740715053732LLU;
volatile int16_t x18 = 1999;
int64_t x19 = INT64_MIN;
static int64_t t4 = 1566245826LL;
int8_t x24 = 52;
static uint64_t x30 = 3297457625654LLU;
int64_t x43 = INT64_MAX;
static int64_t t11 = 10444LL;
static volatile uint64_t t12 = 839773144833LLU;
volatile uint64_t x59 = 767795555LLU;
uint64_t t14 = 342084004LLU;
static int64_t x63 = INT64_MAX;
volatile int64_t x65 = -59592369044486454LL;
volatile uint32_t x66 = 403222210U;
uint32_t x69 = 7567U;
uint64_t x71 = 3519062183902638387LLU;
uint64_t t17 = 20059192409LLU;
static uint64_t t18 = 55967928416765619LLU;
static int64_t t19 = 4510621816483LL;
volatile uint32_t x85 = 31023474U;
int16_t x90 = -1;
uint64_t t22 = 9491051682851LLU;
int16_t x97 = -5;
int16_t x100 = INT16_MIN;
int8_t x110 = INT8_MIN;
int8_t x111 = -1;
int8_t x114 = INT8_MIN;
int32_t x134 = -1;
int16_t x135 = INT16_MIN;
int8_t x141 = INT8_MIN;
volatile int64_t x143 = -1LL;
volatile uint32_t x151 = 1056U;
int16_t x152 = INT16_MIN;
uint64_t t33 = 5593787245589LLU;
uint8_t x156 = 6U;
static uint64_t t34 = 59428204698031185LLU;
int64_t t39 = 1671LL;
static uint16_t x178 = 862U;
uint16_t x180 = 349U;
volatile int16_t x182 = INT16_MIN;
static uint16_t x184 = 3614U;
int16_t x186 = 23;
int8_t x196 = INT8_MIN;
int64_t t44 = 13832241467031489LL;
static volatile int8_t x206 = 30;
static volatile uint16_t x207 = 2U;
static int8_t x209 = 14;
int64_t x211 = INT64_MIN;
int8_t x212 = -1;
static volatile int64_t x215 = 19991283858LL;
volatile int16_t x217 = -1;
int8_t x218 = -1;
static int8_t x225 = INT8_MIN;
int8_t x227 = INT8_MIN;
uint8_t x228 = UINT8_MAX;
int8_t x238 = INT8_MIN;
int64_t x242 = -1LL;
static uint16_t x243 = 7120U;
uint8_t x246 = 22U;
volatile uint16_t x247 = UINT16_MAX;
volatile int64_t t54 = 26559324864068LL;
static uint32_t t55 = 3577778U;
int8_t x270 = 2;
volatile uint32_t t60 = 3U;
uint8_t x280 = 12U;
uint64_t x284 = 113872627LLU;
uint8_t x286 = 9U;
int16_t x287 = -448;
int16_t x295 = -2569;
int16_t x305 = INT16_MAX;
int8_t x308 = INT8_MAX;
int8_t x309 = INT8_MIN;
int8_t x312 = -1;
static uint64_t t70 = 778714598363LLU;
volatile int32_t t72 = 27;
static volatile uint8_t x334 = 108U;
volatile int64_t t76 = 101248099206588252LL;
static uint64_t x350 = UINT64_MAX;
volatile int8_t x351 = INT8_MIN;
int8_t x355 = -1;
int64_t x356 = INT64_MIN;
volatile uint64_t t79 = 38810316456LLU;
static uint8_t x361 = 5U;
int16_t x364 = 12477;
int32_t x369 = INT32_MAX;
static int64_t x377 = -2508729855LL;
int64_t x378 = INT64_MAX;
static int64_t t83 = 271LL;
int16_t x382 = -4;
uint64_t x386 = 785579968776992833LLU;
int32_t x394 = -32;
volatile int64_t x396 = INT64_MIN;
int16_t x397 = INT16_MAX;
int32_t x402 = INT32_MIN;
int64_t x403 = -31539263143LL;
volatile uint32_t x410 = 71826506U;
volatile int16_t x411 = 0;
static int64_t t91 = -236207095969LL;
volatile int32_t x424 = 2610174;
int8_t x425 = INT8_MIN;
static int64_t x432 = 808LL;
int64_t t96 = 593LL;
volatile int32_t t97 = 200670;
int16_t x441 = -1;


void f0(void) {
	int16_t x4 = 7;
	volatile int32_t t0 = -1;

	t0 = ((x1+x2)&(x3&x4));

	if (t0 != 5) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = INT16_MAX;
	volatile int64_t t1 = 81LL;

	t1 = ((x5+x6)&(x7&x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = 2608014944LL;
	int8_t x11 = INT8_MIN;
	int32_t x12 = -1;
	static int64_t t2 = 391737LL;

	t2 = ((x9+x10)&(x11&x12));

	if (t2 != 2607982080LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 348110150000711LLU;
	int16_t x15 = -6;
	volatile int64_t x16 = -1LL;

	t3 = ((x13+x14)&(x15&x16));

	if (t3 != 348110150000706LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 21U;
	int64_t x20 = INT64_MIN;

	t4 = ((x17+x18)&(x19&x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 81385163U;
	int32_t x22 = INT32_MIN;
	int64_t x23 = -33805LL;
	volatile int64_t t5 = 3784850692585142250LL;

	t5 = ((x21+x22)&(x23&x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	int8_t x26 = -1;
	volatile int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MIN;
	int64_t t6 = INT64_MIN;

	t6 = ((x25+x26)&(x27&x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MAX;
	static int8_t x31 = -1;
	volatile int8_t x32 = -30;
	static uint64_t t7 = 47161137925LLU;

	t7 = ((x29+x30)&(x31&x32));

	if (t7 != 3297457658400LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint8_t x34 = 0U;
	volatile uint64_t x35 = 16304080LLU;
	static volatile int32_t x36 = -1;
	static volatile uint64_t t8 = 16670914LLU;

	t8 = ((x33+x34)&(x35&x36));

	if (t8 != 16304080LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 111U;
	volatile int32_t x38 = -304137;
	static volatile int8_t x39 = -1;
	int64_t x40 = 5623LL;
	volatile int64_t t9 = 434LL;

	t9 = ((x37+x38)&(x39&x40));

	if (t9 != 5222LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 38;
	volatile int32_t x42 = 229669938;
	uint8_t x44 = UINT8_MAX;
	volatile int64_t t10 = -20LL;

	t10 = ((x41+x42)&(x43&x44));

	if (t10 != 88LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1LL;
	int32_t x46 = INT32_MIN;
	uint8_t x47 = 1U;
	static int32_t x48 = INT32_MAX;

	t11 = ((x45+x46)&(x47&x48));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -2;
	volatile uint8_t x50 = 44U;
	volatile uint64_t x51 = UINT64_MAX;
	static int8_t x52 = INT8_MIN;

	t12 = ((x49+x50)&(x51&x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	uint16_t x54 = 146U;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MAX;
	int32_t t13 = -14950675;

	t13 = ((x53+x54)&(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 0U;
	static volatile int64_t x58 = INT64_MIN;
	int16_t x60 = INT16_MIN;

	t14 = ((x57+x58)&(x59&x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = -1;
	static int8_t x64 = INT8_MIN;
	int64_t t15 = 8166LL;

	t15 = ((x61+x62)&(x63&x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x67 = 1250LL;
	int16_t x68 = 5;
	volatile int64_t t16 = 54417650587LL;

	t16 = ((x65+x66)&(x67&x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 688LL;
	int32_t x72 = INT32_MAX;

	t17 = ((x69+x70)&(x71&x72));

	if (t17 != 8243LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 104U;
	volatile uint64_t x74 = 1957707294729017516LLU;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MIN;

	t18 = ((x73+x74)&(x75&x76));

	if (t18 != 1957707294729011200LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 910572;
	volatile int32_t x82 = 55653;
	int64_t x83 = -37LL;
	int8_t x84 = INT8_MIN;

	t19 = ((x81+x82)&(x83&x84));

	if (t19 != 966144LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x86 = UINT32_MAX;
	volatile uint32_t x87 = 68U;
	int8_t x88 = 1;
	uint32_t t20 = 1009U;

	t20 = ((x85+x86)&(x87&x88));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = UINT8_MAX;
	static volatile int32_t x91 = INT32_MAX;
	int8_t x92 = -1;
	volatile int32_t t21 = 205763521;

	t21 = ((x89+x90)&(x91&x92));

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -21;
	int16_t x94 = INT16_MAX;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = UINT64_MAX;

	t22 = ((x93+x94)&(x95&x96));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x98 = 1U;
	volatile uint8_t x99 = 28U;
	volatile int32_t t23 = -3;

	t23 = ((x97+x98)&(x99&x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -1;
	int32_t x112 = -20182;
	int32_t t24 = 1569;

	t24 = ((x109+x110)&(x111&x112));

	if (t24 != -20182) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 115U;
	int32_t x115 = INT32_MIN;
	int64_t x116 = -1LL;
	volatile int64_t t25 = -25LL;

	t25 = ((x113+x114)&(x115&x116));

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -9;
	int64_t x118 = 53516064337163368LL;
	uint16_t x119 = 322U;
	int32_t x120 = INT32_MIN;
	volatile int64_t t26 = -92997327691581LL;

	t26 = ((x117+x118)&(x119&x120));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	int32_t x122 = -337;
	int16_t x123 = INT16_MAX;
	static int8_t x124 = 1;
	volatile int32_t t27 = -1;

	t27 = ((x121+x122)&(x123&x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = 13;
	volatile uint8_t x126 = UINT8_MAX;
	static int8_t x127 = INT8_MIN;
	volatile int64_t x128 = INT64_MIN;
	static volatile int64_t t28 = 1076300215274LL;

	t28 = ((x125+x126)&(x127&x128));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x136 = 625U;
	static volatile int32_t t29 = -85974193;

	t29 = ((x133+x134)&(x135&x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	static int64_t x138 = -122972808836LL;
	static int32_t x139 = INT32_MAX;
	int32_t x140 = 731705949;
	volatile int64_t t30 = 59469LL;

	t30 = ((x137+x138)&(x139&x140));

	if (t30 != 169660508LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x142 = INT8_MIN;
	static int8_t x144 = INT8_MIN;
	int64_t t31 = -27535012LL;

	t31 = ((x141+x142)&(x143&x144));

	if (t31 != -256LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 6511U;
	static uint16_t x146 = UINT16_MAX;
	int16_t x147 = INT16_MAX;
	int8_t x148 = 2;
	int32_t t32 = -30425238;

	t32 = ((x145+x146)&(x147&x148));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x149 = 212597426LL;
	static uint64_t x150 = 366637LLU;

	t33 = ((x149+x150)&(x151&x152));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = UINT64_MAX;
	uint16_t x154 = UINT16_MAX;
	int64_t x155 = INT64_MAX;

	t34 = ((x153+x154)&(x155&x156));

	if (t34 != 6LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = 1339412;
	uint32_t x158 = UINT32_MAX;
	int64_t x159 = INT64_MIN;
	int16_t x160 = 23;
	volatile int64_t t35 = 238764707729215815LL;

	t35 = ((x157+x158)&(x159&x160));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -1;
	int16_t x162 = -2;
	volatile uint64_t x163 = UINT64_MAX;
	volatile int32_t x164 = -1;
	uint64_t t36 = 20LLU;

	t36 = ((x161+x162)&(x163&x164));

	if (t36 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x165 = UINT64_MAX;
	int8_t x166 = INT8_MAX;
	int8_t x167 = 2;
	static uint8_t x168 = UINT8_MAX;
	uint64_t t37 = 462384454926LLU;

	t37 = ((x165+x166)&(x167&x168));

	if (t37 != 2LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	int32_t x170 = -1;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 22U;
	int32_t t38 = -2330174;

	t38 = ((x169+x170)&(x171&x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x173 = INT16_MAX;
	uint16_t x174 = UINT16_MAX;
	uint16_t x175 = 116U;
	int64_t x176 = INT64_MIN;

	t39 = ((x173+x174)&(x175&x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = 262U;
	static volatile uint16_t x179 = 40U;
	volatile int32_t t40 = -307;

	t40 = ((x177+x178)&(x179&x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MIN;
	volatile uint8_t x183 = UINT8_MAX;
	volatile int32_t t41 = 591054;

	t41 = ((x181+x182)&(x183&x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -6373;
	volatile int8_t x187 = INT8_MIN;
	uint16_t x188 = UINT16_MAX;
	int32_t t42 = -1;

	t42 = ((x185+x186)&(x187&x188));

	if (t42 != 59136) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x189 = 4U;
	int32_t x190 = -1;
	volatile int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t43 = -113107646;

	t43 = ((x189+x190)&(x191&x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x193 = INT32_MIN;
	static volatile int64_t x194 = INT64_MAX;
	int16_t x195 = INT16_MAX;

	t44 = ((x193+x194)&(x195&x196));

	if (t44 != 32640LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x197 = INT8_MAX;
	static volatile int16_t x198 = INT16_MAX;
	int8_t x199 = -1;
	static int16_t x200 = -415;
	volatile int32_t t45 = 370010346;

	t45 = ((x197+x198)&(x199&x200));

	if (t45 != 32864) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = UINT32_MAX;
	volatile uint16_t x208 = 23U;
	volatile uint32_t t46 = 0U;

	t46 = ((x205+x206)&(x207&x208));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x210 = -1;
	int64_t t47 = -72LL;

	t47 = ((x209+x210)&(x211&x212));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 27U;
	uint64_t x214 = UINT64_MAX;
	uint32_t x216 = 974U;
	uint64_t t48 = 642842023LLU;

	t48 = ((x213+x214)&(x215&x216));

	if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x219 = -51;
	static volatile int64_t x220 = INT64_MIN;
	static int64_t t49 = INT64_MIN;

	t49 = ((x217+x218)&(x219&x220));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x226 = -387;
	int32_t t50 = -1;

	t50 = ((x225+x226)&(x227&x228));

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x237 = 2U;
	int8_t x239 = -1;
	uint64_t x240 = 1693450234243LLU;
	uint64_t t51 = 668420458LLU;

	t51 = ((x237+x238)&(x239&x240));

	if (t51 != 1693450234242LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -1;
	int16_t x244 = 128;
	volatile int64_t t52 = -11412883452308427LL;

	t52 = ((x241+x242)&(x243&x244));

	if (t52 != 128LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x245 = 8389627LLU;
	static int16_t x248 = INT16_MAX;
	static uint64_t t53 = 1LLU;

	t53 = ((x245+x246)&(x247&x248));

	if (t53 != 1041LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x249 = 8U;
	int32_t x250 = -27;
	uint8_t x251 = 0U;
	int64_t x252 = -96LL;

	t54 = ((x249+x250)&(x251&x252));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x253 = UINT32_MAX;
	static volatile int32_t x254 = 901208218;
	static int32_t x255 = 1;
	volatile int8_t x256 = -1;

	t55 = ((x253+x254)&(x255&x256));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = INT16_MAX;
	uint64_t x258 = UINT64_MAX;
	uint64_t x259 = 132189921LLU;
	static volatile int16_t x260 = -1;
	static volatile uint64_t t56 = 41308507LLU;

	t56 = ((x257+x258)&(x259&x260));

	if (t56 != 3808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = INT16_MIN;
	volatile int16_t x262 = 104;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = UINT8_MAX;
	int32_t t57 = -100203;

	t57 = ((x261+x262)&(x263&x264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = -8;
	uint32_t x266 = 1835636U;
	static int16_t x267 = -1;
	static uint16_t x268 = 13580U;
	static uint32_t t58 = 3340731U;

	t58 = ((x265+x266)&(x267&x268));

	if (t58 != 12U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x269 = 64418317204LL;
	int32_t x271 = INT32_MIN;
	int64_t x272 = -1LL;
	int64_t t59 = 212418516LL;

	t59 = ((x269+x270)&(x271&x272));

	if (t59 != 62277025792LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = -1;
	static int32_t x274 = 0;
	uint32_t x275 = UINT32_MAX;
	static volatile uint16_t x276 = UINT16_MAX;

	t60 = ((x273+x274)&(x275&x276));

	if (t60 != 65535U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x278 = INT32_MIN;
	volatile uint8_t x279 = UINT8_MAX;
	volatile int32_t t61 = -73031843;

	t61 = ((x277+x278)&(x279&x280));

	if (t61 != 12) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x281 = INT16_MIN;
	static int16_t x282 = 0;
	int16_t x283 = -1;
	volatile uint64_t t62 = 2LLU;

	t62 = ((x281+x282)&(x283&x284));

	if (t62 != 113868800LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = 1360575219084330722LLU;
	static int16_t x288 = -2104;
	uint64_t t63 = 917056231LLU;

	t63 = ((x285+x286)&(x287&x288));

	if (t63 != 1360575219084330560LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MAX;
	int64_t x290 = -1LL;
	int8_t x291 = INT8_MIN;
	volatile int64_t x292 = INT64_MIN;
	volatile int64_t t64 = 0LL;

	t64 = ((x289+x290)&(x291&x292));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = INT64_MIN;
	static uint64_t x294 = 1453178911LLU;
	int8_t x296 = INT8_MIN;
	static volatile uint64_t t65 = 9589LLU;

	t65 = ((x293+x294)&(x295&x296));

	if (t65 != 9223372038307954688LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = INT8_MIN;
	volatile int8_t x298 = -1;
	volatile int64_t x299 = -2087814546451413LL;
	volatile uint16_t x300 = 28233U;
	volatile int64_t t66 = -2828833LL;

	t66 = ((x297+x298)&(x299&x300));

	if (t66 != 1033LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x301 = 6U;
	uint8_t x302 = 1U;
	volatile uint8_t x303 = 1U;
	int8_t x304 = INT8_MIN;
	static int32_t t67 = -334;

	t67 = ((x301+x302)&(x303&x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x306 = 3544U;
	static volatile int64_t x307 = INT64_MIN;
	int64_t t68 = 31916975LL;

	t68 = ((x305+x306)&(x307&x308));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x310 = UINT8_MAX;
	static int64_t x311 = INT64_MIN;
	volatile int64_t t69 = -31565671684590LL;

	t69 = ((x309+x310)&(x311&x312));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x313 = INT32_MIN;
	uint8_t x314 = 0U;
	uint64_t x315 = 695992563731452623LLU;
	int8_t x316 = INT8_MIN;

	t70 = ((x313+x314)&(x315&x316));

	if (t70 != 695992563336740864LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = INT16_MIN;
	static uint32_t x322 = 183469U;
	int64_t x323 = INT64_MIN;
	volatile uint16_t x324 = UINT16_MAX;
	int64_t t71 = 8911076908279556LL;

	t71 = ((x321+x322)&(x323&x324));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x325 = 3U;
	uint8_t x326 = 7U;
	int32_t x327 = -1;
	int32_t x328 = -1;

	t72 = ((x325+x326)&(x327&x328));

	if (t72 != 10) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x329 = -18257814;
	uint8_t x330 = UINT8_MAX;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = -1;
	static volatile uint64_t t73 = 962430092383LLU;

	t73 = ((x329+x330)&(x331&x332));

	if (t73 != 18446744073691294057LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x333 = UINT32_MAX;
	static uint8_t x335 = 29U;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t74 = 15280096132212LLU;

	t74 = ((x333+x334)&(x335&x336));

	if (t74 != 9LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MAX;
	int16_t x339 = -1;
	int32_t x340 = INT32_MAX;
	static volatile int32_t t75 = 65;

	t75 = ((x337+x338)&(x339&x340));

	if (t75 != 32894) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = INT16_MAX;
	int64_t x346 = -1LL;
	uint16_t x347 = UINT16_MAX;
	static uint16_t x348 = 1U;

	t76 = ((x345+x346)&(x347&x348));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x349 = UINT32_MAX;
	uint8_t x352 = 27U;
	uint64_t t77 = 15669LLU;

	t77 = ((x349+x350)&(x351&x352));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x353 = INT16_MAX;
	volatile int16_t x354 = INT16_MIN;
	int64_t t78 = INT64_MIN;

	t78 = ((x353+x354)&(x355&x356));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x357 = 8U;
	int16_t x358 = -1;
	volatile uint64_t x359 = 177068463973863LLU;
	uint8_t x360 = 73U;

	t79 = ((x357+x358)&(x359&x360));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x362 = -1LL;
	int8_t x363 = INT8_MIN;
	static int64_t t80 = 4698399620LL;

	t80 = ((x361+x362)&(x363&x364));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x365 = 0;
	uint8_t x366 = 1U;
	int32_t x367 = -1;
	int32_t x368 = -4471381;
	volatile int32_t t81 = 26;

	t81 = ((x365+x366)&(x367&x368));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x370 = -13766;
	volatile int16_t x371 = 2;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t82 = 1101U;

	t82 = ((x369+x370)&(x371&x372));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x379 = INT16_MIN;
	int16_t x380 = -1;

	t83 = ((x377+x378)&(x379&x380));

	if (t83 != 9223372034346024960LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x381 = UINT64_MAX;
	int8_t x383 = INT8_MAX;
	int64_t x384 = -1LL;
	static volatile uint64_t t84 = 55333404403LLU;

	t84 = ((x381+x382)&(x383&x384));

	if (t84 != 123LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = -1;
	int16_t x387 = INT16_MIN;
	static uint8_t x388 = 1U;
	volatile uint64_t t85 = 4420424787304LLU;

	t85 = ((x385+x386)&(x387&x388));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x390 = INT16_MIN;
	static int32_t x391 = 967166777;
	volatile int8_t x392 = 3;
	volatile uint32_t t86 = 1245U;

	t86 = ((x389+x390)&(x391&x392));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x393 = 1161914LL;
	uint64_t x395 = 288436LLU;
	volatile uint64_t t87 = 5827173LLU;

	t87 = ((x393+x394)&(x395&x396));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x398 = INT32_MIN;
	uint32_t x399 = 26386416U;
	volatile uint16_t x400 = UINT16_MAX;
	uint32_t t88 = 0U;

	t88 = ((x397+x398)&(x399&x400));

	if (t88 != 8176U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x401 = UINT8_MAX;
	static int64_t x404 = -1LL;
	volatile int64_t t89 = 487750711641682456LL;

	t89 = ((x401+x402)&(x403&x404));

	if (t89 != -32212254631LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x405 = INT8_MIN;
	volatile int8_t x406 = INT8_MIN;
	int32_t x407 = -1;
	int8_t x408 = 0;
	volatile int32_t t90 = 394351;

	t90 = ((x405+x406)&(x407&x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = -1LL;
	int8_t x412 = -1;

	t91 = ((x409+x410)&(x411&x412));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = INT8_MIN;
	uint32_t x414 = UINT32_MAX;
	volatile int64_t x415 = INT64_MAX;
	uint16_t x416 = 1U;
	volatile int64_t t92 = 1127353LL;

	t92 = ((x413+x414)&(x415&x416));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x417 = -1;
	int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	static int64_t x420 = 1960LL;
	int64_t t93 = 129272842597734LL;

	t93 = ((x417+x418)&(x419&x420));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x421 = 14137U;
	static volatile uint32_t x422 = 24U;
	static int32_t x423 = 1;
	volatile uint32_t t94 = 472U;

	t94 = ((x421+x422)&(x423&x424));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x426 = INT8_MAX;
	uint64_t x427 = 31989026644817544LLU;
	uint16_t x428 = 17U;
	uint64_t t95 = 20758960374199LLU;

	t95 = ((x425+x426)&(x427&x428));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x429 = INT32_MAX;
	uint32_t x430 = 8628182U;
	int16_t x431 = INT16_MAX;

	t96 = ((x429+x430)&(x431&x432));

	if (t96 != 768LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x433 = -51;
	static uint16_t x434 = 526U;
	int32_t x435 = INT32_MAX;
	static int32_t x436 = INT32_MIN;

	t97 = ((x433+x434)&(x435&x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x437 = INT32_MIN;
	int64_t x438 = 1LL;
	static int16_t x439 = INT16_MAX;
	uint64_t x440 = 283486063000363680LLU;
	uint64_t t98 = 1029752780LLU;

	t98 = ((x437+x438)&(x439&x440));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x442 = INT64_MAX;
	static uint8_t x443 = 0U;
	uint32_t x444 = 3410803U;
	volatile int64_t t99 = -949342869LL;

	t99 = ((x441+x442)&(x443&x444));

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

