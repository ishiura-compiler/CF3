#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MIN;
int8_t x15 = INT8_MIN;
static uint64_t t3 = 273622475005306LLU;
volatile uint16_t x24 = 684U;
int64_t t5 = 822928LL;
volatile int64_t x36 = -58430290LL;
uint64_t x40 = UINT64_MAX;
int32_t t9 = 101976;
static int16_t x46 = INT16_MIN;
volatile uint8_t x50 = 5U;
volatile int64_t x66 = -152512LL;
int16_t x68 = -14;
volatile uint64_t x72 = 85068LLU;
int64_t x78 = INT64_MAX;
uint64_t x90 = 280710892668951LLU;
int8_t x91 = -63;
int64_t x93 = INT64_MAX;
volatile uint64_t t19 = 1407580LLU;
uint16_t x99 = 426U;
uint32_t x100 = 14228U;
int8_t x101 = INT8_MIN;
static int16_t x102 = -1;
uint64_t x105 = UINT64_MAX;
int8_t x112 = -1;
volatile int32_t t23 = 10796;
int16_t x118 = INT16_MIN;
volatile uint64_t x121 = UINT64_MAX;
int16_t x128 = -1;
static uint32_t x138 = UINT32_MAX;
volatile uint8_t x143 = UINT8_MAX;
int32_t x144 = INT32_MAX;
volatile int64_t t29 = -61668198LL;
int16_t x159 = INT16_MAX;
static uint64_t t32 = 1LLU;
int16_t x168 = -1;
static volatile uint64_t t34 = 27263079090938489LLU;
uint8_t x169 = UINT8_MAX;
uint16_t x171 = 257U;
int8_t x172 = -7;
volatile int32_t x173 = -1;
volatile uint16_t x183 = UINT16_MAX;
int8_t x192 = INT8_MAX;
int8_t x195 = 33;
int64_t x196 = INT64_MIN;
int32_t x197 = INT32_MIN;
static volatile int8_t x198 = -3;
static uint16_t x200 = 3U;
static int32_t x201 = INT32_MIN;
uint8_t x205 = UINT8_MAX;
uint64_t x212 = UINT64_MAX;
int16_t x213 = -1;
volatile uint8_t x216 = UINT8_MAX;
static int64_t x222 = INT64_MIN;
static int32_t x223 = -1;
int64_t t46 = -6LL;
int64_t x231 = INT64_MIN;
static int8_t x233 = -1;
volatile int16_t x247 = 243;
uint16_t x249 = 207U;
int16_t x253 = -1;
volatile int64_t t55 = 15LL;
uint8_t x261 = 0U;
uint64_t x262 = 243001379LLU;
uint16_t x270 = 122U;
int32_t x285 = -866609;
static uint64_t t62 = 17883263LLU;
uint8_t x295 = 27U;
volatile int8_t x298 = INT8_MIN;
volatile int32_t t65 = -1070573;
volatile int32_t x302 = -1;
uint32_t x308 = 15U;
static int64_t t67 = 27LL;
int32_t x314 = 0;
static uint64_t x317 = 3092876LLU;
volatile int32_t x318 = INT32_MIN;
uint64_t x320 = UINT64_MAX;
int64_t x327 = INT64_MAX;
volatile uint64_t x331 = 4132LLU;
uint64_t t71 = 5331205711LLU;
uint64_t x337 = UINT64_MAX;
int64_t x348 = INT64_MIN;
uint64_t t75 = 235189700023201411LLU;
int64_t x353 = -226744286017286736LL;
int64_t x355 = 99528526403213431LL;
int64_t t78 = 22034LL;
static int32_t t79 = 71;
int8_t x373 = 4;
volatile int32_t x376 = -20270;
volatile int64_t t81 = 8680014849664392LL;
static int16_t x382 = INT16_MIN;
int32_t x386 = INT32_MIN;
volatile int64_t t84 = 17361829138645LL;
static uint32_t x394 = 2393011U;
int16_t x399 = INT16_MIN;
int64_t x408 = -1LL;
int64_t t88 = -2LL;
static uint8_t x410 = 12U;
static int8_t x414 = 6;
volatile int16_t x421 = -19;
int32_t x425 = INT32_MIN;
uint16_t x447 = 4401U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint64_t x2 = UINT64_MAX;
	uint32_t x3 = 197U;
	int32_t x4 = INT32_MAX;
	uint64_t t0 = 8650865LLU;

	t0 = ((x1-(x2|x3))^x4);

	if (t0 != 2147450879LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	uint64_t t1 = 407828514661LLU;

	t1 = ((x5-(x6|x7))^x8);

	if (t1 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 14500721853LL;
	int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MAX;
	static volatile int64_t t2 = 528LL;

	t2 = ((x9-(x10|x11))^x12);

	if (t2 != 14500721986LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 11;
	uint32_t x14 = 124U;
	uint64_t x16 = 1LLU;

	t3 = ((x13-(x14|x15))^x16);

	if (t3 != 14LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 41U;
	volatile uint64_t x18 = 251157885748LLU;
	int8_t x19 = -3;
	static uint8_t x20 = 1U;
	static uint64_t t4 = 138871430LLU;

	t4 = ((x17-(x18|x19))^x20);

	if (t4 != 45LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MAX;

	t5 = ((x21-(x22|x23))^x24);

	if (t5 != -32083LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 6U;
	int16_t x26 = INT16_MAX;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MAX;
	static int32_t t6 = 239378;

	t6 = ((x25-(x26|x27))^x28);

	if (t6 != 2147483640) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 187213U;
	static int64_t x34 = -216605LL;
	int32_t x35 = INT32_MIN;
	volatile int64_t t7 = 2699LL;

	t7 = ((x33-(x34|x35))^x36);

	if (t7 != -58571324LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	static int64_t x38 = INT64_MAX;
	uint64_t x39 = UINT64_MAX;
	uint64_t t8 = 8015LLU;

	t8 = ((x37-(x38|x39))^x40);

	if (t8 != 2147483646LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	volatile int8_t x42 = INT8_MAX;
	static volatile uint8_t x43 = 8U;
	volatile int16_t x44 = INT16_MIN;

	t9 = ((x41-(x42|x43))^x44);

	if (t9 != 32513) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 154417U;
	uint32_t x47 = 1U;
	volatile int8_t x48 = INT8_MIN;
	static uint32_t t10 = 594794U;

	t10 = ((x45-(x46|x47))^x48);

	if (t10 != 4294780080U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -369291756309801183LL;
	int64_t x51 = 196822227LL;
	int64_t x52 = INT64_MIN;
	int64_t t11 = 33276969522723783LL;

	t11 = ((x49-(x50|x51))^x52);

	if (t11 != 8854080280348152394LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MAX;
	uint32_t x54 = 1001161605U;
	int16_t x55 = INT16_MAX;
	static int8_t x56 = 8;
	volatile int64_t t12 = -155157413640354757LL;

	t12 = ((x53-(x54|x55))^x56);

	if (t12 != 9223372035853582344LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 6904U;
	int16_t x60 = INT16_MIN;
	static volatile int32_t t13 = -6;

	t13 = ((x57-(x58|x59))^x60);

	if (t13 != 2147450888) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -589258268216481LL;
	int16_t x62 = INT16_MAX;
	static uint16_t x63 = 1886U;
	static uint32_t x64 = UINT32_MAX;
	volatile int64_t t14 = 1642LL;

	t14 = ((x61-(x62|x63))^x64);

	if (t14 != -589259282936673LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	int32_t x67 = INT32_MAX;
	volatile int64_t t15 = 26679559149LL;

	t15 = ((x65-(x66|x67))^x68);

	if (t15 != -14LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 0;
	uint32_t x70 = 689273U;
	int64_t x71 = -1LL;
	uint64_t t16 = 355771931885371LLU;

	t16 = ((x69-(x70|x71))^x72);

	if (t16 != 85069LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 0U;
	static int64_t x79 = 3734LL;
	uint32_t x80 = UINT32_MAX;
	volatile int64_t t17 = 335LL;

	t17 = ((x77-(x78|x79))^x80);

	if (t17 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	static int64_t x92 = INT64_MIN;
	static uint64_t t18 = 1511488015955LLU;

	t18 = ((x89-(x90|x91))^x92);

	if (t18 != 9223372036854743081LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x94 = UINT32_MAX;
	uint64_t x95 = UINT64_MAX;
	uint16_t x96 = 13U;

	t19 = ((x93-(x94|x95))^x96);

	if (t19 != 9223372036854775821LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint32_t x98 = UINT32_MAX;
	static uint32_t t20 = 6242U;

	t20 = ((x97-(x98|x99))^x100);

	if (t20 != 79764U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x103 = INT32_MIN;
	volatile int32_t x104 = 1272;
	int32_t t21 = 167197049;

	t21 = ((x101-(x102|x103))^x104);

	if (t21 != -1159) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x106 = -1LL;
	uint16_t x107 = 1650U;
	int16_t x108 = -8;
	volatile uint64_t t22 = 238LLU;

	t22 = ((x105-(x106|x107))^x108);

	if (t22 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = -13;
	int8_t x110 = -1;
	uint8_t x111 = UINT8_MAX;

	t23 = ((x109-(x110|x111))^x112);

	if (t23 != 11) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	uint8_t x114 = 3U;
	int32_t x115 = -7;
	static int8_t x116 = INT8_MIN;
	volatile int64_t t24 = -1926541791LL;

	t24 = ((x113-(x114|x115))^x116);

	if (t24 != -124LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x117 = UINT64_MAX;
	int8_t x119 = INT8_MIN;
	volatile int64_t x120 = -1LL;
	static volatile uint64_t t25 = 3508063706529LLU;

	t25 = ((x117-(x118|x119))^x120);

	if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x122 = 1LL;
	int8_t x123 = -1;
	int64_t x124 = -1LL;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = ((x121-(x122|x123))^x124);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x125 = INT8_MIN;
	uint16_t x126 = 12592U;
	int8_t x127 = INT8_MIN;
	static volatile int32_t t27 = -105;

	t27 = ((x125-(x126|x127))^x128);

	if (t27 != 47) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x137 = 232385180246965806LLU;
	volatile int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MAX;
	uint64_t t28 = 0LLU;

	t28 = ((x137-(x138|x139))^x140);

	if (t28 != 9455757212806774352LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = INT32_MAX;
	int64_t x142 = -1LL;

	t29 = ((x141-(x142|x143))^x144);

	if (t29 != 4294967295LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = UINT8_MAX;
	int64_t x146 = 35251044741LL;
	uint8_t x147 = 22U;
	static int16_t x148 = INT16_MAX;
	int64_t t30 = -103574LL;

	t30 = ((x145-(x146|x147))^x148);

	if (t30 != -35251044201LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x149 = 2U;
	int16_t x150 = INT16_MAX;
	uint8_t x151 = 2U;
	int8_t x152 = INT8_MIN;
	volatile int32_t t31 = -1;

	t31 = ((x149-(x150|x151))^x152);

	if (t31 != 32643) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = INT32_MIN;
	static uint64_t x158 = 343027225525LLU;
	uint8_t x160 = UINT8_MAX;

	t32 = ((x157-(x158|x159))^x160);

	if (t32 != 18446743728534814974LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x161 = -1;
	volatile int16_t x162 = -509;
	uint8_t x163 = 0U;
	static uint64_t x164 = 22LLU;
	uint64_t t33 = 3597344875934LLU;

	t33 = ((x161-(x162|x163))^x164);

	if (t33 != 490LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = 242U;
	int64_t x166 = INT64_MIN;
	static uint64_t x167 = 198030668LLU;

	t34 = ((x165-(x166|x167))^x168);

	if (t34 != 9223372037052806233LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x170 = INT32_MAX;
	int32_t t35 = -66540545;

	t35 = ((x169-(x170|x171))^x172);

	if (t35 != 2147483385) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x174 = INT32_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	uint64_t x176 = 54190205LLU;
	volatile uint64_t t36 = 231988755589LLU;

	t36 = ((x173-(x174|x175))^x176);

	if (t36 != 54190205LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x181 = 99116LL;
	volatile int16_t x182 = -1;
	int64_t x184 = -1LL;
	volatile int64_t t37 = 118853889960860248LL;

	t37 = ((x181-(x182|x183))^x184);

	if (t37 != -99118LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = INT32_MIN;
	volatile int16_t x186 = INT16_MIN;
	uint8_t x187 = 103U;
	int16_t x188 = -3965;
	int32_t t38 = -7540911;

	t38 = ((x185-(x186|x187))^x188);

	if (t38 != 2147454746) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x189 = 3U;
	volatile uint64_t x190 = 3000674311769LLU;
	int64_t x191 = 4275263502879403LL;
	volatile uint64_t t39 = 1927213209258LLU;

	t39 = ((x189-(x190|x191))^x192);

	if (t39 != 18442465878287491447LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x193 = 1;
	uint64_t x194 = UINT64_MAX;
	volatile uint64_t t40 = 1459690993116225LLU;

	t40 = ((x193-(x194|x195))^x196);

	if (t40 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x199 = -1;
	volatile int32_t t41 = 156895;

	t41 = ((x197-(x198|x199))^x200);

	if (t41 != -2147483646) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x202 = -172903879;
	int64_t x203 = INT64_MAX;
	static uint32_t x204 = UINT32_MAX;
	int64_t t42 = 10695852203829846LL;

	t42 = ((x201-(x202|x203))^x204);

	if (t42 != -2147483650LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x206 = -30;
	static uint16_t x207 = 7U;
	uint8_t x208 = 4U;
	volatile int32_t t43 = -10;

	t43 = ((x205-(x206|x207))^x208);

	if (t43 != 284) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = INT16_MIN;
	uint8_t x210 = 1U;
	volatile int64_t x211 = -1LL;
	uint64_t t44 = 15610016338481460LLU;

	t44 = ((x209-(x210|x211))^x212);

	if (t44 != 32766LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x214 = INT16_MAX;
	uint16_t x215 = 110U;
	volatile int32_t t45 = 19544;

	t45 = ((x213-(x214|x215))^x216);

	if (t45 != -32513) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x221 = INT32_MIN;
	int64_t x224 = 3LL;

	t46 = ((x221-(x222|x223))^x224);

	if (t46 != -2147483646LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x225 = UINT32_MAX;
	int16_t x226 = -5374;
	int16_t x227 = 493;
	static int16_t x228 = 745;
	uint32_t t47 = 1869U;

	t47 = ((x225-(x226|x227))^x228);

	if (t47 != 5881U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = 25;
	int8_t x230 = -1;
	int8_t x232 = INT8_MIN;
	volatile int64_t t48 = 248156592434688LL;

	t48 = ((x229-(x230|x231))^x232);

	if (t48 != -102LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x234 = INT64_MAX;
	int16_t x235 = -1083;
	volatile int32_t x236 = INT32_MAX;
	volatile int64_t t49 = -3297449412LL;

	t49 = ((x233-(x234|x235))^x236);

	if (t49 != 2147483647LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x237 = 532U;
	uint16_t x238 = 20U;
	volatile int8_t x239 = -11;
	int64_t x240 = INT64_MIN;
	volatile int64_t t50 = 8662653859750LL;

	t50 = ((x237-(x238|x239))^x240);

	if (t50 != -9223372036854775265LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x241 = 3LLU;
	uint16_t x242 = UINT16_MAX;
	volatile uint32_t x243 = UINT32_MAX;
	static volatile int16_t x244 = INT16_MAX;
	uint64_t t51 = 44474300787LLU;

	t51 = ((x241-(x242|x243))^x244);

	if (t51 != 18446744069414617083LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = -43952940498LL;
	volatile int32_t x246 = 1030533;
	volatile uint16_t x248 = UINT16_MAX;
	volatile int64_t t52 = -178675090979539619LL;

	t52 = ((x245-(x246|x247))^x248);

	if (t52 != -43953987640LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x250 = INT64_MAX;
	static int8_t x251 = -2;
	volatile uint8_t x252 = UINT8_MAX;
	int64_t t53 = 13439389LL;

	t53 = ((x249-(x250|x251))^x252);

	if (t53 != 47LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x254 = 1U;
	volatile uint64_t x255 = 405108379LLU;
	volatile uint16_t x256 = UINT16_MAX;
	volatile uint64_t t54 = 17267181703875LLU;

	t54 = ((x253-(x254|x255))^x256);

	if (t54 != 18446744073304438427LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x257 = -1LL;
	static volatile int8_t x258 = INT8_MIN;
	volatile int8_t x259 = INT8_MIN;
	static int16_t x260 = INT16_MIN;

	t55 = ((x257-(x258|x259))^x260);

	if (t55 != -32641LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x263 = 171655220948520015LLU;
	volatile int64_t x264 = -1LL;
	static volatile uint64_t t56 = 3045216LLU;

	t56 = ((x261-(x262|x263))^x264);

	if (t56 != 171655221116398702LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = INT16_MIN;
	volatile uint16_t x266 = 6098U;
	int8_t x267 = 16;
	volatile int8_t x268 = 3;
	volatile int32_t t57 = 16;

	t57 = ((x265-(x266|x267))^x268);

	if (t57 != -38867) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = -1;
	int64_t x271 = -11LL;
	uint16_t x272 = 76U;
	int64_t t58 = -27005837483334135LL;

	t58 = ((x269-(x270|x271))^x272);

	if (t58 != 76LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = -19;
	int64_t x274 = -1LL;
	volatile uint64_t x275 = UINT64_MAX;
	uint16_t x276 = UINT16_MAX;
	static volatile uint64_t t59 = 6LLU;

	t59 = ((x273-(x274|x275))^x276);

	if (t59 != 18446744073709486097LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = -1;
	static int64_t x278 = -1LL;
	uint8_t x279 = 119U;
	volatile uint8_t x280 = 4U;
	volatile int64_t t60 = -1036292711937LL;

	t60 = ((x277-(x278|x279))^x280);

	if (t60 != 4LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MAX;
	int16_t x282 = 57;
	int64_t x283 = 24LL;
	int32_t x284 = -1;
	volatile int64_t t61 = -548955830382256067LL;

	t61 = ((x281-(x282|x283))^x284);

	if (t61 != -32711LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x286 = UINT64_MAX;
	static int16_t x287 = 10;
	static int64_t x288 = INT64_MAX;

	t62 = ((x285-(x286|x287))^x288);

	if (t62 != 9223372036855642415LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x289 = UINT8_MAX;
	static int64_t x290 = -285624063LL;
	int16_t x291 = 2515;
	int32_t x292 = INT32_MAX;
	static volatile int64_t t63 = -79688989701LL;

	t63 = ((x289-(x290|x291))^x292);

	if (t63 != 1861859539LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x293 = UINT8_MAX;
	volatile uint16_t x294 = UINT16_MAX;
	uint64_t x296 = 45122198279326LLU;
	volatile uint64_t t64 = 144LLU;

	t64 = ((x293-(x294|x295))^x296);

	if (t64 != 18446698951511283102LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = INT16_MIN;
	int16_t x299 = 13233;
	int32_t x300 = INT32_MAX;

	t65 = ((x297-(x298|x299))^x300);

	if (t65 != -2147450960) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int16_t x303 = INT16_MIN;
	uint8_t x304 = 12U;
	uint64_t t66 = 3431930558793LLU;

	t66 = ((x301-(x302|x303))^x304);

	if (t66 != 12LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = 224;
	int64_t x307 = -1LL;

	t67 = ((x305-(x306|x307))^x308);

	if (t67 != -114LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x313 = 1974732570921780986LLU;
	int32_t x315 = INT32_MIN;
	volatile uint8_t x316 = 96U;
	uint64_t t68 = 8669692362771750LLU;

	t68 = ((x313-(x314|x315))^x316);

	if (t68 != 1974732573069264538LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x319 = INT64_MIN;
	volatile uint64_t t69 = 1LLU;

	t69 = ((x317-(x318|x319))^x320);

	if (t69 != 18446744071558975091LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x325 = UINT64_MAX;
	volatile int64_t x326 = -138308505682755LL;
	volatile int64_t x328 = 130086LL;
	static volatile uint64_t t70 = 31115174LLU;

	t70 = ((x325-(x326|x327))^x328);

	if (t70 != 130086LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x329 = INT64_MAX;
	volatile uint32_t x330 = 4U;
	uint8_t x332 = 0U;

	t71 = ((x329-(x330|x331))^x332);

	if (t71 != 9223372036854771675LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x338 = INT16_MAX;
	int16_t x339 = -1;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t72 = 80069843882856322LLU;

	t72 = ((x337-(x338|x339))^x340);

	if (t72 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x341 = 2700039333933069LLU;
	int32_t x342 = 1474711;
	int32_t x343 = INT32_MIN;
	uint32_t x344 = 92U;
	static uint64_t t73 = 906498LLU;

	t73 = ((x341-(x342|x343))^x344);

	if (t73 != 2700041479941930LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x345 = 4877U;
	static int8_t x346 = INT8_MIN;
	int32_t x347 = -1;
	volatile int64_t t74 = -685058587933001237LL;

	t74 = ((x345-(x346|x347))^x348);

	if (t74 != -9223372036854770930LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x349 = UINT16_MAX;
	int8_t x350 = 27;
	uint32_t x351 = UINT32_MAX;
	uint64_t x352 = 906776534692234LLU;

	t75 = ((x349-(x350|x351))^x352);

	if (t75 != 906776534626698LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x354 = 13336686693LLU;
	int8_t x356 = INT8_MIN;
	static uint64_t t76 = 123415769633503LLU;

	t76 = ((x353-(x354|x355))^x356);

	if (t76 != 326272816759876281LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x357 = 7060U;
	volatile int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MIN;
	static int64_t x360 = -1LL;
	static volatile int64_t t77 = 785759025967144LL;

	t77 = ((x357-(x358|x359))^x360);

	if (t77 != -39829LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = INT64_MAX;
	static uint8_t x362 = 49U;
	static uint8_t x363 = 8U;
	uint16_t x364 = 13U;

	t78 = ((x361-(x362|x363))^x364);

	if (t78 != 9223372036854775755LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x365 = 80U;
	int32_t x366 = INT32_MAX;
	static int16_t x367 = -1;
	int16_t x368 = -1;

	t79 = ((x365-(x366|x367))^x368);

	if (t79 != -82) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x369 = 844U;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = -1;
	uint64_t x372 = UINT64_MAX;
	static uint64_t t80 = 16244507697091996LLU;

	t80 = ((x369-(x370|x371))^x372);

	if (t80 != 18446744073709550770LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x374 = -1LL;
	static volatile uint8_t x375 = UINT8_MAX;

	t81 = ((x373-(x374|x375))^x376);

	if (t81 != -20265LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = -1;
	int16_t x378 = INT16_MAX;
	int8_t x379 = INT8_MAX;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t82 = 10521479U;

	t82 = ((x377-(x378|x379))^x380);

	if (t82 != 32767U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x381 = INT32_MIN;
	uint64_t x383 = 160783LLU;
	static volatile uint8_t x384 = 0U;
	uint64_t t83 = 17764524413171283LLU;

	t83 = ((x381-(x382|x383))^x384);

	if (t83 != 18446744071562071025LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x385 = UINT32_MAX;
	volatile uint8_t x387 = UINT8_MAX;
	int64_t x388 = -1LL;

	t84 = ((x385-(x386|x387))^x388);

	if (t84 != -2147483393LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = UINT32_MAX;
	uint32_t x390 = 2125365652U;
	static uint32_t x391 = 284U;
	int8_t x392 = INT8_MIN;
	static volatile uint32_t t85 = 610191941U;

	t85 = ((x389-(x390|x391))^x392);

	if (t85 != 2125365731U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = 296816LLU;
	int8_t x395 = INT8_MAX;
	int32_t x396 = INT32_MIN;
	static volatile uint64_t t86 = 3135957801900955353LLU;

	t86 = ((x393-(x394|x395))^x396);

	if (t86 != 2145387377LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = INT8_MAX;
	static uint64_t x398 = UINT64_MAX;
	static volatile int64_t x400 = -73LL;
	volatile uint64_t t87 = 5356317559538572LLU;

	t87 = ((x397-(x398|x399))^x400);

	if (t87 != 18446744073709551415LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x405 = -405LL;
	int16_t x406 = 199;
	int16_t x407 = -118;

	t88 = ((x405-(x406|x407))^x408);

	if (t88 != 355LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = INT32_MIN;
	int64_t x411 = 0LL;
	uint8_t x412 = 47U;
	static volatile int64_t t89 = 7071628LL;

	t89 = ((x409-(x410|x411))^x412);

	if (t89 != -2147483685LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x413 = 1LL;
	static volatile int32_t x415 = INT32_MIN;
	volatile int64_t x416 = -195360065LL;
	int64_t t90 = 1776174179LL;

	t90 = ((x413-(x414|x415))^x416);

	if (t90 != -1952123580LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x417 = UINT16_MAX;
	uint16_t x418 = 234U;
	int64_t x419 = -14515100050LL;
	int16_t x420 = INT16_MAX;
	int64_t t91 = 12514503591567029LL;

	t91 = ((x417-(x418|x419))^x420);

	if (t91 != 14515152622LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x422 = 5;
	int32_t x423 = -1;
	static int8_t x424 = INT8_MIN;
	int32_t t92 = 6358801;

	t92 = ((x421-(x422|x423))^x424);

	if (t92 != 110) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x426 = INT16_MIN;
	int64_t x427 = -1LL;
	uint16_t x428 = UINT16_MAX;
	volatile int64_t t93 = 529801LL;

	t93 = ((x425-(x426|x427))^x428);

	if (t93 != -2147418114LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x429 = -522917869LL;
	int8_t x430 = INT8_MAX;
	uint8_t x431 = 8U;
	uint8_t x432 = 0U;
	static int64_t t94 = 480LL;

	t94 = ((x429-(x430|x431))^x432);

	if (t94 != -522917996LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x433 = INT16_MIN;
	uint64_t x434 = 179418531406268822LLU;
	int8_t x435 = INT8_MIN;
	uint32_t x436 = UINT32_MAX;
	static volatile uint64_t t95 = 238718LLU;

	t95 = ((x433-(x434|x435))^x436);

	if (t95 != 18446744069414616981LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x437 = UINT64_MAX;
	int32_t x438 = INT32_MAX;
	volatile uint64_t x439 = 413243843107644LLU;
	int8_t x440 = -1;
	uint64_t t96 = 3LLU;

	t96 = ((x437-(x438|x439))^x440);

	if (t96 != 413244573351935LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = -57606;
	int8_t x442 = -6;
	uint16_t x443 = 3124U;
	int8_t x444 = INT8_MIN;
	volatile int32_t t97 = 13863;

	t97 = ((x441-(x442|x443))^x444);

	if (t97 != 57724) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = -1LL;
	static uint64_t x446 = 252071890414LLU;
	volatile uint32_t x448 = UINT32_MAX;
	static volatile uint64_t t98 = 36667LLU;

	t98 = ((x445-(x446|x447))^x448);

	if (t98 != 18446743823270272511LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x449 = 795U;
	static int8_t x450 = -1;
	int64_t x451 = -1LL;
	static int64_t x452 = -1LL;
	volatile int64_t t99 = 2012559LL;

	t99 = ((x449-(x450|x451))^x452);

	if (t99 != -797LL) { NG(); } else { ; }
	
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

