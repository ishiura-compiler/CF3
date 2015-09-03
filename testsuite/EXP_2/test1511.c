#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 2600434LLU;
uint8_t x10 = 34U;
int8_t x16 = INT8_MAX;
volatile uint32_t x21 = 16966030U;
volatile uint32_t t5 = 1016375301U;
static int32_t x27 = INT32_MAX;
int32_t x30 = INT32_MIN;
uint32_t t8 = 65724U;
volatile int32_t x37 = -1;
static int64_t x49 = INT64_MIN;
static uint8_t x54 = UINT8_MAX;
uint64_t x71 = 27566006664962137LLU;
volatile uint16_t x72 = UINT16_MAX;
int8_t x81 = -2;
uint16_t x83 = 4U;
int32_t x85 = -1;
uint64_t x88 = 404LLU;
volatile uint32_t t17 = 2U;
uint64_t x94 = UINT64_MAX;
uint16_t x96 = 1U;
int16_t x103 = INT16_MAX;
volatile int8_t x122 = -1;
int8_t x124 = -31;
uint64_t t24 = 853785LLU;
static volatile int16_t x133 = INT16_MIN;
volatile int64_t x135 = INT64_MIN;
volatile int32_t t26 = 6;
volatile int32_t t29 = 44;
int64_t x158 = INT64_MIN;
static int32_t x159 = INT32_MIN;
int8_t x160 = INT8_MIN;
int8_t x175 = INT8_MIN;
int32_t x194 = INT32_MIN;
volatile int64_t x195 = -3983716634801394LL;
uint32_t x198 = 286663081U;
int16_t x204 = -227;
int32_t t40 = 1;
int64_t t41 = 90787322556995LL;
int16_t x210 = INT16_MIN;
volatile int8_t x211 = -28;
uint32_t x214 = 776801470U;
volatile int8_t x215 = INT8_MIN;
uint64_t x224 = 3038063830LLU;
int32_t t47 = -24767;
static int64_t x233 = 155LL;
volatile int64_t t48 = 32453024334388LL;
volatile int16_t x242 = INT16_MIN;
int8_t x246 = INT8_MIN;
uint32_t x249 = 2712736U;
static uint32_t x251 = UINT32_MAX;
uint8_t x260 = 5U;
static int8_t x269 = INT8_MAX;
static volatile int64_t x270 = INT64_MIN;
static volatile int64_t x279 = -1LL;
uint32_t x281 = 3778258U;
uint64_t x284 = 601320585116694192LLU;
int16_t x303 = INT16_MAX;
int8_t x304 = -1;
static int8_t x326 = 22;
uint32_t x328 = 289839U;
int16_t x332 = INT16_MIN;
uint16_t x337 = UINT16_MAX;
int16_t x339 = INT16_MIN;
int32_t x340 = -1;
uint8_t x355 = UINT8_MAX;
volatile int64_t x359 = INT64_MIN;
static volatile int8_t x374 = INT8_MIN;
int64_t x378 = INT64_MIN;
static volatile uint8_t x379 = UINT8_MAX;
static int64_t x381 = -4209494389542LL;
int8_t x384 = 38;
volatile int8_t x387 = INT8_MAX;
volatile int32_t t79 = -748692;
int64_t x395 = -1LL;
uint64_t t81 = 350904440218113LLU;
int32_t x403 = INT32_MAX;
uint8_t x404 = UINT8_MAX;
int16_t x406 = 62;
int64_t x415 = 555402666327403LL;
int16_t x425 = 1;
uint32_t t88 = 3151881U;
uint32_t x442 = 1865453914U;
int16_t x444 = INT16_MIN;
volatile uint16_t x445 = UINT16_MAX;
int8_t x458 = -14;
static int16_t x459 = INT16_MIN;
int32_t x462 = 110656282;
int64_t x466 = -1LL;
volatile int64_t t96 = 1923551894932554LL;
static uint64_t t97 = 7085864603415588LLU;
int8_t x473 = -4;
static int16_t x476 = INT16_MIN;
volatile int32_t t98 = -71673542;
int64_t x478 = -27114LL;
static volatile uint8_t x480 = 1U;


