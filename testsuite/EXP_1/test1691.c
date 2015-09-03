#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 31;
uint32_t x4 = 3729995U;
int8_t x8 = -1;
volatile int32_t t1 = -59;
static uint64_t x17 = 4260376556468508791LLU;
int16_t x23 = INT16_MAX;
uint16_t x28 = UINT16_MAX;
uint32_t x30 = 254833989U;
int8_t x31 = -23;
volatile uint32_t t6 = 1756159303U;
int8_t x34 = -1;
uint64_t t7 = 7862359240LLU;
volatile int16_t x39 = INT16_MIN;
uint32_t t8 = 26U;
static uint64_t x43 = 12813902824857LLU;
uint16_t x44 = 118U;
volatile uint64_t t9 = 86409021746LLU;
int8_t x46 = 42;
int16_t x47 = INT16_MAX;
static int64_t x50 = -55494LL;
int8_t x51 = -3;
int64_t t11 = 355411753524LL;
volatile int64_t t12 = 129523LL;
uint8_t x62 = UINT8_MAX;
static int64_t x72 = INT64_MIN;
int64_t t16 = 853542506176207783LL;
int8_t x74 = INT8_MIN;
uint16_t x76 = UINT16_MAX;
int16_t x77 = -1;
int64_t x78 = -1LL;
static int8_t x80 = -1;
static int16_t x88 = INT16_MIN;
int64_t x94 = INT64_MIN;
static int16_t x99 = INT16_MIN;
volatile int16_t x100 = INT16_MIN;
uint16_t x101 = UINT16_MAX;
uint32_t x103 = UINT32_MAX;
int64_t x104 = INT64_MIN;
static uint64_t x111 = 1364LLU;
static volatile uint64_t t24 = 4322372LLU;
uint16_t x113 = 24U;
volatile uint64_t t25 = 1707317836LLU;
int64_t x121 = 4763639010186288LL;
uint8_t x122 = 34U;
int16_t x125 = INT16_MAX;
uint8_t x128 = UINT8_MAX;
volatile int64_t t30 = 4703LL;
int32_t x137 = -1;
int16_t x138 = INT16_MIN;
volatile uint32_t x139 = UINT32_MAX;
static int64_t x140 = -7023854546361029LL;
int16_t x145 = INT16_MAX;
int8_t x147 = -6;
int8_t x148 = INT8_MIN;
int32_t t32 = 8;
int16_t x150 = INT16_MIN;
static int64_t t34 = 801370819LL;
int64_t x160 = -7751960073LL;
static int16_t x161 = INT16_MIN;
int8_t x166 = -1;
static uint64_t t37 = 1961525296426929428LLU;
uint8_t x177 = 3U;
volatile int64_t x178 = 0LL;
volatile int64_t t39 = -1364560480111838LL;
int16_t x184 = INT16_MIN;
uint64_t x191 = 247878220LLU;
static uint16_t x194 = UINT16_MAX;
uint64_t x201 = 8743514264823LLU;
uint64_t t44 = 16610938LLU;
int16_t x211 = 1;
static volatile int64_t t45 = -66416082LL;
int64_t x223 = -1LL;
uint64_t x241 = UINT64_MAX;
uint32_t x242 = 10U;
volatile uint64_t x246 = 1800LLU;
volatile int32_t x266 = -1;
uint16_t x269 = 2U;
int8_t x280 = -1;
static uint32_t x287 = UINT32_MAX;
int8_t x290 = -1;
uint32_t x291 = UINT32_MAX;
volatile int64_t t65 = 268621727558212130LL;
static volatile int32_t x311 = INT32_MIN;
volatile uint32_t t68 = 15U;
int64_t x314 = INT64_MAX;
uint64_t t69 = 77773LLU;
int16_t x317 = -877;
volatile int64_t t71 = 72630350826985175LL;
volatile int8_t x337 = -24;
int64_t t73 = -1LL;
static int32_t x341 = 999;
int16_t x355 = INT16_MIN;
volatile int64_t t80 = 94370524582550512LL;
int32_t x380 = INT32_MIN;
static uint64_t x383 = 267834766LLU;
volatile uint64_t t83 = 888240964879296272LLU;
int16_t x387 = -1398;
volatile uint64_t t84 = 19019617337LLU;
static uint64_t x392 = 33598924265382LLU;
volatile int32_t t86 = 30;
uint64_t t88 = 3768896734344140395LLU;
int8_t x405 = INT8_MIN;
int16_t x410 = -2017;
volatile int8_t x413 = 34;
int32_t x415 = -1;
volatile int64_t t92 = 1852613795251939963LL;
static uint8_t x422 = UINT8_MAX;
volatile uint16_t x431 = 143U;
volatile uint8_t x432 = 27U;
int32_t x437 = -1;
static uint8_t x440 = UINT8_MAX;
static int32_t t96 = 46;
int64_t x444 = INT64_MAX;
uint16_t x448 = 232U;
uint16_t x450 = 2125U;


