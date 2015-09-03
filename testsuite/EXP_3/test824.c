#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = 99329235599LL;
int32_t x14 = -1;
int8_t x22 = -5;
static uint8_t x30 = 84U;
static int64_t t4 = -1706970LL;
static uint16_t x39 = UINT16_MAX;
int8_t x45 = INT8_MIN;
int64_t x46 = INT64_MAX;
static int16_t x47 = -2181;
uint64_t t6 = 7886224137LLU;
int32_t x59 = 243236;
uint32_t t10 = 290U;
static int64_t t12 = 1947LL;
volatile uint32_t x82 = 100223902U;
int8_t x93 = INT8_MIN;
static int32_t x100 = -199002;
static int64_t x108 = -7281483981324LL;
static int64_t t18 = 411LL;
uint64_t t19 = 417548640238083LLU;
int32_t x113 = 288689663;
volatile int64_t x115 = INT64_MAX;
int64_t t20 = 1805883296444LL;
static int64_t t21 = -18601400950796433LL;
int64_t t22 = -1106046653532390515LL;
int32_t x129 = -1;
int64_t x148 = INT64_MAX;
int32_t t27 = -12730;
volatile uint8_t x154 = UINT8_MAX;
volatile int64_t x163 = INT64_MIN;
volatile uint64_t x164 = UINT64_MAX;
int16_t x177 = 14764;
int32_t x187 = -1;
static int64_t x194 = -7665099352LL;
uint64_t x214 = UINT64_MAX;
uint64_t t37 = 290030866LLU;
int32_t x234 = INT32_MAX;
volatile int16_t x245 = INT16_MIN;
int32_t x254 = INT32_MAX;
static volatile int16_t x255 = INT16_MIN;
int16_t x262 = 22;
uint32_t x277 = 1193U;
int16_t x278 = -2153;
static int64_t x282 = INT64_MAX;
int8_t x283 = 24;
int64_t x285 = INT64_MIN;
int16_t x288 = -14;
volatile int64_t t51 = 1LL;
int16_t x291 = 891;
volatile int64_t t53 = -25040LL;
int64_t x301 = -1LL;
volatile uint8_t x304 = 109U;
volatile int32_t x307 = 30;
int8_t x312 = -6;
uint64_t x318 = UINT64_MAX;
int32_t x323 = INT32_MIN;
static int8_t x332 = INT8_MAX;
int32_t t61 = 175;
uint64_t x339 = 2022LLU;
static int16_t x344 = 54;
int8_t x347 = INT8_MIN;
int32_t t64 = 9332073;
int16_t x350 = -238;
uint32_t x358 = 94U;
uint16_t x361 = UINT16_MAX;
int16_t x362 = INT16_MIN;
uint8_t x375 = 74U;
int64_t x380 = INT64_MIN;
static volatile int64_t x383 = INT64_MIN;
uint16_t x387 = 1593U;
uint16_t x388 = 22467U;
int32_t t71 = -3;
int16_t x397 = -16314;
uint16_t x407 = 4112U;
uint64_t x408 = UINT64_MAX;
int64_t x417 = -1LL;
static volatile int32_t x419 = -16765641;
static volatile int64_t t77 = 3581876602LL;
static int8_t x425 = INT8_MIN;
volatile uint64_t x427 = 1796154959LLU;
volatile uint64_t t78 = 691631736LLU;
uint64_t x430 = 63LLU;
int8_t x431 = -52;
uint64_t t79 = 1241387718258LLU;
int32_t x451 = 57348788;
uint16_t x465 = 693U;
volatile int16_t x472 = INT16_MAX;
volatile uint64_t x481 = 2498166LLU;
int16_t x483 = 423;
static int32_t x513 = 31;
uint16_t x516 = UINT16_MAX;
int32_t x518 = -1;
int32_t x519 = -1;
int16_t x523 = INT16_MIN;
int64_t t98 = 127979359753980LL;


