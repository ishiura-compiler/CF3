#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -3027830743760187LL;
volatile uint64_t x3 = 66487364118179489LLU;
uint64_t t0 = 358771647383LLU;
int64_t x6 = INT64_MAX;
static uint64_t t3 = 526544943399LLU;
uint16_t x17 = 11947U;
int64_t x22 = 1LL;
static uint8_t x37 = UINT8_MAX;
int64_t x52 = INT64_MIN;
volatile int8_t x61 = INT8_MIN;
static volatile int32_t x63 = 927;
int16_t x64 = INT16_MIN;
int16_t x69 = -3;
uint64_t x72 = 272697220203202LLU;
volatile int32_t t15 = -196;
int32_t x91 = INT32_MIN;
volatile int64_t t17 = -66LL;
int64_t t19 = 216921108903LL;
volatile int16_t x107 = -2;
int32_t x121 = -2568382;
int16_t x124 = 425;
int8_t x132 = -8;
static int64_t x148 = -1LL;
uint32_t x153 = UINT32_MAX;
static uint16_t x154 = UINT16_MAX;
uint64_t t27 = 16495552099349LLU;
uint16_t x174 = 5792U;
int64_t x178 = INT64_MIN;
uint8_t x179 = UINT8_MAX;
volatile int32_t x180 = INT32_MIN;
static uint32_t x182 = 2U;
static uint16_t x184 = 11077U;
uint64_t t33 = 33944674453748LLU;
static int64_t x194 = -1965840LL;
int32_t x202 = 21875347;
static uint8_t x203 = 5U;
int16_t x205 = INT16_MAX;
volatile int64_t t37 = -4849414838097LL;
uint64_t x229 = UINT64_MAX;
static volatile int32_t x258 = INT32_MAX;
int32_t t43 = -55025;
int32_t x265 = -1;
int32_t x269 = INT32_MIN;
uint8_t x288 = UINT8_MAX;
uint32_t t51 = 1617244546U;
int32_t x294 = INT32_MIN;
int16_t x296 = INT16_MAX;
volatile int32_t t52 = 31386;
int16_t x310 = INT16_MIN;
int64_t x319 = INT64_MAX;
uint32_t x329 = 9U;
static int64_t x331 = INT64_MAX;
static volatile int16_t x339 = INT16_MIN;
int32_t x346 = -1;
static int8_t x347 = INT8_MIN;
static int16_t x348 = INT16_MIN;
int32_t t58 = 8;
int32_t t59 = 0;
int32_t x361 = -10;
int32_t t60 = -3;
static volatile int16_t x372 = INT16_MIN;
int32_t t61 = 6859;
int32_t x376 = INT32_MIN;
int16_t x378 = -1;
int8_t x393 = -10;
uint16_t x397 = 0U;
int32_t x399 = INT32_MIN;
uint16_t x409 = UINT16_MAX;
uint64_t x412 = 31461406LLU;
volatile int16_t x414 = INT16_MAX;
int64_t x415 = -1104954249462LL;
int64_t x418 = 66LL;
volatile int64_t x426 = INT64_MIN;
int8_t x427 = INT8_MAX;
static volatile int16_t x428 = INT16_MIN;
volatile int64_t t74 = 1LL;
volatile int32_t x434 = INT32_MIN;
int32_t x436 = 131037678;
static volatile int32_t t75 = 25460412;
static uint8_t x437 = UINT8_MAX;
uint8_t x439 = 43U;
int32_t x446 = INT32_MIN;
int16_t x448 = 15803;
uint16_t x460 = 88U;
uint8_t x463 = 123U;
int16_t x472 = INT16_MIN;
int32_t x473 = INT32_MIN;
uint32_t x474 = UINT32_MAX;
uint32_t t83 = 41U;
int64_t x489 = INT64_MIN;
int8_t x492 = INT8_MIN;
static int16_t x510 = 959;
int64_t x515 = 13182949041LL;
uint16_t x517 = 71U;
uint32_t x519 = 1002902707U;
int32_t x521 = -1;
uint64_t x522 = UINT64_MAX;
int8_t x523 = INT8_MIN;
int16_t x525 = -1;
uint16_t x539 = 162U;
int32_t x541 = INT32_MIN;
int8_t x542 = INT8_MIN;
int64_t x551 = INT64_MIN;
int32_t x552 = INT32_MIN;
static int32_t x553 = INT32_MAX;
uint32_t x555 = 103975U;
static volatile uint16_t x563 = UINT16_MAX;
volatile int64_t x569 = INT64_MIN;
int8_t x572 = -2;


