#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x29 = 539155010954LLU;
volatile int8_t x31 = INT8_MAX;
int64_t x32 = 11366171450LL;
volatile uint64_t t5 = 13495476520LLU;
uint64_t x35 = 2164960LLU;
volatile uint8_t x38 = 4U;
int32_t x50 = -1;
int16_t x53 = INT16_MIN;
int64_t x58 = INT64_MIN;
volatile int32_t x60 = INT32_MIN;
int32_t x71 = 150649090;
int16_t x77 = INT16_MAX;
int8_t x78 = INT8_MIN;
uint16_t x83 = 7687U;
int16_t x96 = INT16_MIN;
int32_t t20 = 22326;
int8_t x116 = INT8_MIN;
int8_t x128 = INT8_MIN;
int64_t x135 = 20934LL;
volatile int64_t x139 = 4265LL;
int32_t x143 = -102581146;
volatile int32_t t28 = 0;
uint64_t x149 = 13LLU;
static volatile uint64_t t30 = 283341596975209326LLU;
int16_t x153 = INT16_MIN;
uint8_t x155 = UINT8_MAX;
int16_t x156 = -68;
uint16_t x160 = 1U;
volatile int16_t x166 = -1;
static int32_t t34 = 1;
int8_t x172 = 47;
uint16_t x174 = 50U;
int64_t x176 = INT64_MIN;
static int16_t x184 = INT16_MIN;
uint64_t x188 = 25724578102865LLU;
uint64_t x190 = UINT64_MAX;
static int64_t x201 = INT64_MIN;
int8_t x202 = -48;
int32_t x205 = 137;
volatile int32_t t43 = -1696594;
volatile int64_t x217 = -1LL;
int64_t x221 = INT64_MAX;
uint32_t x235 = 2058350U;
int8_t x236 = INT8_MAX;
volatile int32_t t49 = -330;
int8_t x243 = -3;
int8_t x244 = INT8_MIN;
int16_t x252 = -6723;
uint8_t x254 = UINT8_MAX;
uint64_t x267 = UINT64_MAX;
int32_t t56 = 1192;
int32_t x274 = 9;
uint8_t x278 = 3U;
uint64_t t60 = 1008694LLU;
static volatile int32_t t61 = -891;
uint8_t x289 = UINT8_MAX;
static int16_t x296 = 5970;
int8_t x314 = -2;
uint8_t x315 = UINT8_MAX;
uint16_t x317 = 7U;
int8_t x318 = -45;
volatile int64_t x319 = 15247457LL;
int32_t t67 = -24665585;
volatile int32_t x322 = 47;
volatile int64_t t68 = 419LL;
volatile int32_t x327 = -6607296;
int16_t x339 = INT16_MIN;
volatile int16_t x346 = INT16_MAX;
int8_t x350 = INT8_MIN;
int16_t x353 = 6;
volatile uint16_t x360 = 360U;
volatile int64_t x363 = 1015476257428614LL;
int8_t x380 = -1;
uint64_t x395 = UINT64_MAX;
volatile int32_t t84 = 2;
int32_t x402 = INT32_MAX;
static volatile uint32_t x404 = 21418931U;
static volatile uint32_t t85 = 14677U;
static int8_t x405 = -6;
uint8_t x409 = UINT8_MAX;
int8_t x411 = INT8_MAX;
volatile uint64_t x425 = 115728LLU;
static int64_t x438 = INT64_MIN;
uint8_t x439 = UINT8_MAX;
int32_t x441 = -1;
int64_t x450 = INT64_MAX;
int64_t x456 = -1LL;
uint32_t x464 = UINT32_MAX;
static uint32_t x469 = 1644405U;
int8_t x474 = INT8_MIN;


