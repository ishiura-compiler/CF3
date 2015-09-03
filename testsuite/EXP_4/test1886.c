#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 320U;
uint8_t x3 = 39U;
volatile uint32_t x5 = 727U;
int8_t x8 = INT8_MAX;
int16_t x9 = 4;
int32_t x11 = INT32_MAX;
int16_t x12 = -1;
int8_t x13 = INT8_MIN;
int64_t x17 = 36230638LL;
int64_t t4 = -195839093893LL;
int64_t x21 = -1963485LL;
uint8_t x30 = UINT8_MAX;
int64_t x34 = -1LL;
volatile int64_t x35 = INT64_MIN;
int8_t x42 = INT8_MIN;
uint16_t x52 = 12801U;
static int32_t t10 = -14452876;
int8_t x58 = 56;
int16_t x62 = 290;
int32_t x66 = INT32_MIN;
int32_t t14 = 227226;
int32_t x76 = -1;
int16_t x81 = INT16_MAX;
uint8_t x83 = UINT8_MAX;
int32_t t17 = 19741425;
int64_t x85 = -1LL;
uint64_t x86 = 6983508446576LLU;
static int8_t x100 = INT8_MIN;
uint32_t x101 = 3300U;
int16_t x106 = -409;
int32_t x111 = -1;
volatile int32_t t23 = 11;
volatile uint64_t t24 = 2501044LLU;
int8_t x131 = INT8_MIN;
int8_t x142 = -5;
uint64_t x143 = 4212089458LLU;
volatile int32_t x145 = -24566685;
uint32_t t30 = 77320U;
int32_t x152 = INT32_MIN;
static int64_t x163 = -3LL;
volatile int8_t x174 = 11;
int32_t x175 = -423;
uint32_t x176 = UINT32_MAX;
int8_t x178 = -1;
int64_t x180 = -1LL;
uint32_t x181 = 1647663U;
int32_t x182 = 7032;
int32_t x195 = -197329;
int8_t x199 = -1;
static int16_t x203 = 0;
int32_t x211 = -1;
static int16_t x219 = -1;
static volatile int32_t t44 = 183627823;
int8_t x221 = -1;
volatile uint64_t x222 = 28892LLU;
int16_t x223 = -1;
static uint64_t t45 = 18486629LLU;
static volatile int32_t x225 = -71492876;
static int32_t x228 = 16595063;
int32_t x232 = INT32_MIN;
volatile int64_t t50 = 32388LL;
volatile int16_t x251 = -1;
static uint32_t x252 = 1337U;
int16_t x257 = -1;
int64_t x258 = 2495LL;
uint16_t x270 = UINT16_MAX;
uint64_t x274 = UINT64_MAX;
uint64_t t57 = 305610993LLU;
static uint64_t t60 = 59410403251282919LLU;
volatile int16_t x318 = INT16_MIN;
int32_t t65 = 13242;
volatile int32_t x339 = -1;
static int64_t x346 = 14913194LL;
static uint64_t x354 = 1837855035LLU;
int64_t x355 = INT64_MIN;
uint64_t t71 = 4318479981394457LLU;
volatile int16_t x358 = -7259;
int16_t x363 = -1;
uint8_t x367 = 5U;
volatile int16_t x376 = -15;
static volatile uint32_t x378 = 104070168U;
static int16_t x382 = INT16_MAX;
int64_t x391 = INT64_MIN;
uint64_t x393 = 46LLU;
int32_t x401 = -3004415;
volatile int64_t x403 = -1LL;
int16_t x404 = INT16_MIN;
int32_t x411 = -1;
uint16_t x415 = 88U;
int16_t x418 = INT16_MIN;
static volatile uint16_t x422 = UINT16_MAX;
volatile int32_t t85 = -1;
int16_t x425 = INT16_MAX;
volatile uint32_t x437 = 2829U;
int64_t x440 = INT64_MIN;
static int64_t t88 = 28830315648LL;
int32_t x449 = 123;
static volatile int16_t x452 = -1;
uint16_t x453 = UINT16_MAX;
uint64_t x469 = 665LLU;
int32_t x486 = INT32_MIN;
volatile uint64_t t94 = 3LLU;
volatile uint16_t x508 = UINT16_MAX;
volatile int64_t t98 = 456305LL;


