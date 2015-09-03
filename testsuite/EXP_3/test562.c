#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
volatile int8_t x12 = INT8_MIN;
uint64_t x21 = UINT64_MAX;
volatile int16_t x26 = -1414;
static uint8_t x33 = 28U;
volatile int64_t x37 = INT64_MIN;
uint16_t x49 = 18612U;
int8_t x55 = INT8_MAX;
int64_t x58 = -1LL;
static uint64_t t13 = 12023239LLU;
static volatile int16_t x77 = -17;
volatile int8_t x86 = INT8_MAX;
static int64_t x88 = 9716LL;
uint8_t x120 = 14U;
volatile int64_t t29 = 33345767229799LL;
volatile uint32_t x134 = UINT32_MAX;
static uint16_t x136 = 6001U;
int16_t x137 = INT16_MIN;
int64_t x141 = INT64_MIN;
uint8_t x143 = 7U;
int16_t x149 = 1;
int16_t x151 = INT16_MIN;
volatile int32_t x154 = -3262;
static volatile uint64_t x155 = 1963668753LLU;
uint32_t t41 = 308684398U;
uint64_t x186 = 12LLU;
int8_t x193 = INT8_MAX;
int32_t x194 = INT32_MIN;
uint8_t x199 = UINT8_MAX;
static int8_t x204 = INT8_MAX;
int32_t x206 = INT32_MIN;
int32_t x222 = INT32_MIN;
int16_t x225 = INT16_MIN;
uint64_t x226 = 1093900225757LLU;
uint8_t x233 = UINT8_MAX;
uint32_t x236 = UINT32_MAX;
int64_t x239 = 322LL;
uint16_t x244 = UINT16_MAX;
uint64_t t55 = 21402646123LLU;
int8_t x248 = INT8_MIN;
int16_t x252 = 1583;
int32_t x254 = 14818;
int32_t x259 = INT32_MAX;
uint32_t x260 = 898U;
int8_t x267 = -1;
volatile int64_t t61 = 17641744254728917LL;
volatile uint64_t t63 = 1110793881086LLU;
volatile int16_t x282 = INT16_MIN;
uint16_t x287 = 3U;
int32_t x295 = -1;
int64_t x302 = INT64_MAX;
static int16_t x305 = INT16_MIN;
int64_t t68 = -9613112LL;
uint16_t x309 = 47U;
uint64_t t73 = 1360LLU;
static uint32_t x332 = UINT32_MAX;
volatile int8_t x333 = -30;
int64_t x340 = INT64_MAX;
volatile int16_t x343 = -1;
volatile uint64_t x344 = 556839713062944LLU;
int32_t t78 = -1553781;
uint64_t x377 = UINT64_MAX;
static volatile uint16_t x380 = 878U;
uint64_t t84 = 1043508527LLU;
int64_t x383 = -295321LL;
static int8_t x384 = INT8_MIN;
static volatile uint8_t x388 = 2U;
volatile int16_t x392 = INT16_MIN;
static volatile int32_t t87 = 15319781;
int8_t x394 = -1;
int16_t x395 = -13666;
int64_t x397 = INT64_MIN;
uint8_t x402 = 4U;
volatile int32_t t90 = 0;
int8_t x406 = INT8_MAX;
volatile int32_t t93 = -2;
volatile int32_t t94 = 16718726;
int64_t t96 = 12LL;
static uint16_t x449 = 13U;
volatile uint64_t t99 = 1LLU;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile int64_t x3 = -47072686711152174LL;
	uint32_t x4 = 6U;
	volatile int64_t t0 = 1322827344LL;

	t0 = ((x1%x2)*(x3/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x9 = -367935LL;
	static volatile int32_t x10 = INT32_MAX;
	uint64_t x11 = 14LLU;
	uint64_t t1 = 110372317001193203LLU;

	t1 = ((x9%x10)*(x11/x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 54U;
	static int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	static int8_t x16 = INT8_MIN;
	volatile int64_t t2 = 695LL;

	t2 = ((x13%x14)*(x15/x16));

	if (t2 != 3891110078048108544LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = 6;
	int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MAX;
	volatile int64_t t3 = 0LL;

	t3 = ((x17%x18)*(x19/x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x22 = -1LL;
	static int32_t x23 = INT32_MIN;
	int64_t x24 = INT64_MIN;
	volatile uint64_t t4 = 1098054679401LLU;

	t4 = ((x21%x22)*(x23/x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x25 = 43U;
	volatile int32_t x27 = 7669942;
	int32_t x28 = INT32_MIN;
	uint32_t t5 = 185815U;

	t5 = ((x25%x26)*(x27/x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = 258566772;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = -10181;

	t6 = ((x29%x30)*(x31/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x34 = 1283U;
	volatile uint32_t x35 = UINT32_MAX;
	uint64_t x36 = 2428324538LLU;
	uint64_t t7 = 0LLU;

	t7 = ((x33%x34)*(x35/x36));

	if (t7 != 28LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x38 = INT64_MIN;
	static int16_t x39 = INT16_MIN;
	int64_t x40 = INT64_MIN;
	int64_t t8 = 856999245LL;

	t8 = ((x37%x38)*(x39/x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 1;
	static uint32_t x42 = 2014825U;
	uint8_t x43 = UINT8_MAX;
	int16_t x44 = INT16_MIN;
	uint32_t t9 = 3774908U;

	t9 = ((x41%x42)*(x43/x44));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MIN;
	volatile int16_t x47 = -1;
	int64_t x48 = INT64_MIN;
	int64_t t10 = 216671LL;

	t10 = ((x45%x46)*(x47/x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MAX;
	int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MIN;
	static volatile int64_t t11 = -321579092570922LL;

	t11 = ((x49%x50)*(x51/x52));

	if (t11 != 300647710720LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	static uint64_t x54 = 6156439037384LLU;
	int32_t x56 = INT32_MIN;
	uint64_t t12 = 2LLU;

	t12 = ((x53%x54)*(x55/x56));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 48649LLU;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = INT32_MIN;

	t13 = ((x57%x58)*(x59/x60));

	if (t13 != 48649LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -348081LL;
	uint64_t x62 = UINT64_MAX;
	uint8_t x63 = UINT8_MAX;
	static int32_t x64 = INT32_MIN;
	uint64_t t14 = 50671613LLU;

	t14 = ((x61%x62)*(x63/x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 32396806289666037LL;
	volatile uint16_t x66 = 2U;
	static int16_t x67 = -1258;
	volatile uint32_t x68 = 15U;
	int64_t t15 = 0LL;

	t15 = ((x65%x66)*(x67/x68));

	if (t15 != 286331069LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 113487864305854542LLU;
	uint64_t x70 = 231LLU;
	static uint8_t x71 = 69U;
	int16_t x72 = 2426;
	volatile uint64_t t16 = 453563691965LLU;

	t16 = ((x69%x70)*(x71/x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = -12;
	int8_t x79 = INT8_MAX;
	int64_t x80 = INT64_MAX;
	int64_t t17 = -3777438677459160LL;

	t17 = ((x77%x78)*(x79/x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	uint8_t x82 = 5U;
	int8_t x83 = 0;
	volatile uint64_t x84 = UINT64_MAX;
	volatile uint64_t t18 = 40721432498LLU;

	t18 = ((x81%x82)*(x83/x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x85 = INT16_MIN;
	static volatile int32_t x87 = INT32_MIN;
	int64_t t19 = -107LL;

	t19 = ((x85%x86)*(x87/x88));

	if (t19 != 442050LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 2U;
	int32_t x90 = INT32_MIN;
	uint64_t x91 = UINT64_MAX;
	uint8_t x92 = 1U;
	static uint64_t t20 = 124881LLU;

	t20 = ((x89%x90)*(x91/x92));

	if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = INT32_MIN;
	static int32_t x94 = INT32_MIN;
	uint32_t x95 = 918404U;
	int16_t x96 = INT16_MAX;
	volatile uint32_t t21 = 19587864U;

	t21 = ((x93%x94)*(x95/x96));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = INT64_MIN;
	uint8_t x98 = 17U;
	int32_t x99 = -19762448;
	int64_t x100 = -26821134LL;
	static int64_t t22 = -120055606LL;

	t22 = ((x97%x98)*(x99/x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x101 = INT16_MIN;
	int8_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	int32_t x104 = INT32_MIN;
	int32_t t23 = 897825;

	t23 = ((x101%x102)*(x103/x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MAX;
	uint32_t x112 = 3U;
	uint32_t t24 = 464U;

	t24 = ((x109%x110)*(x111/x112));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MAX;
	int16_t x114 = INT16_MIN;
	int64_t x115 = -33017581109641786LL;
	int64_t x116 = -1LL;
	int64_t t25 = -2LL;

	t25 = ((x113%x114)*(x115/x116));

	if (t25 != 4193232800924506822LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = INT16_MAX;
	int8_t x118 = -1;
	int16_t x119 = -1;
	volatile int32_t t26 = 26711;

	t26 = ((x117%x118)*(x119/x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = 820;
	static uint64_t x122 = 16923169564728044LLU;
	int8_t x123 = INT8_MAX;
	volatile int32_t x124 = -5995383;
	uint64_t t27 = 795LLU;

	t27 = ((x121%x122)*(x123/x124));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x125 = 52791672921LLU;
	int32_t x126 = INT32_MIN;
	uint16_t x127 = 3U;
	int8_t x128 = INT8_MAX;
	volatile uint64_t t28 = 820415792LLU;

	t28 = ((x125%x126)*(x127/x128));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -1LL;
	int8_t x130 = -1;
	volatile int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MAX;

	t29 = ((x129%x130)*(x131/x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x133 = INT8_MIN;
	static int32_t x135 = -56573;
	volatile uint32_t t30 = 64367026U;

	t30 = ((x133%x134)*(x135/x136));

	if (t30 != 1152U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x138 = INT16_MAX;
	static int16_t x139 = INT16_MAX;
	volatile int16_t x140 = INT16_MAX;
	volatile int32_t t31 = -1749860;

	t31 = ((x137%x138)*(x139/x140));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x142 = -1;
	volatile uint16_t x144 = UINT16_MAX;
	int64_t t32 = 1072340LL;

	t32 = ((x141%x142)*(x143/x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = 2;
	uint32_t x146 = 5970546U;
	uint32_t x147 = UINT32_MAX;
	volatile int64_t x148 = INT64_MAX;
	volatile int64_t t33 = -1635970974884LL;

	t33 = ((x145%x146)*(x147/x148));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = -18;
	static int16_t x152 = -106;
	int32_t t34 = 209974;

	t34 = ((x149%x150)*(x151/x152));

	if (t34 != 309) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	volatile int16_t x156 = INT16_MIN;
	uint64_t t35 = 6072222519LLU;

	t35 = ((x153%x154)*(x155/x156));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = UINT16_MAX;
	volatile uint32_t x158 = UINT32_MAX;
	static int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MAX;
	volatile int64_t t36 = 2566346557257588793LL;

	t36 = ((x157%x158)*(x159/x160));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x165 = INT8_MIN;
	int32_t x166 = -143408;
	volatile uint32_t x167 = UINT32_MAX;
	volatile int64_t x168 = INT64_MIN;
	int64_t t37 = -7835747LL;

	t37 = ((x165%x166)*(x167/x168));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -2025194799712172398LL;
	volatile int64_t x170 = INT64_MAX;
	int8_t x171 = -3;
	int32_t x172 = 29421121;
	int64_t t38 = 3751LL;

	t38 = ((x169%x170)*(x171/x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = 10759U;
	static volatile int16_t x174 = -217;
	int32_t x175 = INT32_MAX;
	volatile uint8_t x176 = 3U;
	static volatile uint32_t t39 = 11297U;

	t39 = ((x173%x174)*(x175/x176));

	if (t39 != 715820710U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MAX;
	volatile int8_t x179 = INT8_MIN;
	int32_t x180 = -1;
	static int64_t t40 = 15LL;

	t40 = ((x177%x178)*(x179/x180));

	if (t40 != -274877906944LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x181 = 53648577U;
	int16_t x182 = 1;
	uint16_t x183 = 1333U;
	static volatile int8_t x184 = INT8_MIN;

	t41 = ((x181%x182)*(x183/x184));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MAX;
	int16_t x187 = -242;
	static int16_t x188 = INT16_MAX;
	uint64_t t42 = 1066067932LLU;

	t42 = ((x185%x186)*(x187/x188));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MAX;
	uint8_t x190 = 9U;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = INT32_MAX;
	static int64_t t43 = -10599082LL;

	t43 = ((x189%x190)*(x191/x192));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x195 = -1;
	uint16_t x196 = 13U;
	volatile int32_t t44 = -589;

	t44 = ((x193%x194)*(x195/x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = 9017533621055242614LLU;
	int8_t x198 = 1;
	int32_t x200 = INT32_MIN;
	uint64_t t45 = 2090982320383566309LLU;

	t45 = ((x197%x198)*(x199/x200));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x201 = -1474527925740741LL;
	int64_t x202 = INT64_MIN;
	static volatile int8_t x203 = 8;
	static int64_t t46 = 204826880500LL;

	t46 = ((x201%x202)*(x203/x204));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x205 = INT32_MIN;
	uint64_t x207 = 1745614LLU;
	volatile int64_t x208 = INT64_MAX;
	volatile uint64_t t47 = 1599LLU;

	t47 = ((x205%x206)*(x207/x208));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x213 = 54885LLU;
	int16_t x214 = INT16_MIN;
	int64_t x215 = 523768LL;
	uint64_t x216 = UINT64_MAX;
	uint64_t t48 = 112652547871471510LLU;

	t48 = ((x213%x214)*(x215/x216));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x217 = 1U;
	int64_t x218 = -1LL;
	volatile int8_t x219 = INT8_MIN;
	uint8_t x220 = 15U;
	int64_t t49 = 1909710651804001LL;

	t49 = ((x217%x218)*(x219/x220));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x221 = 0;
	uint16_t x223 = UINT16_MAX;
	uint8_t x224 = 7U;
	int32_t t50 = -6194481;

	t50 = ((x221%x222)*(x223/x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x227 = INT32_MAX;
	int16_t x228 = -5;
	static uint64_t t51 = 126651LLU;

	t51 = ((x225%x226)*(x227/x228));

	if (t51 != 4269169920300939718LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -1;
	uint16_t x230 = 2U;
	uint16_t x231 = UINT16_MAX;
	volatile uint32_t x232 = 3895340U;
	volatile uint32_t t52 = 5355U;

	t52 = ((x229%x230)*(x231/x232));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x234 = INT64_MAX;
	static uint32_t x235 = 19671883U;
	volatile int64_t t53 = 2633722509207131455LL;

	t53 = ((x233%x234)*(x235/x236));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = -1LL;
	volatile int64_t x238 = 3LL;
	uint32_t x240 = 62258900U;
	int64_t t54 = 74049968848258LL;

	t54 = ((x237%x238)*(x239/x240));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x241 = -1;
	uint32_t x242 = 8565920U;
	uint64_t x243 = UINT64_MAX;

	t55 = ((x241%x242)*(x243/x244));

	if (t55 != 9445036963352773343LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = 25423325;
	int16_t x246 = -1;
	volatile int64_t x247 = -1LL;
	int64_t t56 = 42LL;

	t56 = ((x245%x246)*(x247/x248));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x249 = -1;
	int8_t x250 = INT8_MAX;
	static int16_t x251 = -31;
	volatile int32_t t57 = -2;

	t57 = ((x249%x250)*(x251/x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 0LLU;
	volatile uint8_t x255 = UINT8_MAX;
	int64_t x256 = INT64_MAX;
	static volatile uint64_t t58 = 20551407163888LLU;

	t58 = ((x253%x254)*(x255/x256));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x257 = 387396976U;
	uint8_t x258 = 1U;
	uint32_t t59 = 222U;

	t59 = ((x257%x258)*(x259/x260));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = 1U;
	uint16_t x262 = UINT16_MAX;
	volatile int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MIN;
	volatile int32_t t60 = -8750552;

	t60 = ((x261%x262)*(x263/x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = -1LL;
	uint16_t x268 = 311U;

	t61 = ((x265%x266)*(x267/x268));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int32_t x270 = -1;
	uint16_t x271 = 315U;
	int64_t x272 = INT64_MAX;
	uint64_t t62 = 1LLU;

	t62 = ((x269%x270)*(x271/x272));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x273 = UINT32_MAX;
	int32_t x274 = INT32_MAX;
	uint32_t x275 = 2U;
	uint64_t x276 = 263021387890143LLU;

	t63 = ((x273%x274)*(x275/x276));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x281 = 2706;
	int16_t x283 = INT16_MIN;
	uint8_t x284 = 15U;
	volatile int32_t t64 = -44;

	t64 = ((x281%x282)*(x283/x284));

	if (t64 != -5909904) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x285 = 1721U;
	int32_t x286 = INT32_MAX;
	int8_t x288 = INT8_MIN;
	static int32_t t65 = 0;

	t65 = ((x285%x286)*(x287/x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = INT64_MAX;
	int64_t x294 = -1LL;
	int8_t x296 = INT8_MAX;
	volatile int64_t t66 = 9211937696686LL;

	t66 = ((x293%x294)*(x295/x296));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = 284516737LL;
	int64_t x303 = -1LL;
	int8_t x304 = INT8_MAX;
	static volatile int64_t t67 = 7601698LL;

	t67 = ((x301%x302)*(x303/x304));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = 354U;

	t68 = ((x305%x306)*(x307/x308));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x310 = -1;
	volatile uint32_t x311 = 8078211U;
	uint32_t x312 = UINT32_MAX;
	uint32_t t69 = 296U;

	t69 = ((x309%x310)*(x311/x312));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = 1;
	int32_t x314 = INT32_MAX;
	static uint32_t x315 = 13120192U;
	uint8_t x316 = 3U;
	volatile uint32_t t70 = 8U;

	t70 = ((x313%x314)*(x315/x316));

	if (t70 != 4373397U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x317 = 8U;
	static volatile int8_t x318 = 1;
	int32_t x319 = INT32_MAX;
	uint64_t x320 = UINT64_MAX;
	uint64_t t71 = 392LLU;

	t71 = ((x317%x318)*(x319/x320));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = 6;
	uint64_t x322 = 1893507960485465LLU;
	int64_t x323 = INT64_MIN;
	static int8_t x324 = INT8_MIN;
	volatile uint64_t t72 = 6348379962009LLU;

	t72 = ((x321%x322)*(x323/x324));

	if (t72 != 432345564227567616LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x325 = 487045409LLU;
	int64_t x326 = INT64_MIN;
	int64_t x327 = INT64_MAX;
	static uint8_t x328 = 4U;

	t73 = ((x325%x326)*(x327/x328));

	if (t73 != 2305843008726648543LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x329 = INT64_MIN;
	uint16_t x330 = 1U;
	uint8_t x331 = 2U;
	int64_t t74 = 381165485LL;

	t74 = ((x329%x330)*(x331/x332));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x334 = -1LL;
	uint8_t x335 = 98U;
	int64_t x336 = -1LL;
	volatile int64_t t75 = -119LL;

	t75 = ((x333%x334)*(x335/x336));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = INT64_MIN;
	volatile int16_t x338 = -6873;
	uint16_t x339 = 1U;
	volatile int64_t t76 = 41834600LL;

	t76 = ((x337%x338)*(x339/x340));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = INT64_MIN;
	volatile int16_t x342 = INT16_MAX;
	uint64_t t77 = 25630908LLU;

	t77 = ((x341%x342)*(x343/x344));

	if (t77 != 18446744073709286600LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x345 = INT32_MIN;
	volatile int32_t x346 = INT32_MIN;
	int8_t x347 = -1;
	volatile int16_t x348 = -1;

	t78 = ((x345%x346)*(x347/x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x349 = -1LL;
	static volatile int64_t x350 = 413861524034999LL;
	volatile int16_t x351 = INT16_MAX;
	uint64_t x352 = 707109728LLU;
	uint64_t t79 = 4934431338504895LLU;

	t79 = ((x349%x350)*(x351/x352));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = -1LL;
	int64_t x362 = -18081178LL;
	uint16_t x363 = 214U;
	uint16_t x364 = 30493U;
	static int64_t t80 = -397687643510092LL;

	t80 = ((x361%x362)*(x363/x364));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x365 = UINT32_MAX;
	int8_t x366 = -1;
	int16_t x367 = -94;
	static int16_t x368 = INT16_MAX;
	uint32_t t81 = 39301U;

	t81 = ((x365%x366)*(x367/x368));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = -1;
	static volatile uint32_t x370 = 11U;
	volatile int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MAX;
	uint32_t t82 = 464U;

	t82 = ((x369%x370)*(x371/x372));

	if (t82 != 4244239336U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x373 = -3076901344LL;
	int8_t x374 = -1;
	int32_t x375 = -1;
	uint32_t x376 = 1U;
	int64_t t83 = -1930998324970840LL;

	t83 = ((x373%x374)*(x375/x376));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x378 = -1;
	int32_t x379 = -47810;

	t84 = ((x377%x378)*(x379/x380));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x381 = -1;
	static int64_t x382 = INT64_MIN;
	int64_t t85 = 64577524070LL;

	t85 = ((x381%x382)*(x383/x384));

	if (t85 != -2307LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x385 = 8982U;
	uint64_t x386 = 2756700LLU;
	static int64_t x387 = INT64_MIN;
	uint64_t t86 = 812LLU;

	t86 = ((x385%x386)*(x387/x388));

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x389 = 1U;
	int8_t x390 = -1;
	int8_t x391 = 35;

	t87 = ((x389%x390)*(x391/x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x393 = -1;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t88 = 7;

	t88 = ((x393%x394)*(x395/x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x398 = UINT16_MAX;
	static volatile int32_t x399 = INT32_MAX;
	static uint32_t x400 = 111U;
	volatile int64_t t89 = 2000909867303515LL;

	t89 = ((x397%x398)*(x399/x400));

	if (t89 != -633952632832LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x401 = INT8_MIN;
	static int16_t x403 = INT16_MAX;
	uint16_t x404 = UINT16_MAX;

	t90 = ((x401%x402)*(x403/x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x405 = INT8_MIN;
	int32_t x407 = -1;
	int64_t x408 = 33000869414076LL;
	int64_t t91 = 2241293LL;

	t91 = ((x405%x406)*(x407/x408));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x409 = UINT8_MAX;
	int8_t x410 = -1;
	int16_t x411 = -85;
	uint8_t x412 = 2U;
	volatile int32_t t92 = -6;

	t92 = ((x409%x410)*(x411/x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MIN;
	uint16_t x419 = 3497U;
	int16_t x420 = -1;

	t93 = ((x417%x418)*(x419/x420));

	if (t93 != 114589696) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = INT32_MAX;
	int8_t x426 = -4;
	int8_t x427 = -1;
	uint8_t x428 = 2U;

	t94 = ((x425%x426)*(x427/x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = INT8_MIN;
	int8_t x430 = -1;
	volatile uint64_t x431 = 592LLU;
	volatile int32_t x432 = 1;
	volatile uint64_t t95 = 5638739LLU;

	t95 = ((x429%x430)*(x431/x432));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = -1;
	volatile int64_t x434 = INT64_MIN;
	int32_t x435 = -2;
	int16_t x436 = -1;

	t96 = ((x433%x434)*(x435/x436));

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x437 = INT64_MIN;
	uint8_t x438 = UINT8_MAX;
	int32_t x439 = 191;
	int32_t x440 = INT32_MAX;
	int64_t t97 = -13386LL;

	t97 = ((x437%x438)*(x439/x440));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x445 = 4644U;
	static int8_t x446 = INT8_MAX;
	static int16_t x447 = INT16_MIN;
	uint16_t x448 = UINT16_MAX;
	volatile uint32_t t98 = 535U;

	t98 = ((x445%x446)*(x447/x448));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x450 = INT32_MAX;
	uint64_t x451 = UINT64_MAX;
	int32_t x452 = INT32_MIN;

	t99 = ((x449%x450)*(x451/x452));

	if (t99 != 13LLU) { NG(); } else { ; }
	
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

