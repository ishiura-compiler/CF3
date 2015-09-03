#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 33LLU;
uint16_t x10 = UINT16_MAX;
volatile uint32_t x11 = 1908U;
int64_t x15 = 1940037LL;
int32_t x17 = -1366418;
uint16_t x29 = 286U;
int32_t x34 = -3;
uint32_t t5 = 555706U;
volatile int32_t x43 = 597;
static uint8_t x64 = UINT8_MAX;
static uint8_t x65 = UINT8_MAX;
volatile int16_t x69 = 1;
int64_t x71 = INT64_MAX;
uint16_t x73 = 0U;
volatile int64_t t10 = 1646337LL;
int32_t x78 = -1;
int8_t x95 = INT8_MIN;
static int8_t x96 = 4;
int16_t x103 = INT16_MAX;
uint32_t x104 = 158U;
uint32_t x111 = 158749U;
static int32_t x118 = INT32_MIN;
uint8_t x135 = 39U;
volatile uint32_t t22 = 3U;
int16_t x145 = -1;
static int64_t x149 = 1727316180189331738LL;
int16_t x168 = INT16_MIN;
int8_t x181 = INT8_MAX;
int64_t t27 = 3543134LL;
static int16_t x187 = INT16_MAX;
static int16_t x197 = 1;
uint16_t x199 = 18274U;
int16_t x201 = -2551;
int8_t x210 = INT8_MIN;
uint64_t t32 = 22289513503699LLU;
int8_t x214 = -1;
volatile uint64_t t33 = 50370255873LLU;
volatile int64_t x219 = -14LL;
volatile int64_t t36 = -4371945868LL;
uint16_t x233 = 3U;
volatile uint16_t x234 = 0U;
int16_t x236 = INT16_MAX;
uint16_t x246 = UINT16_MAX;
int8_t x251 = INT8_MAX;
int32_t x264 = 2693857;
int64_t t45 = 16806686381704LL;
uint32_t x277 = 211659782U;
static int32_t x280 = INT32_MAX;
uint16_t x286 = UINT16_MAX;
int64_t x288 = 1733570LL;
int64_t t47 = 0LL;
int64_t x291 = 125770092052046LL;
static int8_t x309 = 1;
int8_t x315 = INT8_MIN;
int16_t x330 = -1;
int8_t x332 = INT8_MAX;
int64_t x340 = 2915115152274681LL;
volatile uint8_t x347 = 7U;
static int64_t x356 = INT64_MIN;
static int16_t x358 = -1;
static int16_t x360 = INT16_MAX;
uint64_t x362 = 1707091045956LLU;
int8_t x372 = 2;
volatile int64_t t62 = -2402354410663949LL;
volatile int8_t x387 = 0;
uint16_t x390 = 624U;
static int8_t x396 = INT8_MIN;
volatile int16_t x400 = INT16_MIN;
int64_t x401 = 1416LL;
static int16_t x414 = 3370;
uint64_t x419 = 3223588LLU;
int64_t x422 = 123723065476343695LL;
uint64_t t71 = 1226026638788504374LLU;
uint64_t x428 = 39004LLU;
uint8_t x446 = 0U;
static int64_t x453 = INT64_MAX;
volatile uint32_t x466 = 259921U;
uint64_t t80 = 133098LLU;
int8_t x481 = -1;
static int8_t x482 = INT8_MIN;
int8_t x483 = INT8_MIN;
static volatile int32_t t82 = 269;
int16_t x490 = INT16_MIN;
int32_t x518 = 0;
uint8_t x522 = UINT8_MAX;
int64_t x526 = 1LL;
int32_t x528 = INT32_MAX;
int8_t x532 = INT8_MAX;
uint8_t x548 = 125U;
uint64_t x550 = UINT64_MAX;
uint32_t x557 = 1301061238U;
uint16_t x560 = UINT16_MAX;
static int64_t x561 = -26555851LL;


