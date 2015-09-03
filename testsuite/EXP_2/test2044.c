#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 3U;
volatile int64_t x8 = -1LL;
volatile int64_t t1 = 540854061396606LL;
int32_t x18 = 6379;
uint64_t t4 = 7553429895899224427LLU;
volatile int8_t x22 = -1;
uint8_t x30 = 10U;
int8_t x40 = -1;
uint16_t x44 = 654U;
int16_t x45 = 5666;
uint16_t x51 = 5U;
uint32_t x53 = 234653U;
int32_t t13 = -412296;
int32_t t14 = 97444;
static uint16_t x78 = 7U;
static int64_t t15 = 584LL;
static volatile int8_t x83 = 3;
static int64_t x84 = -1LL;
int64_t x114 = 269759343287575402LL;
int64_t t19 = -922835LL;
uint32_t x122 = 0U;
uint8_t x128 = 1U;
int8_t x130 = -23;
int16_t x131 = INT16_MIN;
int16_t x154 = INT16_MAX;
int32_t x168 = -1;
int8_t x169 = 1;
uint64_t x177 = 1425487253595390975LLU;
volatile uint32_t t30 = 138054U;
uint64_t x191 = UINT64_MAX;
static int16_t x196 = -41;
static int64_t t32 = 376600688LL;
uint64_t x203 = 5217942038808970922LLU;
static int16_t x205 = -1;
volatile int32_t t34 = 6;
static int32_t x209 = -1;
uint64_t x216 = UINT64_MAX;
volatile int8_t x217 = 28;
volatile int32_t t38 = 37;
volatile int16_t x227 = -3;
int64_t x249 = -1LL;
static int64_t t43 = -839848071440568320LL;
uint64_t t44 = 2LLU;
uint32_t x266 = UINT32_MAX;
int16_t x267 = -1;
uint64_t t45 = 41152973720416LLU;
static uint64_t t46 = 14863549950471LLU;
int16_t x290 = INT16_MAX;
int8_t x294 = INT8_MIN;
int32_t x295 = INT32_MIN;
int8_t x300 = -1;
volatile int64_t x302 = INT64_MAX;
int16_t x314 = -3552;
uint64_t x318 = 5389437402114987531LLU;
int64_t x323 = 3324LL;
uint8_t x325 = 15U;
int16_t x337 = INT16_MAX;
int8_t x355 = -17;
int32_t t62 = 1;
static uint8_t x365 = 1U;
volatile uint64_t t63 = 2702192113LLU;
int64_t x371 = 203863700830LL;
int32_t x384 = INT32_MAX;
static uint32_t x386 = UINT32_MAX;
uint16_t x396 = 3U;
volatile uint64_t x398 = 28386589062358710LLU;
static int8_t x412 = -1;
volatile int16_t x420 = 45;
volatile int32_t t78 = -5877462;
static int8_t x450 = INT8_MIN;
int8_t x451 = 0;
uint8_t x456 = 1U;
int8_t x471 = INT8_MAX;
uint64_t t87 = 58166384825LLU;
uint64_t x489 = 34938854792455LLU;
uint64_t x492 = 39085752643648842LLU;
volatile uint64_t t89 = 5471511472205523LLU;
volatile uint64_t t90 = 53LLU;
uint64_t x498 = UINT64_MAX;
uint16_t x521 = UINT16_MAX;
static uint8_t x527 = 90U;
uint64_t x540 = 19422257158144321LLU;


