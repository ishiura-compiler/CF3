#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 5U;
volatile int32_t t1 = -81824801;
int64_t x9 = 2596094LL;
int16_t x12 = -102;
int16_t x18 = -121;
int16_t x27 = 7218;
volatile int32_t t5 = 2;
static volatile uint16_t x29 = 4U;
int64_t x31 = INT64_MAX;
int32_t x32 = 97;
static volatile int32_t x40 = INT32_MIN;
int64_t t8 = 1389519700LL;
static volatile int64_t t9 = 108LL;
int16_t x57 = INT16_MIN;
int64_t x59 = INT64_MAX;
int64_t x62 = INT64_MIN;
volatile uint16_t x63 = UINT16_MAX;
static uint32_t x68 = 157711U;
uint64_t t12 = 295409LLU;
int32_t x88 = -1;
volatile int64_t x93 = -1LL;
volatile int64_t x94 = -1LL;
static int8_t x96 = -1;
uint8_t x107 = 96U;
int16_t x108 = -1;
int16_t x116 = INT16_MIN;
volatile int32_t t21 = -3;
int8_t x117 = INT8_MIN;
int8_t x125 = INT8_MAX;
volatile uint32_t t23 = 56905U;
int64_t t26 = -19796165615LL;
uint32_t x152 = UINT32_MAX;
volatile uint32_t t27 = 1459530923U;
volatile uint8_t x155 = UINT8_MAX;
volatile uint32_t t28 = 14304848U;
uint32_t x159 = UINT32_MAX;
volatile uint64_t t29 = 663LLU;
static uint8_t x183 = UINT8_MAX;
int32_t x184 = -1;
int16_t x199 = INT16_MIN;
volatile int8_t x200 = -1;
int16_t x202 = 518;
int32_t t35 = 509;
int32_t x213 = INT32_MIN;
volatile int8_t x215 = INT8_MIN;
static int8_t x224 = INT8_MIN;
int64_t x231 = INT64_MIN;
volatile uint64_t t42 = 237378279443686881LLU;
uint64_t x242 = 286111872952561133LLU;
uint64_t t44 = 54744902216LLU;
volatile int16_t x248 = INT16_MIN;
uint64_t x251 = 16343563LLU;
uint32_t x252 = 296112991U;
int16_t x253 = INT16_MIN;
static uint32_t t47 = 22544U;
volatile uint32_t x257 = 1U;
int64_t x259 = -979978657LL;
int8_t x263 = INT8_MIN;
int64_t x264 = -1LL;
uint64_t x290 = UINT64_MAX;
uint32_t t53 = 38U;
int32_t x298 = 61;
uint32_t x300 = 2729431U;
uint32_t t54 = 288371U;
uint16_t x308 = 2119U;
volatile int64_t t56 = -2LL;
uint64_t x310 = 945114051823LLU;
static volatile uint64_t t57 = 45126987748185039LLU;
int32_t x313 = -30333;
uint16_t x314 = UINT16_MAX;
uint8_t x326 = UINT8_MAX;
uint64_t t60 = 61871637893563580LLU;
static int16_t x331 = -1;
static volatile int16_t x338 = INT16_MAX;
uint32_t t62 = 422U;
volatile int16_t x345 = -1;
volatile uint64_t t63 = 41110269663296LLU;
static int64_t t64 = -1LL;
volatile int64_t x357 = INT64_MAX;
uint16_t x369 = UINT16_MAX;
static volatile int64_t t68 = 17573147429478461LL;
static uint8_t x374 = 14U;
int16_t x397 = INT16_MAX;
uint32_t x403 = 206895224U;
uint32_t x410 = UINT32_MAX;
uint32_t x415 = 93375232U;
int32_t x417 = INT32_MIN;
volatile int32_t t77 = -359010425;
int64_t t78 = 3347LL;
int16_t x431 = -175;
uint16_t x432 = UINT16_MAX;
int8_t x453 = -1;
volatile uint32_t x455 = UINT32_MAX;
uint32_t t84 = 346129534U;
uint32_t x459 = UINT32_MAX;
uint32_t x461 = 189580U;
int8_t x467 = INT8_MIN;
uint64_t x468 = 107395488815LLU;
volatile int32_t x476 = 1;
int16_t x477 = INT16_MIN;
int8_t x479 = INT8_MIN;
static int32_t x488 = 0;
int16_t x494 = INT16_MIN;
volatile int16_t x498 = INT16_MIN;
uint64_t x504 = 1843964507LLU;
int64_t x506 = INT64_MAX;
static int64_t x511 = INT64_MAX;
static int32_t x516 = -46774925;
volatile int64_t t97 = -830219674288608LL;
uint64_t x524 = UINT64_MAX;


