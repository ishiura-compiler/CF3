#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = 3U;
static int32_t x4 = INT32_MAX;
static uint64_t x6 = 5808682LLU;
volatile uint64_t t1 = 48931069LLU;
int32_t x9 = 65228;
static int32_t x10 = 0;
int16_t x22 = INT16_MIN;
int64_t x30 = -24950232LL;
int8_t x33 = INT8_MIN;
static uint64_t t7 = 10365984879122LLU;
int8_t x42 = -1;
int32_t x44 = INT32_MIN;
uint32_t x53 = UINT32_MAX;
volatile int32_t x54 = -1;
static volatile int16_t x57 = INT16_MIN;
uint8_t x59 = UINT8_MAX;
int16_t x64 = INT16_MAX;
int32_t x68 = INT32_MAX;
volatile int8_t x71 = INT8_MAX;
int64_t x91 = -115704LL;
volatile uint64_t t21 = 113369LLU;
static int64_t x106 = INT64_MIN;
static volatile int16_t x117 = INT16_MIN;
uint16_t x118 = 8490U;
volatile uint64_t t27 = 265418747407LLU;
int32_t x153 = -1;
volatile uint64_t t29 = 5LLU;
volatile int8_t x160 = INT8_MIN;
volatile int64_t t30 = INT64_MIN;
int32_t x166 = -16095379;
int32_t x167 = -1;
volatile int64_t t32 = 562047331LL;
volatile int32_t t33 = -613238400;
int64_t x187 = -1LL;
int16_t x192 = INT16_MIN;
int32_t x194 = -28473;
int64_t x196 = INT64_MAX;
int32_t t38 = -5751;
volatile int16_t x207 = -471;
int64_t x208 = INT64_MIN;
static int16_t x209 = 18;
int8_t x210 = -1;
uint32_t t41 = 47353286U;
int8_t x214 = INT8_MAX;
uint64_t x216 = UINT64_MAX;
uint64_t t42 = 185LLU;
int64_t x217 = INT64_MIN;
int16_t x235 = 357;
uint64_t x236 = UINT64_MAX;
uint8_t x242 = UINT8_MAX;
int32_t x243 = -161000534;
volatile uint32_t t52 = 12561U;
uint8_t x271 = 9U;
volatile int8_t x282 = 30;
int8_t x284 = INT8_MIN;
static volatile uint32_t x290 = 1878850U;
static int64_t t57 = -25843797941718LL;
uint16_t x297 = UINT16_MAX;
uint32_t x298 = 4937173U;
volatile uint64_t t59 = 115632874LLU;
uint16_t x322 = 0U;
int8_t x329 = INT8_MIN;
volatile uint32_t x331 = 893233U;
int32_t x332 = -1;
int64_t t65 = 2654957829706LL;
static int16_t x351 = -2790;
uint64_t x358 = 115262LLU;
int8_t x360 = INT8_MIN;
volatile uint64_t t67 = 13801204209LLU;
volatile int32_t x362 = -7907;
volatile uint64_t x364 = UINT64_MAX;
uint16_t x365 = 3U;
int32_t x371 = INT32_MIN;
static int64_t t70 = 2465487LL;
int16_t x373 = -1;
static int8_t x380 = 8;
static int64_t t74 = 569LL;
int16_t x391 = INT16_MIN;
static int64_t x392 = 6140769LL;
volatile int64_t t75 = -2805229569LL;
uint8_t x397 = 13U;
volatile uint16_t x398 = 94U;
int64_t x400 = INT64_MAX;
volatile int64_t t77 = 2107482135807693LL;
static int8_t x401 = INT8_MAX;
uint32_t x402 = UINT32_MAX;
uint32_t x403 = 252701075U;
volatile uint32_t x408 = UINT32_MAX;
static volatile int64_t t79 = 537605797096169LL;
uint32_t x417 = 1988996986U;
uint8_t x422 = UINT8_MAX;
static volatile uint64_t x424 = 17762525839LLU;
uint16_t x432 = 15679U;
static volatile int16_t x435 = INT16_MIN;
static uint64_t x441 = 39610647LLU;
static int32_t x445 = INT32_MIN;
int64_t x447 = INT64_MAX;
uint32_t x453 = UINT32_MAX;
uint16_t x454 = UINT16_MAX;
int8_t x459 = 12;
int64_t t91 = 115793LL;
int8_t x462 = 59;
int64_t t92 = -32362343745LL;
volatile uint64_t t93 = 518853LLU;
uint8_t x473 = 3U;
volatile int64_t x476 = INT64_MAX;
static int64_t x477 = INT64_MIN;
int16_t x482 = INT16_MAX;
static int8_t x483 = INT8_MIN;
volatile int64_t t96 = 4045013131060906909LL;
volatile uint64_t t97 = 1921075277LLU;


