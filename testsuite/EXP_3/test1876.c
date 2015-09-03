#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -611991LL;
int32_t t2 = -574366316;
int8_t x25 = INT8_MIN;
volatile uint64_t t5 = 122099378232945LLU;
volatile uint32_t x41 = 322892U;
uint16_t x48 = 726U;
int32_t x69 = INT32_MAX;
int64_t x70 = 27LL;
int32_t x75 = -1;
int8_t x82 = INT8_MIN;
volatile int16_t x99 = INT16_MIN;
volatile int64_t t18 = 1LL;
static int64_t x107 = INT64_MIN;
int32_t x120 = INT32_MIN;
int64_t x122 = -1LL;
uint64_t x126 = 3LLU;
volatile uint8_t x127 = UINT8_MAX;
int8_t x140 = INT8_MIN;
int64_t t27 = -17170765606LL;
uint8_t x149 = 2U;
int32_t x151 = INT32_MIN;
volatile int32_t x153 = INT32_MAX;
volatile int16_t x155 = INT16_MIN;
int8_t x164 = 4;
static volatile int16_t x169 = -75;
static uint16_t x170 = UINT16_MAX;
volatile uint32_t t33 = 478U;
int8_t x178 = INT8_MIN;
volatile uint16_t x179 = UINT16_MAX;
int64_t t34 = -46660LL;
static int32_t x186 = INT32_MIN;
int64_t x195 = -1063715341LL;
int8_t x202 = INT8_MAX;
int8_t x204 = INT8_MAX;
volatile uint64_t t37 = 31485LLU;
int8_t x205 = -1;
volatile int8_t x207 = INT8_MIN;
volatile int64_t x212 = -1LL;
uint8_t x224 = 70U;
int32_t x229 = -1;
static int32_t x230 = INT32_MAX;
int32_t t43 = -2;
int32_t x235 = INT32_MIN;
int32_t t44 = 69;
int64_t x241 = 3978884LL;
int64_t t46 = -65LL;
uint32_t x253 = UINT32_MAX;
int64_t x256 = INT64_MAX;
static int16_t x257 = INT16_MIN;
static volatile int64_t t52 = -90496933LL;
uint64_t x280 = UINT64_MAX;
int8_t x281 = 4;
static volatile int16_t x311 = INT16_MIN;
uint16_t x314 = UINT16_MAX;
int32_t x315 = 6462;
int32_t x321 = INT32_MAX;
static uint32_t x326 = 129976663U;
static int64_t x333 = INT64_MIN;
int16_t x337 = INT16_MIN;
int8_t x344 = INT8_MIN;
volatile int32_t t70 = -134811162;
int8_t x347 = INT8_MIN;
static uint32_t t71 = 3587162U;
int16_t x354 = 2294;
int16_t x355 = INT16_MAX;
int32_t t72 = -21;
volatile int32_t x358 = INT32_MAX;
int64_t x359 = 12035907LL;
volatile int64_t x363 = -243071557941536LL;
static volatile int64_t t74 = -63548926847594115LL;
volatile uint32_t x368 = 24829627U;
static int32_t x373 = INT32_MIN;
int64_t x380 = -1LL;
volatile int32_t t79 = 44364461;
int16_t x400 = -1;
int8_t x402 = -1;
static int64_t x404 = INT64_MAX;
int64_t x405 = INT64_MIN;
static int8_t x408 = INT8_MIN;
static int8_t x411 = INT8_MIN;
int8_t x412 = INT8_MIN;
uint64_t x413 = 1858992010LLU;
static int8_t x422 = INT8_MAX;
uint16_t x423 = 0U;
static uint32_t x430 = UINT32_MAX;
int16_t x435 = -1;
volatile uint16_t x437 = 1U;
int16_t x438 = -1;
volatile uint64_t t93 = 1293423195224LLU;
int32_t x453 = INT32_MIN;
uint32_t x454 = 7U;
volatile uint32_t t94 = 13U;
volatile int32_t x459 = INT32_MIN;
volatile int32_t t96 = -2;
static int64_t t98 = -245241536953427LL;
int32_t x473 = 43;
static uint8_t x474 = 105U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile uint16_t x2 = UINT16_MAX;
	int64_t x3 = -1LL;
	uint32_t x4 = UINT32_MAX;

	t0 = ((x1-x2)/(x3|x4));

	if (t0 != 32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	int16_t x6 = 6584;
	static int8_t x7 = -1;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 66663730585LL;

	t1 = ((x5-x6)/(x7|x8));

	if (t1 != 6457LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	volatile int16_t x10 = -1;
	uint8_t x11 = UINT8_MAX;
	static int32_t x12 = INT32_MIN;

	t2 = ((x9-x10)/(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 180U;
	int32_t x14 = -62;
	static int32_t x15 = 31534;
	volatile int8_t x16 = -2;
	volatile uint32_t t3 = 723274U;

	t3 = ((x13-x14)/(x15|x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 62996435323LLU;
	int8_t x22 = INT8_MIN;
	int8_t x23 = 1;
	volatile uint16_t x24 = 1660U;
	static volatile uint64_t t4 = 102747012743804970LLU;

	t4 = ((x21-x22)/(x23|x24));

	if (t4 != 37926812LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x26 = UINT32_MAX;
	volatile int16_t x27 = -1;
	uint64_t x28 = 499LLU;

	t5 = ((x25-x26)/(x27|x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	uint64_t x30 = UINT64_MAX;
	volatile uint64_t x31 = 2754LLU;
	uint16_t x32 = UINT16_MAX;
	uint64_t t6 = 2LLU;

	t6 = ((x29-x30)/(x31|x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 0LL;
	static volatile int32_t x38 = 11648864;
	int8_t x39 = -6;
	uint8_t x40 = UINT8_MAX;
	int64_t t7 = 0LL;

	t7 = ((x37-x38)/(x39|x40));

	if (t7 != 11648864LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = -1;
	uint16_t x43 = 16311U;
	int64_t x44 = INT64_MAX;
	int64_t t8 = 0LL;

	t8 = ((x41-x42)/(x43|x44));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x45 = 51U;
	volatile int8_t x46 = INT8_MIN;
	uint16_t x47 = UINT16_MAX;
	volatile int32_t t9 = -72859;

	t9 = ((x45-x46)/(x47|x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = 843538;
	int64_t x54 = -32621733966LL;
	static volatile int32_t x55 = INT32_MIN;
	static int8_t x56 = -1;
	static int64_t t10 = 456555270LL;

	t10 = ((x53-x54)/(x55|x56));

	if (t10 != -32622577504LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x57 = 16067U;
	volatile uint64_t x58 = 7427249167LLU;
	uint8_t x59 = 42U;
	volatile int32_t x60 = 219763;
	static volatile uint64_t t11 = 1170944952869472LLU;

	t11 = ((x57-x58)/(x59|x60));

	if (t11 != 83936206625452LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x71 = INT32_MIN;
	static uint8_t x72 = 0U;
	volatile int64_t t12 = -220153432596LL;

	t12 = ((x69-x70)/(x71|x72));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x73 = 3U;
	int32_t x74 = -1;
	volatile int16_t x76 = -49;
	static int32_t t13 = 13408325;

	t13 = ((x73-x74)/(x75|x76));

	if (t13 != -4) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = 13U;
	static int8_t x83 = INT8_MIN;
	uint32_t x84 = 57U;
	volatile uint32_t t14 = 1826717681U;

	t14 = ((x81-x82)/(x83|x84));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	int8_t x87 = -3;
	volatile int32_t x88 = INT32_MIN;
	uint32_t t15 = 73000681U;

	t15 = ((x85-x86)/(x87|x88));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = -1;
	uint16_t x91 = 1398U;
	static int8_t x92 = 0;
	static volatile uint64_t t16 = 124625840106LLU;

	t16 = ((x89-x90)/(x91|x92));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = -2778147;
	int8_t x94 = INT8_MIN;
	uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;
	volatile uint32_t t17 = 2586U;

	t17 = ((x93-x94)/(x95|x96));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = -85638842151788LL;
	int32_t x98 = 105905945;
	int16_t x100 = -1;

	t18 = ((x97-x98)/(x99|x100));

	if (t18 != 85638948057733LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x101 = UINT64_MAX;
	int64_t x102 = -1LL;
	static int32_t x103 = 732;
	int16_t x104 = INT16_MIN;
	uint64_t t19 = 7612835LLU;

	t19 = ((x101-x102)/(x103|x104));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x105 = 15747265U;
	volatile int8_t x106 = -29;
	volatile int32_t x108 = -1;
	static volatile int64_t t20 = -518148679543734LL;

	t20 = ((x105-x106)/(x107|x108));

	if (t20 != -15747294LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MIN;
	int32_t x119 = 85;
	int32_t t21 = -146742;

	t21 = ((x117-x118)/(x119|x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 0U;
	uint32_t x123 = 33066430U;
	int16_t x124 = INT16_MAX;
	volatile int64_t t22 = -32027494371770LL;

	t22 = ((x121-x122)/(x123|x124));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x125 = INT8_MIN;
	static volatile int32_t x128 = 512040;
	volatile uint64_t t23 = 418LLU;

	t23 = ((x125-x126)/(x127|x128));

	if (t23 != 36010861921717LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = 7259344LLU;
	int32_t x130 = 63424666;
	volatile int8_t x131 = INT8_MIN;
	static uint16_t x132 = 15U;
	uint64_t t24 = 3055LLU;

	t24 = ((x129-x130)/(x131|x132));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x133 = 6U;
	static int64_t x134 = 3315343824LL;
	int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MIN;
	volatile int64_t t25 = 943150LL;

	t25 = ((x133-x134)/(x135|x136));

	if (t25 != 25901123LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = -9;
	int32_t x138 = INT32_MIN;
	static uint32_t x139 = 281172197U;
	volatile uint32_t t26 = 1794952U;

	t26 = ((x137-x138)/(x139|x140));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = -1;
	int64_t x146 = INT64_MIN;
	int32_t x147 = -26937;
	volatile int32_t x148 = INT32_MAX;

	t27 = ((x145-x146)/(x147|x148));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x150 = 14956U;
	static int64_t x152 = INT64_MIN;
	int64_t t28 = -201568513LL;

	t28 = ((x149-x150)/(x151|x152));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x154 = UINT16_MAX;
	int16_t x156 = INT16_MAX;
	volatile int32_t t29 = -335;

	t29 = ((x153-x154)/(x155|x156));

	if (t29 != -2147418112) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x161 = 2338U;
	volatile uint16_t x162 = 10U;
	uint8_t x163 = UINT8_MAX;
	static int32_t t30 = 65479;

	t30 = ((x161-x162)/(x163|x164));

	if (t30 != 9) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x165 = INT64_MIN;
	int64_t x166 = -1LL;
	volatile uint32_t x167 = UINT32_MAX;
	static int16_t x168 = -3199;
	volatile int64_t t31 = -45300677111612LL;

	t31 = ((x165-x166)/(x167|x168));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x171 = 14254158124852LL;
	volatile int16_t x172 = 61;
	volatile int64_t t32 = -108LL;

	t32 = ((x169-x170)/(x171|x172));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = INT16_MAX;
	static int32_t x174 = -151926497;
	volatile int32_t x175 = INT32_MIN;
	uint32_t x176 = UINT32_MAX;

	t33 = ((x173-x174)/(x175|x176));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = INT32_MIN;
	static int64_t x180 = -1LL;

	t34 = ((x177-x178)/(x179|x180));

	if (t34 != 2147483520LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x185 = -1;
	int16_t x187 = -1;
	int16_t x188 = 8;
	int32_t t35 = -13694;

	t35 = ((x185-x186)/(x187|x188));

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = -463844515271443035LL;
	uint16_t x194 = 3875U;
	int64_t x196 = 116573204350LL;
	int64_t t36 = 110629351920LL;

	t36 = ((x193-x194)/(x195|x196));

	if (t36 != 1018961359LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = 1685784867LLU;
	int16_t x203 = -208;

	t37 = ((x201-x202)/(x203|x204));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x206 = UINT16_MAX;
	uint32_t x208 = 129949636U;
	static volatile uint32_t t38 = 61U;

	t38 = ((x205-x206)/(x207|x208));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = 5835070737918804LL;
	static uint8_t x210 = 3U;
	int32_t x211 = -1;
	int64_t t39 = 23143311LL;

	t39 = ((x209-x210)/(x211|x212));

	if (t39 != -5835070737918801LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x217 = 461135924LLU;
	int32_t x218 = 117258580;
	uint32_t x219 = 2191U;
	uint8_t x220 = UINT8_MAX;
	volatile uint64_t t40 = 28691610727LLU;

	t40 = ((x217-x218)/(x219|x220));

	if (t40 != 149317LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = INT64_MAX;
	uint64_t x222 = 1LLU;
	volatile int16_t x223 = -22;
	volatile uint64_t t41 = 428253034LLU;

	t41 = ((x221-x222)/(x223|x224));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x225 = -1LL;
	int16_t x226 = -1;
	int64_t x227 = -1LL;
	volatile int16_t x228 = -32;
	volatile int64_t t42 = 33LL;

	t42 = ((x225-x226)/(x227|x228));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x231 = INT8_MIN;
	static volatile int8_t x232 = INT8_MIN;

	t43 = ((x229-x230)/(x231|x232));

	if (t43 != 16777216) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x233 = INT8_MIN;
	uint8_t x234 = UINT8_MAX;
	int32_t x236 = INT32_MIN;

	t44 = ((x233-x234)/(x235|x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = INT16_MAX;
	static uint32_t x238 = 12U;
	int8_t x239 = INT8_MIN;
	int8_t x240 = -2;
	uint32_t t45 = 14U;

	t45 = ((x237-x238)/(x239|x240));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x242 = UINT32_MAX;
	int8_t x243 = INT8_MAX;
	uint32_t x244 = 4684U;

	t46 = ((x241-x242)/(x243|x244));

	if (t46 != -906227LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x245 = 59373536LLU;
	int16_t x246 = INT16_MIN;
	static int64_t x247 = INT64_MIN;
	int32_t x248 = -1;
	uint64_t t47 = 11LLU;

	t47 = ((x245-x246)/(x247|x248));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x249 = 41117164204641658LLU;
	static int8_t x250 = -1;
	int32_t x251 = 124;
	int32_t x252 = INT32_MIN;
	volatile uint64_t t48 = 162LLU;

	t48 = ((x249-x250)/(x251|x252));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x254 = -1;
	int8_t x255 = 0;
	int64_t t49 = 1738LL;

	t49 = ((x253-x254)/(x255|x256));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x258 = -154;
	int32_t x259 = INT32_MIN;
	volatile int32_t x260 = INT32_MAX;
	volatile int32_t t50 = -20963;

	t50 = ((x257-x258)/(x259|x260));

	if (t50 != 32614) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x261 = -1;
	int32_t x262 = -2916614;
	int16_t x263 = 2;
	int32_t x264 = -8167731;
	int32_t t51 = -19323592;

	t51 = ((x261-x262)/(x263|x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = 24679428LL;
	volatile int32_t x267 = 43618;
	static int32_t x268 = -2845413;

	t52 = ((x265-x266)/(x267|x268));

	if (t52 != -1506LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x269 = 47359582LL;
	static uint64_t x270 = UINT64_MAX;
	int32_t x271 = INT32_MAX;
	static int64_t x272 = -8524357651766LL;
	volatile uint64_t t53 = 87LLU;

	t53 = ((x269-x270)/(x271|x272));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x277 = -12495394422LL;
	int32_t x278 = -969518;
	static int16_t x279 = -1;
	static uint64_t t54 = 527987696075875LLU;

	t54 = ((x277-x278)/(x279|x280));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x282 = -1;
	static int8_t x283 = 1;
	static int64_t x284 = INT64_MIN;
	int64_t t55 = 76LL;

	t55 = ((x281-x282)/(x283|x284));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x285 = -1;
	static uint16_t x286 = UINT16_MAX;
	uint32_t x287 = 210656068U;
	uint32_t x288 = UINT32_MAX;
	static uint32_t t56 = 2U;

	t56 = ((x285-x286)/(x287|x288));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x289 = -1;
	volatile uint32_t x290 = 0U;
	int16_t x291 = INT16_MAX;
	static int32_t x292 = 77244222;
	volatile uint32_t t57 = 138U;

	t57 = ((x289-x290)/(x291|x292));

	if (t57 != 55U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x293 = -3;
	int8_t x294 = INT8_MIN;
	static uint64_t x295 = 3883594029LLU;
	uint8_t x296 = UINT8_MAX;
	uint64_t t58 = 43326235477480LLU;

	t58 = ((x293-x294)/(x295|x296));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x297 = -1;
	static int64_t x298 = 650754249277LL;
	int16_t x299 = INT16_MAX;
	int32_t x300 = 688;
	int64_t t59 = 3424622095078LL;

	t59 = ((x297-x298)/(x299|x300));

	if (t59 != -19860049LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x301 = INT16_MIN;
	static uint64_t x302 = UINT64_MAX;
	volatile int8_t x303 = 0;
	uint32_t x304 = 212U;
	volatile uint64_t t60 = 45494432003931LLU;

	t60 = ((x301-x302)/(x303|x304));

	if (t60 != 87012943743912824LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x305 = 218;
	int32_t x306 = -1;
	uint8_t x307 = UINT8_MAX;
	volatile uint16_t x308 = 471U;
	volatile int32_t t61 = -1274806;

	t61 = ((x305-x306)/(x307|x308));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x309 = -1LL;
	uint32_t x310 = 324U;
	int16_t x312 = INT16_MIN;
	static volatile int64_t t62 = -432283827015322LL;

	t62 = ((x309-x310)/(x311|x312));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x313 = INT8_MIN;
	int16_t x316 = 8;
	static volatile int32_t t63 = 1886;

	t63 = ((x313-x314)/(x315|x316));

	if (t63 != -10) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x317 = INT16_MIN;
	uint64_t x318 = UINT64_MAX;
	static uint8_t x319 = 1U;
	int8_t x320 = INT8_MIN;
	volatile uint64_t t64 = 327092483858058LLU;

	t64 = ((x317-x318)/(x319|x320));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x322 = 6U;
	uint64_t x323 = 686181595LLU;
	static volatile uint8_t x324 = UINT8_MAX;
	uint64_t t65 = 2135LLU;

	t65 = ((x321-x322)/(x323|x324));

	if (t65 != 3LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x325 = -11LL;
	static int64_t x327 = -6268731748LL;
	int16_t x328 = -1;
	volatile int64_t t66 = -993450868589825LL;

	t66 = ((x325-x326)/(x327|x328));

	if (t66 != 129976674LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = 899;
	uint8_t x330 = 22U;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MAX;
	int32_t t67 = -2779667;

	t67 = ((x329-x330)/(x331|x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x334 = INT8_MIN;
	volatile int64_t x335 = -23153LL;
	int32_t x336 = INT32_MIN;
	volatile int64_t t68 = 1110296074069024198LL;

	t68 = ((x333-x334)/(x335|x336));

	if (t68 != 398366174441963LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x338 = 55610439842958132LLU;
	int64_t x339 = 13552549LL;
	int16_t x340 = INT16_MAX;
	uint64_t t69 = 3000149LLU;

	t69 = ((x337-x338)/(x339|x340));

	if (t69 != 1355683330557LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x341 = 1;
	int16_t x342 = 185;
	int16_t x343 = INT16_MAX;

	t70 = ((x341-x342)/(x343|x344));

	if (t70 != 184) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x345 = 905722025U;
	uint8_t x346 = 1U;
	volatile uint32_t x348 = 1U;

	t71 = ((x345-x346)/(x347|x348));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x353 = INT8_MIN;
	int32_t x356 = INT32_MAX;

	t72 = ((x353-x354)/(x355|x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x357 = -1;
	static int16_t x360 = INT16_MAX;
	int64_t t73 = 1311999567LL;

	t73 = ((x357-x358)/(x359|x360));

	if (t73 != -178LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x361 = -1LL;
	uint16_t x362 = 2U;
	static uint16_t x364 = 3953U;

	t74 = ((x361-x362)/(x363|x364));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x365 = 0;
	static uint8_t x366 = 92U;
	static volatile int16_t x367 = -1;
	static uint32_t t75 = 9490U;

	t75 = ((x365-x366)/(x367|x368));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x374 = 30905U;
	uint32_t x375 = UINT32_MAX;
	static volatile int32_t x376 = 80076455;
	volatile uint32_t t76 = 62U;

	t76 = ((x373-x374)/(x375|x376));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x377 = INT64_MAX;
	static volatile uint64_t x378 = 5924372899LLU;
	int32_t x379 = -1006;
	static volatile uint64_t t77 = 54546134773777567LLU;

	t77 = ((x377-x378)/(x379|x380));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x385 = UINT16_MAX;
	volatile int16_t x386 = -1;
	uint8_t x387 = UINT8_MAX;
	uint64_t x388 = 33690LLU;
	static volatile uint64_t t78 = 3789354LLU;

	t78 = ((x385-x386)/(x387|x388));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x389 = INT32_MAX;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = INT8_MIN;
	uint8_t x392 = 15U;

	t79 = ((x389-x390)/(x391|x392));

	if (t79 != -19003700) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x397 = 7U;
	int8_t x398 = INT8_MIN;
	static uint8_t x399 = 58U;
	volatile uint32_t t80 = 1503520U;

	t80 = ((x397-x398)/(x399|x400));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x401 = 4752824481011510442LLU;
	volatile int8_t x403 = INT8_MIN;
	uint64_t t81 = 199803LLU;

	t81 = ((x401-x402)/(x403|x404));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MIN;
	int64_t t82 = -69766422608687163LL;

	t82 = ((x405-x406)/(x407|x408));

	if (t82 != 72057594021150720LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x409 = 1;
	static int8_t x410 = INT8_MAX;
	volatile int32_t t83 = 14193272;

	t83 = ((x409-x410)/(x411|x412));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x414 = 180683090U;
	uint16_t x415 = 567U;
	uint32_t x416 = 2785687U;
	volatile uint64_t t84 = 0LLU;

	t84 = ((x413-x414)/(x415|x416));

	if (t84 != 602LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x417 = 2U;
	int64_t x418 = 6599046653475LL;
	volatile int32_t x419 = INT32_MAX;
	int32_t x420 = -1;
	volatile int64_t t85 = -95614LL;

	t85 = ((x417-x418)/(x419|x420));

	if (t85 != 6599046653473LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = INT16_MAX;
	int32_t x424 = INT32_MIN;
	int32_t t86 = -930;

	t86 = ((x421-x422)/(x423|x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x425 = 12;
	int16_t x426 = INT16_MIN;
	volatile int16_t x427 = INT16_MIN;
	int16_t x428 = -1;
	volatile int32_t t87 = -15;

	t87 = ((x425-x426)/(x427|x428));

	if (t87 != -32780) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = 9;
	int16_t x431 = INT16_MIN;
	int8_t x432 = INT8_MAX;
	static uint32_t t88 = 1003514631U;

	t88 = ((x429-x430)/(x431|x432));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = -9376239;
	static volatile int64_t x434 = 257118594582064LL;
	int32_t x436 = -565218;
	volatile int64_t t89 = -5087538LL;

	t89 = ((x433-x434)/(x435|x436));

	if (t89 != 257118603958303LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x439 = 115021592LL;
	int64_t x440 = INT64_MIN;
	int64_t t90 = 78LL;

	t90 = ((x437-x438)/(x439|x440));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x441 = UINT16_MAX;
	volatile int16_t x442 = -205;
	int16_t x443 = INT16_MIN;
	static int16_t x444 = INT16_MAX;
	volatile int32_t t91 = 15552914;

	t91 = ((x441-x442)/(x443|x444));

	if (t91 != -65740) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x445 = INT16_MIN;
	int64_t x446 = INT64_MIN;
	static int8_t x447 = 1;
	uint16_t x448 = UINT16_MAX;
	int64_t t92 = -3636LL;

	t92 = ((x445-x446)/(x447|x448));

	if (t92 != 140739635871744LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x449 = 2407LLU;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = INT32_MIN;
	int8_t x452 = 0;

	t93 = ((x449-x450)/(x451|x452));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x455 = 481U;
	uint8_t x456 = 0U;

	t94 = ((x453-x454)/(x455|x456));

	if (t94 != 4464622U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x457 = -1;
	int16_t x458 = -1;
	int8_t x460 = INT8_MIN;
	volatile int32_t t95 = -39;

	t95 = ((x457-x458)/(x459|x460));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x461 = INT8_MIN;
	int8_t x462 = -1;
	static int16_t x463 = INT16_MIN;
	int8_t x464 = INT8_MIN;

	t96 = ((x461-x462)/(x463|x464));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x465 = INT8_MIN;
	int16_t x466 = -3598;
	int32_t x467 = -1;
	uint32_t x468 = 3245U;
	volatile uint32_t t97 = 12U;

	t97 = ((x465-x466)/(x467|x468));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x469 = 1;
	uint16_t x470 = 434U;
	int64_t x471 = -1LL;
	int16_t x472 = INT16_MAX;

	t98 = ((x469-x470)/(x471|x472));

	if (t98 != 433LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x475 = INT16_MAX;
	uint32_t x476 = 10230U;
	uint32_t t99 = 16967U;

	t99 = ((x473-x474)/(x475|x476));

	if (t99 != 131075U) { NG(); } else { ; }
	
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

