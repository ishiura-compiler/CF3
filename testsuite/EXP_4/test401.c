#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = 1;
volatile int32_t x3 = -1;
uint16_t x4 = UINT16_MAX;
int8_t x5 = -1;
volatile int64_t t1 = -5157347854166556LL;
uint64_t x16 = 160493787378LLU;
uint8_t x19 = 99U;
int16_t x20 = -1;
static int16_t x22 = -1;
volatile int32_t x23 = -1;
volatile uint16_t x24 = UINT16_MAX;
static int16_t x25 = 0;
volatile uint8_t x26 = 27U;
static uint32_t x27 = UINT32_MAX;
uint16_t x30 = 7U;
int64_t t8 = -1929204975921505931LL;
volatile int32_t t9 = -17866142;
static int64_t x63 = -1LL;
static volatile int64_t t12 = 5786497885329LL;
volatile int8_t x70 = INT8_MIN;
int64_t x82 = 2409341326LL;
static uint32_t x83 = UINT32_MAX;
static uint16_t x85 = UINT16_MAX;
int64_t t17 = 146247835578949LL;
volatile int8_t x114 = 0;
int64_t x116 = -1LL;
int8_t x133 = 35;
int8_t x135 = INT8_MIN;
int16_t x145 = -1;
static uint64_t t27 = 3036LLU;
volatile uint64_t x167 = 1460LLU;
volatile int64_t x168 = -46272660901237521LL;
int64_t x174 = 230LL;
int8_t x177 = -1;
int32_t x183 = 207733;
volatile int32_t x197 = -8611379;
int8_t x200 = INT8_MAX;
static int32_t x208 = -1;
uint16_t x215 = 1U;
uint64_t t36 = 7191297LLU;
uint32_t x219 = UINT32_MAX;
uint32_t x222 = UINT32_MAX;
int32_t x233 = INT32_MAX;
static int16_t x235 = INT16_MIN;
int8_t x241 = 3;
volatile int32_t x248 = -1;
int16_t x251 = -1;
uint64_t t46 = 1LLU;
uint16_t x266 = UINT16_MAX;
static volatile int8_t x267 = 11;
uint32_t x268 = 2544182U;
int32_t x271 = -3278832;
static volatile int64_t x274 = -1LL;
int64_t x294 = -1866LL;
int32_t x300 = -203821404;
volatile uint64_t t53 = 14084304936149773LLU;
uint64_t t54 = 2350761743351LLU;
int16_t x317 = INT16_MAX;
static volatile uint32_t x337 = 2586350U;
static volatile uint32_t t57 = 9U;
int64_t x342 = INT64_MIN;
int16_t x343 = INT16_MIN;
volatile int8_t x351 = 51;
static int8_t x352 = -1;
static volatile int32_t x380 = -1;
static int8_t x382 = INT8_MIN;
uint64_t x384 = 2LLU;
int8_t x398 = INT8_MAX;
volatile uint8_t x399 = 1U;
uint64_t x406 = UINT64_MAX;
uint64_t x413 = UINT64_MAX;
static int8_t x416 = INT8_MIN;
int16_t x431 = INT16_MIN;
int16_t x433 = INT16_MIN;
int16_t x447 = -5;
uint32_t x448 = 38293U;
volatile int32_t x450 = 847474;
volatile int32_t t78 = -2276810;
volatile int32_t x497 = -12034;
volatile uint64_t t80 = 408LLU;
int8_t x511 = INT8_MAX;
static volatile int8_t x525 = INT8_MAX;
int64_t x546 = 9889678142171LL;
int32_t x549 = 23151507;
int32_t x552 = 18;
volatile int32_t t88 = 492;
int8_t x557 = -40;
static int8_t x559 = INT8_MIN;
static int32_t x565 = INT32_MAX;
int8_t x569 = 3;
int8_t x570 = INT8_MIN;
static int16_t x575 = INT16_MAX;
int32_t x589 = 39255621;
uint8_t x590 = 57U;
static int32_t x593 = 0;
static uint32_t x595 = 118774U;
int64_t x597 = -1LL;
uint16_t x599 = UINT16_MAX;
volatile uint64_t x613 = UINT64_MAX;
uint64_t x616 = UINT64_MAX;


