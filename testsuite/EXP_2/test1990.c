#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x15 = INT32_MIN;
uint16_t x17 = 0U;
uint16_t x18 = UINT16_MAX;
int32_t t3 = 107619601;
volatile int32_t x24 = -1;
static int32_t x26 = 262478923;
int32_t x28 = INT32_MAX;
volatile uint64_t t5 = 35487709367797LLU;
int8_t x32 = 0;
static int32_t x35 = 169088867;
static int8_t x44 = INT8_MAX;
static int16_t x45 = INT16_MIN;
uint16_t x52 = 15U;
int64_t t11 = -124579631LL;
static uint64_t x55 = 11289LLU;
int64_t x56 = -1LL;
int8_t x57 = INT8_MIN;
int8_t x61 = INT8_MIN;
uint8_t x63 = 9U;
int16_t x68 = -1;
int16_t x78 = -1;
int32_t x80 = 5772;
uint16_t x81 = 14U;
int32_t x103 = -1;
int32_t x106 = INT32_MAX;
uint16_t x107 = 0U;
volatile uint64_t x111 = 404634193LLU;
int16_t x114 = INT16_MAX;
int64_t x125 = INT64_MIN;
int8_t x126 = INT8_MIN;
uint64_t x127 = UINT64_MAX;
int32_t x138 = INT32_MAX;
volatile uint8_t x141 = UINT8_MAX;
uint32_t x143 = 268381916U;
volatile uint32_t t31 = 15573891U;
int64_t x145 = -1LL;
static int8_t x162 = INT8_MIN;
volatile uint64_t t36 = 35LLU;
static volatile int16_t x177 = -768;
int16_t x178 = INT16_MAX;
volatile uint8_t x188 = 115U;
int8_t x190 = INT8_MIN;
uint64_t x191 = 1273LLU;
volatile uint64_t x192 = 93848742LLU;
volatile int8_t x213 = -9;
int16_t x214 = 1;
uint32_t x215 = 1U;
static volatile uint16_t x218 = 15U;
uint32_t t44 = 0U;
int32_t x229 = 820427747;
static volatile uint32_t x231 = 3431U;
static volatile uint64_t t47 = 9234192525394LLU;
static int64_t t49 = -656LL;
uint8_t x241 = UINT8_MAX;
volatile int32_t t50 = 27;
volatile int16_t x248 = -7;
int32_t t51 = 1;
int8_t x249 = -1;
uint32_t x250 = UINT32_MAX;
uint8_t x251 = 31U;
static volatile uint64_t t54 = 779189639431326LLU;
uint64_t x270 = 102LLU;
static int64_t x276 = 314LL;
uint8_t x287 = UINT8_MAX;
static int64_t x292 = INT64_MAX;
int16_t x296 = INT16_MIN;
uint16_t x306 = 2621U;
int32_t x307 = 48351;
static uint16_t x309 = UINT16_MAX;
int16_t x321 = -2;
static volatile int16_t x326 = -1;
uint16_t x328 = UINT16_MAX;
static volatile uint32_t t70 = 208U;
volatile int16_t x339 = INT16_MAX;
static int8_t x345 = -1;
static uint64_t x352 = 763572274195321LLU;
uint64_t x355 = UINT64_MAX;
volatile uint64_t x359 = 15251133999LLU;
static uint8_t x362 = UINT8_MAX;
int64_t x368 = INT64_MIN;
volatile uint32_t x371 = 1U;
static uint16_t x374 = 6U;
int32_t x375 = INT32_MAX;
int8_t x381 = 2;
int8_t x383 = INT8_MAX;
int64_t x387 = INT64_MIN;
uint8_t x389 = UINT8_MAX;
static int32_t t85 = -2377;
volatile uint32_t x394 = 139U;
volatile uint32_t t86 = 5U;
int16_t x408 = INT16_MIN;
uint64_t t89 = 399578024933LLU;
int16_t x415 = INT16_MIN;
int16_t x416 = INT16_MAX;
static uint64_t x418 = UINT64_MAX;
static int16_t x420 = INT16_MIN;
volatile uint64_t t94 = 2427593144549LLU;
static uint16_t x433 = UINT16_MAX;
volatile uint16_t x434 = UINT16_MAX;
uint8_t x438 = 3U;
uint8_t x439 = 32U;
int8_t x440 = -1;
volatile int32_t t96 = -51598044;
int32_t x441 = -190834469;
volatile uint64_t t97 = 1685757LLU;
volatile int32_t x447 = INT32_MAX;
volatile int32_t t98 = 58693;
int64_t x453 = INT64_MAX;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	volatile int64_t x2 = 43129LL;
	int8_t x3 = -1;
	uint8_t x4 = UINT8_MAX;
	volatile uint64_t t0 = 848269947039081LLU;

	t0 = ((x1&(x2|x3))+x4);

	if (t0 != 254LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 24U;
	volatile uint32_t x6 = 37670563U;
	int16_t x7 = INT16_MIN;
	volatile uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = ((x5&(x6|x7))+x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MIN;
	int8_t x16 = INT8_MAX;
	int64_t t2 = 0LL;

	t2 = ((x13&(x14|x15))+x16);

	if (t2 != 127LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x19 = -1;
	static int16_t x20 = -1;

	t3 = ((x17&(x18|x19))+x20);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MIN;
	int8_t x23 = -1;
	volatile int32_t t4 = 734936876;

	t4 = ((x21&(x22|x23))+x24);

	if (t4 != -129) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 19390U;
	static uint64_t x27 = 479322329LLU;

	t5 = ((x25&(x26|x27))+x28);

	if (t5 != 2147502233LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MAX;
	int16_t x31 = -6;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = ((x29&(x30|x31))+x32);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	int16_t x34 = 959;
	static volatile int64_t x36 = 4828LL;
	int64_t t7 = 39844781LL;

	t7 = ((x33&(x34|x35))+x36);

	if (t7 != 169093851LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 2U;
	volatile int16_t x38 = INT16_MIN;
	uint64_t x39 = UINT64_MAX;
	static int8_t x40 = INT8_MIN;
	uint64_t t8 = 3986871LLU;

	t8 = ((x37&(x38|x39))+x40);

	if (t8 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 450U;
	volatile int16_t x42 = -1;
	static uint64_t x43 = UINT64_MAX;
	static uint64_t t9 = 27175555046LLU;

	t9 = ((x41&(x42|x43))+x44);

	if (t9 != 577LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x46 = -6;
	volatile int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MAX;
	int32_t t10 = -491530670;

	t10 = ((x45&(x46|x47))+x48);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 252316U;
	volatile int64_t x50 = INT64_MAX;
	static int64_t x51 = INT64_MIN;

	t11 = ((x49&(x50|x51))+x52);

	if (t11 != 252331LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 6535LLU;
	int32_t x54 = -48352;
	uint64_t t12 = 292201395789384658LLU;

	t12 = ((x53&(x54|x55))+x56);

	if (t12 != 2304LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = -1;
	int32_t x59 = INT32_MIN;
	static int16_t x60 = -104;
	static volatile int32_t t13 = 2427769;

	t13 = ((x57&(x58|x59))+x60);

	if (t13 != -232) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = -13LL;
	int16_t x64 = 191;
	volatile int64_t t14 = -134825580LL;

	t14 = ((x61&(x62|x63))+x64);

	if (t14 != 63LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	int64_t x67 = -1LL;
	int64_t t15 = 740654460665775887LL;

	t15 = ((x65&(x66|x67))+x68);

	if (t15 != -129LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	volatile int64_t x70 = INT64_MAX;
	uint8_t x71 = 3U;
	int8_t x72 = 2;
	int64_t t16 = 6514LL;

	t16 = ((x69&(x70|x71))+x72);

	if (t16 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -58089823;
	int16_t x74 = INT16_MIN;
	volatile uint64_t x75 = 542726049425081LLU;
	int32_t x76 = INT32_MAX;
	volatile uint64_t t17 = 186037350604518428LLU;

	t17 = ((x73&(x74|x75))+x76);

	if (t17 != 2089387680LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MAX;
	uint64_t x79 = 3907974269046599LLU;
	volatile uint64_t t18 = 3578390465649522718LLU;

	t18 = ((x77&(x78|x79))+x80);

	if (t18 != 38539LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = -1;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = 5U;
	static int64_t t19 = -1598LL;

	t19 = ((x81&(x82|x83))+x84);

	if (t19 != 19LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	int8_t x86 = 10;
	uint8_t x87 = 1U;
	int16_t x88 = INT16_MIN;
	int32_t t20 = -210152;

	t20 = ((x85&(x86|x87))+x88);

	if (t20 != -32757) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = UINT64_MAX;
	static int64_t x94 = -1364690652108LL;
	volatile uint64_t x95 = 40540LLU;
	int16_t x96 = INT16_MIN;
	static volatile uint64_t t21 = 9896750405368LLU;

	t21 = ((x93&(x94|x95))+x96);

	if (t21 != 18446742709018902140LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	int16_t x100 = -1;
	static volatile uint32_t t22 = 156296082U;

	t22 = ((x97&(x98|x99))+x100);

	if (t22 != 4294967167U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	int32_t x102 = INT32_MAX;
	uint8_t x104 = 9U;
	volatile int32_t t23 = -53868040;

	t23 = ((x101&(x102|x103))+x104);

	if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	volatile int32_t x108 = -1;
	int32_t t24 = -1;

	t24 = ((x105&(x106|x107))+x108);

	if (t24 != 2147483519) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 30U;
	volatile int32_t x110 = INT32_MIN;
	uint16_t x112 = 10U;
	static uint64_t t25 = 122127736LLU;

	t25 = ((x109&(x110|x111))+x112);

	if (t25 != 26LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = UINT16_MAX;
	int8_t x115 = -1;
	volatile uint8_t x116 = 3U;
	volatile int32_t t26 = -1914805;

	t26 = ((x113&(x114|x115))+x116);

	if (t26 != 65538) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = 1;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = INT16_MIN;
	static uint64_t t27 = 3069LLU;

	t27 = ((x121&(x122|x123))+x124);

	if (t27 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x128 = INT8_MAX;
	static volatile uint64_t t28 = 796936LLU;

	t28 = ((x125&(x126|x127))+x128);

	if (t28 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x133 = -1LL;
	volatile int8_t x134 = 1;
	int16_t x135 = -5283;
	int64_t x136 = -254713308LL;
	volatile int64_t t29 = -4LL;

	t29 = ((x133&(x134|x135))+x136);

	if (t29 != -254718591LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = -1LL;
	int16_t x139 = -1;
	volatile int16_t x140 = INT16_MAX;
	int64_t t30 = -357184539LL;

	t30 = ((x137&(x138|x139))+x140);

	if (t30 != 32766LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x142 = UINT16_MAX;
	volatile int32_t x144 = -1154;

	t31 = ((x141&(x142|x143))+x144);

	if (t31 != 4294966397U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x146 = -1;
	int16_t x147 = -1;
	static uint32_t x148 = 4683332U;
	int64_t t32 = -22408161298174861LL;

	t32 = ((x145&(x146|x147))+x148);

	if (t32 != 4683331LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MIN;
	int16_t x151 = -1;
	int64_t x152 = -1LL;
	int64_t t33 = -47LL;

	t33 = ((x149&(x150|x151))+x152);

	if (t33 != 4294967294LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x153 = 6303835611994323861LLU;
	static uint16_t x154 = 4U;
	static volatile int64_t x155 = INT64_MAX;
	int8_t x156 = -1;
	uint64_t t34 = 985773552119716LLU;

	t34 = ((x153&(x154|x155))+x156);

	if (t34 != 6303835611994323860LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MAX;
	int64_t x163 = INT64_MIN;
	uint8_t x164 = 23U;
	volatile int64_t t35 = -89LL;

	t35 = ((x161&(x162|x163))+x164);

	if (t35 != 2147483543LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -7;
	uint64_t x166 = UINT64_MAX;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = -8;

	t36 = ((x165&(x166|x167))+x168);

	if (t36 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = -1;
	volatile int16_t x174 = INT16_MIN;
	volatile uint16_t x175 = 461U;
	static int16_t x176 = 182;
	volatile int32_t t37 = 62;

	t37 = ((x173&(x174|x175))+x176);

	if (t37 != -32125) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x179 = -1;
	int64_t x180 = -1LL;
	int64_t t38 = 100237LL;

	t38 = ((x177&(x178|x179))+x180);

	if (t38 != -769LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = 0;
	int8_t x182 = -1;
	int32_t x183 = -880;
	volatile int32_t x184 = INT32_MIN;
	int32_t t39 = INT32_MIN;

	t39 = ((x181&(x182|x183))+x184);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x185 = 53U;
	uint8_t x186 = 28U;
	volatile int8_t x187 = 54;
	int32_t t40 = -4854;

	t40 = ((x185&(x186|x187))+x188);

	if (t40 != 167) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = UINT16_MAX;
	uint64_t t41 = 2213LLU;

	t41 = ((x189&(x190|x191))+x192);

	if (t41 != 93914271LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x209 = 222083LLU;
	uint64_t x210 = 1LLU;
	int64_t x211 = INT64_MIN;
	volatile int64_t x212 = INT64_MIN;
	uint64_t t42 = 38978821949566379LLU;

	t42 = ((x209&(x210|x211))+x212);

	if (t42 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x216 = UINT16_MAX;
	static volatile uint32_t t43 = 388178U;

	t43 = ((x213&(x214|x215))+x216);

	if (t43 != 65536U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = INT32_MAX;
	uint32_t x219 = 8U;
	int16_t x220 = INT16_MAX;

	t44 = ((x217&(x218|x219))+x220);

	if (t44 != 32782U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x221 = -6196302116400000LL;
	uint16_t x222 = 4786U;
	int64_t x223 = -1LL;
	int16_t x224 = -7415;
	int64_t t45 = -25395528LL;

	t45 = ((x221&(x222|x223))+x224);

	if (t45 != -6196302116407415LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = INT8_MAX;
	int16_t x226 = INT16_MIN;
	static uint32_t x227 = UINT32_MAX;
	int16_t x228 = -2739;
	uint32_t t46 = 46244U;

	t46 = ((x225&(x226|x227))+x228);

	if (t46 != 4294964684U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x230 = 2U;
	uint64_t x232 = 71LLU;

	t47 = ((x229&(x230|x231))+x232);

	if (t47 != 2474LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x233 = -1;
	uint16_t x234 = 0U;
	uint16_t x235 = 1286U;
	volatile int8_t x236 = INT8_MIN;
	static volatile int32_t t48 = -199929;

	t48 = ((x233&(x234|x235))+x236);

	if (t48 != 1158) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x237 = 82U;
	int64_t x238 = -1119668475545844603LL;
	int64_t x239 = INT64_MIN;
	static uint8_t x240 = 42U;

	t49 = ((x237&(x238|x239))+x240);

	if (t49 != 42LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x242 = INT16_MAX;
	int8_t x243 = INT8_MIN;
	volatile int32_t x244 = INT32_MIN;

	t50 = ((x241&(x242|x243))+x244);

	if (t50 != -2147483393) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x245 = 15422U;
	static int32_t x246 = INT32_MIN;
	int16_t x247 = -51;

	t51 = ((x245&(x246|x247))+x248);

	if (t51 != 15365) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x252 = 1;
	uint32_t t52 = 2U;

	t52 = ((x249&(x250|x251))+x252);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x257 = INT8_MAX;
	uint64_t x258 = 27345LLU;
	int8_t x259 = -1;
	int64_t x260 = INT64_MIN;
	volatile uint64_t t53 = 77302162669742LLU;

	t53 = ((x257&(x258|x259))+x260);

	if (t53 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x261 = 82275467LLU;
	int16_t x262 = -319;
	uint64_t x263 = 142099907482979634LLU;
	volatile uint16_t x264 = 7U;

	t54 = ((x261&(x262|x263))+x264);

	if (t54 != 82275466LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = -1;
	int16_t x267 = -1;
	int16_t x268 = INT16_MIN;
	static volatile int32_t t55 = -1350;

	t55 = ((x265&(x266|x267))+x268);

	if (t55 != -65536) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = INT16_MAX;
	uint16_t x271 = 1U;
	uint64_t x272 = 79093933137LLU;
	volatile uint64_t t56 = 9001LLU;

	t56 = ((x269&(x270|x271))+x272);

	if (t56 != 79093933240LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 567824490U;
	int16_t x275 = 468;
	int64_t t57 = -2386481011LL;

	t57 = ((x273&(x274|x275))+x276);

	if (t57 != 314LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x281 = INT64_MAX;
	static volatile int32_t x282 = -36307;
	uint32_t x283 = 513749423U;
	int64_t x284 = -321362580517010201LL;
	int64_t t58 = -12747717LL;

	t58 = ((x281&(x282|x283))+x284);

	if (t58 != -321362576222078826LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x285 = INT32_MAX;
	static volatile int64_t x286 = -558905757884434LL;
	uint32_t x288 = UINT32_MAX;
	volatile int64_t t59 = -18669735028962LL;

	t59 = ((x285&(x286|x287))+x288);

	if (t59 != 4778795006LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x289 = INT32_MIN;
	volatile uint32_t x290 = 2483899U;
	uint16_t x291 = 5220U;
	int64_t t60 = INT64_MAX;

	t60 = ((x289&(x290|x291))+x292);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = -1;
	static int32_t x295 = 2245;
	uint64_t t61 = 211LLU;

	t61 = ((x293&(x294|x295))+x296);

	if (t61 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x298 = -180722;
	uint16_t x299 = UINT16_MAX;
	uint32_t x300 = 13U;
	static volatile uint32_t t62 = 62048U;

	t62 = ((x297&(x298|x299))+x300);

	if (t62 != 4294836109U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x301 = 19U;
	int8_t x302 = 34;
	int8_t x303 = 1;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t63 = 7018;

	t63 = ((x301&(x302|x303))+x304);

	if (t63 != -125) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x305 = 0LLU;
	volatile int64_t x308 = INT64_MAX;
	volatile uint64_t t64 = 901695585659439488LLU;

	t64 = ((x305&(x306|x307))+x308);

	if (t64 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x310 = UINT16_MAX;
	volatile uint16_t x311 = 1U;
	static int16_t x312 = INT16_MAX;
	volatile int32_t t65 = 132599207;

	t65 = ((x309&(x310|x311))+x312);

	if (t65 != 98302) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x313 = INT64_MIN;
	static uint32_t x314 = 56160618U;
	uint64_t x315 = 2152493856546300593LLU;
	uint16_t x316 = UINT16_MAX;
	static uint64_t t66 = 109252194218937LLU;

	t66 = ((x313&(x314|x315))+x316);

	if (t66 != 65535LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x317 = 7;
	static int8_t x318 = -1;
	static volatile uint32_t x319 = 66896U;
	int64_t x320 = INT64_MIN;
	static int64_t t67 = 27108LL;

	t67 = ((x317&(x318|x319))+x320);

	if (t67 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x322 = 856440859U;
	uint32_t x323 = 14581472U;
	int8_t x324 = -9;
	uint32_t t68 = 3573310U;

	t68 = ((x321&(x322|x323))+x324);

	if (t68 != 870219505U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x325 = 3754975U;
	uint16_t x327 = 26805U;
	uint32_t t69 = 1151648699U;

	t69 = ((x325&(x326|x327))+x328);

	if (t69 != 3820510U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x329 = 1U;
	int8_t x330 = 37;
	volatile int8_t x331 = -1;
	static uint32_t x332 = UINT32_MAX;

	t70 = ((x329&(x330|x331))+x332);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x333 = 2U;
	static volatile int16_t x334 = INT16_MIN;
	uint8_t x335 = UINT8_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t71 = 2621408;

	t71 = ((x333&(x334|x335))+x336);

	if (t71 != -2147483646) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x337 = 15U;
	static volatile int64_t x338 = INT64_MIN;
	volatile uint64_t x340 = 6783718850953LLU;
	volatile uint64_t t72 = 3567583282731695LLU;

	t72 = ((x337&(x338|x339))+x340);

	if (t72 != 6783718850968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = -1;
	int32_t x342 = 433941492;
	uint16_t x343 = 53U;
	int8_t x344 = -7;
	volatile int32_t t73 = 323125009;

	t73 = ((x341&(x342|x343))+x344);

	if (t73 != 433941486) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x346 = 195;
	uint32_t x347 = 237U;
	int64_t x348 = INT64_MIN;
	int64_t t74 = -4LL;

	t74 = ((x345&(x346|x347))+x348);

	if (t74 != -9223372036854775569LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = UINT64_MAX;
	int16_t x351 = -974;
	uint64_t t75 = 200106612353753536LLU;

	t75 = ((x349&(x350|x351))+x352);

	if (t75 != 9224135609128971129LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x353 = 4U;
	static volatile int16_t x354 = -1;
	static int32_t x356 = INT32_MIN;
	volatile uint64_t t76 = 31LLU;

	t76 = ((x353&(x354|x355))+x356);

	if (t76 != 18446744071562067972LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x357 = 32760810LL;
	int32_t x358 = INT32_MIN;
	int8_t x360 = 1;
	volatile uint64_t t77 = 16760202428689LLU;

	t77 = ((x357&(x358|x359))+x360);

	if (t77 != 16892459LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MIN;
	int16_t x363 = INT16_MAX;
	uint8_t x364 = 4U;
	static int32_t t78 = -3815822;

	t78 = ((x361&(x362|x363))+x364);

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x365 = -17;
	volatile uint32_t x366 = UINT32_MAX;
	static uint32_t x367 = UINT32_MAX;
	volatile int64_t t79 = 10510249799849LL;

	t79 = ((x365&(x366|x367))+x368);

	if (t79 != -9223372032559808529LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = INT8_MAX;
	static int64_t x370 = -2377045385800LL;
	int64_t x372 = INT64_MIN;
	static int64_t t80 = 20LL;

	t80 = ((x369&(x370|x371))+x372);

	if (t80 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = 2456;
	static int16_t x376 = INT16_MAX;
	static int32_t t81 = 260390;

	t81 = ((x373&(x374|x375))+x376);

	if (t81 != 35223) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x377 = UINT16_MAX;
	int8_t x378 = -3;
	uint8_t x379 = 34U;
	uint8_t x380 = UINT8_MAX;
	static int32_t t82 = -887778282;

	t82 = ((x377&(x378|x379))+x380);

	if (t82 != 65790) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x382 = INT8_MIN;
	uint64_t x384 = 67782387053393LLU;
	static volatile uint64_t t83 = 17538817LLU;

	t83 = ((x381&(x382|x383))+x384);

	if (t83 != 67782387053395LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x385 = -1;
	static int16_t x386 = 2;
	int16_t x388 = 1500;
	int64_t t84 = 408636321853LL;

	t84 = ((x385&(x386|x387))+x388);

	if (t84 != -9223372036854774306LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x390 = 0U;
	uint16_t x391 = 49U;
	uint16_t x392 = UINT16_MAX;

	t85 = ((x389&(x390|x391))+x392);

	if (t85 != 65584) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = 41;
	int32_t x395 = INT32_MAX;
	static uint8_t x396 = 1U;

	t86 = ((x393&(x394|x395))+x396);

	if (t86 != 42U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = -5;
	volatile uint16_t x398 = 1686U;
	volatile uint64_t x399 = UINT64_MAX;
	uint16_t x400 = 405U;
	volatile uint64_t t87 = 292LLU;

	t87 = ((x397&(x398|x399))+x400);

	if (t87 != 400LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = 137U;
	volatile int16_t x402 = 955;
	uint8_t x403 = 0U;
	int16_t x404 = -1;
	static int32_t t88 = 508843664;

	t88 = ((x401&(x402|x403))+x404);

	if (t88 != 136) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x405 = INT16_MIN;
	volatile uint16_t x406 = 81U;
	uint64_t x407 = 1513350628LLU;

	t89 = ((x405&(x406|x407))+x408);

	if (t89 != 1513291776LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = INT16_MIN;
	static volatile uint64_t x410 = UINT64_MAX;
	int16_t x411 = -233;
	static int16_t x412 = -1;
	volatile uint64_t t90 = 176LLU;

	t90 = ((x409&(x410|x411))+x412);

	if (t90 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = INT64_MIN;
	static int32_t x414 = INT32_MAX;
	static int64_t t91 = -39LL;

	t91 = ((x413&(x414|x415))+x416);

	if (t91 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = 12616886LL;
	int16_t x419 = -1;
	uint64_t t92 = 677836386352921240LLU;

	t92 = ((x417&(x418|x419))+x420);

	if (t92 != 12584118LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x421 = INT32_MAX;
	int8_t x422 = -4;
	uint32_t x423 = UINT32_MAX;
	int16_t x424 = INT16_MAX;
	uint32_t t93 = 217998540U;

	t93 = ((x421&(x422|x423))+x424);

	if (t93 != 2147516414U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x429 = UINT8_MAX;
	uint8_t x430 = 29U;
	static uint64_t x431 = 429674LLU;
	int64_t x432 = INT64_MIN;

	t94 = ((x429&(x430|x431))+x432);

	if (t94 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x435 = INT64_MIN;
	static volatile uint32_t x436 = 6082939U;
	volatile int64_t t95 = -46795567028472LL;

	t95 = ((x433&(x434|x435))+x436);

	if (t95 != 6148474LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x437 = 2U;

	t96 = ((x437&(x438|x439))+x440);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x442 = UINT64_MAX;
	volatile uint32_t x443 = 77U;
	static uint32_t x444 = 9556986U;

	t97 = ((x441&(x442|x443))+x444);

	if (t97 != 18446744073528274133LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = -1;
	static uint16_t x446 = 7U;
	static int8_t x448 = INT8_MIN;

	t98 = ((x445&(x446|x447))+x448);

	if (t98 != 2147483519) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x454 = UINT16_MAX;
	static int8_t x455 = -45;
	int64_t x456 = INT64_MIN;
	volatile int64_t t99 = -159LL;

	t99 = ((x453&(x454|x455))+x456);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

