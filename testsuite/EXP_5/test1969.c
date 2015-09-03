#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = -1;
int64_t x28 = 120604920280587419LL;
int32_t t3 = -657481;
int64_t x39 = -85400059225939LL;
int64_t x56 = 728729672768390LL;
uint64_t t10 = 55553985294135LLU;
int16_t x70 = INT16_MIN;
static uint64_t x72 = 2543883962187095794LLU;
volatile uint32_t t13 = 6U;
static int8_t x93 = INT8_MAX;
int16_t x96 = -1;
int8_t x127 = INT8_MIN;
static uint64_t x176 = 848295899500401294LLU;
int64_t x179 = INT64_MIN;
uint64_t x188 = 1LLU;
volatile int8_t x195 = INT8_MIN;
volatile int32_t t24 = 2400;
static int64_t x200 = -27177388944LL;
int8_t x202 = 15;
static int32_t x207 = INT32_MIN;
uint8_t x224 = 84U;
int64_t x235 = 97405515920LL;
int32_t t30 = -6095;
int64_t x253 = INT64_MAX;
volatile int16_t x264 = INT16_MAX;
uint16_t x265 = UINT16_MAX;
volatile int64_t x268 = INT64_MIN;
int64_t x269 = 4106727144LL;
uint32_t x272 = UINT32_MAX;
uint64_t x278 = 179443982253LLU;
uint32_t x280 = 0U;
int16_t x285 = 5;
int32_t t40 = 6436089;
volatile uint8_t x322 = 15U;
int32_t x336 = 754878844;
int32_t t46 = -106022056;
int8_t x376 = INT8_MAX;
uint16_t x388 = 6U;
volatile uint64_t x392 = UINT64_MAX;
uint8_t x404 = 7U;
volatile int64_t t53 = -1882454964LL;
uint64_t x410 = UINT64_MAX;
static uint32_t x423 = 187335792U;
int16_t x432 = INT16_MIN;
int32_t x435 = INT32_MIN;
uint8_t x445 = 20U;
int32_t t58 = -8;
int64_t x454 = -1LL;
static volatile int64_t x455 = -2142051LL;
int16_t x463 = -1;
int32_t t61 = 2415;
uint32_t x470 = 10256U;
int32_t x480 = INT32_MIN;
int16_t x481 = 0;
static int16_t x485 = 1;
uint8_t x493 = UINT8_MAX;
int16_t x494 = 14840;
static int16_t x500 = INT16_MIN;
int32_t x517 = 16067;
static volatile int32_t t69 = -839;
int32_t x531 = -1;
uint32_t x536 = UINT32_MAX;
volatile int32_t t71 = -866;
volatile uint64_t x537 = 65971599095LLU;
int32_t x543 = INT32_MIN;
int32_t t75 = -66877079;
volatile uint32_t x561 = UINT32_MAX;
volatile uint8_t x577 = UINT8_MAX;
static volatile int32_t t79 = 0;
uint64_t x589 = 475827228528LLU;
volatile int32_t x592 = -1;
uint64_t t80 = 2546LLU;
int32_t t81 = 36;
static int32_t x614 = -1;
int64_t x620 = INT64_MAX;
volatile int16_t x634 = INT16_MAX;
int32_t t85 = 51528163;
static int16_t x641 = INT16_MAX;
static int16_t x643 = -1;
volatile int32_t t86 = 48;
int16_t x645 = 372;
volatile uint8_t x657 = 42U;
int8_t x660 = 1;
uint64_t x669 = 207LLU;
uint8_t x695 = UINT8_MAX;
static uint64_t x702 = 27977494LLU;
volatile uint64_t x703 = 3112LLU;
volatile uint16_t x723 = 379U;
int32_t x724 = 11;
volatile int64_t x729 = INT64_MAX;