void f0(void) {
	uint16_t x2 = 598U;
	volatile int32_t t0 = 17374;

	t0 = (x1&(x2%(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -79402920LL;
	int16_t x7 = INT16_MAX;
	volatile uint8_t x8 = 55U;

	t1 = (x5&(x6%(x7*x8)));

	if (t1 != -106780LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	static int16_t x10 = -1;
	int8_t x11 = INT8_MIN;
	volatile int8_t x12 = -1;
	volatile int32_t t2 = INT32_MIN;

	t2 = (x9&(x10%(x11*x12)));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = 1;
	uint16_t x15 = 2214U;
	volatile uint64_t t3 = 6707619087012418LLU;

	t3 = (x13&(x14%(x15*x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static volatile int64_t x18 = INT64_MIN;
	volatile int64_t t4 = -2900LL;

	t4 = (x17&(x18%(x19*x20)));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int32_t t5 = 16670082;

	t5 = (x21&(x22%(x23*x24)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x28 = INT16_MIN;
	uint32_t t6 = 23U;

	t6 = (x25&(x26%(x27*x28)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MIN;
	int32_t t7 = -980965992;

	t7 = (x29&(x30%(x31*x32)));

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = 137965U;
	static uint16_t x38 = 24298U;
	int64_t x39 = -1LL;
	uint32_t x40 = UINT32_MAX;

	t8 = (x37&(x38%(x39*x40)));

	if (t8 != 6888LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MIN;
	volatile int16_t x42 = INT16_MIN;
	uint8_t x43 = 122U;
	int16_t x44 = -1;

	t9 = (x41&(x42%(x43*x44)));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 4204737644LLU;
	static int64_t x46 = INT64_MAX;
	volatile uint8_t x47 = UINT8_MAX;
	uint8_t x48 = UINT8_MAX;
	uint64_t t10 = 101246693517LLU;

	t10 = (x45&(x46%(x47*x48)));

	if (t10 != 108LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 1937007U;
	uint32_t x54 = 0U;
	volatile int8_t x55 = INT8_MIN;
	int32_t x56 = -1;
	volatile uint32_t t11 = 1672U;

	t11 = (x53&(x54%(x55*x56)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -3;
	static uint16_t x62 = 164U;
	volatile int8_t x64 = INT8_MIN;

	t12 = (x61&(x62%(x63*x64)));

	if (t12 != 36LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = 0;
	uint32_t x71 = UINT32_MAX;
	uint16_t x72 = UINT16_MAX;
	volatile uint32_t t13 = 432919943U;

	t13 = (x69&(x70%(x71*x72)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x73 = 31U;
	int16_t x74 = 12257;
	static uint32_t x75 = 1U;
	uint8_t x76 = 13U;
	volatile uint32_t t14 = 1711144321U;

	t14 = (x73&(x74%(x75*x76)));

	if (t14 != 11U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x81 = INT64_MAX;
	uint16_t x84 = 4U;
	static int64_t t15 = 2022624LL;

	t15 = (x81&(x82%(x83*x84)));

	if (t15 != 2409341326LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x86 = 15U;
	static volatile uint8_t x87 = 82U;
	volatile int64_t x88 = -7422418182LL;
	volatile int64_t t16 = 2LL;

	t16 = (x85&(x86%(x87*x88)));

	if (t16 != 15LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = INT64_MIN;
	static int16_t x90 = -1;
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = UINT8_MAX;

	t17 = (x89&(x90%(x91*x92)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	int32_t x95 = 4;
	int16_t x96 = INT16_MIN;
	int32_t t18 = -7758;

	t18 = (x93&(x94%(x95*x96)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x97 = UINT16_MAX;
	volatile int64_t x98 = -58973654572561011LL;
	volatile int16_t x99 = 304;
	int64_t x100 = 17611262582LL;
	volatile int64_t t19 = 5LL;

	t19 = (x97&(x98%(x99*x100)));

	if (t19 != 57965LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -1;
	uint64_t x115 = 291509388946382LLU;
	uint64_t t20 = 4200295833298826077LLU;

	t20 = (x113&(x114%(x115*x116)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x117 = 6435;
	int32_t x118 = INT32_MAX;
	uint16_t x119 = UINT16_MAX;
	static int8_t x120 = -1;
	int32_t t21 = 0;

	t21 = (x117&(x118%(x119*x120)));

	if (t21 != 6435) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = INT16_MAX;
	int8_t x130 = INT8_MAX;
	uint16_t x131 = 27683U;
	int64_t x132 = -1001LL;
	volatile int64_t t22 = 105220LL;

	t22 = (x129&(x130%(x131*x132)));

	if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x134 = 1;
	uint16_t x136 = 72U;
	int32_t t23 = 0;

	t23 = (x133&(x134%(x135*x136)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x137 = INT16_MIN;
	uint32_t x138 = 7928U;
	uint16_t x139 = 209U;
	uint32_t x140 = UINT32_MAX;
	uint32_t t24 = 246431066U;

	t24 = (x137&(x138%(x139*x140)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x146 = INT8_MAX;
	static uint8_t x147 = 22U;
	static uint64_t x148 = 232945LLU;
	static volatile uint64_t t25 = 197LLU;

	t25 = (x145&(x146%(x147*x148)));

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x157 = INT32_MIN;
	static volatile int32_t x158 = -1;
	static uint8_t x159 = UINT8_MAX;
	int16_t x160 = -1;
	int32_t t26 = INT32_MIN;

	t26 = (x157&(x158%(x159*x160)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x161 = INT64_MIN;
	volatile int64_t x162 = -1LL;
	uint64_t x163 = UINT64_MAX;
	int32_t x164 = INT32_MAX;

	t27 = (x161&(x162%(x163*x164)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x165 = 0U;
	int8_t x166 = -1;
	uint64_t t28 = 115521813635LLU;

	t28 = (x165&(x166%(x167*x168)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x173 = 0LLU;
	int32_t x175 = -1;
	uint32_t x176 = 869855332U;
	uint64_t t29 = 7459809687490LLU;

	t29 = (x173&(x174%(x175*x176)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x178 = UINT16_MAX;
	int32_t x179 = 2224137;
	int64_t x180 = 20605002197LL;
	volatile int64_t t30 = -17820478404509955LL;

	t30 = (x177&(x178%(x179*x180)));

	if (t30 != 65535LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x181 = 397765319U;
	int8_t x182 = INT8_MIN;
	uint64_t x184 = UINT64_MAX;
	uint64_t t31 = 48665LLU;

	t31 = (x181&(x182%(x183*x184)));

	if (t31 != 76485LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x193 = 334270933086503005LLU;
	int8_t x194 = 1;
	static int8_t x195 = 12;
	volatile int32_t x196 = -343;
	uint64_t t32 = 5739434244297970LLU;

	t32 = (x193&(x194%(x195*x196)));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x198 = 42U;
	int64_t x199 = -102211LL;
	static volatile int64_t t33 = -616776268705155661LL;

	t33 = (x197&(x198%(x199*x200)));

	if (t33 != 8LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = 1;
	int32_t x203 = -45057;
	volatile int8_t x204 = INT8_MIN;
	int32_t t34 = 35780;

	t34 = (x201&(x202%(x203*x204)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x205 = 12;
	int16_t x206 = 3;
	int16_t x207 = -1;
	volatile int32_t t35 = -1859870;

	t35 = (x205&(x206%(x207*x208)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x213 = -1LL;
	volatile int8_t x214 = INT8_MIN;
	uint64_t x216 = 1057752578LLU;

	t36 = (x213&(x214%(x215*x216)));

	if (t36 != 516095382LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x217 = -1;
	volatile uint8_t x218 = UINT8_MAX;
	volatile int8_t x220 = INT8_MIN;
	volatile uint32_t t37 = 3U;

	t37 = (x217&(x218%(x219*x220)));

	if (t37 != 127U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x221 = INT16_MAX;
	static int8_t x223 = -1;
	int16_t x224 = INT16_MIN;
	uint32_t t38 = 5982744U;

	t38 = (x221&(x222%(x223*x224)));

	if (t38 != 32767U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x225 = 3104U;
	int64_t x226 = -1LL;
	volatile uint32_t x227 = UINT32_MAX;
	int16_t x228 = 713;
	int64_t t39 = 5507510291352784LL;

	t39 = (x225&(x226%(x227*x228)));

	if (t39 != 3104LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x229 = UINT8_MAX;
	int16_t x230 = 52;
	int16_t x231 = -1;
	int64_t x232 = INT64_MAX;
	int64_t t40 = -15099001194239LL;

	t40 = (x229&(x230%(x231*x232)));

	if (t40 != 52LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x234 = -50;
	static volatile uint16_t x236 = UINT16_MAX;
	int32_t t41 = -1;

	t41 = (x233&(x234%(x235*x236)));

	if (t41 != 2147483598) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x237 = UINT8_MAX;
	volatile uint8_t x238 = 112U;
	volatile int16_t x239 = INT16_MIN;
	uint16_t x240 = 19457U;
	int32_t t42 = -25345;

	t42 = (x237&(x238%(x239*x240)));

	if (t42 != 112) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x242 = INT8_MAX;
	volatile uint8_t x243 = 9U;
	uint16_t x244 = 1U;
	static int32_t t43 = -19;

	t43 = (x241&(x242%(x243*x244)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x245 = -53LL;
	uint8_t x246 = 117U;
	int8_t x247 = INT8_MIN;
	int64_t t44 = -48903LL;

	t44 = (x245&(x246%(x247*x248)));

	if (t44 != 65LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x249 = INT8_MIN;
	static int8_t x250 = INT8_MIN;
	int32_t x252 = -1;
	int32_t t45 = -277908895;

	t45 = (x249&(x250%(x251*x252)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x257 = 51133952LLU;
	int64_t x258 = INT64_MIN;
	static uint8_t x259 = 4U;
	uint8_t x260 = UINT8_MAX;

	t46 = (x257&(x258%(x259*x260)));

	if (t46 != 51133952LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x265 = INT32_MIN;
	uint32_t t47 = 26283603U;

	t47 = (x265&(x266%(x267*x268)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x269 = INT8_MIN;
	uint64_t x270 = 4LLU;
	uint32_t x272 = UINT32_MAX;
	volatile uint64_t t48 = 10LLU;

	t48 = (x269&(x270%(x271*x272)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x273 = 123195875;
	int8_t x275 = -4;
	int16_t x276 = -389;
	int64_t t49 = 26820009LL;

	t49 = (x273&(x274%(x275*x276)));

	if (t49 != 123195875LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x289 = INT8_MIN;
	static volatile uint64_t x290 = 3891852518LLU;
	int64_t x291 = -1LL;
	uint16_t x292 = UINT16_MAX;
	static volatile uint64_t t50 = 1975060075LLU;

	t50 = (x289&(x290%(x291*x292)));

	if (t50 != 3891852416LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x293 = INT8_MIN;
	int16_t x295 = 3780;
	int16_t x296 = -3261;
	int64_t t51 = 280422070668893744LL;

	t51 = (x293&(x294%(x295*x296)));

	if (t51 != -1920LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x297 = -1;
	volatile int32_t x298 = INT32_MIN;
	int64_t x299 = 29509LL;
	int64_t t52 = -153416073941425LL;

	t52 = (x297&(x298%(x299*x300)));

	if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x309 = 613LLU;
	int8_t x310 = INT8_MAX;
	int8_t x311 = 2;
	int8_t x312 = -1;

	t53 = (x309&(x310%(x311*x312)));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x313 = UINT16_MAX;
	volatile int64_t x314 = -1LL;
	volatile int16_t x315 = 4744;
	uint64_t x316 = 1LLU;

	t54 = (x313&(x314%(x315*x316)));

	if (t54 != 991LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x318 = 1576U;
	volatile int8_t x319 = -1;
	int32_t x320 = 44;
	int32_t t55 = 27;

	t55 = (x317&(x318%(x319*x320)));

	if (t55 != 36) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x321 = INT64_MAX;
	static uint32_t x322 = UINT32_MAX;
	static uint8_t x323 = 1U;
	volatile uint16_t x324 = 125U;
	int64_t t56 = 25412682616543168LL;

	t56 = (x321&(x322%(x323*x324)));

	if (t56 != 45LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x338 = INT32_MIN;
	int8_t x339 = 1;
	int16_t x340 = INT16_MAX;

	t57 = (x337&(x338%(x339*x340)));

	if (t57 != 2586350U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x341 = UINT32_MAX;
	uint8_t x344 = 104U;
	int64_t t58 = 3748642966536524338LL;

	t58 = (x341&(x342%(x343*x344)));

	if (t58 != 4293656576LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x349 = 539199364872058107LL;
	uint8_t x350 = 1U;
	int64_t t59 = 372146558834417LL;

	t59 = (x349&(x350%(x351*x352)));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x361 = 90;
	volatile int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MIN;
	int64_t x364 = -1LL;
	volatile int64_t t60 = -91005277LL;

	t60 = (x361&(x362%(x363*x364)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = INT16_MIN;
	int8_t x375 = -1;
	static int8_t x376 = -1;
	int64_t t61 = 1915410775700339LL;

	t61 = (x373&(x374%(x375*x376)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x377 = 1;
	int64_t x378 = -1LL;
	int64_t x379 = -113991183LL;
	int64_t t62 = 212538679379194LL;

	t62 = (x377&(x378%(x379*x380)));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x381 = 28U;
	int32_t x383 = 1;
	uint64_t t63 = 230396870LLU;

	t63 = (x381&(x382%(x383*x384)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x385 = INT16_MIN;
	static int64_t x386 = INT64_MIN;
	uint32_t x387 = 45U;
	static volatile uint8_t x388 = 2U;
	volatile int64_t t64 = -1004744655657533LL;

	t64 = (x385&(x386%(x387*x388)));

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x393 = 0;
	static int64_t x394 = INT64_MAX;
	int8_t x395 = -1;
	static int8_t x396 = -1;
	int64_t t65 = 1289984LL;

	t65 = (x393&(x394%(x395*x396)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x397 = 3071U;
	volatile int32_t x400 = -1;
	volatile uint32_t t66 = 22U;

	t66 = (x397&(x398%(x399*x400)));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x405 = UINT32_MAX;
	uint64_t x407 = UINT64_MAX;
	uint64_t x408 = UINT64_MAX;
	uint64_t t67 = 254829780539LLU;

	t67 = (x405&(x406%(x407*x408)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x409 = UINT64_MAX;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = UINT64_MAX;
	uint16_t x412 = UINT16_MAX;
	uint64_t t68 = 45044784456LLU;

	t68 = (x409&(x410%(x411*x412)));

	if (t68 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x414 = 10093U;
	uint8_t x415 = 55U;
	volatile uint64_t t69 = 3304028228114139LLU;

	t69 = (x413&(x414%(x415*x416)));

	if (t69 != 3053LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x421 = 83U;
	static int16_t x422 = INT16_MIN;
	static int64_t x423 = -1LL;
	int16_t x424 = -108;
	int64_t t70 = -12LL;

	t70 = (x421&(x422%(x423*x424)));

	if (t70 != 80LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x429 = INT8_MIN;
	int16_t x430 = -1;
	volatile int8_t x432 = INT8_MIN;
	static volatile int32_t t71 = 147;

	t71 = (x429&(x430%(x431*x432)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x434 = INT8_MIN;
	static int8_t x435 = 1;
	uint8_t x436 = UINT8_MAX;
	int32_t t72 = 280337766;

	t72 = (x433&(x434%(x435*x436)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x441 = INT32_MIN;
	static int16_t x442 = INT16_MIN;
	uint64_t x443 = 1090225440973LLU;
	volatile int16_t x444 = INT16_MIN;
	static uint64_t t73 = 32699802803LLU;

	t73 = (x441&(x442%(x443*x444)));

	if (t73 != 35724507175976960LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x445 = 0;
	volatile int32_t x446 = INT32_MIN;
	uint32_t t74 = 2U;

	t74 = (x445&(x446%(x447*x448)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x449 = 1;
	uint16_t x451 = 161U;
	static uint32_t x452 = 21U;
	uint32_t t75 = 7316436U;

	t75 = (x449&(x450%(x451*x452)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x453 = UINT8_MAX;
	static int8_t x454 = -1;
	uint64_t x455 = 25450544785975322LLU;
	volatile int8_t x456 = -1;
	volatile uint64_t t76 = 2LLU;

	t76 = (x453&(x454%(x455*x456)));

	if (t76 != 25LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x457 = -1;
	int64_t x458 = INT64_MIN;
	int8_t x459 = INT8_MIN;
	uint16_t x460 = 10277U;
	int64_t t77 = 12439894540074LL;

	t77 = (x457&(x458%(x459*x460)));

	if (t77 != -710144LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x465 = 11U;
	int16_t x466 = INT16_MAX;
	int8_t x467 = INT8_MIN;
	static int8_t x468 = 14;

	t78 = (x465&(x466%(x467*x468)));

	if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x469 = INT16_MIN;
	int8_t x470 = -6;
	volatile int32_t x471 = -378376;
	uint64_t x472 = UINT64_MAX;
	static uint64_t t79 = 7081379064117076944LLU;

	t79 = (x469&(x470%(x471*x472)));

	if (t79 != 98304LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x498 = UINT16_MAX;
	static uint64_t x499 = 196970LLU;
	uint8_t x500 = 1U;

	t80 = (x497&(x498%(x499*x500)));

	if (t80 != 53502LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x509 = INT16_MIN;
	static int64_t x510 = INT64_MIN;
	int16_t x512 = -1;
	int64_t t81 = -7130185793LL;

	t81 = (x509&(x510%(x511*x512)));

	if (t81 != -32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x521 = UINT8_MAX;
	uint64_t x522 = UINT64_MAX;
	int32_t x523 = -1;
	int32_t x524 = 299;
	volatile uint64_t t82 = 1131173647744LLU;

	t82 = (x521&(x522%(x523*x524)));

	if (t82 != 42LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x526 = 5U;
	static int16_t x527 = 5;
	volatile uint8_t x528 = 43U;
	static int32_t t83 = -8;

	t83 = (x525&(x526%(x527*x528)));

	if (t83 != 5) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x533 = 1U;
	volatile int32_t x534 = -1;
	int32_t x535 = INT32_MIN;
	uint32_t x536 = UINT32_MAX;
	volatile uint32_t t84 = 923157051U;

	t84 = (x533&(x534%(x535*x536)));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x541 = 180;
	int64_t x542 = -1LL;
	int64_t x543 = INT64_MAX;
	int64_t x544 = -1LL;
	volatile int64_t t85 = -1197LL;

	t85 = (x541&(x542%(x543*x544)));

	if (t85 != 180LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x545 = INT32_MIN;
	volatile int8_t x547 = -1;
	int32_t x548 = 297500;
	int64_t t86 = 376235180274LL;

	t86 = (x545&(x546%(x547*x548)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x550 = INT16_MAX;
	uint16_t x551 = 7582U;
	int32_t t87 = 2;

	t87 = (x549&(x550%(x551*x552)));

	if (t87 != 17299) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x553 = 0U;
	int8_t x554 = -39;
	int32_t x555 = 143285979;
	int8_t x556 = 2;

	t88 = (x553&(x554%(x555*x556)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x558 = 42493839U;
	int16_t x560 = 7;
	uint32_t t89 = 89U;

	t89 = (x557&(x558%(x559*x560)));

	if (t89 != 42493832U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x566 = 15;
	uint8_t x567 = 92U;
	uint8_t x568 = 77U;
	int32_t t90 = 2027;

	t90 = (x565&(x566%(x567*x568)));

	if (t90 != 15) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x571 = -1;
	static int8_t x572 = INT8_MIN;
	volatile int32_t t91 = 987151135;

	t91 = (x569&(x570%(x571*x572)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x573 = -2356;
	static uint16_t x574 = 3182U;
	int8_t x576 = 4;
	volatile int32_t t92 = -7547893;

	t92 = (x573&(x574%(x575*x576)));

	if (t92 != 1100) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x577 = INT64_MIN;
	uint32_t x578 = 819U;
	int16_t x579 = -1;
	static uint16_t x580 = UINT16_MAX;
	volatile int64_t t93 = -56171116LL;

	t93 = (x577&(x578%(x579*x580)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x581 = -1814;
	uint16_t x582 = UINT16_MAX;
	uint64_t x583 = UINT64_MAX;
	int64_t x584 = -3695LL;
	uint64_t t94 = 2496832823LLU;

	t94 = (x581&(x582%(x583*x584)));

	if (t94 != 2208LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x591 = 24U;
	int8_t x592 = INT8_MAX;
	static volatile int32_t t95 = -907125557;

	t95 = (x589&(x590%(x591*x592)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x594 = INT16_MIN;
	uint64_t x596 = 14701410372LLU;
	uint64_t t96 = 1699LLU;

	t96 = (x593&(x594%(x595*x596)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x598 = INT32_MAX;
	static int32_t x600 = -2139;
	int64_t t97 = -3138LL;

	t97 = (x597&(x598%(x599*x600)));

	if (t97 != 44793172LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x605 = -1;
	int64_t x606 = INT64_MAX;
	volatile uint8_t x607 = 9U;
	int32_t x608 = -1;
	static volatile int64_t t98 = 86804064112263LL;

	t98 = (x605&(x606%(x607*x608)));

	if (t98 != 7LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x614 = INT16_MIN;
	int8_t x615 = 1;
	volatile uint64_t t99 = 1030268LLU;

	t99 = (x613&(x614%(x615*x616)));

	if (t99 != 18446744073709518848LLU) { NG(); } else { ; }
	
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

