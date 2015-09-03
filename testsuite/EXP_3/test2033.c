#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 92139602691LLU;
volatile uint16_t x12 = 2U;
volatile uint64_t t2 = 160476210439LLU;
static int16_t x18 = INT16_MIN;
int16_t x24 = INT16_MAX;
static volatile int32_t x27 = INT32_MAX;
int16_t x31 = INT16_MAX;
int32_t t6 = 2;
uint32_t x42 = 2U;
int8_t x44 = -1;
uint64_t x46 = UINT64_MAX;
uint64_t t10 = 60884550024757LLU;
int16_t x59 = -21;
volatile int64_t x60 = INT64_MIN;
int8_t x70 = 0;
static uint32_t x78 = 98786U;
int16_t x87 = INT16_MIN;
int64_t x88 = INT64_MIN;
static volatile uint32_t x95 = 8U;
static int32_t x96 = INT32_MIN;
volatile uint16_t x107 = 27868U;
volatile int32_t x109 = -3;
uint32_t x111 = 2U;
int16_t x118 = -223;
static int32_t x127 = -1;
volatile uint64_t t27 = 1045420LLU;
int8_t x137 = INT8_MAX;
volatile uint32_t x138 = 384077039U;
int64_t x140 = INT64_MIN;
uint64_t x146 = UINT64_MAX;
int8_t x150 = INT8_MAX;
int64_t x151 = INT64_MAX;
int16_t x157 = INT16_MAX;
int64_t t32 = 2477LL;
int16_t x161 = 14416;
int8_t x170 = INT8_MIN;
volatile uint64_t t36 = 35LLU;
static uint64_t x181 = 27LLU;
volatile int64_t x199 = INT64_MIN;
static int8_t x212 = 15;
int8_t x214 = 24;
int16_t x216 = -1;
volatile int32_t t44 = 1204041;
static uint32_t x221 = 7699U;
volatile uint64_t x225 = 5735549966845627335LLU;
uint16_t x226 = 10U;
uint64_t t46 = 796590525096159482LLU;
int64_t x230 = -48314LL;
int16_t x233 = INT16_MIN;
uint64_t t48 = 14LLU;
static uint32_t x241 = 122662U;
int16_t x257 = INT16_MIN;
volatile uint64_t t54 = 1412397842879847631LLU;
uint8_t x266 = UINT8_MAX;
static uint64_t x274 = 22628194157213290LLU;
uint64_t x279 = 64687488LLU;
int16_t x287 = -1;
uint32_t x293 = 99654U;
int8_t x295 = INT8_MAX;
volatile uint64_t t65 = 395909686387LLU;
int32_t x316 = -18662;
int32_t t67 = -1;
int16_t x324 = -149;
static volatile int8_t x328 = -1;
volatile int32_t t70 = 16775330;
int8_t x330 = 17;
int64_t t73 = -441582LL;
int32_t x343 = -1;
volatile int64_t t74 = 596128626792119LL;
int32_t x347 = -1;
static int32_t t75 = -3;
uint16_t x350 = UINT16_MAX;
int8_t x351 = 16;
volatile uint8_t x353 = 30U;
volatile int16_t x356 = INT16_MIN;
static volatile int32_t t77 = 59701773;
uint64_t x361 = 511896LLU;
volatile uint8_t x366 = 13U;
int64_t x367 = 539430293853LL;
static volatile int32_t t81 = -1;
uint32_t t82 = 687990U;
volatile int64_t t83 = 314376097LL;
static int64_t x385 = -7LL;
volatile int16_t x386 = -1;
volatile int64_t t85 = 1399LL;
volatile int16_t x393 = -5;
volatile uint64_t x396 = UINT64_MAX;
uint32_t x400 = UINT32_MAX;
uint8_t x402 = 3U;
static int64_t x407 = -1LL;
static int64_t x431 = -59617049782440217LL;
int8_t x435 = -1;
uint32_t x437 = 15998U;
int64_t x439 = INT64_MIN;


