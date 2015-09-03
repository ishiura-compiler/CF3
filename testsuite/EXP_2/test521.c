#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int32_t x4 = INT32_MAX;
int16_t x6 = -488;
volatile uint64_t t2 = 2123454861647LLU;
static int8_t x24 = -25;
uint64_t x28 = 120289437LLU;
int32_t x33 = -47168;
uint8_t x34 = UINT8_MAX;
int32_t t6 = 879758877;
uint32_t x40 = 1666U;
volatile int16_t x50 = INT16_MAX;
volatile int64_t t10 = -12778715156269LL;
static volatile int64_t t11 = -124LL;
int16_t x57 = 3067;
int32_t t12 = 16;
uint64_t x67 = 6379LLU;
int64_t x68 = -6038269350475346LL;
uint16_t x75 = 43U;
volatile uint32_t t15 = 218U;
static int64_t x78 = -1LL;
volatile int8_t x81 = INT8_MIN;
int16_t x86 = 12910;
int64_t t18 = -44020288061LL;
static volatile uint64_t t19 = 543507033933068800LLU;
volatile int16_t x101 = 2;
uint16_t x102 = UINT16_MAX;
int32_t x127 = INT32_MIN;
static int32_t x130 = INT32_MIN;
volatile uint16_t x131 = 25U;
volatile uint64_t x145 = UINT64_MAX;
int32_t x146 = 41258948;
uint8_t x169 = 31U;
int16_t x176 = 20;
volatile int64_t x177 = INT64_MIN;
static int8_t x178 = -1;
int8_t x180 = INT8_MAX;
int32_t t41 = 3404;
uint16_t x185 = 17703U;
static volatile int32_t x188 = 7004396;
int8_t x190 = 8;
volatile uint64_t t43 = 23LLU;
static volatile int32_t x194 = -1;
uint16_t x196 = UINT16_MAX;
volatile int8_t x198 = INT8_MAX;
volatile uint64_t x199 = 40655960473337LLU;
static uint16_t x209 = 0U;
volatile uint8_t x212 = UINT8_MAX;
uint8_t x214 = 9U;
volatile int32_t x216 = INT32_MIN;
int32_t x220 = -9724440;
static int32_t x224 = 10;
static volatile uint64_t t50 = 772169LLU;
int64_t x247 = -1LL;
int16_t x248 = INT16_MIN;
volatile uint64_t x258 = UINT64_MAX;
int8_t x264 = -1;
volatile int32_t x267 = INT32_MIN;
int8_t x268 = INT8_MAX;
uint64_t t59 = 4080143336746LLU;
volatile uint64_t t60 = 1684789654436LLU;
volatile int64_t t61 = -7941451554LL;
volatile int16_t x278 = -1;
int8_t x279 = INT8_MIN;
int64_t x293 = -1LL;
int8_t x294 = -3;
static volatile int16_t x295 = -1;
uint16_t x302 = 333U;
int64_t x303 = -1LL;
volatile int64_t t67 = -1575436LL;
int32_t x306 = 2390;
uint32_t x307 = 264854U;
int32_t x313 = 677414;
static volatile int16_t x316 = INT16_MIN;
int32_t t69 = -13567;
static volatile uint8_t x318 = 0U;
uint32_t x321 = UINT32_MAX;
static uint8_t x332 = UINT8_MAX;
static uint64_t x333 = 391031LLU;
int32_t x335 = -1;
static volatile int8_t x345 = 1;
int16_t x358 = INT16_MIN;
uint32_t x367 = 3U;
int8_t x370 = -1;
int32_t x375 = 7977898;
int32_t x380 = 744;
int8_t x382 = INT8_MIN;
volatile int16_t x383 = INT16_MAX;
static uint16_t x385 = UINT16_MAX;
uint16_t x391 = 2U;
uint64_t t86 = 7LLU;
int16_t x397 = INT16_MIN;
static volatile int32_t t88 = 512;
static volatile int32_t x404 = INT32_MIN;
volatile int32_t t89 = -9;
uint32_t x408 = 392204U;
int64_t t92 = 305984624226LL;
uint32_t x422 = UINT32_MAX;
uint64_t x424 = 70913961477215672LLU;
volatile int32_t x432 = 0;
int16_t x433 = INT16_MIN;
uint64_t t96 = 153229948172780LLU;
int16_t x440 = -7600;
volatile uint32_t t99 = 1697U;


