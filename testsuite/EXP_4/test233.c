#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -22283220LL;
static int64_t x4 = INT64_MAX;
int8_t x8 = INT8_MIN;
static volatile int32_t x22 = -8;
volatile uint64_t t7 = 574707327LLU;
int16_t x40 = 15009;
uint64_t t10 = 8LLU;
int16_t x49 = -1;
uint32_t x53 = 188U;
int32_t x59 = INT32_MIN;
uint64_t t14 = 4099851LLU;
int32_t x73 = -3085;
uint8_t x74 = 1U;
int8_t x78 = -1;
volatile int64_t x79 = -79963443757LL;
int8_t x80 = INT8_MAX;
int64_t x83 = INT64_MAX;
volatile int64_t x87 = -284077623LL;
uint64_t x96 = UINT64_MAX;
uint64_t x100 = UINT64_MAX;
static volatile uint32_t x101 = 2132684U;
int32_t x102 = -3849;
volatile uint64_t t25 = 799946LLU;
uint64_t x114 = UINT64_MAX;
int32_t x115 = -1;
int8_t x116 = INT8_MAX;
int32_t x120 = INT32_MIN;
static uint8_t x122 = 7U;
uint8_t x125 = 60U;
uint16_t x138 = 17U;
volatile uint32_t t32 = 2042049U;
int64_t x145 = 289LL;
uint32_t x154 = 3U;
int64_t t35 = 129417603277205LL;
volatile int8_t x171 = 11;
int16_t x184 = -6364;
int16_t x199 = INT16_MIN;
static volatile int64_t t44 = -127182427415388LL;
static int64_t x215 = INT64_MAX;
static volatile uint8_t x216 = UINT8_MAX;
int64_t x220 = INT64_MAX;
volatile int16_t x229 = 25;
static volatile int32_t t48 = 27;
volatile uint64_t t49 = UINT64_MAX;
static int16_t x237 = -11943;
int64_t t50 = 5294099LL;
static volatile uint64_t x242 = UINT64_MAX;
static int8_t x252 = -1;
uint16_t x255 = UINT16_MAX;
uint64_t t54 = 27911LLU;
volatile uint16_t x258 = 369U;
volatile int16_t x273 = -100;
uint64_t x274 = 2682894LLU;
int64_t x281 = 454123608033641LL;
uint8_t x282 = UINT8_MAX;
int16_t x283 = INT16_MAX;
int64_t x291 = -2051824407656641LL;
uint32_t x304 = 977364818U;
static uint16_t x308 = UINT16_MAX;
uint64_t t64 = UINT64_MAX;
int64_t x315 = INT64_MAX;
volatile uint64_t t70 = 283507664LLU;
int32_t x334 = 169255;
uint32_t x336 = 0U;
volatile int64_t t72 = -267LL;
volatile int64_t x345 = INT64_MIN;
int64_t x360 = -4871635LL;
static volatile uint64_t x365 = 53808709879LLU;
uint32_t x366 = UINT32_MAX;
uint64_t t79 = 1363321689617LLU;
uint32_t x374 = 220991U;
uint64_t x375 = 922743864724LLU;
static int8_t x379 = 9;
int8_t x387 = -1;
int16_t x401 = -1;
static uint64_t x405 = 229LLU;
uint8_t x417 = UINT8_MAX;
static int16_t x418 = -1;
volatile int8_t x432 = -1;
static int8_t x436 = INT8_MAX;
int16_t x442 = INT16_MIN;
int32_t x450 = -1;
int8_t x454 = -1;
int32_t x455 = -1;
uint32_t x457 = 982091119U;
int64_t x459 = INT64_MIN;