void f0(void) {
	int16_t x1 = -24;
	uint32_t x2 = 12U;
	volatile int8_t x3 = INT8_MIN;
	static uint32_t t0 = 1954802U;

	t0 = ((x1%(x2%x3))&x4);

	if (t0 != 4U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int8_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = INT16_MIN;

	t1 = ((x5%(x6%x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 22U;
	int64_t x11 = -331LL;
	volatile int64_t t2 = 401569284678275971LL;

	t2 = ((x9%(x10%x11))&x12);

	if (t2 != 2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = -1LL;
	int8_t x15 = 11;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 674LLU;

	t3 = ((x13%(x14%x15))&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint8_t x19 = 4U;
	static uint64_t x20 = 195LLU;
	static uint64_t t4 = 1848357641530487LLU;

	t4 = ((x17%(x18%x19))&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 1;
	int8_t x26 = INT8_MIN;
	int16_t x28 = INT16_MAX;

	t5 = ((x25%(x26%x27))&x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = 50;
	static int64_t t6 = 1LL;

	t6 = ((x29%(x30%x31))&x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MIN;
	uint8_t x38 = 25U;
	static int8_t x39 = INT8_MAX;
	volatile int64_t t7 = -8744047865513486LL;

	t7 = ((x37%(x38%x39))&x40);

	if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	int64_t x42 = INT64_MIN;
	uint32_t x43 = 1506985794U;
	int16_t x44 = -28;

	t8 = ((x41%(x42%x43))&x44);

	if (t8 != 65508LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x53 = INT64_MIN;
	int32_t x54 = INT32_MIN;
	uint32_t x55 = 713U;
	int8_t x56 = INT8_MIN;

	t9 = ((x53%(x54%x55))&x56);

	if (t9 != -256LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x58 = INT32_MIN;
	int8_t x60 = 1;
	volatile int64_t t10 = 2321348041014LL;

	t10 = ((x57%(x58%x59))&x60);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = -1;
	int8_t x64 = 1;
	static int64_t t11 = -9805738LL;

	t11 = ((x61%(x62%x63))&x64);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x65 = 378245523465598LL;
	int16_t x66 = INT16_MIN;
	uint64_t x67 = 75LLU;

	t12 = ((x65%(x66%x67))&x68);

	if (t12 != 12LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = 253;
	int16_t x78 = INT16_MIN;
	uint64_t x79 = 2163930LLU;
	volatile int32_t x80 = -1;
	volatile uint64_t t13 = 1LLU;

	t13 = ((x77%(x78%x79))&x80);

	if (t13 != 253LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = -1;
	int16_t x82 = INT16_MAX;
	int32_t x83 = INT32_MIN;
	int8_t x84 = -1;
	volatile int32_t t14 = -3;

	t14 = ((x81%(x82%x83))&x84);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x85 = INT8_MIN;
	uint8_t x86 = UINT8_MAX;
	uint16_t x87 = UINT16_MAX;
	volatile int32_t t15 = 27014526;

	t15 = ((x85%(x86%x87))&x88);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = INT32_MIN;
	volatile int8_t x90 = INT8_MAX;
	static uint64_t x91 = 22361874079LLU;
	static uint64_t x92 = 888083333890LLU;
	volatile uint64_t t16 = 55LLU;

	t16 = ((x89%(x90%x91))&x92);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x95 = INT8_MIN;
	static int64_t t17 = -218635LL;

	t17 = ((x93%(x94%x95))&x96);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = INT16_MAX;
	int64_t x102 = INT64_MIN;
	uint16_t x103 = 12U;
	volatile uint32_t x104 = UINT32_MAX;
	int64_t t18 = 712183440330733814LL;

	t18 = ((x101%(x102%x103))&x104);

	if (t18 != 7LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = 11;
	int32_t t19 = 62243735;

	t19 = ((x105%(x106%x107))&x108);

	if (t19 != -7) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = INT8_MAX;
	int64_t x110 = 5465480LL;
	uint64_t x111 = UINT64_MAX;
	uint8_t x112 = 38U;
	volatile uint64_t t20 = 29129694088864LLU;

	t20 = ((x109%(x110%x111))&x112);

	if (t20 != 38LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = INT32_MIN;
	static int32_t x114 = -1;
	uint16_t x115 = 639U;

	t21 = ((x113%(x114%x115))&x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MAX;
	static int64_t x120 = INT64_MAX;
	volatile int64_t t22 = 9193569LL;

	t22 = ((x117%(x118%x119))&x120);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x126 = UINT32_MAX;
	static int8_t x127 = INT8_MIN;
	static int8_t x128 = INT8_MIN;

	t23 = ((x125%(x126%x127))&x128);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x137 = -1LL;
	uint8_t x138 = UINT8_MAX;
	static int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;
	static volatile int64_t t24 = -9875573731750854LL;

	t24 = ((x137%(x138%x139))&x140);

	if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = UINT8_MAX;
	static uint32_t x142 = 18U;
	int16_t x143 = INT16_MAX;
	int32_t x144 = INT32_MIN;
	volatile uint32_t t25 = 155154250U;

	t25 = ((x141%(x142%x143))&x144);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x145 = 276U;
	int64_t x146 = -2LL;
	static int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MAX;

	t26 = ((x145%(x146%x147))&x148);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x149 = -1;
	uint32_t x150 = 852568U;
	uint16_t x151 = 41U;

	t27 = ((x149%(x150%x151))&x152);

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x153 = 15569;
	volatile int16_t x154 = INT16_MIN;
	uint32_t x156 = UINT32_MAX;

	t28 = ((x153%(x154%x155))&x156);

	if (t28 != 81U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x157 = 4357442672361LLU;
	static int32_t x158 = 8125401;
	uint16_t x160 = UINT16_MAX;

	t29 = ((x157%(x158%x159))&x160);

	if (t29 != 231LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = 360;
	int32_t x162 = INT32_MAX;
	uint64_t x163 = UINT64_MAX;
	static int8_t x164 = INT8_MIN;
	uint64_t t30 = 3LLU;

	t30 = ((x161%(x162%x163))&x164);

	if (t30 != 256LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x165 = 3U;
	static int32_t x166 = INT32_MIN;
	volatile uint8_t x167 = 17U;
	static int16_t x168 = INT16_MAX;
	static int32_t t31 = -8;

	t31 = ((x165%(x166%x167))&x168);

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x177 = 89U;
	uint16_t x178 = UINT16_MAX;
	uint64_t x179 = UINT64_MAX;
	volatile int16_t x180 = INT16_MAX;
	static volatile uint64_t t32 = 112LLU;

	t32 = ((x177%(x178%x179))&x180);

	if (t32 != 89LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x181 = UINT8_MAX;
	int32_t x182 = INT32_MIN;
	int32_t t33 = 1115;

	t33 = ((x181%(x182%x183))&x184);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x197 = 12U;
	int8_t x198 = -12;
	volatile int32_t t34 = -254153317;

	t34 = ((x197%(x198%x199))&x200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x201 = -1;
	volatile int32_t x203 = -238942;
	static uint16_t x204 = UINT16_MAX;

	t35 = ((x201%(x202%x203))&x204);

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x209 = INT32_MIN;
	static uint8_t x210 = 1U;
	volatile int64_t x211 = 2104543703957877966LL;
	uint32_t x212 = UINT32_MAX;
	static int64_t t36 = 8663384LL;

	t36 = ((x209%(x210%x211))&x212);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x214 = -224228;
	int16_t x216 = INT16_MAX;
	volatile int32_t t37 = 3;

	t37 = ((x213%(x214%x215))&x216);

	if (t37 != 32720) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x217 = -14236066080LL;
	uint16_t x218 = 494U;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = INT16_MAX;
	static int64_t t38 = 1010731760LL;

	t38 = ((x217%(x218%x219))&x220);

	if (t38 != 32506LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x221 = 26U;
	static uint16_t x222 = 926U;
	int32_t x223 = INT32_MIN;
	volatile uint32_t t39 = 36574U;

	t39 = ((x221%(x222%x223))&x224);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x225 = 442357272LL;
	int32_t x226 = 81;
	int64_t x227 = -405754399LL;
	static volatile int8_t x228 = INT8_MIN;
	int64_t t40 = -652778204667345067LL;

	t40 = ((x225%(x226%x227))&x228);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x229 = -27;
	static volatile int8_t x230 = -1;
	static int64_t x232 = -141LL;
	volatile int64_t t41 = -1207384LL;

	t41 = ((x229%(x230%x231))&x232);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x233 = 212U;
	int8_t x234 = -2;
	uint64_t x235 = 1797959202LLU;
	int8_t x236 = -1;

	t42 = ((x233%(x234%x235))&x236);

	if (t42 != 212LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x237 = INT16_MIN;
	uint32_t x238 = 1U;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -52;
	volatile uint32_t t43 = 445U;

	t43 = ((x237%(x238%x239))&x240);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x241 = INT16_MIN;
	static int16_t x243 = INT16_MAX;
	int16_t x244 = INT16_MIN;

	t44 = ((x241%(x242%x243))&x244);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x245 = INT64_MIN;
	static uint16_t x246 = 1U;
	int32_t x247 = INT32_MIN;
	static int64_t t45 = -59191483395696085LL;

	t45 = ((x245%(x246%x247))&x248);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x249 = INT16_MIN;
	static int8_t x250 = 35;
	static uint64_t t46 = 7413522124506558716LLU;

	t46 = ((x249%(x250%x251))&x252);

	if (t46 != 8LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x254 = UINT32_MAX;
	static uint16_t x255 = 2U;
	static uint32_t x256 = 329U;

	t47 = ((x253%(x254%x255))&x256);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x258 = UINT16_MAX;
	int16_t x260 = 22;
	int64_t t48 = -620LL;

	t48 = ((x257%(x258%x259))&x260);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x261 = 1484964;
	int8_t x262 = -1;
	static volatile int64_t t49 = 2192446LL;

	t49 = ((x261%(x262%x263))&x264);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x265 = -1324;
	uint32_t x266 = 482768904U;
	uint64_t x267 = 9737448105LLU;
	volatile int32_t x268 = 8;
	volatile uint64_t t50 = 18108LLU;

	t50 = ((x265%(x266%x267))&x268);

	if (t50 != 8LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x273 = INT8_MIN;
	static int8_t x274 = -23;
	int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MIN;
	int32_t t51 = INT32_MIN;

	t51 = ((x273%(x274%x275))&x276);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x289 = INT32_MAX;
	static volatile uint32_t x291 = 46074199U;
	uint32_t x292 = 7856019U;
	uint64_t t52 = 131886651884LLU;

	t52 = ((x289%(x290%x291))&x292);

	if (t52 != 6462851LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = INT16_MAX;
	static uint16_t x294 = 26U;
	static uint16_t x295 = 1291U;
	uint32_t x296 = 309U;

	t53 = ((x293%(x294%x295))&x296);

	if (t53 != 5U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x297 = UINT8_MAX;
	static uint8_t x299 = 13U;

	t54 = ((x297%(x298%x299))&x300);

	if (t54 != 3U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x301 = INT64_MIN;
	int16_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = -29;
	static volatile int64_t t55 = 2692086794224579988LL;

	t55 = ((x301%(x302%x303))&x304);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x305 = -1;
	volatile int32_t x306 = INT32_MAX;
	int64_t x307 = 15LL;

	t56 = ((x305%(x306%x307))&x308);

	if (t56 != 2119LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x309 = INT32_MIN;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = 221933LL;

	t57 = ((x309%(x310%x311))&x312);

	if (t57 != 131180LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MIN;
	int32_t t58 = INT32_MIN;

	t58 = ((x313%(x314%x315))&x316);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x317 = 110U;
	uint8_t x318 = UINT8_MAX;
	static int32_t x319 = -87;
	int8_t x320 = INT8_MIN;
	static int32_t t59 = -98;

	t59 = ((x317%(x318%x319))&x320);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x325 = UINT64_MAX;
	int32_t x327 = INT32_MAX;
	static int64_t x328 = INT64_MIN;

	t60 = ((x325%(x326%x327))&x328);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x329 = -1LL;
	uint64_t x330 = 529LLU;
	int64_t x332 = INT64_MAX;
	uint64_t t61 = 217421812557035LLU;

	t61 = ((x329%(x330%x331))&x332);

	if (t61 != 28LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x337 = 215295027U;
	int16_t x339 = 2770;
	int16_t x340 = -122;

	t62 = ((x337%(x338%x339))&x340);

	if (t62 != 1794U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x346 = INT32_MIN;
	static int8_t x347 = INT8_MAX;
	static uint64_t x348 = 1023641525652207LLU;

	t63 = ((x345%(x346%x347))&x348);

	if (t63 != 1023641525652207LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x349 = -110334140;
	uint16_t x350 = 3U;
	volatile int32_t x351 = INT32_MIN;
	int64_t x352 = -1LL;

	t64 = ((x349%(x350%x351))&x352);

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x353 = 49896407;
	static volatile int32_t x354 = INT32_MIN;
	static int8_t x355 = -5;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t65 = 5215927U;

	t65 = ((x353%(x354%x355))&x356);

	if (t65 != 2U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x358 = 61468;
	int64_t x359 = INT64_MIN;
	int32_t x360 = -2;
	volatile int64_t t66 = 1748873242285LL;

	t66 = ((x357%(x358%x359))&x360);

	if (t66 != 53466LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x361 = INT64_MIN;
	uint64_t x362 = 20LLU;
	int8_t x363 = INT8_MAX;
	int8_t x364 = INT8_MIN;
	uint64_t t67 = 86253LLU;

	t67 = ((x361%(x362%x363))&x364);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x370 = INT64_MAX;
	static volatile uint16_t x371 = UINT16_MAX;
	int8_t x372 = -1;

	t68 = ((x369%(x370%x371))&x372);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x373 = 1;
	uint8_t x375 = 63U;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t69 = 1;

	t69 = ((x373%(x374%x375))&x376);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x381 = -1LL;
	static uint32_t x382 = 9015U;
	static uint16_t x383 = 7827U;
	uint32_t x384 = UINT32_MAX;
	volatile int64_t t70 = -339196501122LL;

	t70 = ((x381%(x382%x383))&x384);

	if (t70 != 4294967295LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x385 = 9780641291127LL;
	int8_t x386 = -1;
	int16_t x387 = -3373;
	int16_t x388 = -1;
	int64_t t71 = 14495406LL;

	t71 = ((x385%(x386%x387))&x388);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x389 = 1891;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = 32481003U;
	volatile int64_t x392 = -1LL;
	int64_t t72 = 1LL;

	t72 = ((x389%(x390%x391))&x392);

	if (t72 != 1891LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x398 = -38;
	int32_t x399 = 44705139;
	int32_t x400 = 183;
	int32_t t73 = 15933;

	t73 = ((x397%(x398%x399))&x400);

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x401 = INT32_MAX;
	volatile int16_t x402 = INT16_MAX;
	int64_t x404 = INT64_MIN;
	volatile int64_t t74 = 1979844LL;

	t74 = ((x401%(x402%x403))&x404);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x409 = 931485950U;
	int32_t x411 = -24804410;
	volatile int8_t x412 = INT8_MIN;
	volatile uint32_t t75 = 11U;

	t75 = ((x409%(x410%x411))&x412);

	if (t75 != 13722752U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x413 = 4401586303630051LLU;
	int32_t x414 = INT32_MAX;
	uint16_t x416 = 2625U;
	static volatile uint64_t t76 = 3651791954454LLU;

	t76 = ((x413%(x414%x415))&x416);

	if (t76 != 2560LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x418 = UINT8_MAX;
	uint16_t x419 = 126U;
	int16_t x420 = INT16_MIN;

	t77 = ((x417%(x418%x419))&x420);

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x425 = -1;
	int8_t x426 = INT8_MIN;
	int64_t x427 = INT64_MIN;
	int32_t x428 = -483815;

	t78 = ((x425%(x426%x427))&x428);

	if (t78 != -483815LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x429 = INT32_MAX;
	int64_t x430 = INT64_MIN;
	int64_t t79 = 4LL;

	t79 = ((x429%(x430%x431))&x432);

	if (t79 != 7LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x433 = 53U;
	int8_t x434 = -1;
	int32_t x435 = INT32_MAX;
	uint32_t x436 = UINT32_MAX;
	volatile uint32_t t80 = 1U;

	t80 = ((x433%(x434%x435))&x436);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x437 = -1;
	uint32_t x438 = 1521005878U;
	volatile uint16_t x439 = UINT16_MAX;
	int8_t x440 = -15;
	uint32_t t81 = 906U;

	t81 = ((x437%(x438%x439))&x440);

	if (t81 != 2497U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x441 = 77U;
	int64_t x442 = INT64_MIN;
	int16_t x443 = 36;
	int64_t x444 = INT64_MIN;
	int64_t t82 = -60852260110021LL;

	t82 = ((x441%(x442%x443))&x444);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x445 = 15;
	uint8_t x446 = UINT8_MAX;
	int8_t x447 = -20;
	static int16_t x448 = INT16_MIN;
	volatile int32_t t83 = 335064;

	t83 = ((x445%(x446%x447))&x448);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x454 = 772664827;
	int16_t x456 = INT16_MIN;

	t84 = ((x453%(x454%x455))&x456);

	if (t84 != 431620096U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x457 = INT16_MIN;
	uint16_t x458 = 31812U;
	uint16_t x460 = UINT16_MAX;
	uint32_t t85 = 211U;

	t85 = ((x457%(x458%x459))&x460);

	if (t85 != 28220U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x462 = INT8_MIN;
	volatile int64_t x463 = -1014372328LL;
	int16_t x464 = 61;
	static int64_t t86 = -19724885LL;

	t86 = ((x461%(x462%x463))&x464);

	if (t86 != 12LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x465 = INT64_MIN;
	volatile int16_t x466 = -1;
	uint64_t t87 = 64938294299723LLU;

	t87 = ((x465%(x466%x467))&x468);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x469 = 1471U;
	uint32_t x470 = 25U;
	uint8_t x471 = 8U;
	static int8_t x472 = -1;
	uint32_t t88 = 370974U;

	t88 = ((x469%(x470%x471))&x472);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x473 = INT16_MAX;
	uint64_t x474 = UINT64_MAX;
	int16_t x475 = INT16_MIN;
	volatile uint64_t t89 = 229036341388109LLU;

	t89 = ((x473%(x474%x475))&x476);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x478 = 61109LLU;
	int16_t x480 = -1;
	uint64_t t90 = 208803405240LLU;

	t90 = ((x477%(x478%x479))&x480);

	if (t90 != 3605LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x485 = -1LL;
	int8_t x486 = INT8_MAX;
	volatile uint16_t x487 = 5451U;
	volatile int64_t t91 = 634913LL;

	t91 = ((x485%(x486%x487))&x488);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x493 = 11492917U;
	uint8_t x495 = 7U;
	static int32_t x496 = INT32_MAX;
	static volatile uint32_t t92 = 91326U;

	t92 = ((x493%(x494%x495))&x496);

	if (t92 != 11492917U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x497 = UINT32_MAX;
	static volatile int64_t x499 = 9722LL;
	int32_t x500 = INT32_MIN;
	int64_t t93 = -57165907265995LL;

	t93 = ((x497%(x498%x499))&x500);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x501 = -1;
	int8_t x502 = INT8_MIN;
	static int64_t x503 = INT64_MAX;
	volatile uint64_t t94 = 222607LLU;

	t94 = ((x501%(x502%x503))&x504);

	if (t94 != 1843964507LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x505 = 6946820LLU;
	int8_t x507 = INT8_MIN;
	volatile int16_t x508 = INT16_MIN;
	static volatile uint64_t t95 = 6633160714435576LLU;

	t95 = ((x505%(x506%x507))&x508);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x509 = UINT32_MAX;
	volatile int16_t x510 = 2083;
	uint32_t x512 = 38883U;
	volatile int64_t t96 = 4197LL;

	t96 = ((x509%(x510%x511))&x512);

	if (t96 != 417LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x513 = INT64_MAX;
	static uint16_t x514 = 2U;
	int8_t x515 = INT8_MIN;

	t97 = ((x513%(x514%x515))&x516);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = INT32_MIN;
	int16_t x518 = INT16_MAX;
	volatile int8_t x519 = INT8_MIN;
	uint16_t x520 = 13U;
	int32_t t98 = -1;

	t98 = ((x517%(x518%x519))&x520);

	if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x521 = 22018U;
	int8_t x522 = 38;
	uint32_t x523 = UINT32_MAX;
	uint64_t t99 = 166184634059106587LLU;

	t99 = ((x521%(x522%x523))&x524);

	if (t99 != 16LLU) { NG(); } else { ; }
	
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

