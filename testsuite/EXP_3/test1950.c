
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

static int32_t x1 = -4276;
int16_t x3 = -1;
uint32_t x11 = 9U;
uint32_t t2 = 79009U;
uint32_t x19 = UINT32_MAX;
volatile int32_t x28 = 141;
uint16_t x57 = UINT16_MAX;
int16_t x60 = INT16_MAX;
int64_t x62 = INT64_MIN;
uint16_t x64 = 31U;
static int32_t x82 = INT32_MIN;
static uint64_t x83 = 66623481846563LLU;
uint16_t x90 = 4214U;
static int64_t x95 = -126960896LL;
int16_t x98 = INT16_MAX;
static int64_t x100 = -1LL;
int32_t x101 = INT32_MIN;
int64_t x104 = INT64_MAX;
static uint32_t t14 = 4087799U;
volatile int64_t x106 = INT64_MAX;
volatile int64_t x114 = INT64_MAX;
volatile int64_t t16 = 157321LL;
static int16_t x123 = INT16_MIN;
volatile uint64_t x125 = 1LLU;
int32_t x129 = INT32_MAX;
volatile uint32_t x143 = 222U;
volatile uint64_t x144 = UINT64_MAX;
volatile uint16_t x153 = UINT16_MAX;
volatile uint16_t x154 = UINT16_MAX;
static int32_t t23 = -3462;
static int8_t x160 = INT8_MAX;
volatile int32_t t24 = 1835240;
uint8_t x167 = 34U;
int32_t t25 = -112;
int16_t x176 = -1;
static uint8_t x178 = 4U;
int16_t x184 = -1;
int8_t x201 = 19;
int64_t x203 = -396323LL;
int32_t x205 = 1;
volatile int32_t t32 = 9;
static uint16_t x216 = UINT16_MAX;
int8_t x220 = INT8_MAX;
int32_t x221 = 294590;
static volatile int16_t x222 = -18;
int16_t x232 = 11;
static uint64_t x253 = 1LLU;
static volatile int64_t x255 = -37926305368827230LL;
uint32_t x257 = 257590U;
int64_t x259 = INT64_MIN;
volatile uint32_t t39 = 370U;
static uint64_t x283 = 21599176LLU;
int8_t x289 = -9;
int16_t x290 = INT16_MAX;
volatile int32_t x299 = -1;
int16_t x300 = INT16_MAX;
static uint64_t t45 = 6834676768548761LLU;
volatile uint32_t t46 = 837823217U;
int16_t x321 = -1;
uint32_t x322 = 1856U;
int16_t x326 = INT16_MIN;
static int32_t x328 = INT32_MIN;
uint16_t x343 = 57U;
uint16_t x344 = 822U;
volatile int64_t x347 = -556905018560258LL;
uint16_t x348 = 149U;
uint8_t x350 = UINT8_MAX;
int64_t x360 = INT64_MAX;
int32_t x362 = -1;
uint32_t x381 = 23309680U;
static int16_t x392 = INT16_MAX;
uint32_t x397 = 7149938U;
int8_t x406 = INT8_MIN;
static int32_t x407 = INT32_MIN;
int32_t x409 = INT32_MAX;
int32_t x412 = INT32_MAX;
int64_t x414 = -1LL;
volatile int64_t t66 = -11577LL;
uint16_t x456 = UINT16_MAX;
int32_t x475 = INT32_MIN;
int8_t x489 = -5;
uint32_t x492 = 13037U;
static int8_t x497 = INT8_MAX;
uint16_t x504 = 8437U;
uint8_t x507 = 97U;
uint16_t x526 = 24U;
int8_t x532 = -1;
static uint32_t x547 = UINT32_MAX;
int64_t x558 = INT64_MIN;
static volatile uint32_t x569 = 3424U;
uint32_t t86 = 24886448U;
uint16_t x574 = 0U;
int32_t x576 = -181;
static volatile int16_t x583 = -1;
int64_t t90 = -870479LL;
static volatile uint32_t x603 = 6337U;
uint16_t x604 = UINT16_MAX;
int8_t x606 = INT8_MAX;
uint32_t x611 = 254U;
int16_t x614 = 4308;
int64_t x619 = INT64_MIN;
int32_t x622 = INT32_MIN;
static int32_t x630 = -1;
int16_t x636 = INT16_MAX;
volatile int32_t x637 = INT32_MIN;
volatile int32_t t99 = INT32_MIN;
uint64_t x659 = 535014336LLU;
volatile int64_t t100 = 2505LL;
uint8_t x664 = UINT8_MAX;
uint8_t x671 = 0U;
static int32_t x683 = INT32_MIN;
volatile int16_t x688 = 851;
volatile int64_t x719 = -1LL;
int8_t x727 = 0;
uint8_t x733 = UINT8_MAX;
uint32_t x736 = 34U;
volatile int32_t t107 = -6817229;
int32_t t108 = -57413354;
int8_t x745 = INT8_MIN;
int32_t x748 = 146175;
static volatile int32_t x750 = INT32_MIN;
static int32_t x753 = 851663459;
int16_t x755 = -1;
int16_t x758 = -1;
int32_t t112 = -3386;
volatile int64_t t113 = -71496934471560803LL;
int32_t t114 = 125;
int8_t x791 = INT8_MAX;
int32_t t115 = 28161;
volatile uint8_t x802 = 9U;
int32_t x811 = INT32_MIN;
int64_t x828 = INT64_MAX;
int16_t x851 = -1;
int64_t x852 = -1LL;
static int8_t x864 = -1;
uint64_t t124 = 81649614717LLU;
int8_t x872 = INT8_MAX;
volatile int8_t x890 = INT8_MIN;
volatile int32_t t127 = -24194;
uint32_t x900 = UINT32_MAX;
uint32_t x910 = UINT32_MAX;
int16_t x912 = 119;
int64_t x923 = INT64_MIN;
int8_t x926 = INT8_MAX;
int8_t x928 = 14;
volatile int32_t t132 = -5;
static volatile int8_t x954 = -1;
int32_t t138 = -277;
volatile int32_t x975 = INT32_MIN;
uint32_t t139 = 2085202U;
volatile int32_t x978 = -1;
volatile int8_t x993 = 0;
static volatile uint64_t x994 = 1961403550703779LLU;
int64_t x1011 = INT64_MIN;
int16_t x1012 = INT16_MAX;
static int64_t x1030 = 3754696732408LL;
volatile int64_t t146 = 3864LL;
int16_t x1037 = -1;
uint32_t x1064 = UINT32_MAX;
int64_t t148 = 15532714602120804LL;
volatile int32_t t152 = 2;
volatile uint64_t x1101 = 36453067695LLU;
static volatile uint32_t x1104 = 15712655U;
int8_t x1112 = INT8_MIN;
int32_t t154 = INT32_MAX;
int8_t x1131 = INT8_MIN;
uint64_t x1153 = UINT64_MAX;
int64_t x1163 = -133303668941109320LL;
uint16_t x1175 = 20U;
uint64_t x1187 = 263596736811726LLU;
int8_t x1188 = INT8_MIN;
static int32_t t163 = -47792141;
static int32_t x1195 = -1;
uint16_t x1202 = 0U;
int8_t x1203 = INT8_MAX;
int32_t x1212 = INT32_MIN;
volatile uint32_t t166 = 2312215U;
int32_t x1213 = -44;
int8_t x1217 = -2;
int16_t x1224 = -37;
int16_t x1228 = INT16_MAX;
uint8_t x1237 = 22U;
volatile int32_t t171 = 2;
int16_t x1241 = 9107;
int16_t x1245 = -1;
int64_t x1246 = 857004599897726LL;
static int32_t x1249 = INT32_MIN;
volatile int64_t x1270 = INT64_MAX;
volatile int16_t x1271 = -68;
int32_t x1290 = INT32_MIN;
int8_t x1291 = 1;
volatile uint64_t x1293 = 514428396322740781LLU;
volatile int8_t x1294 = -15;
static int8_t x1338 = -1;
int16_t x1339 = -1;
int32_t t186 = -1380271;
static int64_t x1347 = -15683LL;
static int64_t x1381 = INT64_MIN;
int64_t t192 = 22564372077899694LL;
int64_t x1389 = 27649545819863775LL;
volatile uint32_t x1390 = 5050349U;
volatile int64_t t193 = 298204395068617LL;
int32_t x1395 = INT32_MIN;
int8_t x1396 = INT8_MAX;
int32_t t196 = 13;
int32_t x1424 = INT32_MAX;
int32_t x1433 = INT32_MIN;
int16_t x1436 = INT16_MAX;


