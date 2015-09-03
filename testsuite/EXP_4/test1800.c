#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 28;
volatile int32_t t0 = 121468;
int16_t x6 = 10;
volatile int32_t t1 = 2706;
volatile int8_t x20 = 49;
int32_t t2 = 940;
int16_t x28 = -11894;
static int32_t x31 = -1;
volatile int32_t x44 = INT32_MIN;
int64_t x66 = 6LL;
int8_t x93 = 58;
volatile int16_t x111 = -449;
uint32_t x158 = UINT32_MAX;
volatile uint64_t x162 = 3513LLU;
int16_t x168 = -1;
int32_t t23 = 4;
uint16_t x170 = UINT16_MAX;
uint32_t x174 = UINT32_MAX;
uint16_t x176 = 3U;
int64_t x223 = -1LL;
volatile int16_t x224 = INT16_MAX;
volatile int32_t t31 = 95;
uint64_t x237 = UINT64_MAX;
int16_t x254 = -1;
volatile int8_t x256 = -55;
static volatile uint64_t x259 = 323648LLU;
uint16_t x261 = 192U;
int8_t x267 = -37;
uint32_t t40 = 44831702U;
static uint64_t x294 = 40LLU;
static int32_t t43 = -2;
int16_t x315 = INT16_MIN;
uint16_t x317 = UINT16_MAX;
volatile int32_t t46 = 86839785;
static volatile int32_t t47 = 13;
volatile int64_t x354 = INT64_MIN;
int8_t x355 = INT8_MAX;
int64_t x370 = 184614288003LL;
static volatile int8_t x371 = INT8_MAX;
int32_t x380 = INT32_MAX;
volatile int32_t t53 = -6683;
volatile int8_t x394 = -1;
uint64_t t54 = 203637292400LLU;
int8_t x407 = -4;
static volatile uint32_t x439 = 26553176U;
static int64_t x440 = INT64_MIN;
int32_t x445 = INT32_MAX;
volatile int8_t x446 = 1;
int32_t x475 = -1;
uint16_t x497 = 4U;
volatile int32_t t63 = 848;
static uint64_t x509 = 949101LLU;
uint64_t x510 = 1633441344929853LLU;
static int32_t x527 = -667592491;
int32_t x545 = 390164;
int16_t x548 = INT16_MIN;
uint32_t x554 = UINT32_MAX;
uint32_t x561 = 20587186U;
static uint8_t x566 = UINT8_MAX;
volatile int32_t t73 = 1844942;
int64_t x579 = -1LL;
uint32_t x585 = 42840U;
volatile uint32_t t76 = 6952U;
int32_t x613 = INT32_MAX;
int16_t x620 = -1;
int16_t x625 = 503;
volatile int64_t x644 = INT64_MIN;
int16_t x645 = INT16_MAX;
int32_t t83 = -7;
volatile int64_t x676 = INT64_MAX;
static int64_t x680 = INT64_MIN;
static int16_t x688 = INT16_MIN;
uint32_t t86 = 102406U;
int32_t x723 = INT32_MAX;
uint32_t x728 = UINT32_MAX;
int16_t x736 = -1;
int32_t x737 = 57;
uint8_t x738 = 18U;
int8_t x747 = INT8_MIN;
static volatile int8_t x771 = INT8_MIN;


