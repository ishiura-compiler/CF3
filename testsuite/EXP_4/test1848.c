#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 99747702U;
int64_t t1 = 3623429LL;
int8_t x19 = INT8_MIN;
volatile int32_t t4 = -12863293;
int32_t x21 = INT32_MIN;
int64_t x23 = -1LL;
int16_t x29 = INT16_MIN;
int16_t x44 = -14237;
static volatile int32_t t11 = -1;
uint64_t x54 = 907069467LLU;
uint32_t x59 = 1U;
uint64_t t13 = 183348035LLU;
int8_t x68 = INT8_MIN;
int32_t x72 = INT32_MAX;
volatile int64_t t15 = 295278547806LL;
volatile uint64_t t16 = 15849542054445LLU;
static int64_t x85 = -1LL;
volatile uint8_t x89 = UINT8_MAX;
volatile int32_t t19 = 2660;
volatile uint64_t x94 = 39096798907LLU;
volatile uint8_t x96 = 12U;
volatile uint64_t t20 = 1LLU;
volatile int64_t t21 = -44272137LL;
volatile uint8_t x101 = UINT8_MAX;
int64_t x105 = -1LL;
int32_t x108 = INT32_MAX;
volatile uint64_t t24 = 6671850565LLU;
int16_t x126 = 335;
volatile int64_t t28 = 280880411LL;
uint64_t x149 = 3448431174LLU;
static int64_t x152 = INT64_MAX;
uint64_t x154 = UINT64_MAX;
int32_t x160 = -400;
volatile int16_t x161 = -1;
int64_t x165 = -1LL;
uint64_t t37 = 121618089238838LLU;
int32_t x185 = 766215924;
static int8_t x189 = -1;
static int8_t x190 = INT8_MAX;
volatile uint64_t t40 = 183354LLU;
uint16_t x195 = UINT16_MAX;
int16_t x197 = 1;
int16_t x198 = INT16_MIN;
int8_t x210 = INT8_MAX;
int64_t x215 = 6623783349619LL;
static uint64_t x220 = UINT64_MAX;
int32_t t48 = -129056300;
static uint8_t x230 = 3U;
uint64_t x232 = UINT64_MAX;
volatile int64_t x237 = INT64_MIN;
int64_t x252 = -53081318079391044LL;
uint64_t x255 = UINT64_MAX;
volatile uint32_t t55 = 12410U;
volatile int16_t x263 = INT16_MAX;
static int64_t x265 = INT64_MIN;
int32_t x268 = INT32_MIN;
volatile int8_t x269 = 1;
int8_t x272 = INT8_MIN;
int64_t t59 = 7844473638LL;
int64_t x277 = -8191421602531453LL;
static volatile int64_t x280 = INT64_MIN;
int64_t x283 = INT64_MAX;
int32_t x289 = INT32_MIN;
volatile int32_t x291 = -1;
uint16_t x292 = UINT16_MAX;
uint64_t t63 = 20217496541095939LLU;
int32_t x299 = 4;
static uint32_t x305 = 3U;
volatile int16_t x311 = INT16_MIN;
volatile uint32_t t68 = 343U;
volatile int8_t x318 = INT8_MIN;
uint16_t x322 = 4U;
int8_t x327 = -1;
volatile int64_t x332 = -1LL;
volatile int64_t t72 = 25975471242492LL;
volatile int8_t x336 = INT8_MIN;
volatile int32_t t76 = -489897;
int16_t x349 = INT16_MAX;
volatile int16_t x356 = 1;
int32_t x357 = 134;
int32_t x360 = INT32_MIN;
uint8_t x368 = 3U;
volatile uint64_t x369 = 3403811894805164LLU;
int64_t x370 = INT64_MIN;
static int8_t x371 = INT8_MAX;
uint64_t t82 = 3108333LLU;
int8_t x381 = INT8_MIN;
static int32_t x392 = INT32_MIN;
int64_t x398 = INT64_MAX;
int8_t x406 = INT8_MIN;
int32_t x407 = INT32_MAX;
uint32_t x413 = 390U;
int32_t x423 = INT32_MIN;
static uint8_t x424 = UINT8_MAX;
int8_t x426 = 1;
int32_t t95 = -81495;
static int16_t x441 = INT16_MIN;
uint8_t x448 = 10U;
volatile int64_t t99 = 12069353947995216LL;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile int8_t x2 = 1;
	static uint32_t x3 = 30100U;
	int16_t x4 = -13422;

	t0 = (x1-(x2^(x3&x4)));

	if (t0 != 2147466863U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 14U;
	uint16_t x6 = UINT16_MAX;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MAX;

	t1 = (x5-(x6^(x7&x8)));

	if (t1 != -9223372034707357681LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 3774723510312918011LLU;
	uint32_t x10 = 269U;
	int64_t x11 = -10500733779313LL;
	int8_t x12 = -1;
	uint64_t t2 = 729596485LLU;

	t2 = (x9-(x10^(x11&x12)));

	if (t2 != 3774734011046697081LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = -1;
	static int64_t x15 = INT64_MIN;
	int16_t x16 = INT16_MAX;
	int64_t t3 = 156781148144793471LL;

	t3 = (x13-(x14^(x15&x16)));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	uint16_t x18 = UINT16_MAX;
	volatile uint8_t x20 = 117U;

	t4 = (x17-(x18^(x19&x20)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	volatile int16_t x24 = INT16_MIN;
	static volatile int64_t t5 = -12604281319LL;

	t5 = (x21-(x22^(x23&x24)));

	if (t5 != -4294934528LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 30U;
	int16_t x26 = -1;
	volatile int16_t x27 = -1;
	uint64_t x28 = 7609998LLU;
	volatile uint64_t t6 = 2645LLU;

	t6 = (x25-(x26^(x27&x28)));

	if (t6 != 7610029LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = INT64_MAX;
	int16_t x31 = -1;
	int64_t x32 = INT64_MIN;
	int64_t t7 = -12603713435421818LL;

	t7 = (x29-(x30^(x31&x32)));

	if (t7 != -32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = UINT32_MAX;
	int8_t x38 = -1;
	uint8_t x39 = 0U;
	static volatile int16_t x40 = -9199;
	volatile uint32_t t8 = 7U;

	t8 = (x37-(x38^(x39&x40)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x41 = 3U;
	volatile uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MAX;
	static int32_t t9 = 108357578;

	t9 = (x41-(x42^(x43&x44)));

	if (t9 != -18585) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = -47;
	uint32_t x47 = 15802U;
	int32_t x48 = INT32_MIN;
	uint32_t t10 = 3814448U;

	t10 = (x45-(x46^(x47&x48)));

	if (t10 != 4294934575U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	int8_t x50 = INT8_MIN;
	int16_t x51 = -67;
	int16_t x52 = -1;

	t11 = (x49-(x50^(x51&x52)));

	if (t11 != -62) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = -1;
	uint32_t x55 = 10U;
	volatile int8_t x56 = -1;
	volatile uint64_t t12 = 5974383179723959LLU;

	t12 = (x53-(x54^(x55&x56)));

	if (t12 != 18446744072802482158LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x57 = 512283023721914LLU;
	int32_t x58 = -1;
	uint8_t x60 = UINT8_MAX;

	t13 = (x57-(x58^(x59&x60)));

	if (t13 != 512278728754620LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 0U;
	volatile uint64_t x66 = UINT64_MAX;
	static int64_t x67 = INT64_MIN;
	volatile uint64_t t14 = 46390567245350253LLU;

	t14 = (x65-(x66^(x67&x68)));

	if (t14 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 1385U;
	uint32_t x70 = 55474U;
	volatile int64_t x71 = 3231961LL;

	t15 = (x69-(x70^(x71&x72)));

	if (t15 != -3244802LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MAX;
	uint64_t x78 = UINT64_MAX;
	int64_t x79 = INT64_MIN;
	int8_t x80 = -1;

	t16 = (x77-(x78^(x79&x80)));

	if (t16 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x81 = 1964866U;
	static uint32_t x82 = 2U;
	int64_t x83 = -503132586432668LL;
	volatile int8_t x84 = -1;
	static int64_t t17 = -1359584133424494LL;

	t17 = (x81-(x82^(x83&x84)));

	if (t17 != 503132588397532LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x86 = INT32_MAX;
	int64_t x87 = 7057366367856091LL;
	int32_t x88 = -11;
	static int64_t t18 = 17455111475528LL;

	t18 = (x85-(x86^(x87&x88)));

	if (t18 != -7057367193098799LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x90 = -1;
	int16_t x91 = INT16_MIN;
	uint16_t x92 = UINT16_MAX;

	t19 = (x89-(x90^(x91&x92)));

	if (t19 != 33024) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = INT64_MIN;
	volatile int32_t x95 = INT32_MAX;

	t20 = (x93-(x94^(x95&x96)));

	if (t20 != 9223371997757976905LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	volatile int64_t x98 = INT64_MAX;
	static int8_t x99 = INT8_MIN;
	int8_t x100 = -1;

	t21 = (x97-(x98^(x99&x100)));

	if (t21 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x102 = INT64_MIN;
	volatile int8_t x103 = -1;
	volatile int64_t x104 = -1LL;
	volatile int64_t t22 = -2LL;

	t22 = (x101-(x102^(x103&x104)));

	if (t22 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x106 = UINT8_MAX;
	int64_t x107 = INT64_MIN;
	int64_t t23 = -1226451LL;

	t23 = (x105-(x106^(x107&x108)));

	if (t23 != -256LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MAX;
	uint8_t x118 = 6U;
	uint64_t x119 = UINT64_MAX;
	uint8_t x120 = 4U;

	t24 = (x117-(x118^(x119&x120)));

	if (t24 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = 2122329615LL;
	int64_t x122 = INT64_MAX;
	uint64_t x123 = 1LLU;
	int32_t x124 = -664062494;
	uint64_t t25 = 45060908070980441LLU;

	t25 = (x121-(x122^(x123&x124)));

	if (t25 != 9223372038977105424LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x125 = INT64_MAX;
	volatile int32_t x127 = INT32_MIN;
	int64_t x128 = 5579053787600254LL;
	volatile int64_t t26 = 132796206963694677LL;

	t26 = (x125-(x126^(x127&x128)));

	if (t26 != 9217792983858937520LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = 1;
	int16_t x131 = -1;
	static int16_t x132 = -1;
	int32_t t27 = -1;

	t27 = (x129-(x130^(x131&x132)));

	if (t27 != -126) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x137 = 237;
	volatile int8_t x138 = INT8_MIN;
	int64_t x139 = 108514292324170LL;
	int16_t x140 = INT16_MAX;

	t28 = (x137-(x138^(x139&x140)));

	if (t28 != 22563LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x145 = -19156;
	int16_t x146 = -1;
	uint8_t x147 = 36U;
	volatile int16_t x148 = -1;
	int32_t t29 = 1811218;

	t29 = (x145-(x146^(x147&x148)));

	if (t29 != -19119) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x150 = -3;
	static int64_t x151 = INT64_MIN;
	volatile uint64_t t30 = 17259423LLU;

	t30 = (x149-(x150^(x151&x152)));

	if (t30 != 3448431177LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = -1;
	uint16_t x155 = UINT16_MAX;
	uint16_t x156 = 4U;
	volatile uint64_t t31 = 7LLU;

	t31 = (x153-(x154^(x155&x156)));

	if (t31 != 4LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x157 = 1919957LLU;
	volatile int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	volatile uint64_t t32 = 66465923423LLU;

	t32 = (x157-(x158^(x159&x160)));

	if (t32 != 1919573LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x162 = -1;
	static uint8_t x163 = 0U;
	int8_t x164 = INT8_MIN;
	volatile int32_t t33 = -14621385;

	t33 = (x161-(x162^(x163&x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x166 = -1;
	int16_t x167 = INT16_MIN;
	int32_t x168 = -1;
	int64_t t34 = -136408825480LL;

	t34 = (x165-(x166^(x167&x168)));

	if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x169 = INT32_MAX;
	uint8_t x170 = 0U;
	int32_t x171 = 160439440;
	int16_t x172 = -477;
	int32_t t35 = -7;

	t35 = (x169-(x170^(x171&x172)));

	if (t35 != 1987044351) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x173 = INT8_MIN;
	uint64_t x174 = UINT64_MAX;
	int64_t x175 = -2612305LL;
	static int32_t x176 = -92;
	uint64_t t36 = 4519793440977153974LLU;

	t36 = (x173-(x174^(x175&x176)));

	if (t36 != 18446744073706939173LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MAX;
	int64_t x178 = -12LL;
	int64_t x179 = -158636012LL;
	volatile uint64_t x180 = UINT64_MAX;

	t37 = (x177-(x178^(x179&x180)));

	if (t37 != 18446744073550915743LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = UINT64_MAX;
	int32_t x182 = 63;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = INT64_MIN;
	static volatile uint64_t t38 = 360385903917981LLU;

	t38 = (x181-(x182^(x183&x184)));

	if (t38 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x186 = INT8_MAX;
	volatile int16_t x187 = INT16_MAX;
	uint16_t x188 = 61U;
	static int32_t t39 = -32258426;

	t39 = (x185-(x186^(x187&x188)));

	if (t39 != 766215858) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x191 = 258627583301968LLU;
	int32_t x192 = -1108954;

	t40 = (x189-(x190^(x191&x192)));

	if (t40 != 18446485446127316864LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x193 = 0;
	int64_t x194 = INT64_MIN;
	int8_t x196 = -11;
	int64_t t41 = 148LL;

	t41 = (x193-(x194^(x195&x196)));

	if (t41 != 9223372036854710283LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MIN;
	int32_t t42 = 681932;

	t42 = (x197-(x198^(x199&x200)));

	if (t42 != -2147450879) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = -1;
	volatile uint32_t x202 = 109532219U;
	volatile uint8_t x203 = 28U;
	uint64_t x204 = UINT64_MAX;
	uint64_t t43 = 29771116386328088LLU;

	t43 = (x201-(x202^(x203&x204)));

	if (t43 != 18446744073600019416LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = -1LL;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MAX;
	volatile int64_t t44 = -535275360038066LL;

	t44 = (x205-(x206^(x207&x208)));

	if (t44 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x209 = INT16_MAX;
	int32_t x211 = INT32_MIN;
	int64_t x212 = 624988056LL;
	int64_t t45 = 4904843842802000LL;

	t45 = (x209-(x210^(x211&x212)));

	if (t45 != 32640LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = -1;
	volatile int8_t x214 = INT8_MAX;
	static int8_t x216 = -31;
	int64_t t46 = 161232471373639088LL;

	t46 = (x213-(x214^(x215&x216)));

	if (t46 != -6623783349535LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = 8075855;
	static int64_t x218 = INT64_MAX;
	volatile int32_t x219 = INT32_MIN;
	volatile uint64_t t47 = 6542LLU;

	t47 = (x217-(x218^(x219&x220)));

	if (t47 != 9223372034715368016LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MIN;
	static volatile uint8_t x222 = 23U;
	uint16_t x223 = 0U;
	int16_t x224 = INT16_MIN;

	t48 = (x221-(x222^(x223&x224)));

	if (t48 != -151) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = -28;
	int8_t x227 = 61;
	uint8_t x228 = UINT8_MAX;
	static volatile int32_t t49 = -121;

	t49 = (x225-(x226^(x227&x228)));

	if (t49 != -32729) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = 0;
	volatile uint16_t x231 = 2616U;
	volatile uint64_t t50 = 3LLU;

	t50 = (x229-(x230^(x231&x232)));

	if (t50 != 18446744073709548997LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x238 = -1LL;
	volatile int16_t x239 = INT16_MIN;
	uint64_t x240 = 1293LLU;
	uint64_t t51 = 4392813732LLU;

	t51 = (x237-(x238^(x239&x240)));

	if (t51 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = INT8_MIN;
	uint8_t x246 = 21U;
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = 6910;
	volatile uint32_t t52 = 457296133U;

	t52 = (x245-(x246^(x247&x248)));

	if (t52 != 4294960277U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x249 = -1;
	uint32_t x250 = 1873496808U;
	volatile uint32_t x251 = 1597U;
	static volatile int64_t t53 = 197071197LL;

	t53 = (x249-(x250^(x251&x252)));

	if (t53 != -1873496277LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x253 = INT32_MIN;
	static uint64_t x254 = 8611313128858LLU;
	uint8_t x256 = 20U;
	volatile uint64_t t54 = 66231984LLU;

	t54 = (x253-(x254^(x255&x256)));

	if (t54 != 18446735460248939122LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = 111;
	uint16_t x258 = 213U;
	uint16_t x259 = UINT16_MAX;
	uint32_t x260 = UINT32_MAX;

	t55 = (x257-(x258^(x259&x260)));

	if (t55 != 4294902085U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x261 = INT32_MIN;
	volatile int32_t x262 = INT32_MIN;
	int32_t x264 = -1;
	int32_t t56 = 161101715;

	t56 = (x261-(x262^(x263&x264)));

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x266 = 34103697403LLU;
	uint8_t x267 = UINT8_MAX;
	volatile uint64_t t57 = 54210785752549LLU;

	t57 = (x265-(x266^(x267&x268)));

	if (t57 != 9223372002751078405LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x270 = INT16_MIN;
	int64_t x271 = -1LL;
	volatile int64_t t58 = -464205540538383127LL;

	t58 = (x269-(x270^(x271&x272)));

	if (t58 != -32639LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = 3876149;
	int32_t x274 = -1;
	int64_t x275 = INT64_MIN;
	static int32_t x276 = -2803;

	t59 = (x273-(x274^(x275&x276)));

	if (t59 != -9223372036850899658LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x278 = -1LL;
	static volatile uint8_t x279 = 3U;
	volatile int64_t t60 = -40439459LL;

	t60 = (x277-(x278^(x279&x280)));

	if (t60 != -8191421602531452LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = -79;
	int32_t x282 = 88208435;
	int32_t x284 = INT32_MAX;
	int64_t t61 = 133235716LL;

	t61 = (x281-(x282^(x283&x284)));

	if (t61 != -2059275291LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x285 = 0U;
	uint64_t x286 = UINT64_MAX;
	static int16_t x287 = INT16_MAX;
	int8_t x288 = -2;
	volatile uint64_t t62 = 36LLU;

	t62 = (x285-(x286^(x287&x288)));

	if (t62 != 32767LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x290 = 19359041366334989LLU;

	t63 = (x289-(x290^(x291&x292)));

	if (t63 != 18427385030195682830LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = INT8_MIN;
	static volatile int64_t x294 = INT64_MIN;
	static int64_t x295 = INT64_MIN;
	int64_t x296 = -1LL;
	int64_t t64 = 17215LL;

	t64 = (x293-(x294^(x295&x296)));

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = -1;
	volatile uint16_t x298 = UINT16_MAX;
	int64_t x300 = -1LL;
	static volatile int64_t t65 = -717983LL;

	t65 = (x297-(x298^(x299&x300)));

	if (t65 != -65532LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = INT64_MIN;
	int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MAX;
	uint16_t x304 = 6U;
	int64_t t66 = 0LL;

	t66 = (x301-(x302^(x303&x304)));

	if (t66 != -9223372034707292166LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x306 = INT32_MIN;
	uint16_t x307 = UINT16_MAX;
	uint32_t x308 = UINT32_MAX;
	volatile uint32_t t67 = 1704603228U;

	t67 = (x305-(x306^(x307&x308)));

	if (t67 != 2147418116U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x309 = 14U;
	uint16_t x310 = UINT16_MAX;
	uint32_t x312 = 229955U;

	t68 = (x309-(x310^(x311&x312)));

	if (t68 != 4294737935U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x317 = 7;
	int64_t x319 = INT64_MIN;
	int32_t x320 = -580776019;
	static int64_t t69 = 254LL;

	t69 = (x317-(x318^(x319&x320)));

	if (t69 != -9223372036854775673LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x321 = 13U;
	volatile uint16_t x323 = UINT16_MAX;
	int32_t x324 = -1;
	static int32_t t70 = 32;

	t70 = (x321-(x322^(x323&x324)));

	if (t70 != -65518) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x325 = 177U;
	int64_t x326 = INT64_MIN;
	int32_t x328 = INT32_MIN;
	int64_t t71 = -1LL;

	t71 = (x325-(x326^(x327&x328)));

	if (t71 != -9223372034707291983LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x329 = INT32_MIN;
	uint32_t x330 = 31U;
	uint16_t x331 = 2U;

	t72 = (x329-(x330^(x331&x332)));

	if (t72 != -2147483677LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MIN;
	int64_t t73 = 1524305783910135625LL;

	t73 = (x333-(x334^(x335&x336)));

	if (t73 != 9223372034707292033LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x337 = 7736U;
	int64_t x338 = -149492704LL;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MAX;
	volatile int64_t t74 = 280649726289413LL;

	t74 = (x337-(x338^(x339&x340)));

	if (t74 != 1997976088LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x341 = 3U;
	uint16_t x342 = 31314U;
	int16_t x343 = INT16_MIN;
	volatile uint32_t x344 = 223648U;
	volatile uint32_t t75 = 239655U;

	t75 = (x341-(x342^(x343&x344)));

	if (t75 != 4294739377U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x345 = UINT16_MAX;
	static int8_t x346 = INT8_MIN;
	static int16_t x347 = 8;
	uint8_t x348 = 3U;

	t76 = (x345-(x346^(x347&x348)));

	if (t76 != 65663) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x350 = 192U;
	int32_t x351 = -609;
	volatile int32_t x352 = -28760216;
	int32_t t77 = 3500312;

	t77 = (x349-(x350^(x351&x352)));

	if (t77 != 28793399) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x353 = UINT16_MAX;
	volatile uint8_t x354 = UINT8_MAX;
	int32_t x355 = INT32_MAX;
	int32_t t78 = -10;

	t78 = (x353-(x354^(x355&x356)));

	if (t78 != 65281) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x358 = 7;
	int32_t x359 = INT32_MAX;
	int32_t t79 = -103994;

	t79 = (x357-(x358^(x359&x360)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = 1038688;
	static int8_t x362 = -33;
	static uint64_t x363 = UINT64_MAX;
	static int32_t x364 = 246318;
	static uint64_t t80 = 7LLU;

	t80 = (x361-(x362^(x363&x364)));

	if (t80 != 1284975LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = 2;
	volatile int64_t x366 = -1LL;
	uint16_t x367 = UINT16_MAX;
	static int64_t t81 = -5LL;

	t81 = (x365-(x366^(x367&x368)));

	if (t81 != 6LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x372 = INT32_MIN;

	t82 = (x369-(x370^(x371&x372)));

	if (t82 != 9226775848749580972LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x377 = -1;
	volatile int64_t x378 = 1LL;
	int8_t x379 = -6;
	int16_t x380 = -1;
	static int64_t t83 = -256611159464073273LL;

	t83 = (x377-(x378^(x379&x380)));

	if (t83 != 4LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x382 = INT64_MAX;
	static uint32_t x383 = UINT32_MAX;
	static int8_t x384 = INT8_MIN;
	int64_t t84 = 109LL;

	t84 = (x381-(x382^(x383&x384)));

	if (t84 != -9223372032559808767LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x385 = UINT8_MAX;
	volatile uint32_t x386 = 1814193857U;
	uint64_t x387 = 2612LLU;
	int64_t x388 = -1LL;
	uint64_t t85 = 34LLU;

	t85 = (x385-(x386^(x387&x388)));

	if (t85 != 18446744071895356426LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x389 = 93;
	static volatile int64_t x390 = INT64_MIN;
	int16_t x391 = INT16_MIN;
	static int64_t t86 = -981311204402LL;

	t86 = (x389-(x390^(x391&x392)));

	if (t86 != -9223372034707292067LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = -1;
	volatile int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	uint64_t x396 = 18494LLU;
	uint64_t t87 = 550401436495132LLU;

	t87 = (x393-(x394^(x395&x396)));

	if (t87 != 127LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = -1;
	uint32_t x399 = 16264555U;
	int8_t x400 = 23;
	volatile int64_t t88 = -136301LL;

	t88 = (x397-(x398^(x399&x400)));

	if (t88 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = INT8_MIN;
	volatile uint16_t x402 = 579U;
	uint16_t x403 = UINT16_MAX;
	uint16_t x404 = 17486U;
	volatile int32_t t89 = 14032417;

	t89 = (x401-(x402^(x403&x404)));

	if (t89 != -18061) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x405 = 3374688LLU;
	static volatile int8_t x408 = 2;
	volatile uint64_t t90 = 498910588LLU;

	t90 = (x405-(x406^(x407&x408)));

	if (t90 != 3374814LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x414 = -1LL;
	int64_t x415 = 570191120382362349LL;
	uint8_t x416 = UINT8_MAX;
	int64_t t91 = -180764829766987058LL;

	t91 = (x413-(x414^(x415&x416)));

	if (t91 != 628LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = INT64_MIN;
	uint8_t x418 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MIN;
	int64_t t92 = -29982786LL;

	t92 = (x417-(x418^(x419&x420)));

	if (t92 != -9223372036854743295LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x421 = 724U;
	int32_t x422 = -1;
	volatile int32_t t93 = -1;

	t93 = (x421-(x422^(x423&x424)));

	if (t93 != 725) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = 32064;
	volatile uint8_t x427 = 1U;
	int32_t x428 = INT32_MIN;
	int32_t t94 = -2760;

	t94 = (x425-(x426^(x427&x428)));

	if (t94 != 32063) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = -25;
	static uint8_t x430 = 42U;
	int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MIN;

	t95 = (x429-(x430^(x431&x432)));

	if (t95 != 2147483581) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x437 = 64U;
	static int16_t x438 = INT16_MAX;
	int32_t x439 = INT32_MAX;
	int64_t x440 = INT64_MIN;
	volatile int64_t t96 = -622583803LL;

	t96 = (x437-(x438^(x439&x440)));

	if (t96 != -32703LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x442 = INT64_MIN;
	uint64_t x443 = UINT64_MAX;
	int32_t x444 = -6629325;
	static uint64_t t97 = 964465352283459LLU;

	t97 = (x441-(x442^(x443&x444)));

	if (t97 != 9223372036861372365LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = 7;
	volatile int16_t x446 = INT16_MAX;
	int8_t x447 = INT8_MIN;
	static int32_t t98 = 6186;

	t98 = (x445-(x446^(x447&x448)));

	if (t98 != -32760) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x449 = 3093U;
	int64_t x450 = INT64_MAX;
	int64_t x451 = INT64_MIN;
	int8_t x452 = 1;

	t99 = (x449-(x450^(x451&x452)));

	if (t99 != -9223372036854772714LL) { NG(); } else { ; }
	
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

