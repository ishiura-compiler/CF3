#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x17 = UINT32_MAX;
static uint32_t t0 = 0U;
volatile int8_t x28 = -1;
uint32_t x33 = 62829653U;
volatile int8_t x34 = INT8_MAX;
int16_t x41 = 3061;
int64_t x42 = INT64_MIN;
volatile int32_t t6 = -37228951;
uint64_t t7 = 1000905LLU;
int32_t x65 = INT32_MAX;
uint16_t x92 = UINT16_MAX;
volatile uint32_t x111 = UINT32_MAX;
uint32_t t11 = 2589U;
uint64_t x114 = 1720908193566694LLU;
uint64_t x148 = 3708LLU;
static volatile int64_t x155 = -1LL;
static int64_t x156 = INT64_MIN;
uint8_t x169 = 1U;
volatile int64_t t18 = -619LL;
static int64_t x177 = 28917LL;
static volatile int64_t t19 = -189318935LL;
int16_t x189 = 326;
int8_t x190 = 1;
uint32_t x199 = UINT32_MAX;
uint16_t x209 = 2U;
static int32_t x210 = 3;
int64_t x214 = -1LL;
int64_t x216 = INT64_MIN;
int32_t x225 = INT32_MAX;
static int64_t t26 = 3256895141129LL;
int32_t x240 = INT32_MIN;
uint8_t x251 = UINT8_MAX;
static volatile int64_t t28 = 4306441608110LL;
int32_t x253 = INT32_MIN;
int64_t x255 = 532620LL;
static volatile int32_t x271 = INT32_MAX;
volatile uint64_t x277 = 331808998LLU;
uint64_t t33 = 33655737LLU;
int64_t x309 = INT64_MIN;
int8_t x313 = -1;
volatile int64_t x327 = -1LL;
int16_t x345 = INT16_MIN;
volatile int32_t t38 = -7900133;
int64_t x359 = -1LL;
int64_t t40 = 317421145313239LL;
uint64_t x366 = UINT64_MAX;
static uint32_t t42 = 486287035U;
static int32_t x387 = -1;
volatile uint64_t x397 = 1693759933479319388LLU;
volatile uint8_t x398 = UINT8_MAX;
uint64_t x407 = 43821542250LLU;
int16_t x408 = INT16_MIN;
volatile int32_t t47 = 0;
static uint64_t x421 = 63005973321326LLU;
static uint8_t x422 = UINT8_MAX;
int8_t x424 = INT8_MIN;
uint64_t t49 = 11696318430LLU;
int32_t x426 = INT32_MIN;
uint16_t x429 = 2U;
volatile int64_t x447 = 358033838062LL;
static uint16_t x448 = UINT16_MAX;
int32_t t52 = -13;
static uint16_t x459 = 5743U;
uint32_t x460 = 147573468U;
uint64_t t54 = 185681065403406187LLU;
volatile int8_t x461 = -1;
int16_t x463 = -1;
uint64_t x464 = 14499307680476465LLU;
volatile int64_t x472 = -182234136783LL;
int32_t t58 = 7;
uint16_t x530 = 2U;
static volatile int32_t x532 = 6835;
static volatile int64_t x566 = -639191825861LL;
uint16_t x567 = 11U;
static uint32_t x577 = UINT32_MAX;
volatile int64_t t67 = -7LL;
int32_t x600 = 67495307;
volatile int32_t t69 = 9;
static int64_t x627 = 3678585LL;
volatile int32_t t72 = 48744381;
volatile int16_t x630 = INT16_MIN;
volatile int64_t x635 = INT64_MIN;
uint64_t x637 = 1LLU;
uint16_t x639 = UINT16_MAX;
int32_t x640 = -62174602;
static volatile uint64_t t75 = 15717408152080LLU;
int8_t x647 = 1;
static int16_t x672 = INT16_MIN;
volatile int64_t t80 = -30699382994434892LL;
int64_t x691 = INT64_MAX;
int64_t t82 = -4043113530618088911LL;
int64_t x698 = INT64_MIN;
int64_t t85 = -2712872783289LL;
static int32_t x713 = INT32_MIN;
volatile int8_t x729 = INT8_MIN;
int8_t x742 = 0;
int64_t x744 = -1LL;
int8_t x747 = 0;
volatile uint32_t t93 = 939946099U;
int16_t x782 = -1;
uint16_t x783 = 180U;
int64_t x790 = INT64_MIN;
uint64_t t97 = 93392LLU;
uint8_t x806 = 2U;
static int16_t x819 = 4;
int32_t t99 = 492;


