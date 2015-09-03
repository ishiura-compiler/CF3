#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 89383086U;
uint64_t t1 = 3523LLU;
volatile int64_t x10 = INT64_MAX;
uint64_t t3 = 7573663133160312983LLU;
int64_t x27 = INT64_MIN;
volatile int16_t x35 = 91;
volatile int32_t t6 = 4444;
static int32_t x55 = -1;
int16_t x57 = -59;
static uint16_t x58 = 0U;
int32_t x61 = -1;
static int32_t x68 = -1977;
int64_t x72 = 2417840LL;
volatile int32_t x73 = 8;
uint64_t t14 = 191LLU;
static int8_t x82 = INT8_MIN;
volatile int32_t x83 = -1;
volatile uint8_t x84 = UINT8_MAX;
int64_t t15 = -1LL;
static uint16_t x93 = 1441U;
volatile int16_t x103 = 2391;
int32_t x106 = INT32_MIN;
volatile uint16_t x109 = UINT16_MAX;
static volatile int64_t t23 = 385LL;
static uint64_t x138 = 8236374649647LLU;
int64_t x139 = -1LL;
uint32_t x146 = 730086291U;
uint64_t x153 = 177LLU;
static int16_t x160 = INT16_MIN;
int16_t x161 = -324;
volatile int64_t t29 = 47685LL;
volatile int32_t x170 = 0;
int16_t x174 = INT16_MIN;
int16_t x181 = -1;
int64_t x191 = INT64_MIN;
uint32_t x195 = 600801955U;
uint64_t x196 = 5555128249806820386LLU;
volatile uint64_t t36 = 5627355064453932316LLU;
int32_t x207 = -1;
static uint64_t t38 = 6805LLU;
uint16_t x209 = 517U;
volatile uint64_t x210 = 269410580630576876LLU;
int32_t x212 = INT32_MIN;
static volatile int64_t t50 = 14306432184889LL;
int8_t x279 = INT8_MIN;
volatile uint64_t x280 = 3146712048363432LLU;
volatile uint64_t t52 = 14LLU;
int32_t x281 = -1;
static uint16_t x285 = UINT16_MAX;
int32_t x286 = -1;
volatile uint64_t t55 = 330LLU;
static int8_t x301 = INT8_MIN;
static int8_t x302 = INT8_MIN;
static volatile int32_t t58 = 303;
volatile int16_t x313 = 0;
volatile uint64_t t61 = 2068443105923634LLU;
uint8_t x318 = 49U;
uint16_t x319 = UINT16_MAX;
uint32_t x323 = 2883U;
int8_t x333 = -13;
int8_t x334 = INT8_MAX;
static int64_t x342 = INT64_MIN;
uint8_t x350 = UINT8_MAX;
int16_t x352 = INT16_MIN;
volatile uint32_t t70 = 1496308468U;
int8_t x355 = INT8_MIN;
static int32_t x358 = INT32_MIN;
int16_t x364 = INT16_MAX;
static volatile uint64_t t74 = 507179585608965193LLU;
int8_t x392 = 1;
static int16_t x408 = 649;
int64_t x410 = -1LL;
int64_t x418 = INT64_MAX;
int16_t x424 = INT16_MAX;
volatile int8_t x429 = -1;
static int16_t x433 = INT16_MIN;
uint16_t x437 = UINT16_MAX;
uint32_t x445 = 356801U;
int32_t x447 = -1;
volatile int64_t x448 = INT64_MIN;
uint8_t x449 = UINT8_MAX;
static int32_t x459 = -1;
uint8_t x461 = 29U;
int32_t x462 = -1;
volatile int64_t t92 = -126LL;
uint8_t x479 = 29U;
volatile int32_t t95 = 3;
uint32_t x487 = 5319300U;
int8_t x489 = 54;
static int16_t x494 = INT16_MAX;
int32_t x496 = INT32_MAX;
volatile int32_t t99 = 675569;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MIN;
	volatile uint32_t x3 = 335U;
	int16_t x4 = -213;

	t0 = ((x1+x2)*(x3/x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x6 = -1LL;
	uint16_t x7 = UINT16_MAX;
	volatile uint64_t x8 = 24345401814896LLU;

	t1 = ((x5+x6)*(x7/x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x11 = INT16_MAX;
	static uint32_t x12 = UINT32_MAX;
	int64_t t2 = 125041512227LL;

	t2 = ((x9+x10)*(x11/x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	volatile uint64_t x18 = 270160242LLU;
	uint64_t x19 = 130423LLU;
	int32_t x20 = INT32_MIN;

	t3 = ((x17+x18)*(x19/x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	uint64_t x26 = UINT64_MAX;
	volatile int64_t x28 = 151676513030450LL;
	uint64_t t4 = 5329782976586075LLU;

	t4 = ((x25+x26)*(x27/x28));

	if (t4 != 7844361LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x33 = 1;
	static int64_t x34 = 566LL;
	uint8_t x36 = UINT8_MAX;
	int64_t t5 = -37LL;

	t5 = ((x33+x34)*(x35/x36));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = 2U;
	volatile int8_t x46 = -1;
	uint8_t x47 = 23U;
	int16_t x48 = INT16_MAX;

	t6 = ((x45+x46)*(x47/x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MAX;
	uint8_t x51 = 2U;
	uint32_t x52 = 1805U;
	volatile int64_t t7 = 1620013707LL;

	t7 = ((x49+x50)*(x51/x52));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x53 = 251970660U;
	uint64_t x54 = UINT64_MAX;
	int64_t x56 = INT64_MIN;
	static volatile uint64_t t8 = 3788LLU;

	t8 = ((x53+x54)*(x55/x56));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x59 = 6986LLU;
	int64_t x60 = INT64_MIN;
	volatile uint64_t t9 = 16053094168LLU;

	t9 = ((x57+x58)*(x59/x60));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x62 = 1675U;
	uint8_t x63 = UINT8_MAX;
	static int32_t x64 = INT32_MIN;
	int32_t t10 = -42;

	t10 = ((x61+x62)*(x63/x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = 1778;
	int16_t x66 = INT16_MIN;
	int64_t x67 = -1LL;
	volatile int64_t t11 = 2359083377LL;

	t11 = ((x65+x66)*(x67/x68));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 9U;
	int8_t x71 = INT8_MAX;
	int64_t t12 = -7666LL;

	t12 = ((x69+x70)*(x71/x72));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x74 = -738LL;
	int32_t x75 = 2;
	int32_t x76 = INT32_MIN;
	volatile int64_t t13 = 31091737446331LL;

	t13 = ((x73+x74)*(x75/x76));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = -4;
	int32_t x78 = INT32_MAX;
	uint64_t x79 = 14502032317346LLU;
	int32_t x80 = INT32_MAX;

	t14 = ((x77+x78)*(x79/x80));

	if (t14 != 14501957041179LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = -226378682663090339LL;

	t15 = ((x81+x82)*(x83/x84));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = -524;
	int16_t x90 = -1;
	volatile uint64_t x91 = 158443203562211LLU;
	int16_t x92 = 302;
	volatile uint64_t t16 = 177LLU;

	t16 = ((x89+x90)*(x91/x92));

	if (t16 != 18446468634365610841LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x94 = -1;
	volatile uint8_t x95 = 0U;
	int32_t x96 = -1;
	volatile int32_t t17 = -6;

	t17 = ((x93+x94)*(x95/x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x97 = INT16_MAX;
	static uint8_t x98 = 0U;
	int64_t x99 = 176696784980LL;
	int8_t x100 = INT8_MIN;
	int64_t t18 = -711124LL;

	t18 = ((x97+x98)*(x99/x100));

	if (t18 != -45232996489744LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x101 = 2;
	int32_t x102 = INT32_MIN;
	volatile uint64_t x104 = 1608729682LLU;
	static uint64_t t19 = 1097714803914LLU;

	t19 = ((x101+x102)*(x103/x104));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x105 = -1LL;
	volatile int64_t x107 = -29044910LL;
	static int8_t x108 = -50;
	volatile int64_t t20 = -28525819732LL;

	t20 = ((x105+x106)*(x107/x108));

	if (t20 != -1247468956736802LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x110 = INT64_MIN;
	static int64_t x111 = 3LL;
	uint32_t x112 = 54785U;
	volatile int64_t t21 = -54219617934LL;

	t21 = ((x109+x110)*(x111/x112));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x113 = 17003901086830182LLU;
	static int16_t x114 = INT16_MAX;
	uint16_t x115 = 12U;
	int8_t x116 = -6;
	uint64_t t22 = 6478LLU;

	t22 = ((x113+x114)*(x115/x116));

	if (t22 != 18412736271535825718LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = 8120;
	uint16_t x119 = 5U;
	int64_t x120 = INT64_MIN;

	t23 = ((x117+x118)*(x119/x120));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x129 = INT32_MIN;
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = 0;
	int32_t x132 = INT32_MIN;
	volatile int32_t t24 = -1;

	t24 = ((x129+x130)*(x131/x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x137 = 1410010;
	uint16_t x140 = UINT16_MAX;
	uint64_t t25 = 2245638988821LLU;

	t25 = ((x137+x138)*(x139/x140));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x145 = INT8_MIN;
	int64_t x147 = -1LL;
	int16_t x148 = -1;
	int64_t t26 = 1LL;

	t26 = ((x145+x146)*(x147/x148));

	if (t26 != 730086163LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x154 = 29580U;
	uint16_t x155 = 0U;
	int16_t x156 = 2;
	uint64_t t27 = 2878411825125761954LLU;

	t27 = ((x153+x154)*(x155/x156));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x157 = INT8_MIN;
	volatile uint64_t x158 = UINT64_MAX;
	static uint16_t x159 = 467U;
	uint64_t t28 = 40819674319221LLU;

	t28 = ((x157+x158)*(x159/x160));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x162 = 5539U;
	int64_t x163 = -215LL;
	int16_t x164 = -1;

	t29 = ((x161+x162)*(x163/x164));

	if (t29 != 1121225LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x165 = UINT16_MAX;
	int16_t x166 = -1;
	int64_t x167 = -306109551959286LL;
	int64_t x168 = INT64_MIN;
	int64_t t30 = -1041912328730729LL;

	t30 = ((x165+x166)*(x167/x168));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x169 = 0U;
	int32_t x171 = 54;
	uint8_t x172 = 126U;
	static volatile int32_t t31 = -336;

	t31 = ((x169+x170)*(x171/x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x173 = INT16_MAX;
	int32_t x175 = 342291753;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t32 = -62208635;

	t32 = ((x173+x174)*(x175/x176));

	if (t32 != -5223) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = 0;
	uint64_t x178 = 14830LLU;
	int8_t x179 = INT8_MAX;
	int32_t x180 = 1;
	uint64_t t33 = 787LLU;

	t33 = ((x177+x178)*(x179/x180));

	if (t33 != 1883410LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x182 = 57U;
	uint16_t x183 = 6404U;
	int8_t x184 = INT8_MIN;
	static uint32_t t34 = 47658U;

	t34 = ((x181+x182)*(x183/x184));

	if (t34 != 4294964496U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x189 = 393U;
	static int64_t x190 = -1LL;
	volatile int64_t x192 = 1604720826594360LL;
	static volatile int64_t t35 = -73568LL;

	t35 = ((x189+x190)*(x191/x192));

	if (t35 != -2252824LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x193 = 71U;
	volatile int8_t x194 = 3;

	t36 = ((x193+x194)*(x195/x196));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x201 = UINT32_MAX;
	int32_t x202 = -312;
	static volatile int16_t x203 = -1;
	int64_t x204 = -1LL;
	int64_t t37 = -59509989684052LL;

	t37 = ((x201+x202)*(x203/x204));

	if (t37 != 4294966983LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x205 = UINT64_MAX;
	int32_t x206 = 1995108;
	static volatile uint32_t x208 = 14U;

	t38 = ((x205+x206)*(x207/x208));

	if (t38 != 612065664931446LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x211 = 1990661290LLU;
	static uint64_t t39 = 20862565LLU;

	t39 = ((x209+x210)*(x211/x212));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = -1;
	volatile uint16_t x214 = 11173U;
	int16_t x215 = 12481;
	int8_t x216 = -1;
	int32_t t40 = -270;

	t40 = ((x213+x214)*(x215/x216));

	if (t40 != -139437732) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x217 = INT32_MAX;
	volatile uint64_t x218 = 7240842606506378641LLU;
	static uint32_t x219 = 7403052U;
	static int32_t x220 = -1;
	uint64_t t41 = 2357702927LLU;

	t41 = ((x217+x218)*(x219/x220));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x221 = INT32_MIN;
	static volatile int8_t x222 = INT8_MAX;
	uint32_t x223 = UINT32_MAX;
	volatile int32_t x224 = -621;
	uint32_t t42 = 1U;

	t42 = ((x221+x222)*(x223/x224));

	if (t42 != 2147483775U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = -191;
	int64_t x226 = 74406991910LL;
	uint16_t x227 = 4U;
	static uint64_t x228 = UINT64_MAX;
	volatile uint64_t t43 = 92802344298024LLU;

	t43 = ((x225+x226)*(x227/x228));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = -981;
	uint16_t x230 = 0U;
	int64_t x231 = -1LL;
	int16_t x232 = INT16_MIN;
	int64_t t44 = 402769841LL;

	t44 = ((x229+x230)*(x231/x232));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MAX;
	int64_t x244 = INT64_MAX;
	int64_t t45 = 37LL;

	t45 = ((x241+x242)*(x243/x244));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x245 = -1;
	uint8_t x246 = 0U;
	static int8_t x247 = 2;
	static int16_t x248 = INT16_MAX;
	int32_t t46 = 3;

	t46 = ((x245+x246)*(x247/x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x249 = -1;
	static int16_t x250 = INT16_MIN;
	volatile uint64_t x251 = 81870564LLU;
	static uint64_t x252 = UINT64_MAX;
	static volatile uint64_t t47 = 9LLU;

	t47 = ((x249+x250)*(x251/x252));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x253 = 8869705LL;
	static int32_t x254 = INT32_MIN;
	static uint16_t x255 = 729U;
	int32_t x256 = INT32_MAX;
	int64_t t48 = 2518875784898165LL;

	t48 = ((x253+x254)*(x255/x256));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x257 = UINT64_MAX;
	int8_t x258 = INT8_MIN;
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = INT64_MIN;
	volatile uint64_t t49 = 1942570LLU;

	t49 = ((x257+x258)*(x259/x260));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = 973562;
	static volatile int32_t x270 = -1;
	int32_t x271 = INT32_MAX;
	int64_t x272 = INT64_MIN;

	t50 = ((x269+x270)*(x271/x272));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x273 = INT32_MIN;
	uint16_t x274 = 50U;
	static uint32_t x275 = 15U;
	int64_t x276 = -1LL;
	static volatile int64_t t51 = -33015617LL;

	t51 = ((x273+x274)*(x275/x276));

	if (t51 != 32212253970LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x277 = 1U;
	int64_t x278 = INT64_MIN;

	t52 = ((x277+x278)*(x279/x280));

	if (t52 != 5862LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x282 = 421853U;
	uint16_t x283 = 1U;
	int8_t x284 = INT8_MIN;
	volatile uint32_t t53 = 41U;

	t53 = ((x281+x282)*(x283/x284));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x287 = UINT32_MAX;
	static int64_t x288 = -54003785481611LL;
	int64_t t54 = 118032606280961038LL;

	t54 = ((x285+x286)*(x287/x288));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x289 = 11505218696904LLU;
	uint64_t x290 = 30075LLU;
	volatile int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MAX;

	t55 = ((x289+x290)*(x291/x292));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x293 = -1;
	uint16_t x294 = 9878U;
	int8_t x295 = INT8_MIN;
	int16_t x296 = -30;
	static volatile int32_t t56 = 23836744;

	t56 = ((x293+x294)*(x295/x296));

	if (t56 != 39508) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x297 = 8593196364353LLU;
	int32_t x298 = 142;
	uint8_t x299 = UINT8_MAX;
	static int16_t x300 = -3;
	uint64_t t57 = 44857308932834LLU;

	t57 = ((x297+x298)*(x299/x300));

	if (t57 != 18446013652018569541LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x303 = -4;
	static int32_t x304 = INT32_MIN;

	t58 = ((x301+x302)*(x303/x304));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x305 = 1810142795079LLU;
	uint16_t x306 = UINT16_MAX;
	static volatile int8_t x307 = -1;
	uint64_t x308 = 25805848719226LLU;
	uint64_t t59 = 28333613LLU;

	t59 = ((x305+x306)*(x307/x308));

	if (t59 != 1293940800766984392LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x309 = 109U;
	uint64_t x310 = UINT64_MAX;
	int32_t x311 = INT32_MIN;
	int64_t x312 = -352275LL;
	static uint64_t t60 = 113210907LLU;

	t60 = ((x309+x310)*(x311/x312));

	if (t60 != 658368LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x314 = 27938U;
	volatile uint64_t x315 = 158406813574110LLU;
	uint8_t x316 = 3U;

	t61 = ((x313+x314)*(x315/x316));

	if (t61 != 1475189852544495060LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x317 = UINT64_MAX;
	uint32_t x320 = 108037U;
	volatile uint64_t t62 = 18748155638363797LLU;

	t62 = ((x317+x318)*(x319/x320));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x322 = 108665248124797LLU;
	int32_t x324 = -1;
	volatile uint64_t t63 = 7308007LLU;

	t63 = ((x321+x322)*(x323/x324));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x325 = 693644339LLU;
	static int16_t x326 = -390;
	volatile int16_t x327 = INT16_MIN;
	uint8_t x328 = 5U;
	static uint64_t t64 = 8103750993LLU;

	t64 = ((x325+x326)*(x327/x328));

	if (t64 != 18446739528260753819LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x329 = INT8_MAX;
	volatile uint16_t x330 = 6U;
	static uint32_t x331 = UINT32_MAX;
	int64_t x332 = -1LL;
	static int64_t t65 = -81314036181074LL;

	t65 = ((x329+x330)*(x331/x332));

	if (t65 != -571230650235LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x335 = INT64_MIN;
	int16_t x336 = -14616;
	volatile int64_t t66 = -414LL;

	t66 = ((x333+x334)*(x335/x336));

	if (t66 != 71939272865451852LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x337 = 61597191LL;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -456;
	volatile int64_t x340 = INT64_MIN;
	volatile int64_t t67 = -5LL;

	t67 = ((x337+x338)*(x339/x340));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x341 = UINT64_MAX;
	int32_t x343 = -1;
	uint8_t x344 = 6U;
	uint64_t t68 = 187842402594115767LLU;

	t68 = ((x341+x342)*(x343/x344));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x345 = -1LL;
	volatile uint8_t x346 = 10U;
	int8_t x347 = 2;
	static volatile int64_t x348 = INT64_MAX;
	int64_t t69 = 4303511261069016LL;

	t69 = ((x345+x346)*(x347/x348));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x349 = 22152207U;
	volatile int32_t x351 = INT32_MAX;

	t70 = ((x349+x350)*(x351/x352));

	if (t70 != 4232316174U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x353 = 3U;
	uint8_t x354 = 12U;
	volatile uint8_t x356 = 39U;
	static volatile int32_t t71 = -2782;

	t71 = ((x353+x354)*(x355/x356));

	if (t71 != -45) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x357 = 1;
	int8_t x359 = 0;
	int8_t x360 = INT8_MAX;
	int32_t t72 = 0;

	t72 = ((x357+x358)*(x359/x360));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x361 = 50670836U;
	static volatile int64_t x362 = INT64_MIN;
	volatile uint8_t x363 = 59U;
	int64_t t73 = 668LL;

	t73 = ((x361+x362)*(x363/x364));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x365 = -3LL;
	uint64_t x366 = 15356LLU;
	int64_t x367 = INT64_MIN;
	int64_t x368 = -129712988597LL;

	t74 = ((x365+x366)*(x367/x368));

	if (t74 != 1091690448706LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x377 = -1;
	uint64_t x378 = 219LLU;
	static int8_t x379 = 29;
	static int32_t x380 = INT32_MAX;
	static uint64_t t75 = 3735997994LLU;

	t75 = ((x377+x378)*(x379/x380));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x381 = 4265;
	int16_t x382 = INT16_MAX;
	static int8_t x383 = 3;
	volatile int64_t x384 = INT64_MIN;
	volatile int64_t t76 = 49LL;

	t76 = ((x381+x382)*(x383/x384));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = 31984874747084LLU;
	static int8_t x391 = 1;
	uint64_t t77 = 3960868LLU;

	t77 = ((x389+x390)*(x391/x392));

	if (t77 != 31982727263436LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x393 = 107687126102LL;
	int8_t x394 = INT8_MAX;
	uint32_t x395 = 48890055U;
	volatile int32_t x396 = INT32_MIN;
	volatile int64_t t78 = 12186270591091088LL;

	t78 = ((x393+x394)*(x395/x396));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x397 = 28374402LL;
	int8_t x398 = INT8_MIN;
	int32_t x399 = INT32_MAX;
	uint8_t x400 = 68U;
	int64_t t79 = 475032LL;

	t79 = ((x397+x398)*(x399/x400));

	if (t79 != 896077760829634LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x401 = UINT8_MAX;
	static int8_t x402 = -1;
	int16_t x403 = 10;
	int16_t x404 = -1;
	int32_t t80 = 888464;

	t80 = ((x401+x402)*(x403/x404));

	if (t80 != -2540) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x405 = 265033730561903454LLU;
	uint32_t x406 = 48U;
	static volatile uint64_t x407 = 397LLU;
	uint64_t t81 = 249391034890938LLU;

	t81 = ((x405+x406)*(x407/x408));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x409 = 16735935LLU;
	int32_t x411 = 39136;
	uint8_t x412 = 5U;
	volatile uint64_t t82 = 52703962926LLU;

	t82 = ((x409+x410)*(x411/x412));

	if (t82 != 130992155418LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x417 = INT64_MIN;
	int32_t x419 = INT32_MIN;
	volatile int32_t x420 = INT32_MIN;
	int64_t t83 = 0LL;

	t83 = ((x417+x418)*(x419/x420));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x421 = 1U;
	int32_t x422 = INT32_MIN;
	static volatile uint16_t x423 = 158U;
	uint32_t t84 = 30U;

	t84 = ((x421+x422)*(x423/x424));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x430 = -12853961321646LL;
	volatile int32_t x431 = INT32_MAX;
	static int16_t x432 = INT16_MIN;
	int64_t t85 = -3592819979157047642LL;

	t85 = ((x429+x430)*(x431/x432));

	if (t85 != 842384355214136145LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x434 = 81821;
	int16_t x435 = INT16_MIN;
	int8_t x436 = INT8_MIN;
	int32_t t86 = -518394793;

	t86 = ((x433+x434)*(x435/x436));

	if (t86 != 12557568) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x438 = 1;
	int16_t x439 = -1;
	volatile int64_t x440 = -1073868472LL;
	int64_t t87 = 7076107013LL;

	t87 = ((x437+x438)*(x439/x440));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x441 = -1;
	int32_t x442 = -231644;
	int8_t x443 = 1;
	static int16_t x444 = INT16_MAX;
	volatile int32_t t88 = -14441;

	t88 = ((x441+x442)*(x443/x444));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x446 = UINT64_MAX;
	volatile uint64_t t89 = 138651418316577560LLU;

	t89 = ((x445+x446)*(x447/x448));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x450 = UINT64_MAX;
	int64_t x451 = 0LL;
	static int8_t x452 = -3;
	volatile uint64_t t90 = 7479895497296LLU;

	t90 = ((x449+x450)*(x451/x452));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x457 = 27932U;
	static uint64_t x458 = 222919529710LLU;
	volatile int16_t x460 = 1;
	uint64_t t91 = 37256669984LLU;

	t91 = ((x457+x458)*(x459/x460));

	if (t91 != 18446743850789993974LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x463 = INT16_MAX;
	int64_t x464 = 60414781644LL;

	t92 = ((x461+x462)*(x463/x464));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x465 = UINT8_MAX;
	volatile uint16_t x466 = UINT16_MAX;
	uint32_t x467 = 496U;
	int16_t x468 = INT16_MIN;
	uint32_t t93 = 151237907U;

	t93 = ((x465+x466)*(x467/x468));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x473 = UINT8_MAX;
	volatile int16_t x474 = 246;
	static int8_t x475 = -1;
	uint8_t x476 = UINT8_MAX;
	static int32_t t94 = -524708435;

	t94 = ((x473+x474)*(x475/x476));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x477 = -1;
	int32_t x478 = -225;
	uint8_t x480 = 53U;

	t95 = ((x477+x478)*(x479/x480));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x485 = INT64_MIN;
	uint32_t x486 = 525010072U;
	int32_t x488 = -1;
	volatile int64_t t96 = -40LL;

	t96 = ((x485+x486)*(x487/x488));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x490 = -459090063;
	uint32_t x491 = UINT32_MAX;
	volatile int64_t x492 = 8691LL;
	volatile int64_t t97 = 1024766711830069004LL;

	t97 = ((x489+x490)*(x491/x492));

	if (t97 != -226875396097665LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x493 = 1U;
	int32_t x495 = INT32_MAX;
	int32_t t98 = 0;

	t98 = ((x493+x494)*(x495/x496));

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x497 = -1;
	volatile int8_t x498 = -5;
	static int16_t x499 = -28;
	volatile int8_t x500 = -9;

	t99 = ((x497+x498)*(x499/x500));

	if (t99 != -18) { NG(); } else { ; }
	
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

