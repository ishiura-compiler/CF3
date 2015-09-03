#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x7 = 15U;
volatile int16_t x8 = -44;
uint64_t t0 = 350561412LLU;
uint64_t x14 = 223LLU;
int16_t x46 = -1;
volatile int8_t x52 = 1;
uint64_t x54 = 13242529976LLU;
volatile int32_t x55 = INT32_MIN;
uint16_t x63 = UINT16_MAX;
static volatile uint16_t x82 = UINT16_MAX;
int8_t x83 = -1;
volatile int16_t x109 = INT16_MIN;
int8_t x110 = 1;
int64_t x123 = -1LL;
uint8_t x147 = UINT8_MAX;
volatile uint64_t t14 = 242972381LLU;
static uint8_t x149 = UINT8_MAX;
int32_t x158 = -7065;
static uint8_t x162 = 24U;
int16_t x174 = INT16_MIN;
static int32_t x189 = INT32_MIN;
int32_t x203 = INT32_MAX;
uint8_t x208 = 13U;
uint32_t x232 = UINT32_MAX;
int32_t x239 = -1;
int32_t x243 = INT32_MIN;
static int8_t x247 = 28;
uint8_t x261 = 13U;
static int64_t x262 = -58030783286770LL;
volatile uint64_t x285 = 11LLU;
volatile int32_t x286 = 16982;
static volatile int64_t x296 = -1LL;
int32_t x301 = 6423189;
int8_t x302 = 9;
int16_t x310 = -2106;
uint8_t x320 = 6U;
volatile int8_t x327 = INT8_MIN;
uint8_t x328 = UINT8_MAX;
volatile int32_t t34 = -27872;
int32_t t35 = -60766;
uint8_t x342 = 8U;
uint64_t x344 = 1950464143839149LLU;
int32_t t36 = 8906;
volatile int32_t t38 = 2067381;
static volatile int32_t x370 = INT32_MIN;
static int32_t t40 = -3820322;
int16_t x375 = -1;
int16_t x407 = -11;
int16_t x415 = -1;
int8_t x416 = INT8_MAX;
uint8_t x424 = UINT8_MAX;
static uint8_t x439 = UINT8_MAX;
static int64_t x445 = INT64_MIN;
int16_t x446 = -1;
volatile int64_t t49 = INT64_MIN;
int16_t x461 = INT16_MIN;
uint32_t x464 = UINT32_MAX;
static volatile int8_t x465 = INT8_MIN;
volatile int16_t x470 = INT16_MAX;
int32_t t54 = -3;
int32_t x493 = INT32_MIN;
volatile int32_t x495 = 24880655;
static int16_t x498 = INT16_MIN;
volatile uint32_t t57 = 17632U;
uint64_t x505 = UINT64_MAX;
int16_t x509 = -1;
uint8_t x527 = 10U;
int32_t x530 = 1440015;
uint32_t x531 = UINT32_MAX;
volatile uint64_t x545 = 148008781721LLU;
volatile uint64_t t63 = 99579LLU;
int16_t x561 = INT16_MAX;
volatile int32_t x564 = INT32_MAX;
volatile int32_t x570 = -40933339;
static int8_t x571 = INT8_MAX;
int32_t x595 = INT32_MAX;
uint8_t x601 = UINT8_MAX;
volatile uint32_t t70 = 15052U;
static int32_t t71 = 171;
volatile int8_t x645 = 22;
uint32_t t73 = UINT32_MAX;
volatile int8_t x664 = INT8_MIN;
uint8_t x674 = UINT8_MAX;
uint32_t x679 = 53638679U;
int32_t x685 = INT32_MAX;
uint64_t x687 = 16LLU;
static volatile uint8_t x698 = 48U;
static volatile uint8_t x706 = UINT8_MAX;
static uint64_t x709 = UINT64_MAX;
int32_t x717 = INT32_MAX;
int8_t x720 = INT8_MIN;
int16_t x745 = -1;
int64_t x755 = -1665LL;
int64_t x764 = INT64_MIN;
static volatile uint64_t x768 = 122184667599958LLU;
volatile int32_t t88 = 6726;
static int32_t x769 = 495656337;
uint8_t x773 = 1U;
static int64_t t92 = INT64_MAX;
volatile int8_t x795 = INT8_MAX;
uint8_t x802 = UINT8_MAX;
int32_t x804 = INT32_MAX;
static uint8_t x822 = 84U;
uint16_t x823 = 21518U;
volatile int32_t t98 = 32647208;
uint16_t x864 = 0U;


