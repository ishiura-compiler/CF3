#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x27 = 12;
int32_t x29 = -25;
int64_t x30 = -1LL;
int8_t x56 = INT8_MIN;
volatile uint32_t t3 = 2U;
int32_t x57 = INT32_MAX;
static volatile uint32_t x64 = UINT32_MAX;
uint64_t x70 = 494681909915LLU;
int32_t x71 = -423989;
uint64_t x76 = 499580242167049556LLU;
static uint64_t x79 = UINT64_MAX;
static volatile int32_t t10 = 322618461;
int32_t x92 = -1;
uint16_t x116 = UINT16_MAX;
volatile int32_t t14 = -2083742;
int16_t x119 = INT16_MIN;
int16_t x121 = INT16_MAX;
uint32_t x123 = 2455645U;
uint8_t x131 = 0U;
int32_t x144 = INT32_MIN;
uint64_t t20 = 46234LLU;
int8_t x150 = INT8_MIN;
uint8_t x156 = UINT8_MAX;
int64_t x165 = -1LL;
static int64_t x179 = -5LL;
int8_t x200 = INT8_MAX;
static int32_t t32 = -475;
int32_t x229 = -57014;
volatile uint16_t x236 = 1U;
int16_t x267 = INT16_MAX;
uint16_t x268 = 499U;
int32_t x277 = INT32_MAX;
static int64_t x278 = INT64_MIN;
int64_t x279 = -1LL;
static int64_t t42 = INT64_MAX;
int32_t x283 = INT32_MAX;
int8_t x287 = INT8_MAX;
volatile uint64_t t47 = 1266099657LLU;
static int64_t x309 = INT64_MIN;
int32_t x310 = INT32_MIN;
int16_t x311 = INT16_MIN;
uint16_t x315 = 17169U;
int32_t t51 = -2958974;
int8_t x328 = 0;
static uint32_t x329 = 30371914U;
uint64_t x330 = 269863209778LLU;
uint64_t x332 = UINT64_MAX;
int16_t x337 = INT16_MIN;
static int8_t x339 = INT8_MAX;
volatile int32_t t54 = -1;
int64_t x346 = -595041LL;
int8_t x353 = -1;
uint32_t t57 = 0U;
int64_t x357 = -2229284341099640LL;
int8_t x362 = INT8_MAX;
uint32_t t59 = 34U;
int64_t x371 = -1LL;
int8_t x373 = INT8_MIN;
uint32_t t61 = 61564U;
volatile int8_t x384 = -1;
volatile int32_t t62 = -11;
uint64_t x388 = UINT64_MAX;
static int16_t x396 = INT16_MAX;
uint8_t x403 = UINT8_MAX;
static int32_t t66 = 25;
int64_t x412 = -1LL;
volatile int32_t x413 = -1742965;
static int32_t x414 = 450;
int32_t t69 = -674621;
uint64_t x419 = UINT64_MAX;
uint32_t x424 = UINT32_MAX;
uint32_t x441 = 1373U;
int64_t x449 = -1LL;
static volatile uint32_t t76 = 61935U;
static volatile uint64_t x465 = UINT64_MAX;
int32_t t79 = 127;
static uint64_t x482 = 27LLU;
uint64_t x486 = UINT64_MAX;
static uint8_t x488 = 0U;
int16_t x495 = -1;
static uint64_t x496 = 950185998LLU;
uint64_t t83 = 221251304400727LLU;
int16_t x500 = -1;
volatile uint32_t t85 = 387U;
int8_t x505 = 1;
static int16_t x514 = INT16_MIN;
uint16_t x542 = UINT16_MAX;
uint8_t x545 = UINT8_MAX;
uint8_t x558 = 2U;
int32_t x574 = 462405307;
uint64_t x584 = 36938384683614319LLU;


