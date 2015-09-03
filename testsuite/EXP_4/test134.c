#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MAX;
uint16_t x15 = 15U;
static uint32_t x31 = 128765566U;
volatile uint32_t t6 = 46U;
static uint16_t x33 = UINT16_MAX;
int64_t x37 = INT64_MIN;
volatile int64_t t10 = -1005800312962LL;
volatile int8_t x80 = -1;
int16_t x93 = 0;
volatile int32_t x118 = -1;
int16_t x124 = 11850;
uint32_t x146 = 24U;
volatile int8_t x154 = -1;
volatile int8_t x155 = INT8_MAX;
int16_t x156 = 1;
volatile int32_t t22 = 3904;
uint16_t x165 = 31U;
int16_t x173 = INT16_MIN;
static uint16_t x184 = 4U;
uint32_t x196 = UINT32_MAX;
int32_t x200 = INT32_MAX;
int64_t x211 = 1739269955LL;
uint16_t x212 = 3064U;
uint64_t x216 = UINT64_MAX;
uint64_t x220 = 132LLU;
uint32_t x226 = UINT32_MAX;
int64_t t43 = 8004237LL;
int8_t x262 = INT8_MAX;
int16_t x264 = INT16_MIN;
int32_t t44 = 5697;
int32_t x287 = 997767;
static int32_t x293 = INT32_MAX;
int32_t t49 = 3068;
int8_t x298 = INT8_MIN;
int8_t x303 = -1;
int8_t x307 = INT8_MIN;
static int8_t x308 = INT8_MAX;
static uint32_t t53 = 0U;
int32_t x313 = -63942344;
int8_t x322 = INT8_MIN;
uint32_t x323 = UINT32_MAX;
static uint32_t t55 = 6038U;
static int8_t x330 = -63;
uint32_t x338 = UINT32_MAX;
volatile int32_t x340 = 0;
volatile uint64_t t58 = 1443526893765603LLU;
int16_t x346 = INT16_MIN;
volatile uint32_t t60 = 441860858U;
uint64_t x353 = 152674463866LLU;
uint64_t t61 = 712LLU;
static uint32_t x374 = 7384152U;
int64_t x375 = 7810456LL;
volatile int64_t t64 = 1LL;
int64_t t65 = 11217LL;
volatile uint8_t x381 = UINT8_MAX;
uint64_t x382 = 231112894201769LLU;
static uint32_t x391 = 45214729U;
uint8_t x396 = UINT8_MAX;
uint8_t x424 = 1U;
int16_t x428 = -1;
int8_t x448 = 3;
int16_t x449 = 9;
int16_t x450 = INT16_MIN;
int16_t x453 = -229;
volatile uint64_t x457 = 1151267LLU;
uint64_t x459 = 113LLU;
uint64_t t81 = 13337LLU;
int8_t x476 = INT8_MIN;
static volatile int64_t t86 = 998007LL;
static int64_t t87 = 16483LL;
uint64_t x496 = UINT64_MAX;
uint32_t x502 = 33133U;
volatile int32_t x505 = -21895032;
int8_t x506 = INT8_MIN;
volatile int32_t t91 = 1;
int64_t t92 = -27562370892161LL;
uint32_t x515 = 1474513936U;
int16_t x521 = 13;
static int64_t x524 = -1LL;
static volatile int8_t x529 = INT8_MIN;
int32_t x532 = -1;
int16_t x534 = INT16_MIN;
int8_t x535 = 1;
volatile int8_t x536 = -11;
volatile int32_t t97 = -30493324;
int64_t x540 = INT64_MAX;
volatile uint16_t x541 = 20894U;
static volatile uint64_t t99 = 14004430LLU;


