#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x11 = -1LL;
uint64_t x14 = 117LLU;
uint16_t x16 = 15833U;
static int32_t x27 = -1;
uint16_t x29 = UINT16_MAX;
int8_t x32 = INT8_MAX;
int16_t x37 = INT16_MIN;
uint32_t x42 = 1419U;
uint16_t x43 = UINT16_MAX;
int8_t x44 = -1;
static int16_t x45 = -123;
uint64_t x47 = UINT64_MAX;
volatile int32_t x50 = INT32_MIN;
static int8_t x51 = -1;
uint16_t x52 = UINT16_MAX;
volatile int64_t t12 = -24513LL;
uint8_t x56 = UINT8_MAX;
int16_t x60 = INT16_MIN;
volatile int64_t t14 = 79761102027200LL;
int32_t x65 = 622;
static int32_t t15 = 45437;
uint32_t t16 = 6040U;
int8_t x74 = -28;
volatile int8_t x81 = INT8_MIN;
static uint8_t x88 = UINT8_MAX;
volatile uint64_t t20 = 90685265431356LLU;
int16_t x97 = -1;
volatile int64_t t22 = INT64_MIN;
volatile int32_t x103 = -7;
int32_t x105 = INT32_MIN;
static uint64_t x106 = 1237353LLU;
static volatile int8_t x110 = -1;
volatile int32_t t25 = 109674;
static volatile int8_t x115 = 53;
int32_t x116 = -1;
int16_t x119 = INT16_MAX;
uint32_t x122 = UINT32_MAX;
volatile int64_t x127 = INT64_MAX;
volatile uint64_t x130 = 857823189532LLU;
int32_t x131 = INT32_MIN;
int64_t x139 = -1LL;
int32_t x140 = INT32_MAX;
static uint64_t x150 = 12LLU;
uint64_t x152 = 4224914649110547LLU;
volatile int64_t x156 = INT64_MAX;
static volatile int64_t t34 = -13656656740LL;
static volatile int64_t t36 = 102424256522106655LL;
volatile int64_t t38 = INT64_MIN;
static uint8_t x177 = UINT8_MAX;
int64_t x181 = -1LL;
int64_t x184 = 38991858403404LL;
volatile int64_t x189 = -1LL;
static uint16_t x203 = 1231U;
uint64_t t44 = 3LLU;
int8_t x211 = -1;
uint64_t x212 = 2841491997156318684LLU;
int16_t x217 = INT16_MIN;
volatile int64_t x225 = 25213LL;
uint16_t x232 = UINT16_MAX;
int64_t x234 = INT64_MIN;
int32_t x241 = INT32_MIN;
int32_t t52 = 39915878;
int16_t x250 = INT16_MIN;
static int64_t x254 = INT64_MIN;
int64_t x256 = INT64_MIN;
int64_t t54 = INT64_MIN;
static volatile uint64_t x261 = 15172665529LLU;
volatile uint32_t x263 = UINT32_MAX;
static volatile uint64_t t56 = 2401687234048348460LLU;
static uint32_t x267 = 93660U;
int64_t x270 = INT64_MAX;
uint16_t x274 = UINT16_MAX;
int16_t x275 = INT16_MIN;
uint8_t x282 = 35U;
int8_t x285 = -1;
uint16_t x288 = UINT16_MAX;
int64_t t62 = -16160LL;
volatile uint32_t x290 = UINT32_MAX;
static volatile uint32_t x291 = 0U;
volatile int8_t x292 = -1;
volatile int16_t x297 = -1;
int8_t x304 = -1;
uint32_t x308 = 134362U;
int64_t x309 = 445336244755122419LL;
int16_t x313 = -1;
int64_t x321 = -1LL;
int64_t t71 = -50027LL;
uint32_t x326 = 81U;
volatile uint32_t t73 = 8U;
uint64_t x340 = 8608686766089898463LLU;
uint32_t x343 = 5U;
volatile uint8_t x344 = UINT8_MAX;
uint16_t x353 = 3617U;
volatile int16_t x356 = INT16_MIN;
int32_t t79 = -465;
int64_t x361 = -87941765LL;
int16_t x362 = 1;
int8_t x370 = -8;
static volatile int64_t t82 = -54556423200LL;
static uint8_t x373 = UINT8_MAX;
volatile int64_t t83 = -3097825227813765928LL;
static int32_t x379 = -1;
uint64_t t84 = 2062472154509602767LLU;
static uint16_t x381 = 2176U;
uint32_t t86 = 678U;
volatile uint8_t x389 = 22U;
int16_t x395 = INT16_MIN;
int32_t x400 = -1;
int64_t t90 = 111272522049668684LL;
static int8_t x419 = INT8_MAX;
int32_t x422 = INT32_MAX;
volatile uint32_t x426 = 1627U;
int64_t x430 = -143253273LL;
int64_t x433 = INT64_MIN;
int16_t x435 = -2;
static int16_t x436 = -1;
static int64_t x438 = INT64_MIN;
uint16_t x439 = 1198U;
volatile int16_t x441 = -1;
int16_t x443 = INT16_MIN;


