#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 513712893LLU;
volatile uint64_t x6 = 7LLU;
int32_t x7 = -1;
uint16_t x13 = 70U;
static uint32_t x18 = UINT32_MAX;
volatile int32_t x19 = -1;
int64_t x22 = 944423LL;
volatile uint64_t t6 = 368881342LLU;
int32_t x29 = INT32_MIN;
int16_t x44 = -1;
int32_t x45 = 261917223;
int64_t t12 = 518019LL;
int64_t x61 = -1LL;
static volatile uint64_t t15 = UINT64_MAX;
volatile uint64_t t16 = 96065393352984LLU;
static int16_t x84 = -1;
uint8_t x87 = UINT8_MAX;
static uint32_t t20 = UINT32_MAX;
static int8_t x106 = -1;
uint64_t t22 = 1367LLU;
static int64_t x115 = INT64_MAX;
int16_t x116 = INT16_MAX;
static volatile int16_t x119 = 1;
static int32_t x130 = INT32_MIN;
uint64_t x132 = 13LLU;
volatile int32_t x138 = -2646010;
int64_t x139 = -1LL;
uint8_t x142 = 1U;
volatile int64_t x144 = -4962402608013LL;
int64_t t29 = -1009174050459215LL;
static int32_t t30 = 45826476;
uint32_t x156 = 198895U;
int16_t x157 = INT16_MIN;
static int8_t x159 = INT8_MIN;
volatile int64_t x161 = INT64_MAX;
int32_t x169 = INT32_MIN;
uint8_t x178 = UINT8_MAX;
int32_t x181 = INT32_MIN;
uint64_t x196 = 39754097907LLU;
int32_t t43 = -77543;
static int8_t x217 = INT8_MIN;
static int16_t x220 = -1;
int32_t x232 = INT32_MIN;
static uint32_t x250 = 916U;
int32_t x251 = INT32_MIN;
int64_t x253 = INT64_MIN;
volatile int32_t x255 = INT32_MIN;
int64_t x266 = -1LL;
volatile int64_t t53 = -73160935727557061LL;
volatile int32_t x269 = -1;
int64_t x270 = INT64_MIN;
volatile int8_t x275 = INT8_MAX;
int16_t x277 = -55;
int32_t x278 = -1416;
int8_t x281 = 2;
int32_t x282 = INT32_MAX;
static int16_t x286 = INT16_MIN;
int8_t x287 = -1;
uint32_t t58 = 5239214U;
volatile uint32_t x307 = UINT32_MAX;
static int8_t x308 = -7;
int8_t x310 = -1;
volatile int32_t t62 = -100;
volatile int8_t x321 = -1;
int8_t x349 = 1;
static uint32_t t69 = 128999U;
uint64_t x354 = 14068153567LLU;
int64_t x361 = -1LL;
int32_t x380 = -1;
static int8_t x395 = 0;
static uint16_t x396 = 63U;
volatile int8_t x405 = -1;
int64_t x407 = INT64_MIN;
int16_t x414 = INT16_MAX;
static int64_t x416 = INT64_MIN;
uint64_t t79 = 659103772313745481LLU;
static volatile int32_t x422 = INT32_MIN;
static int32_t x425 = 18189;
volatile uint8_t x427 = 23U;
volatile int64_t t81 = 4125546LL;
static int8_t x442 = INT8_MIN;
volatile int32_t x448 = 116;
int16_t x454 = -1;
static volatile int32_t t88 = -33;
uint64_t x461 = 2672466LLU;
int16_t x466 = 1;
int16_t x482 = 1;
int32_t x483 = -6;
int64_t t96 = -290831813LL;
static uint16_t x503 = UINT16_MAX;
uint8_t x512 = UINT8_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint64_t x2 = UINT64_MAX;
	uint64_t x3 = 0LLU;
	int16_t x4 = INT16_MAX;

	t0 = (x1|(x2*(x3&x4)));

	if (t0 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 98U;
	int64_t x8 = INT64_MIN;
	uint64_t t1 = 765509632937093LLU;

	t1 = (x5|(x6*(x7&x8)));

	if (t1 != 9223372036854775906LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	uint16_t x10 = UINT16_MAX;
	volatile int16_t x11 = 149;
	int16_t x12 = -1;
	int32_t t2 = INT32_MAX;

	t2 = (x9|(x10*(x11&x12)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = 13U;
	uint16_t x15 = UINT16_MAX;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 1561734LLU;

	t3 = (x13|(x14*(x15&x16)));

	if (t3 != 851959LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -12;
	volatile int32_t x20 = 3;
	uint32_t t4 = 63064U;

	t4 = (x17|(x18*(x19&x20)));

	if (t4 != 4294967293U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	uint8_t x23 = UINT8_MAX;
	int32_t x24 = INT32_MIN;
	static int64_t t5 = INT64_MIN;

	t5 = (x21|(x22*(x23&x24)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -16;
	uint64_t x26 = 224860117255111603LLU;
	volatile int8_t x27 = -50;
	int32_t x28 = -1;

	t6 = (x25|(x26*(x27&x28)));

	if (t6 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 12U;
	int32_t x31 = INT32_MAX;
	int64_t x32 = 106LL;
	volatile int64_t t7 = -203820711422353LL;

	t7 = (x29|(x30*(x31&x32)));

	if (t7 != -2147482376LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	int32_t x35 = INT32_MIN;
	volatile int32_t x36 = INT32_MIN;
	uint64_t t8 = UINT64_MAX;

	t8 = (x33|(x34*(x35&x36)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	uint64_t x38 = 15LLU;
	int8_t x39 = -1;
	int64_t x40 = INT64_MIN;
	volatile uint64_t t9 = 1698605113978LLU;

	t9 = (x37|(x38*(x39&x40)));

	if (t9 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = -1;
	int32_t x43 = INT32_MAX;
	static volatile int64_t t10 = -353923478377105429LL;

	t10 = (x41|(x42*(x43&x44)));

	if (t10 != -2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = INT8_MAX;
	int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 4960817;

	t11 = (x45|(x46*(x47&x48)));

	if (t11 != -2323929) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 4610037U;
	int64_t x50 = -40686617871645LL;
	static int64_t x51 = INT64_MIN;
	volatile uint8_t x52 = 4U;

	t12 = (x49|(x50*(x51&x52)));

	if (t12 != 4610037LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	static int8_t x54 = -8;
	int64_t x55 = -1LL;
	uint32_t x56 = 14U;
	uint64_t t13 = UINT64_MAX;

	t13 = (x53|(x54*(x55&x56)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x62 = UINT16_MAX;
	volatile int16_t x63 = INT16_MIN;
	volatile uint64_t x64 = 2143974873692799974LLU;
	static volatile uint64_t t14 = UINT64_MAX;

	t14 = (x61|(x62*(x63&x64)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -1;
	int32_t x70 = 94383;
	uint64_t x71 = 969277411LLU;
	int16_t x72 = -253;

	t15 = (x69|(x70*(x71&x72)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x74 = 1605LLU;
	int8_t x75 = -1;
	int64_t x76 = INT64_MIN;

	t16 = (x73|(x74*(x75&x76)));

	if (t16 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 1LL;
	int8_t x78 = -15;
	int64_t x79 = 646913151580263LL;
	int64_t x80 = INT64_MIN;
	int64_t t17 = 24023014287LL;

	t17 = (x77|(x78*(x79&x80)));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = 111;
	uint32_t x82 = UINT32_MAX;
	static int16_t x83 = INT16_MIN;
	volatile uint32_t t18 = 17U;

	t18 = (x81|(x82*(x83&x84)));

	if (t18 != 32879U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x85 = 3645103U;
	int16_t x86 = 0;
	uint64_t x88 = UINT64_MAX;
	uint64_t t19 = 13339649645147LLU;

	t19 = (x85|(x86*(x87&x88)));

	if (t19 != 3645103LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MAX;
	volatile uint32_t x90 = 107U;
	int32_t x91 = -4135;
	int16_t x92 = -191;

	t20 = (x89|(x90*(x91&x92)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MAX;
	int32_t x98 = 266;
	static int64_t x99 = INT64_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	uint64_t t21 = UINT64_MAX;

	t21 = (x97|(x98*(x99&x100)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = UINT32_MAX;
	int64_t x107 = INT64_MIN;
	volatile uint64_t x108 = 176199718974469502LLU;

	t22 = (x105|(x106*(x107&x108)));

	if (t22 != 4294967295LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = -1524493671093LL;
	uint64_t x110 = 4LLU;
	volatile uint16_t x111 = 31626U;
	uint8_t x112 = 109U;
	uint64_t t23 = 592670238352008487LLU;

	t23 = (x109|(x110*(x111&x112)));

	if (t23 != 18446742549215880555LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = -1;
	int32_t x114 = -178715;
	volatile int64_t t24 = -1LL;

	t24 = (x113|(x114*(x115&x116)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -1;
	int8_t x118 = -1;
	static int16_t x120 = 0;
	volatile int32_t t25 = 2993332;

	t25 = (x117|(x118*(x119&x120)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MIN;
	volatile uint32_t x122 = UINT32_MAX;
	int32_t x123 = INT32_MAX;
	int16_t x124 = INT16_MIN;
	uint32_t t26 = 826505U;

	t26 = (x121|(x122*(x123&x124)));

	if (t26 != 4294934528U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x129 = INT32_MIN;
	uint16_t x131 = 13U;
	uint64_t t27 = 1247LLU;

	t27 = (x129|(x130*(x131&x132)));

	if (t27 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 7757038236838563933LLU;
	int64_t x140 = -1LL;
	volatile uint64_t t28 = 34315522LLU;

	t28 = (x137|(x138*(x139&x140)));

	if (t28 != 7757038236839108607LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = UINT16_MAX;
	uint16_t x143 = UINT16_MAX;

	t29 = (x141|(x142*(x143&x144)));

	if (t29 != 65535LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 108U;
	volatile int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MIN;
	volatile int8_t x148 = 57;

	t30 = (x145|(x146*(x147&x148)));

	if (t30 != 108) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = -2;
	static volatile int32_t x154 = -27288;
	volatile uint64_t x155 = UINT64_MAX;
	uint64_t t31 = 2040884095727937LLU;

	t31 = (x153|(x154*(x155&x156)));

	if (t31 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x158 = UINT8_MAX;
	int8_t x160 = INT8_MAX;
	int32_t t32 = 87119;

	t32 = (x157|(x158*(x159&x160)));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x162 = INT16_MIN;
	static int8_t x163 = -1;
	uint64_t x164 = 106599LLU;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x161|(x162*(x163&x164)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x170 = 20;
	uint64_t x171 = 18LLU;
	int16_t x172 = INT16_MIN;
	uint64_t t34 = 28117856185614609LLU;

	t34 = (x169|(x170*(x171&x172)));

	if (t34 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x177 = 0;
	volatile int8_t x179 = -1;
	int8_t x180 = -1;
	int32_t t35 = 88;

	t35 = (x177|(x178*(x179&x180)));

	if (t35 != -255) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x182 = 769;
	int64_t x183 = -2969470904056344918LL;
	uint32_t x184 = 4219U;
	int64_t t36 = 132181LL;

	t36 = (x181|(x182*(x183&x184)));

	if (t36 != -2147451350LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = -1;
	int16_t x187 = -7;
	int16_t x188 = -7;
	static int32_t t37 = -8;

	t37 = (x185|(x186*(x187&x188)));

	if (t37 != -32761) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = -5753;
	static int8_t x190 = INT8_MAX;
	uint16_t x191 = 105U;
	volatile uint8_t x192 = 10U;
	static int32_t t38 = -504;

	t38 = (x189|(x190*(x191&x192)));

	if (t38 != -5121) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x193 = 21639U;
	static volatile int64_t x194 = INT64_MIN;
	uint8_t x195 = 44U;
	static volatile uint64_t t39 = 2971063LLU;

	t39 = (x193|(x194*(x195&x196)));

	if (t39 != 21639LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x197 = UINT8_MAX;
	int32_t x198 = 115;
	int16_t x199 = 0;
	int8_t x200 = 2;
	volatile int32_t t40 = 23135;

	t40 = (x197|(x198*(x199&x200)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = 223093850936LL;
	int16_t x202 = INT16_MIN;
	static uint32_t x203 = 18328U;
	uint32_t x204 = 5U;
	volatile int64_t t41 = 1983426230531LL;

	t41 = (x201|(x202*(x203&x204)));

	if (t41 != 223093850936LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = -479;
	uint8_t x206 = 63U;
	int8_t x207 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;
	uint32_t t42 = 7898682U;

	t42 = (x205|(x206*(x207&x208)));

	if (t42 != 4294966945U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x213 = -52;
	volatile int32_t x214 = INT32_MIN;
	static int8_t x215 = 1;
	static int8_t x216 = INT8_MIN;

	t43 = (x213|(x214*(x215&x216)));

	if (t43 != -52) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x218 = UINT32_MAX;
	volatile uint32_t x219 = 105559U;
	static uint32_t t44 = 224U;

	t44 = (x217|(x218*(x219&x220)));

	if (t44 != 4294967209U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = 8U;
	int16_t x222 = 7;
	uint8_t x223 = 3U;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t45 = 6343270105646254LL;

	t45 = (x221|(x222*(x223&x224)));

	if (t45 != 8LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x229 = 14U;
	uint16_t x230 = UINT16_MAX;
	volatile uint64_t x231 = UINT64_MAX;
	uint64_t t46 = 16399614817LLU;

	t46 = (x229|(x230*(x231&x232)));

	if (t46 != 18446603338368679950LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = INT64_MIN;
	uint8_t x242 = 19U;
	int8_t x243 = INT8_MAX;
	volatile int32_t x244 = 305;
	int64_t t47 = 19630168888417445LL;

	t47 = (x241|(x242*(x243&x244)));

	if (t47 != -9223372036854774877LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = INT8_MAX;
	int16_t x246 = -1;
	uint8_t x247 = 20U;
	int8_t x248 = INT8_MAX;
	volatile int32_t t48 = 58173546;

	t48 = (x245|(x246*(x247&x248)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x249 = INT8_MAX;
	int32_t x252 = INT32_MIN;
	uint32_t t49 = 25U;

	t49 = (x249|(x250*(x251&x252)));

	if (t49 != 127U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x254 = INT64_MIN;
	uint32_t x256 = 56129U;
	static volatile int64_t t50 = INT64_MIN;

	t50 = (x253|(x254*(x255&x256)));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x257 = -191475;
	uint16_t x258 = 8340U;
	static int8_t x259 = -26;
	int64_t x260 = -22151592373LL;
	volatile int64_t t51 = -28061469595071LL;

	t51 = (x257|(x258*(x259&x260)));

	if (t51 != -139731LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x261 = -304367719885671871LL;
	uint8_t x262 = 11U;
	volatile int16_t x263 = -1;
	volatile int16_t x264 = INT16_MAX;
	volatile int64_t t52 = -22LL;

	t52 = (x261|(x262*(x263&x264)));

	if (t52 != -304367719885602827LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x265 = 5;
	static uint16_t x267 = 9114U;
	volatile int8_t x268 = 3;

	t53 = (x265|(x266*(x267&x268)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x271 = INT8_MAX;
	volatile int32_t x272 = 0;
	int64_t t54 = 9980775968418831LL;

	t54 = (x269|(x270*(x271&x272)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	static int64_t t55 = INT64_MIN;

	t55 = (x273|(x274*(x275&x276)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = -1;
	volatile int32_t t56 = -242687;

	t56 = (x277|(x278*(x279&x280)));

	if (t56 != -55) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x283 = INT64_MIN;
	int64_t x284 = 206147408158LL;
	static volatile int64_t t57 = -354612512143678613LL;

	t57 = (x281|(x282*(x283&x284)));

	if (t57 != 2LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x285 = 24716U;
	int8_t x288 = INT8_MIN;

	t58 = (x285|(x286*(x287&x288)));

	if (t58 != 4219020U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x297 = -846351321417399LL;
	volatile int32_t x298 = INT32_MIN;
	int8_t x299 = -6;
	uint64_t x300 = 2682284553LLU;
	static volatile uint64_t t59 = 7481986393482240LLU;

	t59 = (x297|(x298*(x299&x300)));

	if (t59 != 18446742971951987017LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x301 = 107970860846547062LLU;
	static uint8_t x302 = 99U;
	static uint16_t x303 = 0U;
	static int8_t x304 = INT8_MIN;
	volatile uint64_t t60 = 66488577525465454LLU;

	t60 = (x301|(x302*(x303&x304)));

	if (t60 != 107970860846547062LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x305 = -1;
	uint64_t x306 = 9LLU;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x305|(x306*(x307&x308)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x309 = UINT8_MAX;
	uint8_t x311 = UINT8_MAX;
	int16_t x312 = -1;

	t62 = (x309|(x310*(x311&x312)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x317 = 13827687U;
	static int16_t x318 = INT16_MIN;
	volatile uint16_t x319 = 1U;
	uint32_t x320 = 25U;
	volatile uint32_t t63 = 402664U;

	t63 = (x317|(x318*(x319&x320)));

	if (t63 != 4294966887U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x322 = 154259LLU;
	int8_t x323 = INT8_MAX;
	int16_t x324 = -1060;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x321|(x322*(x323&x324)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x333 = 62U;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = -3818;
	static int8_t x336 = INT8_MIN;
	int32_t t65 = 1;

	t65 = (x333|(x334*(x335&x336)));

	if (t65 != -251654338) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x337 = UINT8_MAX;
	int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MIN;
	uint16_t x340 = 0U;
	int64_t t66 = 146322582LL;

	t66 = (x337|(x338*(x339&x340)));

	if (t66 != 255LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x341 = 2U;
	int64_t x342 = -1LL;
	volatile int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MIN;
	volatile int64_t t67 = -26967LL;

	t67 = (x341|(x342*(x343&x344)));

	if (t67 != 32770LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x345 = 5U;
	static uint32_t x346 = 744U;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = -1;
	uint32_t t68 = 1U;

	t68 = (x345|(x346*(x347&x348)));

	if (t68 != 189725U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x350 = INT16_MIN;
	uint32_t x351 = 268U;
	static volatile uint16_t x352 = 1U;

	t69 = (x349|(x350*(x351&x352)));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x353 = 0U;
	int32_t x355 = INT32_MAX;
	uint16_t x356 = 15976U;
	volatile uint64_t t70 = 3104LLU;

	t70 = (x353|(x354*(x355&x356)));

	if (t70 != 224752821386392LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x362 = 8U;
	static uint8_t x363 = UINT8_MAX;
	volatile int16_t x364 = -797;
	int64_t t71 = -5865303LL;

	t71 = (x361|(x362*(x363&x364)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x369 = INT32_MAX;
	uint64_t x370 = UINT64_MAX;
	static uint16_t x371 = UINT16_MAX;
	uint8_t x372 = 3U;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x369|(x370*(x371&x372)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x377 = -2038169;
	int8_t x378 = -1;
	static int8_t x379 = INT8_MIN;
	volatile int32_t t73 = 2628708;

	t73 = (x377|(x378*(x379&x380)));

	if (t73 != -2038041) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x381 = INT64_MIN;
	int32_t x382 = INT32_MIN;
	volatile uint64_t x383 = 2567832LLU;
	uint16_t x384 = 409U;
	volatile uint64_t t74 = 42LLU;

	t74 = (x381|(x382*(x383&x384)));

	if (t74 != 18446743747292037120LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x389 = -1;
	int16_t x390 = -1;
	int16_t x391 = -1;
	volatile int8_t x392 = INT8_MIN;
	int32_t t75 = 1265;

	t75 = (x389|(x390*(x391&x392)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x393 = 708134794239617329LL;
	int64_t x394 = INT64_MAX;
	int64_t t76 = 285118684985250229LL;

	t76 = (x393|(x394*(x395&x396)));

	if (t76 != 708134794239617329LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x397 = 2018U;
	int64_t x398 = -1LL;
	static int8_t x399 = INT8_MIN;
	volatile int16_t x400 = INT16_MIN;
	int64_t t77 = 9398833381LL;

	t77 = (x397|(x398*(x399&x400)));

	if (t77 != 34786LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x406 = UINT8_MAX;
	uint8_t x408 = 7U;
	int64_t t78 = 128959265196642LL;

	t78 = (x405|(x406*(x407&x408)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x413 = INT8_MIN;
	volatile uint64_t x415 = 17682407LLU;

	t79 = (x413|(x414*(x415&x416)));

	if (t79 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x421 = -19;
	uint64_t x423 = 4549225840471324LLU;
	int16_t x424 = -4711;
	volatile uint64_t t80 = 3848LLU;

	t80 = (x421|(x422*(x423&x424)));

	if (t80 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x426 = INT32_MAX;
	int64_t x428 = INT64_MIN;

	t81 = (x425|(x426*(x427&x428)));

	if (t81 != 18189LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x429 = INT16_MIN;
	static uint64_t x430 = 5486621LLU;
	int32_t x431 = INT32_MIN;
	int64_t x432 = INT64_MAX;
	static volatile uint64_t t82 = 882296LLU;

	t82 = (x429|(x430*(x431&x432)));

	if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x433 = 24435962564357783LLU;
	static uint32_t x434 = 6U;
	int8_t x435 = INT8_MIN;
	int64_t x436 = -1LL;
	uint64_t t83 = 0LLU;

	t83 = (x433|(x434*(x435&x436)));

	if (t83 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x437 = 244059150LL;
	int64_t x438 = 2438LL;
	int32_t x439 = 611615683;
	int8_t x440 = -2;
	static int64_t t84 = -1LL;

	t84 = (x437|(x438*(x439&x440)));

	if (t84 != 1491152588174LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x441 = -1;
	int16_t x443 = -1;
	int64_t x444 = 250471825LL;
	volatile int64_t t85 = -560477458938773LL;

	t85 = (x441|(x442*(x443&x444)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x445 = INT64_MIN;
	volatile uint64_t x446 = UINT64_MAX;
	static int64_t x447 = -52226091847430643LL;
	uint64_t t86 = 32319143LLU;

	t86 = (x445|(x446*(x447&x448)));

	if (t86 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x453 = INT64_MIN;
	int32_t x455 = -1;
	uint32_t x456 = 203U;
	static int64_t t87 = -134030211253517LL;

	t87 = (x453|(x454*(x455&x456)));

	if (t87 != -9223372032559808715LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x457 = INT8_MIN;
	int8_t x458 = -1;
	int8_t x459 = -25;
	uint16_t x460 = 5U;

	t88 = (x457|(x458*(x459&x460)));

	if (t88 != -5) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x462 = INT8_MIN;
	volatile int32_t x463 = INT32_MIN;
	uint16_t x464 = 117U;
	volatile uint64_t t89 = 1707458LLU;

	t89 = (x461|(x462*(x463&x464)));

	if (t89 != 2672466LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x465 = 31U;
	int32_t x467 = -1;
	uint32_t x468 = 16355639U;
	volatile uint32_t t90 = 1U;

	t90 = (x465|(x466*(x467&x468)));

	if (t90 != 16355647U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x469 = -3;
	uint16_t x470 = 3808U;
	int16_t x471 = -1;
	int8_t x472 = 1;
	volatile int32_t t91 = 248953064;

	t91 = (x469|(x470*(x471&x472)));

	if (t91 != -3) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x473 = UINT8_MAX;
	int32_t x474 = -206;
	int16_t x475 = INT16_MIN;
	int8_t x476 = 1;
	volatile int32_t t92 = 1745012;

	t92 = (x473|(x474*(x475&x476)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x477 = 3U;
	int16_t x478 = -5;
	uint8_t x479 = 3U;
	int8_t x480 = -1;
	volatile int32_t t93 = -7;

	t93 = (x477|(x478*(x479&x480)));

	if (t93 != -13) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x481 = 1;
	int64_t x484 = 75968334591LL;
	volatile int64_t t94 = -46828635090698LL;

	t94 = (x481|(x482*(x483&x484)));

	if (t94 != 75968334587LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x493 = -1;
	int32_t x494 = INT32_MIN;
	static uint64_t x495 = 172138165LLU;
	volatile int64_t x496 = -570497087204LL;
	uint64_t t95 = UINT64_MAX;

	t95 = (x493|(x494*(x495&x496)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x497 = 1U;
	int64_t x498 = -1LL;
	volatile int8_t x499 = INT8_MAX;
	volatile int8_t x500 = INT8_MIN;

	t96 = (x497|(x498*(x499&x500)));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x501 = UINT64_MAX;
	int8_t x502 = INT8_MIN;
	int32_t x504 = -30113;
	static uint64_t t97 = UINT64_MAX;

	t97 = (x501|(x502*(x503&x504)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x505 = 21U;
	int64_t x506 = -1LL;
	int8_t x507 = INT8_MAX;
	uint8_t x508 = 53U;
	static volatile int64_t t98 = -1294892902871739848LL;

	t98 = (x505|(x506*(x507&x508)));

	if (t98 != -33LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x509 = INT32_MIN;
	int16_t x510 = INT16_MAX;
	uint16_t x511 = 30U;
	volatile int32_t t99 = 120721;

	t99 = (x509|(x510*(x511&x512)));

	if (t99 != -2146500638) { NG(); } else { ; }
	
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