void f0(void) {
	int32_t x1 = -36;
	int32_t x4 = -41505072;

	t0 = (x1/(x2%(x3|x4)));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint64_t x7 = UINT64_MAX;
	uint32_t x8 = 1U;
	uint64_t t1 = 5237658398155797LLU;

	t1 = (x5/(x6%(x7|x8)));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint8_t x10 = 3U;
	uint16_t x11 = UINT16_MAX;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = -23687;

	t2 = (x9/(x10%(x11|x12)));

	if (t2 != -715827882) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	volatile uint64_t x14 = UINT64_MAX;
	static volatile int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MIN;

	t3 = (x13/(x14%(x15|x16)));

	if (t3 != 33818640LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	volatile uint16_t x19 = UINT16_MAX;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -533;

	t4 = (x17/(x18%(x19|x20)));

	if (t4 != -11947) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	uint8_t x23 = 1U;
	int16_t x24 = 3845;
	static volatile int64_t t5 = -1954876991317LL;

	t5 = (x21/(x22%(x23|x24)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -379;
	int64_t x30 = INT64_MIN;
	volatile uint32_t x31 = 7775U;
	static int32_t x32 = INT32_MIN;
	volatile int64_t t6 = -1294415LL;

	t6 = (x29/(x30%(x31|x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x38 = 397U;
	static int32_t x39 = INT32_MIN;
	int16_t x40 = INT16_MAX;
	static uint32_t t7 = 36660U;

	t7 = (x37/(x38%(x39|x40)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	uint32_t x46 = UINT32_MAX;
	uint16_t x47 = 400U;
	static uint32_t x48 = 1350U;
	uint32_t t8 = 2U;

	t8 = (x45/(x46%(x47|x48)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -8;
	volatile uint16_t x50 = 3546U;
	static int64_t x51 = INT64_MIN;
	int64_t t9 = -495LL;

	t9 = (x49/(x50%(x51|x52)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -1;
	static int64_t x58 = INT64_MAX;
	int64_t x59 = -60424653460442LL;
	volatile int16_t x60 = INT16_MIN;
	static int64_t t10 = 5148245462868007LL;

	t10 = (x57/(x58%(x59|x60)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x62 = -1LL;
	static int64_t t11 = 42067065LL;

	t11 = (x61/(x62%(x63|x64)));

	if (t11 != 128LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x70 = -9805755;
	static int8_t x71 = INT8_MIN;
	volatile uint64_t t12 = 118657LLU;

	t12 = (x69/(x70%(x71|x72)));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x73 = -1;
	volatile uint64_t x74 = 329332LLU;
	static uint32_t x75 = 1611418111U;
	static volatile uint8_t x76 = 38U;
	uint64_t t13 = 3212240667820749LLU;

	t13 = (x73/(x74%(x75|x76)));

	if (t13 != 56012607562306LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = INT64_MIN;
	volatile int64_t x78 = 200LL;
	uint8_t x79 = 7U;
	uint16_t x80 = 199U;
	int64_t t14 = INT64_MIN;

	t14 = (x77/(x78%(x79|x80)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = 236;
	uint16_t x82 = 5694U;
	int32_t x83 = 15809298;
	int16_t x84 = -12590;

	t15 = (x81/(x82%(x83|x84)));

	if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x89 = 0U;
	static uint8_t x90 = 2U;
	uint32_t x92 = UINT32_MAX;
	uint32_t t16 = 0U;

	t16 = (x89/(x90%(x91|x92)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x93 = INT32_MIN;
	volatile int64_t x94 = 12107161430870LL;
	static int64_t x95 = 3754216226444LL;
	uint8_t x96 = UINT8_MAX;

	t17 = (x93/(x94%(x95|x96)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MIN;
	volatile int64_t x99 = 11501526154LL;
	static int16_t x100 = INT16_MIN;
	volatile int64_t t18 = 1438648263172437395LL;

	t18 = (x97/(x98%(x99|x100)));

	if (t18 != -776105LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x101 = 11611LL;
	uint32_t x102 = 3U;
	int32_t x103 = INT32_MIN;
	uint8_t x104 = UINT8_MAX;

	t19 = (x101/(x102%(x103|x104)));

	if (t19 != 3870LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x105 = UINT8_MAX;
	int8_t x106 = INT8_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t20 = 31668232;

	t20 = (x105/(x106%(x107|x108)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = -1;
	int64_t x110 = -1LL;
	volatile uint32_t x111 = 67403757U;
	static int16_t x112 = 1780;
	static int64_t t21 = -52333LL;

	t21 = (x109/(x110%(x111|x112)));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x113 = 8465U;
	volatile uint32_t x114 = 65216U;
	int32_t x115 = INT32_MAX;
	uint64_t x116 = UINT64_MAX;
	uint64_t t22 = 9798LLU;

	t22 = (x113/(x114%(x115|x116)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x122 = -3;
	uint16_t x123 = UINT16_MAX;
	int32_t t23 = -757;

	t23 = (x121/(x122%(x123|x124)));

	if (t23 != 856127) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = INT8_MIN;
	static uint32_t x130 = 282756028U;
	int16_t x131 = INT16_MIN;
	volatile uint32_t t24 = 3U;

	t24 = (x129/(x130%(x131|x132)));

	if (t24 != 15U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x141 = 236084564419LLU;
	uint32_t x142 = 14312U;
	uint8_t x143 = 79U;
	int16_t x144 = INT16_MAX;
	static volatile uint64_t t25 = 459627LLU;

	t25 = (x141/(x142%(x143|x144)));

	if (t25 != 16495567LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = -1LL;
	int8_t x146 = INT8_MIN;
	uint64_t x147 = 1996578LLU;
	volatile uint64_t t26 = 18151170LLU;

	t26 = (x145/(x146%(x147|x148)));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x155 = 1U;
	uint64_t x156 = 554812800LLU;

	t27 = (x153/(x154%(x155|x156)));

	if (t27 != 65537LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = 5;
	uint8_t x159 = UINT8_MAX;
	volatile int64_t x160 = INT64_MIN;
	volatile int64_t t28 = -77083LL;

	t28 = (x157/(x158%(x159|x160)));

	if (t28 != 13107LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x165 = 58869LLU;
	int8_t x166 = INT8_MIN;
	static uint32_t x167 = UINT32_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile uint64_t t29 = 51LLU;

	t29 = (x165/(x166%(x167|x168)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x173 = -1;
	int16_t x175 = 42;
	int64_t x176 = -17786461834LL;
	int64_t t30 = -64570602865LL;

	t30 = (x173/(x174%(x175|x176)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x177 = UINT8_MAX;
	static int64_t t31 = 14029018838LL;

	t31 = (x177/(x178%(x179|x180)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x181 = 2486;
	int8_t x183 = -16;
	uint32_t t32 = 446581844U;

	t32 = (x181/(x182%(x183|x184)));

	if (t32 != 1243U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x185 = INT64_MAX;
	uint64_t x186 = 216LLU;
	volatile int32_t x187 = INT32_MIN;
	volatile int16_t x188 = INT16_MAX;

	t33 = (x185/(x186%(x187|x188)));

	if (t33 != 42700796466920258LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x193 = INT8_MIN;
	uint64_t x195 = 163113LLU;
	int16_t x196 = -1;
	uint64_t t34 = 66801524334618542LLU;

	t34 = (x193/(x194%(x195|x196)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x197 = 14676245;
	static uint16_t x198 = 727U;
	volatile int32_t x199 = 1245;
	volatile int32_t x200 = INT32_MIN;
	int32_t t35 = 4553;

	t35 = (x197/(x198%(x199|x200)));

	if (t35 != 20187) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x201 = INT32_MAX;
	int16_t x204 = 3710;
	static volatile int32_t t36 = 794;

	t36 = (x201/(x202%(x203|x204)));

	if (t36 != 791553) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x206 = INT32_MAX;
	static int64_t x207 = INT64_MIN;
	int64_t x208 = -4307398411360427875LL;

	t37 = (x205/(x206%(x207|x208)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x213 = UINT32_MAX;
	int64_t x214 = 32519478505470558LL;
	static int16_t x215 = 67;
	uint64_t x216 = 8139LLU;
	volatile uint64_t t38 = 57LLU;

	t38 = (x213/(x214%(x215|x216)));

	if (t38 != 759902LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x221 = UINT16_MAX;
	volatile int8_t x222 = INT8_MIN;
	volatile uint32_t x223 = UINT32_MAX;
	volatile int8_t x224 = -1;
	volatile uint32_t t39 = 3153098U;

	t39 = (x221/(x222%(x223|x224)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x230 = INT64_MIN;
	int64_t x231 = 1016471062910LL;
	uint32_t x232 = 0U;
	uint64_t t40 = 1029907221560146LLU;

	t40 = (x229/(x230%(x231|x232)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x233 = 1LL;
	int8_t x234 = 1;
	volatile uint8_t x235 = UINT8_MAX;
	uint32_t x236 = UINT32_MAX;
	static volatile int64_t t41 = 27301186LL;

	t41 = (x233/(x234%(x235|x236)));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = -10;
	uint16_t x247 = 832U;
	uint64_t x248 = UINT64_MAX;
	uint64_t t42 = 19748596LLU;

	t42 = (x245/(x246%(x247|x248)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x257 = INT32_MIN;
	uint8_t x259 = 4U;
	uint8_t x260 = UINT8_MAX;

	t43 = (x257/(x258%(x259|x260)));

	if (t43 != -16909320) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x261 = INT8_MIN;
	static uint8_t x262 = 11U;
	static int64_t x263 = INT64_MIN;
	static volatile int8_t x264 = INT8_MAX;
	int64_t t44 = 2513238802417626740LL;

	t44 = (x261/(x262%(x263|x264)));

	if (t44 != -11LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x266 = 17U;
	int8_t x267 = INT8_MIN;
	static volatile uint16_t x268 = 23U;
	volatile int32_t t45 = 6009;

	t45 = (x265/(x266%(x267|x268)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x270 = 67681178284376646LLU;
	int64_t x271 = -1537279366353765LL;
	uint8_t x272 = 11U;
	uint64_t t46 = 5156909LLU;

	t46 = (x269/(x270%(x271|x272)));

	if (t46 != 272LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x273 = -88378;
	uint8_t x274 = 23U;
	int8_t x275 = INT8_MIN;
	int32_t x276 = 1;
	int32_t t47 = -21;

	t47 = (x273/(x274%(x275|x276)));

	if (t47 != -3842) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int16_t x278 = INT16_MAX;
	uint32_t x279 = 29U;
	uint32_t x280 = 89608U;
	uint32_t t48 = 13U;

	t48 = (x277/(x278%(x279|x280)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x281 = -1;
	int64_t x282 = INT64_MIN;
	static uint32_t x283 = 417U;
	int64_t x284 = -610549623595LL;
	volatile int64_t t49 = 3584817LL;

	t49 = (x281/(x282%(x283|x284)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x285 = INT64_MAX;
	int8_t x286 = -1;
	static int16_t x287 = INT16_MIN;
	int64_t t50 = -2195545660035439432LL;

	t50 = (x285/(x286%(x287|x288)));

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x289 = 726;
	static uint16_t x290 = UINT16_MAX;
	static uint32_t x291 = 3835459U;
	int8_t x292 = -5;

	t51 = (x289/(x290%(x291|x292)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x293 = 7101U;
	uint16_t x295 = 3U;

	t52 = (x293/(x294%(x295|x296)));

	if (t52 != -3550) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x297 = -732611LL;
	uint64_t x298 = UINT64_MAX;
	static int8_t x299 = INT8_MIN;
	uint8_t x300 = 0U;
	volatile uint64_t t53 = 267766682657LLU;

	t53 = (x297/(x298%(x299|x300)));

	if (t53 != 145249953336289913LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x309 = INT16_MIN;
	static volatile uint32_t x311 = 1241U;
	int8_t x312 = -1;
	volatile uint32_t t54 = 320790826U;

	t54 = (x309/(x310%(x311|x312)));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x317 = INT64_MIN;
	uint8_t x318 = 2U;
	int32_t x320 = 2765995;
	volatile int64_t t55 = 3821051LL;

	t55 = (x317/(x318%(x319|x320)));

	if (t55 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x330 = -1;
	static uint32_t x332 = 4829109U;
	volatile int64_t t56 = 1129014012748583LL;

	t56 = (x329/(x330%(x331|x332)));

	if (t56 != -9LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x337 = INT32_MIN;
	uint16_t x338 = 422U;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t57 = 7481U;

	t57 = (x337/(x338%(x339|x340)));

	if (t57 != 5088823U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x345 = -1;

	t58 = (x345/(x346%(x347|x348)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x357 = 11U;
	uint16_t x358 = UINT16_MAX;
	volatile uint16_t x359 = 40U;
	static int16_t x360 = INT16_MAX;

	t59 = (x357/(x358%(x359|x360)));

	if (t59 != 11) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x362 = 13770U;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;

	t60 = (x361/(x362%(x363|x364)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = UINT8_MAX;
	uint16_t x371 = 11627U;

	t61 = (x369/(x370%(x371|x372)));

	if (t61 != -8421504) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x373 = INT64_MIN;
	int16_t x374 = 3199;
	int64_t x375 = INT64_MIN;
	int64_t t62 = -85301269404108901LL;

	t62 = (x373/(x374%(x375|x376)));

	if (t62 != -2883204763005556LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x377 = 573028;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = 39715582102322LLU;
	uint64_t t63 = 58366495LLU;

	t63 = (x377/(x378%(x379|x380)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x385 = 116LLU;
	static uint32_t x386 = 172245U;
	int8_t x387 = INT8_MIN;
	uint32_t x388 = 324998789U;
	uint64_t t64 = 694433LLU;

	t64 = (x385/(x386%(x387|x388)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x389 = UINT32_MAX;
	int16_t x390 = -1;
	volatile uint16_t x391 = 19U;
	int32_t x392 = -72;
	uint32_t t65 = 3306U;

	t65 = (x389/(x390%(x391|x392)));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x394 = 79U;
	uint32_t x395 = 22747663U;
	int32_t x396 = 3508;
	volatile uint32_t t66 = 15016819U;

	t66 = (x393/(x394%(x395|x396)));

	if (t66 != 54366674U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x398 = INT64_MIN;
	volatile int8_t x400 = INT8_MAX;
	int64_t t67 = -188322623767042LL;

	t67 = (x397/(x398%(x399|x400)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MAX;
	volatile int16_t x403 = INT16_MAX;
	static uint16_t x404 = UINT16_MAX;
	volatile int64_t t68 = -225271198699310LL;

	t68 = (x401/(x402%(x403|x404)));

	if (t68 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x405 = 80;
	uint16_t x406 = 148U;
	static volatile uint16_t x407 = 3U;
	uint32_t x408 = 96429491U;
	uint32_t t69 = 3U;

	t69 = (x405/(x406%(x407|x408)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x410 = 5U;
	uint16_t x411 = 1U;
	volatile uint64_t t70 = 960033695LLU;

	t70 = (x409/(x410%(x411|x412)));

	if (t70 != 13107LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x413 = INT8_MAX;
	static int64_t x416 = INT64_MIN;
	volatile int64_t t71 = 207237LL;

	t71 = (x413/(x414%(x415|x416)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x417 = -1LL;
	int64_t x419 = INT64_MIN;
	volatile int64_t x420 = INT64_MIN;
	volatile int64_t t72 = 14403591371205LL;

	t72 = (x417/(x418%(x419|x420)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x421 = UINT16_MAX;
	uint32_t x422 = 264444104U;
	int64_t x423 = 13562LL;
	static int8_t x424 = INT8_MAX;
	int64_t t73 = 262686671593745831LL;

	t73 = (x421/(x422%(x423|x424)));

	if (t73 != 6LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x425 = INT8_MAX;

	t74 = (x425/(x426%(x427|x428)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x433 = -1;
	int32_t x435 = 33;

	t75 = (x433/(x434%(x435|x436)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x438 = INT64_MAX;
	uint16_t x440 = UINT16_MAX;
	int64_t t76 = -15LL;

	t76 = (x437/(x438%(x439|x440)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x445 = INT8_MIN;
	uint16_t x447 = 0U;
	volatile int32_t t77 = -34;

	t77 = (x445/(x446%(x447|x448)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x453 = -1;
	int8_t x454 = INT8_MIN;
	volatile uint64_t x455 = 7607251658029163808LLU;
	volatile int8_t x456 = -1;
	static volatile uint64_t t78 = 640655427LLU;

	t78 = (x453/(x454%(x455|x456)));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x457 = INT64_MIN;
	uint8_t x458 = 53U;
	int32_t x459 = INT32_MAX;
	int64_t t79 = 28LL;

	t79 = (x457/(x458%(x459|x460)));

	if (t79 != -174025887487825958LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x461 = -1;
	uint16_t x462 = 731U;
	static int64_t x464 = INT64_MIN;
	static volatile int64_t t80 = 16107151376831162LL;

	t80 = (x461/(x462%(x463|x464)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x469 = UINT64_MAX;
	int64_t x470 = INT64_MAX;
	uint32_t x471 = 7183780U;
	volatile uint64_t t81 = 15LLU;

	t81 = (x469/(x470%(x471|x472)));

	if (t81 != 58188648188LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x475 = INT8_MAX;
	int16_t x476 = INT16_MIN;
	volatile uint32_t t82 = 137U;

	t82 = (x473/(x474%(x475|x476)));

	if (t82 != 65793U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x485 = 30275U;
	int8_t x486 = INT8_MAX;
	uint32_t x487 = 17131725U;
	volatile uint8_t x488 = UINT8_MAX;

	t83 = (x485/(x486%(x487|x488)));

	if (t83 != 238U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x490 = INT32_MIN;
	uint32_t x491 = UINT32_MAX;
	int64_t t84 = 2114977837LL;

	t84 = (x489/(x490%(x491|x492)));

	if (t84 != -4294967296LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x493 = INT16_MAX;
	uint32_t x494 = 21554U;
	int64_t x495 = INT64_MAX;
	volatile uint16_t x496 = 5771U;
	int64_t t85 = 3768234292585307LL;

	t85 = (x493/(x494%(x495|x496)));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x501 = INT8_MIN;
	int32_t x502 = 991;
	static volatile uint32_t x503 = 102159U;
	uint16_t x504 = 1144U;
	volatile uint32_t t86 = 1712077U;

	t86 = (x501/(x502%(x503|x504)));

	if (t86 != 4333972U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x505 = -69065522893284545LL;
	int16_t x506 = -88;
	uint8_t x507 = UINT8_MAX;
	uint32_t x508 = UINT32_MAX;
	volatile int64_t t87 = 2527828722380377403LL;

	t87 = (x505/(x506%(x507|x508)));

	if (t87 != -16080570LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x509 = 1U;
	int8_t x511 = INT8_MIN;
	volatile int64_t x512 = INT64_MIN;
	volatile int64_t t88 = -4LL;

	t88 = (x509/(x510%(x511|x512)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x513 = -1;
	uint8_t x514 = 55U;
	static uint32_t x516 = 115U;
	static int64_t t89 = -452265294297434960LL;

	t89 = (x513/(x514%(x515|x516)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x518 = INT32_MAX;
	uint64_t x520 = 73375610276609640LLU;
	uint64_t t90 = 352426112395404186LLU;

	t90 = (x517/(x518%(x519|x520)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x524 = 169;
	volatile uint64_t t91 = 26964165464449185LLU;

	t91 = (x521/(x522%(x523|x524)));

	if (t91 != 214497024112901762LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x526 = UINT64_MAX;
	int32_t x527 = 5410196;
	int64_t x528 = -1543212LL;
	uint64_t t92 = 2068491330479364970LLU;

	t92 = (x525/(x526%(x527|x528)));

	if (t92 != 56287608967663LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x537 = INT16_MIN;
	int16_t x538 = INT16_MIN;
	int16_t x540 = INT16_MIN;
	int32_t t93 = 5609;

	t93 = (x537/(x538%(x539|x540)));

	if (t93 != 202) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x543 = 92953U;
	int32_t x544 = INT32_MAX;
	volatile uint32_t t94 = 203018199U;

	t94 = (x541/(x542%(x543|x544)));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x549 = 3;
	static uint8_t x550 = 48U;
	int64_t t95 = 1511LL;

	t95 = (x549/(x550%(x551|x552)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x554 = 15616;
	static volatile int64_t x556 = INT64_MIN;
	int64_t t96 = 248039183546LL;

	t96 = (x553/(x554%(x555|x556)));

	if (t96 != 137518LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x561 = UINT64_MAX;
	int64_t x562 = INT64_MAX;
	volatile int32_t x564 = INT32_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x561/(x562%(x563|x564)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x565 = INT16_MIN;
	uint32_t x566 = UINT32_MAX;
	uint8_t x567 = 60U;
	volatile uint64_t x568 = 36483319LLU;
	volatile uint64_t t98 = 1002167LLU;

	t98 = (x565/(x566%(x567|x568)));

	if (t98 != 698263265055LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x570 = INT8_MAX;
	int16_t x571 = INT16_MIN;
	int64_t t99 = INT64_MIN;

	t99 = (x569/(x570%(x571|x572)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

