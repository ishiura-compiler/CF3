#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
uint32_t x4 = UINT32_MAX;
static uint64_t t1 = 11036LLU;
volatile uint16_t x13 = 98U;
volatile int64_t t4 = -28196LL;
uint32_t x22 = 77797U;
static volatile uint64_t x24 = 979836981LLU;
uint64_t t5 = 6431507416LLU;
uint64_t x39 = UINT64_MAX;
uint16_t x45 = UINT16_MAX;
uint32_t x47 = 2000461U;
uint64_t x50 = 2368463LLU;
volatile int8_t x51 = INT8_MAX;
static int32_t x52 = INT32_MIN;
uint64_t t12 = 1LLU;
static volatile int16_t x53 = -1;
int16_t x57 = INT16_MAX;
int64_t x58 = -2482900138604813984LL;
int64_t x59 = -1LL;
volatile int64_t t14 = -15736221746686LL;
uint64_t t15 = 1337179976879LLU;
volatile int32_t x65 = -56348526;
uint64_t x66 = UINT64_MAX;
uint32_t x67 = UINT32_MAX;
uint64_t x68 = UINT64_MAX;
static uint64_t t16 = 28237LLU;
static int16_t x75 = INT16_MIN;
static int8_t x77 = -1;
volatile int8_t x78 = INT8_MAX;
int64_t x80 = INT64_MIN;
uint16_t x93 = 6865U;
volatile uint64_t x103 = UINT64_MAX;
static int32_t t25 = 1586;
volatile uint32_t x117 = 1U;
int64_t x118 = -1LL;
int8_t x121 = -31;
int64_t x124 = 49671413923802LL;
volatile int64_t t30 = -10808095LL;
volatile int32_t x129 = 178199844;
int64_t x131 = INT64_MIN;
int16_t x140 = INT16_MIN;
static volatile int64_t x141 = -737006694956472LL;
volatile int32_t x142 = -1;
int8_t x143 = INT8_MAX;
volatile int32_t x148 = INT32_MAX;
static int32_t x152 = INT32_MIN;
static volatile int32_t t36 = -26;
int8_t x156 = INT8_MAX;
int8_t x167 = 1;
uint32_t x180 = 130U;
static int8_t x187 = 7;
volatile int32_t x193 = INT32_MIN;
uint32_t x197 = UINT32_MAX;
int16_t x205 = -1;
int32_t x211 = INT32_MIN;
static int16_t x212 = INT16_MIN;
volatile int64_t x213 = INT64_MIN;
uint64_t x214 = 3289028246031791407LLU;
int16_t x220 = INT16_MIN;
static int16_t x221 = INT16_MAX;
int64_t x230 = 50606924212206681LL;
int16_t x231 = -15;
volatile uint64_t t55 = 37680962533158LLU;
volatile uint64_t x241 = 1108331861398002227LLU;
static uint32_t x246 = 30686575U;
int8_t x256 = INT8_MAX;
int32_t x265 = 1;
int64_t x269 = 23774144505LL;
volatile uint32_t x277 = UINT32_MAX;
uint8_t x278 = 121U;
uint8_t x279 = UINT8_MAX;
int32_t x281 = -1;
volatile uint64_t x288 = 10623LLU;
volatile int16_t x292 = 5;
volatile uint16_t x293 = 645U;
int8_t x297 = -3;
uint16_t x310 = 1U;
volatile int64_t t72 = -108LL;
int32_t x318 = 15;
int32_t x320 = INT32_MAX;
int64_t t74 = -333219193476LL;
int64_t x328 = -1LL;
static int32_t x330 = INT32_MAX;
uint64_t x335 = 61977443528106LLU;
static volatile int64_t x336 = INT64_MIN;
int32_t x337 = INT32_MIN;
int64_t x342 = INT64_MIN;
volatile int32_t x349 = -38;
int64_t x354 = -181LL;
static uint8_t x355 = UINT8_MAX;
int64_t t83 = -590425LL;
int64_t t85 = 11205057615LL;
uint64_t x366 = 308291LLU;
int64_t x374 = 1675400126LL;
static volatile uint32_t x380 = 106284U;
int32_t x386 = INT32_MAX;
uint32_t x388 = UINT32_MAX;
uint64_t t91 = 562049424LLU;
int64_t x392 = 109277604335395LL;
int64_t x394 = INT64_MIN;
uint8_t x397 = 15U;
uint64_t x406 = UINT64_MAX;
int8_t x412 = INT8_MIN;
volatile int16_t x418 = -1;


