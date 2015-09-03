#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x21 = 109U;
int8_t x35 = -40;
static volatile uint64_t x37 = UINT64_MAX;
uint8_t x39 = 72U;
uint64_t x42 = UINT64_MAX;
volatile uint64_t t4 = 1839708093377518754LLU;
int8_t x49 = INT8_MAX;
uint32_t x75 = 238188999U;
static int8_t x79 = INT8_MIN;
uint32_t x83 = UINT32_MAX;
volatile int32_t x84 = -1;
int64_t x98 = 1LL;
volatile uint16_t x103 = UINT16_MAX;
static volatile int64_t x106 = INT64_MIN;
volatile uint64_t t17 = 1871177017813616LLU;
volatile uint64_t x119 = 302622070393916LLU;
uint32_t x121 = 44795U;
int64_t x132 = INT64_MAX;
int32_t x133 = -863;
int16_t x135 = -61;
int32_t x139 = -1;
volatile int32_t t23 = 44723;
volatile int64_t x145 = -1LL;
static volatile int32_t x146 = -2978;
int64_t x147 = -1LL;
static volatile uint8_t x150 = 2U;
static int8_t x157 = -42;
int64_t x158 = -150168LL;
static int64_t x162 = -2213LL;
static volatile int32_t t30 = 1219;
volatile int32_t t33 = -176;
uint64_t x188 = UINT64_MAX;
uint64_t x191 = 271498597697287312LLU;
uint8_t x192 = 0U;
static int32_t x194 = 18879;
volatile uint64_t t36 = 36182041609235LLU;
int32_t x199 = 14491143;
static int8_t x201 = -1;
uint16_t x203 = UINT16_MAX;
int64_t x211 = -1LL;
int64_t x212 = INT64_MAX;
volatile int8_t x223 = INT8_MIN;
int64_t x225 = -454028756114494LL;
volatile uint32_t x241 = 113U;
int32_t x244 = 1267;
static int8_t x254 = -1;
static uint16_t x259 = 153U;
uint16_t x260 = 42U;
int32_t x277 = INT32_MIN;
int16_t x284 = -1;
static uint32_t x287 = 150U;
static int64_t x295 = -1LL;
volatile int64_t t54 = -1LL;
int64_t x305 = INT64_MIN;
uint16_t x316 = 1769U;
int64_t x320 = 18300069LL;
int8_t x326 = INT8_MIN;
volatile uint64_t t62 = 557440960LLU;
int8_t x335 = 0;
uint32_t x339 = 651314510U;
int32_t x347 = INT32_MIN;
uint64_t t66 = 223229250026249LLU;
int8_t x362 = INT8_MAX;
uint64_t x363 = 190955846124263770LLU;
static int16_t x367 = 1;
static volatile int32_t t70 = 769;
static uint16_t x383 = UINT16_MAX;
uint64_t x384 = 282950901801657087LLU;
uint32_t x385 = 3U;
int32_t x389 = INT32_MIN;
int16_t x390 = INT16_MIN;
uint64_t x396 = 3281859196LLU;
int16_t x399 = INT16_MIN;
static volatile uint64_t t76 = 9LLU;
uint64_t t77 = 3272185422164170LLU;
uint16_t x431 = UINT16_MAX;
int8_t x432 = INT8_MAX;
volatile int32_t x433 = INT32_MIN;
int16_t x436 = INT16_MAX;
volatile int32_t x437 = INT32_MIN;
int64_t x445 = 2095731869LL;
int8_t x448 = INT8_MAX;
static volatile uint8_t x457 = 6U;
static uint16_t x460 = 998U;
uint64_t x463 = 5LLU;
volatile uint8_t x468 = UINT8_MAX;
uint64_t x483 = UINT64_MAX;
static volatile int32_t t88 = 41426;
static volatile int32_t t89 = 495;
static uint64_t x508 = 379LLU;
volatile uint32_t x509 = 2036130U;
static int16_t x512 = 1;
uint64_t t94 = 3LLU;
static int8_t x518 = INT8_MIN;
static int16_t x526 = INT16_MIN;
volatile int16_t x529 = INT16_MIN;
int16_t x532 = -1;
volatile uint16_t x533 = 3744U;


