#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MAX;
int16_t x14 = INT16_MIN;
volatile int32_t t2 = 4826663;
static int8_t x21 = INT8_MIN;
uint8_t x22 = 1U;
uint32_t x28 = UINT32_MAX;
volatile uint16_t x43 = UINT16_MAX;
uint64_t x44 = 850369LLU;
volatile int32_t t6 = -151821081;
static int8_t x61 = INT8_MAX;
int32_t x62 = INT32_MAX;
static int64_t x66 = -1798077LL;
uint8_t x72 = UINT8_MAX;
volatile int32_t t11 = 31048829;
uint32_t x82 = 12U;
volatile uint64_t t12 = 10249LLU;
int8_t x95 = -1;
int8_t x97 = -2;
static uint64_t t16 = 934437239942337657LLU;
int64_t t17 = 67148522158266376LL;
int32_t x148 = 499;
uint8_t x159 = 0U;
int16_t x162 = INT16_MIN;
int64_t x177 = 987157278164620939LL;
static int16_t x179 = INT16_MIN;
int64_t t24 = -1LL;
volatile int32_t x193 = 9666;
int64_t x213 = INT64_MIN;
uint32_t x231 = 682U;
int64_t x237 = 128180LL;
uint32_t x240 = 1765015647U;
static volatile int8_t x247 = -2;
volatile int8_t x270 = 3;
static int8_t x283 = INT8_MIN;
int32_t x288 = -456;
uint32_t x293 = UINT32_MAX;
int64_t x295 = INT64_MAX;
static int64_t x315 = INT64_MIN;
uint16_t x316 = UINT16_MAX;
int32_t x318 = INT32_MIN;
volatile uint32_t x323 = UINT32_MAX;
int8_t x326 = INT8_MAX;
static uint64_t x327 = 884462LLU;
int16_t x328 = INT16_MIN;
volatile int32_t t45 = 0;
static int32_t x335 = INT32_MIN;
uint8_t x347 = UINT8_MAX;
volatile int64_t t49 = 9224805110LL;
uint64_t x360 = 41439605248LLU;
uint64_t x363 = 3007LLU;
static volatile int64_t t52 = 413808116625972LL;
int8_t x366 = -1;
volatile uint64_t t55 = 63626095491LLU;
int32_t t59 = -412851537;
int32_t x446 = INT32_MIN;
int8_t x470 = INT8_MIN;
static uint64_t x471 = 1736326298483997016LLU;
uint8_t x475 = 23U;
volatile uint32_t x493 = 75077983U;
static volatile uint64_t x509 = 456051904611LLU;
int16_t x520 = 2;
int16_t x548 = INT16_MIN;
static int8_t x551 = -1;
int16_t x553 = -51;
int32_t x559 = INT32_MIN;
volatile int32_t t77 = 4250992;
int32_t x569 = 19;
int8_t x575 = -1;
int32_t x576 = 53956797;
int64_t x585 = 207LL;
volatile int64_t t82 = 14445437688631476LL;
uint32_t x591 = 58846260U;
static int32_t x600 = INT32_MAX;
int64_t t85 = 2250850550694961776LL;
uint32_t x638 = 60564U;
volatile int32_t x639 = -1;
static uint32_t t89 = 1055098672U;
volatile uint64_t x644 = 495232920485656LLU;
int64_t x646 = 1630559095926LL;
uint16_t x648 = 4203U;
volatile int64_t t91 = 779LL;
volatile int16_t x654 = -6;
int32_t x670 = -111041801;
uint32_t x671 = 27U;
int32_t t96 = -37;
static uint8_t x705 = UINT8_MAX;
static int8_t x706 = INT8_MIN;
int8_t x708 = INT8_MIN;


