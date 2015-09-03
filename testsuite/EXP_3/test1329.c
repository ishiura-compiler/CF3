#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -428322900LL;
int64_t x10 = INT64_MIN;
static uint32_t x19 = 6881U;
int32_t t6 = -3;
uint16_t x30 = 133U;
uint32_t x36 = 302U;
uint8_t x53 = 1U;
static int8_t x57 = 52;
uint32_t x59 = 155105U;
uint16_t x60 = 2U;
volatile int32_t t15 = 2640;
static int8_t x65 = 1;
uint16_t x70 = 1U;
int16_t x71 = INT16_MIN;
int32_t t18 = -35323;
int16_t x77 = INT16_MIN;
static volatile int16_t x79 = 3437;
int64_t t21 = 3129428570998561LL;
static int32_t t22 = 134890665;
volatile int32_t t24 = -27082144;
int16_t x103 = INT16_MIN;
int64_t x109 = INT64_MAX;
uint64_t x111 = 484989LLU;
int64_t t27 = 227924044959793LL;
uint64_t x121 = 719LLU;
static int32_t x122 = -1;
static int16_t x124 = INT16_MAX;
int64_t t31 = 21920749009LL;
uint64_t x131 = UINT64_MAX;
uint64_t x134 = 1029226812LLU;
static int8_t x136 = 0;
uint64_t t33 = 2693771886525279LLU;
int16_t x145 = 0;
int32_t t36 = -27;
static uint64_t t38 = 77LLU;
int16_t x158 = 11614;
int16_t x159 = INT16_MIN;
int32_t x171 = 336;
int64_t x178 = -3969399518838LL;
static uint64_t x180 = UINT64_MAX;
int8_t x181 = INT8_MAX;
int32_t t45 = 1649;
int64_t x186 = 252437022607LL;
volatile int8_t x192 = INT8_MAX;
int64_t x193 = INT64_MIN;
int64_t x195 = 16875482849LL;
int16_t x204 = 357;
static volatile uint32_t t52 = 441U;
static volatile int32_t t53 = -238048;
uint64_t x219 = 16576466LLU;
volatile uint32_t x220 = UINT32_MAX;
int16_t x223 = 0;
static int64_t x227 = -1LL;
uint16_t x229 = 1U;
int8_t x238 = INT8_MAX;
static int64_t t60 = -69LL;
int16_t x249 = INT16_MIN;
volatile int32_t x261 = 1;
uint32_t t65 = 563467U;
int32_t x266 = INT32_MAX;
int64_t x269 = INT64_MIN;
int32_t x271 = INT32_MAX;
static volatile int8_t x283 = INT8_MIN;
int16_t x286 = INT16_MAX;
volatile int64_t t72 = -8447541899683LL;
int8_t x294 = 1;
int16_t x295 = INT16_MIN;
int16_t x304 = 2050;
int64_t t75 = -11905020494560LL;
int16_t x311 = 13;
int64_t t78 = 0LL;
int8_t x321 = INT8_MIN;
volatile int32_t x322 = 1166445;
int8_t x324 = -1;
int32_t t80 = 27245294;
uint32_t x328 = 8018U;
volatile uint64_t t84 = 30838204607351LLU;
int16_t x350 = -1;
uint8_t x353 = 12U;
int64_t x357 = -1LL;
int32_t x360 = INT32_MIN;
static int64_t x361 = -2450751162LL;
volatile int64_t t90 = -3133818926762LL;
int16_t x367 = INT16_MIN;
static int32_t x375 = 2;
uint16_t x379 = UINT16_MAX;
volatile uint32_t t94 = 5264806U;
uint8_t x382 = 3U;
volatile int8_t x383 = INT8_MIN;
int8_t x386 = -10;
int8_t x391 = INT8_MAX;
uint32_t x392 = UINT32_MAX;
int64_t x395 = -1LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile uint32_t x2 = UINT32_MAX;
	int64_t x3 = INT64_MIN;
	static uint32_t t0 = 1823241U;

	t0 = ((x1|x2)*(x3==x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint16_t x6 = UINT16_MAX;
	uint16_t x7 = UINT16_MAX;
	static volatile int64_t x8 = INT64_MAX;
	volatile int64_t t1 = 14719672180220399LL;

	t1 = ((x5|x6)*(x7==x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 2883529688033857LLU;
	volatile uint32_t x11 = 52745100U;
	uint8_t x12 = UINT8_MAX;
	static uint64_t t2 = 510LLU;

	t2 = ((x9|x10)*(x11==x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MIN;
	volatile int8_t x15 = -1;
	uint64_t x16 = 2025885361943399LLU;
	static volatile int32_t t3 = -1948676;

	t3 = ((x13|x14)*(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile uint64_t x18 = UINT64_MAX;
	uint8_t x20 = 2U;
	static volatile uint64_t t4 = 1905664611854588LLU;

	t4 = ((x17|x18)*(x19==x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -3;
	int16_t x22 = INT16_MIN;
	uint32_t x23 = 0U;
	volatile uint16_t x24 = 22562U;
	volatile int32_t t5 = -11;

	t5 = ((x21|x22)*(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int32_t x26 = -8169;
	static volatile int32_t x27 = INT32_MAX;
	static int64_t x28 = INT64_MIN;

	t6 = ((x25|x26)*(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int64_t x31 = INT64_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -49;

	t7 = ((x29|x30)*(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	static uint64_t x34 = UINT64_MAX;
	static int32_t x35 = INT32_MAX;
	volatile uint64_t t8 = 6883028793LLU;

	t8 = ((x33|x34)*(x35==x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 0U;
	int16_t x38 = 363;
	static uint8_t x39 = UINT8_MAX;
	int64_t x40 = -1LL;
	static volatile int32_t t9 = 279005;

	t9 = ((x37|x38)*(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	static uint16_t x43 = 1203U;
	uint64_t x44 = 11780202396323220LLU;
	volatile int32_t t10 = 14;

	t10 = ((x41|x42)*(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 0;
	volatile int32_t x46 = -106307;
	static volatile int16_t x47 = INT16_MIN;
	uint32_t x48 = 75719U;
	int32_t t11 = -27;

	t11 = ((x45|x46)*(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	uint64_t x50 = 830967LLU;
	static volatile uint32_t x51 = 95U;
	int64_t x52 = -1LL;
	uint64_t t12 = 413855678LLU;

	t12 = ((x49|x50)*(x51==x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 22U;
	static volatile int16_t x55 = -1;
	uint64_t x56 = 2574686261136886510LLU;
	int32_t t13 = 108363;

	t13 = ((x53|x54)*(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x58 = 11;
	volatile int32_t t14 = 12047;

	t14 = ((x57|x58)*(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MAX;
	volatile int8_t x63 = -1;
	int64_t x64 = INT64_MAX;

	t15 = ((x61|x62)*(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x66 = 23U;
	int8_t x67 = 1;
	int16_t x68 = INT16_MAX;
	int32_t t16 = -427;

	t16 = ((x65|x66)*(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 23826853912LL;
	volatile int32_t x72 = 42;
	volatile int64_t t17 = -1972774LL;

	t17 = ((x69|x70)*(x71==x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	int32_t x74 = -529896;
	int64_t x75 = -776LL;
	uint64_t x76 = 4969742208LLU;

	t18 = ((x73|x74)*(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x78 = INT32_MAX;
	int32_t x80 = -1;
	volatile int32_t t19 = -93853310;

	t19 = ((x77|x78)*(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = -1213580;
	volatile uint64_t x82 = 944350202402263091LLU;
	int32_t x83 = INT32_MAX;
	int16_t x84 = INT16_MAX;
	uint64_t t20 = 163032390LLU;

	t20 = ((x81|x82)*(x83==x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static volatile uint32_t x86 = 184U;
	volatile int32_t x87 = INT32_MAX;
	int32_t x88 = INT32_MIN;

	t21 = ((x85|x86)*(x87==x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	int8_t x90 = 0;
	static int64_t x91 = INT64_MAX;
	uint8_t x92 = 1U;

	t22 = ((x89|x90)*(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MIN;
	int8_t x95 = 52;
	uint8_t x96 = 0U;
	int32_t t23 = -11155;

	t23 = ((x93|x94)*(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	volatile int8_t x98 = INT8_MAX;
	uint32_t x99 = 4U;
	int64_t x100 = -3694666LL;

	t24 = ((x97|x98)*(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 1242718U;
	int16_t x102 = 0;
	int8_t x104 = INT8_MAX;
	static volatile uint32_t t25 = 490953U;

	t25 = ((x101|x102)*(x103==x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = -1;
	volatile int8_t x106 = 1;
	volatile int8_t x107 = -3;
	volatile int8_t x108 = -51;
	volatile int32_t t26 = 6863425;

	t26 = ((x105|x106)*(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x110 = INT32_MIN;
	int8_t x112 = INT8_MAX;

	t27 = ((x109|x110)*(x111==x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	int32_t x114 = INT32_MIN;
	static uint8_t x115 = 20U;
	int8_t x116 = 0;
	volatile int32_t t28 = 3703018;

	t28 = ((x113|x114)*(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = -1LL;
	int64_t x118 = INT64_MAX;
	static int64_t x119 = INT64_MIN;
	volatile int64_t x120 = -2973225671LL;
	int64_t t29 = 2395213919237304LL;

	t29 = ((x117|x118)*(x119==x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x123 = 4522175197939328253LLU;
	static uint64_t t30 = 2LLU;

	t30 = ((x121|x122)*(x123==x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -69190945448LL;
	uint32_t x126 = UINT32_MAX;
	uint64_t x127 = 15225811LLU;
	uint8_t x128 = UINT8_MAX;

	t31 = ((x125|x126)*(x127==x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = 979064;
	int8_t x130 = INT8_MIN;
	static int64_t x132 = INT64_MIN;
	static volatile int32_t t32 = 99390;

	t32 = ((x129|x130)*(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int16_t x135 = -3;

	t33 = ((x133|x134)*(x135==x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 848U;
	int32_t x138 = INT32_MAX;
	static int8_t x139 = INT8_MIN;
	uint8_t x140 = UINT8_MAX;
	int32_t t34 = 3035;

	t34 = ((x137|x138)*(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 4U;
	static uint16_t x142 = 255U;
	int32_t x143 = INT32_MIN;
	volatile int8_t x144 = INT8_MAX;
	volatile int32_t t35 = 9379361;

	t35 = ((x141|x142)*(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x146 = INT32_MAX;
	int64_t x147 = -1LL;
	static int64_t x148 = INT64_MIN;

	t36 = ((x145|x146)*(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	volatile int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MIN;
	volatile int32_t x152 = INT32_MIN;
	int64_t t37 = -1674422LL;

	t37 = ((x149|x150)*(x151==x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 7578196667LLU;
	int16_t x154 = INT16_MIN;
	uint64_t x155 = UINT64_MAX;
	static uint64_t x156 = 3433961LLU;

	t38 = ((x153|x154)*(x155==x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = -30;

	t39 = ((x157|x158)*(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	uint16_t x162 = UINT16_MAX;
	int32_t x163 = INT32_MAX;
	volatile int32_t x164 = 333;
	int64_t t40 = -1LL;

	t40 = ((x161|x162)*(x163==x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = 1794LL;
	uint32_t x166 = 0U;
	int64_t x167 = INT64_MIN;
	int64_t x168 = -1LL;
	static volatile int64_t t41 = -2870963LL;

	t41 = ((x165|x166)*(x167==x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = 2U;
	volatile int32_t x170 = INT32_MAX;
	int8_t x172 = -2;
	volatile int32_t t42 = -233;

	t42 = ((x169|x170)*(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -1;
	uint8_t x174 = 6U;
	static uint8_t x175 = 13U;
	uint8_t x176 = 6U;
	int32_t t43 = -6847;

	t43 = ((x173|x174)*(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	static int64_t x179 = -25057985592LL;
	int64_t t44 = -341422378LL;

	t44 = ((x177|x178)*(x179==x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x182 = 10U;
	int64_t x183 = -1368568287789564676LL;
	int64_t x184 = INT64_MIN;

	t45 = ((x181|x182)*(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 120394762845LL;
	static uint8_t x187 = 0U;
	int32_t x188 = INT32_MIN;
	int64_t t46 = 1333087093LL;

	t46 = ((x185|x186)*(x187==x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = 103U;
	int16_t x190 = 4;
	uint16_t x191 = UINT16_MAX;
	volatile int32_t t47 = 0;

	t47 = ((x189|x190)*(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x194 = INT64_MIN;
	volatile uint64_t x196 = UINT64_MAX;
	int64_t t48 = -15045615LL;

	t48 = ((x193|x194)*(x195==x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x197 = 31U;
	static uint8_t x198 = UINT8_MAX;
	int64_t x199 = INT64_MAX;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 42;

	t49 = ((x197|x198)*(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	static int64_t x202 = INT64_MIN;
	volatile int64_t x203 = 8557932108LL;
	volatile int64_t t50 = 15823892LL;

	t50 = ((x201|x202)*(x203==x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -10;
	uint32_t x206 = UINT32_MAX;
	volatile uint8_t x207 = 0U;
	int32_t x208 = INT32_MAX;
	uint32_t t51 = 3U;

	t51 = ((x205|x206)*(x207==x208));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 5112252U;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MIN;

	t52 = ((x209|x210)*(x211==x212));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 54053;
	int16_t x214 = INT16_MIN;
	uint64_t x215 = 1165LLU;
	volatile uint8_t x216 = UINT8_MAX;

	t53 = ((x213|x214)*(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = -1;
	static int32_t x218 = -176;
	volatile int32_t t54 = 471781850;

	t54 = ((x217|x218)*(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MIN;
	uint16_t x222 = UINT16_MAX;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = 0;

	t55 = ((x221|x222)*(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	uint32_t x226 = 4862439U;
	int16_t x228 = INT16_MAX;
	volatile int64_t t56 = -34657979206LL;

	t56 = ((x225|x226)*(x227==x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x230 = 31U;
	int32_t x231 = INT32_MIN;
	static int64_t x232 = 12113287925LL;
	volatile int32_t t57 = 999279848;

	t57 = ((x229|x230)*(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = 820349;
	volatile int32_t x234 = -21219291;
	static uint64_t x235 = 370LLU;
	volatile uint16_t x236 = 6582U;
	volatile int32_t t58 = -319318389;

	t58 = ((x233|x234)*(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x239 = 78;
	static int16_t x240 = INT16_MIN;
	uint64_t t59 = 16897775128LLU;

	t59 = ((x237|x238)*(x239==x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 26;
	int64_t x242 = INT64_MAX;
	static int8_t x243 = -38;
	int16_t x244 = INT16_MAX;

	t60 = ((x241|x242)*(x243==x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	static uint32_t x246 = 454U;
	uint8_t x247 = 1U;
	uint16_t x248 = 86U;
	uint32_t t61 = 1U;

	t61 = ((x245|x246)*(x247==x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 153129021LLU;
	uint8_t x251 = 101U;
	static int64_t x252 = INT64_MIN;
	uint64_t t62 = 227352203706430917LLU;

	t62 = ((x249|x250)*(x251==x252));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MIN;
	volatile uint16_t x254 = 10890U;
	int16_t x255 = -244;
	static volatile int64_t x256 = INT64_MIN;
	int32_t t63 = 722674853;

	t63 = ((x253|x254)*(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 10U;
	static uint64_t x258 = UINT64_MAX;
	int64_t x259 = -57661040LL;
	static int8_t x260 = INT8_MAX;
	volatile uint64_t t64 = 6421824725LLU;

	t64 = ((x257|x258)*(x259==x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x262 = 97164325U;
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = -1;

	t65 = ((x261|x262)*(x263==x264));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	uint8_t x267 = 85U;
	int64_t x268 = INT64_MAX;
	static volatile int32_t t66 = 3;

	t66 = ((x265|x266)*(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = 1177;
	static int16_t x272 = INT16_MIN;
	volatile int64_t t67 = 334464261522230329LL;

	t67 = ((x269|x270)*(x271==x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	int64_t x274 = -1LL;
	static volatile int8_t x275 = 14;
	int32_t x276 = INT32_MIN;
	volatile int64_t t68 = -66654122925LL;

	t68 = ((x273|x274)*(x275==x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x277 = INT8_MIN;
	int64_t x278 = INT64_MAX;
	int8_t x279 = -1;
	static int16_t x280 = INT16_MAX;
	volatile int64_t t69 = -99445975357366466LL;

	t69 = ((x277|x278)*(x279==x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 1U;
	static uint32_t x282 = 500303015U;
	uint8_t x284 = 12U;
	volatile uint32_t t70 = 282067U;

	t70 = ((x281|x282)*(x283==x284));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	uint16_t x287 = 36U;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t71 = 35;

	t71 = ((x285|x286)*(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -4552597LL;
	int64_t x290 = INT64_MIN;
	volatile int32_t x291 = INT32_MAX;
	uint16_t x292 = 12108U;

	t72 = ((x289|x290)*(x291==x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	volatile int8_t x296 = -16;
	int32_t t73 = 452;

	t73 = ((x293|x294)*(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	static int64_t x298 = 26LL;
	int8_t x299 = INT8_MIN;
	static int32_t x300 = -9;
	volatile int64_t t74 = 62LL;

	t74 = ((x297|x298)*(x299==x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -1LL;
	static uint8_t x302 = 39U;
	uint32_t x303 = 795227U;

	t75 = ((x301|x302)*(x303==x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	volatile int16_t x306 = 12;
	int32_t x307 = 2;
	static volatile uint8_t x308 = 5U;
	int32_t t76 = -118;

	t76 = ((x305|x306)*(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	static volatile int8_t x310 = INT8_MIN;
	static volatile int8_t x312 = INT8_MIN;
	volatile int32_t t77 = -197069881;

	t77 = ((x309|x310)*(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 1;
	int64_t x314 = -1LL;
	int32_t x315 = -160;
	volatile int16_t x316 = 308;

	t78 = ((x313|x314)*(x315==x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 3561U;
	volatile int32_t x318 = INT32_MIN;
	volatile int64_t x319 = 1007791806523225LL;
	int8_t x320 = INT8_MIN;
	volatile uint32_t t79 = 3U;

	t79 = ((x317|x318)*(x319==x320));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x323 = -1LL;

	t80 = ((x321|x322)*(x323==x324));

	if (t80 != -19) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 23U;
	int32_t x326 = INT32_MIN;
	int8_t x327 = -1;
	volatile int32_t t81 = 14724;

	t81 = ((x325|x326)*(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = -1;
	volatile int16_t x330 = -16;
	volatile int16_t x331 = INT16_MIN;
	int32_t x332 = -1;
	volatile int32_t t82 = -125716;

	t82 = ((x329|x330)*(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 5964U;
	volatile uint64_t x334 = 5614712165288LLU;
	uint16_t x335 = 3U;
	static volatile uint16_t x336 = 5U;
	volatile uint64_t t83 = 1118973025005LLU;

	t83 = ((x333|x334)*(x335==x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int16_t x338 = -8856;
	int8_t x339 = -1;
	volatile int16_t x340 = INT16_MIN;

	t84 = ((x337|x338)*(x339==x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 100U;
	static volatile uint16_t x342 = 133U;
	uint16_t x343 = 950U;
	int8_t x344 = -13;
	int32_t t85 = 244361;

	t85 = ((x341|x342)*(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 82U;
	uint32_t x346 = UINT32_MAX;
	static volatile int8_t x347 = INT8_MIN;
	uint64_t x348 = 139255925733LLU;
	volatile uint32_t t86 = 57372231U;

	t86 = ((x345|x346)*(x347==x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	uint8_t x351 = UINT8_MAX;
	uint32_t x352 = 270343U;
	volatile int32_t t87 = 0;

	t87 = ((x349|x350)*(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MIN;
	volatile int32_t x355 = -14239;
	volatile uint64_t x356 = 1526593LLU;
	volatile int32_t t88 = -3119;

	t88 = ((x353|x354)*(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x358 = INT16_MIN;
	uint64_t x359 = UINT64_MAX;
	static volatile int64_t t89 = -3544687LL;

	t89 = ((x357|x358)*(x359==x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = 18469U;
	uint8_t x363 = 12U;
	static int32_t x364 = INT32_MAX;

	t90 = ((x361|x362)*(x363==x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	int16_t x366 = -10958;
	int8_t x368 = -1;
	int64_t t91 = 5742LL;

	t91 = ((x365|x366)*(x367==x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	static int8_t x370 = 52;
	int32_t x371 = 114589849;
	volatile int16_t x372 = -1;
	int32_t t92 = -912;

	t92 = ((x369|x370)*(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	uint32_t x374 = 1U;
	static int8_t x376 = -1;
	volatile uint32_t t93 = 2207U;

	t93 = ((x373|x374)*(x375==x376));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	uint32_t x378 = 62633863U;
	static volatile uint8_t x380 = UINT8_MAX;

	t94 = ((x377|x378)*(x379==x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 51;
	int64_t x384 = INT64_MIN;
	int32_t t95 = -3;

	t95 = ((x381|x382)*(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = -1;
	uint16_t x387 = 35U;
	uint64_t x388 = UINT64_MAX;
	int32_t t96 = -202987;

	t96 = ((x385|x386)*(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = 14142;
	volatile int16_t x390 = -225;
	volatile int32_t t97 = 45;

	t97 = ((x389|x390)*(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	volatile int64_t x394 = -1LL;
	uint8_t x396 = 7U;
	static int64_t t98 = 4LL;

	t98 = ((x393|x394)*(x395==x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	volatile int32_t x398 = INT32_MIN;
	int16_t x399 = INT16_MAX;
	int32_t x400 = INT32_MIN;
	volatile int32_t t99 = 89;

	t99 = ((x397|x398)*(x399==x400));

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