void f0(void) {
	static int32_t x25 = -1;
	static uint8_t x26 = UINT8_MAX;
	static volatile uint32_t x28 = 3U;
	volatile uint32_t t0 = 973090502U;

	t0 = ((x25<=x26)-(x27*x28));

	if (t0 != 4294967261U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x31 = 41762534LL;
	uint64_t x32 = 5547314LLU;
	uint64_t t1 = 3640034521LLU;

	t1 = ((x29<=x30)-(x31*x32));

	if (t1 != 18446512403820017941LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x37 = 57;
	int32_t x38 = INT32_MAX;
	int32_t x39 = -1;
	volatile uint32_t x40 = 28686U;
	uint32_t t2 = 1875U;

	t2 = ((x37<=x38)-(x39*x40));

	if (t2 != 28687U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x53 = 8U;
	int32_t x54 = 0;
	volatile uint32_t x55 = 2661579U;

	t3 = ((x53<=x54)-(x55*x56));

	if (t3 != 340682112U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x58 = INT64_MAX;
	volatile uint16_t x59 = 3553U;
	uint64_t x60 = UINT64_MAX;
	uint64_t t4 = 7082185094LLU;

	t4 = ((x57<=x58)-(x59*x60));

	if (t4 != 3554LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x61 = -1LL;
	static int64_t x62 = 89997812627LL;
	int16_t x63 = -1;
	uint32_t t5 = 2373151U;

	t5 = ((x61<=x62)-(x63*x64));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x65 = INT64_MAX;
	static int64_t x66 = INT64_MAX;
	uint8_t x67 = 1U;
	int32_t x68 = INT32_MAX;
	static volatile int32_t t6 = -8;

	t6 = ((x65<=x66)-(x67*x68));

	if (t6 != -2147483646) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x69 = 1U;
	volatile int16_t x72 = -5;
	static int32_t t7 = 308465811;

	t7 = ((x69<=x70)-(x71*x72));

	if (t7 != -2119944) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x73 = INT16_MIN;
	uint8_t x74 = 0U;
	uint32_t x75 = UINT32_MAX;
	uint64_t t8 = 0LLU;

	t8 = ((x73<=x74)-(x75*x76));

	if (t8 != 12665019634289454421LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x77 = INT16_MIN;
	volatile int16_t x78 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	static uint64_t t9 = 8976681282LLU;

	t9 = ((x77<=x78)-(x79*x80));

	if (t9 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x81 = 2559103LL;
	volatile uint16_t x82 = 7619U;
	volatile uint16_t x83 = 26355U;
	int32_t x84 = -1;

	t10 = ((x81<=x82)-(x83*x84));

	if (t10 != 26355) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x85 = INT8_MIN;
	uint8_t x86 = 0U;
	volatile uint64_t x87 = UINT64_MAX;
	static uint16_t x88 = 2980U;
	volatile uint64_t t11 = 0LLU;

	t11 = ((x85<=x86)-(x87*x88));

	if (t11 != 2981LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x89 = -3261614461LL;
	int32_t x90 = -13231;
	volatile int8_t x91 = -1;
	volatile int32_t t12 = 0;

	t12 = ((x89<=x90)-(x91*x92));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x105 = INT32_MIN;
	static uint16_t x106 = 1730U;
	uint32_t x107 = 219043051U;
	int64_t x108 = 646862LL;
	int64_t t13 = -1LL;

	t13 = ((x105<=x106)-(x107*x108));

	if (t13 != -141690626055961LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x113 = -1LL;
	int32_t x114 = INT32_MAX;
	uint8_t x115 = 4U;

	t14 = ((x113<=x114)-(x115*x116));

	if (t14 != -262139) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x117 = 12238468U;
	int8_t x118 = INT8_MIN;
	static int32_t x120 = 2598;
	int32_t t15 = -463122153;

	t15 = ((x117<=x118)-(x119*x120));

	if (t15 != 85131265) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x122 = -1;
	uint64_t x124 = UINT64_MAX;
	static uint64_t t16 = 475187822426099860LLU;

	t16 = ((x121<=x122)-(x123*x124));

	if (t16 != 2455645LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x129 = 3653710LLU;
	volatile int8_t x130 = -1;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t17 = 97529U;

	t17 = ((x129<=x130)-(x131*x132));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x137 = INT64_MIN;
	int16_t x138 = INT16_MAX;
	volatile int16_t x139 = INT16_MIN;
	int8_t x140 = -1;
	volatile int32_t t18 = 438141329;

	t18 = ((x137<=x138)-(x139*x140));

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x141 = INT32_MAX;
	int32_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	volatile uint64_t t19 = 1524243409LLU;

	t19 = ((x141<=x142)-(x143*x144));

	if (t19 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x145 = UINT64_MAX;
	static uint8_t x146 = UINT8_MAX;
	int32_t x147 = INT32_MIN;
	static uint64_t x148 = 13601999179316LLU;

	t20 = ((x145<=x146)-(x147*x148));

	if (t20 != 8874949008309616640LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x149 = 29U;
	int32_t x151 = -1;
	int64_t x152 = INT64_MAX;
	int64_t t21 = INT64_MAX;

	t21 = ((x149<=x150)-(x151*x152));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x153 = -1;
	int64_t x154 = -1LL;
	static volatile int32_t x155 = -2503038;
	int32_t t22 = -842724;

	t22 = ((x153<=x154)-(x155*x156));

	if (t22 != 638274691) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x161 = 113U;
	static uint64_t x162 = 283658995587815143LLU;
	uint64_t x163 = 800LLU;
	int64_t x164 = INT64_MIN;
	uint64_t t23 = 7442822231LLU;

	t23 = ((x161<=x162)-(x163*x164));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x166 = INT32_MIN;
	uint16_t x167 = 26998U;
	volatile int8_t x168 = 0;
	static int32_t t24 = -108;

	t24 = ((x165<=x166)-(x167*x168));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x173 = -1;
	uint16_t x174 = 14538U;
	int16_t x175 = 228;
	volatile int16_t x176 = INT16_MIN;
	int32_t t25 = -385;

	t25 = ((x173<=x174)-(x175*x176));

	if (t25 != 7471105) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x177 = INT64_MIN;
	static int64_t x178 = -785461LL;
	static volatile uint16_t x180 = 43U;
	volatile int64_t t26 = -214857LL;

	t26 = ((x177<=x178)-(x179*x180));

	if (t26 != 216LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x181 = UINT32_MAX;
	static volatile int64_t x182 = INT64_MAX;
	volatile uint32_t x183 = 354U;
	int64_t x184 = 7481075LL;
	static volatile int64_t t27 = 1794666327LL;

	t27 = ((x181<=x182)-(x183*x184));

	if (t27 != -2648300549LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = INT8_MIN;
	int64_t x187 = -1LL;
	static volatile int32_t x188 = INT32_MIN;
	int64_t t28 = -297870LL;

	t28 = ((x185<=x186)-(x187*x188));

	if (t28 != -2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x189 = 11494U;
	int8_t x190 = INT8_MAX;
	int64_t x191 = -1LL;
	int64_t x192 = INT64_MAX;
	static int64_t t29 = INT64_MAX;

	t29 = ((x189<=x190)-(x191*x192));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x197 = INT32_MIN;
	int32_t x198 = 152770;
	volatile uint8_t x199 = 45U;
	volatile int32_t t30 = 2024905;

	t30 = ((x197<=x198)-(x199*x200));

	if (t30 != -5714) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x213 = 9U;
	static uint16_t x214 = 186U;
	int8_t x215 = -1;
	int32_t x216 = -1;
	static volatile int32_t t31 = 1;

	t31 = ((x213<=x214)-(x215*x216));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x217 = UINT8_MAX;
	int16_t x218 = INT16_MAX;
	uint8_t x219 = UINT8_MAX;
	int8_t x220 = INT8_MAX;

	t32 = ((x217<=x218)-(x219*x220));

	if (t32 != -32384) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x225 = -6091309;
	int32_t x226 = -1;
	volatile int32_t x227 = -286;
	volatile uint64_t x228 = 187052544LLU;
	uint64_t t33 = 82977LLU;

	t33 = ((x225<=x226)-(x227*x228));

	if (t33 != 53497027585LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x230 = 1828U;
	static uint16_t x231 = 7U;
	uint32_t x232 = 1644755U;
	static volatile uint32_t t34 = 10021776U;

	t34 = ((x229<=x230)-(x231*x232));

	if (t34 != 4283454011U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x233 = -1;
	static int32_t x234 = -666;
	volatile uint32_t x235 = 9866U;
	uint32_t t35 = 130U;

	t35 = ((x233<=x234)-(x235*x236));

	if (t35 != 4294957430U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = 259;
	uint16_t x243 = UINT16_MAX;
	int32_t x244 = -1;
	int32_t t36 = 1969795;

	t36 = ((x241<=x242)-(x243*x244));

	if (t36 != 65536) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x245 = INT8_MAX;
	uint16_t x246 = 3U;
	int32_t x247 = INT32_MIN;
	volatile uint32_t x248 = 513192U;
	volatile uint32_t t37 = 96812330U;

	t37 = ((x245<=x246)-(x247*x248));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x253 = INT32_MAX;
	uint16_t x254 = 187U;
	volatile uint8_t x255 = 45U;
	int32_t x256 = -1;
	volatile int32_t t38 = 61262197;

	t38 = ((x253<=x254)-(x255*x256));

	if (t38 != 45) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x261 = 67U;
	int64_t x262 = INT64_MIN;
	static volatile int8_t x263 = INT8_MAX;
	int8_t x264 = -1;
	int32_t t39 = -3666592;

	t39 = ((x261<=x262)-(x263*x264));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x266 = 231LLU;
	volatile int32_t t40 = 24151;

	t40 = ((x265<=x266)-(x267*x268));

	if (t40 != -16350733) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = 62;
	volatile uint64_t x271 = UINT64_MAX;
	int64_t x272 = INT64_MIN;
	volatile uint64_t t41 = 1012624LLU;

	t41 = ((x269<=x270)-(x271*x272));

	if (t41 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x280 = INT64_MAX;

	t42 = ((x277<=x278)-(x279*x280));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MIN;
	int64_t x284 = 621269464LL;
	static int64_t t43 = -169421785857740LL;

	t43 = ((x281<=x282)-(x283*x284));

	if (t43 != -1334166014320455208LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	int8_t x288 = -9;
	volatile int32_t t44 = 6319;

	t44 = ((x285<=x286)-(x287*x288));

	if (t44 != 1144) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x289 = UINT8_MAX;
	volatile int64_t x290 = INT64_MAX;
	volatile int32_t x291 = -418937103;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t45 = 3626LLU;

	t45 = ((x289<=x290)-(x291*x292));

	if (t45 != 18446744073290614514LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x293 = -12617277;
	static uint8_t x294 = 93U;
	int8_t x295 = INT8_MIN;
	static int16_t x296 = INT16_MIN;
	int32_t t46 = -1140;

	t46 = ((x293<=x294)-(x295*x296));

	if (t46 != -4194303) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x297 = -1;
	uint8_t x298 = 1U;
	uint64_t x299 = 624804887LLU;
	int16_t x300 = -8307;

	t47 = ((x297<=x298)-(x299*x300));

	if (t47 != 5190254196310LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x312 = -1LL;
	static volatile int64_t t48 = 162838413516854685LL;

	t48 = ((x309<=x310)-(x311*x312));

	if (t48 != -32767LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x313 = INT64_MIN;
	uint8_t x314 = 16U;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t49 = 0U;

	t49 = ((x313<=x314)-(x315*x316));

	if (t49 != 17170U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x317 = 10394U;
	uint64_t x318 = 174481LLU;
	volatile uint64_t x319 = 29903288331LLU;
	int8_t x320 = INT8_MIN;
	static uint64_t t50 = 709LLU;

	t50 = ((x317<=x318)-(x319*x320));

	if (t50 != 3827620906369LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = 963U;
	static int16_t x324 = INT16_MIN;

	t51 = ((x321<=x322)-(x323*x324));

	if (t51 != 31555584) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x325 = -1;
	int8_t x326 = 0;
	int64_t x327 = INT64_MIN;
	volatile int64_t t52 = 325870766946LL;

	t52 = ((x325<=x326)-(x327*x328));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x331 = UINT8_MAX;
	volatile uint64_t t53 = 7838059LLU;

	t53 = ((x329<=x330)-(x331*x332));

	if (t53 != 256LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x338 = 8U;
	int8_t x340 = -1;

	t54 = ((x337<=x338)-(x339*x340));

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x345 = 35;
	int8_t x347 = 0;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t55 = 109U;

	t55 = ((x345<=x346)-(x347*x348));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x349 = 1;
	int32_t x350 = INT32_MAX;
	int32_t x351 = -1;
	uint32_t x352 = 1097456U;
	uint32_t t56 = 5770U;

	t56 = ((x349<=x350)-(x351*x352));

	if (t56 != 1097457U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x354 = INT8_MIN;
	static uint32_t x355 = 3741142U;
	static uint16_t x356 = 10U;

	t57 = ((x353<=x354)-(x355*x356));

	if (t57 != 4257555876U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x358 = 3809LL;
	static uint64_t x359 = UINT64_MAX;
	int32_t x360 = 64026;
	static uint64_t t58 = 119381425947LLU;

	t58 = ((x357<=x358)-(x359*x360));

	if (t58 != 64027LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x361 = INT64_MIN;
	uint32_t x363 = UINT32_MAX;
	uint32_t x364 = 843287145U;

	t59 = ((x361<=x362)-(x363*x364));

	if (t59 != 843287146U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x369 = 7;
	uint64_t x370 = UINT64_MAX;
	int8_t x372 = INT8_MIN;
	int64_t t60 = 4LL;

	t60 = ((x369<=x370)-(x371*x372));

	if (t60 != -127LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x374 = UINT32_MAX;
	static uint32_t x375 = 39971463U;
	int8_t x376 = INT8_MIN;

	t61 = ((x373<=x374)-(x375*x376));

	if (t61 != 821379969U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x381 = UINT8_MAX;
	int32_t x382 = INT32_MAX;
	volatile int8_t x383 = -1;

	t62 = ((x381<=x382)-(x383*x384));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x385 = 154190975U;
	uint32_t x386 = 12711369U;
	int32_t x387 = INT32_MIN;
	uint64_t t63 = 4494009926384106LLU;

	t63 = ((x385<=x386)-(x387*x388));

	if (t63 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x393 = 4730878093LLU;
	volatile int32_t x394 = -1;
	int32_t x395 = 660;
	int32_t t64 = -272286177;

	t64 = ((x393<=x394)-(x395*x396));

	if (t64 != -21626219) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x397 = -238878630461920LL;
	uint32_t x398 = 55830U;
	int32_t x399 = INT32_MAX;
	volatile uint32_t x400 = 804U;
	volatile uint32_t t65 = 36116U;

	t65 = ((x397<=x398)-(x399*x400));

	if (t65 != 805U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x401 = 889218U;
	volatile int64_t x402 = -1LL;
	int32_t x404 = -1;

	t66 = ((x401<=x402)-(x403*x404));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x405 = INT32_MAX;
	int8_t x406 = 22;
	uint16_t x407 = 1U;
	volatile uint64_t x408 = 627024690402LLU;
	static volatile uint64_t t67 = 4390LLU;

	t67 = ((x405<=x406)-(x407*x408));

	if (t67 != 18446743446684861214LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x409 = UINT16_MAX;
	int32_t x410 = -1;
	uint32_t x411 = 249303883U;
	volatile int64_t t68 = 1460LL;

	t68 = ((x409<=x410)-(x411*x412));

	if (t68 != 249303883LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x415 = 2290;
	volatile int8_t x416 = -41;

	t69 = ((x413<=x414)-(x415*x416));

	if (t69 != 93891) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x417 = INT8_MAX;
	volatile int8_t x418 = 1;
	uint16_t x420 = 2U;
	uint64_t t70 = 169531001701LLU;

	t70 = ((x417<=x418)-(x419*x420));

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x421 = INT64_MIN;
	uint16_t x422 = 4099U;
	volatile int32_t x423 = -1;
	uint32_t t71 = 190025U;

	t71 = ((x421<=x422)-(x423*x424));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x425 = -50634;
	static volatile int64_t x426 = -1LL;
	int8_t x427 = INT8_MAX;
	uint8_t x428 = UINT8_MAX;
	int32_t t72 = -18581278;

	t72 = ((x425<=x426)-(x427*x428));

	if (t72 != -32384) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x429 = -1;
	int8_t x430 = -1;
	int32_t x431 = INT32_MIN;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t73 = 1774254425U;

	t73 = ((x429<=x430)-(x431*x432));

	if (t73 != 2147483649U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x442 = 5709;
	int64_t x443 = -46321LL;
	uint32_t x444 = 153463804U;
	int64_t t74 = -1818504964080788444LL;

	t74 = ((x441<=x442)-(x443*x444));

	if (t74 != 7108596865085LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x445 = -4050;
	int64_t x446 = 22647LL;
	uint16_t x447 = 179U;
	uint16_t x448 = 15480U;
	int32_t t75 = -1986573;

	t75 = ((x445<=x446)-(x447*x448));

	if (t75 != -2770919) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x450 = 1;
	uint32_t x451 = 254263979U;
	uint8_t x452 = 1U;

	t76 = ((x449<=x450)-(x451*x452));

	if (t76 != 4040703318U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x453 = 3085U;
	volatile uint8_t x454 = UINT8_MAX;
	static int64_t x455 = -1038LL;
	static volatile int32_t x456 = INT32_MAX;
	static int64_t t77 = 1871884428326500LL;

	t77 = ((x453<=x454)-(x455*x456));

	if (t77 != 2229088025586LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x466 = 1;
	static uint16_t x467 = 0U;
	static int16_t x468 = INT16_MIN;
	volatile int32_t t78 = 289;

	t78 = ((x465<=x466)-(x467*x468));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x469 = -1;
	uint8_t x470 = UINT8_MAX;
	int16_t x471 = INT16_MIN;
	uint8_t x472 = UINT8_MAX;

	t79 = ((x469<=x470)-(x471*x472));

	if (t79 != 8355841) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x481 = INT16_MIN;
	uint8_t x483 = 6U;
	volatile int8_t x484 = -1;
	volatile int32_t t80 = -86797;

	t80 = ((x481<=x482)-(x483*x484));

	if (t80 != 6) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x485 = 317;
	int32_t x487 = -1;
	int32_t t81 = -16620;

	t81 = ((x485<=x486)-(x487*x488));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x489 = INT8_MIN;
	int32_t x490 = -1;
	uint16_t x491 = 7672U;
	uint32_t x492 = UINT32_MAX;
	uint32_t t82 = 4634649U;

	t82 = ((x489<=x490)-(x491*x492));

	if (t82 != 7673U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x493 = INT32_MIN;
	uint8_t x494 = UINT8_MAX;

	t83 = ((x493<=x494)-(x495*x496));

	if (t83 != 950185999LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x497 = 1819213204LLU;
	volatile int8_t x498 = INT8_MIN;
	static volatile uint64_t x499 = UINT64_MAX;
	uint64_t t84 = 5096379353180LLU;

	t84 = ((x497<=x498)-(x499*x500));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x501 = 7652669U;
	volatile int16_t x502 = -1;
	uint16_t x503 = 16544U;
	uint32_t x504 = UINT32_MAX;

	t85 = ((x501<=x502)-(x503*x504));

	if (t85 != 16545U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x506 = 9973210802273LLU;
	uint16_t x507 = UINT16_MAX;
	int8_t x508 = INT8_MIN;
	volatile int32_t t86 = 231856;

	t86 = ((x505<=x506)-(x507*x508));

	if (t86 != 8388481) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x513 = UINT8_MAX;
	int16_t x515 = -936;
	static int8_t x516 = INT8_MIN;
	int32_t t87 = -81273;

	t87 = ((x513<=x514)-(x515*x516));

	if (t87 != -119808) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x517 = INT16_MIN;
	int64_t x518 = INT64_MIN;
	int8_t x519 = -7;
	int16_t x520 = -1;
	int32_t t88 = -14;

	t88 = ((x517<=x518)-(x519*x520));

	if (t88 != -7) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x521 = -5002751918613LL;
	uint32_t x522 = UINT32_MAX;
	int8_t x523 = -2;
	int8_t x524 = -39;
	volatile int32_t t89 = 2331;

	t89 = ((x521<=x522)-(x523*x524));

	if (t89 != -77) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x529 = -1;
	uint16_t x530 = 0U;
	int16_t x531 = -3097;
	uint64_t x532 = 1648746293LLU;
	static volatile uint64_t t90 = 147LLU;

	t90 = ((x529<=x530)-(x531*x532));

	if (t90 != 5106167269422LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x541 = -1;
	volatile int8_t x543 = 0;
	uint8_t x544 = UINT8_MAX;
	int32_t t91 = 50;

	t91 = ((x541<=x542)-(x543*x544));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x546 = -1;
	static uint64_t x547 = 1LLU;
	int32_t x548 = 17;
	uint64_t t92 = 171LLU;

	t92 = ((x545<=x546)-(x547*x548));

	if (t92 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x549 = INT32_MAX;
	static int16_t x550 = 1;
	uint16_t x551 = UINT16_MAX;
	int32_t x552 = -1;
	volatile int32_t t93 = 2;

	t93 = ((x549<=x550)-(x551*x552));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x557 = -119;
	int32_t x559 = -1;
	volatile int16_t x560 = INT16_MIN;
	int32_t t94 = -29421;

	t94 = ((x557<=x558)-(x559*x560));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x565 = -1;
	static volatile int16_t x566 = INT16_MIN;
	int16_t x567 = 1;
	static uint32_t x568 = 745013476U;
	static volatile uint32_t t95 = 6947965U;

	t95 = ((x565<=x566)-(x567*x568));

	if (t95 != 3549953820U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x573 = 25301337LL;
	int64_t x575 = -465779732779LL;
	int16_t x576 = INT16_MIN;
	volatile int64_t t96 = 28LL;

	t96 = ((x573<=x574)-(x575*x576));

	if (t96 != -15262670283702271LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x577 = INT16_MIN;
	volatile int64_t x578 = INT64_MAX;
	int64_t x579 = 703819401180LL;
	uint16_t x580 = 505U;
	static volatile int64_t t97 = -7416194LL;

	t97 = ((x577<=x578)-(x579*x580));

	if (t97 != -355428797595899LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x581 = INT8_MIN;
	uint64_t x582 = 2092593434315LLU;
	uint64_t x583 = 371961069329342LLU;
	volatile uint64_t t98 = 9696LLU;

	t98 = ((x581<=x582)-(x583*x584));

	if (t98 != 16426168592509810846LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x585 = 125108128080611LL;
	uint64_t x586 = 48318793319188882LLU;
	static int16_t x587 = INT16_MAX;
	int32_t x588 = -1;
	int32_t t99 = -46166;

	t99 = ((x585<=x586)-(x587*x588));

	if (t99 != 32768) { NG(); } else { ; }
	
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