void f0(void) {
	uint8_t x2 = 108U;
	static volatile int16_t x4 = -1;
	uint32_t t0 = 61U;

	t0 = (x1+(x2*(x3|x4)));

	if (t0 != 212U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -1;
	volatile int8_t x7 = INT8_MIN;
	uint32_t t1 = 467357717U;

	t1 = (x5+(x6*(x7|x8)));

	if (t1 != 728U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	volatile int32_t t2 = -62797915;

	t2 = (x9+(x10*(x11|x12)));

	if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	volatile uint16_t x15 = 14U;
	int32_t x16 = INT32_MIN;
	volatile int64_t t3 = -733430LL;

	t3 = (x13+(x14*(x15|x16)));

	if (t3 != 2147483506LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x18 = UINT16_MAX;
	volatile int8_t x19 = -1;
	int64_t x20 = INT64_MIN;

	t4 = (x17+(x18*(x19|x20)));

	if (t4 != 36165103LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = UINT32_MAX;
	int64_t x23 = 11793614481375583LL;
	static int16_t x24 = INT16_MIN;
	volatile int64_t t5 = 1LL;

	t5 = (x21+(x22*(x23|x24)));

	if (t5 != -68861212604220LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = 6U;
	int16_t x31 = 0;
	int8_t x32 = INT8_MIN;
	int32_t t6 = 16909104;

	t6 = (x29+(x30*(x31|x32)));

	if (t6 != -32634) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 433U;
	int32_t x36 = INT32_MIN;
	static volatile int64_t t7 = -19LL;

	t7 = (x33+(x34*(x35|x36)));

	if (t7 != 2147484081LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 7U;
	volatile int16_t x38 = INT16_MIN;
	static int16_t x39 = INT16_MIN;
	volatile int64_t x40 = INT64_MAX;
	static int64_t t8 = 2898544LL;

	t8 = (x37+(x38*(x39|x40)));

	if (t8 != 32775LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int32_t x43 = INT32_MIN;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = 877235885865777LL;

	t9 = (x41+(x42*(x43|x44)));

	if (t9 != 274877906816LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 1U;
	static int16_t x50 = INT16_MIN;
	uint8_t x51 = UINT8_MAX;

	t10 = (x49+(x50*(x51|x52)));

	if (t10 != -427786239) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 165U;
	int64_t x59 = INT64_MAX;
	int64_t x60 = INT64_MIN;
	static volatile int64_t t11 = -42023289LL;

	t11 = (x57+(x58*(x59|x60)));

	if (t11 != 109LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int64_t x63 = INT64_MIN;
	uint64_t x64 = UINT64_MAX;
	static uint64_t t12 = 176070871821LLU;

	t12 = (x61+(x62*(x63|x64)));

	if (t12 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	int64_t x67 = 6LL;
	int8_t x68 = -1;
	static int64_t t13 = -85188714106854358LL;

	t13 = (x65+(x66*(x67|x68)));

	if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = INT8_MAX;
	static int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MAX;
	int8_t x72 = INT8_MIN;

	t14 = (x69+(x70*(x71|x72)));

	if (t14 != -32640) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = -1;
	int32_t x74 = 52;
	static int16_t x75 = -1;
	int32_t t15 = 764354279;

	t15 = (x73+(x74*(x75|x76)));

	if (t15 != -53) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -1;
	static int16_t x78 = INT16_MIN;
	static int8_t x79 = INT8_MAX;
	volatile int64_t x80 = 4327200LL;
	volatile int64_t t16 = 61676034356675LL;

	t16 = (x77+(x78*(x79|x80)));

	if (t16 != -141796802561LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x82 = 14;
	int8_t x84 = INT8_MIN;

	t17 = (x81+(x82*(x83|x84)));

	if (t17 != 32753) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x87 = 456404919LLU;
	int64_t x88 = INT64_MIN;
	uint64_t t18 = 3021916LLU;

	t18 = (x85+(x86*(x87|x88)));

	if (t18 != 14467626217292229391LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MIN;
	static uint32_t x90 = 43493787U;
	int32_t x91 = INT32_MIN;
	uint32_t x92 = UINT32_MAX;
	static volatile uint32_t t19 = 1360U;

	t19 = (x89+(x90*(x91|x92)));

	if (t19 != 4251440741U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -1502;
	int16_t x98 = -1;
	volatile int32_t x99 = INT32_MAX;
	int32_t t20 = 80;

	t20 = (x97+(x98*(x99|x100)));

	if (t20 != -1501) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x102 = 97U;
	static int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MAX;
	uint32_t t21 = 60U;

	t21 = (x101+(x102*(x103|x104)));

	if (t21 != 3203U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MAX;
	int16_t x107 = INT16_MIN;
	static uint8_t x108 = 28U;
	volatile int32_t t22 = -4079;

	t22 = (x105+(x106*(x107|x108)));

	if (t22 != 13423427) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MAX;
	int32_t x110 = INT32_MAX;
	uint16_t x112 = 37U;

	t23 = (x109+(x110*(x111|x112)));

	if (t23 != -2147483520) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x113 = 2U;
	int16_t x114 = 167;
	static uint8_t x115 = 0U;
	static uint64_t x116 = 3596823LLU;

	t24 = (x113+(x114*(x115|x116)));

	if (t24 != 600669443LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x117 = INT8_MAX;
	uint8_t x118 = 1U;
	uint8_t x119 = 8U;
	uint16_t x120 = UINT16_MAX;
	static volatile int32_t t25 = 2994368;

	t25 = (x117+(x118*(x119|x120)));

	if (t25 != 65662) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x129 = -1312;
	static uint8_t x130 = UINT8_MAX;
	int64_t x132 = -1LL;
	int64_t t26 = 2428508LL;

	t26 = (x129+(x130*(x131|x132)));

	if (t26 != -1567LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = 26393332312LLU;
	uint64_t x134 = 35681LLU;
	int64_t x135 = INT64_MIN;
	static uint32_t x136 = 166216U;
	volatile uint64_t t27 = 4582782514078692LLU;

	t27 = (x133+(x134*(x135|x136)));

	if (t27 != 9223372069178861216LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x137 = 55U;
	int16_t x138 = -1;
	int8_t x139 = 0;
	int8_t x140 = INT8_MIN;
	int32_t t28 = 122305134;

	t28 = (x137+(x138*(x139|x140)));

	if (t28 != 183) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = 62635LLU;
	uint32_t x144 = 0U;
	uint64_t t29 = 705119118764238433LLU;

	t29 = (x141+(x142*(x143|x144)));

	if (t29 != 18446744052649166961LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x146 = 80U;
	int16_t x147 = -1;
	uint32_t x148 = 2283091U;

	t30 = (x145+(x146*(x147|x148)));

	if (t30 != 4270400531U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -23227654LL;
	int64_t x150 = -1LL;
	static uint64_t x151 = 9302295375054LLU;
	volatile uint64_t t31 = 85611006292757794LLU;

	t31 = (x149+(x150*(x151|x152)));

	if (t31 != 580560428LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x157 = 5004978LLU;
	int64_t x158 = -1LL;
	int64_t x159 = -31772235LL;
	uint32_t x160 = 39602262U;
	volatile uint64_t t32 = 911062298407LLU;

	t32 = (x157+(x158*(x159|x160)));

	if (t32 != 32302267LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x161 = 12U;
	volatile int32_t x162 = INT32_MAX;
	volatile int8_t x164 = INT8_MIN;
	volatile int64_t t33 = -14590687LL;

	t33 = (x161+(x162*(x163|x164)));

	if (t33 != -6442450929LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int8_t x170 = -1;
	uint16_t x171 = 0U;
	int16_t x172 = -1;
	static int32_t t34 = -80;

	t34 = (x169+(x170*(x171|x172)));

	if (t34 != 256) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x173 = 23LLU;
	volatile uint64_t t35 = 2LLU;

	t35 = (x173+(x174*(x175|x176)));

	if (t35 != 4294967308LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = INT16_MAX;
	uint64_t x179 = UINT64_MAX;
	volatile uint64_t t36 = 410271606LLU;

	t36 = (x177+(x178*(x179|x180)));

	if (t36 != 32768LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x183 = 0;
	uint16_t x184 = UINT16_MAX;
	uint32_t t37 = 8U;

	t37 = (x181+(x182*(x183|x184)));

	if (t37 != 462489783U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x189 = 7600U;
	int32_t x190 = 93;
	static uint32_t x191 = UINT32_MAX;
	static int8_t x192 = -1;
	volatile uint32_t t38 = 237U;

	t38 = (x189+(x190*(x191|x192)));

	if (t38 != 7507U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x193 = 79U;
	uint64_t x194 = 491962LLU;
	volatile int16_t x196 = INT16_MIN;
	uint64_t t39 = 11906420992LLU;

	t39 = (x193+(x194*(x195|x196)));

	if (t39 != 18446744073354847093LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = INT8_MAX;
	static int8_t x198 = 3;
	volatile int8_t x200 = -3;
	static int32_t t40 = -66706;

	t40 = (x197+(x198*(x199|x200)));

	if (t40 != 124) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x201 = 5U;
	int64_t x202 = INT64_MIN;
	uint64_t x204 = 1913784353521LLU;
	static volatile uint64_t t41 = 140517529632LLU;

	t41 = (x201+(x202*(x203|x204)));

	if (t41 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x209 = 18771034421341LLU;
	volatile int8_t x210 = -2;
	uint16_t x212 = 2543U;
	volatile uint64_t t42 = 47285092433LLU;

	t42 = (x209+(x210*(x211|x212)));

	if (t42 != 18771034421343LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x213 = INT16_MAX;
	static int8_t x214 = INT8_MAX;
	int16_t x215 = INT16_MIN;
	static int32_t x216 = -473183;
	volatile int32_t t43 = 104701;

	t43 = (x213+(x214*(x215|x216)));

	if (t43 != -1799970) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x217 = 3377;
	int16_t x218 = INT16_MAX;
	uint8_t x220 = 29U;

	t44 = (x217+(x218*(x219|x220)));

	if (t44 != -29390) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x224 = 85;

	t45 = (x221+(x222*(x223|x224)));

	if (t45 != 18446744073709522723LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x226 = -1;
	uint64_t x227 = UINT64_MAX;
	static volatile uint64_t t46 = 54110122371102LLU;

	t46 = (x225+(x226*(x227|x228)));

	if (t46 != 18446744073638058741LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x229 = INT64_MIN;
	static int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	volatile int64_t t47 = 821793886LL;

	t47 = (x229+(x230*(x231|x232)));

	if (t47 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = -3;
	uint64_t x235 = 14932787646LLU;
	uint16_t x236 = 0U;
	volatile uint64_t t48 = 5558596414639LLU;

	t48 = (x233+(x234*(x235|x236)));

	if (t48 != 18446744033206155973LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = INT16_MIN;
	volatile int64_t x238 = 458713326254555LL;
	int8_t x239 = INT8_MIN;
	int8_t x240 = -27;
	volatile int64_t t49 = 13532266799334LL;

	t49 = (x237+(x238*(x239|x240)));

	if (t49 != -12385259808905753LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = INT32_MAX;
	int8_t x242 = -1;
	int32_t x243 = INT32_MIN;
	int64_t x244 = INT64_MIN;

	t50 = (x241+(x242*(x243|x244)));

	if (t50 != 4294967295LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MAX;
	volatile uint32_t x250 = 1621403099U;
	uint32_t t51 = 6101U;

	t51 = (x249+(x250*(x251|x252)));

	if (t51 != 2673564324U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = -1LL;
	volatile int32_t x254 = 3;
	static int8_t x255 = -1;
	int8_t x256 = INT8_MAX;
	int64_t t52 = -40178LL;

	t52 = (x253+(x254*(x255|x256)));

	if (t52 != -4LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x259 = INT16_MAX;
	int16_t x260 = INT16_MAX;
	volatile int64_t t53 = -56427LL;

	t53 = (x257+(x258*(x259|x260)));

	if (t53 != 81753664LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x261 = UINT64_MAX;
	int32_t x262 = INT32_MIN;
	static int64_t x263 = -1LL;
	int16_t x264 = 460;
	volatile uint64_t t54 = 1034930531LLU;

	t54 = (x261+(x262*(x263|x264)));

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x265 = 3U;
	volatile uint16_t x266 = UINT16_MAX;
	int64_t x267 = -1LL;
	static int8_t x268 = -1;
	static int64_t t55 = -66892150056399369LL;

	t55 = (x265+(x266*(x267|x268)));

	if (t55 != -65532LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x269 = INT8_MAX;
	uint8_t x271 = UINT8_MAX;
	uint16_t x272 = 0U;
	int32_t t56 = 29;

	t56 = (x269+(x270*(x271|x272)));

	if (t56 != 16711552) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = -1;
	volatile uint8_t x275 = 76U;
	int8_t x276 = INT8_MIN;

	t57 = (x273+(x274*(x275|x276)));

	if (t57 != 51LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = -113917789LL;
	uint16_t x283 = UINT16_MAX;
	int8_t x284 = INT8_MAX;
	int64_t t58 = 735852527LL;

	t58 = (x281+(x282*(x283|x284)));

	if (t58 != -7465602302243LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x289 = 0;
	volatile uint32_t x290 = 6430698U;
	int16_t x291 = -1734;
	int32_t x292 = INT32_MIN;
	volatile uint32_t t59 = 3086U;

	t59 = (x289+(x290*(x291|x292)));

	if (t59 != 1734071556U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x293 = 5679653232894589LL;
	volatile uint32_t x294 = 2U;
	int64_t x295 = INT64_MIN;
	static uint64_t x296 = 473844526LLU;

	t60 = (x293+(x294*(x295|x296)));

	if (t60 != 5679654180583641LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x305 = 1U;
	volatile uint16_t x306 = 0U;
	static uint8_t x307 = UINT8_MAX;
	int32_t x308 = -1;
	volatile int32_t t61 = 545774;

	t61 = (x305+(x306*(x307|x308)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x309 = 84677148525LLU;
	static volatile int32_t x310 = 834;
	volatile int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MAX;
	volatile uint64_t t62 = 4336761838LLU;

	t62 = (x309+(x310*(x311|x312)));

	if (t62 != 84649925931LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x317 = INT16_MAX;
	static uint64_t x319 = 139142071996LLU;
	int32_t x320 = -3031109;
	volatile uint64_t t63 = 2010685338624LLU;

	t63 = (x317+(x318*(x319|x320)));

	if (t63 != 95028314111LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x321 = -1LL;
	volatile int8_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int16_t x324 = -1;
	int64_t t64 = 28022325331220LL;

	t64 = (x321+(x322*(x323|x324)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x325 = -1;
	static int16_t x326 = 5071;
	int8_t x327 = INT8_MAX;
	uint16_t x328 = 27963U;

	t65 = (x325+(x326*(x327|x328)));

	if (t65 != 142145200) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x329 = 1494174547461122290LL;
	int64_t x330 = -1LL;
	static uint8_t x331 = 4U;
	uint8_t x332 = 53U;
	volatile int64_t t66 = 2101500856247LL;

	t66 = (x329+(x330*(x331|x332)));

	if (t66 != 1494174547461122237LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = INT64_MIN;
	static uint16_t x334 = 490U;
	static uint8_t x335 = UINT8_MAX;
	uint16_t x336 = 31465U;
	int64_t t67 = -31481192244LL;

	t67 = (x333+(x334*(x335|x336)));

	if (t67 != -9223372036839347178LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x337 = 18705312LL;
	int16_t x338 = INT16_MAX;
	int32_t x340 = INT32_MIN;
	volatile int64_t t68 = -3724LL;

	t68 = (x337+(x338*(x339|x340)));

	if (t68 != 18672545LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x341 = -63072LL;
	int32_t x342 = 63;
	int8_t x343 = -1;
	int32_t x344 = INT32_MIN;
	int64_t t69 = 16483LL;

	t69 = (x341+(x342*(x343|x344)));

	if (t69 != -63135LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x345 = 1507015LLU;
	int16_t x347 = 478;
	int32_t x348 = -2060866;
	static uint64_t t70 = 136710651682911LLU;

	t70 = (x345+(x346*(x347|x348)));

	if (t70 != 18446713340571037043LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x353 = 4635;
	uint32_t x356 = 622500U;

	t71 = (x353+(x354*(x355|x356)));

	if (t71 != 9224516101614067943LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = INT32_MIN;
	static int16_t x359 = -7206;
	int8_t x360 = INT8_MIN;
	int32_t t72 = -16;

	t72 = (x357+(x358*(x359|x360)));

	if (t72 != -2147207806) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x361 = 0U;
	volatile int32_t x362 = -21082;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t73 = 152349855217LLU;

	t73 = (x361+(x362*(x363|x364)));

	if (t73 != 21082LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x365 = INT8_MAX;
	uint8_t x366 = 110U;
	static uint8_t x368 = UINT8_MAX;
	int32_t t74 = 19228;

	t74 = (x365+(x366*(x367|x368)));

	if (t74 != 28177) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MIN;
	volatile int16_t x375 = -1;
	volatile int32_t t75 = -1;

	t75 = (x373+(x374*(x375|x376)));

	if (t75 != -2147483520) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x377 = 1U;
	int64_t x379 = -1LL;
	static int8_t x380 = INT8_MIN;
	static int64_t t76 = 64873660615352LL;

	t76 = (x377+(x378*(x379|x380)));

	if (t76 != -104070167LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x381 = -241224LL;
	int8_t x383 = INT8_MIN;
	uint16_t x384 = 18U;
	int64_t t77 = -3094215258LL;

	t77 = (x381+(x382*(x383|x384)));

	if (t77 != -3845594LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x389 = -1;
	int32_t x390 = 31095;
	int8_t x392 = -1;
	volatile int64_t t78 = 456LL;

	t78 = (x389+(x390*(x391|x392)));

	if (t78 != -31096LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x394 = INT16_MAX;
	static volatile int64_t x395 = INT64_MAX;
	int32_t x396 = INT32_MIN;
	volatile uint64_t t79 = 206LLU;

	t79 = (x393+(x394*(x395|x396)));

	if (t79 != 18446744073709518895LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x402 = 3623U;
	volatile int64_t t80 = -6481470282835LL;

	t80 = (x401+(x402*(x403|x404)));

	if (t80 != -3008038LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x405 = -1;
	uint64_t x406 = 117675496LLU;
	int32_t x407 = 6244;
	static int8_t x408 = -1;
	volatile uint64_t t81 = 21941312042200478LLU;

	t81 = (x405+(x406*(x407|x408)));

	if (t81 != 18446744073591876119LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x409 = -1;
	static uint32_t x410 = UINT32_MAX;
	int16_t x412 = INT16_MIN;
	uint32_t t82 = 305866U;

	t82 = (x409+(x410*(x411|x412)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x413 = -132418148769453897LL;
	int32_t x414 = -69;
	int8_t x416 = INT8_MIN;
	int64_t t83 = -18309LL;

	t83 = (x413+(x414*(x415|x416)));

	if (t83 != -132418148769451137LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x417 = INT32_MAX;
	int64_t x419 = -1235602542112923439LL;
	static int32_t x420 = -1;
	int64_t t84 = -1514LL;

	t84 = (x417+(x418*(x419|x420)));

	if (t84 != 2147516415LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x421 = -1;
	static int32_t x423 = -1;
	int32_t x424 = -1;

	t85 = (x421+(x422*(x423|x424)));

	if (t85 != -65536) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x426 = -1;
	int32_t x427 = INT32_MIN;
	int32_t x428 = -1;
	static int32_t t86 = -19581862;

	t86 = (x425+(x426*(x427|x428)));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x429 = 104686706775LL;
	uint32_t x430 = 2U;
	int32_t x431 = INT32_MIN;
	volatile uint16_t x432 = UINT16_MAX;
	volatile int64_t t87 = -1898855604205LL;

	t87 = (x429+(x430*(x431|x432)));

	if (t87 != 104686837845LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x438 = 3776502;
	int64_t x439 = -1LL;

	t88 = (x437+(x438*(x439|x440)));

	if (t88 != -3773673LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x450 = -1LL;
	static uint16_t x451 = 2U;
	int64_t t89 = -53291415LL;

	t89 = (x449+(x450*(x451|x452)));

	if (t89 != 124LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x454 = UINT8_MAX;
	int16_t x455 = INT16_MIN;
	uint64_t x456 = UINT64_MAX;
	static uint64_t t90 = 1232LLU;

	t90 = (x453+(x454*(x455|x456)));

	if (t90 != 65280LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x465 = INT8_MIN;
	volatile int32_t x466 = 0;
	volatile int64_t x467 = -1LL;
	uint64_t x468 = UINT64_MAX;
	uint64_t t91 = 51LLU;

	t91 = (x465+(x466*(x467|x468)));

	if (t91 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x470 = -1;
	volatile int8_t x471 = 45;
	static int32_t x472 = INT32_MIN;
	volatile uint64_t t92 = 1948343479746049710LLU;

	t92 = (x469+(x470*(x471|x472)));

	if (t92 != 2147484268LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x477 = 13U;
	int16_t x478 = INT16_MIN;
	int8_t x479 = -6;
	static int64_t x480 = -1034462744LL;
	volatile int64_t t93 = 13389676831847LL;

	t93 = (x477+(x478*(x479|x480)));

	if (t93 != 196621LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x485 = INT8_MAX;
	static uint64_t x487 = UINT64_MAX;
	uint16_t x488 = UINT16_MAX;

	t94 = (x485+(x486*(x487|x488)));

	if (t94 != 2147483775LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x489 = 16U;
	volatile int32_t x490 = 30457;
	volatile int64_t x491 = 187728521444LL;
	int8_t x492 = INT8_MIN;
	volatile int64_t t95 = 200936321849781LL;

	t95 = (x489+(x490*(x491|x492)));

	if (t95 != -852780LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x493 = INT16_MAX;
	int8_t x494 = INT8_MIN;
	uint64_t x495 = UINT64_MAX;
	uint32_t x496 = UINT32_MAX;
	volatile uint64_t t96 = 1517334477LLU;

	t96 = (x493+(x494*(x495|x496)));

	if (t96 != 32895LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x501 = 462U;
	uint32_t x502 = UINT32_MAX;
	uint16_t x503 = UINT16_MAX;
	int32_t x504 = 0;
	volatile uint32_t t97 = 107U;

	t97 = (x501+(x502*(x503|x504)));

	if (t97 != 4294902223U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x505 = 142047036LL;
	static int16_t x506 = -1;
	static int32_t x507 = -82772;

	t98 = (x505+(x506*(x507|x508)));

	if (t98 != 142112573LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x509 = INT64_MIN;
	static volatile uint64_t x510 = 0LLU;
	volatile uint16_t x511 = UINT16_MAX;
	static uint32_t x512 = 6U;
	volatile uint64_t t99 = 57705741LLU;

	t99 = (x509+(x510*(x511|x512)));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

