
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
int64_t x3 = INT64_MAX;
volatile uint64_t t0 = 56576753986239LLU;
int16_t x5 = INT16_MAX;
volatile int64_t t2 = -3723LL;
static int32_t x32 = -1337383;
static volatile int32_t t4 = 419417;
volatile uint32_t x33 = UINT32_MAX;
static volatile uint32_t t6 = 19562728U;
volatile int64_t t10 = -43006938803683LL;
int16_t x89 = 5476;
uint8_t x91 = 1U;
int64_t x96 = -1LL;
uint64_t t15 = 3LLU;
static volatile uint16_t x127 = UINT16_MAX;
static volatile uint16_t x131 = 8726U;
int64_t t17 = -1262586LL;
int64_t x133 = INT64_MAX;
int64_t x138 = INT64_MAX;
int32_t x139 = INT32_MAX;
static uint32_t x140 = 216001U;
volatile uint32_t t19 = 19U;
uint64_t t20 = 12LLU;
int16_t x152 = -1;
static int32_t t22 = -848047;
int8_t x154 = INT8_MAX;
int64_t x156 = -5011LL;
static uint64_t x157 = 7314213900LLU;
int32_t x187 = -1;
int32_t x188 = INT32_MAX;
uint32_t x191 = 0U;
int64_t x204 = -1LL;
uint8_t x235 = UINT8_MAX;
int64_t x236 = 7760187LL;
int64_t t29 = 659608146775LL;
int64_t t30 = -80184211919237325LL;
volatile int8_t x250 = INT8_MIN;
static uint8_t x251 = UINT8_MAX;
int32_t x252 = INT32_MAX;
int8_t x253 = INT8_MAX;
int32_t x254 = INT32_MAX;
int32_t x255 = INT32_MIN;
volatile int16_t x267 = INT16_MIN;
int32_t x297 = 62359;
static uint64_t x299 = 57021368087175947LLU;
uint64_t t38 = 7425590LLU;
uint32_t x307 = UINT32_MAX;
volatile uint32_t t43 = 4U;
uint64_t x375 = 2182232568LLU;
uint16_t x385 = 30U;
uint16_t x390 = 0U;
uint8_t x391 = UINT8_MAX;
uint32_t t46 = 193485U;
volatile int64_t x408 = 144823237LL;
int64_t t48 = 61909LL;
volatile int32_t t49 = -6516589;
uint8_t x425 = 9U;
static uint16_t x426 = UINT16_MAX;
uint8_t x427 = UINT8_MAX;
int32_t t51 = 12;
volatile uint16_t x439 = 6U;
uint32_t x449 = 1176U;
volatile uint32_t t56 = 5659273U;
uint64_t t57 = 7931544LLU;
uint32_t x477 = 16U;
volatile uint32_t t59 = 3443U;
static uint64_t x488 = 1LLU;
static volatile int16_t x494 = INT16_MAX;
volatile int32_t t61 = -523183;
int32_t x505 = 12347855;
static uint64_t x506 = UINT64_MAX;
volatile int32_t x510 = 30258888;
int32_t x512 = -1;
int32_t t67 = 28206;
uint64_t x541 = 277622533544248803LLU;
volatile int8_t x544 = INT8_MIN;
int8_t x552 = INT8_MAX;
uint16_t x553 = 2380U;
int32_t x556 = -1;
volatile int32_t t71 = -15284;
uint32_t x563 = UINT32_MAX;
uint16_t x570 = 1740U;
static int64_t x571 = 7333LL;
volatile uint8_t x572 = UINT8_MAX;
uint8_t x573 = 1U;
int8_t x591 = INT8_MAX;
int16_t x596 = -1;
static uint8_t x626 = UINT8_MAX;
static volatile int32_t t81 = 124;
volatile uint32_t x635 = 516459U;
int16_t x663 = INT16_MIN;
int64_t x669 = INT64_MAX;
uint64_t x672 = 0LLU;
volatile int16_t x676 = -1;
uint8_t x683 = UINT8_MAX;
uint32_t t91 = 56940747U;
int32_t x688 = -1;
volatile int32_t x711 = -1;
int8_t x712 = INT8_MIN;
uint64_t t95 = 23743161646LLU;
int16_t x718 = INT16_MIN;
int32_t t96 = 98;
volatile uint16_t x731 = UINT16_MAX;
volatile int32_t t97 = 2769888;
volatile uint64_t x753 = UINT64_MAX;
uint32_t x754 = UINT32_MAX;
static uint16_t x755 = 3U;
int8_t x756 = INT8_MAX;
static int64_t x764 = INT64_MIN;
uint64_t x790 = UINT64_MAX;
volatile uint64_t t104 = 9903618LLU;
int64_t x818 = -1LL;
uint8_t x825 = 2U;
static volatile int8_t x826 = INT8_MAX;
static int16_t x835 = -1;
uint8_t x849 = 11U;
static volatile uint64_t x850 = 19582868694072317LLU;
uint32_t x857 = 3041U;
volatile uint64_t t113 = 1LLU;
int32_t t115 = 140;
uint32_t x903 = 1853136U;
static int64_t x905 = INT64_MAX;
volatile int64_t x909 = 851283LL;
volatile uint16_t x916 = 1U;
uint32_t t119 = 5101U;
volatile uint64_t t120 = 786373938989956268LLU;
static int64_t x925 = 2LL;
static uint16_t x929 = 1954U;
uint32_t t122 = 484U;
static uint32_t x936 = 112U;
uint32_t x937 = 1U;
volatile uint32_t x947 = 941553U;
int16_t x948 = -195;
uint8_t x970 = UINT8_MAX;
static volatile uint64_t x972 = 1829167LLU;
volatile int32_t x987 = -10;
volatile int64_t t129 = -24232LL;
volatile uint64_t t131 = 51917068785LLU;
int64_t x1032 = -20LL;
int16_t x1053 = INT16_MAX;
uint8_t x1054 = UINT8_MAX;
int16_t x1055 = -2681;
static uint64_t t135 = 7818LLU;
volatile uint8_t x1061 = UINT8_MAX;
uint64_t x1063 = 577887994047294212LLU;
static int32_t t136 = -1882;
uint64_t x1069 = 5LLU;
volatile uint32_t x1085 = UINT32_MAX;
static uint32_t t138 = 28498U;
int16_t x1104 = INT16_MIN;
int16_t x1113 = 0;
static int64_t x1115 = 51354LL;
int32_t x1129 = INT32_MAX;
uint16_t x1130 = 7U;
volatile int64_t x1131 = -238957LL;
int32_t x1138 = -56;
static volatile uint16_t x1149 = 8U;
int8_t x1156 = INT8_MIN;
static int8_t x1161 = 0;
volatile uint32_t t149 = 70297U;
int64_t x1202 = -1LL;
volatile int64_t x1214 = INT64_MIN;
int32_t x1218 = -5868;
uint16_t x1219 = 135U;
uint8_t x1221 = 25U;
volatile int32_t t158 = -4565;
uint32_t x1231 = 76U;
uint8_t x1242 = 0U;
static int64_t x1243 = -1LL;
int8_t x1245 = 0;
volatile int8_t x1259 = -1;
int32_t t165 = -1;
volatile int32_t x1274 = INT32_MAX;
volatile uint16_t x1291 = 7U;
volatile int64_t t172 = 115786LL;
uint16_t x1306 = 827U;
int32_t x1313 = INT32_MAX;
int8_t x1315 = INT8_MIN;
uint32_t x1325 = 1968749991U;
static int16_t x1326 = INT16_MAX;
int64_t x1327 = INT64_MAX;
volatile uint32_t x1335 = UINT32_MAX;
static uint32_t t177 = 157761541U;
static uint32_t x1345 = 4728300U;
static int64_t x1346 = -1LL;
int32_t t179 = -2551807;
volatile uint32_t t180 = 220006708U;
uint64_t x1378 = 13103504LLU;
uint8_t x1381 = UINT8_MAX;
volatile int8_t x1382 = -1;
int32_t x1384 = -3674;
volatile int32_t t185 = 34891215;
static int64_t x1435 = INT64_MIN;
volatile uint64_t x1448 = 344091LLU;
static int32_t x1455 = -1;
static int64_t x1458 = -1LL;
volatile int8_t x1464 = -1;
volatile int32_t x1481 = INT32_MAX;
static volatile int64_t x1483 = INT64_MIN;
static int32_t t195 = -978;
volatile uint64_t x1505 = 8529144166LLU;
volatile int32_t t197 = -51175992;
uint16_t x1523 = UINT16_MAX;
uint32_t x1533 = 923157U;


