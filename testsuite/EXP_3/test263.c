#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = -1;
int8_t x27 = -1;
int32_t x33 = INT32_MAX;
int32_t t6 = -1338;
uint32_t x45 = 1315574U;
uint32_t t9 = 211630092U;
uint64_t x71 = 11923LLU;
int64_t x72 = INT64_MAX;
static uint64_t t13 = 76LLU;
uint32_t t14 = 159U;
volatile int32_t x79 = 175;
static int32_t x81 = INT32_MAX;
uint64_t x82 = 92LLU;
volatile uint32_t x84 = 8014427U;
volatile int16_t x94 = 103;
volatile int8_t x108 = 11;
int8_t x114 = -1;
int16_t x119 = -283;
int64_t x123 = -1LL;
int32_t x132 = 0;
static int8_t x133 = INT8_MAX;
uint64_t x138 = 223304400LLU;
volatile int32_t t27 = 958979613;
static int8_t x144 = -27;
volatile int64_t t28 = 2001592768574131LL;
int8_t x145 = INT8_MAX;
uint32_t x162 = 993U;
uint32_t t34 = 17643U;
int32_t x174 = INT32_MAX;
static int32_t x189 = INT32_MIN;
uint32_t t39 = 55513248U;
int32_t x198 = INT32_MAX;
volatile int32_t t41 = 23;
int64_t x207 = -1LL;
static int8_t x208 = INT8_MAX;
int8_t x213 = INT8_MIN;
int16_t x216 = -1;
static int8_t x221 = 7;
uint32_t x228 = UINT32_MAX;
static int16_t x231 = -56;
volatile int32_t t50 = 187427;
static int8_t x249 = 0;
volatile uint32_t t53 = 19U;
uint8_t x255 = 27U;
volatile int32_t t54 = -3;
int16_t x263 = INT16_MAX;
int8_t x264 = -2;
int32_t t56 = 0;
int16_t x265 = INT16_MIN;
volatile int8_t x269 = INT8_MIN;
int8_t x270 = 1;
uint8_t x271 = 1U;
volatile int8_t x273 = -10;
static volatile int16_t x276 = 0;
volatile uint8_t x279 = UINT8_MAX;
int32_t x289 = INT32_MIN;
static int16_t x291 = -43;
int8_t x292 = INT8_MIN;
int16_t x299 = INT16_MIN;
int64_t x300 = -1LL;
int64_t x306 = INT64_MAX;
volatile int32_t x318 = INT32_MIN;
int8_t x320 = 2;
static uint64_t x321 = UINT64_MAX;
int32_t t70 = -17;
int64_t x337 = 11304177518LL;
static volatile uint32_t t74 = 65154U;
static volatile int8_t x348 = INT8_MIN;
static volatile int64_t t77 = 1042027999811205262LL;
volatile int16_t x354 = INT16_MIN;
static volatile int32_t t79 = 13;
int32_t x362 = INT32_MIN;
static uint8_t x364 = 0U;
static int32_t t83 = -104265414;
volatile int32_t t85 = 3;
int64_t x397 = INT64_MIN;
volatile int64_t t86 = -5581394793446LL;
int16_t x401 = INT16_MIN;
uint64_t x403 = 28LLU;
int32_t x405 = INT32_MIN;
volatile uint32_t x407 = 1U;
int64_t x413 = -1LL;
uint32_t x414 = UINT32_MAX;
volatile int64_t t90 = 113LL;
int16_t x436 = INT16_MIN;
volatile int32_t t93 = -15790246;
volatile int64_t x438 = INT64_MIN;
int8_t x442 = INT8_MAX;
volatile int8_t x444 = INT8_MAX;
int32_t x445 = -154507;
volatile int8_t x451 = -1;
uint64_t t98 = 9705738869522LLU;
int32_t x457 = INT32_MIN;
volatile int16_t x458 = 316;
volatile int32_t x460 = INT32_MIN;


