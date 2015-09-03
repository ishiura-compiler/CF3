#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -2459;
uint64_t x4 = UINT64_MAX;
static int32_t x10 = 1;
volatile int8_t x11 = INT8_MIN;
int16_t x17 = INT16_MAX;
static volatile int32_t t4 = 25241227;
static uint32_t x38 = 274765U;
static volatile int16_t x43 = -1982;
volatile int64_t t9 = INT64_MAX;
static int32_t t11 = 1033179;
int8_t x54 = -1;
int32_t x57 = INT32_MIN;
static int32_t x59 = INT32_MIN;
int64_t t13 = 270157935498777LL;
static int8_t x61 = INT8_MAX;
static int64_t x65 = INT64_MAX;
int8_t x66 = INT8_MIN;
static int16_t x70 = -1;
int8_t x71 = INT8_MAX;
uint16_t x76 = UINT16_MAX;
uint64_t x90 = UINT64_MAX;
static int64_t x96 = INT64_MIN;
volatile int64_t x99 = -1LL;
int32_t x104 = INT32_MIN;
uint32_t x106 = 806U;
volatile int64_t x115 = INT64_MAX;
static int32_t x132 = INT32_MAX;
volatile uint8_t x136 = 14U;
static int32_t t29 = -1568;
volatile int64_t t31 = 86LL;
int64_t t32 = -12804334943227LL;
int32_t x157 = INT32_MIN;
volatile uint64_t t35 = 47LLU;
int64_t t37 = -2444LL;
int32_t x185 = 4189685;
volatile int64_t t40 = 4221418LL;
static uint16_t x197 = 370U;
static volatile uint8_t x205 = 5U;
uint64_t x217 = UINT64_MAX;
int32_t x225 = -5;
int16_t x228 = -1;
uint64_t x233 = 18625LLU;
int16_t x246 = INT16_MIN;
static volatile int32_t x247 = INT32_MIN;
int64_t x252 = INT64_MIN;
uint16_t x257 = 756U;
volatile int32_t x272 = -16;
int8_t x273 = INT8_MIN;
int32_t x285 = -19143;
volatile uint64_t t61 = 2279LLU;
int8_t x298 = 1;
int64_t x302 = 264272840894285LL;
int8_t x318 = -1;
static int16_t x323 = 6699;
uint64_t x324 = UINT64_MAX;
int8_t x328 = INT8_MAX;
int16_t x329 = INT16_MIN;
int32_t x338 = -124;
uint32_t x340 = 186U;
int8_t x346 = -1;
volatile int8_t x351 = 1;
int32_t x355 = -9350349;
uint16_t x359 = 6187U;
uint64_t x367 = 1289962774005834926LLU;
int64_t x368 = -1LL;
int8_t x371 = -1;
int8_t x374 = -55;
int64_t x379 = -1LL;
int64_t x381 = 3438191894120821058LL;
int32_t x382 = -3760186;
int8_t x384 = INT8_MIN;
volatile int64_t t81 = -7062859099LL;
static uint32_t x396 = 830U;
volatile uint64_t t86 = 36711LLU;
int16_t x415 = INT16_MIN;
volatile uint64_t t89 = 836LLU;
static volatile int32_t x422 = INT32_MAX;
uint8_t x428 = 15U;
int32_t x431 = 6796;
uint16_t x432 = 1975U;
uint32_t t92 = 26709U;
int64_t x435 = -311130344LL;
int64_t t93 = -10251718961035357LL;
int16_t x446 = -4098;
int16_t x447 = -1;
uint64_t x451 = 436608933958LLU;
static uint32_t x454 = 3U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile uint64_t x2 = 71708485471801010LLU;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (((x1+x2)/x3)^x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 6;
	uint32_t x6 = 2688U;
	uint16_t x7 = 58U;
	static uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 163LLU;

	t1 = (((x5+x6)/x7)^x8);

	if (t1 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint32_t x12 = 2U;
	volatile uint32_t t2 = 123554U;

	t2 = (((x9+x10)/x11)^x12);

	if (t2 != 2U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 0U;
	static uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MAX;
	uint32_t t3 = 183U;

	t3 = (((x13+x14)/x15)^x16);

	if (t3 != 126U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 9U;
	static volatile int8_t x19 = -1;
	static volatile uint8_t x20 = 1U;

	t4 = (((x17+x18)/x19)^x20);

	if (t4 != -32775) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -11935;
	uint32_t x22 = 38066765U;
	static int8_t x23 = 18;
	int8_t x24 = INT8_MIN;
	uint32_t t5 = 13484U;

	t5 = (((x21+x22)/x23)^x24);

	if (t5 != 4292853229U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MIN;
	volatile int8_t x26 = -51;
	static int64_t x27 = INT64_MIN;
	uint16_t x28 = 67U;
	int64_t t6 = -55098168LL;

	t6 = (((x25+x26)/x27)^x28);

	if (t6 != 67LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = -1;
	int64_t x34 = -27654267848524239LL;
	volatile int16_t x35 = 1;
	int16_t x36 = 1;
	int64_t t7 = -7598570LL;

	t7 = (((x33+x34)/x35)^x36);

	if (t7 != -27654267848524239LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = -1;
	uint16_t x39 = 18U;
	int16_t x40 = INT16_MAX;
	uint32_t t8 = 511093746U;

	t8 = (((x37+x38)/x39)^x40);

	if (t8 != 17503U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = -250;
	uint32_t x42 = 1149419U;
	int64_t x44 = INT64_MAX;

	t9 = (((x41+x42)/x43)^x44);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	uint8_t x46 = UINT8_MAX;
	int8_t x47 = -1;
	static volatile int64_t x48 = INT64_MIN;
	volatile int64_t t10 = 2542287583LL;

	t10 = (((x45+x46)/x47)^x48);

	if (t10 != 9223372036854775554LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = 39;
	int8_t x50 = -3;
	uint8_t x51 = UINT8_MAX;
	volatile int16_t x52 = -3984;

	t11 = (((x49+x50)/x51)^x52);

	if (t11 != -3984) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = INT64_MAX;
	int8_t x55 = INT8_MIN;
	volatile int8_t x56 = -5;
	static volatile int64_t t12 = -800994300061LL;

	t12 = (((x53+x54)/x55)^x56);

	if (t12 != 72057594037927930LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = 154477175054LL;
	volatile int32_t x60 = -1;

	t13 = (((x57+x58)/x59)^x60);

	if (t13 != 69LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = INT16_MAX;
	static uint32_t x63 = 1846U;
	int8_t x64 = INT8_MAX;
	uint32_t t14 = 134113279U;

	t14 = (((x61+x62)/x63)^x64);

	if (t14 != 110U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x67 = -64246461LL;
	uint8_t x68 = 0U;
	int64_t t15 = -1564325415403LL;

	t15 = (((x65+x66)/x67)^x68);

	if (t15 != -143562336248LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x69 = 76U;
	int64_t x72 = INT64_MAX;
	static volatile int64_t t16 = INT64_MAX;

	t16 = (((x69+x70)/x71)^x72);

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = 5284347799908LLU;
	static int32_t x74 = INT32_MIN;
	static int16_t x75 = -10;
	uint64_t t17 = 36530LLU;

	t17 = (((x73+x74)/x75)^x76);

	if (t17 != 65535LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = 3099883;
	int64_t x82 = -17LL;
	static int8_t x83 = INT8_MAX;
	static uint32_t x84 = 457908U;
	int64_t t18 = 932863686682LL;

	t18 = (((x81+x82)/x83)^x84);

	if (t18 != 435180LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x89 = 0U;
	int16_t x91 = INT16_MAX;
	int32_t x92 = -1823;
	volatile uint64_t t19 = 167LLU;

	t19 = (((x89+x90)/x91)^x92);

	if (t19 != 18446181106575735025LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = UINT64_MAX;
	uint32_t x94 = UINT32_MAX;
	volatile int32_t x95 = -1;
	volatile uint64_t t20 = 6261427LLU;

	t20 = (((x93+x94)/x95)^x96);

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 249LLU;
	uint64_t x98 = UINT64_MAX;
	volatile int16_t x100 = INT16_MIN;
	volatile uint64_t t21 = 283LLU;

	t21 = (((x97+x98)/x99)^x100);

	if (t21 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = 58;
	volatile int16_t x102 = 125;
	uint64_t x103 = 102391264LLU;
	uint64_t t22 = 64861673057680597LLU;

	t22 = (((x101+x102)/x103)^x104);

	if (t22 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = INT8_MAX;
	uint64_t x107 = 3833363LLU;
	static int32_t x108 = 233;
	uint64_t t23 = 563LLU;

	t23 = (((x105+x106)/x107)^x108);

	if (t23 != 233LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	uint8_t x111 = 47U;
	static uint64_t x112 = 2207LLU;
	uint64_t t24 = 3976LLU;

	t24 = (((x109+x110)/x111)^x112);

	if (t24 != 18446744073709549018LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x113 = 0U;
	static int16_t x114 = INT16_MAX;
	int64_t x116 = -24534111451381475LL;
	volatile int64_t t25 = 1004985320917362130LL;

	t25 = (((x113+x114)/x115)^x116);

	if (t25 != -24534111451381475LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x117 = INT32_MIN;
	int64_t x118 = 22689LL;
	int64_t x119 = -1LL;
	static int16_t x120 = INT16_MIN;
	int64_t t26 = -7LL;

	t26 = (((x117+x118)/x119)^x120);

	if (t26 != -2147473569LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 4626U;
	volatile int8_t x122 = INT8_MAX;
	int16_t x123 = 1;
	int64_t x124 = INT64_MIN;
	static volatile int64_t t27 = -765407LL;

	t27 = (((x121+x122)/x123)^x124);

	if (t27 != -9223372036854771055LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -1;
	int64_t x130 = -480419083021511070LL;
	int8_t x131 = INT8_MAX;
	int64_t t28 = -64424257050326413LL;

	t28 = (((x129+x130)/x131)^x132);

	if (t28 != -3782828333498157LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x133 = UINT8_MAX;
	uint8_t x134 = 29U;
	uint16_t x135 = 2979U;

	t29 = (((x133+x134)/x135)^x136);

	if (t29 != 14) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MAX;
	int8_t x138 = -1;
	int32_t x139 = INT32_MIN;
	int32_t x140 = -1;
	int32_t t30 = 11597;

	t30 = (((x137+x138)/x139)^x140);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = -1LL;
	int16_t x146 = INT16_MIN;
	uint32_t x147 = UINT32_MAX;
	volatile int16_t x148 = INT16_MIN;

	t31 = (((x145+x146)/x147)^x148);

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = UINT8_MAX;
	uint8_t x150 = 7U;
	int64_t x151 = INT64_MAX;
	volatile int8_t x152 = INT8_MIN;

	t32 = (((x149+x150)/x151)^x152);

	if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1034686;
	int8_t x154 = INT8_MIN;
	static int32_t x155 = INT32_MAX;
	int64_t x156 = INT64_MAX;
	int64_t t33 = INT64_MAX;

	t33 = (((x153+x154)/x155)^x156);

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x158 = 16031691227LLU;
	static int16_t x159 = INT16_MIN;
	int16_t x160 = -1;
	uint64_t t34 = UINT64_MAX;

	t34 = (((x157+x158)/x159)^x160);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x161 = UINT64_MAX;
	int16_t x162 = -1;
	int64_t x163 = INT64_MAX;
	int16_t x164 = INT16_MIN;

	t35 = (((x161+x162)/x163)^x164);

	if (t35 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x165 = 110331938U;
	int8_t x166 = INT8_MIN;
	volatile int16_t x167 = -1;
	volatile uint8_t x168 = 71U;
	volatile uint32_t t36 = 774096752U;

	t36 = (((x165+x166)/x167)^x168);

	if (t36 != 71U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = INT8_MAX;
	int16_t x179 = -1165;
	static int16_t x180 = -4885;

	t37 = (((x177+x178)/x179)^x180);

	if (t37 != -7917057542360787LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x186 = -1;
	static int64_t x187 = INT64_MIN;
	int32_t x188 = 20964;
	volatile int64_t t38 = -231718223612LL;

	t38 = (((x185+x186)/x187)^x188);

	if (t38 != 20964LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = 1916LL;
	int8_t x190 = -45;
	static uint16_t x191 = UINT16_MAX;
	uint8_t x192 = 63U;
	volatile int64_t t39 = -1982172LL;

	t39 = (((x189+x190)/x191)^x192);

	if (t39 != 63LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x193 = -3;
	int32_t x194 = INT32_MAX;
	uint8_t x195 = 3U;
	int64_t x196 = INT64_MIN;

	t40 = (((x193+x194)/x195)^x196);

	if (t40 != -9223372036138947927LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x198 = UINT8_MAX;
	static int32_t x199 = -1;
	volatile int8_t x200 = INT8_MAX;
	volatile int32_t t41 = -626278;

	t41 = (((x197+x198)/x199)^x200);

	if (t41 != -528) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x201 = INT64_MAX;
	int16_t x202 = INT16_MIN;
	volatile int32_t x203 = INT32_MAX;
	uint32_t x204 = 1436836794U;
	volatile int64_t t42 = 587274LL;

	t42 = (((x201+x202)/x203)^x204);

	if (t42 != 5731804091LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x206 = 60;
	static int8_t x207 = INT8_MAX;
	volatile int16_t x208 = -1;
	static int32_t t43 = -253;

	t43 = (((x205+x206)/x207)^x208);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x213 = 3508085015769766196LLU;
	int8_t x214 = INT8_MAX;
	static uint8_t x215 = 112U;
	static uint8_t x216 = 14U;
	uint64_t t44 = 1782670776LLU;

	t44 = (((x213+x214)/x215)^x216);

	if (t44 != 31322187640801475LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x218 = -2506;
	int8_t x219 = -1;
	static volatile int16_t x220 = -1;
	uint64_t t45 = UINT64_MAX;

	t45 = (((x217+x218)/x219)^x220);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x226 = INT16_MAX;
	int64_t x227 = INT64_MAX;
	static volatile int64_t t46 = 3455559694159126LL;

	t46 = (((x225+x226)/x227)^x228);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = INT32_MIN;
	static uint16_t x230 = 48U;
	uint64_t x231 = 875588LLU;
	int64_t x232 = INT64_MIN;
	uint64_t t47 = 6894095120LLU;

	t47 = (((x229+x230)/x231)^x232);

	if (t47 != 9223393104690414900LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x234 = INT64_MIN;
	int16_t x235 = -1;
	static uint64_t x236 = UINT64_MAX;
	uint64_t t48 = UINT64_MAX;

	t48 = (((x233+x234)/x235)^x236);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x237 = -4;
	int16_t x238 = INT16_MIN;
	static int8_t x239 = INT8_MIN;
	int16_t x240 = -1;
	static int32_t t49 = -91;

	t49 = (((x237+x238)/x239)^x240);

	if (t49 != -257) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x241 = UINT8_MAX;
	volatile uint16_t x242 = UINT16_MAX;
	uint64_t x243 = UINT64_MAX;
	int32_t x244 = INT32_MAX;
	uint64_t t50 = 1109117004642441037LLU;

	t50 = (((x241+x242)/x243)^x244);

	if (t50 != 2147483647LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x245 = 3258;
	int32_t x248 = -1;
	static volatile int32_t t51 = -8168229;

	t51 = (((x245+x246)/x247)^x248);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x249 = 2U;
	uint8_t x250 = 6U;
	static int64_t x251 = 558LL;
	int64_t t52 = INT64_MIN;

	t52 = (((x249+x250)/x251)^x252);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = 231U;
	uint8_t x254 = 12U;
	static uint32_t x255 = 208U;
	uint16_t x256 = 7U;
	uint32_t t53 = 170U;

	t53 = (((x253+x254)/x255)^x256);

	if (t53 != 6U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x258 = UINT8_MAX;
	static volatile int8_t x259 = 11;
	volatile int16_t x260 = INT16_MIN;
	static int32_t t54 = 20741084;

	t54 = (((x257+x258)/x259)^x260);

	if (t54 != -32677) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x266 = 270529903115573LLU;
	int32_t x267 = -1;
	volatile int8_t x268 = INT8_MAX;
	volatile uint64_t t55 = 385707597742774LLU;

	t55 = (((x265+x266)/x267)^x268);

	if (t55 != 127LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x269 = 2070181784U;
	volatile int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MAX;
	uint32_t t56 = 78859437U;

	t56 = (((x269+x270)/x271)^x272);

	if (t56 != 4294904122U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x274 = -4749;
	int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MIN;
	volatile int64_t t57 = 2605062LL;

	t57 = (((x273+x274)/x275)^x276);

	if (t57 != -9223372036854775770LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x277 = 9700U;
	volatile int32_t x278 = INT32_MIN;
	int64_t x279 = -1LL;
	static int16_t x280 = -11;
	int64_t t58 = 2137441307716096181LL;

	t58 = (((x277+x278)/x279)^x280);

	if (t58 != 2147493353LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x281 = UINT16_MAX;
	int8_t x282 = INT8_MIN;
	int32_t x283 = -30279;
	volatile uint64_t x284 = 554LLU;
	uint64_t t59 = 605294LLU;

	t59 = (((x281+x282)/x283)^x284);

	if (t59 != 18446744073709551060LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x286 = 850212091LL;
	static volatile uint8_t x287 = UINT8_MAX;
	static volatile int8_t x288 = 8;
	static int64_t t60 = -10067095066705162LL;

	t60 = (((x285+x286)/x287)^x288);

	if (t60 != 3334081LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x293 = 196U;
	uint64_t x294 = 13726LLU;
	volatile int8_t x295 = -1;
	int32_t x296 = INT32_MIN;

	t61 = (((x293+x294)/x295)^x296);

	if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x297 = UINT16_MAX;
	int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;
	static volatile int64_t t62 = 21578793LL;

	t62 = (((x297+x298)/x299)^x300);

	if (t62 != 4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x301 = 28U;
	static int16_t x303 = -1;
	int32_t x304 = INT32_MIN;
	static int64_t t63 = -4111270540LL;

	t63 = (((x301+x302)/x303)^x304);

	if (t63 != 264272277002391LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x309 = 298U;
	static uint64_t x310 = 3093254805528LLU;
	uint8_t x311 = UINT8_MAX;
	static uint64_t x312 = UINT64_MAX;
	volatile uint64_t t64 = 483001235046775LLU;

	t64 = (((x309+x310)/x311)^x312);

	if (t64 != 18446744061579140612LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = INT8_MAX;
	int8_t x314 = -1;
	int64_t x315 = INT64_MIN;
	volatile int16_t x316 = INT16_MAX;
	int64_t t65 = -103447532321032LL;

	t65 = (((x313+x314)/x315)^x316);

	if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x317 = -1;
	int32_t x319 = INT32_MIN;
	int32_t x320 = -1;
	volatile int32_t t66 = -5514978;

	t66 = (((x317+x318)/x319)^x320);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x321 = 4U;
	int32_t x322 = -62450;
	volatile uint64_t t67 = 13008192LLU;

	t67 = (((x321+x322)/x323)^x324);

	if (t67 != 8LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x325 = INT16_MAX;
	uint8_t x326 = 23U;
	static int16_t x327 = INT16_MIN;
	volatile int32_t t68 = 708649;

	t68 = (((x325+x326)/x327)^x328);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x330 = 206579934760151LLU;
	int32_t x331 = INT32_MAX;
	int16_t x332 = -1;
	uint64_t t69 = 556243126949372550LLU;

	t69 = (((x329+x330)/x331)^x332);

	if (t69 != 18446744073709455419LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = -1;
	volatile uint16_t x334 = 237U;
	uint32_t x335 = 42U;
	int16_t x336 = 1;
	volatile uint32_t t70 = 10733703U;

	t70 = (((x333+x334)/x335)^x336);

	if (t70 != 4U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x337 = -652405;
	uint32_t x339 = 19152U;
	static volatile uint32_t t71 = 151U;

	t71 = (((x337+x338)/x339)^x340);

	if (t71 != 224100U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = -6036;
	int8_t x347 = INT8_MAX;
	static uint64_t x348 = 42610860262534557LLU;
	volatile uint64_t t72 = 135454974959330041LLU;

	t72 = (((x345+x346)/x347)^x348);

	if (t72 != 18404133213447017036LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = INT16_MIN;
	volatile uint32_t x350 = 469U;
	volatile int8_t x352 = INT8_MIN;
	static volatile uint32_t t73 = 1754911576U;

	t73 = (((x349+x350)/x351)^x352);

	if (t73 != 32341U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = INT64_MIN;
	uint8_t x354 = UINT8_MAX;
	uint64_t x356 = 100480579657603LLU;
	uint64_t t74 = 10534LLU;

	t74 = (((x353+x354)/x355)^x356);

	if (t74 != 100636963514063LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = 0U;
	volatile uint16_t x358 = UINT16_MAX;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t75 = 1045689894LLU;

	t75 = (((x357+x358)/x359)^x360);

	if (t75 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x361 = 580597U;
	static int32_t x362 = -1;
	static volatile uint32_t x363 = 4993894U;
	int64_t x364 = -8587893329568744LL;
	int64_t t76 = -5742850099718LL;

	t76 = (((x361+x362)/x363)^x364);

	if (t76 != -8587893329568744LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x365 = 4;
	static uint8_t x366 = 8U;
	uint64_t t77 = UINT64_MAX;

	t77 = (((x365+x366)/x367)^x368);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x369 = -1;
	volatile uint32_t x370 = UINT32_MAX;
	uint16_t x372 = 72U;
	volatile uint32_t t78 = 111052U;

	t78 = (((x369+x370)/x371)^x372);

	if (t78 != 72U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x373 = UINT16_MAX;
	static uint64_t x375 = 48993258982LLU;
	int8_t x376 = INT8_MIN;
	uint64_t t79 = 15706482615155319LLU;

	t79 = (((x373+x374)/x375)^x376);

	if (t79 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x377 = UINT64_MAX;
	uint64_t x378 = 198448548107LLU;
	uint8_t x380 = UINT8_MAX;
	volatile uint64_t t80 = 3416240211933LLU;

	t80 = (((x377+x378)/x379)^x380);

	if (t80 != 255LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x383 = 7096365525790557LL;

	t81 = (((x381+x382)/x383)^x384);

	if (t81 != -412LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = INT32_MAX;
	int32_t x386 = -1120385;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MAX;
	volatile int64_t t82 = -314260299253744LL;

	t82 = (((x385+x386)/x387)^x388);

	if (t82 != 127LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x389 = INT32_MAX;
	int64_t x390 = INT64_MIN;
	volatile int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	static int64_t t83 = 1322396300896662LL;

	t83 = (((x389+x390)/x391)^x392);

	if (t83 != -128LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x393 = -5521;
	int16_t x394 = 168;
	uint16_t x395 = UINT16_MAX;
	uint32_t t84 = 9316U;

	t84 = (((x393+x394)/x395)^x396);

	if (t84 != 830U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x401 = -1;
	volatile uint32_t x402 = UINT32_MAX;
	volatile uint16_t x403 = 9U;
	volatile int64_t x404 = 3LL;
	static int64_t t85 = -5968504211LL;

	t85 = (((x401+x402)/x403)^x404);

	if (t85 != 477218591LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x405 = INT64_MIN;
	volatile uint64_t x406 = 2203723LLU;
	int32_t x407 = -1;
	int64_t x408 = 207130189948450LL;

	t86 = (((x405+x406)/x407)^x408);

	if (t86 != 207130189948450LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x409 = 0;
	uint64_t x410 = 3854486436591963248LLU;
	static uint64_t x411 = 713431LLU;
	uint32_t x412 = 24107273U;
	static uint64_t t87 = 1973867464064LLU;

	t87 = (((x409+x410)/x411)^x412);

	if (t87 != 5402761577841LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x413 = UINT64_MAX;
	volatile int64_t x414 = 2143281LL;
	int64_t x416 = INT64_MIN;
	volatile uint64_t t88 = 1718539357LLU;

	t88 = (((x413+x414)/x415)^x416);

	if (t88 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x417 = UINT16_MAX;
	int8_t x418 = -10;
	uint8_t x419 = 17U;
	uint64_t x420 = 1LLU;

	t89 = (((x417+x418)/x419)^x420);

	if (t89 != 3855LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x421 = INT8_MIN;
	uint64_t x423 = 2153018LLU;
	volatile int16_t x424 = INT16_MAX;
	volatile uint64_t t90 = 25931LLU;

	t90 = (((x421+x422)/x423)^x424);

	if (t90 != 31770LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x425 = 19328971U;
	uint16_t x426 = UINT16_MAX;
	static uint8_t x427 = 58U;
	volatile uint32_t t91 = 224U;

	t91 = (((x425+x426)/x427)^x428);

	if (t91 != 334395U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x429 = 3;
	uint32_t x430 = 44636U;

	t92 = (((x429+x430)/x431)^x432);

	if (t92 != 1969U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x433 = 119U;
	volatile int16_t x434 = INT16_MAX;
	int32_t x436 = -1;

	t93 = (((x433+x434)/x435)^x436);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x437 = INT16_MAX;
	static uint8_t x438 = 19U;
	int16_t x439 = 14187;
	uint64_t x440 = UINT64_MAX;
	uint64_t t94 = 287LLU;

	t94 = (((x437+x438)/x439)^x440);

	if (t94 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x441 = UINT16_MAX;
	int16_t x442 = -1;
	static volatile int8_t x443 = -1;
	int8_t x444 = -1;
	volatile int32_t t95 = 26763148;

	t95 = (((x441+x442)/x443)^x444);

	if (t95 != 65533) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x445 = 4380579461220800LLU;
	int8_t x448 = 1;
	uint64_t t96 = 18246365LLU;

	t96 = (((x445+x446)/x447)^x448);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x449 = 9;
	int64_t x450 = INT64_MIN;
	int16_t x452 = -1;
	uint64_t t97 = 15586605343332366LLU;

	t97 = (((x449+x450)/x451)^x452);

	if (t97 != 18446744073688426596LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = -1;
	uint16_t x455 = 29356U;
	static int32_t x456 = -1;
	static volatile uint32_t t98 = UINT32_MAX;

	t98 = (((x453+x454)/x455)^x456);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x457 = INT16_MIN;
	volatile int64_t x458 = -1LL;
	int8_t x459 = INT8_MAX;
	volatile int8_t x460 = INT8_MAX;
	static int64_t t99 = -7LL;

	t99 = (((x457+x458)/x459)^x460);

	if (t99 != -383LL) { NG(); } else { ; }
	
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

