#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 1257LLU;
int64_t x3 = INT64_MAX;
int32_t x10 = 3182071;
static int8_t x11 = INT8_MIN;
static int64_t x19 = INT64_MIN;
int64_t x20 = -144057627593444036LL;
int64_t x32 = -1LL;
volatile uint8_t x33 = 2U;
uint32_t x57 = UINT32_MAX;
volatile int8_t x66 = INT8_MAX;
int16_t x82 = INT16_MIN;
volatile int64_t t13 = 276319LL;
volatile int64_t t14 = -368811361916201LL;
volatile int16_t x95 = INT16_MAX;
int8_t x98 = INT8_MIN;
int16_t x99 = -939;
uint16_t x107 = UINT16_MAX;
int16_t x111 = INT16_MAX;
int64_t x113 = 78LL;
uint16_t x122 = 0U;
uint8_t x123 = UINT8_MAX;
uint16_t x148 = 2U;
static int32_t x159 = INT32_MIN;
uint64_t t25 = 53825LLU;
volatile uint64_t x171 = 715LLU;
static uint8_t x183 = UINT8_MAX;
uint8_t x184 = UINT8_MAX;
int32_t x191 = 1;
static volatile int64_t x198 = -1LL;
volatile int64_t t31 = 263516632129LL;
uint32_t x211 = 7435U;
static uint8_t x217 = 11U;
int32_t x230 = INT32_MIN;
int16_t x231 = -1;
static uint32_t x232 = 6244U;
uint64_t x243 = UINT64_MAX;
volatile uint8_t x244 = UINT8_MAX;
static int8_t x246 = INT8_MAX;
volatile int8_t x247 = INT8_MIN;
int64_t x277 = -15LL;
static uint16_t x278 = 347U;
static int64_t x299 = -683115607LL;
uint8_t x300 = UINT8_MAX;
static int64_t x307 = -39313804000574LL;
uint64_t t50 = 45184402LLU;
uint32_t x309 = 7179U;
static int8_t x311 = INT8_MAX;
int8_t x312 = INT8_MAX;
int64_t x314 = 392842LL;
volatile int16_t x316 = -5;
static volatile uint64_t t54 = 13LLU;
static int32_t x330 = INT32_MAX;
volatile int64_t t55 = 39333884781963LL;
volatile uint32_t x356 = 2841516U;
uint64_t x357 = 8032LLU;
static volatile uint32_t x361 = UINT32_MAX;
volatile uint32_t t60 = 18U;
uint64_t x373 = UINT64_MAX;
static int16_t x374 = INT16_MIN;
volatile uint64_t t61 = 88040747754LLU;
int8_t x389 = -1;
int16_t x396 = INT16_MAX;
int8_t x405 = INT8_MIN;
volatile int32_t x409 = INT32_MAX;
static uint64_t x413 = 1727428970928957958LLU;
static int8_t x424 = INT8_MAX;
static int16_t x433 = INT16_MIN;
int8_t x436 = INT8_MAX;
volatile int16_t x437 = INT16_MAX;
volatile uint16_t x438 = 110U;
uint16_t x441 = UINT16_MAX;
uint32_t t73 = 62382851U;
uint64_t x462 = UINT64_MAX;
static uint32_t x470 = 223U;
int64_t x475 = -1LL;
uint32_t x477 = 1U;
uint32_t x479 = 27013229U;
static int32_t x480 = -17;
int64_t x484 = 13671565280LL;
uint32_t x488 = 3882043U;
static volatile uint32_t x507 = UINT32_MAX;
uint64_t t82 = 1315LLU;
static volatile uint64_t t84 = 1LLU;
int32_t x519 = -1;
int64_t t86 = 16062404555718LL;
int32_t x534 = INT32_MIN;
volatile uint8_t x536 = UINT8_MAX;
int16_t x537 = INT16_MIN;
static int32_t x540 = -32394;
int32_t x546 = -10050389;
volatile int64_t t89 = 11202870LL;
static int8_t x553 = -1;
int16_t x556 = -4;
int8_t x565 = 7;
uint32_t t92 = 24250643U;
uint32_t x571 = UINT32_MAX;
volatile uint32_t x577 = 462U;
int8_t x579 = 10;
int32_t x584 = INT32_MIN;
int16_t x600 = -1;
volatile int32_t t98 = -9;
uint32_t x608 = 48U;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	uint8_t x4 = 91U;
	volatile uint64_t t0 = 21LLU;

	t0 = ((x1+x2)%(x3&x4));

	if (t0 != 56LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 73U;
	int16_t x6 = -1;
	volatile uint32_t x7 = 1U;
	static int32_t x8 = INT32_MAX;
	static volatile uint32_t t1 = 480431968U;

	t1 = ((x5+x6)%(x7&x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	uint64_t x12 = 22752540613LLU;
	volatile uint64_t t2 = 1763LLU;

	t2 = ((x9+x10)%(x11&x12));

	if (t2 != 3182072LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 20U;
	int64_t x18 = INT64_MIN;
	int64_t t3 = 31403057769LL;

	t3 = ((x17+x18)%(x19&x20));

	if (t3 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x25 = -1;
	uint8_t x26 = 58U;
	volatile int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t4 = 233734212513LL;

	t4 = ((x25+x26)%(x27&x28));

	if (t4 != 57LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = 6LL;
	int16_t x30 = INT16_MIN;
	static int32_t x31 = INT32_MIN;
	volatile int64_t t5 = -3776752700LL;

	t5 = ((x29+x30)%(x31&x32));

	if (t5 != -32762LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x34 = 6847LL;
	uint32_t x35 = UINT32_MAX;
	volatile int32_t x36 = 6;
	volatile int64_t t6 = 2586065241LL;

	t6 = ((x33+x34)%(x35&x36));

	if (t6 != 3LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 89U;
	int64_t x38 = -1LL;
	volatile uint32_t x39 = UINT32_MAX;
	volatile int32_t x40 = INT32_MIN;
	volatile int64_t t7 = -400619LL;

	t7 = ((x37+x38)%(x39&x40));

	if (t7 != 88LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = UINT16_MAX;
	int64_t x50 = 2488LL;
	int8_t x51 = INT8_MAX;
	int8_t x52 = INT8_MAX;
	int64_t t8 = -2LL;

	t8 = ((x49+x50)%(x51&x52));

	if (t8 != 78LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x58 = INT16_MIN;
	uint8_t x59 = UINT8_MAX;
	int8_t x60 = INT8_MIN;
	uint32_t t9 = 41984122U;

	t9 = ((x57+x58)%(x59&x60));

	if (t9 != 127U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = 5U;
	int64_t x67 = -434556328910LL;
	static volatile int8_t x68 = INT8_MIN;
	volatile int64_t t10 = 1049371891708451390LL;

	t10 = ((x65+x66)%(x67&x68));

	if (t10 != 132LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x73 = UINT32_MAX;
	int64_t x74 = INT64_MIN;
	int64_t x75 = INT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile int64_t t11 = -33718865295027LL;

	t11 = ((x73+x74)%(x75&x76));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x77 = 65674;
	int64_t x78 = -1LL;
	volatile int64_t x79 = INT64_MAX;
	volatile uint16_t x80 = UINT16_MAX;
	int64_t t12 = 3702583199323LL;

	t12 = ((x77+x78)%(x79&x80));

	if (t12 != 138LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x81 = INT16_MIN;
	int64_t x83 = 7LL;
	int64_t x84 = -31364LL;

	t13 = ((x81+x82)%(x83&x84));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x89 = 1212;
	volatile int16_t x90 = -6;
	uint8_t x91 = UINT8_MAX;
	static int64_t x92 = 93077LL;

	t14 = ((x89+x90)%(x91&x92));

	if (t14 != 14LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = INT8_MAX;
	uint32_t x94 = UINT32_MAX;
	int16_t x96 = -1;
	volatile uint32_t t15 = 2U;

	t15 = ((x93+x94)%(x95&x96));

	if (t15 != 126U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x97 = 1U;
	volatile int16_t x100 = -1;
	static int32_t t16 = 10069094;

	t16 = ((x97+x98)%(x99&x100));

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x105 = 736729859;
	int8_t x106 = INT8_MAX;
	uint32_t x108 = UINT32_MAX;
	uint32_t t17 = 1U;

	t17 = ((x105+x106)%(x107&x108));

	if (t17 != 51051U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = INT8_MAX;
	uint32_t x110 = 62U;
	uint16_t x112 = UINT16_MAX;
	uint32_t t18 = 1U;

	t18 = ((x109+x110)%(x111&x112));

	if (t18 != 189U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x114 = 6U;
	uint8_t x115 = 4U;
	int8_t x116 = INT8_MAX;
	static int64_t t19 = 223476476724LL;

	t19 = ((x113+x114)%(x115&x116));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = INT64_MIN;
	static int64_t x118 = INT64_MAX;
	volatile int32_t x119 = INT32_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	volatile uint64_t t20 = 148LLU;

	t20 = ((x117+x118)%(x119&x120));

	if (t20 != 3LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = INT32_MIN;
	static uint16_t x124 = 620U;
	volatile int32_t t21 = 87639;

	t21 = ((x121+x122)%(x123&x124));

	if (t21 != -92) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = -38;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t22 = 301101U;

	t22 = ((x133+x134)%(x135&x136));

	if (t22 != 2147483482U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x137 = 22U;
	uint64_t x138 = 45896109LLU;
	int64_t x139 = -1LL;
	volatile int64_t x140 = INT64_MIN;
	uint64_t t23 = 17226412849016LLU;

	t23 = ((x137+x138)%(x139&x140));

	if (t23 != 45896131LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x145 = INT64_MIN;
	volatile int32_t x146 = INT32_MAX;
	int32_t x147 = INT32_MAX;
	int64_t t24 = 1LL;

	t24 = ((x145+x146)%(x147&x148));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x157 = INT32_MIN;
	uint16_t x158 = 176U;
	uint64_t x160 = 163969702564590832LLU;

	t25 = ((x157+x158)%(x159&x160));

	if (t25 != 82137570896511152LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x165 = -1;
	int64_t x166 = -1LL;
	int16_t x167 = INT16_MAX;
	uint16_t x168 = 20U;
	int64_t t26 = 1900409109776915LL;

	t26 = ((x165+x166)%(x167&x168));

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x169 = INT16_MIN;
	static volatile int8_t x170 = INT8_MAX;
	int64_t x172 = -1LL;
	uint64_t t27 = 250044267368142577LLU;

	t27 = ((x169+x170)%(x171&x172));

	if (t27 != 265LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x181 = UINT8_MAX;
	static uint32_t x182 = UINT32_MAX;
	volatile uint32_t t28 = 413056U;

	t28 = ((x181+x182)%(x183&x184));

	if (t28 != 254U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x189 = 1;
	uint8_t x190 = 5U;
	static uint64_t x192 = UINT64_MAX;
	volatile uint64_t t29 = 31361783342LLU;

	t29 = ((x189+x190)%(x191&x192));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x193 = 169;
	static uint32_t x194 = 529095073U;
	uint64_t x195 = 148356819LLU;
	uint8_t x196 = 13U;
	volatile uint64_t t30 = 2LLU;

	t30 = ((x193+x194)%(x195&x196));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x197 = INT32_MIN;
	uint32_t x199 = 30U;
	uint8_t x200 = UINT8_MAX;

	t31 = ((x197+x198)%(x199&x200));

	if (t31 != -9LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x205 = 1;
	uint32_t x206 = UINT32_MAX;
	volatile int8_t x207 = -17;
	int8_t x208 = INT8_MIN;
	volatile uint32_t t32 = 816094U;

	t32 = ((x205+x206)%(x207&x208));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x209 = INT8_MIN;
	static int32_t x210 = 103829;
	volatile int16_t x212 = -1;
	uint32_t t33 = 1U;

	t33 = ((x209+x210)%(x211&x212));

	if (t33 != 7046U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x218 = UINT64_MAX;
	int64_t x219 = INT64_MIN;
	int16_t x220 = INT16_MIN;
	uint64_t t34 = 169671130590712657LLU;

	t34 = ((x217+x218)%(x219&x220));

	if (t34 != 10LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x221 = -1;
	volatile int32_t x222 = INT32_MAX;
	volatile int8_t x223 = INT8_MIN;
	uint64_t x224 = UINT64_MAX;
	uint64_t t35 = 867032872144628LLU;

	t35 = ((x221+x222)%(x223&x224));

	if (t35 != 2147483646LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x229 = 0;
	uint32_t t36 = 1936082924U;

	t36 = ((x229+x230)%(x231&x232));

	if (t36 != 3460U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x233 = UINT8_MAX;
	int8_t x234 = 0;
	uint64_t x235 = 274681808457LLU;
	static int16_t x236 = INT16_MIN;
	uint64_t t37 = 623LLU;

	t37 = ((x233+x234)%(x235&x236));

	if (t37 != 255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x237 = 2113948083463014075LL;
	int64_t x238 = 3150LL;
	volatile int64_t x239 = 419106950LL;
	int64_t x240 = -5511LL;
	volatile int64_t t38 = 3822434LL;

	t38 = ((x237+x238)%(x239&x240));

	if (t38 != 119493385LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x241 = 9138072518248LL;
	static int32_t x242 = -1;
	volatile uint64_t t39 = 516802408817LLU;

	t39 = ((x241+x242)%(x243&x244));

	if (t39 != 237LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x245 = INT8_MIN;
	volatile int16_t x248 = INT16_MIN;
	int32_t t40 = -3694670;

	t40 = ((x245+x246)%(x247&x248));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MIN;
	volatile uint32_t t41 = 332U;

	t41 = ((x249+x250)%(x251&x252));

	if (t41 != 4294967167U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x257 = -1;
	uint8_t x258 = 68U;
	uint16_t x259 = UINT16_MAX;
	static int64_t x260 = INT64_MAX;
	volatile int64_t t42 = 2011705703676555549LL;

	t42 = ((x257+x258)%(x259&x260));

	if (t42 != 67LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x261 = 11334LLU;
	uint16_t x262 = 41U;
	int32_t x263 = -20;
	uint16_t x264 = 1959U;
	volatile uint64_t t43 = 5427945164LLU;

	t43 = ((x261+x262)%(x263&x264));

	if (t43 != 1595LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MAX;
	int32_t x272 = INT32_MIN;
	int64_t t44 = -1805522702431278LL;

	t44 = ((x269+x270)%(x271&x272));

	if (t44 != -32896LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x273 = INT8_MIN;
	volatile uint64_t x274 = 6LLU;
	int64_t x275 = INT64_MAX;
	uint64_t x276 = 12917208039LLU;
	uint64_t t45 = 1551699369297LLU;

	t45 = ((x273+x274)%(x275&x276));

	if (t45 != 7489259864LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x279 = INT64_MAX;
	volatile uint8_t x280 = 7U;
	volatile int64_t t46 = 850140860405LL;

	t46 = ((x277+x278)%(x279&x280));

	if (t46 != 3LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x285 = 3;
	uint16_t x286 = 12282U;
	static int32_t x287 = -1;
	int16_t x288 = INT16_MIN;
	volatile int32_t t47 = 1;

	t47 = ((x285+x286)%(x287&x288));

	if (t47 != 12285) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x297 = INT64_MIN;
	uint16_t x298 = 5719U;
	volatile int64_t t48 = -1436LL;

	t48 = ((x297+x298)%(x299&x300));

	if (t48 != -74LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x301 = -1;
	static int64_t x302 = -5368506090365236LL;
	int64_t x303 = 3420816715408594LL;
	volatile int16_t x304 = -1;
	int64_t t49 = 147516203671960611LL;

	t49 = ((x301+x302)%(x303&x304));

	if (t49 != -1947689374956643LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x305 = UINT64_MAX;
	volatile int8_t x306 = INT8_MAX;
	volatile int8_t x308 = -61;

	t50 = ((x305+x306)%(x307&x308));

	if (t50 != 126LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x310 = -2LL;
	static int64_t t51 = 1LL;

	t51 = ((x309+x310)%(x311&x312));

	if (t51 != 65LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x313 = -1;
	int8_t x315 = -1;
	int64_t t52 = -1755983217852344LL;

	t52 = ((x313+x314)%(x315&x316));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x321 = 20835259LLU;
	static int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	volatile int8_t x324 = -1;
	volatile uint64_t t53 = 346428102620203050LLU;

	t53 = ((x321+x322)%(x323&x324));

	if (t53 != 9223372036875611067LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x325 = INT8_MAX;
	volatile int8_t x326 = -1;
	uint16_t x327 = 664U;
	uint64_t x328 = UINT64_MAX;

	t54 = ((x325+x326)%(x327&x328));

	if (t54 != 126LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x329 = 9110307232578LL;
	int8_t x331 = -1;
	volatile uint8_t x332 = 4U;

	t55 = ((x329+x330)%(x331&x332));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x341 = -30170423469271LL;
	static int8_t x342 = INT8_MIN;
	int64_t x343 = 1329425256275888735LL;
	uint32_t x344 = UINT32_MAX;
	int64_t t56 = 9550344757736LL;

	t56 = ((x341+x342)%(x343&x344));

	if (t56 != -83737930LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x345 = INT8_MIN;
	volatile int8_t x346 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t x348 = -255986228;
	volatile int32_t t57 = -155543903;

	t57 = ((x345+x346)%(x347&x348));

	if (t57 != -256) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x353 = UINT32_MAX;
	int16_t x354 = INT16_MAX;
	int32_t x355 = INT32_MAX;
	volatile uint32_t t58 = 1194U;

	t58 = ((x353+x354)%(x355&x356));

	if (t58 != 32766U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x358 = INT32_MAX;
	int8_t x359 = 1;
	int32_t x360 = -1;
	uint64_t t59 = 68938LLU;

	t59 = ((x357+x358)%(x359&x360));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = -1;
	int16_t x364 = -1;

	t60 = ((x361+x362)%(x363&x364));

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x375 = 13223U;
	static int16_t x376 = 1;

	t61 = ((x373+x374)%(x375&x376));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x390 = 229422LLU;
	volatile int32_t x391 = 2;
	int32_t x392 = -1;
	volatile uint64_t t62 = 500536397LLU;

	t62 = ((x389+x390)%(x391&x392));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x393 = 0U;
	uint32_t x394 = UINT32_MAX;
	volatile int16_t x395 = -7949;
	volatile uint32_t t63 = 254U;

	t63 = ((x393+x394)%(x395&x396));

	if (t63 != 14526U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x406 = UINT32_MAX;
	volatile int8_t x407 = -6;
	int32_t x408 = INT32_MIN;
	uint32_t t64 = 13473U;

	t64 = ((x405+x406)%(x407&x408));

	if (t64 != 2147483519U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x410 = -1;
	int16_t x411 = -105;
	volatile int16_t x412 = INT16_MIN;
	int32_t t65 = 0;

	t65 = ((x409+x410)%(x411&x412));

	if (t65 != 32766) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x414 = INT8_MIN;
	int64_t x415 = INT64_MAX;
	int32_t x416 = -790412050;
	volatile uint64_t t66 = 38065567809899LLU;

	t66 = ((x413+x414)%(x415&x416));

	if (t66 != 1727428970928957830LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x417 = -1;
	int32_t x418 = 7697;
	int16_t x419 = -1;
	static volatile int64_t x420 = INT64_MAX;
	volatile int64_t t67 = -21500065595LL;

	t67 = ((x417+x418)%(x419&x420));

	if (t67 != 7696LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x421 = 35;
	volatile int64_t x422 = INT64_MIN;
	int8_t x423 = INT8_MAX;
	int64_t t68 = -1101089987491064573LL;

	t68 = ((x421+x422)%(x423&x424));

	if (t68 != -93LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x425 = INT16_MAX;
	static volatile int8_t x426 = INT8_MIN;
	uint32_t x427 = 49752U;
	int8_t x428 = INT8_MAX;
	uint32_t t69 = 506635102U;

	t69 = ((x425+x426)%(x427&x428));

	if (t69 != 79U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x434 = UINT64_MAX;
	volatile uint64_t x435 = UINT64_MAX;
	volatile uint64_t t70 = 3902LLU;

	t70 = ((x433+x434)%(x435&x436));

	if (t70 != 126LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x439 = -1;
	volatile int32_t x440 = -1;
	static volatile int32_t t71 = 250108;

	t71 = ((x437+x438)%(x439&x440));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x442 = 16237U;
	static uint16_t x443 = 21U;
	static int64_t x444 = -1LL;
	int64_t t72 = -28259LL;

	t72 = ((x441+x442)%(x443&x444));

	if (t72 != 19LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x449 = -1;
	static int32_t x450 = 31952210;
	static int16_t x451 = INT16_MAX;
	uint32_t x452 = 231U;

	t73 = ((x449+x450)%(x451&x452));

	if (t73 != 58U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x453 = -214;
	uint64_t x454 = 665990528641370864LLU;
	uint16_t x455 = UINT16_MAX;
	volatile int8_t x456 = INT8_MAX;
	uint64_t t74 = 62303901824121LLU;

	t74 = ((x453+x454)%(x455&x456));

	if (t74 != 79LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x461 = INT8_MIN;
	volatile int64_t x463 = INT64_MAX;
	uint64_t x464 = 772376LLU;
	uint64_t t75 = 464242LLU;

	t75 = ((x461+x462)%(x463&x464));

	if (t75 != 484767LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x469 = UINT8_MAX;
	int16_t x471 = -1;
	int8_t x472 = 43;
	uint32_t t76 = 48U;

	t76 = ((x469+x470)%(x471&x472));

	if (t76 != 5U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x473 = INT32_MAX;
	volatile uint32_t x474 = 1U;
	uint64_t x476 = 210931LLU;
	static uint64_t t77 = 253939904997930907LLU;

	t77 = ((x473+x474)%(x475&x476));

	if (t77 != 206068LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x478 = INT16_MIN;
	static uint32_t t78 = 4271U;

	t78 = ((x477+x478)%(x479&x480));

	if (t78 != 26844347U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x481 = 0U;
	static int16_t x482 = INT16_MAX;
	int8_t x483 = INT8_MIN;
	int64_t t79 = 2068005103322390800LL;

	t79 = ((x481+x482)%(x483&x484));

	if (t79 != 32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x485 = 52U;
	static int32_t x486 = INT32_MIN;
	static int64_t x487 = -1LL;
	int64_t t80 = 3282427418899LL;

	t80 = ((x485+x486)%(x487&x488));

	if (t80 != 713921LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x489 = -55;
	uint16_t x490 = 20U;
	uint64_t x491 = UINT64_MAX;
	uint8_t x492 = 1U;
	static volatile uint64_t t81 = 268687841585484LLU;

	t81 = ((x489+x490)%(x491&x492));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x505 = 20455932648314999LLU;
	volatile int64_t x506 = INT64_MIN;
	uint64_t x508 = 3518375635340766LLU;

	t82 = ((x505+x506)%(x507&x508));

	if (t82 != 1262241127LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x509 = -10894846994LL;
	volatile uint64_t x510 = 13LLU;
	static volatile int64_t x511 = -1LL;
	static volatile int64_t x512 = -1LL;
	static uint64_t t83 = 58058990737LLU;

	t83 = ((x509+x510)%(x511&x512));

	if (t83 != 18446744062814704635LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x513 = UINT64_MAX;
	static volatile int32_t x514 = -493;
	static int32_t x515 = INT32_MAX;
	int8_t x516 = INT8_MIN;

	t84 = ((x513+x514)%(x515&x516));

	if (t84 != 65042LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x517 = INT8_MIN;
	volatile int16_t x518 = -1;
	int32_t x520 = INT32_MAX;
	int32_t t85 = 17851488;

	t85 = ((x517+x518)%(x519&x520));

	if (t85 != -129) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x521 = UINT32_MAX;
	volatile int8_t x522 = -1;
	uint32_t x523 = 517550U;
	volatile int64_t x524 = 10436410LL;

	t86 = ((x521+x522)%(x523&x524));

	if (t86 != 31542LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x533 = -28484094059850288LL;
	uint64_t x535 = 945LLU;
	static volatile uint64_t t87 = 118LLU;

	t87 = ((x533+x534)%(x535&x536));

	if (t87 != 80LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x538 = -1;
	int8_t x539 = INT8_MAX;
	int32_t t88 = 621086;

	t88 = ((x537+x538)%(x539&x540));

	if (t88 != -83) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x545 = INT16_MIN;
	static int64_t x547 = -111286145135123683LL;
	static int16_t x548 = INT16_MIN;

	t89 = ((x545+x546)%(x547&x548));

	if (t89 != -10083157LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x554 = 1U;
	int8_t x555 = INT8_MIN;
	static uint32_t t90 = 476900675U;

	t90 = ((x553+x554)%(x555&x556));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x561 = -1;
	int32_t x562 = INT32_MAX;
	volatile int32_t x563 = INT32_MAX;
	uint64_t x564 = 388LLU;
	uint64_t t91 = 2970047245809LLU;

	t91 = ((x561+x562)%(x563&x564));

	if (t91 != 258LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x566 = 6U;
	uint32_t x567 = UINT32_MAX;
	volatile int8_t x568 = 18;

	t92 = ((x565+x566)%(x567&x568));

	if (t92 != 13U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x569 = UINT32_MAX;
	int16_t x570 = -5;
	volatile int16_t x572 = INT16_MIN;
	volatile uint32_t t93 = 618U;

	t93 = ((x569+x570)%(x571&x572));

	if (t93 != 32762U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x578 = -234;
	volatile int64_t x580 = -1LL;
	static int64_t t94 = -54828622133157LL;

	t94 = ((x577+x578)%(x579&x580));

	if (t94 != 8LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x581 = UINT16_MAX;
	int16_t x582 = INT16_MIN;
	int64_t x583 = INT64_MIN;
	volatile int64_t t95 = -8463955524611658LL;

	t95 = ((x581+x582)%(x583&x584));

	if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x585 = 0;
	int16_t x586 = 743;
	int32_t x587 = -789049563;
	int16_t x588 = INT16_MAX;
	int32_t t96 = 8;

	t96 = ((x585+x586)%(x587&x588));

	if (t96 != 743) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x597 = INT32_MIN;
	int8_t x598 = 45;
	uint32_t x599 = 211689U;
	volatile uint32_t t97 = 24324270U;

	t97 = ((x597+x598)%(x599&x600));

	if (t97 != 110477U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x601 = 838;
	int32_t x602 = -4;
	int8_t x603 = -1;
	int32_t x604 = INT32_MIN;

	t98 = ((x601+x602)%(x603&x604));

	if (t98 != 834) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x605 = 4053U;
	int16_t x606 = INT16_MAX;
	uint8_t x607 = UINT8_MAX;
	static uint32_t t99 = 29731U;

	t99 = ((x605+x606)%(x607&x608));

	if (t99 != 4U) { NG(); } else { ; }
	
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

