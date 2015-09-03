#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = -1LL;
uint64_t x14 = UINT64_MAX;
volatile int16_t x36 = INT16_MAX;
static int16_t x55 = -255;
volatile uint16_t x59 = UINT16_MAX;
static int64_t t7 = 80392200981247382LL;
uint64_t x63 = 32027572415178037LLU;
uint64_t t8 = 1368108019361LLU;
int8_t x66 = -1;
int16_t x71 = INT16_MAX;
int64_t t11 = 2038468420036380LL;
int8_t x82 = INT8_MIN;
volatile uint8_t x84 = 6U;
int64_t x94 = -350LL;
uint32_t x105 = 704873U;
volatile uint64_t x106 = 130324758LLU;
static int8_t x108 = -1;
uint64_t t15 = 4867640614256447167LLU;
uint32_t x118 = UINT32_MAX;
static uint64_t x129 = 3179523025565LLU;
int64_t t18 = -110LL;
volatile int64_t t19 = -4198086019613LL;
volatile int32_t x144 = INT32_MAX;
volatile uint64_t x148 = 17062LLU;
int8_t x152 = 2;
volatile int8_t x153 = 45;
volatile int16_t x171 = INT16_MIN;
static volatile int8_t x174 = INT8_MIN;
int8_t x175 = 3;
int32_t x184 = -749;
static volatile uint64_t t26 = 18382115323LLU;
int64_t x199 = 50740010105LL;
int32_t x204 = 155205;
int64_t x244 = -1LL;
uint8_t x270 = 62U;
int8_t x298 = -3;
uint8_t x300 = 0U;
static volatile int32_t t38 = -256577553;
int8_t x308 = 0;
int32_t x311 = INT32_MIN;
static volatile int64_t x312 = 1LL;
volatile int16_t x325 = INT16_MIN;
volatile uint32_t t43 = 1U;
static int32_t x329 = -7795;
int8_t x337 = -1;
int32_t x342 = INT32_MIN;
uint32_t x349 = 126393U;
volatile int16_t x364 = INT16_MIN;
uint8_t x379 = UINT8_MAX;
int8_t x383 = INT8_MAX;
volatile uint64_t t53 = UINT64_MAX;
int32_t x387 = -467879;
static uint64_t x390 = UINT64_MAX;
int32_t x399 = 248635;
static int32_t x402 = INT32_MIN;
static uint64_t x440 = 14318226782LLU;
uint8_t x441 = 0U;
int64_t x449 = INT64_MIN;
uint16_t x453 = UINT16_MAX;
int32_t x464 = INT32_MAX;
int16_t x478 = INT16_MAX;
uint32_t x482 = UINT32_MAX;
int16_t x483 = 1041;
volatile uint32_t x484 = 661715U;
int8_t x506 = INT8_MAX;
static uint8_t x530 = 2U;
int16_t x539 = INT16_MAX;
int16_t x541 = 1;
static uint8_t x545 = 15U;
volatile int16_t x548 = INT16_MAX;
int32_t x558 = -1;
volatile uint8_t x559 = UINT8_MAX;
int32_t t85 = -4;
static int32_t x567 = INT32_MIN;
uint64_t t87 = 6113LLU;
volatile int16_t x581 = INT16_MIN;
static uint8_t x598 = 0U;
int64_t x605 = INT64_MAX;
static volatile uint16_t x606 = UINT16_MAX;
volatile uint64_t x607 = 3497143247142LLU;
int64_t x609 = -1LL;
uint32_t x611 = UINT32_MAX;
int64_t x620 = -1LL;
int16_t x624 = 1950;
volatile uint64_t t96 = UINT64_MAX;
volatile uint64_t t98 = 1LLU;


