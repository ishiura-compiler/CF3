#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 13313U;
int64_t t1 = -12319118LL;
volatile int8_t x10 = INT8_MIN;
int8_t x16 = 8;
volatile int64_t t3 = -51LL;
int64_t x24 = -1LL;
static volatile uint64_t t5 = 72390103LLU;
int64_t t7 = -54781550LL;
uint8_t x45 = UINT8_MAX;
int8_t x50 = -1;
int16_t x54 = 53;
int16_t x55 = INT16_MAX;
static int16_t x58 = -3;
static volatile int64_t x60 = INT64_MAX;
volatile int64_t t14 = INT64_MIN;
int64_t x65 = -6672881LL;
int64_t t16 = -20714479652LL;
int64_t x70 = -1LL;
uint64_t x74 = UINT64_MAX;
int32_t x80 = -1874825;
uint32_t x81 = UINT32_MAX;
static int64_t x83 = INT64_MAX;
uint64_t t21 = 121703922245LLU;
static uint16_t x90 = UINT16_MAX;
int8_t x95 = INT8_MIN;
uint32_t t23 = 6820U;
int32_t x99 = INT32_MAX;
int8_t x104 = INT8_MIN;
int32_t x106 = 170596;
int64_t t26 = -1LL;
static int32_t x109 = INT32_MAX;
int32_t x110 = 3;
static volatile int32_t x114 = INT32_MIN;
int64_t x116 = INT64_MIN;
int16_t x119 = -1;
int64_t x121 = 3952LL;
uint32_t x123 = 1276U;
int64_t t32 = 3586LL;
volatile int64_t x135 = INT64_MIN;
volatile int64_t x137 = INT64_MIN;
int64_t x139 = 14247210301LL;
volatile uint32_t x141 = 0U;
int64_t x144 = INT64_MIN;
uint16_t x151 = UINT16_MAX;
static uint64_t x156 = 326358359LLU;
int32_t x157 = 31382;
int32_t x177 = -170258548;
int16_t x179 = INT16_MAX;
volatile int64_t x185 = -1LL;
uint16_t x188 = 29715U;
static int32_t t47 = 6120;
volatile int32_t x195 = 398;
int64_t x196 = -278LL;
int8_t x199 = -1;
int32_t x201 = INT32_MAX;
static int32_t x202 = 240;
static uint64_t x203 = 3011419LLU;
int64_t x204 = 1043521007170882LL;
uint64_t t50 = 11827099719029LLU;
uint64_t x215 = 513363LLU;
uint16_t x216 = 3U;
volatile uint64_t t54 = 525777464519LLU;
volatile int8_t x222 = INT8_MIN;
volatile int32_t x225 = INT32_MIN;
int64_t x229 = -335LL;
int64_t t57 = -41LL;
static int16_t x233 = INT16_MAX;
int8_t x244 = INT8_MIN;
int32_t t60 = 348;
int64_t x248 = -130LL;
int16_t x258 = INT16_MIN;
int8_t x262 = INT8_MIN;
static volatile uint16_t x266 = 14U;
int8_t x267 = INT8_MIN;
uint32_t t66 = 5U;
int32_t t67 = 514477;
static int64_t x275 = INT64_MAX;
volatile uint32_t x276 = 44818218U;
uint8_t x277 = UINT8_MAX;
uint64_t x278 = 162885251455LLU;
int8_t x285 = -3;
uint64_t x288 = 992837LLU;
volatile uint64_t t71 = 17079881LLU;
int32_t x298 = INT32_MAX;
volatile uint64_t x300 = UINT64_MAX;
static uint16_t x302 = 863U;
int64_t x311 = INT64_MIN;
int8_t x312 = -1;
uint64_t x315 = 51019LLU;
int32_t t79 = -275870;
int32_t x321 = INT32_MIN;
uint64_t t80 = 396821LLU;
int32_t t82 = -127169965;
uint64_t x334 = 1273734243266433228LLU;
int8_t x336 = INT8_MIN;
uint32_t x347 = 129296121U;
int32_t x349 = INT32_MIN;
int64_t t87 = 21237670674453LL;
int32_t x355 = -1;
uint8_t x365 = 44U;
int8_t x367 = INT8_MIN;
uint64_t t93 = 292386LLU;
int8_t x377 = 3;
static int64_t x383 = -1LL;
static int64_t x388 = -1LL;
static uint8_t x400 = 114U;
volatile int32_t t99 = 3550057;


