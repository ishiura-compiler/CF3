#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x10 = UINT16_MAX;
static int16_t x15 = 3313;
volatile int16_t x22 = INT16_MAX;
static int32_t t4 = -244636;
int8_t x26 = INT8_MAX;
uint32_t x28 = 132697792U;
int8_t x37 = -3;
uint8_t x46 = 3U;
uint64_t x47 = 294654681775092LLU;
uint64_t x48 = 338354023013LLU;
volatile uint16_t x54 = 2014U;
int8_t x56 = 6;
volatile int16_t x83 = 46;
static volatile int32_t x89 = INT32_MIN;
volatile int64_t x90 = INT64_MAX;
volatile uint64_t t13 = 4266859709257068LLU;
volatile int32_t x119 = INT32_MIN;
int16_t x123 = 594;
volatile uint32_t x146 = 30856U;
uint64_t x148 = 2188LLU;
uint32_t x149 = 971518129U;
uint16_t x167 = 628U;
int32_t x193 = -1;
volatile int16_t x197 = INT16_MAX;
uint64_t x202 = UINT64_MAX;
int64_t x204 = INT64_MAX;
uint8_t x227 = 60U;
uint16_t x232 = UINT16_MAX;
static volatile uint32_t x277 = 404319U;
volatile int32_t t33 = 975012;
int16_t x307 = -34;
volatile uint64_t x309 = UINT64_MAX;
uint64_t x314 = UINT64_MAX;
int8_t x317 = 6;
static int8_t x326 = 11;
static int16_t x329 = INT16_MIN;
volatile uint16_t x344 = UINT16_MAX;
int8_t x367 = 1;
int16_t x369 = -1;
int16_t x370 = 6;
int64_t x372 = -1LL;
int32_t t45 = 1;
uint16_t x375 = 13002U;
volatile uint64_t x385 = UINT64_MAX;
volatile int32_t x399 = -1;
uint64_t x400 = 85358793079078LLU;
static volatile int16_t x404 = -8;
static uint8_t x411 = 25U;
int32_t t52 = -154;
int8_t x417 = -2;
volatile int32_t x419 = INT32_MAX;
static int32_t t54 = -1;
int16_t x437 = 343;
int16_t x465 = 2944;
int8_t x493 = INT8_MAX;
int32_t x495 = INT32_MIN;
int64_t t61 = -81791197734713LL;
uint32_t x510 = 4U;
int64_t x515 = INT64_MIN;
uint16_t x517 = 25848U;
volatile int16_t x520 = -1;
volatile uint64_t t64 = 3LLU;
int64_t x532 = -1LL;
volatile int8_t x545 = 0;
uint16_t x550 = 7448U;
static uint8_t x561 = UINT8_MAX;
static int32_t x562 = 7;
volatile uint64_t t71 = 372LLU;
int8_t x582 = 16;
int16_t x583 = INT16_MIN;
static int32_t x597 = INT32_MIN;
int32_t x602 = INT32_MAX;
uint32_t t76 = 14486U;
uint16_t x610 = UINT16_MAX;
volatile int32_t x617 = -1;
int16_t x618 = 37;
static uint16_t x622 = UINT16_MAX;
volatile int64_t t81 = -202LL;
static int16_t x639 = INT16_MIN;
volatile int8_t x647 = INT8_MIN;
int64_t x656 = 8637310731542LL;
volatile int64_t t84 = -414339205LL;
int32_t x661 = INT32_MIN;
static uint8_t x667 = 5U;
static volatile int32_t t90 = 7;
volatile int64_t x693 = INT64_MIN;
uint32_t x700 = UINT32_MAX;
uint16_t x712 = 1U;
int32_t x759 = 149301161;
uint32_t t97 = 75781U;
uint64_t x763 = 158905LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint64_t x2 = 800018476LLU;
	int32_t x3 = INT32_MAX;
	volatile uint64_t x4 = 6883LLU;
	uint64_t t0 = 25115LLU;

	t0 = (x1&(x2<<(x3<=x4)));

	if (t0 != 800018476LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 23290246314502LL;
	int64_t x11 = -1LL;
	int8_t x12 = 0;
	static int64_t t1 = 262LL;

	t1 = (x9&(x10<<(x11<=x12)));

	if (t1 != 113158LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MAX;
	uint64_t x14 = 37143997049294884LLU;
	static int16_t x16 = INT16_MAX;
	volatile uint64_t t2 = 1LLU;

	t2 = (x13&(x14<<(x15<=x16)));

	if (t2 != 8264LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = -1LL;
	uint16_t x18 = 14102U;
	static uint64_t x19 = 4076216LLU;
	int8_t x20 = INT8_MIN;
	static volatile int64_t t3 = -1861LL;

	t3 = (x17&(x18<<(x19<=x20)));

	if (t3 != 28204LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 6387U;
	static int16_t x23 = 0;
	int8_t x24 = 4;

	t4 = (x21&(x22<<(x23<=x24)));

	if (t4 != 6386) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	volatile uint16_t x27 = 4122U;
	int64_t t5 = -1305588413LL;

	t5 = (x25&(x26<<(x27<=x28)));

	if (t5 != 254LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = 6612U;
	volatile int8_t x30 = INT8_MAX;
	int32_t x31 = INT32_MIN;
	static volatile int16_t x32 = INT16_MAX;
	volatile int32_t t6 = -20;

	t6 = (x29&(x30<<(x31<=x32)));

	if (t6 != 212) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x38 = 1720U;
	static int32_t x39 = INT32_MIN;
	int32_t x40 = INT32_MAX;
	static volatile int32_t t7 = -681760136;

	t7 = (x37&(x38<<(x39<=x40)));

	if (t7 != 3440) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = UINT16_MAX;
	volatile int32_t t8 = -61749935;

	t8 = (x45&(x46<<(x47<=x48)));

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = -13701;
	volatile int8_t x55 = -1;
	volatile int32_t t9 = -87645;

	t9 = (x53&(x54<<(x55<=x56)));

	if (t9 != 2616) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x81 = -1;
	int32_t x82 = 3;
	uint64_t x84 = 97636283LLU;
	volatile int32_t t10 = 27;

	t10 = (x81&(x82<<(x83<=x84)));

	if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x91 = 4185;
	int8_t x92 = -1;
	volatile int64_t t11 = -1138963978LL;

	t11 = (x89&(x90<<(x91<=x92)));

	if (t11 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x105 = UINT16_MAX;
	uint8_t x106 = 0U;
	static uint32_t x107 = UINT32_MAX;
	uint32_t x108 = 1U;
	static int32_t t12 = -556387140;

	t12 = (x105&(x106<<(x107<=x108)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x109 = 2;
	static uint64_t x110 = 74941503173972LLU;
	volatile int16_t x111 = -160;
	int32_t x112 = INT32_MIN;

	t13 = (x109&(x110<<(x111<=x112)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x117 = INT8_MAX;
	int32_t x118 = INT32_MAX;
	int64_t x120 = INT64_MIN;
	int32_t t14 = 945009519;

	t14 = (x117&(x118<<(x119<=x120)));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x121 = 52U;
	uint64_t x122 = UINT64_MAX;
	int64_t x124 = INT64_MAX;
	volatile uint64_t t15 = 488570534476692997LLU;

	t15 = (x121&(x122<<(x123<=x124)));

	if (t15 != 52LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x129 = -1LL;
	uint8_t x130 = 9U;
	volatile uint64_t x131 = UINT64_MAX;
	static int32_t x132 = INT32_MIN;
	int64_t t16 = -98647698759LL;

	t16 = (x129&(x130<<(x131<=x132)));

	if (t16 != 9LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x145 = INT16_MIN;
	uint8_t x147 = 18U;
	uint32_t t17 = 100590441U;

	t17 = (x145&(x146<<(x147<=x148)));

	if (t17 != 32768U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x150 = UINT16_MAX;
	uint16_t x151 = UINT16_MAX;
	static volatile int8_t x152 = -9;
	volatile uint32_t t18 = 837927218U;

	t18 = (x149&(x150<<(x151<=x152)));

	if (t18 != 12465U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x165 = -1;
	uint32_t x166 = 786715029U;
	int16_t x168 = INT16_MAX;
	volatile uint32_t t19 = 8246U;

	t19 = (x165&(x166<<(x167<=x168)));

	if (t19 != 1573430058U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x185 = INT16_MIN;
	uint32_t x186 = 215U;
	static uint16_t x187 = 45U;
	volatile uint16_t x188 = 2969U;
	volatile uint32_t t20 = 266U;

	t20 = (x185&(x186<<(x187<=x188)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x189 = UINT32_MAX;
	static uint64_t x190 = 358783127057LLU;
	uint8_t x191 = 0U;
	int8_t x192 = INT8_MIN;
	volatile uint64_t t21 = 57844803603029905LLU;

	t21 = (x189&(x190<<(x191<=x192)));

	if (t21 != 2300841489LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x194 = 11;
	int16_t x195 = INT16_MIN;
	uint8_t x196 = 5U;
	int32_t t22 = 207750;

	t22 = (x193&(x194<<(x195<=x196)));

	if (t22 != 22) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x198 = 239U;
	int8_t x199 = INT8_MAX;
	static uint16_t x200 = 0U;
	int32_t t23 = 61956;

	t23 = (x197&(x198<<(x199<=x200)));

	if (t23 != 239) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x201 = 202U;
	uint8_t x203 = 16U;
	static uint64_t t24 = 17394647824LLU;

	t24 = (x201&(x202<<(x203<=x204)));

	if (t24 != 202LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x205 = UINT16_MAX;
	uint8_t x206 = UINT8_MAX;
	int16_t x207 = INT16_MAX;
	int8_t x208 = -3;
	int32_t t25 = 32;

	t25 = (x205&(x206<<(x207<=x208)));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x217 = INT8_MIN;
	volatile uint8_t x218 = UINT8_MAX;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 5939LLU;
	static volatile int32_t t26 = -2122;

	t26 = (x217&(x218<<(x219<=x220)));

	if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x225 = 13774127585963458LLU;
	int8_t x226 = 4;
	static int32_t x228 = -1;
	volatile uint64_t t27 = 94008LLU;

	t27 = (x225&(x226<<(x227<=x228)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x229 = -1;
	uint16_t x230 = UINT16_MAX;
	uint32_t x231 = 91U;
	volatile int32_t t28 = 1;

	t28 = (x229&(x230<<(x231<=x232)));

	if (t28 != 131070) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x245 = 56048643938LLU;
	static int16_t x246 = 6232;
	uint32_t x247 = 3679U;
	uint8_t x248 = 3U;
	uint64_t t29 = 145233350LLU;

	t29 = (x245&(x246<<(x247<=x248)));

	if (t29 != 2112LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x257 = INT32_MIN;
	volatile uint16_t x258 = 2U;
	static uint8_t x259 = 109U;
	int32_t x260 = 4;
	volatile int32_t t30 = 1;

	t30 = (x257&(x258<<(x259<=x260)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x278 = INT32_MAX;
	int32_t x279 = 122040;
	int16_t x280 = 2940;
	uint32_t t31 = 1521436U;

	t31 = (x277&(x278<<(x279<=x280)));

	if (t31 != 404319U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x281 = INT32_MIN;
	uint16_t x282 = UINT16_MAX;
	int16_t x283 = INT16_MIN;
	int16_t x284 = -1;
	volatile int32_t t32 = -3;

	t32 = (x281&(x282<<(x283<=x284)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x285 = 95;
	int32_t x286 = 109500637;
	int64_t x287 = 168375155887LL;
	int32_t x288 = INT32_MIN;

	t33 = (x285&(x286<<(x287<=x288)));

	if (t33 != 93) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x289 = -31;
	volatile uint8_t x290 = 63U;
	uint8_t x291 = UINT8_MAX;
	volatile uint64_t x292 = UINT64_MAX;
	volatile int32_t t34 = 1;

	t34 = (x289&(x290<<(x291<=x292)));

	if (t34 != 96) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x301 = INT64_MIN;
	uint64_t x302 = UINT64_MAX;
	volatile uint8_t x303 = 0U;
	int16_t x304 = INT16_MIN;
	static volatile uint64_t t35 = 126802577791719939LLU;

	t35 = (x301&(x302<<(x303<=x304)));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x305 = 5214563655924LLU;
	int64_t x306 = INT64_MAX;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t36 = 423LLU;

	t36 = (x305&(x306<<(x307<=x308)));

	if (t36 != 5214563655924LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x310 = 12U;
	static int16_t x311 = -1388;
	volatile int64_t x312 = -63284632LL;
	uint64_t t37 = 107102866487157101LLU;

	t37 = (x309&(x310<<(x311<=x312)));

	if (t37 != 12LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x313 = -181090341273404430LL;
	int64_t x315 = INT64_MAX;
	static int8_t x316 = 3;
	static volatile uint64_t t38 = 3545244223844546LLU;

	t38 = (x313&(x314<<(x315<=x316)));

	if (t38 != 18265653732436147186LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = 122U;
	int32_t t39 = 124422356;

	t39 = (x317&(x318<<(x319<=x320)));

	if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x321 = INT64_MIN;
	int32_t x322 = 482;
	int16_t x323 = INT16_MIN;
	int8_t x324 = 1;
	int64_t t40 = -2570221104824095LL;

	t40 = (x321&(x322<<(x323<=x324)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x325 = -24;
	volatile int8_t x327 = -1;
	int16_t x328 = INT16_MIN;
	volatile int32_t t41 = 6;

	t41 = (x325&(x326<<(x327<=x328)));

	if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = 21U;
	volatile int32_t t42 = -114747890;

	t42 = (x329&(x330<<(x331<=x332)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MAX;
	uint64_t x343 = 120169671214142LLU;
	static volatile int32_t t43 = -3841560;

	t43 = (x341&(x342<<(x343<=x344)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x365 = INT16_MIN;
	int32_t x366 = 9660;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t44 = 4882;

	t44 = (x365&(x366<<(x367<=x368)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x371 = -8LL;

	t45 = (x369&(x370<<(x371<=x372)));

	if (t45 != 12) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x373 = 68436106874755068LLU;
	uint64_t x374 = UINT64_MAX;
	uint32_t x376 = UINT32_MAX;
	volatile uint64_t t46 = 1038118819338LLU;

	t46 = (x373&(x374<<(x375<=x376)));

	if (t46 != 68436106874755068LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x386 = UINT64_MAX;
	uint16_t x387 = UINT16_MAX;
	uint16_t x388 = 11687U;
	uint64_t t47 = UINT64_MAX;

	t47 = (x385&(x386<<(x387<=x388)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x389 = 915LL;
	static uint32_t x390 = 9067U;
	int8_t x391 = INT8_MIN;
	uint32_t x392 = 20700568U;
	int64_t t48 = 1382LL;

	t48 = (x389&(x390<<(x391<=x392)));

	if (t48 != 771LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x393 = 108388205U;
	uint32_t x394 = UINT32_MAX;
	int64_t x395 = -89203LL;
	int32_t x396 = INT32_MAX;
	uint32_t t49 = 110505U;

	t49 = (x393&(x394<<(x395<=x396)));

	if (t49 != 108388204U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = 15U;
	int32_t t50 = 23704474;

	t50 = (x397&(x398<<(x399<=x400)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x401 = INT64_MIN;
	uint16_t x402 = 256U;
	uint32_t x403 = 100U;
	volatile int64_t t51 = 128969LL;

	t51 = (x401&(x402<<(x403<=x404)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x409 = INT32_MAX;
	volatile int8_t x410 = 6;
	int16_t x412 = 174;

	t52 = (x409&(x410<<(x411<=x412)));

	if (t52 != 12) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x418 = INT16_MAX;
	volatile int64_t x420 = INT64_MAX;
	volatile int32_t t53 = 26;

	t53 = (x417&(x418<<(x419<=x420)));

	if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x421 = -1;
	static int16_t x422 = INT16_MAX;
	uint8_t x423 = 0U;
	int8_t x424 = INT8_MIN;

	t54 = (x421&(x422<<(x423<=x424)));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x438 = INT16_MAX;
	static int16_t x439 = -1;
	int32_t x440 = -1;
	int32_t t55 = 97760745;

	t55 = (x437&(x438<<(x439<=x440)));

	if (t55 != 342) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x453 = UINT16_MAX;
	volatile int32_t x454 = 2389;
	int16_t x455 = -810;
	static int64_t x456 = -1LL;
	static int32_t t56 = 26;

	t56 = (x453&(x454<<(x455<=x456)));

	if (t56 != 4778) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x466 = INT32_MAX;
	volatile uint8_t x467 = 60U;
	int32_t x468 = -1;
	int32_t t57 = -19760;

	t57 = (x465&(x466<<(x467<=x468)));

	if (t57 != 2944) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x473 = 7U;
	static uint64_t x474 = UINT64_MAX;
	int16_t x475 = 103;
	uint16_t x476 = UINT16_MAX;
	static uint64_t t58 = 70398664131606855LLU;

	t58 = (x473&(x474<<(x475<=x476)));

	if (t58 != 6LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x481 = 145681U;
	int8_t x482 = 2;
	static uint32_t x483 = UINT32_MAX;
	uint8_t x484 = 0U;
	static uint32_t t59 = 2U;

	t59 = (x481&(x482<<(x483<=x484)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x485 = INT64_MAX;
	static uint8_t x486 = UINT8_MAX;
	uint8_t x487 = 4U;
	int8_t x488 = -1;
	int64_t t60 = 1LL;

	t60 = (x485&(x486<<(x487<=x488)));

	if (t60 != 255LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x494 = 1889039360LL;
	volatile int8_t x496 = INT8_MAX;

	t61 = (x493&(x494<<(x495<=x496)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x509 = UINT16_MAX;
	static uint64_t x511 = 15LLU;
	int32_t x512 = 7819;
	uint32_t t62 = 1272U;

	t62 = (x509&(x510<<(x511<=x512)));

	if (t62 != 8U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x513 = UINT64_MAX;
	int32_t x514 = 72354224;
	uint16_t x516 = UINT16_MAX;
	uint64_t t63 = 2109LLU;

	t63 = (x513&(x514<<(x515<=x516)));

	if (t63 != 144708448LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x518 = 976091700441008LLU;
	static volatile int16_t x519 = -8;

	t64 = (x517&(x518<<(x519<=x520)));

	if (t64 != 17504LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x529 = -40341;
	int8_t x530 = INT8_MAX;
	volatile int32_t x531 = INT32_MIN;
	int32_t t65 = -7015;

	t65 = (x529&(x530<<(x531<=x532)));

	if (t65 != 106) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x537 = -2;
	uint64_t x538 = UINT64_MAX;
	static uint8_t x539 = UINT8_MAX;
	int16_t x540 = INT16_MAX;
	static uint64_t t66 = 442762LLU;

	t66 = (x537&(x538<<(x539<=x540)));

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x546 = 0;
	volatile int32_t x547 = INT32_MIN;
	volatile uint32_t x548 = UINT32_MAX;
	int32_t t67 = 22448694;

	t67 = (x545&(x546<<(x547<=x548)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x549 = INT8_MIN;
	static int64_t x551 = 1555751481595999LL;
	static int16_t x552 = INT16_MIN;
	static int32_t t68 = 5678740;

	t68 = (x549&(x550<<(x551<=x552)));

	if (t68 != 7424) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x553 = -1LL;
	uint16_t x554 = 1U;
	uint64_t x555 = 61201LLU;
	uint8_t x556 = 8U;
	int64_t t69 = -4367624437004441LL;

	t69 = (x553&(x554<<(x555<=x556)));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x563 = 8U;
	int8_t x564 = -20;
	int32_t t70 = -3791399;

	t70 = (x561&(x562<<(x563<=x564)));

	if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x565 = -756;
	uint64_t x566 = 337610LLU;
	static volatile int8_t x567 = -1;
	static volatile int64_t x568 = INT64_MIN;

	t71 = (x565&(x566<<(x567<=x568)));

	if (t71 != 336904LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x577 = INT64_MIN;
	uint8_t x578 = UINT8_MAX;
	volatile uint64_t x579 = UINT64_MAX;
	volatile int16_t x580 = -612;
	volatile int64_t t72 = -1921074864747LL;

	t72 = (x577&(x578<<(x579<=x580)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x581 = INT8_MAX;
	int32_t x584 = INT32_MIN;
	volatile int32_t t73 = -7;

	t73 = (x581&(x582<<(x583<=x584)));

	if (t73 != 16) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x585 = 3;
	uint16_t x586 = UINT16_MAX;
	uint8_t x587 = 3U;
	uint8_t x588 = 1U;
	volatile int32_t t74 = 548572;

	t74 = (x585&(x586<<(x587<=x588)));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x598 = 28U;
	static volatile uint32_t x599 = 2203698U;
	volatile int16_t x600 = -1;
	static int32_t t75 = 55340086;

	t75 = (x597&(x598<<(x599<=x600)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x601 = 27354232U;
	uint8_t x603 = 125U;
	uint16_t x604 = 106U;

	t76 = (x601&(x602<<(x603<=x604)));

	if (t76 != 27354232U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x609 = 25U;
	static volatile int64_t x611 = INT64_MAX;
	uint16_t x612 = 42U;
	int32_t t77 = 3082970;

	t77 = (x609&(x610<<(x611<=x612)));

	if (t77 != 25) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x619 = INT32_MIN;
	uint8_t x620 = 17U;
	volatile int32_t t78 = -5082;

	t78 = (x617&(x618<<(x619<=x620)));

	if (t78 != 74) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x621 = 2U;
	static uint32_t x623 = UINT32_MAX;
	int8_t x624 = -1;
	volatile int32_t t79 = 297;

	t79 = (x621&(x622<<(x623<=x624)));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x629 = 9;
	volatile uint32_t x630 = 8145408U;
	int64_t x631 = -7730659LL;
	int64_t x632 = INT64_MIN;
	uint32_t t80 = 365U;

	t80 = (x629&(x630<<(x631<=x632)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x633 = -1LL;
	static uint8_t x634 = 41U;
	static int16_t x635 = -3294;
	uint8_t x636 = 17U;

	t81 = (x633&(x634<<(x635<=x636)));

	if (t81 != 82LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x637 = -1;
	int32_t x638 = INT32_MAX;
	uint32_t x640 = 295293U;
	volatile int32_t t82 = INT32_MAX;

	t82 = (x637&(x638<<(x639<=x640)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x645 = -9523;
	volatile int32_t x646 = 82;
	int8_t x648 = 1;
	static volatile int32_t t83 = 179851695;

	t83 = (x645&(x646<<(x647<=x648)));

	if (t83 != 132) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x653 = INT64_MIN;
	int32_t x654 = 0;
	static uint32_t x655 = 587U;

	t84 = (x653&(x654<<(x655<=x656)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x662 = 133U;
	volatile int16_t x663 = INT16_MIN;
	int32_t x664 = -84;
	volatile uint32_t t85 = 424758011U;

	t85 = (x661&(x662<<(x663<=x664)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x665 = 27195LLU;
	uint64_t x666 = 1884138247736657LLU;
	int8_t x668 = -14;
	uint64_t t86 = 282033620546104565LLU;

	t86 = (x665&(x666<<(x667<=x668)));

	if (t86 != 18449LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x673 = INT8_MIN;
	uint32_t x674 = 887219U;
	uint16_t x675 = 6454U;
	volatile int16_t x676 = -1;
	uint32_t t87 = 1480530U;

	t87 = (x673&(x674<<(x675<=x676)));

	if (t87 != 887168U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x677 = INT16_MAX;
	volatile int32_t x678 = 0;
	static uint8_t x679 = 12U;
	int8_t x680 = INT8_MIN;
	int32_t t88 = 580472727;

	t88 = (x677&(x678<<(x679<=x680)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x685 = INT8_MAX;
	int8_t x686 = 0;
	uint64_t x687 = UINT64_MAX;
	volatile int32_t x688 = INT32_MIN;
	int32_t t89 = -41;

	t89 = (x685&(x686<<(x687<=x688)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x689 = -522398930;
	int16_t x690 = 1;
	volatile uint32_t x691 = UINT32_MAX;
	uint64_t x692 = 5386LLU;

	t90 = (x689&(x690<<(x691<=x692)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x694 = UINT8_MAX;
	volatile int16_t x695 = -1;
	static volatile int32_t x696 = INT32_MIN;
	volatile int64_t t91 = -51977254498370815LL;

	t91 = (x693&(x694<<(x695<=x696)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x697 = INT64_MIN;
	static int8_t x698 = 7;
	int8_t x699 = -1;
	volatile int64_t t92 = -578610LL;

	t92 = (x697&(x698<<(x699<=x700)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x709 = 1931042LLU;
	volatile uint32_t x710 = 1950214575U;
	volatile uint16_t x711 = UINT16_MAX;
	uint64_t t93 = 1479954290659092LLU;

	t93 = (x709&(x710<<(x711<=x712)));

	if (t93 != 1925410LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x733 = 4U;
	uint32_t x734 = UINT32_MAX;
	static int64_t x735 = INT64_MAX;
	int8_t x736 = 5;
	uint32_t t94 = 1039917U;

	t94 = (x733&(x734<<(x735<=x736)));

	if (t94 != 4U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x741 = INT32_MIN;
	uint16_t x742 = 15U;
	int8_t x743 = -1;
	static uint32_t x744 = UINT32_MAX;
	static volatile int32_t t95 = 331578;

	t95 = (x741&(x742<<(x743<=x744)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x749 = -107278LL;
	int32_t x750 = 109965273;
	volatile int16_t x751 = 490;
	static int64_t x752 = INT64_MAX;
	static int64_t t96 = 20LL;

	t96 = (x749&(x750<<(x751<=x752)));

	if (t96 != 219831474LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x757 = INT32_MAX;
	uint32_t x758 = UINT32_MAX;
	uint16_t x760 = 3U;

	t97 = (x757&(x758<<(x759<=x760)));

	if (t97 != 2147483647U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x761 = INT64_MIN;
	volatile int8_t x762 = INT8_MAX;
	volatile uint32_t x764 = UINT32_MAX;
	static int64_t t98 = -177759933212LL;

	t98 = (x761&(x762<<(x763<=x764)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x773 = -1LL;
	uint8_t x774 = 0U;
	int64_t x775 = -1LL;
	int16_t x776 = INT16_MIN;
	static volatile int64_t t99 = 769884LL;

	t99 = (x773&(x774<<(x775<=x776)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

