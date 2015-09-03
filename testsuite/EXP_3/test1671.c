#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
uint64_t x3 = UINT64_MAX;
volatile int32_t t0 = INT32_MAX;
volatile int32_t t1 = 1;
volatile int32_t t2 = -80501;
uint64_t x41 = UINT64_MAX;
volatile int64_t x42 = -1LL;
int32_t x44 = -1;
int16_t x63 = 6;
uint16_t x71 = UINT16_MAX;
int32_t x82 = 203621;
volatile uint8_t x107 = UINT8_MAX;
static int32_t t11 = -650919;
volatile int8_t x138 = -54;
int16_t x140 = 1;
volatile int16_t x142 = INT16_MAX;
uint8_t x147 = 1U;
static int32_t x153 = INT32_MIN;
volatile uint64_t x166 = 4LLU;
static int32_t x174 = INT32_MAX;
static uint16_t x185 = 837U;
uint16_t x191 = 7823U;
int16_t x192 = -1;
volatile uint16_t x194 = 2584U;
uint32_t x199 = 291037U;
int8_t x200 = INT8_MIN;
int32_t t23 = 2;
static int16_t x204 = 1;
static uint64_t x238 = 183396LLU;
static uint16_t x247 = 6U;
int16_t x248 = 9261;
int64_t x249 = INT64_MAX;
uint16_t x250 = 100U;
uint32_t x252 = 5746775U;
uint16_t x273 = 7514U;
int16_t x288 = -2;
uint32_t t33 = UINT32_MAX;
static uint32_t x327 = 128126U;
uint8_t x328 = 87U;
static volatile uint32_t x345 = UINT32_MAX;
int8_t x349 = INT8_MAX;
static uint8_t x352 = UINT8_MAX;
int32_t x353 = INT32_MAX;
static int32_t t41 = -506943;
uint32_t x361 = 47U;
uint64_t x377 = 12647581013214194LLU;
int32_t x380 = 43956287;
int16_t x381 = INT16_MIN;
uint32_t x382 = UINT32_MAX;
uint16_t x396 = UINT16_MAX;
volatile uint32_t x398 = UINT32_MAX;
int16_t x411 = INT16_MIN;
static int16_t x421 = INT16_MAX;
int64_t x432 = INT64_MIN;
uint8_t x434 = UINT8_MAX;
int64_t t51 = 261870LL;
uint64_t x437 = 934452085735419LLU;
uint64_t t52 = 353799178LLU;
uint8_t x458 = UINT8_MAX;
int16_t x474 = INT16_MIN;
volatile int16_t x476 = 10037;
int8_t x482 = INT8_MAX;
int32_t x484 = -1;
int64_t t58 = INT64_MAX;
static int32_t x496 = INT32_MIN;
uint64_t t59 = 52410565544907LLU;
uint8_t x502 = 2U;
int64_t x504 = -3324LL;
int32_t t62 = -663905;
int16_t x522 = INT16_MAX;
int8_t x528 = 0;
int16_t x533 = INT16_MAX;
volatile int32_t x547 = -1;
uint32_t x594 = 64U;
uint16_t x596 = UINT16_MAX;
volatile uint32_t x600 = 999793U;
uint64_t x605 = 4081431940735LLU;
static int8_t x607 = -1;
int16_t x622 = INT16_MIN;
uint32_t x637 = 67038U;
uint32_t t76 = 343627U;
static int64_t x655 = INT64_MAX;
uint16_t x661 = UINT16_MAX;
static int32_t x679 = -1;
volatile int8_t x693 = 1;
volatile int64_t x699 = INT64_MAX;
static volatile int32_t t83 = INT32_MAX;
uint8_t x721 = UINT8_MAX;
static int16_t x748 = 7;
volatile uint32_t t88 = UINT32_MAX;
volatile uint64_t x754 = 1773890845042LLU;
static volatile uint64_t t89 = 198522788031566LLU;
static uint8_t x783 = 44U;
static uint32_t x796 = 3605U;
uint32_t t93 = 224403742U;
volatile uint64_t t95 = 349LLU;
static volatile uint64_t x862 = UINT64_MAX;
int64_t x864 = INT64_MIN;
static volatile int32_t x867 = INT32_MIN;
volatile int32_t x878 = INT32_MIN;
int8_t x881 = 0;