void f0(void) {
	int64_t x1 = 3102235949613LL;
	static uint64_t x2 = 193036746LLU;
	static uint64_t t0 = 5794388770732LLU;

	t0 = (((x1&x2)+x3)+x4);

	if (t0 != 196766322LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint16_t x6 = 15U;
	int8_t x7 = INT8_MIN;

	t1 = (((x5&x6)+x7)+x8);

	if (t1 != -129) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 702U;
	static volatile int32_t x14 = -1;
	int32_t x15 = -140153986;
	int64_t x16 = -1LL;
	int64_t t2 = 20557179781364695LL;

	t2 = (((x13&x14)+x15)+x16);

	if (t2 != -140153285LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MAX;
	int16_t x19 = -1;
	int8_t x20 = -1;
	uint64_t t3 = 1210538687LLU;

	t3 = (((x17&x18)+x19)+x20);

	if (t3 != 117LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 0;
	static uint8_t x22 = UINT8_MAX;
	int8_t x24 = 1;
	int32_t t4 = 3;

	t4 = (((x21&x22)+x23)+x24);

	if (t4 != 32768) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = INT32_MIN;
	volatile uint32_t x26 = UINT32_MAX;
	static int64_t x27 = INT64_MIN;
	int64_t t5 = -61LL;

	t5 = (((x25&x26)+x27)+x28);

	if (t5 != -9223372034707226625LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -8581;
	int8_t x32 = INT8_MIN;

	t6 = (((x29&x30)+x31)+x32);

	if (t6 != 254825386U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	uint64_t x35 = 1799LLU;
	int64_t x36 = INT64_MAX;

	t7 = (((x33&x34)+x35)+x36);

	if (t7 != 9223372036854843141LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = -1;
	static uint32_t x40 = UINT32_MAX;

	t8 = (((x37&x38)+x39)+x40);

	if (t8 != 4294934399U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 153U;
	static int32_t x42 = -1;

	t9 = (((x41&x42)+x43)+x44);

	if (t9 != 12813902825128LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	volatile int64_t x48 = INT64_MIN;
	volatile int64_t t10 = -387431500557168605LL;

	t10 = (((x45&x46)+x47)+x48);

	if (t10 != -9223372036854742999LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x49 = 61024918U;
	int8_t x52 = INT8_MIN;

	t11 = (((x49&x50)+x51)+x52);

	if (t11 != 61022607LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 14U;
	int64_t x54 = INT64_MAX;
	int16_t x55 = INT16_MAX;
	int32_t x56 = INT32_MIN;

	t12 = (((x53&x54)+x55)+x56);

	if (t12 != -2147450867LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = UINT16_MAX;
	static int8_t x58 = INT8_MAX;
	uint32_t x59 = 384144U;
	static uint8_t x60 = UINT8_MAX;
	volatile uint32_t t13 = 22U;

	t13 = (((x57&x58)+x59)+x60);

	if (t13 != 384526U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -10;
	static int16_t x63 = -477;
	uint32_t x64 = 763721109U;
	uint32_t t14 = 124362U;

	t14 = (((x61&x62)+x63)+x64);

	if (t14 != 763720878U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x65 = UINT32_MAX;
	int32_t x66 = -1;
	static uint16_t x67 = 13U;
	uint8_t x68 = 41U;
	uint32_t t15 = 599631U;

	t15 = (((x65&x66)+x67)+x68);

	if (t15 != 53U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = INT16_MAX;
	int64_t x70 = -74412642304396134LL;
	int16_t x71 = -1;

	t16 = (((x69&x70)+x71)+x72);

	if (t16 != -9223372036854745959LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = 7611;
	static uint16_t x75 = 600U;
	static int32_t t17 = 323854;

	t17 = (((x73&x74)+x75)+x76);

	if (t17 != 73687) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x79 = 28;
	volatile int64_t t18 = 44LL;

	t18 = (((x77&x78)+x79)+x80);

	if (t18 != 26LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = INT16_MAX;
	uint64_t x82 = 60624527687LLU;
	int32_t x83 = INT32_MAX;
	uint64_t x84 = 65607845565LLU;
	volatile uint64_t t19 = 933820LLU;

	t19 = (((x81&x82)+x83)+x84);

	if (t19 != 67755354115LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 0U;
	int64_t x86 = INT64_MAX;
	uint8_t x87 = 1U;
	volatile int64_t t20 = 193640676546LL;

	t20 = (((x85&x86)+x87)+x88);

	if (t20 != -32767LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 55U;
	int32_t x95 = -957087632;
	int64_t x96 = -1LL;
	static volatile int64_t t21 = -1242180633LL;

	t21 = (((x93&x94)+x95)+x96);

	if (t21 != -957087633LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x97 = 9;
	static int64_t x98 = -1LL;
	volatile int64_t t22 = -1LL;

	t22 = (((x97&x98)+x99)+x100);

	if (t22 != -65527LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x102 = INT32_MIN;
	volatile int64_t t23 = -14441803149LL;

	t23 = (((x101&x102)+x103)+x104);

	if (t23 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = UINT16_MAX;
	volatile uint8_t x110 = 93U;
	int8_t x112 = -1;

	t24 = (((x109&x110)+x111)+x112);

	if (t24 != 1456LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x114 = UINT64_MAX;
	static int8_t x115 = -1;
	uint64_t x116 = 12779156349013LLU;

	t25 = (((x113&x114)+x115)+x116);

	if (t25 != 12779156349036LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = 503441098;
	volatile int32_t x118 = INT32_MAX;
	volatile int16_t x119 = INT16_MAX;
	int32_t x120 = -1;
	int32_t t26 = 28669435;

	t26 = (((x117&x118)+x119)+x120);

	if (t26 != 503473864) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x123 = INT64_MIN;
	uint64_t x124 = UINT64_MAX;
	uint64_t t27 = 7983910638259857733LLU;

	t27 = (((x121&x122)+x123)+x124);

	if (t27 != 9223372036854775839LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x126 = INT16_MIN;
	static int8_t x127 = -3;
	volatile int32_t t28 = 58848;

	t28 = (((x125&x126)+x127)+x128);

	if (t28 != 252) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = UINT8_MAX;
	int32_t x131 = 1;
	uint32_t x132 = UINT32_MAX;
	uint32_t t29 = 11092U;

	t29 = (((x129&x130)+x131)+x132);

	if (t29 != 255U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MIN;
	int32_t x134 = INT32_MAX;
	int64_t x135 = -1LL;
	uint8_t x136 = 1U;

	t30 = (((x133&x134)+x135)+x136);

	if (t30 != 2147450880LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t t31 = -93183396740178284LL;

	t31 = (((x137&x138)+x139)+x140);

	if (t31 != -7023850251426502LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x146 = 5U;

	t32 = (((x145&x146)+x147)+x148);

	if (t32 != -129) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x149 = 922U;
	int16_t x151 = INT16_MAX;
	int8_t x152 = INT8_MIN;
	static uint32_t t33 = 1897U;

	t33 = (((x149&x150)+x151)+x152);

	if (t33 != 32639U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x153 = INT8_MIN;
	int32_t x154 = -194057;
	int64_t x155 = -1035517649665943LL;
	uint8_t x156 = UINT8_MAX;

	t34 = (((x153&x154)+x155)+x156);

	if (t34 != -1035517649859864LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x157 = 179LLU;
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MAX;
	uint64_t t35 = 4232774929LLU;

	t35 = (((x157&x158)+x159)+x160);

	if (t35 != 18446744068105075369LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x162 = 0U;
	volatile uint32_t x163 = 165596U;
	int64_t x164 = INT64_MIN;
	static volatile int64_t t36 = -156955190782003LL;

	t36 = (((x161&x162)+x163)+x164);

	if (t36 != -9223372036854610212LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 0U;
	volatile uint64_t x167 = 91749078032421LLU;
	uint64_t x168 = 8933106056679198936LLU;

	t37 = (((x165&x166)+x167)+x168);

	if (t37 != 8933197805757231357LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x169 = UINT64_MAX;
	uint64_t x170 = 9210118733771967LLU;
	static uint8_t x171 = 1U;
	static volatile int32_t x172 = INT32_MAX;
	uint64_t t38 = 8382932832314LLU;

	t38 = (((x169&x170)+x171)+x172);

	if (t38 != 9210120881255615LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x179 = INT8_MIN;
	int64_t x180 = -977LL;

	t39 = (((x177&x178)+x179)+x180);

	if (t39 != -1105LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = -1;
	static int8_t x182 = INT8_MAX;
	int64_t x183 = 6996LL;
	int64_t t40 = -60708538LL;

	t40 = (((x181&x182)+x183)+x184);

	if (t40 != -25645LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x185 = INT32_MIN;
	uint16_t x186 = 2340U;
	int64_t x187 = -54360882LL;
	static int8_t x188 = 0;
	int64_t t41 = 33817708004079LL;

	t41 = (((x185&x186)+x187)+x188);

	if (t41 != -54360882LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x189 = -1;
	int8_t x190 = -1;
	volatile int64_t x192 = INT64_MAX;
	static uint64_t t42 = 21213841364524LLU;

	t42 = (((x189&x190)+x191)+x192);

	if (t42 != 9223372037102654026LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = 1U;
	volatile int32_t x195 = INT32_MIN;
	int16_t x196 = 720;
	int32_t t43 = -20;

	t43 = (((x193&x194)+x195)+x196);

	if (t43 != -2147482927) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x202 = 14187U;
	int8_t x203 = -4;
	static uint32_t x204 = UINT32_MAX;

	t44 = (((x201&x202)+x203)+x204);

	if (t44 != 4294972510LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = 14U;
	int64_t x210 = -626016LL;
	static volatile uint8_t x212 = 0U;

	t45 = (((x209&x210)+x211)+x212);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = 11859;
	int8_t x218 = -4;
	int64_t x219 = 1LL;
	int16_t x220 = INT16_MIN;
	int64_t t46 = -102873LL;

	t46 = (((x217&x218)+x219)+x220);

	if (t46 != -20911LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x221 = 13U;
	int16_t x222 = -1;
	int8_t x224 = INT8_MAX;
	static volatile int64_t t47 = 28449335514LL;

	t47 = (((x221&x222)+x223)+x224);

	if (t47 != 139LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = UINT64_MAX;
	uint32_t x226 = 1465U;
	int16_t x227 = 0;
	int8_t x228 = 5;
	volatile uint64_t t48 = 6206LLU;

	t48 = (((x225&x226)+x227)+x228);

	if (t48 != 1470LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = -6;
	static uint64_t x230 = 1411LLU;
	volatile uint32_t x231 = 463767U;
	static volatile int8_t x232 = 1;
	uint64_t t49 = 55682216801LLU;

	t49 = (((x229&x230)+x231)+x232);

	if (t49 != 465178LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x237 = INT16_MAX;
	uint8_t x238 = UINT8_MAX;
	int32_t x239 = INT32_MIN;
	int32_t x240 = 196102;
	int32_t t50 = 1702849;

	t50 = (((x237&x238)+x239)+x240);

	if (t50 != -2147287291) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x243 = 5;
	int64_t x244 = INT64_MIN;
	uint64_t t51 = 124161047894552LLU;

	t51 = (((x241&x242)+x243)+x244);

	if (t51 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x245 = INT64_MIN;
	int32_t x247 = -1;
	volatile int16_t x248 = INT16_MIN;
	volatile uint64_t t52 = 200598289665LLU;

	t52 = (((x245&x246)+x247)+x248);

	if (t52 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x249 = INT8_MIN;
	static uint32_t x250 = 25U;
	int16_t x251 = 13741;
	int32_t x252 = -1;
	volatile uint32_t t53 = 956U;

	t53 = (((x249&x250)+x251)+x252);

	if (t53 != 13740U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x253 = INT32_MIN;
	int8_t x254 = -1;
	static uint32_t x255 = UINT32_MAX;
	int64_t x256 = 62LL;
	volatile int64_t t54 = 1752819LL;

	t54 = (((x253&x254)+x255)+x256);

	if (t54 != 2147483709LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = INT64_MAX;
	int16_t x258 = 19;
	uint64_t x259 = UINT64_MAX;
	uint8_t x260 = 2U;
	volatile uint64_t t55 = 1618044120LLU;

	t55 = (((x257&x258)+x259)+x260);

	if (t55 != 20LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = -1;
	uint32_t x262 = UINT32_MAX;
	volatile int8_t x263 = INT8_MIN;
	static int16_t x264 = INT16_MIN;
	uint32_t t56 = 28732U;

	t56 = (((x261&x262)+x263)+x264);

	if (t56 != 4294934399U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = INT16_MIN;
	int32_t x267 = -3592417;
	int32_t x268 = INT32_MAX;
	int32_t t57 = 34095;

	t57 = (((x265&x266)+x267)+x268);

	if (t57 != 2143858462) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x270 = UINT64_MAX;
	volatile uint8_t x271 = 0U;
	uint16_t x272 = 4U;
	uint64_t t58 = 86807245279011LLU;

	t58 = (((x269&x270)+x271)+x272);

	if (t58 != 6LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x273 = 18580440031LLU;
	volatile uint32_t x274 = 55225755U;
	static int16_t x275 = 2247;
	int64_t x276 = -1LL;
	volatile uint64_t t59 = 265315LLU;

	t59 = (((x273&x274)+x275)+x276);

	if (t59 != 55183969LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = -29;
	int16_t x278 = INT16_MIN;
	volatile int16_t x279 = -1;
	int32_t t60 = -53193607;

	t60 = (((x277&x278)+x279)+x280);

	if (t60 != -32770) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = INT8_MIN;
	uint64_t x282 = 259271516624LLU;
	uint8_t x283 = 4U;
	uint16_t x284 = 2U;
	volatile uint64_t t61 = 15477029LLU;

	t61 = (((x281&x282)+x283)+x284);

	if (t61 != 259271516550LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = -1;
	static volatile int16_t x286 = 12;
	int8_t x288 = -1;
	volatile uint32_t t62 = 2086018U;

	t62 = (((x285&x286)+x287)+x288);

	if (t62 != 10U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x289 = -1;
	int32_t x292 = 8251709;
	uint32_t t63 = 508027U;

	t63 = (((x289&x290)+x291)+x292);

	if (t63 != 8251707U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x293 = INT64_MIN;
	volatile uint32_t x294 = UINT32_MAX;
	int64_t x295 = INT64_MIN;
	static uint32_t x296 = 2243U;
	volatile int64_t t64 = -61915013505186693LL;

	t64 = (((x293&x294)+x295)+x296);

	if (t64 != -9223372036854773565LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = -1LL;
	uint8_t x298 = 6U;
	int16_t x299 = INT16_MIN;
	int32_t x300 = -17;

	t65 = (((x297&x298)+x299)+x300);

	if (t65 != -32779LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = INT64_MAX;
	volatile int16_t x302 = INT16_MIN;
	int8_t x303 = -1;
	int64_t x304 = INT64_MIN;
	int64_t t66 = 34LL;

	t66 = (((x301&x302)+x303)+x304);

	if (t66 != -32769LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x305 = 4212U;
	int32_t x306 = 26653989;
	uint64_t x307 = 36LLU;
	static int8_t x308 = -2;
	volatile uint64_t t67 = 3483LLU;

	t67 = (((x305&x306)+x307)+x308);

	if (t67 != 4166LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x309 = 2112333U;
	int16_t x310 = INT16_MIN;
	int8_t x312 = INT8_MIN;

	t68 = (((x309&x310)+x311)+x312);

	if (t68 != 2149580672U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x313 = 4488U;
	uint64_t x315 = 1421455774588672LLU;
	uint64_t x316 = UINT64_MAX;

	t69 = (((x313&x314)+x315)+x316);

	if (t69 != 1421455774593159LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x318 = UINT32_MAX;
	static uint8_t x319 = 2U;
	volatile uint32_t x320 = 8546U;
	volatile uint32_t t70 = 2008U;

	t70 = (((x317&x318)+x319)+x320);

	if (t70 != 7671U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x325 = UINT32_MAX;
	volatile int64_t x326 = INT64_MIN;
	int16_t x327 = -1;
	uint32_t x328 = UINT32_MAX;

	t71 = (((x325&x326)+x327)+x328);

	if (t71 != 4294967294LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x333 = 12190880007LLU;
	uint32_t x334 = 349833U;
	volatile int32_t x335 = INT32_MIN;
	volatile int64_t x336 = -4881672529613748LL;
	uint64_t t72 = 5832635808132797620LLU;

	t72 = (((x333&x334)+x335)+x336);

	if (t72 != 18441862399032458317LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x338 = -1LL;
	static uint16_t x339 = UINT16_MAX;
	uint8_t x340 = 1U;

	t73 = (((x337&x338)+x339)+x340);

	if (t73 != 65512LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MAX;
	static volatile uint8_t x344 = 0U;
	volatile int32_t t74 = INT32_MAX;

	t74 = (((x341&x342)+x343)+x344);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x345 = 5182135987538676LLU;
	int64_t x346 = -1LL;
	int8_t x347 = INT8_MIN;
	int64_t x348 = -52378806410LL;
	static uint64_t t75 = 1702102295591463983LLU;

	t75 = (((x345&x346)+x347)+x348);

	if (t75 != 5182083608732138LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = -1LL;
	int8_t x354 = -1;
	volatile int8_t x356 = -1;
	int64_t t76 = -1328555915622754015LL;

	t76 = (((x353&x354)+x355)+x356);

	if (t76 != -32770LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x357 = -1LL;
	uint16_t x358 = 103U;
	int8_t x359 = 3;
	int64_t x360 = INT64_MIN;
	volatile int64_t t77 = 4812927069449750LL;

	t77 = (((x357&x358)+x359)+x360);

	if (t77 != -9223372036854775702LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x362 = 22;
	volatile uint8_t x363 = 3U;
	int8_t x364 = -1;
	volatile int32_t t78 = 33169;

	t78 = (((x361&x362)+x363)+x364);

	if (t78 != 24) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = 0;
	volatile int64_t x366 = INT64_MIN;
	volatile uint32_t x367 = 1U;
	int16_t x368 = INT16_MIN;
	static volatile int64_t t79 = 3311960LL;

	t79 = (((x365&x366)+x367)+x368);

	if (t79 != -32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x369 = 29U;
	int64_t x370 = 103807097LL;
	int8_t x371 = -1;
	uint32_t x372 = 244U;

	t80 = (((x369&x370)+x371)+x372);

	if (t80 != 268LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x373 = 189U;
	uint32_t x374 = 424283022U;
	uint16_t x375 = 12714U;
	int16_t x376 = -8314;
	static uint32_t t81 = 11581U;

	t81 = (((x373&x374)+x375)+x376);

	if (t81 != 4540U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = -1LL;
	int8_t x378 = INT8_MIN;
	uint16_t x379 = 137U;
	volatile int64_t t82 = 537LL;

	t82 = (((x377&x378)+x379)+x380);

	if (t82 != -2147483639LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = INT32_MIN;
	volatile int16_t x382 = 405;
	int8_t x384 = INT8_MIN;

	t83 = (((x381&x382)+x383)+x384);

	if (t83 != 267834638LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MAX;
	int64_t x386 = INT64_MIN;
	uint64_t x388 = 1602084408492LLU;

	t84 = (((x385&x386)+x387)+x388);

	if (t84 != 1602084407094LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x389 = 641050780424362LLU;
	volatile int64_t x390 = INT64_MIN;
	uint8_t x391 = 11U;
	volatile uint64_t t85 = 469LLU;

	t85 = (((x389&x390)+x391)+x392);

	if (t85 != 33598924265393LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x393 = -1;
	uint8_t x394 = UINT8_MAX;
	int8_t x395 = INT8_MAX;
	volatile int16_t x396 = -1;

	t86 = (((x393&x394)+x395)+x396);

	if (t86 != 381) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x397 = 1U;
	int8_t x398 = -3;
	uint64_t x399 = UINT64_MAX;
	uint8_t x400 = UINT8_MAX;
	static volatile uint64_t t87 = 25297230460LLU;

	t87 = (((x397&x398)+x399)+x400);

	if (t87 != 255LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = 141897293;
	int16_t x402 = INT16_MIN;
	uint64_t x403 = 441896LLU;
	uint64_t x404 = UINT64_MAX;

	t88 = (((x401&x402)+x403)+x404);

	if (t88 != 142327335LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x406 = UINT16_MAX;
	volatile int8_t x407 = INT8_MIN;
	volatile int16_t x408 = -1;
	int32_t t89 = -7;

	t89 = (((x405&x406)+x407)+x408);

	if (t89 != 65279) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x409 = UINT32_MAX;
	int16_t x411 = INT16_MAX;
	uint8_t x412 = 5U;
	volatile uint32_t t90 = 204667297U;

	t90 = (((x409&x410)+x411)+x412);

	if (t90 != 30755U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x414 = 850;
	int8_t x416 = -55;
	int32_t t91 = 3700;

	t91 = (((x413&x414)+x415)+x416);

	if (t91 != -54) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = INT64_MAX;
	int8_t x418 = INT8_MAX;
	volatile int32_t x419 = INT32_MIN;
	int8_t x420 = INT8_MAX;

	t92 = (((x417&x418)+x419)+x420);

	if (t92 != -2147483394LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x421 = INT64_MIN;
	int32_t x423 = INT32_MAX;
	int16_t x424 = INT16_MIN;
	static volatile int64_t t93 = 273423901240624721LL;

	t93 = (((x421&x422)+x423)+x424);

	if (t93 != 2147450879LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x425 = 102U;
	uint16_t x426 = 11U;
	uint8_t x427 = UINT8_MAX;
	int32_t x428 = INT32_MIN;
	volatile int32_t t94 = 349920676;

	t94 = (((x425&x426)+x427)+x428);

	if (t94 != -2147483391) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x429 = -5;
	int8_t x430 = -1;
	static volatile int32_t t95 = -741;

	t95 = (((x429&x430)+x431)+x432);

	if (t95 != 165) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x438 = 0;
	int8_t x439 = INT8_MIN;

	t96 = (((x437&x438)+x439)+x440);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = INT32_MAX;
	uint8_t x442 = UINT8_MAX;
	int32_t x443 = INT32_MIN;
	int64_t t97 = 48LL;

	t97 = (((x441&x442)+x443)+x444);

	if (t97 != 9223372034707292414LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = -1;
	uint8_t x446 = 10U;
	volatile int32_t x447 = -39230;
	int32_t t98 = -1;

	t98 = (((x445&x446)+x447)+x448);

	if (t98 != -38988) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x449 = INT64_MIN;
	int16_t x451 = INT16_MIN;
	int64_t x452 = INT64_MAX;
	volatile int64_t t99 = -91244987141127229LL;

	t99 = (((x449&x450)+x451)+x452);

	if (t99 != 9223372036854743039LL) { NG(); } else { ; }
	
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

