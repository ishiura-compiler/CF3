#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 2U;
int8_t x19 = 4;
volatile int8_t x35 = INT8_MIN;
uint8_t x37 = UINT8_MAX;
int64_t x39 = -6007744LL;
volatile uint64_t t5 = 14LLU;
int32_t x44 = INT32_MIN;
volatile uint64_t t6 = 643630796LLU;
int8_t x67 = 53;
uint64_t t9 = 8625LLU;
int16_t x103 = -1;
int8_t x104 = INT8_MAX;
static volatile uint8_t x109 = 34U;
static volatile int64_t x110 = -1LL;
int16_t x122 = -1;
int32_t x142 = 1685343;
static volatile uint64_t x143 = 124LLU;
volatile int32_t x144 = INT32_MAX;
int32_t x159 = INT32_MIN;
static volatile int16_t x160 = INT16_MIN;
int8_t x171 = INT8_MIN;
uint64_t x173 = UINT64_MAX;
int32_t x174 = -1;
int32_t x182 = INT32_MIN;
volatile uint16_t x183 = 4373U;
int64_t x184 = INT64_MAX;
static int16_t x193 = INT16_MIN;
static int16_t x205 = INT16_MIN;
volatile int64_t x210 = -1LL;
static int16_t x214 = 7;
volatile int64_t x222 = INT64_MIN;
int64_t x223 = -55219076542791435LL;
static int64_t t23 = 208LL;
int16_t x238 = INT16_MAX;
volatile int64_t x242 = -1LL;
uint64_t x250 = 1727003198LLU;
uint32_t x269 = UINT32_MAX;
int16_t x273 = -3;
static int8_t x283 = INT8_MIN;
volatile int32_t x284 = 568622088;
int64_t t33 = -71838589859674370LL;
static int8_t x293 = INT8_MIN;
static uint64_t x308 = 1070808902054933LLU;
volatile int32_t t36 = -40;
int32_t x336 = -1;
volatile int64_t x341 = 1074LL;
static uint8_t x350 = UINT8_MAX;
static volatile int32_t t40 = 28381672;
int8_t x358 = -1;
volatile int64_t t44 = -156307149LL;
int32_t x385 = -1;
uint32_t x388 = 14339U;
int32_t t45 = -447941;
int32_t x391 = INT32_MIN;
static int32_t t46 = 3900215;
volatile uint32_t t49 = 15U;
int32_t x415 = INT32_MIN;
static volatile int32_t t50 = 3460967;
int8_t x417 = INT8_MIN;
int32_t x419 = INT32_MIN;
static uint64_t x422 = UINT64_MAX;
int8_t x427 = -6;
volatile uint64_t x429 = UINT64_MAX;
uint64_t x430 = UINT64_MAX;
uint16_t x436 = UINT16_MAX;
static uint8_t x456 = UINT8_MAX;
int8_t x483 = -1;
volatile int32_t x487 = INT32_MIN;
static int64_t x509 = 13281284894LL;
volatile int64_t t61 = 545410184LL;
int16_t x540 = -454;
uint64_t x553 = 2785765500150441LLU;
int8_t x554 = -1;
static int8_t x556 = INT8_MIN;
uint64_t t65 = 14578067839702LLU;
static volatile uint8_t x557 = 22U;
static volatile int16_t x560 = INT16_MAX;
volatile int8_t x561 = INT8_MIN;
int8_t x568 = -4;
static uint64_t x571 = UINT64_MAX;
int8_t x576 = INT8_MIN;
int64_t x588 = INT64_MAX;
static int64_t x595 = INT64_MIN;
int16_t x618 = INT16_MAX;
static volatile uint32_t x624 = 18331U;
uint32_t t76 = 403212110U;
static int64_t x627 = INT64_MIN;
int32_t x628 = -1;
int64_t x643 = INT64_MIN;
int16_t x644 = -1;
volatile int32_t t80 = 18531;
int32_t x664 = -1;
volatile uint32_t x682 = UINT32_MAX;
uint16_t x685 = UINT16_MAX;
int8_t x702 = INT8_MAX;
uint64_t x704 = UINT64_MAX;
int32_t x750 = 11231095;
volatile int32_t t92 = -26571739;
uint64_t x796 = UINT64_MAX;
uint8_t x798 = UINT8_MAX;
int16_t x801 = INT16_MAX;
uint8_t x814 = UINT8_MAX;
uint16_t x822 = 12989U;
uint16_t x828 = 18U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int8_t x2 = 3;
	int16_t x3 = -1;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = -2LL;

	t0 = (x1/(x2*(x3<=x4)));

	if (t0 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int64_t x6 = -1LL;
	volatile uint64_t x8 = UINT64_MAX;
	int64_t t1 = 15237354931241LL;

	t1 = (x5/(x6*(x7<=x8)));

	if (t1 != -127LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -236LL;
	uint64_t x18 = 10759575680266LLU;
	int64_t x20 = INT64_MAX;
	uint64_t t2 = 95146120889279LLU;

	t2 = (x17/(x18*(x19<=x20)));

	if (t2 != 1714449LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x21 = 5056960LLU;
	int64_t x22 = -32690406498430LL;
	int64_t x23 = -1LL;
	int32_t x24 = 103402965;
	static volatile uint64_t t3 = 938965723942333740LLU;

	t3 = (x21/(x22*(x23<=x24)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 0U;
	uint64_t x34 = UINT64_MAX;
	static uint8_t x36 = UINT8_MAX;
	uint64_t t4 = 185419829051LLU;

	t4 = (x33/(x34*(x35<=x36)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x38 = 25391219LLU;
	static int32_t x40 = 10729;

	t5 = (x37/(x38*(x39<=x40)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x41 = 1979188LLU;
	int16_t x42 = -1;
	static uint64_t x43 = 8891837310440830198LLU;

	t6 = (x41/(x42*(x43<=x44)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = -1151;
	uint64_t x46 = UINT64_MAX;
	volatile int32_t x47 = INT32_MIN;
	int8_t x48 = -14;
	static uint64_t t7 = 61LLU;

	t7 = (x45/(x46*(x47<=x48)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x65 = 1150488U;
	uint8_t x66 = 93U;
	static uint64_t x68 = 45811441267513185LLU;
	uint32_t t8 = 16046U;

	t8 = (x65/(x66*(x67<=x68)));

	if (t8 != 12370U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x97 = INT32_MAX;
	uint64_t x98 = 2841687735999892LLU;
	int16_t x99 = INT16_MIN;
	int64_t x100 = 862077823LL;

	t9 = (x97/(x98*(x99<=x100)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x101 = -289689133703844LL;
	int16_t x102 = 1666;
	static int64_t t10 = 6526347670079335LL;

	t10 = (x101/(x102*(x103<=x104)));

	if (t10 != -173883033435LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x111 = -1504;
	int8_t x112 = 1;
	int64_t t11 = -31447LL;

	t11 = (x109/(x110*(x111<=x112)));

	if (t11 != -34LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x121 = 4994U;
	uint16_t x123 = 8255U;
	static int32_t x124 = INT32_MAX;
	volatile int32_t t12 = 0;

	t12 = (x121/(x122*(x123<=x124)));

	if (t12 != -4994) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x141 = 185467U;
	uint32_t t13 = 108753321U;

	t13 = (x141/(x142*(x143<=x144)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x157 = -1;
	volatile int64_t x158 = 43133185794LL;
	volatile int64_t t14 = 80248966964401846LL;

	t14 = (x157/(x158*(x159<=x160)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x169 = 3U;
	int16_t x170 = INT16_MIN;
	int32_t x172 = -1;
	int32_t t15 = 4694866;

	t15 = (x169/(x170*(x171<=x172)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x175 = -264928314908197873LL;
	uint32_t x176 = 38U;
	static uint64_t t16 = 35400534LLU;

	t16 = (x173/(x174*(x175<=x176)));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x181 = 3U;
	int32_t t17 = -947305;

	t17 = (x181/(x182*(x183<=x184)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x194 = INT8_MIN;
	uint32_t x195 = 6485500U;
	int16_t x196 = -119;
	volatile int32_t t18 = -502928949;

	t18 = (x193/(x194*(x195<=x196)));

	if (t18 != 256) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x206 = -1LL;
	int8_t x207 = 20;
	volatile int16_t x208 = INT16_MAX;
	volatile int64_t t19 = 78782173731271032LL;

	t19 = (x205/(x206*(x207<=x208)));

	if (t19 != 32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x209 = 382;
	int64_t x211 = INT64_MIN;
	static int16_t x212 = -1;
	int64_t t20 = -2708506454942LL;

	t20 = (x209/(x210*(x211<=x212)));

	if (t20 != -382LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x213 = 9U;
	uint64_t x215 = 755LLU;
	int32_t x216 = -1;
	int32_t t21 = 57;

	t21 = (x213/(x214*(x215<=x216)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x217 = 13U;
	uint64_t x218 = UINT64_MAX;
	int64_t x219 = INT64_MIN;
	int32_t x220 = -29;
	uint64_t t22 = 19348243038LLU;

	t22 = (x217/(x218*(x219<=x220)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x221 = 1349376706U;
	static volatile int32_t x224 = -1;

	t23 = (x221/(x222*(x223<=x224)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x229 = 8157362LL;
	volatile int8_t x230 = -63;
	uint16_t x231 = UINT16_MAX;
	volatile uint32_t x232 = UINT32_MAX;
	static int64_t t24 = 127852937LL;

	t24 = (x229/(x230*(x231<=x232)));

	if (t24 != -129481LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x233 = UINT64_MAX;
	uint8_t x234 = 7U;
	int64_t x235 = INT64_MIN;
	int64_t x236 = -2668219LL;
	uint64_t t25 = 1LLU;

	t25 = (x233/(x234*(x235<=x236)));

	if (t25 != 2635249153387078802LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x237 = -10;
	uint64_t x239 = 1984927696LLU;
	int32_t x240 = INT32_MIN;
	volatile int32_t t26 = 80554931;

	t26 = (x237/(x238*(x239<=x240)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x241 = INT8_MAX;
	static volatile int64_t x243 = INT64_MIN;
	int8_t x244 = 13;
	int64_t t27 = -169562932023060LL;

	t27 = (x241/(x242*(x243<=x244)));

	if (t27 != -127LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x249 = UINT32_MAX;
	uint64_t x251 = 58LLU;
	static int64_t x252 = INT64_MIN;
	volatile uint64_t t28 = 3783883072050903558LLU;

	t28 = (x249/(x250*(x251<=x252)));

	if (t28 != 2LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x257 = -1;
	int16_t x258 = -61;
	volatile int32_t x259 = 2640;
	uint16_t x260 = UINT16_MAX;
	int32_t t29 = -10;

	t29 = (x257/(x258*(x259<=x260)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x270 = 237885696U;
	int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MAX;
	uint32_t t30 = 1864679U;

	t30 = (x269/(x270*(x271<=x272)));

	if (t30 != 18U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x274 = 67U;
	volatile int8_t x275 = -1;
	int8_t x276 = -1;
	int32_t t31 = -6376456;

	t31 = (x273/(x274*(x275<=x276)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x277 = INT32_MIN;
	volatile uint64_t x278 = 8164478514LLU;
	uint16_t x279 = 118U;
	uint32_t x280 = 30940792U;
	uint64_t t32 = 2054LLU;

	t32 = (x277/(x278*(x279<=x280)));

	if (t32 != 2259390362LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x281 = INT64_MAX;
	volatile int16_t x282 = -1;

	t33 = (x281/(x282*(x283<=x284)));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x294 = INT32_MIN;
	uint16_t x295 = 3U;
	volatile uint8_t x296 = 45U;
	int32_t t34 = -11235588;

	t34 = (x293/(x294*(x295<=x296)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x305 = UINT8_MAX;
	volatile int64_t x306 = -1LL;
	uint32_t x307 = 4092U;
	volatile int64_t t35 = 16970235866LL;

	t35 = (x305/(x306*(x307<=x308)));

	if (t35 != -255LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x313 = 1;
	int16_t x314 = 1292;
	uint32_t x315 = 92802955U;
	static int32_t x316 = INT32_MIN;

	t36 = (x313/(x314*(x315<=x316)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x329 = 113566776444670687LLU;
	uint16_t x330 = UINT16_MAX;
	int32_t x331 = -678114648;
	int16_t x332 = -1;
	volatile uint64_t t37 = 8227627845170LLU;

	t37 = (x329/(x330*(x331<=x332)));

	if (t37 != 1732917928506LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x333 = 47U;
	int32_t x334 = INT32_MIN;
	volatile int32_t x335 = INT32_MIN;
	volatile int32_t t38 = -224033808;

	t38 = (x333/(x334*(x335<=x336)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x342 = 7438749U;
	volatile uint8_t x343 = 67U;
	volatile uint32_t x344 = 114893U;
	volatile int64_t t39 = 186804922991719LL;

	t39 = (x341/(x342*(x343<=x344)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x349 = INT32_MIN;
	int32_t x351 = INT32_MIN;
	int8_t x352 = -1;

	t40 = (x349/(x350*(x351<=x352)));

	if (t40 != -8421504) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x357 = UINT8_MAX;
	volatile int64_t x359 = -1LL;
	uint8_t x360 = 28U;
	static int32_t t41 = -5597329;

	t41 = (x357/(x358*(x359<=x360)));

	if (t41 != -255) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x365 = INT64_MAX;
	int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = 7580U;
	volatile int64_t t42 = -38140LL;

	t42 = (x365/(x366*(x367<=x368)));

	if (t42 != -4294967295LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x369 = 304;
	int64_t x370 = -56408452498710LL;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = UINT16_MAX;
	int64_t t43 = 7138656455134LL;

	t43 = (x369/(x370*(x371<=x372)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x381 = INT64_MAX;
	int16_t x382 = -1;
	volatile int8_t x383 = INT8_MAX;
	uint32_t x384 = 399144598U;

	t44 = (x381/(x382*(x383<=x384)));

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x386 = INT8_MAX;
	uint16_t x387 = 91U;

	t45 = (x385/(x386*(x387<=x388)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x389 = -1;
	int16_t x390 = 1;
	static uint8_t x392 = 3U;

	t46 = (x389/(x390*(x391<=x392)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x393 = 1U;
	int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MIN;
	int16_t x396 = -1;
	uint32_t t47 = 1U;

	t47 = (x393/(x394*(x395<=x396)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x401 = 6999U;
	static uint32_t x402 = 127540U;
	static uint32_t x403 = 2113645361U;
	int32_t x404 = INT32_MAX;
	uint32_t t48 = 4803U;

	t48 = (x401/(x402*(x403<=x404)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x405 = INT16_MIN;
	volatile uint32_t x406 = 4227958U;
	static volatile uint64_t x407 = UINT64_MAX;
	int8_t x408 = -1;

	t49 = (x405/(x406*(x407<=x408)));

	if (t49 != 1015U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x413 = 871902264;
	int16_t x414 = -1;
	uint64_t x416 = UINT64_MAX;

	t50 = (x413/(x414*(x415<=x416)));

	if (t50 != -871902264) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x418 = UINT8_MAX;
	volatile int16_t x420 = INT16_MAX;
	volatile int32_t t51 = 5261444;

	t51 = (x417/(x418*(x419<=x420)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x421 = 1255U;
	int16_t x423 = INT16_MIN;
	uint16_t x424 = 1296U;
	volatile uint64_t t52 = 1149759LLU;

	t52 = (x421/(x422*(x423<=x424)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x425 = INT32_MIN;
	static int16_t x426 = INT16_MIN;
	int16_t x428 = -1;
	int32_t t53 = 51527214;

	t53 = (x425/(x426*(x427<=x428)));

	if (t53 != 65536) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x431 = INT8_MIN;
	volatile int8_t x432 = INT8_MAX;
	static volatile uint64_t t54 = 5709LLU;

	t54 = (x429/(x430*(x431<=x432)));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x433 = INT16_MIN;
	int8_t x434 = 13;
	int32_t x435 = -454345002;
	static int32_t t55 = -109069;

	t55 = (x433/(x434*(x435<=x436)));

	if (t55 != -2520) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	int8_t x447 = 1;
	uint32_t x448 = 977732430U;
	int32_t t56 = 396931;

	t56 = (x445/(x446*(x447<=x448)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x453 = UINT64_MAX;
	int64_t x454 = INT64_MIN;
	int16_t x455 = INT16_MIN;
	uint64_t t57 = 1LLU;

	t57 = (x453/(x454*(x455<=x456)));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x481 = -1;
	uint16_t x482 = UINT16_MAX;
	volatile uint16_t x484 = 13601U;
	static volatile int32_t t58 = -119;

	t58 = (x481/(x482*(x483<=x484)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x485 = 3238257286LLU;
	int8_t x486 = -46;
	static volatile uint64_t x488 = UINT64_MAX;
	volatile uint64_t t59 = 145260049800299021LLU;

	t59 = (x485/(x486*(x487<=x488)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x510 = 11306U;
	int64_t x511 = INT64_MIN;
	uint16_t x512 = 31385U;
	int64_t t60 = 5760638124006773LL;

	t60 = (x509/(x510*(x511<=x512)));

	if (t60 != 1174711LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x521 = 112933U;
	int64_t x522 = 30195LL;
	uint64_t x523 = 538667LLU;
	int32_t x524 = 11645005;

	t61 = (x521/(x522*(x523<=x524)));

	if (t61 != 3LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x537 = 470U;
	volatile int16_t x538 = 522;
	uint64_t x539 = 4502LLU;
	volatile int32_t t62 = -109;

	t62 = (x537/(x538*(x539<=x540)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x541 = -13513;
	volatile int64_t x542 = INT64_MAX;
	int64_t x543 = -327LL;
	volatile uint32_t x544 = UINT32_MAX;
	volatile int64_t t63 = -203477702789243LL;

	t63 = (x541/(x542*(x543<=x544)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x545 = 532305698440812LLU;
	static uint64_t x546 = 582481352361995LLU;
	static uint32_t x547 = UINT32_MAX;
	static int8_t x548 = -1;
	uint64_t t64 = 35442LLU;

	t64 = (x545/(x546*(x547<=x548)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x555 = -3140749575LL;

	t65 = (x553/(x554*(x555<=x556)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x558 = UINT16_MAX;
	int16_t x559 = 0;
	int32_t t66 = -1;

	t66 = (x557/(x558*(x559<=x560)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x562 = -1;
	volatile int32_t x563 = INT32_MIN;
	uint64_t x564 = UINT64_MAX;
	volatile int32_t t67 = 2465;

	t67 = (x561/(x562*(x563<=x564)));

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x565 = -1;
	uint32_t x566 = 520447627U;
	int16_t x567 = -1700;
	uint32_t t68 = 16138U;

	t68 = (x565/(x566*(x567<=x568)));

	if (t68 != 8U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x569 = INT16_MIN;
	int64_t x570 = INT64_MIN;
	static uint64_t x572 = UINT64_MAX;
	volatile int64_t t69 = -17199334270745LL;

	t69 = (x569/(x570*(x571<=x572)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x573 = INT16_MIN;
	int16_t x574 = INT16_MAX;
	uint64_t x575 = 11LLU;
	volatile int32_t t70 = 7165511;

	t70 = (x573/(x574*(x575<=x576)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x585 = INT64_MIN;
	volatile int32_t x586 = INT32_MIN;
	volatile int32_t x587 = 2994460;
	static volatile int64_t t71 = 1219680280239869378LL;

	t71 = (x585/(x586*(x587<=x588)));

	if (t71 != 4294967296LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x593 = 89U;
	static int32_t x594 = -951;
	volatile int32_t x596 = INT32_MAX;
	int32_t t72 = -77;

	t72 = (x593/(x594*(x595<=x596)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x597 = 1;
	uint16_t x598 = 20U;
	volatile int8_t x599 = INT8_MAX;
	static uint8_t x600 = UINT8_MAX;
	int32_t t73 = 495;

	t73 = (x597/(x598*(x599<=x600)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x613 = -21;
	volatile int16_t x614 = INT16_MIN;
	volatile uint16_t x615 = 0U;
	uint8_t x616 = UINT8_MAX;
	int32_t t74 = -57;

	t74 = (x613/(x614*(x615<=x616)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x617 = INT8_MIN;
	static uint32_t x619 = 7186U;
	int16_t x620 = INT16_MIN;
	static volatile int32_t t75 = -4450;

	t75 = (x617/(x618*(x619<=x620)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x621 = 47U;
	static int8_t x622 = INT8_MIN;
	uint8_t x623 = 58U;

	t76 = (x621/(x622*(x623<=x624)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x625 = -85010922;
	int8_t x626 = INT8_MIN;
	int32_t t77 = -29339;

	t77 = (x625/(x626*(x627<=x628)));

	if (t77 != 664147) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x641 = INT16_MAX;
	int16_t x642 = INT16_MAX;
	int32_t t78 = -161;

	t78 = (x641/(x642*(x643<=x644)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x645 = INT32_MAX;
	uint16_t x646 = 1685U;
	volatile int32_t x647 = 0;
	volatile uint32_t x648 = UINT32_MAX;
	volatile int32_t t79 = 6;

	t79 = (x645/(x646*(x647<=x648)));

	if (t79 != 1274471) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x653 = -1;
	int8_t x654 = INT8_MIN;
	int32_t x655 = INT32_MIN;
	int32_t x656 = -1;

	t80 = (x653/(x654*(x655<=x656)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x657 = INT64_MAX;
	int64_t x658 = -8399702367347217LL;
	int16_t x659 = INT16_MIN;
	int16_t x660 = -1;
	int64_t t81 = 69889122687520LL;

	t81 = (x657/(x658*(x659<=x660)));

	if (t81 != -1098LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x661 = 4227U;
	int64_t x662 = 3LL;
	volatile int32_t x663 = INT32_MIN;
	int64_t t82 = 23938LL;

	t82 = (x661/(x662*(x663<=x664)));

	if (t82 != 1409LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x681 = INT16_MIN;
	int32_t x683 = -7293;
	int8_t x684 = INT8_MIN;
	uint32_t t83 = 32U;

	t83 = (x681/(x682*(x683<=x684)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x686 = 258817272760LLU;
	int8_t x687 = INT8_MIN;
	int64_t x688 = -1LL;
	uint64_t t84 = 37LLU;

	t84 = (x685/(x686*(x687<=x688)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x701 = 6U;
	int64_t x703 = INT64_MAX;
	int32_t t85 = -768927;

	t85 = (x701/(x702*(x703<=x704)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x709 = UINT64_MAX;
	int8_t x710 = 33;
	int8_t x711 = -4;
	uint16_t x712 = UINT16_MAX;
	static uint64_t t86 = 150849LLU;

	t86 = (x709/(x710*(x711<=x712)));

	if (t86 != 558992244657865200LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x725 = 26U;
	int32_t x726 = -1;
	uint32_t x727 = UINT32_MAX;
	int32_t x728 = -1;
	volatile int32_t t87 = -159477505;

	t87 = (x725/(x726*(x727<=x728)));

	if (t87 != -26) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x729 = UINT8_MAX;
	int64_t x730 = INT64_MAX;
	int16_t x731 = INT16_MIN;
	int64_t x732 = -1LL;
	static int64_t t88 = -2065415639703058966LL;

	t88 = (x729/(x730*(x731<=x732)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x741 = 535U;
	uint8_t x742 = 33U;
	int8_t x743 = INT8_MIN;
	int8_t x744 = -17;
	static volatile int32_t t89 = 29029;

	t89 = (x741/(x742*(x743<=x744)));

	if (t89 != 16) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x749 = INT64_MIN;
	int32_t x751 = INT32_MIN;
	uint32_t x752 = UINT32_MAX;
	int64_t t90 = -46954LL;

	t90 = (x749/(x750*(x751<=x752)));

	if (t90 != -821235332516LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x757 = 631543428101810LLU;
	int8_t x758 = INT8_MAX;
	int16_t x759 = -45;
	uint8_t x760 = 51U;
	static uint64_t t91 = 140716338919LLU;

	t91 = (x757/(x758*(x759<=x760)));

	if (t91 != 4972782898439LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x781 = 926819331;
	int32_t x782 = -13;
	static int32_t x783 = -1;
	int32_t x784 = 1877;

	t92 = (x781/(x782*(x783<=x784)));

	if (t92 != -71293794) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x793 = INT32_MIN;
	int8_t x794 = INT8_MAX;
	uint16_t x795 = 2131U;
	static volatile int32_t t93 = -2616060;

	t93 = (x793/(x794*(x795<=x796)));

	if (t93 != -16909320) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x797 = -1;
	int32_t x799 = INT32_MIN;
	static uint32_t x800 = UINT32_MAX;
	static volatile int32_t t94 = 15;

	t94 = (x797/(x798*(x799<=x800)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x802 = 417U;
	static int64_t x803 = 1520631988LL;
	int64_t x804 = INT64_MAX;
	uint32_t t95 = 16408522U;

	t95 = (x801/(x802*(x803<=x804)));

	if (t95 != 78U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x805 = 8082LL;
	int8_t x806 = INT8_MIN;
	int32_t x807 = 6;
	uint32_t x808 = UINT32_MAX;
	volatile int64_t t96 = 15002LL;

	t96 = (x805/(x806*(x807<=x808)));

	if (t96 != -63LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x813 = UINT64_MAX;
	int64_t x815 = INT64_MIN;
	uint32_t x816 = UINT32_MAX;
	uint64_t t97 = 25590LLU;

	t97 = (x813/(x814*(x815<=x816)));

	if (t97 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x821 = 195U;
	uint64_t x823 = 14LLU;
	int16_t x824 = INT16_MIN;
	uint32_t t98 = 2U;

	t98 = (x821/(x822*(x823<=x824)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x825 = 6;
	static int16_t x826 = -1;
	static int16_t x827 = -1;
	static int32_t t99 = 2;

	t99 = (x825/(x826*(x827<=x828)));

	if (t99 != -6) { NG(); } else { ; }
	
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