void f0(void) {
	uint8_t x2 = 7U;
	int8_t x4 = 1;

	t0 = ((x1|x2)>>(x3<=x4));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = UINT16_MAX;
	volatile uint8_t x22 = 27U;
	static volatile int16_t x23 = INT16_MAX;
	int8_t x24 = -1;

	t1 = ((x21|x22)>>(x23<=x24));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x25 = 781U;
	uint16_t x26 = UINT16_MAX;
	uint16_t x27 = 3U;
	uint32_t x28 = 3U;

	t2 = ((x25|x26)>>(x27<=x28));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = 0;
	int8_t x34 = INT8_MAX;
	int64_t x35 = 12775LL;
	volatile int16_t x36 = 1384;
	static volatile int32_t t3 = 125818939;

	t3 = ((x33|x34)>>(x35<=x36));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x43 = 3LLU;
	volatile uint64_t t4 = 38320072LLU;

	t4 = ((x41|x42)>>(x43<=x44));

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x61 = INT64_MIN;
	static volatile uint64_t x62 = 181528572547491515LLU;
	int64_t x64 = INT64_MIN;
	uint64_t t5 = 21993871LLU;

	t5 = ((x61|x62)>>(x63<=x64));

	if (t5 != 9404900609402267323LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x69 = 0U;
	int8_t x70 = INT8_MAX;
	uint16_t x72 = 357U;
	volatile int32_t t6 = 0;

	t6 = ((x69|x70)>>(x71<=x72));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x73 = INT8_MAX;
	static uint32_t x74 = UINT32_MAX;
	int16_t x75 = -4900;
	uint8_t x76 = 0U;
	static uint32_t t7 = 0U;

	t7 = ((x73|x74)>>(x75<=x76));

	if (t7 != 2147483647U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x81 = UINT8_MAX;
	int16_t x83 = -1;
	int64_t x84 = 16813740112908715LL;
	volatile int32_t t8 = 6758987;

	t8 = ((x81|x82)>>(x83<=x84));

	if (t8 != 101887) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x105 = 7535380U;
	int32_t x106 = INT32_MIN;
	uint64_t x108 = UINT64_MAX;
	volatile uint32_t t9 = 7U;

	t9 = ((x105|x106)>>(x107<=x108));

	if (t9 != 1077509514U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x109 = 7955379457LLU;
	uint32_t x110 = 1103409U;
	uint16_t x111 = 22U;
	static volatile uint64_t x112 = 1321177839152LLU;
	volatile uint64_t t10 = 6507418463163LLU;

	t10 = ((x109|x110)>>(x111<=x112));

	if (t10 != 3978230680LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x121 = UINT8_MAX;
	static volatile int32_t x122 = 957;
	int32_t x123 = INT32_MAX;
	static int32_t x124 = 1669;

	t11 = ((x121|x122)>>(x123<=x124));

	if (t11 != 1023) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x133 = 640754800U;
	uint32_t x134 = UINT32_MAX;
	int8_t x135 = -1;
	static int32_t x136 = -3;
	uint32_t t12 = UINT32_MAX;

	t12 = ((x133|x134)>>(x135<=x136));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x137 = UINT64_MAX;
	uint32_t x139 = 102492925U;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = ((x137|x138)>>(x139<=x140));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x141 = 192532U;
	int64_t x143 = -1LL;
	volatile int64_t x144 = INT64_MIN;
	volatile uint32_t t14 = 782676U;

	t14 = ((x141|x142)>>(x143<=x144));

	if (t14 != 196607U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x145 = 540U;
	uint64_t x146 = UINT64_MAX;
	volatile int16_t x148 = INT16_MIN;
	static uint64_t t15 = UINT64_MAX;

	t15 = ((x145|x146)>>(x147<=x148));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x154 = 15131827387439178LLU;
	uint32_t x155 = 9U;
	int64_t x156 = INT64_MIN;
	volatile uint64_t t16 = 51876LLU;

	t16 = ((x153|x154)>>(x155<=x156));

	if (t16 != 18446744072035702858LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x157 = 6U;
	int32_t x158 = INT32_MIN;
	static uint8_t x159 = 1U;
	uint16_t x160 = 9U;
	static uint32_t t17 = 409U;

	t17 = ((x157|x158)>>(x159<=x160));

	if (t17 != 1073741827U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x165 = 0U;
	int32_t x167 = -1;
	int16_t x168 = 1;
	uint64_t t18 = 10LLU;

	t18 = ((x165|x166)>>(x167<=x168));

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x173 = 18101;
	uint16_t x175 = 22U;
	uint8_t x176 = 5U;
	volatile int32_t t19 = INT32_MAX;

	t19 = ((x173|x174)>>(x175<=x176));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x186 = 14532264669993LLU;
	uint8_t x187 = 81U;
	volatile int8_t x188 = INT8_MAX;
	volatile uint64_t t20 = 50352LLU;

	t20 = ((x185|x186)>>(x187<=x188));

	if (t20 != 7266132335030LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x189 = -15395;
	static uint32_t x190 = 25U;
	uint32_t t21 = 220156U;

	t21 = ((x189|x190)>>(x191<=x192));

	if (t21 != 4294951901U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x193 = INT64_MAX;
	int64_t x195 = INT64_MAX;
	int64_t x196 = -1LL;
	int64_t t22 = INT64_MAX;

	t22 = ((x193|x194)>>(x195<=x196));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x197 = 3332;
	static int16_t x198 = 368;

	t23 = ((x197|x198)>>(x199<=x200));

	if (t23 != 1722) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x201 = UINT64_MAX;
	uint32_t x202 = UINT32_MAX;
	uint64_t x203 = UINT64_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = ((x201|x202)>>(x203<=x204));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x209 = INT64_MAX;
	uint32_t x210 = UINT32_MAX;
	volatile int64_t x211 = 3712LL;
	static volatile int32_t x212 = -14157;
	volatile int64_t t25 = INT64_MAX;

	t25 = ((x209|x210)>>(x211<=x212));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x237 = UINT64_MAX;
	int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MIN;
	uint64_t t26 = UINT64_MAX;

	t26 = ((x237|x238)>>(x239<=x240));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x245 = 5;
	uint32_t x246 = 43842U;
	uint32_t t27 = 694877500U;

	t27 = ((x245|x246)>>(x247<=x248));

	if (t27 != 21923U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x251 = UINT8_MAX;
	volatile int64_t t28 = -1920LL;

	t28 = ((x249|x250)>>(x251<=x252));

	if (t28 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x274 = 0;
	static int64_t x275 = INT64_MIN;
	uint32_t x276 = 19022988U;
	static int32_t t29 = -251566;

	t29 = ((x273|x274)>>(x275<=x276));

	if (t29 != 3757) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x285 = UINT32_MAX;
	int16_t x286 = -6701;
	volatile int32_t x287 = -1;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = ((x285|x286)>>(x287<=x288));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x293 = INT64_MAX;
	static int16_t x294 = INT16_MAX;
	uint8_t x295 = 59U;
	int16_t x296 = 1331;
	static volatile int64_t t31 = 144178LL;

	t31 = ((x293|x294)>>(x295<=x296));

	if (t31 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x297 = 128483451307863550LLU;
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = -1;
	static int8_t x300 = 1;
	volatile uint64_t t32 = 637454134159214LLU;

	t32 = ((x297|x298)>>(x299<=x300));

	if (t32 != 64241725653931775LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x301 = INT8_MIN;
	volatile uint32_t x302 = UINT32_MAX;
	static int32_t x303 = INT32_MAX;
	static volatile int64_t x304 = -9LL;

	t33 = ((x301|x302)>>(x303<=x304));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x309 = 46009512034435294LLU;
	int64_t x310 = INT64_MIN;
	static int8_t x311 = INT8_MIN;
	int32_t x312 = 34987465;
	volatile uint64_t t34 = 102588198630789700LLU;

	t34 = ((x309|x310)>>(x311<=x312));

	if (t34 != 4634690774444605551LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x317 = INT32_MAX;
	uint32_t x318 = 2303U;
	volatile uint64_t x319 = UINT64_MAX;
	int16_t x320 = -1;
	uint32_t t35 = 5939U;

	t35 = ((x317|x318)>>(x319<=x320));

	if (t35 != 1073741823U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x325 = UINT16_MAX;
	static uint16_t x326 = UINT16_MAX;
	volatile int32_t t36 = 2716;

	t36 = ((x325|x326)>>(x327<=x328));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x329 = 27323U;
	volatile int16_t x330 = INT16_MAX;
	static volatile uint64_t x331 = 9080314850786LLU;
	int32_t x332 = -1232;
	int32_t t37 = -21450999;

	t37 = ((x329|x330)>>(x331<=x332));

	if (t37 != 16383) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x333 = 3815U;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = 7656;
	uint8_t x336 = 28U;
	int32_t t38 = 26729;

	t38 = ((x333|x334)>>(x335<=x336));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x346 = 2;
	int16_t x347 = INT16_MAX;
	uint64_t x348 = 1665453059159798217LLU;
	uint32_t t39 = 9U;

	t39 = ((x345|x346)>>(x347<=x348));

	if (t39 != 2147483647U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x350 = 565;
	int64_t x351 = 3733LL;
	static volatile int32_t t40 = 54;

	t40 = ((x349|x350)>>(x351<=x352));

	if (t40 != 639) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x354 = INT32_MAX;
	int32_t x355 = INT32_MIN;
	volatile int64_t x356 = 949871908140LL;

	t41 = ((x353|x354)>>(x355<=x356));

	if (t41 != 1073741823) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x362 = INT32_MIN;
	static volatile int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;
	static uint32_t t42 = 608U;

	t42 = ((x361|x362)>>(x363<=x364));

	if (t42 != 1073741847U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x378 = 243151LLU;
	volatile int32_t x379 = INT32_MAX;
	uint64_t t43 = 58172497959484LLU;

	t43 = ((x377|x378)>>(x379<=x380));

	if (t43 != 12647581013227519LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x383 = -1LL;
	volatile int8_t x384 = INT8_MIN;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = ((x381|x382)>>(x383<=x384));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x393 = INT16_MAX;
	volatile uint8_t x394 = 118U;
	static int64_t x395 = INT64_MIN;
	int32_t t45 = 10456;

	t45 = ((x393|x394)>>(x395<=x396));

	if (t45 != 16383) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x397 = 4069919813672412898LLU;
	int32_t x399 = 63;
	int64_t x400 = -1LL;
	uint64_t t46 = 38761348606310705LLU;

	t46 = ((x397|x398)>>(x399<=x400));

	if (t46 != 4069919814372556799LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x405 = 20203604U;
	static volatile int64_t x406 = 195041151804581897LL;
	static int8_t x407 = -1;
	static uint64_t x408 = UINT64_MAX;
	static volatile int64_t t47 = -19887315868LL;

	t47 = ((x405|x406)>>(x407<=x408));

	if (t47 != 97520575902823470LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x409 = 3590742886401320310LLU;
	volatile int64_t x410 = -1LL;
	uint32_t x412 = UINT32_MAX;
	uint64_t t48 = 2060622180538180442LLU;

	t48 = ((x409|x410)>>(x411<=x412));

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x422 = INT32_MAX;
	int8_t x423 = -1;
	static int16_t x424 = INT16_MIN;
	int32_t t49 = INT32_MAX;

	t49 = ((x421|x422)>>(x423<=x424));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x429 = 6;
	static volatile int8_t x430 = 14;
	uint8_t x431 = 3U;
	volatile int32_t t50 = 3;

	t50 = ((x429|x430)>>(x431<=x432));

	if (t50 != 14) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x433 = INT64_MAX;
	int16_t x435 = -167;
	int16_t x436 = -1;

	t51 = ((x433|x434)>>(x435<=x436));

	if (t51 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x438 = 522858094153LL;
	int8_t x439 = -1;
	int64_t x440 = -369568446LL;

	t52 = ((x437|x438)>>(x439<=x440));

	if (t52 != 934557987995643LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x449 = 700U;
	static uint8_t x450 = 0U;
	uint16_t x451 = UINT16_MAX;
	static int16_t x452 = 0;
	volatile uint32_t t53 = 31U;

	t53 = ((x449|x450)>>(x451<=x452));

	if (t53 != 700U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x453 = 36U;
	volatile int64_t x454 = 728158LL;
	uint32_t x455 = UINT32_MAX;
	static int64_t x456 = -1LL;
	volatile int64_t t54 = 227372361256243LL;

	t54 = ((x453|x454)>>(x455<=x456));

	if (t54 != 728190LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x457 = 27U;
	static int16_t x459 = -1;
	int32_t x460 = INT32_MIN;
	volatile uint32_t t55 = 449531U;

	t55 = ((x457|x458)>>(x459<=x460));

	if (t55 != 255U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x465 = 4709U;
	int64_t x466 = INT64_MAX;
	static int32_t x467 = -27;
	uint8_t x468 = UINT8_MAX;
	volatile int64_t t56 = -55564780299LL;

	t56 = ((x465|x466)>>(x467<=x468));

	if (t56 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x473 = 756741099143063LLU;
	uint16_t x475 = 13837U;
	uint64_t t57 = 12525015519LLU;

	t57 = ((x473|x474)>>(x475<=x476));

	if (t57 != 18446744073709535127LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x481 = INT64_MAX;
	static uint8_t x483 = 0U;

	t58 = ((x481|x482)>>(x483<=x484));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x493 = -26;
	static uint64_t x494 = 145261589274LLU;
	uint64_t x495 = 52045748766656LLU;

	t59 = ((x493|x494)>>(x495<=x496));

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x501 = 171U;
	volatile int64_t x503 = INT64_MAX;
	volatile int32_t t60 = -232746033;

	t60 = ((x501|x502)>>(x503<=x504));

	if (t60 != 171) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x513 = 55;
	volatile uint8_t x514 = 85U;
	static volatile int16_t x515 = -1;
	int32_t x516 = INT32_MAX;
	static int32_t t61 = 27;

	t61 = ((x513|x514)>>(x515<=x516));

	if (t61 != 59) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x517 = UINT8_MAX;
	uint16_t x518 = 14290U;
	int64_t x519 = -1LL;
	volatile int64_t x520 = 13553976600752018LL;

	t62 = ((x517|x518)>>(x519<=x520));

	if (t62 != 7167) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x521 = INT8_MAX;
	volatile int32_t x523 = INT32_MIN;
	uint8_t x524 = 38U;
	volatile int32_t t63 = -663276343;

	t63 = ((x521|x522)>>(x523<=x524));

	if (t63 != 16383) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x525 = UINT32_MAX;
	int16_t x526 = INT16_MIN;
	static uint8_t x527 = 37U;
	uint32_t t64 = UINT32_MAX;

	t64 = ((x525|x526)>>(x527<=x528));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x534 = 7U;
	int16_t x535 = INT16_MAX;
	volatile int8_t x536 = 3;
	int32_t t65 = -3674;

	t65 = ((x533|x534)>>(x535<=x536));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x545 = 138;
	volatile uint32_t x546 = 2562498U;
	int8_t x548 = INT8_MAX;
	static volatile uint32_t t66 = 57935U;

	t66 = ((x545|x546)>>(x547<=x548));

	if (t66 != 1281253U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x553 = UINT16_MAX;
	uint64_t x554 = 11039827465LLU;
	static int16_t x555 = -1;
	int16_t x556 = INT16_MIN;
	volatile uint64_t t67 = 796922725LLU;

	t67 = ((x553|x554)>>(x555<=x556));

	if (t67 != 11039866879LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x557 = 2575681175LL;
	int16_t x558 = 177;
	uint16_t x559 = UINT16_MAX;
	int16_t x560 = -1353;
	volatile int64_t t68 = -12002715LL;

	t68 = ((x557|x558)>>(x559<=x560));

	if (t68 != 2575681207LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x561 = INT8_MIN;
	uint64_t x562 = 53352803LLU;
	static volatile uint64_t x563 = 4806779967833191LLU;
	int32_t x564 = INT32_MIN;
	volatile uint64_t t69 = 152LLU;

	t69 = ((x561|x562)>>(x563<=x564));

	if (t69 != 9223372036854775793LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x593 = UINT8_MAX;
	int64_t x595 = INT64_MIN;
	volatile uint32_t t70 = 13306664U;

	t70 = ((x593|x594)>>(x595<=x596));

	if (t70 != 127U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x597 = 6U;
	volatile uint64_t x598 = 6497141717280LLU;
	int16_t x599 = -494;
	uint64_t t71 = 276470621178967580LLU;

	t71 = ((x597|x598)>>(x599<=x600));

	if (t71 != 6497141717286LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x606 = INT8_MIN;
	int8_t x608 = INT8_MAX;
	static volatile uint64_t t72 = 3422153342896LLU;

	t72 = ((x605|x606)>>(x607<=x608));

	if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x617 = UINT64_MAX;
	static volatile int16_t x618 = -120;
	int32_t x619 = -1;
	static volatile int16_t x620 = INT16_MIN;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x617|x618)>>(x619<=x620));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x621 = 315626026LLU;
	uint8_t x623 = 3U;
	int16_t x624 = -1;
	uint64_t t74 = 8024871743903LLU;

	t74 = ((x621|x622)>>(x623<=x624));

	if (t74 != 18446744073709523498LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x625 = 278276399700198343LLU;
	volatile int32_t x626 = 2;
	int16_t x627 = -34;
	int8_t x628 = INT8_MIN;
	static uint64_t t75 = 23693525427851LLU;

	t75 = ((x625|x626)>>(x627<=x628));

	if (t75 != 278276399700198343LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x638 = 1;
	int8_t x639 = 1;
	uint64_t x640 = 4LLU;

	t76 = ((x637|x638)>>(x639<=x640));

	if (t76 != 33519U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x653 = INT16_MAX;
	uint8_t x654 = 3U;
	int8_t x656 = 0;
	int32_t t77 = -11904;

	t77 = ((x653|x654)>>(x655<=x656));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x657 = 1U;
	int8_t x658 = INT8_MIN;
	static int8_t x659 = 17;
	static int16_t x660 = -1;
	volatile uint32_t t78 = 17U;

	t78 = ((x657|x658)>>(x659<=x660));

	if (t78 != 4294967169U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x662 = 8LLU;
	int8_t x663 = INT8_MIN;
	int8_t x664 = INT8_MIN;
	volatile uint64_t t79 = 1287646543768LLU;

	t79 = ((x661|x662)>>(x663<=x664));

	if (t79 != 32767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x677 = INT32_MAX;
	uint16_t x678 = 0U;
	volatile uint64_t x680 = 910888504672034LLU;
	int32_t t80 = INT32_MAX;

	t80 = ((x677|x678)>>(x679<=x680));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x685 = INT64_MAX;
	uint64_t x686 = 162272913LLU;
	int16_t x687 = INT16_MIN;
	int8_t x688 = INT8_MIN;
	volatile uint64_t t81 = 299124LLU;

	t81 = ((x685|x686)>>(x687<=x688));

	if (t81 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x694 = 2150269LL;
	uint64_t x695 = UINT64_MAX;
	int64_t x696 = -530360072873872LL;
	volatile int64_t t82 = -3633840295777LL;

	t82 = ((x693|x694)>>(x695<=x696));

	if (t82 != 2150269LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x697 = INT32_MAX;
	int32_t x698 = INT32_MAX;
	volatile uint32_t x700 = UINT32_MAX;

	t83 = ((x697|x698)>>(x699<=x700));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x709 = INT16_MAX;
	int64_t x710 = 85517LL;
	int8_t x711 = INT8_MIN;
	int64_t x712 = INT64_MIN;
	static int64_t t84 = 68466460054224LL;

	t84 = ((x709|x710)>>(x711<=x712));

	if (t84 != 98303LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x717 = 7148570377849LL;
	volatile uint8_t x718 = 98U;
	static int32_t x719 = INT32_MIN;
	uint8_t x720 = 61U;
	int64_t t85 = 2136LL;

	t85 = ((x717|x718)>>(x719<=x720));

	if (t85 != 3574285188925LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x722 = 3070658276672LL;
	volatile int32_t x723 = INT32_MAX;
	volatile int32_t x724 = INT32_MIN;
	volatile int64_t t86 = 7431309799769363LL;

	t86 = ((x721|x722)>>(x723<=x724));

	if (t86 != 3070658276863LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x737 = 38454LL;
	uint16_t x738 = 6231U;
	uint8_t x739 = 3U;
	int64_t x740 = -1LL;
	static int64_t t87 = 538605LL;

	t87 = ((x737|x738)>>(x739<=x740));

	if (t87 != 40567LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x745 = UINT32_MAX;
	int8_t x746 = INT8_MIN;
	uint32_t x747 = 1772482U;

	t88 = ((x745|x746)>>(x747<=x748));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x753 = -1;
	int64_t x755 = INT64_MIN;
	static int16_t x756 = INT16_MAX;

	t89 = ((x753|x754)>>(x755<=x756));

	if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x765 = INT8_MAX;
	static uint32_t x766 = 17U;
	int32_t x767 = INT32_MIN;
	uint8_t x768 = 1U;
	static volatile uint32_t t90 = 15677027U;

	t90 = ((x765|x766)>>(x767<=x768));

	if (t90 != 63U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x769 = 164;
	int32_t x770 = INT32_MAX;
	volatile uint64_t x771 = 7847633632LLU;
	uint64_t x772 = 2498905979234LLU;
	int32_t t91 = -3231;

	t91 = ((x769|x770)>>(x771<=x772));

	if (t91 != 1073741823) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x781 = 0U;
	int8_t x782 = 54;
	int64_t x784 = INT64_MAX;
	static int32_t t92 = 415648735;

	t92 = ((x781|x782)>>(x783<=x784));

	if (t92 != 27) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x793 = 738115U;
	int8_t x794 = INT8_MAX;
	static uint64_t x795 = 11LLU;

	t93 = ((x793|x794)>>(x795<=x796));

	if (t93 != 369087U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x817 = INT64_MAX;
	uint64_t x818 = 6239362LLU;
	volatile int16_t x819 = INT16_MAX;
	static int32_t x820 = INT32_MIN;
	uint64_t t94 = 0LLU;

	t94 = ((x817|x818)>>(x819<=x820));

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x837 = 4429LLU;
	int64_t x838 = 8671433148438LL;
	uint64_t x839 = 326881LLU;
	static int64_t x840 = INT64_MIN;

	t95 = ((x837|x838)>>(x839<=x840));

	if (t95 != 4335716576431LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x861 = -1;
	uint32_t x863 = 33560U;
	uint64_t t96 = UINT64_MAX;

	t96 = ((x861|x862)>>(x863<=x864));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x865 = UINT64_MAX;
	uint64_t x866 = 2809LLU;
	static int8_t x868 = 47;
	volatile uint64_t t97 = 223132LLU;

	t97 = ((x865|x866)>>(x867<=x868));

	if (t97 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x877 = UINT64_MAX;
	static int64_t x879 = -1LL;
	volatile uint16_t x880 = 1U;
	uint64_t t98 = 511LLU;

	t98 = ((x877|x878)>>(x879<=x880));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x882 = 187U;
	volatile int32_t x883 = -1;
	uint8_t x884 = 1U;
	int32_t t99 = 219573;

	t99 = ((x881|x882)>>(x883<=x884));

	if (t99 != 93) { NG(); } else { ; }
	
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

