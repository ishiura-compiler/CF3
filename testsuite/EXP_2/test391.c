#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x9 = 29712414;
int64_t x10 = -1LL;
volatile uint32_t t2 = 0U;
int16_t x29 = -72;
static uint32_t x30 = 254850329U;
uint32_t x32 = 34543616U;
int64_t t5 = -1918LL;
int64_t x37 = 62LL;
uint64_t t6 = 1LLU;
uint32_t x42 = 2U;
int16_t x44 = 0;
volatile int64_t t7 = 1164097LL;
static uint64_t x53 = 519596206065519347LLU;
int8_t x76 = -1;
uint32_t t10 = 14532969U;
static uint32_t x78 = UINT32_MAX;
uint32_t t11 = 1868612U;
volatile int64_t x84 = INT64_MIN;
static int64_t x85 = -1218045261548159591LL;
int8_t x88 = -1;
volatile int8_t x93 = INT8_MIN;
int64_t x106 = -1LL;
int16_t x135 = INT16_MIN;
volatile uint32_t x137 = 397784275U;
volatile int64_t x141 = -1LL;
volatile int8_t x144 = 0;
uint64_t x152 = 730156950469LLU;
uint32_t x153 = 30550038U;
static int64_t x154 = -1LL;
volatile int64_t t23 = 2326LL;
uint8_t x158 = UINT8_MAX;
static volatile uint8_t x160 = UINT8_MAX;
int16_t x161 = INT16_MIN;
int16_t x167 = INT16_MAX;
int64_t t26 = -11LL;
int8_t x169 = INT8_MAX;
uint64_t x174 = 7812607LLU;
volatile uint64_t x175 = UINT64_MAX;
volatile uint64_t t29 = 43231420LLU;
static int8_t x196 = INT8_MAX;
uint64_t x227 = 72965453143LLU;
uint16_t x229 = 2471U;
volatile int8_t x237 = -1;
int16_t x238 = INT16_MIN;
int32_t x241 = INT32_MIN;
int64_t t40 = -146314768LL;
static uint32_t x245 = 32353U;
volatile int64_t t41 = 17834LL;
static int8_t x253 = -6;
volatile int8_t x254 = INT8_MAX;
int32_t t42 = -1604416;
uint8_t x260 = 104U;
int8_t x266 = INT8_MIN;
volatile uint32_t x270 = 48426U;
static int16_t x272 = -1;
int16_t x278 = 23;
uint8_t x279 = UINT8_MAX;
int32_t x281 = -1;
volatile int8_t x282 = -1;
int16_t x283 = 1;
int16_t x288 = INT16_MIN;
int16_t x290 = INT16_MIN;
uint64_t x291 = 46243017704LLU;
int8_t x292 = -23;
static uint32_t x320 = 132663638U;
uint32_t x321 = 38919747U;
static volatile int64_t x322 = -1102399LL;
static int8_t x323 = -44;
uint16_t x331 = UINT16_MAX;
uint16_t x332 = 34U;
int64_t t59 = 496167944754328593LL;
uint8_t x338 = 117U;
static int32_t t60 = 1011805808;
int32_t x346 = -1;
volatile int32_t x359 = -3;
int16_t x364 = INT16_MIN;
int8_t x369 = INT8_MAX;
static uint32_t x376 = 573U;
int16_t x391 = INT16_MIN;
int32_t t69 = 1594;
uint64_t x400 = UINT64_MAX;
int64_t x402 = -1LL;
volatile int64_t t72 = 5883987LL;
uint64_t x406 = UINT64_MAX;
int8_t x407 = INT8_MAX;
uint16_t x412 = UINT16_MAX;
int32_t x415 = -70;
uint16_t x416 = UINT16_MAX;
uint64_t x421 = 15LLU;
int16_t x422 = INT16_MIN;
volatile uint64_t x423 = UINT64_MAX;
int16_t x433 = -1;
volatile int64_t t78 = INT64_MAX;
static int16_t x456 = -1;
uint64_t x457 = 163412893172879LLU;
uint16_t x458 = UINT16_MAX;
int16_t x469 = -1;
uint32_t x480 = 18303631U;
int16_t x493 = 4;
int32_t x498 = -3055457;
int64_t t88 = -77969664203LL;
int32_t x510 = INT32_MIN;
int8_t x518 = 1;
uint16_t x519 = 171U;
int32_t t91 = -89003;
static uint8_t x525 = UINT8_MAX;
int8_t x529 = -49;
uint64_t x531 = 56639116LLU;
uint64_t t94 = 191608027019LLU;
int16_t x535 = INT16_MIN;
uint32_t x536 = 63064868U;
static int8_t x539 = INT8_MIN;
uint64_t x562 = 1LLU;
static int64_t x568 = INT64_MIN;


