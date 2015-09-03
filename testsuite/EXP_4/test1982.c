#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 418213U;
uint32_t x10 = UINT32_MAX;
int8_t x25 = 6;
static volatile int32_t t3 = -556;
uint16_t x33 = 917U;
int32_t x34 = INT32_MIN;
volatile int32_t x35 = INT32_MIN;
uint32_t x61 = 1027238597U;
int8_t x71 = 1;
uint64_t x75 = 1024041170LLU;
volatile uint32_t t11 = UINT32_MAX;
uint32_t x89 = UINT32_MAX;
volatile uint32_t x100 = UINT32_MAX;
uint8_t x102 = 11U;
int64_t x103 = -16937203457LL;
int16_t x123 = -1;
uint64_t x125 = 3776756915LLU;
uint64_t t18 = 19754419840LLU;
int8_t x134 = INT8_MIN;
int64_t x135 = INT64_MAX;
volatile int32_t x152 = INT32_MIN;
static uint64_t x164 = 609233345804LLU;
int64_t x168 = INT64_MAX;
volatile int16_t x179 = INT16_MIN;
int32_t x183 = INT32_MIN;
int32_t t28 = -61871541;
int32_t t29 = 540;
int16_t x218 = -1;
volatile int8_t x219 = -4;
volatile int32_t t30 = -11499;
uint64_t x224 = 971500877LLU;
volatile int32_t x239 = -1;
int8_t x242 = 44;
int64_t x250 = INT64_MIN;
uint64_t x252 = 2925606300783LLU;
volatile uint8_t x253 = 9U;
int64_t x256 = INT64_MAX;
static volatile int8_t x257 = INT8_MAX;
uint64_t x258 = UINT64_MAX;
static volatile int32_t t38 = 19718;
int64_t x274 = -1173052562180054918LL;
int32_t x277 = INT32_MAX;
volatile int64_t t42 = 89714657751512LL;
int32_t x287 = -10;
int16_t x295 = INT16_MIN;
volatile int32_t t45 = 18;
int32_t x306 = INT32_MAX;
int64_t x308 = INT64_MIN;
int8_t x334 = INT8_MIN;
int8_t x335 = INT8_MAX;
int64_t t49 = 0LL;
uint64_t x367 = 48913939344LLU;
uint8_t x368 = UINT8_MAX;
int32_t t54 = -20;
int8_t x389 = 25;
int8_t x397 = 1;
volatile int32_t t57 = 583;
uint64_t x412 = 2923438174LLU;
uint32_t x415 = 4546301U;
static volatile int32_t x416 = INT32_MAX;
static volatile int64_t x422 = 33702LL;
int32_t x424 = -1;
static int32_t x426 = INT32_MIN;
uint32_t x429 = 14433U;
static volatile int8_t x430 = -2;
volatile uint32_t t62 = 41U;
volatile int16_t x435 = -1;
static volatile uint32_t t64 = UINT32_MAX;
uint32_t x441 = 26572918U;
static int32_t x443 = -1;
static volatile int32_t x463 = INT32_MAX;
int64_t x473 = INT64_MAX;
int8_t x474 = 2;
volatile uint64_t x481 = 8286010LLU;
uint16_t x484 = 479U;
volatile uint8_t x499 = 90U;
int32_t x505 = 87269;
volatile uint32_t x517 = UINT32_MAX;
uint64_t x526 = 14710811288371964LLU;
uint8_t x537 = UINT8_MAX;
uint8_t x538 = 113U;
static uint8_t x545 = 3U;
int64_t x546 = INT64_MIN;
int32_t x553 = INT32_MAX;
static uint16_t x554 = UINT16_MAX;
volatile int32_t t79 = INT32_MAX;
uint16_t x570 = UINT16_MAX;
uint16_t x584 = UINT16_MAX;
volatile int16_t x590 = INT16_MIN;
volatile int32_t t83 = 21180;
static uint64_t t84 = 7LLU;
uint32_t x602 = UINT32_MAX;
int64_t t85 = INT64_MAX;
uint16_t x617 = 189U;
int8_t x618 = INT8_MIN;
uint8_t x649 = 36U;
volatile uint16_t x651 = 10376U;
int64_t x657 = 1069802336442107LL;
int64_t t92 = 52LL;
int8_t x662 = INT8_MAX;
volatile int16_t x667 = 4071;
int16_t x668 = INT16_MIN;
static volatile int8_t x672 = INT8_MAX;
volatile int16_t x679 = 0;
int32_t x680 = -9977;
volatile int8_t x691 = INT8_MIN;
volatile int32_t t99 = 1;