void f0(void) {
	uint64_t x1 = 1LLU;
	int16_t x2 = 1;
	uint8_t x3 = 30U;
	uint32_t x4 = UINT32_MAX;

	t0 = ((x1^(x2<x3))*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -119;
	uint64_t x6 = 1LLU;
	uint32_t x7 = 15313U;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 1413922887530LLU;

	t1 = ((x5^(x6<x7))*x8);

	if (t1 != 120LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	uint32_t x11 = 370U;
	int32_t x12 = 1;
	volatile int32_t t2 = -3153086;

	t2 = ((x9^(x10<x11))*x12);

	if (t2 != 2147483646) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	int64_t x14 = INT64_MAX;
	int32_t x15 = -1;
	int32_t t3 = -15646082;

	t3 = ((x13^(x14<x15))*x16);

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 1;
	int8_t x18 = 1;
	uint16_t x19 = 1U;
	int16_t x20 = INT16_MAX;
	int32_t t4 = 1;

	t4 = ((x17^(x18<x19))*x20);

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -5;
	int64_t x23 = INT64_MAX;
	static int32_t x24 = INT32_MIN;

	t5 = ((x21^(x22<x23))*x24);

	if (t5 != 2147483648U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int16_t x26 = INT16_MAX;
	static int32_t x28 = INT32_MIN;
	volatile uint64_t t6 = 428987LLU;

	t6 = ((x25^(x26<x27))*x28);

	if (t6 != 4294967296LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	volatile int16_t x32 = INT16_MIN;
	int32_t t7 = -335768;

	t7 = ((x29^(x30<x31))*x32);

	if (t7 != 1073741824) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1027812780U;
	static volatile int8_t x34 = 0;
	static int64_t x35 = 95807419666300251LL;
	volatile int8_t x36 = INT8_MIN;

	t8 = ((x33^(x34<x35))*x36);

	if (t8 != 1583950208U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	static int64_t x39 = INT64_MAX;
	static int64_t x40 = -1LL;
	volatile int64_t t9 = -7564165845LL;

	t9 = ((x37^(x38<x39))*x40);

	if (t9 != 2LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 188LLU;
	volatile int64_t x42 = INT64_MIN;
	int32_t x43 = 103510;
	uint64_t x44 = 890156LLU;
	uint64_t t10 = 1199LLU;

	t10 = ((x41^(x42<x43))*x44);

	if (t10 != 168239484LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x50 = 8U;
	uint8_t x51 = 2U;
	uint32_t x52 = 1U;
	static int64_t t11 = INT64_MIN;

	t11 = ((x49^(x50<x51))*x52);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = -1;
	uint32_t x55 = UINT32_MAX;
	int8_t x56 = -1;
	static int32_t t12 = 9663;

	t12 = ((x53^(x54<x55))*x56);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x65 = 34823765862571LLU;
	int64_t x66 = INT64_MAX;
	uint8_t x67 = 2U;
	static int16_t x68 = -6;
	static uint64_t t13 = 944409168349628LLU;

	t13 = ((x65^(x66<x67))*x68);

	if (t13 != 18446535131114376190LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -1;
	int32_t x70 = 108651083;
	volatile int32_t t14 = 12580;

	t14 = ((x69^(x70<x71))*x72);

	if (t14 != -131070) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x82 = UINT64_MAX;
	uint32_t x84 = 301U;
	volatile uint32_t t15 = 1808U;

	t15 = ((x81^(x82<x83))*x84);

	if (t15 != 4294966694U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x86 = INT32_MIN;
	int16_t x87 = 13;
	uint64_t t16 = 25588132LLU;

	t16 = ((x85^(x86<x87))*x88);

	if (t16 != 18446744073709550808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x89 = UINT32_MAX;
	int64_t x90 = INT64_MIN;
	volatile int32_t x91 = -4;
	uint8_t x92 = 6U;

	t17 = ((x89^(x90<x91))*x92);

	if (t17 != 4294967284U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MAX;
	uint32_t x95 = UINT32_MAX;
	int32_t t18 = INT32_MAX;

	t18 = ((x93^(x94<x95))*x96);

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = -1;
	static int64_t x98 = INT64_MIN;
	int64_t x99 = -1LL;
	static int64_t x100 = -964697LL;
	static int64_t t19 = -4LL;

	t19 = ((x97^(x98<x99))*x100);

	if (t19 != 1929394LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x101 = UINT16_MAX;
	int16_t x102 = -2130;
	int8_t x104 = 1;
	volatile int32_t t20 = -736251255;

	t20 = ((x101^(x102<x103))*x104);

	if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = -36;
	int8_t x107 = INT8_MIN;
	int16_t x108 = INT16_MIN;
	int32_t t21 = 0;

	t21 = ((x105^(x106<x107))*x108);

	if (t21 != 1073741824) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = 11;
	int64_t x114 = 538804059LL;
	int16_t x115 = INT16_MIN;
	int32_t x116 = 506678;
	volatile int32_t t22 = -238712076;

	t22 = ((x113^(x114<x115))*x116);

	if (t22 != 5573458) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = -1;
	volatile int16_t x123 = INT16_MIN;
	static volatile int32_t t23 = -126159;

	t23 = ((x121^(x122<x123))*x124);

	if (t23 != 31) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = 9794326075137684LLU;
	int64_t x126 = 61974075LL;
	int32_t x127 = -1;
	volatile int32_t x128 = -1;

	t24 = ((x125^(x126<x127))*x128);

	if (t24 != 18436949747634413932LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x129 = 0;
	static volatile int64_t x130 = INT64_MAX;
	static int64_t x131 = INT64_MAX;
	static uint64_t x132 = 1LLU;
	volatile uint64_t t25 = 1959LLU;

	t25 = ((x129^(x130<x131))*x132);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x134 = INT64_MIN;
	static volatile int16_t x136 = INT16_MAX;

	t26 = ((x133^(x134<x135))*x136);

	if (t26 != -1073709056) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = 72;
	int8_t x142 = INT8_MIN;
	int8_t x143 = -1;
	uint64_t x144 = UINT64_MAX;
	uint64_t t27 = 201125404LLU;

	t27 = ((x141^(x142<x143))*x144);

	if (t27 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = -1;
	static int16_t x146 = -505;
	volatile int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MAX;
	int32_t t28 = 1;

	t28 = ((x145^(x146<x147))*x148);

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = 2713;
	volatile uint16_t x150 = 14933U;
	uint32_t x151 = 395754271U;
	volatile int16_t x152 = INT16_MIN;

	t29 = ((x149^(x150<x151))*x152);

	if (t29 != -88866816) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x153 = 396U;
	static int32_t x154 = 42;
	static uint64_t x155 = 916944635193520741LLU;
	volatile uint16_t x156 = UINT16_MAX;
	uint32_t t30 = 1425408U;

	t30 = ((x153^(x154<x155))*x156);

	if (t30 != 26017395U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = 208379116LLU;
	uint64_t t31 = 130957395508289693LLU;

	t31 = ((x157^(x158<x159))*x160);

	if (t31 != 18446744047037024640LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x161 = INT8_MAX;
	static int64_t x162 = -1LL;
	uint64_t x163 = 37555333803284LLU;
	static volatile uint8_t x164 = UINT8_MAX;
	volatile int32_t t32 = -127;

	t32 = ((x161^(x162<x163))*x164);

	if (t32 != 32385) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = -1;
	static int64_t x167 = INT64_MAX;
	volatile int64_t x168 = -1LL;
	int64_t t33 = -6LL;

	t33 = ((x165^(x166<x167))*x168);

	if (t33 != 32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x173 = 0U;
	uint8_t x174 = UINT8_MAX;
	int8_t x176 = 1;
	volatile int32_t t34 = -547;

	t34 = ((x173^(x174<x175))*x176);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x177 = INT16_MAX;
	int8_t x178 = INT8_MAX;
	int32_t x179 = -25;
	uint32_t x180 = 30976U;
	volatile uint32_t t35 = 14782254U;

	t35 = ((x177^(x178<x179))*x180);

	if (t35 != 1014990592U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x182 = 172299798LLU;
	static volatile uint8_t x183 = 15U;
	uint8_t x184 = 1U;
	int32_t t36 = -45;

	t36 = ((x181^(x182<x183))*x184);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = -1;
	volatile int16_t x191 = INT16_MIN;
	static volatile uint64_t x192 = 1LLU;
	volatile uint64_t t37 = 0LLU;

	t37 = ((x189^(x190<x191))*x192);

	if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x193 = -1LL;
	static volatile int8_t x196 = INT8_MIN;
	static int64_t t38 = -1312245346LL;

	t38 = ((x193^(x194<x195))*x196);

	if (t38 != 128LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x197 = -1;
	int16_t x199 = -5262;
	static int16_t x200 = INT16_MIN;
	static volatile int32_t t39 = 209338709;

	t39 = ((x197^(x198<x199))*x200);

	if (t39 != 65536) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = -515;
	int32_t x202 = INT32_MIN;
	static int32_t x203 = INT32_MAX;

	t40 = ((x201^(x202<x203))*x204);

	if (t40 != 117132) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x205 = INT8_MAX;
	int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MIN;
	int64_t x208 = -1LL;

	t41 = ((x205^(x206<x207))*x208);

	if (t41 != -126LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x209 = 13377U;
	volatile uint32_t x212 = UINT32_MAX;
	uint32_t t42 = 268874U;

	t42 = ((x209^(x210<x211))*x212);

	if (t42 != 4294953920U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = INT8_MAX;
	static int64_t x216 = 31157576746033128LL;
	static int64_t t43 = -10205LL;

	t43 = ((x213^(x214<x215))*x216);

	if (t43 != 3925854670000174128LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = INT8_MIN;
	volatile int16_t x218 = INT16_MAX;
	static uint64_t x219 = 963295075827965LLU;
	uint64_t x220 = 145LLU;
	uint64_t t44 = 6851909129LLU;

	t44 = ((x217^(x218<x219))*x220);

	if (t44 != 18446744073709533201LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = -56;
	int64_t x222 = INT64_MAX;
	int32_t x223 = INT32_MIN;
	volatile uint64_t t45 = 58028169323LLU;

	t45 = ((x221^(x222<x223))*x224);

	if (t45 != 18446743903577977136LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = -7305935214610514LL;
	int16_t x226 = INT16_MIN;
	volatile uint16_t x227 = 14819U;
	volatile uint8_t x228 = 2U;
	volatile int64_t t46 = 45610859061484659LL;

	t46 = ((x225^(x226<x227))*x228);

	if (t46 != -14611870429221026LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x229 = 8140;
	uint32_t x230 = UINT32_MAX;
	volatile int8_t x231 = INT8_MAX;
	uint8_t x232 = 1U;

	t47 = ((x229^(x230<x231))*x232);

	if (t47 != 8140) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x234 = INT32_MIN;
	volatile int8_t x235 = -3;
	volatile uint16_t x236 = 2229U;

	t48 = ((x233^(x234<x235))*x236);

	if (t48 != 343266LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x237 = 35591253852200LLU;
	int64_t x238 = 21114870082013LL;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = 1LLU;
	volatile uint64_t t49 = 875591250812316630LLU;

	t49 = ((x237^(x238<x239))*x240);

	if (t49 != 35591253852200LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x241 = -1;
	int64_t x243 = INT64_MIN;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t50 = 3125354553805691316LLU;

	t50 = ((x241^(x242<x243))*x244);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = -1;
	uint32_t x247 = 15895246U;
	int64_t x248 = -2079352LL;
	volatile int64_t t51 = 13341562127925861LL;

	t51 = ((x245^(x246<x247))*x248);

	if (t51 != 2079352LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x250 = -1;
	int32_t x252 = INT32_MAX;
	static uint32_t t52 = 2526U;

	t52 = ((x249^(x250<x251))*x252);

	if (t52 != 4292254560U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x253 = INT16_MIN;
	static uint16_t x254 = UINT16_MAX;
	volatile int8_t x255 = INT8_MAX;
	uint8_t x256 = 75U;
	int32_t t53 = 137612;

	t53 = ((x253^(x254<x255))*x256);

	if (t53 != -2457600) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = INT8_MIN;
	uint8_t x258 = 112U;
	int64_t x259 = INT64_MIN;
	static int32_t t54 = -252;

	t54 = ((x257^(x258<x259))*x260);

	if (t54 != -640) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x271 = -1;
	int16_t x272 = INT16_MAX;
	volatile int32_t t55 = -6;

	t55 = ((x269^(x270<x271))*x272);

	if (t55 != 4128642) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x277 = -1;
	static int32_t x278 = INT32_MAX;
	volatile uint16_t x280 = 104U;
	int32_t t56 = 99391;

	t56 = ((x277^(x278<x279))*x280);

	if (t56 != -104) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x282 = INT8_MAX;
	int16_t x283 = INT16_MAX;
	uint64_t t57 = 27021562928LLU;

	t57 = ((x281^(x282<x283))*x284);

	if (t57 != 7018996200085041936LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x285 = -16;
	uint8_t x286 = UINT8_MAX;
	static uint16_t x287 = 6U;
	volatile int8_t x288 = INT8_MIN;
	int32_t t58 = -27993361;

	t58 = ((x285^(x286<x287))*x288);

	if (t58 != 2048) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x293 = UINT32_MAX;
	uint32_t x294 = 1U;
	static int16_t x295 = -1;
	int16_t x296 = 0;
	volatile uint32_t t59 = 106U;

	t59 = ((x293^(x294<x295))*x296);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x301 = 218170425899LLU;
	static uint32_t x302 = 331U;
	static uint64_t t60 = 78084748LLU;

	t60 = ((x301^(x302<x303))*x304);

	if (t60 != 18446743855539125718LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x305 = 7;
	int16_t x306 = -1;
	int32_t x307 = 2;
	static int32_t x308 = -315095779;
	int32_t t61 = -475253;

	t61 = ((x305^(x306<x307))*x308);

	if (t61 != -1890574674) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x309 = 14;
	static int64_t x310 = INT64_MAX;
	volatile int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MAX;
	volatile int32_t t62 = -17;

	t62 = ((x309^(x310<x311))*x312);

	if (t62 != 458738) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x313 = UINT32_MAX;
	int64_t x314 = INT64_MIN;
	volatile int8_t x315 = -1;
	int64_t x316 = -1LL;
	volatile int64_t t63 = 7298058908552LL;

	t63 = ((x313^(x314<x315))*x316);

	if (t63 != -4294967294LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x321 = INT32_MIN;
	static int64_t x322 = 13332931LL;
	int32_t x323 = INT32_MAX;
	static volatile int16_t x324 = -1;
	static volatile int32_t t64 = INT32_MAX;

	t64 = ((x321^(x322<x323))*x324);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x325 = INT8_MAX;
	uint16_t x327 = UINT16_MAX;
	static uint32_t t65 = 88013U;

	t65 = ((x325^(x326<x327))*x328);

	if (t65 != 36519714U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x329 = UINT64_MAX;
	volatile int32_t x330 = 1333;
	int32_t x331 = -6773;
	volatile uint64_t t66 = 1720592372LLU;

	t66 = ((x329^(x330<x331))*x332);

	if (t66 != 32768LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = -252360474;
	int32_t x335 = INT32_MAX;
	int16_t x336 = -1;
	uint64_t t67 = 429827942388377539LLU;

	t67 = ((x333^(x334<x335))*x336);

	if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x338 = 18U;
	volatile int32_t t68 = 2893;

	t68 = ((x337^(x338<x339))*x340);

	if (t68 != -65535) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x341 = INT32_MIN;
	static volatile uint8_t x342 = 1U;
	int32_t x343 = -47;
	static int64_t x344 = -1LL;
	int64_t t69 = -4783883528LL;

	t69 = ((x341^(x342<x343))*x344);

	if (t69 != 2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x345 = INT8_MIN;
	int16_t x346 = 1451;
	int64_t x347 = INT64_MAX;
	static int8_t x348 = -1;
	int32_t t70 = 170;

	t70 = ((x345^(x346<x347))*x348);

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x349 = 23035U;
	uint16_t x350 = 1475U;
	uint32_t x351 = 4U;
	static int16_t x352 = INT16_MIN;
	volatile uint32_t t71 = 1U;

	t71 = ((x349^(x350<x351))*x352);

	if (t71 != 3540156416U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x353 = INT64_MAX;
	uint16_t x354 = 448U;
	static int8_t x356 = -1;
	volatile int64_t t72 = 185277LL;

	t72 = ((x353^(x354<x355))*x356);

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x357 = 2182U;
	static int32_t x358 = INT32_MIN;
	volatile int8_t x360 = -1;
	int32_t t73 = 516044;

	t73 = ((x357^(x358<x359))*x360);

	if (t73 != -2182) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x365 = 13U;
	int8_t x366 = INT8_MIN;
	volatile int32_t x367 = INT32_MIN;
	static uint64_t x368 = 79426LLU;
	uint64_t t74 = 4313319LLU;

	t74 = ((x365^(x366<x367))*x368);

	if (t74 != 1032538LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x369 = UINT32_MAX;
	static volatile int8_t x370 = INT8_MIN;
	static int8_t x371 = INT8_MIN;
	volatile uint16_t x372 = UINT16_MAX;
	static volatile uint32_t t75 = 702U;

	t75 = ((x369^(x370<x371))*x372);

	if (t75 != 4294901761U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x373 = -29195219LL;
	int32_t x375 = -1;
	uint32_t x376 = 10264U;
	volatile int64_t t76 = 433104746514LL;

	t76 = ((x373^(x374<x375))*x376);

	if (t76 != -299659738080LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x377 = 13U;
	static uint32_t x380 = 56464182U;
	uint32_t t77 = 162U;

	t77 = ((x377^(x378<x379))*x380);

	if (t77 != 677570184U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x382 = UINT64_MAX;
	static uint64_t x383 = 261LLU;
	static int64_t t78 = 519552406076LL;

	t78 = ((x381^(x382<x383))*x384);

	if (t78 != -159960786802596LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x385 = -1;
	static int64_t x386 = -7098013LL;
	int16_t x388 = -1;

	t79 = ((x385^(x386<x387))*x388);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x389 = -1LL;
	uint8_t x390 = 24U;
	volatile int64_t x391 = -1LL;
	int32_t x392 = INT32_MIN;
	static volatile int64_t t80 = -273478629LL;

	t80 = ((x389^(x390<x391))*x392);

	if (t80 != 2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x393 = INT32_MIN;
	uint16_t x394 = UINT16_MAX;
	static uint64_t x396 = 3781505LLU;

	t81 = ((x393^(x394<x395))*x396);

	if (t81 != 18438623353557221376LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x401 = 977;
	static volatile int32_t x402 = 1632126;
	volatile int32_t t82 = -20;

	t82 = ((x401^(x402<x403))*x404);

	if (t82 != 248880) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x405 = -1;
	int8_t x407 = 11;
	volatile int32_t x408 = -211420257;
	int32_t t83 = 8961587;

	t83 = ((x405^(x406<x407))*x408);

	if (t83 != 211420257) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x413 = INT32_MIN;
	volatile int64_t x414 = INT64_MIN;
	uint16_t x416 = 1U;
	int32_t t84 = -7;

	t84 = ((x413^(x414<x415))*x416);

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x417 = 12U;
	static volatile int64_t x418 = INT64_MIN;
	uint16_t x419 = UINT16_MAX;
	static int32_t x420 = -1;
	static volatile int32_t t85 = 784252;

	t85 = ((x417^(x418<x419))*x420);

	if (t85 != -13) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x421 = 95U;
	uint16_t x422 = 80U;
	int16_t x423 = -2140;
	static uint32_t x424 = 589U;
	static volatile uint32_t t86 = 195059U;

	t86 = ((x421^(x422<x423))*x424);

	if (t86 != 55955U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x426 = 741U;
	int8_t x427 = INT8_MIN;
	volatile int16_t x428 = 49;
	volatile int32_t t87 = -1;

	t87 = ((x425^(x426<x427))*x428);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x433 = -1;
	volatile int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MAX;
	uint32_t x436 = 51U;

	t88 = ((x433^(x434<x435))*x436);

	if (t88 != 4294967194U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x437 = -1;
	static int16_t x438 = INT16_MAX;
	uint8_t x439 = UINT8_MAX;
	int16_t x440 = INT16_MIN;
	volatile int32_t t89 = -23003880;

	t89 = ((x437^(x438<x439))*x440);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x441 = 1U;
	uint8_t x443 = 7U;
	volatile int32_t t90 = 12343396;

	t90 = ((x441^(x442<x443))*x444);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x446 = -1;
	static volatile int64_t x447 = INT64_MAX;
	uint8_t x448 = UINT8_MAX;
	int32_t t91 = -75;

	t91 = ((x445^(x446<x447))*x448);

	if (t91 != 16711170) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x449 = -1;
	volatile int32_t x450 = 0;
	static volatile uint32_t x451 = 482U;
	volatile int16_t x452 = INT16_MAX;
	int32_t t92 = 0;

	t92 = ((x449^(x450<x451))*x452);

	if (t92 != -65534) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x453 = UINT16_MAX;
	volatile int32_t x454 = -1;
	int8_t x455 = INT8_MIN;
	static uint64_t x456 = UINT64_MAX;
	volatile uint64_t t93 = 84359588LLU;

	t93 = ((x453^(x454<x455))*x456);

	if (t93 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x457 = UINT64_MAX;
	uint32_t x460 = 6082U;
	static uint64_t t94 = 52LLU;

	t94 = ((x457^(x458<x459))*x460);

	if (t94 != 18446744073709545534LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x461 = INT16_MIN;
	int8_t x463 = 2;
	int16_t x464 = INT16_MIN;
	static volatile int32_t t95 = -373239;

	t95 = ((x461^(x462<x463))*x464);

	if (t95 != 1073741824) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x465 = -1LL;
	int16_t x467 = INT16_MIN;
	uint8_t x468 = UINT8_MAX;

	t96 = ((x465^(x466<x467))*x468);

	if (t96 != -255LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x469 = -1;
	uint8_t x470 = 62U;
	static volatile int8_t x471 = -1;
	uint64_t x472 = UINT64_MAX;

	t97 = ((x469^(x470<x471))*x472);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x474 = 5U;
	int8_t x475 = INT8_MIN;

	t98 = ((x473^(x474<x475))*x476);

	if (t98 != 98304) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x477 = UINT16_MAX;
	uint64_t x479 = UINT64_MAX;
	static volatile int32_t t99 = 373;

	t99 = ((x477^(x478<x479))*x480);

	if (t99 != 65534) { NG(); } else { ; }
	
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