void f0(void) {
	volatile int64_t x2 = INT64_MIN;
	volatile int64_t x3 = INT64_MIN;
	uint32_t x4 = UINT32_MAX;
	int64_t t0 = -15215633854849875LL;

	t0 = ((x1-(x2^x3))*x4);

	if (t0 != 12884901885LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int32_t x6 = INT32_MIN;
	static int64_t x7 = 153262LL;

	t1 = ((x5-(x6^x7))*x8);

	if (t1 != 9223372034707445422LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 10U;
	volatile int16_t x10 = INT16_MAX;
	int16_t x11 = 1;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 20;

	t2 = ((x9-(x10^x11))*x12);

	if (t2 != 4192768) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint16_t x14 = 1U;
	volatile uint8_t x15 = 0U;
	uint64_t x16 = 50501444LLU;
	static volatile uint64_t t3 = 788521480330062629LLU;

	t3 = ((x13-(x14^x15))*x16);

	if (t3 != 216902050279772536LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 13039515209733LLU;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;

	t4 = ((x17-(x18^x19))*x20);

	if (t4 != 3325076380086630LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static uint64_t x23 = UINT64_MAX;
	int16_t x24 = INT16_MIN;
	uint64_t t5 = 4645614303297LLU;

	t5 = ((x21-(x22^x23))*x24);

	if (t5 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = 1;
	static volatile uint64_t x31 = 31800LLU;
	int16_t x32 = -2;
	volatile uint64_t t6 = 1LLU;

	t6 = ((x29-(x30^x31))*x32);

	if (t6 != 63586LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = 205783;
	uint8_t x39 = UINT8_MAX;
	static volatile int32_t t7 = 3;

	t7 = ((x37-(x38^x39))*x40);

	if (t7 != 205736) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	uint8_t x42 = UINT8_MAX;
	int8_t x43 = INT8_MIN;
	int32_t t8 = 3101277;

	t8 = ((x41-(x42^x43))*x44);

	if (t8 != 21513984) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x46 = UINT32_MAX;
	int16_t x47 = -1;
	int32_t x48 = -50221705;
	uint32_t t9 = 213545907U;

	t9 = ((x45-(x46^x47))*x48);

	if (t9 != 3206628302U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 1U;
	int32_t x50 = INT32_MIN;
	volatile uint32_t x52 = 930127452U;
	uint32_t t10 = 37U;

	t10 = ((x49-(x50^x51))*x52);

	if (t10 != 574457488U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = -1;
	int8_t x55 = -1;
	int32_t x56 = 282;
	volatile uint32_t t11 = 84111U;

	t11 = ((x53-(x54^x55))*x56);

	if (t11 != 66172146U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = -1;
	uint64_t x62 = 387133115255126643LLU;
	int64_t x63 = -1LL;
	uint32_t x64 = 26U;
	uint64_t t12 = 316LLU;

	t12 = ((x61-(x62^x63))*x64);

	if (t12 != 10065460996633292718LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = INT16_MIN;
	volatile uint8_t x67 = 104U;
	int16_t x68 = INT16_MIN;

	t13 = ((x65-(x66^x67))*x68);

	if (t13 != -2144043008) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -1;
	static int8_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;

	t14 = ((x69-(x70^x71))*x72);

	if (t14 != -8388480) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = 500U;
	static int32_t x79 = 513503328;
	static int64_t x80 = 0LL;

	t15 = ((x77-(x78^x79))*x80);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -655040154LL;
	static uint32_t x82 = 418U;
	static volatile int64_t t16 = 29199747132916LL;

	t16 = ((x81-(x82^x83))*x84);

	if (t16 != 655040571LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = -21;
	int32_t x90 = INT32_MAX;
	static int16_t x91 = -25;
	int32_t x92 = -1;
	static volatile int32_t t17 = 1055574;

	t17 = ((x89-(x90^x91))*x92);

	if (t17 != -2147483603) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MAX;
	uint8_t x98 = 5U;
	int32_t x99 = -1;
	uint16_t x100 = UINT16_MAX;
	int32_t t18 = 624968641;

	t18 = ((x97-(x98^x99))*x100);

	if (t18 != 8716155) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x113 = 2U;
	static uint8_t x115 = 6U;
	int64_t x116 = -1LL;

	t19 = ((x113-(x114^x115))*x116);

	if (t19 != 269759343287575402LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x117 = 2U;
	uint32_t x118 = 392402793U;
	uint16_t x119 = UINT16_MAX;
	uint16_t x120 = 3U;
	static volatile uint32_t t20 = 5997705U;

	t20 = ((x117-(x118^x119))*x120);

	if (t20 != 3117794884U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x121 = INT64_MIN;
	uint64_t x123 = 18LLU;
	int32_t x124 = INT32_MIN;
	uint64_t t21 = 53294200841LLU;

	t21 = ((x121-(x122^x123))*x124);

	if (t21 != 38654705664LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x125 = 1U;
	int16_t x126 = INT16_MAX;
	volatile uint16_t x127 = 16424U;
	volatile uint32_t t22 = 11U;

	t22 = ((x125-(x126^x127))*x128);

	if (t22 != 4294950954U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x129 = INT8_MIN;
	volatile int16_t x132 = -1;
	static volatile int32_t t23 = 9685;

	t23 = ((x129-(x130^x131))*x132);

	if (t23 != 32873) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x141 = 460564702471LLU;
	static uint64_t x142 = 62673370588825829LLU;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	static uint64_t t24 = 9807416258LLU;

	t24 = ((x141-(x142^x143))*x144);

	if (t24 != 12339226926851751936LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x153 = 475;
	int64_t x155 = 114886989710LL;
	int8_t x156 = INT8_MIN;
	static int64_t t25 = -6091630LL;

	t25 = ((x153-(x154^x155))*x156);

	if (t25 != 14705533078272LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x161 = 9U;
	int64_t x162 = -1LL;
	uint32_t x163 = 177U;
	uint16_t x164 = 22572U;
	volatile int64_t t26 = -56555558273236188LL;

	t26 = ((x161-(x162^x163))*x164);

	if (t26 != 4220964LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x165 = 0U;
	int8_t x166 = -1;
	int32_t x167 = -1;
	int32_t t27 = -7474;

	t27 = ((x165-(x166^x167))*x168);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x170 = UINT32_MAX;
	int8_t x171 = -1;
	uint8_t x172 = 0U;
	uint32_t t28 = 7512402U;

	t28 = ((x169-(x170^x171))*x172);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x178 = INT8_MIN;
	volatile uint16_t x179 = UINT16_MAX;
	static int16_t x180 = INT16_MIN;
	uint64_t t29 = 902979206473816759LLU;

	t29 = ((x177-(x178^x179))*x180);

	if (t29 != 15236412890379452416LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int8_t x186 = INT8_MAX;
	uint8_t x187 = 0U;
	uint32_t x188 = 39136374U;

	t30 = ((x185-(x186^x187))*x188);

	if (t30 != 3580478720U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MAX;
	int64_t x192 = -2657528444069LL;
	static uint64_t t31 = 33420348989LLU;

	t31 = ((x189-(x190^x191))*x192);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = 439205LL;
	volatile int32_t x194 = -1;
	int32_t x195 = -10059327;

	t32 = ((x193-(x194^x195))*x196);

	if (t32 != 394424961LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x201 = 0U;
	int64_t x202 = INT64_MAX;
	int64_t x204 = INT64_MIN;
	static volatile uint64_t t33 = 1802775429322306LLU;

	t33 = ((x201-(x202^x203))*x204);

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x206 = 807U;
	int8_t x207 = -1;
	int16_t x208 = 2;

	t34 = ((x205-(x206^x207))*x208);

	if (t34 != 1614) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = 657052LL;
	int8_t x212 = -8;
	volatile int64_t t35 = 316LL;

	t35 = ((x209-(x210^x211))*x212);

	if (t35 != 5753632LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x214 = -1;
	int16_t x215 = 67;
	uint64_t t36 = 16LLU;

	t36 = ((x213-(x214^x215))*x216);

	if (t36 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x218 = 93U;
	int16_t x219 = 1;
	uint64_t x220 = UINT64_MAX;
	uint64_t t37 = 274711130467323LLU;

	t37 = ((x217-(x218^x219))*x220);

	if (t37 != 64LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	static int32_t x223 = -1;
	uint16_t x224 = 12U;

	t38 = ((x221-(x222^x223))*x224);

	if (t38 != -393216) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x225 = 21819199633407142LLU;
	int64_t x226 = 1606071589072956380LL;
	int8_t x228 = 13;
	volatile uint64_t t39 = 609214738LLU;

	t39 = ((x225-(x226^x227))*x228);

	if (t39 != 2715836179473174209LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x229 = INT32_MIN;
	static volatile int16_t x230 = INT16_MAX;
	int16_t x231 = INT16_MIN;
	uint32_t x232 = 41131901U;
	volatile uint32_t t40 = 315427U;

	t40 = ((x229-(x230^x231))*x232);

	if (t40 != 2188615549U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x233 = INT8_MAX;
	int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	uint32_t x236 = 1U;
	volatile int64_t t41 = -4108367522924269LL;

	t41 = ((x233-(x234^x235))*x236);

	if (t41 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x241 = 39269930789LLU;
	int64_t x242 = -1LL;
	uint8_t x243 = 3U;
	int32_t x244 = -266655658;
	volatile uint64_t t42 = 959104273957251LLU;

	t42 = ((x241-(x242^x243))*x244);

	if (t42 != 7975194838487674822LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x250 = INT16_MIN;
	static int32_t x251 = INT32_MAX;
	int16_t x252 = 631;

	t43 = ((x249-(x250^x251))*x252);

	if (t43 != 1355041505280LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = INT8_MAX;
	volatile int8_t x258 = INT8_MIN;
	uint64_t x259 = 25LLU;
	int32_t x260 = INT32_MIN;

	t44 = ((x257-(x258^x259))*x260);

	if (t44 != 18446743579788312576LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x265 = 4592814943LLU;
	int64_t x268 = INT64_MAX;

	t45 = ((x265-(x266^x267))*x268);

	if (t45 != 9223372032261960865LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x269 = UINT8_MAX;
	uint64_t x270 = 202506169346723000LLU;
	uint32_t x271 = 36U;
	static uint32_t x272 = 117017548U;

	t46 = ((x269-(x270^x271))*x272);

	if (t46 != 4278981404374433764LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x273 = INT16_MIN;
	static int8_t x274 = 21;
	uint16_t x275 = 256U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t47 = 6594371;

	t47 = ((x273-(x274^x275))*x276);

	if (t47 != 4229760) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x289 = 9LLU;
	volatile int32_t x291 = INT32_MAX;
	static int8_t x292 = INT8_MIN;
	uint64_t t48 = 23LLU;

	t48 = ((x289-(x290^x291))*x292);

	if (t48 != 274873711488LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x293 = 12U;
	int16_t x296 = -1;
	volatile int32_t t49 = -21779;

	t49 = ((x293-(x294^x295))*x296);

	if (t49 != 2147483508) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x297 = -1;
	int32_t x298 = -1;
	static int64_t x299 = 93999051476156LL;
	int64_t t50 = 1011134301665LL;

	t50 = ((x297-(x298^x299))*x300);

	if (t50 != -93999051476156LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x301 = 14067U;
	uint64_t x303 = 115842815LLU;
	int32_t x304 = INT32_MIN;
	volatile uint64_t t51 = 319692303778LLU;

	t51 = ((x301-(x302^x303))*x304);

	if (t51 != 18197943311958802432LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x305 = 2LLU;
	static uint32_t x306 = 194632161U;
	int64_t x307 = INT64_MAX;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t52 = 8425276771LLU;

	t52 = ((x305-(x306^x307))*x308);

	if (t52 != 18446744048796634624LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x313 = -71;
	static uint32_t x315 = UINT32_MAX;
	uint32_t x316 = 112037131U;
	uint32_t t53 = 499056722U;

	t53 = ((x313-(x314^x315))*x316);

	if (t53 != 2223404638U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x317 = INT16_MIN;
	int16_t x319 = INT16_MAX;
	int32_t x320 = -1;
	volatile uint64_t t54 = 7LLU;

	t54 = ((x317-(x318^x319))*x320);

	if (t54 != 5389437402115041780LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x321 = -1;
	int16_t x322 = 0;
	uint64_t x324 = UINT64_MAX;
	uint64_t t55 = 1062245993LLU;

	t55 = ((x321-(x322^x323))*x324);

	if (t55 != 3325LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x326 = -29;
	volatile uint32_t x327 = 2076547U;
	volatile uint16_t x328 = 12406U;
	uint32_t t56 = 45U;

	t56 = ((x325-(x326^x327))*x328);

	if (t56 != 4287351466U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x333 = 7512;
	uint64_t x334 = 3103171LLU;
	uint64_t x335 = UINT64_MAX;
	volatile uint8_t x336 = UINT8_MAX;
	static volatile uint64_t t57 = 1091677567891622LLU;

	t57 = ((x333-(x334^x335))*x336);

	if (t57 != 793224420LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x338 = -112757365938LL;
	int64_t x339 = INT64_MAX;
	int32_t x340 = -1;
	volatile int64_t t58 = -1LL;

	t58 = ((x337-(x338^x339))*x340);

	if (t58 != -9223371924097442638LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x349 = -1;
	volatile int64_t x350 = INT64_MAX;
	uint64_t x351 = 1632586483LLU;
	uint64_t x352 = 89LLU;
	static uint64_t t59 = 28062325242639009LLU;

	t59 = ((x349-(x350^x351))*x352);

	if (t59 != 9223372182154972795LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x353 = 3U;
	int64_t x354 = 57LL;
	static uint32_t x356 = UINT32_MAX;
	volatile int64_t t60 = -394225401050688481LL;

	t60 = ((x353-(x354^x355))*x356);

	if (t60 != 193273528275LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x357 = UINT8_MAX;
	static int8_t x358 = -55;
	int16_t x359 = INT16_MAX;
	int16_t x360 = INT16_MAX;
	volatile int32_t t61 = -457938;

	t61 = ((x357-(x358^x359))*x360);

	if (t61 != 1080295223) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x361 = INT16_MAX;
	int8_t x362 = -1;
	static uint16_t x363 = UINT16_MAX;
	int16_t x364 = 6471;

	t62 = ((x361-(x362^x363))*x364);

	if (t62 != 636118713) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x366 = INT8_MIN;
	int16_t x367 = -1;
	uint64_t x368 = 2176302061433LLU;

	t63 = ((x365-(x366^x367))*x368);

	if (t63 != 18446469859649811058LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x369 = 11960U;
	int8_t x370 = -1;
	int32_t x372 = 118;
	static int64_t t64 = -15157LL;

	t64 = ((x369-(x370^x371))*x372);

	if (t64 != 24055918109338LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x373 = -27;
	uint64_t x374 = 1942872111934684351LLU;
	int8_t x375 = -1;
	static int32_t x376 = 39407269;
	uint64_t t65 = 4277022594498195LLU;

	t65 = ((x373-(x374^x375))*x376);

	if (t65 != 17329444500514495577LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x377 = 529967LLU;
	int32_t x378 = -1;
	static volatile uint16_t x379 = 0U;
	uint32_t x380 = 3036299U;
	volatile uint64_t t66 = 6297821539642969LLU;

	t66 = ((x377-(x378^x379))*x380);

	if (t66 != 1609141308432LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x381 = UINT64_MAX;
	int8_t x382 = INT8_MAX;
	uint16_t x383 = 32U;
	uint64_t t67 = 92848747945953LLU;

	t67 = ((x381-(x382^x383))*x384);

	if (t67 != 18446743867551121504LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x385 = 7U;
	int32_t x387 = -180129414;
	int32_t x388 = INT32_MIN;
	uint32_t t68 = 948618U;

	t68 = ((x385-(x386^x387))*x388);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x393 = -672;
	volatile uint32_t x394 = 355U;
	int16_t x395 = INT16_MAX;
	volatile uint32_t t69 = 71865U;

	t69 = ((x393-(x394^x395))*x396);

	if (t69 != 4294868044U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x397 = 929019458U;
	int64_t x399 = -3420LL;
	int8_t x400 = INT8_MIN;
	uint64_t t70 = 139LLU;

	t70 = ((x397-(x398^x399))*x400);

	if (t70 != 14813260554812975104LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x405 = -1;
	static uint16_t x406 = UINT16_MAX;
	static volatile uint32_t x407 = 425969919U;
	static volatile uint32_t x408 = UINT32_MAX;
	volatile uint32_t t71 = 33393U;

	t71 = ((x405-(x406^x407))*x408);

	if (t71 != 425932545U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x409 = 1545340260248821380LLU;
	uint32_t x410 = UINT32_MAX;
	uint64_t x411 = 661351881112LLU;
	volatile uint64_t t72 = 16LLU;

	t72 = ((x409-(x410^x411))*x412);

	if (t72 != 16901404470663808995LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x413 = -1;
	volatile int64_t x414 = -267058345909510LL;
	int16_t x415 = INT16_MIN;
	static uint8_t x416 = UINT8_MAX;
	volatile int64_t t73 = 11825000LL;

	t73 = ((x413-(x414^x415))*x416);

	if (t73 != -68099878211491845LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x417 = 23;
	volatile int64_t x418 = 100675873692607LL;
	uint8_t x419 = 22U;
	int64_t t74 = 3985LL;

	t74 = ((x417-(x418^x419))*x420);

	if (t74 != -4530414316165290LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x421 = 1627669LLU;
	int64_t x422 = INT64_MIN;
	uint32_t x423 = UINT32_MAX;
	uint8_t x424 = 18U;
	uint64_t t75 = 276746692725705862LLU;

	t75 = ((x421-(x422^x423))*x424);

	if (t75 != 18446743996429438348LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x429 = 6036558543LLU;
	int16_t x430 = INT16_MIN;
	int32_t x431 = 3;
	uint16_t x432 = UINT16_MAX;
	static volatile uint64_t t76 = 30878LLU;

	t76 = ((x429-(x430^x431))*x432);

	if (t76 != 395608011369780LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x433 = INT16_MIN;
	int8_t x434 = INT8_MIN;
	static uint32_t x435 = 5211920U;
	volatile int16_t x436 = INT16_MAX;
	static uint32_t t77 = 1209586U;

	t77 = ((x433-(x434^x435))*x436);

	if (t77 != 2204694672U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x437 = 0U;
	uint16_t x438 = 1U;
	int8_t x439 = -1;
	static int8_t x440 = INT8_MIN;

	t78 = ((x437-(x438^x439))*x440);

	if (t78 != -256) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x441 = 11289555407837LLU;
	int8_t x442 = INT8_MIN;
	uint32_t x443 = 58U;
	uint8_t x444 = 87U;
	static uint64_t t79 = 138LLU;

	t79 = ((x441-(x442^x443))*x444);

	if (t79 != 981817658333157LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x449 = 2U;
	static int16_t x452 = 371;
	volatile int32_t t80 = 57;

	t80 = ((x449-(x450^x451))*x452);

	if (t80 != 48230) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x453 = 55;
	uint16_t x454 = UINT16_MAX;
	int32_t x455 = INT32_MIN;
	static volatile int32_t t81 = -22149031;

	t81 = ((x453-(x454^x455))*x456);

	if (t81 != 2147418168) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x457 = -1;
	uint64_t x458 = 1928293818202709LLU;
	volatile int16_t x459 = 1210;
	static uint64_t x460 = 14748143LLU;
	uint64_t t82 = 12LLU;

	t82 = ((x457-(x458^x459))*x460);

	if (t82 != 6126384773185211888LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x461 = 0U;
	int64_t x462 = 8525593052648891LL;
	volatile uint64_t x463 = 5643135564LLU;
	static int64_t x464 = INT64_MAX;
	volatile uint64_t t83 = 253392227LLU;

	t83 = ((x461-(x462^x463))*x464);

	if (t83 != 9231897624267489271LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x465 = 1;
	uint64_t x466 = 63422874711LLU;
	int64_t x467 = -819873367LL;
	int64_t x468 = -1LL;
	volatile uint64_t t84 = 4314393452669LLU;

	t84 = ((x465-(x466^x467))*x468);

	if (t84 != 18446744009476799997LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x469 = UINT64_MAX;
	static uint16_t x470 = UINT16_MAX;
	int16_t x472 = INT16_MIN;
	volatile uint64_t t85 = 245562LLU;

	t85 = ((x469-(x470^x471))*x472);

	if (t85 != 2143322112LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x473 = UINT64_MAX;
	volatile int32_t x474 = INT32_MIN;
	uint16_t x475 = 485U;
	uint16_t x476 = 63U;
	volatile uint64_t t86 = 6031964309395407385LLU;

	t86 = ((x473-(x474^x475))*x476);

	if (t86 != 135291439206LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x477 = 6;
	uint64_t x478 = 59916LLU;
	static uint32_t x479 = UINT32_MAX;
	int32_t x480 = INT32_MAX;

	t87 = ((x477-(x478^x479))*x480);

	if (t87 != 9223500724812322285LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x481 = -3565;
	volatile uint16_t x482 = 3U;
	uint8_t x483 = UINT8_MAX;
	int16_t x484 = INT16_MIN;
	int32_t t88 = 682184;

	t88 = ((x481-(x482^x483))*x484);

	if (t88 != 125075456) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x490 = -1;
	uint64_t x491 = 517554001454077875LLU;

	t89 = ((x489-(x490^x491))*x492);

	if (t89 != 16287295317530512654LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x493 = UINT64_MAX;
	volatile int32_t x494 = INT32_MAX;
	int8_t x495 = 1;
	volatile int32_t x496 = INT32_MAX;

	t90 = ((x493-(x494^x495))*x496);

	if (t90 != 13835058059577131007LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x497 = INT32_MIN;
	int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;
	uint64_t t91 = 24648119041742758LLU;

	t91 = ((x497-(x498^x499))*x500);

	if (t91 != 274877923200LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x509 = INT8_MIN;
	volatile int16_t x510 = -38;
	volatile int8_t x511 = INT8_MIN;
	int32_t x512 = 37;
	volatile int32_t t92 = -5418;

	t92 = ((x509-(x510^x511))*x512);

	if (t92 != -8066) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x513 = INT8_MIN;
	uint64_t x514 = 11615LLU;
	static int16_t x515 = -808;
	volatile int16_t x516 = -1;
	uint64_t t93 = 1551537762LLU;

	t93 = ((x513-(x514^x515))*x516);

	if (t93 != 18446744073709539847LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x517 = -1LL;
	static int32_t x518 = 172231;
	uint32_t x519 = 303657U;
	static int16_t x520 = -1;
	volatile int64_t t94 = -40771358003LL;

	t94 = ((x517-(x518^x519))*x520);

	if (t94 != 393967LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x522 = 3U;
	int16_t x523 = 1882;
	uint32_t x524 = 89U;
	static volatile uint32_t t95 = 64U;

	t95 = ((x521-(x522^x523))*x524);

	if (t95 != 5665206U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x525 = 4899U;
	static int16_t x526 = INT16_MIN;
	static int16_t x528 = INT16_MAX;
	static volatile int32_t t96 = 54971;

	t96 = ((x525-(x526^x527))*x528);

	if (t96 != 1231285559) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x529 = UINT8_MAX;
	volatile int16_t x530 = INT16_MIN;
	int8_t x531 = 4;
	volatile int64_t x532 = -1LL;
	volatile int64_t t97 = 644872778648828535LL;

	t97 = ((x529-(x530^x531))*x532);

	if (t97 != -33019LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x533 = INT8_MAX;
	int64_t x534 = 9017449836LL;
	int16_t x535 = INT16_MIN;
	int32_t x536 = -635;
	static int64_t t98 = 552398023LL;

	t98 = ((x533-(x534^x535))*x536);

	if (t98 != -5726071160865LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x537 = -17;
	volatile uint32_t x538 = 383U;
	uint16_t x539 = 2366U;
	uint64_t t99 = 297654311542LLU;

	t99 = ((x537-(x538^x539))*x540);

	if (t99 != 7244066490790318382LLU) { NG(); } else { ; }
	
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