void f0(void) {
	volatile uint64_t x1 = 292104017239928399LLU;
	uint64_t x2 = 13411063245LLU;
	uint64_t t0 = 54303137496869076LLU;

	t0 = (x1&(x2%(x3&x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint16_t x7 = 2631U;
	uint16_t x8 = 27870U;

	t1 = (x5&(x6%(x7&x8)));

	if (t1 != 1126LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = -1;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -35;

	t2 = (x9&(x10%(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 118040U;
	uint16_t x18 = 3269U;
	int64_t x19 = -1LL;
	int32_t x20 = INT32_MIN;
	static int64_t t3 = 250608LL;

	t3 = (x17&(x18%(x19&x20)));

	if (t3 != 3072LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 2090057255LLU;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = INT64_MIN;
	static uint64_t t4 = 5727081109LLU;

	t4 = (x21&(x22%(x23&x24)));

	if (t4 != 2090041344LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	uint64_t x26 = UINT64_MAX;
	volatile int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t5 = 45791LLU;

	t5 = (x25&(x26%(x27&x28)));

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	uint8_t x31 = 5U;
	int64_t x32 = INT64_MAX;
	static int64_t t6 = 1050072028730540LL;

	t6 = (x29&(x30%(x31&x32)));

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = -1;
	uint64_t x35 = UINT64_MAX;
	int64_t x36 = -369LL;

	t7 = (x33&(x34%(x35&x36)));

	if (t7 != 256LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -344;
	int64_t x38 = INT64_MIN;
	uint8_t x39 = 7U;
	int8_t x40 = INT8_MAX;
	static volatile int64_t t8 = 5676LL;

	t8 = (x37&(x38%(x39&x40)));

	if (t8 != -344LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1064378322913663827LL;
	int32_t x43 = -410;
	int64_t t9 = 805834082479707LL;

	t9 = (x41&(x42%(x43&x44)));

	if (t9 != -1064378322913663827LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = UINT8_MAX;
	int64_t x46 = -1LL;
	volatile int8_t x47 = INT8_MIN;
	static int8_t x48 = INT8_MIN;
	volatile int64_t t10 = -11008820674762005LL;

	t10 = (x45&(x46%(x47&x48)));

	if (t10 != 255LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 36503137678567LLU;
	uint8_t x50 = UINT8_MAX;
	static uint16_t x51 = 303U;
	uint16_t x52 = UINT16_MAX;
	uint64_t t11 = 6122LLU;

	t11 = (x49&(x50%(x51&x52)));

	if (t11 != 231LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x55 = UINT64_MAX;
	volatile int8_t x56 = INT8_MIN;
	uint64_t t12 = 117042LLU;

	t12 = (x53&(x54%(x55&x56)));

	if (t12 != 127LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x58 = UINT32_MAX;
	static uint16_t x60 = 7405U;
	uint32_t t13 = 24767U;

	t13 = (x57&(x58%(x59&x60)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MIN;
	int8_t x63 = -3;
	volatile int32_t t14 = -120756715;

	t14 = (x61&(x62%(x63&x64)));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x65 = 20U;
	int32_t x66 = -1;
	int16_t x67 = INT16_MIN;
	int32_t t15 = -330378056;

	t15 = (x65&(x66%(x67&x68)));

	if (t15 != 20) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 2U;
	volatile uint32_t x70 = UINT32_MAX;
	volatile uint8_t x72 = UINT8_MAX;
	uint32_t t16 = 351872U;

	t16 = (x69&(x70%(x71&x72)));

	if (t16 != 2U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 120LLU;
	uint32_t x74 = UINT32_MAX;
	volatile int8_t x75 = -1;
	int8_t x76 = INT8_MIN;
	volatile uint64_t t17 = 401LLU;

	t17 = (x73&(x74%(x75&x76)));

	if (t17 != 120LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = INT32_MIN;
	volatile uint8_t x78 = 4U;
	int32_t x79 = -1;
	int16_t x80 = -1;
	int32_t t18 = -49;

	t18 = (x77&(x78%(x79&x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 653714667773LLU;
	volatile int64_t x90 = -1LL;
	int8_t x92 = -1;
	static volatile uint64_t t19 = 142LLU;

	t19 = (x89&(x90%(x91&x92)));

	if (t19 != 653714667773LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = INT16_MAX;
	static uint32_t x94 = UINT32_MAX;
	volatile int16_t x95 = -1;
	int64_t x96 = INT64_MIN;
	int64_t t20 = 1464369150086276725LL;

	t20 = (x93&(x94%(x95&x96)));

	if (t20 != 32767LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MAX;
	uint8_t x99 = UINT8_MAX;
	uint64_t x100 = 4210054553417983LLU;

	t21 = (x97&(x98%(x99&x100)));

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = INT8_MIN;
	volatile int16_t x102 = 734;
	int8_t x103 = INT8_MAX;
	static volatile int32_t x104 = -1;
	int32_t t22 = 457937;

	t22 = (x101&(x102%(x103&x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 24964U;
	int16_t x107 = -2;
	int8_t x108 = INT8_MIN;
	int64_t t23 = -21222619157978LL;

	t23 = (x105&(x106%(x107&x108)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x119 = INT8_MIN;
	volatile int64_t x120 = 57222280LL;
	int64_t t24 = -374587485986926168LL;

	t24 = (x117&(x118%(x119&x120)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = -1;
	uint32_t x126 = 52938433U;
	uint64_t x127 = 2119785119280897960LLU;
	uint32_t x128 = UINT32_MAX;
	uint64_t t25 = 136853805232599LLU;

	t25 = (x125&(x126%(x127&x128)));

	if (t25 != 52938433LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x133 = 1647159561479LLU;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = 12LLU;
	int8_t x136 = -3;
	static volatile uint64_t t26 = 47888LLU;

	t26 = (x133&(x134%(x135&x136)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = -342;
	uint16_t x139 = UINT16_MAX;
	int32_t x140 = -3178813;

	t27 = (x137&(x138%(x139&x140)));

	if (t27 != 18446744073709551274LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x145 = -18;
	volatile int16_t x146 = -1;
	static volatile int64_t x147 = -1LL;
	int64_t x148 = 33452094738997411LL;
	volatile int64_t t28 = -118084655LL;

	t28 = (x145&(x146%(x147&x148)));

	if (t28 != -18LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x154 = -1;
	uint64_t x155 = 164937217003LLU;
	static int32_t x156 = INT32_MAX;

	t29 = (x153&(x154%(x155&x156)));

	if (t29 != 393975575LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x157 = INT64_MIN;
	int16_t x158 = -1;
	static volatile int32_t x159 = INT32_MIN;

	t30 = (x157&(x158%(x159&x160)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x162 = 14;
	static int32_t x163 = INT32_MIN;
	static uint64_t x164 = 241404292297LLU;
	volatile uint64_t t31 = 2047024127LLU;

	t31 = (x161&(x162%(x163&x164)));

	if (t31 != 14LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x165 = -1;
	int64_t x168 = INT64_MAX;

	t32 = (x165&(x166%(x167&x168)));

	if (t32 != -16095379LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = 21;
	static int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MAX;
	int8_t x180 = INT8_MIN;

	t33 = (x177&(x178%(x179&x180)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x181 = INT16_MIN;
	static uint16_t x182 = 12290U;
	static int64_t x183 = -611869048518539129LL;
	int16_t x184 = 694;
	static int64_t t34 = 3639383595922192392LL;

	t34 = (x181&(x182%(x183&x184)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x185 = -4;
	static int8_t x186 = INT8_MAX;
	int64_t x188 = INT64_MIN;
	volatile int64_t t35 = -2501815063099LL;

	t35 = (x185&(x186%(x187&x188)));

	if (t35 != 124LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x189 = INT8_MIN;
	int32_t x190 = INT32_MAX;
	static int16_t x191 = INT16_MIN;
	int32_t t36 = -10948;

	t36 = (x189&(x190%(x191&x192)));

	if (t36 != 32640) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x193 = INT32_MIN;
	int8_t x195 = INT8_MIN;
	int64_t t37 = -378347227334LL;

	t37 = (x193&(x194%(x195&x196)));

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x197 = INT8_MAX;
	uint16_t x198 = 2885U;
	int8_t x199 = INT8_MAX;
	uint16_t x200 = UINT16_MAX;

	t38 = (x197&(x198%(x199&x200)));

	if (t38 != 91) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = 251;
	uint32_t x202 = UINT32_MAX;
	int32_t x203 = -20261;
	int16_t x204 = -399;
	uint32_t t39 = 29421906U;

	t39 = (x201&(x202%(x203&x204)));

	if (t39 != 170U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = 48067LLU;
	volatile int64_t x206 = INT64_MIN;
	uint64_t t40 = 33363399267LLU;

	t40 = (x205&(x206%(x207&x208)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x211 = INT16_MAX;
	static uint32_t x212 = 1131371U;

	t41 = (x209&(x210%(x211&x212)));

	if (t41 != 16U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x213 = INT8_MIN;
	int8_t x215 = 5;

	t42 = (x213&(x214%(x215&x216)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x218 = INT16_MAX;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = -3955;
	volatile int64_t t43 = 66219116512LL;

	t43 = (x217&(x218%(x219&x220)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = INT32_MAX;
	uint64_t x226 = UINT64_MAX;
	uint64_t x227 = 1526510252668967LLU;
	uint8_t x228 = UINT8_MAX;
	static uint64_t t44 = 2554830136537LLU;

	t44 = (x225&(x226%(x227&x228)));

	if (t44 != 15LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x229 = 0U;
	volatile uint64_t x230 = 39LLU;
	int16_t x231 = -2;
	static volatile int64_t x232 = -1LL;
	uint64_t t45 = 30380806124LLU;

	t45 = (x229&(x230%(x231&x232)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x233 = INT64_MIN;
	uint64_t x234 = 13LLU;
	volatile uint64_t t46 = 960395960611849LLU;

	t46 = (x233&(x234%(x235&x236)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x237 = INT64_MIN;
	uint16_t x238 = 28693U;
	uint16_t x239 = 5U;
	int8_t x240 = INT8_MAX;
	static int64_t t47 = -38870191266047741LL;

	t47 = (x237&(x238%(x239&x240)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x241 = 3469U;
	int8_t x244 = -1;
	uint32_t t48 = 11127244U;

	t48 = (x241&(x242%(x243&x244)));

	if (t48 != 141U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x249 = 2;
	volatile int8_t x250 = -1;
	static volatile int64_t x251 = -14900LL;
	int16_t x252 = 1025;
	int64_t t49 = -21858LL;

	t49 = (x249&(x250%(x251&x252)));

	if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	uint32_t x259 = UINT32_MAX;
	volatile int8_t x260 = INT8_MAX;
	static volatile uint32_t t50 = 1U;

	t50 = (x257&(x258%(x259&x260)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x261 = UINT16_MAX;
	int64_t x262 = INT64_MAX;
	int8_t x263 = -12;
	int32_t x264 = INT32_MAX;
	int64_t t51 = 23675695LL;

	t51 = (x261&(x262%(x263&x264)));

	if (t51 != 287LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x265 = INT8_MIN;
	volatile int32_t x266 = -2809;
	static uint16_t x267 = UINT16_MAX;
	uint32_t x268 = 3894562U;

	t52 = (x265&(x266%(x267&x268)));

	if (t52 != 27776U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x269 = UINT64_MAX;
	int64_t x270 = INT64_MIN;
	static int32_t x272 = 977;
	volatile uint64_t t53 = 3740LLU;

	t53 = (x269&(x270%(x271&x272)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = 76;
	int64_t x278 = INT64_MIN;
	int16_t x279 = -1;
	volatile int16_t x280 = -1;
	int64_t t54 = 16835957254517LL;

	t54 = (x277&(x278%(x279&x280)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x281 = -1;
	volatile int64_t x283 = -2656429488LL;
	volatile int64_t t55 = -178848LL;

	t55 = (x281&(x282%(x283&x284)));

	if (t55 != 30LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x289 = 1U;
	volatile int8_t x291 = -14;
	volatile uint16_t x292 = UINT16_MAX;
	volatile uint32_t t56 = 6U;

	t56 = (x289&(x290%(x291&x292)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x293 = -53417LL;
	static int8_t x294 = 0;
	int32_t x295 = -1;
	static int64_t x296 = -1LL;

	t57 = (x293&(x294%(x295&x296)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x299 = 1U;
	int32_t x300 = -1;
	uint32_t t58 = 105583U;

	t58 = (x297&(x298%(x299&x300)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x309 = INT32_MIN;
	int16_t x310 = INT16_MIN;
	uint64_t x311 = 47990544645LLU;
	static uint8_t x312 = 1U;

	t59 = (x309&(x310%(x311&x312)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = -1;
	uint16_t x320 = UINT16_MAX;
	uint64_t t60 = 718483LLU;

	t60 = (x317&(x318%(x319&x320)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x321 = INT16_MIN;
	uint16_t x323 = 1U;
	volatile int8_t x324 = 7;
	volatile int32_t t61 = 3;

	t61 = (x321&(x322%(x323&x324)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x325 = INT8_MIN;
	uint8_t x326 = 32U;
	int8_t x327 = INT8_MIN;
	uint32_t x328 = UINT32_MAX;
	volatile uint32_t t62 = 3736U;

	t62 = (x325&(x326%(x327&x328)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x330 = 0;
	uint32_t t63 = 11021U;

	t63 = (x329&(x330%(x331&x332)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x333 = -1;
	volatile int32_t x334 = INT32_MIN;
	uint16_t x335 = UINT16_MAX;
	int8_t x336 = 7;
	volatile int32_t t64 = 175;

	t64 = (x333&(x334%(x335&x336)));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x337 = -12;
	int32_t x338 = INT32_MIN;
	int64_t x339 = 164620911364LL;
	static int64_t x340 = INT64_MAX;

	t65 = (x337&(x338%(x339&x340)));

	if (t65 != -2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x349 = -1;
	volatile int64_t x350 = INT64_MIN;
	int32_t x352 = -13543;
	int64_t t66 = -2652851347711LL;

	t66 = (x349&(x350%(x351&x352)));

	if (t66 != -8LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x357 = UINT64_MAX;
	int16_t x359 = INT16_MIN;

	t67 = (x357&(x358%(x359&x360)));

	if (t67 != 115262LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x361 = UINT8_MAX;
	int8_t x363 = INT8_MAX;
	uint64_t t68 = 365LLU;

	t68 = (x361&(x362%(x363&x364)));

	if (t68 != 96LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x366 = 1U;
	uint8_t x367 = 119U;
	int8_t x368 = -5;
	volatile int32_t t69 = -1;

	t69 = (x365&(x366%(x367&x368)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x369 = -1;
	uint8_t x370 = 96U;
	volatile int64_t x372 = INT64_MIN;

	t70 = (x369&(x370%(x371&x372)));

	if (t70 != 96LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x374 = -1;
	static volatile int32_t x375 = INT32_MAX;
	int32_t x376 = -1403;
	int32_t t71 = 116125138;

	t71 = (x373&(x374%(x375&x376)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x377 = 1U;
	uint16_t x378 = UINT16_MAX;
	int8_t x379 = -1;
	int32_t t72 = -870;

	t72 = (x377&(x378%(x379&x380)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x381 = INT16_MAX;
	volatile uint8_t x382 = 55U;
	static int32_t x383 = 768629;
	int32_t x384 = 7624;
	static int32_t t73 = 564780964;

	t73 = (x381&(x382%(x383&x384)));

	if (t73 != 55) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x385 = -1;
	int32_t x386 = -12590;
	static volatile uint8_t x387 = 31U;
	int64_t x388 = INT64_MAX;

	t74 = (x385&(x386%(x387&x388)));

	if (t74 != -4LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x389 = 43U;
	int64_t x390 = -1LL;

	t75 = (x389&(x390%(x391&x392)));

	if (t75 != 43LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x393 = -2702108429LL;
	volatile int8_t x394 = -1;
	static volatile int32_t x395 = 60579592;
	static int16_t x396 = -105;
	volatile int64_t t76 = -2462626089362060125LL;

	t76 = (x393&(x394%(x395&x396)));

	if (t76 != -2702108429LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x399 = -1;

	t77 = (x397&(x398%(x399&x400)));

	if (t77 != 12LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x404 = 983830375;
	volatile uint32_t t78 = 64U;

	t78 = (x401&(x402%(x403&x404)));

	if (t78 != 52U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x405 = 128308U;
	int64_t x406 = INT64_MAX;
	int16_t x407 = INT16_MAX;

	t79 = (x405&(x406%(x407&x408)));

	if (t79 != 4LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x409 = 798U;
	static int8_t x410 = -17;
	volatile int16_t x411 = -27;
	volatile uint8_t x412 = UINT8_MAX;
	static int32_t t80 = 37265848;

	t80 = (x409&(x410%(x411&x412)));

	if (t80 != 782) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x418 = UINT8_MAX;
	int16_t x419 = -1;
	uint8_t x420 = 57U;
	volatile uint32_t t81 = 237030715U;

	t81 = (x417&(x418%(x419&x420)));

	if (t81 != 26U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x421 = -2;
	uint64_t x423 = UINT64_MAX;
	volatile uint64_t t82 = 3785485478490686687LLU;

	t82 = (x421&(x422%(x423&x424)));

	if (t82 != 254LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x425 = -1;
	static uint64_t x426 = 1680368424716LLU;
	volatile uint32_t x427 = UINT32_MAX;
	uint32_t x428 = UINT32_MAX;
	uint64_t t83 = 1LLU;

	t83 = (x425&(x426%(x427&x428)));

	if (t83 != 1036212371LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x429 = 13955644889142769LLU;
	static int32_t x430 = INT32_MIN;
	uint8_t x431 = 30U;
	uint64_t t84 = 347557800897978282LLU;

	t84 = (x429&(x430%(x431&x432)));

	if (t84 != 13955644889142768LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x433 = INT16_MIN;
	int64_t x434 = -24565521422624371LL;
	int64_t x436 = 2131948654926726LL;
	int64_t t85 = -16588278LL;

	t85 = (x433&(x434%(x435&x436)));

	if (t85 != -1114086218530816LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x437 = -1LL;
	int16_t x438 = INT16_MAX;
	static int16_t x439 = -1;
	int16_t x440 = INT16_MAX;
	static int64_t t86 = 3472334LL;

	t86 = (x437&(x438%(x439&x440)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x442 = -1;
	uint16_t x443 = UINT16_MAX;
	int16_t x444 = INT16_MAX;
	uint64_t t87 = 170LLU;

	t87 = (x441&(x442%(x443&x444)));

	if (t87 != 39610647LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x446 = -1;
	volatile uint32_t x448 = UINT32_MAX;
	int64_t t88 = 8248LL;

	t88 = (x445&(x446%(x447&x448)));

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x449 = INT8_MAX;
	int64_t x450 = -2992131951987016449LL;
	static uint32_t x451 = UINT32_MAX;
	int32_t x452 = -2708707;
	volatile int64_t t89 = 1364LL;

	t89 = (x449&(x450%(x451&x452)));

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x455 = 29138884971390961LLU;
	int32_t x456 = INT32_MAX;
	static volatile uint64_t t90 = 4011068213831949LLU;

	t90 = (x453&(x454%(x455&x456)));

	if (t90 != 65535LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x457 = INT8_MAX;
	static int8_t x458 = -1;
	volatile int64_t x460 = 239007597708828LL;

	t91 = (x457&(x458%(x459&x460)));

	if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x461 = 18U;
	int16_t x463 = INT16_MIN;
	int64_t x464 = -919352966016LL;

	t92 = (x461&(x462%(x463&x464)));

	if (t92 != 18LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x469 = INT32_MIN;
	int64_t x470 = INT64_MAX;
	int32_t x471 = -54862072;
	uint64_t x472 = 13795721450975360LLU;

	t93 = (x469&(x470%(x471&x472)));

	if (t93 != 7830107632697344LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x474 = 2387;
	static volatile uint8_t x475 = 22U;
	volatile int64_t t94 = -2062845232542LL;

	t94 = (x473&(x474%(x475&x476)));

	if (t94 != 3LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x478 = -170194167;
	int64_t x479 = INT64_MIN;
	static int32_t x480 = -45221;
	int64_t t95 = INT64_MIN;

	t95 = (x477&(x478%(x479&x480)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x481 = INT64_MIN;
	int64_t x484 = -1752655826473223656LL;

	t96 = (x481&(x482%(x483&x484)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x493 = 93U;
	volatile uint32_t x494 = 493830U;
	volatile int64_t x495 = INT64_MAX;
	volatile uint64_t x496 = 9933499073931865LLU;

	t97 = (x493&(x494%(x495&x496)));

	if (t97 != 4LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x497 = INT32_MIN;
	int16_t x498 = INT16_MIN;
	uint64_t x499 = 1776636273LLU;
	uint64_t x500 = 69931691631992923LLU;
	volatile uint64_t t98 = 801991764240021726LLU;

	t98 = (x497&(x498%(x499&x500)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x509 = INT16_MIN;
	int8_t x510 = INT8_MIN;
	uint32_t x511 = 52552506U;
	int16_t x512 = INT16_MAX;
	volatile uint32_t t99 = 746957U;

	t99 = (x509&(x510%(x511&x512)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