void f0(void) {
	static uint16_t x2 = 10U;
	volatile int64_t x3 = INT64_MAX;
	int64_t x4 = -1LL;

	t0 = (x1<<(x2<(x3&x4)));

	if (t0 != 56) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile int64_t x7 = INT64_MIN;
	static int64_t x8 = INT64_MIN;

	t1 = (x5<<(x6<(x7&x8)));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x17 = INT8_MAX;
	static int64_t x18 = 88794554399LL;
	int16_t x19 = INT16_MIN;

	t2 = (x17<<(x18<(x19&x20)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = 54656311324118LLU;
	uint32_t x26 = 4227708U;
	int8_t x27 = 39;
	volatile uint64_t t3 = 2123693238074LLU;

	t3 = (x25<<(x26<(x27&x28)));

	if (t3 != 54656311324118LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x29 = 997480878855480310LLU;
	int16_t x30 = -11401;
	uint64_t x32 = 352LLU;
	uint64_t t4 = 12630639LLU;

	t4 = (x29<<(x30<(x31&x32)));

	if (t4 != 997480878855480310LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x33 = 1LLU;
	int32_t x34 = -2348153;
	int16_t x35 = -1;
	int16_t x36 = INT16_MIN;
	uint64_t t5 = 34383847592715707LLU;

	t5 = (x33<<(x34<(x35&x36)));

	if (t5 != 2LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = 1634;
	int8_t x38 = INT8_MAX;
	volatile int16_t x39 = INT16_MIN;
	static int64_t x40 = INT64_MIN;
	int32_t t6 = 78;

	t6 = (x37<<(x38<(x39&x40)));

	if (t6 != 1634) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MAX;
	int64_t x42 = -1LL;
	int32_t x43 = INT32_MIN;
	int32_t t7 = INT32_MAX;

	t7 = (x41<<(x42<(x43&x44)));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x46 = INT8_MIN;
	static uint8_t x47 = UINT8_MAX;
	int16_t x48 = INT16_MIN;
	volatile uint32_t t8 = 2091291163U;

	t8 = (x45<<(x46<(x47&x48)));

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 236508805380286782LLU;
	volatile int64_t x50 = 133071997748671LL;
	static volatile int32_t x51 = -1;
	int16_t x52 = INT16_MAX;
	volatile uint64_t t9 = 1LLU;

	t9 = (x49<<(x50<(x51&x52)));

	if (t9 != 236508805380286782LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = 785191U;
	int16_t x58 = -140;
	int64_t x59 = INT64_MIN;
	int8_t x60 = -1;
	volatile uint32_t t10 = 1355729U;

	t10 = (x57<<(x58<(x59&x60)));

	if (t10 != 785191U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x65 = UINT16_MAX;
	static int64_t x67 = 116282234229033LL;
	int8_t x68 = -1;
	static int32_t t11 = 1;

	t11 = (x65<<(x66<(x67&x68)));

	if (t11 != 131070) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x81 = 1727;
	static volatile uint64_t x82 = 516472LLU;
	int32_t x83 = INT32_MIN;
	volatile int64_t x84 = -1236469735LL;
	int32_t t12 = 979611706;

	t12 = (x81<<(x82<(x83&x84)));

	if (t12 != 3454) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x85 = 475U;
	int32_t x86 = INT32_MIN;
	uint64_t x87 = UINT64_MAX;
	uint16_t x88 = 252U;
	volatile int32_t t13 = -3626406;

	t13 = (x85<<(x86<(x87&x88)));

	if (t13 != 475) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x94 = INT32_MAX;
	int32_t x95 = -1;
	uint32_t x96 = 30546U;
	volatile int32_t t14 = -144;

	t14 = (x93<<(x94<(x95&x96)));

	if (t14 != 58) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x97 = INT64_MAX;
	int16_t x98 = 127;
	int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MAX;
	int64_t t15 = INT64_MAX;

	t15 = (x97<<(x98<(x99&x100)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x109 = 28LLU;
	uint16_t x110 = 9U;
	uint64_t x112 = 2091079086LLU;
	uint64_t t16 = 653482799LLU;

	t16 = (x109<<(x110<(x111&x112)));

	if (t16 != 56LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int16_t x114 = 238;
	uint64_t x115 = UINT64_MAX;
	int64_t x116 = 45682974LL;
	volatile uint32_t t17 = 2055841U;

	t17 = (x113<<(x114<(x115&x116)));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x117 = INT16_MAX;
	static int64_t x118 = -533609424262171431LL;
	int16_t x119 = INT16_MAX;
	int32_t x120 = -403023;
	static volatile int32_t t18 = 14;

	t18 = (x117<<(x118<(x119&x120)));

	if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x133 = 3;
	static volatile int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MAX;
	static uint16_t x136 = UINT16_MAX;
	static volatile int32_t t19 = 2600;

	t19 = (x133<<(x134<(x135&x136)));

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x153 = UINT64_MAX;
	int16_t x154 = 32;
	static int32_t x155 = INT32_MIN;
	static volatile int16_t x156 = INT16_MIN;
	static uint64_t t20 = UINT64_MAX;

	t20 = (x153<<(x154<(x155&x156)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x157 = 1622692;
	int32_t x159 = INT32_MAX;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t21 = -63247720;

	t21 = (x157<<(x158<(x159&x160)));

	if (t21 != 1622692) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x161 = 170402404960LL;
	uint8_t x163 = 9U;
	static int16_t x164 = INT16_MIN;
	static int64_t t22 = 820066330218LL;

	t22 = (x161<<(x162<(x163&x164)));

	if (t22 != 170402404960LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x165 = 4U;
	int32_t x166 = -143599878;
	uint16_t x167 = 30424U;

	t23 = (x165<<(x166<(x167&x168)));

	if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x169 = UINT64_MAX;
	volatile int32_t x171 = INT32_MIN;
	static uint32_t x172 = UINT32_MAX;
	uint64_t t24 = 2274503266699115699LLU;

	t24 = (x169<<(x170<(x171&x172)));

	if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int32_t x175 = -1;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (x173<<(x174<(x175&x176)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x181 = 1034247321144933788LLU;
	uint8_t x182 = 31U;
	int16_t x183 = -1;
	int64_t x184 = -262470703LL;
	uint64_t t26 = 517485225455229LLU;

	t26 = (x181<<(x182<(x183&x184)));

	if (t26 != 1034247321144933788LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x189 = 114159157;
	volatile int32_t x190 = INT32_MIN;
	int8_t x191 = 7;
	int8_t x192 = 36;
	int32_t t27 = 29;

	t27 = (x189<<(x190<(x191&x192)));

	if (t27 != 228318314) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = 4908590608LL;
	uint64_t x195 = 51117LLU;
	static uint16_t x196 = UINT16_MAX;
	int32_t t28 = 108483;

	t28 = (x193<<(x194<(x195&x196)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x201 = UINT32_MAX;
	static uint8_t x202 = 6U;
	volatile int32_t x203 = INT32_MAX;
	int64_t x204 = -1LL;
	volatile uint32_t t29 = 2084097U;

	t29 = (x201<<(x202<(x203&x204)));

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x221 = 29U;
	uint16_t x222 = 0U;
	volatile int32_t t30 = 13925672;

	t30 = (x221<<(x222<(x223&x224)));

	if (t30 != 58) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x229 = INT8_MAX;
	int16_t x230 = INT16_MIN;
	uint64_t x231 = 2LLU;
	uint16_t x232 = UINT16_MAX;

	t31 = (x229<<(x230<(x231&x232)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 1LLU;
	static uint8_t x240 = UINT8_MAX;
	uint64_t t32 = UINT64_MAX;

	t32 = (x237<<(x238<(x239&x240)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x241 = 34U;
	int16_t x242 = INT16_MAX;
	int64_t x243 = INT64_MIN;
	int32_t x244 = INT32_MIN;
	volatile uint32_t t33 = 692U;

	t33 = (x241<<(x242<(x243&x244)));

	if (t33 != 34U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x249 = INT16_MAX;
	uint32_t x250 = 1280434U;
	volatile uint32_t x251 = 25190U;
	uint64_t x252 = 3778697416055705598LLU;
	int32_t t34 = -25;

	t34 = (x249<<(x250<(x251&x252)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x253 = 27487U;
	static uint16_t x255 = 52U;
	int32_t t35 = 0;

	t35 = (x253<<(x254<(x255&x256)));

	if (t35 != 54974) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x257 = UINT64_MAX;
	uint16_t x258 = UINT16_MAX;
	uint64_t x260 = UINT64_MAX;
	static volatile uint64_t t36 = 5121929928839429LLU;

	t36 = (x257<<(x258<(x259&x260)));

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x262 = INT16_MAX;
	static int32_t x263 = INT32_MIN;
	static int8_t x264 = 0;
	static volatile int32_t t37 = -236646286;

	t37 = (x261<<(x262<(x263&x264)));

	if (t37 != 192) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MIN;
	uint8_t x268 = 91U;
	int32_t t38 = -906;

	t38 = (x265<<(x266<(x267&x268)));

	if (t38 != 510) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x273 = 861614237;
	uint8_t x274 = UINT8_MAX;
	volatile int32_t x275 = -487704;
	int16_t x276 = -1;
	static int32_t t39 = -10328;

	t39 = (x273<<(x274<(x275&x276)));

	if (t39 != 861614237) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x277 = 1U;
	static int16_t x278 = 2;
	int16_t x279 = -127;
	uint32_t x280 = UINT32_MAX;

	t40 = (x277<<(x278<(x279&x280)));

	if (t40 != 2U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x293 = UINT8_MAX;
	int32_t x295 = INT32_MIN;
	static int64_t x296 = INT64_MIN;
	int32_t t41 = -13706;

	t41 = (x293<<(x294<(x295&x296)));

	if (t41 != 510) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x297 = 0U;
	int64_t x298 = 2907315203215LL;
	int8_t x299 = -1;
	uint8_t x300 = UINT8_MAX;
	static volatile int32_t t42 = 3646008;

	t42 = (x297<<(x298<(x299&x300)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x301 = UINT16_MAX;
	uint32_t x302 = 824892U;
	uint64_t x303 = UINT64_MAX;
	uint16_t x304 = 23431U;

	t43 = (x301<<(x302<(x303&x304)));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x313 = 63;
	static int8_t x314 = -1;
	volatile int32_t x316 = INT32_MAX;
	volatile int32_t t44 = 1584;

	t44 = (x313<<(x314<(x315&x316)));

	if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x318 = -1;
	volatile int16_t x319 = -1;
	int8_t x320 = -1;
	volatile int32_t t45 = -1737;

	t45 = (x317<<(x318<(x319&x320)));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x337 = INT16_MAX;
	int32_t x338 = -1;
	uint64_t x339 = UINT64_MAX;
	uint64_t x340 = 656325502LLU;

	t46 = (x337<<(x338<(x339&x340)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x341 = UINT8_MAX;
	static volatile int32_t x342 = -1;
	int32_t x343 = INT32_MIN;
	static int16_t x344 = 3;

	t47 = (x341<<(x342<(x343&x344)));

	if (t47 != 510) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x349 = UINT16_MAX;
	int8_t x350 = -29;
	int8_t x351 = INT8_MIN;
	int8_t x352 = -6;
	volatile int32_t t48 = 10;

	t48 = (x349<<(x350<(x351&x352)));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x353 = 20866;
	int8_t x356 = INT8_MIN;
	volatile int32_t t49 = 27374417;

	t49 = (x353<<(x354<(x355&x356)));

	if (t49 != 41732) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x369 = 2U;
	static int8_t x372 = INT8_MIN;
	int32_t t50 = 726;

	t50 = (x369<<(x370<(x371&x372)));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int16_t x374 = -1;
	uint64_t x375 = 8196LLU;
	volatile int64_t x376 = INT64_MIN;
	int32_t t51 = -14;

	t51 = (x373<<(x374<(x375&x376)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x377 = 24U;
	volatile uint64_t x378 = 2510360216208LLU;
	volatile int32_t x379 = -1;
	int32_t t52 = -7234618;

	t52 = (x377<<(x378<(x379&x380)));

	if (t52 != 24) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x381 = 2603U;
	uint64_t x382 = 25LLU;
	volatile int64_t x383 = 405LL;
	uint32_t x384 = 1341U;

	t53 = (x381<<(x382<(x383&x384)));

	if (t53 != 5206) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x393 = 1562LLU;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MAX;

	t54 = (x393<<(x394<(x395&x396)));

	if (t54 != 3124LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x397 = INT8_MAX;
	volatile int8_t x398 = -1;
	int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MAX;
	int32_t t55 = 17;

	t55 = (x397<<(x398<(x399&x400)));

	if (t55 != 254) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x405 = UINT8_MAX;
	static int64_t x406 = 2169534341LL;
	volatile int64_t x408 = INT64_MAX;
	volatile int32_t t56 = 31;

	t56 = (x405<<(x406<(x407&x408)));

	if (t56 != 510) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x409 = 12211144768492946LL;
	uint32_t x410 = 873166U;
	uint8_t x411 = UINT8_MAX;
	uint16_t x412 = UINT16_MAX;
	int64_t t57 = -22LL;

	t57 = (x409<<(x410<(x411&x412)));

	if (t57 != 12211144768492946LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x437 = 28699U;
	static int16_t x438 = INT16_MAX;
	volatile int32_t t58 = -90710961;

	t58 = (x437<<(x438<(x439&x440)));

	if (t58 != 28699) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x447 = 1;
	volatile int8_t x448 = 1;
	static volatile int32_t t59 = INT32_MAX;

	t59 = (x445<<(x446<(x447&x448)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x457 = 119733336261LLU;
	static int8_t x458 = -1;
	uint16_t x459 = UINT16_MAX;
	int32_t x460 = -1;
	uint64_t t60 = 8847539LLU;

	t60 = (x457<<(x458<(x459&x460)));

	if (t60 != 239466672522LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x473 = UINT8_MAX;
	volatile uint32_t x474 = 5900U;
	uint16_t x476 = 630U;
	int32_t t61 = -129343;

	t61 = (x473<<(x474<(x475&x476)));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x477 = INT64_MAX;
	int32_t x478 = 170668;
	volatile uint8_t x479 = 116U;
	uint16_t x480 = 1U;
	int64_t t62 = INT64_MAX;

	t62 = (x477<<(x478<(x479&x480)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x498 = -1;
	volatile uint32_t x499 = 25537125U;
	int64_t x500 = INT64_MIN;

	t63 = (x497<<(x498<(x499&x500)));

	if (t63 != 8) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x511 = UINT8_MAX;
	int32_t x512 = -1;
	uint64_t t64 = 484LLU;

	t64 = (x509<<(x510<(x511&x512)));

	if (t64 != 949101LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x513 = 8028U;
	int64_t x514 = INT64_MIN;
	static uint64_t x515 = UINT64_MAX;
	int32_t x516 = -1;
	volatile uint32_t t65 = 1938176546U;

	t65 = (x513<<(x514<(x515&x516)));

	if (t65 != 16056U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x525 = 5U;
	int16_t x526 = INT16_MIN;
	int16_t x528 = INT16_MAX;
	static int32_t t66 = -2306714;

	t66 = (x525<<(x526<(x527&x528)));

	if (t66 != 10) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x537 = UINT32_MAX;
	static int64_t x538 = -7650LL;
	int32_t x539 = INT32_MIN;
	static uint16_t x540 = 31943U;
	volatile uint32_t t67 = 5U;

	t67 = (x537<<(x538<(x539&x540)));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x546 = UINT64_MAX;
	int16_t x547 = INT16_MIN;
	volatile int32_t t68 = -1158;

	t68 = (x545<<(x546<(x547&x548)));

	if (t68 != 390164) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x553 = 9094;
	int32_t x555 = INT32_MAX;
	int64_t x556 = INT64_MIN;
	int32_t t69 = 48678;

	t69 = (x553<<(x554<(x555&x556)));

	if (t69 != 9094) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x562 = INT64_MAX;
	uint64_t x563 = 596488870LLU;
	volatile int64_t x564 = -325867058LL;
	uint32_t t70 = 54U;

	t70 = (x561<<(x562<(x563&x564)));

	if (t70 != 20587186U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x565 = INT32_MAX;
	int16_t x567 = 66;
	int32_t x568 = INT32_MIN;
	volatile int32_t t71 = INT32_MAX;

	t71 = (x565<<(x566<(x567&x568)));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x569 = 2123329U;
	uint8_t x570 = 20U;
	uint8_t x571 = 13U;
	static int8_t x572 = INT8_MIN;
	static volatile uint32_t t72 = 2U;

	t72 = (x569<<(x570<(x571&x572)));

	if (t72 != 2123329U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x573 = 1U;
	int32_t x574 = INT32_MAX;
	int32_t x575 = 171132;
	int16_t x576 = -12;

	t73 = (x573<<(x574<(x575&x576)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x577 = 115U;
	int8_t x578 = INT8_MAX;
	volatile int16_t x580 = -1;
	int32_t t74 = 1992536;

	t74 = (x577<<(x578<(x579&x580)));

	if (t74 != 115) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x586 = INT32_MIN;
	int64_t x587 = -217090566LL;
	int32_t x588 = INT32_MIN;
	volatile uint32_t t75 = 1091U;

	t75 = (x585<<(x586<(x587&x588)));

	if (t75 != 42840U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x589 = 1970U;
	static int16_t x590 = INT16_MAX;
	int32_t x591 = 1;
	int64_t x592 = INT64_MAX;

	t76 = (x589<<(x590<(x591&x592)));

	if (t76 != 1970U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x614 = 8331444;
	uint8_t x615 = 85U;
	uint32_t x616 = 469114U;
	static volatile int32_t t77 = INT32_MAX;

	t77 = (x613<<(x614<(x615&x616)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x617 = 7U;
	volatile int8_t x618 = INT8_MAX;
	volatile int32_t x619 = INT32_MIN;
	int32_t t78 = -9939;

	t78 = (x617<<(x618<(x619&x620)));

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x626 = UINT64_MAX;
	int64_t x627 = INT64_MIN;
	int8_t x628 = INT8_MIN;
	volatile int32_t t79 = -3081974;

	t79 = (x625<<(x626<(x627&x628)));

	if (t79 != 503) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x641 = 3U;
	int32_t x642 = INT32_MAX;
	uint8_t x643 = UINT8_MAX;
	volatile int32_t t80 = 4;

	t80 = (x641<<(x642<(x643&x644)));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x646 = UINT8_MAX;
	static int64_t x647 = INT64_MIN;
	uint16_t x648 = 779U;
	volatile int32_t t81 = -5;

	t81 = (x645<<(x646<(x647&x648)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x661 = 53791173958896710LLU;
	int16_t x662 = 5;
	int64_t x663 = INT64_MIN;
	static int16_t x664 = -1;
	uint64_t t82 = 910296LLU;

	t82 = (x661<<(x662<(x663&x664)));

	if (t82 != 53791173958896710LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x669 = 933U;
	int64_t x670 = 31LL;
	int16_t x671 = INT16_MIN;
	volatile int8_t x672 = INT8_MIN;

	t83 = (x669<<(x670<(x671&x672)));

	if (t83 != 933) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x673 = 869049U;
	static int16_t x674 = INT16_MAX;
	static volatile int32_t x675 = INT32_MIN;
	volatile uint32_t t84 = 3120U;

	t84 = (x673<<(x674<(x675&x676)));

	if (t84 != 1738098U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x677 = UINT64_MAX;
	volatile int16_t x678 = 1;
	int8_t x679 = INT8_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (x677<<(x678<(x679&x680)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x685 = 123U;
	static uint8_t x686 = 4U;
	int16_t x687 = INT16_MAX;

	t86 = (x685<<(x686<(x687&x688)));

	if (t86 != 123U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x689 = 530U;
	uint64_t x690 = 280321LLU;
	static int16_t x691 = INT16_MAX;
	int8_t x692 = -1;
	static int32_t t87 = -112606643;

	t87 = (x689<<(x690<(x691&x692)));

	if (t87 != 530) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x693 = 45165U;
	uint8_t x694 = UINT8_MAX;
	static uint32_t x695 = 440U;
	int64_t x696 = -211261521LL;
	uint32_t t88 = 2113770447U;

	t88 = (x693<<(x694<(x695&x696)));

	if (t88 != 90330U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x701 = INT8_MAX;
	static int64_t x702 = INT64_MIN;
	uint8_t x703 = UINT8_MAX;
	volatile int16_t x704 = INT16_MIN;
	static int32_t t89 = 0;

	t89 = (x701<<(x702<(x703&x704)));

	if (t89 != 254) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x721 = 153U;
	volatile int8_t x722 = -1;
	static uint64_t x724 = UINT64_MAX;
	int32_t t90 = 10764;

	t90 = (x721<<(x722<(x723&x724)));

	if (t90 != 153) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x725 = INT8_MAX;
	static int8_t x726 = INT8_MIN;
	volatile uint16_t x727 = 192U;
	int32_t t91 = 10;

	t91 = (x725<<(x726<(x727&x728)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x729 = 270379LLU;
	static int8_t x730 = -3;
	int16_t x731 = INT16_MAX;
	uint64_t x732 = 125230240LLU;
	static uint64_t t92 = 1318819982056LLU;

	t92 = (x729<<(x730<(x731&x732)));

	if (t92 != 270379LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x733 = 22U;
	int32_t x734 = INT32_MIN;
	static uint32_t x735 = 12U;
	volatile int32_t t93 = 1;

	t93 = (x733<<(x734<(x735&x736)));

	if (t93 != 22) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x739 = INT8_MAX;
	static volatile int16_t x740 = INT16_MAX;
	static volatile int32_t t94 = -14943355;

	t94 = (x737<<(x738<(x739&x740)));

	if (t94 != 114) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x745 = INT16_MAX;
	int64_t x746 = INT64_MAX;
	int64_t x748 = 99618634LL;
	static volatile int32_t t95 = 14162416;

	t95 = (x745<<(x746<(x747&x748)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x753 = 28U;
	volatile uint16_t x754 = UINT16_MAX;
	uint64_t x755 = UINT64_MAX;
	uint8_t x756 = 3U;
	volatile int32_t t96 = -593115616;

	t96 = (x753<<(x754<(x755&x756)));

	if (t96 != 28) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x765 = UINT16_MAX;
	static int64_t x766 = INT64_MIN;
	uint32_t x767 = 364U;
	int16_t x768 = INT16_MAX;
	int32_t t97 = -12;

	t97 = (x765<<(x766<(x767&x768)));

	if (t97 != 131070) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x769 = UINT32_MAX;
	uint64_t x770 = 187LLU;
	int16_t x772 = -1;
	volatile uint32_t t98 = 1U;

	t98 = (x769<<(x770<(x771&x772)));

	if (t98 != 4294967294U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x773 = INT16_MAX;
	static int8_t x774 = INT8_MAX;
	uint64_t x775 = 1715576909800574LLU;
	static uint8_t x776 = 1U;
	static volatile int32_t t99 = -5895526;

	t99 = (x773<<(x774<(x775&x776)));

	if (t99 != 32767) { NG(); } else { ; }
	
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

