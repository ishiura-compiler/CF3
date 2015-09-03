#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x10 = INT8_MIN;
int64_t x11 = INT64_MAX;
int16_t x15 = INT16_MIN;
uint8_t x17 = 4U;
int64_t x18 = -122118516LL;
uint32_t x27 = UINT32_MAX;
static int32_t x28 = -113;
int64_t x38 = -1679788370789LL;
volatile uint32_t x39 = 20469U;
volatile int32_t t9 = 2528;
volatile uint64_t x42 = 837578074269828LLU;
volatile int32_t t10 = -2146;
uint64_t x59 = UINT64_MAX;
volatile uint32_t x60 = UINT32_MAX;
int16_t x64 = INT16_MIN;
uint16_t x65 = 15U;
int32_t x67 = INT32_MIN;
int32_t t15 = -469241;
volatile int32_t t16 = 3649031;
volatile int8_t x80 = INT8_MIN;
int8_t x83 = INT8_MIN;
static volatile uint64_t x95 = 121450414478053964LLU;
int32_t x108 = -1888;
int32_t t24 = -18;
int16_t x110 = -1;
int16_t x114 = INT16_MAX;
volatile int32_t t26 = -291;
int64_t x120 = 419521718LL;
int8_t x136 = INT8_MAX;
static volatile int32_t t30 = 62946671;
int16_t x138 = -10885;
int8_t x152 = -40;
volatile int32_t t32 = 742;
volatile int32_t t33 = 119;
static volatile int8_t x163 = INT8_MAX;
volatile int32_t t34 = 373079615;
static uint32_t x167 = 57524U;
static uint64_t x171 = 124300064761191LLU;
int32_t x173 = -991;
volatile int32_t x181 = -1;
static int16_t x186 = INT16_MIN;
static volatile uint64_t x187 = 855160147045LLU;
static uint64_t x193 = UINT64_MAX;
int64_t x194 = INT64_MIN;
volatile int16_t x200 = INT16_MIN;
int8_t x205 = -1;
int64_t x206 = 41967097LL;
int32_t t45 = -5;
int32_t x209 = INT32_MIN;
int16_t x210 = -205;
int16_t x212 = 2;
static int64_t x214 = INT64_MIN;
volatile int8_t x219 = INT8_MIN;
uint64_t x228 = UINT64_MAX;
static uint64_t x232 = 69321532002057091LLU;
volatile uint64_t t50 = 1877913605LLU;
volatile uint64_t x233 = 467385489LLU;
volatile uint8_t x238 = UINT8_MAX;
int16_t x251 = INT16_MIN;
int32_t x255 = 33075380;
uint64_t t57 = 3884LLU;
volatile int64_t x266 = INT64_MAX;
static uint32_t x276 = 127153U;
uint16_t x277 = 10961U;
volatile int8_t x278 = INT8_MIN;
int16_t x283 = INT16_MIN;
volatile int32_t t61 = -166247;
int32_t x289 = INT32_MAX;
int32_t x299 = -175;
static int16_t x306 = 3235;
static int32_t t69 = 0;
int8_t x318 = INT8_MIN;
static int8_t x326 = INT8_MIN;
volatile uint64_t t72 = 6LLU;
int64_t x335 = INT64_MIN;
int16_t x347 = INT16_MIN;
uint32_t x348 = 0U;
static int64_t t77 = -11558147821898LL;
int64_t x354 = -1836896496490LL;
static int16_t x357 = -1;
int64_t x361 = INT64_MAX;
static volatile int64_t x367 = -1LL;
static uint8_t x368 = UINT8_MAX;
static int32_t x381 = -73337388;
int32_t x383 = 47800864;
uint16_t x389 = 7229U;
static uint64_t x390 = UINT64_MAX;
int16_t x391 = INT16_MAX;
static uint16_t x403 = UINT16_MAX;
int32_t t88 = 3;
static int16_t x408 = -4959;
uint64_t x420 = 2554172735930LLU;
uint64_t x422 = 35213169559440LLU;
static int32_t x426 = INT32_MIN;
volatile int32_t t93 = -14;
int64_t x433 = INT64_MIN;
int8_t x436 = INT8_MIN;
volatile uint8_t x437 = 2U;
int32_t x439 = INT32_MIN;
volatile uint32_t x440 = 382881U;
volatile uint32_t t96 = 2U;
static int16_t x445 = -11099;
volatile uint8_t x447 = 1U;
volatile int64_t x449 = -1LL;
volatile int64_t x451 = INT64_MIN;