void f0(void) {
    	static volatile uint64_t x1 = UINT64_MAX;
	uint8_t x4 = UINT8_MAX;

    t0 = ((x1>>(x2!=x3))-x4);

    if (t0 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	uint8_t x7 = 15U;
	int16_t x8 = 21;
	int32_t t1 = -106155;

    t1 = ((x5>>(x6!=x7))-x8);

    if (t1 != 16362) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x21 = INT32_MAX;
	uint16_t x22 = UINT16_MAX;
	volatile int16_t x23 = 5;
	static volatile int64_t x24 = INT64_MAX;

    t2 = ((x21>>(x22!=x23))-x24);

    if (t2 != -9223372035781033984LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x25 = INT16_MAX;
	static int32_t x26 = 569;
	int64_t x27 = 61499747434666LL;
	int16_t x28 = 157;
	static volatile int32_t t3 = -1;

    t3 = ((x25>>(x26!=x27))-x28);

    if (t3 != 16226) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x29 = INT16_MAX;
	int64_t x30 = -1LL;
	static uint8_t x31 = 3U;

    t4 = ((x29>>(x30!=x31))-x32);

    if (t4 != 1353766) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x34 = INT32_MIN;
	volatile int32_t x35 = 1860204;
	static int8_t x36 = INT8_MIN;
	uint32_t t5 = 219U;

    t5 = ((x33>>(x34!=x35))-x36);

    if (t5 != 2147483775U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x53 = 587134U;
	int16_t x54 = INT16_MIN;
	uint32_t x55 = 13646U;
	volatile int16_t x56 = -1;

    t6 = ((x53>>(x54!=x55))-x56);

    if (t6 != 293568U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x61 = INT16_MAX;
	static uint16_t x62 = 35U;
	int32_t x63 = 14548577;
	static volatile uint64_t x64 = 23623644225901300LLU;
	uint64_t t7 = 67376LLU;

    t7 = ((x61>>(x62!=x63))-x64);

    if (t7 != 18423120429483666699LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x69 = UINT16_MAX;
	volatile int64_t x70 = -1489697LL;
	int64_t x71 = -1LL;
	volatile int16_t x72 = 5;
	volatile int32_t t8 = -2556206;

    t8 = ((x69>>(x70!=x71))-x72);

    if (t8 != 32762) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x73 = 84706036U;
	static volatile int64_t x74 = INT64_MAX;
	static volatile int32_t x75 = INT32_MIN;
	uint16_t x76 = 246U;
	volatile uint32_t t9 = 497508U;

    t9 = ((x73>>(x74!=x75))-x76);

    if (t9 != 42352772U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x77 = 11872343LL;
	int8_t x78 = -1;
	int64_t x79 = INT64_MIN;
	uint32_t x80 = UINT32_MAX;

    t10 = ((x77>>(x78!=x79))-x80);

    if (t10 != -4289031124LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x81 = 2442LLU;
	int8_t x82 = INT8_MAX;
	int64_t x83 = INT64_MIN;
	uint8_t x84 = 33U;
	static volatile uint64_t t11 = 1022792LLU;

    t11 = ((x81>>(x82!=x83))-x84);

    if (t11 != 1188LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x90 = -160;
	uint64_t x92 = UINT64_MAX;
	static uint64_t t12 = 335977LLU;

    t12 = ((x89>>(x90!=x91))-x92);

    if (t12 != 2739LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x93 = 5U;
	volatile uint64_t x94 = 207700477211139899LLU;
	uint32_t x95 = 348U;
	volatile int64_t t13 = -679484243767376363LL;

    t13 = ((x93>>(x94!=x95))-x96);

    if (t13 != 3LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x109 = UINT64_MAX;
	static int16_t x110 = 247;
	static int32_t x111 = -1;
	volatile int32_t x112 = INT32_MIN;
	uint64_t t14 = 17LLU;

    t14 = ((x109>>(x110!=x111))-x112);

    if (t14 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x117 = INT32_MAX;
	int16_t x118 = 3;
	int16_t x119 = INT16_MIN;
	uint64_t x120 = UINT64_MAX;

    t15 = ((x117>>(x118!=x119))-x120);

    if (t15 != 1073741824LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x125 = UINT32_MAX;
	int8_t x126 = 10;
	int64_t x128 = -1LL;
	static int64_t t16 = -524498781565LL;

    t16 = ((x125>>(x126!=x127))-x128);

    if (t16 != 2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x129 = INT64_MAX;
	uint32_t x130 = 28565933U;
	volatile uint8_t x132 = 1U;

    t17 = ((x129>>(x130!=x131))-x132);

    if (t17 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x134 = 5;
	int32_t x135 = INT32_MIN;
	uint8_t x136 = 14U;
	int64_t t18 = 31806LL;

    t18 = ((x133>>(x134!=x135))-x136);

    if (t18 != 4611686018427387889LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x137 = 22399U;

    t19 = ((x137>>(x138!=x139))-x140);

    if (t19 != 4294762494U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x141 = 513479490LLU;
	int16_t x142 = 58;
	static int64_t x143 = INT64_MIN;
	static int32_t x144 = INT32_MIN;

    t20 = ((x141>>(x142!=x143))-x144);

    if (t20 != 2404223393LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x145 = 15U;
	uint16_t x146 = UINT16_MAX;
	uint16_t x147 = UINT16_MAX;
	volatile uint32_t x148 = 12U;
	static uint32_t t21 = 1080U;

    t21 = ((x145>>(x146!=x147))-x148);

    if (t21 != 3U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x149 = UINT8_MAX;
	static volatile int16_t x150 = 26;
	volatile int64_t x151 = 66372712006LL;

    t22 = ((x149>>(x150!=x151))-x152);

    if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x153 = 5909;
	static int32_t x155 = INT32_MIN;
	volatile int64_t t23 = 399LL;

    t23 = ((x153>>(x154!=x155))-x156);

    if (t23 != 7965LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x158 = INT64_MAX;
	volatile int8_t x159 = 53;
	volatile int64_t x160 = INT64_MAX;
	volatile uint64_t t24 = 9313652LLU;

    t24 = ((x157>>(x158!=x159))-x160);

    if (t24 != 9223372040511882759LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x165 = UINT64_MAX;
	static uint16_t x166 = 15555U;
	static volatile int64_t x167 = INT64_MIN;
	uint16_t x168 = UINT16_MAX;
	volatile uint64_t t25 = 362797711LLU;

    t25 = ((x165>>(x166!=x167))-x168);

    if (t25 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x185 = INT32_MAX;
	volatile int32_t x186 = -1;
	int32_t t26 = 7;

    t26 = ((x185>>(x186!=x187))-x188);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x189 = INT32_MAX;
	int8_t x190 = INT8_MIN;
	static int8_t x192 = 7;
	int32_t t27 = -7;

    t27 = ((x189>>(x190!=x191))-x192);

    if (t27 != 1073741816) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x201 = INT16_MAX;
	uint64_t x202 = 62366755160LLU;
	volatile int8_t x203 = INT8_MIN;
	volatile int64_t t28 = 1840733815589LL;

    t28 = ((x201>>(x202!=x203))-x204);

    if (t28 != 16384LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	int8_t x234 = INT8_MIN;

    t29 = ((x233>>(x234!=x235))-x236);

    if (t29 != -7727420LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x245 = 1434342126510131611LL;
	static int32_t x246 = INT32_MAX;
	int8_t x247 = -1;
	static int32_t x248 = INT32_MIN;

    t30 = ((x245>>(x246!=x247))-x248);

    if (t30 != 717171065402549453LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x249 = 2LLU;
	uint64_t t31 = 78LLU;

    t31 = ((x249>>(x250!=x251))-x252);

    if (t31 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x256 = -1LL;
	int64_t t32 = -20794LL;

    t32 = ((x253>>(x254!=x255))-x256);

    if (t32 != 64LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x261 = UINT16_MAX;
	int8_t x262 = 37;
	int64_t x263 = -35626084295614418LL;
	int8_t x264 = INT8_MIN;
	volatile int32_t t33 = 1;

    t33 = ((x261>>(x262!=x263))-x264);

    if (t33 != 32895) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x265 = 11459355321230LLU;
	int8_t x266 = INT8_MIN;
	static uint32_t x268 = 517U;
	volatile uint64_t t34 = 3106472025515191LLU;

    t34 = ((x265>>(x266!=x267))-x268);

    if (t34 != 5729677660098LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x269 = 8695882U;
	uint8_t x270 = 88U;
	uint8_t x271 = UINT8_MAX;
	uint8_t x272 = 24U;
	volatile uint32_t t35 = 6349U;

    t35 = ((x269>>(x270!=x271))-x272);

    if (t35 != 4347917U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x273 = INT64_MAX;
	uint16_t x274 = UINT16_MAX;
	uint8_t x275 = UINT8_MAX;
	static uint16_t x276 = UINT16_MAX;
	volatile int64_t t36 = 116014LL;

    t36 = ((x273>>(x274!=x275))-x276);

    if (t36 != 4611686018427322368LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x285 = UINT32_MAX;
	int32_t x286 = 50480;
	volatile uint8_t x287 = 6U;
	volatile int16_t x288 = INT16_MIN;
	volatile uint32_t t37 = 783033U;

    t37 = ((x285>>(x286!=x287))-x288);

    if (t37 != 2147516415U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x298 = UINT32_MAX;
	uint64_t x300 = UINT64_MAX;

    t38 = ((x297>>(x298!=x299))-x300);

    if (t38 != 31180LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x305 = 23U;
	int8_t x306 = INT8_MAX;
	uint32_t x308 = UINT32_MAX;
	volatile uint32_t t39 = 54U;

    t39 = ((x305>>(x306!=x307))-x308);

    if (t39 != 12U) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint32_t x309 = UINT32_MAX;
	static int32_t x310 = INT32_MIN;
	static uint16_t x311 = 1U;
	uint16_t x312 = 1216U;
	uint32_t t40 = 369675257U;

    t40 = ((x309>>(x310!=x311))-x312);

    if (t40 != 2147482431U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x325 = 2;
	static int64_t x326 = INT64_MAX;
	int64_t x327 = 360453270587075500LL;
	static uint64_t x328 = UINT64_MAX;
	static uint64_t t41 = 6342933344429LLU;

    t41 = ((x325>>(x326!=x327))-x328);

    if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x341 = INT32_MAX;
	uint8_t x342 = UINT8_MAX;
	uint8_t x343 = 42U;
	int16_t x344 = INT16_MIN;
	static int32_t t42 = -2;

    t42 = ((x341>>(x342!=x343))-x344);

    if (t42 != 1073774591) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;

    t43 = ((x365>>(x366!=x367))-x368);

    if (t43 != 2147516415U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x373 = 928;
	int64_t x374 = -1LL;
	int16_t x376 = -1;
	int32_t t44 = -217743312;

    t44 = ((x373>>(x374!=x375))-x376);

    if (t44 != 465) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x386 = -1;
	static uint16_t x387 = 244U;
	static int32_t x388 = INT32_MAX;
	int32_t t45 = 11119;

    t45 = ((x385>>(x386!=x387))-x388);

    if (t45 != -2147483632) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x389 = INT16_MAX;
	volatile uint32_t x392 = 269584638U;

    t46 = ((x389>>(x390!=x391))-x392);

    if (t46 != 4025399041U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x393 = 411U;
	uint64_t x394 = 166604LLU;
	uint64_t x395 = UINT64_MAX;
	volatile uint64_t x396 = UINT64_MAX;
	uint64_t t47 = 3501LLU;

    t47 = ((x393>>(x394!=x395))-x396);

    if (t47 != 206LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x405 = INT8_MAX;
	int64_t x406 = INT64_MIN;
	volatile uint32_t x407 = 477U;

    t48 = ((x405>>(x406!=x407))-x408);

    if (t48 != -144823174LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x413 = UINT16_MAX;
	int16_t x414 = INT16_MAX;
	static int64_t x415 = INT64_MIN;
	int8_t x416 = -1;

    t49 = ((x413>>(x414!=x415))-x416);

    if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x421 = 3;
	uint16_t x422 = 21167U;
	int32_t x423 = INT32_MAX;
	static int64_t x424 = -1LL;
	int64_t t50 = 1841LL;

    t50 = ((x421>>(x422!=x423))-x424);

    if (t50 != 2LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x428 = 3;

    t51 = ((x425>>(x426!=x427))-x428);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x429 = 1057137869U;
	int32_t x430 = 49607181;
	int32_t x431 = -236362955;
	int8_t x432 = INT8_MIN;
	uint32_t t52 = 2119U;

    t52 = ((x429>>(x430!=x431))-x432);

    if (t52 != 528569062U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x433 = 15LL;
	uint32_t x434 = UINT32_MAX;
	int64_t x435 = 358148LL;
	int64_t x436 = INT64_MAX;
	volatile int64_t t53 = -73291070405LL;

    t53 = ((x433>>(x434!=x435))-x436);

    if (t53 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x437 = 188512662LLU;
	static volatile int64_t x438 = INT64_MIN;
	static uint64_t x440 = UINT64_MAX;
	volatile uint64_t t54 = 4419503169761840LLU;

    t54 = ((x437>>(x438!=x439))-x440);

    if (t54 != 94256332LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x445 = 14;
	int8_t x446 = 13;
	uint16_t x447 = 2702U;
	int32_t x448 = -1;
	volatile int32_t t55 = -21064;

    t55 = ((x445>>(x446!=x447))-x448);

    if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x450 = INT8_MIN;
	int16_t x451 = INT16_MIN;
	int32_t x452 = -1;

    t56 = ((x449>>(x450!=x451))-x452);

    if (t56 != 589U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x457 = INT8_MAX;
	volatile int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MIN;
	static uint64_t x460 = 4927410LLU;

    t57 = ((x457>>(x458!=x459))-x460);

    if (t57 != 18446744073704624269LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x465 = INT8_MAX;
	uint16_t x466 = 1590U;
	static int64_t x467 = INT64_MAX;
	volatile int64_t x468 = -2720029028258LL;
	volatile int64_t t58 = -10601844258449LL;

    t58 = ((x465>>(x466!=x467))-x468);

    if (t58 != 2720029028321LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x478 = UINT64_MAX;
	volatile int8_t x479 = 48;
	uint8_t x480 = UINT8_MAX;

    t59 = ((x477>>(x478!=x479))-x480);

    if (t59 != 4294967049U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x485 = 0;
	uint8_t x486 = UINT8_MAX;
	int8_t x487 = -1;
	volatile uint64_t t60 = UINT64_MAX;

    t60 = ((x485>>(x486!=x487))-x488);

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x493 = UINT16_MAX;
	volatile int8_t x495 = 49;
	int32_t x496 = 0;

    t61 = ((x493>>(x494!=x495))-x496);

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x507 = 402215053;
	int16_t x508 = INT16_MAX;
	volatile int32_t t62 = 7204603;

    t62 = ((x505>>(x506!=x507))-x508);

    if (t62 != 6141160) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x509 = 384290U;
	uint32_t x511 = UINT32_MAX;
	uint32_t t63 = 2U;

    t63 = ((x509>>(x510!=x511))-x512);

    if (t63 != 192146U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x513 = UINT16_MAX;
	uint32_t x514 = UINT32_MAX;
	int8_t x515 = INT8_MIN;
	static volatile uint64_t x516 = 970074558024045902LLU;
	volatile uint64_t t64 = 19682729035LLU;

    t64 = ((x513>>(x514!=x515))-x516);

    if (t64 != 17476669515685538481LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x517 = 634543U;
	uint16_t x518 = 9503U;
	int16_t x519 = -1;
	int32_t x520 = INT32_MAX;
	static volatile uint32_t t65 = 58213U;

    t65 = ((x517>>(x518!=x519))-x520);

    if (t65 != 2147800920U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x529 = UINT32_MAX;
	int32_t x530 = -36443;
	int64_t x531 = 3358344714806LL;
	volatile uint16_t x532 = UINT16_MAX;
	static volatile uint32_t t66 = 1U;

    t66 = ((x529>>(x530!=x531))-x532);

    if (t66 != 2147418112U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x537 = INT16_MAX;
	int16_t x538 = 419;
	static int8_t x539 = INT8_MIN;
	int32_t x540 = 49113;

    t67 = ((x537>>(x538!=x539))-x540);

    if (t67 != -32730) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x542 = -748;
	static volatile uint64_t x543 = UINT64_MAX;
	volatile uint64_t t68 = 4961LLU;

    t68 = ((x541>>(x542!=x543))-x544);

    if (t68 != 138811266772124529LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x545 = 239550305U;
	int8_t x546 = 0;
	int64_t x547 = 814098615898LL;
	uint8_t x548 = 1U;
	volatile uint32_t t69 = 5882U;

    t69 = ((x545>>(x546!=x547))-x548);

    if (t69 != 119775151U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x549 = INT16_MAX;
	static int16_t x550 = -1;
	volatile uint8_t x551 = 0U;
	static int32_t t70 = 675966;

    t70 = ((x549>>(x550!=x551))-x552);

    if (t70 != 16256) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x554 = UINT32_MAX;
	int64_t x555 = INT64_MIN;

    t71 = ((x553>>(x554!=x555))-x556);

    if (t71 != 1191) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x561 = INT8_MAX;
	int16_t x562 = 11379;
	int32_t x564 = -1;
	int32_t t72 = 455;

    t72 = ((x561>>(x562!=x563))-x564);

    if (t72 != 64) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x565 = 78846LL;
	int64_t x566 = INT64_MIN;
	int64_t x567 = -207158710LL;
	static int32_t x568 = INT32_MIN;
	int64_t t73 = 94974538085LL;

    t73 = ((x565>>(x566!=x567))-x568);

    if (t73 != 2147523071LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x569 = INT8_MAX;
	int32_t t74 = -759960;

    t74 = ((x569>>(x570!=x571))-x572);

    if (t74 != -192) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x574 = 2097484583U;
	static volatile int8_t x575 = -1;
	static volatile int64_t x576 = INT64_MAX;
	int64_t t75 = 1LL;

    t75 = ((x573>>(x574!=x575))-x576);

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x577 = INT64_MAX;
	int32_t x578 = INT32_MIN;
	uint32_t x579 = UINT32_MAX;
	int8_t x580 = -1;
	int64_t t76 = 3105304458851LL;

    t76 = ((x577>>(x578!=x579))-x580);

    if (t76 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x589 = 19;
	int16_t x590 = INT16_MAX;
	int16_t x592 = -1;
	volatile int32_t t77 = 9473;

    t77 = ((x589>>(x590!=x591))-x592);

    if (t77 != 10) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x593 = 56245208832LLU;
	int8_t x594 = -1;
	volatile int32_t x595 = INT32_MAX;
	uint64_t t78 = 5993658937LLU;

    t78 = ((x593>>(x594!=x595))-x596);

    if (t78 != 28122604417LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x597 = 3U;
	volatile uint64_t x598 = 1053LLU;
	static int8_t x599 = INT8_MAX;
	uint64_t x600 = UINT64_MAX;
	static uint64_t t79 = 30593075601LLU;

    t79 = ((x597>>(x598!=x599))-x600);

    if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x601 = 1953U;
	uint32_t x602 = 25U;
	uint32_t x603 = 16U;
	uint64_t x604 = 729658050109212LLU;
	static volatile uint64_t t80 = 0LLU;

    t80 = ((x601>>(x602!=x603))-x604);

    if (t80 != 18446014415659443380LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x625 = 12U;
	static volatile uint64_t x627 = UINT64_MAX;
	int32_t x628 = INT32_MAX;

    t81 = ((x625>>(x626!=x627))-x628);

    if (t81 != -2147483641) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x629 = UINT32_MAX;
	volatile int32_t x630 = -7834;
	int8_t x631 = INT8_MAX;
	volatile int32_t x632 = -1;
	volatile uint32_t t82 = 18047U;

    t82 = ((x629>>(x630!=x631))-x632);

    if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x633 = 444877018;
	int64_t x634 = 14747749LL;
	uint16_t x636 = 5U;
	volatile int32_t t83 = -1877033;

    t83 = ((x633>>(x634!=x635))-x636);

    if (t83 != 222438504) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x641 = UINT32_MAX;
	int64_t x642 = INT64_MIN;
	static uint32_t x643 = 769685U;
	volatile uint16_t x644 = 173U;
	uint32_t t84 = 133312U;

    t84 = ((x641>>(x642!=x643))-x644);

    if (t84 != 2147483474U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x645 = 55U;
	uint16_t x646 = UINT16_MAX;
	int8_t x647 = INT8_MIN;
	uint16_t x648 = UINT16_MAX;
	volatile int32_t t85 = 18563;

    t85 = ((x645>>(x646!=x647))-x648);

    if (t85 != -65508) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x653 = 31;
	uint32_t x654 = 8504592U;
	int8_t x655 = INT8_MIN;
	volatile int64_t x656 = -6832948132LL;
	volatile int64_t t86 = 40495925365884746LL;

    t86 = ((x653>>(x654!=x655))-x656);

    if (t86 != 6832948147LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x661 = 519399U;
	int64_t x662 = INT64_MIN;
	uint32_t x664 = UINT32_MAX;
	volatile uint32_t t87 = 4892U;

    t87 = ((x661>>(x662!=x663))-x664);

    if (t87 != 259700U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x670 = UINT64_MAX;
	int16_t x671 = -1028;
	static volatile uint64_t t88 = 114866164821LLU;

    t88 = ((x669>>(x670!=x671))-x672);

    if (t88 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x673 = 704U;
	static int16_t x674 = INT16_MIN;
	int16_t x675 = INT16_MAX;
	uint32_t t89 = 24587639U;

    t89 = ((x673>>(x674!=x675))-x676);

    if (t89 != 353U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x677 = UINT64_MAX;
	int16_t x678 = INT16_MAX;
	int8_t x679 = INT8_MIN;
	uint64_t x680 = 0LLU;
	static uint64_t t90 = 16LLU;

    t90 = ((x677>>(x678!=x679))-x680);

    if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x681 = 39U;
	static uint16_t x682 = UINT16_MAX;
	uint32_t x684 = 2079930856U;

    t91 = ((x681>>(x682!=x683))-x684);

    if (t91 != 2215036459U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x685 = 347706936957109523LLU;
	int8_t x686 = INT8_MAX;
	uint32_t x687 = 46701694U;
	uint64_t t92 = 2404LLU;

    t92 = ((x685>>(x686!=x687))-x688);

    if (t92 != 173853468478554762LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x697 = UINT64_MAX;
	static volatile int32_t x698 = INT32_MAX;
	int16_t x699 = -3892;
	int32_t x700 = 1079;
	volatile uint64_t t93 = 249087817634793LLU;

    t93 = ((x697>>(x698!=x699))-x700);

    if (t93 != 9223372036854774728LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x705 = 124984111218255270LL;
	int32_t x706 = 15510861;
	volatile int32_t x707 = INT32_MIN;
	int32_t x708 = -13;
	volatile int64_t t94 = 2904791LL;

    t94 = ((x705>>(x706!=x707))-x708);

    if (t94 != 62492055609127648LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x709 = UINT64_MAX;
	static int64_t x710 = -12832438604708396LL;

    t95 = ((x709>>(x710!=x711))-x712);

    if (t95 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x717 = INT8_MAX;
	int64_t x719 = -1LL;
	uint8_t x720 = 1U;

    t96 = ((x717>>(x718!=x719))-x720);

    if (t96 != 62) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x729 = 20U;
	uint64_t x730 = 10385LLU;
	int8_t x732 = -1;

    t97 = ((x729>>(x730!=x731))-x732);

    if (t97 != 11) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x733 = 63666LL;
	int8_t x734 = INT8_MAX;
	int64_t x735 = -1LL;
	int64_t x736 = -2269026139LL;
	int64_t t98 = -1978960825LL;

    t98 = ((x733>>(x734!=x735))-x736);

    if (t98 != 2269057972LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x749 = 6383U;
	int16_t x750 = INT16_MAX;
	uint8_t x751 = 0U;
	static uint32_t x752 = 697U;
	uint32_t t99 = 51484U;

    t99 = ((x749>>(x750!=x751))-x752);

    if (t99 != 2494U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t t100 = 179502LLU;

    t100 = ((x753>>(x754!=x755))-x756);

    if (t100 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x761 = 17690LLU;
	static uint32_t x762 = 798357U;
	int64_t x763 = INT64_MAX;
	volatile uint64_t t101 = 844407360155507605LLU;

    t101 = ((x761>>(x762!=x763))-x764);

    if (t101 != 9223372036854784653LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x789 = UINT64_MAX;
	int16_t x791 = 12;
	volatile int16_t x792 = -1;
	volatile uint64_t t102 = 168150373LLU;

    t102 = ((x789>>(x790!=x791))-x792);

    if (t102 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x797 = 1U;
	int16_t x798 = 8702;
	int8_t x799 = INT8_MIN;
	uint16_t x800 = 14U;
	volatile int32_t t103 = 331659306;

    t103 = ((x797>>(x798!=x799))-x800);

    if (t103 != -14) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x801 = 32730U;
	int16_t x802 = INT16_MAX;
	int32_t x803 = INT32_MAX;
	uint64_t x804 = 41896LLU;

    t104 = ((x801>>(x802!=x803))-x804);

    if (t104 != 18446744073709526085LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x813 = UINT64_MAX;
	static int64_t x814 = -1LL;
	uint32_t x815 = 20U;
	static int32_t x816 = INT32_MIN;
	static volatile uint64_t t105 = 1071860440379757607LLU;

    t105 = ((x813>>(x814!=x815))-x816);

    if (t105 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x817 = UINT32_MAX;
	int32_t x819 = INT32_MIN;
	int8_t x820 = INT8_MAX;
	static uint32_t t106 = 5852U;

    t106 = ((x817>>(x818!=x819))-x820);

    if (t106 != 2147483520U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x827 = INT8_MAX;
	static uint64_t x828 = 400816361061LLU;
	volatile uint64_t t107 = 1570789871961642LLU;

    t107 = ((x825>>(x826!=x827))-x828);

    if (t107 != 18446743672893190557LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x829 = UINT32_MAX;
	int16_t x830 = -1;
	int32_t x831 = INT32_MIN;
	int32_t x832 = 985629222;
	uint32_t t108 = 632U;

    t108 = ((x829>>(x830!=x831))-x832);

    if (t108 != 1161854425U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x833 = 31U;
	int32_t x834 = 10795954;
	static uint64_t x836 = UINT64_MAX;
	uint64_t t109 = 620399752LLU;

    t109 = ((x833>>(x834!=x835))-x836);

    if (t109 != 16LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x851 = INT32_MIN;
	static int64_t x852 = -2LL;
	static volatile int64_t t110 = 0LL;

    t110 = ((x849>>(x850!=x851))-x852);

    if (t110 != 7LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x853 = INT16_MAX;
	int64_t x854 = INT64_MAX;
	int8_t x855 = -11;
	int8_t x856 = -1;
	int32_t t111 = 32491;

    t111 = ((x853>>(x854!=x855))-x856);

    if (t111 != 16384) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x858 = 0;
	static int8_t x859 = -31;
	int16_t x860 = INT16_MIN;
	volatile uint32_t t112 = 906248U;

    t112 = ((x857>>(x858!=x859))-x860);

    if (t112 != 34288U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x865 = UINT64_MAX;
	uint64_t x866 = UINT64_MAX;
	static uint32_t x867 = UINT32_MAX;
	uint32_t x868 = 5466289U;

    t113 = ((x865>>(x866!=x867))-x868);

    if (t113 != 9223372036849309518LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x869 = 3U;
	static int32_t x870 = 9250744;
	volatile uint64_t x871 = 237730692905169219LLU;
	volatile int64_t x872 = -1LL;
	int64_t t114 = 41654LL;

    t114 = ((x869>>(x870!=x871))-x872);

    if (t114 != 2LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x873 = 13U;
	static int8_t x874 = -2;
	uint16_t x875 = 8U;
	int16_t x876 = INT16_MAX;

    t115 = ((x873>>(x874!=x875))-x876);

    if (t115 != -32761) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x901 = 4619U;
	int64_t x902 = INT64_MIN;
	int16_t x904 = INT16_MIN;
	volatile uint32_t t116 = 13U;

    t116 = ((x901>>(x902!=x903))-x904);

    if (t116 != 35077U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x906 = 840U;
	uint64_t x907 = 490674928LLU;
	volatile int16_t x908 = -1;
	volatile int64_t t117 = 57890928259885108LL;

    t117 = ((x905>>(x906!=x907))-x908);

    if (t117 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x910 = INT16_MIN;
	int8_t x911 = -1;
	static uint16_t x912 = 32724U;
	int64_t t118 = -4LL;

    t118 = ((x909>>(x910!=x911))-x912);

    if (t118 != 392917LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x913 = 3057387U;
	volatile uint64_t x914 = 1749726908047LLU;
	int16_t x915 = INT16_MIN;

    t119 = ((x913>>(x914!=x915))-x916);

    if (t119 != 1528692U) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint16_t x917 = 8U;
	int64_t x918 = 13060LL;
	static int64_t x919 = -44LL;
	uint64_t x920 = 17679LLU;

    t120 = ((x917>>(x918!=x919))-x920);

    if (t120 != 18446744073709533941LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x926 = 68U;
	uint32_t x927 = 3478U;
	static int32_t x928 = INT32_MIN;
	volatile int64_t t121 = 173645579315LL;

    t121 = ((x925>>(x926!=x927))-x928);

    if (t121 != 2147483649LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x930 = -1;
	int8_t x931 = INT8_MAX;
	uint32_t x932 = 118U;

    t122 = ((x929>>(x930!=x931))-x932);

    if (t122 != 859U) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x933 = 219;
	uint32_t x934 = 855U;
	uint64_t x935 = UINT64_MAX;
	uint32_t t123 = 1U;

    t123 = ((x933>>(x934!=x935))-x936);

    if (t123 != 4294967293U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x938 = -10291;
	int16_t x939 = -950;
	uint16_t x940 = 2U;
	uint32_t t124 = 735464252U;

    t124 = ((x937>>(x938!=x939))-x940);

    if (t124 != 4294967294U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x945 = 7U;
	int16_t x946 = INT16_MIN;
	volatile uint32_t t125 = 54078489U;

    t125 = ((x945>>(x946!=x947))-x948);

    if (t125 != 198U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x949 = UINT64_MAX;
	uint64_t x950 = UINT64_MAX;
	uint8_t x951 = UINT8_MAX;
	int32_t x952 = INT32_MAX;
	uint64_t t126 = 3451844001560442503LLU;

    t126 = ((x949>>(x950!=x951))-x952);

    if (t126 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x953 = 59U;
	int64_t x954 = INT64_MIN;
	int64_t x955 = -1LL;
	volatile int8_t x956 = INT8_MIN;
	int32_t t127 = 369;

    t127 = ((x953>>(x954!=x955))-x956);

    if (t127 != 157) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x969 = 31;
	volatile int64_t x971 = INT64_MIN;
	volatile uint64_t t128 = 11909991133LLU;

    t128 = ((x969>>(x970!=x971))-x972);

    if (t128 != 18446744073707722464LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x985 = INT16_MAX;
	static int16_t x986 = INT16_MIN;
	volatile int64_t x988 = INT64_MAX;

    t129 = ((x985>>(x986!=x987))-x988);

    if (t129 != -9223372036854759424LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x989 = INT8_MAX;
	uint8_t x990 = UINT8_MAX;
	uint8_t x991 = UINT8_MAX;
	uint8_t x992 = UINT8_MAX;
	static int32_t t130 = 3959;

    t130 = ((x989>>(x990!=x991))-x992);

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x993 = 288957164LLU;
	volatile uint32_t x994 = 1000U;
	uint16_t x995 = 13916U;
	int32_t x996 = -84465;

    t131 = ((x993>>(x994!=x995))-x996);

    if (t131 != 144563047LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x997 = UINT64_MAX;
	int16_t x998 = INT16_MIN;
	int8_t x999 = -1;
	volatile int32_t x1000 = INT32_MIN;
	volatile uint64_t t132 = 481LLU;

    t132 = ((x997>>(x998!=x999))-x1000);

    if (t132 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x1001 = 73U;
	uint8_t x1002 = UINT8_MAX;
	int8_t x1003 = -1;
	volatile int16_t x1004 = INT16_MIN;
	int32_t t133 = -33;

    t133 = ((x1001>>(x1002!=x1003))-x1004);

    if (t133 != 32804) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x1029 = 794840766819122736LLU;
	volatile uint32_t x1030 = 12U;
	uint16_t x1031 = 12352U;
	volatile uint64_t t134 = 4187447291209LLU;

    t134 = ((x1029>>(x1030!=x1031))-x1032);

    if (t134 != 397420383409561388LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x1056 = 120083LLU;

    t135 = ((x1053>>(x1054!=x1055))-x1056);

    if (t135 != 18446744073709447916LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x1062 = -21795;
	int16_t x1064 = INT16_MIN;

    t136 = ((x1061>>(x1062!=x1063))-x1064);

    if (t136 != 32895) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1070 = 29;
	int64_t x1071 = INT64_MAX;
	static uint64_t x1072 = UINT64_MAX;
	static uint64_t t137 = 66521037528203LLU;

    t137 = ((x1069>>(x1070!=x1071))-x1072);

    if (t137 != 3LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x1086 = -1;
	volatile int16_t x1087 = 218;
	uint32_t x1088 = UINT32_MAX;

    t138 = ((x1085>>(x1086!=x1087))-x1088);

    if (t138 != 2147483648U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1101 = 117378823LL;
	int16_t x1102 = INT16_MAX;
	static int32_t x1103 = 7874053;
	volatile int64_t t139 = 1060400547326LL;

    t139 = ((x1101>>(x1102!=x1103))-x1104);

    if (t139 != 58722179LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint8_t x1114 = UINT8_MAX;
	int32_t x1116 = -1;
	int32_t t140 = 1917554;

    t140 = ((x1113>>(x1114!=x1115))-x1116);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x1125 = INT8_MAX;
	uint16_t x1126 = 0U;
	int16_t x1127 = INT16_MIN;
	uint64_t x1128 = 79LLU;
	volatile uint64_t t141 = 5473748LLU;

    t141 = ((x1125>>(x1126!=x1127))-x1128);

    if (t141 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x1132 = UINT64_MAX;
	volatile uint64_t t142 = 5207216276962512LLU;

    t142 = ((x1129>>(x1130!=x1131))-x1132);

    if (t142 != 1073741824LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1133 = 799915295770LLU;
	volatile uint8_t x1134 = 39U;
	static uint16_t x1135 = UINT16_MAX;
	int8_t x1136 = -14;
	volatile uint64_t t143 = 1606812059718151LLU;

    t143 = ((x1133>>(x1134!=x1135))-x1136);

    if (t143 != 399957647899LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x1137 = 695764U;
	uint64_t x1139 = 2171838008572LLU;
	static int8_t x1140 = -58;
	uint32_t t144 = 15516U;

    t144 = ((x1137>>(x1138!=x1139))-x1140);

    if (t144 != 347940U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x1145 = 0U;
	volatile int32_t x1146 = -1;
	static volatile int8_t x1147 = INT8_MIN;
	int32_t x1148 = INT32_MAX;
	static volatile int32_t t145 = 3;

    t145 = ((x1145>>(x1146!=x1147))-x1148);

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x1150 = 9591631U;
	int64_t x1151 = 71348775082362LL;
	static volatile int16_t x1152 = 1847;
	volatile int32_t t146 = -63;

    t146 = ((x1149>>(x1150!=x1151))-x1152);

    if (t146 != -1843) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint8_t x1153 = 27U;
	static int32_t x1154 = -467;
	int8_t x1155 = -1;
	volatile int32_t t147 = 60521092;

    t147 = ((x1153>>(x1154!=x1155))-x1156);

    if (t147 != 141) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1157 = INT8_MAX;
	static volatile int32_t x1158 = 41;
	int8_t x1159 = 0;
	int32_t x1160 = INT32_MAX;
	int32_t t148 = -78794;

    t148 = ((x1157>>(x1158!=x1159))-x1160);

    if (t148 != -2147483584) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1162 = 1;
	int32_t x1163 = 11124029;
	uint32_t x1164 = 28712U;

    t149 = ((x1161>>(x1162!=x1163))-x1164);

    if (t149 != 4294938584U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x1165 = INT8_MAX;
	int16_t x1166 = INT16_MIN;
	static int64_t x1167 = -17619656LL;
	int32_t x1168 = -1;
	static volatile int32_t t150 = 0;

    t150 = ((x1165>>(x1166!=x1167))-x1168);

    if (t150 != 64) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1181 = 1;
	int8_t x1182 = INT8_MIN;
	static volatile int8_t x1183 = INT8_MIN;
	uint32_t x1184 = UINT32_MAX;
	volatile uint32_t t151 = 69U;

    t151 = ((x1181>>(x1182!=x1183))-x1184);

    if (t151 != 2U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1189 = INT8_MAX;
	int64_t x1190 = -412851388587522301LL;
	int8_t x1191 = INT8_MIN;
	volatile uint32_t x1192 = 854712U;
	volatile uint32_t t152 = 17022U;

    t152 = ((x1189>>(x1190!=x1191))-x1192);

    if (t152 != 4294112647U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1201 = INT64_MAX;
	int16_t x1203 = 4382;
	static uint16_t x1204 = UINT16_MAX;
	volatile int64_t t153 = 4425256161014547685LL;

    t153 = ((x1201>>(x1202!=x1203))-x1204);

    if (t153 != 4611686018427322368LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x1205 = INT32_MAX;
	int32_t x1206 = INT32_MAX;
	volatile int64_t x1207 = -1LL;
	uint64_t x1208 = UINT64_MAX;
	volatile uint64_t t154 = 7892332627094825661LLU;

    t154 = ((x1205>>(x1206!=x1207))-x1208);

    if (t154 != 1073741824LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1209 = 53578;
	volatile int64_t x1210 = -1LL;
	int32_t x1211 = INT32_MIN;
	int64_t x1212 = -62583922824106895LL;
	volatile int64_t t155 = 60945757514700182LL;

    t155 = ((x1209>>(x1210!=x1211))-x1212);

    if (t155 != 62583922824133684LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x1213 = 125U;
	static int32_t x1215 = -1;
	int64_t x1216 = -5522019193LL;
	volatile int64_t t156 = 1LL;

    t156 = ((x1213>>(x1214!=x1215))-x1216);

    if (t156 != 5522019255LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1217 = UINT32_MAX;
	static volatile int32_t x1220 = INT32_MIN;
	volatile uint32_t t157 = UINT32_MAX;

    t157 = ((x1217>>(x1218!=x1219))-x1220);

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1222 = INT64_MIN;
	int64_t x1223 = -1LL;
	static volatile int32_t x1224 = -1;

    t158 = ((x1221>>(x1222!=x1223))-x1224);

    if (t158 != 13) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1229 = 6U;
	static int64_t x1230 = -183983LL;
	uint32_t x1232 = 383866U;
	uint32_t t159 = 422939686U;

    t159 = ((x1229>>(x1230!=x1231))-x1232);

    if (t159 != 4294583433U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1233 = INT16_MAX;
	int32_t x1234 = 541489;
	uint32_t x1235 = UINT32_MAX;
	uint16_t x1236 = 11U;
	volatile int32_t t160 = 7945;

    t160 = ((x1233>>(x1234!=x1235))-x1236);

    if (t160 != 16372) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1241 = UINT16_MAX;
	int8_t x1244 = -3;
	int32_t t161 = 530;

    t161 = ((x1241>>(x1242!=x1243))-x1244);

    if (t161 != 32770) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1246 = -1;
	volatile uint8_t x1247 = 5U;
	volatile uint32_t x1248 = 167U;
	static uint32_t t162 = 7211U;

    t162 = ((x1245>>(x1246!=x1247))-x1248);

    if (t162 != 4294967129U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x1249 = 6207U;
	uint16_t x1250 = 877U;
	int64_t x1251 = INT64_MIN;
	int32_t x1252 = -1;
	static volatile uint32_t t163 = 224903U;

    t163 = ((x1249>>(x1250!=x1251))-x1252);

    if (t163 != 3104U) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x1257 = INT32_MAX;
	static uint16_t x1258 = 10U;
	uint64_t x1260 = 539556595565LLU;
	volatile uint64_t t164 = 5049828998275LLU;

    t164 = ((x1257>>(x1258!=x1259))-x1260);

    if (t164 != 18446743535226697874LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1269 = INT16_MAX;
	int16_t x1270 = INT16_MIN;
	static int8_t x1271 = 7;
	int16_t x1272 = INT16_MIN;

    t165 = ((x1269>>(x1270!=x1271))-x1272);

    if (t165 != 49151) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1273 = 265911128LL;
	volatile uint16_t x1275 = UINT16_MAX;
	uint16_t x1276 = 68U;
	volatile int64_t t166 = 113880474LL;

    t166 = ((x1273>>(x1274!=x1275))-x1276);

    if (t166 != 132955496LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1277 = 6769327U;
	int32_t x1278 = -7342;
	static int8_t x1279 = -1;
	volatile int8_t x1280 = INT8_MIN;
	volatile uint32_t t167 = 279022U;

    t167 = ((x1277>>(x1278!=x1279))-x1280);

    if (t167 != 3384791U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1281 = INT16_MAX;
	volatile int32_t x1282 = INT32_MIN;
	int8_t x1283 = INT8_MIN;
	volatile int64_t x1284 = -1LL;
	int64_t t168 = -1688886LL;

    t168 = ((x1281>>(x1282!=x1283))-x1284);

    if (t168 != 16384LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x1285 = 80361175LL;
	uint64_t x1286 = 0LLU;
	volatile int32_t x1287 = 5711;
	uint8_t x1288 = 72U;
	int64_t t169 = 46LL;

    t169 = ((x1285>>(x1286!=x1287))-x1288);

    if (t169 != 40180515LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x1289 = 307926177880148182LLU;
	uint8_t x1290 = UINT8_MAX;
	uint64_t x1292 = UINT64_MAX;
	static uint64_t t170 = 51444LLU;

    t170 = ((x1289>>(x1290!=x1291))-x1292);

    if (t170 != 153963088940074092LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1297 = INT32_MAX;
	static int64_t x1298 = INT64_MAX;
	volatile uint64_t x1299 = 955346446LLU;
	static int8_t x1300 = -1;
	int32_t t171 = -3461764;

    t171 = ((x1297>>(x1298!=x1299))-x1300);

    if (t171 != 1073741824) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1301 = 58LL;
	int16_t x1302 = INT16_MIN;
	int64_t x1303 = 7128830LL;
	volatile int16_t x1304 = INT16_MIN;

    t172 = ((x1301>>(x1302!=x1303))-x1304);

    if (t172 != 32797LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1305 = 66103355;
	uint64_t x1307 = 239052LLU;
	volatile int8_t x1308 = INT8_MAX;
	int32_t t173 = -523;

    t173 = ((x1305>>(x1306!=x1307))-x1308);

    if (t173 != 33051550) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x1314 = INT8_MIN;
	int32_t x1316 = 46893879;
	int32_t t174 = -30;

    t174 = ((x1313>>(x1314!=x1315))-x1316);

    if (t174 != 2100589768) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1328 = 1;
	volatile uint32_t t175 = 259U;

    t175 = ((x1325>>(x1326!=x1327))-x1328);

    if (t175 != 984374994U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1329 = UINT8_MAX;
	volatile int8_t x1330 = -1;
	uint8_t x1331 = UINT8_MAX;
	int64_t x1332 = -37783LL;
	volatile int64_t t176 = 3297297LL;

    t176 = ((x1329>>(x1330!=x1331))-x1332);

    if (t176 != 37910LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1333 = 4323U;
	int16_t x1334 = INT16_MIN;
	static int16_t x1336 = -11227;

    t177 = ((x1333>>(x1334!=x1335))-x1336);

    if (t177 != 13388U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1347 = INT64_MAX;
	int8_t x1348 = 2;
	static uint32_t t178 = 6U;

    t178 = ((x1345>>(x1346!=x1347))-x1348);

    if (t178 != 2364148U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x1349 = 3794U;
	int32_t x1350 = 194;
	uint8_t x1351 = UINT8_MAX;
	int16_t x1352 = 956;

    t179 = ((x1349>>(x1350!=x1351))-x1352);

    if (t179 != 941) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x1365 = UINT32_MAX;
	static int16_t x1366 = -1;
	volatile uint16_t x1367 = 5U;
	int32_t x1368 = -1;

    t180 = ((x1365>>(x1366!=x1367))-x1368);

    if (t180 != 2147483648U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1369 = INT8_MAX;
	int8_t x1370 = -1;
	int64_t x1371 = INT64_MIN;
	int16_t x1372 = -47;
	static volatile int32_t t181 = 19366923;

    t181 = ((x1369>>(x1370!=x1371))-x1372);

    if (t181 != 110) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1377 = 3214360;
	uint8_t x1379 = UINT8_MAX;
	int16_t x1380 = INT16_MIN;
	volatile int32_t t182 = -936;

    t182 = ((x1377>>(x1378!=x1379))-x1380);

    if (t182 != 1639948) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x1383 = INT64_MIN;
	volatile int32_t t183 = 317082;

    t183 = ((x1381>>(x1382!=x1383))-x1384);

    if (t183 != 3801) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x1385 = UINT16_MAX;
	int8_t x1386 = INT8_MIN;
	uint16_t x1387 = UINT16_MAX;
	uint8_t x1388 = UINT8_MAX;
	int32_t t184 = 104617900;

    t184 = ((x1385>>(x1386!=x1387))-x1388);

    if (t184 != 32512) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1409 = 14U;
	uint32_t x1410 = UINT32_MAX;
	uint8_t x1411 = 12U;
	volatile uint8_t x1412 = UINT8_MAX;

    t185 = ((x1409>>(x1410!=x1411))-x1412);

    if (t185 != -248) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1421 = UINT32_MAX;
	volatile int8_t x1422 = INT8_MIN;
	static int16_t x1423 = -1;
	uint64_t x1424 = 12224092985LLU;
	uint64_t t186 = 7122545019LLU;

    t186 = ((x1421>>(x1422!=x1423))-x1424);

    if (t186 != 18446744063632942278LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1433 = INT16_MAX;
	static int64_t x1434 = INT64_MIN;
	uint32_t x1436 = 91U;
	uint32_t t187 = 483455U;

    t187 = ((x1433>>(x1434!=x1435))-x1436);

    if (t187 != 32676U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x1441 = 108U;
	uint16_t x1442 = 330U;
	int16_t x1443 = INT16_MIN;
	volatile int64_t x1444 = INT64_MAX;
	volatile int64_t t188 = -387068233887440LL;

    t188 = ((x1441>>(x1442!=x1443))-x1444);

    if (t188 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1445 = 114160376LLU;
	volatile uint32_t x1446 = 1441U;
	volatile uint8_t x1447 = 1U;
	uint64_t t189 = 8264860LLU;

    t189 = ((x1445>>(x1446!=x1447))-x1448);

    if (t189 != 56736097LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1453 = 40231554175518067LLU;
	volatile int32_t x1454 = -1;
	static uint8_t x1456 = 2U;
	uint64_t t190 = 15764717LLU;

    t190 = ((x1453>>(x1454!=x1455))-x1456);

    if (t190 != 40231554175518065LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x1457 = UINT16_MAX;
	int8_t x1459 = INT8_MIN;
	volatile int32_t x1460 = -1;
	volatile int32_t t191 = 25;

    t191 = ((x1457>>(x1458!=x1459))-x1460);

    if (t191 != 32768) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1461 = 1;
	volatile int8_t x1462 = INT8_MIN;
	volatile uint16_t x1463 = 3U;
	int32_t t192 = -74;

    t192 = ((x1461>>(x1462!=x1463))-x1464);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1482 = 1;
	int32_t x1484 = -387888770;
	int32_t t193 = -140777;

    t193 = ((x1481>>(x1482!=x1483))-x1484);

    if (t193 != 1461630593) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1485 = UINT8_MAX;
	int64_t x1486 = 5742204368LL;
	volatile int64_t x1487 = -1LL;
	uint32_t x1488 = UINT32_MAX;
	uint32_t t194 = 479189U;

    t194 = ((x1485>>(x1486!=x1487))-x1488);

    if (t194 != 128U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1501 = 22;
	volatile int64_t x1502 = INT64_MAX;
	static volatile int64_t x1503 = INT64_MAX;
	int32_t x1504 = -281463;

    t195 = ((x1501>>(x1502!=x1503))-x1504);

    if (t195 != 281485) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1506 = 582LLU;
	uint32_t x1507 = UINT32_MAX;
	int64_t x1508 = -1LL;
	static volatile uint64_t t196 = 60788LLU;

    t196 = ((x1505>>(x1506!=x1507))-x1508);

    if (t196 != 4264572084LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x1517 = INT8_MAX;
	uint8_t x1518 = 5U;
	int8_t x1519 = 4;
	int32_t x1520 = INT32_MAX;

    t197 = ((x1517>>(x1518!=x1519))-x1520);

    if (t197 != -2147483584) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1521 = 11;
	int8_t x1522 = INT8_MIN;
	int8_t x1524 = -1;
	int32_t t198 = 42637;

    t198 = ((x1521>>(x1522!=x1523))-x1524);

    if (t198 != 6) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1534 = 1;
	static int64_t x1535 = INT64_MAX;
	volatile int8_t x1536 = INT8_MIN;
	uint32_t t199 = 72628U;

    t199 = ((x1533>>(x1534!=x1535))-x1536);

    if (t199 != 461706U) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