void f0(void) {
	uint16_t x2 = UINT16_MAX;
	uint64_t x3 = UINT64_MAX;
	uint64_t x4 = 23543251471407309LLU;
	volatile uint64_t t0 = 59083LLU;

	t0 = ((x1|x2)%(x3%x4));

	if (t0 != 99329245183LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -1;
	int8_t x10 = INT8_MIN;
	static int16_t x11 = -1;
	int16_t x12 = -2;
	int32_t t1 = -1340831;

	t1 = ((x9|x10)%(x11%x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	volatile int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MAX;
	volatile int64_t t2 = -918376186969LL;

	t2 = ((x13|x14)%(x15%x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = 17324084LL;
	uint32_t x23 = UINT32_MAX;
	uint8_t x24 = 16U;
	volatile int64_t t3 = -2215368133166784851LL;

	t3 = ((x21|x22)%(x23%x24));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = -13;
	static int64_t x31 = 3324319509676526086LL;
	int64_t x32 = INT64_MAX;

	t4 = ((x29|x30)%(x31%x32));

	if (t4 != -9LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = 3;
	uint64_t x38 = 81385508153610LLU;
	int64_t x40 = INT64_MIN;
	uint64_t t5 = 265914LLU;

	t5 = ((x37|x38)%(x39%x40));

	if (t5 != 64861LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x48 = 21463LLU;

	t6 = ((x45|x46)%(x47%x48));

	if (t6 != 995LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MIN;
	int64_t x51 = 76562575484268LL;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t7 = 56868783LLU;

	t7 = ((x49|x50)%(x51%x52));

	if (t7 != 63386831924000LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = INT16_MAX;
	int32_t x54 = -1;
	volatile int64_t x55 = 130306LL;
	int32_t x56 = 13;
	int64_t t8 = 68645859043805LL;

	t8 = ((x53|x54)%(x55%x56));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x57 = 64U;
	int64_t x58 = 227455LL;
	static uint8_t x60 = UINT8_MAX;
	volatile int64_t t9 = -78624708LL;

	t9 = ((x57|x58)%(x59%x60));

	if (t9 != 46LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x61 = 101U;
	uint16_t x62 = 9977U;
	int8_t x63 = INT8_MIN;
	uint32_t x64 = UINT32_MAX;

	t10 = ((x61|x62)%(x63%x64));

	if (t10 != 9981U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x65 = 35530U;
	uint64_t x66 = 0LLU;
	int8_t x67 = -1;
	int32_t x68 = 22150430;
	uint64_t t11 = 97955380990754660LLU;

	t11 = ((x65|x66)%(x67%x68));

	if (t11 != 35530LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = INT64_MIN;
	int32_t x74 = -1;
	volatile uint32_t x75 = UINT32_MAX;
	int32_t x76 = INT32_MIN;

	t12 = ((x73|x74)%(x75%x76));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	static uint64_t x78 = UINT64_MAX;
	uint16_t x79 = 344U;
	int16_t x80 = INT16_MIN;
	uint64_t t13 = 972441554126931LLU;

	t13 = ((x77|x78)%(x79%x80));

	if (t13 != 255LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x81 = 3U;
	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MIN;
	volatile uint32_t t14 = 1U;

	t14 = ((x81|x82)%(x83%x84));

	if (t14 != 100223903U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x89 = 15U;
	volatile int64_t x90 = 23LL;
	int8_t x91 = 1;
	volatile uint64_t x92 = UINT64_MAX;
	uint64_t t15 = 3950LLU;

	t15 = ((x89|x90)%(x91%x92));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x94 = -1;
	volatile int32_t x95 = INT32_MIN;
	int64_t x96 = 84580832412854882LL;
	volatile int64_t t16 = 619270LL;

	t16 = ((x93|x94)%(x95%x96));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MIN;
	int64_t x99 = -32780082113869LL;
	int64_t t17 = 11282832214431LL;

	t17 = ((x97|x98)%(x99%x100));

	if (t17 != -35442LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x105 = INT16_MAX;
	int32_t x106 = INT32_MIN;
	int16_t x107 = INT16_MAX;

	t18 = ((x105|x106)%(x107%x108));

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	uint64_t x111 = 69740443486LLU;
	int64_t x112 = 1245407729LL;

	t19 = ((x109|x110)%(x111%x112));

	if (t19 != 1060098130LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x114 = -1160383167944443365LL;
	uint8_t x116 = UINT8_MAX;

	t20 = ((x113|x114)%(x115%x116));

	if (t20 != -55LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x117 = 0LL;
	static volatile int32_t x118 = INT32_MIN;
	static volatile int64_t x119 = -44188321289570LL;
	int64_t x120 = 2764679885069LL;

	t21 = ((x117|x118)%(x119%x120));

	if (t21 != -2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x121 = 1528309;
	static volatile int64_t x122 = 31864911907731642LL;
	int32_t x123 = INT32_MAX;
	int16_t x124 = INT16_MAX;

	t22 = ((x121|x122)%(x123%x124));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x130 = -1;
	volatile uint16_t x131 = 16531U;
	uint8_t x132 = 116U;
	int32_t t23 = -591;

	t23 = ((x129|x130)%(x131%x132));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = -1LL;
	volatile int8_t x138 = INT8_MIN;
	int64_t x139 = 103469092097LL;
	volatile uint8_t x140 = 13U;
	int64_t t24 = 16LL;

	t24 = ((x137|x138)%(x139%x140));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x141 = 99585682LLU;
	int32_t x142 = INT32_MAX;
	static uint32_t x143 = 26877997U;
	int16_t x144 = -1;
	volatile uint64_t t25 = 300682221491735LLU;

	t25 = ((x141|x142)%(x143%x144));

	if (t25 != 24121884LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x145 = UINT64_MAX;
	int8_t x146 = INT8_MAX;
	int16_t x147 = 2410;
	static uint64_t t26 = 348596104LLU;

	t26 = ((x145|x146)%(x147%x148));

	if (t26 != 465LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x149 = UINT8_MAX;
	static int8_t x150 = INT8_MIN;
	uint8_t x151 = 74U;
	int8_t x152 = INT8_MAX;

	t27 = ((x149|x150)%(x151%x152));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = -1;
	uint32_t x155 = 1307723083U;
	static int8_t x156 = INT8_MIN;
	uint32_t t28 = 622U;

	t28 = ((x153|x154)%(x155%x156));

	if (t28 != 371798046U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	uint64_t t29 = 16519696770464LLU;

	t29 = ((x161|x162)%(x163%x164));

	if (t29 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x173 = 63LL;
	uint32_t x174 = 21088913U;
	volatile int32_t x175 = INT32_MAX;
	int32_t x176 = INT32_MIN;
	int64_t t30 = 66LL;

	t30 = ((x173|x174)%(x175%x176));

	if (t30 != 21088959LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x178 = 15432239460LLU;
	volatile uint8_t x179 = UINT8_MAX;
	int16_t x180 = -64;
	static uint64_t t31 = 2225120479034336LLU;

	t31 = ((x177|x178)%(x179%x180));

	if (t31 != 7LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x181 = 21U;
	static int16_t x182 = INT16_MAX;
	int16_t x183 = INT16_MIN;
	volatile int16_t x184 = INT16_MAX;
	volatile int32_t t32 = -936;

	t32 = ((x181|x182)%(x183%x184));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x185 = 5U;
	uint32_t x186 = 24U;
	int8_t x188 = INT8_MIN;
	uint32_t t33 = 107U;

	t33 = ((x185|x186)%(x187%x188));

	if (t33 != 29U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x193 = INT64_MAX;
	int8_t x195 = INT8_MIN;
	static int16_t x196 = 28;
	volatile int64_t t34 = 17312995LL;

	t34 = ((x193|x194)%(x195%x196));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x205 = 6U;
	volatile uint16_t x206 = UINT16_MAX;
	int64_t x207 = INT64_MAX;
	int32_t x208 = -3745823;
	volatile int64_t t35 = 101126LL;

	t35 = ((x205|x206)%(x207%x208));

	if (t35 != 65535LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x209 = 16587250LLU;
	volatile int64_t x210 = -543647663654LL;
	uint64_t x211 = UINT64_MAX;
	static int64_t x212 = -5635LL;
	uint64_t t36 = 25LLU;

	t36 = ((x209|x210)%(x211%x212));

	if (t36 != 4870LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x213 = -1LL;
	static uint32_t x215 = 19302U;
	int32_t x216 = INT32_MIN;

	t37 = ((x213|x214)%(x215%x216));

	if (t37 != 10881LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x217 = 23U;
	uint16_t x218 = 51U;
	int8_t x219 = -1;
	int64_t x220 = INT64_MIN;
	volatile int64_t t38 = -50LL;

	t38 = ((x217|x218)%(x219%x220));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x229 = INT16_MAX;
	static volatile int16_t x230 = 12863;
	uint64_t x231 = 2590LLU;
	int32_t x232 = -1;
	uint64_t t39 = 4456922441348703241LLU;

	t39 = ((x229|x230)%(x231%x232));

	if (t39 != 1687LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x233 = -1LL;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = INT8_MIN;
	int64_t t40 = 6083844839629LL;

	t40 = ((x233|x234)%(x235%x236));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x237 = 3415U;
	int32_t x238 = -26;
	volatile int32_t x239 = 6026964;
	volatile int32_t x240 = INT32_MAX;
	static uint32_t t41 = 156221007U;

	t41 = ((x237|x238)%(x239%x240));

	if (t41 != 3768919U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x241 = 1U;
	int32_t x242 = 10191013;
	int16_t x243 = INT16_MIN;
	volatile int32_t x244 = INT32_MIN;
	volatile int32_t t42 = -1016;

	t42 = ((x241|x242)%(x243%x244));

	if (t42 != 165) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x246 = -1LL;
	static uint32_t x247 = UINT32_MAX;
	static int16_t x248 = INT16_MIN;
	volatile int64_t t43 = -15591194362012LL;

	t43 = ((x245|x246)%(x247%x248));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x249 = INT8_MAX;
	volatile int64_t x250 = -1LL;
	volatile int8_t x251 = INT8_MIN;
	static int32_t x252 = 181897664;
	volatile int64_t t44 = -3671392LL;

	t44 = ((x249|x250)%(x251%x252));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x253 = -1;
	uint32_t x256 = 41168U;
	static uint32_t t45 = 1U;

	t45 = ((x253|x254)%(x255%x256));

	if (t45 != 191U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x261 = INT16_MAX;
	static int16_t x263 = INT16_MIN;
	static volatile int8_t x264 = INT8_MAX;
	int32_t t46 = -33303;

	t46 = ((x261|x262)%(x263%x264));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x265 = UINT64_MAX;
	int8_t x266 = 0;
	static int16_t x267 = INT16_MIN;
	uint16_t x268 = UINT16_MAX;
	static volatile uint64_t t47 = 813985513537045LLU;

	t47 = ((x265|x266)%(x267%x268));

	if (t47 != 32767LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x273 = -1;
	int16_t x274 = INT16_MAX;
	volatile int32_t x275 = 294970;
	uint32_t x276 = 810728796U;
	uint32_t t48 = 5632453U;

	t48 = ((x273|x274)%(x275%x276));

	if (t48 != 204095U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x279 = 1069LLU;
	static int8_t x280 = INT8_MAX;
	uint64_t t49 = 578825757059998LLU;

	t49 = ((x277|x278)%(x279%x280));

	if (t49 != 49LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x281 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t50 = -187428782636606960LL;

	t50 = ((x281|x282)%(x283%x284));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;

	t51 = ((x285|x286)%(x287%x288));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = -1;
	volatile int16_t x292 = -1096;
	volatile uint32_t t52 = 24U;

	t52 = ((x289|x290)%(x291%x292));

	if (t52 != 696U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x297 = UINT32_MAX;
	int64_t x298 = INT64_MIN;
	int32_t x299 = -3;
	volatile int64_t x300 = INT64_MAX;

	t53 = ((x297|x298)%(x299%x300));

	if (t53 != -2LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x302 = 65U;
	int8_t x303 = INT8_MIN;
	volatile int64_t t54 = -1225049066LL;

	t54 = ((x301|x302)%(x303%x304));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x305 = -1;
	int64_t x306 = INT64_MIN;
	int16_t x308 = 4613;
	volatile int64_t t55 = -59LL;

	t55 = ((x305|x306)%(x307%x308));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x309 = 1033124;
	int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MAX;
	static volatile int64_t t56 = 31447LL;

	t56 = ((x309|x310)%(x311%x312));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x313 = INT8_MIN;
	static volatile int64_t x314 = 39507646509828LL;
	static volatile int16_t x315 = INT16_MIN;
	int16_t x316 = -61;
	volatile int64_t t57 = 816788LL;

	t57 = ((x313|x314)%(x315%x316));

	if (t57 != -3LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x317 = UINT8_MAX;
	volatile uint8_t x319 = 51U;
	int64_t x320 = 6682814792849294LL;
	static volatile uint64_t t58 = 11172006626LLU;

	t58 = ((x317|x318)%(x319%x320));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x321 = -1LL;
	volatile int32_t x322 = -1;
	int16_t x324 = INT16_MAX;
	static int64_t t59 = 84078078711635LL;

	t59 = ((x321|x322)%(x323%x324));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	volatile int64_t x327 = 1LL;
	volatile int32_t x328 = -513050;
	volatile int64_t t60 = 1779255313007734LL;

	t60 = ((x325|x326)%(x327%x328));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x329 = -57;
	int32_t x330 = -1;
	uint16_t x331 = 129U;

	t61 = ((x329|x330)%(x331%x332));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MIN;
	uint32_t x340 = 1553192119U;
	uint64_t t62 = 8827839LLU;

	t62 = ((x337|x338)%(x339%x340));

	if (t62 != 675LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x341 = 3932U;
	static volatile uint8_t x342 = 1U;
	int8_t x343 = -1;
	uint32_t t63 = 406U;

	t63 = ((x341|x342)%(x343%x344));

	if (t63 != 3933U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x345 = 18776U;
	int8_t x346 = INT8_MIN;
	static uint8_t x348 = 78U;

	t64 = ((x345|x346)%(x347%x348));

	if (t64 != -40) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x349 = -15605;
	int8_t x351 = INT8_MIN;
	int8_t x352 = 33;
	volatile int32_t t65 = -98;

	t65 = ((x349|x350)%(x351%x352));

	if (t65 != -26) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x357 = -1;
	static int64_t x359 = 503935274714892LL;
	uint64_t x360 = 29LLU;
	uint64_t t66 = 692559855LLU;

	t66 = ((x357|x358)%(x359%x360));

	if (t66 != 15LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x363 = UINT16_MAX;
	uint32_t x364 = 118U;
	volatile uint32_t t67 = 247U;

	t67 = ((x361|x362)%(x363%x364));

	if (t67 != 30U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x373 = 95U;
	int32_t x374 = -1;
	int8_t x376 = INT8_MIN;
	volatile int32_t t68 = 1521;

	t68 = ((x373|x374)%(x375%x376));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MAX;
	uint64_t x379 = 3432829LLU;
	volatile uint64_t t69 = 2074722187579281396LLU;

	t69 = ((x377|x378)%(x379%x380));

	if (t69 != 2612585LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x381 = 13;
	int64_t x382 = INT64_MIN;
	int32_t x384 = 57057366;
	static int64_t t70 = 0LL;

	t70 = ((x381|x382)%(x383%x384));

	if (t70 != -38486063LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x385 = -1;
	volatile int16_t x386 = INT16_MIN;

	t71 = ((x385|x386)%(x387%x388));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x393 = INT64_MAX;
	int16_t x394 = -1;
	volatile int8_t x395 = -1;
	int64_t x396 = INT64_MIN;
	int64_t t72 = 0LL;

	t72 = ((x393|x394)%(x395%x396));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x398 = INT32_MAX;
	uint8_t x399 = 100U;
	uint8_t x400 = 33U;
	volatile int32_t t73 = -45;

	t73 = ((x397|x398)%(x399%x400));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x405 = INT32_MAX;
	static int64_t x406 = INT64_MIN;
	uint64_t t74 = 1LLU;

	t74 = ((x405|x406)%(x407%x408));

	if (t74 != 3855LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x409 = INT32_MIN;
	int64_t x410 = -12165165739100LL;
	static int32_t x411 = 77586861;
	int32_t x412 = INT32_MAX;
	volatile int64_t t75 = -2103867LL;

	t75 = ((x409|x410)%(x411%x412));

	if (t75 != -33859025LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x413 = 15U;
	volatile uint16_t x414 = 186U;
	int16_t x415 = -14488;
	volatile uint16_t x416 = 7028U;
	static int32_t t76 = 1641367;

	t76 = ((x413|x414)%(x415%x416));

	if (t76 != 191) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x418 = 22U;
	int32_t x420 = INT32_MIN;

	t77 = ((x417|x418)%(x419%x420));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x426 = 30U;
	static int64_t x428 = INT64_MIN;

	t78 = ((x425|x426)%(x427%x428));

	if (t78 != 1400796961LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x429 = 850;
	int64_t x432 = 287945141LL;

	t79 = ((x429|x430)%(x431%x432));

	if (t79 != 895LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x433 = INT32_MAX;
	static int64_t x434 = INT64_MAX;
	volatile int8_t x435 = -1;
	int32_t x436 = INT32_MIN;
	int64_t t80 = 3984576599800096813LL;

	t80 = ((x433|x434)%(x435%x436));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x437 = UINT16_MAX;
	int64_t x438 = INT64_MIN;
	volatile uint32_t x439 = UINT32_MAX;
	int8_t x440 = -24;
	static volatile int64_t t81 = 18634720820081408LL;

	t81 = ((x437|x438)%(x439%x440));

	if (t81 != -18LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x445 = -1;
	static int64_t x446 = INT64_MIN;
	volatile int64_t x447 = INT64_MIN;
	volatile int16_t x448 = 70;
	int64_t t82 = -491189544871LL;

	t82 = ((x445|x446)%(x447%x448));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x449 = 3U;
	int16_t x450 = INT16_MAX;
	uint32_t x452 = 68010U;
	uint32_t t83 = 65444U;

	t83 = ((x449|x450)%(x451%x452));

	if (t83 != 51U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x453 = UINT8_MAX;
	int16_t x454 = -1;
	static int64_t x455 = -14039475077668019LL;
	static int32_t x456 = INT32_MIN;
	volatile int64_t t84 = 951944359167LL;

	t84 = ((x453|x454)%(x455%x456));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x457 = -11885816193690LL;
	static int8_t x458 = -1;
	int8_t x459 = INT8_MIN;
	volatile uint16_t x460 = UINT16_MAX;
	volatile int64_t t85 = -3640355393LL;

	t85 = ((x457|x458)%(x459%x460));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x461 = -686LL;
	uint64_t x462 = 5LLU;
	volatile int64_t x463 = -1LL;
	volatile uint64_t x464 = 1245216326LLU;
	volatile uint64_t t86 = 573838260624243976LLU;

	t86 = ((x461|x462)%(x463%x464));

	if (t86 != 442774926LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x466 = 48U;
	int64_t x467 = INT64_MAX;
	volatile uint8_t x468 = UINT8_MAX;
	int64_t t87 = -2578168246LL;

	t87 = ((x465|x466)%(x467%x468));

	if (t87 != 58LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x469 = 0U;
	int8_t x470 = INT8_MIN;
	int8_t x471 = 15;
	volatile int32_t t88 = 1;

	t88 = ((x469|x470)%(x471%x472));

	if (t88 != -8) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x473 = 1U;
	static volatile int8_t x474 = INT8_MIN;
	static int8_t x475 = -1;
	volatile uint16_t x476 = UINT16_MAX;
	int32_t t89 = 2;

	t89 = ((x473|x474)%(x475%x476));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x477 = INT8_MIN;
	int32_t x478 = -1;
	uint64_t x479 = 17160LLU;
	uint32_t x480 = 10853U;
	volatile uint64_t t90 = 248483830LLU;

	t90 = ((x477|x478)%(x479%x480));

	if (t90 != 2346LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x482 = INT32_MIN;
	uint64_t x484 = 61099521579543813LLU;
	uint64_t t91 = 236727539022LLU;

	t91 = ((x481|x482)%(x483%x484));

	if (t91 != 167LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x489 = UINT16_MAX;
	uint16_t x490 = UINT16_MAX;
	uint32_t x491 = 5U;
	uint32_t x492 = 9270U;
	volatile uint32_t t92 = 1027U;

	t92 = ((x489|x490)%(x491%x492));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x493 = INT32_MAX;
	volatile int8_t x494 = -13;
	uint32_t x495 = 2304U;
	int64_t x496 = INT64_MIN;
	volatile int64_t t93 = -269948299844LL;

	t93 = ((x493|x494)%(x495%x496));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x497 = 62433974LLU;
	uint8_t x498 = UINT8_MAX;
	static int64_t x499 = INT64_MIN;
	uint64_t x500 = UINT64_MAX;
	static uint64_t t94 = 25014640LLU;

	t94 = ((x497|x498)%(x499%x500));

	if (t94 != 62434047LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x505 = INT16_MIN;
	int32_t x506 = INT32_MAX;
	int64_t x507 = 31956030LL;
	uint16_t x508 = UINT16_MAX;
	int64_t t95 = 407596465675LL;

	t95 = ((x505|x506)%(x507%x508));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x514 = 7481U;
	int8_t x515 = 1;
	volatile uint32_t t96 = 26U;

	t96 = ((x513|x514)%(x515%x516));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x517 = INT64_MAX;
	static int64_t x520 = INT64_MIN;
	int64_t t97 = -3211607745953111815LL;

	t97 = ((x517|x518)%(x519%x520));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x521 = INT32_MIN;
	static int8_t x522 = 10;
	int64_t x524 = INT64_MIN;

	t98 = ((x521|x522)%(x523%x524));

	if (t98 != -32758LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x525 = UINT32_MAX;
	uint32_t x526 = 310731474U;
	int64_t x527 = -1LL;
	volatile int16_t x528 = INT16_MIN;
	volatile int64_t t99 = 1LL;

	t99 = ((x525|x526)%(x527%x528));

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