void f0(void) {
	static int16_t x2 = INT16_MIN;
	int16_t x3 = 50;
	static int32_t t0 = -759148643;

	t0 = ((x1-(x2/x3))+x4);

	if (t0 != 2147451534) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -2695;
	uint32_t x7 = UINT32_MAX;
	int16_t x8 = INT16_MIN;
	volatile uint32_t t1 = 362U;

	t1 = ((x5-(x6/x7))+x8);

	if (t1 != 4294931833U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	static int8_t x14 = INT8_MIN;
	static volatile int32_t x15 = 50;
	int16_t x16 = INT16_MIN;

	t2 = ((x13-(x14/x15))+x16);

	if (t2 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	volatile int64_t x22 = -1LL;
	static volatile uint16_t x23 = 16974U;
	int64_t t3 = 219111419LL;

	t3 = ((x21-(x22/x23))+x24);

	if (t3 != -2147483673LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = UINT16_MAX;
	int16_t x26 = -7;
	int8_t x27 = -1;
	volatile uint64_t t4 = 6297664955925754LLU;

	t4 = ((x25-(x26/x27))+x28);

	if (t4 != 120354965LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	static uint64_t x30 = 218LLU;
	int32_t x31 = 2;
	int64_t x32 = 380904726985071800LL;
	static volatile uint64_t t5 = 4441LLU;

	t5 = ((x29-(x30/x31))+x32);

	if (t5 != 380904726985071690LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x35 = -13;
	uint8_t x36 = 61U;

	t6 = ((x33-(x34/x35))+x36);

	if (t6 != -47088) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x37 = 6U;
	volatile int64_t x38 = INT64_MIN;
	volatile int64_t x39 = INT64_MIN;
	int64_t t7 = -387277891LL;

	t7 = ((x37-(x38/x39))+x40);

	if (t7 != 1671LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = -1;
	static uint16_t x43 = UINT16_MAX;
	int64_t x44 = 4301333404949825LL;
	int64_t t8 = -1627772953974LL;

	t8 = ((x41-(x42/x43))+x44);

	if (t8 != -9219070703449825983LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = -939;
	uint64_t x46 = UINT64_MAX;
	uint16_t x47 = 31935U;
	static uint8_t x48 = 2U;
	volatile uint64_t t9 = 4LLU;

	t9 = ((x45-(x46/x47))+x48);

	if (t9 != 18446166439638039499LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -620861704482LL;
	static uint8_t x51 = UINT8_MAX;
	int16_t x52 = 129;

	t10 = ((x49-(x50/x51))+x52);

	if (t10 != -620861704481LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 30393U;
	int32_t x54 = INT32_MAX;
	volatile int64_t x55 = INT64_MIN;
	static uint8_t x56 = 2U;

	t11 = ((x53-(x54/x55))+x56);

	if (t11 != 30395LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x58 = 0;
	volatile int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MAX;

	t12 = ((x57-(x58/x59))+x60);

	if (t12 != 3194) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x65 = -24144216524772235LL;
	int64_t x66 = INT64_MAX;
	uint64_t t13 = 7333394997102267754LLU;

	t13 = ((x65-(x66/x67))+x68);

	if (t13 != 18415115691606548153LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = INT16_MIN;
	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = 25LLU;
	static uint16_t x72 = UINT16_MAX;
	static uint64_t t14 = 2107LLU;

	t14 = ((x69-(x70/x71))+x72);

	if (t14 != 18446744073537785692LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x73 = 0U;
	volatile uint32_t x74 = 207445189U;
	volatile int32_t x76 = -976;

	t15 = ((x73-(x74/x75))+x76);

	if (t15 != 4290142014U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = UINT16_MAX;
	int16_t x79 = INT16_MIN;
	uint16_t x80 = 22U;
	volatile int64_t t16 = 1LL;

	t16 = ((x77-(x78/x79))+x80);

	if (t16 != 65557LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x82 = 227288U;
	int16_t x83 = INT16_MIN;
	int32_t x84 = -1;
	volatile uint32_t t17 = 27999U;

	t17 = ((x81-(x82/x83))+x84);

	if (t17 != 4294967167U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x85 = INT64_MIN;
	int8_t x87 = -39;
	volatile uint16_t x88 = 2428U;

	t18 = ((x85-(x86/x87))+x88);

	if (t18 != -9223372036854773049LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	volatile uint64_t x90 = UINT64_MAX;
	int32_t x91 = -1;
	volatile uint32_t x92 = UINT32_MAX;

	t19 = ((x89-(x90/x91))+x92);

	if (t19 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	static int64_t x94 = 340677LL;
	volatile uint64_t x95 = 4464887205372965834LLU;
	static uint16_t x96 = 1U;
	uint64_t t20 = 286194166472LLU;

	t20 = ((x93-(x94/x95))+x96);

	if (t20 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 5272U;
	static int32_t x98 = -1;
	int32_t x99 = 95923;
	volatile uint16_t x100 = 10U;
	uint32_t t21 = 3879695U;

	t21 = ((x97-(x98/x99))+x100);

	if (t21 != 5282U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x103 = 40U;
	int16_t x104 = -1;
	int32_t t22 = 837331;

	t22 = ((x101-(x102/x103))+x104);

	if (t22 != -1637) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = -2330967396543LL;
	int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MIN;
	static uint8_t x108 = UINT8_MAX;
	static volatile int64_t t23 = 93420LL;

	t23 = ((x105-(x106/x107))+x108);

	if (t23 != -2330967396289LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x113 = 939632U;
	int16_t x114 = -1;
	uint8_t x115 = UINT8_MAX;
	uint8_t x116 = UINT8_MAX;
	volatile uint32_t t24 = 5U;

	t24 = ((x113-(x114/x115))+x116);

	if (t24 != 939887U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = 58761217;
	int32_t x118 = 383532736;
	int32_t x119 = INT32_MIN;
	int16_t x120 = 1;
	static volatile int32_t t25 = -2;

	t25 = ((x117-(x118/x119))+x120);

	if (t25 != 58761218) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x121 = 7U;
	static uint8_t x122 = 44U;
	volatile int64_t x123 = INT64_MIN;
	uint64_t x124 = 1LLU;
	volatile uint64_t t26 = 573461785983380LLU;

	t26 = ((x121-(x122/x123))+x124);

	if (t26 != 8LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 5339642097025569136LLU;
	int16_t x126 = INT16_MIN;
	int64_t x128 = INT64_MAX;
	volatile uint64_t t27 = 63LLU;

	t27 = ((x125-(x126/x127))+x128);

	if (t27 != 14563014133880344943LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x132 = UINT32_MAX;
	uint32_t t28 = 659946U;

	t28 = ((x129-(x130/x131))+x132);

	if (t28 != 2233382992U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MAX;
	int16_t x135 = -6;
	int32_t x136 = -1;
	int32_t t29 = -1;

	t29 = ((x133-(x134/x135))+x136);

	if (t29 != 5715) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -12;
	int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MAX;
	volatile int64_t t30 = -41774046434LL;

	t30 = ((x137-(x138/x139))+x140);

	if (t30 != 2147483636LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x141 = -1;
	volatile uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MIN;
	static int64_t x144 = -1LL;
	uint64_t t31 = 5309891334LLU;

	t31 = ((x141-(x142/x143))+x144);

	if (t31 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x147 = UINT16_MAX;
	int32_t x148 = INT32_MIN;
	volatile uint64_t t32 = 41357968413937228LLU;

	t32 = ((x145-(x146/x147))+x148);

	if (t32 != 18446744071562067338LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 3U;
	int16_t x150 = -2;
	volatile int32_t x151 = INT32_MIN;
	volatile uint64_t x152 = UINT64_MAX;
	volatile uint64_t t33 = 128486LLU;

	t33 = ((x149-(x150/x151))+x152);

	if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = 135164618LL;
	int32_t x154 = INT32_MAX;
	static uint32_t x155 = UINT32_MAX;
	int8_t x156 = -1;
	static int64_t t34 = -876826404859LL;

	t34 = ((x153-(x154/x155))+x156);

	if (t34 != 135164617LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = 6775;
	int32_t x158 = 966038743;
	volatile int64_t x159 = INT64_MIN;
	static int32_t x160 = INT32_MIN;
	volatile int64_t t35 = 54268778326335LL;

	t35 = ((x157-(x158/x159))+x160);

	if (t35 != -2147476873LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x161 = -2LL;
	int8_t x162 = INT8_MAX;
	static uint16_t x163 = UINT16_MAX;
	volatile uint8_t x164 = 49U;
	volatile int64_t t36 = 2280429597370470735LL;

	t36 = ((x161-(x162/x163))+x164);

	if (t36 != 47LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -1;
	volatile uint16_t x166 = UINT16_MAX;
	uint64_t x167 = 175LLU;
	volatile uint32_t x168 = 8U;
	volatile uint64_t t37 = 89LLU;

	t37 = ((x165-(x166/x167))+x168);

	if (t37 != 18446744073709551249LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x170 = INT8_MIN;
	int16_t x171 = -1;
	uint64_t x172 = UINT64_MAX;
	static uint64_t t38 = 14547515737499234LLU;

	t38 = ((x169-(x170/x171))+x172);

	if (t38 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	uint32_t x174 = 71868U;
	int8_t x175 = -1;
	static uint32_t t39 = 312145U;

	t39 = ((x173-(x174/x175))+x176);

	if (t39 != 4294934548U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x179 = INT32_MAX;
	int64_t t40 = -2046690072722224506LL;

	t40 = ((x177-(x178/x179))+x180);

	if (t40 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x181 = -13;
	int16_t x182 = -1;
	uint8_t x183 = UINT8_MAX;
	uint8_t x184 = 5U;

	t41 = ((x181-(x182/x183))+x184);

	if (t41 != -8) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MIN;
	static volatile uint32_t t42 = 2U;

	t42 = ((x185-(x186/x187))+x188);

	if (t42 != 7022098U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MAX;

	t43 = ((x189-(x190/x191))+x192);

	if (t43 != 32766LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MAX;
	int64_t x195 = 44629077LL;
	int64_t t44 = -27138727250009504LL;

	t44 = ((x193-(x194/x195))+x196);

	if (t44 != 98302LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = 12LLU;
	int64_t x200 = 97603211318LL;
	uint64_t t45 = 307LLU;

	t45 = ((x197-(x198/x199))+x200);

	if (t45 != 97603211330LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x201 = UINT32_MAX;
	uint8_t x202 = 115U;
	int32_t x203 = INT32_MAX;
	volatile int8_t x204 = INT8_MIN;
	uint32_t t46 = 74784U;

	t46 = ((x201-(x202/x203))+x204);

	if (t46 != 4294967167U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = INT8_MIN;
	volatile uint64_t t47 = 135LLU;

	t47 = ((x209-(x210/x211))+x212);

	if (t47 != 254LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = 241;
	int64_t x215 = -3LL;
	volatile int64_t t48 = -2518036336233066LL;

	t48 = ((x213-(x214/x215))+x216);

	if (t48 != -2147483404LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x218 = -12377139;
	int8_t x219 = 9;
	int32_t t49 = 6710424;

	t49 = ((x217-(x218/x219))+x220);

	if (t49 != -8283668) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = INT32_MIN;
	uint64_t x222 = UINT64_MAX;
	int32_t x223 = -18514;

	t50 = ((x221-(x222/x223))+x224);

	if (t50 != 18446744071562067977LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = 12608709LLU;
	volatile int64_t x226 = -2179865978426647LL;
	uint8_t x227 = UINT8_MAX;
	volatile int32_t x228 = -1;
	uint64_t t51 = 25238218LLU;

	t51 = ((x225-(x226/x227))+x228);

	if (t51 != 8548506641753LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x233 = 175172LLU;
	uint16_t x234 = 2076U;
	uint8_t x235 = UINT8_MAX;
	int8_t x236 = INT8_MIN;
	volatile uint64_t t52 = 0LLU;

	t52 = ((x233-(x234/x235))+x236);

	if (t52 != 175036LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x237 = INT64_MIN;
	int64_t x238 = -23516LL;
	int8_t x239 = 3;
	uint8_t x240 = UINT8_MAX;
	static volatile int64_t t53 = 1072622419LL;

	t53 = ((x237-(x238/x239))+x240);

	if (t53 != -9223372036854767715LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x245 = -1LL;
	static volatile int8_t x246 = 1;
	static volatile int64_t t54 = 4104379610157046LL;

	t54 = ((x245-(x246/x247))+x248);

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x249 = -1;
	volatile int16_t x250 = INT16_MIN;
	static int64_t x251 = INT64_MIN;
	int16_t x252 = -1;
	static int64_t t55 = -4LL;

	t55 = ((x249-(x250/x251))+x252);

	if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x253 = 19603838U;
	uint32_t x254 = 605U;
	int32_t x255 = INT32_MIN;
	int64_t x256 = 25969538649082LL;
	static int64_t t56 = 6052046187859647LL;

	t56 = ((x253-(x254/x255))+x256);

	if (t56 != 25969558252920LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	int16_t x259 = INT16_MIN;
	static int64_t x260 = -1LL;
	volatile uint64_t t57 = 16570LLU;

	t57 = ((x257-(x258/x259))+x260);

	if (t57 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x261 = -1;
	int8_t x262 = 1;
	static int16_t x263 = -11972;
	int32_t t58 = -1000885;

	t58 = ((x261-(x262/x263))+x264);

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x265 = UINT32_MAX;
	static uint64_t x266 = 475709483644596LLU;

	t59 = ((x265-(x266/x267))+x268);

	if (t59 != 4294967422LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = 7290671977580985LLU;
	uint64_t x270 = 3498302761040341LLU;
	uint32_t x271 = 16148613U;
	uint32_t x272 = 648873306U;

	t60 = ((x269-(x270/x271))+x272);

	if (t60 != 7290672409822513LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x273 = -3175862564825883LL;
	volatile uint32_t x274 = 1299543870U;
	uint8_t x275 = 27U;
	uint8_t x276 = 64U;

	t61 = ((x273-(x274/x275))+x276);

	if (t61 != -3175862612957073LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x277 = 46185892605LL;
	int64_t x280 = INT64_MIN;
	volatile int64_t t62 = 3LL;

	t62 = ((x277-(x278/x279))+x280);

	if (t62 != -9223371990668883203LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x281 = 0;
	int8_t x282 = 8;
	int32_t x283 = INT32_MIN;
	int16_t x284 = -1;
	int32_t t63 = 397657540;

	t63 = ((x281-(x282/x283))+x284);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x285 = 103715516U;
	int32_t x286 = INT32_MAX;
	volatile uint32_t x287 = 49254U;
	uint8_t x288 = 12U;
	uint32_t t64 = 46700115U;

	t64 = ((x285-(x286/x287))+x288);

	if (t64 != 103671928U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = INT32_MAX;
	int32_t x290 = -17648562;
	static uint64_t x291 = 5325LLU;
	uint32_t x292 = 24727381U;
	volatile uint64_t t65 = 1LLU;

	t65 = ((x289-(x290/x291))+x292);

	if (t65 != 18443279898590928484LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x296 = 7914158U;
	int64_t t66 = -145168LL;

	t66 = ((x293-(x294/x295))+x296);

	if (t66 != 7914154LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x301 = -1LL;
	volatile int16_t x304 = INT16_MIN;

	t67 = ((x301-(x302/x303))+x304);

	if (t67 != -32436LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = 3;
	int16_t x308 = -1;
	uint32_t t68 = 845U;

	t68 = ((x305-(x306/x307))+x308);

	if (t68 != 2U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x314 = -1;
	uint8_t x315 = 3U;

	t69 = ((x313-(x314/x315))+x316);

	if (t69 != 644646) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = -1;
	static uint32_t x319 = 54226196U;
	int64_t x320 = 5LL;
	int64_t t70 = 3773LL;

	t70 = ((x317-(x318/x319))+x320);

	if (t70 != 4294967300LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x322 = INT16_MIN;
	static volatile int16_t x323 = INT16_MIN;
	volatile uint32_t x324 = UINT32_MAX;
	static volatile uint32_t t71 = 13U;

	t71 = ((x321-(x322/x323))+x324);

	if (t71 != 4294967293U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x325 = UINT8_MAX;
	volatile int8_t x326 = INT8_MIN;
	static uint8_t x327 = UINT8_MAX;
	uint64_t x328 = 1LLU;
	volatile uint64_t t72 = 86740529LLU;

	t72 = ((x325-(x326/x327))+x328);

	if (t72 != 256LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x329 = 108507156891760LLU;
	uint8_t x330 = UINT8_MAX;
	static volatile int8_t x331 = INT8_MAX;
	volatile uint64_t t73 = 18123658308929546LLU;

	t73 = ((x329-(x330/x331))+x332);

	if (t73 != 108507156892013LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x334 = 108U;
	static int64_t x336 = INT64_MIN;
	volatile uint64_t t74 = 124LLU;

	t74 = ((x333-(x334/x335))+x336);

	if (t74 != 9223372036855166947LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = 1097899850957318469LL;
	volatile int64_t x342 = INT64_MAX;
	int64_t x343 = -121329104443107622LL;
	uint32_t x344 = 947566336U;
	volatile int64_t t75 = -13912965340LL;

	t75 = ((x341-(x342/x343))+x344);

	if (t75 != 1097899851904884881LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x346 = 159448LLU;
	int64_t x347 = -2378213659192LL;
	int32_t x348 = -442;
	uint64_t t76 = 1301593880LLU;

	t76 = ((x345-(x346/x347))+x348);

	if (t76 != 18446744073709551175LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = INT64_MAX;
	int64_t x350 = INT64_MIN;
	int32_t x351 = -370;
	uint64_t x352 = 4379300368866385LLU;
	static uint64_t t77 = 24106LLU;

	t77 = ((x349-(x350/x351))+x352);

	if (t77 != 9202823304691602258LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = -1;
	int32_t x359 = 8;
	static volatile int16_t x360 = 11259;
	volatile int32_t t78 = 297878121;

	t78 = ((x357-(x358/x359))+x360);

	if (t78 != 15354) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = INT8_MIN;
	int32_t x362 = INT32_MIN;
	uint16_t x363 = 488U;
	volatile int8_t x364 = INT8_MIN;
	int32_t t79 = 1007904681;

	t79 = ((x361-(x362/x363))+x364);

	if (t79 != 4400325) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x365 = 1061831525814066LLU;
	volatile int32_t x366 = INT32_MIN;
	int64_t x368 = 1LL;
	volatile uint64_t t80 = 772823815LLU;

	t80 = ((x365-(x366/x367))+x368);

	if (t80 != 1061830809986185LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x369 = 0U;
	int16_t x371 = 6;
	int32_t x372 = 1291;
	int32_t t81 = 2463;

	t81 = ((x369-(x370/x371))+x372);

	if (t81 != 1291) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x373 = 1107U;
	static volatile int64_t x374 = INT64_MIN;
	uint32_t x376 = 460696U;
	volatile int64_t t82 = 1LL;

	t82 = ((x373-(x374/x375))+x376);

	if (t82 != 1156116024681LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x377 = INT32_MAX;
	static int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MAX;
	volatile int64_t t83 = -6LL;

	t83 = ((x377-(x378/x379))+x380);

	if (t83 != 72624978815632232LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x381 = UINT64_MAX;
	volatile uint64_t x384 = UINT64_MAX;
	volatile uint64_t t84 = 888650758534891LLU;

	t84 = ((x381-(x382/x383))+x384);

	if (t84 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x386 = 1860870585084688844LLU;
	int16_t x387 = -65;
	int8_t x388 = -8;
	uint64_t t85 = 1892LLU;

	t85 = ((x385-(x386/x387))+x388);

	if (t85 != 65527LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x389 = 755845062U;
	uint32_t x390 = UINT32_MAX;
	volatile uint64_t x392 = 4354147918303LLU;

	t86 = ((x389-(x390/x391))+x392);

	if (t86 != 4357051247014LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x393 = 38U;
	int8_t x394 = INT8_MAX;
	static volatile int8_t x395 = -1;
	int32_t x396 = -5898169;
	volatile int32_t t87 = 928252;

	t87 = ((x393-(x394/x395))+x396);

	if (t87 != -5898004) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x398 = INT32_MIN;
	static volatile int32_t x399 = 60653;
	int8_t x400 = 1;

	t88 = ((x397-(x398/x399))+x400);

	if (t88 != 2639) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = 0;
	int32_t x402 = -4965;
	uint8_t x403 = UINT8_MAX;

	t89 = ((x401-(x402/x403))+x404);

	if (t89 != -2147483629) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = -1;
	static int32_t x406 = 234;
	int16_t x407 = INT16_MIN;
	uint32_t t90 = 29016827U;

	t90 = ((x405-(x406/x407))+x408);

	if (t90 != 392203U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x409 = INT8_MIN;
	int32_t x410 = -830551;
	int8_t x411 = 3;
	int32_t x412 = -1;
	volatile int32_t t91 = -946;

	t91 = ((x409-(x410/x411))+x412);

	if (t91 != 276721) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x413 = -1;
	int64_t x414 = INT64_MAX;
	uint16_t x415 = UINT16_MAX;
	int32_t x416 = INT32_MIN;

	t92 = ((x413-(x414/x415))+x416);

	if (t92 != -140741783355393LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = -1;
	static int64_t x423 = INT64_MIN;
	uint64_t t93 = 827449238784382LLU;

	t93 = ((x421-(x422/x423))+x424);

	if (t93 != 70913961477215671LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x425 = INT16_MAX;
	volatile uint16_t x426 = UINT16_MAX;
	int8_t x427 = INT8_MIN;
	static uint8_t x428 = 0U;
	int32_t t94 = -2264193;

	t94 = ((x425-(x426/x427))+x428);

	if (t94 != 33278) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = 2;
	static int64_t x430 = INT64_MIN;
	static int32_t x431 = INT32_MIN;
	int64_t t95 = 125084544280388677LL;

	t95 = ((x429-(x430/x431))+x432);

	if (t95 != -4294967294LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x434 = 103713310LLU;
	int16_t x435 = -7304;
	volatile uint16_t x436 = 1702U;

	t96 = ((x433-(x434/x435))+x436);

	if (t96 != 18446744073709520550LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x437 = -1;
	int16_t x438 = -1;
	int32_t x439 = INT32_MIN;
	int32_t t97 = 9869234;

	t97 = ((x437-(x438/x439))+x440);

	if (t97 != -7601) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x441 = 12U;
	int32_t x442 = INT32_MIN;
	volatile int64_t x443 = INT64_MAX;
	int32_t x444 = INT32_MAX;
	volatile int64_t t98 = -12LL;

	t98 = ((x441-(x442/x443))+x444);

	if (t98 != 2147483659LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x445 = 1619U;
	int16_t x446 = -2540;
	volatile int8_t x447 = -1;
	uint32_t x448 = UINT32_MAX;

	t99 = ((x445-(x446/x447))+x448);

	if (t99 != 4294966374U) { NG(); } else { ; }
	
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