void f0(void) {
	uint8_t x1 = 36U;
	int64_t x2 = 2438267226659LL;
	int32_t x3 = INT32_MAX;
	int8_t x4 = -1;
	volatile int64_t t0 = -137352757405LL;

	t0 = (((x1/x2)-x3)&x4);

	if (t0 != -2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 13;
	volatile int8_t x6 = 37;
	int8_t x7 = -1;
	uint64_t x8 = 20920209474LLU;
	uint64_t t1 = 221LLU;

	t1 = (((x5/x6)-x7)&x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 8997858078048652594LLU;
	uint16_t x10 = 216U;
	uint64_t x12 = 166015LLU;
	volatile uint64_t t2 = 2070384121737638472LLU;

	t2 = (((x9/x10)-x11)&x12);

	if (t2 != 34851LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	volatile uint8_t x15 = 73U;
	uint64_t t3 = 15858073091487644LLU;

	t3 = (((x13/x14)-x15)&x16);

	if (t3 != 201LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 14U;
	int8_t x18 = -27;
	uint64_t x19 = UINT64_MAX;
	int64_t x20 = INT64_MIN;
	uint64_t t4 = 1260800915384LLU;

	t4 = (((x17/x18)-x19)&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint16_t x22 = 754U;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MAX;
	static volatile uint64_t t5 = 2561182449313579LLU;

	t5 = (((x21/x22)-x23)&x24);

	if (t5 != 27206LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -2319LL;
	int16_t x26 = INT16_MIN;
	int64_t x28 = -82LL;
	volatile int64_t t6 = -1068LL;

	t6 = (((x25/x26)-x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 1;
	volatile uint64_t x31 = UINT64_MAX;
	uint64_t t7 = 5LLU;

	t7 = (((x29/x30)-x31)&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint64_t x34 = 8323779770680432202LLU;
	static volatile int32_t x35 = -1;
	uint8_t x36 = UINT8_MAX;
	uint64_t t8 = 20LLU;

	t8 = (((x33/x34)-x35)&x36);

	if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = -61232309513665LL;
	int32_t x39 = -19;
	uint32_t x40 = UINT32_MAX;
	volatile int64_t t9 = 4LL;

	t9 = (((x37/x38)-x39)&x40);

	if (t9 != 19LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static volatile int64_t t10 = -9592620641784LL;

	t10 = (((x41/x42)-x43)&x44);

	if (t10 != -6499909821668618LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = 1;
	int64_t x48 = INT64_MIN;
	volatile uint64_t t11 = 5387007LLU;

	t11 = (((x45/x46)-x47)&x48);

	if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -99LL;

	t12 = (((x49/x50)-x51)&x52);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 0;
	int8_t x54 = INT8_MIN;
	int64_t x55 = -62LL;
	volatile int64_t t13 = -2066707LL;

	t13 = (((x53/x54)-x55)&x56);

	if (t13 != 62LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = 192238LL;
	int32_t x58 = INT32_MIN;
	int64_t x59 = 21123504453755763LL;

	t14 = (((x57/x58)-x59)&x60);

	if (t14 != -21123504453779456LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = 98;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = -6;

	t15 = (((x65/x66)-x67)&x68);

	if (t15 != -254) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	uint32_t x70 = 25706U;
	int16_t x71 = INT16_MIN;
	volatile uint8_t x72 = UINT8_MAX;

	t16 = (((x69/x70)-x71)&x72);

	if (t16 != 84U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = -1LL;
	uint64_t x75 = 23825002LLU;
	int16_t x76 = 1338;
	volatile uint64_t t17 = 11971719450311351LLU;

	t17 = (((x73/x74)-x75)&x76);

	if (t17 != 1298LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x82 = -185;
	int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MAX;
	int64_t t18 = 1071132LL;

	t18 = (((x81/x82)-x83)&x84);

	if (t18 != 32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MAX;
	static int16_t x86 = 111;
	int32_t x87 = -1872024;
	static int32_t t19 = -50;

	t19 = (((x85/x86)-x87)&x88);

	if (t19 != 163) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x89 = 4U;
	static int16_t x90 = 6;
	volatile uint64_t x91 = 5494674LLU;
	uint64_t x92 = 1LLU;

	t20 = (((x89/x90)-x91)&x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MAX;
	int8_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	uint64_t x96 = 98181LLU;
	uint64_t t21 = 253854LLU;

	t21 = (((x93/x94)-x95)&x96);

	if (t21 != 65536LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x98 = 1U;
	int64_t x99 = INT64_MAX;
	static volatile int32_t x100 = -1;

	t22 = (((x97/x98)-x99)&x100);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	int8_t x102 = -1;
	uint8_t x104 = 5U;
	static int32_t t23 = 130;

	t23 = (((x101/x102)-x103)&x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x107 = INT16_MAX;
	static uint64_t x108 = UINT64_MAX;
	volatile uint64_t t24 = 28312405LLU;

	t24 = (((x105/x106)-x107)&x108);

	if (t24 != 14908230740150LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -1;
	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MAX;

	t25 = (((x109/x110)-x111)&x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x113 = UINT8_MAX;
	int64_t x114 = INT64_MIN;
	volatile int64_t t26 = -17906LL;

	t26 = (((x113/x114)-x115)&x116);

	if (t26 != -53LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MAX;
	volatile int64_t x118 = INT64_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t27 = -102776LL;

	t27 = (((x117/x118)-x119)&x120);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 461713867U;
	volatile int32_t x123 = INT32_MAX;
	int8_t x124 = -60;
	static volatile uint32_t t28 = 66U;

	t28 = (((x121/x122)-x123)&x124);

	if (t28 != 2147483648U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MAX;
	uint64_t x126 = 1276LLU;
	int16_t x128 = -1;
	volatile uint64_t t29 = 3647001233900LLU;

	t29 = (((x125/x126)-x127)&x128);

	if (t29 != 9223372036856458789LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -24;
	uint8_t x132 = 3U;
	static uint64_t t30 = 33954557724011LLU;

	t30 = (((x129/x130)-x131)&x132);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = UINT32_MAX;
	int32_t x138 = INT32_MAX;
	int64_t t31 = 8LL;

	t31 = (((x137/x138)-x139)&x140);

	if (t31 != 3LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MIN;
	static uint16_t x142 = 152U;
	uint32_t x143 = UINT32_MAX;
	uint16_t x144 = 6U;
	int64_t t32 = -131473835LL;

	t32 = (((x141/x142)-x143)&x144);

	if (t32 != 6LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = 1;
	volatile int32_t x151 = INT32_MIN;
	uint64_t t33 = 56LLU;

	t33 = (((x149/x150)-x151)&x152);

	if (t33 != 2147483648LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x153 = 19U;
	int16_t x154 = -1;
	int32_t x155 = INT32_MIN;

	t34 = (((x153/x154)-x155)&x156);

	if (t34 != 2147483629LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x157 = UINT8_MAX;
	volatile int16_t x158 = -1;
	int16_t x159 = -1;
	volatile uint16_t x160 = UINT16_MAX;
	int32_t t35 = 88892725;

	t35 = (((x157/x158)-x159)&x160);

	if (t35 != 65282) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MIN;
	static int64_t x162 = INT64_MIN;
	int64_t x163 = 8192364531955299LL;
	int32_t x164 = INT32_MAX;

	t36 = (((x161/x162)-x163)&x164);

	if (t36 != 2117323165LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	static int16_t x166 = INT16_MAX;
	static int32_t x167 = INT32_MAX;
	static int16_t x168 = -427;
	int32_t t37 = INT32_MIN;

	t37 = (((x165/x166)-x167)&x168);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x169 = 462635LL;
	static int32_t x170 = INT32_MAX;
	int64_t x171 = 1804748LL;
	int64_t x172 = INT64_MIN;

	t38 = (((x169/x170)-x171)&x172);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x178 = INT64_MAX;
	int16_t x179 = 3523;
	int32_t x180 = INT32_MAX;
	int64_t t39 = -76LL;

	t39 = (((x177/x178)-x179)&x180);

	if (t39 != 2147480125LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x182 = INT64_MIN;
	uint16_t x183 = 428U;
	int64_t t40 = -518384LL;

	t40 = (((x181/x182)-x183)&x184);

	if (t40 != 38991858403396LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 40182LLU;
	int16_t x186 = INT16_MIN;
	int64_t x187 = -129430790LL;
	uint64_t x188 = 4693LLU;
	uint64_t t41 = 162328272840LLU;

	t41 = (((x185/x186)-x187)&x188);

	if (t41 != 4100LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x190 = 3LLU;
	static uint64_t x191 = 3458401306759894LLU;
	int16_t x192 = INT16_MAX;
	volatile uint64_t t42 = 37LLU;

	t42 = (((x189/x190)-x191)&x192);

	if (t42 != 639LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x193 = UINT32_MAX;
	int8_t x194 = INT8_MIN;
	uint32_t x195 = 34769U;
	volatile int64_t x196 = INT64_MAX;
	volatile int64_t t43 = -11399657640LL;

	t43 = (((x193/x194)-x195)&x196);

	if (t43 != 4294932528LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = 1;
	uint64_t x202 = 65276543423672LLU;
	uint32_t x204 = UINT32_MAX;

	t44 = (((x201/x202)-x203)&x204);

	if (t44 != 4294966065LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = INT16_MAX;
	int64_t x206 = INT64_MAX;
	uint64_t x207 = 1121801665898058LLU;
	uint16_t x208 = 13U;
	volatile uint64_t t45 = 14160396230736145LLU;

	t45 = (((x205/x206)-x207)&x208);

	if (t45 != 4LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = 137U;
	int16_t x210 = INT16_MIN;
	volatile uint64_t t46 = 544900932105408LLU;

	t46 = (((x209/x210)-x211)&x212);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x218 = INT64_MIN;
	int8_t x219 = 1;
	volatile int64_t x220 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = (((x217/x218)-x219)&x220);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x226 = INT32_MIN;
	int8_t x227 = -1;
	volatile int16_t x228 = -1;
	int64_t t48 = -61252LL;

	t48 = (((x225/x226)-x227)&x228);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x229 = 7729048U;
	static volatile int16_t x230 = INT16_MIN;
	uint64_t x231 = 140488615501146148LLU;
	volatile uint64_t t49 = 14163707186000LLU;

	t49 = (((x229/x230)-x231)&x232);

	if (t49 != 22492LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x233 = INT64_MIN;
	static int8_t x235 = INT8_MIN;
	static volatile int16_t x236 = -1;
	volatile int64_t t50 = -3679998LL;

	t50 = (((x233/x234)-x235)&x236);

	if (t50 != 129LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = 6588U;
	int64_t x238 = -1LL;
	int64_t x239 = INT64_MIN;
	int32_t x240 = 2;
	static volatile int64_t t51 = -47832349476LL;

	t51 = (((x237/x238)-x239)&x240);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x242 = -135324592;
	uint8_t x243 = 13U;
	int8_t x244 = INT8_MIN;

	t52 = (((x241/x242)-x243)&x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x249 = 1124119022282820711LLU;
	static uint16_t x251 = 224U;
	volatile int16_t x252 = 0;
	volatile uint64_t t53 = 453LLU;

	t53 = (((x249/x250)-x251)&x252);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x253 = -5;
	int64_t x255 = 178211250LL;

	t54 = (((x253/x254)-x255)&x256);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MIN;
	volatile int32_t x258 = -1085668;
	volatile uint32_t x259 = 111053888U;
	uint64_t x260 = UINT64_MAX;
	static volatile uint64_t t55 = 0LLU;

	t55 = (((x257/x258)-x259)&x260);

	if (t55 != 4183913408LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x262 = INT8_MAX;
	volatile uint64_t x264 = 1544559068LLU;

	t56 = (((x261/x262)-x263)&x264);

	if (t56 != 68161744LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x265 = 59627286U;
	volatile uint16_t x266 = 1U;
	static uint16_t x268 = 1421U;
	volatile uint32_t t57 = 11U;

	t57 = (((x265/x266)-x267)&x268);

	if (t57 != 264U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = -1;
	static int16_t x271 = INT16_MAX;
	uint16_t x272 = 0U;
	volatile int64_t t58 = -8918445523314564LL;

	t58 = (((x269/x270)-x271)&x272);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x273 = 14U;
	uint32_t x276 = UINT32_MAX;
	uint32_t t59 = 328041450U;

	t59 = (((x273/x274)-x275)&x276);

	if (t59 != 32768U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MIN;
	uint32_t x279 = 136937024U;
	uint8_t x280 = 46U;
	static int64_t t60 = -9LL;

	t60 = (((x277/x278)-x279)&x280);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = -1;
	int64_t x283 = 8654741365009875LL;
	int64_t x284 = INT64_MIN;
	static int64_t t61 = INT64_MIN;

	t61 = (((x281/x282)-x283)&x284);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x286 = INT64_MAX;
	int32_t x287 = -1;

	t62 = (((x285/x286)-x287)&x288);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x289 = INT32_MIN;
	static volatile uint32_t t63 = 8173U;

	t63 = (((x289/x290)-x291)&x292);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = -1;
	int64_t x294 = 809LL;
	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = UINT8_MAX;
	uint64_t t64 = 2538764965746LLU;

	t64 = (((x293/x294)-x295)&x296);

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x298 = INT8_MAX;
	static uint32_t x299 = UINT32_MAX;
	volatile int64_t x300 = INT64_MIN;
	volatile int64_t t65 = 154560LL;

	t65 = (((x297/x298)-x299)&x300);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = 0;
	uint32_t x302 = 30U;
	int8_t x303 = -1;
	uint32_t t66 = 3836U;

	t66 = (((x301/x302)-x303)&x304);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x305 = INT16_MAX;
	int64_t x306 = INT64_MIN;
	uint32_t x307 = UINT32_MAX;
	volatile int64_t t67 = 58603LL;

	t67 = (((x305/x306)-x307)&x308);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x310 = -1;
	int32_t x311 = -1;
	uint64_t x312 = UINT64_MAX;
	uint64_t t68 = 47254182LLU;

	t68 = (((x309/x310)-x311)&x312);

	if (t68 != 18001407828954429198LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x314 = INT8_MIN;
	static uint8_t x315 = 7U;
	volatile int32_t x316 = -6558;
	volatile int32_t t69 = -18047;

	t69 = (((x313/x314)-x315)&x316);

	if (t69 != -6560) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x317 = UINT8_MAX;
	uint16_t x318 = 1U;
	volatile int8_t x319 = 2;
	int8_t x320 = INT8_MIN;
	int32_t t70 = 1275509;

	t70 = (((x317/x318)-x319)&x320);

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x322 = INT16_MIN;
	int32_t x323 = 1887;
	uint32_t x324 = 551362709U;

	t71 = (((x321/x322)-x323)&x324);

	if (t71 != 551362689LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = INT32_MAX;
	uint64_t x327 = UINT64_MAX;
	volatile uint32_t x328 = UINT32_MAX;
	static volatile uint64_t t72 = 136866851457LLU;

	t72 = (((x325/x326)-x327)&x328);

	if (t72 != 26512144LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x329 = -1;
	static volatile int8_t x330 = INT8_MIN;
	volatile uint32_t x331 = 7175298U;
	static int16_t x332 = INT16_MIN;

	t73 = (((x329/x330)-x331)&x332);

	if (t73 != 4287791104U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int16_t x334 = INT16_MIN;
	volatile uint16_t x335 = UINT16_MAX;
	int8_t x336 = INT8_MIN;
	uint64_t t74 = 3340307LLU;

	t74 = (((x333/x334)-x335)&x336);

	if (t74 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x337 = UINT64_MAX;
	int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	static volatile uint64_t t75 = 1094133805117562LLU;

	t75 = (((x337/x338)-x339)&x340);

	if (t75 != 2LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x341 = 30U;
	int32_t x342 = INT32_MAX;
	uint32_t t76 = 28U;

	t76 = (((x341/x342)-x343)&x344);

	if (t76 != 251U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x345 = 8U;
	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MAX;
	static uint8_t x348 = UINT8_MAX;
	volatile int32_t t77 = -2404646;

	t77 = (((x345/x346)-x347)&x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x349 = UINT16_MAX;
	int64_t x350 = INT64_MIN;
	static int32_t x351 = -114246;
	int16_t x352 = INT16_MAX;
	static int64_t t78 = -110693146928118LL;

	t78 = (((x349/x350)-x351)&x352);

	if (t78 != 15942LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x354 = INT16_MAX;
	int16_t x355 = INT16_MAX;

	t79 = (((x353/x354)-x355)&x356);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x357 = INT64_MAX;
	int32_t x358 = -57187146;
	int16_t x359 = INT16_MIN;
	uint16_t x360 = UINT16_MAX;
	volatile int64_t t80 = 757242767194386372LL;

	t80 = (((x357/x358)-x359)&x360);

	if (t80 != 56563LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x363 = INT32_MAX;
	int64_t x364 = -1LL;
	static volatile int64_t t81 = -1716081530LL;

	t81 = (((x361/x362)-x363)&x364);

	if (t81 != -2235425412LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x369 = INT32_MIN;
	static int64_t x371 = -23387003552212LL;
	int16_t x372 = -645;

	t82 = (((x369/x370)-x371)&x372);

	if (t82 != 23387271987536LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x374 = 9481320503940LL;
	static int64_t x375 = -1333738185LL;
	int64_t x376 = -1450236694LL;

	t83 = (((x373/x374)-x375)&x376);

	if (t83 != 151986376LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x377 = 3169640LLU;
	volatile int32_t x378 = -622970848;
	uint8_t x380 = UINT8_MAX;

	t84 = (((x377/x378)-x379)&x380);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MIN;
	volatile int32_t x384 = 3290935;
	int64_t t85 = -136536287538LL;

	t85 = (((x381/x382)-x383)&x384);

	if (t85 != 3290919LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x385 = 1681U;
	int8_t x386 = 12;
	static volatile int16_t x387 = -1;
	uint32_t x388 = UINT32_MAX;

	t86 = (((x385/x386)-x387)&x388);

	if (t86 != 141U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x390 = INT16_MAX;
	uint8_t x391 = 3U;
	uint64_t x392 = UINT64_MAX;
	uint64_t t87 = 4766LLU;

	t87 = (((x389/x390)-x391)&x392);

	if (t87 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x393 = 0U;
	int8_t x394 = 1;
	static uint64_t x396 = UINT64_MAX;
	uint64_t t88 = 11879707LLU;

	t88 = (((x393/x394)-x395)&x396);

	if (t88 != 32768LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x397 = INT32_MAX;
	int8_t x398 = 19;
	int64_t x399 = INT64_MAX;
	volatile int64_t t89 = 1839862954545353LL;

	t89 = (((x397/x398)-x399)&x400);

	if (t89 != -9223372036741750352LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x405 = -1LL;
	static int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MIN;
	volatile int16_t x408 = INT16_MIN;

	t90 = (((x405/x406)-x407)&x408);

	if (t90 != 32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x409 = -1;
	int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	static volatile uint32_t x412 = 9660U;
	int64_t t91 = 646LL;

	t91 = (((x409/x410)-x411)&x412);

	if (t91 != 128LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = INT64_MAX;
	int64_t x414 = INT64_MAX;
	static int32_t x415 = INT32_MAX;
	int64_t x416 = 1194112LL;
	static volatile int64_t t92 = -1985533610518707LL;

	t92 = (((x413/x414)-x415)&x416);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x417 = 13U;
	volatile int32_t x418 = INT32_MIN;
	static int16_t x420 = INT16_MIN;
	volatile int32_t t93 = -17043;

	t93 = (((x417/x418)-x419)&x420);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x421 = 13232;
	static uint64_t x423 = 1LLU;
	int8_t x424 = -1;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x421/x422)-x423)&x424);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x425 = -141;
	static int32_t x427 = -1;
	int8_t x428 = INT8_MIN;
	uint32_t t95 = 130346412U;

	t95 = (((x425/x426)-x427)&x428);

	if (t95 != 2639744U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x429 = -1;
	int16_t x431 = 4;
	int64_t x432 = INT64_MAX;
	int64_t t96 = -4301148911142015LL;

	t96 = (((x429/x430)-x431)&x432);

	if (t96 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x434 = INT8_MIN;
	int64_t t97 = 1615864736972LL;

	t97 = (((x433/x434)-x435)&x436);

	if (t97 != 72057594037927938LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x437 = -1;
	int64_t x440 = INT64_MIN;
	volatile int64_t t98 = INT64_MIN;

	t98 = (((x437/x438)-x439)&x440);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x442 = -13688171953999LL;
	uint16_t x444 = 41U;
	int64_t t99 = 23522200383LL;

	t99 = (((x441/x442)-x443)&x444);

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