void f0(void) {
	uint16_t x6 = 120U;
	uint64_t x7 = 16736740912986516LLU;
	uint16_t x8 = 294U;
	uint64_t t0 = 4042187LLU;

	t0 = (x5/(x6&(x7+x8)));

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 19;
	static int32_t x10 = INT32_MIN;
	volatile uint16_t x11 = 0U;
	static uint64_t x12 = UINT64_MAX;
	volatile uint64_t t1 = 2383602080685LLU;

	t1 = (x9/(x10&(x11+x12)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = 12U;
	uint16_t x14 = 2U;
	int16_t x16 = -1;
	volatile int32_t t2 = 12;

	t2 = (x13/(x14&(x15+x16)));

	if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int16_t x18 = INT16_MAX;
	volatile uint32_t x19 = 200783519U;
	uint64_t x20 = 15239486480325LLU;
	volatile uint64_t t3 = 31811088814347666LLU;

	t3 = (x17/(x18&(x19+x20)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x21 = UINT64_MAX;
	uint8_t x22 = 25U;
	static volatile uint32_t x23 = 31808921U;
	uint32_t x24 = 25753039U;
	uint64_t t4 = 10956LLU;

	t4 = (x21/(x22&(x23+x24)));

	if (t4 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = 1582661145LL;
	uint16_t x26 = UINT16_MAX;
	int64_t x27 = INT64_MAX;
	int16_t x28 = INT16_MIN;
	int64_t t5 = -5631362LL;

	t5 = (x25/(x26&(x27+x28)));

	if (t5 != 48300LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 2254;
	int16_t x30 = INT16_MAX;
	static volatile int16_t x32 = 3166;

	t6 = (x29/(x30&(x31+x32)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = INT16_MAX;
	int32_t x35 = -1;
	int64_t x36 = -3904917LL;
	volatile int64_t t7 = -318855LL;

	t7 = (x33/(x34&(x35+x36)));

	if (t7 != 2LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x38 = UINT32_MAX;
	int8_t x39 = INT8_MAX;
	int8_t x40 = -46;
	static volatile int64_t t8 = 0LL;

	t8 = (x37/(x38&(x39+x40)));

	if (t8 != -113868790578454022LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x53 = UINT16_MAX;
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	uint64_t x56 = 153708087LLU;
	uint64_t t9 = 171938373049748LLU;

	t9 = (x53/(x54&(x55+x56)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = 69160523396LL;
	static uint16_t x62 = 5U;
	static int8_t x63 = INT8_MIN;
	volatile uint16_t x64 = UINT16_MAX;

	t10 = (x61/(x62&(x63+x64)));

	if (t10 != 13832104679LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x69 = INT8_MAX;
	int8_t x70 = INT8_MIN;
	volatile int32_t x71 = 181;
	int8_t x72 = -1;
	static int32_t t11 = -1;

	t11 = (x69/(x70&(x71+x72)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = -1;
	volatile uint32_t x78 = UINT32_MAX;
	uint32_t x79 = 909641U;
	uint32_t t12 = 28U;

	t12 = (x77/(x78&(x79+x80)));

	if (t12 != 4721U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x81 = 7;
	int64_t x82 = -264846705933114145LL;
	uint64_t x83 = 8723836163037682LLU;
	int16_t x84 = -14581;
	static uint64_t t13 = 6717939179488599215LLU;

	t13 = (x81/(x82&(x83+x84)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x94 = -31;
	static int64_t x95 = -1LL;
	int8_t x96 = INT8_MAX;
	int64_t t14 = -3787LL;

	t14 = (x93/(x94&(x95+x96)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x109 = 0;
	static volatile int64_t x110 = INT64_MAX;
	volatile uint64_t x111 = UINT64_MAX;
	static int16_t x112 = INT16_MAX;
	uint64_t t15 = 23570327838LLU;

	t15 = (x109/(x110&(x111+x112)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x117 = INT32_MIN;
	uint32_t x119 = 898928U;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t16 = 2573641525LL;

	t16 = (x117/(x118&(x119+x120)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x121 = UINT32_MAX;
	static int16_t x122 = -1;
	volatile uint8_t x123 = 8U;
	static uint32_t t17 = 34U;

	t17 = (x121/(x122&(x123+x124)));

	if (t17 != 362199U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x129 = 188004212U;
	int8_t x130 = -42;
	int64_t x131 = INT64_MIN;
	volatile uint8_t x132 = 11U;
	int64_t t18 = -391771124382LL;

	t18 = (x129/(x130&(x131+x132)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x133 = 7740U;
	int32_t x134 = INT32_MAX;
	int64_t x135 = INT64_MIN;
	volatile uint8_t x136 = UINT8_MAX;
	volatile int64_t t19 = -1LL;

	t19 = (x133/(x134&(x135+x136)));

	if (t19 != 30LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x145 = 0LL;
	uint16_t x147 = 14U;
	int64_t x148 = -694052642593403LL;
	static int64_t t20 = 30224033330LL;

	t20 = (x145/(x146&(x147+x148)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x149 = INT64_MIN;
	static int8_t x150 = -1;
	int8_t x151 = 40;
	volatile uint64_t x152 = UINT64_MAX;
	volatile uint64_t t21 = 63723039LLU;

	t21 = (x149/(x150&(x151+x152)));

	if (t21 != 236496718893712200LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x153 = 6U;

	t22 = (x153/(x154&(x155+x156)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x157 = INT32_MIN;
	static int8_t x158 = INT8_MAX;
	int32_t x159 = 592;
	int8_t x160 = -1;
	static int32_t t23 = 477;

	t23 = (x157/(x158&(x159+x160)));

	if (t23 != -27183337) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x166 = UINT8_MAX;
	uint32_t x167 = UINT32_MAX;
	static int16_t x168 = INT16_MIN;
	volatile uint32_t t24 = 61028U;

	t24 = (x165/(x166&(x167+x168)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x169 = 54244589345535LLU;
	static int16_t x170 = INT16_MAX;
	volatile int8_t x171 = INT8_MIN;
	static uint16_t x172 = 4U;
	static uint64_t t25 = 5883010396000491LLU;

	t25 = (x169/(x170&(x171+x172)));

	if (t25 != 1661701670LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x174 = UINT64_MAX;
	static uint16_t x175 = 0U;
	int8_t x176 = -1;
	volatile uint64_t t26 = 1569LLU;

	t26 = (x173/(x174&(x175+x176)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x177 = UINT16_MAX;
	int64_t x178 = -1LL;
	volatile int64_t x179 = -297206LL;
	volatile int32_t x180 = 5;
	static volatile int64_t t27 = -6LL;

	t27 = (x177/(x178&(x179+x180)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x181 = UINT8_MAX;
	volatile int8_t x182 = -1;
	static int64_t x183 = -1LL;
	int64_t t28 = 104434807LL;

	t28 = (x181/(x182&(x183+x184)));

	if (t28 != 85LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x185 = 8329612LLU;
	int16_t x186 = -1;
	int8_t x187 = INT8_MIN;
	uint64_t x188 = 385197LLU;
	volatile uint64_t t29 = 406600329716LLU;

	t29 = (x185/(x186&(x187+x188)));

	if (t29 != 21LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x189 = INT64_MAX;
	uint16_t x190 = 9159U;
	static uint16_t x191 = 374U;
	uint8_t x192 = 1U;
	volatile int64_t t30 = -70LL;

	t30 = (x189/(x190&(x191+x192)));

	if (t30 != 28206030693745491LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x193 = UINT8_MAX;
	int16_t x194 = 1302;
	uint16_t x195 = 0U;
	uint32_t t31 = 9864782U;

	t31 = (x193/(x194&(x195+x196)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x197 = -11;
	uint32_t x198 = 830U;
	static int32_t x199 = -1;
	volatile uint32_t t32 = 513149U;

	t32 = (x197/(x198&(x199+x200)));

	if (t32 != 5174659U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x201 = 107U;
	static int8_t x202 = INT8_MIN;
	uint16_t x203 = 17308U;
	volatile uint8_t x204 = 105U;
	int32_t t33 = -116621964;

	t33 = (x201/(x202&(x203+x204)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x209 = INT16_MAX;
	static uint32_t x210 = UINT32_MAX;
	int64_t t34 = -1889LL;

	t34 = (x209/(x210&(x211+x212)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x213 = 749;
	uint64_t x214 = 13754096496060LLU;
	static int16_t x215 = INT16_MIN;
	uint64_t t35 = 2LLU;

	t35 = (x213/(x214&(x215+x216)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x217 = 3U;
	int64_t x218 = INT64_MAX;
	volatile uint32_t x219 = UINT32_MAX;
	uint64_t t36 = 207LLU;

	t36 = (x217/(x218&(x219+x220)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x221 = INT16_MIN;
	uint32_t x222 = UINT32_MAX;
	uint8_t x223 = 1U;
	int16_t x224 = INT16_MIN;
	uint32_t t37 = 422U;

	t37 = (x221/(x222&(x223+x224)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x225 = 6;
	int32_t x227 = INT32_MIN;
	static int16_t x228 = 20;
	uint32_t t38 = 50U;

	t38 = (x225/(x226&(x227+x228)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x233 = -3;
	int8_t x234 = INT8_MIN;
	static int64_t x235 = INT64_MAX;
	int64_t x236 = -1LL;
	static int64_t t39 = 6779994LL;

	t39 = (x233/(x234&(x235+x236)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x241 = -1;
	static int16_t x242 = -2;
	uint8_t x243 = 3U;
	int64_t x244 = INT64_MIN;
	volatile int64_t t40 = -3014LL;

	t40 = (x241/(x242&(x243+x244)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x249 = INT64_MAX;
	uint8_t x250 = 12U;
	int8_t x251 = -44;
	int16_t x252 = INT16_MIN;
	volatile int64_t t41 = 116284518148113920LL;

	t41 = (x249/(x250&(x251+x252)));

	if (t41 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x253 = -3;
	static int16_t x254 = -1;
	uint16_t x255 = 622U;
	int64_t x256 = INT64_MIN;
	int64_t t42 = -236640537LL;

	t42 = (x253/(x254&(x255+x256)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x257 = 10026;
	int8_t x258 = INT8_MAX;
	int64_t x259 = -1LL;
	int16_t x260 = -12;

	t43 = (x257/(x258&(x259+x260)));

	if (t43 != 87LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x261 = INT8_MIN;
	static int32_t x263 = 4017561;

	t44 = (x261/(x262&(x263+x264)));

	if (t44 != -5) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x270 = 2812774849627LLU;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MIN;
	uint64_t t45 = 6074486517625020987LLU;

	t45 = (x269/(x270&(x271+x272)));

	if (t45 != 6558201LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x273 = 7752U;
	uint32_t x274 = 506U;
	int8_t x275 = INT8_MIN;
	static uint32_t x276 = UINT32_MAX;
	static uint32_t t46 = 59788936U;

	t46 = (x273/(x274&(x275+x276)));

	if (t46 != 20U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x285 = 8993;
	static int64_t x286 = 346825410LL;
	int16_t x288 = INT16_MAX;
	int64_t t47 = 55122LL;

	t47 = (x285/(x286&(x287+x288)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x289 = UINT16_MAX;
	static int64_t x290 = INT64_MAX;
	uint8_t x291 = UINT8_MAX;
	static uint8_t x292 = 1U;
	volatile int64_t t48 = 368087652413435LL;

	t48 = (x289/(x290&(x291+x292)));

	if (t48 != 255LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x294 = -6191;
	uint8_t x295 = 1U;
	int16_t x296 = INT16_MAX;

	t49 = (x293/(x294&(x295+x296)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x297 = 354227355788058LL;
	volatile int64_t x299 = INT64_MIN;
	int16_t x300 = 5907;
	static int64_t t50 = 250147992568860862LL;

	t50 = (x297/(x298&(x299+x300)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x301 = 15;
	int8_t x302 = INT8_MIN;
	static int64_t x304 = -10LL;
	volatile int64_t t51 = -378441937545767LL;

	t51 = (x301/(x302&(x303+x304)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x305 = UINT16_MAX;
	int64_t x306 = 159032081LL;
	static int64_t t52 = -4263532404468368850LL;

	t52 = (x305/(x306&(x307+x308)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x309 = 21U;
	volatile int32_t x310 = -1;
	int32_t x311 = INT32_MAX;
	volatile uint32_t x312 = 630191133U;

	t53 = (x309/(x310&(x311+x312)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x314 = UINT64_MAX;
	uint64_t x315 = UINT64_MAX;
	volatile int8_t x316 = -2;
	static volatile uint64_t t54 = 24884270906646LLU;

	t54 = (x313/(x314&(x315+x316)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x321 = 26U;
	uint32_t x324 = 67251U;

	t55 = (x321/(x322&(x323+x324)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x329 = INT64_MAX;
	static int8_t x331 = -1;
	static uint32_t x332 = UINT32_MAX;
	volatile int64_t t56 = 259585834554255LL;

	t56 = (x329/(x330&(x331+x332)));

	if (t56 != 2147483680LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x333 = UINT32_MAX;
	volatile int32_t x334 = 7;
	int32_t x335 = 1290093;
	uint8_t x336 = UINT8_MAX;
	uint32_t t57 = 0U;

	t57 = (x333/(x334&(x335+x336)));

	if (t57 != 1073741823U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x337 = UINT64_MAX;
	uint32_t x339 = 121782772U;

	t58 = (x337/(x338&(x339+x340)));

	if (t58 != 151472525799LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x345 = INT8_MAX;
	volatile uint64_t x347 = UINT64_MAX;
	static volatile uint64_t x348 = UINT64_MAX;
	uint64_t t59 = 279549540359598720LLU;

	t59 = (x345/(x346&(x347+x348)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = UINT8_MAX;
	uint8_t x351 = 29U;
	uint32_t x352 = UINT32_MAX;

	t60 = (x349/(x350&(x351+x352)));

	if (t60 != 153391684U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x354 = UINT8_MAX;
	uint64_t x355 = 13601961LLU;
	volatile int16_t x356 = -3035;

	t61 = (x353/(x354&(x355+x356)));

	if (t61 != 741138174LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x357 = 119U;
	static uint16_t x358 = UINT16_MAX;
	volatile int8_t x359 = 35;
	static int8_t x360 = INT8_MAX;
	volatile int32_t t62 = 7362;

	t62 = (x357/(x358&(x359+x360)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x365 = UINT32_MAX;
	volatile uint32_t x366 = UINT32_MAX;
	uint8_t x367 = 0U;
	uint32_t x368 = UINT32_MAX;
	static uint32_t t63 = 79293622U;

	t63 = (x365/(x366&(x367+x368)));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x373 = 10U;
	uint32_t x376 = 195172806U;

	t64 = (x373/(x374&(x375+x376)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x377 = INT32_MAX;
	static int64_t x378 = 13LL;
	int16_t x379 = 1;
	uint32_t x380 = 27U;

	t65 = (x377/(x378&(x379+x380)));

	if (t65 != 178956970LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x383 = UINT64_MAX;
	static volatile int32_t x384 = -1;
	volatile uint64_t t66 = 41862051286319LLU;

	t66 = (x381/(x382&(x383+x384)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x389 = 0;
	int32_t x390 = INT32_MAX;
	uint16_t x392 = UINT16_MAX;
	uint32_t t67 = 280U;

	t67 = (x389/(x390&(x391+x392)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x393 = INT8_MIN;
	int64_t x394 = 3LL;
	int32_t x395 = -10143518;
	int64_t t68 = -243054868LL;

	t68 = (x393/(x394&(x395+x396)));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x401 = -1;
	int16_t x402 = 10;
	int8_t x403 = INT8_MIN;
	static uint8_t x404 = 15U;
	int32_t t69 = -131502;

	t69 = (x401/(x402&(x403+x404)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x405 = 251257360026252076LLU;
	int32_t x406 = -18750;
	uint8_t x407 = UINT8_MAX;
	volatile int64_t x408 = INT64_MIN;
	uint64_t t70 = 7675LLU;

	t70 = (x405/(x406&(x407+x408)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x409 = INT32_MIN;
	volatile int8_t x410 = INT8_MIN;
	uint64_t x411 = 5332525101LLU;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t71 = 24877832842593LLU;

	t71 = (x409/(x410&(x411+x412)));

	if (t71 != 3459288775LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x413 = -717;
	static uint32_t x414 = UINT32_MAX;
	int64_t x415 = 75870662247065209LL;
	static int8_t x416 = INT8_MIN;
	int64_t t72 = 93LL;

	t72 = (x413/(x414&(x415+x416)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x417 = UINT32_MAX;
	uint32_t x418 = 783U;
	int64_t x419 = -996314003LL;
	int8_t x420 = 0;
	int64_t t73 = -3LL;

	t73 = (x417/(x418&(x419+x420)));

	if (t73 != 330382099LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x421 = -200773;
	static int8_t x422 = INT8_MAX;
	volatile int8_t x423 = INT8_MIN;
	int32_t t74 = -482475;

	t74 = (x421/(x422&(x423+x424)));

	if (t74 != -200773) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x425 = -5032;
	int8_t x426 = -1;
	static int8_t x427 = INT8_MIN;
	volatile int32_t t75 = -4112078;

	t75 = (x425/(x426&(x427+x428)));

	if (t75 != 39) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x429 = INT64_MIN;
	int16_t x430 = INT16_MAX;
	static volatile int16_t x431 = INT16_MAX;
	int16_t x432 = INT16_MIN;
	static int64_t t76 = 1716606138657002576LL;

	t76 = (x429/(x430&(x431+x432)));

	if (t76 != -281483566907400LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x437 = 329U;
	volatile uint64_t x438 = 55625453LLU;
	uint8_t x439 = 0U;
	static int16_t x440 = 3259;
	static volatile uint64_t t77 = 10694586345LLU;

	t77 = (x437/(x438&(x439+x440)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x445 = INT64_MIN;
	int32_t x446 = -3;
	int32_t x447 = INT32_MIN;
	int64_t t78 = 39561641LL;

	t78 = (x445/(x446&(x447+x448)));

	if (t78 != 4294967298LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x451 = INT16_MIN;
	int64_t x452 = -694284962097LL;
	volatile int64_t t79 = -9726977166LL;

	t79 = (x449/(x450&(x451+x452)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x454 = -24;
	volatile uint8_t x455 = 23U;
	uint64_t x456 = 1044LLU;
	volatile uint64_t t80 = 407143LLU;

	t80 = (x453/(x454&(x455+x456)));

	if (t80 != 17337165482809728LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x458 = 25;
	int8_t x460 = INT8_MAX;

	t81 = (x457/(x458&(x459+x460)));

	if (t81 != 71954LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x461 = INT64_MAX;
	int8_t x462 = 26;
	static int8_t x463 = INT8_MAX;
	int32_t x464 = 115;
	static volatile int64_t t82 = -3LL;

	t82 = (x461/(x462&(x463+x464)));

	if (t82 != 512409557603043100LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x465 = INT16_MIN;
	uint64_t x466 = 362LLU;
	volatile int8_t x467 = INT8_MIN;
	uint32_t x468 = 32089474U;
	volatile uint64_t t83 = 74LLU;

	t83 = (x465/(x466&(x467+x468)));

	if (t83 != 71499008037633793LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x469 = INT64_MIN;
	static uint16_t x470 = 1U;
	int32_t x471 = -873914;
	int8_t x472 = -1;
	int64_t t84 = INT64_MIN;

	t84 = (x469/(x470&(x471+x472)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x473 = 4U;
	int8_t x474 = -1;
	int32_t x475 = -175;
	int32_t t85 = -126167115;

	t85 = (x473/(x474&(x475+x476)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x477 = 0;
	static int8_t x478 = -6;
	uint16_t x479 = 119U;
	volatile int64_t x480 = INT64_MIN;

	t86 = (x477/(x478&(x479+x480)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x481 = -1;
	int16_t x482 = INT16_MIN;
	int64_t x483 = -1LL;
	int16_t x484 = -1;

	t87 = (x481/(x482&(x483+x484)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x485 = INT16_MIN;
	uint8_t x486 = 119U;
	int8_t x487 = INT8_MIN;
	int32_t x488 = -1378044;
	volatile int32_t t88 = 1846152;

	t88 = (x485/(x486&(x487+x488)));

	if (t88 != -8192) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x493 = 430662LLU;
	volatile int8_t x494 = INT8_MIN;
	int32_t x495 = INT32_MIN;
	volatile uint64_t t89 = 816219815LLU;

	t89 = (x493/(x494&(x495+x496)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x501 = 95631078LLU;
	int32_t x503 = -8;
	uint32_t x504 = UINT32_MAX;
	volatile uint64_t t90 = 15518278781451625LLU;

	t90 = (x501/(x502&(x503+x504)));

	if (t90 != 2886LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x507 = INT16_MIN;
	static volatile int8_t x508 = INT8_MIN;

	t91 = (x505/(x506&(x507+x508)));

	if (t91 != 665) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x509 = -7;
	uint32_t x510 = 23398U;
	int64_t x511 = -6267572613981LL;
	volatile int16_t x512 = INT16_MIN;

	t92 = (x509/(x510&(x511+x512)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x513 = 29718U;
	uint8_t x514 = UINT8_MAX;
	int16_t x516 = -5527;
	volatile uint32_t t93 = 29798U;

	t93 = (x513/(x514&(x515+x516)));

	if (t93 != 245U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x517 = 111;
	static volatile int32_t x518 = INT32_MAX;
	uint32_t x519 = 5255484U;
	uint8_t x520 = 65U;
	volatile uint32_t t94 = 32174881U;

	t94 = (x517/(x518&(x519+x520)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x522 = INT64_MIN;
	int32_t x523 = -1;
	static int64_t t95 = 645946404005252203LL;

	t95 = (x521/(x522&(x523+x524)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x530 = INT64_MAX;
	volatile int64_t x531 = 31667039163553LL;
	int64_t t96 = -1666LL;

	t96 = (x529/(x530&(x531+x532)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x533 = INT32_MIN;

	t97 = (x533/(x534&(x535+x536)));

	if (t97 != 65536) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x537 = INT64_MAX;
	volatile int8_t x538 = -1;
	int16_t x539 = INT16_MIN;
	volatile int64_t t98 = -63630520584LL;

	t98 = (x537/(x538&(x539+x540)));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x542 = UINT64_MAX;
	uint16_t x543 = 45U;
	volatile uint16_t x544 = 8U;

	t99 = (x541/(x542&(x543+x544)));

	if (t99 != 394LLU) { NG(); } else { ; }
	
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