void f0(void) {
	uint16_t x13 = 678U;
	uint8_t x14 = UINT8_MAX;
	int8_t x16 = -7;
	int32_t t0 = 56241;

	t0 = (x13<<((x14|x15)<x16));

	if (t0 != 678) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = 57U;
	volatile uint64_t x22 = UINT64_MAX;
	volatile int16_t x23 = INT16_MAX;
	static int64_t x24 = -1LL;
	volatile int32_t t1 = -744;

	t1 = (x21<<((x22|x23)<x24));

	if (t1 != 57) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x25 = 21U;
	static int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MIN;
	volatile int32_t t2 = 22010261;

	t2 = (x25<<((x26|x27)<x28));

	if (t2 != 42) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x29 = 7;
	static int64_t x30 = INT64_MAX;
	static volatile uint64_t x31 = UINT64_MAX;
	volatile uint32_t x32 = 3670U;

	t3 = (x29<<((x30|x31)<x32));

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x33 = 15748U;
	int32_t x34 = INT32_MIN;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = -1;
	int32_t t4 = 60;

	t4 = (x33<<((x34|x35)<x36));

	if (t4 != 31496) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x37 = 1659U;
	uint32_t x38 = UINT32_MAX;
	static uint8_t x40 = 11U;
	static int32_t t5 = 20952;

	t5 = (x37<<((x38|x39)<x40));

	if (t5 != 3318) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x41 = 1U;
	static int16_t x42 = -1;
	int64_t x43 = INT64_MIN;
	uint16_t x44 = 476U;
	volatile int32_t t6 = -93062;

	t6 = (x41<<((x42|x43)<x44));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = 0U;
	int16_t x50 = -1;
	static int8_t x51 = 4;
	volatile int32_t x52 = INT32_MIN;
	volatile int32_t t7 = 86;

	t7 = (x49<<((x50|x51)<x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MAX;
	int32_t t8 = -348379;

	t8 = (x53<<((x54|x55)<x56));

	if (t8 != 65534) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = 0;
	volatile uint8_t x62 = 1U;
	int32_t x63 = -62;
	uint64_t x64 = 3076461836981LLU;
	volatile int32_t t9 = -698939085;

	t9 = (x61<<((x62|x63)<x64));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x65 = 12814LLU;
	int32_t x66 = -1;
	static uint8_t x67 = 4U;
	int64_t x68 = -7220977LL;

	t10 = (x65<<((x66|x67)<x68));

	if (t10 != 12814LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x69 = INT8_MAX;
	uint32_t x71 = 202680U;
	int32_t t11 = -28;

	t11 = (x69<<((x70|x71)<x72));

	if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = INT8_MAX;
	int32_t x74 = -1;
	static int16_t x75 = -1;
	int32_t x76 = -943234;
	volatile int32_t t12 = -92049;

	t12 = (x73<<((x74|x75)<x76));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x85 = 5509U;
	int8_t x86 = 1;
	volatile uint64_t x87 = 3LLU;
	volatile int64_t x88 = INT64_MAX;

	t13 = (x85<<((x86|x87)<x88));

	if (t13 != 11018U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x89 = 8U;
	static volatile int16_t x90 = 691;
	static uint16_t x91 = 0U;
	volatile int16_t x92 = INT16_MAX;
	int32_t t14 = 0;

	t14 = (x89<<((x90|x91)<x92));

	if (t14 != 16) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x94 = 304082927204LLU;
	volatile uint32_t x95 = 9479365U;
	static volatile int32_t t15 = 0;

	t15 = (x93<<((x94|x95)<x96));

	if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x105 = 7323286370410061LL;
	int64_t x106 = INT64_MIN;
	int8_t x107 = -1;
	int16_t x108 = INT16_MIN;
	volatile int64_t t16 = -891781294905LL;

	t16 = (x105<<((x106|x107)<x108));

	if (t16 != 7323286370410061LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x125 = 107U;
	int16_t x126 = -102;
	static int8_t x128 = INT8_MAX;
	volatile int32_t t17 = 4766;

	t17 = (x125<<((x126|x127)<x128));

	if (t17 != 214) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x145 = UINT8_MAX;
	int32_t x146 = 66265411;
	int32_t x147 = 394885;
	int16_t x148 = -1;
	volatile int32_t t18 = -41;

	t18 = (x145<<((x146|x147)<x148));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x157 = 1539747518153251940LLU;
	uint64_t x158 = 251089190063322LLU;
	uint8_t x159 = 1U;
	volatile int64_t x160 = INT64_MAX;
	static uint64_t t19 = 2077613718738367LLU;

	t19 = (x157<<((x158|x159)<x160));

	if (t19 != 3079495036306503880LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x173 = 1374174400U;
	volatile int64_t x174 = INT64_MAX;
	static uint8_t x175 = 28U;
	volatile uint32_t t20 = 15U;

	t20 = (x173<<((x174|x175)<x176));

	if (t20 != 1374174400U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x177 = INT8_MAX;
	volatile uint16_t x178 = UINT16_MAX;
	int32_t x180 = -27297;
	volatile int32_t t21 = 593265010;

	t21 = (x177<<((x178|x179)<x180));

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x181 = 134454347653809LL;
	static int64_t x182 = 874LL;
	volatile int8_t x183 = -1;
	uint64_t x184 = UINT64_MAX;
	static volatile int64_t t22 = -20452333778941LL;

	t22 = (x181<<((x182|x183)<x184));

	if (t22 != 134454347653809LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x185 = 246436U;
	volatile int16_t x186 = 7;
	uint8_t x187 = UINT8_MAX;
	volatile uint32_t t23 = 743771U;

	t23 = (x185<<((x186|x187)<x188));

	if (t23 != 246436U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x193 = 191456212;
	volatile uint8_t x194 = 3U;
	volatile uint16_t x196 = 957U;

	t24 = (x193<<((x194|x195)<x196));

	if (t24 != 382912424) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x197 = INT8_MAX;
	int16_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	static int32_t t25 = -2000564;

	t25 = (x197<<((x198|x199)<x200));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x201 = UINT16_MAX;
	static int16_t x203 = -1440;
	int16_t x204 = -2928;
	int32_t t26 = -17000463;

	t26 = (x201<<((x202|x203)<x204));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x205 = UINT16_MAX;
	uint8_t x206 = 1U;
	int64_t x208 = INT64_MIN;
	static volatile int32_t t27 = 78571510;

	t27 = (x205<<((x206|x207)<x208));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x217 = 2327U;
	static int64_t x218 = -1LL;
	int8_t x219 = -49;
	volatile uint16_t x220 = UINT16_MAX;
	uint32_t t28 = 51U;

	t28 = (x217<<((x218|x219)<x220));

	if (t28 != 4654U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x221 = 3024082LL;
	volatile int32_t x222 = 7;
	uint64_t x223 = UINT64_MAX;
	volatile int64_t t29 = -4210518393LL;

	t29 = (x221<<((x222|x223)<x224));

	if (t29 != 3024082LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x233 = INT8_MAX;
	uint32_t x234 = UINT32_MAX;
	static int64_t x236 = -1LL;

	t30 = (x233<<((x234|x235)<x236));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x237 = INT8_MAX;
	static int16_t x238 = -417;
	volatile int32_t x239 = INT32_MIN;
	static int16_t x240 = -1;
	volatile int32_t t31 = 15629324;

	t31 = (x237<<((x238|x239)<x240));

	if (t31 != 254) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x245 = 1U;
	uint8_t x246 = UINT8_MAX;
	static int16_t x247 = INT16_MIN;
	uint64_t x248 = 6372200973845277LLU;
	volatile uint32_t t32 = 496406U;

	t32 = (x245<<((x246|x247)<x248));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x254 = UINT64_MAX;
	volatile int16_t x255 = 803;
	volatile uint8_t x256 = 1U;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x253<<((x254|x255)<x256));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x257 = 22U;
	uint16_t x258 = 509U;
	static uint16_t x259 = 10U;
	int16_t x260 = -1;
	int32_t t34 = 1;

	t34 = (x257<<((x258|x259)<x260));

	if (t34 != 22) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x261 = UINT8_MAX;
	volatile int16_t x262 = INT16_MIN;
	uint16_t x263 = 7295U;
	volatile int32_t t35 = -165692131;

	t35 = (x261<<((x262|x263)<x264));

	if (t35 != 510) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x266 = 12U;
	int32_t x267 = INT32_MIN;
	volatile int32_t t36 = 80623;

	t36 = (x265<<((x266|x267)<x268));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x270 = -1LL;
	uint32_t x271 = 49U;
	volatile int64_t t37 = 75732024LL;

	t37 = (x269<<((x270|x271)<x272));

	if (t37 != 8213454288LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x277 = 1U;
	int64_t x279 = INT64_MIN;
	volatile int32_t t38 = 16;

	t38 = (x277<<((x278|x279)<x280));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x286 = 947U;
	static uint8_t x287 = 1U;
	static uint8_t x288 = 28U;
	int32_t t39 = -369949;

	t39 = (x285<<((x286|x287)<x288));

	if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x305 = INT8_MAX;
	int32_t x306 = -7;
	int32_t x307 = -12364958;
	int64_t x308 = -1LL;

	t40 = (x305<<((x306|x307)<x308));

	if (t40 != 254) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x309 = 671LLU;
	int32_t x310 = INT32_MAX;
	static int32_t x311 = INT32_MIN;
	uint8_t x312 = 3U;
	volatile uint64_t t41 = 396LLU;

	t41 = (x309<<((x310|x311)<x312));

	if (t41 != 1342LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x313 = INT8_MAX;
	int64_t x314 = -1LL;
	static int8_t x315 = INT8_MIN;
	int64_t x316 = -1LL;
	int32_t t42 = -7014;

	t42 = (x313<<((x314|x315)<x316));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x321 = 19LL;
	int16_t x323 = INT16_MIN;
	volatile int16_t x324 = 17;
	int64_t t43 = -32843587797449494LL;

	t43 = (x321<<((x322|x323)<x324));

	if (t43 != 38LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x329 = 1U;
	int32_t x330 = -1;
	uint16_t x331 = 0U;
	int8_t x332 = -1;
	static int32_t t44 = 0;

	t44 = (x329<<((x330|x331)<x332));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x333 = UINT32_MAX;
	static int8_t x334 = -22;
	static int16_t x335 = INT16_MAX;
	uint32_t t45 = 5U;

	t45 = (x333<<((x334|x335)<x336));

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x337 = 10U;
	int32_t x338 = INT32_MIN;
	static int32_t x339 = -1;
	static int32_t x340 = 3130;

	t46 = (x337<<((x338|x339)<x340));

	if (t46 != 20) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MAX;
	int16_t x347 = INT16_MAX;
	uint8_t x348 = 2U;
	volatile int32_t t47 = 285;

	t47 = (x345<<((x346|x347)<x348));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x369 = UINT8_MAX;
	static int32_t x370 = INT32_MIN;
	static uint16_t x371 = 1U;
	uint64_t x372 = 557119901097711LLU;
	volatile int32_t t48 = 3;

	t48 = (x369<<((x370|x371)<x372));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x373 = UINT64_MAX;
	volatile int16_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	uint64_t t49 = 2LLU;

	t49 = (x373<<((x374|x375)<x376));

	if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x381 = UINT64_MAX;
	int32_t x382 = -1;
	uint16_t x383 = 23596U;
	volatile int8_t x384 = -38;
	uint64_t t50 = UINT64_MAX;

	t50 = (x381<<((x382|x383)<x384));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x385 = 2LLU;
	static int8_t x386 = INT8_MAX;
	int8_t x387 = INT8_MAX;
	volatile uint64_t t51 = 2072LLU;

	t51 = (x385<<((x386|x387)<x388));

	if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x389 = 0;
	int16_t x390 = -1318;
	int16_t x391 = INT16_MIN;
	volatile int32_t t52 = -498540352;

	t52 = (x389<<((x390|x391)<x392));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x401 = 12406993778455374LL;
	int32_t x402 = INT32_MIN;
	static int64_t x403 = INT64_MIN;

	t53 = (x401<<((x402|x403)<x404));

	if (t53 != 24813987556910748LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x409 = INT16_MAX;
	uint32_t x411 = 107876U;
	static int8_t x412 = INT8_MAX;
	int32_t t54 = -2644;

	t54 = (x409<<((x410|x411)<x412));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x421 = UINT64_MAX;
	int64_t x422 = INT64_MIN;
	int16_t x424 = INT16_MIN;
	volatile uint64_t t55 = 386810LLU;

	t55 = (x421<<((x422|x423)<x424));

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x429 = 27U;
	int16_t x430 = INT16_MAX;
	static int32_t x431 = INT32_MIN;
	volatile int32_t t56 = 1;

	t56 = (x429<<((x430|x431)<x432));

	if (t56 != 54) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x433 = UINT64_MAX;
	static int16_t x434 = INT16_MAX;
	static int16_t x436 = INT16_MIN;
	uint64_t t57 = 26782862366158LLU;

	t57 = (x433<<((x434|x435)<x436));

	if (t57 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x446 = UINT16_MAX;
	uint32_t x447 = 1215U;
	int64_t x448 = -687145LL;

	t58 = (x445<<((x446|x447)<x448));

	if (t58 != 20) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x453 = 1U;
	static int16_t x456 = -1;
	volatile int32_t t59 = 7483056;

	t59 = (x453<<((x454|x455)<x456));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x461 = INT8_MAX;
	int64_t x462 = -1LL;
	volatile uint64_t x464 = UINT64_MAX;
	int32_t t60 = 6;

	t60 = (x461<<((x462|x463)<x464));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x465 = 7U;
	int64_t x466 = 190896050253LL;
	static volatile int64_t x467 = INT64_MIN;
	int32_t x468 = 142;

	t61 = (x465<<((x466|x467)<x468));

	if (t61 != 14) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x469 = UINT64_MAX;
	int16_t x471 = INT16_MIN;
	int16_t x472 = -116;
	volatile uint64_t t62 = 62395340354952880LLU;

	t62 = (x469<<((x470|x471)<x472));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x477 = UINT8_MAX;
	static volatile int8_t x478 = INT8_MAX;
	static int8_t x479 = -2;
	int32_t t63 = 3;

	t63 = (x477<<((x478|x479)<x480));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x482 = 681786450;
	int64_t x483 = -6294LL;
	int16_t x484 = INT16_MAX;
	int32_t t64 = -161658;

	t64 = (x481<<((x482|x483)<x484));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x486 = 2;
	static uint32_t x487 = 114742562U;
	int8_t x488 = INT8_MIN;
	volatile int32_t t65 = 3154;

	t65 = (x485<<((x486|x487)<x488));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x495 = INT64_MIN;
	int32_t x496 = INT32_MIN;
	volatile int32_t t66 = 195714726;

	t66 = (x493<<((x494|x495)<x496));

	if (t66 != 510) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x497 = 14878329;
	volatile uint64_t x498 = 9LLU;
	volatile int8_t x499 = INT8_MAX;
	volatile int32_t t67 = -208;

	t67 = (x497<<((x498|x499)<x500));

	if (t67 != 29756658) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x513 = 113289920775743LLU;
	volatile int64_t x514 = INT64_MAX;
	static int32_t x515 = 1;
	volatile uint64_t x516 = 87351LLU;
	uint64_t t68 = 2012688341142546LLU;

	t68 = (x513<<((x514|x515)<x516));

	if (t68 != 113289920775743LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x518 = INT16_MIN;
	uint16_t x519 = 1U;
	static volatile uint8_t x520 = UINT8_MAX;

	t69 = (x517<<((x518|x519)<x520));

	if (t69 != 32134) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x529 = 28081U;
	volatile int8_t x530 = 0;
	static int32_t x532 = 1;
	static volatile uint32_t t70 = 1825529237U;

	t70 = (x529<<((x530|x531)<x532));

	if (t70 != 56162U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x533 = 0U;
	volatile int64_t x534 = INT64_MAX;
	int16_t x535 = -1610;

	t71 = (x533<<((x534|x535)<x536));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x538 = INT64_MAX;
	uint8_t x539 = 2U;
	static volatile int64_t x540 = INT64_MIN;
	uint64_t t72 = 509694LLU;

	t72 = (x537<<((x538|x539)<x540));

	if (t72 != 65971599095LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x541 = 2U;
	int8_t x542 = -30;
	int16_t x544 = 1;
	static int32_t t73 = 3785253;

	t73 = (x541<<((x542|x543)<x544));

	if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x545 = 121U;
	static int32_t x546 = -1;
	int16_t x547 = INT16_MIN;
	volatile uint64_t x548 = UINT64_MAX;
	int32_t t74 = 3654947;

	t74 = (x545<<((x546|x547)<x548));

	if (t74 != 121) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x549 = UINT16_MAX;
	int64_t x550 = -60860LL;
	int16_t x551 = INT16_MAX;
	uint8_t x552 = 48U;

	t75 = (x549<<((x550|x551)<x552));

	if (t75 != 131070) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x562 = INT32_MAX;
	int64_t x563 = INT64_MIN;
	int8_t x564 = INT8_MIN;
	uint32_t t76 = 787944002U;

	t76 = (x561<<((x562|x563)<x564));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x569 = 81;
	int32_t x570 = INT32_MIN;
	uint64_t x571 = UINT64_MAX;
	uint16_t x572 = UINT16_MAX;
	volatile int32_t t77 = -116661496;

	t77 = (x569<<((x570|x571)<x572));

	if (t77 != 81) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x573 = INT64_MAX;
	uint16_t x574 = 0U;
	int64_t x575 = INT64_MAX;
	volatile int16_t x576 = INT16_MAX;
	volatile int64_t t78 = INT64_MAX;

	t78 = (x573<<((x574|x575)<x576));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x578 = INT64_MAX;
	int64_t x579 = 1749510431428511446LL;
	int8_t x580 = -1;

	t79 = (x577<<((x578|x579)<x580));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x590 = -1;
	int8_t x591 = INT8_MAX;

	t80 = (x589<<((x590|x591)<x592));

	if (t80 != 475827228528LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x601 = 1U;
	static volatile int8_t x602 = -54;
	uint64_t x603 = 3837827362213544788LLU;
	uint32_t x604 = 56287U;

	t81 = (x601<<((x602|x603)<x604));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x613 = 4U;
	uint8_t x615 = 3U;
	volatile int32_t x616 = -1;
	int32_t t82 = -4;

	t82 = (x613<<((x614|x615)<x616));

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x617 = UINT32_MAX;
	int64_t x618 = -17732891798217628LL;
	static uint16_t x619 = UINT16_MAX;
	volatile uint32_t t83 = 140354746U;

	t83 = (x617<<((x618|x619)<x620));

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x633 = UINT64_MAX;
	int16_t x635 = -2960;
	int64_t x636 = INT64_MIN;
	uint64_t t84 = UINT64_MAX;

	t84 = (x633<<((x634|x635)<x636));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x637 = 16U;
	uint32_t x638 = 3U;
	int8_t x639 = 13;
	uint64_t x640 = UINT64_MAX;

	t85 = (x637<<((x638|x639)<x640));

	if (t85 != 32) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x642 = UINT16_MAX;
	volatile int64_t x644 = INT64_MAX;

	t86 = (x641<<((x642|x643)<x644));

	if (t86 != 65534) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x646 = INT64_MIN;
	uint8_t x647 = 1U;
	volatile uint32_t x648 = 187U;
	int32_t t87 = -2150053;

	t87 = (x645<<((x646|x647)<x648));

	if (t87 != 744) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x658 = -1;
	volatile int16_t x659 = 0;
	volatile int32_t t88 = 2;

	t88 = (x657<<((x658|x659)<x660));

	if (t88 != 84) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x661 = 0;
	static int16_t x662 = 1534;
	uint32_t x663 = 85721U;
	int8_t x664 = INT8_MAX;
	static volatile int32_t t89 = -1759;

	t89 = (x661<<((x662|x663)<x664));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x665 = 0LLU;
	int32_t x666 = 35227158;
	static uint32_t x667 = 27U;
	uint8_t x668 = 33U;
	uint64_t t90 = 27661379LLU;

	t90 = (x665<<((x666|x667)<x668));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x670 = INT16_MIN;
	static int16_t x671 = INT16_MAX;
	uint64_t x672 = 137678734549762464LLU;
	volatile uint64_t t91 = 1138483075815099435LLU;

	t91 = (x669<<((x670|x671)<x672));

	if (t91 != 207LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x673 = 1314U;
	uint32_t x674 = 151U;
	int32_t x675 = -1;
	volatile int8_t x676 = INT8_MIN;
	volatile int32_t t92 = 12692;

	t92 = (x673<<((x674|x675)<x676));

	if (t92 != 1314) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x677 = UINT16_MAX;
	int16_t x678 = INT16_MIN;
	static uint64_t x679 = 2LLU;
	uint32_t x680 = 10U;
	int32_t t93 = 8;

	t93 = (x677<<((x678|x679)<x680));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x689 = 14U;
	static uint32_t x690 = 516763U;
	uint16_t x691 = 100U;
	volatile int64_t x692 = -1LL;
	int32_t t94 = -2763;

	t94 = (x689<<((x690|x691)<x692));

	if (t94 != 14) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x693 = 0;
	uint32_t x694 = 7U;
	uint64_t x696 = 4424385192923233LLU;
	volatile int32_t t95 = 268496;

	t95 = (x693<<((x694|x695)<x696));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x701 = 1U;
	volatile int16_t x704 = -21;
	volatile int32_t t96 = 25322167;

	t96 = (x701<<((x702|x703)<x704));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x709 = UINT32_MAX;
	uint32_t x710 = 1721134339U;
	int32_t x711 = -107414390;
	uint8_t x712 = 0U;
	uint32_t t97 = UINT32_MAX;

	t97 = (x709<<((x710|x711)<x712));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x721 = INT16_MAX;
	int32_t x722 = INT32_MIN;
	volatile int32_t t98 = -13013638;

	t98 = (x721<<((x722|x723)<x724));

	if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x730 = 2U;
	uint8_t x731 = 79U;
	int16_t x732 = INT16_MIN;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x729<<((x730|x731)<x732));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

