#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
int8_t x5 = 1;
int8_t x9 = -1;
volatile int64_t t2 = -99LL;
int8_t x35 = -1;
int64_t t6 = 179487378418171LL;
static volatile uint8_t x43 = UINT8_MAX;
int16_t x49 = INT16_MAX;
volatile int64_t t12 = -2LL;
static uint8_t x76 = 124U;
int64_t x91 = -1LL;
int64_t x93 = INT64_MAX;
int16_t x95 = -797;
static uint16_t x103 = 65U;
volatile int32_t x118 = INT32_MAX;
volatile int32_t t24 = 83;
volatile int16_t x143 = -1;
int32_t t26 = 841166;
int64_t x151 = -240155LL;
static int64_t t27 = 210454182138349LL;
uint8_t x154 = UINT8_MAX;
static volatile int32_t t29 = 65322;
uint32_t t32 = 81U;
uint32_t x181 = UINT32_MAX;
volatile uint32_t x188 = 2774U;
int8_t x214 = 29;
int8_t x217 = INT8_MIN;
volatile int32_t t43 = -26;
uint64_t x239 = 1LLU;
volatile uint16_t x243 = UINT16_MAX;
uint32_t x244 = 969833U;
static int8_t x249 = INT8_MAX;
int64_t x251 = 9531547LL;
int32_t x253 = -1;
int64_t x256 = -105857385977172889LL;
uint8_t x262 = UINT8_MAX;
int32_t x266 = INT32_MAX;
int64_t x268 = -48404186LL;
volatile uint64_t t51 = 31827291951323LLU;
int32_t x269 = INT32_MIN;
static int32_t x275 = INT32_MIN;
volatile int32_t t53 = -8;
volatile uint32_t t55 = 85814694U;
uint16_t x286 = UINT16_MAX;
static int32_t x288 = INT32_MAX;
static uint64_t x295 = UINT64_MAX;
uint32_t x297 = 518U;
static uint32_t t58 = 260629894U;
int32_t t59 = 0;
int64_t x336 = 107825384618431LL;
static uint16_t x337 = 7U;
volatile uint64_t t63 = 0LLU;
volatile uint64_t t64 = 2082013699220LLU;
int32_t x357 = -1;
int32_t t66 = 8;
int64_t x366 = -1LL;
int16_t x367 = INT16_MIN;
volatile uint32_t x372 = 111U;
volatile uint32_t x379 = UINT32_MAX;
int16_t x380 = 1105;
volatile int64_t t72 = -1439570853LL;
static volatile int16_t x391 = -412;
uint32_t x392 = UINT32_MAX;
int16_t x393 = -6297;
int32_t x402 = INT32_MIN;
volatile uint16_t x414 = UINT16_MAX;
static int64_t x423 = INT64_MAX;
int32_t x438 = -1;
volatile uint64_t t82 = 34223534188950LLU;
static uint16_t x454 = 9454U;
int64_t x462 = -333294214LL;
volatile int8_t x466 = INT8_MAX;
uint32_t x470 = UINT32_MAX;
int8_t x483 = INT8_MIN;
volatile int16_t x484 = 3523;
uint8_t x493 = 18U;
volatile int64_t t90 = 1150771964220766351LL;
int8_t x497 = INT8_MIN;
uint32_t x514 = 295U;
volatile int64_t x530 = INT64_MIN;
volatile int16_t x539 = -45;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile int16_t x2 = 156;
	uint16_t x3 = 14771U;
	uint32_t t0 = 1832252793U;

	t0 = ((x1/x2)/(x3%x4));

	if (t0 != 289838U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MAX;
	int16_t x8 = -3103;
	int64_t t1 = 28188LL;

	t1 = ((x5/x6)/(x7%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = -17904;
	static int16_t x11 = -23;
	int64_t x12 = INT64_MIN;

	t2 = ((x9/x10)/(x11%x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int32_t x14 = INT32_MIN;
	static int8_t x15 = -1;
	uint64_t x16 = 3046873LLU;
	static uint64_t t3 = 1469644352LLU;

	t3 = ((x13/x14)/(x15%x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	uint64_t x18 = UINT64_MAX;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = INT64_MIN;
	static volatile uint64_t t4 = 36799064LLU;

	t4 = ((x17/x18)/(x19%x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -2;
	int8_t x26 = INT8_MIN;
	volatile int8_t x27 = 32;
	int32_t x28 = INT32_MIN;
	static int32_t t5 = 73943;

	t5 = ((x25/x26)/(x27%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MAX;
	int64_t x34 = INT64_MIN;
	uint8_t x36 = 13U;

	t6 = ((x33/x34)/(x35%x36));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 19;
	int64_t x38 = 875LL;
	int32_t x39 = INT32_MIN;
	static int16_t x40 = -13402;
	int64_t t7 = -722086LL;

	t7 = ((x37/x38)/(x39%x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -5468669LL;
	static int8_t x42 = INT8_MIN;
	uint32_t x44 = UINT32_MAX;
	volatile int64_t t8 = 31132891946907LL;

	t8 = ((x41/x42)/(x43%x44));

	if (t8 != 167LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	static int64_t x46 = -1LL;
	int16_t x47 = INT16_MIN;
	static uint64_t x48 = 139797990LLU;
	uint64_t t9 = 54LLU;

	t9 = ((x45/x46)/(x47%x48));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x50 = UINT32_MAX;
	int32_t x51 = -1;
	static uint16_t x52 = 3774U;
	uint32_t t10 = 7U;

	t10 = ((x49/x50)/(x51%x52));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = -1;
	int32_t x58 = INT32_MIN;
	volatile int16_t x59 = -1;
	int64_t x60 = 13808LL;
	volatile int64_t t11 = -79613452LL;

	t11 = ((x57/x58)/(x59%x60));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = UINT8_MAX;
	uint32_t x62 = UINT32_MAX;
	volatile int8_t x63 = INT8_MAX;
	volatile int64_t x64 = INT64_MAX;

	t12 = ((x61/x62)/(x63%x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = -1;
	int16_t x67 = 46;
	volatile int64_t x68 = INT64_MAX;
	volatile int64_t t13 = -150LL;

	t13 = ((x65/x66)/(x67%x68));

	if (t13 != 712LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MAX;
	volatile uint64_t x74 = 4119021218LLU;
	int32_t x75 = INT32_MIN;
	volatile uint64_t t14 = 672540044921483082LLU;

	t14 = ((x73/x74)/(x75%x76));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x89 = 522882873;
	static int64_t x90 = -220580386712779LL;
	int32_t x92 = 1162;
	static volatile int64_t t15 = -35044053LL;

	t15 = ((x89/x90)/(x91%x92));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x94 = INT16_MIN;
	static volatile int64_t x96 = INT64_MAX;
	static int64_t t16 = -40300767039855377LL;

	t16 = ((x93/x94)/(x95%x96));

	if (t16 != 353168101268LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = -1;
	int8_t x102 = 1;
	uint16_t x104 = 774U;
	int32_t t17 = 60483215;

	t17 = ((x101/x102)/(x103%x104));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x113 = INT64_MIN;
	int8_t x114 = INT8_MIN;
	static int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MAX;
	int64_t t18 = -320LL;

	t18 = ((x113/x114)/(x115%x116));

	if (t18 != -562949953421312LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x117 = 33U;
	static int16_t x119 = INT16_MIN;
	static volatile int64_t x120 = INT64_MAX;
	volatile int64_t t19 = -68422580295120334LL;

	t19 = ((x117/x118)/(x119%x120));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x121 = 433U;
	volatile uint32_t x122 = UINT32_MAX;
	int8_t x123 = INT8_MIN;
	static uint32_t x124 = 897U;
	volatile uint32_t t20 = 39U;

	t20 = ((x121/x122)/(x123%x124));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MIN;
	static volatile uint32_t x127 = 106245U;
	static int64_t x128 = -31579652335LL;
	int64_t t21 = -24602324LL;

	t21 = ((x125/x126)/(x127%x128));

	if (t21 != 678221036641LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MIN;
	static int16_t x131 = INT16_MIN;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t22 = -361211077;

	t22 = ((x129/x130)/(x131%x132));

	if (t22 != -512) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x133 = 3305289U;
	volatile uint8_t x134 = 1U;
	uint64_t x135 = 6702154352480312LLU;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t23 = 32441325882916148LLU;

	t23 = ((x133/x134)/(x135%x136));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x137 = 2U;
	int8_t x138 = INT8_MIN;
	static int8_t x139 = INT8_MAX;
	uint8_t x140 = 6U;

	t24 = ((x137/x138)/(x139%x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x141 = 303U;
	static volatile int16_t x142 = -238;
	volatile int32_t x144 = INT32_MIN;
	uint32_t t25 = 75101650U;

	t25 = ((x141/x142)/(x143%x144));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = INT8_MAX;
	int8_t x146 = -3;
	uint16_t x147 = 18920U;
	volatile uint16_t x148 = 155U;

	t26 = ((x145/x146)/(x147%x148));

	if (t26 != -4) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x149 = 0U;
	int16_t x150 = -1;
	uint32_t x152 = UINT32_MAX;

	t27 = ((x149/x150)/(x151%x152));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x153 = 1951U;
	uint16_t x155 = UINT16_MAX;
	int16_t x156 = 49;
	static int32_t t28 = 999404586;

	t28 = ((x153/x154)/(x155%x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x161 = 37;
	static int32_t x162 = INT32_MAX;
	int16_t x163 = 157;
	int32_t x164 = INT32_MIN;

	t29 = ((x161/x162)/(x163%x164));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = -8;
	static uint64_t x166 = UINT64_MAX;
	static int32_t x167 = -1;
	static int32_t x168 = INT32_MAX;
	volatile uint64_t t30 = 2456006727LLU;

	t30 = ((x165/x166)/(x167%x168));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x169 = 0U;
	int16_t x170 = 1175;
	uint16_t x171 = 63U;
	int32_t x172 = INT32_MIN;
	static volatile int32_t t31 = 12112718;

	t31 = ((x169/x170)/(x171%x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x173 = INT16_MIN;
	int32_t x174 = -69368952;
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = INT16_MIN;

	t32 = ((x173/x174)/(x175%x176));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MAX;
	int64_t x179 = INT64_MIN;
	static int64_t x180 = 15266LL;
	volatile int64_t t33 = -901073973864430375LL;

	t33 = ((x177/x178)/(x179%x180));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x182 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	static volatile int32_t x184 = INT32_MIN;
	volatile uint32_t t34 = 1390U;

	t34 = ((x181/x182)/(x183%x184));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x185 = 88;
	int32_t x186 = 106880588;
	uint8_t x187 = 15U;
	uint32_t t35 = 1U;

	t35 = ((x185/x186)/(x187%x188));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x189 = 14U;
	uint32_t x190 = 2597527U;
	int32_t x191 = -1;
	uint64_t x192 = 768LLU;
	uint64_t t36 = 2269635344434669238LLU;

	t36 = ((x189/x190)/(x191%x192));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x197 = INT64_MIN;
	uint64_t x198 = 1339718451803251583LLU;
	uint8_t x199 = UINT8_MAX;
	static int64_t x200 = 471LL;
	static volatile uint64_t t37 = 6762739336927068LLU;

	t37 = ((x197/x198)/(x199%x200));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x201 = INT64_MAX;
	uint64_t x202 = 492299901265047364LLU;
	uint16_t x203 = 15954U;
	static uint32_t x204 = 802958U;
	volatile uint64_t t38 = 4410652670497LLU;

	t38 = ((x201/x202)/(x203%x204));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x205 = INT16_MIN;
	int32_t x206 = -1;
	uint32_t x207 = UINT32_MAX;
	int64_t x208 = -1435LL;
	int64_t t39 = -10660209421433LL;

	t39 = ((x205/x206)/(x207%x208));

	if (t39 != 40LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = 259;
	uint32_t x211 = 716027U;
	int64_t x212 = INT64_MIN;
	volatile int64_t t40 = -5540839763886LL;

	t40 = ((x209/x210)/(x211%x212));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x213 = 323U;
	int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;
	static int64_t t41 = -27672357LL;

	t41 = ((x213/x214)/(x215%x216));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x218 = -1;
	volatile int8_t x219 = -1;
	int16_t x220 = -2;
	int32_t t42 = 3934984;

	t42 = ((x217/x218)/(x219%x220));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x221 = INT8_MIN;
	volatile uint8_t x222 = 24U;
	int16_t x223 = -2563;
	uint16_t x224 = 75U;

	t43 = ((x221/x222)/(x223%x224));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x225 = INT16_MIN;
	uint8_t x226 = UINT8_MAX;
	volatile int8_t x227 = -7;
	volatile int64_t x228 = 20576044995766LL;
	int64_t t44 = 31349098LL;

	t44 = ((x225/x226)/(x227%x228));

	if (t44 != 18LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = INT16_MIN;
	volatile uint8_t x238 = 11U;
	uint8_t x240 = 22U;
	uint64_t t45 = 2263646329736750991LLU;

	t45 = ((x237/x238)/(x239%x240));

	if (t45 != 18446744073709548638LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x241 = -1;
	uint64_t x242 = 1062893629000LLU;
	uint64_t t46 = 1LLU;

	t46 = ((x241/x242)/(x243%x244));

	if (t46 != 264LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = -1;
	int16_t x246 = -8063;
	uint32_t x247 = UINT32_MAX;
	int32_t x248 = 908201326;
	uint32_t t47 = 17049540U;

	t47 = ((x245/x246)/(x247%x248));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x250 = INT64_MIN;
	uint64_t x252 = UINT64_MAX;
	uint64_t t48 = 24872657315LLU;

	t48 = ((x249/x250)/(x251%x252));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x254 = UINT32_MAX;
	volatile int64_t x255 = -1LL;
	volatile int64_t t49 = -2602LL;

	t49 = ((x253/x254)/(x255%x256));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x261 = 23;
	static volatile int16_t x263 = 1816;
	uint16_t x264 = UINT16_MAX;
	int32_t t50 = 1654;

	t50 = ((x261/x262)/(x263%x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x265 = INT32_MAX;
	uint64_t x267 = 393103401838423397LLU;

	t51 = ((x265/x266)/(x267%x268));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x270 = 7752411102890100LLU;
	static int8_t x271 = -2;
	volatile int64_t x272 = INT64_MIN;
	uint64_t t52 = 44174666075578LLU;

	t52 = ((x269/x270)/(x271%x272));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x273 = 182U;
	volatile uint16_t x274 = 13486U;
	uint16_t x276 = UINT16_MAX;

	t53 = ((x273/x274)/(x275%x276));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x277 = 0;
	uint8_t x278 = 109U;
	int8_t x279 = INT8_MAX;
	uint8_t x280 = 123U;
	volatile int32_t t54 = 102749044;

	t54 = ((x277/x278)/(x279%x280));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x281 = INT8_MIN;
	uint32_t x282 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	int32_t x284 = -23721643;

	t55 = ((x281/x282)/(x283%x284));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x285 = -3576;
	int64_t x287 = INT64_MIN;
	int64_t t56 = -13647403724416743LL;

	t56 = ((x285/x286)/(x287%x288));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x293 = 147U;
	uint8_t x294 = 3U;
	static int8_t x296 = INT8_MIN;
	uint64_t t57 = 2101322377LLU;

	t57 = ((x293/x294)/(x295%x296));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x298 = 28180952;
	int8_t x299 = INT8_MIN;
	static uint32_t x300 = 158U;

	t58 = ((x297/x298)/(x299%x300));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x301 = 0;
	int8_t x302 = -1;
	int32_t x303 = INT32_MAX;
	int32_t x304 = 19;

	t59 = ((x301/x302)/(x303%x304));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x321 = -1;
	int64_t x322 = INT64_MAX;
	int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MAX;
	volatile int64_t t60 = -33023075595LL;

	t60 = ((x321/x322)/(x323%x324));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x329 = 29U;
	uint8_t x330 = 1U;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MAX;
	static int32_t t61 = -213746908;

	t61 = ((x329/x330)/(x331%x332));

	if (t61 != -29) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x333 = INT8_MAX;
	volatile int16_t x334 = INT16_MAX;
	int16_t x335 = INT16_MIN;
	volatile int64_t t62 = -834LL;

	t62 = ((x333/x334)/(x335%x336));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x338 = UINT32_MAX;
	uint64_t x339 = 800261716LLU;
	int32_t x340 = -1;

	t63 = ((x337/x338)/(x339%x340));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x349 = 0U;
	uint32_t x350 = UINT32_MAX;
	volatile uint8_t x351 = UINT8_MAX;
	uint64_t x352 = UINT64_MAX;

	t64 = ((x349/x350)/(x351%x352));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x353 = INT16_MAX;
	int64_t x354 = -501827LL;
	int16_t x355 = -1;
	int16_t x356 = -221;
	volatile int64_t t65 = 4783LL;

	t65 = ((x353/x354)/(x355%x356));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x358 = -3;
	uint16_t x359 = UINT16_MAX;
	int32_t x360 = -944754024;

	t66 = ((x357/x358)/(x359%x360));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x361 = -1LL;
	static int64_t x362 = -1LL;
	int8_t x363 = INT8_MIN;
	volatile int32_t x364 = -15683511;
	volatile int64_t t67 = -4068179884LL;

	t67 = ((x361/x362)/(x363%x364));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x365 = UINT32_MAX;
	uint64_t x368 = 25LLU;
	volatile uint64_t t68 = 3421060LLU;

	t68 = ((x365/x366)/(x367%x368));

	if (t68 != 802032350844112361LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x369 = 1660U;
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = -1;
	volatile uint32_t t69 = 5352764U;

	t69 = ((x369/x370)/(x371%x372));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x373 = -38;
	static int64_t x374 = -230LL;
	volatile int16_t x375 = -1;
	uint8_t x376 = 4U;
	int64_t t70 = -265656906212944LL;

	t70 = ((x373/x374)/(x375%x376));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x377 = 226643696;
	volatile int8_t x378 = INT8_MAX;
	uint32_t t71 = 27603U;

	t71 = ((x377/x378)/(x379%x380));

	if (t71 != 6998U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x385 = -1;
	int16_t x386 = 2;
	int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MAX;

	t72 = ((x385/x386)/(x387%x388));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x389 = -4901LL;
	uint16_t x390 = 24571U;
	static volatile int64_t t73 = -8002958070LL;

	t73 = ((x389/x390)/(x391%x392));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x394 = 154598;
	int32_t x395 = -23636794;
	static int8_t x396 = INT8_MIN;
	static volatile int32_t t74 = -1889;

	t74 = ((x393/x394)/(x395%x396));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x401 = INT32_MIN;
	uint16_t x403 = UINT16_MAX;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t75 = -634;

	t75 = ((x401/x402)/(x403%x404));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x409 = 2103079LLU;
	uint8_t x410 = 1U;
	int8_t x411 = INT8_MIN;
	int16_t x412 = 121;
	uint64_t t76 = 3040061942362LLU;

	t76 = ((x409/x410)/(x411%x412));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x413 = INT8_MIN;
	int8_t x415 = 1;
	int64_t x416 = INT64_MAX;
	int64_t t77 = -32386592LL;

	t77 = ((x413/x414)/(x415%x416));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x417 = 0U;
	int16_t x418 = INT16_MAX;
	static volatile uint16_t x419 = 1U;
	uint16_t x420 = 828U;
	int32_t t78 = 40144;

	t78 = ((x417/x418)/(x419%x420));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x421 = 107U;
	int32_t x422 = -1;
	volatile int16_t x424 = INT16_MAX;
	int64_t t79 = 797635027711417LL;

	t79 = ((x421/x422)/(x423%x424));

	if (t79 != -15LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x425 = UINT64_MAX;
	static uint32_t x426 = UINT32_MAX;
	static uint64_t x427 = 4732812766375330769LLU;
	int64_t x428 = INT64_MIN;
	uint64_t t80 = 3158172069277LLU;

	t80 = ((x425/x426)/(x427%x428));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x437 = -1;
	uint32_t x439 = 14566U;
	uint32_t x440 = 81U;
	volatile uint32_t t81 = 1227063451U;

	t81 = ((x437/x438)/(x439%x440));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x445 = INT8_MAX;
	volatile int64_t x446 = 59760196993LL;
	volatile uint32_t x447 = UINT32_MAX;
	uint64_t x448 = UINT64_MAX;

	t82 = ((x445/x446)/(x447%x448));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x453 = -1LL;
	uint8_t x455 = UINT8_MAX;
	int64_t x456 = INT64_MIN;
	static int64_t t83 = 581827803LL;

	t83 = ((x453/x454)/(x455%x456));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x461 = -1LL;
	volatile int8_t x463 = -1;
	int16_t x464 = 1763;
	int64_t t84 = -55108019LL;

	t84 = ((x461/x462)/(x463%x464));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x465 = 215740062141821LL;
	volatile int64_t x467 = -181LL;
	volatile uint8_t x468 = 45U;
	volatile int64_t t85 = 1795317LL;

	t85 = ((x465/x466)/(x467%x468));

	if (t85 != -1698740646785LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x469 = UINT64_MAX;
	int8_t x471 = -61;
	volatile int32_t x472 = 88066;
	volatile uint64_t t86 = 93458LLU;

	t86 = ((x469/x470)/(x471%x472));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x481 = -3988991LL;
	static uint16_t x482 = 541U;
	volatile int64_t t87 = -227LL;

	t87 = ((x481/x482)/(x483%x484));

	if (t87 != 57LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x485 = INT64_MIN;
	static int64_t x486 = 24815LL;
	volatile int8_t x487 = -1;
	uint16_t x488 = UINT16_MAX;
	volatile int64_t t88 = -547890507919465LL;

	t88 = ((x485/x486)/(x487%x488));

	if (t88 != 371685353087035LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x489 = INT64_MAX;
	static int64_t x490 = INT64_MAX;
	static volatile int64_t x491 = 2023082864LL;
	static uint16_t x492 = 3021U;
	static volatile int64_t t89 = -59043179LL;

	t89 = ((x489/x490)/(x491%x492));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x494 = INT32_MIN;
	int16_t x495 = -1;
	static int64_t x496 = -458870LL;

	t90 = ((x493/x494)/(x495%x496));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x498 = 1U;
	int8_t x499 = INT8_MIN;
	int32_t x500 = INT32_MIN;
	int32_t t91 = 31;

	t91 = ((x497/x498)/(x499%x500));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x509 = -1;
	int64_t x510 = -1LL;
	static int8_t x511 = INT8_MIN;
	int64_t x512 = 160835541928183700LL;
	volatile int64_t t92 = 3792628LL;

	t92 = ((x509/x510)/(x511%x512));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x513 = 8U;
	static uint16_t x515 = UINT16_MAX;
	uint32_t x516 = 2U;
	uint32_t t93 = 45859U;

	t93 = ((x513/x514)/(x515%x516));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x517 = INT16_MIN;
	uint64_t x518 = 1972610955LLU;
	int64_t x519 = 662916309201LL;
	static int64_t x520 = INT64_MAX;
	static uint64_t t94 = 54145278619LLU;

	t94 = ((x517/x518)/(x519%x520));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x521 = -60;
	static uint16_t x522 = 8U;
	int64_t x523 = -1LL;
	int32_t x524 = 19;
	int64_t t95 = 237172LL;

	t95 = ((x521/x522)/(x523%x524));

	if (t95 != 7LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x529 = 114U;
	volatile uint64_t x531 = 978035865183354LLU;
	uint64_t x532 = 21095LLU;
	uint64_t t96 = 5596501052LLU;

	t96 = ((x529/x530)/(x531%x532));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x537 = INT8_MIN;
	static uint16_t x538 = UINT16_MAX;
	volatile uint64_t x540 = UINT64_MAX;
	uint64_t t97 = 7068LLU;

	t97 = ((x537/x538)/(x539%x540));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x541 = INT8_MAX;
	int8_t x542 = INT8_MIN;
	volatile int8_t x543 = -1;
	int32_t x544 = INT32_MAX;
	int32_t t98 = 1983;

	t98 = ((x541/x542)/(x543%x544));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x545 = -1;
	volatile uint32_t x546 = 2U;
	static uint64_t x547 = 648LLU;
	static uint64_t x548 = 1322850098305LLU;
	volatile uint64_t t99 = 531802LLU;

	t99 = ((x545/x546)/(x547%x548));

	if (t99 != 3314017LLU) { NG(); } else { ; }
	
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

