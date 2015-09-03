#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x36 = 10056420LLU;
uint8_t x40 = 1U;
int64_t t4 = 3152463LL;
uint64_t x46 = UINT64_MAX;
int16_t x49 = -106;
static int32_t t6 = -1076;
int8_t x62 = -1;
int16_t x64 = -1;
int32_t x65 = 26;
int8_t x66 = INT8_MIN;
int8_t x70 = 1;
int32_t t10 = 40418;
static uint64_t x82 = UINT64_MAX;
volatile uint64_t t12 = 1797454LLU;
uint8_t x86 = UINT8_MAX;
int16_t x87 = -1;
static int32_t t13 = 251590;
uint64_t x92 = 812264LLU;
int32_t x95 = -1;
uint32_t x96 = 1U;
uint32_t t15 = 65940629U;
int32_t x104 = -1;
int64_t x110 = INT64_MAX;
static int16_t x129 = -1;
uint16_t x148 = 16U;
int32_t x156 = 27322;
static volatile uint64_t t23 = 3LLU;
static int8_t x157 = INT8_MIN;
static volatile int64_t x158 = -1LL;
volatile uint32_t x190 = 15U;
uint64_t x192 = UINT64_MAX;
uint64_t x195 = 1574132772LLU;
volatile int64_t x201 = INT64_MAX;
int32_t x203 = INT32_MAX;
int64_t x204 = -14LL;
static int16_t x232 = -1;
static int8_t x233 = INT8_MAX;
volatile int32_t x242 = -1;
uint64_t x246 = 1933688996LLU;
int64_t x252 = -1LL;
volatile uint64_t x253 = 139053215675988519LLU;
int16_t x259 = INT16_MIN;
volatile uint8_t x268 = 9U;
uint32_t t44 = 1U;
volatile int8_t x271 = INT8_MAX;
int64_t x275 = 2721908599207761LL;
uint16_t x278 = 1U;
int64_t x284 = -1LL;
volatile int8_t x285 = INT8_MIN;
int32_t x287 = -1;
uint64_t x293 = 106465614770898LLU;
static uint64_t t50 = 3867519305LLU;
volatile int32_t x302 = -1;
uint8_t x314 = 97U;
int32_t x315 = -14;
volatile int16_t x316 = INT16_MIN;
static uint64_t t57 = 2594694227LLU;
static int64_t x336 = -1LL;
uint32_t x346 = 0U;
int32_t x360 = -1;
static int32_t x366 = INT32_MAX;
int64_t x392 = 18136857557LL;
int16_t x395 = 0;
uint64_t x397 = 940LLU;
uint64_t x405 = 4617351785599715223LLU;
int8_t x406 = 0;
uint64_t x408 = 822656LLU;
volatile int8_t x413 = 13;
int16_t x415 = INT16_MIN;
int16_t x421 = INT16_MIN;
uint8_t x428 = UINT8_MAX;
volatile int8_t x436 = 13;
static uint16_t x439 = UINT16_MAX;
static int8_t x445 = INT8_MIN;
int32_t x449 = -1;
static int32_t x452 = 824782027;
volatile int32_t t79 = -1;
static int32_t x468 = INT32_MIN;
uint32_t x489 = 24U;
static volatile uint64_t x493 = 375862LLU;
uint32_t x496 = 117U;
volatile int8_t x499 = INT8_MIN;
int64_t x508 = INT64_MIN;
static volatile uint64_t t89 = 1694LLU;
static uint16_t x513 = 167U;
volatile int8_t x515 = INT8_MIN;
static uint8_t x518 = UINT8_MAX;
uint64_t x533 = 15117250LLU;
static uint32_t x535 = UINT32_MAX;
static uint64_t x538 = UINT64_MAX;
int8_t x542 = -2;
int64_t x544 = INT64_MAX;
int64_t t97 = -45936959763789904LL;
int8_t x548 = INT8_MIN;
volatile int64_t t98 = -3099269899521LL;
static uint8_t x551 = 15U;
uint32_t t99 = 548033341U;


