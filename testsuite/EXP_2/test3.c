#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 5;
int16_t x8 = 58;
int16_t x20 = -1;
int8_t x28 = INT8_MIN;
uint16_t x29 = 16241U;
uint16_t x86 = 102U;
volatile int8_t x90 = 23;
static uint64_t x91 = UINT64_MAX;
int16_t x92 = -1;
uint64_t t12 = 17085LLU;
int16_t x96 = INT16_MIN;
uint32_t x102 = 26U;
uint32_t x105 = UINT32_MAX;
int32_t x149 = INT32_MIN;
uint16_t x151 = 6642U;
int32_t x177 = INT32_MIN;
uint64_t x190 = UINT64_MAX;
int16_t x192 = -1;
static uint16_t x199 = 30U;
static int32_t t28 = 172;
static uint8_t x202 = 62U;
int8_t x203 = INT8_MIN;
uint64_t x214 = 14499657214LLU;
static int16_t x233 = -1;
int16_t x249 = -4;
int32_t x252 = INT32_MAX;
volatile uint32_t t35 = 4090044U;
static int16_t x259 = INT16_MAX;
static int16_t x260 = -1;
static uint8_t x276 = 24U;
uint8_t x286 = 21U;
int32_t x288 = -839;
int8_t x290 = INT8_MAX;
static uint32_t x291 = 82U;
int8_t x316 = INT8_MIN;
volatile int8_t x317 = INT8_MIN;
int8_t x326 = -5;
uint8_t x334 = 3U;
int64_t x344 = -18LL;
int16_t x347 = 1;
int32_t x350 = INT32_MIN;
static uint8_t x358 = 26U;
int8_t x359 = INT8_MAX;
volatile int64_t t52 = -324175550769LL;
int8_t x368 = INT8_MIN;
int8_t x369 = INT8_MIN;
volatile int8_t x386 = INT8_MIN;
int32_t x389 = INT32_MIN;
static volatile int64_t t63 = -6241270353738LL;
static volatile uint64_t x427 = 7LLU;
uint64_t t64 = 904749942809328LLU;
volatile int8_t x431 = -1;
int64_t x433 = -1LL;
int64_t t66 = 1LL;
volatile uint64_t t68 = 2191LLU;
volatile uint64_t x482 = UINT64_MAX;
uint8_t x488 = UINT8_MAX;
int64_t x489 = -1LL;
volatile int64_t x493 = INT64_MIN;
int8_t x494 = -1;
static volatile uint8_t x497 = 1U;
int16_t x533 = INT16_MIN;
uint32_t x539 = UINT32_MAX;
static int32_t x540 = 0;
static volatile uint64_t x544 = 216706204LLU;
int8_t x552 = 0;
int64_t t81 = 0LL;
int32_t x557 = INT32_MIN;
int32_t t82 = 46709832;
volatile int32_t t83 = -123177;
int32_t x600 = -498;
int64_t x610 = -1LL;
volatile int64_t t89 = 668LL;
static int16_t x620 = 5033;
int64_t t90 = 68LL;
uint32_t x629 = 641U;
uint32_t x650 = UINT32_MAX;
int8_t x654 = INT8_MAX;
volatile int16_t x657 = INT16_MIN;
uint64_t x686 = 4790LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile uint32_t x2 = 480092300U;
	int32_t x4 = -1;
	int64_t t0 = 28LL;

	t0 = ((x1+(x2+x3))*x4);

	if (t0 != 9223372036374683503LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 90U;
	int32_t x6 = INT32_MIN;
	uint32_t x7 = UINT32_MAX;
	volatile uint32_t t1 = 581U;

	t1 = ((x5+(x6+x7))*x8);

	if (t1 != 5162U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 15U;
	int64_t x10 = -1LL;
	static int8_t x11 = INT8_MIN;
	volatile int8_t x12 = -1;
	static int64_t t2 = -5799769122LL;

	t2 = ((x9+(x10+x11))*x12);

	if (t2 != 114LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = 4424555482480LL;
	uint32_t x18 = 255871U;
	volatile int8_t x19 = INT8_MIN;
	volatile int64_t t3 = 919221468990053LL;

	t3 = ((x17+(x18+x19))*x20);

	if (t3 != -4424555738223LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int32_t x22 = INT32_MAX;
	static volatile int8_t x23 = 0;
	static int16_t x24 = INT16_MAX;
	volatile int32_t t4 = -722;

	t4 = ((x21+(x22+x23))*x24);

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 158U;
	uint32_t x26 = 1453U;
	uint16_t x27 = 0U;
	volatile uint32_t t5 = 88U;

	t5 = ((x25+(x26+x27))*x28);

	if (t5 != 4294761088U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MIN;
	int64_t x31 = 175840378921025LL;
	uint64_t x32 = 27791117980531LLU;
	volatile uint64_t t6 = 53187179092293LLU;

	t6 = ((x29+(x30+x31))*x32);

	if (t6 != 12580820467084491126LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = 54;
	int16_t x34 = 1033;
	uint64_t x35 = UINT64_MAX;
	static volatile int8_t x36 = -33;
	volatile uint64_t t7 = 626609063927186LLU;

	t7 = ((x33+(x34+x35))*x36);

	if (t7 != 18446744073709515778LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = 4025U;
	uint64_t x50 = UINT64_MAX;
	int8_t x51 = INT8_MAX;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t8 = 3540111LLU;

	t8 = ((x49+(x50+x51))*x52);

	if (t8 != 18446744073709547465LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x61 = 220LLU;
	int32_t x62 = -16686783;
	int32_t x63 = -1;
	int16_t x64 = -1;
	volatile uint64_t t9 = 61283676608603808LLU;

	t9 = ((x61+(x62+x63))*x64);

	if (t9 != 16686564LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x81 = INT8_MIN;
	int8_t x82 = -8;
	int8_t x83 = INT8_MIN;
	volatile uint8_t x84 = 0U;
	volatile int32_t t10 = -63361053;

	t10 = ((x81+(x82+x83))*x84);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x85 = -1;
	int16_t x87 = -1;
	uint16_t x88 = 2U;
	volatile int32_t t11 = 28403;

	t11 = ((x85+(x86+x87))*x88);

	if (t11 != 200) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x89 = 516U;

	t12 = ((x89+(x90+x91))*x92);

	if (t12 != 18446744073709551078LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x93 = 3U;
	volatile int8_t x94 = 13;
	volatile int8_t x95 = -2;
	int32_t t13 = -15251;

	t13 = ((x93+(x94+x95))*x96);

	if (t13 != -458752) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x101 = INT32_MIN;
	int16_t x103 = INT16_MAX;
	int8_t x104 = -1;
	volatile uint32_t t14 = 126799928U;

	t14 = ((x101+(x102+x103))*x104);

	if (t14 != 2147450855U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x106 = INT8_MIN;
	static uint32_t x107 = UINT32_MAX;
	uint16_t x108 = UINT16_MAX;
	uint32_t t15 = 1437285U;

	t15 = ((x105+(x106+x107))*x108);

	if (t15 != 4286447746U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = 1LLU;
	uint8_t x123 = 19U;
	volatile int64_t x124 = INT64_MAX;
	uint64_t t16 = 11158123650LLU;

	t16 = ((x121+(x122+x123))*x124);

	if (t16 != 32748LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = -446487704217103041LL;
	uint64_t x127 = 728LLU;
	int64_t x128 = -1LL;
	static volatile uint64_t t17 = 245205997844237112LLU;

	t17 = ((x125+(x126+x127))*x128);

	if (t17 != 9669859741071878121LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x129 = INT32_MIN;
	volatile int64_t x130 = -1LL;
	uint32_t x131 = 498U;
	int32_t x132 = -1;
	volatile int64_t t18 = -2350444831791814885LL;

	t18 = ((x129+(x130+x131))*x132);

	if (t18 != 2147483151LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x137 = INT16_MIN;
	uint8_t x138 = 0U;
	uint8_t x139 = UINT8_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t19 = 5;

	t19 = ((x137+(x138+x139))*x140);

	if (t19 != 1065385984) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x141 = 9;
	int32_t x142 = INT32_MIN;
	static int16_t x143 = 1359;
	uint64_t x144 = 1060961771176471301LLU;
	uint64_t t20 = 2664680863618LLU;

	t20 = ((x141+(x142+x143))*x144);

	if (t20 != 11856368702191952568LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x150 = 2129;
	int64_t x152 = -1LL;
	int64_t t21 = -130LL;

	t21 = ((x149+(x150+x151))*x152);

	if (t21 != 2147474877LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x153 = -1LL;
	static int32_t x154 = INT32_MIN;
	uint16_t x155 = 482U;
	int8_t x156 = INT8_MIN;
	int64_t t22 = -2647299405LL;

	t22 = ((x153+(x154+x155))*x156);

	if (t22 != 274877845376LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x173 = -1;
	int8_t x174 = INT8_MIN;
	static uint16_t x175 = 0U;
	int16_t x176 = -15339;
	volatile int32_t t23 = -907204861;

	t23 = ((x173+(x174+x175))*x176);

	if (t23 != 1978731) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x178 = -6;
	static uint32_t x179 = UINT32_MAX;
	volatile int8_t x180 = 2;
	static volatile uint32_t t24 = 167U;

	t24 = ((x177+(x178+x179))*x180);

	if (t24 != 4294967282U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x181 = 1U;
	volatile uint64_t x182 = 48598490718LLU;
	int32_t x183 = 1127238;
	int16_t x184 = INT16_MIN;
	static volatile uint64_t t25 = 4LLU;

	t25 = ((x181+(x182+x183))*x184);

	if (t25 != 18445151561428336640LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x185 = 10;
	volatile uint64_t x186 = 2261085LLU;
	volatile int8_t x187 = -1;
	static int64_t x188 = -1LL;
	static volatile uint64_t t26 = 4846621425655LLU;

	t26 = ((x185+(x186+x187))*x188);

	if (t26 != 18446744073707290522LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x189 = -64;
	uint8_t x191 = UINT8_MAX;
	uint64_t t27 = 2292346436834625730LLU;

	t27 = ((x189+(x190+x191))*x192);

	if (t27 != 18446744073709551426LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x197 = UINT16_MAX;
	int16_t x198 = INT16_MAX;
	int32_t x200 = -1;

	t28 = ((x197+(x198+x199))*x200);

	if (t28 != -98332) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x201 = UINT64_MAX;
	uint64_t x204 = 3103539961LLU;
	volatile uint64_t t29 = 173900980LLU;

	t29 = ((x201+(x202+x203))*x204);

	if (t29 != 18446743865772374229LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x205 = 21284U;
	uint32_t x206 = UINT32_MAX;
	int16_t x207 = -1;
	uint8_t x208 = 2U;
	uint32_t t30 = 38010U;

	t30 = ((x205+(x206+x207))*x208);

	if (t30 != 42564U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x213 = -3;
	volatile int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	uint64_t t31 = 107324175391680193LLU;

	t31 = ((x213+(x214+x215))*x216);

	if (t31 != 10367397403618705408LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x221 = INT32_MIN;
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MAX;
	int8_t x224 = 17;
	volatile uint32_t t32 = 11748U;

	t32 = ((x221+(x222+x223))*x224);

	if (t32 != 2148040670U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x234 = 0U;
	uint8_t x235 = UINT8_MAX;
	static uint64_t x236 = 2633053LLU;
	volatile uint64_t t33 = 243170LLU;

	t33 = ((x233+(x234+x235))*x236);

	if (t33 != 668795462LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x237 = INT16_MAX;
	static uint64_t x238 = UINT64_MAX;
	uint32_t x239 = UINT32_MAX;
	static uint32_t x240 = 1523475022U;
	uint64_t t34 = 100217758281661830LLU;

	t34 = ((x237+(x238+x239))*x240);

	if (t34 != 6543325312421976342LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x250 = 401U;
	volatile uint32_t x251 = 375900U;

	t35 = ((x249+(x250+x251))*x252);

	if (t35 != 2147107351U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x253 = UINT64_MAX;
	volatile int8_t x254 = INT8_MIN;
	static volatile uint32_t x255 = UINT32_MAX;
	int64_t x256 = INT64_MAX;
	uint64_t t36 = 210641087917314387LLU;

	t36 = ((x253+(x254+x255))*x256);

	if (t36 != 18446744069414584450LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x257 = -1;
	volatile int16_t x258 = 2;
	int32_t t37 = -210094487;

	t37 = ((x257+(x258+x259))*x260);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x273 = -1;
	int32_t x274 = -1;
	static uint8_t x275 = 18U;
	volatile int32_t t38 = 77474;

	t38 = ((x273+(x274+x275))*x276);

	if (t38 != 384) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x277 = 0;
	int64_t x278 = -4LL;
	int16_t x279 = -1;
	uint32_t x280 = UINT32_MAX;
	volatile int64_t t39 = 6LL;

	t39 = ((x277+(x278+x279))*x280);

	if (t39 != -21474836475LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x285 = INT16_MIN;
	int64_t x287 = -1LL;
	volatile int64_t t40 = -94365323613161LL;

	t40 = ((x285+(x286+x287))*x288);

	if (t40 != 27475572LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x289 = 0;
	volatile int8_t x292 = INT8_MIN;
	volatile uint32_t t41 = 13661828U;

	t41 = ((x289+(x290+x291))*x292);

	if (t41 != 4294940544U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x301 = -51;
	volatile uint8_t x302 = 3U;
	uint16_t x303 = UINT16_MAX;
	uint32_t x304 = 6747U;
	volatile uint32_t t42 = 10228768U;

	t42 = ((x301+(x302+x303))*x304);

	if (t42 != 441840789U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x305 = INT8_MIN;
	int64_t x306 = -1LL;
	int8_t x307 = INT8_MAX;
	static int32_t x308 = -3600550;
	static int64_t t43 = 112799974110371631LL;

	t43 = ((x305+(x306+x307))*x308);

	if (t43 != 7201100LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x313 = -1538676991LL;
	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MAX;
	static volatile int64_t t44 = -370735LL;

	t44 = ((x313+(x314+x315))*x316);

	if (t44 != 196950654976LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x318 = 1188319LL;
	volatile int16_t x319 = INT16_MIN;
	uint8_t x320 = 62U;
	int64_t t45 = 2504901028741041LL;

	t45 = ((x317+(x318+x319))*x320);

	if (t45 != 71636226LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x321 = -1LL;
	static int16_t x322 = INT16_MAX;
	int64_t x323 = -1LL;
	int16_t x324 = INT16_MAX;
	volatile int64_t t46 = 7269561983385LL;

	t46 = ((x321+(x322+x323))*x324);

	if (t46 != 1073610755LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x325 = UINT64_MAX;
	int16_t x327 = INT16_MIN;
	static volatile int16_t x328 = 12;
	uint64_t t47 = 863842353LLU;

	t47 = ((x325+(x326+x327))*x328);

	if (t47 != 18446744073709158328LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x333 = -45;
	uint64_t x335 = 28278940975066180LLU;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t48 = 560399327864181LLU;

	t48 = ((x333+(x334+x335))*x336);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x341 = 11364568;
	int32_t x342 = -1;
	int64_t x343 = -1LL;
	volatile int64_t t49 = 781789LL;

	t49 = ((x341+(x342+x343))*x344);

	if (t49 != -204562188LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x345 = -811;
	static volatile uint64_t x346 = 482199401679168LLU;
	int32_t x348 = -1;
	static uint64_t t50 = 326306LLU;

	t50 = ((x345+(x346+x347))*x348);

	if (t50 != 18446261874307873258LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x349 = UINT8_MAX;
	int32_t x351 = INT32_MAX;
	int16_t x352 = 1927;
	static volatile int32_t t51 = -57248;

	t51 = ((x349+(x350+x351))*x352);

	if (t51 != 489458) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x357 = INT64_MIN;
	volatile int32_t x360 = -1;

	t52 = ((x357+(x358+x359))*x360);

	if (t52 != 9223372036854775655LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x365 = 26911427267558562LLU;
	int64_t x366 = -1LL;
	static int64_t x367 = -1LL;
	uint64_t t53 = 1143689LLU;

	t53 = ((x365+(x366+x367))*x368);

	if (t53 != 15002081383462055936LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x370 = UINT32_MAX;
	uint16_t x371 = 14650U;
	static int32_t x372 = INT32_MIN;
	uint32_t t54 = 297979U;

	t54 = ((x369+(x370+x371))*x372);

	if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x373 = -1;
	int8_t x374 = INT8_MIN;
	volatile int8_t x375 = INT8_MAX;
	static volatile int8_t x376 = -1;
	static int32_t t55 = -17638299;

	t55 = ((x373+(x374+x375))*x376);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x377 = 175374LL;
	static int32_t x378 = INT32_MIN;
	volatile uint16_t x379 = 11608U;
	int16_t x380 = 5272;
	static int64_t t56 = 52804462LL;

	t56 = ((x377+(x378+x379))*x380);

	if (t56 != -11320548023152LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x381 = INT16_MIN;
	static int64_t x382 = -1LL;
	int32_t x383 = -885393;
	int16_t x384 = INT16_MIN;
	volatile int64_t t57 = 1989215772044LL;

	t57 = ((x381+(x382+x383))*x384);

	if (t57 != 30086332416LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x385 = INT32_MAX;
	uint32_t x387 = 354757227U;
	int16_t x388 = INT16_MAX;
	static volatile uint32_t t58 = 174260736U;

	t58 = ((x385+(x386+x387))*x388);

	if (t58 != 4291810838U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x390 = UINT64_MAX;
	int64_t x391 = -1LL;
	volatile uint32_t x392 = UINT32_MAX;
	uint64_t t59 = 27LLU;

	t59 = ((x389+(x390+x391))*x392);

	if (t59 != 9223372030412324866LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x393 = 7176917013712755LLU;
	uint32_t x394 = UINT32_MAX;
	int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MAX;
	volatile uint64_t t60 = 108209904043532344LLU;

	t60 = ((x393+(x394+x395))*x396);

	if (t60 != 911468733471943054LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x405 = -1LL;
	int32_t x406 = INT32_MIN;
	int8_t x407 = INT8_MAX;
	volatile int16_t x408 = INT16_MIN;
	int64_t t61 = -4LL;

	t61 = ((x405+(x406+x407))*x408);

	if (t61 != 70368740048896LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x409 = -1;
	static volatile int64_t x410 = 216955405168379LL;
	volatile uint16_t x411 = 7236U;
	volatile uint32_t x412 = 1U;
	static volatile int64_t t62 = -24LL;

	t62 = ((x409+(x410+x411))*x412);

	if (t62 != 216955405175614LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x413 = INT64_MAX;
	static uint16_t x414 = 5U;
	int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MIN;

	t63 = ((x413+(x414+x415))*x416);

	if (t63 != -512LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x425 = -1;
	int16_t x426 = -1;
	uint64_t x428 = 7349LLU;

	t64 = ((x425+(x426+x427))*x428);

	if (t64 != 36745LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x429 = -1;
	uint16_t x430 = 16U;
	int64_t x432 = -7LL;
	volatile int64_t t65 = -1580189942882505644LL;

	t65 = ((x429+(x430+x431))*x432);

	if (t65 != -98LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x434 = 70U;
	int64_t x435 = -1LL;
	int16_t x436 = -1;

	t66 = ((x433+(x434+x435))*x436);

	if (t66 != -68LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x457 = INT16_MIN;
	static uint8_t x458 = 1U;
	int16_t x459 = -2;
	volatile uint8_t x460 = 0U;
	volatile int32_t t67 = -7534840;

	t67 = ((x457+(x458+x459))*x460);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x469 = -1LL;
	static volatile uint16_t x470 = 12644U;
	int16_t x471 = 7;
	static uint64_t x472 = UINT64_MAX;

	t68 = ((x469+(x470+x471))*x472);

	if (t68 != 18446744073709538966LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x477 = -1;
	volatile uint8_t x478 = 119U;
	static int8_t x479 = INT8_MAX;
	int16_t x480 = 14089;
	static volatile int32_t t69 = 233931311;

	t69 = ((x477+(x478+x479))*x480);

	if (t69 != 3451805) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x481 = INT16_MIN;
	uint8_t x483 = UINT8_MAX;
	uint32_t x484 = UINT32_MAX;
	uint64_t t70 = 6050164LLU;

	t70 = ((x481+(x482+x483))*x484);

	if (t70 != 18446604427142921986LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x485 = 8515U;
	int64_t x486 = -1LL;
	int8_t x487 = -1;
	static int64_t t71 = -22081734291313146LL;

	t71 = ((x485+(x486+x487))*x488);

	if (t71 != 2170815LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x490 = -1;
	int64_t x491 = -1LL;
	uint32_t x492 = UINT32_MAX;
	int64_t t72 = -3715LL;

	t72 = ((x489+(x490+x491))*x492);

	if (t72 != -12884901885LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x495 = 514480LLU;
	static uint16_t x496 = UINT16_MAX;
	volatile uint64_t t73 = 18927638292LLU;

	t73 = ((x493+(x494+x495))*x496);

	if (t73 != 9223372070571157073LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x498 = 23U;
	static int32_t x499 = -50183663;
	int16_t x500 = -2;
	static volatile int32_t t74 = 1431;

	t74 = ((x497+(x498+x499))*x500);

	if (t74 != 100367278) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x505 = -1;
	uint16_t x506 = 98U;
	int16_t x507 = INT16_MIN;
	static uint64_t x508 = UINT64_MAX;
	volatile uint64_t t75 = 176191660263LLU;

	t75 = ((x505+(x506+x507))*x508);

	if (t75 != 32671LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x521 = 2U;
	uint64_t x522 = 7771386098LLU;
	int64_t x523 = INT64_MAX;
	int32_t x524 = INT32_MIN;
	uint64_t t76 = 42165274LLU;

	t76 = ((x521+(x522+x523))*x524);

	if (t76 != 1757819503812542464LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x534 = UINT32_MAX;
	int64_t x535 = 70754140846LL;
	volatile int8_t x536 = INT8_MIN;
	volatile int64_t t77 = 80464570572LL;

	t77 = ((x533+(x534+x535))*x536);

	if (t77 != -9606281647744LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x537 = INT64_MAX;
	volatile uint64_t x538 = UINT64_MAX;
	uint64_t t78 = 1680194426LLU;

	t78 = ((x537+(x538+x539))*x540);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x541 = INT8_MIN;
	int32_t x542 = 40261483;
	static int32_t x543 = INT32_MIN;
	volatile uint64_t t79 = 1148170427110543429LLU;

	t79 = ((x541+(x542+x543))*x544);

	if (t79 != 17990095929609345844LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x549 = INT16_MIN;
	uint16_t x550 = UINT16_MAX;
	int32_t x551 = INT32_MIN;
	volatile int32_t t80 = 50227069;

	t80 = ((x549+(x550+x551))*x552);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x553 = 62;
	volatile uint16_t x554 = 491U;
	volatile int64_t x555 = 1855LL;
	volatile int16_t x556 = 198;

	t81 = ((x553+(x554+x555))*x556);

	if (t81 != 476784LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x558 = INT32_MAX;
	volatile int16_t x559 = INT16_MIN;
	static int32_t x560 = -6449;

	t82 = ((x557+(x558+x559))*x560);

	if (t82 != 211327281) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x577 = -1;
	volatile int32_t x578 = -16359422;
	uint8_t x579 = 27U;
	uint8_t x580 = 1U;

	t83 = ((x577+(x578+x579))*x580);

	if (t83 != -16359396) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x581 = INT8_MIN;
	static volatile uint64_t x582 = UINT64_MAX;
	static uint64_t x583 = 86700328229LLU;
	volatile int16_t x584 = 1;
	volatile uint64_t t84 = 401033762909241LLU;

	t84 = ((x581+(x582+x583))*x584);

	if (t84 != 86700328100LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x589 = -1;
	static int32_t x590 = -2;
	volatile int32_t x591 = -1;
	int64_t x592 = -1231377246LL;
	static int64_t t85 = -104397108527749329LL;

	t85 = ((x589+(x590+x591))*x592);

	if (t85 != 4925508984LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x597 = 74;
	static volatile uint32_t x598 = 600019600U;
	static int32_t x599 = 0;
	static volatile uint32_t t86 = 310095U;

	t86 = ((x597+(x598+x599))*x600);

	if (t86 != 1837913068U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x601 = -45;
	volatile uint16_t x602 = UINT16_MAX;
	int8_t x603 = 48;
	static volatile uint16_t x604 = 3U;
	int32_t t87 = -1460;

	t87 = ((x601+(x602+x603))*x604);

	if (t87 != 196614) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x605 = -30;
	int32_t x606 = -26651446;
	uint16_t x607 = UINT16_MAX;
	int64_t x608 = 0LL;
	volatile int64_t t88 = -1LL;

	t88 = ((x605+(x606+x607))*x608);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x609 = UINT32_MAX;
	int16_t x611 = INT16_MIN;
	int16_t x612 = -5;

	t89 = ((x609+(x610+x611))*x612);

	if (t89 != -21474672630LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x617 = -1LL;
	volatile int32_t x618 = -430713;
	uint8_t x619 = 9U;

	t90 = ((x617+(x618+x619))*x620);

	if (t90 != -2167738265LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x625 = 1515162258LLU;
	volatile int64_t x626 = -1724876892325LL;
	uint32_t x627 = 25225203U;
	volatile int32_t x628 = INT32_MAX;
	volatile uint64_t t91 = 24400LLU;

	t91 = ((x625+(x626+x627))*x628);

	if (t91 != 6958596342043915808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x630 = UINT32_MAX;
	int64_t x631 = -2LL;
	volatile int8_t x632 = INT8_MAX;
	int64_t t92 = 823608181193767880LL;

	t92 = ((x629+(x630+x631))*x632);

	if (t92 != 545460927618LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x645 = INT32_MIN;
	uint32_t x646 = 12591U;
	int16_t x647 = 11557;
	uint32_t x648 = 312U;
	static uint32_t t93 = 83U;

	t93 = ((x645+(x646+x647))*x648);

	if (t93 != 7534176U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x649 = INT16_MIN;
	uint64_t x651 = 1LLU;
	volatile int32_t x652 = INT32_MIN;
	volatile uint64_t t94 = 1019816147LLU;

	t94 = ((x649+(x650+x651))*x652);

	if (t94 != 9223442405598953472LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x653 = -1;
	volatile int16_t x655 = -438;
	int16_t x656 = INT16_MIN;
	static int32_t t95 = 37789555;

	t95 = ((x653+(x654+x655))*x656);

	if (t95 != 10223616) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x658 = -1LL;
	int32_t x659 = INT32_MAX;
	uint16_t x660 = 3U;
	int64_t t96 = 619003824941059LL;

	t96 = ((x657+(x658+x659))*x660);

	if (t96 != 6442352634LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x661 = -1;
	uint16_t x662 = UINT16_MAX;
	static uint32_t x663 = UINT32_MAX;
	volatile int8_t x664 = INT8_MIN;
	static uint32_t t97 = 441768357U;

	t97 = ((x661+(x662+x663))*x664);

	if (t97 != 4286579072U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x677 = 558742934956154LLU;
	volatile int64_t x678 = -17005287736757574LL;
	int8_t x679 = -1;
	int64_t x680 = INT64_MIN;
	volatile uint64_t t98 = 48851848809278LLU;

	t98 = ((x677+(x678+x679))*x680);

	if (t98 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x685 = -3774362682LL;
	int8_t x687 = -56;
	volatile int32_t x688 = INT32_MIN;
	volatile uint64_t t99 = 3531LLU;

	t99 = ((x685+(x686+x687))*x688);

	if (t99 != 8105371975028834304LLU) { NG(); } else { ; }
	
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