void f0(void) {
	static volatile uint32_t x1 = 481U;
	static int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	volatile uint32_t t0 = 3344U;

	t0 = ((x1%x2)%(x3<=x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MAX;
	int32_t x10 = -1;
	static volatile int64_t x11 = -2940701709211926067LL;
	static uint16_t x12 = 10U;
	int32_t t1 = 12113;

	t1 = ((x9%x10)%(x11<=x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MIN;

	t2 = ((x13%x14)%(x15<=x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x23 = INT16_MIN;
	int8_t x24 = -1;
	volatile int32_t t3 = -21174;

	t3 = ((x21%x22)%(x23<=x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = -3;
	int8_t x26 = INT8_MIN;
	int8_t x27 = -1;
	static volatile int32_t t4 = 75488;

	t4 = ((x25%x26)%(x27<=x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = INT16_MIN;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = -1;
	uint8_t x40 = 4U;
	uint64_t t5 = 5938557638894833LLU;

	t5 = ((x37%x38)%(x39<=x40));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x41 = -1;
	volatile uint16_t x42 = 18U;

	t6 = ((x41%x42)%(x43<=x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x49 = INT16_MIN;
	static int64_t x50 = -1LL;
	int64_t x51 = -517394131803941LL;
	static uint64_t x52 = UINT64_MAX;
	volatile int64_t t7 = 1182779640LL;

	t7 = ((x49%x50)%(x51<=x52));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x63 = 45U;
	static uint16_t x64 = UINT16_MAX;
	static volatile int32_t t8 = 35094;

	t8 = ((x61%x62)%(x63<=x64));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x65 = -31852;
	int8_t x67 = -1;
	uint8_t x68 = 4U;
	volatile int64_t t9 = 4014550143645LL;

	t9 = ((x65%x66)%(x67<=x68));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x69 = 24;
	int32_t x70 = -1;
	static int64_t x71 = -150226053085231726LL;
	volatile int32_t t10 = -1;

	t10 = ((x69%x70)%(x71<=x72));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = -1;
	static int32_t x74 = -1;
	uint8_t x75 = 120U;
	static uint32_t x76 = 329U;

	t11 = ((x73%x74)%(x75<=x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x81 = 1LLU;
	static int32_t x83 = -1;
	uint16_t x84 = UINT16_MAX;

	t12 = ((x81%x82)%(x83<=x84));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x93 = INT32_MIN;
	int16_t x94 = INT16_MAX;
	static volatile int16_t x96 = INT16_MAX;
	static int32_t t13 = -28615654;

	t13 = ((x93%x94)%(x95<=x96));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x98 = INT16_MAX;
	uint64_t x99 = 44LLU;
	static uint16_t x100 = UINT16_MAX;
	volatile int32_t t14 = 790;

	t14 = ((x97%x98)%(x99<=x100));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x109 = INT8_MIN;
	int64_t x110 = 5931202071955LL;
	int16_t x111 = INT16_MIN;
	int64_t x112 = 18927124LL;
	volatile int64_t t15 = -63761LL;

	t15 = ((x109%x110)%(x111<=x112));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x125 = 5LLU;
	int16_t x126 = INT16_MAX;
	int64_t x127 = INT64_MIN;
	int32_t x128 = -1;

	t16 = ((x125%x126)%(x127<=x128));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x133 = INT32_MAX;
	int64_t x134 = INT64_MAX;
	uint64_t x135 = 229310596LLU;
	int8_t x136 = -1;

	t17 = ((x133%x134)%(x135<=x136));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x145 = -1;
	uint64_t x146 = UINT64_MAX;
	int32_t x147 = -1554188;
	volatile uint64_t t18 = 1360301675578LLU;

	t18 = ((x145%x146)%(x147<=x148));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x149 = INT16_MIN;
	volatile int8_t x150 = 6;
	int32_t x151 = INT32_MIN;
	volatile int16_t x152 = -2;
	volatile int32_t t19 = 57;

	t19 = ((x149%x150)%(x151<=x152));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x153 = 13LL;
	int16_t x154 = INT16_MAX;
	int64_t x155 = -472LL;
	volatile uint8_t x156 = UINT8_MAX;
	static volatile int64_t t20 = -1LL;

	t20 = ((x153%x154)%(x155<=x156));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x157 = 32553LLU;
	static int8_t x158 = -62;
	static volatile uint16_t x160 = 856U;
	uint64_t t21 = 319351098653LLU;

	t21 = ((x157%x158)%(x159<=x160));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x161 = -11378;
	uint64_t x163 = 2789053477LLU;
	int16_t x164 = -1;
	volatile int32_t t22 = -475144024;

	t22 = ((x161%x162)%(x163<=x164));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x173 = INT8_MIN;
	static int64_t x174 = 3417635LL;
	int16_t x175 = 36;
	uint64_t x176 = 1089915210327339556LLU;
	int64_t t23 = -4745342LL;

	t23 = ((x173%x174)%(x175<=x176));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x178 = 116923397;
	int8_t x180 = 1;

	t24 = ((x177%x178)%(x179<=x180));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x181 = 14U;
	int32_t x182 = INT32_MAX;
	int16_t x183 = -1;
	uint16_t x184 = 38U;
	int32_t t25 = -7;

	t25 = ((x181%x182)%(x183<=x184));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x189 = -2007;
	uint32_t x190 = UINT32_MAX;
	int8_t x191 = -12;
	int16_t x192 = INT16_MAX;
	static uint32_t t26 = 59U;

	t26 = ((x189%x190)%(x191<=x192));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x194 = 5U;
	int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MAX;
	volatile int32_t t27 = -141;

	t27 = ((x193%x194)%(x195<=x196));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x205 = INT64_MAX;
	uint8_t x206 = 3U;
	static int32_t x207 = INT32_MIN;
	static int16_t x208 = INT16_MIN;
	int64_t t28 = 53072991823380LL;

	t28 = ((x205%x206)%(x207<=x208));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x214 = 1LLU;
	volatile int16_t x215 = -529;
	int32_t x216 = INT32_MAX;
	static volatile uint64_t t29 = 1542384446645LLU;

	t29 = ((x213%x214)%(x215<=x216));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x229 = 1503085983U;
	int32_t x230 = INT32_MIN;
	int64_t x232 = 1488887237062LL;
	volatile uint32_t t30 = 15581178U;

	t30 = ((x229%x230)%(x231<=x232));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x238 = INT16_MIN;
	volatile int64_t x239 = -1LL;
	static int64_t t31 = -966728LL;

	t31 = ((x237%x238)%(x239<=x240));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x245 = 3U;
	static int8_t x246 = INT8_MIN;
	int8_t x248 = -1;
	static int32_t t32 = 3358337;

	t32 = ((x245%x246)%(x247<=x248));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x261 = INT32_MAX;
	volatile uint8_t x262 = 1U;
	int64_t x263 = -481358LL;
	int8_t x264 = -1;
	static int32_t t33 = 621;

	t33 = ((x261%x262)%(x263<=x264));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = 5437072266748LL;
	static int64_t x267 = INT64_MIN;
	int16_t x268 = INT16_MIN;
	static volatile int64_t t34 = 2890893LL;

	t34 = ((x265%x266)%(x267<=x268));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x269 = 47U;
	int64_t x271 = -126248LL;
	int16_t x272 = INT16_MIN;
	int32_t t35 = 664700;

	t35 = ((x269%x270)%(x271<=x272));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x281 = 76U;
	int32_t x282 = INT32_MAX;
	volatile uint16_t x284 = 251U;
	int32_t t36 = -31204328;

	t36 = ((x281%x282)%(x283<=x284));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x285 = 19;
	int64_t x286 = 101071226569766070LL;
	static volatile uint64_t x287 = 29729231LLU;
	volatile int64_t t37 = -7LL;

	t37 = ((x285%x286)%(x287<=x288));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x294 = 8;
	volatile uint64_t x296 = UINT64_MAX;
	uint32_t t38 = 3945238U;

	t38 = ((x293%x294)%(x295<=x296));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x297 = INT16_MIN;
	static uint16_t x298 = UINT16_MAX;
	int32_t x299 = 41817773;
	int64_t x300 = INT64_MAX;
	static int32_t t39 = -337923;

	t39 = ((x297%x298)%(x299<=x300));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x305 = UINT64_MAX;
	int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MAX;
	uint64_t x308 = UINT64_MAX;
	uint64_t t40 = 470LLU;

	t40 = ((x305%x306)%(x307<=x308));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x309 = 30U;
	uint32_t x310 = 22U;
	int64_t x311 = INT64_MIN;
	static uint32_t x312 = 3494U;
	static uint32_t t41 = 647U;

	t41 = ((x309%x310)%(x311<=x312));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x313 = INT8_MIN;
	uint8_t x314 = 119U;
	volatile int32_t t42 = -130;

	t42 = ((x313%x314)%(x315<=x316));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x317 = INT64_MAX;
	uint16_t x319 = 3U;
	volatile int32_t x320 = 351;
	volatile int64_t t43 = 40LL;

	t43 = ((x317%x318)%(x319<=x320));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x321 = INT16_MIN;
	static int64_t x322 = 222LL;
	static uint64_t x324 = UINT64_MAX;
	int64_t t44 = -3583972LL;

	t44 = ((x321%x322)%(x323<=x324));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x325 = UINT16_MAX;

	t45 = ((x325%x326)%(x327<=x328));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x329 = 0;
	int64_t x330 = 8709759389600LL;
	uint8_t x331 = 1U;
	volatile uint32_t x332 = 18U;
	int64_t t46 = 1434858799LL;

	t46 = ((x329%x330)%(x331<=x332));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x333 = 249;
	int8_t x334 = -1;
	volatile int16_t x336 = -26;
	int32_t t47 = -316843716;

	t47 = ((x333%x334)%(x335<=x336));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x341 = INT64_MIN;
	int16_t x342 = 8;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;
	int64_t t48 = 47332LL;

	t48 = ((x341%x342)%(x343<=x344));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x345 = 111LL;
	int64_t x346 = 2974509488908548LL;
	int32_t x348 = INT32_MAX;

	t49 = ((x345%x346)%(x347<=x348));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x349 = INT64_MAX;
	int32_t x350 = 1672;
	uint8_t x351 = 97U;
	uint16_t x352 = 105U;
	int64_t t50 = 334466LL;

	t50 = ((x349%x350)%(x351<=x352));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x357 = 3414;
	volatile int64_t x358 = -3361016LL;
	uint16_t x359 = 15U;
	int64_t t51 = -21854LL;

	t51 = ((x357%x358)%(x359<=x360));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x361 = INT64_MIN;
	static volatile uint32_t x362 = 548632828U;
	volatile uint64_t x364 = UINT64_MAX;

	t52 = ((x361%x362)%(x363<=x364));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x365 = -1;
	uint8_t x367 = 0U;
	uint8_t x368 = UINT8_MAX;
	int32_t t53 = 861604;

	t53 = ((x365%x366)%(x367<=x368));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x373 = 106414803LL;
	static int32_t x374 = INT32_MIN;
	static volatile uint64_t x375 = 1722469LLU;
	int16_t x376 = -1732;
	int64_t t54 = 171LL;

	t54 = ((x373%x374)%(x375<=x376));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x385 = INT64_MAX;
	uint64_t x386 = 24156735LLU;
	int16_t x387 = -1;
	volatile uint32_t x388 = UINT32_MAX;

	t55 = ((x385%x386)%(x387<=x388));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x393 = -1;
	int16_t x394 = 4;
	static volatile uint32_t x395 = 2003U;
	int32_t x396 = INT32_MIN;
	volatile int32_t t56 = 1189499;

	t56 = ((x393%x394)%(x395<=x396));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x401 = -1;
	static uint64_t x402 = UINT64_MAX;
	int32_t x403 = INT32_MIN;
	static uint16_t x404 = 0U;
	volatile uint64_t t57 = 1435LLU;

	t57 = ((x401%x402)%(x403<=x404));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x405 = -1;
	int8_t x406 = INT8_MIN;
	int64_t x407 = 52601367LL;
	int64_t x408 = INT64_MAX;
	volatile int32_t t58 = -537164444;

	t58 = ((x405%x406)%(x407<=x408));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x433 = INT16_MIN;
	static volatile int16_t x434 = INT16_MAX;
	static volatile int16_t x435 = INT16_MIN;
	uint32_t x436 = UINT32_MAX;

	t59 = ((x433%x434)%(x435<=x436));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x437 = INT32_MIN;
	uint16_t x438 = 152U;
	int32_t x439 = INT32_MIN;
	volatile int32_t x440 = INT32_MIN;
	int32_t t60 = -1;

	t60 = ((x437%x438)%(x439<=x440));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x445 = INT16_MIN;
	int64_t x447 = -4102789032062827LL;
	uint32_t x448 = 229517724U;
	volatile int32_t t61 = 88;

	t61 = ((x445%x446)%(x447<=x448));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x461 = 1072428383722476LL;
	uint16_t x462 = 25U;
	static uint64_t x463 = UINT64_MAX;
	static int32_t x464 = -1;
	static int64_t t62 = 290921627137768088LL;

	t62 = ((x461%x462)%(x463<=x464));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x469 = 0;
	static int32_t x472 = -1;
	int32_t t63 = 1227711;

	t63 = ((x469%x470)%(x471<=x472));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x473 = -7172;
	int32_t x474 = INT32_MIN;
	static uint16_t x476 = UINT16_MAX;
	volatile int32_t t64 = 1603;

	t64 = ((x473%x474)%(x475<=x476));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x489 = -1;
	int32_t x490 = INT32_MIN;
	static int32_t x491 = -1;
	int16_t x492 = 1;
	int32_t t65 = 31236724;

	t65 = ((x489%x490)%(x491<=x492));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x494 = UINT32_MAX;
	int8_t x495 = INT8_MIN;
	static uint16_t x496 = 2U;
	volatile uint32_t t66 = 16157510U;

	t66 = ((x493%x494)%(x495<=x496));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x510 = INT16_MIN;
	static volatile int16_t x511 = -1;
	static volatile uint8_t x512 = UINT8_MAX;
	volatile uint64_t t67 = 79746469619LLU;

	t67 = ((x509%x510)%(x511<=x512));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x517 = INT64_MIN;
	static int16_t x518 = INT16_MAX;
	volatile int8_t x519 = INT8_MIN;
	int64_t t68 = -5704630247465LL;

	t68 = ((x517%x518)%(x519<=x520));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x525 = -1;
	int8_t x526 = -1;
	int16_t x527 = -1;
	uint8_t x528 = UINT8_MAX;
	int32_t t69 = 8533684;

	t69 = ((x525%x526)%(x527<=x528));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x533 = INT8_MIN;
	uint32_t x534 = 2357050U;
	int16_t x535 = INT16_MIN;
	int8_t x536 = INT8_MAX;
	static volatile uint32_t t70 = 14570U;

	t70 = ((x533%x534)%(x535<=x536));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x537 = UINT16_MAX;
	uint32_t x538 = 3255U;
	int8_t x539 = INT8_MIN;
	int64_t x540 = -1LL;
	uint32_t t71 = 1642629U;

	t71 = ((x537%x538)%(x539<=x540));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x541 = -1;
	uint32_t x542 = UINT32_MAX;
	int32_t x543 = INT32_MIN;
	int8_t x544 = -11;
	uint32_t t72 = 24430016U;

	t72 = ((x541%x542)%(x543<=x544));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x545 = INT16_MIN;
	int32_t x546 = INT32_MIN;
	uint64_t x547 = 1273168507077644LLU;
	static int32_t t73 = -19;

	t73 = ((x545%x546)%(x547<=x548));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x549 = INT8_MAX;
	uint32_t x550 = UINT32_MAX;
	uint16_t x552 = UINT16_MAX;
	volatile uint32_t t74 = 3499491U;

	t74 = ((x549%x550)%(x551<=x552));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x554 = 72U;
	int64_t x555 = INT64_MIN;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t75 = 140468575;

	t75 = ((x553%x554)%(x555<=x556));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x557 = INT64_MAX;
	volatile int32_t x558 = INT32_MIN;
	volatile uint64_t x560 = UINT64_MAX;
	int64_t t76 = -1LL;

	t76 = ((x557%x558)%(x559<=x560));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x565 = INT16_MIN;
	volatile int8_t x566 = INT8_MIN;
	uint64_t x567 = 125591754LLU;
	int64_t x568 = INT64_MIN;

	t77 = ((x565%x566)%(x567<=x568));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x570 = INT16_MIN;
	int32_t x571 = -1;
	int64_t x572 = INT64_MAX;
	int32_t t78 = 205595360;

	t78 = ((x569%x570)%(x571<=x572));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x573 = INT16_MIN;
	static int16_t x574 = -1;
	int32_t t79 = -6;

	t79 = ((x573%x574)%(x575<=x576));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x577 = -13586116LL;
	uint16_t x578 = 7110U;
	int32_t x579 = 3911026;
	uint64_t x580 = UINT64_MAX;
	volatile int64_t t80 = -9457378375041561LL;

	t80 = ((x577%x578)%(x579<=x580));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x581 = UINT32_MAX;
	volatile int8_t x582 = 9;
	int32_t x583 = 2;
	volatile int32_t x584 = INT32_MAX;
	volatile uint32_t t81 = 1U;

	t81 = ((x581%x582)%(x583<=x584));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x586 = 475U;
	uint64_t x587 = 100LLU;
	uint32_t x588 = 457628U;

	t82 = ((x585%x586)%(x587<=x588));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x589 = INT8_MIN;
	volatile uint32_t x590 = 35706692U;
	int32_t x592 = -1;
	uint32_t t83 = 1U;

	t83 = ((x589%x590)%(x591<=x592));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x593 = -23971450LL;
	int8_t x594 = 19;
	int64_t x595 = INT64_MIN;
	uint32_t x596 = UINT32_MAX;
	int64_t t84 = -48020232908554LL;

	t84 = ((x593%x594)%(x595<=x596));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x597 = -1;
	static int64_t x598 = INT64_MIN;
	static volatile int8_t x599 = -1;

	t85 = ((x597%x598)%(x599<=x600));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x601 = INT16_MIN;
	uint64_t x602 = 340073820791LLU;
	static int16_t x603 = INT16_MIN;
	static int16_t x604 = -2;
	volatile uint64_t t86 = 5261350609491034LLU;

	t86 = ((x601%x602)%(x603<=x604));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x625 = 0;
	int64_t x626 = -6459844LL;
	uint32_t x627 = 18U;
	uint32_t x628 = 463U;
	volatile int64_t t87 = 4363265098080LL;

	t87 = ((x625%x626)%(x627<=x628));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x633 = 1;
	static int16_t x634 = -1;
	int32_t x635 = -953;
	int8_t x636 = 56;
	int32_t t88 = 835040802;

	t88 = ((x633%x634)%(x635<=x636));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x637 = INT8_MIN;
	int64_t x640 = INT64_MAX;

	t89 = ((x637%x638)%(x639<=x640));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x641 = -7;
	static int16_t x642 = INT16_MIN;
	uint16_t x643 = 1382U;
	int32_t t90 = -523199347;

	t90 = ((x641%x642)%(x643<=x644));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x645 = UINT16_MAX;
	volatile int16_t x647 = 26;

	t91 = ((x645%x646)%(x647<=x648));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x653 = -1;
	volatile int8_t x655 = INT8_MIN;
	int8_t x656 = -1;
	static int32_t t92 = 1;

	t92 = ((x653%x654)%(x655<=x656));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x657 = 0;
	int64_t x658 = INT64_MIN;
	volatile int64_t x659 = INT64_MIN;
	uint8_t x660 = UINT8_MAX;
	int64_t t93 = 2287273898641174758LL;

	t93 = ((x657%x658)%(x659<=x660));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x665 = 884U;
	uint32_t x666 = 3683U;
	int64_t x667 = -13291739LL;
	volatile uint16_t x668 = UINT16_MAX;
	uint32_t t94 = 824U;

	t94 = ((x665%x666)%(x667<=x668));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x669 = 9U;
	static int64_t x672 = INT64_MAX;
	static volatile int32_t t95 = 34045;

	t95 = ((x669%x670)%(x671<=x672));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x677 = INT32_MAX;
	static int8_t x678 = -1;
	int32_t x679 = -1;
	uint16_t x680 = UINT16_MAX;

	t96 = ((x677%x678)%(x679<=x680));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x681 = -1LL;
	static int16_t x682 = -1;
	int8_t x683 = -1;
	int8_t x684 = 8;
	volatile int64_t t97 = 55495258200763822LL;

	t97 = ((x681%x682)%(x683<=x684));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x697 = 1U;
	static int8_t x698 = INT8_MIN;
	int64_t x699 = -1LL;
	static int16_t x700 = 1;
	volatile int32_t t98 = 3;

	t98 = ((x697%x698)%(x699<=x700));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x707 = INT8_MIN;
	volatile int32_t t99 = 871101;

	t99 = ((x705%x706)%(x707<=x708));

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

