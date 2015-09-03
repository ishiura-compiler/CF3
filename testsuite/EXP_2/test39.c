#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x2 = 3284U;
int64_t t0 = -325194LL;
uint64_t x9 = UINT64_MAX;
static volatile int16_t x17 = -1;
uint64_t x19 = 76517765282LLU;
int64_t x23 = INT64_MAX;
volatile int64_t x24 = INT64_MIN;
volatile int64_t t4 = -144112380348914LL;
uint32_t x26 = UINT32_MAX;
int32_t x41 = -1;
static int32_t t7 = 475014693;
int8_t x46 = INT8_MIN;
int64_t t8 = 42610534LL;
static int16_t x53 = 163;
volatile uint64_t x64 = 2271406106071737486LLU;
volatile uint16_t x84 = UINT16_MAX;
int64_t t14 = 469LL;
static int64_t x101 = -7LL;
uint32_t x110 = 1962U;
uint16_t x118 = 3U;
uint32_t x125 = UINT32_MAX;
static int32_t x130 = INT32_MIN;
int8_t x139 = INT8_MAX;
int32_t x143 = 61;
volatile int32_t t24 = 110221061;
int8_t x150 = 26;
int16_t x151 = 9;
uint8_t x155 = 6U;
static uint32_t x163 = UINT32_MAX;
int8_t x168 = -1;
volatile int8_t x171 = INT8_MIN;
int8_t x174 = INT8_MIN;
uint8_t x175 = 1U;
uint16_t x186 = 114U;
int32_t x190 = INT32_MIN;
int64_t x191 = -1LL;
uint8_t x201 = 6U;
uint16_t x210 = UINT16_MAX;
uint16_t x211 = 1160U;
int32_t x213 = -9922392;
volatile uint64_t x216 = UINT64_MAX;
static volatile int64_t t39 = 6LL;
uint16_t x231 = UINT16_MAX;
static uint64_t x232 = UINT64_MAX;
int8_t x234 = INT8_MAX;
static volatile uint32_t x261 = UINT32_MAX;
uint8_t x263 = 50U;
volatile uint64_t t48 = 33211052565LLU;
static volatile int16_t x274 = INT16_MIN;
static int32_t x276 = -306046;
uint32_t x279 = UINT32_MAX;
volatile int64_t t51 = 1557038728198881LL;
volatile int32_t t52 = 107;
int64_t x297 = 155041LL;
static volatile int64_t x310 = -916LL;
static volatile int32_t x311 = 37894571;
int64_t t55 = 13903226301579LL;
int8_t x314 = INT8_MAX;
uint64_t x327 = 3922969052LLU;
static int8_t x334 = -15;
uint64_t t60 = 1075290033LLU;
uint64_t x352 = 0LLU;
int16_t x355 = INT16_MIN;
volatile uint64_t t66 = 458128125966LLU;
uint64_t t67 = 135602711908760LLU;
volatile int64_t x372 = INT64_MAX;
int64_t t68 = 14085310796246702LL;
int16_t x379 = INT16_MAX;
uint16_t x385 = 3U;
int8_t x388 = 2;
uint8_t x390 = 87U;
volatile uint8_t x406 = UINT8_MAX;
int64_t x415 = INT64_MIN;
volatile uint64_t t76 = 48122420054562LLU;
static uint64_t x418 = 3528427594341LLU;
uint64_t t77 = 349217213444LLU;
int64_t x421 = -1LL;
volatile int32_t x428 = INT32_MIN;
int16_t x439 = INT16_MIN;
int64_t t81 = 313134788370030398LL;
uint32_t x449 = UINT32_MAX;
uint32_t t82 = 674058U;
volatile int32_t x456 = -396;
int8_t x462 = INT8_MIN;
uint16_t x463 = 8497U;
uint64_t t85 = 65LLU;
int64_t t86 = 8563125660LL;
uint64_t x470 = UINT64_MAX;
uint16_t x483 = 18133U;
uint64_t x492 = UINT64_MAX;
uint64_t t92 = 6LLU;
uint32_t x503 = UINT32_MAX;
static int8_t x504 = 1;
volatile uint32_t t94 = 292U;
uint32_t x505 = 57025772U;
int16_t x506 = 6595;
int16_t x508 = 1;
int64_t x516 = -7311056LL;
int32_t x518 = INT32_MIN;
volatile int32_t x528 = INT32_MAX;
volatile uint8_t x535 = 126U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	volatile int64_t x3 = -1LL;
	static volatile uint8_t x4 = UINT8_MAX;

	t0 = ((x1*(x2+x3))^x4);

	if (t0 != 14100377629650LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = -1;
	int16_t x11 = 495;
	int16_t x12 = INT16_MIN;
	uint64_t t1 = 437190359645873LLU;

	t1 = ((x9*(x10+x11))^x12);

	if (t1 != 32274LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = UINT32_MAX;
	uint8_t x14 = UINT8_MAX;
	static int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MIN;
	volatile uint32_t t2 = 188798U;

	t2 = ((x13*(x14+x15))^x16);

	if (t2 != 2147516161U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x18 = -1LL;
	static uint16_t x20 = 14U;
	volatile uint64_t t3 = 6768LLU;

	t3 = ((x17*(x18+x19))^x20);

	if (t3 != 18446743997191786321LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 11U;
	int64_t x22 = INT64_MIN;

	t4 = ((x21*(x22+x23))^x24);

	if (t4 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = -7479184596LL;
	volatile int32_t x27 = 122;
	int32_t x28 = 839732047;
	volatile int64_t t5 = 199433371LL;

	t5 = ((x25*(x26+x27))^x28);

	if (t5 != -904209767293LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	int64_t x40 = 92409LL;
	int64_t t6 = -17074266399743648LL;

	t6 = ((x37*(x38+x39))^x40);

	if (t6 != 92281LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x42 = INT8_MIN;
	int32_t x43 = -1;
	int32_t x44 = INT32_MIN;

	t7 = ((x41*(x42+x43))^x44);

	if (t7 != -2147483519) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 213U;
	int64_t x47 = -75957523553258LL;
	int32_t x48 = -1;

	t8 = ((x45*(x46+x47))^x48);

	if (t8 != 16178952516871217LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x54 = 6328166U;
	int32_t x55 = 912495053;
	int8_t x56 = INT8_MAX;
	volatile uint32_t t9 = 0U;

	t9 = ((x53*(x54+x55))^x56);

	if (t9 != 3739296518U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = 14761;
	int8_t x58 = 51;
	static uint8_t x59 = UINT8_MAX;
	int16_t x60 = INT16_MAX;
	static int32_t t10 = -1156413;

	t10 = ((x57*(x58+x59))^x60);

	if (t10 != 4494333) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = UINT32_MAX;
	volatile uint8_t x62 = 57U;
	int16_t x63 = -7;
	volatile uint64_t t11 = 1453660731413487LLU;

	t11 = ((x61*(x62+x63))^x64);

	if (t11 != 2271406104559803200LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = INT8_MAX;
	int64_t x78 = -1LL;
	volatile uint32_t x79 = 949878659U;
	int8_t x80 = INT8_MAX;
	static int64_t t12 = -81174907611LL;

	t12 = ((x77*(x78+x79))^x80);

	if (t12 != 120634589441LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x81 = 0U;
	int32_t x82 = -1;
	int8_t x83 = INT8_MAX;
	int32_t t13 = -60;

	t13 = ((x81*(x82+x83))^x84);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x93 = INT8_MIN;
	volatile int64_t x94 = 103101006LL;
	static uint32_t x95 = UINT32_MAX;
	volatile uint8_t x96 = 0U;

	t14 = ((x93*(x94+x95))^x96);

	if (t14 != -562952742528LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x102 = 3;
	int32_t x103 = 90529824;
	int8_t x104 = INT8_MAX;
	int64_t t15 = 12925864169241LL;

	t15 = ((x101*(x102+x103))^x104);

	if (t15 != -633708684LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x105 = 5932517U;
	int64_t x106 = 2352649LL;
	static int8_t x107 = -1;
	volatile int32_t x108 = INT32_MIN;
	volatile int64_t t16 = 65LL;

	t16 = ((x105*(x106+x107))^x108);

	if (t16 != -13958015685336LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x109 = 1U;
	static volatile uint32_t x111 = UINT32_MAX;
	int64_t x112 = INT64_MIN;
	int64_t t17 = 4868LL;

	t17 = ((x109*(x110+x111))^x112);

	if (t17 != -9223372036854773847LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MIN;
	int16_t x115 = 7658;
	static int32_t x116 = INT32_MAX;
	int64_t t18 = 108604025424LL;

	t18 = ((x113*(x114+x115))^x116);

	if (t18 != -2147476119LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = INT8_MIN;
	int16_t x119 = INT16_MIN;
	volatile uint16_t x120 = UINT16_MAX;
	int32_t t19 = 18753285;

	t19 = ((x117*(x118+x119))^x120);

	if (t19 != 4129151) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x122 = -1LL;
	uint32_t x123 = 2865U;
	uint16_t x124 = UINT16_MAX;
	volatile int64_t t20 = 59008683201474920LL;

	t20 = ((x121*(x122+x123))^x124);

	if (t20 != 777007LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x126 = INT32_MIN;
	volatile uint64_t x127 = 15464050741850859LLU;
	int64_t x128 = -3LL;
	static volatile uint64_t t21 = 601LLU;

	t21 = ((x125*(x126+x127))^x128);

	if (t21 != 11310013716675801832LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x129 = 416LLU;
	volatile int16_t x131 = INT16_MAX;
	volatile int32_t x132 = INT32_MIN;
	uint64_t t22 = 66472369LLU;

	t22 = ((x129*(x130+x131))^x132);

	if (t22 != 891219344992LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x137 = 545053515086701981LLU;
	uint64_t x138 = UINT64_MAX;
	volatile int16_t x140 = 971;
	uint64_t t23 = 65355548244825295LLU;

	t23 = ((x137*(x138+x139))^x140);

	if (t23 != 13336510679795794061LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = 1;
	int8_t x142 = -62;
	int16_t x144 = -1;

	t24 = ((x141*(x142+x143))^x144);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x149 = INT8_MIN;
	static int64_t x152 = INT64_MIN;
	int64_t t25 = -116005060259144554LL;

	t25 = ((x149*(x150+x151))^x152);

	if (t25 != 9223372036854771328LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x153 = 104519842LL;
	uint16_t x154 = 14630U;
	volatile int64_t x156 = INT64_MIN;
	int64_t t26 = -29496188LL;

	t26 = ((x153*(x154+x155))^x156);

	if (t26 != -9223370507102368296LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x161 = 11U;
	int16_t x162 = -1;
	int64_t x164 = -80LL;
	int64_t t27 = 416571035412328LL;

	t27 = ((x161*(x162+x163))^x164);

	if (t27 != -4294967206LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x165 = INT8_MAX;
	int64_t x166 = 98786LL;
	static int64_t x167 = -39156182689LL;
	int64_t t28 = -9026107961187LL;

	t28 = ((x165*(x166+x167))^x168);

	if (t28 != 4972822655680LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = INT16_MIN;
	uint16_t x172 = UINT16_MAX;
	uint32_t t29 = 12810000U;

	t29 = ((x169*(x170+x171))^x172);

	if (t29 != 32639U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x173 = 148U;
	uint8_t x176 = 1U;
	volatile int32_t t30 = -1;

	t30 = ((x173*(x174+x175))^x176);

	if (t30 != -18795) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x181 = -64069587LL;
	volatile int32_t x182 = 199;
	volatile uint8_t x183 = 9U;
	uint8_t x184 = 1U;
	volatile int64_t t31 = -24253314633LL;

	t31 = ((x181*(x182+x183))^x184);

	if (t31 != -13326474095LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x185 = 1U;
	int32_t x187 = INT32_MIN;
	int8_t x188 = 3;
	static volatile int32_t t32 = -284;

	t32 = ((x185*(x186+x187))^x188);

	if (t32 != -2147483535) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = -1;
	static volatile uint32_t x192 = UINT32_MAX;
	int64_t t33 = 0LL;

	t33 = ((x189*(x190+x191))^x192);

	if (t33 != 2147483646LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x202 = 0U;
	int16_t x203 = INT16_MIN;
	int8_t x204 = 30;
	int32_t t34 = -14;

	t34 = ((x201*(x202+x203))^x204);

	if (t34 != -196578) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x209 = 5380LLU;
	static int64_t x212 = 242174989987215425LL;
	static uint64_t t35 = 1860LLU;

	t35 = ((x209*(x210+x211))^x212);

	if (t35 != 242174990307876189LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x214 = UINT32_MAX;
	volatile int32_t x215 = -1;
	volatile uint64_t t36 = 1LLU;

	t36 = ((x213*(x214+x215))^x216);

	if (t36 != 18446744073689706831LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x217 = 31U;
	static int8_t x218 = INT8_MAX;
	uint32_t x219 = UINT32_MAX;
	static int16_t x220 = -1;
	uint32_t t37 = 19248U;

	t37 = ((x217*(x218+x219))^x220);

	if (t37 != 4294963389U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x221 = UINT8_MAX;
	static int16_t x222 = -5716;
	uint32_t x223 = 10U;
	uint32_t x224 = 29489185U;
	uint32_t t38 = 1U;

	t38 = ((x221*(x222+x223))^x224);

	if (t38 != 4264047723U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x225 = -29LL;
	uint16_t x226 = UINT16_MAX;
	static int64_t x227 = -1LL;
	uint32_t x228 = 1396493477U;

	t39 = ((x225*(x226+x227))^x228);

	if (t39 != -1394619233LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x229 = INT16_MAX;
	uint64_t x230 = 4959130LLU;
	uint64_t t40 = 18315LLU;

	t40 = ((x229*(x230+x231))^x232);

	if (t40 != 18446743909066353560LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x233 = INT8_MIN;
	uint8_t x235 = 0U;
	uint8_t x236 = UINT8_MAX;
	static volatile int32_t t41 = 406617848;

	t41 = ((x233*(x234+x235))^x236);

	if (t41 != -16257) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x237 = INT16_MAX;
	int16_t x238 = INT16_MIN;
	int64_t x239 = 26366085440440LL;
	uint8_t x240 = UINT8_MAX;
	int64_t t42 = -2996955867LL;

	t42 = ((x237*(x238+x239))^x240);

	if (t42 != 863937520553188535LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x241 = -31;
	uint32_t x242 = UINT32_MAX;
	static uint16_t x243 = UINT16_MAX;
	int64_t x244 = -1LL;
	static volatile int64_t t43 = 22413465378859LL;

	t43 = ((x241*(x242+x243))^x244);

	if (t43 != -4292935743LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x253 = 0U;
	int64_t x254 = 292250482480537912LL;
	int32_t x255 = INT32_MAX;
	int32_t x256 = -1;
	volatile int64_t t44 = -154LL;

	t44 = ((x253*(x254+x255))^x256);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x257 = 14U;
	volatile uint8_t x258 = 1U;
	static uint16_t x259 = 5U;
	uint16_t x260 = 200U;
	static int32_t t45 = 12383;

	t45 = ((x257*(x258+x259))^x260);

	if (t45 != 156) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x262 = INT8_MAX;
	int64_t x264 = -15494701LL;
	int64_t t46 = 22853918866628308LL;

	t46 = ((x261*(x262+x263))^x264);

	if (t46 != -4279472484LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x265 = UINT64_MAX;
	int32_t x266 = 1;
	volatile int16_t x267 = INT16_MAX;
	static uint64_t x268 = UINT64_MAX;
	uint64_t t47 = 115901724513LLU;

	t47 = ((x265*(x266+x267))^x268);

	if (t47 != 32767LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x269 = UINT64_MAX;
	static int64_t x270 = INT64_MAX;
	static int16_t x271 = -3;
	volatile int16_t x272 = INT16_MIN;

	t48 = ((x269*(x270+x271))^x272);

	if (t48 != 9223372036854743044LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x273 = 1043030567LLU;
	static volatile int64_t x275 = -1LL;
	uint64_t t49 = 291LLU;

	t49 = ((x273*(x274+x275))^x276);

	if (t49 != 34179068348763LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x277 = INT16_MIN;
	int32_t x278 = INT32_MIN;
	volatile uint32_t x280 = 11U;
	uint32_t t50 = 181964175U;

	t50 = ((x277*(x278+x279))^x280);

	if (t50 != 32779U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x281 = -15;
	int16_t x282 = -1;
	int64_t x283 = -1LL;
	volatile uint32_t x284 = 47896U;

	t51 = ((x281*(x282+x283))^x284);

	if (t51 != 47878LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x289 = INT8_MAX;
	uint16_t x290 = 1U;
	int32_t x291 = -213695;
	static volatile int32_t x292 = -1743;

	t52 = ((x289*(x290+x291))^x292);

	if (t52 != 27138703) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = 7777;
	int16_t x300 = 5018;
	int64_t t53 = -2251LL;

	t53 = ((x297*(x298+x299))^x300);

	if (t53 != 11366361594LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x305 = 22U;
	int64_t x306 = -1LL;
	uint64_t x307 = 3774368103915973LLU;
	int8_t x308 = INT8_MAX;
	uint64_t t54 = 65332481LLU;

	t54 = ((x305*(x306+x307))^x308);

	if (t54 != 83036098286151335LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x309 = 7327346U;
	int8_t x312 = INT8_MAX;

	t55 = ((x309*(x310+x311))^x312);

	if (t55 != 277659921389633LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x313 = 2656U;
	static int8_t x315 = -1;
	uint8_t x316 = 0U;
	volatile uint32_t t56 = 156U;

	t56 = ((x313*(x314+x315))^x316);

	if (t56 != 334656U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x318 = 552410201U;
	uint64_t x319 = 27939LLU;
	volatile uint16_t x320 = 1U;
	volatile uint64_t t57 = 56008362797LLU;

	t57 = ((x317*(x318+x319))^x320);

	if (t57 != 18446725971416580097LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x325 = 63U;
	uint64_t x326 = UINT64_MAX;
	static volatile int8_t x328 = 7;
	uint64_t t58 = 14392095222515LLU;

	t58 = ((x325*(x326+x327))^x328);

	if (t58 != 247147050210LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x329 = INT8_MIN;
	uint64_t x330 = 1636579014LLU;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MIN;
	uint64_t t59 = 484832180261769LLU;

	t59 = ((x329*(x330+x331))^x332);

	if (t59 != 209477919360LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x333 = INT64_MAX;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = INT64_MIN;

	t60 = ((x333*(x334+x335))^x336);

	if (t60 != 9223372036854775824LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x337 = 5583654133082583LL;
	int32_t x338 = -1;
	int8_t x339 = -1;
	int64_t x340 = INT64_MAX;
	volatile int64_t t61 = 5125263LL;

	t61 = ((x337*(x338+x339))^x340);

	if (t61 != -9212204728588610643LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x341 = INT16_MIN;
	int16_t x342 = -994;
	uint64_t x343 = UINT64_MAX;
	uint32_t x344 = 0U;
	uint64_t t62 = 951642854177LLU;

	t62 = ((x341*(x342+x343))^x344);

	if (t62 != 32604160LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x345 = UINT8_MAX;
	uint8_t x346 = UINT8_MAX;
	static int16_t x347 = INT16_MAX;
	uint8_t x348 = 5U;
	int32_t t63 = 1;

	t63 = ((x345*(x346+x347))^x348);

	if (t63 != 8420615) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x349 = 3;
	int16_t x350 = -1;
	int8_t x351 = INT8_MAX;
	static uint64_t t64 = 6575662LLU;

	t64 = ((x349*(x350+x351))^x352);

	if (t64 != 378LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x353 = 3U;
	int32_t x354 = 293028;
	uint16_t x356 = 476U;
	int32_t t65 = 25;

	t65 = ((x353*(x354+x355))^x356);

	if (t65 != 780336) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x357 = -10;
	uint64_t x358 = 8447821978LLU;
	volatile uint16_t x359 = UINT16_MAX;
	int16_t x360 = INT16_MAX;

	t66 = ((x357*(x358+x359))^x360);

	if (t66 != 18446743989230687737LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x365 = 12945479U;
	volatile int8_t x366 = 0;
	uint64_t x367 = 6LLU;
	int32_t x368 = -1;

	t67 = ((x365*(x366+x367))^x368);

	if (t67 != 18446744073631878741LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MAX;
	int64_t x371 = INT64_MIN;

	t68 = ((x369*(x370+x371))^x372);

	if (t68 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x373 = INT32_MIN;
	uint64_t x374 = 4LLU;
	int8_t x375 = -25;
	uint32_t x376 = UINT32_MAX;
	volatile uint64_t t69 = 135515542020301LLU;

	t69 = ((x373*(x374+x375))^x376);

	if (t69 != 45097156607LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = 1;
	uint32_t x380 = 0U;
	volatile uint32_t t70 = 998746U;

	t70 = ((x377*(x378+x379))^x380);

	if (t70 != 3221225472U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x386 = -213LL;
	int64_t x387 = -1LL;
	int64_t t71 = -3503419209332179984LL;

	t71 = ((x385*(x386+x387))^x388);

	if (t71 != -644LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x389 = INT16_MAX;
	volatile uint64_t x391 = 789956152574LLU;
	volatile uint8_t x392 = UINT8_MAX;
	uint64_t t72 = 828025022447624357LLU;

	t72 = ((x389*(x390+x391))^x392);

	if (t72 != 25884493254242900LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x397 = -1LL;
	uint8_t x398 = 2U;
	uint8_t x399 = 100U;
	int64_t x400 = 15LL;
	volatile int64_t t73 = 28174577231LL;

	t73 = ((x397*(x398+x399))^x400);

	if (t73 != -107LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x405 = INT8_MIN;
	int16_t x407 = -1;
	volatile uint32_t x408 = 1U;
	uint32_t t74 = 1207162U;

	t74 = ((x405*(x406+x407))^x408);

	if (t74 != 4294934785U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x409 = 7U;
	uint64_t x410 = 246962470LLU;
	int8_t x411 = -26;
	int8_t x412 = INT8_MAX;
	volatile uint64_t t75 = 10101260304996086LLU;

	t75 = ((x409*(x410+x411))^x412);

	if (t75 != 1728737067LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x413 = UINT64_MAX;
	int64_t x414 = INT64_MAX;
	int64_t x416 = INT64_MAX;

	t76 = ((x413*(x414+x415))^x416);

	if (t76 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x417 = UINT8_MAX;
	int16_t x419 = INT16_MAX;
	static int32_t x420 = 1186;

	t77 = ((x417*(x418+x419))^x420);

	if (t77 != 899749044913470LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x422 = INT32_MIN;
	int32_t x423 = INT32_MAX;
	uint32_t x424 = 323104090U;
	volatile int64_t t78 = -62131691LL;

	t78 = ((x421*(x422+x423))^x424);

	if (t78 != 323104091LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x425 = 42U;
	int16_t x426 = INT16_MAX;
	static int16_t x427 = 81;
	volatile int32_t t79 = 11266;

	t79 = ((x425*(x426+x427))^x428);

	if (t79 != -2146104032) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x429 = INT8_MIN;
	int64_t x430 = -5116433LL;
	int64_t x431 = 748492050101LL;
	volatile uint8_t x432 = 65U;
	int64_t t80 = 7752LL;

	t80 = ((x429*(x430+x431))^x432);

	if (t80 != -95806327509439LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x437 = UINT8_MAX;
	uint16_t x438 = 170U;
	int64_t x440 = -2915820LL;

	t81 = ((x437*(x438+x439))^x440);

	if (t81 != 5417794LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x450 = -1;
	int8_t x451 = -1;
	volatile int16_t x452 = 221;

	t82 = ((x449*(x450+x451))^x452);

	if (t82 != 223U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x453 = 38721167051459LLU;
	int32_t x454 = 15014;
	int64_t x455 = -903143768652984LL;
	static uint64_t t83 = 8621888722796LLU;

	t83 = ((x453*(x454+x455))^x456);

	if (t83 != 7819162554567165502LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x457 = -1LL;
	static int32_t x458 = INT32_MIN;
	int64_t x459 = -44969450LL;
	uint32_t x460 = 313U;
	static volatile int64_t t84 = -5082028704519586LL;

	t84 = ((x457*(x458+x459))^x460);

	if (t84 != 2192452819LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x461 = 3800238998872LLU;
	int32_t x464 = INT32_MIN;

	t85 = ((x461*(x462+x463))^x464);

	if (t85 != 18414939874809344472LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x465 = 0;
	static int16_t x466 = -4142;
	static uint16_t x467 = 179U;
	volatile int64_t x468 = -4LL;

	t86 = ((x465*(x466+x467))^x468);

	if (t86 != -4LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x469 = UINT32_MAX;
	static int64_t x471 = INT64_MAX;
	int32_t x472 = INT32_MAX;
	volatile uint64_t t87 = 58061179618551LLU;

	t87 = ((x469*(x470+x471))^x472);

	if (t87 != 9223372030412324861LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x473 = 118U;
	static int16_t x474 = INT16_MIN;
	int8_t x475 = 0;
	static int64_t x476 = INT64_MIN;
	int64_t t88 = -113116298271890713LL;

	t88 = ((x473*(x474+x475))^x476);

	if (t88 != 9223372036850909184LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x477 = 0;
	volatile int32_t x478 = -5266;
	int8_t x479 = 12;
	volatile int16_t x480 = INT16_MIN;
	volatile int32_t t89 = -6410737;

	t89 = ((x477*(x478+x479))^x480);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x481 = INT32_MAX;
	volatile uint64_t x482 = 2256793LLU;
	int64_t x484 = INT64_MIN;
	uint64_t t90 = 3250728LLU;

	t90 = ((x481*(x482+x483))^x484);

	if (t90 != 9228257403237910930LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x489 = -1LL;
	int16_t x490 = 55;
	int8_t x491 = INT8_MIN;
	static volatile uint64_t t91 = 340053670951893789LLU;

	t91 = ((x489*(x490+x491))^x492);

	if (t91 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x493 = 66U;
	static uint64_t x494 = 1555630259LLU;
	volatile int16_t x495 = -5554;
	int16_t x496 = INT16_MIN;

	t92 = ((x493*(x494+x495))^x496);

	if (t92 != 18446743971038307906LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x497 = UINT16_MAX;
	static uint16_t x498 = 992U;
	int32_t x499 = 1;
	int64_t x500 = INT64_MIN;
	static int64_t t93 = 1LL;

	t93 = ((x497*(x498+x499))^x500);

	if (t93 != -9223372036789699553LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x501 = 253U;
	uint16_t x502 = UINT16_MAX;

	t94 = ((x501*(x502+x503))^x504);

	if (t94 != 16580103U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x507 = 0;
	uint32_t t95 = 971U;

	t95 = ((x505*(x506+x507))^x508);

	if (t95 != 2422811589U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x513 = -110599LL;
	static uint64_t x514 = 8LLU;
	int64_t x515 = INT64_MAX;
	uint64_t t96 = 3253069182LLU;

	t96 = ((x513*(x514+x515))^x516);

	if (t96 != 9223372036861353727LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x517 = INT8_MAX;
	int64_t x519 = -1LL;
	int8_t x520 = INT8_MIN;
	static volatile int64_t t97 = -420013684585985LL;

	t97 = ((x517*(x518+x519))^x520);

	if (t97 != 272730423297LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x525 = 0U;
	int32_t x526 = -1;
	uint64_t x527 = 1109116003310712617LLU;
	static volatile uint64_t t98 = 288547880LLU;

	t98 = ((x525*(x526+x527))^x528);

	if (t98 != 2147483647LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x533 = 1U;
	int8_t x534 = INT8_MIN;
	uint8_t x536 = 2U;
	int32_t t99 = 3911;

	t99 = ((x533*(x534+x535))^x536);

	if (t99 != -4) { NG(); } else { ; }
	
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