void f0(void) {
	uint32_t x1 = 149443U;
	int16_t x2 = -346;
	int32_t x3 = INT32_MAX;
	uint32_t x4 = 481650U;
	volatile uint32_t t0 = 17336648U;

	t0 = ((x1+x2)%(x3^x4));

	if (t0 != 149097U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x6 = 26U;
	volatile int16_t x7 = INT16_MIN;
	uint64_t x8 = 51133163570090LLU;

	t1 = ((x5+x6)%(x7^x8));

	if (t1 != 51133163568240LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 122U;
	int32_t x10 = -1;
	uint64_t x11 = 21LLU;

	t2 = ((x9+x10)%(x11^x12));

	if (t2 != 6LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	int64_t x19 = INT64_MIN;
	static int64_t x20 = -1LL;
	int64_t t3 = 420930757945LL;

	t3 = ((x17+x18)%(x19^x20));

	if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x21 = UINT64_MAX;
	uint16_t x22 = UINT16_MAX;
	int16_t x23 = -1;
	volatile uint64_t t4 = 3357662006LLU;

	t4 = ((x21+x22)%(x23^x24));

	if (t4 != 65534LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int32_t x26 = 10076;
	uint8_t x28 = 44U;
	volatile int32_t t5 = 1158185;

	t5 = ((x25+x26)%(x27^x28));

	if (t5 != 10075) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	uint8_t x30 = UINT8_MAX;
	static uint16_t x32 = UINT16_MAX;

	t6 = ((x29+x30)%(x31^x32));

	if (t6 != -32513) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 69919315976690LLU;
	int32_t x34 = 985185;
	int32_t x35 = INT32_MIN;
	int32_t x36 = INT32_MAX;
	volatile uint64_t t7 = 237122830510LLU;

	t7 = ((x33+x34)%(x35^x36));

	if (t7 != 69919316961875LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -374;
	int8_t x38 = INT8_MIN;
	int16_t x39 = -1;
	int16_t x40 = INT16_MIN;
	int32_t t8 = 1431648;

	t8 = ((x37+x38)%(x39^x40));

	if (t8 != -502) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = 15791526580LLU;
	static int64_t x43 = INT64_MIN;
	volatile uint64_t t9 = 3693551695172LLU;

	t9 = ((x41+x42)%(x43^x44));

	if (t9 != 15791526582LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = 88U;
	uint32_t x47 = 45U;
	int32_t x48 = INT32_MIN;

	t10 = ((x45+x46)%(x47^x48));

	if (t10 != 87LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 0U;
	int32_t x58 = INT32_MIN;
	static volatile int64_t t11 = 799699345323LL;

	t11 = ((x57+x58)%(x59^x60));

	if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = -1;
	uint64_t x66 = 1105867146430389LLU;
	int32_t x67 = INT32_MAX;
	static int8_t x68 = 38;
	static uint64_t t12 = 74352354888406815LLU;

	t12 = ((x65+x66)%(x67^x68));

	if (t12 != 1134623357LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x69 = -33268234LL;
	static volatile int16_t x71 = INT16_MIN;
	static uint8_t x72 = UINT8_MAX;
	volatile int64_t t13 = 467035725957059307LL;

	t13 = ((x69+x70)%(x71^x72));

	if (t13 != -7435LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = 4667;
	uint16_t x74 = 1096U;
	int16_t x75 = -1;
	volatile int16_t x76 = INT16_MIN;
	volatile int32_t t14 = 87864;

	t14 = ((x73+x74)%(x75^x76));

	if (t14 != 5763) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 2U;
	int8_t x79 = INT8_MIN;
	uint64_t x80 = 49495158199421433LLU;
	static volatile uint64_t t15 = 838063LLU;

	t15 = ((x77+x78)%(x79^x80));

	if (t15 != 98788LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = UINT16_MAX;
	static uint8_t x82 = 1U;
	int8_t x83 = INT8_MAX;
	volatile int64_t x84 = INT64_MIN;
	volatile int64_t t16 = -128574076594LL;

	t16 = ((x81+x82)%(x83^x84));

	if (t16 != 65536LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x85 = 0U;
	uint64_t x86 = 1808570LLU;
	volatile uint64_t t17 = 0LLU;

	t17 = ((x85+x86)%(x87^x88));

	if (t17 != 1808570LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = 2355;
	static uint64_t x90 = UINT64_MAX;
	static int16_t x91 = INT16_MIN;
	static int32_t x92 = INT32_MIN;
	static uint64_t t18 = 118129841375598983LLU;

	t18 = ((x89+x90)%(x91^x92));

	if (t18 != 2354LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = 20;
	int64_t t19 = -12676515613864LL;

	t19 = ((x93+x94)%(x95^x96));

	if (t19 != -108LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = 4;
	static volatile uint16_t x106 = UINT16_MAX;
	int64_t x108 = -1LL;
	static volatile int64_t t20 = -512531108666244611LL;

	t20 = ((x105+x106)%(x107^x108));

	if (t20 != 9801LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x110 = 287198319572LLU;
	uint64_t x112 = 46168LLU;
	volatile uint64_t t21 = 13443680520068626LLU;

	t21 = ((x109+x110)%(x111^x112));

	if (t21 != 4559LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = UINT8_MAX;
	uint32_t x114 = UINT32_MAX;
	static int32_t x115 = -3033;
	int32_t x116 = -1;
	static uint32_t t22 = 493297U;

	t22 = ((x113+x114)%(x115^x116));

	if (t22 != 254U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = -1LL;
	int32_t x119 = 1;
	static uint16_t x120 = 57U;
	int64_t t23 = -84LL;

	t23 = ((x117+x118)%(x119^x120));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x121 = 290LLU;
	uint64_t x122 = 25146122LLU;
	static volatile int64_t x123 = -6LL;
	uint32_t x124 = 382842649U;
	uint64_t t24 = 101LLU;

	t24 = ((x121+x122)%(x123^x124));

	if (t24 != 25146412LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x125 = 30461517U;
	int32_t x126 = -1;
	uint16_t x128 = UINT16_MAX;
	volatile uint32_t t25 = 3323U;

	t25 = ((x125+x126)%(x127^x128));

	if (t25 != 30461516U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = 2945;
	uint64_t x130 = 36130LLU;
	int64_t x131 = 0LL;
	uint32_t x132 = 318166U;
	uint64_t t26 = 43LLU;

	t26 = ((x129+x130)%(x131^x132));

	if (t26 != 39075LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x133 = 45677839206LLU;
	int32_t x134 = -1;
	volatile int64_t x135 = INT64_MAX;
	uint16_t x136 = UINT16_MAX;

	t27 = ((x133+x134)%(x135^x136));

	if (t27 != 45677839205LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x139 = UINT64_MAX;
	uint64_t t28 = 3280414655LLU;

	t28 = ((x137+x138)%(x139^x140));

	if (t28 != 384077166LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MIN;
	static uint32_t x142 = 21778805U;
	uint16_t x143 = UINT16_MAX;
	static int8_t x144 = INT8_MIN;
	static int64_t t29 = 4255990514402142LL;

	t29 = ((x141+x142)%(x143^x144));

	if (t29 != -8916LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MIN;
	uint64_t x147 = 725199LLU;
	int64_t x148 = INT64_MAX;
	uint64_t t30 = 3LLU;

	t30 = ((x145+x146)%(x147^x148));

	if (t30 != 725199LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MAX;
	uint8_t x152 = 1U;
	static volatile int64_t t31 = 14LL;

	t31 = ((x149+x150)%(x151^x152));

	if (t31 != 32894LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x158 = 888;
	int64_t x159 = INT64_MIN;
	static int16_t x160 = INT16_MIN;

	t32 = ((x157+x158)%(x159^x160));

	if (t32 != 33655LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t33 = -20942;

	t33 = ((x161+x162)%(x163^x164));

	if (t33 != -2147469232) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = 404U;
	volatile int64_t x166 = -1LL;
	int64_t x167 = INT64_MIN;
	static volatile int16_t x168 = INT16_MIN;
	volatile int64_t t34 = 2820125609138399536LL;

	t34 = ((x165+x166)%(x167^x168));

	if (t34 != 403LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x169 = 1351715846LL;
	volatile uint16_t x171 = UINT16_MAX;
	int8_t x172 = -1;
	int64_t t35 = -7467256630125LL;

	t35 = ((x169+x170)%(x171^x172));

	if (t35 != 35718LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = -1LL;
	volatile uint64_t x178 = 1922085271176924302LLU;
	int16_t x179 = 14251;
	int16_t x180 = 9;

	t36 = ((x177+x178)%(x179^x180));

	if (t36 != 10557LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x182 = UINT64_MAX;
	int32_t x183 = 7;
	static volatile int32_t x184 = INT32_MIN;
	uint64_t t37 = 113578892118LLU;

	t37 = ((x181+x182)%(x183^x184));

	if (t37 != 26LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = 40;
	int32_t x186 = -1119;
	int64_t x187 = -4472LL;
	uint64_t x188 = 340645105424950452LLU;
	volatile uint64_t t38 = 1952LLU;

	t38 = ((x185+x186)%(x187^x188));

	if (t38 != 340645105424953741LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = -54;
	uint8_t x190 = 83U;
	uint8_t x191 = UINT8_MAX;
	uint8_t x192 = 22U;
	int32_t t39 = 34;

	t39 = ((x189+x190)%(x191^x192));

	if (t39 != 29) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x193 = UINT8_MAX;
	static int8_t x194 = INT8_MIN;
	int8_t x195 = 9;
	int32_t x196 = -1;
	int32_t t40 = -3677;

	t40 = ((x193+x194)%(x195^x196));

	if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x197 = -1LL;
	uint32_t x198 = 29U;
	volatile uint32_t x200 = UINT32_MAX;
	volatile int64_t t41 = -29821140LL;

	t41 = ((x197+x198)%(x199^x200));

	if (t41 != 28LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x201 = UINT16_MAX;
	static int16_t x202 = -1;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = UINT32_MAX;
	uint32_t t42 = 0U;

	t42 = ((x201+x202)%(x203^x204));

	if (t42 != 65534U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x209 = 3U;
	volatile uint32_t x210 = 4677U;
	int64_t x211 = INT64_MIN;
	volatile int64_t t43 = 4212LL;

	t43 = ((x209+x210)%(x211^x212));

	if (t43 != 4680LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = INT16_MAX;
	uint8_t x215 = 10U;

	t44 = ((x213+x214)%(x215^x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x222 = -1LL;
	int8_t x223 = INT8_MIN;
	uint64_t x224 = 25108613747677135LLU;
	volatile uint64_t t45 = 10127851098963592LLU;

	t45 = ((x221+x222)%(x223^x224));

	if (t45 != 7698LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x227 = 4625;
	uint32_t x228 = UINT32_MAX;

	t46 = ((x225+x226)%(x227^x228));

	if (t46 != 3561428585LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x229 = 12253U;
	int16_t x231 = INT16_MIN;
	int64_t x232 = 192282179LL;
	static int64_t t47 = 17LL;

	t47 = ((x229+x230)%(x231^x232));

	if (t47 != -36061LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x234 = 29290;
	static uint64_t x235 = 20446558009624LLU;
	uint16_t x236 = 348U;

	t48 = ((x233+x234)%(x235^x236));

	if (t48 != 2563524107622LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x237 = 27;
	int16_t x238 = -15;
	volatile uint16_t x239 = UINT16_MAX;
	volatile int64_t x240 = INT64_MAX;
	volatile int64_t t49 = 252LL;

	t49 = ((x237+x238)%(x239^x240));

	if (t49 != 12LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x242 = -80087228;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = 10U;
	volatile uint32_t t50 = 54318328U;

	t50 = ((x241+x242)%(x243^x244));

	if (t50 != 4215002730U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x245 = 1U;
	int32_t x246 = INT32_MIN;
	uint8_t x247 = 3U;
	int32_t x248 = -1;
	int32_t t51 = 14;

	t51 = ((x245+x246)%(x247^x248));

	if (t51 != -3) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x249 = UINT32_MAX;
	volatile int64_t x250 = INT64_MIN;
	int32_t x251 = -1118;
	volatile int16_t x252 = INT16_MAX;
	int64_t t52 = 2259548LL;

	t52 = ((x249+x250)%(x251^x252));

	if (t52 != -13893LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x253 = INT32_MIN;
	volatile int32_t x254 = 1;
	int64_t x255 = -1LL;
	static int8_t x256 = INT8_MIN;
	int64_t t53 = 123654LL;

	t53 = ((x253+x254)%(x255^x256));

	if (t53 != -7LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x258 = INT16_MIN;
	uint8_t x259 = 32U;
	uint64_t x260 = UINT64_MAX;

	t54 = ((x257+x258)%(x259^x260));

	if (t54 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = INT16_MIN;
	static uint32_t x267 = 5U;
	int16_t x268 = 14460;
	volatile uint32_t t55 = 149958067U;

	t55 = ((x265+x266)%(x267^x268));

	if (t55 != 5852U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x269 = 2;
	static volatile uint16_t x270 = 6U;
	uint8_t x271 = 0U;
	static int8_t x272 = INT8_MAX;
	static int32_t t56 = -832;

	t56 = ((x269+x270)%(x271^x272));

	if (t56 != 8) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = INT32_MAX;
	uint64_t x275 = 10LLU;
	static volatile uint32_t x276 = 17U;
	volatile uint64_t t57 = 55157697731356LLU;

	t57 = ((x273+x274)%(x275^x276));

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x277 = -1;
	int64_t x278 = -1LL;
	int32_t x280 = INT32_MIN;
	static uint64_t t58 = 1637LLU;

	t58 = ((x277+x278)%(x279^x280));

	if (t58 != 2082796158LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x281 = 4445043254714375626LLU;
	volatile int32_t x282 = 232683;
	int8_t x283 = -61;
	static uint8_t x284 = 14U;
	volatile uint64_t t59 = 8659LLU;

	t59 = ((x281+x282)%(x283^x284));

	if (t59 != 4445043254714608309LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x285 = -1;
	volatile uint16_t x286 = 9U;
	uint16_t x288 = 22U;
	static int32_t t60 = 10690348;

	t60 = ((x285+x286)%(x287^x288));

	if (t60 != 8) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x289 = UINT64_MAX;
	volatile int64_t x290 = INT64_MAX;
	volatile int16_t x291 = -1;
	int32_t x292 = 753993182;
	static uint64_t t61 = 6471935770LLU;

	t61 = ((x289+x290)%(x291^x292));

	if (t61 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x294 = INT16_MIN;
	volatile int64_t x296 = INT64_MIN;
	volatile int64_t t62 = 928LL;

	t62 = ((x293+x294)%(x295^x296));

	if (t62 != 66886LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x297 = 19U;
	volatile int16_t x298 = 9269;
	volatile uint32_t x299 = 6350461U;
	uint8_t x300 = 29U;
	uint32_t t63 = 0U;

	t63 = ((x297+x298)%(x299^x300));

	if (t63 != 9288U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = -1;
	static int16_t x302 = -1;
	int8_t x303 = INT8_MIN;
	int8_t x304 = -1;
	volatile int32_t t64 = 1;

	t64 = ((x301+x302)%(x303^x304));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x305 = INT8_MIN;
	uint32_t x306 = 20U;
	uint64_t x307 = 9600463397LLU;
	int8_t x308 = INT8_MIN;

	t65 = ((x305+x306)%(x307^x308));

	if (t65 != 4294967188LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x309 = 0;
	int16_t x310 = INT16_MIN;
	uint32_t x311 = 11951828U;
	int64_t x312 = INT64_MIN;
	volatile int64_t t66 = 1421491468LL;

	t66 = ((x309+x310)%(x311^x312));

	if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x313 = 725U;
	int32_t x314 = -1;
	uint8_t x315 = 28U;

	t67 = ((x313+x314)%(x315^x316));

	if (t67 != 724) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x317 = UINT8_MAX;
	uint64_t x318 = 291716208902320LLU;
	volatile int64_t x319 = INT64_MIN;
	volatile uint16_t x320 = 4193U;
	static volatile uint64_t t68 = 452044351308117244LLU;

	t68 = ((x317+x318)%(x319^x320));

	if (t68 != 291716208902575LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x321 = 89154;
	int32_t x322 = 253;
	int8_t x323 = INT8_MAX;
	int32_t t69 = -144151008;

	t69 = ((x321+x322)%(x323^x324));

	if (t69 != 199) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -5;
	static int32_t x326 = 4;
	static int32_t x327 = INT32_MAX;

	t70 = ((x325+x326)%(x327^x328));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -87;
	volatile int32_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	int32_t t71 = 521226573;

	t71 = ((x329+x330)%(x331^x332));

	if (t71 != -70) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x333 = 108525562LLU;
	static int32_t x334 = 2041;
	int32_t x335 = INT32_MIN;
	int64_t x336 = -1LL;
	uint64_t t72 = 46LLU;

	t72 = ((x333+x334)%(x335^x336));

	if (t72 != 108527603LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = 28085U;
	static int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MAX;

	t73 = ((x337+x338)%(x339^x340));

	if (t73 != 60852LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x341 = 12;
	int64_t x342 = INT64_MIN;
	int8_t x344 = INT8_MIN;

	t74 = ((x341+x342)%(x343^x344));

	if (t74 != -116LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x345 = INT16_MAX;
	volatile int32_t x346 = -1;
	int16_t x348 = INT16_MAX;

	t75 = ((x345+x346)%(x347^x348));

	if (t75 != 32766) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x349 = 442;
	uint8_t x352 = 1U;
	int32_t t76 = 3272;

	t76 = ((x349+x350)%(x351^x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x354 = INT16_MIN;
	volatile int32_t x355 = INT32_MAX;

	t77 = ((x353+x354)%(x355^x356));

	if (t77 != -32738) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x357 = INT32_MAX;
	static volatile int8_t x358 = -58;
	uint16_t x359 = 2U;
	volatile int16_t x360 = INT16_MAX;
	volatile int32_t t78 = -3;

	t78 = ((x357+x358)%(x359^x360));

	if (t78 != 32724) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x362 = INT8_MAX;
	int16_t x363 = 6;
	static int8_t x364 = -1;
	uint64_t t79 = 1068120557662LLU;

	t79 = ((x361+x362)%(x363^x364));

	if (t79 != 512023LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x365 = 1U;
	int16_t x368 = INT16_MAX;
	int64_t t80 = 10058096538LL;

	t80 = ((x365+x366)%(x367^x368));

	if (t80 != 14LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x369 = 1067469030;
	int16_t x370 = 0;
	int8_t x371 = INT8_MIN;
	uint8_t x372 = UINT8_MAX;

	t81 = ((x369+x370)%(x371^x372));

	if (t81 != 93) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x373 = INT16_MAX;
	int8_t x374 = INT8_MAX;
	uint16_t x375 = 17U;
	uint32_t x376 = 1490156254U;

	t82 = ((x373+x374)%(x375^x376));

	if (t82 != 32894U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x377 = INT32_MAX;
	int64_t x378 = 33346273308818LL;
	int64_t x379 = 28539630089767LL;
	int8_t x380 = INT8_MAX;

	t83 = ((x377+x378)%(x379^x380));

	if (t83 != 4808790702649LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = INT64_MIN;
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MAX;
	volatile uint16_t x384 = 13279U;
	volatile int64_t t84 = -45887LL;

	t84 = ((x381+x382)%(x383^x384));

	if (t84 != -352690241LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x387 = -1LL;
	volatile int32_t x388 = -1343;

	t85 = ((x385+x386)%(x387^x388));

	if (t85 != -8LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x389 = -1;
	int16_t x390 = INT16_MAX;
	volatile int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t86 = 1695686;

	t86 = ((x389+x390)%(x391^x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x394 = -5;
	volatile int16_t x395 = INT16_MAX;
	static volatile uint64_t t87 = 93147LLU;

	t87 = ((x393+x394)%(x395^x396));

	if (t87 != 32758LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = INT64_MAX;
	int16_t x398 = INT16_MIN;
	static volatile uint64_t x399 = 3504622258LLU;
	volatile uint64_t t88 = 6720098746285LLU;

	t88 = ((x397+x398)%(x399^x400));

	if (t88 != 740975095LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	uint32_t x404 = 120911000U;
	volatile int64_t t89 = 11182587LL;

	t89 = ((x401+x402)%(x403^x404));

	if (t89 != -120910997LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x405 = 24U;
	uint64_t x406 = UINT64_MAX;
	volatile int64_t x408 = INT64_MIN;
	static volatile uint64_t t90 = 2108129902LLU;

	t90 = ((x405+x406)%(x407^x408));

	if (t90 != 23LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x409 = -10;
	uint64_t x410 = 16LLU;
	volatile int8_t x411 = INT8_MIN;
	static int32_t x412 = -1;
	static uint64_t t91 = 68154788430837LLU;

	t91 = ((x409+x410)%(x411^x412));

	if (t91 != 6LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x413 = 874645;
	int8_t x414 = 46;
	static volatile int8_t x415 = INT8_MIN;
	volatile uint32_t x416 = 132798627U;
	static uint32_t t92 = 30798380U;

	t92 = ((x413+x414)%(x415^x416));

	if (t92 != 874691U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x417 = INT8_MIN;
	static uint32_t x418 = 7U;
	volatile uint16_t x419 = 2U;
	uint32_t x420 = 679879350U;
	volatile uint32_t t93 = 1046014U;

	t93 = ((x417+x418)%(x419^x420));

	if (t93 != 215691087U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x421 = INT32_MAX;
	static int64_t x422 = -1349019892633068768LL;
	int32_t x423 = -1;
	int32_t x424 = -66522;
	int64_t t94 = 9581857728604LL;

	t94 = ((x421+x422)%(x423^x424));

	if (t94 != -11269LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x425 = -44;
	int16_t x426 = INT16_MIN;
	uint16_t x427 = 255U;
	uint16_t x428 = UINT16_MAX;
	static volatile int32_t t95 = 340868;

	t95 = ((x425+x426)%(x427^x428));

	if (t95 != -32812) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x429 = 3;
	uint32_t x430 = 922533929U;
	volatile int8_t x432 = -1;
	int64_t t96 = -136LL;

	t96 = ((x429+x430)%(x431^x432));

	if (t96 != 922533932LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x433 = 12531;
	uint32_t x434 = 107378114U;
	int8_t x436 = INT8_MAX;
	volatile uint32_t t97 = 15695U;

	t97 = ((x433+x434)%(x435^x436));

	if (t97 != 107390645U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x438 = INT64_MIN;
	volatile int64_t x440 = -166433116LL;
	int64_t t98 = -59095LL;

	t98 = ((x437+x438)%(x439^x440));

	if (t98 != -166417118LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x449 = 10U;
	static volatile int64_t x450 = INT64_MIN;
	int32_t x451 = INT32_MIN;
	volatile int16_t x452 = 3;
	int64_t t99 = 953000819016LL;

	t99 = ((x449+x450)%(x451^x452));

	if (t99 != -8LL) { NG(); } else { ; }
	
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