void f0(void) {
	uint8_t x1 = 98U;
	int32_t x2 = INT32_MIN;
	static uint16_t x3 = 5036U;
	int32_t x4 = 90786;
	static int32_t t0 = 3973;

	t0 = ((x1==(x2/x3))-x4);

	if (t0 != -90786) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 17370U;
	static int8_t x6 = INT8_MIN;
	int64_t x7 = -1276746LL;
	static int64_t x8 = INT64_MAX;
	int64_t t1 = -558061324451352LL;

	t1 = ((x5==(x6/x7))-x8);

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -614660872;

	t2 = ((x9==(x10/x11))-x12);

	if (t2 != -255) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static int8_t x14 = 1;
	int64_t x16 = -211178LL;
	volatile int64_t t3 = -854368335332387006LL;

	t3 = ((x13==(x14/x15))-x16);

	if (t3 != 211178LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x19 = UINT16_MAX;
	volatile int32_t x20 = -1;
	int32_t t4 = 71303;

	t4 = ((x17==(x18/x19))-x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x21 = UINT8_MAX;
	int64_t x22 = -1LL;
	volatile int32_t x23 = 189524;
	int16_t x24 = 6758;
	int32_t t5 = 29168;

	t5 = ((x21==(x22/x23))-x24);

	if (t5 != -6758) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -47284;
	volatile uint64_t x26 = UINT64_MAX;
	volatile int32_t t6 = 848593;

	t6 = ((x25==(x26/x27))-x28);

	if (t6 != 113) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 1U;
	volatile uint16_t x30 = UINT16_MAX;
	volatile uint64_t x31 = UINT64_MAX;
	int32_t x32 = 39;
	int32_t t7 = 6225;

	t7 = ((x29==(x30/x31))-x32);

	if (t7 != -39) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -1LL;
	uint8_t x34 = 60U;
	int64_t x35 = INT64_MIN;
	int64_t x36 = 16419239269455384LL;
	volatile int64_t t8 = -144967600737LL;

	t8 = ((x33==(x34/x35))-x36);

	if (t8 != -16419239269455384LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	volatile int32_t x40 = 13;

	t9 = ((x37==(x38/x39))-x40);

	if (t9 != -13) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 32379LLU;
	volatile uint64_t x43 = 14522681LLU;
	uint8_t x44 = UINT8_MAX;

	t10 = ((x41==(x42/x43))-x44);

	if (t10 != -255) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 16;
	int16_t x54 = INT16_MAX;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MIN;
	int32_t t11 = 12;

	t11 = ((x53==(x54/x55))-x56);

	if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = 5U;
	static uint8_t x58 = 11U;
	static uint32_t t12 = 1043776U;

	t12 = ((x57==(x58/x59))-x60);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = INT32_MIN;
	uint64_t x62 = 149LLU;
	int64_t x63 = INT64_MAX;
	volatile int32_t t13 = 274289;

	t13 = ((x61==(x62/x63))-x64);

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x66 = -1;
	uint64_t x68 = 21060582627LLU;
	volatile uint64_t t14 = 390279152393LLU;

	t14 = ((x65==(x66/x67))-x68);

	if (t14 != 18446744052648968989LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	static int32_t x70 = -1;
	volatile int16_t x71 = -1;
	volatile int32_t x72 = INT32_MAX;

	t15 = ((x69==(x70/x71))-x72);

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MAX;
	static int8_t x74 = INT8_MAX;
	int8_t x75 = -2;
	volatile int32_t x76 = INT32_MAX;

	t16 = ((x73==(x74/x75))-x76);

	if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	uint8_t x78 = 1U;
	static uint32_t x79 = UINT32_MAX;
	volatile int32_t t17 = -302;

	t17 = ((x77==(x78/x79))-x80);

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = 32;
	int8_t x82 = -1;
	uint8_t x84 = 15U;
	volatile int32_t t18 = 7;

	t18 = ((x81==(x82/x83))-x84);

	if (t18 != -15) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 0U;
	int8_t x86 = INT8_MAX;
	static volatile uint16_t x87 = 3065U;
	int64_t x88 = 6LL;
	int64_t t19 = 91381083711239LL;

	t19 = ((x85==(x86/x87))-x88);

	if (t19 != -5LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MIN;
	int64_t x91 = INT64_MIN;
	volatile uint8_t x92 = UINT8_MAX;
	volatile int32_t t20 = 122;

	t20 = ((x89==(x90/x91))-x92);

	if (t20 != -255) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MAX;
	static int64_t x94 = INT64_MIN;
	volatile int32_t x96 = 7;
	int32_t t21 = -667;

	t21 = ((x93==(x94/x95))-x96);

	if (t21 != -7) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x97 = UINT8_MAX;
	volatile int16_t x98 = INT16_MAX;
	volatile uint64_t x99 = 617657751262070LLU;
	static uint16_t x100 = 1U;
	static int32_t t22 = 2;

	t22 = ((x97==(x98/x99))-x100);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MAX;
	volatile uint32_t x104 = UINT32_MAX;
	uint32_t t23 = 30U;

	t23 = ((x101==(x102/x103))-x104);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = -1;
	volatile uint32_t x107 = 2063343725U;

	t24 = ((x105==(x106/x107))-x108);

	if (t24 != 1888) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	int32_t x111 = INT32_MAX;
	int8_t x112 = INT8_MAX;
	int32_t t25 = 188;

	t25 = ((x109==(x110/x111))-x112);

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MAX;
	int16_t x115 = INT16_MIN;
	static uint16_t x116 = UINT16_MAX;

	t26 = ((x113==(x114/x115))-x116);

	if (t26 != -65535) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x117 = 0U;
	volatile uint16_t x118 = 2068U;
	int32_t x119 = INT32_MIN;
	int64_t t27 = 113703518532530941LL;

	t27 = ((x117==(x118/x119))-x120);

	if (t27 != -419521717LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = 1;
	static volatile int32_t x122 = 1010919362;
	int8_t x123 = 2;
	int64_t x124 = 7679LL;
	volatile int64_t t28 = 48903LL;

	t28 = ((x121==(x122/x123))-x124);

	if (t28 != -7679LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MAX;
	volatile uint16_t x130 = UINT16_MAX;
	int16_t x131 = -2;
	uint8_t x132 = 2U;
	int32_t t29 = 885378;

	t29 = ((x129==(x130/x131))-x132);

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	int16_t x134 = -1;
	uint16_t x135 = 19U;

	t30 = ((x133==(x134/x135))-x136);

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = INT8_MAX;
	uint16_t x139 = 263U;
	static int16_t x140 = INT16_MAX;
	volatile int32_t t31 = -281475;

	t31 = ((x137==(x138/x139))-x140);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x149 = INT8_MAX;
	int8_t x150 = -20;
	uint8_t x151 = UINT8_MAX;

	t32 = ((x149==(x150/x151))-x152);

	if (t32 != 40) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x153 = 103181LL;
	int16_t x154 = INT16_MIN;
	static uint8_t x155 = 2U;
	static volatile int8_t x156 = -1;

	t33 = ((x153==(x154/x155))-x156);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = 54U;
	static int8_t x162 = -1;
	int16_t x164 = INT16_MIN;

	t34 = ((x161==(x162/x163))-x164);

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = 982LLU;
	int32_t x166 = INT32_MAX;
	int16_t x168 = INT16_MIN;
	int32_t t35 = 181;

	t35 = ((x165==(x166/x167))-x168);

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x169 = -1;
	uint8_t x170 = UINT8_MAX;
	uint64_t x172 = 65111LLU;
	volatile uint64_t t36 = 3540803897243856472LLU;

	t36 = ((x169==(x170/x171))-x172);

	if (t36 != 18446744073709486505LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x174 = -1;
	uint64_t x175 = 427044875LLU;
	int16_t x176 = -1;
	int32_t t37 = 13176;

	t37 = ((x173==(x174/x175))-x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = 1958U;
	int16_t x178 = INT16_MAX;
	uint64_t x179 = 649245781351004LLU;
	int8_t x180 = INT8_MIN;
	volatile int32_t t38 = -582818322;

	t38 = ((x177==(x178/x179))-x180);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x182 = INT64_MIN;
	int16_t x183 = INT16_MAX;
	volatile int16_t x184 = 1;
	int32_t t39 = 507397237;

	t39 = ((x181==(x182/x183))-x184);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x185 = UINT32_MAX;
	uint64_t x188 = 12LLU;
	volatile uint64_t t40 = 8114649LLU;

	t40 = ((x185==(x186/x187))-x188);

	if (t40 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = -13;
	volatile int64_t x190 = INT64_MAX;
	static int8_t x191 = INT8_MAX;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t41 = 1733;

	t41 = ((x189==(x190/x191))-x192);

	if (t41 != -255) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x195 = UINT16_MAX;
	static uint16_t x196 = UINT16_MAX;
	int32_t t42 = -3510069;

	t42 = ((x193==(x194/x195))-x196);

	if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = 98U;
	static uint64_t x198 = 0LLU;
	static int64_t x199 = INT64_MAX;
	int32_t t43 = 836123344;

	t43 = ((x197==(x198/x199))-x200);

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = 10U;
	static int8_t x202 = INT8_MIN;
	uint16_t x203 = 2U;
	static int64_t x204 = -414472558LL;
	volatile int64_t t44 = 434625692264014LL;

	t44 = ((x201==(x202/x203))-x204);

	if (t44 != 414472558LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x207 = 6LLU;
	volatile int16_t x208 = INT16_MIN;

	t45 = ((x205==(x206/x207))-x208);

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x211 = -11986;
	volatile int32_t t46 = -177;

	t46 = ((x209==(x210/x211))-x212);

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x213 = 5U;
	uint32_t x215 = 74641U;
	uint64_t x216 = 180177010LLU;
	volatile uint64_t t47 = 2400686554LLU;

	t47 = ((x213==(x214/x215))-x216);

	if (t47 != 18446744073529374606LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x217 = -12546205LL;
	uint64_t x218 = UINT64_MAX;
	int32_t x220 = -1;
	volatile int32_t t48 = -26973;

	t48 = ((x217==(x218/x219))-x220);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x225 = UINT32_MAX;
	uint64_t x226 = 96182605431678LLU;
	uint16_t x227 = 1U;
	volatile uint64_t t49 = 6257446890350463877LLU;

	t49 = ((x225==(x226/x227))-x228);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x229 = -1LL;
	volatile int16_t x230 = -1;
	int16_t x231 = -615;

	t50 = ((x229==(x230/x231))-x232);

	if (t50 != 18377422541707494525LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x234 = 8U;
	int64_t x235 = -3171016126283LL;
	volatile int64_t x236 = -50037LL;
	volatile int64_t t51 = 5125696528LL;

	t51 = ((x233==(x234/x235))-x236);

	if (t51 != 50037LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x237 = 4322770310381LLU;
	int64_t x239 = -1LL;
	static uint16_t x240 = UINT16_MAX;
	static volatile int32_t t52 = -878695699;

	t52 = ((x237==(x238/x239))-x240);

	if (t52 != -65535) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x241 = UINT16_MAX;
	volatile uint32_t x242 = 1U;
	static uint16_t x243 = 22U;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t53 = -74511;

	t53 = ((x241==(x242/x243))-x244);

	if (t53 != -255) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x245 = 26U;
	static uint8_t x246 = 5U;
	volatile int64_t x247 = -541731482149LL;
	uint16_t x248 = 16888U;
	volatile int32_t t54 = 0;

	t54 = ((x245==(x246/x247))-x248);

	if (t54 != -16888) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -1443183;
	int32_t x250 = -1435609;
	uint32_t x252 = 1U;
	uint32_t t55 = UINT32_MAX;

	t55 = ((x249==(x250/x251))-x252);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = INT64_MIN;
	static int64_t x254 = 159LL;
	volatile int64_t x256 = -399LL;
	volatile int64_t t56 = -1024133509LL;

	t56 = ((x253==(x254/x255))-x256);

	if (t56 != 399LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x257 = INT8_MIN;
	static volatile uint16_t x258 = 22713U;
	uint32_t x259 = UINT32_MAX;
	uint64_t x260 = 4093278687LLU;

	t57 = ((x257==(x258/x259))-x260);

	if (t57 != 18446744069616272929LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = INT64_MAX;
	static int16_t x267 = 3;
	static uint16_t x268 = UINT16_MAX;
	volatile int32_t t58 = -52483;

	t58 = ((x265==(x266/x267))-x268);

	if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = 0;
	int16_t x274 = INT16_MIN;
	volatile int64_t x275 = 147043909LL;
	uint32_t t59 = 47U;

	t59 = ((x273==(x274/x275))-x276);

	if (t59 != 4294840144U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = -1;
	volatile int32_t t60 = -45924120;

	t60 = ((x277==(x278/x279))-x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x281 = 2730796111300203LLU;
	uint32_t x282 = 476158U;
	uint16_t x284 = 29237U;

	t61 = ((x281==(x282/x283))-x284);

	if (t61 != -29237) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = INT16_MIN;
	static volatile int64_t x286 = -1LL;
	uint8_t x287 = 31U;
	int64_t x288 = INT64_MAX;
	volatile int64_t t62 = -61610393LL;

	t62 = ((x285==(x286/x287))-x288);

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x290 = INT64_MAX;
	int32_t x291 = INT32_MAX;
	static int16_t x292 = -1;
	static volatile int32_t t63 = -720081996;

	t63 = ((x289==(x290/x291))-x292);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x293 = 100U;
	uint64_t x294 = UINT64_MAX;
	static int64_t x295 = -229556086LL;
	static volatile uint16_t x296 = 107U;
	volatile int32_t t64 = 161346;

	t64 = ((x293==(x294/x295))-x296);

	if (t64 != -107) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = INT32_MIN;
	uint16_t x298 = 28944U;
	static uint16_t x300 = UINT16_MAX;
	volatile int32_t t65 = 110752;

	t65 = ((x297==(x298/x299))-x300);

	if (t65 != -65535) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = -2185LL;
	volatile int32_t x302 = INT32_MAX;
	int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MAX;
	volatile int32_t t66 = -1;

	t66 = ((x301==(x302/x303))-x304);

	if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = INT16_MAX;
	volatile int16_t x307 = INT16_MIN;
	volatile int32_t x308 = INT32_MAX;
	int32_t t67 = 8807;

	t67 = ((x305==(x306/x307))-x308);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x309 = INT16_MIN;
	volatile int8_t x310 = 1;
	int8_t x311 = 1;
	int64_t x312 = INT64_MAX;
	int64_t t68 = 123613235974LL;

	t68 = ((x309==(x310/x311))-x312);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x313 = 2934U;
	int32_t x314 = INT32_MIN;
	int16_t x315 = -252;
	int8_t x316 = INT8_MAX;

	t69 = ((x313==(x314/x315))-x316);

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MIN;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	int32_t t70 = -278;

	t70 = ((x317==(x318/x319))-x320);

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x327 = 1;
	static int8_t x328 = INT8_MAX;
	int32_t t71 = 1;

	t71 = ((x325==(x326/x327))-x328);

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x329 = 5757273092209293037LLU;
	uint32_t x330 = 64843U;
	int32_t x331 = INT32_MIN;
	uint64_t x332 = UINT64_MAX;

	t72 = ((x329==(x330/x331))-x332);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = 213993215706709LL;
	int64_t x334 = 22373802737462LL;
	uint32_t x336 = UINT32_MAX;
	volatile uint32_t t73 = 2470552U;

	t73 = ((x333==(x334/x335))-x336);

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = 1U;
	int8_t x338 = -4;
	static volatile uint8_t x339 = UINT8_MAX;
	int8_t x340 = INT8_MIN;
	volatile int32_t t74 = 441;

	t74 = ((x337==(x338/x339))-x340);

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = UINT8_MAX;
	uint64_t x342 = UINT64_MAX;
	int64_t x343 = INT64_MIN;
	int32_t x344 = -1;
	static volatile int32_t t75 = -29129;

	t75 = ((x341==(x342/x343))-x344);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = 0;
	static int8_t x346 = INT8_MIN;
	uint32_t t76 = 7U;

	t76 = ((x345==(x346/x347))-x348);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MAX;
	uint8_t x350 = 111U;
	int32_t x351 = 8600231;
	volatile int64_t x352 = -1LL;

	t77 = ((x349==(x350/x351))-x352);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x353 = 1;
	static int16_t x355 = 2973;
	int32_t x356 = -1;
	int32_t t78 = 172058915;

	t78 = ((x353==(x354/x355))-x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x358 = 2;
	uint32_t x359 = 2688958U;
	uint64_t x360 = 1512LLU;
	volatile uint64_t t79 = 44435LLU;

	t79 = ((x357==(x358/x359))-x360);

	if (t79 != 18446744073709550104LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x362 = INT8_MIN;
	static int64_t x363 = INT64_MIN;
	uint16_t x364 = 1028U;
	volatile int32_t t80 = 10218584;

	t80 = ((x361==(x362/x363))-x364);

	if (t80 != -1028) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = INT32_MIN;
	int32_t x366 = -1;
	static int32_t t81 = -9;

	t81 = ((x365==(x366/x367))-x368);

	if (t81 != -255) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x369 = 72U;
	volatile int16_t x370 = -1;
	int64_t x371 = INT64_MIN;
	int8_t x372 = INT8_MIN;
	volatile int32_t t82 = 3154937;

	t82 = ((x369==(x370/x371))-x372);

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x373 = INT64_MIN;
	uint8_t x374 = 3U;
	uint64_t x375 = 595197083916033928LLU;
	int32_t x376 = -10735300;
	volatile int32_t t83 = 347;

	t83 = ((x373==(x374/x375))-x376);

	if (t83 != 10735300) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x382 = -1;
	static volatile int8_t x384 = INT8_MIN;
	static int32_t t84 = 3071386;

	t84 = ((x381==(x382/x383))-x384);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x385 = 271124496595433LLU;
	int32_t x386 = -1625727;
	uint64_t x387 = 120LLU;
	static int16_t x388 = INT16_MAX;
	int32_t t85 = -73;

	t85 = ((x385==(x386/x387))-x388);

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x392 = -762080011338172LL;
	static volatile int64_t t86 = -927504371LL;

	t86 = ((x389==(x390/x391))-x392);

	if (t86 != 762080011338172LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x393 = INT16_MAX;
	int16_t x394 = -233;
	int16_t x395 = -2;
	volatile uint16_t x396 = 13399U;
	static volatile int32_t t87 = 245323;

	t87 = ((x393==(x394/x395))-x396);

	if (t87 != -13399) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = UINT16_MAX;
	int8_t x402 = -1;
	int16_t x404 = -1;

	t88 = ((x401==(x402/x403))-x404);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = INT32_MIN;
	int16_t x406 = INT16_MIN;
	uint32_t x407 = 6U;
	static int32_t t89 = 1;

	t89 = ((x405==(x406/x407))-x408);

	if (t89 != 4959) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x409 = 32U;
	int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MIN;
	static int8_t x412 = -1;
	volatile int32_t t90 = 42093;

	t90 = ((x409==(x410/x411))-x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = INT8_MIN;
	static uint64_t x418 = 45619557060992945LLU;
	uint8_t x419 = 63U;
	volatile uint64_t t91 = 438996LLU;

	t91 = ((x417==(x418/x419))-x420);

	if (t91 != 18446741519536815686LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x421 = 0U;
	volatile uint32_t x423 = 686265U;
	volatile uint64_t x424 = 18593217751711LLU;
	volatile uint64_t t92 = 1LLU;

	t92 = ((x421==(x422/x423))-x424);

	if (t92 != 18446725480491799905LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = INT16_MIN;
	static uint32_t x427 = UINT32_MAX;
	static uint16_t x428 = 117U;

	t93 = ((x425==(x426/x427))-x428);

	if (t93 != -117) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x429 = -1;
	int8_t x430 = -31;
	static uint8_t x431 = 2U;
	uint64_t x432 = 475773152LLU;
	volatile uint64_t t94 = 1549227478148LLU;

	t94 = ((x429==(x430/x431))-x432);

	if (t94 != 18446744073233778464LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x434 = INT16_MIN;
	uint64_t x435 = 17580082649176970LLU;
	int32_t t95 = 253762707;

	t95 = ((x433==(x434/x435))-x436);

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x438 = 267726613U;

	t96 = ((x437==(x438/x439))-x440);

	if (t96 != 4294584415U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x441 = -20685;
	int32_t x442 = INT32_MIN;
	uint64_t x443 = 630559419642294272LLU;
	static int32_t x444 = INT32_MAX;
	int32_t t97 = 33316826;

	t97 = ((x441==(x442/x443))-x444);

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x446 = -1LL;
	uint32_t x448 = 39U;
	uint32_t t98 = 989394U;

	t98 = ((x445==(x446/x447))-x448);

	if (t98 != 4294967257U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x450 = INT16_MIN;
	volatile int16_t x452 = 103;
	volatile int32_t t99 = 132319;

	t99 = ((x449==(x450/x451))-x452);

	if (t99 != -103) { NG(); } else { ; }
	
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