void f0(void) {
	int16_t x17 = -3167;
	uint16_t x18 = 161U;
	static int32_t x19 = -2;
	int8_t x20 = -1;
	volatile int32_t t0 = -1;

	t0 = ((x17/x18)+(x19*x20));

	if (t0 != -17) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x22 = -1;
	uint16_t x23 = 10U;
	volatile int32_t x24 = 12174;
	volatile int32_t t1 = -25;

	t1 = ((x21/x22)+(x23*x24));

	if (t1 != 121631) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x33 = INT8_MIN;
	uint64_t x34 = UINT64_MAX;
	int16_t x36 = -34;
	volatile uint64_t t2 = 10122463LLU;

	t2 = ((x33/x34)+(x35*x36));

	if (t2 != 1360LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x38 = 2684;
	uint32_t x40 = 2539U;
	uint64_t t3 = 110285766837LLU;

	t3 = ((x37/x38)+(x39*x40));

	if (t3 != 6872855467287708LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x41 = INT64_MIN;
	volatile int8_t x43 = 0;
	int16_t x44 = INT16_MIN;

	t4 = ((x41/x42)+(x43*x44));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = INT16_MIN;
	int32_t x46 = INT32_MAX;
	volatile int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	volatile int32_t t5 = 3;

	t5 = ((x45/x46)+(x47*x48));

	if (t5 != 4194304) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x50 = -1;
	int8_t x51 = -9;
	int32_t x52 = 7070397;
	volatile int32_t t6 = 151;

	t6 = ((x49/x50)+(x51*x52));

	if (t6 != -63633700) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x57 = -1;
	uint32_t x58 = UINT32_MAX;
	uint16_t x59 = 3281U;
	int32_t x60 = -1;
	uint32_t t7 = 443104133U;

	t7 = ((x57/x58)+(x59*x60));

	if (t7 != 4294964016U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x61 = 0U;
	int16_t x62 = INT16_MAX;
	uint8_t x63 = 2U;
	volatile int16_t x64 = INT16_MIN;
	int32_t t8 = -1207;

	t8 = ((x61/x62)+(x63*x64));

	if (t8 != -65536) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x65 = 1;
	uint64_t x66 = UINT64_MAX;
	volatile uint32_t x67 = 2U;
	int64_t x68 = -1LL;
	uint64_t t9 = 149351LLU;

	t9 = ((x65/x66)+(x67*x68));

	if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;
	int16_t x76 = 296;
	volatile int64_t t10 = 4LL;

	t10 = ((x73/x74)+(x75*x76));

	if (t10 != 1784466968LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x77 = UINT8_MAX;
	int16_t x78 = 448;
	uint16_t x80 = 7418U;
	static int32_t t11 = -349244;

	t11 = ((x77/x78)+(x79*x80));

	if (t11 != -949504) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x81 = INT32_MIN;
	static volatile int16_t x82 = INT16_MIN;
	volatile uint32_t t12 = 0U;

	t12 = ((x81/x82)+(x83*x84));

	if (t12 != 65537U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x85 = 2146614300LLU;
	int8_t x86 = INT8_MIN;
	static int64_t x87 = -651828579340LL;
	int8_t x88 = INT8_MAX;
	volatile uint64_t t13 = 381376280450002098LLU;

	t13 = ((x85/x86)+(x87*x88));

	if (t13 != 18446661291479975436LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x97 = INT8_MIN;
	uint32_t x99 = 3U;
	uint32_t x100 = UINT32_MAX;
	volatile int64_t t14 = 555549106875942775LL;

	t14 = ((x97/x98)+(x99*x100));

	if (t14 != 4294967165LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x101 = 1430LLU;
	int8_t x102 = INT8_MIN;
	int64_t x104 = -1LL;
	static volatile uint64_t t15 = 3314874093530882LLU;

	t15 = ((x101/x102)+(x103*x104));

	if (t15 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x105 = 27620LLU;
	uint16_t x107 = 7773U;
	static int8_t x108 = INT8_MIN;
	uint64_t t16 = 89LLU;

	t16 = ((x105/x106)+(x107*x108));

	if (t16 != 18446744073708556672LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x109 = 793856U;
	static uint64_t x110 = 1853660203LLU;
	volatile int32_t x111 = -63;
	int64_t x112 = -1LL;

	t17 = ((x109/x110)+(x111*x112));

	if (t17 != 63LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x113 = 25;
	volatile int64_t x114 = INT64_MAX;
	static uint32_t x115 = 121503052U;
	uint32_t x116 = UINT32_MAX;
	volatile int64_t t18 = -61584232LL;

	t18 = ((x113/x114)+(x115*x116));

	if (t18 != 4173464244LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x117 = INT64_MIN;
	static int16_t x118 = INT16_MIN;
	int32_t x120 = INT32_MAX;
	uint64_t t19 = 566310035482587LLU;

	t19 = ((x117/x118)+(x119*x120));

	if (t19 != 15600700978641122244LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x122 = INT64_MIN;
	int8_t x123 = -1;
	volatile int32_t x124 = -519118369;
	int64_t t20 = -71604892376LL;

	t20 = ((x121/x122)+(x123*x124));

	if (t20 != 519118369LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x129 = 0;
	int16_t x130 = -1;
	volatile uint8_t x131 = 0U;
	int64_t t21 = -405988661LL;

	t21 = ((x129/x130)+(x131*x132));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x134 = 2;
	static int64_t x136 = 26961LL;
	int64_t t22 = -8117LL;

	t22 = ((x133/x134)+(x135*x136));

	if (t22 != -1645052LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	static int16_t x140 = INT16_MIN;

	t23 = ((x137/x138)+(x139*x140));

	if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x141 = INT64_MIN;
	int32_t x142 = -51;
	int8_t x143 = 10;
	uint32_t x144 = UINT32_MAX;
	int64_t t24 = 3LL;

	t24 = ((x141/x142)+(x143*x144));

	if (t24 != 180850436390158968LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x148 = UINT32_MAX;
	int64_t t25 = 105996214LL;

	t25 = ((x145/x146)+(x147*x148));

	if (t25 != -4294967295LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x149 = -1LL;
	volatile uint16_t x151 = 4320U;
	static volatile int16_t x152 = INT16_MIN;
	static int64_t t26 = -15LL;

	t26 = ((x149/x150)+(x151*x152));

	if (t26 != -141557760LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x159 = 6U;
	static uint32_t x160 = 178U;
	static volatile int64_t t27 = 1LL;

	t27 = ((x157/x158)+(x159*x160));

	if (t27 != 1068LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x161 = UINT8_MAX;
	static int8_t x163 = 1;
	static volatile int16_t x164 = 0;
	static int64_t t28 = 16598289LL;

	t28 = ((x161/x162)+(x163*x164));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x165 = 51U;
	static uint16_t x166 = UINT16_MAX;
	static int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t29 = -311649087;

	t29 = ((x165/x166)+(x167*x168));

	if (t29 != 4194304) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x169 = 7U;
	volatile int16_t x170 = 54;
	uint8_t x171 = UINT8_MAX;
	uint16_t x172 = 431U;

	t30 = ((x169/x170)+(x171*x172));

	if (t30 != 109905) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x173 = -179;
	uint16_t x174 = UINT16_MAX;
	volatile int16_t x175 = INT16_MIN;
	int8_t x176 = -1;
	volatile int32_t t31 = -2;

	t31 = ((x173/x174)+(x175*x176));

	if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x177 = -1;
	volatile uint32_t x178 = 135U;
	uint16_t x179 = UINT16_MAX;
	uint32_t x180 = 1046030U;
	uint32_t t32 = 1105U;

	t32 = ((x177/x178)+(x179*x180));

	if (t32 != 4158881182U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = -3;
	static volatile int8_t x182 = INT8_MAX;
	int16_t x183 = INT16_MAX;
	uint8_t x184 = 19U;

	t33 = ((x181/x182)+(x183*x184));

	if (t33 != 622573) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = INT8_MIN;
	static uint16_t x186 = 15352U;
	int64_t x187 = INT64_MIN;
	uint64_t t34 = 1525616994315666LLU;

	t34 = ((x185/x186)+(x187*x188));

	if (t34 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x190 = -1;
	volatile uint64_t t35 = 59226707758146690LLU;

	t35 = ((x189/x190)+(x191*x192));

	if (t35 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x193 = UINT32_MAX;
	uint64_t x195 = UINT64_MAX;
	volatile int16_t x196 = INT16_MIN;

	t36 = ((x193/x194)+(x195*x196));

	if (t36 != 260267LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x197 = 216857140091LLU;
	volatile uint8_t x198 = 1U;
	static volatile uint8_t x200 = 68U;
	static volatile uint64_t t37 = 224555081LLU;

	t37 = ((x197/x198)+(x199*x200));

	if (t37 != 217842537815LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x202 = INT32_MIN;
	volatile uint64_t x204 = 60371226561232469LLU;
	volatile uint64_t t38 = 312643010081342LLU;

	t38 = ((x201/x202)+(x203*x204));

	if (t38 != 8825100916525810091LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = INT16_MIN;
	volatile int16_t x206 = 15;
	static volatile uint32_t x207 = 61743U;
	static uint64_t x208 = UINT64_MAX;
	uint64_t t39 = 22721LLU;

	t39 = ((x205/x206)+(x207*x208));

	if (t39 != 18446744073709487689LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x209 = 156464739354601LL;
	static uint16_t x210 = UINT16_MAX;
	volatile int64_t t40 = -42883743253506205LL;

	t40 = ((x209/x210)+(x211*x212));

	if (t40 != -9223372034467276924LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x217 = -14;
	int8_t x218 = -1;
	static uint64_t x219 = 78549371409819994LLU;
	static uint32_t x220 = 3309414U;
	uint64_t t41 = 921073468LLU;

	t41 = ((x217/x218)+(x219*x220));

	if (t41 != 871948143024250858LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x221 = -184;
	int16_t x222 = INT16_MIN;
	uint64_t x224 = 4204LLU;
	uint64_t t42 = 186568650454407819LLU;

	t42 = ((x221/x222)+(x223*x224));

	if (t42 != 18446744073709013504LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x226 = INT64_MIN;
	static int32_t x227 = -117604371;
	int32_t x228 = -1;
	volatile int64_t t43 = -676LL;

	t43 = ((x225/x226)+(x227*x228));

	if (t43 != 117604371LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x233 = -220;
	int16_t x234 = -1;
	uint8_t x235 = 1U;
	int16_t x236 = INT16_MIN;
	int32_t t44 = -26081646;

	t44 = ((x233/x234)+(x235*x236));

	if (t44 != -32548) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x237 = UINT16_MAX;
	int32_t x238 = INT32_MAX;
	uint16_t x239 = 0U;
	volatile int32_t x240 = 23495015;
	int32_t t45 = -18883;

	t45 = ((x237/x238)+(x239*x240));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x242 = INT64_MAX;
	int8_t x243 = INT8_MIN;
	volatile int64_t t46 = -3099204184LL;

	t46 = ((x241/x242)+(x243*x244));

	if (t46 != -162176LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x249 = 105U;
	int64_t x250 = INT64_MAX;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = INT8_MAX;
	static int64_t t47 = 8282932469069LL;

	t47 = ((x249/x250)+(x251*x252));

	if (t47 != 32385LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = 10;
	uint8_t x255 = 1U;
	int16_t x256 = INT16_MIN;
	int32_t t48 = -25;

	t48 = ((x253/x254)+(x255*x256));

	if (t48 != -32778) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = 81768LL;
	int16_t x258 = INT16_MIN;
	int64_t t49 = -1253761479594LL;

	t49 = ((x257/x258)+(x259*x260));

	if (t49 != 6424LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x278 = UINT32_MAX;
	int8_t x279 = -13;
	int16_t x280 = 34;
	uint32_t t50 = 435973U;

	t50 = ((x277/x278)+(x279*x280));

	if (t50 != 4294966854U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x281 = -1LL;
	uint32_t x282 = 4850904U;
	int16_t x283 = INT16_MAX;
	volatile int64_t t51 = -321521662LL;

	t51 = ((x281/x282)+(x283*x284));

	if (t51 != -32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x285 = 423594U;
	int64_t x286 = -169507097302LL;
	volatile int8_t x288 = INT8_MIN;
	int64_t t52 = 20LL;

	t52 = ((x285/x286)+(x287*x288));

	if (t52 != 4294948096LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x293 = 2U;
	static int8_t x294 = -1;
	uint16_t x296 = 656U;
	int64_t t53 = -17LL;

	t53 = ((x293/x294)+(x295*x296));

	if (t53 != -658LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x297 = INT64_MIN;
	uint8_t x298 = 55U;
	int32_t x299 = 0;
	int8_t x300 = -1;

	t54 = ((x297/x298)+(x299*x300));

	if (t54 != -167697673397359560LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x301 = UINT64_MAX;
	uint64_t x302 = 3655509220667674LLU;
	static int32_t x303 = -219;
	volatile uint8_t x304 = UINT8_MAX;
	volatile uint64_t t55 = 115LLU;

	t55 = ((x301/x302)+(x303*x304));

	if (t55 != 18446744073709500817LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x306 = 93006831863361014LLU;
	uint64_t x307 = UINT64_MAX;
	static int32_t x308 = -1;
	static uint64_t t56 = 91569666412641406LLU;

	t56 = ((x305/x306)+(x307*x308));

	if (t56 != 100LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x309 = -1LL;
	int64_t x310 = -1LL;
	volatile uint64_t x311 = 112LLU;
	int8_t x312 = 0;
	uint64_t t57 = 16288LLU;

	t57 = ((x309/x310)+(x311*x312));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x313 = 0U;
	volatile uint16_t x314 = 2U;
	int64_t x315 = 2540994955LL;
	volatile int64_t t58 = -3746984343832954240LL;

	t58 = ((x313/x314)+(x315*x316));

	if (t58 != 4495020075395LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x317 = 8775418U;
	int32_t x318 = -1;
	static uint32_t x319 = 606316973U;
	volatile int64_t t59 = 3546LL;

	t59 = ((x317/x318)+(x319*x320));

	if (t59 != 11095642441771137LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x321 = -1;
	volatile uint16_t x322 = 1U;
	uint64_t x323 = 649837004LLU;
	int64_t x324 = INT64_MIN;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = ((x321/x322)+(x323*x324));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x325 = 242447425U;
	uint64_t x327 = 2LLU;
	int16_t x328 = 0;
	static uint64_t t61 = 195656LLU;

	t61 = ((x325/x326)+(x327*x328));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x329 = -1225;
	volatile uint8_t x330 = UINT8_MAX;
	uint16_t x331 = UINT16_MAX;
	uint64_t x332 = UINT64_MAX;

	t62 = ((x329/x330)+(x331*x332));

	if (t62 != 18446744073709486077LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x333 = 22;
	uint8_t x334 = UINT8_MAX;
	int32_t x336 = INT32_MAX;
	volatile int32_t t63 = 7;

	t63 = ((x333/x334)+(x335*x336));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x337 = -1;
	int64_t x338 = INT64_MIN;
	int16_t x340 = -1;
	volatile int64_t t64 = -741992384217632910LL;

	t64 = ((x337/x338)+(x339*x340));

	if (t64 != 3643652786LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x341 = -1;
	int16_t x342 = 8523;
	volatile int64_t x343 = -25069247515LL;
	uint64_t x344 = 22143662LLU;
	static uint64_t t65 = 250596758390764LLU;

	t65 = ((x341/x342)+(x343*x344));

	if (t65 != 17891619130143051686LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	uint64_t x348 = 2247798956146LLU;

	t66 = ((x345/x346)+(x347*x348));

	if (t66 != 5935444996898422784LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x349 = -1LL;
	static uint32_t x350 = UINT32_MAX;
	volatile int16_t x351 = INT16_MAX;
	int8_t x352 = 1;
	volatile int64_t t67 = -201956895548LL;

	t67 = ((x349/x350)+(x351*x352));

	if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x361 = UINT64_MAX;
	int32_t x364 = -1;
	uint64_t t68 = 13LLU;

	t68 = ((x361/x362)+(x363*x364));

	if (t68 != 18401038180921583528LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x365 = -1;
	static uint32_t x366 = 164478068U;
	volatile int64_t x368 = INT64_MIN;
	static volatile int64_t t69 = -61LL;

	t69 = ((x365/x366)+(x367*x368));

	if (t69 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x373 = INT32_MAX;
	volatile int8_t x374 = 5;
	uint8_t x375 = 1U;
	static int16_t x376 = INT16_MAX;

	t70 = ((x373/x374)+(x375*x376));

	if (t70 != 429529496) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x381 = -1;
	int16_t x382 = -1;
	uint64_t t71 = 15128LLU;

	t71 = ((x381/x382)+(x383*x384));

	if (t71 != 4209555493497822466LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x386 = 11949377599199LLU;
	int64_t x387 = -1LL;
	int32_t x388 = -9841;
	volatile uint64_t t72 = 1LLU;

	t72 = ((x385/x386)+(x387*x388));

	if (t72 != 9841LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x391 = -1;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t73 = -85936;

	t73 = ((x389/x390)+(x391*x392));

	if (t73 != 65281) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x393 = 4039;
	volatile uint32_t x394 = 242482674U;
	volatile int64_t x395 = INT64_MIN;
	volatile uint64_t t74 = 0LLU;

	t74 = ((x393/x394)+(x395*x396));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x397 = 0;
	uint64_t x398 = UINT64_MAX;
	volatile uint16_t x400 = 2557U;
	static uint64_t t75 = 24540LLU;

	t75 = ((x397/x398)+(x399*x400));

	if (t75 != 18446744073625763840LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x401 = INT64_MIN;
	int64_t x402 = INT64_MIN;
	static volatile uint16_t x403 = UINT16_MAX;
	uint64_t x404 = 934624153431036LLU;

	t76 = ((x401/x402)+(x403*x404));

	if (t76 != 5910361673974289413LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x413 = INT32_MIN;
	uint16_t x414 = 6734U;
	static volatile uint16_t x415 = UINT16_MAX;
	uint64_t x416 = 386921LLU;

	t77 = ((x413/x414)+(x415*x416));

	if (t77 != 25356548834LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x425 = INT64_MAX;
	uint8_t x426 = 60U;
	int64_t x427 = -1LL;
	int8_t x428 = -1;
	int64_t t78 = 226989782274334452LL;

	t78 = ((x425/x426)+(x427*x428));

	if (t78 != 153722867280912931LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x429 = INT8_MIN;
	uint64_t x430 = 342462795537LLU;
	uint64_t t79 = 1LLU;

	t79 = ((x429/x430)+(x431*x432));

	if (t79 != 62187902LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x434 = INT8_MIN;
	uint32_t x435 = 643634U;
	uint32_t t80 = 168849213U;

	t80 = ((x433/x434)+(x435*x436));

	if (t80 != 3926863310U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x438 = -916;
	volatile uint16_t x439 = 885U;
	uint32_t x440 = UINT32_MAX;
	uint32_t t81 = 118719557U;

	t81 = ((x437/x438)+(x439*x440));

	if (t81 != 2343529U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x446 = INT32_MIN;
	volatile uint32_t x447 = 178290U;
	volatile int64_t t82 = 82828160042938LL;

	t82 = ((x445/x446)+(x447*x448));

	if (t82 != 22642830LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x458 = 102U;
	uint32_t x459 = 120936U;
	uint32_t t83 = 2103U;

	t83 = ((x457/x458)+(x459*x460));

	if (t83 != 120694128U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x461 = 0LLU;
	uint16_t x462 = 3449U;
	int32_t x464 = INT32_MIN;
	volatile uint64_t t84 = 10LLU;

	t84 = ((x461/x462)+(x463*x464));

	if (t84 != 18446744062972133376LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x465 = 3LL;
	int16_t x466 = INT16_MAX;
	int8_t x467 = -1;
	volatile int64_t t85 = -22510LL;

	t85 = ((x465/x466)+(x467*x468));

	if (t85 != -255LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x477 = INT16_MIN;
	int16_t x478 = INT16_MIN;
	int64_t x479 = INT64_MAX;
	static int8_t x480 = -1;
	int64_t t86 = -5386LL;

	t86 = ((x477/x478)+(x479*x480));

	if (t86 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x481 = INT8_MAX;
	volatile int64_t x482 = -8391133LL;
	uint8_t x484 = 0U;
	static volatile uint64_t t87 = 2524817986434495LLU;

	t87 = ((x481/x482)+(x483*x484));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x485 = 0U;
	volatile int32_t x486 = INT32_MIN;
	static volatile int8_t x487 = INT8_MIN;
	volatile int8_t x488 = -1;

	t88 = ((x485/x486)+(x487*x488));

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x489 = INT8_MIN;
	int32_t x490 = -91;
	int16_t x491 = INT16_MIN;
	int32_t x492 = -46327;

	t89 = ((x489/x490)+(x491*x492));

	if (t89 != 1518043137) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x493 = 21;
	volatile int32_t x494 = INT32_MAX;
	uint32_t x495 = 88U;
	int8_t x496 = 0;
	uint32_t t90 = 28950761U;

	t90 = ((x493/x494)+(x495*x496));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x501 = UINT32_MAX;
	uint8_t x502 = 2U;
	int16_t x503 = -1396;
	int8_t x504 = 5;
	static volatile uint32_t t91 = 1641U;

	t91 = ((x501/x502)+(x503*x504));

	if (t91 != 2147476667U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x505 = INT16_MIN;
	volatile int8_t x506 = -23;
	volatile int16_t x507 = 1;
	static volatile uint64_t t92 = 55LLU;

	t92 = ((x505/x506)+(x507*x508));

	if (t92 != 1803LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x510 = 465U;
	static int64_t x511 = INT64_MIN;
	int64_t t93 = 180404247493LL;

	t93 = ((x509/x510)+(x511*x512));

	if (t93 != -9223372036854771430LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x513 = -3398085158LL;
	int64_t x514 = -1LL;
	uint64_t x515 = 15LLU;
	static int32_t x516 = INT32_MIN;

	t94 = ((x513/x514)+(x515*x516));

	if (t94 != 18446744044895382054LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x517 = INT32_MIN;
	int16_t x519 = -18;
	static volatile uint16_t x520 = UINT16_MAX;
	static int32_t t95 = -113284079;

	t95 = ((x517/x518)+(x519*x520));

	if (t95 != 15597586) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x525 = INT8_MIN;
	int32_t x527 = INT32_MAX;
	int32_t x528 = -1;
	int32_t t96 = -278;

	t96 = ((x525/x526)+(x527*x528));

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x530 = INT64_MIN;
	static uint32_t x531 = UINT32_MAX;
	static int64_t t97 = 0LL;

	t97 = ((x529/x530)+(x531*x532));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x534 = UINT64_MAX;
	volatile uint32_t x535 = 78073U;
	uint8_t x536 = 1U;
	uint64_t t98 = 134LLU;

	t98 = ((x533/x534)+(x535*x536));

	if (t98 != 78073LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x537 = -1;
	int8_t x538 = INT8_MIN;
	static int64_t x539 = -1LL;
	volatile uint8_t x540 = 6U;
	int64_t t99 = -7129161669120001LL;

	t99 = ((x537/x538)+(x539*x540));

	if (t99 != -6LL) { NG(); } else { ; }
	
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