void f0(void) {
	volatile int16_t x1 = 39;
	uint64_t x2 = 39758412984LLU;
	int16_t x3 = INT16_MIN;
	volatile uint8_t x4 = 0U;
	volatile uint64_t t0 = 7541862642997115LLU;

	t0 = (x1|((x2-x3)*x4));

	if (t0 != 39LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MAX;
	static int16_t x10 = -1;
	uint64_t x12 = 786096127335702619LLU;
	volatile uint64_t t1 = 27634855954LLU;

	t1 = (x9|((x10-x11)*x12));

	if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 7;
	int64_t x15 = -1LL;
	volatile uint16_t x16 = UINT16_MAX;
	volatile uint64_t t2 = 264965476426764678LLU;

	t2 = (x13|((x14-x15)*x16));

	if (t2 != 7LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 11U;
	int8_t x22 = -1;
	int8_t x23 = INT8_MIN;
	int16_t x24 = 181;
	volatile int32_t t3 = -1623;

	t3 = (x21|((x22-x23)*x24));

	if (t3 != 22987) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = INT64_MAX;
	static volatile int8_t x34 = INT8_MAX;
	volatile int16_t x35 = INT16_MAX;
	volatile int64_t t4 = -278490008295766015LL;

	t4 = (x33|((x34-x35)*x36));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x49 = -1LL;
	int32_t x50 = INT32_MAX;
	int64_t x51 = 1098245372631LL;
	int8_t x52 = 4;
	int64_t t5 = -24949531713401993LL;

	t5 = (x49|((x50-x51)*x52));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x53 = INT8_MIN;
	static int16_t x54 = INT16_MIN;
	uint16_t x56 = 0U;
	volatile int32_t t6 = -627;

	t6 = (x53|((x54-x55)*x56));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x57 = 27;
	volatile int64_t x58 = 680634LL;
	int32_t x60 = INT32_MIN;

	t7 = (x57|((x58-x59)*x60));

	if (t7 != -1320915044401125LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x61 = 111U;
	static uint16_t x62 = UINT16_MAX;
	uint64_t x64 = 307LLU;

	t8 = (x61|((x62-x63)*x64));

	if (t8 != 8614279342270013567LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x65 = 0U;
	int8_t x67 = INT8_MIN;
	int8_t x68 = 1;
	int32_t t9 = -24576048;

	t9 = (x65|((x66-x67)*x68));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x69 = INT16_MAX;
	volatile uint8_t x70 = 2U;
	int16_t x72 = 20;
	int32_t t10 = -11;

	t10 = (x69|((x70-x71)*x72));

	if (t10 != -622593) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x73 = UINT8_MAX;
	uint8_t x74 = 18U;
	int64_t x75 = -1LL;
	int8_t x76 = INT8_MIN;

	t11 = (x73|((x74-x75)*x76));

	if (t11 != -2305LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x81 = 13U;
	int8_t x83 = INT8_MIN;
	volatile int32_t t12 = -477;

	t12 = (x81|((x82-x83)*x84));

	if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x85 = INT8_MIN;
	static uint16_t x86 = UINT16_MAX;
	static volatile uint64_t x87 = 1417249582630LLU;
	uint32_t x88 = 4274486U;
	static volatile uint64_t t13 = 1742896020LLU;

	t13 = (x85|((x86-x87)*x88));

	if (t13 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x93 = -5;
	uint64_t x95 = 356LLU;
	int64_t x96 = -14407675854LL;
	uint64_t t14 = UINT64_MAX;

	t14 = (x93|((x94-x95)*x96));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x107 = INT8_MIN;

	t15 = (x105|((x106-x107)*x108));

	if (t15 != 18446744073579259755LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x117 = 162513542U;
	int8_t x119 = INT8_MAX;
	static int16_t x120 = INT16_MIN;
	static volatile uint32_t t16 = 3U;

	t16 = (x117|((x118-x119)*x120));

	if (t16 != 166707846U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x130 = -1LL;
	static int32_t x131 = INT32_MIN;
	int16_t x132 = -1;
	uint64_t t17 = 377474609LLU;

	t17 = (x129|((x130-x131)*x132));

	if (t17 != 18446744072809294493LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x133 = 4U;
	int16_t x134 = INT16_MIN;
	int32_t x135 = 0;
	int64_t x136 = -7993LL;

	t18 = (x133|((x134-x135)*x136));

	if (t18 != 261914628LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x137 = INT64_MIN;
	static int64_t x138 = -1LL;
	uint32_t x139 = 3158992U;
	int64_t x140 = -1LL;

	t19 = (x137|((x138-x139)*x140));

	if (t19 != -9223372036851616815LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x141 = 0U;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 5783929754914749223LLU;
	uint64_t t20 = 76289LLU;

	t20 = (x141|((x142-x143)*x144));

	if (t20 != 17907411510590798631LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x145 = -508;
	uint64_t x146 = 31422902LLU;
	int8_t x147 = -1;
	uint64_t t21 = 12878377713404LLU;

	t21 = (x145|((x146-x147)*x148));

	if (t21 != 18446744073709551278LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x149 = INT32_MIN;
	volatile int8_t x150 = -19;
	static int8_t x151 = 5;
	int32_t t22 = -26755302;

	t22 = (x149|((x150-x151)*x152));

	if (t22 != -48) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x154 = UINT8_MAX;
	uint32_t x155 = UINT32_MAX;
	uint64_t x156 = UINT64_MAX;
	static uint64_t t23 = 1321198666383LLU;

	t23 = (x153|((x154-x155)*x156));

	if (t23 != 18446744073709551405LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x169 = UINT64_MAX;
	volatile uint32_t x170 = 1484U;
	static uint8_t x172 = UINT8_MAX;
	uint64_t t24 = UINT64_MAX;

	t24 = (x169|((x170-x171)*x172));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x173 = INT16_MIN;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t25 = 223485;

	t25 = (x173|((x174-x175)*x176));

	if (t25 != -16000) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x181 = 212590267654648674LLU;
	static int16_t x182 = -1;
	volatile int8_t x183 = 7;

	t26 = (x181|((x182-x183)*x184));

	if (t26 != 212590267654649706LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x193 = INT32_MAX;
	int8_t x194 = -50;
	int8_t x195 = INT8_MIN;
	static volatile int16_t x196 = -3711;
	volatile int32_t t27 = 705;

	t27 = (x193|((x194-x195)*x196));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x197 = -1LL;
	volatile uint16_t x198 = 29430U;
	uint16_t x200 = 30U;
	int64_t t28 = -24359312352LL;

	t28 = (x197|((x198-x199)*x200));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x201 = 10U;
	static int32_t x202 = INT32_MAX;
	int64_t x203 = -2350514971037LL;
	int64_t t29 = 331092133475319403LL;

	t29 = (x201|((x202-x203)*x204));

	if (t29 != 365144976279230222LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x233 = -6;
	int32_t x234 = 184408;
	static uint8_t x235 = 2U;
	volatile int8_t x236 = 5;
	int32_t t30 = 933722334;

	t30 = (x233|((x234-x235)*x236));

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MIN;
	volatile uint64_t x243 = 845654LLU;
	uint64_t t31 = 46901188LLU;

	t31 = (x241|((x242-x243)*x244));

	if (t31 != 18446744073709545302LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x245 = 20U;
	uint8_t x246 = 0U;
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = INT16_MIN;
	volatile uint32_t t32 = 3668027U;

	t32 = (x245|((x246-x247)*x248));

	if (t32 != 4294934548U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x253 = UINT64_MAX;
	volatile int32_t x254 = -1;
	volatile int8_t x255 = INT8_MAX;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x253|((x254-x255)*x256));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x269 = INT8_MIN;
	uint64_t x271 = 8188891LLU;
	int64_t x272 = 384090269562LL;
	volatile uint64_t t34 = 803837323LLU;

	t34 = (x269|((x270-x271)*x272));

	if (t34 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x277 = 79;
	static uint16_t x278 = 642U;
	int16_t x279 = INT16_MIN;
	int8_t x280 = -9;
	int32_t t35 = -1948400;

	t35 = (x277|((x278-x279)*x280));

	if (t35 != -300689) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x289 = -1;
	int8_t x290 = INT8_MIN;
	int16_t x291 = 1798;
	uint64_t x292 = 3023480595LLU;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x289|((x290-x291)*x292));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x297 = INT32_MIN;
	int64_t x299 = 3317390799166220904LL;
	int64_t t37 = 814397977150427335LL;

	t37 = (x297|((x298-x299)*x300));

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x301 = INT16_MIN;
	static int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MIN;
	volatile int8_t x304 = 1;

	t38 = (x301|((x302-x303)*x304));

	if (t38 != -32640) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x305 = UINT16_MAX;
	uint64_t x306 = UINT64_MAX;
	int64_t x307 = INT64_MAX;
	volatile uint64_t t39 = 428333LLU;

	t39 = (x305|((x306-x307)*x308));

	if (t39 != 65535LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x309 = 8;
	uint32_t x310 = UINT32_MAX;
	int64_t t40 = 59105547308LL;

	t40 = (x309|((x310-x311)*x312));

	if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int8_t x318 = INT8_MIN;
	uint64_t x319 = 35004644793624778LLU;
	uint64_t x320 = 1365328031281821LLU;
	volatile uint64_t t41 = 102705285874423LLU;

	t41 = (x317|((x318-x319)*x320));

	if (t41 != 2297969637356485119LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x321 = INT32_MIN;
	int16_t x322 = 70;
	uint8_t x323 = 29U;
	int64_t x324 = -1LL;
	volatile int64_t t42 = -2341608359531199LL;

	t42 = (x321|((x322-x323)*x324));

	if (t42 != -41LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x326 = 5189U;
	int16_t x327 = INT16_MIN;
	int32_t x328 = -52922618;

	t43 = (x325|((x326-x327)*x328));

	if (t43 != 4294937758U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x330 = -390135101778738LL;
	int8_t x331 = INT8_MIN;
	volatile int32_t x332 = -1;
	volatile int64_t t44 = -3LL;

	t44 = (x329|((x330-x331)*x332));

	if (t44 != -5185LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x333 = -7;
	static int16_t x334 = -1;
	int8_t x335 = 6;
	uint64_t x336 = 6LLU;
	uint64_t t45 = UINT64_MAX;

	t45 = (x333|((x334-x335)*x336));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x338 = INT8_MIN;
	volatile uint32_t x339 = UINT32_MAX;
	int32_t x340 = -1;
	uint32_t t46 = UINT32_MAX;

	t46 = (x337|((x338-x339)*x340));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x341 = 12463U;
	static int32_t x343 = INT32_MIN;
	uint8_t x344 = 7U;
	int32_t t47 = 42085233;

	t47 = (x341|((x342-x343)*x344));

	if (t47 != 12463) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MIN;
	int16_t x352 = 0;
	int64_t t48 = -3741186808220LL;

	t48 = (x349|((x350-x351)*x352));

	if (t48 != 126393LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x357 = 137747LLU;
	volatile uint16_t x358 = UINT16_MAX;
	int16_t x359 = INT16_MIN;
	volatile int16_t x360 = -5264;
	static volatile uint64_t t49 = 2247025131810260658LLU;

	t49 = (x357|((x358-x359)*x360));

	if (t49 != 18446744073192218259LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x361 = -1LL;
	int64_t x362 = -1LL;
	int32_t x363 = INT32_MAX;
	volatile int64_t t50 = -26920496866733901LL;

	t50 = (x361|((x362-x363)*x364));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x373 = 52615U;
	volatile int16_t x374 = INT16_MIN;
	static int16_t x375 = INT16_MIN;
	static int16_t x376 = INT16_MIN;
	static uint32_t t51 = 2U;

	t51 = (x373|((x374-x375)*x376));

	if (t51 != 52615U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x377 = INT32_MIN;
	int64_t x378 = 28LL;
	int64_t x380 = 30192278229045LL;
	static int64_t t52 = -26999106676LL;

	t52 = (x377|((x378-x379)*x380));

	if (t52 != -340041471LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x381 = -1LL;
	static uint64_t x382 = 5LLU;
	int64_t x384 = INT64_MIN;

	t53 = (x381|((x382-x383)*x384));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x385 = -89;
	int32_t x386 = -165;
	uint32_t x388 = UINT32_MAX;
	uint32_t t54 = UINT32_MAX;

	t54 = (x385|((x386-x387)*x388));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x389 = INT16_MAX;
	uint16_t x391 = 114U;
	volatile uint64_t x392 = 1936596845398231LLU;
	volatile uint64_t t55 = 270606LLU;

	t55 = (x389|((x390-x391)*x392));

	if (t55 != 18224035436488785919LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x397 = INT64_MIN;
	uint32_t x398 = UINT32_MAX;
	volatile uint32_t x400 = 135758U;
	static int64_t t56 = 3583160283655LL;

	t56 = (x397|((x398-x399)*x400));

	if (t56 != -9223372036249363528LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x401 = INT32_MAX;
	uint64_t x403 = UINT64_MAX;
	int64_t x404 = -16235817988580696LL;
	volatile uint64_t t57 = 220715257273LLU;

	t57 = (x401|((x402-x403)*x404));

	if (t57 != 17992659276962725887LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x405 = -1;
	volatile int64_t x406 = -1LL;
	uint64_t x407 = UINT64_MAX;
	uint16_t x408 = 1404U;
	static volatile uint64_t t58 = UINT64_MAX;

	t58 = (x405|((x406-x407)*x408));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x417 = INT16_MIN;
	int64_t x418 = -1LL;
	volatile uint8_t x419 = 0U;
	uint16_t x420 = UINT16_MAX;
	static int64_t t59 = 3372584LL;

	t59 = (x417|((x418-x419)*x420));

	if (t59 != -32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x425 = 418081533LLU;
	int8_t x426 = 59;
	int16_t x427 = INT16_MIN;
	int32_t x428 = -1;
	uint64_t t60 = 12753331789LLU;

	t60 = (x425|((x426-x427)*x428));

	if (t60 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x429 = -1;
	uint16_t x430 = 189U;
	volatile uint8_t x431 = 13U;
	static int8_t x432 = INT8_MIN;
	int32_t t61 = 179551;

	t61 = (x429|((x430-x431)*x432));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x433 = 0U;
	static int16_t x434 = -13873;
	volatile int16_t x435 = INT16_MIN;
	uint32_t x436 = 15U;
	volatile uint32_t t62 = 3455304U;

	t62 = (x433|((x434-x435)*x436));

	if (t62 != 283425U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x437 = INT16_MIN;
	volatile uint8_t x438 = UINT8_MAX;
	volatile int32_t x439 = 278;
	volatile uint64_t t63 = 29LLU;

	t63 = (x437|((x438-x439)*x440));

	if (t63 != 18446744073709522062LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x442 = -963205;
	static uint8_t x443 = UINT8_MAX;
	int16_t x444 = 0;
	volatile int32_t t64 = -361463511;

	t64 = (x441|((x442-x443)*x444));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x445 = UINT32_MAX;
	static volatile int8_t x446 = INT8_MIN;
	uint16_t x447 = 9U;
	uint32_t x448 = 106946294U;
	static uint32_t t65 = UINT32_MAX;

	t65 = (x445|((x446-x447)*x448));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x450 = -385743021416LL;
	int16_t x451 = -92;
	static int32_t x452 = -1;
	volatile int64_t t66 = 76207768827174LL;

	t66 = (x449|((x450-x451)*x452));

	if (t66 != -9223371651111754484LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x454 = 12;
	static volatile uint64_t x455 = UINT64_MAX;
	int64_t x456 = -130777669060938468LL;
	volatile uint64_t t67 = 8753910023777854138LLU;

	t67 = (x453|((x454-x455)*x456));

	if (t67 != 16746634375917404159LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x457 = INT16_MIN;
	volatile uint16_t x458 = 1U;
	int16_t x459 = INT16_MIN;
	uint32_t x460 = 119U;
	static volatile uint32_t t68 = 4U;

	t68 = (x457|((x458-x459)*x460));

	if (t68 != 4294934647U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x461 = INT16_MAX;
	int16_t x462 = -1;
	uint32_t x463 = UINT32_MAX;
	static uint32_t t69 = 53U;

	t69 = (x461|((x462-x463)*x464));

	if (t69 != 32767U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x469 = INT8_MIN;
	int64_t x470 = 436659608156709LL;
	int8_t x471 = -3;
	uint8_t x472 = 18U;
	int64_t t70 = -757717LL;

	t70 = (x469|((x470-x471)*x472));

	if (t70 != -48LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x477 = INT8_MAX;
	int16_t x479 = -235;
	volatile int16_t x480 = -1;
	int32_t t71 = -3440710;

	t71 = (x477|((x478-x479)*x480));

	if (t71 != -32897) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x481 = INT64_MIN;
	static volatile int64_t t72 = -1580255685555780LL;

	t72 = (x481|((x482-x483)*x484));

	if (t72 != -9223372033249315542LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x485 = INT16_MAX;
	uint16_t x486 = 646U;
	static int16_t x487 = INT16_MAX;
	int32_t x488 = -1;
	static int32_t t73 = 449325591;

	t73 = (x485|((x486-x487)*x488));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x489 = 26LL;
	uint16_t x490 = 48U;
	int16_t x491 = 30;
	uint32_t x492 = UINT32_MAX;
	volatile int64_t t74 = 2193555302187LL;

	t74 = (x489|((x490-x491)*x492));

	if (t74 != 4294967294LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x493 = 22U;
	volatile int32_t x494 = -1;
	volatile uint32_t x495 = UINT32_MAX;
	int64_t x496 = INT64_MIN;
	static volatile int64_t t75 = 108LL;

	t75 = (x493|((x494-x495)*x496));

	if (t75 != 22LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x497 = INT64_MIN;
	uint8_t x498 = 23U;
	int8_t x499 = INT8_MAX;
	static int32_t x500 = -1;
	volatile int64_t t76 = -31283748201879LL;

	t76 = (x497|((x498-x499)*x500));

	if (t76 != -9223372036854775704LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x505 = 1U;
	uint64_t x507 = UINT64_MAX;
	int32_t x508 = -1;
	volatile uint64_t t77 = 28854923121LLU;

	t77 = (x505|((x506-x507)*x508));

	if (t77 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x509 = -1196090LL;
	uint64_t x510 = 2031038711506LLU;
	static int16_t x511 = INT16_MIN;
	uint32_t x512 = 86315U;
	uint64_t t78 = 43912008LLU;

	t78 = (x509|((x510-x511)*x512));

	if (t78 != 18446744073709420486LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x521 = INT8_MIN;
	int64_t x522 = -173428429407390LL;
	uint64_t x523 = UINT64_MAX;
	int8_t x524 = -1;
	static uint64_t t79 = 2376LLU;

	t79 = (x521|((x522-x523)*x524));

	if (t79 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x529 = 7544U;
	uint32_t x531 = 24184U;
	int16_t x532 = INT16_MAX;
	uint32_t t80 = 57396U;

	t80 = (x529|((x530-x531)*x532));

	if (t80 != 3502595966U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x537 = UINT8_MAX;
	int16_t x538 = INT16_MAX;
	static volatile uint32_t x540 = 1U;
	uint32_t t81 = 428569U;

	t81 = (x537|((x538-x539)*x540));

	if (t81 != 255U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x542 = INT8_MAX;
	uint64_t x543 = UINT64_MAX;
	volatile uint32_t x544 = 110U;
	static uint64_t t82 = 60153466LLU;

	t82 = (x541|((x542-x543)*x544));

	if (t82 != 14081LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x546 = 265U;
	uint8_t x547 = UINT8_MAX;
	uint32_t t83 = 8954U;

	t83 = (x545|((x546-x547)*x548));

	if (t83 != 327679U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x549 = -1;
	static volatile uint64_t x550 = UINT64_MAX;
	int32_t x551 = INT32_MIN;
	int64_t x552 = -983308413062LL;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x549|((x550-x551)*x552));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x557 = -1;
	uint8_t x560 = 84U;

	t85 = (x557|((x558-x559)*x560));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x565 = 1166U;
	static uint32_t x566 = 971459U;
	int32_t x568 = INT32_MIN;
	volatile uint32_t t86 = 786U;

	t86 = (x565|((x566-x567)*x568));

	if (t86 != 2147484814U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x569 = INT16_MAX;
	uint64_t x570 = 3236221LLU;
	int32_t x571 = INT32_MIN;
	static int32_t x572 = 0;

	t87 = (x569|((x570-x571)*x572));

	if (t87 != 32767LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x577 = -1;
	uint32_t x578 = 722337U;
	int8_t x579 = INT8_MAX;
	volatile int64_t x580 = -683169430143LL;
	static int64_t t88 = -46145443741307LL;

	t88 = (x577|((x578-x579)*x580));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x582 = INT8_MAX;
	volatile int64_t x583 = -44231LL;
	int8_t x584 = INT8_MIN;
	volatile int64_t t89 = 5092945637433LL;

	t89 = (x581|((x582-x583)*x584));

	if (t89 != -8960LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x597 = -3;
	static int64_t x599 = 4865LL;
	static volatile uint8_t x600 = 1U;
	volatile int64_t t90 = 7LL;

	t90 = (x597|((x598-x599)*x600));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x608 = -1;
	volatile uint64_t t91 = 1821LLU;

	t91 = (x605|((x606-x607)*x608));

	if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x610 = INT16_MAX;
	int8_t x612 = INT8_MIN;
	volatile int64_t t92 = -32539LL;

	t92 = (x609|((x610-x611)*x612));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x613 = 24U;
	volatile int64_t x614 = -1LL;
	volatile int16_t x615 = -1;
	volatile int64_t x616 = 581LL;
	volatile int64_t t93 = 1616475075165623804LL;

	t93 = (x613|((x614-x615)*x616));

	if (t93 != 24LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x617 = 0;
	static volatile int16_t x618 = -1;
	uint32_t x619 = 75372947U;
	volatile int64_t t94 = -7935313LL;

	t94 = (x617|((x618-x619)*x620));

	if (t94 != -4219594348LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x621 = 2515920;
	int16_t x622 = INT16_MIN;
	static int16_t x623 = -3;
	static int32_t t95 = -1;

	t95 = (x621|((x622-x623)*x624));

	if (t95 != -63473702) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x625 = -1;
	uint64_t x626 = 61284LLU;
	volatile int16_t x627 = -5521;
	static int64_t x628 = INT64_MIN;

	t96 = (x625|((x626-x627)*x628));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x629 = -1;
	volatile int16_t x630 = INT16_MAX;
	int32_t x631 = -1;
	volatile int32_t x632 = -1;
	volatile int32_t t97 = -302;

	t97 = (x629|((x630-x631)*x632));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x633 = INT8_MIN;
	static volatile uint64_t x634 = 60LLU;
	static int32_t x635 = INT32_MAX;
	int8_t x636 = INT8_MIN;

	t98 = (x633|((x634-x635)*x636));

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x641 = -1469461;
	uint64_t x642 = 319369085724LLU;
	static int32_t x643 = 5415145;
	static int32_t x644 = -1559;
	uint64_t t99 = 82425114LLU;

	t99 = (x641|((x642-x643)*x644));

	if (t99 != 18446744073709419499LLU) { NG(); } else { ; }
	
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