void f0(void) {
	int64_t x1 = 30587115LL;
	int64_t x2 = -1LL;
	volatile int32_t x3 = INT32_MAX;
	int32_t x4 = -56766;
	int64_t t0 = 676285LL;

	t0 = ((x1^(x2*x3))/x4);

	if (t0 != 37291LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	static uint16_t x10 = 1U;
	static int16_t x11 = -1;
	int32_t x12 = -1;
	int32_t t1 = -178082;

	t1 = ((x9^(x10*x11))/x12);

	if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = -1;
	static int8_t x26 = INT8_MAX;
	volatile uint16_t x27 = 8440U;
	int8_t x28 = -1;
	static volatile int32_t t2 = -34;

	t2 = ((x25^(x26*x27))/x28);

	if (t2 != 1071881) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = INT8_MIN;
	uint64_t x34 = 843664459776LLU;
	static int64_t x35 = INT64_MIN;
	volatile uint64_t t3 = 88392664995629425LLU;

	t3 = ((x33^(x34*x35))/x36);

	if (t3 != 1834325144903LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = -16;
	volatile int16_t x38 = INT16_MAX;
	int64_t x39 = -1LL;

	t4 = ((x37^(x38*x39))/x40);

	if (t4 != 32753LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = 14733;
	uint32_t x47 = 389269870U;
	volatile int64_t x48 = -1372057029834255LL;
	volatile uint64_t t5 = 66890LLU;

	t5 = ((x45^(x46*x47))/x48);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x50 = INT8_MAX;
	int16_t x51 = INT16_MIN;
	int16_t x52 = INT16_MIN;

	t6 = ((x49^(x50*x51))/x52);

	if (t6 != -126) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x57 = 1;
	int16_t x58 = INT16_MAX;
	int8_t x59 = -1;
	int8_t x60 = INT8_MIN;
	int32_t t7 = -174380;

	t7 = ((x57^(x58*x59))/x60);

	if (t7 != 256) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x61 = UINT32_MAX;
	volatile uint64_t x63 = 5438633LLU;
	static uint64_t t8 = 789180680471867985LLU;

	t8 = ((x61^(x62*x63))/x64);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x67 = -1;
	static int64_t x68 = 1350LL;
	volatile int64_t t9 = -3721366353285064202LL;

	t9 = ((x65^(x66*x67))/x68);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = INT32_MAX;
	int32_t x71 = 15560460;
	static volatile int8_t x72 = -1;

	t10 = ((x69^(x70*x71))/x72);

	if (t10 != -2131923187) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x77 = -2908669641LL;
	uint32_t x78 = 175357887U;
	uint16_t x79 = 1U;
	uint16_t x80 = UINT16_MAX;
	static volatile int64_t t11 = 9LL;

	t11 = ((x77^(x78*x79))/x80);

	if (t11 != -42798LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x81 = 181;
	int32_t x83 = INT32_MIN;
	uint64_t x84 = 365607LLU;

	t12 = ((x81^(x82*x83))/x84);

	if (t12 != 5873LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = -9;
	static int8_t x88 = -1;

	t13 = ((x85^(x86*x87))/x88);

	if (t13 != -246) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = -1;
	static volatile int16_t x91 = -1;
	uint64_t t14 = 535111504390503LLU;

	t14 = ((x89^(x90*x91))/x92);

	if (t14 != 22710281474449LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MIN;

	t15 = ((x93^(x94*x95))/x96);

	if (t15 != 2147483519U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = -2;
	volatile int16_t x98 = 200;
	volatile uint8_t x99 = 68U;
	volatile uint64_t x100 = 6LLU;
	volatile uint64_t t16 = 1305767985LLU;

	t16 = ((x97^(x98*x99))/x100);

	if (t16 != 3074457345618256335LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = INT32_MAX;
	static volatile int64_t x102 = INT64_MAX;
	int32_t x103 = -1;
	volatile int64_t t17 = -14725736235LL;

	t17 = ((x101^(x102*x103))/x104);

	if (t17 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = INT8_MIN;
	int8_t x111 = -1;
	static int64_t x112 = 63490963245LL;
	volatile int64_t t18 = 4262033981397LL;

	t18 = ((x109^(x110*x111))/x112);

	if (t18 != 145270626LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x130 = -1;
	int8_t x131 = INT8_MAX;
	int8_t x132 = -1;
	static int32_t t19 = 10;

	t19 = ((x129^(x130*x131))/x132);

	if (t19 != -126) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x137 = 14;
	int64_t x138 = -1LL;
	volatile int32_t x139 = 803;
	int16_t x140 = INT16_MAX;
	volatile int64_t t20 = 2596938967107LL;

	t20 = ((x137^(x138*x139))/x140);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x145 = -1;
	uint64_t x146 = 10590052989LLU;
	int32_t x147 = INT32_MAX;
	volatile uint64_t t21 = 87506255551LLU;

	t21 = ((x145^(x146*x147))/x148);

	if (t21 != 884470158292383271LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x149 = INT16_MAX;
	static int64_t x150 = -1LL;
	uint32_t x151 = 99U;
	volatile int8_t x152 = -34;
	int64_t t22 = 2782783863579LL;

	t22 = ((x149^(x150*x151))/x152);

	if (t22 != 960LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x153 = INT32_MIN;
	static uint8_t x154 = UINT8_MAX;
	uint64_t x155 = 247819018312419272LLU;

	t23 = ((x153^(x154*x155))/x156);

	if (t23 != 387714172589536LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x159 = 1582;
	int16_t x160 = INT16_MAX;
	volatile int64_t t24 = 249263459147707113LL;

	t24 = ((x157^(x158*x159))/x160);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x161 = -1;
	static int8_t x162 = -1;
	volatile int8_t x163 = -1;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t25 = 6741;

	t25 = ((x161^(x162*x163))/x164);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x165 = INT16_MAX;
	int16_t x166 = INT16_MAX;
	int8_t x167 = INT8_MIN;
	uint16_t x168 = 17736U;
	volatile int32_t t26 = -204996;

	t26 = ((x165^(x166*x167))/x168);

	if (t26 != -234) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x169 = -1;
	volatile int8_t x170 = -1;
	int32_t x171 = -1;
	static uint32_t x172 = 3U;
	volatile uint32_t t27 = 3346238U;

	t27 = ((x169^(x170*x171))/x172);

	if (t27 != 1431655764U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x177 = 2045627;
	int64_t x178 = -25790LL;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = 4;
	static uint64_t t28 = 116248LLU;

	t28 = ((x177^(x178*x179))/x180);

	if (t28 != 513153LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x189 = 1U;
	int32_t x191 = INT32_MAX;
	volatile uint64_t t29 = 4756480476684LLU;

	t29 = ((x189^(x190*x191))/x192);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x193 = 2U;
	volatile uint64_t x194 = 169155596056380LLU;
	int16_t x196 = INT16_MIN;
	volatile uint64_t t30 = 9008420653028629LLU;

	t30 = ((x193^(x194*x195))/x196);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x202 = -1;
	volatile int64_t t31 = -78420LL;

	t31 = ((x201^(x202*x203))/x204);

	if (t31 != 658812288193378011LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x209 = UINT64_MAX;
	uint64_t x210 = 22LLU;
	int32_t x211 = INT32_MAX;
	int32_t x212 = INT32_MIN;
	uint64_t t32 = 22894LLU;

	t32 = ((x209^(x210*x211))/x212);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x213 = INT8_MAX;
	volatile int16_t x214 = -4814;
	int32_t x215 = -238;
	uint8_t x216 = 1U;
	volatile int32_t t33 = 8;

	t33 = ((x213^(x214*x215))/x216);

	if (t33 != 1145851) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x217 = INT8_MIN;
	volatile int32_t x218 = 458;
	volatile uint8_t x219 = UINT8_MAX;
	int32_t x220 = INT32_MIN;
	volatile int32_t t34 = 987872;

	t34 = ((x217^(x218*x219))/x220);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = -1LL;
	static int32_t x223 = INT32_MIN;
	int8_t x224 = INT8_MIN;
	int64_t t35 = -15LL;

	t35 = ((x221^(x222*x223))/x224);

	if (t35 != 16777472LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x229 = 2357828415427LL;
	uint32_t x230 = UINT32_MAX;
	volatile int64_t x231 = -2024LL;
	int64_t t36 = 1591LL;

	t36 = ((x229^(x230*x231))/x232);

	if (t36 != 6335185393621LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = 4;
	int16_t x236 = 1;
	uint64_t t37 = 1516565LLU;

	t37 = ((x233^(x234*x235))/x236);

	if (t37 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x241 = INT16_MIN;
	static uint32_t x243 = 12289949U;
	int8_t x244 = INT8_MIN;
	uint32_t t38 = 5U;

	t38 = ((x241^(x242*x243))/x244);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x245 = 400LL;
	volatile int16_t x247 = -7;
	int64_t x248 = INT64_MIN;
	uint64_t t39 = 20221423LLU;

	t39 = ((x245^(x246*x247))/x248);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x249 = INT64_MAX;
	static volatile uint8_t x250 = 48U;
	int16_t x251 = INT16_MAX;
	static int64_t t40 = 10674858075LL;

	t40 = ((x249^(x250*x251))/x252);

	if (t40 != -9223372036853202991LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x254 = 98U;
	volatile int16_t x255 = INT16_MAX;
	uint64_t x256 = UINT64_MAX;
	static volatile uint64_t t41 = 381055562126558717LLU;

	t41 = ((x253^(x254*x255))/x256);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = -14;
	int16_t x260 = -890;
	volatile int32_t t42 = 1003;

	t42 = ((x257^(x258*x259))/x260);

	if (t42 != -552) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x261 = UINT64_MAX;
	int32_t x262 = 13048;
	static int16_t x263 = INT16_MAX;
	static int64_t x264 = INT64_MAX;
	uint64_t t43 = 745LLU;

	t43 = ((x261^(x262*x263))/x264);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x265 = 2110515337U;
	static int8_t x266 = INT8_MIN;
	int16_t x267 = 1;

	t44 = ((x265^(x266*x267))/x268);

	if (t44 != 242716872U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x270 = -1;
	static volatile int8_t x272 = INT8_MAX;
	volatile uint32_t t45 = 165385341U;

	t45 = ((x269^(x270*x271))/x272);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x273 = 1076872U;
	volatile int8_t x274 = 41;
	static int64_t x276 = INT64_MIN;
	volatile int64_t t46 = 9126289891958331LL;

	t46 = ((x273^(x274*x275))/x276);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x277 = UINT16_MAX;
	int8_t x279 = 28;
	int32_t x280 = INT32_MIN;
	int32_t t47 = -58959105;

	t47 = ((x277^(x278*x279))/x280);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x281 = 21LLU;
	int32_t x282 = 0;
	static uint32_t x283 = 4448319U;
	volatile uint64_t t48 = 17076997116854385LLU;

	t48 = ((x281^(x282*x283))/x284);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x286 = 14;
	volatile int64_t x288 = INT64_MAX;
	volatile int64_t t49 = -38989LL;

	t49 = ((x285^(x286*x287))/x288);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x294 = 80U;
	static volatile uint16_t x295 = UINT16_MAX;
	volatile int8_t x296 = 5;

	t50 = ((x293^(x294*x295))/x296);

	if (t50 != 21293123840275LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x297 = 1322878;
	volatile int16_t x298 = -1;
	uint8_t x299 = 68U;
	int64_t x300 = 1675309445766LL;
	static volatile int64_t t51 = -696316004262282976LL;

	t51 = ((x297^(x298*x299))/x300);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x301 = 5639U;
	uint8_t x303 = UINT8_MAX;
	static int32_t x304 = 257111;
	static volatile int32_t t52 = -278;

	t52 = ((x301^(x302*x303))/x304);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x305 = 0;
	static uint32_t x306 = 2820554U;
	int32_t x307 = 4589976;
	int32_t x308 = 117;
	static volatile uint32_t t53 = 592U;

	t53 = ((x305^(x306*x307))/x308);

	if (t53 != 10630227U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x313 = -21;
	volatile int32_t t54 = -307577697;

	t54 = ((x313^(x314*x315))/x316);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x321 = 540791480411LLU;
	uint16_t x322 = UINT16_MAX;
	uint8_t x323 = 48U;
	int8_t x324 = INT8_MIN;
	volatile uint64_t t55 = 14773LLU;

	t55 = ((x321^(x322*x323))/x324);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x325 = INT64_MIN;
	volatile int8_t x326 = -27;
	int64_t x327 = -174862382287359LL;
	static int16_t x328 = 23;
	int64_t t56 = 1440845759098883LL;

	t56 = ((x325^(x326*x327))/x328);

	if (t56 != -400810902284044222LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x329 = UINT16_MAX;
	static uint64_t x330 = 92725009245LLU;
	int64_t x331 = 22LL;
	int32_t x332 = 82834222;

	t57 = ((x329^(x330*x331))/x332);

	if (t57 != 24626LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = INT16_MIN;
	uint8_t x334 = UINT8_MAX;
	uint16_t x335 = 11U;
	volatile int64_t t58 = 186LL;

	t58 = ((x333^(x334*x335))/x336);

	if (t58 != 29963LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MAX;
	int64_t t59 = -464504361LL;

	t59 = ((x345^(x346*x347))/x348);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x349 = 248506214314469LL;
	volatile int8_t x350 = INT8_MAX;
	uint8_t x351 = 1U;
	uint32_t x352 = 405998U;
	int64_t t60 = -1291368120382287713LL;

	t60 = ((x349^(x350*x351))/x352);

	if (t60 != 612087286LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x357 = -1;
	volatile uint16_t x358 = 270U;
	uint64_t x359 = 3102013LLU;
	volatile uint64_t t61 = 180691LLU;

	t61 = ((x357^(x358*x359))/x360);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x365 = INT16_MAX;
	volatile int8_t x367 = 0;
	static volatile int8_t x368 = -1;
	static int32_t t62 = 125549;

	t62 = ((x365^(x366*x367))/x368);

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x373 = -7431;
	int64_t x374 = INT64_MIN;
	uint64_t x375 = UINT64_MAX;
	int16_t x376 = INT16_MIN;
	uint64_t t63 = 4069548876195899LLU;

	t63 = ((x373^(x374*x375))/x376);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x377 = INT64_MIN;
	static uint32_t x378 = 241908034U;
	int32_t x379 = -118;
	int16_t x380 = INT16_MIN;
	static volatile int64_t t64 = -58LL;

	t64 = ((x377^(x378*x379))/x380);

	if (t64 != 281474976664280LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x389 = 14U;
	static volatile int8_t x390 = -1;
	static int32_t x391 = -12061;
	static int64_t t65 = -4301954055LL;

	t65 = ((x389^(x390*x391))/x392);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x393 = 2810075;
	static uint32_t x394 = UINT32_MAX;
	volatile int32_t x396 = 127296;
	uint32_t t66 = 5727681U;

	t66 = ((x393^(x394*x395))/x396);

	if (t66 != 22U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x398 = UINT16_MAX;
	int64_t x399 = -1LL;
	int64_t x400 = INT64_MIN;
	static volatile uint64_t t67 = 303708224LLU;

	t67 = ((x397^(x398*x399))/x400);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x407 = 20929061U;
	uint64_t t68 = 50117073354LLU;

	t68 = ((x405^(x406*x407))/x408);

	if (t68 != 5612737019604LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x409 = -1;
	int8_t x410 = 3;
	int16_t x411 = 168;
	int32_t x412 = INT32_MAX;
	volatile int32_t t69 = 13;

	t69 = ((x409^(x410*x411))/x412);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x414 = INT8_MAX;
	static volatile int64_t x416 = 15563LL;
	volatile int64_t t70 = 3963302587378176859LL;

	t70 = ((x413^(x414*x415))/x416);

	if (t70 != -267LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x417 = INT16_MIN;
	int32_t x418 = 166160814;
	int16_t x419 = -1;
	int64_t x420 = 142709LL;
	volatile int64_t t71 = 235LL;

	t71 = ((x417^(x418*x419))/x420);

	if (t71 != 1164LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x422 = 1;
	uint8_t x423 = UINT8_MAX;
	volatile int8_t x424 = INT8_MIN;
	int32_t t72 = 7314553;

	t72 = ((x421^(x422*x423))/x424);

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x425 = 996U;
	uint32_t x426 = UINT32_MAX;
	int8_t x427 = INT8_MAX;
	volatile uint32_t t73 = 3U;

	t73 = ((x425^(x426*x427))/x428);

	if (t73 != 16843005U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x429 = 9U;
	uint16_t x430 = 207U;
	static int8_t x431 = -1;
	int16_t x432 = -1;
	int32_t t74 = 254;

	t74 = ((x429^(x430*x431))/x432);

	if (t74 != 200) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x433 = -1LL;
	uint32_t x434 = 7U;
	uint8_t x435 = 7U;
	volatile int64_t t75 = 7137944775673LL;

	t75 = ((x433^(x434*x435))/x436);

	if (t75 != -3LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x437 = 20U;
	static uint8_t x438 = UINT8_MAX;
	int32_t x440 = -1;
	static int32_t t76 = 16083615;

	t76 = ((x437^(x438*x439))/x440);

	if (t76 != -16711445) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x441 = INT16_MAX;
	volatile int16_t x442 = INT16_MIN;
	static volatile uint32_t x443 = 932U;
	int16_t x444 = INT16_MIN;
	uint32_t t77 = 29121476U;

	t77 = ((x441^(x442*x443))/x444);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x446 = UINT64_MAX;
	int64_t x447 = INT64_MIN;
	int16_t x448 = -1;
	uint64_t t78 = 1652888195109869928LLU;

	t78 = ((x445^(x446*x447))/x448);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x450 = INT16_MIN;
	static int16_t x451 = INT16_MAX;

	t79 = ((x449^(x450*x451))/x452);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x453 = 2U;
	uint8_t x454 = 31U;
	uint16_t x455 = 5U;
	uint8_t x456 = 6U;
	int32_t t80 = -1278750;

	t80 = ((x453^(x454*x455))/x456);

	if (t80 != 25) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x457 = INT64_MAX;
	static int32_t x458 = INT32_MIN;
	volatile int8_t x459 = 1;
	static int32_t x460 = -1298;
	static int64_t t81 = -38702398770964LL;

	t81 = ((x457^(x458*x459))/x460);

	if (t81 != 7105833616877728LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x465 = INT64_MAX;
	int16_t x466 = -1;
	int32_t x467 = -1;
	int64_t t82 = 2986138313753409LL;

	t82 = ((x465^(x466*x467))/x468);

	if (t82 != -4294967295LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x469 = INT64_MAX;
	int64_t x470 = -1LL;
	uint64_t x471 = UINT64_MAX;
	volatile int8_t x472 = -1;
	static uint64_t t83 = 7961046729803LLU;

	t83 = ((x469^(x470*x471))/x472);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x477 = -118;
	int8_t x478 = INT8_MIN;
	int32_t x479 = -1;
	static uint32_t x480 = UINT32_MAX;
	volatile uint32_t t84 = 8962504U;

	t84 = ((x477^(x478*x479))/x480);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x481 = 119U;
	int32_t x482 = -1;
	int32_t x483 = INT32_MAX;
	volatile int32_t x484 = -1;
	static int32_t t85 = -1;

	t85 = ((x481^(x482*x483))/x484);

	if (t85 != 2147483530) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x490 = UINT32_MAX;
	volatile int16_t x491 = INT16_MIN;
	static uint16_t x492 = UINT16_MAX;
	uint32_t t86 = 169U;

	t86 = ((x489^(x490*x491))/x492);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x494 = 10165U;
	int16_t x495 = 0;
	static uint64_t t87 = 7216265312256401LLU;

	t87 = ((x493^(x494*x495))/x496);

	if (t87 != 3212LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x497 = -10;
	volatile int32_t x498 = -1;
	int32_t x500 = INT32_MIN;
	static int32_t t88 = 0;

	t88 = ((x497^(x498*x499))/x500);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x505 = UINT64_MAX;
	volatile int64_t x506 = 39LL;
	volatile int32_t x507 = -499;

	t89 = ((x505^(x506*x507))/x508);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x509 = INT32_MIN;
	volatile uint32_t x510 = 249193301U;
	uint8_t x511 = UINT8_MAX;
	int32_t x512 = INT32_MAX;
	volatile uint32_t t90 = 14U;

	t90 = ((x509^(x510*x511))/x512);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x514 = INT8_MAX;
	int16_t x516 = -11;
	static int32_t t91 = 1;

	t91 = ((x513^(x514*x515))/x516);

	if (t91 != 1485) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x517 = -12;
	static int8_t x519 = INT8_MAX;
	int16_t x520 = INT16_MAX;
	static int32_t t92 = -5439080;

	t92 = ((x517^(x518*x519))/x520);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x521 = 882698LLU;
	int8_t x522 = INT8_MAX;
	int8_t x523 = INT8_MIN;
	static int8_t x524 = INT8_MIN;
	static volatile uint64_t t93 = 68048536448LLU;

	t93 = ((x521^(x522*x523))/x524);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x529 = 1053U;
	uint64_t x530 = 6LLU;
	int8_t x531 = INT8_MAX;
	uint8_t x532 = UINT8_MAX;
	volatile uint64_t t94 = 55429796LLU;

	t94 = ((x529^(x530*x531))/x532);

	if (t94 != 6LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x534 = 5172LLU;
	int16_t x536 = INT16_MIN;
	uint64_t t95 = 21245LLU;

	t95 = ((x533^(x534*x535))/x536);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x537 = -1;
	uint8_t x539 = UINT8_MAX;
	int8_t x540 = -1;
	volatile uint64_t t96 = 450220029615147LLU;

	t96 = ((x537^(x538*x539))/x540);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x541 = INT16_MIN;
	uint16_t x543 = 0U;

	t97 = ((x541^(x542*x543))/x544);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x545 = 1;
	static int64_t x546 = -15595708747445013LL;
	int32_t x547 = -1;

	t98 = ((x545^(x546*x547))/x548);

	if (t98 != -121841474589414LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x549 = INT16_MIN;
	uint32_t x550 = 702583U;
	volatile int8_t x552 = INT8_MIN;

	t99 = ((x549^(x550*x551))/x552);

	if (t99 != 0U) { NG(); } else { ; }
	
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