void f0(void) {
	volatile uint64_t x1 = 739764896279591363LLU;
	int8_t x2 = 0;
	static int32_t x3 = INT32_MIN;
	uint16_t x4 = 33U;

	t0 = (x1&(x2*(x3^x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 25;
	volatile int64_t x12 = 112913850982117LL;
	int64_t t1 = -1258LL;

	t1 = (x9&(x10*(x11^x12)));

	if (t1 != 9LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MIN;
	int8_t x14 = -1;
	uint64_t x16 = 118LLU;
	uint64_t t2 = 67771659592895LLU;

	t2 = (x13&(x14*(x15^x16)));

	if (t2 != 18446744073707611520LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x18 = -289120;
	int8_t x19 = INT8_MAX;
	static uint16_t x20 = 33U;
	volatile int32_t t3 = -5725;

	t3 = (x17&(x18*(x19^x20)));

	if (t3 != -27195840) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x30 = 280;
	uint64_t x31 = UINT64_MAX;
	int8_t x32 = INT8_MIN;
	volatile uint64_t t4 = 1125513763108175457LLU;

	t4 = (x29&(x30*(x31^x32)));

	if (t4 != 8LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x33 = 660869916;
	static int32_t x35 = -23834959;
	uint32_t x36 = 1952499455U;

	t5 = (x33&(x34*(x35^x36)));

	if (t5 != 119538452U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = INT64_MAX;
	int16_t x42 = INT16_MAX;
	uint8_t x44 = UINT8_MAX;
	int64_t t6 = -1822792911974LL;

	t6 = (x41&(x42*(x43^x44)));

	if (t6 != 22347094LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x61 = UINT16_MAX;
	static int16_t x62 = 0;
	volatile uint32_t x63 = 114U;
	uint32_t t7 = 195204U;

	t7 = (x61&(x62*(x63^x64)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x66 = -1;
	volatile int32_t x67 = INT32_MAX;
	int8_t x68 = INT8_MAX;
	volatile int32_t t8 = 127;

	t8 = (x65&(x66*(x67^x68)));

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x70 = 1U;
	int32_t x72 = INT32_MIN;
	volatile int64_t t9 = 178603LL;

	t9 = (x69&(x70*(x71^x72)));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x74 = INT8_MIN;
	int64_t x75 = 30817012438947893LL;
	int8_t x76 = -25;

	t10 = (x73&(x74*(x75^x76)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = -22;
	int16_t x79 = INT16_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t11 = 100618;

	t11 = (x77&(x78*(x79^x80)));

	if (t11 != 32640) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x81 = 13146738U;
	int64_t x82 = -4228336470619248LL;
	uint64_t x83 = 57242LLU;
	static int16_t x84 = -1;
	volatile uint64_t t12 = 59LLU;

	t12 = (x81&(x82*(x83^x84)));

	if (t12 != 4721232LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x89 = 0;
	uint64_t x90 = UINT64_MAX;
	static int64_t x91 = INT64_MAX;
	static uint16_t x92 = 0U;
	volatile uint64_t t13 = 206LLU;

	t13 = (x89&(x90*(x91^x92)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x93 = 185439LL;
	int16_t x94 = INT16_MIN;
	int64_t t14 = 16579831797980LL;

	t14 = (x93&(x94*(x95^x96)));

	if (t14 != 131072LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x101 = 5867;
	int8_t x102 = INT8_MIN;
	uint32_t t15 = 14533U;

	t15 = (x101&(x102*(x103^x104)));

	if (t15 != 1664U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x109 = INT32_MIN;
	uint32_t x110 = 1U;
	uint8_t x112 = 5U;
	uint32_t t16 = 46152968U;

	t16 = (x109&(x110*(x111^x112)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x113 = INT64_MIN;
	int64_t x114 = -1LL;
	static int8_t x115 = INT8_MIN;
	uint32_t x116 = 13U;
	int64_t t17 = INT64_MIN;

	t17 = (x113&(x114*(x115^x116)));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x117 = INT64_MIN;
	int16_t x119 = 5344;
	uint64_t x120 = 228677727029LLU;
	uint64_t t18 = 1024088731LLU;

	t18 = (x117&(x118*(x119^x120)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x121 = UINT64_MAX;
	int8_t x122 = INT8_MIN;
	uint32_t x123 = 841713U;
	int32_t x124 = INT32_MAX;
	volatile uint64_t t19 = 13104812870279LLU;

	t19 = (x121&(x122*(x123^x124)));

	if (t19 != 107739392LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x129 = 0U;
	int8_t x130 = -1;
	int8_t x131 = -9;
	uint8_t x132 = 85U;
	volatile int32_t t20 = -263071947;

	t20 = (x129&(x130*(x131^x132)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x133 = 28870901U;
	int8_t x134 = INT8_MAX;
	static int32_t x136 = -1;
	static volatile uint32_t t21 = 1138875817U;

	t21 = (x133&(x134*(x135^x136)));

	if (t21 != 28870688U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x141 = UINT32_MAX;
	static int16_t x142 = -55;
	int16_t x143 = INT16_MAX;
	volatile uint16_t x144 = 389U;

	t22 = (x141&(x142*(x143^x144)));

	if (t22 != 4293186506U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x146 = INT32_MIN;
	int16_t x147 = -1;
	volatile uint32_t x148 = UINT32_MAX;
	uint32_t t23 = 666U;

	t23 = (x145&(x146*(x147^x148)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x150 = 3018321U;
	int64_t x151 = 9LL;
	volatile uint64_t x152 = UINT64_MAX;
	volatile uint64_t t24 = 13294LLU;

	t24 = (x149&(x150*(x151^x152)));

	if (t24 != 1727316180176224274LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x165 = 7U;
	int16_t x166 = INT16_MAX;
	int16_t x167 = 161;
	int32_t t25 = 10820;

	t25 = (x165&(x166*(x167^x168)));

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x169 = 10LLU;
	int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 96U;
	volatile uint64_t t26 = 178929369316849LLU;

	t26 = (x169&(x170*(x171^x172)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x182 = INT8_MAX;
	static volatile int64_t x183 = 5200LL;
	int32_t x184 = INT32_MIN;

	t27 = (x181&(x182*(x183^x184)));

	if (t27 != 48LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x185 = INT8_MIN;
	uint32_t x186 = 252442U;
	volatile int8_t x188 = INT8_MIN;
	volatile uint32_t t28 = 276633U;

	t28 = (x185&(x186*(x187^x188)));

	if (t28 != 349975168U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x189 = 85U;
	volatile int8_t x190 = INT8_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	int8_t x192 = 1;
	int32_t t29 = 39271;

	t29 = (x189&(x190*(x191^x192)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x198 = 13;
	uint64_t x200 = UINT64_MAX;
	uint64_t t30 = 59LLU;

	t30 = (x197&(x198*(x199^x200)));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x202 = -1;
	volatile int64_t x203 = 371LL;
	uint8_t x204 = 54U;
	int64_t t31 = -1779362117LL;

	t31 = (x201&(x202*(x203^x204)));

	if (t31 != -2551LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x209 = UINT64_MAX;
	static int64_t x211 = -248799816885LL;
	static int16_t x212 = INT16_MIN;

	t32 = (x209&(x210*(x211^x212)));

	if (t32 != 18446712227335920256LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x213 = 0U;
	int32_t x215 = -1;
	uint64_t x216 = UINT64_MAX;

	t33 = (x213&(x214*(x215^x216)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x217 = -1;
	static volatile uint64_t x218 = 259887266422520847LLU;
	int8_t x220 = -3;
	volatile uint64_t t34 = 38662LLU;

	t34 = (x217&(x218*(x219^x220)));

	if (t34 != 3898308996337812705LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x221 = -1;
	int16_t x222 = INT16_MIN;
	volatile int32_t x223 = INT32_MAX;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t35 = -7994;

	t35 = (x221&(x222*(x223^x224)));

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x229 = 6U;
	static int64_t x230 = -1LL;
	int8_t x231 = 0;
	uint32_t x232 = 4U;

	t36 = (x229&(x230*(x231^x232)));

	if (t36 != 4LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x235 = -1738;
	volatile int32_t t37 = 1;

	t37 = (x233&(x234*(x235^x236)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x237 = 3387U;
	int8_t x238 = 8;
	uint16_t x239 = 0U;
	int16_t x240 = -426;
	static int32_t t38 = -3155;

	t38 = (x237&(x238*(x239^x240)));

	if (t38 != 48) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x245 = -1LL;
	int32_t x247 = INT32_MAX;
	int32_t x248 = INT32_MIN;
	int64_t t39 = -3696261792272065330LL;

	t39 = (x245&(x246*(x247^x248)));

	if (t39 != -65535LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x249 = INT64_MAX;
	int64_t x250 = -1LL;
	int32_t x252 = 1993;
	volatile int64_t t40 = -228225535160118246LL;

	t40 = (x249&(x250*(x251^x252)));

	if (t40 != 9223372036854773834LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x253 = 25483599083260LLU;
	uint8_t x254 = 4U;
	int32_t x255 = -2825084;
	uint16_t x256 = UINT16_MAX;
	volatile uint64_t t41 = 1435245LLU;

	t41 = (x253&(x254*(x255^x256)));

	if (t41 != 25483589739756LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x258 = INT16_MIN;
	volatile uint8_t x259 = UINT8_MAX;
	int16_t x260 = INT16_MIN;
	uint32_t t42 = 15341U;

	t42 = (x257&(x258*(x259^x260)));

	if (t42 != 1065385984U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x261 = INT8_MIN;
	volatile int16_t x262 = -1;
	volatile int16_t x263 = 3739;
	int32_t t43 = -71644475;

	t43 = (x261&(x262*(x263^x264)));

	if (t43 != -2692224) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x269 = UINT16_MAX;
	static volatile int16_t x270 = INT16_MIN;
	int8_t x271 = 2;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t44 = -5;

	t44 = (x269&(x270*(x271^x272)));

	if (t44 != 32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x273 = INT64_MIN;
	static uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	int32_t x276 = -1;

	t45 = (x273&(x274*(x275^x276)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x278 = INT16_MAX;
	int64_t x279 = -38LL;
	volatile int64_t t46 = -28440798LL;

	t46 = (x277&(x278*(x279^x280)));

	if (t46 != 1059842LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x285 = 435659293;
	int32_t x287 = INT32_MAX;

	t47 = (x285&(x286*(x287^x288)));

	if (t47 != 139928065LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x289 = INT32_MAX;
	static volatile int8_t x290 = 0;
	int8_t x292 = INT8_MAX;
	int64_t t48 = -29750031LL;

	t48 = (x289&(x290*(x291^x292)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x297 = 101872314760785715LLU;
	volatile int8_t x298 = INT8_MIN;
	uint64_t x299 = 3171866845894756833LLU;
	int8_t x300 = INT8_MIN;
	volatile uint64_t t49 = 170108135431LLU;

	t49 = (x297&(x298*(x299^x300)));

	if (t49 != 20274994693033728LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x301 = 770590;
	static uint8_t x302 = 0U;
	int64_t x303 = -67706806532LL;
	int32_t x304 = INT32_MIN;
	static int64_t t50 = 0LL;

	t50 = (x301&(x302*(x303^x304)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = -1;
	int8_t x312 = -1;
	static uint32_t t51 = 28309U;

	t51 = (x309&(x310*(x311^x312)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x313 = UINT8_MAX;
	int64_t x314 = -5012167703313841LL;
	volatile int8_t x316 = -1;
	int64_t t52 = -330005LL;

	t52 = (x313&(x314*(x315^x316)));

	if (t52 != 49LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x329 = UINT32_MAX;
	static uint32_t x331 = 1131138074U;
	volatile uint32_t t53 = 223792236U;

	t53 = (x329&(x330*(x331^x332)));

	if (t53 != 3163829147U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int64_t x338 = 59LL;
	int32_t x339 = INT32_MIN;
	int64_t t54 = 151918468322LL;

	t54 = (x337&(x338*(x339^x340)));

	if (t54 != 2562061667LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x345 = 47U;
	static uint64_t x346 = UINT64_MAX;
	int8_t x348 = INT8_MAX;
	static volatile uint64_t t55 = 65171521523LLU;

	t55 = (x345&(x346*(x347^x348)));

	if (t55 != 8LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x353 = UINT8_MAX;
	uint64_t x354 = UINT64_MAX;
	int64_t x355 = 38280288799LL;
	volatile uint64_t t56 = 2003975555LLU;

	t56 = (x353&(x354*(x355^x356)));

	if (t56 != 225LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x357 = INT64_MAX;
	volatile int32_t x359 = 20759473;
	int64_t t57 = 2526LL;

	t57 = (x357&(x358*(x359^x360)));

	if (t57 != 9223372036834018226LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x361 = UINT32_MAX;
	static int16_t x363 = -1;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t58 = 1LLU;

	t58 = (x361&(x362*(x363^x364)));

	if (t58 != 2305937852LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x365 = -1;
	int32_t x366 = INT32_MAX;
	int64_t x367 = INT64_MAX;
	static uint64_t x368 = 2LLU;
	static uint64_t t59 = 3284077527272LLU;

	t59 = (x365&(x366*(x367^x368)));

	if (t59 != 9223372030412324867LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x369 = -1;
	static int16_t x370 = -3056;
	int8_t x371 = -14;
	int32_t t60 = -16110;

	t60 = (x369&(x370*(x371^x372)));

	if (t60 != 48896) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x377 = 7;
	volatile uint8_t x378 = UINT8_MAX;
	uint16_t x379 = UINT16_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t61 = 18758;

	t61 = (x377&(x378*(x379^x380)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x381 = 1122943872237LL;
	uint16_t x382 = UINT16_MAX;
	static uint32_t x383 = 97160297U;
	int32_t x384 = -1;

	t62 = (x381&(x382*(x383^x384)));

	if (t62 != 1881181288LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x385 = -1;
	int32_t x386 = -191;
	volatile int8_t x388 = 3;
	static int32_t t63 = 3867247;

	t63 = (x385&(x386*(x387^x388)));

	if (t63 != -573) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x389 = INT16_MIN;
	uint16_t x391 = 13517U;
	volatile int16_t x392 = 25;
	volatile int32_t t64 = 3268998;

	t64 = (x389&(x390*(x391^x392)));

	if (t64 != 8421376) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x394 = 0;
	volatile int64_t x395 = INT64_MAX;
	int64_t t65 = 752754334486070928LL;

	t65 = (x393&(x394*(x395^x396)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x397 = INT8_MIN;
	uint64_t x398 = 18309LLU;
	uint16_t x399 = 0U;
	uint64_t t66 = 10218LLU;

	t66 = (x397&(x398*(x399^x400)));

	if (t66 != 18446744073109602304LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x402 = INT16_MAX;
	int8_t x403 = INT8_MIN;
	volatile uint64_t x404 = 639389344860533386LLU;
	uint64_t t67 = 67LLU;

	t67 = (x401&(x402*(x403^x404)));

	if (t67 != 128LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x409 = 71355079819LL;
	int16_t x410 = INT16_MIN;
	int32_t x411 = 13370624;
	uint64_t x412 = UINT64_MAX;
	uint64_t t68 = 64496660215566490LLU;

	t68 = (x409&(x410*(x411^x412)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x413 = -49591469;
	uint64_t x415 = 1742301110306LLU;
	int64_t x416 = -1678993LL;
	uint64_t t69 = 0LLU;

	t69 = (x413&(x414*(x415^x416)));

	if (t69 != 18440872524314643202LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x417 = 117U;
	static uint64_t x418 = 2404685394890369928LLU;
	int8_t x420 = -1;
	volatile uint64_t t70 = 6287LLU;

	t70 = (x417&(x418*(x419^x420)));

	if (t70 != 80LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x421 = 56842591U;
	volatile uint64_t x423 = 1944316LLU;
	volatile int16_t x424 = INT16_MIN;

	t71 = (x421&(x422*(x423^x424)));

	if (t71 != 2179140LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x425 = INT8_MIN;
	static uint64_t x426 = 42LLU;
	volatile int32_t x427 = 45327663;
	static uint64_t t72 = 4093717LLU;

	t72 = (x425&(x426*(x427^x428)));

	if (t72 != 1902646400LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x429 = -1LL;
	uint16_t x430 = UINT16_MAX;
	int32_t x431 = -174;
	volatile uint8_t x432 = UINT8_MAX;
	int64_t t73 = -286991394152241148LL;

	t73 = (x429&(x430*(x431^x432)));

	if (t73 != -5439405LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x437 = -1;
	int64_t x438 = -1LL;
	int8_t x439 = INT8_MIN;
	volatile int16_t x440 = -1;
	static volatile int64_t t74 = -192992LL;

	t74 = (x437&(x438*(x439^x440)));

	if (t74 != -127LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x445 = 43773U;
	static int16_t x447 = -1;
	uint16_t x448 = UINT16_MAX;
	static volatile uint32_t t75 = 511U;

	t75 = (x445&(x446*(x447^x448)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x454 = -16;
	static uint8_t x455 = 97U;
	volatile uint32_t x456 = 56U;
	volatile int64_t t76 = -1013LL;

	t76 = (x453&(x454*(x455^x456)));

	if (t76 != 4294965872LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x457 = 19376U;
	static int64_t x458 = INT64_MAX;
	int8_t x459 = -1;
	int64_t x460 = -1LL;
	static volatile int64_t t77 = -6808340582LL;

	t77 = (x457&(x458*(x459^x460)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x465 = -15;
	static volatile int16_t x467 = -1;
	volatile int32_t x468 = -3;
	uint32_t t78 = 70U;

	t78 = (x465&(x466*(x467^x468)));

	if (t78 != 519840U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x469 = INT32_MAX;
	int32_t x470 = -1;
	static volatile int32_t x471 = INT32_MIN;
	uint16_t x472 = 215U;
	volatile int32_t t79 = -1;

	t79 = (x469&(x470*(x471^x472)));

	if (t79 != 2147483433) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x473 = 1;
	uint64_t x474 = 1440074LLU;
	int16_t x475 = INT16_MIN;
	int8_t x476 = INT8_MIN;

	t80 = (x473&(x474*(x475^x476)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x484 = 50U;
	int32_t t81 = -1;

	t81 = (x481&(x482*(x483^x484)));

	if (t81 != 9984) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x485 = -1;
	int8_t x486 = 1;
	int16_t x487 = 482;
	int8_t x488 = -1;

	t82 = (x485&(x486*(x487^x488)));

	if (t82 != -483) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x489 = 7;
	int8_t x491 = -1;
	int32_t x492 = -1;
	volatile int32_t t83 = -110;

	t83 = (x489&(x490*(x491^x492)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x497 = 1289U;
	int64_t x498 = 904286LL;
	int8_t x499 = INT8_MAX;
	static volatile int8_t x500 = -1;
	int64_t t84 = 30184965811380LL;

	t84 = (x497&(x498*(x499^x500)));

	if (t84 != 256LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x505 = UINT8_MAX;
	volatile int64_t x506 = -32LL;
	int16_t x507 = -1;
	uint64_t x508 = UINT64_MAX;
	uint64_t t85 = 1100284112738869LLU;

	t85 = (x505&(x506*(x507^x508)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x509 = 1099206498654LLU;
	volatile int64_t x510 = -3679305624LL;
	static int32_t x511 = 1;
	int16_t x512 = INT16_MIN;
	static uint64_t t86 = 0LLU;

	t86 = (x509&(x510*(x511^x512)));

	if (t86 != 713036922952LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x517 = INT8_MIN;
	static int8_t x519 = INT8_MIN;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t87 = 11;

	t87 = (x517&(x518*(x519^x520)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x521 = INT16_MIN;
	int8_t x523 = INT8_MAX;
	int16_t x524 = 2;
	int32_t t88 = -11;

	t88 = (x521&(x522*(x523^x524)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x525 = INT32_MIN;
	volatile uint8_t x527 = 12U;
	volatile int64_t t89 = -556944175235LL;

	t89 = (x525&(x526*(x527^x528)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x529 = INT64_MIN;
	uint16_t x530 = UINT16_MAX;
	static volatile int64_t x531 = -1LL;
	int64_t t90 = INT64_MIN;

	t90 = (x529&(x530*(x531^x532)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x533 = INT8_MIN;
	int16_t x534 = 2;
	volatile int8_t x535 = 48;
	int32_t x536 = -20104043;
	int32_t t91 = 26;

	t91 = (x533&(x534*(x535^x536)));

	if (t91 != -40208128) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x537 = INT16_MIN;
	static int64_t x538 = 27346720525LL;
	int16_t x539 = -1;
	int16_t x540 = 0;
	int64_t t92 = 9LL;

	t92 = (x537&(x538*(x539^x540)));

	if (t92 != -27346731008LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x545 = INT16_MAX;
	int8_t x546 = INT8_MAX;
	int8_t x547 = 0;
	int32_t t93 = -1;

	t93 = (x545&(x546*(x547^x548)));

	if (t93 != 15875) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x549 = UINT8_MAX;
	int64_t x551 = INT64_MAX;
	int16_t x552 = 930;
	volatile uint64_t t94 = 4268084251455378867LLU;

	t94 = (x549&(x550*(x551^x552)));

	if (t94 != 163LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x553 = 7946U;
	static int16_t x554 = INT16_MIN;
	uint32_t x555 = UINT32_MAX;
	int8_t x556 = INT8_MIN;
	volatile uint32_t t95 = 1408U;

	t95 = (x553&(x554*(x555^x556)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x558 = 2040918038U;
	uint16_t x559 = UINT16_MAX;
	static uint32_t t96 = 251U;

	t96 = (x557&(x558*(x559^x560)));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x562 = INT32_MIN;
	int32_t x563 = -1;
	int8_t x564 = -1;
	int64_t t97 = -5408613LL;

	t97 = (x561&(x562*(x563^x564)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x565 = UINT16_MAX;
	int32_t x566 = 3167;
	static volatile uint32_t x567 = 436U;
	int32_t x568 = INT32_MIN;
	uint32_t t98 = 9618U;

	t98 = (x565&(x566*(x567^x568)));

	if (t98 != 4556U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x573 = -52495;
	int16_t x574 = INT16_MIN;
	uint16_t x575 = UINT16_MAX;
	static int64_t x576 = -1LL;
	volatile int64_t t99 = -1LL;

	t99 = (x573&(x574*(x575^x576)));

	if (t99 != 2147483648LL) { NG(); } else { ; }
	
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