void f0(void) {
	int16_t x1 = -1;
	static volatile uint16_t x2 = 1718U;
	volatile int64_t x3 = 1447LL;
	int16_t x4 = -213;
	int32_t t0 = 28870;

	t0 = ((x1-(x2<=x3))*x4);

	if (t0 != 213) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -1LL;
	static uint8_t x10 = 88U;
	int64_t x11 = INT64_MIN;
	int32_t x12 = -107489;
	int64_t t1 = -594076476372493LL;

	t1 = ((x9-(x10<=x11))*x12);

	if (t1 != 107489LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 2654U;
	static volatile int32_t x14 = 36;
	volatile int8_t x15 = -1;
	static int16_t x16 = INT16_MIN;
	uint32_t t2 = 2822U;

	t2 = ((x13-(x14<=x15))*x16);

	if (t2 != 4208001024U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x17 = UINT16_MAX;
	uint8_t x18 = 34U;
	int32_t x19 = INT32_MIN;
	volatile int8_t x20 = INT8_MIN;
	static int32_t t3 = -119797789;

	t3 = ((x17-(x18<=x19))*x20);

	if (t3 != -8388480) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 2600LLU;
	static int32_t x26 = -4;
	static volatile int16_t x27 = INT16_MIN;
	static int8_t x28 = 2;
	uint64_t t4 = 1331028621LLU;

	t4 = ((x25-(x26<=x27))*x28);

	if (t4 != 5200LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x30 = 134079715;

	t5 = ((x29-(x30<=x31))*x32);

	if (t5 != 3809260158220926788LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MIN;
	volatile int64_t x36 = -1LL;
	static uint64_t t6 = 1036LLU;

	t6 = ((x33-(x34<=x35))*x36);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = INT32_MAX;
	static int64_t x39 = INT64_MIN;
	static volatile uint16_t x40 = 1U;
	volatile int32_t t7 = INT32_MAX;

	t7 = ((x37-(x38<=x39))*x40);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MIN;
	int64_t x51 = -1LL;
	int16_t x52 = -1;
	static volatile int32_t t8 = 11965;

	t8 = ((x49-(x50<=x51))*x52);

	if (t8 != 32769) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x54 = 0U;
	volatile int16_t x55 = INT16_MAX;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t9 = -125452;

	t9 = ((x53-(x54<=x55))*x56);

	if (t9 != 4194432) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x57 = -1LL;
	uint8_t x59 = UINT8_MAX;
	volatile int64_t t10 = 23131LL;

	t10 = ((x57-(x58<=x59))*x60);

	if (t10 != 4294967296LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 26U;
	int32_t x62 = INT32_MIN;
	uint32_t x63 = 14U;
	int16_t x64 = -1;
	volatile uint32_t t11 = 44955868U;

	t11 = ((x61-(x62<=x63))*x64);

	if (t11 != 4294967270U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x69 = 14363U;
	volatile int16_t x70 = -1;
	static uint64_t x72 = UINT64_MAX;
	uint64_t t12 = 1846654963285253LLU;

	t12 = ((x69-(x70<=x71))*x72);

	if (t12 != 18446744073709537254LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = 29U;
	uint32_t x74 = 5271170U;
	static int16_t x75 = INT16_MIN;
	volatile int32_t x76 = -1;
	volatile int32_t t13 = -79;

	t13 = ((x73-(x74<=x75))*x76);

	if (t13 != -28) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x79 = INT16_MAX;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t14 = -4728959;

	t14 = ((x77-(x78<=x79))*x80);

	if (t14 != -4194048) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x81 = 234485U;
	int32_t x82 = -62259343;
	static int8_t x84 = -32;
	uint32_t t15 = 159U;

	t15 = ((x81-(x82<=x83))*x84);

	if (t15 != 4287463808U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -1LL;
	static int32_t x86 = 1987992;
	int8_t x87 = -1;
	uint64_t x88 = 25407024615126LLU;
	volatile uint64_t t16 = 1153466984658430LLU;

	t16 = ((x85-(x86<=x87))*x88);

	if (t16 != 18446718666684936490LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x89 = UINT16_MAX;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = 42U;
	int8_t x92 = INT8_MIN;
	static int32_t t17 = 33407295;

	t17 = ((x89-(x90<=x91))*x92);

	if (t17 != -8388352) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x93 = INT16_MIN;
	volatile int16_t x94 = INT16_MIN;
	static int16_t x95 = INT16_MIN;
	int32_t t18 = 20;

	t18 = ((x93-(x94<=x95))*x96);

	if (t18 != 1073774592) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x97 = 1434978795217LL;
	volatile int64_t x98 = -1LL;
	static volatile int64_t x99 = -1LL;
	volatile uint32_t x100 = 21U;
	int64_t t19 = -122977464014LL;

	t19 = ((x97-(x98<=x99))*x100);

	if (t19 != 30134554699536LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = 13;
	int64_t x103 = INT64_MAX;
	volatile int32_t x104 = -1;

	t20 = ((x101-(x102<=x103))*x104);

	if (t20 != -65534) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x105 = 32696938879LLU;
	volatile int16_t x106 = INT16_MIN;
	volatile uint64_t x107 = UINT64_MAX;
	int64_t x108 = INT64_MIN;
	uint64_t t21 = 780669LLU;

	t21 = ((x105-(x106<=x107))*x108);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	volatile int8_t x110 = INT8_MAX;
	uint16_t x111 = 27475U;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t22 = -2153;

	t22 = ((x109-(x110<=x111))*x112);

	if (t22 != -131070) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x113 = 1505233LLU;
	static int64_t x114 = -1LL;
	volatile uint32_t x115 = 170554U;
	volatile uint64_t t23 = 116219065LLU;

	t23 = ((x113-(x114<=x115))*x116);

	if (t23 != 18446744073516881920LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x117 = INT8_MAX;
	volatile int32_t x118 = -1042469413;
	int8_t x119 = -1;
	static int8_t x120 = INT8_MIN;
	int32_t t24 = 42;

	t24 = ((x117-(x118<=x119))*x120);

	if (t24 != -16128) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = -1;
	int32_t x126 = -1;
	uint32_t x127 = 5218U;
	volatile int32_t t25 = -9792281;

	t25 = ((x125-(x126<=x127))*x128);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = UINT16_MAX;
	int32_t x134 = INT32_MAX;
	uint64_t x136 = UINT64_MAX;
	static uint64_t t26 = 27163201504LLU;

	t26 = ((x133-(x134<=x135))*x136);

	if (t26 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = -7555;
	volatile int8_t x140 = -3;
	volatile uint64_t t27 = 2057960447LLU;

	t27 = ((x137-(x138<=x139))*x140);

	if (t27 != 6LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = -1;
	volatile int16_t x142 = -1;
	volatile int16_t x144 = INT16_MIN;

	t28 = ((x141-(x142<=x143))*x144);

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = 3866120U;
	static int32_t x147 = -1;
	static uint8_t x148 = 4U;
	int32_t t29 = -3108849;

	t29 = ((x145-(x146<=x147))*x148);

	if (t29 != -516) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x150 = INT16_MIN;
	static int64_t x151 = INT64_MIN;
	uint64_t x152 = 296521943LLU;

	t30 = ((x149-(x150<=x151))*x152);

	if (t30 != 3854785259LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x154 = UINT8_MAX;
	int32_t t31 = 4002594;

	t31 = ((x153-(x154<=x155))*x156);

	if (t31 != 2228292) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x157 = UINT64_MAX;
	int64_t x158 = -1LL;
	uint8_t x159 = 19U;
	volatile uint64_t t32 = 455567988LLU;

	t32 = ((x157-(x158<=x159))*x160);

	if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x161 = 11U;
	volatile int64_t x162 = INT64_MAX;
	int16_t x163 = -4;
	int32_t x164 = 22535103;
	static volatile int32_t t33 = -1825;

	t33 = ((x161-(x162<=x163))*x164);

	if (t33 != 247886133) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = UINT16_MAX;
	uint64_t x167 = 677389118191LLU;
	uint16_t x168 = 1418U;

	t34 = ((x165-(x166<=x167))*x168);

	if (t34 != 92928630) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x169 = 263507280894LLU;
	uint8_t x170 = 3U;
	volatile int32_t x171 = INT32_MIN;
	uint64_t t35 = 24986916737565857LLU;

	t35 = ((x169-(x170<=x171))*x172);

	if (t35 != 12384842202018LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x173 = 4974558057276032164LLU;
	int32_t x175 = -1;
	uint64_t t36 = 50283461893132LLU;

	t36 = ((x173-(x174<=x175))*x176);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = -7;
	static int16_t x178 = -508;
	volatile int8_t x179 = INT8_MIN;
	int64_t x180 = -208001288677LL;
	static volatile int64_t t37 = -11157456009135LL;

	t37 = ((x177-(x178<=x179))*x180);

	if (t37 != 1664010309416LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = -1LL;
	int32_t x182 = -1;
	int64_t x183 = INT64_MIN;
	volatile int64_t t38 = -116996178LL;

	t38 = ((x181-(x182<=x183))*x184);

	if (t38 != 32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile int64_t x186 = -243228774LL;
	int8_t x187 = 1;
	volatile uint64_t t39 = 2912617LLU;

	t39 = ((x185-(x186<=x187))*x188);

	if (t39 != 18443425603134282031LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x189 = UINT32_MAX;
	static uint32_t x191 = 1U;
	volatile uint8_t x192 = UINT8_MAX;
	static uint32_t t40 = 6563U;

	t40 = ((x189-(x190<=x191))*x192);

	if (t40 != 4294967041U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x203 = INT16_MIN;
	static uint64_t x204 = 22764110LLU;
	uint64_t t41 = 98279793715392LLU;

	t41 = ((x201-(x202<=x203))*x204);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x206 = -24437920571538LL;
	static int16_t x207 = 12;
	volatile uint32_t x208 = 0U;
	uint32_t t42 = 22997U;

	t42 = ((x205-(x206<=x207))*x208);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x209 = -1;
	int32_t x210 = -1;
	static int8_t x211 = INT8_MAX;
	static int8_t x212 = -1;

	t43 = ((x209-(x210<=x211))*x212);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x213 = 49U;
	static volatile int8_t x214 = INT8_MAX;
	int32_t x215 = 1;
	volatile int16_t x216 = INT16_MAX;
	int32_t t44 = 48;

	t44 = ((x213-(x214<=x215))*x216);

	if (t44 != 1605583) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x218 = INT8_MAX;
	uint16_t x219 = 69U;
	volatile int32_t x220 = INT32_MIN;
	int64_t t45 = 147949723705066LL;

	t45 = ((x217-(x218<=x219))*x220);

	if (t45 != 2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MAX;
	static uint32_t x224 = 0U;
	volatile int64_t t46 = 4095LL;

	t46 = ((x221-(x222<=x223))*x224);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = 7927U;
	static uint16_t x226 = 215U;
	int32_t x227 = 76;
	static uint16_t x228 = UINT16_MAX;
	static int32_t t47 = 13013086;

	t47 = ((x225-(x226<=x227))*x228);

	if (t47 != 519495945) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = INT8_MIN;
	volatile int32_t x230 = INT32_MIN;
	volatile int8_t x231 = 55;
	volatile uint8_t x232 = UINT8_MAX;
	int32_t t48 = -125;

	t48 = ((x229-(x230<=x231))*x232);

	if (t48 != -32895) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = 0;
	int64_t x234 = -74958025LL;

	t49 = ((x233-(x234<=x235))*x236);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x237 = 87U;
	uint32_t x238 = 1U;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = 348360LLU;
	uint64_t t50 = 489001651013466LLU;

	t50 = ((x237-(x238<=x239))*x240);

	if (t50 != 30307320LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = -1;
	uint16_t x242 = 116U;
	volatile int32_t t51 = 8143;

	t51 = ((x241-(x242<=x243))*x244);

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x249 = INT16_MIN;
	int64_t x250 = 52LL;
	uint32_t x251 = UINT32_MAX;
	int32_t t52 = -89340;

	t52 = ((x249-(x250<=x251))*x252);

	if (t52 != 220305987) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x253 = 1487LLU;
	uint16_t x255 = 1021U;
	volatile uint8_t x256 = 36U;
	uint64_t t53 = 2219428654296373683LLU;

	t53 = ((x253-(x254<=x255))*x256);

	if (t53 != 53496LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = INT8_MIN;
	static int32_t x258 = 2668;
	int32_t x259 = INT32_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t54 = 63372245;

	t54 = ((x257-(x258<=x259))*x260);

	if (t54 != 16384) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x261 = 6137U;
	int64_t x262 = INT64_MAX;
	volatile int8_t x263 = 9;
	int32_t x264 = -1;
	static volatile uint32_t t55 = 779726387U;

	t55 = ((x261-(x262<=x263))*x264);

	if (t55 != 4294961159U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = -9598;
	int32_t x266 = 123;
	static int32_t x268 = -1;

	t56 = ((x265-(x266<=x267))*x268);

	if (t56 != 9599) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x269 = UINT8_MAX;
	volatile uint8_t x270 = 1U;
	int8_t x271 = INT8_MIN;
	volatile int8_t x272 = -1;
	volatile int32_t t57 = -49888077;

	t57 = ((x269-(x270<=x271))*x272);

	if (t57 != -255) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x273 = UINT64_MAX;
	static int16_t x275 = INT16_MIN;
	volatile int32_t x276 = INT32_MAX;
	static uint64_t t58 = 913834900LLU;

	t58 = ((x273-(x274<=x275))*x276);

	if (t58 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x277 = 5971881U;
	volatile uint16_t x279 = 1752U;
	static uint8_t x280 = 35U;
	uint32_t t59 = 739U;

	t59 = ((x277-(x278<=x279))*x280);

	if (t59 != 209015800U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x281 = -1;
	int64_t x282 = INT64_MAX;
	int64_t x283 = -1240389LL;
	static uint64_t x284 = UINT64_MAX;

	t60 = ((x281-(x282<=x283))*x284);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x285 = INT8_MIN;
	static int32_t x286 = INT32_MIN;
	static int64_t x287 = -1LL;
	int16_t x288 = -2;

	t61 = ((x285-(x286<=x287))*x288);

	if (t61 != 258) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x290 = 346;
	uint32_t x291 = 51264U;
	volatile uint16_t x292 = UINT16_MAX;
	volatile int32_t t62 = -5;

	t62 = ((x289-(x290<=x291))*x292);

	if (t62 != 16645890) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = INT8_MIN;
	volatile int16_t x294 = -2981;
	static int64_t x295 = -1LL;
	volatile int32_t t63 = 16591;

	t63 = ((x293-(x294<=x295))*x296);

	if (t63 != -770130) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x301 = 1387U;
	int64_t x302 = INT64_MIN;
	uint64_t x303 = 3LLU;
	int32_t x304 = -1;
	volatile int32_t t64 = -836129214;

	t64 = ((x301-(x302<=x303))*x304);

	if (t64 != -1387) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x309 = -1;
	int16_t x310 = INT16_MAX;
	int8_t x311 = 5;
	uint32_t x312 = UINT32_MAX;
	uint32_t t65 = 11U;

	t65 = ((x309-(x310<=x311))*x312);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x313 = -9;
	static int32_t x316 = -7;
	int32_t t66 = 861095753;

	t66 = ((x313-(x314<=x315))*x316);

	if (t66 != 70) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x320 = INT8_MIN;

	t67 = ((x317-(x318<=x319))*x320);

	if (t67 != -768) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x321 = 0LL;
	static uint64_t x323 = 17535LLU;
	static int8_t x324 = INT8_MAX;

	t68 = ((x321-(x322<=x323))*x324);

	if (t68 != -127LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = -1541067LL;
	int64_t x326 = -1LL;
	int32_t x328 = -1;
	static int64_t t69 = -75893701120265112LL;

	t69 = ((x325-(x326<=x327))*x328);

	if (t69 != 1541067LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x333 = INT16_MIN;
	int32_t x334 = -99;
	int8_t x335 = -1;
	uint8_t x336 = 1U;
	volatile int32_t t70 = 6;

	t70 = ((x333-(x334<=x335))*x336);

	if (t70 != -32769) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x337 = UINT64_MAX;
	static int32_t x338 = INT32_MIN;
	volatile int64_t x340 = INT64_MIN;
	volatile uint64_t t71 = 7660519323653908LLU;

	t71 = ((x337-(x338<=x339))*x340);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = -1LL;
	int32_t x342 = INT32_MIN;
	uint32_t x343 = 1076140U;
	uint64_t x344 = 5954974467337LLU;
	static uint64_t t72 = 43LLU;

	t72 = ((x341-(x342<=x343))*x344);

	if (t72 != 18446738118735084279LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x345 = INT8_MAX;
	static volatile int16_t x347 = INT16_MAX;
	int8_t x348 = INT8_MAX;
	int32_t t73 = -24;

	t73 = ((x345-(x346<=x347))*x348);

	if (t73 != 16002) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x349 = 3U;
	int64_t x351 = INT64_MIN;
	int8_t x352 = 2;
	static int32_t t74 = 147362;

	t74 = ((x349-(x350<=x351))*x352);

	if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x354 = INT64_MIN;
	int16_t x355 = 1000;
	volatile int32_t x356 = -2;
	volatile int32_t t75 = 10214;

	t75 = ((x353-(x354<=x355))*x356);

	if (t75 != -10) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x357 = 1U;
	static int32_t x358 = INT32_MAX;
	uint64_t x359 = 238858639LLU;
	static int32_t t76 = 2;

	t76 = ((x357-(x358<=x359))*x360);

	if (t76 != 360) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x361 = 236U;
	int16_t x362 = INT16_MIN;
	int32_t x364 = 2309;
	uint32_t t77 = 11278837U;

	t77 = ((x361-(x362<=x363))*x364);

	if (t77 != 542615U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x369 = 33057794002402LLU;
	int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MAX;
	int64_t x372 = -33199315304LL;
	uint64_t t78 = 48459LLU;

	t78 = ((x369-(x370<=x371))*x372);

	if (t78 != 11359069032550900632LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x373 = -1LL;
	volatile uint32_t x374 = UINT32_MAX;
	uint64_t x375 = UINT64_MAX;
	uint16_t x376 = 228U;
	volatile int64_t t79 = 19LL;

	t79 = ((x373-(x374<=x375))*x376);

	if (t79 != -456LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x377 = 1;
	static uint64_t x378 = 468435196LLU;
	int16_t x379 = INT16_MAX;
	int32_t t80 = -10357;

	t80 = ((x377-(x378<=x379))*x380);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = INT16_MIN;
	uint8_t x382 = 79U;
	volatile int16_t x383 = INT16_MIN;
	uint8_t x384 = 11U;
	int32_t t81 = -2069637;

	t81 = ((x381-(x382<=x383))*x384);

	if (t81 != -360448) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = INT16_MAX;
	uint64_t x390 = 1731571048878292LLU;
	volatile int8_t x391 = 1;
	volatile int16_t x392 = INT16_MIN;
	int32_t t82 = 73232412;

	t82 = ((x389-(x390<=x391))*x392);

	if (t82 != -1073709056) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x393 = UINT32_MAX;
	static int64_t x394 = 2LL;
	int8_t x396 = INT8_MIN;
	uint32_t t83 = 5U;

	t83 = ((x393-(x394<=x395))*x396);

	if (t83 != 256U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x397 = 54U;
	int16_t x398 = -1;
	int8_t x399 = -1;
	static volatile uint16_t x400 = UINT16_MAX;

	t84 = ((x397-(x398<=x399))*x400);

	if (t84 != 3473355) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x401 = INT8_MIN;
	int8_t x403 = -1;

	t85 = ((x401-(x402<=x403))*x404);

	if (t85 != 1553344128U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x406 = INT32_MIN;
	int64_t x407 = INT64_MIN;
	uint64_t x408 = 55968848LLU;
	static uint64_t t86 = 35177818LLU;

	t86 = ((x405-(x406<=x407))*x408);

	if (t86 != 18446744073373738528LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x410 = -1LL;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t87 = -132454;

	t87 = ((x409-(x410<=x411))*x412);

	if (t87 != 16645890) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = 0;
	int64_t x414 = INT64_MIN;
	int32_t x415 = 88;
	int16_t x416 = -1;
	int32_t t88 = -2696737;

	t88 = ((x413-(x414<=x415))*x416);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x421 = -3LL;
	int64_t x422 = INT64_MAX;
	volatile uint64_t x423 = 414LLU;
	int8_t x424 = INT8_MIN;
	static int64_t t89 = -2812509093903277028LL;

	t89 = ((x421-(x422<=x423))*x424);

	if (t89 != 384LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x426 = -1;
	static int16_t x427 = 0;
	int64_t x428 = -1LL;
	volatile uint64_t t90 = 3412575857054357464LLU;

	t90 = ((x425-(x426<=x427))*x428);

	if (t90 != 18446744073709435889LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x429 = 1654U;
	static uint64_t x430 = 234473LLU;
	int32_t x431 = INT32_MAX;
	int8_t x432 = -1;
	int32_t t91 = -6494856;

	t91 = ((x429-(x430<=x431))*x432);

	if (t91 != -1653) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x437 = UINT8_MAX;
	static volatile uint64_t x440 = UINT64_MAX;
	uint64_t t92 = 1087066045034LLU;

	t92 = ((x437-(x438<=x439))*x440);

	if (t92 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x442 = 3206270LL;
	int64_t x443 = INT64_MIN;
	uint8_t x444 = 19U;
	static int32_t t93 = -928958312;

	t93 = ((x441-(x442<=x443))*x444);

	if (t93 != -19) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = INT8_MIN;
	uint8_t x451 = 1U;
	uint16_t x452 = UINT16_MAX;
	int32_t t94 = -606652293;

	t94 = ((x449-(x450<=x451))*x452);

	if (t94 != -8388480) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x453 = INT8_MIN;
	uint64_t x454 = UINT64_MAX;
	int8_t x455 = INT8_MIN;
	volatile int64_t t95 = 55LL;

	t95 = ((x453-(x454<=x455))*x456);

	if (t95 != 128LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x457 = -1;
	uint32_t x458 = UINT32_MAX;
	volatile int64_t x459 = -1LL;
	uint64_t x460 = 1977LLU;
	uint64_t t96 = 162532085146948LLU;

	t96 = ((x457-(x458<=x459))*x460);

	if (t96 != 18446744073709549639LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x461 = -1LL;
	uint64_t x462 = UINT64_MAX;
	int8_t x463 = -1;
	static volatile int64_t t97 = -15497LL;

	t97 = ((x461-(x462<=x463))*x464);

	if (t97 != -8589934590LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x470 = INT8_MIN;
	volatile int32_t x471 = -1;
	int16_t x472 = 12;
	volatile uint32_t t98 = 0U;

	t98 = ((x469-(x470<=x471))*x472);

	if (t98 != 19732848U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x473 = -2038691;
	int8_t x475 = -1;
	int16_t x476 = -1;
	static volatile int32_t t99 = 679837968;

	t99 = ((x473-(x474<=x475))*x476);

	if (t99 != 2038692) { NG(); } else { ; }
	
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