void f0(void) {
	uint64_t x5 = 1066539490LLU;
	static volatile int16_t x6 = INT16_MIN;

	t0 = (x5/(x6<=(x7+x8)));

	if (t0 != 1066539490LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x13 = INT8_MAX;
	int64_t x15 = INT64_MIN;
	volatile int8_t x16 = 6;
	volatile int32_t t1 = 504927;

	t1 = (x13/(x14<=(x15+x16)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x33 = 63642139LL;
	int16_t x34 = -1;
	int16_t x35 = INT16_MAX;
	static int16_t x36 = INT16_MIN;
	int64_t t2 = 1LL;

	t2 = (x33/(x34<=(x35+x36)));

	if (t2 != 63642139LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x45 = INT32_MAX;
	int64_t x47 = 4135723477LL;
	int16_t x48 = 23;
	static volatile int32_t t3 = INT32_MAX;

	t3 = (x45/(x46<=(x47+x48)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	int32_t x51 = -349250392;
	static int32_t t4 = INT32_MIN;

	t4 = (x49/(x50<=(x51+x52)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x53 = UINT32_MAX;
	static uint8_t x56 = 0U;
	static volatile uint32_t t5 = UINT32_MAX;

	t5 = (x53/(x54<=(x55+x56)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x57 = INT16_MIN;
	int16_t x58 = -7576;
	int64_t x59 = INT64_MAX;
	int32_t x60 = 0;
	volatile int32_t t6 = -46;

	t6 = (x57/(x58<=(x59+x60)));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x61 = 7U;
	uint32_t x62 = 22546078U;
	uint64_t x64 = 32987306450566LLU;
	int32_t t7 = -58;

	t7 = (x61/(x62<=(x63+x64)));

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x65 = 21U;
	uint8_t x66 = 10U;
	volatile int64_t x67 = INT64_MAX;
	uint64_t x68 = 6LLU;
	volatile int32_t t8 = -2788;

	t8 = (x65/(x66<=(x67+x68)));

	if (t8 != 21) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x69 = INT16_MIN;
	static int32_t x70 = -1;
	int16_t x71 = -6136;
	volatile int64_t x72 = 18715005627209LL;
	int32_t t9 = 69880102;

	t9 = (x69/(x70<=(x71+x72)));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x81 = 1U;
	volatile int32_t x84 = INT32_MAX;
	static int32_t t10 = 1009;

	t10 = (x81/(x82<=(x83+x84)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x101 = UINT8_MAX;
	uint32_t x102 = 1373442U;
	uint64_t x103 = UINT64_MAX;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t11 = 0;

	t11 = (x101/(x102<=(x103+x104)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x111 = INT16_MIN;
	volatile uint64_t x112 = UINT64_MAX;
	int32_t t12 = 0;

	t12 = (x109/(x110<=(x111+x112)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x121 = -39;
	static uint64_t x122 = 3355053557132LLU;
	int32_t x124 = INT32_MIN;
	volatile int32_t t13 = -254;

	t13 = (x121/(x122<=(x123+x124)));

	if (t13 != -39) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x145 = 14LLU;
	static uint32_t x146 = 557991U;
	int32_t x148 = INT32_MIN;

	t14 = (x145/(x146<=(x147+x148)));

	if (t14 != 14LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x150 = UINT32_MAX;
	static volatile uint64_t x151 = 390266801073949LLU;
	uint32_t x152 = 3188853U;
	int32_t t15 = -1;

	t15 = (x149/(x150<=(x151+x152)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x157 = INT64_MAX;
	volatile int8_t x159 = 1;
	uint16_t x160 = 7184U;
	volatile int64_t t16 = INT64_MAX;

	t16 = (x157/(x158<=(x159+x160)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x161 = INT16_MIN;
	static int32_t x163 = 882;
	static volatile int8_t x164 = INT8_MAX;
	int32_t t17 = 1674367;

	t17 = (x161/(x162<=(x163+x164)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x173 = INT32_MAX;
	int64_t x175 = INT64_MAX;
	volatile int32_t x176 = -1;
	volatile int32_t t18 = INT32_MAX;

	t18 = (x173/(x174<=(x175+x176)));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x190 = 30508271;
	volatile uint64_t x191 = 287990744LLU;
	volatile uint64_t x192 = UINT64_MAX;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x189/(x190<=(x191+x192)));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x197 = UINT64_MAX;
	uint16_t x198 = 25U;
	uint16_t x199 = 1923U;
	uint32_t x200 = 7369U;
	uint64_t t20 = UINT64_MAX;

	t20 = (x197/(x198<=(x199+x200)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t21 = 12;

	t21 = (x201/(x202<=(x203+x204)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x205 = INT16_MAX;
	int64_t x206 = -54396203761159019LL;
	int16_t x207 = INT16_MIN;
	int32_t t22 = -90284;

	t22 = (x205/(x206<=(x207+x208)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MIN;
	static int16_t x215 = 205;
	uint32_t x216 = UINT32_MAX;
	static volatile int32_t t23 = -47;

	t23 = (x213/(x214<=(x215+x216)));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x229 = 55U;
	int16_t x230 = 5;
	volatile uint32_t x231 = 336737U;
	int32_t t24 = -220;

	t24 = (x229/(x230<=(x231+x232)));

	if (t24 != 55) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x238 = INT16_MIN;
	uint8_t x240 = UINT8_MAX;
	uint64_t t25 = UINT64_MAX;

	t25 = (x237/(x238<=(x239+x240)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x241 = 7U;
	int64_t x242 = INT64_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile uint32_t t26 = 4U;

	t26 = (x241/(x242<=(x243+x244)));

	if (t26 != 7U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x245 = -1518;
	int32_t x246 = INT32_MIN;
	static int32_t x248 = -1;
	volatile int32_t t27 = -4;

	t27 = (x245/(x246<=(x247+x248)));

	if (t27 != -1518) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x263 = -1;
	volatile int8_t x264 = INT8_MIN;
	static int32_t t28 = 44372;

	t28 = (x261/(x262<=(x263+x264)));

	if (t28 != 13) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MIN;
	static volatile uint64_t t29 = 11104688607875LLU;

	t29 = (x285/(x286<=(x287+x288)));

	if (t29 != 11LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x293 = INT8_MIN;
	volatile uint8_t x294 = UINT8_MAX;
	uint16_t x295 = 3517U;
	int32_t t30 = -584076151;

	t30 = (x293/(x294<=(x295+x296)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x303 = UINT16_MAX;
	volatile int8_t x304 = -1;
	volatile int32_t t31 = -19729542;

	t31 = (x301/(x302<=(x303+x304)));

	if (t31 != 6423189) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x309 = -21047390;
	static uint16_t x311 = 19U;
	uint8_t x312 = UINT8_MAX;
	static volatile int32_t t32 = 261813653;

	t32 = (x309/(x310<=(x311+x312)));

	if (t32 != -21047390) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x317 = 1057316298330715LL;
	volatile int8_t x318 = -1;
	int16_t x319 = -1;
	static volatile int64_t t33 = -222003938199LL;

	t33 = (x317/(x318<=(x319+x320)));

	if (t33 != 1057316298330715LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x325 = -1;
	volatile int32_t x326 = INT32_MIN;

	t34 = (x325/(x326<=(x327+x328)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x337 = UINT8_MAX;
	uint8_t x338 = UINT8_MAX;
	uint32_t x339 = 24250U;
	int8_t x340 = 2;

	t35 = (x337/(x338<=(x339+x340)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x341 = -2;
	int32_t x343 = INT32_MAX;

	t36 = (x341/(x342<=(x343+x344)));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x353 = 697656923811498LL;
	int64_t x354 = INT64_MIN;
	static uint32_t x355 = 1U;
	uint8_t x356 = UINT8_MAX;
	int64_t t37 = 3076017484705188506LL;

	t37 = (x353/(x354<=(x355+x356)));

	if (t37 != 697656923811498LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x361 = -27;
	int64_t x362 = INT64_MIN;
	static int64_t x363 = -1LL;
	static int16_t x364 = INT16_MIN;

	t38 = (x361/(x362<=(x363+x364)));

	if (t38 != -27) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x365 = UINT64_MAX;
	int16_t x366 = INT16_MIN;
	volatile int8_t x367 = INT8_MAX;
	int8_t x368 = -1;
	uint64_t t39 = UINT64_MAX;

	t39 = (x365/(x366<=(x367+x368)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x369 = INT16_MIN;
	int64_t x371 = 32271925942LL;
	uint32_t x372 = UINT32_MAX;

	t40 = (x369/(x370<=(x371+x372)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x373 = 15;
	volatile int16_t x374 = -3;
	int16_t x376 = 1;
	static int32_t t41 = -63826755;

	t41 = (x373/(x374<=(x375+x376)));

	if (t41 != 15) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x377 = INT8_MIN;
	static volatile int32_t x378 = INT32_MAX;
	uint64_t x379 = 7242LLU;
	volatile int64_t x380 = INT64_MIN;
	volatile int32_t t42 = -400942;

	t42 = (x377/(x378<=(x379+x380)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x381 = 3816U;
	static int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	int64_t x384 = 451925734887886LL;
	volatile uint32_t t43 = 2233U;

	t43 = (x381/(x382<=(x383+x384)));

	if (t43 != 3816U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x397 = INT64_MAX;
	static uint8_t x398 = 13U;
	static uint32_t x399 = UINT32_MAX;
	volatile int32_t x400 = INT32_MAX;
	int64_t t44 = INT64_MAX;

	t44 = (x397/(x398<=(x399+x400)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x405 = 33439235U;
	static uint32_t x406 = 3934573U;
	uint32_t x408 = 1U;
	volatile uint32_t t45 = 3962U;

	t45 = (x405/(x406<=(x407+x408)));

	if (t45 != 33439235U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x413 = -2697065;
	int64_t x414 = INT64_MIN;
	static volatile int32_t t46 = -7593213;

	t46 = (x413/(x414<=(x415+x416)));

	if (t46 != -2697065) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x421 = INT64_MAX;
	int32_t x422 = INT32_MIN;
	int32_t x423 = -1;
	static volatile int64_t t47 = INT64_MAX;

	t47 = (x421/(x422<=(x423+x424)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x437 = -1;
	int8_t x438 = 3;
	static int64_t x440 = 32856230780379LL;
	int32_t t48 = -15;

	t48 = (x437/(x438<=(x439+x440)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x447 = 0U;
	static int64_t x448 = INT64_MAX;

	t49 = (x445/(x446<=(x447+x448)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x453 = INT8_MIN;
	uint16_t x454 = 1669U;
	int32_t x455 = INT32_MIN;
	uint64_t x456 = 413752697830LLU;
	int32_t t50 = 2;

	t50 = (x453/(x454<=(x455+x456)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x462 = 1;
	static int32_t x463 = INT32_MAX;
	int32_t t51 = 0;

	t51 = (x461/(x462<=(x463+x464)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x466 = INT8_MIN;
	volatile uint8_t x467 = 7U;
	int8_t x468 = INT8_MIN;
	int32_t t52 = -2094241;

	t52 = (x465/(x466<=(x467+x468)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x469 = -1177;
	int32_t x471 = -5;
	uint32_t x472 = 147276201U;
	static volatile int32_t t53 = 310;

	t53 = (x469/(x470<=(x471+x472)));

	if (t53 != -1177) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x485 = 11085U;
	static int64_t x486 = -1LL;
	static int8_t x487 = INT8_MIN;
	int64_t x488 = 13461510328370LL;

	t54 = (x485/(x486<=(x487+x488)));

	if (t54 != 11085) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x494 = INT16_MIN;
	volatile uint8_t x496 = UINT8_MAX;
	static int32_t t55 = INT32_MIN;

	t55 = (x493/(x494<=(x495+x496)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x497 = INT32_MIN;
	static int32_t x499 = 227;
	uint8_t x500 = 4U;
	static int32_t t56 = INT32_MIN;

	t56 = (x497/(x498<=(x499+x500)));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x501 = 1121U;
	int32_t x502 = -7406;
	int64_t x503 = 1790252747020368447LL;
	volatile uint8_t x504 = 0U;

	t57 = (x501/(x502<=(x503+x504)));

	if (t57 != 1121U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x506 = INT32_MIN;
	uint8_t x507 = 1U;
	static volatile int8_t x508 = INT8_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (x505/(x506<=(x507+x508)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x510 = -1;
	uint16_t x511 = 4062U;
	int8_t x512 = INT8_MAX;
	int32_t t59 = 229351;

	t59 = (x509/(x510<=(x511+x512)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x513 = INT8_MAX;
	volatile int32_t x514 = INT32_MIN;
	volatile int16_t x515 = INT16_MAX;
	int8_t x516 = 1;
	volatile int32_t t60 = 96233027;

	t60 = (x513/(x514<=(x515+x516)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x525 = INT32_MIN;
	int8_t x526 = INT8_MAX;
	static int8_t x528 = INT8_MAX;
	int32_t t61 = INT32_MIN;

	t61 = (x525/(x526<=(x527+x528)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x529 = INT8_MAX;
	int8_t x532 = -12;
	volatile int32_t t62 = 345;

	t62 = (x529/(x530<=(x531+x532)));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x546 = INT64_MIN;
	volatile uint64_t x547 = UINT64_MAX;
	static int16_t x548 = -27;

	t63 = (x545/(x546<=(x547+x548)));

	if (t63 != 148008781721LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x553 = 9465835U;
	int16_t x554 = 1;
	uint64_t x555 = 207338754934628540LLU;
	int16_t x556 = INT16_MIN;
	uint32_t t64 = 206U;

	t64 = (x553/(x554<=(x555+x556)));

	if (t64 != 9465835U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x562 = INT16_MIN;
	volatile int8_t x563 = INT8_MIN;
	int32_t t65 = -34102772;

	t65 = (x561/(x562<=(x563+x564)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x569 = INT64_MAX;
	int16_t x572 = INT16_MIN;
	static int64_t t66 = INT64_MAX;

	t66 = (x569/(x570<=(x571+x572)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x573 = UINT8_MAX;
	int16_t x574 = INT16_MIN;
	int8_t x575 = -1;
	uint8_t x576 = 111U;
	int32_t t67 = 2032;

	t67 = (x573/(x574<=(x575+x576)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x593 = INT16_MIN;
	static int16_t x594 = INT16_MIN;
	int32_t x596 = -1;
	volatile int32_t t68 = -1;

	t68 = (x593/(x594<=(x595+x596)));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x602 = 283;
	static uint16_t x603 = UINT16_MAX;
	static uint64_t x604 = 2600151LLU;
	volatile int32_t t69 = -11131105;

	t69 = (x601/(x602<=(x603+x604)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x605 = 668353087U;
	int64_t x606 = INT64_MIN;
	uint16_t x607 = UINT16_MAX;
	static int16_t x608 = INT16_MAX;

	t70 = (x605/(x606<=(x607+x608)));

	if (t70 != 668353087U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x633 = -1;
	static int32_t x634 = -1838;
	uint8_t x635 = 13U;
	uint16_t x636 = 3253U;

	t71 = (x633/(x634<=(x635+x636)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x646 = 103316LLU;
	int16_t x647 = INT16_MIN;
	static int8_t x648 = 11;
	volatile int32_t t72 = 2011507;

	t72 = (x645/(x646<=(x647+x648)));

	if (t72 != 22) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x653 = UINT32_MAX;
	static uint32_t x654 = 1U;
	uint64_t x655 = UINT64_MAX;
	int16_t x656 = INT16_MIN;

	t73 = (x653/(x654<=(x655+x656)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x657 = INT8_MIN;
	static int8_t x658 = 4;
	volatile uint32_t x659 = 1212U;
	volatile uint8_t x660 = UINT8_MAX;
	int32_t t74 = 1;

	t74 = (x657/(x658<=(x659+x660)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x661 = 3602;
	static uint16_t x662 = 793U;
	static uint32_t x663 = 7576U;
	int32_t t75 = 0;

	t75 = (x661/(x662<=(x663+x664)));

	if (t75 != 3602) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x673 = 1;
	int16_t x675 = 1398;
	static uint8_t x676 = 57U;
	static int32_t t76 = -655840983;

	t76 = (x673/(x674<=(x675+x676)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x677 = INT32_MAX;
	uint16_t x678 = 7379U;
	volatile int8_t x680 = INT8_MIN;
	int32_t t77 = INT32_MAX;

	t77 = (x677/(x678<=(x679+x680)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x686 = 1;
	volatile int16_t x688 = INT16_MIN;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x685/(x686<=(x687+x688)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x697 = -127;
	int16_t x699 = INT16_MAX;
	int32_t x700 = -1;
	volatile int32_t t79 = 3473;

	t79 = (x697/(x698<=(x699+x700)));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x705 = UINT32_MAX;
	static int64_t x707 = -711LL;
	int64_t x708 = INT64_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = (x705/(x706<=(x707+x708)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x710 = UINT16_MAX;
	static uint64_t x711 = 1LLU;
	int64_t x712 = 4193008418924LL;
	uint64_t t81 = UINT64_MAX;

	t81 = (x709/(x710<=(x711+x712)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x718 = INT64_MIN;
	static volatile int8_t x719 = -1;
	int32_t t82 = INT32_MAX;

	t82 = (x717/(x718<=(x719+x720)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x721 = -1;
	uint32_t x722 = 6811984U;
	volatile uint64_t x723 = 13522632LLU;
	uint8_t x724 = UINT8_MAX;
	int32_t t83 = -34709;

	t83 = (x721/(x722<=(x723+x724)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x733 = UINT64_MAX;
	uint8_t x734 = 63U;
	uint32_t x735 = 3U;
	uint32_t x736 = 11502516U;
	static volatile uint64_t t84 = UINT64_MAX;

	t84 = (x733/(x734<=(x735+x736)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x746 = INT32_MIN;
	static volatile int16_t x747 = INT16_MAX;
	volatile uint8_t x748 = 2U;
	int32_t t85 = 3;

	t85 = (x745/(x746<=(x747+x748)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x753 = 524222234027348LL;
	static int8_t x754 = INT8_MIN;
	int16_t x756 = INT16_MAX;
	int64_t t86 = 3641260125LL;

	t86 = (x753/(x754<=(x755+x756)));

	if (t86 != 524222234027348LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x761 = INT16_MAX;
	static volatile int64_t x762 = INT64_MAX;
	static uint64_t x763 = UINT64_MAX;
	volatile int32_t t87 = -1;

	t87 = (x761/(x762<=(x763+x764)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x765 = -1;
	uint32_t x766 = 342U;
	int32_t x767 = -522880;

	t88 = (x765/(x766<=(x767+x768)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x770 = 58U;
	int64_t x771 = INT64_MAX;
	volatile uint64_t x772 = UINT64_MAX;
	volatile int32_t t89 = -6;

	t89 = (x769/(x770<=(x771+x772)));

	if (t89 != 495656337) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x774 = 7LLU;
	static volatile uint8_t x775 = UINT8_MAX;
	volatile int8_t x776 = 1;
	volatile int32_t t90 = -127;

	t90 = (x773/(x774<=(x775+x776)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x781 = 6991563830941680045LLU;
	static uint16_t x782 = 378U;
	volatile uint64_t x783 = 20991LLU;
	static uint16_t x784 = 15313U;
	volatile uint64_t t91 = 4251348795520773250LLU;

	t91 = (x781/(x782<=(x783+x784)));

	if (t91 != 6991563830941680045LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x785 = INT64_MAX;
	uint32_t x786 = 368049U;
	int64_t x787 = -1LL;
	int32_t x788 = INT32_MAX;

	t92 = (x785/(x786<=(x787+x788)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x789 = -4116;
	static int16_t x790 = -1;
	int16_t x791 = 1422;
	uint8_t x792 = UINT8_MAX;
	static volatile int32_t t93 = 3;

	t93 = (x789/(x790<=(x791+x792)));

	if (t93 != -4116) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x793 = INT8_MAX;
	int32_t x794 = INT32_MIN;
	uint16_t x796 = UINT16_MAX;
	volatile int32_t t94 = -713391926;

	t94 = (x793/(x794<=(x795+x796)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x801 = INT16_MIN;
	static uint64_t x803 = 2781035496711762LLU;
	volatile int32_t t95 = 1;

	t95 = (x801/(x802<=(x803+x804)));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x813 = -1;
	static int8_t x814 = 1;
	volatile int16_t x815 = INT16_MIN;
	static uint64_t x816 = 366104LLU;
	volatile int32_t t96 = -14;

	t96 = (x813/(x814<=(x815+x816)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x817 = 106U;
	uint8_t x818 = 90U;
	uint16_t x819 = UINT16_MAX;
	volatile uint16_t x820 = 25686U;
	volatile int32_t t97 = -976502;

	t97 = (x817/(x818<=(x819+x820)));

	if (t97 != 106) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x821 = -9;
	uint16_t x824 = 31614U;

	t98 = (x821/(x822<=(x823+x824)));

	if (t98 != -9) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x861 = INT32_MIN;
	int64_t x862 = 1LL;
	volatile uint32_t x863 = 1534722U;
	volatile int32_t t99 = INT32_MIN;

	t99 = (x861/(x862<=(x863+x864)));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