void f0(void) {
	uint64_t x1 = 195556155211305114LLU;
	int64_t x2 = INT64_MAX;
	volatile uint64_t t0 = 107LLU;

	t0 = ((x1%x2)-(x3|x4));

	if (t0 != 195556150916337819LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 319130167165LLU;
	int8_t x6 = -1;
	volatile int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MAX;

	t1 = ((x5%x6)-(x7|x8));

	if (t1 != 9223372355984942846LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 46;
	uint64_t x10 = 3195564311296LLU;
	int16_t x11 = -1;
	uint8_t x12 = 4U;
	static volatile uint64_t t2 = 587968089791LLU;

	t2 = ((x9%x10)-(x11|x12));

	if (t2 != 47LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -2779787;
	int64_t x15 = -1LL;
	int64_t x16 = -2585337708697LL;
	int64_t t3 = 3646LL;

	t3 = ((x13%x14)-(x15|x16));

	if (t3 != 99LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -55LL;
	int64_t x18 = INT64_MIN;
	volatile int8_t x19 = 1;
	int64_t x20 = -1LL;

	t4 = ((x17%x18)-(x19|x20));

	if (t4 != -54LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile int32_t x23 = 237105886;

	t5 = ((x21%x22)-(x23|x24));

	if (t5 != 18446744072662474607LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	static volatile int16_t x26 = 321;
	int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 1;

	t6 = ((x25%x26)-(x27|x28));

	if (t6 != -2147483580) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int8_t x30 = 2;
	int32_t x31 = 1540886;
	volatile int16_t x32 = INT16_MIN;
	volatile uint32_t t7 = 4484U;

	t7 = ((x29%x30)-(x31|x32));

	if (t7 != 31979U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 1U;
	uint16_t x34 = 760U;
	int64_t x35 = -2939453LL;
	volatile int32_t x36 = INT32_MIN;
	volatile int64_t t8 = 129LL;

	t8 = ((x33%x34)-(x35|x36));

	if (t8 != 2939454LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int8_t x38 = -1;
	int64_t x40 = INT64_MAX;
	uint64_t t9 = 6907699403LLU;

	t9 = ((x37%x38)-(x39|x40));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = 9005;
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	volatile uint64_t x44 = 397491825LLU;
	volatile uint64_t t10 = 254000022064686009LLU;

	t10 = ((x41%x42)-(x43|x44));

	if (t10 != 9223372036457284028LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 13809U;
	volatile int64_t x48 = 32LL;
	volatile int64_t t11 = 34669516492LL;

	t11 = ((x45%x46)-(x47|x48));

	if (t11 != -1990194LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 1392627LLU;

	t12 = ((x49%x50)-(x51|x52));

	if (t12 != 2148876148LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x54 = 20206U;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 1382;

	t13 = ((x53%x54)-(x55|x56));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x60 = INT8_MIN;

	t14 = ((x57%x58)-(x59|x60));

	if (t14 != 32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 14U;
	volatile int64_t x62 = -1LL;
	int16_t x63 = INT16_MAX;
	uint64_t x64 = UINT64_MAX;

	t15 = ((x61%x62)-(x63|x64));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {


	t16 = ((x65%x66)-(x67|x68));

	if (t16 != 18446744073653203091LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = INT64_MAX;
	static int64_t x70 = 18616LL;
	int64_t x71 = INT64_MIN;
	uint32_t x72 = 593610U;
	volatile int64_t t17 = -35691581100LL;

	t17 = ((x69%x70)-(x71|x72));

	if (t17 != 9223372036854194789LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 13U;
	int32_t x74 = -1;
	static int8_t x76 = INT8_MIN;
	int32_t t18 = -2;

	t18 = ((x73%x74)-(x75|x76));

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x79 = UINT8_MAX;
	int64_t t19 = 5504044267LL;

	t19 = ((x77%x78)-(x79|x80));

	if (t19 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = UINT32_MAX;
	static volatile int16_t x86 = 1372;
	uint64_t x87 = 4963072LLU;
	int32_t x88 = INT32_MAX;
	volatile uint64_t t20 = 1944058876342509LLU;

	t20 = ((x85%x86)-(x87|x88));

	if (t20 != 18446744071562068840LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = -33;
	int32_t x91 = INT32_MIN;
	static uint64_t x92 = 14074255290681662LLU;
	uint64_t t21 = 1166LLU;

	t21 = ((x89%x90)-(x91|x92));

	if (t21 != 350992034LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x94 = -193;
	volatile int16_t x95 = -1;
	uint32_t x96 = 813247U;
	uint32_t t22 = 0U;

	t22 = ((x93%x94)-(x95|x96));

	if (t22 != 111U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = UINT64_MAX;
	int64_t x98 = INT64_MIN;
	uint16_t x99 = 0U;
	int64_t x100 = -234LL;
	uint64_t t23 = 3738463664227LLU;

	t23 = ((x97%x98)-(x99|x100));

	if (t23 != 9223372036854776041LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = UINT16_MAX;
	uint32_t x102 = 7409609U;
	uint64_t x104 = 1789376036900LLU;
	volatile uint64_t t24 = 7LLU;

	t24 = ((x101%x102)-(x103|x104));

	if (t24 != 65536LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = 0;
	int16_t x106 = 1;
	static volatile int32_t x107 = 517303234;
	int8_t x108 = -1;

	t25 = ((x105%x106)-(x107|x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = 20914735;
	static volatile uint8_t x110 = 1U;
	static volatile int64_t x111 = INT64_MAX;
	int8_t x112 = INT8_MIN;
	volatile int64_t t26 = -3LL;

	t26 = ((x109%x110)-(x111|x112));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x113 = 0U;
	uint32_t x114 = 11616141U;
	int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MIN;
	static volatile int64_t t27 = -241852900LL;

	t27 = ((x113%x114)-(x115|x116));

	if (t27 != 32768LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MIN;
	int64_t t28 = 2291604166980LL;

	t28 = ((x117%x118)-(x119|x120));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x122 = -40;
	uint64_t x123 = 387094818667LLU;
	static uint64_t t29 = 113946490164LLU;

	t29 = ((x121%x122)-(x123|x124));

	if (t29 != 18446694049571176422LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1LL;
	int16_t x126 = INT16_MIN;
	uint32_t x127 = 1234491U;
	uint16_t x128 = UINT16_MAX;

	t30 = ((x125%x126)-(x127|x128));

	if (t30 != -1245184LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x130 = -411;
	int64_t x132 = -1LL;
	int64_t t31 = -5976822095508036LL;

	t31 = ((x129%x130)-(x131|x132));

	if (t31 != 109LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x133 = INT8_MIN;
	uint32_t x134 = 13055U;
	int32_t x135 = INT32_MIN;
	volatile int16_t x136 = -1;
	static volatile uint32_t t32 = 212U;

	t32 = ((x133%x134)-(x135|x136));

	if (t32 != 2719U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x137 = 362LLU;
	int16_t x138 = INT16_MIN;
	int16_t x139 = -1;
	volatile uint64_t t33 = 320501857LLU;

	t33 = ((x137%x138)-(x139|x140));

	if (t33 != 363LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x144 = -1LL;
	volatile int64_t t34 = 233LL;

	t34 = ((x141%x142)-(x143|x144));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 182458U;
	uint64_t x146 = 292851LLU;
	int32_t x147 = INT32_MIN;
	volatile uint64_t t35 = 2LLU;

	t35 = ((x145%x146)-(x147|x148));

	if (t35 != 182459LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x149 = -1482908;
	int8_t x150 = -1;
	uint16_t x151 = UINT16_MAX;

	t36 = ((x149%x150)-(x151|x152));

	if (t36 != 2147418113) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = INT8_MIN;
	static int8_t x154 = -1;
	static volatile int16_t x155 = INT16_MIN;
	volatile int32_t t37 = 198963;

	t37 = ((x153%x154)-(x155|x156));

	if (t37 != 32641) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x161 = 0;
	volatile int64_t x162 = INT64_MIN;
	uint64_t x163 = 1502733LLU;
	int16_t x164 = INT16_MAX;
	static uint64_t t38 = 78179LLU;

	t38 = ((x161%x162)-(x163|x164));

	if (t38 != 18446744073708044289LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = -1;
	static volatile int64_t x166 = INT64_MAX;
	int8_t x168 = INT8_MIN;
	volatile int64_t t39 = 1LL;

	t39 = ((x165%x166)-(x167|x168));

	if (t39 != 126LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 2459U;
	volatile uint32_t x174 = 6148U;
	static volatile int64_t x175 = -1LL;
	volatile uint64_t x176 = UINT64_MAX;
	static uint64_t t40 = 4871660014823LLU;

	t40 = ((x173%x174)-(x175|x176));

	if (t40 != 2460LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = -36170902;
	uint16_t x179 = 109U;
	volatile uint32_t t41 = 6966U;

	t41 = ((x177%x178)-(x179|x180));

	if (t41 != 4281566627U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = 0;
	volatile int64_t x182 = INT64_MIN;
	static volatile int32_t x183 = INT32_MIN;
	int8_t x184 = 1;
	int64_t t42 = 24LL;

	t42 = ((x181%x182)-(x183|x184));

	if (t42 != 2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x185 = INT32_MIN;
	static volatile int16_t x186 = INT16_MIN;
	static volatile uint16_t x188 = UINT16_MAX;
	int32_t t43 = -1;

	t43 = ((x185%x186)-(x187|x188));

	if (t43 != -65535) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x189 = INT8_MIN;
	uint16_t x190 = 10U;
	volatile int32_t x191 = INT32_MAX;
	static int64_t x192 = -1LL;
	static volatile int64_t t44 = 647056LL;

	t44 = ((x189%x190)-(x191|x192));

	if (t44 != -7LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x194 = -15;
	int8_t x195 = INT8_MIN;
	volatile uint64_t x196 = 1LLU;
	volatile uint64_t t45 = 721871338222LLU;

	t45 = ((x193%x194)-(x195|x196));

	if (t45 != 119LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x198 = 3124U;
	int8_t x199 = INT8_MIN;
	uint64_t x200 = 406LLU;
	uint64_t t46 = 2714712LLU;

	t46 = ((x197%x198)-(x199|x200));

	if (t46 != 1605LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MAX;
	volatile int16_t x202 = -1601;
	uint8_t x203 = UINT8_MAX;
	int16_t x204 = -711;
	int64_t t47 = 34314073864LL;

	t47 = ((x201%x202)-(x203|x204));

	if (t47 != 1064LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x206 = -95LL;
	int16_t x207 = -810;
	uint32_t x208 = UINT32_MAX;
	static volatile int64_t t48 = -112649172321853416LL;

	t48 = ((x205%x206)-(x207|x208));

	if (t48 != -4294967296LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MAX;
	uint32_t t49 = 7878U;

	t49 = ((x209%x210)-(x211|x212));

	if (t49 != 32783U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x215 = INT32_MAX;
	int64_t x216 = 591114421LL;
	volatile uint64_t t50 = 108LLU;

	t50 = ((x213%x214)-(x215|x216));

	if (t50 != 2645315542643709347LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	uint32_t x218 = 112385185U;
	int32_t x219 = -1;
	int64_t t51 = 3LL;

	t51 = ((x217%x218)-(x219|x220));

	if (t51 != -39429012LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x222 = UINT64_MAX;
	uint32_t x223 = 70U;
	volatile int64_t x224 = -1LL;
	volatile uint64_t t52 = 714406511516788LLU;

	t52 = ((x221%x222)-(x223|x224));

	if (t52 != 32768LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = 48300738;
	uint32_t x226 = UINT32_MAX;
	int16_t x227 = INT16_MIN;
	int16_t x228 = -1;
	static volatile uint32_t t53 = 248178731U;

	t53 = ((x225%x226)-(x227|x228));

	if (t53 != 48300739U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x229 = INT8_MAX;
	int8_t x232 = INT8_MIN;
	int64_t t54 = 966463788196719LL;

	t54 = ((x229%x230)-(x231|x232));

	if (t54 != 142LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = -3646530664717LL;
	volatile uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MIN;
	static int32_t x236 = INT32_MIN;

	t55 = ((x233%x234)-(x235|x236));

	if (t55 != 18446740427178887027LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x242 = 447363LL;
	static int16_t x243 = 3;
	uint32_t x244 = 1302U;
	uint64_t t56 = 8855LLU;

	t56 = ((x241%x242)-(x243|x244));

	if (t56 != 120532LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	uint16_t x247 = 4831U;
	int32_t x248 = 12274;
	uint32_t t57 = 1872545811U;

	t57 = ((x245%x246)-(x247|x248));

	if (t57 != 29516860U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x249 = 1;
	volatile int8_t x250 = -1;
	static int8_t x251 = 0;
	int16_t x252 = INT16_MIN;
	volatile int32_t t58 = -139792319;

	t58 = ((x249%x250)-(x251|x252));

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = 1U;
	int8_t x254 = INT8_MAX;
	static int32_t x255 = INT32_MAX;
	volatile int32_t t59 = 2068;

	t59 = ((x253%x254)-(x255|x256));

	if (t59 != -2147483646) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MAX;
	int64_t x258 = 758076LL;
	int64_t x259 = INT64_MIN;
	int8_t x260 = -1;
	int64_t t60 = 14408894344677LL;

	t60 = ((x257%x258)-(x259|x260));

	if (t60 != 367100LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x261 = 1U;
	uint16_t x262 = 11647U;
	uint8_t x263 = 16U;
	uint64_t x264 = UINT64_MAX;
	uint64_t t61 = 8091469278372160LLU;

	t61 = ((x261%x262)-(x263|x264));

	if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x266 = INT64_MIN;
	static int16_t x267 = 1;
	static int8_t x268 = INT8_MIN;
	int64_t t62 = -40026906LL;

	t62 = ((x265%x266)-(x267|x268));

	if (t62 != 128LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x270 = 1290;
	uint32_t x271 = 4U;
	int16_t x272 = -1;
	int64_t t63 = -158LL;

	t63 = ((x269%x270)-(x271|x272));

	if (t63 != -4294966800LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x273 = 51877749556537LLU;
	int64_t x274 = 562LL;
	int8_t x275 = INT8_MAX;
	int32_t x276 = INT32_MAX;
	static volatile uint64_t t64 = 19190420390022LLU;

	t64 = ((x273%x274)-(x275|x276));

	if (t64 != 18446744071562068524LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x280 = UINT8_MAX;
	uint32_t t65 = 7U;

	t65 = ((x277%x278)-(x279|x280));

	if (t65 != 4294967099U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x282 = 1U;
	static int64_t x283 = 385248522LL;
	int64_t x284 = -1LL;
	volatile int64_t t66 = -29955154208558LL;

	t66 = ((x281%x282)-(x283|x284));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x285 = -1;
	volatile uint8_t x286 = 14U;
	int16_t x287 = INT16_MIN;
	uint64_t t67 = 14928403092LLU;

	t67 = ((x285%x286)-(x287|x288));

	if (t67 != 22144LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x289 = 22U;
	uint64_t x290 = 4172975081414223LLU;
	volatile int8_t x291 = -1;
	volatile uint64_t t68 = 4379829258461LLU;

	t68 = ((x289%x290)-(x291|x292));

	if (t68 != 23LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x294 = UINT64_MAX;
	int64_t x295 = -12799299LL;
	int8_t x296 = -40;
	volatile uint64_t t69 = 5380198LLU;

	t69 = ((x293%x294)-(x295|x296));

	if (t69 != 648LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x298 = 6067U;
	static int32_t x299 = -1;
	static uint16_t x300 = UINT16_MAX;
	volatile int32_t t70 = -122;

	t70 = ((x297%x298)-(x299|x300));

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -1;
	uint64_t x302 = UINT64_MAX;
	static int64_t x303 = INT64_MAX;
	int16_t x304 = INT16_MAX;
	volatile uint64_t t71 = 17080346108902LLU;

	t71 = ((x301%x302)-(x303|x304));

	if (t71 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x309 = -3291869473406509LL;
	uint8_t x311 = 0U;
	volatile int16_t x312 = -4105;

	t72 = ((x309%x310)-(x311|x312));

	if (t72 != 4105LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MAX;
	uint32_t x314 = UINT32_MAX;
	volatile int32_t x315 = 283;
	int32_t x316 = -1;
	volatile uint32_t t73 = 774536U;

	t73 = ((x313%x314)-(x315|x316));

	if (t73 != 128U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x317 = 2LL;
	int8_t x319 = -3;

	t74 = ((x317%x318)-(x319|x320));

	if (t74 != 3LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = 22U;
	int8_t x322 = -14;
	uint8_t x323 = UINT8_MAX;
	int64_t x324 = -19039603190877LL;
	volatile int64_t t75 = -134640021292946LL;

	t75 = ((x321%x322)-(x323|x324));

	if (t75 != 19039603190793LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x325 = -143681052;
	uint64_t x326 = 5LLU;
	int8_t x327 = INT8_MAX;
	uint64_t t76 = 931239200598221386LLU;

	t76 = ((x325%x326)-(x327|x328));

	if (t76 != 5LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MIN;
	static int8_t x331 = -1;
	uint16_t x332 = UINT16_MAX;
	int32_t t77 = -2814;

	t77 = ((x329%x330)-(x331|x332));

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x333 = 1U;
	int64_t x334 = -1LL;
	static uint64_t t78 = 20816658LLU;

	t78 = ((x333%x334)-(x335|x336));

	if (t78 != 9223310059411247702LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x338 = 7756LL;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = -1;
	static int64_t t79 = -50781359LL;

	t79 = ((x337%x338)-(x339|x340));

	if (t79 != -4294969663LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = INT32_MIN;
	static volatile int16_t x343 = 0;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t80 = 1134026884664092701LL;

	t80 = ((x341%x342)-(x343|x344));

	if (t80 != -6442450943LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = -1;
	volatile int16_t x346 = INT16_MIN;
	int32_t x347 = -163453;
	int8_t x348 = 0;
	int32_t t81 = -65673980;

	t81 = ((x345%x346)-(x347|x348));

	if (t81 != 163452) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x350 = -80;
	int8_t x351 = 1;
	int16_t x352 = -1986;
	int32_t t82 = -190559;

	t82 = ((x349%x350)-(x351|x352));

	if (t82 != 1947) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = -1;
	static int64_t x356 = -1LL;

	t83 = ((x353%x354)-(x355|x356));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x357 = 263U;
	static int64_t x358 = 2033313781818087LL;
	static uint64_t x359 = 266LLU;
	int32_t x360 = INT32_MIN;
	static uint64_t t84 = 29625994711773379LLU;

	t84 = ((x357%x358)-(x359|x360));

	if (t84 != 2147483645LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MAX;
	int64_t x362 = -844770638LL;
	int8_t x363 = 3;
	static int32_t x364 = INT32_MIN;

	t85 = ((x361%x362)-(x363|x364));

	if (t85 != 2605426016LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x365 = INT8_MIN;
	int16_t x367 = -934;
	int8_t x368 = 60;
	static uint64_t t86 = 957658LLU;

	t86 = ((x365%x366)-(x367|x368));

	if (t86 != 88494LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x369 = UINT16_MAX;
	int16_t x370 = -7719;
	int64_t x371 = INT64_MAX;
	static int8_t x372 = 15;
	volatile int64_t t87 = 8LL;

	t87 = ((x369%x370)-(x371|x372));

	if (t87 != -9223372036854772024LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x373 = 3U;
	uint64_t x375 = UINT64_MAX;
	static uint8_t x376 = 4U;
	volatile uint64_t t88 = 24101081LLU;

	t88 = ((x373%x374)-(x375|x376));

	if (t88 != 4LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x377 = 686708857968293650LLU;
	uint16_t x378 = 481U;
	volatile int8_t x379 = INT8_MIN;
	volatile uint64_t t89 = 15434527675801LLU;

	t89 = ((x377%x378)-(x379|x380));

	if (t89 != 18446744069414584829LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MAX;
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = INT16_MAX;
	static uint64_t x384 = 28022336LLU;
	volatile uint64_t t90 = 28494705611LLU;

	t90 = ((x381%x382)-(x383|x384));

	if (t90 != 18446744073681534976LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x385 = INT32_MIN;
	uint64_t x387 = UINT64_MAX;

	t91 = ((x385%x386)-(x387|x388));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x389 = INT32_MIN;
	volatile uint32_t x390 = 25170U;
	static int8_t x391 = 57;
	int64_t t92 = -162177188854LL;

	t92 = ((x389%x390)-(x391|x392));

	if (t92 != -109277604331001LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = INT32_MIN;
	int8_t x395 = -1;
	int32_t x396 = -474970;
	int64_t t93 = -94569LL;

	t93 = ((x393%x394)-(x395|x396));

	if (t93 != -2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x398 = INT16_MAX;
	int32_t x399 = -1;
	volatile uint8_t x400 = 3U;
	static volatile int32_t t94 = -14075;

	t94 = ((x397%x398)-(x399|x400));

	if (t94 != 16) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = 20957836;
	volatile uint8_t x402 = 17U;
	static uint32_t x403 = UINT32_MAX;
	uint8_t x404 = 0U;
	volatile uint32_t t95 = 816687814U;

	t95 = ((x401%x402)-(x403|x404));

	if (t95 != 16U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x405 = INT32_MIN;
	int64_t x407 = INT64_MAX;
	int16_t x408 = -1;
	volatile uint64_t t96 = 2852058117589LLU;

	t96 = ((x405%x406)-(x407|x408));

	if (t96 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = UINT16_MAX;
	static uint32_t x410 = 53U;
	int16_t x411 = INT16_MAX;
	volatile uint32_t t97 = 3U;

	t97 = ((x409%x410)-(x411|x412));

	if (t97 != 28U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x413 = 361U;
	int64_t x414 = INT64_MIN;
	static int8_t x415 = 14;
	static int64_t x416 = 364277164975720722LL;
	volatile int64_t t98 = -451274164691LL;

	t98 = ((x413%x414)-(x415|x416));

	if (t98 != -364277164975720373LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x417 = INT64_MAX;
	volatile int32_t x419 = -971546619;
	static int32_t x420 = INT32_MAX;
	int64_t t99 = 203487583LL;

	t99 = ((x417%x418)-(x419|x420));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