void f0(void) {
	int16_t x1 = -489;
	uint8_t x3 = 1U;
	int64_t t0 = 1LL;

	t0 = (x1|(x2%(x3-x4)));

	if (t0 != -449LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int8_t x6 = INT8_MAX;
	int32_t x7 = 119;
	static int32_t t1 = 4;

	t1 = (x5|(x6%(x7-x8)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	volatile uint16_t x10 = 123U;
	uint64_t x11 = 3251LLU;
	volatile int64_t x12 = INT64_MIN;
	volatile uint64_t t2 = 2688724639473LLU;

	t2 = (x9|(x10%(x11-x12)));

	if (t2 != 2147483647LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 59U;
	int16_t x14 = INT16_MAX;
	volatile uint32_t x15 = 1831U;
	int64_t x16 = INT64_MAX;
	int64_t t3 = 2654698LL;

	t3 = (x13|(x14%(x15-x16)));

	if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 1347916105U;
	int32_t x18 = -1;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	uint32_t t4 = UINT32_MAX;

	t4 = (x17|(x18%(x19-x20)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int32_t x23 = 248;
	int8_t x24 = 12;
	static volatile int64_t t5 = -29585915LL;

	t5 = (x21|(x22%(x23-x24)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 1081865560329016LL;
	int64_t x26 = INT64_MAX;
	int32_t x27 = INT32_MIN;
	static int64_t x28 = INT64_MIN;
	int64_t t6 = -89LL;

	t6 = (x25|(x26%(x27-x28)));

	if (t6 != 1081865754640383LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int32_t x30 = -1979;
	static uint64_t x31 = 30737860326507LLU;
	static int16_t x32 = -1;

	t7 = (x29|(x30%(x31-x32)));

	if (t7 != 1218101977215LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	uint8_t x34 = 6U;
	int8_t x35 = INT8_MAX;
	int8_t x36 = 9;
	volatile int32_t t8 = -437;

	t8 = (x33|(x34%(x35-x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x38 = INT8_MIN;
	volatile int64_t x39 = INT64_MAX;
	static volatile int64_t t9 = -6452506676744LL;

	t9 = (x37|(x38%(x39-x40)));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = 722;
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = 1;
	volatile uint64_t x44 = 37232LLU;

	t10 = (x41|(x42%(x43-x44)));

	if (t10 != 37886LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x50 = INT64_MAX;
	int16_t x51 = 0;
	volatile uint64_t x52 = 1141318552920871742LLU;
	uint64_t t11 = UINT64_MAX;

	t11 = (x49|(x50%(x51-x52)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x54 = UINT8_MAX;
	uint64_t x55 = 1885390245LLU;
	uint8_t x56 = 11U;
	static uint64_t t12 = 36LLU;

	t12 = (x53|(x54%(x55-x56)));

	if (t12 != 255LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1LL;
	int32_t x58 = INT32_MIN;
	int8_t x60 = -1;
	int64_t t13 = -15553334241383674LL;

	t13 = (x57|(x58%(x59-x60)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MIN;
	volatile uint64_t x66 = UINT64_MAX;
	static int32_t x67 = 212274;
	uint8_t x68 = 58U;

	t14 = (x65|(x66%(x67-x68)));

	if (t14 != 18446744073709521815LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 6106564690LLU;
	int64_t x70 = 28313972622348535LL;
	volatile uint32_t x71 = UINT32_MAX;
	uint64_t x72 = 597372840236510142LLU;
	static volatile uint64_t t15 = 2234585036LLU;

	t15 = (x69|(x70%(x71-x72)));

	if (t15 != 28313976978790647LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x75 = -1;
	int16_t x76 = INT16_MAX;
	volatile int32_t t16 = -1982;

	t16 = (x73|(x74%(x75-x76)));

	if (t16 != -3085) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 8373LLU;
	uint64_t t17 = UINT64_MAX;

	t17 = (x77|(x78%(x79-x80)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = -2023504267886LL;
	uint32_t x84 = 17667U;
	volatile int64_t t18 = -8027798906035LL;

	t18 = (x81|(x82%(x83-x84)));

	if (t18 != -110LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x86 = 0;
	int8_t x88 = 0;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (x85|(x86%(x87-x88)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = 3587467;
	static uint32_t x90 = 22357U;
	static uint32_t x91 = UINT32_MAX;
	volatile uint8_t x92 = 0U;
	uint32_t t20 = 156363U;

	t20 = (x89|(x90%(x91-x92)));

	if (t20 != 3604447U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 2003444U;
	volatile uint16_t x94 = 99U;
	volatile uint16_t x95 = 5722U;
	uint64_t t21 = 14292232LLU;

	t21 = (x93|(x94%(x95-x96)));

	if (t21 != 2003447LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = INT16_MIN;
	int32_t x98 = 12073689;
	volatile int16_t x99 = INT16_MIN;
	volatile uint64_t t22 = 3215528685976LLU;

	t22 = (x97|(x98%(x99-x100)));

	if (t22 != 18446744073709533913LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x103 = INT8_MIN;
	static volatile int16_t x104 = 12;
	uint32_t t23 = UINT32_MAX;

	t23 = (x101|(x102%(x103-x104)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MAX;
	int64_t x106 = INT64_MIN;
	static int32_t x107 = INT32_MAX;
	static uint32_t x108 = 7435405U;
	int64_t t24 = -1011LL;

	t24 = (x105|(x106%(x107-x108)));

	if (t24 != -652247041LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x109 = 69265282862697441LLU;
	int32_t x110 = -1;
	uint64_t x111 = UINT64_MAX;
	uint64_t x112 = 200033737LLU;

	t25 = (x109|(x110%(x111-x112)));

	if (t25 != 69265283057733609LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x113 = 52;
	static volatile uint64_t t26 = 4198614188LLU;

	t26 = (x113|(x114%(x115-x116)));

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MAX;
	volatile uint8_t x118 = 1U;
	uint32_t x119 = UINT32_MAX;
	uint32_t t27 = 865U;

	t27 = (x117|(x118%(x119-x120)));

	if (t27 != 127U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t x123 = INT32_MIN;
	volatile int16_t x124 = -1;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x121|(x122%(x123-x124)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x126 = -1;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = 1;
	static volatile uint32_t t29 = 3U;

	t29 = (x125|(x126%(x127-x128)));

	if (t29 != 61U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MAX;
	uint8_t x130 = 0U;
	int16_t x131 = INT16_MAX;
	int16_t x132 = -1;
	int32_t t30 = INT32_MAX;

	t30 = (x129|(x130%(x131-x132)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MIN;
	volatile int8_t x135 = INT8_MIN;
	int64_t x136 = 1LL;
	int64_t t31 = -1LL;

	t31 = (x133|(x134%(x135-x136)));

	if (t31 != -2LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 2U;
	volatile uint32_t x139 = UINT32_MAX;
	uint32_t x140 = 116672U;

	t32 = (x137|(x138%(x139-x140)));

	if (t32 != 19U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x146 = -1;
	int64_t x147 = INT64_MIN;
	volatile uint64_t x148 = 269LLU;
	static volatile uint64_t t33 = 10192161LLU;

	t33 = (x145|(x146%(x147-x148)));

	if (t33 != 825LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MAX;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = UINT64_MAX;
	uint64_t t34 = 2498LLU;

	t34 = (x153|(x154%(x155-x156)));

	if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x157 = -1LL;
	int8_t x158 = 38;
	static uint16_t x159 = UINT16_MAX;
	int8_t x160 = INT8_MAX;

	t35 = (x157|(x158%(x159-x160)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x165 = INT16_MIN;
	uint64_t x166 = 1412015663816385665LLU;
	static uint64_t x167 = UINT64_MAX;
	int8_t x168 = INT8_MIN;
	volatile uint64_t t36 = 10263180945540LLU;

	t36 = (x165|(x166%(x167-x168)));

	if (t36 != 18446744073709518904LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = 109849597924LL;
	int8_t x170 = INT8_MIN;
	uint8_t x172 = UINT8_MAX;
	int64_t t37 = -64608810994108814LL;

	t37 = (x169|(x170%(x171-x172)));

	if (t37 != -28LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x173 = 117U;
	uint16_t x174 = 11U;
	volatile uint8_t x175 = 77U;
	int8_t x176 = 0;
	volatile int32_t t38 = 203427686;

	t38 = (x173|(x174%(x175-x176)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -1800271592175LL;
	uint64_t x178 = 751233211521253LLU;
	volatile int16_t x179 = INT16_MAX;
	uint16_t x180 = UINT16_MAX;
	volatile uint64_t t39 = 50417LLU;

	t39 = (x177|(x178%(x179-x180)));

	if (t39 != 18446743519121366517LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x181 = INT16_MIN;
	int8_t x182 = 8;
	uint32_t x183 = 1143726766U;
	volatile uint32_t t40 = 917U;

	t40 = (x181|(x182%(x183-x184)));

	if (t40 != 4294934536U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = -1;
	volatile int8_t x186 = INT8_MIN;
	static uint32_t x187 = 10638U;
	int32_t x188 = INT32_MIN;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x185|(x186%(x187-x188)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x193 = 43;
	int8_t x194 = INT8_MAX;
	int16_t x195 = -1;
	uint16_t x196 = 25610U;
	volatile int32_t t42 = -63;

	t42 = (x193|(x194%(x195-x196)));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = -1;
	int64_t x198 = -6178LL;
	int32_t x200 = 1042387931;
	volatile int64_t t43 = 242714677LL;

	t43 = (x197|(x198%(x199-x200)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = INT8_MIN;
	static int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MIN;
	int8_t x212 = INT8_MIN;

	t44 = (x209|(x210%(x211-x212)));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = INT8_MIN;
	uint8_t x214 = 0U;
	int64_t t45 = 718678715534381771LL;

	t45 = (x213|(x214%(x215-x216)));

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = 1340;
	uint64_t x218 = 342372LLU;
	volatile int8_t x219 = -1;
	static uint64_t t46 = 13LLU;

	t46 = (x217|(x218%(x219-x220)));

	if (t46 != 343420LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x225 = UINT16_MAX;
	int8_t x226 = -6;
	volatile int64_t x227 = -1LL;
	uint8_t x228 = UINT8_MAX;
	volatile int64_t t47 = 9LL;

	t47 = (x225|(x226%(x227-x228)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x230 = INT8_MIN;
	int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MIN;

	t48 = (x229|(x230%(x231-x232)));

	if (t48 != -103) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x233 = -24;
	int8_t x234 = INT8_MAX;
	int16_t x235 = -1;
	uint64_t x236 = 2884927LLU;

	t49 = (x233|(x234%(x235-x236)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x238 = 105402339LL;
	uint32_t x239 = 0U;
	int32_t x240 = 102;

	t50 = (x237|(x238%(x239-x240)));

	if (t50 != -8197LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = 0;
	volatile uint16_t x243 = 2U;
	volatile uint16_t x244 = 370U;
	volatile uint64_t t51 = 2169590154676LLU;

	t51 = (x241|(x242%(x243-x244)));

	if (t51 != 367LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x245 = INT64_MIN;
	static uint32_t x246 = 6U;
	int16_t x247 = INT16_MAX;
	int64_t x248 = 1581666LL;
	int64_t t52 = 337754476217LL;

	t52 = (x245|(x246%(x247-x248)));

	if (t52 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MAX;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x249|(x250%(x251-x252)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x253 = 7;
	static volatile uint64_t x254 = 13399537290LLU;
	uint32_t x256 = 33422544U;

	t54 = (x253|(x254%(x255-x256)));

	if (t54 != 614706431LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x257 = -1;
	uint64_t x259 = 603952867LLU;
	static int8_t x260 = INT8_MAX;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x257|(x258%(x259-x260)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = UINT64_MAX;
	uint64_t t56 = 1LLU;

	t56 = (x273|(x274%(x275-x276)));

	if (t56 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x277 = 8840;
	int64_t x278 = -42065561018509443LL;
	static int64_t x279 = INT64_MAX;
	volatile uint32_t x280 = 30086609U;
	int64_t t57 = 8949868087LL;

	t57 = (x277|(x278%(x279-x280)));

	if (t57 != -42065561018501123LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x284 = UINT16_MAX;
	volatile int64_t t58 = -1275994899494034938LL;

	t58 = (x281|(x282%(x283-x284)));

	if (t58 != 454123608033791LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x285 = UINT8_MAX;
	volatile int16_t x286 = INT16_MIN;
	uint8_t x287 = 4U;
	int32_t x288 = -447;
	int32_t t59 = 6076;

	t59 = (x285|(x286%(x287-x288)));

	if (t59 != -257) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x289 = -1;
	uint16_t x290 = 5230U;
	volatile uint8_t x292 = 38U;
	int64_t t60 = 63236716706360415LL;

	t60 = (x289|(x290%(x291-x292)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = -1;
	uint32_t x295 = 5U;
	volatile int16_t x296 = INT16_MAX;
	volatile uint32_t t61 = 1U;

	t61 = (x293|(x294%(x295-x296)));

	if (t61 != 4294967289U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x297 = UINT64_MAX;
	int64_t x298 = INT64_MIN;
	uint16_t x299 = 4U;
	volatile int8_t x300 = INT8_MIN;
	uint64_t t62 = UINT64_MAX;

	t62 = (x297|(x298%(x299-x300)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = -4;
	static volatile int64_t x303 = INT64_MAX;
	int64_t t63 = 18086LL;

	t63 = (x301|(x302%(x303-x304)));

	if (t63 != -4LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = -1;
	uint64_t x306 = 480232290647359LLU;
	static int64_t x307 = 3400833482LL;

	t64 = (x305|(x306%(x307-x308)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x309 = UINT32_MAX;
	int16_t x310 = INT16_MIN;
	static int64_t x311 = -1LL;
	volatile int64_t x312 = -2493LL;
	volatile int64_t t65 = 3460625275LL;

	t65 = (x309|(x310%(x311-x312)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x313 = 919024844223LLU;
	static uint16_t x314 = 311U;
	volatile uint8_t x316 = 3U;
	uint64_t t66 = 42990641234LLU;

	t66 = (x313|(x314%(x315-x316)));

	if (t66 != 919024844223LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x317 = 483U;
	int16_t x318 = -1;
	uint16_t x319 = 500U;
	int64_t x320 = 1400322844LL;
	volatile int64_t t67 = -12783683691092974LL;

	t67 = (x317|(x318%(x319-x320)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x321 = -97576184109960LL;
	uint8_t x322 = 2U;
	volatile uint32_t x323 = 10U;
	volatile int8_t x324 = -1;
	volatile int64_t t68 = -12634592748771237LL;

	t68 = (x321|(x322%(x323-x324)));

	if (t68 != -97576184109958LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x325 = INT32_MIN;
	uint8_t x326 = 80U;
	static int32_t x327 = -4994937;
	uint64_t x328 = UINT64_MAX;
	uint64_t t69 = 44908LLU;

	t69 = (x325|(x326%(x327-x328)));

	if (t69 != 18446744071562068048LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x329 = -5799;
	int32_t x330 = INT32_MIN;
	uint64_t x331 = 143520LLU;
	int16_t x332 = INT16_MIN;

	t70 = (x329|(x330%(x331-x332)));

	if (t70 != 18446744073709545849LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x333 = INT64_MIN;
	volatile int32_t x335 = 5;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x333|(x334%(x335-x336)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x337 = INT16_MIN;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = -3;
	static int64_t x340 = INT64_MIN;

	t72 = (x337|(x338%(x339-x340)));

	if (t72 != -32513LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x341 = -1LL;
	int8_t x342 = INT8_MIN;
	volatile int64_t x343 = INT64_MIN;
	static int8_t x344 = INT8_MIN;
	volatile int64_t t73 = -184378394832LL;

	t73 = (x341|(x342%(x343-x344)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x346 = UINT64_MAX;
	static int32_t x347 = INT32_MIN;
	int16_t x348 = 0;
	uint64_t t74 = 2451223101LLU;

	t74 = (x345|(x346%(x347-x348)));

	if (t74 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x349 = INT8_MIN;
	uint64_t x350 = 78LLU;
	uint64_t x351 = 385LLU;
	int64_t x352 = INT64_MIN;
	uint64_t t75 = 342505676LLU;

	t75 = (x349|(x350%(x351-x352)));

	if (t75 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = INT64_MIN;
	static int64_t x354 = INT64_MIN;
	int16_t x355 = INT16_MIN;
	int8_t x356 = -5;
	static int64_t t76 = -648832132310813991LL;

	t76 = (x353|(x354%(x355-x356)));

	if (t76 != -5000LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = INT16_MIN;
	uint32_t x358 = 507780660U;
	uint64_t x359 = 70203LLU;
	static uint64_t t77 = 10006863722806233LLU;

	t77 = (x357|(x358%(x359-x360)));

	if (t77 != 18446744073709529248LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MIN;
	volatile int16_t x362 = INT16_MIN;
	static uint32_t x363 = 45U;
	int16_t x364 = INT16_MIN;
	volatile uint32_t t78 = 0U;

	t78 = (x361|(x362%(x363-x364)));

	if (t78 != 4294942673U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x367 = INT64_MAX;
	uint32_t x368 = 3888315U;

	t79 = (x365|(x366%(x367-x368)));

	if (t79 != 55834574847LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = INT16_MIN;
	uint8_t x370 = 114U;
	uint8_t x371 = 62U;
	int8_t x372 = INT8_MIN;
	int32_t t80 = -29;

	t80 = (x369|(x370%(x371-x372)));

	if (t80 != -32654) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MIN;
	int64_t x376 = INT64_MIN;
	uint64_t t81 = 15LLU;

	t81 = (x373|(x374%(x375-x376)));

	if (t81 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x377 = INT64_MIN;
	static int64_t x378 = -1LL;
	int16_t x380 = INT16_MAX;
	int64_t t82 = 101LL;

	t82 = (x377|(x378%(x379-x380)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x385 = UINT8_MAX;
	uint8_t x386 = 0U;
	int32_t x388 = 14882;
	volatile int32_t t83 = -20;

	t83 = (x385|(x386%(x387-x388)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x393 = INT16_MAX;
	int8_t x394 = INT8_MAX;
	int8_t x395 = 13;
	static volatile int64_t x396 = 50395570LL;
	volatile int64_t t84 = 62532271060LL;

	t84 = (x393|(x394%(x395-x396)));

	if (t84 != 32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x397 = INT8_MIN;
	static volatile uint64_t x398 = 4179LLU;
	int64_t x399 = INT64_MIN;
	static int16_t x400 = -1;
	static volatile uint64_t t85 = 59757184989868650LLU;

	t85 = (x397|(x398%(x399-x400)));

	if (t85 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x402 = UINT32_MAX;
	volatile int16_t x403 = INT16_MIN;
	static volatile uint8_t x404 = 21U;
	uint32_t t86 = UINT32_MAX;

	t86 = (x401|(x402%(x403-x404)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x406 = -1;
	int64_t x407 = INT64_MIN;
	static int32_t x408 = -1;
	uint64_t t87 = UINT64_MAX;

	t87 = (x405|(x406%(x407-x408)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x409 = INT32_MAX;
	uint32_t x410 = UINT32_MAX;
	static int8_t x411 = INT8_MIN;
	static uint8_t x412 = 59U;
	volatile uint32_t t88 = 1102U;

	t88 = (x409|(x410%(x411-x412)));

	if (t88 != 2147483647U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x413 = INT64_MIN;
	static int64_t x414 = -26LL;
	int8_t x415 = -1;
	volatile int64_t x416 = 47814912573817200LL;
	static volatile int64_t t89 = 33704546LL;

	t89 = (x413|(x414%(x415-x416)));

	if (t89 != -26LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x419 = -28030;
	static int16_t x420 = INT16_MAX;
	volatile int32_t t90 = -194217;

	t90 = (x417|(x418%(x419-x420)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = INT16_MAX;
	static uint32_t x422 = UINT32_MAX;
	uint64_t x423 = UINT64_MAX;
	int32_t x424 = INT32_MIN;
	static volatile uint64_t t91 = 1382480LLU;

	t91 = (x421|(x422%(x423-x424)));

	if (t91 != 32767LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = INT16_MIN;
	int8_t x430 = INT8_MIN;
	static volatile int32_t x431 = -29;
	static int32_t t92 = -222474060;

	t92 = (x429|(x430%(x431-x432)));

	if (t92 != -16) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x433 = UINT16_MAX;
	int8_t x434 = INT8_MAX;
	volatile int8_t x435 = -17;
	int32_t t93 = -3379187;

	t93 = (x433|(x434%(x435-x436)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x437 = 13LLU;
	static uint32_t x438 = UINT32_MAX;
	volatile int32_t x439 = INT32_MIN;
	int16_t x440 = -1;
	uint64_t t94 = 916LLU;

	t94 = (x437|(x438%(x439-x440)));

	if (t94 != 2147483647LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x441 = UINT16_MAX;
	uint32_t x443 = 16302910U;
	static int32_t x444 = INT32_MAX;
	volatile uint32_t t95 = 136702U;

	t95 = (x441|(x442%(x443-x444)));

	if (t95 != 2131165183U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x445 = INT32_MIN;
	uint8_t x446 = UINT8_MAX;
	int32_t x447 = 155947617;
	int32_t x448 = 14094;
	int32_t t96 = 4;

	t96 = (x445|(x446%(x447-x448)));

	if (t96 != -2147483393) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x449 = 0;
	static uint64_t x451 = 194196417237599595LLU;
	int8_t x452 = INT8_MIN;
	uint64_t t97 = 7LLU;

	t97 = (x449|(x450%(x451-x452)));

	if (t97 != 192280853375177653LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x453 = -1;
	int64_t x456 = INT64_MIN;
	volatile int64_t t98 = -15250840055640LL;

	t98 = (x453|(x454%(x455-x456)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x458 = INT16_MIN;
	int8_t x460 = INT8_MIN;
	int64_t t99 = 20984391131119221LL;

	t99 = (x457|(x458%(x459-x460)));

	if (t99 != -31377LL) { NG(); } else { ; }
	
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

