#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
uint32_t x4 = 116034231U;
uint64_t x14 = 1340352LLU;
int8_t x17 = INT8_MIN;
volatile int32_t x20 = 245071;
int32_t t4 = 25263712;
static int8_t x30 = 1;
uint16_t x40 = 64U;
uint8_t x42 = UINT8_MAX;
uint32_t x44 = 32U;
uint32_t t8 = 0U;
int8_t x51 = 1;
volatile int64_t t9 = -1772119LL;
int32_t x58 = -2718;
uint32_t x60 = 524355U;
volatile int8_t x61 = INT8_MAX;
uint32_t t12 = 94841523U;
volatile int64_t t14 = 139LL;
int64_t x89 = INT64_MIN;
uint64_t x90 = 0LLU;
static int64_t x91 = -2587LL;
volatile int64_t t20 = -1688LL;
int8_t x101 = 0;
static int64_t x104 = 8754381012786795LL;
volatile int64_t t22 = 384LL;
static int8_t x126 = INT8_MIN;
static int32_t t24 = -146;
volatile int32_t x140 = -1;
int16_t x141 = 3;
static volatile uint64_t x144 = UINT64_MAX;
uint16_t x147 = UINT16_MAX;
volatile int64_t x151 = -1LL;
volatile int64_t t29 = 97508LL;
volatile int64_t x158 = -782783LL;
volatile uint64_t t30 = 13529719714230LLU;
volatile int16_t x165 = 0;
int32_t x167 = INT32_MIN;
int64_t x170 = INT64_MIN;
static int32_t x175 = INT32_MAX;
volatile uint32_t x176 = 1848649507U;
int64_t x180 = -3468116249367LL;
volatile int64_t t36 = 1265LL;
static uint16_t x194 = UINT16_MAX;
int16_t x200 = -3729;
volatile int16_t x204 = 2299;
volatile uint64_t x210 = 42120337118319LLU;
uint64_t t42 = 7616807366LLU;
uint64_t x216 = UINT64_MAX;
volatile uint64_t t43 = 11716211681635850LLU;
uint32_t x217 = 182657162U;
int32_t t45 = -3;
int32_t x225 = -1;
int8_t x248 = INT8_MAX;
uint32_t x249 = 56U;
int32_t x255 = -6644;
uint64_t t53 = 28065LLU;
int16_t x263 = INT16_MAX;
uint8_t x266 = UINT8_MAX;
volatile int8_t x268 = INT8_MAX;
int16_t x271 = -8441;
static uint32_t x272 = 228866U;
int32_t x282 = 682071;
int64_t x283 = INT64_MIN;
volatile int64_t t57 = 699439LL;
volatile int64_t t59 = 13LL;
uint32_t x300 = 7183U;
int64_t t60 = -985412007379096LL;
uint8_t x316 = UINT8_MAX;
static int32_t x319 = INT32_MIN;
int8_t x334 = INT8_MIN;
volatile uint8_t x346 = 1U;
volatile int64_t x360 = -194912975078LL;
int8_t x362 = INT8_MIN;
uint32_t x364 = 7U;
static int16_t x378 = -1;
uint64_t x394 = UINT64_MAX;
static uint8_t x395 = UINT8_MAX;
uint64_t x397 = 125LLU;
int16_t x399 = INT16_MIN;
int8_t x400 = INT8_MIN;
volatile uint8_t x401 = 0U;
int64_t x404 = -1LL;
uint32_t x405 = 88359U;
uint64_t t79 = 6116093916LLU;
static uint64_t t81 = 623687362291315LLU;
volatile int8_t x417 = -18;
static volatile int64_t t82 = 1070034970449LL;
static int32_t x430 = INT32_MIN;
int16_t x433 = INT16_MIN;
static int32_t x451 = 110884085;
volatile uint64_t x460 = 14LLU;
static volatile int64_t x472 = INT64_MAX;
static int64_t x475 = -1LL;
uint8_t x484 = UINT8_MAX;
volatile int64_t x504 = -14444482319012LL;
static volatile int64_t t97 = -23378065849LL;
volatile uint32_t t99 = 118692U;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int32_t x3 = -1;
	volatile uint32_t t0 = 180600U;

	t0 = (x1-(x2%(x3&x4)));

	if (t0 != 4293266420U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MIN;
	int16_t x7 = INT16_MAX;
	uint32_t x8 = UINT32_MAX;
	int64_t t1 = 2318801866369265LL;

	t1 = (x5-(x6%(x7&x8)));

	if (t1 != -120LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1543;
	uint8_t x10 = 0U;
	static int64_t x11 = -1LL;
	uint64_t x12 = 11837LLU;
	volatile uint64_t t2 = 509617078LLU;

	t2 = (x9-(x10%(x11&x12)));

	if (t2 != 1543LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	uint32_t x15 = 34047U;
	int16_t x16 = -4778;
	volatile uint64_t t3 = 0LLU;

	t3 = (x13-(x14%(x15&x16)));

	if (t3 != 18446744073709532505LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -83;
	int32_t x19 = -6729;

	t4 = (x17-(x18%(x19&x20)));

	if (t4 != -45) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static volatile int64_t x22 = INT64_MIN;
	int32_t x23 = -878132198;
	volatile int64_t x24 = INT64_MIN;
	int64_t t5 = 16826677786LL;

	t5 = (x21-(x22%(x23&x24)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 70LLU;
	uint64_t x31 = 1856830LLU;
	int16_t x32 = INT16_MAX;
	volatile uint64_t t6 = 120856841LLU;

	t6 = (x29-(x30%(x31&x32)));

	if (t6 != 69LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 751812695U;
	uint8_t x38 = 4U;
	static int64_t x39 = -1LL;
	int64_t t7 = -7384690855942142LL;

	t7 = (x37-(x38%(x39&x40)));

	if (t7 != 751812691LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	int32_t x43 = -9;

	t8 = (x41-(x42%(x43&x44)));

	if (t8 != 4294967264U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MIN;
	int64_t x52 = INT64_MAX;

	t9 = (x49-(x50%(x51&x52)));

	if (t9 != -32768LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = -1;
	int64_t x54 = -4887817875LL;
	static int16_t x55 = -762;
	static volatile uint16_t x56 = UINT16_MAX;
	int64_t t10 = -1069115033990LL;

	t10 = (x53-(x54%(x55&x56)));

	if (t10 != 36608LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = 4;
	static uint16_t x59 = UINT16_MAX;
	volatile uint32_t t11 = 994348814U;

	t11 = (x57-(x58%(x59&x60)));

	if (t11 != 4294967238U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x62 = UINT32_MAX;
	int8_t x63 = -1;
	int8_t x64 = INT8_MIN;

	t12 = (x61-(x62%(x63&x64)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = 587U;
	static int16_t x66 = INT16_MIN;
	uint16_t x67 = 1U;
	uint8_t x68 = UINT8_MAX;
	static int32_t t13 = -9369907;

	t13 = (x65-(x66%(x67&x68)));

	if (t13 != 587) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = INT64_MIN;
	int8_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;

	t14 = (x69-(x70%(x71&x72)));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = -298905;
	uint32_t x79 = 1626U;
	static int64_t x80 = -1LL;
	volatile int64_t t15 = 18822236LL;

	t15 = (x77-(x78%(x79&x80)));

	if (t15 != -2147482301LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = 3488U;
	volatile uint16_t x82 = 26884U;
	static int16_t x83 = INT16_MAX;
	volatile uint16_t x84 = 356U;
	int32_t t16 = 9959015;

	t16 = (x81-(x82%(x83&x84)));

	if (t16 != 3304) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x85 = 1175782;
	volatile uint16_t x86 = 2U;
	int16_t x87 = INT16_MAX;
	static uint32_t x88 = UINT32_MAX;
	uint32_t t17 = 9U;

	t17 = (x85-(x86%(x87&x88)));

	if (t17 != 1175780U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x92 = 182163637565344LLU;
	volatile uint64_t t18 = 5296437101012LLU;

	t18 = (x89-(x90%(x91&x92)));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = -1;
	int8_t x94 = 5;
	uint16_t x95 = 12547U;
	volatile int64_t x96 = -586828443LL;
	static int64_t t19 = 10617252170889151LL;

	t19 = (x93-(x94%(x95&x96)));

	if (t19 != -6LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x97 = -447494600260657210LL;
	static int64_t x98 = INT64_MIN;
	int8_t x99 = -1;
	int32_t x100 = -580819;

	t20 = (x97-(x98%(x99&x100)));

	if (t20 != -447494600260604721LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x102 = -1;
	int8_t x103 = -1;
	volatile int64_t t21 = 587637690829020470LL;

	t21 = (x101-(x102%(x103&x104)));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x109 = 24963415LL;
	int16_t x110 = INT16_MIN;
	uint16_t x111 = 25U;
	int8_t x112 = -1;

	t22 = (x109-(x110%(x111&x112)));

	if (t22 != 24963433LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = UINT64_MAX;
	int32_t x114 = -171;
	int64_t x115 = -129457192LL;
	int16_t x116 = INT16_MAX;
	volatile uint64_t t23 = 518081465729678553LLU;

	t23 = (x113-(x114%(x115&x116)));

	if (t23 != 170LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x125 = 104U;
	int8_t x127 = -1;
	int8_t x128 = 5;

	t24 = (x125-(x126%(x127&x128)));

	if (t24 != 107) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int32_t x138 = -1;
	int64_t x139 = -4404364055480LL;
	static volatile uint64_t t25 = 2039751LLU;

	t25 = (x137-(x138%(x139&x140)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x142 = INT16_MIN;
	uint16_t x143 = UINT16_MAX;
	uint64_t t26 = 18358547297LLU;

	t26 = (x141-(x142%(x143&x144)));

	if (t26 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = -1;
	uint16_t x146 = UINT16_MAX;
	int32_t x148 = 12;
	int32_t t27 = -1575;

	t27 = (x145-(x146%(x147&x148)));

	if (t27 != -4) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = 0U;
	uint64_t x150 = 8LLU;
	uint16_t x152 = UINT16_MAX;
	static uint64_t t28 = 3LLU;

	t28 = (x149-(x150%(x151&x152)));

	if (t28 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = INT64_MIN;
	volatile int32_t x154 = INT32_MIN;
	uint8_t x155 = UINT8_MAX;
	int64_t x156 = -1LL;

	t29 = (x153-(x154%(x155&x156)));

	if (t29 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x157 = UINT64_MAX;
	volatile int32_t x159 = INT32_MAX;
	int32_t x160 = -1;

	t30 = (x157-(x158%(x159&x160)));

	if (t30 != 782782LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x161 = INT32_MIN;
	int16_t x162 = -152;
	static int32_t x163 = -1;
	int64_t x164 = -1LL;
	int64_t t31 = -78721300223951LL;

	t31 = (x161-(x162%(x163&x164)));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x166 = -1;
	int8_t x168 = INT8_MIN;
	static int32_t t32 = 68728;

	t32 = (x165-(x166%(x167&x168)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x169 = 30U;
	int8_t x171 = INT8_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile int64_t t33 = -8739053172647LL;

	t33 = (x169-(x170%(x171&x172)));

	if (t33 != 8222LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = INT8_MIN;
	volatile int8_t x174 = INT8_MIN;
	volatile uint32_t t34 = 633U;

	t34 = (x173-(x174%(x175&x176)));

	if (t34 != 3697299014U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x177 = INT64_MIN;
	int16_t x178 = -9;
	int16_t x179 = INT16_MIN;
	int64_t t35 = 15925253LL;

	t35 = (x177-(x178%(x179&x180)));

	if (t35 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x185 = 0;
	int16_t x186 = 211;
	volatile int32_t x187 = -1;
	int64_t x188 = 4095490763726080867LL;

	t36 = (x185-(x186%(x187&x188)));

	if (t36 != -211LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	volatile int8_t x192 = -1;
	volatile int32_t t37 = -2994943;

	t37 = (x189-(x190%(x191&x192)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x193 = -18;
	int32_t x195 = 7015;
	int8_t x196 = INT8_MAX;
	volatile int32_t t38 = -227;

	t38 = (x193-(x194%(x195&x196)));

	if (t38 != -45) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x197 = -88;
	static uint64_t x198 = 8066896544441004LLU;
	static int8_t x199 = INT8_MIN;
	uint64_t t39 = 1LLU;

	t39 = (x197-(x198%(x199&x200)));

	if (t39 != 18438677177165110524LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x201 = -15822;
	uint16_t x202 = 10385U;
	uint16_t x203 = 170U;
	volatile int32_t t40 = 76469;

	t40 = (x201-(x202%(x203&x204)));

	if (t40 != -15837) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x205 = 12665;
	int32_t x206 = INT32_MIN;
	int8_t x207 = 1;
	uint32_t x208 = UINT32_MAX;
	uint32_t t41 = 21838920U;

	t41 = (x205-(x206%(x207&x208)));

	if (t41 != 12665U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x209 = UINT16_MAX;
	int32_t x211 = INT32_MIN;
	static int32_t x212 = INT32_MIN;

	t42 = (x209-(x210%(x211&x212)));

	if (t42 != 18446701953372498832LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = -1;
	int16_t x214 = INT16_MIN;
	uint16_t x215 = UINT16_MAX;

	t43 = (x213-(x214%(x215&x216)));

	if (t43 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x218 = 6;
	uint32_t x219 = 18181U;
	uint64_t x220 = 198031272989LLU;
	uint64_t t44 = 5602241LLU;

	t44 = (x217-(x218%(x219&x220)));

	if (t44 != 182657156LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x221 = INT16_MIN;
	uint16_t x222 = 3515U;
	int16_t x223 = 501;
	volatile int8_t x224 = INT8_MIN;

	t45 = (x221-(x222%(x223&x224)));

	if (t45 != -32827) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x226 = -1;
	int64_t x227 = 64457689669LL;
	int8_t x228 = INT8_MAX;
	int64_t t46 = -14263019107899LL;

	t46 = (x225-(x226%(x227&x228)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x229 = UINT8_MAX;
	static int8_t x230 = -1;
	uint16_t x231 = 1U;
	uint8_t x232 = UINT8_MAX;
	int32_t t47 = -2613;

	t47 = (x229-(x230%(x231&x232)));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = INT32_MAX;
	uint8_t x234 = UINT8_MAX;
	int64_t x235 = -1LL;
	volatile uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t48 = 9439798115965LLU;

	t48 = (x233-(x234%(x235&x236)));

	if (t48 != 2147483392LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MAX;
	static uint64_t x239 = 1190337784713229LLU;
	uint64_t x240 = 119LLU;
	uint64_t t49 = 3945774120614366LLU;

	t49 = (x237-(x238%(x239&x240)));

	if (t49 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	uint64_t x244 = UINT64_MAX;
	static volatile uint64_t t50 = 67663160266874LLU;

	t50 = (x241-(x242%(x243&x244)));

	if (t50 != 2147483775LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = 55;
	int32_t x246 = -1;
	int64_t x247 = -32936LL;
	volatile int64_t t51 = -1092735757LL;

	t51 = (x245-(x246%(x247&x248)));

	if (t51 != 56LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x250 = -1LL;
	uint32_t x251 = 213U;
	volatile uint16_t x252 = 207U;
	volatile int64_t t52 = -1673256687935620LL;

	t52 = (x249-(x250%(x251&x252)));

	if (t52 != 57LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int8_t x254 = INT8_MIN;
	int16_t x256 = 509;

	t53 = (x253-(x254%(x255&x256)));

	if (t53 != 7LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x261 = -1;
	static int32_t x262 = 60956446;
	volatile int8_t x264 = -1;
	int32_t t54 = -2;

	t54 = (x261-(x262%(x263&x264)));

	if (t54 != -9827) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x265 = 0U;
	static int16_t x267 = -1;
	uint32_t t55 = UINT32_MAX;

	t55 = (x265-(x266%(x267&x268)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x269 = INT32_MAX;
	volatile int32_t x270 = -1;
	volatile uint32_t t56 = 386765U;

	t56 = (x269-(x270%(x271&x272)));

	if (t56 != 2147273740U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x281 = 34U;
	int8_t x284 = -1;

	t57 = (x281-(x282%(x283&x284)));

	if (t57 != -682037LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x285 = -19152;
	volatile int32_t x286 = 58952;
	static int32_t x287 = 51229;
	static int16_t x288 = -21;
	int32_t t58 = -14144163;

	t58 = (x285-(x286%(x287&x288)));

	if (t58 != -26895) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x289 = INT16_MAX;
	static int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MIN;
	volatile int32_t x292 = INT32_MAX;

	t59 = (x289-(x290%(x291&x292)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = 42;
	int64_t x298 = -9LL;
	static int16_t x299 = 28;

	t60 = (x297-(x298%(x299&x300)));

	if (t60 != 51LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x305 = 3642110LLU;
	static int64_t x306 = 483303569770LL;
	static uint32_t x307 = UINT32_MAX;
	int8_t x308 = INT8_MAX;
	volatile uint64_t t61 = 4858720LLU;

	t61 = (x305-(x306%(x307&x308)));

	if (t61 != 3642053LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x310 = UINT16_MAX;
	int8_t x311 = -3;
	uint16_t x312 = 9U;
	volatile int32_t t62 = 2234788;

	t62 = (x309-(x310%(x311&x312)));

	if (t62 != -32774) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x313 = 123U;
	static uint32_t x314 = 3783U;
	volatile int16_t x315 = -1;
	uint32_t t63 = 56U;

	t63 = (x313-(x314%(x315&x316)));

	if (t63 != 4294967206U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x317 = -3;
	int32_t x318 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t64 = 3LLU;

	t64 = (x317-(x318%(x319&x320)));

	if (t64 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x321 = -13;
	volatile int16_t x322 = INT16_MAX;
	static uint64_t x323 = 65940584018877LLU;
	uint32_t x324 = UINT32_MAX;
	volatile uint64_t t65 = 922LLU;

	t65 = (x321-(x322%(x323&x324)));

	if (t65 != 18446744073709518836LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x333 = 32148U;
	volatile int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MAX;
	volatile int64_t t66 = 117LL;

	t66 = (x333-(x334%(x335&x336)));

	if (t66 != 32276LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x341 = -1;
	uint16_t x342 = 0U;
	uint8_t x343 = 40U;
	static int16_t x344 = INT16_MAX;
	static volatile int32_t t67 = 260896;

	t67 = (x341-(x342%(x343&x344)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x345 = -1;
	int16_t x347 = -1;
	uint8_t x348 = UINT8_MAX;
	int32_t t68 = 0;

	t68 = (x345-(x346%(x347&x348)));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x353 = 0U;
	uint8_t x354 = 2U;
	int8_t x355 = -53;
	static int8_t x356 = INT8_MAX;
	int32_t t69 = 1148866;

	t69 = (x353-(x354%(x355&x356)));

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x357 = -1;
	volatile int64_t x358 = 11555682LL;
	static volatile int32_t x359 = INT32_MIN;
	volatile int64_t t70 = 25411936LL;

	t70 = (x357-(x358%(x359&x360)));

	if (t70 != -11555683LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x361 = UINT16_MAX;
	volatile uint64_t x363 = 841866231051639924LLU;
	uint64_t t71 = 17447101134LLU;

	t71 = (x361-(x362%(x363&x364)));

	if (t71 != 65535LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x377 = INT16_MAX;
	uint16_t x379 = 3U;
	int8_t x380 = INT8_MAX;
	static volatile int32_t t72 = -9550;

	t72 = (x377-(x378%(x379&x380)));

	if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x381 = INT32_MAX;
	uint8_t x382 = 0U;
	volatile int8_t x383 = -1;
	int16_t x384 = INT16_MIN;
	static volatile int32_t t73 = INT32_MAX;

	t73 = (x381-(x382%(x383&x384)));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x385 = -1LL;
	int32_t x386 = -1;
	int64_t x387 = -1LL;
	int64_t x388 = -1LL;
	int64_t t74 = 513539316912LL;

	t74 = (x385-(x386%(x387&x388)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x389 = 3;
	int16_t x390 = -1;
	volatile int32_t x391 = -1;
	int16_t x392 = INT16_MAX;
	int32_t t75 = 75024;

	t75 = (x389-(x390%(x391&x392)));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x396 = 6892LL;
	volatile uint64_t t76 = 50921740170LLU;

	t76 = (x393-(x394%(x395&x396)));

	if (t76 != 65472LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x398 = 1U;
	static volatile uint64_t t77 = 59006993818899LLU;

	t77 = (x397-(x398%(x399&x400)));

	if (t77 != 124LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x402 = -753;
	static int32_t x403 = -1;
	volatile int64_t t78 = -1921087336444LL;

	t78 = (x401-(x402%(x403&x404)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x406 = 111214476983LLU;
	int32_t x407 = INT32_MAX;
	int32_t x408 = 4510;

	t79 = (x405-(x406%(x407&x408)));

	if (t79 != 87166LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x410 = INT8_MIN;
	int32_t x411 = -28658802;
	int8_t x412 = INT8_MAX;
	volatile uint64_t t80 = 57707LLU;

	t80 = (x409-(x410%(x411&x412)));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x413 = 0U;
	volatile int64_t x414 = INT64_MAX;
	volatile int8_t x415 = 1;
	uint64_t x416 = 843617546356399LLU;

	t81 = (x413-(x414%(x415&x416)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x418 = INT64_MAX;
	int32_t x419 = INT32_MIN;
	int64_t x420 = -1447LL;

	t82 = (x417-(x418%(x419&x420)));

	if (t82 != -2147483665LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x421 = -1LL;
	static int8_t x422 = -1;
	static uint8_t x423 = UINT8_MAX;
	uint64_t x424 = 7142049241099LLU;
	volatile uint64_t t83 = 4507199343168LLU;

	t83 = (x421-(x422%(x423&x424)));

	if (t83 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x429 = INT16_MAX;
	volatile int64_t x431 = 7430LL;
	static int8_t x432 = INT8_MIN;
	volatile int64_t t84 = -316LL;

	t84 = (x429-(x430%(x431&x432)));

	if (t84 != 35327LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x434 = UINT32_MAX;
	static volatile int8_t x435 = INT8_MIN;
	static volatile int64_t x436 = 131871475605LL;
	static volatile int64_t t85 = 9668LL;

	t85 = (x433-(x434%(x435&x436)));

	if (t85 != -4295000063LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x437 = -302803;
	static int16_t x438 = INT16_MAX;
	int8_t x439 = INT8_MAX;
	uint8_t x440 = 110U;
	volatile int32_t t86 = -1;

	t86 = (x437-(x438%(x439&x440)));

	if (t86 != -302900) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x449 = -1651LL;
	int32_t x450 = -756142;
	volatile uint8_t x452 = 7U;
	int64_t t87 = 3702LL;

	t87 = (x449-(x450%(x451&x452)));

	if (t87 != -1649LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x453 = 33;
	int16_t x454 = INT16_MIN;
	int32_t x455 = 272603;
	int16_t x456 = -1;
	int32_t t88 = 0;

	t88 = (x453-(x454%(x455&x456)));

	if (t88 != 32801) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x457 = INT32_MAX;
	static uint8_t x458 = UINT8_MAX;
	static uint64_t x459 = UINT64_MAX;
	volatile uint64_t t89 = 9497343LLU;

	t89 = (x457-(x458%(x459&x460)));

	if (t89 != 2147483644LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x465 = 5331152U;
	int32_t x466 = INT32_MAX;
	int8_t x467 = 4;
	static volatile uint32_t x468 = UINT32_MAX;
	volatile uint32_t t90 = 7U;

	t90 = (x465-(x466%(x467&x468)));

	if (t90 != 5331149U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x469 = -1LL;
	volatile int8_t x470 = 19;
	int64_t x471 = -22674676LL;
	int64_t t91 = -1576LL;

	t91 = (x469-(x470%(x471&x472)));

	if (t91 != -20LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x473 = INT16_MAX;
	volatile int64_t x474 = -1LL;
	int16_t x476 = INT16_MIN;
	volatile int64_t t92 = -12LL;

	t92 = (x473-(x474%(x475&x476)));

	if (t92 != 32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x477 = INT8_MIN;
	static int64_t x478 = INT64_MAX;
	int32_t x479 = INT32_MIN;
	static int64_t x480 = -1089466102634823921LL;
	volatile int64_t t93 = 34393958503153911LL;

	t93 = (x477-(x478%(x479&x480)));

	if (t93 != -507643212874121343LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x481 = 44;
	static int8_t x482 = 16;
	int64_t x483 = 173664794357LL;
	static int64_t t94 = 236LL;

	t94 = (x481-(x482%(x483&x484)));

	if (t94 != 28LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x485 = UINT8_MAX;
	volatile uint64_t x486 = 6LLU;
	uint32_t x487 = 11933508U;
	uint64_t x488 = 359237LLU;
	uint64_t t95 = 334171210186LLU;

	t95 = (x485-(x486%(x487&x488)));

	if (t95 != 249LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x489 = -1;
	uint64_t x490 = UINT64_MAX;
	uint64_t x491 = UINT64_MAX;
	static int32_t x492 = -1;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x489-(x490%(x491&x492)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x501 = INT32_MIN;
	int8_t x502 = INT8_MIN;
	int32_t x503 = INT32_MIN;

	t97 = (x501-(x502%(x503&x504)));

	if (t97 != -2147483520LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x513 = 3986432752966LLU;
	uint8_t x514 = 0U;
	static int16_t x515 = INT16_MIN;
	static volatile int64_t x516 = -1LL;
	uint64_t t98 = 796LLU;

	t98 = (x513-(x514%(x515&x516)));

	if (t98 != 3986432752966LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x529 = 231U;
	int16_t x530 = INT16_MAX;
	volatile int8_t x531 = INT8_MIN;
	int16_t x532 = INT16_MAX;

	t99 = (x529-(x530%(x531&x532)));

	if (t99 != 104U) { NG(); } else { ; }
	
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