void f0(void) {
	int8_t x2 = -1;
	int64_t x3 = INT64_MAX;
	uint16_t x4 = 1554U;
	int64_t t0 = 6303527LL;

	t0 = ((x1==x2)*(x3-x4));

	if (t0 != 9223372036854774253LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = UINT32_MAX;
	volatile uint32_t x8 = 51072U;
	uint32_t t1 = 22008441U;

	t1 = ((x5==x6)*(x7-x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	uint64_t x15 = 7583533773823608LLU;
	uint32_t x16 = 254269197U;
	static volatile uint64_t t2 = 123106LLU;

	t2 = ((x13==x14)*(x15-x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	int32_t x18 = INT32_MIN;
	int64_t x19 = INT64_MIN;
	int64_t x20 = INT64_MIN;
	volatile int64_t t3 = -5292265152LL;

	t3 = ((x17==x18)*(x19-x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x25 = 8498U;
	volatile uint8_t x26 = 43U;
	int16_t x28 = INT16_MAX;
	int32_t t4 = -3379;

	t4 = ((x25==x26)*(x27-x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	volatile int64_t x30 = -11901742196610615LL;
	int16_t x31 = -5;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t5 = 253254U;

	t5 = ((x29==x30)*(x31-x32));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x34 = INT64_MIN;
	int32_t x35 = 185107;
	static int8_t x36 = 0;

	t6 = ((x33==x34)*(x35-x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -41;
	static int64_t x38 = -381130LL;
	int32_t x39 = 1981041;
	static uint16_t x40 = UINT16_MAX;
	static volatile int32_t t7 = -2412;

	t7 = ((x37==x38)*(x39-x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x46 = INT64_MIN;
	uint64_t x47 = UINT64_MAX;
	uint32_t x48 = UINT32_MAX;
	volatile uint64_t t8 = 88949LLU;

	t8 = ((x45==x46)*(x47-x48));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 81784239U;
	volatile uint64_t x50 = UINT64_MAX;
	static uint32_t x51 = 5721U;
	volatile int8_t x52 = INT8_MAX;

	t9 = ((x49==x50)*(x51-x52));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	int64_t x54 = 427195839108573583LL;
	int64_t x55 = -2LL;
	int8_t x56 = -1;
	int64_t t10 = -52765233528907903LL;

	t10 = ((x53==x54)*(x55-x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x57 = INT16_MAX;
	static uint8_t x58 = UINT8_MAX;
	uint8_t x59 = 0U;
	uint32_t x60 = 46U;
	uint32_t t11 = 2750613U;

	t11 = ((x57==x58)*(x59-x60));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = 0U;
	int16_t x62 = -1;
	volatile uint32_t x63 = 36977U;
	int8_t x64 = 0;
	uint32_t t12 = 24U;

	t12 = ((x61==x62)*(x63-x64));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = 68LL;
	static volatile int64_t x70 = INT64_MIN;

	t13 = ((x69==x70)*(x71-x72));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = 4U;
	int64_t x74 = 2046239349548384942LL;
	uint32_t x75 = 117710U;
	volatile int8_t x76 = INT8_MAX;

	t14 = ((x73==x74)*(x75-x76));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MAX;
	int8_t x78 = INT8_MIN;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t15 = 30761;

	t15 = ((x77==x78)*(x79-x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x83 = 21647U;
	static uint32_t t16 = 33117390U;

	t16 = ((x81==x82)*(x83-x84));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x89 = 3;
	uint8_t x90 = 6U;
	static int64_t x91 = -1LL;
	volatile int32_t x92 = -1;
	volatile int64_t t17 = -78018LL;

	t17 = ((x89==x90)*(x91-x92));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = INT64_MIN;
	int8_t x95 = INT8_MIN;
	int16_t x96 = INT16_MIN;
	static volatile int32_t t18 = -36089315;

	t18 = ((x93==x94)*(x95-x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x97 = INT16_MAX;
	int32_t x98 = INT32_MIN;
	volatile int8_t x99 = -1;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t19 = 22;

	t19 = ((x97==x98)*(x99-x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x105 = UINT32_MAX;
	int8_t x106 = INT8_MIN;
	int32_t x107 = -1;
	volatile int32_t t20 = -73605419;

	t20 = ((x105==x106)*(x107-x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x113 = 0U;
	uint8_t x115 = 22U;
	int32_t x116 = -1;
	static int32_t t21 = -111;

	t21 = ((x113==x114)*(x115-x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = INT64_MIN;
	volatile uint8_t x118 = UINT8_MAX;
	static uint8_t x120 = UINT8_MAX;
	static int32_t t22 = -154599;

	t22 = ((x117==x118)*(x119-x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x121 = -1;
	volatile int64_t x122 = 1LL;
	static int16_t x124 = 6002;
	int64_t t23 = 11LL;

	t23 = ((x121==x122)*(x123-x124));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = UINT64_MAX;
	int16_t x126 = -1;
	uint32_t x127 = UINT32_MAX;
	volatile uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t24 = 131229770U;

	t24 = ((x125==x126)*(x127-x128));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = -1LL;
	uint16_t x130 = UINT16_MAX;
	uint64_t x131 = 713822311437724LLU;
	uint64_t t25 = 294498558LLU;

	t25 = ((x129==x130)*(x131-x132));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x134 = UINT16_MAX;
	static int64_t x135 = INT64_MIN;
	int8_t x136 = 0;
	static volatile int64_t t26 = 3025421013532LL;

	t26 = ((x133==x134)*(x135-x136));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = INT8_MIN;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = 1U;

	t27 = ((x137==x138)*(x139-x140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x141 = -1;
	static uint32_t x142 = 35U;
	int64_t x143 = -1LL;

	t28 = ((x141==x142)*(x143-x144));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x146 = INT64_MIN;
	uint8_t x147 = 10U;
	volatile uint32_t x148 = 727U;
	uint32_t t29 = 1397U;

	t29 = ((x145==x146)*(x147-x148));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x149 = INT8_MIN;
	volatile int32_t x150 = 1;
	uint64_t x151 = 26911145904427LLU;
	uint32_t x152 = UINT32_MAX;
	static volatile uint64_t t30 = 1694LLU;

	t30 = ((x149==x150)*(x151-x152));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x157 = 18U;
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t31 = 3;

	t31 = ((x157==x158)*(x159-x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x161 = 3;
	int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	int64_t t32 = -1081420270987460151LL;

	t32 = ((x161==x162)*(x163-x164));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x165 = UINT8_MAX;
	uint16_t x166 = UINT16_MAX;
	uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MAX;
	volatile uint64_t t33 = 595015717202093245LLU;

	t33 = ((x165==x166)*(x167-x168));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x169 = 9U;
	int8_t x170 = 1;
	static volatile int16_t x171 = INT16_MIN;
	volatile uint32_t x172 = 1808793352U;

	t34 = ((x169==x170)*(x171-x172));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	static int16_t x176 = 2677;
	volatile int32_t t35 = -20368813;

	t35 = ((x173==x174)*(x175-x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x177 = 189995U;
	static uint16_t x178 = 3756U;
	static uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MIN;
	static uint64_t t36 = 2779LLU;

	t36 = ((x177==x178)*(x179-x180));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x181 = UINT64_MAX;
	static int16_t x182 = INT16_MAX;
	int32_t x183 = 12;
	uint8_t x184 = UINT8_MAX;
	static int32_t t37 = -98;

	t37 = ((x181==x182)*(x183-x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = -1;
	int16_t x186 = INT16_MAX;
	static uint8_t x187 = UINT8_MAX;
	static volatile int32_t x188 = -1;
	int32_t t38 = 13641;

	t38 = ((x185==x186)*(x187-x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x190 = 13707;
	uint32_t x191 = UINT32_MAX;
	uint8_t x192 = 6U;

	t39 = ((x189==x190)*(x191-x192));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = 360712261U;
	uint16_t x194 = 33U;
	volatile uint16_t x195 = UINT16_MAX;
	volatile int8_t x196 = INT8_MAX;
	volatile int32_t t40 = -89098002;

	t40 = ((x193==x194)*(x195-x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x199 = UINT16_MAX;
	volatile uint8_t x200 = UINT8_MAX;

	t41 = ((x197==x198)*(x199-x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = -6191043875485555LL;
	uint16_t x206 = UINT16_MAX;
	int64_t t42 = 60108748998LL;

	t42 = ((x205==x206)*(x207-x208));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x209 = 39;
	uint64_t x210 = 545985749307523LLU;
	volatile int8_t x211 = 14;
	int32_t x212 = -23489;
	volatile int32_t t43 = 498;

	t43 = ((x209==x210)*(x211-x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x214 = 174295165LLU;
	volatile int64_t x215 = INT64_MIN;
	volatile int64_t t44 = 8452446129625LL;

	t44 = ((x213==x214)*(x215-x216));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x217 = 355U;
	int32_t x218 = 3;
	int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MIN;
	int64_t t45 = 143052207LL;

	t45 = ((x217==x218)*(x219-x220));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x222 = 7442381311LLU;
	static int64_t x223 = INT64_MAX;
	uint8_t x224 = UINT8_MAX;
	volatile int64_t t46 = 630LL;

	t46 = ((x221==x222)*(x223-x224));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = -27823179;
	int16_t x226 = -1;
	uint16_t x227 = 27U;
	static uint32_t t47 = 50437968U;

	t47 = ((x225==x226)*(x227-x228));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = 402551119;
	uint8_t x230 = 9U;
	uint16_t x232 = 10287U;
	volatile int32_t t48 = 1511001;

	t48 = ((x229==x230)*(x231-x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = -4;
	static int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;
	static volatile uint32_t t49 = 1925U;

	t49 = ((x233==x234)*(x235-x236));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x237 = 0U;
	int64_t x238 = INT64_MIN;
	volatile int8_t x239 = -1;
	int32_t x240 = 11187222;

	t50 = ((x237==x238)*(x239-x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x241 = INT8_MIN;
	volatile int16_t x242 = -9665;
	int16_t x243 = -1772;
	int16_t x244 = -1;
	int32_t t51 = 170;

	t51 = ((x241==x242)*(x243-x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = 0;
	int64_t x246 = INT64_MAX;
	uint16_t x247 = UINT16_MAX;
	static int16_t x248 = 3337;
	static volatile int32_t t52 = 177;

	t52 = ((x245==x246)*(x247-x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x250 = UINT32_MAX;
	uint32_t x251 = 752089911U;
	volatile uint8_t x252 = UINT8_MAX;

	t53 = ((x249==x250)*(x251-x252));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x253 = 72345603U;
	int64_t x254 = INT64_MIN;
	uint16_t x256 = 15456U;

	t54 = ((x253==x254)*(x255-x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x257 = 17U;
	uint32_t x258 = 876488680U;
	uint32_t x259 = 28241U;
	int16_t x260 = INT16_MIN;
	uint32_t t55 = 49U;

	t55 = ((x257==x258)*(x259-x260));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = -1;
	int32_t x262 = -4532;

	t56 = ((x261==x262)*(x263-x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x266 = -1;
	uint32_t x267 = 69763551U;
	int32_t x268 = -1;
	uint32_t t57 = 31987U;

	t57 = ((x265==x266)*(x267-x268));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x272 = INT8_MAX;
	int32_t t58 = 2;

	t58 = ((x269==x270)*(x271-x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x274 = 348002544418783919LL;
	uint32_t x275 = UINT32_MAX;
	volatile uint32_t t59 = 61U;

	t59 = ((x273==x274)*(x275-x276));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x277 = UINT16_MAX;
	volatile int16_t x278 = INT16_MAX;
	uint32_t x280 = 2U;
	uint32_t t60 = 10U;

	t60 = ((x277==x278)*(x279-x280));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = -1;
	int32_t x282 = INT32_MIN;
	uint32_t x283 = UINT32_MAX;
	static uint64_t x284 = 594848690842LLU;
	volatile uint64_t t61 = 2373LLU;

	t61 = ((x281==x282)*(x283-x284));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x285 = INT32_MIN;
	uint32_t x286 = 4U;
	volatile int8_t x287 = INT8_MAX;
	static int32_t x288 = 1006;
	volatile int32_t t62 = 147133579;

	t62 = ((x285==x286)*(x287-x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x290 = INT8_MIN;
	int32_t t63 = -2145771;

	t63 = ((x289==x290)*(x291-x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MAX;
	int32_t x294 = -1;
	static volatile int16_t x295 = -214;
	uint64_t x296 = UINT64_MAX;
	uint64_t t64 = 222226469811361908LLU;

	t64 = ((x293==x294)*(x295-x296));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = -1LL;
	static int32_t x298 = INT32_MIN;
	int64_t t65 = -1LL;

	t65 = ((x297==x298)*(x299-x300));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = 5562662771LL;
	volatile uint64_t x307 = 71754205LLU;
	uint64_t x308 = UINT64_MAX;
	uint64_t t66 = 13655434111021347LLU;

	t66 = ((x305==x306)*(x307-x308));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = -44333LL;
	uint8_t x310 = 1U;
	uint32_t x311 = 819356U;
	uint8_t x312 = 1U;
	uint32_t t67 = 91U;

	t67 = ((x309==x310)*(x311-x312));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x313 = 2445LLU;
	int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MAX;
	int8_t x316 = INT8_MIN;
	volatile int32_t t68 = 234;

	t68 = ((x313==x314)*(x315-x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x317 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	volatile int32_t t69 = -20;

	t69 = ((x317==x318)*(x319-x320));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x322 = 7960U;
	int32_t x323 = -1;
	static volatile int16_t x324 = 3846;

	t70 = ((x321==x322)*(x323-x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x325 = INT8_MIN;
	uint16_t x326 = UINT16_MAX;
	volatile int8_t x327 = -1;
	static volatile int8_t x328 = INT8_MAX;
	volatile int32_t t71 = -622566;

	t71 = ((x325==x326)*(x327-x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MIN;
	int64_t x332 = -348942145808033LL;
	int64_t t72 = -17767566587636010LL;

	t72 = ((x329==x330)*(x331-x332));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x333 = -1;
	int32_t x334 = 271;
	static int8_t x335 = -1;
	int32_t x336 = INT32_MIN;
	int32_t t73 = -439;

	t73 = ((x333==x334)*(x335-x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x338 = -1;
	uint32_t x339 = 10601689U;
	int8_t x340 = INT8_MIN;

	t74 = ((x337==x338)*(x339-x340));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = -1;
	volatile uint16_t x342 = UINT16_MAX;
	int8_t x343 = 0;
	int16_t x344 = INT16_MAX;
	int32_t t75 = 447857;

	t75 = ((x341==x342)*(x343-x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = 3U;
	int64_t x346 = -2917339284LL;
	static uint16_t x347 = 2802U;
	int32_t t76 = -1;

	t76 = ((x345==x346)*(x347-x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x349 = 2030U;
	int64_t x350 = 5027LL;
	int64_t x351 = 266585870LL;
	int16_t x352 = -1;

	t77 = ((x349==x350)*(x351-x352));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x353 = 58654U;
	volatile uint8_t x355 = 87U;
	int16_t x356 = INT16_MIN;
	int32_t t78 = -215018202;

	t78 = ((x353==x354)*(x355-x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x357 = 39;
	int16_t x358 = -1;
	volatile uint8_t x359 = 28U;
	uint16_t x360 = UINT16_MAX;

	t79 = ((x357==x358)*(x359-x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x361 = -1;
	static int64_t x363 = INT64_MIN;
	int64_t t80 = -77193650033891LL;

	t80 = ((x361==x362)*(x363-x364));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = -2061;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 22U;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t81 = 3;

	t81 = ((x365==x366)*(x367-x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x377 = 0;
	volatile int64_t x378 = 12374331050LL;
	static int8_t x379 = -1;
	int16_t x380 = 31;
	static int32_t t82 = 1;

	t82 = ((x377==x378)*(x379-x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x381 = -1LL;
	int8_t x382 = 3;
	volatile int16_t x383 = 5;
	static int16_t x384 = -5198;

	t83 = ((x381==x382)*(x383-x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x389 = 1;
	uint16_t x390 = UINT16_MAX;
	int32_t x391 = 29;
	int16_t x392 = -1;
	volatile int32_t t84 = -1676;

	t84 = ((x389==x390)*(x391-x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x393 = -1LL;
	static int32_t x394 = -2047715;
	int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MIN;

	t85 = ((x393==x394)*(x395-x396));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x398 = UINT64_MAX;
	static volatile int64_t x399 = INT64_MAX;
	volatile int8_t x400 = INT8_MAX;

	t86 = ((x397==x398)*(x399-x400));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x402 = 0U;
	int8_t x404 = INT8_MAX;
	volatile uint64_t t87 = 943860846413LLU;

	t87 = ((x401==x402)*(x403-x404));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x406 = INT16_MIN;
	int32_t x408 = INT32_MIN;
	volatile uint32_t t88 = 16U;

	t88 = ((x405==x406)*(x407-x408));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x415 = INT16_MIN;
	uint64_t x416 = UINT64_MAX;
	uint64_t t89 = 3683057510709LLU;

	t89 = ((x413==x414)*(x415-x416));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x417 = INT64_MIN;
	int32_t x418 = INT32_MIN;
	int32_t x419 = -1;
	static int64_t x420 = INT64_MIN;

	t90 = ((x417==x418)*(x419-x420));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = INT64_MIN;
	volatile int16_t x422 = INT16_MIN;
	static volatile int16_t x423 = -1;
	static uint16_t x424 = UINT16_MAX;
	volatile int32_t t91 = 39520;

	t91 = ((x421==x422)*(x423-x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x425 = INT16_MAX;
	uint16_t x426 = 6U;
	uint64_t x427 = 47543LLU;
	uint32_t x428 = 46389U;
	uint64_t t92 = 55159LLU;

	t92 = ((x425==x426)*(x427-x428));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x433 = INT16_MAX;
	int64_t x434 = 198LL;
	uint16_t x435 = 2U;

	t93 = ((x433==x434)*(x435-x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x437 = INT16_MIN;
	static int64_t x439 = INT64_MIN;
	volatile int64_t x440 = INT64_MIN;
	int64_t t94 = 315360LL;

	t94 = ((x437==x438)*(x439-x440));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = -1;
	int32_t x443 = -1;
	static volatile int32_t t95 = 186051220;

	t95 = ((x441==x442)*(x443-x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x446 = 1U;
	static volatile uint16_t x447 = 272U;
	static uint16_t x448 = UINT16_MAX;
	volatile int32_t t96 = 951;

	t96 = ((x445==x446)*(x447-x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x449 = INT16_MAX;
	int32_t x450 = INT32_MIN;
	static int16_t x452 = INT16_MIN;
	int32_t t97 = 980;

	t97 = ((x449==x450)*(x451-x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x453 = 3769156716976625616LLU;
	static volatile int8_t x454 = -1;
	uint64_t x455 = UINT64_MAX;
	static uint16_t x456 = 1765U;

	t98 = ((x453==x454)*(x455-x456));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x459 = INT8_MIN;
	int32_t t99 = -206023013;

	t99 = ((x457==x458)*(x459-x460));

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