void f0(void) {
    	static uint64_t x2 = 42994648723534527LLU;
	uint16_t x4 = 1641U;
	volatile uint64_t t0 = 2348232242612723379LLU;

    t0 = ((x1^x2)/(x3<=x4));

    if (t0 != 18403749424986021363LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -8;
	uint16_t x6 = UINT16_MAX;
	uint32_t x7 = 5913U;
	uint64_t x8 = 873507586LLU;
	int32_t t1 = 110483390;

    t1 = ((x5^x6)/(x7<=x8));

    if (t1 != -65529) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	static uint16_t x10 = 2588U;
	uint64_t x12 = UINT64_MAX;

    t2 = ((x9^x10)/(x11<=x12));

    if (t2 != 4294964707U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 57U;
	static uint8_t x18 = 1U;
	uint64_t x20 = UINT64_MAX;
	static int32_t t3 = 4025279;

    t3 = ((x17^x18)/(x19<=x20));

    if (t3 != 56) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x25 = -338605143;
	uint32_t x26 = 1543563134U;
	int16_t x27 = 31;
	volatile uint32_t t4 = 1U;

    t4 = ((x25^x26)/(x27<=x28));

    if (t4 != 3083971799U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x49 = 0;
	static int64_t x50 = -1LL;
	int32_t x51 = 1;
	uint16_t x52 = UINT16_MAX;
	volatile int64_t t5 = -161323LL;

    t5 = ((x49^x50)/(x51<=x52));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x53 = 1331U;
	int8_t x54 = -1;
	uint64_t x55 = 3202083807292890LLU;
	static int8_t x56 = INT8_MIN;
	int32_t t6 = 323;

    t6 = ((x53^x54)/(x55<=x56));

    if (t6 != -1332) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x58 = -62184657;
	static int64_t x59 = INT64_MIN;
	int32_t t7 = -295295244;

    t7 = ((x57^x58)/(x59<=x60));

    if (t7 != -62137136) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x61 = 0;
	int64_t x63 = INT64_MIN;
	volatile int64_t t8 = INT64_MIN;

    t8 = ((x61^x62)/(x63<=x64));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x65 = INT16_MIN;
	static int32_t x66 = INT32_MIN;
	static volatile int16_t x67 = INT16_MIN;
	int64_t x68 = -3LL;
	int32_t t9 = -3546603;

    t9 = ((x65^x66)/(x67<=x68));

    if (t9 != 2147450880) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x81 = 2U;
	int16_t x84 = -5571;
	uint32_t t10 = 4048833U;

    t10 = ((x81^x82)/(x83<=x84));

    if (t10 != 2147483650U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x89 = INT16_MAX;
	volatile int64_t x91 = INT64_MIN;
	static volatile int16_t x92 = INT16_MAX;
	static volatile int32_t t11 = 944482941;

    t11 = ((x89^x90)/(x91<=x92));

    if (t11 != 28553) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x93 = INT16_MIN;
	static uint16_t x94 = 733U;
	int32_t x96 = 110987;
	volatile int32_t t12 = 54863165;

    t12 = ((x93^x94)/(x95<=x96));

    if (t12 != -32035) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x97 = -7231;
	int64_t x99 = -125740220782445LL;
	volatile int32_t t13 = -1;

    t13 = ((x97^x98)/(x99<=x100));

    if (t13 != -25538) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x102 = UINT32_MAX;
	int8_t x103 = INT8_MIN;

    t14 = ((x101^x102)/(x103<=x104));

    if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x105 = INT64_MAX;
	static uint32_t x107 = 783710U;
	int32_t x108 = INT32_MIN;
	static int64_t t15 = -114072LL;

    t15 = ((x105^x106)/(x107<=x108));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x113 = INT32_MAX;
	volatile uint64_t x115 = 2212871LLU;
	static int16_t x116 = -2883;

    t16 = ((x113^x114)/(x115<=x116));

    if (t16 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x121 = INT16_MIN;
	int32_t x122 = INT32_MIN;
	int8_t x124 = INT8_MIN;
	volatile int32_t t17 = -178052471;

    t17 = ((x121^x122)/(x123<=x124));

    if (t17 != 2147450880) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x126 = -343;
	uint16_t x127 = 6U;
	uint16_t x128 = UINT16_MAX;
	static uint64_t t18 = 111478630LLU;

    t18 = ((x125^x126)/(x127<=x128));

    if (t18 != 18446744073709551272LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x130 = UINT8_MAX;
	int64_t x131 = INT64_MIN;
	uint32_t x132 = UINT32_MAX;
	static volatile int32_t t19 = 5;

    t19 = ((x129^x130)/(x131<=x132));

    if (t19 != 2147483392) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x133 = INT64_MAX;
	uint64_t x134 = 9954448LLU;
	int16_t x135 = 322;
	int32_t x136 = INT32_MAX;
	volatile uint64_t t20 = 17880LLU;

    t20 = ((x133^x134)/(x135<=x136));

    if (t20 != 9223372036844821359LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x141 = UINT64_MAX;
	static int16_t x142 = 410;
	volatile uint64_t t21 = 791943483304LLU;

    t21 = ((x141^x142)/(x143<=x144));

    if (t21 != 18446744073709551205LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x149 = INT8_MAX;
	volatile int64_t x150 = INT64_MAX;
	int16_t x151 = INT16_MIN;
	volatile int8_t x152 = -1;
	int64_t t22 = 1LL;

    t22 = ((x149^x150)/(x151<=x152));

    if (t22 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x155 = INT16_MIN;
	static int16_t x156 = INT16_MAX;

    t23 = ((x153^x154)/(x155<=x156));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x157 = -10431469;
	uint8_t x158 = 13U;
	int32_t x159 = -137089;

    t24 = ((x157^x158)/(x159<=x160));

    if (t24 != -10431458) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x165 = UINT16_MAX;
	static int32_t x166 = INT32_MIN;
	static uint32_t x168 = 82642U;

    t25 = ((x165^x166)/(x167<=x168));

    if (t25 != -2147418113) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x173 = -1;
	uint8_t x174 = UINT8_MAX;
	uint32_t x175 = 885571U;
	static int32_t t26 = 12;

    t26 = ((x173^x174)/(x175<=x176));

    if (t26 != -256) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x177 = 3;
	int8_t x179 = 2;
	int16_t x180 = INT16_MAX;
	volatile int32_t t27 = -38641813;

    t27 = ((x177^x178)/(x179<=x180));

    if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x181 = 0U;
	volatile int32_t x182 = INT32_MIN;
	int8_t x183 = -1;
	int32_t t28 = INT32_MIN;

    t28 = ((x181^x182)/(x183<=x184));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x185 = 108U;
	static int32_t x186 = INT32_MIN;
	uint16_t x187 = 1U;
	uint64_t x188 = 234673812171591LLU;
	volatile int32_t t29 = -603432;

    t29 = ((x185^x186)/(x187<=x188));

    if (t29 != -2147483540) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x202 = 172124139LLU;
	int8_t x204 = INT8_MAX;
	static volatile uint64_t t30 = 801208353LLU;

    t30 = ((x201^x202)/(x203<=x204));

    if (t30 != 172124152LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x206 = -136;
	volatile int16_t x207 = 283;
	uint64_t x208 = UINT64_MAX;
	int32_t t31 = -31741;

    t31 = ((x205^x206)/(x207<=x208));

    if (t31 != -135) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint8_t x209 = UINT8_MAX;
	static int32_t x210 = 3148119;
	int64_t x211 = INT64_MIN;
	static uint16_t x212 = 769U;

    t32 = ((x209^x210)/(x211<=x212));

    if (t32 != 3148200) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x213 = UINT16_MAX;
	int32_t x214 = 52609076;
	static int16_t x215 = INT16_MIN;
	volatile int32_t t33 = -8;

    t33 = ((x213^x214)/(x215<=x216));

    if (t33 != 52576203) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x217 = UINT32_MAX;
	int32_t x218 = -1;
	volatile uint16_t x219 = 5U;
	static volatile uint32_t t34 = 3101U;

    t34 = ((x217^x218)/(x219<=x220));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x223 = 0U;
	uint32_t x224 = 243U;
	int32_t t35 = 1;

    t35 = ((x221^x222)/(x223<=x224));

    if (t35 != -294576) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MIN;
	volatile int64_t x231 = INT64_MIN;
	volatile uint32_t t36 = 217U;

    t36 = ((x229^x230)/(x231<=x232));

    if (t36 != 2147483647U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x245 = -1;
	volatile uint64_t x246 = 1784428021692LLU;
	int8_t x247 = INT8_MIN;
	int8_t x248 = 0;
	static volatile uint64_t t37 = 0LLU;

    t37 = ((x245^x246)/(x247<=x248));

    if (t37 != 18446742289281529923LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x254 = INT16_MIN;
	int8_t x256 = -1;
	volatile uint64_t t38 = 519881941542568LLU;

    t38 = ((x253^x254)/(x255<=x256));

    if (t38 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x258 = -57;
	int8_t x260 = INT8_MIN;

    t39 = ((x257^x258)/(x259<=x260));

    if (t39 != 4294709745U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MIN;
	volatile int16_t x263 = -1;
	int16_t x264 = 15887;
	volatile int32_t t40 = -55253806;

    t40 = ((x261^x262)/(x263<=x264));

    if (t40 != 2147450880) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x265 = -1728841254LL;
	int64_t x266 = INT64_MIN;
	static int16_t x267 = 1475;
	int32_t x268 = 101202483;
	volatile int64_t t41 = 7799LL;

    t41 = ((x265^x266)/(x267<=x268));

    if (t41 != 9223372035125934554LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x269 = -2005762103113131LL;
	volatile int8_t x270 = -1;
	int8_t x271 = 12;
	int32_t x272 = 903800;
	static int64_t t42 = 17870647715LL;

    t42 = ((x269^x270)/(x271<=x272));

    if (t42 != 2005762103113130LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x281 = -229;
	int32_t x282 = 350476;
	static volatile int16_t x284 = INT16_MIN;
	static int32_t t43 = -55;

    t43 = ((x281^x282)/(x283<=x284));

    if (t43 != -350697) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x291 = INT64_MIN;
	int64_t x292 = -7084317611LL;
	static volatile int32_t t44 = 0;

    t44 = ((x289^x290)/(x291<=x292));

    if (t44 != -32760) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x297 = 6298110237526LLU;
	static int8_t x298 = 14;

    t45 = ((x297^x298)/(x299<=x300));

    if (t45 != 6298110237528LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x301 = 14375752U;
	int16_t x302 = 432;
	static volatile int64_t x303 = 27964204LL;
	uint64_t x304 = UINT64_MAX;

    t46 = ((x301^x302)/(x303<=x304));

    if (t46 != 14375672U) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x309 = INT32_MAX;
	uint64_t x310 = UINT64_MAX;
	uint64_t x311 = 16900LLU;
	uint16_t x312 = UINT16_MAX;
	uint64_t t47 = 21304286985361649LLU;

    t47 = ((x309^x310)/(x311<=x312));

    if (t47 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x323 = INT16_MIN;
	int16_t x324 = INT16_MIN;
	uint32_t t48 = 0U;

    t48 = ((x321^x322)/(x323<=x324));

    if (t48 != 4294965439U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x325 = -10689;
	uint64_t x327 = 1294461282843606361LLU;
	volatile int32_t t49 = -31;

    t49 = ((x325^x326)/(x327<=x328));

    if (t49 != 22079) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x329 = -3652607LL;
	int8_t x330 = -1;
	uint16_t x331 = 1U;
	uint64_t x332 = 31688093LLU;
	static volatile int64_t t50 = -35441873LL;

    t50 = ((x329^x330)/(x331<=x332));

    if (t50 != 3652606LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x337 = 0;
	uint8_t x338 = 18U;
	int16_t x339 = INT16_MIN;
	int8_t x340 = -1;
	int32_t t51 = -151;

    t51 = ((x337^x338)/(x339<=x340));

    if (t51 != 18) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x341 = UINT64_MAX;
	uint32_t x342 = 85U;
	volatile uint64_t t52 = 26963252LLU;

    t52 = ((x341^x342)/(x343<=x344));

    if (t52 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x345 = 22436U;
	volatile int16_t x346 = -1;
	int32_t t53 = -1848;

    t53 = ((x345^x346)/(x347<=x348));

    if (t53 != -22437) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x349 = INT64_MIN;
	int16_t x351 = INT16_MAX;
	static uint64_t x352 = UINT64_MAX;
	int64_t t54 = -970183LL;

    t54 = ((x349^x350)/(x351<=x352));

    if (t54 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x357 = 2U;
	int32_t x358 = -1;
	uint16_t x359 = 7U;
	static int32_t t55 = 2;

    t55 = ((x357^x358)/(x359<=x360));

    if (t55 != -3) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x361 = INT64_MIN;
	int64_t x363 = -1LL;
	volatile int64_t x364 = 4013599615752535154LL;
	int64_t t56 = INT64_MAX;

    t56 = ((x361^x362)/(x363<=x364));

    if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x373 = 92015U;
	int32_t x374 = 2000505;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;
	volatile uint32_t t57 = 0U;

    t57 = ((x373^x374)/(x375<=x376));

    if (t57 != 2089238U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x377 = UINT16_MAX;
	int8_t x378 = -1;
	uint8_t x379 = 17U;
	int32_t x380 = 327953982;
	int32_t t58 = -1;

    t58 = ((x377^x378)/(x379<=x380));

    if (t58 != -65536) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x382 = -1;
	int64_t x383 = INT64_MAX;
	int64_t x384 = INT64_MAX;
	volatile uint32_t t59 = 887251039U;

    t59 = ((x381^x382)/(x383<=x384));

    if (t59 != 4271657615U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x389 = 119U;
	volatile int32_t x390 = 12293931;
	static int32_t x391 = INT32_MIN;
	volatile int32_t t60 = 0;

    t60 = ((x389^x390)/(x391<=x392));

    if (t60 != 12293980) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x398 = INT16_MAX;
	int64_t x399 = INT64_MIN;
	volatile int8_t x400 = INT8_MIN;
	uint32_t t61 = 1231964U;

    t61 = ((x397^x398)/(x399<=x400));

    if (t61 != 7169677U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x401 = 0U;
	int16_t x402 = 1005;
	static uint16_t x403 = UINT16_MAX;
	volatile int64_t x404 = INT64_MAX;
	uint32_t t62 = 31U;

    t62 = ((x401^x402)/(x403<=x404));

    if (t62 != 1005U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x405 = 8695620U;
	int32_t x408 = -468239;
	static volatile uint32_t t63 = 29177U;

    t63 = ((x405^x406)/(x407<=x408));

    if (t63 != 4286271684U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x410 = -1LL;
	uint8_t x411 = UINT8_MAX;
	volatile int64_t t64 = -628486849LL;

    t64 = ((x409^x410)/(x411<=x412));

    if (t64 != -2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x413 = INT8_MAX;
	int64_t x415 = -5125643LL;
	static int16_t x416 = INT16_MAX;
	static volatile int64_t t65 = -46241341036781279LL;

    t65 = ((x413^x414)/(x415<=x416));

    if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x429 = -1LL;
	int32_t x430 = -1;
	uint8_t x431 = 14U;
	volatile uint64_t x432 = 29619621LLU;

    t66 = ((x429^x430)/(x431<=x432));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x433 = INT8_MIN;
	int32_t x434 = INT32_MAX;
	static int8_t x435 = 56;
	static volatile int16_t x436 = INT16_MAX;
	int32_t t67 = -17;

    t67 = ((x433^x434)/(x435<=x436));

    if (t67 != -2147483521) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x437 = INT32_MIN;
	int32_t x438 = INT32_MIN;
	static uint8_t x439 = 5U;
	uint64_t x440 = UINT64_MAX;
	static volatile int32_t t68 = -7;

    t68 = ((x437^x438)/(x439<=x440));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x441 = INT8_MAX;
	uint16_t x442 = UINT16_MAX;
	int32_t x443 = INT32_MIN;
	uint32_t x444 = UINT32_MAX;
	static int32_t t69 = 0;

    t69 = ((x441^x442)/(x443<=x444));

    if (t69 != 65408) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x449 = -24055523;
	static uint64_t x450 = 3624818318LLU;
	static int64_t x451 = INT64_MIN;
	volatile uint16_t x452 = 813U;
	static uint64_t t70 = 6120713605LLU;

    t70 = ((x449^x450)/(x451<=x452));

    if (t70 != 18446744070062516115LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x453 = 1;
	uint16_t x454 = 17U;
	int8_t x455 = 45;
	static volatile int32_t t71 = -78;

    t71 = ((x453^x454)/(x455<=x456));

    if (t71 != 16) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x469 = 236U;
	static uint16_t x470 = 1486U;
	volatile uint64_t x471 = 5709093969013981347LLU;
	int16_t x472 = -1;
	static volatile int32_t t72 = -7;

    t72 = ((x469^x470)/(x471<=x472));

    if (t72 != 1314) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x473 = 2U;
	static uint16_t x474 = 1491U;
	volatile uint8_t x476 = 85U;
	volatile int32_t t73 = 2517;

    t73 = ((x473^x474)/(x475<=x476));

    if (t73 != 1489) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x490 = INT16_MIN;
	int64_t x491 = INT64_MIN;
	int32_t t74 = 65147;

    t74 = ((x489^x490)/(x491<=x492));

    if (t74 != 32763) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x498 = -1;
	volatile int16_t x499 = INT16_MIN;
	int16_t x500 = INT16_MIN;
	int32_t t75 = 7542680;

    t75 = ((x497^x498)/(x499<=x500));

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x501 = INT64_MIN;
	int32_t x502 = INT32_MIN;
	int8_t x503 = -1;
	int64_t t76 = 1719648071533863252LL;

    t76 = ((x501^x502)/(x503<=x504));

    if (t76 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x505 = INT32_MAX;
	uint64_t x506 = 3327963065LLU;
	int8_t x508 = INT8_MAX;
	uint64_t t77 = 1278LLU;

    t77 = ((x505^x506)/(x507<=x508));

    if (t77 != 3114487878LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x509 = 167;
	int64_t x510 = -615661103387158LL;
	int64_t x511 = INT64_MIN;
	int8_t x512 = INT8_MAX;
	volatile int64_t t78 = 8140738776120636LL;

    t78 = ((x509^x510)/(x511<=x512));

    if (t78 != -615661103387315LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x517 = 1U;
	volatile uint64_t x518 = UINT64_MAX;
	static int16_t x519 = INT16_MIN;
	volatile int8_t x520 = INT8_MAX;
	uint64_t t79 = 924489514LLU;

    t79 = ((x517^x518)/(x519<=x520));

    if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x525 = 1654LL;
	int8_t x527 = -1;
	int8_t x528 = -1;
	volatile int64_t t80 = -4196508LL;

    t80 = ((x525^x526)/(x527<=x528));

    if (t80 != 1646LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x529 = -1;
	volatile uint16_t x530 = 6889U;
	static int8_t x531 = -9;
	static int32_t t81 = 369382454;

    t81 = ((x529^x530)/(x531<=x532));

    if (t81 != -6890) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x545 = INT32_MIN;
	volatile int16_t x546 = 2222;
	uint32_t x548 = UINT32_MAX;
	int32_t t82 = -834;

    t82 = ((x545^x546)/(x547<=x548));

    if (t82 != -2147481426) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x549 = 13224045047064971LLU;
	int16_t x550 = -1;
	static uint64_t x551 = 295731LLU;
	uint64_t x552 = 4729081830551LLU;
	volatile uint64_t t83 = 248587515773869771LLU;

    t83 = ((x549^x550)/(x551<=x552));

    if (t83 != 18433520028662486644LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x553 = -220050031763364LL;
	static uint32_t x554 = UINT32_MAX;
	volatile int16_t x555 = 3;
	volatile uint8_t x556 = 12U;
	volatile int64_t t84 = -116944744LL;

    t84 = ((x553^x554)/(x555<=x556));

    if (t84 != -220050972090461LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x557 = UINT16_MAX;
	static int32_t x559 = 118296943;
	volatile uint32_t x560 = UINT32_MAX;
	static volatile int64_t t85 = -213821503LL;

    t85 = ((x557^x558)/(x559<=x560));

    if (t85 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x570 = -1;
	static int8_t x571 = -1;
	int8_t x572 = 17;

    t86 = ((x569^x570)/(x571<=x572));

    if (t86 != 4294963871U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x573 = INT32_MIN;
	uint32_t x575 = 0U;
	static volatile int32_t t87 = INT32_MIN;

    t87 = ((x573^x574)/(x575<=x576));

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x577 = INT32_MIN;
	uint32_t x578 = 34937U;
	uint16_t x579 = 35U;
	volatile uint16_t x580 = UINT16_MAX;
	static uint32_t t88 = 209391U;

    t88 = ((x577^x578)/(x579<=x580));

    if (t88 != 2147518585U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x581 = INT16_MIN;
	int64_t x582 = 798895155LL;
	static uint16_t x584 = 240U;
	static volatile int64_t t89 = -260704LL;

    t89 = ((x581^x582)/(x583<=x584));

    if (t89 != -798905293LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x597 = INT64_MIN;
	volatile int8_t x598 = INT8_MIN;
	static int64_t x599 = -1LL;
	static int16_t x600 = INT16_MAX;

    t90 = ((x597^x598)/(x599<=x600));

    if (t90 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x601 = INT32_MIN;
	int64_t x602 = -861199LL;
	volatile int64_t t91 = -46LL;

    t91 = ((x601^x602)/(x603<=x604));

    if (t91 != 2146622449LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x605 = 166LLU;
	static int64_t x607 = 674LL;
	uint16_t x608 = UINT16_MAX;
	uint64_t t92 = 227LLU;

    t92 = ((x605^x606)/(x607<=x608));

    if (t92 != 217LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x609 = INT16_MAX;
	int16_t x610 = INT16_MIN;
	int16_t x612 = -1;
	int32_t t93 = -56253698;

    t93 = ((x609^x610)/(x611<=x612));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x613 = UINT32_MAX;
	int64_t x615 = INT64_MIN;
	static int8_t x616 = INT8_MIN;
	uint32_t t94 = 30242U;

    t94 = ((x613^x614)/(x615<=x616));

    if (t94 != 4294962987U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x617 = INT32_MIN;
	int8_t x618 = -1;
	int32_t x620 = -102;
	int32_t t95 = INT32_MAX;

    t95 = ((x617^x618)/(x619<=x620));

    if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x621 = 0U;
	int8_t x623 = 0;
	uint16_t x624 = 128U;
	volatile uint32_t t96 = 62593U;

    t96 = ((x621^x622)/(x623<=x624));

    if (t96 != 2147483648U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x629 = INT32_MIN;
	volatile int16_t x631 = INT16_MIN;
	int16_t x632 = INT16_MIN;
	volatile int32_t t97 = INT32_MAX;

    t97 = ((x629^x630)/(x631<=x632));

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x633 = 0U;
	uint32_t x634 = 914U;
	int16_t x635 = INT16_MIN;
	uint32_t t98 = 3U;

    t98 = ((x633^x634)/(x635<=x636));

    if (t98 != 914U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x638 = 0;
	int16_t x639 = INT16_MIN;
	int8_t x640 = INT8_MIN;

    t99 = ((x637^x638)/(x639<=x640));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x657 = INT16_MIN;
	int64_t x658 = 132204350294662562LL;
	int16_t x660 = INT16_MIN;

    t100 = ((x657^x658)/(x659<=x660));

    if (t100 != -132204350294680158LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x661 = 223584827U;
	uint64_t x662 = 6766973LLU;
	static volatile int64_t x663 = -86633LL;
	uint64_t t101 = 121746213265LLU;

    t101 = ((x661^x662)/(x663<=x664));

    if (t101 != 221569862LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x669 = INT8_MIN;
	int64_t x670 = -1LL;
	static uint16_t x672 = UINT16_MAX;
	static volatile int64_t t102 = 6265110LL;

    t102 = ((x669^x670)/(x671<=x672));

    if (t102 != 127LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x681 = -51758278LL;
	int16_t x682 = -1;
	static int32_t x684 = -1;
	volatile int64_t t103 = -59LL;

    t103 = ((x681^x682)/(x683<=x684));

    if (t103 != 51758277LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x685 = 200U;
	int16_t x686 = 439;
	int64_t x687 = INT64_MIN;
	static volatile uint32_t t104 = 2U;

    t104 = ((x685^x686)/(x687<=x688));

    if (t104 != 383U) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x717 = INT32_MIN;
	int8_t x718 = 34;
	uint64_t x720 = UINT64_MAX;
	int32_t t105 = 404;

    t105 = ((x717^x718)/(x719<=x720));

    if (t105 != -2147483614) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x725 = INT32_MAX;
	static int64_t x726 = INT64_MIN;
	static uint8_t x728 = UINT8_MAX;
	int64_t t106 = -341LL;

    t106 = ((x725^x726)/(x727<=x728));

    if (t106 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x734 = INT32_MAX;
	static int8_t x735 = 1;

    t107 = ((x733^x734)/(x735<=x736));

    if (t107 != 2147483392) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x737 = INT32_MIN;
	int16_t x738 = -5;
	int32_t x739 = INT32_MIN;
	static int8_t x740 = -1;

    t108 = ((x737^x738)/(x739<=x740));

    if (t108 != 2147483643) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x746 = -1;
	int32_t x747 = -1;
	volatile int32_t t109 = 0;

    t109 = ((x745^x746)/(x747<=x748));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x749 = -7;
	int64_t x751 = -1LL;
	int32_t x752 = -1;
	int32_t t110 = -132699950;

    t110 = ((x749^x750)/(x751<=x752));

    if (t110 != 2147483641) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x754 = INT64_MIN;
	int64_t x756 = 3508984756LL;
	int64_t t111 = 2157392404869250994LL;

    t111 = ((x753^x754)/(x755<=x756));

    if (t111 != -9223372036003112349LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x757 = 11699469;
	int16_t x759 = 143;
	uint32_t x760 = UINT32_MAX;

    t112 = ((x757^x758)/(x759<=x760));

    if (t112 != -11699470) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x761 = -1;
	volatile int64_t x762 = 3912LL;
	int64_t x763 = -1LL;
	static uint32_t x764 = 1463489777U;

    t113 = ((x761^x762)/(x763<=x764));

    if (t113 != -3913LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x773 = INT32_MIN;
	int8_t x774 = INT8_MIN;
	int64_t x775 = INT64_MIN;
	int16_t x776 = -1;

    t114 = ((x773^x774)/(x775<=x776));

    if (t114 != 2147483520) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x789 = 225;
	uint16_t x790 = UINT16_MAX;
	static uint64_t x792 = 4634145642671724312LLU;

    t115 = ((x789^x790)/(x791<=x792));

    if (t115 != 65310) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x797 = INT64_MIN;
	int32_t x798 = -1;
	int16_t x799 = -1;
	volatile int16_t x800 = 1;
	static int64_t t116 = INT64_MAX;

    t116 = ((x797^x798)/(x799<=x800));

    if (t116 != INT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x801 = INT64_MIN;
	int64_t x803 = -540LL;
	uint16_t x804 = 313U;
	int64_t t117 = -337605815528617LL;

    t117 = ((x801^x802)/(x803<=x804));

    if (t117 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x809 = INT8_MIN;
	volatile int32_t x810 = INT32_MIN;
	int16_t x812 = 3707;
	volatile int32_t t118 = -284315671;

    t118 = ((x809^x810)/(x811<=x812));

    if (t118 != 2147483520) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x813 = -3;
	int16_t x814 = 3;
	volatile int64_t x815 = INT64_MIN;
	volatile int64_t x816 = -1LL;
	int32_t t119 = -48034;

    t119 = ((x813^x814)/(x815<=x816));

    if (t119 != -2) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x825 = 751;
	int64_t x826 = 4167099994LL;
	static int32_t x827 = INT32_MIN;
	volatile int64_t t120 = -296383075LL;

    t120 = ((x825^x826)/(x827<=x828));

    if (t120 != 4167099573LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x829 = -1;
	int32_t x830 = -1;
	int16_t x831 = INT16_MIN;
	static int8_t x832 = 5;
	static int32_t t121 = 57;

    t121 = ((x829^x830)/(x831<=x832));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x837 = INT8_MIN;
	int32_t x838 = -1;
	static uint32_t x839 = 39874887U;
	int8_t x840 = INT8_MIN;
	int32_t t122 = -792843;

    t122 = ((x837^x838)/(x839<=x840));

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x849 = 1732U;
	int8_t x850 = INT8_MAX;
	int32_t t123 = -3430;

    t123 = ((x849^x850)/(x851<=x852));

    if (t123 != 1723) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x861 = -1LL;
	uint64_t x862 = 256LLU;
	int16_t x863 = -1;

    t124 = ((x861^x862)/(x863<=x864));

    if (t124 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x865 = 775344887;
	int64_t x866 = -1409284LL;
	int64_t x867 = INT64_MIN;
	int8_t x868 = -1;
	int64_t t125 = 635263LL;

    t125 = ((x865^x866)/(x867<=x868));

    if (t125 != -774067189LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x869 = INT64_MIN;
	uint16_t x870 = 1731U;
	volatile int64_t x871 = INT64_MIN;
	static volatile int64_t t126 = -24156422214942107LL;

    t126 = ((x869^x870)/(x871<=x872));

    if (t126 != -9223372036854774077LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x889 = INT32_MIN;
	volatile uint32_t x891 = 40648955U;
	volatile uint64_t x892 = UINT64_MAX;

    t127 = ((x889^x890)/(x891<=x892));

    if (t127 != 2147483520) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x897 = 817935U;
	uint64_t x898 = UINT64_MAX;
	static int8_t x899 = -33;
	static volatile uint64_t t128 = 1358597397LLU;

    t128 = ((x897^x898)/(x899<=x900));

    if (t128 != 18446744073708733680LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x901 = UINT16_MAX;
	volatile int8_t x902 = 1;
	int32_t x903 = INT32_MIN;
	int64_t x904 = -1LL;
	int32_t t129 = -6364475;

    t129 = ((x901^x902)/(x903<=x904));

    if (t129 != 65534) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x909 = -1;
	int16_t x911 = 1;
	uint32_t t130 = 198805U;

    t130 = ((x909^x910)/(x911<=x912));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x921 = INT8_MAX;
	int64_t x922 = -1LL;
	volatile int32_t x924 = -1;
	int64_t t131 = -607685295694063LL;

    t131 = ((x921^x922)/(x923<=x924));

    if (t131 != -128LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x925 = INT8_MIN;
	int16_t x927 = INT16_MIN;

    t132 = ((x925^x926)/(x927<=x928));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x933 = INT64_MIN;
	uint64_t x934 = UINT64_MAX;
	uint8_t x935 = 1U;
	uint16_t x936 = 8U;
	volatile uint64_t t133 = 147514LLU;

    t133 = ((x933^x934)/(x935<=x936));

    if (t133 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x937 = INT16_MIN;
	int16_t x938 = 3422;
	int8_t x939 = INT8_MIN;
	uint16_t x940 = UINT16_MAX;
	int32_t t134 = 32170977;

    t134 = ((x937^x938)/(x939<=x940));

    if (t134 != -29346) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x953 = UINT32_MAX;
	int16_t x955 = -5351;
	int8_t x956 = INT8_MIN;
	uint32_t t135 = 87U;

    t135 = ((x953^x954)/(x955<=x956));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x957 = 5;
	uint8_t x958 = 46U;
	static int16_t x959 = INT16_MIN;
	volatile int16_t x960 = -1;
	int32_t t136 = 2080;

    t136 = ((x957^x958)/(x959<=x960));

    if (t136 != 43) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x961 = INT32_MAX;
	int32_t x962 = INT32_MIN;
	volatile int8_t x963 = 0;
	static uint64_t x964 = 389420681LLU;
	volatile int32_t t137 = -107568432;

    t137 = ((x961^x962)/(x963<=x964));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x965 = UINT8_MAX;
	volatile uint8_t x966 = 5U;
	int8_t x967 = INT8_MIN;
	int64_t x968 = INT64_MAX;

    t138 = ((x965^x966)/(x967<=x968));

    if (t138 != 250) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x973 = INT32_MIN;
	uint32_t x974 = UINT32_MAX;
	static int16_t x976 = INT16_MAX;

    t139 = ((x973^x974)/(x975<=x976));

    if (t139 != 2147483647U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x977 = INT32_MIN;
	int8_t x979 = INT8_MIN;
	int32_t x980 = INT32_MAX;
	volatile int32_t t140 = INT32_MAX;

    t140 = ((x977^x978)/(x979<=x980));

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x985 = INT32_MIN;
	volatile int32_t x986 = INT32_MAX;
	uint8_t x987 = 59U;
	uint32_t x988 = UINT32_MAX;
	volatile int32_t t141 = 9;

    t141 = ((x985^x986)/(x987<=x988));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x995 = 13133U;
	uint64_t x996 = 195145LLU;
	uint64_t t142 = 484585254LLU;

    t142 = ((x993^x994)/(x995<=x996));

    if (t142 != 1961403550703779LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint32_t x1001 = UINT32_MAX;
	int64_t x1002 = 11678629918270545LL;
	uint64_t x1003 = 0LLU;
	int64_t x1004 = -996LL;
	int64_t t143 = -98571159527LL;

    t143 = ((x1001^x1002)/(x1003<=x1004));

    if (t143 != 11678626303056814LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x1005 = -2528240455732LL;
	int16_t x1006 = -1;
	static int8_t x1007 = -1;
	int32_t x1008 = -1;
	volatile int64_t t144 = -64287LL;

    t144 = ((x1005^x1006)/(x1007<=x1008));

    if (t144 != 2528240455731LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1009 = INT8_MAX;
	int64_t x1010 = -1LL;
	volatile int64_t t145 = -3929507012LL;

    t145 = ((x1009^x1010)/(x1011<=x1012));

    if (t145 != -128LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1029 = INT16_MIN;
	int8_t x1031 = 0;
	static uint16_t x1032 = 0U;

    t146 = ((x1029^x1030)/(x1031<=x1032));

    if (t146 != -3754696708360LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1038 = INT8_MIN;
	uint8_t x1039 = UINT8_MAX;
	uint16_t x1040 = UINT16_MAX;
	static volatile int32_t t147 = -1914;

    t147 = ((x1037^x1038)/(x1039<=x1040));

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1061 = INT64_MIN;
	static uint16_t x1062 = 12813U;
	uint64_t x1063 = 90782319LLU;

    t148 = ((x1061^x1062)/(x1063<=x1064));

    if (t148 != -9223372036854762995LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x1065 = -1;
	uint64_t x1066 = UINT64_MAX;
	int64_t x1067 = -17962LL;
	volatile int8_t x1068 = -1;
	static volatile uint64_t t149 = 4500493542932806LLU;

    t149 = ((x1065^x1066)/(x1067<=x1068));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1073 = 30;
	int16_t x1074 = INT16_MAX;
	int32_t x1075 = INT32_MIN;
	int32_t x1076 = -1;
	int32_t t150 = -68868795;

    t150 = ((x1073^x1074)/(x1075<=x1076));

    if (t150 != 32737) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1081 = INT8_MIN;
	volatile int8_t x1082 = INT8_MAX;
	static int16_t x1083 = -1;
	int64_t x1084 = -1LL;
	volatile int32_t t151 = -38270;

    t151 = ((x1081^x1082)/(x1083<=x1084));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1089 = INT32_MIN;
	int16_t x1090 = -1623;
	int16_t x1091 = -14;
	volatile int64_t x1092 = INT64_MAX;

    t152 = ((x1089^x1090)/(x1091<=x1092));

    if (t152 != 2147482025) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x1102 = 480186094LLU;
	uint16_t x1103 = 96U;
	uint64_t t153 = 487194LLU;

    t153 = ((x1101^x1102)/(x1103<=x1104));

    if (t153 != 35976291649LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x1109 = INT32_MIN;
	int16_t x1110 = -1;
	uint64_t x1111 = 795624953842100LLU;

    t154 = ((x1109^x1110)/(x1111<=x1112));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x1117 = 13572444;
	int16_t x1118 = INT16_MAX;
	static int64_t x1119 = INT64_MIN;
	int32_t x1120 = INT32_MIN;
	static int32_t t155 = -97;

    t155 = ((x1117^x1118)/(x1119<=x1120));

    if (t155 != 13592227) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1121 = -1;
	int16_t x1122 = INT16_MAX;
	int8_t x1123 = INT8_MIN;
	int16_t x1124 = -13;
	int32_t t156 = -37;

    t156 = ((x1121^x1122)/(x1123<=x1124));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1129 = -1;
	volatile uint8_t x1130 = 17U;
	uint8_t x1132 = 3U;
	int32_t t157 = 386280;

    t157 = ((x1129^x1130)/(x1131<=x1132));

    if (t157 != -18) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1133 = INT8_MIN;
	uint8_t x1134 = 6U;
	static volatile int8_t x1135 = INT8_MIN;
	volatile uint16_t x1136 = 5596U;
	int32_t t158 = -3;

    t158 = ((x1133^x1134)/(x1135<=x1136));

    if (t158 != -122) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1137 = INT32_MIN;
	uint16_t x1138 = UINT16_MAX;
	int8_t x1139 = INT8_MAX;
	volatile int16_t x1140 = INT16_MAX;
	static volatile int32_t t159 = 14396;

    t159 = ((x1137^x1138)/(x1139<=x1140));

    if (t159 != -2147418113) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1154 = -1LL;
	int16_t x1155 = INT16_MIN;
	int16_t x1156 = INT16_MAX;
	volatile uint64_t t160 = 5007190501725LLU;

    t160 = ((x1153^x1154)/(x1155<=x1156));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x1161 = 50469936LLU;
	int32_t x1162 = -1;
	uint8_t x1164 = UINT8_MAX;
	volatile uint64_t t161 = 190LLU;

    t161 = ((x1161^x1162)/(x1163<=x1164));

    if (t161 != 18446744073659081679LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x1173 = UINT32_MAX;
	volatile uint8_t x1174 = UINT8_MAX;
	uint64_t x1176 = UINT64_MAX;
	uint32_t t162 = 24U;

    t162 = ((x1173^x1174)/(x1175<=x1176));

    if (t162 != 4294967040U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1185 = INT8_MIN;
	volatile int32_t x1186 = INT32_MIN;

    t163 = ((x1185^x1186)/(x1187<=x1188));

    if (t163 != 2147483520) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x1193 = UINT64_MAX;
	int64_t x1194 = -1LL;
	uint8_t x1196 = UINT8_MAX;
	volatile uint64_t t164 = 223LLU;

    t164 = ((x1193^x1194)/(x1195<=x1196));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x1201 = UINT32_MAX;
	uint32_t x1204 = 248636U;
	volatile uint32_t t165 = UINT32_MAX;

    t165 = ((x1201^x1202)/(x1203<=x1204));

    if (t165 != UINT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x1209 = -1;
	uint32_t x1210 = 93874U;
	uint64_t x1211 = 39LLU;

    t166 = ((x1209^x1210)/(x1211<=x1212));

    if (t166 != 4294873421U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1214 = UINT16_MAX;
	volatile int8_t x1215 = -1;
	int16_t x1216 = -1;
	int32_t t167 = -7018;

    t167 = ((x1213^x1214)/(x1215<=x1216));

    if (t167 != -65493) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1218 = 422U;
	uint64_t x1219 = UINT64_MAX;
	int32_t x1220 = -1;
	uint32_t t168 = 76U;

    t168 = ((x1217^x1218)/(x1219<=x1220));

    if (t168 != 4294966872U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1221 = 37U;
	int8_t x1222 = INT8_MIN;
	static uint64_t x1223 = 20007947827852628LLU;
	static volatile int32_t t169 = 265397;

    t169 = ((x1221^x1222)/(x1223<=x1224));

    if (t169 != -91) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1225 = INT8_MIN;
	uint32_t x1226 = 3U;
	int64_t x1227 = -1LL;
	volatile uint32_t t170 = 5284160U;

    t170 = ((x1225^x1226)/(x1227<=x1228));

    if (t170 != 4294967171U) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x1238 = 7U;
	int16_t x1239 = -15661;
	int8_t x1240 = INT8_MIN;

    t171 = ((x1237^x1238)/(x1239<=x1240));

    if (t171 != 17) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1242 = UINT32_MAX;
	volatile uint8_t x1243 = 31U;
	static uint64_t x1244 = 1430403LLU;
	static volatile uint32_t t172 = 207915U;

    t172 = ((x1241^x1242)/(x1243<=x1244));

    if (t172 != 4294958188U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1247 = INT32_MIN;
	int32_t x1248 = INT32_MIN;
	int64_t t173 = -22LL;

    t173 = ((x1245^x1246)/(x1247<=x1248));

    if (t173 != -857004599897727LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x1250 = UINT32_MAX;
	int8_t x1251 = INT8_MIN;
	uint8_t x1252 = UINT8_MAX;
	static uint32_t t174 = 451240014U;

    t174 = ((x1249^x1250)/(x1251<=x1252));

    if (t174 != 2147483647U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x1257 = INT64_MIN;
	int64_t x1258 = 4623944LL;
	uint32_t x1259 = 592459U;
	static uint32_t x1260 = UINT32_MAX;
	int64_t t175 = 3275LL;

    t175 = ((x1257^x1258)/(x1259<=x1260));

    if (t175 != -9223372036850151864LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1265 = INT32_MAX;
	volatile int32_t x1266 = INT32_MIN;
	int16_t x1267 = INT16_MIN;
	static int16_t x1268 = -1;
	int32_t t176 = -34344;

    t176 = ((x1265^x1266)/(x1267<=x1268));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x1269 = 8925559;
	uint32_t x1272 = UINT32_MAX;
	static int64_t t177 = 3503351253868LL;

    t177 = ((x1269^x1270)/(x1271<=x1272));

    if (t177 != 9223372036845850248LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x1277 = -1;
	int16_t x1278 = -1;
	int64_t x1279 = -1LL;
	static int32_t x1280 = -1;
	volatile int32_t t178 = -3725360;

    t178 = ((x1277^x1278)/(x1279<=x1280));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x1285 = INT32_MIN;
	static volatile uint8_t x1286 = UINT8_MAX;
	int8_t x1287 = INT8_MIN;
	static volatile uint32_t x1288 = UINT32_MAX;
	volatile int32_t t179 = 207810;

    t179 = ((x1285^x1286)/(x1287<=x1288));

    if (t179 != -2147483393) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1289 = INT16_MAX;
	int8_t x1292 = 2;
	int32_t t180 = 3;

    t180 = ((x1289^x1290)/(x1291<=x1292));

    if (t180 != -2147450881) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1295 = -1;
	uint16_t x1296 = 14668U;
	volatile uint64_t t181 = 68173341956253510LLU;

    t181 = ((x1293^x1294)/(x1295<=x1296));

    if (t181 != 17932315677386810844LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x1309 = INT8_MIN;
	static volatile int16_t x1310 = 12853;
	int64_t x1311 = -137801187094LL;
	uint8_t x1312 = 15U;
	static int32_t t182 = 3;

    t182 = ((x1309^x1310)/(x1311<=x1312));

    if (t182 != -12875) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x1321 = UINT8_MAX;
	int64_t x1322 = -6546705LL;
	int32_t x1323 = -145934;
	int32_t x1324 = INT32_MAX;
	volatile int64_t t183 = -10796459LL;

    t183 = ((x1321^x1322)/(x1323<=x1324));

    if (t183 != -6546928LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1325 = -1;
	volatile uint8_t x1326 = UINT8_MAX;
	volatile int8_t x1327 = -10;
	volatile int16_t x1328 = INT16_MAX;
	int32_t t184 = -16829;

    t184 = ((x1325^x1326)/(x1327<=x1328));

    if (t184 != -256) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1337 = 11246U;
	int32_t x1340 = -1;
	int32_t t185 = -218310;

    t185 = ((x1337^x1338)/(x1339<=x1340));

    if (t185 != -11247) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1341 = -1;
	int16_t x1342 = 3226;
	int8_t x1343 = 43;
	static int32_t x1344 = INT32_MAX;

    t186 = ((x1341^x1342)/(x1343<=x1344));

    if (t186 != -3227) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1345 = INT32_MIN;
	volatile uint32_t x1346 = 2088044U;
	int16_t x1348 = -1;
	uint32_t t187 = 24U;

    t187 = ((x1345^x1346)/(x1347<=x1348));

    if (t187 != 2149571692U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1353 = UINT64_MAX;
	static int64_t x1354 = INT64_MAX;
	uint64_t x1355 = 8107485610975LLU;
	int64_t x1356 = -1LL;
	uint64_t t188 = 384507834169339685LLU;

    t188 = ((x1353^x1354)/(x1355<=x1356));

    if (t188 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1365 = -14873;
	static int16_t x1366 = INT16_MIN;
	int16_t x1367 = INT16_MAX;
	uint32_t x1368 = UINT32_MAX;
	int32_t t189 = 2;

    t189 = ((x1365^x1366)/(x1367<=x1368));

    if (t189 != 17895) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1373 = 52U;
	int32_t x1374 = 6;
	static uint32_t x1375 = UINT32_MAX;
	volatile uint64_t x1376 = 50276378725833LLU;
	volatile int32_t t190 = 2;

    t190 = ((x1373^x1374)/(x1375<=x1376));

    if (t190 != 50) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1382 = UINT32_MAX;
	uint64_t x1383 = 2417LLU;
	int32_t x1384 = -836317;
	volatile int64_t t191 = -54523448902LL;

    t191 = ((x1381^x1382)/(x1383<=x1384));

    if (t191 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1385 = -641678352988425LL;
	uint16_t x1386 = 1U;
	static int32_t x1387 = -952;
	int16_t x1388 = 8;

    t192 = ((x1385^x1386)/(x1387<=x1388));

    if (t192 != -641678352988426LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x1391 = 1265U;
	uint64_t x1392 = 8491235716LLU;

    t193 = ((x1389^x1390)/(x1391<=x1392));

    if (t193 != 27649545815340338LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1393 = UINT64_MAX;
	uint32_t x1394 = 337U;
	uint64_t t194 = 479LLU;

    t194 = ((x1393^x1394)/(x1395<=x1396));

    if (t194 != 18446744073709551278LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x1405 = INT32_MIN;
	uint8_t x1406 = 127U;
	static int32_t x1407 = 0;
	int16_t x1408 = 1;
	int32_t t195 = -60599891;

    t195 = ((x1405^x1406)/(x1407<=x1408));

    if (t195 != -2147483521) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1409 = INT32_MIN;
	volatile int8_t x1410 = INT8_MIN;
	int64_t x1411 = INT64_MIN;
	int16_t x1412 = 961;

    t196 = ((x1409^x1410)/(x1411<=x1412));

    if (t196 != 2147483520) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1421 = 249U;
	static int64_t x1422 = INT64_MIN;
	int8_t x1423 = INT8_MIN;
	int64_t t197 = 3908243192399LL;

    t197 = ((x1421^x1422)/(x1423<=x1424));

    if (t197 != -9223372036854775559LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1434 = -14;
	volatile uint8_t x1435 = 1U;
	volatile int32_t t198 = -15868;

    t198 = ((x1433^x1434)/(x1435<=x1436));

    if (t198 != 2147483634) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1437 = INT8_MIN;
	int8_t x1438 = -1;
	int16_t x1439 = INT16_MIN;
	int8_t x1440 = -3;
	int32_t t199 = -3866401;

    t199 = ((x1437^x1438)/(x1439<=x1440));

    if (t199 != 127) { NG(); } else { ; }
	
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