void f0(void) {
	int64_t x2 = INT64_MAX;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = 2LLU;
	volatile uint32_t t0 = 1U;

	t0 = (x1<<(x2<=(x3|x4)));

	if (t0 != 836426U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	static volatile int32_t x11 = INT32_MAX;
	static uint16_t x12 = UINT16_MAX;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x9<<(x10<=(x11|x12)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x21 = 0U;
	uint8_t x22 = 0U;
	uint64_t x23 = 380606433733465018LLU;
	volatile int8_t x24 = INT8_MAX;
	int32_t t2 = -1313;

	t2 = (x21<<(x22<=(x23|x24)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x26 = 0;
	int64_t x27 = INT64_MIN;
	int16_t x28 = -292;

	t3 = (x25<<(x26<=(x27|x28)));

	if (t3 != 6) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x29 = INT64_MAX;
	static uint32_t x30 = UINT32_MAX;
	int16_t x31 = 1571;
	int16_t x32 = 0;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x29<<(x30<=(x31|x32)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x36 = INT64_MIN;
	volatile int32_t t5 = 39658802;

	t5 = (x33<<(x34<=(x35|x36)));

	if (t5 != 1834) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x49 = UINT32_MAX;
	uint64_t x50 = 2185792849905266LLU;
	static int32_t x51 = -1;
	int32_t x52 = INT32_MIN;
	volatile uint32_t t6 = 379198219U;

	t6 = (x49<<(x50<=(x51|x52)));

	if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = 65586851803283427LLU;
	uint64_t x54 = UINT64_MAX;
	volatile int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MIN;
	uint64_t t7 = 3244519313LLU;

	t7 = (x53<<(x54<=(x55|x56)));

	if (t7 != 65586851803283427LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x57 = 9198413LLU;
	int8_t x58 = INT8_MAX;
	int32_t x59 = 30;
	static int64_t x60 = INT64_MAX;
	static uint64_t t8 = 3676LLU;

	t8 = (x57<<(x58<=(x59|x60)));

	if (t8 != 18396826LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = -1;
	static int16_t x64 = INT16_MAX;
	volatile uint32_t t9 = 61U;

	t9 = (x61<<(x62<=(x63|x64)));

	if (t9 != 1027238597U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = INT32_MAX;
	volatile int32_t x70 = 3192;
	static uint8_t x72 = UINT8_MAX;
	volatile int32_t t10 = INT32_MAX;

	t10 = (x69<<(x70<=(x71|x72)));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x73 = UINT32_MAX;
	volatile int32_t x74 = -1;
	int32_t x76 = INT32_MIN;

	t11 = (x73<<(x74<=(x75|x76)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x77 = 13811U;
	uint8_t x78 = 0U;
	int32_t x79 = INT32_MIN;
	int16_t x80 = 0;
	int32_t t12 = -16399693;

	t12 = (x77<<(x78<=(x79|x80)));

	if (t12 != 13811) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x85 = 3U;
	uint8_t x86 = UINT8_MAX;
	volatile int16_t x87 = -1;
	volatile int64_t x88 = -97493627395780LL;
	volatile int32_t t13 = 19194213;

	t13 = (x85<<(x86<=(x87|x88)));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x90 = 246067561U;
	static int16_t x91 = -220;
	volatile uint32_t x92 = 1476U;
	uint32_t t14 = 4792U;

	t14 = (x89<<(x90<=(x91|x92)));

	if (t14 != 4294967294U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = 31;
	int32_t x98 = 89544;
	int32_t x99 = -329471173;
	int32_t t15 = -626;

	t15 = (x97<<(x98<=(x99|x100)));

	if (t15 != 62) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x101 = UINT16_MAX;
	volatile uint64_t x104 = UINT64_MAX;
	volatile int32_t t16 = 4;

	t16 = (x101<<(x102<=(x103|x104)));

	if (t16 != 131070) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x121 = UINT64_MAX;
	uint16_t x122 = 44U;
	static int16_t x124 = -2243;
	static volatile uint64_t t17 = UINT64_MAX;

	t17 = (x121<<(x122<=(x123|x124)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x126 = 734513U;
	static int16_t x127 = -3038;
	uint64_t x128 = 61480416840781LLU;

	t18 = (x125<<(x126<=(x127|x128)));

	if (t18 != 7553513830LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x129 = UINT8_MAX;
	static int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	volatile uint32_t x132 = 153284U;
	int32_t t19 = 6861;

	t19 = (x129<<(x130<=(x131|x132)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x133 = INT16_MAX;
	volatile int16_t x136 = -1;
	volatile int32_t t20 = -46019;

	t20 = (x133<<(x134<=(x135|x136)));

	if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x145 = 7U;
	int8_t x146 = -1;
	int8_t x147 = -1;
	static int32_t x148 = 1;
	static uint32_t t21 = 54U;

	t21 = (x145<<(x146<=(x147|x148)));

	if (t21 != 14U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x149 = 856497214543158330LL;
	uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MIN;
	static volatile int64_t t22 = 25990900857606LL;

	t22 = (x149<<(x150<=(x151|x152)));

	if (t22 != 856497214543158330LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x161 = 42U;
	volatile int64_t x162 = -1LL;
	static volatile uint16_t x163 = 14852U;
	int32_t t23 = 7764651;

	t23 = (x161<<(x162<=(x163|x164)));

	if (t23 != 42) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x165 = 62342LLU;
	int64_t x166 = INT64_MIN;
	int8_t x167 = INT8_MIN;
	volatile uint64_t t24 = 870259846709585557LLU;

	t24 = (x165<<(x166<=(x167|x168)));

	if (t24 != 124684LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x169 = 147;
	uint32_t x170 = UINT32_MAX;
	volatile int32_t x171 = -1;
	int64_t x172 = INT64_MIN;
	static int32_t t25 = 1;

	t25 = (x169<<(x170<=(x171|x172)));

	if (t25 != 147) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x173 = INT64_MAX;
	static int32_t x174 = -16;
	static int32_t x175 = -48;
	int64_t x176 = INT64_MIN;
	static int64_t t26 = INT64_MAX;

	t26 = (x173<<(x174<=(x175|x176)));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x177 = UINT16_MAX;
	static int8_t x178 = -1;
	int8_t x180 = 0;
	volatile int32_t t27 = -614337734;

	t27 = (x177<<(x178<=(x179|x180)));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x181 = 790;
	int16_t x182 = 6;
	volatile uint8_t x184 = UINT8_MAX;

	t28 = (x181<<(x182<=(x183|x184)));

	if (t28 != 790) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x213 = INT16_MAX;
	static volatile uint8_t x214 = 45U;
	int64_t x215 = INT64_MIN;
	volatile uint32_t x216 = UINT32_MAX;

	t29 = (x213<<(x214<=(x215|x216)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x217 = 110U;
	uint32_t x220 = UINT32_MAX;

	t30 = (x217<<(x218<=(x219|x220)));

	if (t30 != 220) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x221 = UINT8_MAX;
	int16_t x222 = -6351;
	int8_t x223 = INT8_MAX;
	int32_t t31 = 1;

	t31 = (x221<<(x222<=(x223|x224)));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x225 = INT16_MAX;
	uint8_t x226 = 7U;
	volatile int8_t x227 = INT8_MAX;
	static uint32_t x228 = 995U;
	volatile int32_t t32 = -61;

	t32 = (x225<<(x226<=(x227|x228)));

	if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x233 = INT64_MAX;
	uint8_t x234 = 40U;
	int8_t x235 = -2;
	static int32_t x236 = INT32_MIN;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x233<<(x234<=(x235|x236)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x237 = UINT64_MAX;
	static int16_t x238 = INT16_MAX;
	volatile int64_t x240 = 1223120027484920033LL;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x237<<(x238<=(x239|x240)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x241 = INT32_MAX;
	int8_t x243 = INT8_MIN;
	int8_t x244 = -47;
	int32_t t35 = INT32_MAX;

	t35 = (x241<<(x242<=(x243|x244)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x249 = INT8_MAX;
	volatile uint16_t x251 = UINT16_MAX;
	volatile int32_t t36 = 5562647;

	t36 = (x249<<(x250<=(x251|x252)));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MAX;
	int32_t t37 = -1;

	t37 = (x253<<(x254<=(x255|x256)));

	if (t37 != 18) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x259 = INT16_MAX;
	static volatile int32_t x260 = INT32_MIN;

	t38 = (x257<<(x258<=(x259|x260)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x265 = 500143LLU;
	int64_t x266 = INT64_MIN;
	int16_t x267 = 1;
	uint8_t x268 = UINT8_MAX;
	static uint64_t t39 = 94976536LLU;

	t39 = (x265<<(x266<=(x267|x268)));

	if (t39 != 1000286LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x273 = 7589001950194LLU;
	int16_t x275 = -1;
	int64_t x276 = INT64_MIN;
	volatile uint64_t t40 = 59819985257LLU;

	t40 = (x273<<(x274<=(x275|x276)));

	if (t40 != 15178003900388LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x278 = UINT32_MAX;
	volatile int64_t x279 = -8149688483680769LL;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t41 = INT32_MAX;

	t41 = (x277<<(x278<=(x279|x280)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x281 = 12597290008LL;
	static int8_t x282 = -1;
	int32_t x283 = INT32_MIN;
	uint32_t x284 = 599403U;

	t42 = (x281<<(x282<=(x283|x284)));

	if (t42 != 12597290008LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x285 = 20U;
	int8_t x286 = INT8_MIN;
	static int32_t x288 = -22485;
	static volatile int32_t t43 = -885824184;

	t43 = (x285<<(x286<=(x287|x288)));

	if (t43 != 40) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x293 = 701652802243998LLU;
	static int16_t x294 = -1;
	static uint32_t x296 = 24U;
	volatile uint64_t t44 = 3526LLU;

	t44 = (x293<<(x294<=(x295|x296)));

	if (t44 != 701652802243998LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x297 = 943;
	int64_t x298 = 6294LL;
	volatile uint32_t x299 = UINT32_MAX;
	volatile int32_t x300 = INT32_MIN;

	t45 = (x297<<(x298<=(x299|x300)));

	if (t45 != 1886) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x305 = INT16_MAX;
	int16_t x307 = INT16_MAX;
	static int32_t t46 = 637741;

	t46 = (x305<<(x306<=(x307|x308)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x309 = UINT32_MAX;
	volatile int64_t x310 = INT64_MIN;
	static uint64_t x311 = UINT64_MAX;
	int8_t x312 = INT8_MIN;
	static volatile uint32_t t47 = 1U;

	t47 = (x309<<(x310<=(x311|x312)));

	if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x333 = 3U;
	int64_t x336 = -1LL;
	volatile int32_t t48 = -25898;

	t48 = (x333<<(x334<=(x335|x336)));

	if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x345 = 22101169LL;
	int32_t x346 = INT32_MIN;
	static int8_t x347 = INT8_MIN;
	int16_t x348 = 867;

	t49 = (x345<<(x346<=(x347|x348)));

	if (t49 != 44202338LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x361 = 2290655014431LLU;
	int16_t x362 = INT16_MAX;
	uint32_t x363 = 758568U;
	uint16_t x364 = UINT16_MAX;
	volatile uint64_t t50 = 8255911354LLU;

	t50 = (x361<<(x362<=(x363|x364)));

	if (t50 != 4581310028862LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x365 = 736752566LLU;
	int16_t x366 = INT16_MIN;
	volatile uint64_t t51 = 2042494552573215LLU;

	t51 = (x365<<(x366<=(x367|x368)));

	if (t51 != 736752566LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x369 = UINT8_MAX;
	static int16_t x370 = -241;
	volatile int32_t x371 = -1;
	static int32_t x372 = INT32_MAX;
	int32_t t52 = -14669606;

	t52 = (x369<<(x370<=(x371|x372)));

	if (t52 != 510) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x373 = 1604928898871960LLU;
	int32_t x374 = -671150597;
	int16_t x375 = -1;
	static int16_t x376 = INT16_MIN;
	volatile uint64_t t53 = 17992972LLU;

	t53 = (x373<<(x374<=(x375|x376)));

	if (t53 != 3209857797743920LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x385 = 25631973;
	volatile int32_t x386 = 402850;
	volatile int16_t x387 = INT16_MAX;
	int16_t x388 = -1;

	t54 = (x385<<(x386<=(x387|x388)));

	if (t54 != 25631973) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x390 = UINT32_MAX;
	int8_t x391 = INT8_MIN;
	uint8_t x392 = UINT8_MAX;
	static int32_t t55 = -1638;

	t55 = (x389<<(x390<=(x391|x392)));

	if (t55 != 50) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x398 = INT32_MIN;
	static int32_t x399 = INT32_MAX;
	int32_t x400 = INT32_MIN;
	volatile int32_t t56 = -4850;

	t56 = (x397<<(x398<=(x399|x400)));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x401 = 49U;
	int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	volatile uint8_t x404 = 3U;

	t57 = (x401<<(x402<=(x403|x404)));

	if (t57 != 49) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x409 = 16101449U;
	int64_t x410 = -1LL;
	int16_t x411 = INT16_MAX;
	static uint32_t t58 = 55383329U;

	t58 = (x409<<(x410<=(x411|x412)));

	if (t58 != 16101449U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x413 = 2000046112LLU;
	volatile int64_t x414 = INT64_MIN;
	volatile uint64_t t59 = 579373763LLU;

	t59 = (x413<<(x414<=(x415|x416)));

	if (t59 != 4000092224LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x421 = 7;
	static int32_t x423 = INT32_MAX;
	static volatile int32_t t60 = -934955788;

	t60 = (x421<<(x422<=(x423|x424)));

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x425 = UINT32_MAX;
	int16_t x427 = 1;
	int16_t x428 = INT16_MAX;
	static volatile uint32_t t61 = 146329144U;

	t61 = (x425<<(x426<=(x427|x428)));

	if (t61 != 4294967294U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x431 = -1;
	int8_t x432 = -1;

	t62 = (x429<<(x430<=(x431|x432)));

	if (t62 != 28866U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x433 = INT16_MAX;
	uint64_t x434 = 17229884971LLU;
	int32_t x436 = INT32_MIN;
	int32_t t63 = 502;

	t63 = (x433<<(x434<=(x435|x436)));

	if (t63 != 65534) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x437 = UINT32_MAX;
	volatile uint16_t x438 = 3504U;
	volatile int16_t x439 = -102;
	volatile int64_t x440 = INT64_MIN;

	t64 = (x437<<(x438<=(x439|x440)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x442 = 4401004448305890033LLU;
	volatile int32_t x444 = 542822690;
	uint32_t t65 = 513113U;

	t65 = (x441<<(x442<=(x443|x444)));

	if (t65 != 53145836U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x461 = UINT32_MAX;
	int64_t x462 = -1LL;
	volatile uint8_t x464 = 3U;
	volatile uint32_t t66 = 4683U;

	t66 = (x461<<(x462<=(x463|x464)));

	if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x475 = -1;
	volatile int16_t x476 = -926;
	static volatile int64_t t67 = INT64_MAX;

	t67 = (x473<<(x474<=(x475|x476)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x477 = 225U;
	int64_t x478 = INT64_MIN;
	volatile int64_t x479 = INT64_MIN;
	static int8_t x480 = INT8_MIN;
	volatile int32_t t68 = -2246;

	t68 = (x477<<(x478<=(x479|x480)));

	if (t68 != 450) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x482 = UINT64_MAX;
	static volatile int64_t x483 = -3217492854412907LL;
	uint64_t t69 = 1940893156LLU;

	t69 = (x481<<(x482<=(x483|x484)));

	if (t69 != 8286010LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x493 = 1U;
	int32_t x494 = 36;
	uint16_t x495 = 2062U;
	int32_t x496 = INT32_MIN;
	static int32_t t70 = 28310291;

	t70 = (x493<<(x494<=(x495|x496)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x497 = UINT16_MAX;
	int64_t x498 = -2653322466LL;
	volatile uint32_t x500 = 25733U;
	int32_t t71 = -1;

	t71 = (x497<<(x498<=(x499|x500)));

	if (t71 != 131070) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x506 = -1;
	uint64_t x507 = UINT64_MAX;
	uint8_t x508 = UINT8_MAX;
	static int32_t t72 = 641;

	t72 = (x505<<(x506<=(x507|x508)));

	if (t72 != 174538) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x518 = 860U;
	uint8_t x519 = 0U;
	int16_t x520 = INT16_MIN;
	uint32_t t73 = UINT32_MAX;

	t73 = (x517<<(x518<=(x519|x520)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x525 = 77U;
	static uint32_t x527 = 126U;
	uint32_t x528 = 529U;
	volatile int32_t t74 = 11169592;

	t74 = (x525<<(x526<=(x527|x528)));

	if (t74 != 77) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x539 = 814961283361LLU;
	int16_t x540 = -1;
	int32_t t75 = 0;

	t75 = (x537<<(x538<=(x539|x540)));

	if (t75 != 510) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x541 = UINT32_MAX;
	int64_t x542 = INT64_MAX;
	uint64_t x543 = 21LLU;
	uint16_t x544 = 91U;
	uint32_t t76 = UINT32_MAX;

	t76 = (x541<<(x542<=(x543|x544)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x547 = 1U;
	volatile int16_t x548 = -1;
	static int32_t t77 = -3524807;

	t77 = (x545<<(x546<=(x547|x548)));

	if (t77 != 6) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x549 = UINT16_MAX;
	volatile uint16_t x550 = 26U;
	int32_t x551 = INT32_MIN;
	static uint64_t x552 = 237827789960799379LLU;
	static volatile int32_t t78 = -418;

	t78 = (x549<<(x550<=(x551|x552)));

	if (t78 != 131070) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x555 = INT64_MIN;
	int32_t x556 = INT32_MIN;

	t79 = (x553<<(x554<=(x555|x556)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x569 = 3869376LL;
	uint64_t x571 = UINT64_MAX;
	int16_t x572 = INT16_MIN;
	static int64_t t80 = 2178973030042645LL;

	t80 = (x569<<(x570<=(x571|x572)));

	if (t80 != 7738752LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x581 = UINT32_MAX;
	uint8_t x582 = UINT8_MAX;
	int32_t x583 = INT32_MAX;
	volatile uint32_t t81 = 623716U;

	t81 = (x581<<(x582<=(x583|x584)));

	if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x585 = INT16_MAX;
	int16_t x586 = -1;
	uint16_t x587 = 1720U;
	static int8_t x588 = -1;
	volatile int32_t t82 = -32180;

	t82 = (x585<<(x586<=(x587|x588)));

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x589 = INT8_MAX;
	static int64_t x591 = INT64_MIN;
	int16_t x592 = INT16_MAX;

	t83 = (x589<<(x590<=(x591|x592)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x597 = 83848210733LLU;
	volatile uint8_t x598 = 1U;
	int64_t x599 = -31LL;
	int16_t x600 = INT16_MIN;

	t84 = (x597<<(x598<=(x599|x600)));

	if (t84 != 83848210733LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x601 = INT64_MAX;
	volatile int16_t x603 = INT16_MAX;
	static uint32_t x604 = 487U;

	t85 = (x601<<(x602<=(x603|x604)));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x613 = UINT64_MAX;
	uint8_t x614 = 13U;
	int16_t x615 = 122;
	volatile int64_t x616 = INT64_MAX;
	volatile uint64_t t86 = 18527363618LLU;

	t86 = (x613<<(x614<=(x615|x616)));

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x619 = -25;
	int8_t x620 = INT8_MIN;
	volatile int32_t t87 = -12;

	t87 = (x617<<(x618<=(x619|x620)));

	if (t87 != 378) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x637 = 1U;
	int32_t x638 = -1;
	int16_t x639 = -1;
	uint64_t x640 = 5008810443132165737LLU;
	static volatile int32_t t88 = -874;

	t88 = (x637<<(x638<=(x639|x640)));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x641 = INT32_MAX;
	int8_t x642 = INT8_MAX;
	int16_t x643 = -9;
	static volatile int64_t x644 = INT64_MIN;
	int32_t t89 = INT32_MAX;

	t89 = (x641<<(x642<=(x643|x644)));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x650 = INT8_MIN;
	int64_t x652 = INT64_MIN;
	int32_t t90 = -228913;

	t90 = (x649<<(x650<=(x651|x652)));

	if (t90 != 36) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x653 = 1066U;
	uint64_t x654 = UINT64_MAX;
	static int8_t x655 = -1;
	static int64_t x656 = INT64_MIN;
	volatile uint32_t t91 = 136938U;

	t91 = (x653<<(x654<=(x655|x656)));

	if (t91 != 2132U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x658 = UINT8_MAX;
	volatile int8_t x659 = -1;
	int8_t x660 = -25;

	t92 = (x657<<(x658<=(x659|x660)));

	if (t92 != 1069802336442107LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x661 = 461200U;
	int32_t x663 = -24;
	static int16_t x664 = INT16_MIN;
	volatile uint32_t t93 = 1532U;

	t93 = (x661<<(x662<=(x663|x664)));

	if (t93 != 461200U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x665 = 9638U;
	static int16_t x666 = INT16_MIN;
	volatile int32_t t94 = 16249;

	t94 = (x665<<(x666<=(x667|x668)));

	if (t94 != 19276) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x669 = INT32_MAX;
	int8_t x670 = INT8_MIN;
	volatile int32_t x671 = INT32_MIN;
	static int32_t t95 = INT32_MAX;

	t95 = (x669<<(x670<=(x671|x672)));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x673 = 9812566190LL;
	uint64_t x674 = UINT64_MAX;
	int8_t x675 = INT8_MIN;
	volatile uint16_t x676 = UINT16_MAX;
	int64_t t96 = -295080933LL;

	t96 = (x673<<(x674<=(x675|x676)));

	if (t96 != 19625132380LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x677 = INT16_MAX;
	int8_t x678 = 10;
	int32_t t97 = 184264;

	t97 = (x677<<(x678<=(x679|x680)));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x685 = INT8_MAX;
	int32_t x686 = -1;
	static int64_t x687 = INT64_MIN;
	int8_t x688 = INT8_MIN;
	static volatile int32_t t98 = 0;

	t98 = (x685<<(x686<=(x687|x688)));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x689 = 0U;
	int64_t x690 = -1LL;
	volatile int16_t x692 = -1;

	t99 = (x689<<(x690<=(x691|x692)));

	if (t99 != 0) { NG(); } else { ; }
	
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