void f0(void) {
	volatile int32_t x1 = -8;
	uint16_t x2 = 15005U;
	volatile uint8_t x3 = 16U;
	uint8_t x4 = 1U;
	static int32_t t0 = -14514633;

	t0 = ((x1|(x2|x3))^x4);

	if (t0 != -4) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = INT64_MIN;
	int32_t x7 = INT32_MAX;
	int64_t x8 = INT64_MIN;

	t1 = ((x5|(x6|x7))^x8);

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 9;
	volatile uint32_t x11 = 84975642U;
	uint32_t x12 = UINT32_MAX;
	static volatile uint32_t t2 = 70682253U;

	t2 = ((x9|(x10|x11))^x12);

	if (t2 != 100U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MAX;
	volatile int32_t x15 = INT32_MIN;

	t3 = ((x13|(x14|x15))^x16);

	if (t3 != -9LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	uint64_t x18 = 6455138814524LLU;
	static volatile uint8_t x19 = UINT8_MAX;
	int64_t x20 = -179653969924LL;
	volatile uint64_t t4 = 1347017814520011LLU;

	t4 = ((x17|(x18|x19))^x20);

	if (t4 != 179653969923LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile uint32_t x22 = 809U;
	uint64_t x23 = 10683062659519LLU;

	t5 = ((x21|(x22|x23))^x24);

	if (t5 != 21568LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 16U;
	static uint8_t x26 = 65U;
	static int64_t x27 = -1LL;
	volatile uint32_t x28 = 3417058U;
	volatile int64_t t6 = -219LL;

	t6 = ((x25|(x26|x27))^x28);

	if (t6 != -3417059LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	int64_t x30 = INT64_MIN;
	static volatile int8_t x31 = -1;
	int8_t x32 = INT8_MIN;

	t7 = ((x29|(x30|x31))^x32);

	if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	static int64_t x34 = INT64_MIN;
	static int16_t x35 = 21;
	static int8_t x36 = INT8_MIN;
	int64_t t8 = 2LL;

	t8 = ((x33|(x34|x35))^x36);

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = 10;
	int64_t x38 = -68903873730458808LL;
	int32_t x39 = -1;
	volatile int8_t x40 = INT8_MIN;
	volatile int64_t t9 = -1LL;

	t9 = ((x37|(x38|x39))^x40);

	if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	volatile int16_t x42 = -6;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = 1U;
	static int64_t t10 = -1LL;

	t10 = ((x41|(x42|x43))^x44);

	if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x46 = 1647U;
	int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t11 = 48;

	t11 = ((x45|(x46|x47))^x48);

	if (t11 != 31103) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = UINT16_MAX;
	uint64_t x51 = 1LLU;
	static volatile uint64_t x52 = 839721473392544186LLU;
	static uint64_t t12 = 42420895853899028LLU;

	t12 = ((x49|(x50|x51))^x52);

	if (t12 != 17607022600317007429LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -18;
	static int8_t x56 = INT8_MIN;
	static int32_t t13 = -64686;

	t13 = ((x53|(x54|x55))^x56);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	volatile uint8_t x59 = 1U;

	t14 = ((x57|(x58|x59))^x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 3;
	int16_t x62 = INT16_MAX;
	uint64_t x63 = 32LLU;
	int64_t x64 = 10249945LL;
	volatile uint64_t t15 = 247510215635LLU;

	t15 = ((x61|(x62|x63))^x64);

	if (t15 != 10230054LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int8_t x67 = -1;
	uint32_t x68 = 2133845102U;

	t16 = ((x65|(x66|x67))^x68);

	if (t16 != -2133845103LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = UINT32_MAX;
	static int32_t x71 = -90720;
	uint16_t x72 = 1525U;
	int64_t t17 = -104662473LL;

	t17 = ((x69|(x70|x71))^x72);

	if (t17 != -1526LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	volatile uint64_t t18 = 1215236LLU;

	t18 = ((x73|(x74|x75))^x76);

	if (t18 != 32767LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 77LLU;
	int16_t x78 = -1;
	static int8_t x79 = INT8_MIN;
	uint64_t t19 = 1792LLU;

	t19 = ((x77|(x78|x79))^x80);

	if (t19 != 1874824LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = UINT16_MAX;
	int32_t x84 = INT32_MIN;
	static int64_t t20 = -30955876LL;

	t20 = ((x81|(x82|x83))^x84);

	if (t20 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 3479198203353LLU;
	uint32_t x86 = UINT32_MAX;
	uint32_t x87 = 859U;
	static int64_t x88 = INT64_MAX;

	t21 = ((x85|(x86|x87))^x88);

	if (t21 != 9223368553636298752LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int8_t x91 = -1;
	static int32_t x92 = INT32_MIN;
	volatile int64_t t22 = -50685343LL;

	t22 = ((x89|(x90|x91))^x92);

	if (t22 != 2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	uint32_t x94 = 0U;
	int32_t x96 = INT32_MAX;

	t23 = ((x93|(x94|x95))^x96);

	if (t23 != 2147483648U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MIN;
	int16_t x100 = 172;
	int32_t t24 = 151707236;

	t24 = ((x97|(x98|x99))^x100);

	if (t24 != -173) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	uint64_t x102 = UINT64_MAX;
	uint64_t x103 = UINT64_MAX;
	volatile uint64_t t25 = 496527620703639LLU;

	t25 = ((x101|(x102|x103))^x104);

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int64_t x107 = INT64_MIN;
	volatile int32_t x108 = INT32_MIN;

	t26 = ((x105|(x106|x107))^x108);

	if (t26 != 2147457636LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x111 = 119U;
	uint16_t x112 = 208U;
	int32_t t27 = 384396878;

	t27 = ((x109|(x110|x111))^x112);

	if (t27 != 2147483439) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	volatile int64_t x115 = -1LL;
	volatile int64_t t28 = INT64_MAX;

	t28 = ((x113|(x114|x115))^x116);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 8732477987534LLU;
	uint64_t x118 = 1726017LLU;
	int16_t x120 = INT16_MIN;
	volatile uint64_t t29 = 29475534260586744LLU;

	t29 = ((x117|(x118|x119))^x120);

	if (t29 != 32767LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x122 = INT32_MIN;
	uint32_t x124 = 414968174U;
	int64_t t30 = -2944275082322982279LL;

	t30 = ((x121|(x122|x123))^x124);

	if (t30 != 2562451090LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 22;
	int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MAX;
	int8_t x128 = INT8_MIN;
	volatile int64_t t31 = INT64_MAX;

	t31 = ((x125|(x126|x127))^x128);

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MAX;
	volatile int64_t x132 = 0LL;

	t32 = ((x129|(x130|x131))^x132);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = 1100;
	int32_t x134 = 685507;
	uint64_t x136 = 56211804LLU;
	uint64_t t33 = 123LLU;

	t33 = ((x133|(x134|x135))^x136);

	if (t33 != 9223372036910599315LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x138 = UINT32_MAX;
	int32_t x140 = INT32_MIN;
	volatile int64_t t34 = -388881549275LL;

	t34 = ((x137|(x138|x139))^x140);

	if (t34 != 9223372021822390271LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MAX;
	uint64_t x143 = UINT64_MAX;
	uint64_t t35 = 3492LLU;

	t35 = ((x141|(x142|x143))^x144);

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 5693LLU;
	int64_t x146 = -1LL;
	int64_t x147 = INT64_MIN;
	static int32_t x148 = INT32_MAX;
	uint64_t t36 = 2355199918659LLU;

	t36 = ((x145|(x146|x147))^x148);

	if (t36 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	uint8_t x150 = 46U;
	static int8_t x152 = INT8_MIN;
	int64_t t37 = -134LL;

	t37 = ((x149|(x150|x151))^x152);

	if (t37 != 9223372036854710399LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = 1U;
	uint64_t t38 = 28LLU;

	t38 = ((x153|(x154|x155))^x156);

	if (t38 != 3968619862LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -1;
	static int16_t x159 = 10761;
	int64_t x160 = -24516LL;
	volatile int64_t t39 = 118298189LL;

	t39 = ((x157|(x158|x159))^x160);

	if (t39 != 24515LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	uint32_t x162 = UINT32_MAX;
	int16_t x163 = -221;
	int16_t x164 = INT16_MIN;
	static uint32_t t40 = 129802U;

	t40 = ((x161|(x162|x163))^x164);

	if (t40 != 32767U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	uint16_t x166 = 3194U;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = 63828401U;
	int64_t t41 = 13894LL;

	t41 = ((x165|(x166|x167))^x168);

	if (t41 != -9223372036790944309LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 170871476876LLU;
	static uint32_t x170 = 524296692U;
	uint16_t x171 = UINT16_MAX;
	int8_t x172 = INT8_MAX;
	uint64_t t42 = 71658332557LLU;

	t42 = ((x169|(x170|x171))^x172);

	if (t42 != 171261558656LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = 254065;
	uint64_t x174 = UINT64_MAX;
	int8_t x175 = -1;
	uint8_t x176 = UINT8_MAX;
	volatile uint64_t t43 = 7102882719981LLU;

	t43 = ((x173|(x174|x175))^x176);

	if (t43 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x178 = 53;
	int32_t x180 = 7;
	volatile int32_t t44 = 966356;

	t44 = ((x177|(x178|x179))^x180);

	if (t44 != -170229768) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -3128099;
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	volatile int64_t x184 = -1LL;
	volatile int64_t t45 = -357240198680LL;

	t45 = ((x181|(x182|x183))^x184);

	if (t45 != 34LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -1LL;
	static int32_t x187 = -647505971;
	volatile int64_t t46 = 31LL;

	t46 = ((x185|(x186|x187))^x188);

	if (t46 != -29716LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -153;
	static uint16_t x190 = 19566U;
	int8_t x191 = -1;
	int16_t x192 = -89;

	t47 = ((x189|(x190|x191))^x192);

	if (t47 != 88) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 13038U;
	uint64_t x194 = 278LLU;
	uint64_t t48 = 90015LLU;

	t48 = ((x193|(x194|x195))^x196);

	if (t48 != 18446744073709538580LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	static uint64_t x198 = 335400963LLU;
	int32_t x200 = INT32_MIN;
	static volatile uint64_t t49 = 8886753306221LLU;

	t49 = ((x197|(x198|x199))^x200);

	if (t49 != 2147483647LLU) { NG(); } else { ; }
	
}

void f50(void) {


	t50 = ((x201|(x202|x203))^x204);

	if (t50 != 1043521713556157LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x205 = UINT16_MAX;
	uint32_t x206 = UINT32_MAX;
	int64_t x207 = -89008687LL;
	uint8_t x208 = 1U;
	int64_t t51 = -3386999522LL;

	t51 = ((x205|(x206|x207))^x208);

	if (t51 != -2LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint8_t x210 = UINT8_MAX;
	int32_t x211 = -1;
	volatile int16_t x212 = -1;
	uint64_t t52 = 13215504433672637LLU;

	t52 = ((x209|(x210|x211))^x212);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int32_t x214 = INT32_MIN;
	volatile uint64_t t53 = 14777LLU;

	t53 = ((x213|(x214|x215))^x216);

	if (t53 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	uint16_t x218 = 0U;
	uint64_t x219 = 1475309688LLU;
	uint32_t x220 = UINT32_MAX;

	t54 = ((x217|(x218|x219))^x220);

	if (t54 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 365U;
	int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;
	int32_t t55 = 418;

	t55 = ((x221|(x222|x223))^x224);

	if (t55 != 32749) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x226 = UINT16_MAX;
	uint16_t x227 = 8U;
	uint32_t x228 = 1462107810U;
	volatile uint32_t t56 = 27558668U;

	t56 = ((x225|(x226|x227))^x228);

	if (t56 != 3609526621U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MAX;
	uint32_t x231 = 105160495U;
	int16_t x232 = 16048;

	t57 = ((x229|(x230|x231))^x232);

	if (t57 != -16049LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = -15;
	int16_t x235 = INT16_MIN;
	static int64_t x236 = INT64_MIN;
	static volatile int64_t t58 = INT64_MAX;

	t58 = ((x233|(x234|x235))^x236);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	uint16_t x238 = UINT16_MAX;
	uint32_t x239 = UINT32_MAX;
	volatile uint8_t x240 = UINT8_MAX;
	uint32_t t59 = 3U;

	t59 = ((x237|(x238|x239))^x240);

	if (t59 != 4294967040U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 116;
	int16_t x242 = -1;
	volatile int16_t x243 = 117;

	t60 = ((x241|(x242|x243))^x244);

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 702832U;
	static int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MIN;
	volatile int64_t t61 = -24957105183908785LL;

	t61 = ((x245|(x246|x247))^x248);

	if (t61 != 9223372036854072846LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -1LL;
	int32_t x250 = INT32_MIN;
	static volatile int16_t x251 = INT16_MAX;
	uint16_t x252 = UINT16_MAX;
	int64_t t62 = -60337991039LL;

	t62 = ((x249|(x250|x251))^x252);

	if (t62 != -65536LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 2494420360558LLU;
	int32_t x254 = INT32_MIN;
	uint8_t x255 = 1U;
	int16_t x256 = 2224;
	volatile uint64_t t63 = 3449718561LLU;

	t63 = ((x253|(x254|x255))^x256);

	if (t63 != 18446744072753911263LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	static int32_t x259 = -1;
	int16_t x260 = INT16_MAX;
	volatile int32_t t64 = -10631261;

	t64 = ((x257|(x258|x259))^x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	uint32_t x263 = 9U;
	int16_t x264 = -2983;
	int64_t t65 = -14427403804LL;

	t65 = ((x261|(x262|x263))^x264);

	if (t65 != 2982LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x268 = 1626442670U;

	t66 = ((x265|(x266|x267))^x268);

	if (t66 != 2668524576U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = 16U;
	int8_t x270 = -1;
	static int16_t x271 = 18;
	int8_t x272 = INT8_MIN;

	t67 = ((x269|(x270|x271))^x272);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 8407;
	uint8_t x274 = 63U;
	int64_t t68 = 25375452791173566LL;

	t68 = ((x273|(x274|x275))^x276);

	if (t68 != 9223372036809957589LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x279 = 23;
	int64_t x280 = -1LL;
	volatile uint64_t t69 = 14LLU;

	t69 = ((x277|(x278|x279))^x280);

	if (t69 != 18446743910824300032LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x282 = 40;
	static int64_t x283 = INT64_MAX;
	static int32_t x284 = INT32_MIN;
	volatile int64_t t70 = 320446975LL;

	t70 = ((x281|(x282|x283))^x284);

	if (t70 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x286 = INT32_MIN;
	int8_t x287 = -57;

	t71 = ((x285|(x286|x287))^x288);

	if (t71 != 18446744073708558778LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int32_t x290 = 183308;
	int64_t x291 = INT64_MAX;
	volatile int16_t x292 = INT16_MAX;
	static int64_t t72 = -317LL;

	t72 = ((x289|(x290|x291))^x292);

	if (t72 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	int8_t x295 = 12;
	int8_t x296 = -1;
	int32_t t73 = 28;

	t73 = ((x293|(x294|x295))^x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint64_t x299 = UINT64_MAX;
	uint64_t t74 = 6219605091029LLU;

	t74 = ((x297|(x298|x299))^x300);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -737265296917856LL;
	volatile int16_t x303 = 488;
	static int64_t x304 = INT64_MIN;
	static volatile int64_t t75 = 27219754423228513LL;

	t75 = ((x301|(x302|x303))^x304);

	if (t75 != 9222634771557858303LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 0;
	static int16_t x306 = -1715;
	uint16_t x307 = 14677U;
	int8_t x308 = INT8_MIN;
	static int32_t t76 = -3;

	t76 = ((x305|(x306|x307))^x308);

	if (t76 != 1757) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = 5764287LLU;
	int32_t x310 = 360;
	static volatile uint64_t t77 = 1993122335361846302LLU;

	t77 = ((x309|(x310|x311))^x312);

	if (t77 != 9223372036849011200LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = -1;
	int8_t x314 = -30;
	volatile int64_t x316 = INT64_MIN;
	static uint64_t t78 = 29812636697LLU;

	t78 = ((x313|(x314|x315))^x316);

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	static uint16_t x318 = 83U;
	int32_t x319 = -1;
	uint16_t x320 = UINT16_MAX;

	t79 = ((x317|(x318|x319))^x320);

	if (t79 != -65536) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = INT32_MAX;
	uint64_t x323 = 128273491144451LLU;
	int8_t x324 = INT8_MIN;

	t80 = ((x321|(x322|x323))^x324);

	if (t80 != 127LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int16_t x326 = -58;
	static uint16_t x327 = UINT16_MAX;
	static int64_t x328 = -1LL;
	static volatile int64_t t81 = -1118724593336982251LL;

	t81 = ((x325|(x326|x327))^x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 2U;
	static volatile int16_t x330 = 259;
	static int8_t x331 = 5;
	uint16_t x332 = 3521U;

	t82 = ((x329|(x330|x331))^x332);

	if (t82 != 3270) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 109U;
	int8_t x335 = INT8_MIN;
	volatile uint64_t t83 = 520554LLU;

	t83 = ((x333|(x334|x335))^x336);

	if (t83 != 109LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = -1;
	static volatile int32_t x338 = INT32_MAX;
	uint32_t x339 = 65054U;
	volatile uint8_t x340 = UINT8_MAX;
	uint32_t t84 = 21513U;

	t84 = ((x337|(x338|x339))^x340);

	if (t84 != 4294967040U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 12;
	static int32_t x342 = -1;
	int32_t x343 = INT32_MAX;
	volatile uint16_t x344 = 6447U;
	volatile int32_t t85 = -59829071;

	t85 = ((x341|(x342|x343))^x344);

	if (t85 != -6448) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 5107U;
	static uint32_t x346 = UINT32_MAX;
	static uint64_t x348 = 6730385411688LLU;
	uint64_t t86 = 56290630LLU;

	t86 = ((x345|(x346|x347))^x348);

	if (t86 != 6734337061271LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 26U;
	uint8_t x351 = 25U;
	int64_t x352 = 2685864901LL;

	t87 = ((x349|(x350|x351))^x352);

	if (t87 != -3756586018LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	uint32_t x354 = 40U;
	volatile int8_t x356 = -1;
	uint32_t t88 = 25916U;

	t88 = ((x353|(x354|x355))^x356);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 1127;
	volatile int16_t x358 = INT16_MIN;
	volatile int8_t x359 = -1;
	int32_t x360 = INT32_MAX;
	volatile int32_t t89 = INT32_MIN;

	t89 = ((x357|(x358|x359))^x360);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MIN;
	volatile int16_t x363 = 0;
	int8_t x364 = -21;
	int32_t t90 = 17;

	t90 = ((x361|(x362|x363))^x364);

	if (t90 != 2147483627) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MIN;
	int8_t x368 = INT8_MIN;
	volatile int32_t t91 = 64232464;

	t91 = ((x365|(x366|x367))^x368);

	if (t91 != 44) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 5592291994LL;
	static int16_t x370 = -1;
	uint16_t x371 = 37U;
	volatile int16_t x372 = 186;
	volatile int64_t t92 = 14914LL;

	t92 = ((x369|(x370|x371))^x372);

	if (t92 != -187LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = 932955163239LLU;
	uint8_t x374 = UINT8_MAX;
	uint8_t x375 = 6U;
	uint16_t x376 = UINT16_MAX;

	t93 = ((x373|(x374|x375))^x376);

	if (t93 != 932955223296LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = -7883058;
	volatile int8_t x379 = INT8_MIN;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -3630;

	t94 = ((x377|(x378|x379))^x380);

	if (t94 != 2147483599) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int64_t x382 = -1086367821434059LL;
	uint8_t x384 = UINT8_MAX;
	volatile int64_t t95 = 125193343144603LL;

	t95 = ((x381|(x382|x383))^x384);

	if (t95 != -256LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MAX;
	static int8_t x387 = INT8_MIN;
	static int64_t t96 = 76233391556115LL;

	t96 = ((x385|(x386|x387))^x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int16_t x390 = 0;
	static uint32_t x391 = 312694U;
	uint16_t x392 = UINT16_MAX;
	static volatile int64_t t97 = 23LL;

	t97 = ((x389|(x390|x391))^x392);

	if (t97 != -9223372036854498679LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = 16278;
	uint32_t x394 = 9U;
	uint64_t x395 = 16304498LLU;
	int8_t x396 = INT8_MIN;
	uint64_t t98 = 43230LLU;

	t98 = ((x393|(x394|x395))^x396);

	if (t98 != 18446744073693233279LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	static int32_t x398 = 17860;
	int16_t x399 = 4966;

	t99 = ((x397|(x398|x399))^x400);

	if (t99 != -108) { NG(); } else { ; }
	
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

