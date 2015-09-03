#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x16 = INT16_MIN;
int32_t t2 = 3497001;
static volatile uint16_t x17 = 5055U;
int8_t x20 = INT8_MIN;
uint32_t x38 = UINT32_MAX;
int64_t x46 = INT64_MAX;
volatile int32_t x49 = INT32_MIN;
uint8_t x53 = 120U;
volatile int16_t x54 = INT16_MIN;
static volatile int16_t x56 = -16;
volatile uint32_t x58 = 9986770U;
int32_t x59 = -1;
uint16_t x60 = 8832U;
volatile uint32_t t12 = UINT32_MAX;
int64_t x61 = 486265612LL;
int8_t x63 = INT8_MAX;
volatile int16_t x70 = -71;
volatile int32_t t14 = 71414566;
int64_t x89 = INT64_MIN;
uint16_t x108 = 28488U;
volatile uint16_t x111 = UINT16_MAX;
volatile int64_t t20 = 3718LL;
int64_t x119 = -1LL;
int8_t x121 = 25;
static uint16_t x122 = 8655U;
static int16_t x127 = INT16_MIN;
int16_t x136 = INT16_MIN;
static int8_t x137 = INT8_MAX;
static uint16_t x138 = UINT16_MAX;
int16_t x150 = INT16_MIN;
uint32_t x154 = 15717U;
uint64_t t33 = 16210497LLU;
int16_t x168 = 14;
volatile uint16_t x169 = 0U;
uint64_t x170 = 1062590662533LLU;
int64_t x175 = -2772LL;
static uint64_t x179 = 14LLU;
uint64_t t37 = 1458353353LLU;
volatile uint64_t x184 = UINT64_MAX;
volatile int8_t x202 = INT8_MAX;
int64_t x221 = 6225275LL;
volatile int64_t t42 = 139910LL;
static uint64_t t45 = 714675050759LLU;
uint8_t x243 = UINT8_MAX;
int64_t t46 = 0LL;
volatile int8_t x249 = -14;
int64_t x253 = INT64_MIN;
int64_t x255 = -1LL;
volatile uint64_t t48 = 662772LLU;
uint16_t x261 = 0U;
int16_t x262 = INT16_MAX;
uint32_t x270 = UINT32_MAX;
int64_t x271 = INT64_MIN;
uint64_t x272 = 319057189616LLU;
int8_t x279 = INT8_MIN;
uint16_t x281 = 3U;
static int64_t x283 = INT64_MIN;
uint8_t x302 = 0U;
int32_t t54 = INT32_MIN;
int32_t x307 = -1;
static int32_t x308 = -724453;
volatile uint64_t t55 = 5290552LLU;
int64_t x311 = -1LL;
static uint8_t x320 = UINT8_MAX;
static uint16_t x323 = 10U;
uint64_t t59 = 192LLU;
uint16_t x329 = 668U;
static int16_t x331 = INT16_MAX;
volatile uint64_t t62 = UINT64_MAX;
int64_t x342 = INT64_MIN;
uint32_t x343 = 55U;
int64_t t63 = 183921LL;
int8_t x349 = INT8_MAX;
int8_t x350 = -30;
static int64_t t64 = 4033030462LL;
uint32_t x360 = 7997180U;
volatile uint64_t t66 = UINT64_MAX;
int16_t x370 = INT16_MIN;
int8_t x386 = 32;
static int16_t x387 = INT16_MAX;
static int8_t x388 = -14;
int32_t x389 = 252;
static int64_t x390 = INT64_MAX;
static volatile int8_t x394 = INT8_MAX;
int32_t t72 = -126353057;
int32_t x403 = INT32_MIN;
int16_t x406 = INT16_MAX;
int32_t x413 = INT32_MIN;
uint32_t x414 = UINT32_MAX;
static uint8_t x418 = 4U;
volatile int16_t x419 = INT16_MIN;
uint8_t x424 = 31U;
volatile int32_t t79 = 13898064;
static int16_t x429 = -1;
int64_t x430 = -1LL;
int64_t x439 = INT64_MIN;
volatile uint32_t x442 = UINT32_MAX;
uint16_t x444 = 35U;
uint64_t t83 = 7LLU;
int8_t x455 = INT8_MIN;
static int32_t x458 = -1;
volatile int64_t x459 = -1LL;
uint64_t x460 = 7384752LLU;
int32_t x472 = -56;
static int64_t t89 = -7022001LL;
int64_t x484 = -44323215791LL;
static int16_t x493 = INT16_MIN;
int64_t x494 = INT64_MIN;
static uint32_t x497 = 43U;
int64_t x499 = -1LL;
volatile int64_t x505 = INT64_MIN;
uint16_t x508 = 7U;
volatile uint32_t t97 = 124350900U;
volatile int64_t t98 = 389336017660110LL;
int32_t t99 = 25;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static int64_t x2 = -1LL;
	int8_t x3 = INT8_MIN;
	uint64_t x4 = 284329087801LLU;
	volatile uint64_t t0 = 676574LLU;

	t0 = (x1|(x2%(x3%x4)));

	if (t0 != 965050367LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	int16_t x6 = INT16_MAX;
	uint16_t x7 = 153U;
	static int16_t x8 = 14536;
	volatile int64_t t1 = 3760044488516LL;

	t1 = (x5|(x6%(x7%x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MAX;
	volatile int32_t x15 = -36136;

	t2 = (x13|(x14%(x15%x16)));

	if (t2 != -29705) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = -1;
	int16_t x19 = -1;
	volatile int32_t t3 = 9445212;

	t3 = (x17|(x18%(x19%x20)));

	if (t3 != 5055) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 4;
	static int8_t x22 = -1;
	static int32_t x23 = INT32_MAX;
	uint64_t x24 = 476867359528LLU;
	volatile uint64_t t4 = 241544964LLU;

	t4 = (x21|(x22%(x23%x24)));

	if (t4 != 7LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	uint16_t x26 = 1U;
	static int64_t x27 = 837030429740936032LL;
	static int16_t x28 = 2008;
	volatile int64_t t5 = -151049750840944LL;

	t5 = (x25|(x26%(x27%x28)));

	if (t5 != -127LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	volatile int64_t x34 = INT64_MIN;
	int16_t x35 = 207;
	static uint64_t x36 = 10LLU;
	uint64_t t6 = 24941310LLU;

	t6 = (x33|(x34%(x35%x36)));

	if (t6 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x37 = UINT8_MAX;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = UINT16_MAX;
	static volatile int64_t t7 = -33463437538900LL;

	t7 = (x37|(x38%(x39%x40)));

	if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = 1LL;
	int8_t x42 = INT8_MIN;
	int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MAX;
	int64_t t8 = -3LL;

	t8 = (x41|(x42%(x43%x44)));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MAX;
	volatile uint8_t x47 = UINT8_MAX;
	static int8_t x48 = 11;
	volatile int64_t t9 = 95780LL;

	t9 = (x45|(x46%(x47%x48)));

	if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = -163;
	int8_t x51 = INT8_MAX;
	volatile int32_t x52 = -5387942;
	int32_t t10 = -1993702;

	t10 = (x49|(x50%(x51%x52)));

	if (t10 != -36) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x55 = -1LL;
	int64_t t11 = -6008741LL;

	t11 = (x53|(x54%(x55%x56)));

	if (t11 != 120LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;

	t12 = (x57|(x58%(x59%x60)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x62 = -1;
	uint64_t x64 = 718499371LLU;
	uint64_t t13 = 3827572609821837LLU;

	t13 = (x61|(x62%(x63%x64)));

	if (t13 != 486265613LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = UINT16_MAX;
	int8_t x71 = 10;
	int8_t x72 = 3;

	t14 = (x69|(x70%(x71%x72)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	static int16_t x75 = -1;
	volatile int64_t x76 = -14LL;
	int64_t t15 = 77362017472325340LL;

	t15 = (x73|(x74%(x75%x76)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x90 = 12U;
	int16_t x91 = -1;
	static int16_t x92 = 183;
	int64_t t16 = INT64_MIN;

	t16 = (x89|(x90%(x91%x92)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x93 = 34U;
	int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = 17U;
	static uint32_t t17 = 3384964U;

	t17 = (x93|(x94%(x95%x96)));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = -68394248552195LL;
	uint8_t x98 = UINT8_MAX;
	static volatile uint32_t x99 = 7908U;
	static int16_t x100 = INT16_MAX;
	volatile int64_t t18 = 1LL;

	t18 = (x97|(x98%(x99%x100)));

	if (t18 != -68394248552193LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x105 = -24;
	uint32_t x106 = 402962U;
	int32_t x107 = INT32_MIN;
	static uint32_t t19 = 525979612U;

	t19 = (x105|(x106%(x107%x108)));

	if (t19 != 4294967290U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = -1;
	volatile int64_t x110 = INT64_MIN;
	static uint16_t x112 = 640U;

	t20 = (x109|(x110%(x111%x112)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = INT64_MAX;
	int8_t x114 = INT8_MAX;
	uint8_t x115 = 7U;
	int32_t x116 = 13879;
	int64_t t21 = INT64_MAX;

	t21 = (x113|(x114%(x115%x116)));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x117 = UINT32_MAX;
	volatile int8_t x118 = INT8_MIN;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t22 = 730808372512LL;

	t22 = (x117|(x118%(x119%x120)));

	if (t22 != 4294967295LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x123 = -1;
	uint64_t x124 = 446662140293487LLU;
	uint64_t t23 = 22158452181LLU;

	t23 = (x121|(x122%(x123%x124)));

	if (t23 != 8671LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x125 = 310U;
	volatile uint16_t x126 = 1219U;
	int64_t x128 = INT64_MAX;
	volatile int64_t t24 = 5401LL;

	t24 = (x125|(x126%(x127%x128)));

	if (t24 != 1527LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MAX;
	volatile uint64_t x131 = 61116659606752LLU;
	uint64_t x132 = 146465973453LLU;
	uint64_t t25 = UINT64_MAX;

	t25 = (x129|(x130%(x131%x132)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = -3194024939891685LL;
	static uint32_t x134 = UINT32_MAX;
	volatile int8_t x135 = INT8_MAX;
	volatile int64_t t26 = -351258LL;

	t26 = (x133|(x134%(x135%x136)));

	if (t26 != -3194024939891681LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x139 = UINT8_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t27 = 6887;

	t27 = (x137|(x138%(x139%x140)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = INT32_MIN;
	volatile int32_t x142 = INT32_MIN;
	int64_t x143 = 5079820LL;
	volatile int16_t x144 = INT16_MIN;
	static volatile int64_t t28 = 259917951016LL;

	t28 = (x141|(x142%(x143%x144)));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = 276;
	int64_t x146 = INT64_MIN;
	uint8_t x147 = 35U;
	int32_t x148 = INT32_MIN;
	volatile int64_t t29 = -1333739729LL;

	t29 = (x145|(x146%(x147%x148)));

	if (t29 != -4LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = -131;
	int64_t x151 = INT64_MIN;
	static int16_t x152 = INT16_MAX;
	int64_t t30 = 59501582947505006LL;

	t30 = (x149|(x150%(x151%x152)));

	if (t30 != -131LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x153 = INT8_MAX;
	int16_t x155 = INT16_MIN;
	int16_t x156 = -12;
	volatile uint32_t t31 = 48189632U;

	t31 = (x153|(x154%(x155%x156)));

	if (t31 != 15743U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x157 = 7U;
	int32_t x158 = -11;
	uint32_t x159 = 59U;
	int8_t x160 = -1;
	volatile uint32_t t32 = 74406271U;

	t32 = (x157|(x158%(x159%x160)));

	if (t32 != 47U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x161 = INT8_MIN;
	uint8_t x162 = UINT8_MAX;
	uint64_t x163 = UINT64_MAX;
	static int8_t x164 = INT8_MIN;

	t33 = (x161|(x162%(x163%x164)));

	if (t33 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = -1LL;
	int32_t x166 = INT32_MAX;
	static int32_t x167 = -1;
	volatile int64_t t34 = 215373723205LL;

	t34 = (x165|(x166%(x167%x168)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x171 = INT8_MIN;
	int32_t x172 = 97;
	static uint64_t t35 = 15704995023616LLU;

	t35 = (x169|(x170%(x171%x172)));

	if (t35 != 1062590662533LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = 136U;
	static volatile uint16_t x174 = UINT16_MAX;
	static int8_t x176 = INT8_MAX;
	volatile int64_t t36 = 87LL;

	t36 = (x173|(x174%(x175%x176)));

	if (t36 != 143LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = INT32_MAX;
	int16_t x178 = INT16_MIN;
	volatile int64_t x180 = -1LL;

	t37 = (x177|(x178%(x179%x180)));

	if (t37 != 2147483647LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x181 = INT16_MAX;
	int64_t x182 = 1LL;
	static int8_t x183 = INT8_MAX;
	uint64_t t38 = 263718201111360LLU;

	t38 = (x181|(x182%(x183%x184)));

	if (t38 != 32767LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x185 = -1;
	uint16_t x186 = 370U;
	volatile int64_t x187 = INT64_MAX;
	uint16_t x188 = 1185U;
	volatile int64_t t39 = -1437304LL;

	t39 = (x185|(x186%(x187%x188)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x189 = 1044967312326772805LL;
	uint16_t x190 = 28U;
	static volatile uint16_t x191 = 11147U;
	int8_t x192 = INT8_MIN;
	int64_t t40 = 274804732625512996LL;

	t40 = (x189|(x190%(x191%x192)));

	if (t40 != 1044967312326772807LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = INT32_MIN;
	uint8_t x203 = 21U;
	volatile int32_t x204 = INT32_MAX;
	volatile int32_t t41 = 11985610;

	t41 = (x201|(x202%(x203%x204)));

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x222 = 678607U;
	int32_t x223 = 172;
	int8_t x224 = INT8_MIN;

	t42 = (x221|(x222%(x223%x224)));

	if (t42 != 6225279LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x225 = UINT8_MAX;
	uint32_t x226 = 17U;
	volatile uint32_t x227 = 92361U;
	int32_t x228 = INT32_MIN;
	volatile uint32_t t43 = 15U;

	t43 = (x225|(x226%(x227%x228)));

	if (t43 != 255U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x229 = 3020U;
	int16_t x230 = INT16_MIN;
	volatile uint16_t x231 = 2150U;
	uint16_t x232 = 30U;
	int32_t t44 = -45;

	t44 = (x229|(x230%(x231%x232)));

	if (t44 != -4) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x237 = 3586U;
	int64_t x238 = -1LL;
	uint8_t x239 = 40U;
	volatile uint64_t x240 = UINT64_MAX;

	t45 = (x237|(x238%(x239%x240)));

	if (t45 != 3599LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x241 = 417768;
	static uint8_t x242 = 5U;
	int64_t x244 = INT64_MAX;

	t46 = (x241|(x242%(x243%x244)));

	if (t46 != 417773LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x250 = UINT16_MAX;
	static int8_t x251 = INT8_MIN;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t47 = -337538554;

	t47 = (x249|(x250%(x251%x252)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x254 = 57318758765314886LLU;
	static int32_t x256 = INT32_MAX;

	t48 = (x253|(x254%(x255%x256)));

	if (t48 != 9280690795620090694LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x263 = -1;
	int16_t x264 = -3755;
	int32_t t49 = -68;

	t49 = (x261|(x262%(x263%x264)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = -1;
	static volatile uint64_t t50 = UINT64_MAX;

	t50 = (x269|(x270%(x271%x272)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x277 = INT32_MAX;
	int16_t x278 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t51 = INT32_MAX;

	t51 = (x277|(x278%(x279%x280)));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x282 = INT64_MIN;
	uint8_t x284 = 3U;
	static int64_t t52 = -331219619LL;

	t52 = (x281|(x282%(x283%x284)));

	if (t52 != 3LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x297 = UINT32_MAX;
	volatile int32_t x298 = 498772;
	static uint64_t x299 = 849LLU;
	int16_t x300 = -15;
	uint64_t t53 = 12LLU;

	t53 = (x297|(x298%(x299%x300)));

	if (t53 != 4294967295LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x301 = INT32_MIN;
	static int8_t x303 = INT8_MAX;
	uint16_t x304 = 459U;

	t54 = (x301|(x302%(x303%x304)));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x305 = INT8_MIN;
	static volatile uint64_t x306 = UINT64_MAX;

	t55 = (x305|(x306%(x307%x308)));

	if (t55 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x309 = 6U;
	uint8_t x310 = 93U;
	volatile int64_t x312 = INT64_MIN;
	int64_t t56 = -19713041LL;

	t56 = (x309|(x310%(x311%x312)));

	if (t56 != 6LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x317 = 113U;
	static int32_t x318 = INT32_MAX;
	uint64_t x319 = 3392140830996LLU;
	volatile uint64_t t57 = 46LLU;

	t57 = (x317|(x318%(x319%x320)));

	if (t57 != 113LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = -1;
	int32_t x324 = INT32_MIN;
	int32_t t58 = 3;

	t58 = (x321|(x322%(x323%x324)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x325 = -494LL;
	static uint64_t x326 = 146121454367LLU;
	int32_t x327 = INT32_MAX;
	int16_t x328 = INT16_MIN;

	t59 = (x325|(x326%(x327%x328)));

	if (t59 != 18446744073709551295LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x330 = 0LL;
	uint64_t x332 = 513290172661464LLU;
	volatile uint64_t t60 = 5929623LLU;

	t60 = (x329|(x330%(x331%x332)));

	if (t60 != 668LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x333 = INT32_MAX;
	int16_t x334 = 21;
	volatile uint16_t x335 = 124U;
	int32_t x336 = INT32_MIN;
	volatile int32_t t61 = INT32_MAX;

	t61 = (x333|(x334%(x335%x336)));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x337 = -1;
	volatile int32_t x338 = INT32_MAX;
	uint64_t x339 = 102254198283269084LLU;
	uint16_t x340 = 4787U;

	t62 = (x337|(x338%(x339%x340)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x341 = INT64_MIN;
	int32_t x344 = INT32_MIN;

	t63 = (x341|(x342%(x343%x344)));

	if (t63 != -8LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x351 = INT64_MIN;
	uint16_t x352 = 2826U;

	t64 = (x349|(x350%(x351%x352)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x353 = -1903;
	int16_t x354 = -81;
	int32_t x355 = -316201505;
	int32_t x356 = INT32_MIN;
	static int32_t t65 = -2963145;

	t65 = (x353|(x354%(x355%x356)));

	if (t65 != -65) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x357 = UINT64_MAX;
	int64_t x358 = INT64_MAX;
	volatile int16_t x359 = INT16_MAX;

	t66 = (x357|(x358%(x359%x360)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x365 = INT16_MAX;
	int32_t x366 = -1;
	volatile int32_t x367 = 8974;
	uint64_t x368 = 240470422648854LLU;
	uint64_t t67 = 8092LLU;

	t67 = (x365|(x366%(x367%x368)));

	if (t67 != 32767LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x369 = 61U;
	volatile uint32_t x371 = UINT32_MAX;
	static int32_t x372 = INT32_MIN;
	uint32_t t68 = 1886277948U;

	t68 = (x369|(x370%(x371%x372)));

	if (t68 != 2147450941U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x373 = 10346U;
	int32_t x374 = INT32_MAX;
	int32_t x375 = INT32_MIN;
	uint8_t x376 = 38U;
	static volatile int32_t t69 = 18;

	t69 = (x373|(x374%(x375%x376)));

	if (t69 != 10347) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x385 = INT32_MIN;
	volatile int32_t t70 = -28338818;

	t70 = (x385|(x386%(x387%x388)));

	if (t70 != -2147483644) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x391 = INT32_MAX;
	uint64_t x392 = 139LLU;
	uint64_t t71 = 383LLU;

	t71 = (x389|(x390%(x391%x392)));

	if (t71 != 253LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x393 = INT16_MIN;
	int16_t x395 = 15;
	int32_t x396 = 6433300;

	t72 = (x393|(x394%(x395%x396)));

	if (t72 != -32761) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x401 = 2044U;
	int32_t x402 = INT32_MIN;
	uint64_t x404 = 3710736LLU;
	volatile uint64_t t73 = 574LLU;

	t73 = (x401|(x402%(x403%x404)));

	if (t73 != 153596LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x405 = -1;
	int8_t x407 = INT8_MAX;
	volatile int64_t x408 = 17085165216LL;
	int64_t t74 = 14869818452102LL;

	t74 = (x405|(x406%(x407%x408)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x409 = UINT64_MAX;
	volatile int16_t x410 = -1;
	static uint16_t x411 = 1U;
	int64_t x412 = INT64_MAX;
	static volatile uint64_t t75 = UINT64_MAX;

	t75 = (x409|(x410%(x411%x412)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x415 = 3;
	static uint16_t x416 = 730U;
	volatile uint32_t t76 = 850691U;

	t76 = (x413|(x414%(x415%x416)));

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x417 = UINT8_MAX;
	static volatile int8_t x420 = INT8_MAX;
	static int32_t t77 = -14251068;

	t77 = (x417|(x418%(x419%x420)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MAX;
	int8_t x423 = INT8_MIN;
	volatile int32_t t78 = -2573211;

	t78 = (x421|(x422%(x423%x424)));

	if (t78 != -32765) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x425 = 4;
	int32_t x426 = -1;
	static volatile int32_t x427 = -1;
	static volatile int16_t x428 = -8241;

	t79 = (x425|(x426%(x427%x428)));

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x431 = UINT8_MAX;
	int64_t x432 = -6264461244457222LL;
	static int64_t t80 = 1034LL;

	t80 = (x429|(x430%(x431%x432)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x437 = 65U;
	static int32_t x438 = INT32_MAX;
	static uint16_t x440 = 31U;
	volatile int64_t t81 = 104840LL;

	t81 = (x437|(x438%(x439%x440)));

	if (t81 != 71LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x441 = -33;
	volatile int8_t x443 = INT8_MIN;
	uint32_t t82 = 86492002U;

	t82 = (x441|(x442%(x443%x444)));

	if (t82 != 4294967263U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x445 = 2585383LLU;
	volatile int16_t x446 = -1;
	static volatile int16_t x447 = -6;
	uint64_t x448 = 70893645LLU;

	t83 = (x445|(x446%(x447%x448)));

	if (t83 != 12581751LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x453 = 1;
	static uint16_t x454 = 37U;
	volatile int32_t x456 = 832;
	int32_t t84 = 8;

	t84 = (x453|(x454%(x455%x456)));

	if (t84 != 37) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x457 = INT16_MAX;
	uint64_t t85 = 138462578183LLU;

	t85 = (x457|(x458%(x459%x460)));

	if (t85 != 98303LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x461 = -1LL;
	int16_t x462 = 10;
	int8_t x463 = INT8_MIN;
	static uint32_t x464 = UINT32_MAX;
	volatile int64_t t86 = -28879771847633729LL;

	t86 = (x461|(x462%(x463%x464)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x465 = INT8_MAX;
	static int64_t x466 = -1LL;
	uint8_t x467 = 113U;
	int32_t x468 = -13154;
	volatile int64_t t87 = -26LL;

	t87 = (x465|(x466%(x467%x468)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x469 = INT64_MIN;
	int64_t x470 = INT64_MIN;
	int64_t x471 = INT64_MIN;
	volatile int64_t t88 = INT64_MIN;

	t88 = (x469|(x470%(x471%x472)));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x473 = INT16_MAX;
	int64_t x474 = INT64_MAX;
	volatile int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MAX;

	t89 = (x473|(x474%(x475%x476)));

	if (t89 != 32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x481 = UINT32_MAX;
	volatile int8_t x482 = INT8_MAX;
	int8_t x483 = -1;
	int64_t t90 = 22LL;

	t90 = (x481|(x482%(x483%x484)));

	if (t90 != 4294967295LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x485 = 13819U;
	int8_t x486 = INT8_MAX;
	volatile int8_t x487 = INT8_MIN;
	int32_t x488 = INT32_MIN;
	int32_t t91 = -716005;

	t91 = (x485|(x486%(x487%x488)));

	if (t91 != 13823) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x489 = 27U;
	volatile uint32_t x490 = UINT32_MAX;
	uint8_t x491 = 7U;
	static volatile int16_t x492 = -72;
	volatile uint32_t t92 = 46182U;

	t92 = (x489|(x490%(x491%x492)));

	if (t92 != 27U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x495 = INT32_MAX;
	uint32_t x496 = 3660000U;
	static int64_t t93 = 500314477265785159LL;

	t93 = (x493|(x494%(x495%x496)));

	if (t93 != -14181LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x498 = 156167;
	static volatile int8_t x500 = INT8_MIN;
	volatile int64_t t94 = -548022397596375LL;

	t94 = (x497|(x498%(x499%x500)));

	if (t94 != 43LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x506 = 703238339;
	int32_t x507 = -188;
	static int64_t t95 = -5666LL;

	t95 = (x505|(x506%(x507%x508)));

	if (t95 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x509 = -1LL;
	int16_t x510 = INT16_MAX;
	static int32_t x511 = INT32_MIN;
	int64_t x512 = INT64_MIN;
	int64_t t96 = -139LL;

	t96 = (x509|(x510%(x511%x512)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x513 = -68;
	uint8_t x514 = 5U;
	uint16_t x515 = 48U;
	uint32_t x516 = 889U;

	t97 = (x513|(x514%(x515%x516)));

	if (t97 != 4294967229U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x521 = -1LL;
	int64_t x522 = INT64_MIN;
	int8_t x523 = -1;
	static int32_t x524 = -26825983;

	t98 = (x521|(x522%(x523%x524)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x525 = UINT8_MAX;
	static int16_t x526 = -10;
	volatile uint8_t x527 = UINT8_MAX;
	int32_t x528 = 94897;

	t99 = (x525|(x526%(x527%x528)));

	if (t99 != -1) { NG(); } else { ; }
	
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