void f0(void) {
	int16_t x18 = 0;
	uint32_t x19 = 660699473U;
	int32_t x20 = INT32_MAX;

	t0 = ((x17/(x18<=x19))%x20);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x21 = 1;
	int32_t x22 = INT32_MIN;
	int16_t x23 = -2545;
	volatile int8_t x24 = 19;
	int32_t t1 = 116;

	t1 = ((x21/(x22<=x23))%x24);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x25 = -12264255;
	int32_t x26 = INT32_MIN;
	static int32_t x27 = INT32_MIN;
	int32_t t2 = 15248;

	t2 = ((x25/(x26<=x27))%x28);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x29 = 2865158726LL;
	int16_t x30 = INT16_MIN;
	int32_t x31 = -1;
	int8_t x32 = -15;
	int64_t t3 = -330983021LL;

	t3 = ((x29/(x30<=x31))%x32);

	if (t3 != 11LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x35 = 162;
	static int32_t x36 = INT32_MIN;
	static volatile uint32_t t4 = 173U;

	t4 = ((x33/(x34<=x35))%x36);

	if (t4 != 62829653U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x43 = INT8_MIN;
	static uint64_t x44 = 480879LLU;
	static uint64_t t5 = 446LLU;

	t5 = ((x41/(x42<=x43))%x44);

	if (t5 != 3061LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x45 = INT32_MIN;
	static int64_t x46 = 1LL;
	uint8_t x47 = UINT8_MAX;
	int8_t x48 = 54;

	t6 = ((x45/(x46<=x47))%x48);

	if (t6 != -38) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x49 = 1LLU;
	int64_t x50 = INT64_MIN;
	uint8_t x51 = 5U;
	static uint8_t x52 = UINT8_MAX;

	t7 = ((x49/(x50<=x51))%x52);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x66 = -267729;
	static int32_t x67 = INT32_MAX;
	int64_t x68 = INT64_MAX;
	int64_t t8 = 27529275259885645LL;

	t8 = ((x65/(x66<=x67))%x68);

	if (t8 != 2147483647LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x85 = -5;
	static uint8_t x86 = UINT8_MAX;
	int16_t x87 = 5843;
	static uint64_t x88 = UINT64_MAX;
	volatile uint64_t t9 = 1847693768548631LLU;

	t9 = ((x85/(x86<=x87))%x88);

	if (t9 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x89 = INT32_MIN;
	uint32_t x90 = 53U;
	int8_t x91 = -1;
	volatile int32_t t10 = -72021;

	t10 = ((x89/(x90<=x91))%x92);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x109 = UINT32_MAX;
	uint8_t x110 = 1U;
	static int16_t x112 = -16;

	t11 = ((x109/(x110<=x111))%x112);

	if (t11 != 15U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x113 = INT64_MIN;
	int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MAX;
	static int64_t t12 = -7337797021666895LL;

	t12 = ((x113/(x114<=x115))%x116);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x117 = 18937;
	int8_t x118 = -1;
	uint16_t x119 = 58U;
	uint32_t x120 = UINT32_MAX;
	uint32_t t13 = 81866U;

	t13 = ((x117/(x118<=x119))%x120);

	if (t13 != 18937U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x129 = -1;
	int32_t x130 = INT32_MIN;
	uint8_t x131 = UINT8_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t14 = 1021211932135433480LLU;

	t14 = ((x129/(x130<=x131))%x132);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x145 = 100U;
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	uint64_t t15 = 4339750LLU;

	t15 = ((x145/(x146<=x147))%x148);

	if (t15 != 100LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int16_t x154 = -1;
	int64_t t16 = 0LL;

	t16 = ((x153/(x154<=x155))%x156);

	if (t16 != 255LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = 0;
	volatile int16_t x167 = 4;
	static volatile int32_t x168 = -1;
	int64_t t17 = 891LL;

	t17 = ((x165/(x166<=x167))%x168);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x170 = -1;
	static int8_t x171 = -1;
	volatile int64_t x172 = INT64_MIN;

	t18 = ((x169/(x170<=x171))%x172);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x178 = INT16_MAX;
	uint32_t x179 = 88045U;
	uint32_t x180 = UINT32_MAX;

	t19 = ((x177/(x178<=x179))%x180);

	if (t19 != 28917LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x185 = 1U;
	uint32_t x186 = 22775U;
	volatile int16_t x187 = -1;
	uint16_t x188 = UINT16_MAX;
	static volatile uint32_t t20 = 922394U;

	t20 = ((x185/(x186<=x187))%x188);

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x191 = 53;
	volatile uint16_t x192 = UINT16_MAX;
	static int32_t t21 = 16810;

	t21 = ((x189/(x190<=x191))%x192);

	if (t21 != 326) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x197 = INT16_MIN;
	uint8_t x198 = 1U;
	int64_t x200 = INT64_MIN;
	int64_t t22 = 7LL;

	t22 = ((x197/(x198<=x199))%x200);

	if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x211 = UINT8_MAX;
	int16_t x212 = -1;
	int32_t t23 = -534;

	t23 = ((x209/(x210<=x211))%x212);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x213 = 25757U;
	static volatile uint8_t x215 = UINT8_MAX;
	int64_t t24 = -410677497255844LL;

	t24 = ((x213/(x214<=x215))%x216);

	if (t24 != 25757LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x226 = 2;
	uint16_t x227 = 15U;
	volatile uint8_t x228 = 1U;
	static volatile int32_t t25 = -316;

	t25 = ((x225/(x226<=x227))%x228);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x229 = INT16_MAX;
	uint8_t x230 = 4U;
	uint32_t x231 = 130316U;
	int64_t x232 = INT64_MIN;

	t26 = ((x229/(x230<=x231))%x232);

	if (t26 != 32767LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x237 = -1;
	static int8_t x238 = -1;
	volatile int16_t x239 = -1;
	volatile int32_t t27 = 599296;

	t27 = ((x237/(x238<=x239))%x240);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x249 = 100U;
	int16_t x250 = INT16_MIN;
	int64_t x252 = INT64_MAX;

	t28 = ((x249/(x250<=x251))%x252);

	if (t28 != 100LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x254 = -1LL;
	int32_t x256 = -1;
	int32_t t29 = 176806;

	t29 = ((x253/(x254<=x255))%x256);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x269 = -92;
	static int32_t x270 = -16645968;
	uint32_t x272 = 390U;
	volatile uint32_t t30 = 168390U;

	t30 = ((x269/(x270<=x271))%x272);

	if (t30 != 164U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x273 = UINT64_MAX;
	int8_t x274 = 1;
	int64_t x275 = INT64_MAX;
	static uint64_t x276 = 26012258988LLU;
	uint64_t t31 = 7295822402LLU;

	t31 = ((x273/(x274<=x275))%x276);

	if (t31 != 1389811095LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x278 = 285704114LLU;
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = -7729411;
	uint64_t t32 = 3191140463620576311LLU;

	t32 = ((x277/(x278<=x279))%x280);

	if (t32 != 331808998LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x285 = 14219327594307029LLU;
	int32_t x286 = INT32_MIN;
	uint8_t x287 = UINT8_MAX;
	int16_t x288 = INT16_MAX;

	t33 = ((x285/(x286<=x287))%x288);

	if (t33 != 5486LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x301 = 1;
	int32_t x302 = -1;
	static int8_t x303 = INT8_MAX;
	uint8_t x304 = 1U;
	static volatile int32_t t34 = 4845;

	t34 = ((x301/(x302<=x303))%x304);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x310 = -1;
	uint32_t x311 = UINT32_MAX;
	int16_t x312 = INT16_MIN;
	volatile int64_t t35 = -990695LL;

	t35 = ((x309/(x310<=x311))%x312);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x314 = -1;
	int32_t x315 = INT32_MAX;
	int32_t x316 = INT32_MIN;
	volatile int32_t t36 = 288590;

	t36 = ((x313/(x314<=x315))%x316);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x325 = 510;
	int32_t x326 = -1978;
	static int16_t x328 = 382;
	static volatile int32_t t37 = -32055310;

	t37 = ((x325/(x326<=x327))%x328);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x346 = INT16_MIN;
	int32_t x347 = -1;
	uint8_t x348 = UINT8_MAX;

	t38 = ((x345/(x346<=x347))%x348);

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x349 = 22300U;
	static int16_t x350 = -1;
	int32_t x351 = 99717;
	int16_t x352 = -30;
	static volatile uint32_t t39 = 7818U;

	t39 = ((x349/(x350<=x351))%x352);

	if (t39 != 22300U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x357 = 22807168339191LL;
	int8_t x358 = -1;
	volatile int64_t x360 = 887247LL;

	t40 = ((x357/(x358<=x359))%x360);

	if (t40 != 654576LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x365 = INT8_MIN;
	volatile int64_t x367 = -1LL;
	int8_t x368 = -34;
	volatile int32_t t41 = 208910;

	t41 = ((x365/(x366<=x367))%x368);

	if (t41 != -26) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x373 = 3U;
	volatile int16_t x374 = INT16_MAX;
	volatile int32_t x375 = INT32_MAX;
	int32_t x376 = 24230220;

	t42 = ((x373/(x374<=x375))%x376);

	if (t42 != 3U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = INT8_MIN;
	int32_t x383 = -1;
	volatile int64_t x384 = INT64_MAX;
	volatile int64_t t43 = 353020420366645LL;

	t43 = ((x381/(x382<=x383))%x384);

	if (t43 != 4294967295LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x385 = UINT8_MAX;
	volatile int32_t x386 = -548;
	uint64_t x388 = 737367951358332245LLU;
	uint64_t t44 = 11LLU;

	t44 = ((x385/(x386<=x387))%x388);

	if (t44 != 255LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x393 = INT64_MAX;
	int32_t x394 = INT32_MIN;
	static int8_t x395 = -16;
	uint64_t x396 = 4402LLU;
	uint64_t t45 = 4435803615511LLU;

	t45 = ((x393/(x394<=x395))%x396);

	if (t45 != 1495LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x399 = INT16_MAX;
	int16_t x400 = 3;
	uint64_t t46 = 5LLU;

	t46 = ((x397/(x398<=x399))%x400);

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x405 = -143053;
	static volatile uint8_t x406 = UINT8_MAX;

	t47 = ((x405/(x406<=x407))%x408);

	if (t47 != -11981) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x417 = 29U;
	static volatile uint8_t x418 = UINT8_MAX;
	int32_t x419 = 513357;
	uint64_t x420 = 1249462145059756LLU;
	volatile uint64_t t48 = 1690LLU;

	t48 = ((x417/(x418<=x419))%x420);

	if (t48 != 29LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x423 = UINT16_MAX;

	t49 = ((x421/(x422<=x423))%x424);

	if (t49 != 63005973321326LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x425 = UINT64_MAX;
	int32_t x427 = INT32_MIN;
	int64_t x428 = -1LL;
	static volatile uint64_t t50 = 1169553416LLU;

	t50 = ((x425/(x426<=x427))%x428);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x430 = 4U;
	int32_t x431 = INT32_MAX;
	static int8_t x432 = INT8_MIN;
	int32_t t51 = 0;

	t51 = ((x429/(x430<=x431))%x432);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x445 = INT8_MAX;
	static int64_t x446 = -1LL;

	t52 = ((x445/(x446<=x447))%x448);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x453 = UINT16_MAX;
	int8_t x454 = INT8_MIN;
	int16_t x455 = -1;
	int32_t x456 = -1;
	volatile int32_t t53 = -5649;

	t53 = ((x453/(x454<=x455))%x456);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x457 = 5161956LLU;
	int32_t x458 = INT32_MIN;

	t54 = ((x457/(x458<=x459))%x460);

	if (t54 != 5161956LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x462 = -1;
	volatile uint64_t t55 = 276903450LLU;

	t55 = ((x461/(x462<=x463))%x464);

	if (t55 != 3624704143488135LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x465 = 9U;
	int32_t x466 = -12;
	uint8_t x467 = UINT8_MAX;
	static uint32_t x468 = 1U;
	volatile uint32_t t56 = 9070641U;

	t56 = ((x465/(x466<=x467))%x468);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x469 = INT16_MIN;
	static int64_t x470 = INT64_MIN;
	static volatile uint8_t x471 = 59U;
	volatile int64_t t57 = -634809LL;

	t57 = ((x469/(x470<=x471))%x472);

	if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x473 = -220;
	uint32_t x474 = 15862U;
	int32_t x475 = -2087;
	volatile int32_t x476 = INT32_MAX;

	t58 = ((x473/(x474<=x475))%x476);

	if (t58 != -220) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x485 = INT16_MIN;
	volatile uint64_t x486 = 340LLU;
	uint32_t x487 = UINT32_MAX;
	uint16_t x488 = 481U;
	volatile int32_t t59 = -843;

	t59 = ((x485/(x486<=x487))%x488);

	if (t59 != -60) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x517 = UINT8_MAX;
	int8_t x518 = INT8_MIN;
	static int32_t x519 = 25965601;
	uint64_t x520 = 81098LLU;
	uint64_t t60 = 931532LLU;

	t60 = ((x517/(x518<=x519))%x520);

	if (t60 != 255LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x529 = UINT8_MAX;
	int16_t x531 = INT16_MAX;
	int32_t t61 = -973979;

	t61 = ((x529/(x530<=x531))%x532);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x541 = INT8_MIN;
	static uint16_t x542 = 3914U;
	int32_t x543 = 12977;
	int64_t x544 = -910365595081562LL;
	int64_t t62 = 652269324473566LL;

	t62 = ((x541/(x542<=x543))%x544);

	if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x553 = INT64_MIN;
	int64_t x554 = INT64_MAX;
	uint64_t x555 = UINT64_MAX;
	int8_t x556 = 9;
	int64_t t63 = -61541LL;

	t63 = ((x553/(x554<=x555))%x556);

	if (t63 != -8LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x565 = 14U;
	static uint16_t x568 = 5U;
	volatile int32_t t64 = -648;

	t64 = ((x565/(x566<=x567))%x568);

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x569 = 67U;
	static uint32_t x570 = 619967U;
	static int64_t x571 = INT64_MAX;
	int64_t x572 = INT64_MIN;
	int64_t t65 = -13938634LL;

	t65 = ((x569/(x570<=x571))%x572);

	if (t65 != 67LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x578 = -1;
	uint32_t x579 = UINT32_MAX;
	int16_t x580 = -1;
	static volatile uint32_t t66 = 29653489U;

	t66 = ((x577/(x578<=x579))%x580);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x585 = -45410660895048755LL;
	uint16_t x586 = UINT16_MAX;
	uint16_t x587 = UINT16_MAX;
	uint8_t x588 = UINT8_MAX;

	t67 = ((x585/(x586<=x587))%x588);

	if (t67 != -65LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x593 = INT32_MIN;
	int16_t x594 = -1;
	uint8_t x595 = 27U;
	volatile uint8_t x596 = 15U;
	static volatile int32_t t68 = -5135125;

	t68 = ((x593/(x594<=x595))%x596);

	if (t68 != -8) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x597 = 188U;
	static uint16_t x598 = 1991U;
	volatile uint32_t x599 = 12564485U;

	t69 = ((x597/(x598<=x599))%x600);

	if (t69 != 188) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x601 = -1;
	volatile uint64_t x602 = 95294011539698553LLU;
	int64_t x603 = INT64_MIN;
	int16_t x604 = INT16_MIN;
	volatile int32_t t70 = -15;

	t70 = ((x601/(x602<=x603))%x604);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x617 = -1;
	uint32_t x618 = UINT32_MAX;
	uint64_t x619 = UINT64_MAX;
	uint8_t x620 = UINT8_MAX;
	int32_t t71 = 0;

	t71 = ((x617/(x618<=x619))%x620);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x625 = INT16_MAX;
	uint16_t x626 = 1929U;
	uint8_t x628 = UINT8_MAX;

	t72 = ((x625/(x626<=x627))%x628);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x629 = -1LL;
	static int64_t x631 = 1024865670552707LL;
	uint16_t x632 = 18399U;
	static volatile int64_t t73 = 28LL;

	t73 = ((x629/(x630<=x631))%x632);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x633 = 25767;
	int64_t x634 = INT64_MIN;
	static uint64_t x636 = UINT64_MAX;
	volatile uint64_t t74 = 1161226780154178558LLU;

	t74 = ((x633/(x634<=x635))%x636);

	if (t74 != 25767LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x638 = INT8_MAX;

	t75 = ((x637/(x638<=x639))%x640);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x641 = INT16_MAX;
	int8_t x642 = INT8_MIN;
	int8_t x643 = INT8_MIN;
	static volatile int8_t x644 = INT8_MAX;
	volatile int32_t t76 = -893052051;

	t76 = ((x641/(x642<=x643))%x644);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x645 = INT64_MAX;
	int8_t x646 = 1;
	volatile uint8_t x648 = 12U;
	int64_t t77 = -875LL;

	t77 = ((x645/(x646<=x647))%x648);

	if (t77 != 7LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x657 = 9U;
	volatile int8_t x658 = -1;
	int8_t x659 = INT8_MAX;
	int8_t x660 = INT8_MIN;
	static int32_t t78 = -2;

	t78 = ((x657/(x658<=x659))%x660);

	if (t78 != 9) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x665 = 817;
	volatile int8_t x666 = -1;
	uint64_t x667 = UINT64_MAX;
	int64_t x668 = 57659015LL;
	volatile int64_t t79 = 4733267203LL;

	t79 = ((x665/(x666<=x667))%x668);

	if (t79 != 817LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x669 = -5095279105LL;
	volatile uint16_t x670 = UINT16_MAX;
	static volatile uint64_t x671 = 3398033LLU;

	t80 = ((x669/(x670<=x671))%x672);

	if (t80 != -18945LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x681 = -1;
	int16_t x682 = 469;
	uint16_t x683 = 13502U;
	uint8_t x684 = 115U;
	static int32_t t81 = -417054219;

	t81 = ((x681/(x682<=x683))%x684);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x689 = INT64_MAX;
	uint64_t x690 = 4370628862698LLU;
	uint32_t x692 = 888538092U;

	t82 = ((x689/(x690<=x691))%x692);

	if (t82 != 83096215LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x697 = 109813U;
	static int32_t x699 = -1;
	int32_t x700 = 108553086;
	uint32_t t83 = 33520830U;

	t83 = ((x697/(x698<=x699))%x700);

	if (t83 != 109813U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x705 = 0U;
	static int64_t x706 = INT64_MIN;
	volatile int32_t x707 = INT32_MIN;
	uint64_t x708 = 14600224922734LLU;
	static volatile uint64_t t84 = 303918161640752115LLU;

	t84 = ((x705/(x706<=x707))%x708);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x709 = -1;
	static int16_t x710 = -1;
	static uint32_t x711 = UINT32_MAX;
	int64_t x712 = 437182LL;

	t85 = ((x709/(x710<=x711))%x712);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x714 = INT16_MAX;
	int16_t x715 = INT16_MAX;
	uint32_t x716 = 847735U;
	uint32_t t86 = 1353904U;

	t86 = ((x713/(x714<=x715))%x716);

	if (t86 != 170893U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x721 = INT16_MAX;
	int32_t x722 = -1;
	uint8_t x723 = 2U;
	int16_t x724 = -2;
	int32_t t87 = -11808;

	t87 = ((x721/(x722<=x723))%x724);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x725 = -5;
	uint16_t x726 = UINT16_MAX;
	static volatile uint16_t x727 = UINT16_MAX;
	int64_t x728 = -1LL;
	volatile int64_t t88 = 6420551LL;

	t88 = ((x725/(x726<=x727))%x728);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x730 = -1LL;
	int32_t x731 = -1;
	volatile uint64_t x732 = UINT64_MAX;
	volatile uint64_t t89 = 30340LLU;

	t89 = ((x729/(x730<=x731))%x732);

	if (t89 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x733 = 4U;
	static uint32_t x734 = 28109U;
	uint32_t x735 = 6196010U;
	int16_t x736 = -478;
	static volatile int32_t t90 = -2287;

	t90 = ((x733/(x734<=x735))%x736);

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x741 = UINT16_MAX;
	int64_t x743 = 72296LL;
	int64_t t91 = 51250327519628077LL;

	t91 = ((x741/(x742<=x743))%x744);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x745 = INT64_MIN;
	volatile int16_t x746 = INT16_MIN;
	int16_t x748 = INT16_MAX;
	int64_t t92 = 21LL;

	t92 = ((x745/(x746<=x747))%x748);

	if (t92 != -8LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x749 = -1;
	static int32_t x750 = -1;
	int16_t x751 = -1;
	uint32_t x752 = 1U;

	t93 = ((x749/(x750<=x751))%x752);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x757 = INT32_MIN;
	int64_t x758 = -65630LL;
	uint8_t x759 = 114U;
	static int16_t x760 = -1;
	int32_t t94 = 0;

	t94 = ((x757/(x758<=x759))%x760);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x781 = INT16_MIN;
	int64_t x784 = INT64_MIN;
	int64_t t95 = -835049955905LL;

	t95 = ((x781/(x782<=x783))%x784);

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x789 = -9461;
	static int32_t x791 = -10;
	volatile uint8_t x792 = UINT8_MAX;
	int32_t t96 = -88095999;

	t96 = ((x789/(x790<=x791))%x792);

	if (t96 != -26) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x797 = -1;
	volatile int8_t x798 = INT8_MAX;
	static volatile int32_t x799 = INT32_MAX;
	uint64_t x800 = 7165770963LLU;

	t97 = ((x797/(x798<=x799))%x800);

	if (t97 != 3810546651LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x805 = INT64_MAX;
	volatile uint16_t x807 = 5U;
	volatile uint32_t x808 = 573684529U;
	int64_t t98 = -2125566039221591LL;

	t98 = ((x805/(x806<=x807))%x808);

	if (t98 != 143182277LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x817 = INT8_MIN;
	int8_t x818 = -3;
	int16_t x820 = INT16_MIN;

	t99 = ((x817/(x818<=x819))%x820);

	if (t99 != -128) { NG(); } else { ; }
	
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