void f0(void) {
	int32_t x1 = -1;
	uint32_t x2 = 18883178U;
	int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -68575268205061118LL;

	t0 = ((x1%(x2*x3))+x4);

	if (t0 != -9223372036315649537LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x11 = 290LLU;
	int8_t x12 = 26;
	uint64_t t1 = 2LLU;

	t1 = ((x9%(x10*x11))+x12);

	if (t1 != 29712440LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MAX;
	static int32_t x18 = -2916;
	int8_t x19 = INT8_MIN;
	static uint32_t x20 = 1U;

	t2 = ((x17%(x18*x19))+x20);

	if (t2 != 128U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = -38628;
	int64_t x26 = -1LL;
	static int8_t x27 = INT8_MIN;
	static uint8_t x28 = 5U;
	int64_t t3 = -178078LL;

	t3 = ((x25%(x26*x27))+x28);

	if (t3 != -95LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x31 = INT8_MAX;
	volatile uint32_t t4 = 823U;

	t4 = ((x29%(x30*x31))+x32);

	if (t4 != 2028290129U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 28U;
	int16_t x34 = INT16_MIN;
	int64_t x35 = -113905895284931LL;
	static volatile int16_t x36 = -1;

	t5 = ((x33%(x34*x35))+x36);

	if (t5 != 27LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x38 = UINT64_MAX;
	uint8_t x39 = UINT8_MAX;
	static int32_t x40 = INT32_MAX;

	t6 = ((x37%(x38*x39))+x40);

	if (t6 != 2147483709LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 901U;
	static int64_t x43 = -4367243979944358742LL;

	t7 = ((x41%(x42*x43))+x44);

	if (t7 != 901LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x54 = 1019689628;
	int64_t x55 = -3017LL;
	static uint64_t x56 = UINT64_MAX;
	volatile uint64_t t8 = 23461553709LLU;

	t8 = ((x53%(x54*x55))+x56);

	if (t8 != 519596206065519346LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = 11;
	uint16_t x58 = 1U;
	int32_t x59 = INT32_MIN;
	int32_t x60 = 41;
	int32_t t9 = 1;

	t9 = ((x57%(x58*x59))+x60);

	if (t9 != 52) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x73 = UINT32_MAX;
	uint32_t x74 = 591342U;
	volatile int32_t x75 = 25826;

	t10 = ((x73%(x74*x75))+x76);

	if (t10 != 1907870690U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x77 = 0;
	static int32_t x79 = -9581;
	volatile int8_t x80 = 7;

	t11 = ((x77%(x78*x79))+x80);

	if (t11 != 7U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x81 = INT8_MAX;
	int32_t x82 = -1;
	int16_t x83 = -1;
	int64_t t12 = INT64_MIN;

	t12 = ((x81%(x82*x83))+x84);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x86 = -1018;
	static uint16_t x87 = UINT16_MAX;
	static volatile int64_t t13 = 1LL;

	t13 = ((x85%(x86*x87))+x88);

	if (t13 != -35171802LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x94 = INT16_MAX;
	uint8_t x95 = 90U;
	int32_t x96 = 97351;
	static volatile int32_t t14 = -325569652;

	t14 = ((x93%(x94*x95))+x96);

	if (t14 != 97223) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x97 = 1U;
	static int16_t x98 = 76;
	static uint32_t x99 = 136U;
	int32_t x100 = -26;
	static volatile uint32_t t15 = 2086804U;

	t15 = ((x97%(x98*x99))+x100);

	if (t15 != 4294967271U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x105 = 3221U;
	static int16_t x107 = -1;
	uint16_t x108 = 1066U;
	volatile int64_t t16 = 6458455930556378LL;

	t16 = ((x105%(x106*x107))+x108);

	if (t16 != 1066LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = -1015069433;
	uint8_t x110 = 2U;
	int32_t x111 = 126996;
	static int16_t x112 = INT16_MIN;
	static int32_t t17 = -2065;

	t17 = ((x109%(x110*x111))+x112);

	if (t17 != -150169) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x125 = UINT64_MAX;
	int64_t x126 = 29708LL;
	static uint64_t x127 = UINT64_MAX;
	static int32_t x128 = INT32_MIN;
	static volatile uint64_t t18 = 7219062384811542975LLU;

	t18 = ((x125%(x126*x127))+x128);

	if (t18 != 18446744071562097675LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x133 = 50U;
	int8_t x134 = INT8_MAX;
	uint16_t x136 = 14678U;
	volatile int32_t t19 = 1;

	t19 = ((x133%(x134*x135))+x136);

	if (t19 != 14728) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x138 = 776680601242206551LLU;
	volatile int16_t x139 = -26;
	static uint64_t x140 = 12296LLU;
	uint64_t t20 = 128LLU;

	t20 = ((x137%(x138*x139))+x140);

	if (t20 != 397796571LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x142 = 37625362834262LLU;
	static uint32_t x143 = 5099U;
	static uint64_t t21 = 493739512LLU;

	t21 = ((x141%(x142*x143))+x144);

	if (t21 != 28978464886965567LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MAX;
	uint8_t x151 = 1U;
	uint64_t t22 = 62284146114077LLU;

	t22 = ((x149%(x150*x151))+x152);

	if (t22 != 730156950476LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x155 = -10337;
	static volatile int8_t x156 = INT8_MIN;

	t23 = ((x153%(x154*x155))+x156);

	if (t23 != 4075LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x157 = -3;
	uint16_t x159 = 49U;
	int32_t t24 = -479;

	t24 = ((x157%(x158*x159))+x160);

	if (t24 != 252) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x162 = 1;
	volatile int32_t x163 = INT32_MIN;
	uint8_t x164 = 28U;
	volatile int32_t t25 = -44673402;

	t25 = ((x161%(x162*x163))+x164);

	if (t25 != -32740) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x165 = INT64_MIN;
	int16_t x166 = -1;
	static int32_t x168 = -1;

	t26 = ((x165%(x166*x167))+x168);

	if (t26 != -9LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x170 = 139262780152230LLU;
	int64_t x171 = -1LL;
	static int32_t x172 = INT32_MAX;
	uint64_t t27 = 689353111315138614LLU;

	t27 = ((x169%(x170*x171))+x172);

	if (t27 != 2147483774LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x173 = 37;
	int16_t x176 = -1;
	uint64_t t28 = 28474LLU;

	t28 = ((x173%(x174*x175))+x176);

	if (t28 != 36LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x177 = 8485LLU;
	volatile uint16_t x178 = 20U;
	uint16_t x179 = 239U;
	int16_t x180 = INT16_MAX;

	t29 = ((x177%(x178*x179))+x180);

	if (t29 != 36472LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x185 = UINT16_MAX;
	static uint32_t x186 = 5U;
	static volatile uint16_t x187 = 29U;
	static int32_t x188 = 0;
	volatile uint32_t t30 = 45412241U;

	t30 = ((x185%(x186*x187))+x188);

	if (t30 != 140U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x193 = -10592;
	volatile int32_t x194 = -1;
	int16_t x195 = INT16_MIN;
	static volatile int32_t t31 = -39518;

	t31 = ((x193%(x194*x195))+x196);

	if (t31 != -10465) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x205 = 3U;
	static uint32_t x206 = UINT32_MAX;
	uint16_t x207 = 12452U;
	uint8_t x208 = UINT8_MAX;
	volatile uint32_t t32 = 99293988U;

	t32 = ((x205%(x206*x207))+x208);

	if (t32 != 258U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = UINT64_MAX;
	static uint64_t x211 = UINT64_MAX;
	int32_t x212 = -1980185;
	static volatile uint64_t t33 = 1280666876308683LLU;

	t33 = ((x209%(x210*x211))+x212);

	if (t33 != 18446744073707571431LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x213 = 14U;
	int32_t x214 = INT32_MIN;
	volatile uint64_t x215 = 751LLU;
	static int64_t x216 = INT64_MAX;
	uint64_t t34 = 690028LLU;

	t34 = ((x213%(x214*x215))+x216);

	if (t34 != 9223372036854775821LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x217 = UINT16_MAX;
	uint8_t x218 = 1U;
	volatile int8_t x219 = -25;
	static volatile int32_t x220 = INT32_MIN;
	volatile int32_t t35 = 227764854;

	t35 = ((x217%(x218*x219))+x220);

	if (t35 != -2147483638) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x225 = UINT32_MAX;
	static volatile uint8_t x226 = 5U;
	int16_t x228 = -1;
	uint64_t t36 = 3290203023153622LLU;

	t36 = ((x225%(x226*x227))+x228);

	if (t36 != 4294967294LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x230 = -448;
	uint16_t x231 = UINT16_MAX;
	volatile uint8_t x232 = 47U;
	volatile int32_t t37 = 747466596;

	t37 = ((x229%(x230*x231))+x232);

	if (t37 != 2518) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x233 = -1LL;
	int8_t x234 = INT8_MIN;
	int64_t x235 = -1LL;
	uint32_t x236 = UINT32_MAX;
	static int64_t t38 = 124535088424965LL;

	t38 = ((x233%(x234*x235))+x236);

	if (t38 != 4294967294LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x239 = INT16_MAX;
	static volatile uint64_t x240 = 196076527214LLU;
	uint64_t t39 = 4201729LLU;

	t39 = ((x237%(x238*x239))+x240);

	if (t39 != 196076527213LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x242 = 1U;
	static uint32_t x243 = UINT32_MAX;
	static int64_t x244 = INT64_MIN;

	t40 = ((x241%(x242*x243))+x244);

	if (t40 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x246 = UINT16_MAX;
	int32_t x247 = -1;
	int64_t x248 = 4029709083978LL;

	t41 = ((x245%(x246*x247))+x248);

	if (t41 != 4029709116331LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x255 = 15;
	int8_t x256 = -1;

	t42 = ((x253%(x254*x255))+x256);

	if (t42 != -7) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x257 = 126U;
	int8_t x258 = -15;
	int16_t x259 = INT16_MAX;
	volatile int32_t t43 = 1681544;

	t43 = ((x257%(x258*x259))+x260);

	if (t43 != 230) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = UINT8_MAX;
	int16_t x263 = 2;
	int16_t x264 = -1;
	volatile int64_t t44 = 1734181298807282402LL;

	t44 = ((x261%(x262*x263))+x264);

	if (t44 != -129LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x265 = 385198725U;
	volatile int8_t x267 = -1;
	int16_t x268 = 198;
	uint32_t t45 = 12U;

	t45 = ((x265%(x266*x267))+x268);

	if (t45 != 203U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x269 = INT16_MAX;
	uint64_t x271 = UINT64_MAX;
	static uint64_t t46 = 286393227258826LLU;

	t46 = ((x269%(x270*x271))+x272);

	if (t46 != 32766LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x277 = 4LL;
	int64_t x280 = -20LL;
	int64_t t47 = -402965140193177LL;

	t47 = ((x277%(x278*x279))+x280);

	if (t47 != -16LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x284 = INT32_MIN;
	static volatile int32_t t48 = INT32_MIN;

	t48 = ((x281%(x282*x283))+x284);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x285 = UINT8_MAX;
	int64_t x286 = 3104911LL;
	volatile int32_t x287 = INT32_MIN;
	volatile int64_t t49 = 3310LL;

	t49 = ((x285%(x286*x287))+x288);

	if (t49 != -32513LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x289 = 122U;
	volatile uint64_t t50 = 266438839610292841LLU;

	t50 = ((x289%(x290*x291))+x292);

	if (t50 != 99LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x293 = UINT32_MAX;
	int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = UINT8_MAX;
	volatile uint32_t t51 = 8U;

	t51 = ((x293%(x294*x295))+x296);

	if (t51 != 382U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x297 = -1;
	volatile uint16_t x298 = 12253U;
	static int64_t x299 = -1LL;
	int8_t x300 = -18;
	int64_t t52 = 255856795015LL;

	t52 = ((x297%(x298*x299))+x300);

	if (t52 != -19LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x301 = INT8_MAX;
	volatile int8_t x302 = INT8_MIN;
	static int8_t x303 = INT8_MAX;
	static int32_t x304 = INT32_MIN;
	volatile int32_t t53 = 3672483;

	t53 = ((x301%(x302*x303))+x304);

	if (t53 != -2147483521) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x305 = -1038639006067898392LL;
	int64_t x306 = -1LL;
	uint64_t x307 = 1543675150123LLU;
	volatile int16_t x308 = INT16_MAX;
	volatile uint64_t t54 = 1621405463279843664LLU;

	t54 = ((x305%(x306*x307))+x308);

	if (t54 != 17408105067641685991LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x313 = UINT32_MAX;
	int8_t x314 = INT8_MIN;
	volatile uint16_t x315 = UINT16_MAX;
	static int16_t x316 = -1;
	static volatile uint32_t t55 = 636747U;

	t55 = ((x313%(x314*x315))+x316);

	if (t55 != 8388478U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x317 = 6U;
	volatile int16_t x318 = -682;
	int16_t x319 = -2;
	uint32_t t56 = 7U;

	t56 = ((x317%(x318*x319))+x320);

	if (t56 != 132663644U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x324 = INT16_MIN;
	int64_t t57 = -12628248788876LL;

	t57 = ((x321%(x322*x323))+x324);

	if (t57 != 38886979LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x325 = INT8_MIN;
	uint64_t x326 = UINT64_MAX;
	uint16_t x327 = 2U;
	int64_t x328 = INT64_MIN;
	static volatile uint64_t t58 = 116369LLU;

	t58 = ((x325%(x326*x327))+x328);

	if (t58 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x329 = INT16_MIN;
	int64_t x330 = 18850760950LL;

	t59 = ((x329%(x330*x331))+x332);

	if (t59 != -32734LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x337 = INT8_MIN;
	volatile uint8_t x339 = UINT8_MAX;
	int8_t x340 = -1;

	t60 = ((x337%(x338*x339))+x340);

	if (t60 != -129) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x341 = UINT64_MAX;
	int8_t x342 = -1;
	int64_t x343 = 2014130LL;
	volatile uint64_t x344 = UINT64_MAX;
	uint64_t t61 = 150693654421392LLU;

	t61 = ((x341%(x342*x343))+x344);

	if (t61 != 2014128LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x345 = 31;
	uint16_t x347 = 23U;
	int16_t x348 = INT16_MIN;
	static int32_t t62 = 276205389;

	t62 = ((x345%(x346*x347))+x348);

	if (t62 != -32760) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x353 = 325U;
	int32_t x354 = INT32_MAX;
	uint64_t x355 = UINT64_MAX;
	uint16_t x356 = UINT16_MAX;
	uint64_t t63 = 2800207993394LLU;

	t63 = ((x353%(x354*x355))+x356);

	if (t63 != 65860LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x357 = -27;
	int64_t x358 = -1LL;
	int32_t x360 = INT32_MAX;
	int64_t t64 = 110477207703LL;

	t64 = ((x357%(x358*x359))+x360);

	if (t64 != 2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x361 = 111798932LL;
	volatile int16_t x362 = INT16_MIN;
	volatile uint32_t x363 = UINT32_MAX;
	int64_t t65 = -244903LL;

	t65 = ((x361%(x362*x363))+x364);

	if (t65 != -5484LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x365 = -1;
	volatile uint16_t x366 = UINT16_MAX;
	static volatile int16_t x367 = 368;
	int64_t x368 = -16975753297LL;
	volatile int64_t t66 = 139580LL;

	t66 = ((x365%(x366*x367))+x368);

	if (t66 != -16975753298LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x370 = 122152472937LLU;
	static int16_t x371 = INT16_MAX;
	uint64_t x372 = UINT64_MAX;
	uint64_t t67 = 33529791427630193LLU;

	t67 = ((x369%(x370*x371))+x372);

	if (t67 != 126LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x373 = 13U;
	int16_t x374 = 1;
	uint8_t x375 = 115U;
	uint32_t t68 = 78405U;

	t68 = ((x373%(x374*x375))+x376);

	if (t68 != 586U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x389 = -1;
	int8_t x390 = INT8_MIN;
	uint16_t x392 = UINT16_MAX;

	t69 = ((x389%(x390*x391))+x392);

	if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x393 = INT16_MIN;
	volatile int64_t x394 = 2406LL;
	int8_t x395 = INT8_MIN;
	int16_t x396 = -317;
	volatile int64_t t70 = -78078302736LL;

	t70 = ((x393%(x394*x395))+x396);

	if (t70 != -33085LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x397 = INT16_MAX;
	int64_t x398 = -1LL;
	static uint64_t x399 = 22LLU;
	volatile uint64_t t71 = 658625724279623LLU;

	t71 = ((x397%(x398*x399))+x400);

	if (t71 != 32766LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x401 = 60U;
	static int16_t x403 = 1;
	uint32_t x404 = 74218U;

	t72 = ((x401%(x402*x403))+x404);

	if (t72 != 74218LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x405 = UINT16_MAX;
	int32_t x408 = -3;
	uint64_t t73 = 751666LLU;

	t73 = ((x405%(x406*x407))+x408);

	if (t73 != 65532LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x409 = UINT8_MAX;
	int32_t x410 = INT32_MAX;
	int16_t x411 = -1;
	int32_t t74 = -18951;

	t74 = ((x409%(x410*x411))+x412);

	if (t74 != 65790) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x413 = INT32_MIN;
	static int64_t x414 = -1LL;
	static int64_t t75 = 33957587530683231LL;

	t75 = ((x413%(x414*x415))+x416);

	if (t75 != 65477LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x417 = INT32_MAX;
	uint32_t x418 = UINT32_MAX;
	int32_t x419 = INT32_MAX;
	volatile uint32_t x420 = 3U;
	volatile uint32_t t76 = 3U;

	t76 = ((x417%(x418*x419))+x420);

	if (t76 != 2147483650U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x424 = UINT32_MAX;
	static uint64_t t77 = 192284133876456535LLU;

	t77 = ((x421%(x422*x423))+x424);

	if (t77 != 4294967310LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x434 = -1LL;
	volatile int8_t x435 = -1;
	int64_t x436 = INT64_MAX;

	t78 = ((x433%(x434*x435))+x436);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x449 = -1;
	int64_t x450 = 1484720LL;
	static int32_t x451 = INT32_MIN;
	int16_t x452 = 184;
	int64_t t79 = -427LL;

	t79 = ((x449%(x450*x451))+x452);

	if (t79 != 183LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x453 = 8U;
	int8_t x454 = 2;
	static uint16_t x455 = UINT16_MAX;
	static volatile uint32_t t80 = 25261945U;

	t80 = ((x453%(x454*x455))+x456);

	if (t80 != 7U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x459 = UINT32_MAX;
	uint8_t x460 = UINT8_MAX;
	uint64_t t81 = 936482164976148LLU;

	t81 = ((x457%(x458*x459))+x460);

	if (t81 != 470970606LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x461 = UINT16_MAX;
	uint32_t x462 = 1U;
	uint32_t x463 = UINT32_MAX;
	int32_t x464 = 17474;
	volatile uint32_t t82 = 2042U;

	t82 = ((x461%(x462*x463))+x464);

	if (t82 != 83009U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x470 = INT16_MIN;
	static uint8_t x471 = 6U;
	uint32_t x472 = 1U;
	static uint32_t t83 = 1628775U;

	t83 = ((x469%(x470*x471))+x472);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x477 = -4447LL;
	uint32_t x478 = 160U;
	int8_t x479 = INT8_MIN;
	int64_t t84 = -6036573LL;

	t84 = ((x477%(x478*x479))+x480);

	if (t84 != 18299184LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x481 = -1;
	uint64_t x482 = 99LLU;
	static volatile uint64_t x483 = 28409611266046LLU;
	int16_t x484 = INT16_MAX;
	volatile uint64_t t85 = 88986726594LLU;

	t85 = ((x481%(x482*x483))+x484);

	if (t85 != 2031236119347250LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x494 = INT16_MAX;
	int16_t x495 = -1;
	volatile uint32_t x496 = 26U;
	static uint32_t t86 = 13U;

	t86 = ((x493%(x494*x495))+x496);

	if (t86 != 30U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x497 = INT64_MAX;
	uint64_t x499 = 108360724646LLU;
	int64_t x500 = -1LL;
	uint64_t t87 = 30105673090256355LLU;

	t87 = ((x497%(x498*x499))+x500);

	if (t87 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x501 = 3786;
	volatile uint8_t x502 = 5U;
	volatile int64_t x503 = 1718LL;
	uint8_t x504 = 10U;

	t88 = ((x501%(x502*x503))+x504);

	if (t88 != 3796LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x505 = INT8_MIN;
	int16_t x506 = INT16_MIN;
	uint8_t x507 = 17U;
	uint16_t x508 = UINT16_MAX;
	int32_t t89 = -3499728;

	t89 = ((x505%(x506*x507))+x508);

	if (t89 != 65407) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x509 = INT8_MAX;
	static uint32_t x511 = 161917599U;
	int16_t x512 = -1;
	static volatile uint32_t t90 = 6U;

	t90 = ((x509%(x510*x511))+x512);

	if (t90 != 126U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x517 = INT32_MAX;
	int16_t x520 = INT16_MIN;

	t91 = ((x517%(x518*x519))+x520);

	if (t91 != -32614) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x521 = UINT64_MAX;
	int32_t x522 = -62434;
	uint32_t x523 = 3515U;
	volatile uint8_t x524 = 31U;
	volatile uint64_t t92 = 837465015LLU;

	t92 = ((x521%(x522*x523))+x524);

	if (t92 != 2769554888LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x526 = INT64_MIN;
	uint64_t x527 = 7683LLU;
	uint64_t x528 = 6332623434155721LLU;
	uint64_t t93 = 44551041380401LLU;

	t93 = ((x525%(x526*x527))+x528);

	if (t93 != 6332623434155976LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x530 = 34U;
	static int16_t x532 = -41;

	t94 = ((x529%(x530*x531))+x532);

	if (t94 != 214836918LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x533 = -12;
	int64_t x534 = -1LL;
	volatile int64_t t95 = 31358641707LL;

	t95 = ((x533%(x534*x535))+x536);

	if (t95 != 63064856LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x537 = 3U;
	static volatile int8_t x538 = INT8_MAX;
	uint32_t x540 = 1991958005U;
	volatile uint32_t t96 = 592U;

	t96 = ((x537%(x538*x539))+x540);

	if (t96 != 1991958008U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x545 = INT32_MAX;
	uint32_t x546 = UINT32_MAX;
	static int16_t x547 = INT16_MIN;
	static uint8_t x548 = 10U;
	static uint32_t t97 = 97156U;

	t97 = ((x545%(x546*x547))+x548);

	if (t97 != 32777U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x561 = 30U;
	static uint32_t x563 = 126591U;
	int32_t x564 = INT32_MIN;
	static volatile uint64_t t98 = 9326301639LLU;

	t98 = ((x561%(x562*x563))+x564);

	if (t98 != 18446744071562067998LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x565 = 122U;
	int64_t x566 = 31124072029290847LL;
	volatile uint16_t x567 = 13U;
	static volatile int64_t t99 = -1052LL;

	t99 = ((x565%(x566*x567))+x568);

	if (t99 != -9223372036854775686LL) { NG(); } else { ; }
	
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

