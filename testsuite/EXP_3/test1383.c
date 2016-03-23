
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

int8_t x4 = INT8_MIN;
static volatile int64_t x16 = -1LL;
int16_t x22 = -1;
volatile uint64_t x37 = 78765600136128LLU;
int8_t x77 = -35;
int16_t x80 = INT16_MIN;
volatile int32_t t8 = -5;
int8_t x83 = -1;
volatile int64_t x84 = -1LL;
uint32_t x95 = UINT32_MAX;
uint64_t x98 = 6045713853516LLU;
int16_t x99 = 1;
static volatile uint64_t t12 = 3805594081094LLU;
uint8_t x115 = UINT8_MAX;
int8_t x116 = -3;
volatile uint32_t x125 = UINT32_MAX;
volatile int32_t x128 = INT32_MIN;
static uint8_t x142 = UINT8_MAX;
int8_t x143 = INT8_MAX;
uint16_t x150 = 0U;
static uint8_t x159 = 15U;
static int32_t x161 = -1;
static uint16_t x162 = UINT16_MAX;
int32_t t20 = -691;
static int64_t x171 = 103323LL;
uint32_t x186 = 3U;
volatile uint64_t t28 = 705981296LLU;
uint32_t x243 = 383U;
static uint32_t t31 = 99U;
volatile int64_t x251 = -1LL;
int64_t x252 = INT64_MAX;
volatile int32_t t33 = 1;
int32_t x267 = -4;
uint64_t x269 = 86LLU;
uint32_t x282 = UINT32_MAX;
uint32_t x284 = 932511857U;
volatile int8_t x286 = 1;
int16_t x289 = -1;
int32_t t39 = -29;
int32_t x302 = INT32_MIN;
static int8_t x303 = 19;
volatile int8_t x328 = -12;
volatile int32_t t44 = 49502919;
static int16_t x340 = -14;
uint64_t x344 = UINT64_MAX;
volatile int32_t t47 = 1013361;
volatile int64_t x368 = INT64_MIN;
uint16_t x372 = 3949U;
static uint8_t x375 = UINT8_MAX;
int64_t t51 = 2340483112LL;
uint16_t x409 = UINT16_MAX;
static int16_t x411 = 64;
int64_t x415 = 1659LL;
static uint32_t x426 = 773U;
static int16_t x427 = INT16_MAX;
static volatile uint32_t x428 = 7016U;
int32_t x438 = INT32_MIN;
int8_t x439 = INT8_MAX;
int64_t x456 = INT64_MIN;
volatile int64_t t60 = INT64_MAX;
int32_t x469 = -1;
static uint32_t t63 = 1U;
int16_t x497 = INT16_MAX;
int32_t t65 = -53214;
static int8_t x502 = -1;
int64_t x504 = -1LL;
uint32_t x515 = 1727U;
static int16_t x538 = -4151;
int16_t x545 = INT16_MIN;
int16_t x551 = 1849;
uint8_t x560 = UINT8_MAX;
volatile int16_t x569 = INT16_MAX;
uint32_t x582 = 3U;
volatile int64_t x584 = INT64_MAX;
uint8_t x627 = 0U;
int8_t x629 = INT8_MIN;
int64_t x630 = 3681778315826LL;
uint32_t x637 = UINT32_MAX;
int8_t x638 = -8;
static uint64_t t87 = 1LLU;
volatile uint32_t x674 = 7576U;
int64_t x675 = INT64_MIN;
uint32_t t89 = 15170846U;
static uint16_t x686 = 829U;
uint16_t x710 = UINT16_MAX;
static volatile int16_t x711 = INT16_MAX;
volatile int8_t x712 = -1;
static int32_t x714 = -1;
int32_t x719 = -342;
static volatile uint64_t x734 = 2915930602LLU;
volatile int8_t x735 = INT8_MAX;
static int8_t x755 = -1;
int16_t x760 = INT16_MIN;
static volatile int8_t x763 = INT8_MAX;
uint32_t t100 = 29U;
int64_t x779 = INT64_MIN;
volatile uint64_t t102 = 3518002820121LLU;
volatile uint32_t x785 = UINT32_MAX;
uint16_t x790 = UINT16_MAX;
uint64_t t104 = 128525577LLU;
volatile uint16_t x793 = 2909U;
uint32_t x804 = 3U;
static uint64_t t106 = 397513661738678381LLU;
static volatile int8_t x805 = 0;
volatile int16_t x813 = INT16_MAX;
uint8_t x815 = 17U;
uint8_t x823 = UINT8_MAX;
static int16_t x824 = -458;
uint16_t x825 = 207U;
uint16_t x846 = 331U;
int16_t x861 = 3;
int32_t t112 = -81514;
volatile int32_t x875 = 687664;
static int16_t x876 = INT16_MIN;
static volatile uint16_t x883 = UINT16_MAX;
volatile uint16_t x884 = UINT16_MAX;
int32_t x897 = INT32_MAX;
static int16_t x898 = INT16_MIN;
int32_t x909 = INT32_MIN;
volatile uint32_t t118 = 707U;
static uint32_t x933 = UINT32_MAX;
static int8_t x934 = INT8_MIN;
static uint32_t t121 = 44U;
uint16_t x940 = 147U;
int32_t t123 = -47550;
uint8_t x960 = 0U;
volatile int32_t t126 = -61138392;
volatile uint16_t x987 = 31337U;
static int8_t x1000 = 1;
int64_t t128 = -969728280428LL;
uint16_t x1002 = 411U;
static volatile uint8_t x1022 = UINT8_MAX;
int16_t x1024 = -203;
volatile uint64_t t132 = 30852170839356983LLU;
uint64_t x1026 = UINT64_MAX;
static int16_t x1027 = INT16_MIN;
int16_t x1030 = -1;
static uint16_t x1032 = 223U;
static int16_t x1038 = INT16_MAX;
int16_t x1041 = INT16_MIN;
int64_t x1056 = 37LL;
static uint64_t x1057 = 226LLU;
static uint8_t x1062 = UINT8_MAX;
uint8_t x1064 = 5U;
static int32_t x1067 = INT32_MIN;
volatile uint64_t x1079 = 3735LLU;
uint64_t t142 = 164775178464508106LLU;
volatile uint64_t t143 = 252246030973LLU;
uint16_t x1099 = 23671U;
volatile uint32_t t145 = 3U;
static int64_t x1128 = -1LL;
volatile uint32_t x1130 = 105137U;
uint32_t x1131 = 1U;
static uint64_t x1132 = UINT64_MAX;
volatile uint32_t t151 = 112184344U;
int64_t x1134 = -1LL;
int32_t x1136 = INT32_MIN;
static int16_t x1148 = INT16_MIN;
volatile int32_t t154 = 5;
volatile int32_t x1150 = INT32_MIN;
uint64_t x1157 = UINT64_MAX;
int16_t x1170 = -1;
uint32_t x1171 = UINT32_MAX;
volatile int8_t x1179 = -1;
int32_t t160 = 219810;
uint32_t x1184 = UINT32_MAX;
uint64_t x1190 = 30LLU;
uint64_t t162 = 313LLU;
volatile int64_t x1196 = INT64_MIN;
static volatile int64_t t163 = -230847390963770LL;
uint32_t x1197 = 1675711327U;
uint64_t x1200 = 67763060205995145LLU;
static volatile int8_t x1201 = INT8_MAX;
int8_t x1202 = -1;
volatile int32_t t165 = 537;
uint16_t x1230 = 756U;
volatile int32_t t170 = 26476;
int64_t x1233 = INT64_MAX;
uint64_t x1247 = 855189142072202192LLU;
int32_t x1252 = INT32_MAX;
int32_t t173 = 16780;
volatile uint64_t x1288 = UINT64_MAX;
int16_t x1291 = INT16_MIN;
volatile int32_t t176 = 2027422;
uint64_t x1302 = 89200LLU;
static volatile int32_t x1303 = INT32_MIN;
volatile int32_t x1304 = -1;
uint64_t x1309 = UINT64_MAX;
int32_t x1312 = INT32_MIN;
static uint8_t x1315 = UINT8_MAX;
int64_t x1316 = INT64_MIN;
uint64_t x1318 = 156035LLU;
volatile int32_t x1319 = -1628;
uint64_t t182 = 1658597768LLU;
uint64_t x1340 = 102737417252552LLU;
uint64_t x1342 = 67412445LLU;
static uint64_t x1344 = 559405023719LLU;
int16_t x1347 = -3;
uint32_t x1349 = UINT32_MAX;
uint16_t x1351 = 1U;
volatile int8_t x1352 = -1;
volatile uint64_t t186 = 103LLU;
uint64_t x1368 = UINT64_MAX;
int64_t x1378 = 287741LL;
static int8_t x1380 = -10;
uint32_t x1382 = 18395024U;
int16_t x1387 = -1023;
volatile uint8_t x1406 = 46U;


void f0(void) {
    	volatile int16_t x1 = INT16_MAX;
	int8_t x2 = -2;
	int8_t x3 = INT8_MAX;
	static volatile int32_t t0 = -5252;

    t0 = ((x1+x2)>>(x3==x4));

    if (t0 != 32765) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	uint32_t x6 = UINT32_MAX;
	volatile int8_t x7 = INT8_MIN;
	static uint16_t x8 = UINT16_MAX;
	volatile uint32_t t1 = 9U;

    t1 = ((x5+x6)>>(x7==x8));

    if (t1 != 2147483646U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x13 = 26U;
	volatile int64_t x14 = -1LL;
	static uint64_t x15 = 39LLU;
	int64_t t2 = 1743148384LL;

    t2 = ((x13+x14)>>(x15==x16));

    if (t2 != 25LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x21 = UINT8_MAX;
	static int32_t x23 = 79899406;
	int8_t x24 = INT8_MIN;
	static int32_t t3 = 1794217;

    t3 = ((x21+x22)>>(x23==x24));

    if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	static int64_t x40 = INT64_MAX;
	volatile uint64_t t4 = 134570218021LLU;

    t4 = ((x37+x38)>>(x39==x40));

    if (t4 != 78765600103360LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x41 = 1U;
	uint64_t x42 = 1466390LLU;
	volatile int32_t x43 = INT32_MIN;
	static int32_t x44 = -1;
	uint64_t t5 = 1615914819545100044LLU;

    t5 = ((x41+x42)>>(x43==x44));

    if (t5 != 1466391LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x57 = UINT8_MAX;
	uint64_t x58 = UINT64_MAX;
	int8_t x59 = -49;
	int32_t x60 = INT32_MAX;
	uint64_t t6 = 664188689599941LLU;

    t6 = ((x57+x58)>>(x59==x60));

    if (t6 != 254LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MIN;
	uint64_t x71 = 3366171817071LLU;
	int16_t x72 = -82;
	int32_t t7 = -111;

    t7 = ((x69+x70)>>(x71==x72));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x78 = UINT16_MAX;
	int32_t x79 = 3768487;

    t8 = ((x77+x78)>>(x79==x80));

    if (t8 != 65500) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x81 = 29U;
	uint64_t x82 = 94LLU;
	volatile uint64_t t9 = 67702393LLU;

    t9 = ((x81+x82)>>(x83==x84));

    if (t9 != 61LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x85 = 635142656576719LLU;
	uint64_t x86 = UINT64_MAX;
	volatile int64_t x87 = -12502039534LL;
	int64_t x88 = 222465LL;
	uint64_t t10 = 20LLU;

    t10 = ((x85+x86)>>(x87==x88));

    if (t10 != 635142656576718LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x93 = 62880036;
	volatile int8_t x94 = 29;
	int64_t x96 = INT64_MAX;
	volatile int32_t t11 = 22;

    t11 = ((x93+x94)>>(x95==x96));

    if (t11 != 62880065) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x97 = 5001U;
	int8_t x100 = INT8_MAX;

    t12 = ((x97+x98)>>(x99==x100));

    if (t12 != 6045713858517LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x101 = 223027966532468LLU;
	int16_t x102 = -1;
	int16_t x103 = INT16_MIN;
	uint16_t x104 = 0U;
	uint64_t t13 = 38664239649041LLU;

    t13 = ((x101+x102)>>(x103==x104));

    if (t13 != 223027966532467LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x113 = UINT8_MAX;
	static volatile int16_t x114 = -1;
	volatile int32_t t14 = 47;

    t14 = ((x113+x114)>>(x115==x116));

    if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x126 = INT32_MIN;
	int64_t x127 = INT64_MIN;
	uint32_t t15 = 364585912U;

    t15 = ((x125+x126)>>(x127==x128));

    if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x141 = INT16_MAX;
	static int64_t x144 = INT64_MAX;
	int32_t t16 = 40;

    t16 = ((x141+x142)>>(x143==x144));

    if (t16 != 33022) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x145 = 316375U;
	static int8_t x146 = INT8_MIN;
	volatile int32_t x147 = -821;
	int8_t x148 = INT8_MIN;
	volatile uint32_t t17 = 216303457U;

    t17 = ((x145+x146)>>(x147==x148));

    if (t17 != 316247U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x149 = 424U;
	uint16_t x151 = 10U;
	int32_t x152 = 1117806;
	int32_t t18 = 139263090;

    t18 = ((x149+x150)>>(x151==x152));

    if (t18 != 424) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x157 = -738;
	int16_t x158 = INT16_MAX;
	int8_t x160 = 15;
	volatile int32_t t19 = -19179;

    t19 = ((x157+x158)>>(x159==x160));

    if (t19 != 16014) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x163 = INT16_MAX;
	int16_t x164 = INT16_MIN;

    t20 = ((x161+x162)>>(x163==x164));

    if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x165 = INT8_MAX;
	uint16_t x166 = 11U;
	int64_t x167 = -57LL;
	volatile uint32_t x168 = UINT32_MAX;
	int32_t t21 = 578;

    t21 = ((x165+x166)>>(x167==x168));

    if (t21 != 138) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x169 = 147U;
	static uint32_t x170 = 119452U;
	uint8_t x172 = UINT8_MAX;
	volatile uint32_t t22 = 111896U;

    t22 = ((x169+x170)>>(x171==x172));

    if (t22 != 119599U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x177 = 10257U;
	int16_t x178 = 963;
	int64_t x179 = INT64_MIN;
	volatile int16_t x180 = 1517;
	static volatile uint32_t t23 = 12266893U;

    t23 = ((x177+x178)>>(x179==x180));

    if (t23 != 11220U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x185 = -1;
	static uint16_t x187 = UINT16_MAX;
	uint64_t x188 = UINT64_MAX;
	static volatile uint32_t t24 = 2U;

    t24 = ((x185+x186)>>(x187==x188));

    if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x201 = INT8_MIN;
	uint64_t x202 = 765216850171740581LLU;
	volatile uint8_t x203 = UINT8_MAX;
	static uint8_t x204 = 0U;
	uint64_t t25 = 576384471594909317LLU;

    t25 = ((x201+x202)>>(x203==x204));

    if (t25 != 765216850171740453LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x205 = 1560581LLU;
	int8_t x206 = -1;
	static int16_t x207 = -1;
	volatile int32_t x208 = INT32_MAX;
	volatile uint64_t t26 = 13793864508055533LLU;

    t26 = ((x205+x206)>>(x207==x208));

    if (t26 != 1560580LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MAX;
	static int64_t x219 = INT64_MAX;
	int64_t x220 = -30944006LL;
	volatile int32_t t27 = 23828081;

    t27 = ((x217+x218)>>(x219==x220));

    if (t27 != 2147450879) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x221 = 2U;
	uint64_t x222 = 21890091791934LLU;
	static uint64_t x223 = UINT64_MAX;
	int16_t x224 = INT16_MIN;

    t28 = ((x221+x222)>>(x223==x224));

    if (t28 != 21890091791936LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x233 = 1846U;
	int64_t x234 = 645945LL;
	int64_t x235 = INT64_MIN;
	uint8_t x236 = 63U;
	int64_t t29 = -6546LL;

    t29 = ((x233+x234)>>(x235==x236));

    if (t29 != 647791LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x241 = INT8_MIN;
	uint32_t x242 = UINT32_MAX;
	uint64_t x244 = 162078161735LLU;
	static volatile uint32_t t30 = 3216262U;

    t30 = ((x241+x242)>>(x243==x244));

    if (t30 != 4294967167U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x245 = UINT32_MAX;
	static int8_t x246 = -1;
	static int8_t x247 = INT8_MIN;
	int64_t x248 = -1LL;

    t31 = ((x245+x246)>>(x247==x248));

    if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x249 = -1;
	static int32_t x250 = INT32_MAX;
	static volatile int32_t t32 = -103;

    t32 = ((x249+x250)>>(x251==x252));

    if (t32 != 2147483646) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x253 = -209;
	volatile int32_t x254 = INT32_MAX;
	int16_t x255 = -1;
	uint16_t x256 = 7569U;

    t33 = ((x253+x254)>>(x255==x256));

    if (t33 != 2147483438) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x257 = -1;
	uint32_t x258 = 64426545U;
	uint32_t x259 = 196U;
	int64_t x260 = -1LL;
	volatile uint32_t t34 = 389U;

    t34 = ((x257+x258)>>(x259==x260));

    if (t34 != 64426544U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x265 = 43;
	volatile int8_t x266 = -1;
	int64_t x268 = INT64_MAX;
	int32_t t35 = -98;

    t35 = ((x265+x266)>>(x267==x268));

    if (t35 != 42) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x270 = UINT32_MAX;
	uint8_t x271 = 23U;
	int64_t x272 = INT64_MIN;
	static uint64_t t36 = 2269174845135915118LLU;

    t36 = ((x269+x270)>>(x271==x272));

    if (t36 != 4294967381LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x281 = 2057140112754823521LLU;
	uint32_t x283 = 129952U;
	uint64_t t37 = 111LLU;

    t37 = ((x281+x282)>>(x283==x284));

    if (t37 != 2057140117049790816LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x285 = 1U;
	int64_t x287 = 107920110LL;
	int8_t x288 = -2;
	static int32_t t38 = -159;

    t38 = ((x285+x286)>>(x287==x288));

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x290 = UINT8_MAX;
	int64_t x291 = INT64_MAX;
	int8_t x292 = -6;

    t39 = ((x289+x290)>>(x291==x292));

    if (t39 != 254) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x301 = INT64_MAX;
	int32_t x304 = -1488744;
	volatile int64_t t40 = -202149397925LL;

    t40 = ((x301+x302)>>(x303==x304));

    if (t40 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x305 = 79360751;
	uint16_t x306 = 10052U;
	int32_t x307 = -3;
	volatile int32_t x308 = -1;
	static volatile int32_t t41 = -12;

    t41 = ((x305+x306)>>(x307==x308));

    if (t41 != 79370803) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x313 = 1451;
	volatile int16_t x314 = -1243;
	int16_t x315 = 2;
	static int8_t x316 = INT8_MAX;
	int32_t t42 = 0;

    t42 = ((x313+x314)>>(x315==x316));

    if (t42 != 208) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x321 = 11;
	int16_t x322 = -1;
	static int16_t x323 = -1;
	uint16_t x324 = 1U;
	volatile int32_t t43 = -125582;

    t43 = ((x321+x322)>>(x323==x324));

    if (t43 != 10) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x325 = 12U;
	uint8_t x326 = UINT8_MAX;
	static uint8_t x327 = 109U;

    t44 = ((x325+x326)>>(x327==x328));

    if (t44 != 267) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x337 = 1157U;
	uint64_t x338 = 184LLU;
	int8_t x339 = 1;
	volatile uint64_t t45 = 364674289379LLU;

    t45 = ((x337+x338)>>(x339==x340));

    if (t45 != 1341LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x341 = 91155160LLU;
	int8_t x342 = INT8_MAX;
	static uint32_t x343 = 5U;
	volatile uint64_t t46 = 61384LLU;

    t46 = ((x341+x342)>>(x343==x344));

    if (t46 != 91155287LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x349 = 12U;
	int16_t x350 = -3;
	uint8_t x351 = 50U;
	static uint64_t x352 = 1LLU;

    t47 = ((x349+x350)>>(x351==x352));

    if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x365 = 1;
	volatile uint8_t x366 = 26U;
	static int16_t x367 = -1;
	static volatile int32_t t48 = 7;

    t48 = ((x365+x366)>>(x367==x368));

    if (t48 != 27) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint16_t x369 = UINT16_MAX;
	int32_t x370 = 143306932;
	uint16_t x371 = 472U;
	int32_t t49 = 1026341;

    t49 = ((x369+x370)>>(x371==x372));

    if (t49 != 143372467) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x373 = 1123481705LLU;
	int32_t x374 = INT32_MIN;
	static int8_t x376 = -1;
	static uint64_t t50 = 3570822LLU;

    t50 = ((x373+x374)>>(x375==x376));

    if (t50 != 18446744072685549673LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x389 = -1LL;
	int32_t x390 = 2117;
	uint64_t x391 = 9035184499959816000LLU;
	int16_t x392 = -29;

    t51 = ((x389+x390)>>(x391==x392));

    if (t51 != 2116LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x397 = UINT8_MAX;
	static uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	static volatile int32_t x400 = INT32_MAX;
	uint32_t t52 = 1647961036U;

    t52 = ((x397+x398)>>(x399==x400));

    if (t52 != 254U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x401 = UINT16_MAX;
	int8_t x402 = INT8_MIN;
	volatile int16_t x403 = -1159;
	uint64_t x404 = 34906917403558LLU;
	int32_t t53 = 77319709;

    t53 = ((x401+x402)>>(x403==x404));

    if (t53 != 65407) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x405 = 12;
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = 639;
	uint64_t x408 = 6238682343022709LLU;
	volatile int32_t t54 = 3240077;

    t54 = ((x405+x406)>>(x407==x408));

    if (t54 != 267) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x410 = INT16_MIN;
	static int32_t x412 = 503;
	int32_t t55 = -508633617;

    t55 = ((x409+x410)>>(x411==x412));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x413 = 92;
	static uint64_t x414 = 16277990LLU;
	static uint16_t x416 = 319U;
	volatile uint64_t t56 = 200254LLU;

    t56 = ((x413+x414)>>(x415==x416));

    if (t56 != 16278082LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x425 = 2U;
	uint32_t t57 = 3616U;

    t57 = ((x425+x426)>>(x427==x428));

    if (t57 != 775U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x433 = 7;
	int32_t x434 = -1;
	static int16_t x435 = INT16_MAX;
	static int8_t x436 = 1;
	static int32_t t58 = -591;

    t58 = ((x433+x434)>>(x435==x436));

    if (t58 != 6) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x437 = 280895U;
	uint16_t x440 = UINT16_MAX;
	volatile uint32_t t59 = 52U;

    t59 = ((x437+x438)>>(x439==x440));

    if (t59 != 2147764543U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x453 = 0U;
	int64_t x454 = INT64_MAX;
	static uint64_t x455 = 645285819LLU;

    t60 = ((x453+x454)>>(x455==x456));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x465 = 8910U;
	uint8_t x466 = 30U;
	uint16_t x467 = 7U;
	uint64_t x468 = 15983402LLU;
	int32_t t61 = 408;

    t61 = ((x465+x466)>>(x467==x468));

    if (t61 != 8940) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x470 = 3U;
	uint64_t x471 = UINT64_MAX;
	volatile int16_t x472 = INT16_MAX;
	int32_t t62 = 6;

    t62 = ((x469+x470)>>(x471==x472));

    if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x481 = -1;
	static uint32_t x482 = UINT32_MAX;
	int16_t x483 = -1644;
	volatile uint8_t x484 = 0U;

    t63 = ((x481+x482)>>(x483==x484));

    if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x489 = 89047247;
	uint32_t x490 = 2090770749U;
	volatile int64_t x491 = -182350080530218959LL;
	int32_t x492 = INT32_MIN;
	static uint32_t t64 = 1902U;

    t64 = ((x489+x490)>>(x491==x492));

    if (t64 != 2179817996U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x498 = -1;
	int64_t x499 = -1LL;
	int32_t x500 = INT32_MAX;

    t65 = ((x497+x498)>>(x499==x500));

    if (t65 != 32766) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x501 = 5204U;
	static int16_t x503 = -10;
	volatile int32_t t66 = -766;

    t66 = ((x501+x502)>>(x503==x504));

    if (t66 != 5203) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x509 = 12827733230LLU;
	int16_t x510 = INT16_MIN;
	int16_t x511 = 24;
	uint8_t x512 = UINT8_MAX;
	uint64_t t67 = 385LLU;

    t67 = ((x509+x510)>>(x511==x512));

    if (t67 != 12827700462LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x513 = 27898388713LL;
	volatile int16_t x514 = -1;
	uint64_t x516 = 27746386573174787LLU;
	volatile int64_t t68 = -13098578139370355LL;

    t68 = ((x513+x514)>>(x515==x516));

    if (t68 != 27898388712LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x537 = 5950333396450LLU;
	uint8_t x539 = 0U;
	int64_t x540 = -3983923LL;
	uint64_t t69 = 591LLU;

    t69 = ((x537+x538)>>(x539==x540));

    if (t69 != 5950333392299LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x541 = -1;
	uint64_t x542 = UINT64_MAX;
	uint32_t x543 = 101U;
	int8_t x544 = INT8_MAX;
	uint64_t t70 = 31411527423174LLU;

    t70 = ((x541+x542)>>(x543==x544));

    if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x546 = 59374U;
	static uint16_t x547 = UINT16_MAX;
	int64_t x548 = 5657854802LL;
	static volatile uint32_t t71 = 306U;

    t71 = ((x545+x546)>>(x547==x548));

    if (t71 != 26606U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x549 = -1;
	uint8_t x550 = UINT8_MAX;
	volatile int32_t x552 = INT32_MAX;
	static volatile int32_t t72 = 926;

    t72 = ((x549+x550)>>(x551==x552));

    if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x557 = 23U;
	volatile uint32_t x558 = UINT32_MAX;
	static uint8_t x559 = UINT8_MAX;
	volatile uint32_t t73 = 24213432U;

    t73 = ((x557+x558)>>(x559==x560));

    if (t73 != 11U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x561 = -1;
	uint32_t x562 = UINT32_MAX;
	uint8_t x563 = UINT8_MAX;
	volatile int64_t x564 = INT64_MIN;
	static uint32_t t74 = 28642430U;

    t74 = ((x561+x562)>>(x563==x564));

    if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x570 = -24;
	int8_t x571 = 1;
	volatile int64_t x572 = -1LL;
	static int32_t t75 = -245;

    t75 = ((x569+x570)>>(x571==x572));

    if (t75 != 32743) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x573 = 29U;
	int8_t x574 = -1;
	static uint8_t x575 = 2U;
	static int64_t x576 = INT64_MIN;
	static volatile int32_t t76 = 0;

    t76 = ((x573+x574)>>(x575==x576));

    if (t76 != 28) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x581 = 31U;
	int16_t x583 = -1;
	uint32_t t77 = 268U;

    t77 = ((x581+x582)>>(x583==x584));

    if (t77 != 34U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x585 = 9U;
	static int8_t x586 = -2;
	int32_t x587 = 214;
	static uint32_t x588 = UINT32_MAX;
	static int32_t t78 = 1;

    t78 = ((x585+x586)>>(x587==x588));

    if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x593 = 24696U;
	int32_t x594 = 2;
	int16_t x595 = -1;
	int64_t x596 = -6402LL;
	static int32_t t79 = -79293785;

    t79 = ((x593+x594)>>(x595==x596));

    if (t79 != 24698) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x601 = INT32_MAX;
	uint32_t x602 = UINT32_MAX;
	int8_t x603 = INT8_MIN;
	volatile int64_t x604 = -9694LL;
	uint32_t t80 = 304023706U;

    t80 = ((x601+x602)>>(x603==x604));

    if (t80 != 2147483646U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x609 = -1;
	int32_t x610 = 112;
	static uint64_t x611 = 33643825206LLU;
	int16_t x612 = INT16_MIN;
	int32_t t81 = -1;

    t81 = ((x609+x610)>>(x611==x612));

    if (t81 != 111) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x621 = -1;
	uint32_t x622 = 28793U;
	int32_t x623 = INT32_MIN;
	int16_t x624 = INT16_MIN;
	uint32_t t82 = 0U;

    t82 = ((x621+x622)>>(x623==x624));

    if (t82 != 28792U) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x625 = 54U;
	uint8_t x626 = UINT8_MAX;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t83 = -381922;

    t83 = ((x625+x626)>>(x627==x628));

    if (t83 != 309) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x631 = UINT32_MAX;
	volatile int16_t x632 = -1;
	volatile int64_t t84 = -9693825428LL;

    t84 = ((x629+x630)>>(x631==x632));

    if (t84 != 1840889157849LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x639 = INT16_MIN;
	int32_t x640 = -255614;
	volatile uint32_t t85 = 2068U;

    t85 = ((x637+x638)>>(x639==x640));

    if (t85 != 4294967287U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x645 = UINT32_MAX;
	int64_t x646 = -38813017LL;
	volatile int64_t x647 = 64213579LL;
	int16_t x648 = INT16_MIN;
	volatile int64_t t86 = 8689496807840689LL;

    t86 = ((x645+x646)>>(x647==x648));

    if (t86 != 4256154278LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x653 = UINT32_MAX;
	uint64_t x654 = 785585451LLU;
	uint8_t x655 = 2U;
	volatile uint16_t x656 = 680U;

    t87 = ((x653+x654)>>(x655==x656));

    if (t87 != 5080552746LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x669 = UINT8_MAX;
	int8_t x670 = INT8_MAX;
	static uint16_t x671 = 22587U;
	int64_t x672 = -1LL;
	volatile int32_t t88 = 4949190;

    t88 = ((x669+x670)>>(x671==x672));

    if (t88 != 382) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x673 = 110320U;
	volatile int8_t x676 = -1;

    t89 = ((x673+x674)>>(x675==x676));

    if (t89 != 117896U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x685 = UINT32_MAX;
	int64_t x687 = -1LL;
	uint32_t x688 = 250605U;
	uint32_t t90 = 9415U;

    t90 = ((x685+x686)>>(x687==x688));

    if (t90 != 828U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x705 = 75;
	int16_t x706 = 13520;
	int64_t x707 = INT64_MAX;
	int16_t x708 = -1;
	static int32_t t91 = -103653;

    t91 = ((x705+x706)>>(x707==x708));

    if (t91 != 13595) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x709 = 1LL;
	int64_t t92 = -12893272LL;

    t92 = ((x709+x710)>>(x711==x712));

    if (t92 != 65536LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x713 = 107461786099029233LL;
	int32_t x715 = INT32_MAX;
	volatile uint64_t x716 = UINT64_MAX;
	int64_t t93 = 15619840423LL;

    t93 = ((x713+x714)>>(x715==x716));

    if (t93 != 107461786099029232LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x717 = -1;
	static volatile int64_t x718 = INT64_MAX;
	int64_t x720 = -1LL;
	static volatile int64_t t94 = 68345956LL;

    t94 = ((x717+x718)>>(x719==x720));

    if (t94 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x733 = INT16_MAX;
	static uint64_t x736 = UINT64_MAX;
	uint64_t t95 = 1814995677LLU;

    t95 = ((x733+x734)>>(x735==x736));

    if (t95 != 2915963369LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x745 = 671884LLU;
	uint64_t x746 = 492729184017LLU;
	volatile uint16_t x747 = 19879U;
	static int8_t x748 = INT8_MAX;
	static volatile uint64_t t96 = 124559996939481LLU;

    t96 = ((x745+x746)>>(x747==x748));

    if (t96 != 492729855901LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x749 = UINT16_MAX;
	static uint64_t x750 = 3158816987LLU;
	uint8_t x751 = UINT8_MAX;
	int32_t x752 = -711819120;
	static uint64_t t97 = 4268463469424LLU;

    t97 = ((x749+x750)>>(x751==x752));

    if (t97 != 3158882522LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x753 = 11458333345LL;
	int8_t x754 = INT8_MIN;
	int16_t x756 = -1;
	static int64_t t98 = 1579141918745LL;

    t98 = ((x753+x754)>>(x755==x756));

    if (t98 != 5729166608LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x757 = INT8_MAX;
	static int16_t x758 = -1;
	static volatile uint8_t x759 = 0U;
	volatile int32_t t99 = -4693209;

    t99 = ((x757+x758)>>(x759==x760));

    if (t99 != 126) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x761 = UINT16_MAX;
	uint32_t x762 = UINT32_MAX;
	static int8_t x764 = INT8_MIN;

    t100 = ((x761+x762)>>(x763==x764));

    if (t100 != 65534U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x769 = -124126;
	static uint32_t x770 = 7951948U;
	int16_t x771 = -1;
	int16_t x772 = INT16_MIN;
	uint32_t t101 = 224128770U;

    t101 = ((x769+x770)>>(x771==x772));

    if (t101 != 7827822U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x777 = 132004931411920LLU;
	int64_t x778 = 15LL;
	int32_t x780 = INT32_MIN;

    t102 = ((x777+x778)>>(x779==x780));

    if (t102 != 132004931411935LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x786 = -8;
	static uint32_t x787 = 214U;
	int8_t x788 = -1;
	uint32_t t103 = 55202204U;

    t103 = ((x785+x786)>>(x787==x788));

    if (t103 != 4294967287U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x789 = 2693LLU;
	static uint8_t x791 = 3U;
	int8_t x792 = 13;

    t104 = ((x789+x790)>>(x791==x792));

    if (t104 != 68228LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x794 = 981974205LLU;
	int16_t x795 = 1;
	volatile uint64_t x796 = UINT64_MAX;
	static uint64_t t105 = 31747272385080198LLU;

    t105 = ((x793+x794)>>(x795==x796));

    if (t105 != 981977114LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x801 = UINT64_MAX;
	static uint32_t x802 = 78U;
	uint32_t x803 = 52U;

    t106 = ((x801+x802)>>(x803==x804));

    if (t106 != 77LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x806 = 446945697585214LLU;
	static int64_t x807 = INT64_MIN;
	int8_t x808 = -1;
	volatile uint64_t t107 = 40401848382LLU;

    t107 = ((x805+x806)>>(x807==x808));

    if (t107 != 446945697585214LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x814 = 1052030834184LLU;
	uint16_t x816 = 1937U;
	uint64_t t108 = 16384462643232686LLU;

    t108 = ((x813+x814)>>(x815==x816));

    if (t108 != 1052030866951LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x821 = 2990U;
	uint64_t x822 = 10465497835916453LLU;
	static uint64_t t109 = 6142083523LLU;

    t109 = ((x821+x822)>>(x823==x824));

    if (t109 != 10465497835919443LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x826 = UINT8_MAX;
	int8_t x827 = -1;
	static uint32_t x828 = 97432822U;
	int32_t t110 = 19;

    t110 = ((x825+x826)>>(x827==x828));

    if (t110 != 462) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x845 = UINT8_MAX;
	int16_t x847 = -459;
	static volatile int16_t x848 = INT16_MAX;
	static int32_t t111 = -5636897;

    t111 = ((x845+x846)>>(x847==x848));

    if (t111 != 586) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x862 = 110U;
	int32_t x863 = INT32_MIN;
	int32_t x864 = -30;

    t112 = ((x861+x862)>>(x863==x864));

    if (t112 != 113) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x873 = INT8_MIN;
	uint32_t x874 = UINT32_MAX;
	uint32_t t113 = 1U;

    t113 = ((x873+x874)>>(x875==x876));

    if (t113 != 4294967167U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x881 = -207;
	static uint64_t x882 = 7LLU;
	volatile uint64_t t114 = 1LLU;

    t114 = ((x881+x882)>>(x883==x884));

    if (t114 != 9223372036854775708LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x893 = 242348693130524465LL;
	int64_t x894 = -4188566329421LL;
	int16_t x895 = INT16_MAX;
	int32_t x896 = -1;
	volatile int64_t t115 = -22177788362894820LL;

    t115 = ((x893+x894)>>(x895==x896));

    if (t115 != 242344504564195044LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x899 = INT8_MIN;
	uint32_t x900 = 2007U;
	volatile int32_t t116 = -1011731;

    t116 = ((x897+x898)>>(x899==x900));

    if (t116 != 2147450879) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x901 = -63;
	volatile uint64_t x902 = 1116062702891268685LLU;
	uint32_t x903 = UINT32_MAX;
	int64_t x904 = -1LL;
	volatile uint64_t t117 = 5058807436LLU;

    t117 = ((x901+x902)>>(x903==x904));

    if (t117 != 1116062702891268622LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x910 = 250941537U;
	volatile uint64_t x911 = 359424506631LLU;
	uint32_t x912 = 16U;

    t118 = ((x909+x910)>>(x911==x912));

    if (t118 != 2398425185U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x921 = INT16_MIN;
	int32_t x922 = INT32_MAX;
	int32_t x923 = INT32_MAX;
	volatile int8_t x924 = 0;
	static volatile int32_t t119 = -9;

    t119 = ((x921+x922)>>(x923==x924));

    if (t119 != 2147450879) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x925 = 90U;
	volatile int8_t x926 = INT8_MAX;
	uint32_t x927 = UINT32_MAX;
	int8_t x928 = -61;
	volatile int32_t t120 = 96974253;

    t120 = ((x925+x926)>>(x927==x928));

    if (t120 != 217) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x935 = 1647782345LLU;
	uint64_t x936 = UINT64_MAX;

    t121 = ((x933+x934)>>(x935==x936));

    if (t121 != 4294967167U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x937 = 1829712557392710LLU;
	int32_t x938 = -1;
	int64_t x939 = INT64_MIN;
	uint64_t t122 = 9430LLU;

    t122 = ((x937+x938)>>(x939==x940));

    if (t122 != 1829712557392709LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x949 = 1;
	volatile uint16_t x950 = 863U;
	static int64_t x951 = -283869700106561149LL;
	uint32_t x952 = 1476577U;

    t123 = ((x949+x950)>>(x951==x952));

    if (t123 != 864) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x957 = 1263752LLU;
	int64_t x958 = -1LL;
	static uint8_t x959 = UINT8_MAX;
	static volatile uint64_t t124 = 522179569599LLU;

    t124 = ((x957+x958)>>(x959==x960));

    if (t124 != 1263751LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x973 = UINT32_MAX;
	volatile uint16_t x974 = UINT16_MAX;
	static volatile int64_t x975 = INT64_MIN;
	uint8_t x976 = 1U;
	volatile uint32_t t125 = 468757U;

    t125 = ((x973+x974)>>(x975==x976));

    if (t125 != 65534U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x977 = -1;
	int32_t x978 = INT32_MAX;
	uint8_t x979 = 2U;
	volatile uint64_t x980 = 523378798205108513LLU;

    t126 = ((x977+x978)>>(x979==x980));

    if (t126 != 2147483646) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x985 = 0U;
	volatile int16_t x986 = INT16_MIN;
	int8_t x988 = 2;
	volatile uint32_t t127 = 1766909179U;

    t127 = ((x985+x986)>>(x987==x988));

    if (t127 != 4294934528U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x997 = 14649034LL;
	static uint16_t x998 = UINT16_MAX;
	int16_t x999 = INT16_MIN;

    t128 = ((x997+x998)>>(x999==x1000));

    if (t128 != 14714569LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x1001 = INT8_MAX;
	uint32_t x1003 = 760U;
	int16_t x1004 = -1;
	static volatile int32_t t129 = 3458188;

    t129 = ((x1001+x1002)>>(x1003==x1004));

    if (t129 != 538) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x1005 = 325U;
	volatile int16_t x1006 = -1;
	uint64_t x1007 = 4168104LLU;
	static int16_t x1008 = 6;
	volatile uint32_t t130 = 743U;

    t130 = ((x1005+x1006)>>(x1007==x1008));

    if (t130 != 324U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x1009 = 92248061U;
	int8_t x1010 = -1;
	static int8_t x1011 = -5;
	int16_t x1012 = -1945;
	uint32_t t131 = 255U;

    t131 = ((x1009+x1010)>>(x1011==x1012));

    if (t131 != 92248060U) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x1021 = UINT64_MAX;
	static uint16_t x1023 = UINT16_MAX;

    t132 = ((x1021+x1022)>>(x1023==x1024));

    if (t132 != 254LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x1025 = 11LLU;
	int32_t x1028 = INT32_MIN;
	uint64_t t133 = 1315879863322138LLU;

    t133 = ((x1025+x1026)>>(x1027==x1028));

    if (t133 != 10LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x1029 = INT16_MAX;
	static int32_t x1031 = INT32_MIN;
	int32_t t134 = 93271;

    t134 = ((x1029+x1030)>>(x1031==x1032));

    if (t134 != 32766) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x1037 = 1842401U;
	int32_t x1039 = INT32_MIN;
	int64_t x1040 = 89759123085LL;
	static volatile uint32_t t135 = 11812U;

    t135 = ((x1037+x1038)>>(x1039==x1040));

    if (t135 != 1875168U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x1042 = INT32_MAX;
	static uint32_t x1043 = 6964U;
	uint64_t x1044 = 3480545177733567802LLU;
	int32_t t136 = -39760008;

    t136 = ((x1041+x1042)>>(x1043==x1044));

    if (t136 != 2147450879) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1053 = -1712;
	int64_t x1054 = INT64_MAX;
	int8_t x1055 = INT8_MAX;
	int64_t t137 = 1161LL;

    t137 = ((x1053+x1054)>>(x1055==x1056));

    if (t137 != 9223372036854774095LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x1058 = INT16_MIN;
	uint64_t x1059 = UINT64_MAX;
	uint8_t x1060 = 10U;
	uint64_t t138 = 908589515757661467LLU;

    t138 = ((x1057+x1058)>>(x1059==x1060));

    if (t138 != 18446744073709519074LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x1061 = 19;
	static volatile int16_t x1063 = 23;
	int32_t t139 = -98871;

    t139 = ((x1061+x1062)>>(x1063==x1064));

    if (t139 != 274) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x1065 = 35120249923498769LLU;
	int16_t x1066 = 15;
	int16_t x1068 = INT16_MIN;
	volatile uint64_t t140 = 2083838114741LLU;

    t140 = ((x1065+x1066)>>(x1067==x1068));

    if (t140 != 35120249923498784LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x1069 = 243163899U;
	uint64_t x1070 = 184861013LLU;
	static int8_t x1071 = INT8_MIN;
	int64_t x1072 = -1LL;
	volatile uint64_t t141 = 37144479959640217LLU;

    t141 = ((x1069+x1070)>>(x1071==x1072));

    if (t141 != 428024912LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x1077 = 17U;
	uint64_t x1078 = 227579181198949LLU;
	int32_t x1080 = -1;

    t142 = ((x1077+x1078)>>(x1079==x1080));

    if (t142 != 227579181198966LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x1089 = 2264U;
	uint64_t x1090 = 1054084LLU;
	static volatile int8_t x1091 = -1;
	int8_t x1092 = 0;

    t143 = ((x1089+x1090)>>(x1091==x1092));

    if (t143 != 1056348LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1093 = INT8_MIN;
	int64_t x1094 = INT64_MAX;
	volatile int32_t x1095 = -1;
	static int16_t x1096 = INT16_MIN;
	volatile int64_t t144 = 0LL;

    t144 = ((x1093+x1094)>>(x1095==x1096));

    if (t144 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1097 = 2568842U;
	static int32_t x1098 = INT32_MIN;
	int64_t x1100 = INT64_MIN;

    t145 = ((x1097+x1098)>>(x1099==x1100));

    if (t145 != 2150052490U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1101 = 488LLU;
	volatile int64_t x1102 = INT64_MIN;
	static volatile uint8_t x1103 = UINT8_MAX;
	int32_t x1104 = INT32_MIN;
	volatile uint64_t t146 = 1172536163392309361LLU;

    t146 = ((x1101+x1102)>>(x1103==x1104));

    if (t146 != 9223372036854776296LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1105 = INT64_MIN;
	uint64_t x1106 = 97992014366LLU;
	int16_t x1107 = INT16_MIN;
	static volatile int16_t x1108 = INT16_MAX;
	volatile uint64_t t147 = 398650853331LLU;

    t147 = ((x1105+x1106)>>(x1107==x1108));

    if (t147 != 9223372134846790174LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1109 = 23U;
	int32_t x1110 = -1;
	static int32_t x1111 = 219077213;
	int32_t x1112 = -1;
	static volatile int32_t t148 = -17657347;

    t148 = ((x1109+x1110)>>(x1111==x1112));

    if (t148 != 22) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x1113 = 15434471207LLU;
	int32_t x1114 = 6918778;
	volatile uint64_t x1115 = UINT64_MAX;
	int64_t x1116 = INT64_MAX;
	uint64_t t149 = 161693014156742128LLU;

    t149 = ((x1113+x1114)>>(x1115==x1116));

    if (t149 != 15441389985LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1125 = INT16_MIN;
	volatile uint16_t x1126 = UINT16_MAX;
	static int8_t x1127 = INT8_MIN;
	static int32_t t150 = 225;

    t150 = ((x1125+x1126)>>(x1127==x1128));

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1129 = -1;

    t151 = ((x1129+x1130)>>(x1131==x1132));

    if (t151 != 105136U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1133 = 984U;
	uint8_t x1135 = 71U;
	int64_t t152 = 361775LL;

    t152 = ((x1133+x1134)>>(x1135==x1136));

    if (t152 != 983LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x1137 = 3606602515984LLU;
	uint32_t x1138 = 312U;
	volatile int8_t x1139 = -15;
	uint16_t x1140 = UINT16_MAX;
	volatile uint64_t t153 = 425106894LLU;

    t153 = ((x1137+x1138)>>(x1139==x1140));

    if (t153 != 3606602516296LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1145 = 20U;
	int8_t x1146 = -1;
	int64_t x1147 = INT64_MAX;

    t154 = ((x1145+x1146)>>(x1147==x1148));

    if (t154 != 19) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x1149 = 474LLU;
	int8_t x1151 = INT8_MIN;
	uint32_t x1152 = 26105382U;
	uint64_t t155 = 56145609LLU;

    t155 = ((x1149+x1150)>>(x1151==x1152));

    if (t155 != 18446744071562068442LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x1153 = -1LL;
	static int64_t x1154 = 619296119569265017LL;
	uint8_t x1155 = 0U;
	int16_t x1156 = INT16_MIN;
	int64_t t156 = -1907512361LL;

    t156 = ((x1153+x1154)>>(x1155==x1156));

    if (t156 != 619296119569265016LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x1158 = INT8_MIN;
	int32_t x1159 = -67668;
	volatile int32_t x1160 = INT32_MIN;
	uint64_t t157 = 34841522727203LLU;

    t157 = ((x1157+x1158)>>(x1159==x1160));

    if (t157 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1169 = UINT64_MAX;
	volatile int64_t x1172 = INT64_MIN;
	static uint64_t t158 = 3881306153875309LLU;

    t158 = ((x1169+x1170)>>(x1171==x1172));

    if (t158 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1173 = UINT64_MAX;
	int8_t x1174 = 21;
	uint32_t x1175 = UINT32_MAX;
	int32_t x1176 = INT32_MIN;
	static uint64_t t159 = 25431708086309194LLU;

    t159 = ((x1173+x1174)>>(x1175==x1176));

    if (t159 != 20LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x1177 = UINT16_MAX;
	static int8_t x1178 = INT8_MIN;
	volatile int64_t x1180 = INT64_MIN;

    t160 = ((x1177+x1178)>>(x1179==x1180));

    if (t160 != 65407) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x1181 = INT8_MAX;
	int64_t x1182 = 0LL;
	volatile int32_t x1183 = -1;
	int64_t t161 = -1801801031733723904LL;

    t161 = ((x1181+x1182)>>(x1183==x1184));

    if (t161 != 63LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x1189 = 138047234U;
	int8_t x1191 = INT8_MIN;
	int8_t x1192 = -1;

    t162 = ((x1189+x1190)>>(x1191==x1192));

    if (t162 != 138047264LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1193 = 1U;
	volatile int64_t x1194 = -1LL;
	static volatile int8_t x1195 = INT8_MIN;

    t163 = ((x1193+x1194)>>(x1195==x1196));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1198 = INT16_MIN;
	volatile uint16_t x1199 = 60U;
	volatile uint32_t t164 = 34670914U;

    t164 = ((x1197+x1198)>>(x1199==x1200));

    if (t164 != 1675678559U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x1203 = -111;
	static int16_t x1204 = 82;

    t165 = ((x1201+x1202)>>(x1203==x1204));

    if (t165 != 126) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x1205 = UINT64_MAX;
	int8_t x1206 = 1;
	uint8_t x1207 = 14U;
	static volatile int32_t x1208 = INT32_MIN;
	uint64_t t166 = 3136376384LLU;

    t166 = ((x1205+x1206)>>(x1207==x1208));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x1213 = -48831;
	int32_t x1214 = 15996648;
	static int8_t x1215 = INT8_MAX;
	static int16_t x1216 = INT16_MIN;
	volatile int32_t t167 = 87;

    t167 = ((x1213+x1214)>>(x1215==x1216));

    if (t167 != 15947817) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1217 = UINT16_MAX;
	static int16_t x1218 = 1545;
	uint64_t x1219 = UINT64_MAX;
	int16_t x1220 = 5508;
	static volatile int32_t t168 = -8871887;

    t168 = ((x1217+x1218)>>(x1219==x1220));

    if (t168 != 67080) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x1225 = 58177524995852LL;
	int64_t x1226 = -252989357107LL;
	int32_t x1227 = -147835;
	int32_t x1228 = -2;
	int64_t t169 = -7095888911051737LL;

    t169 = ((x1225+x1226)>>(x1227==x1228));

    if (t169 != 57924535638745LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x1229 = -1;
	static uint8_t x1231 = 2U;
	static int8_t x1232 = INT8_MAX;

    t170 = ((x1229+x1230)>>(x1231==x1232));

    if (t170 != 755) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1234 = -4LL;
	volatile int64_t x1235 = -1LL;
	uint8_t x1236 = UINT8_MAX;
	int64_t t171 = -4LL;

    t171 = ((x1233+x1234)>>(x1235==x1236));

    if (t171 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1245 = UINT16_MAX;
	int8_t x1246 = -4;
	volatile uint16_t x1248 = UINT16_MAX;
	volatile int32_t t172 = -327709120;

    t172 = ((x1245+x1246)>>(x1247==x1248));

    if (t172 != 65531) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1249 = INT16_MAX;
	static int8_t x1250 = INT8_MIN;
	int32_t x1251 = INT32_MAX;

    t173 = ((x1249+x1250)>>(x1251==x1252));

    if (t173 != 16319) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x1253 = INT16_MAX;
	int8_t x1254 = INT8_MIN;
	int64_t x1255 = 797339565806LL;
	int16_t x1256 = INT16_MIN;
	int32_t t174 = -41836;

    t174 = ((x1253+x1254)>>(x1255==x1256));

    if (t174 != 32639) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1285 = UINT8_MAX;
	volatile int64_t x1286 = -1LL;
	uint8_t x1287 = 15U;
	int64_t t175 = 434328257251190227LL;

    t175 = ((x1285+x1286)>>(x1287==x1288));

    if (t175 != 254LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x1289 = 78U;
	int16_t x1290 = INT16_MAX;
	int8_t x1292 = -31;

    t176 = ((x1289+x1290)>>(x1291==x1292));

    if (t176 != 32845) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1293 = 2U;
	uint64_t x1294 = 15039661LLU;
	static int32_t x1295 = -22291;
	int8_t x1296 = INT8_MAX;
	volatile uint64_t t177 = 1LLU;

    t177 = ((x1293+x1294)>>(x1295==x1296));

    if (t177 != 15039663LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x1297 = 9544U;
	uint8_t x1298 = 0U;
	int32_t x1299 = INT32_MAX;
	int32_t x1300 = -1;
	int32_t t178 = 918;

    t178 = ((x1297+x1298)>>(x1299==x1300));

    if (t178 != 9544) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1301 = INT64_MAX;
	volatile uint64_t t179 = 3LLU;

    t179 = ((x1301+x1302)>>(x1303==x1304));

    if (t179 != 9223372036854865007LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1310 = -1;
	int16_t x1311 = 210;
	volatile uint64_t t180 = 1202239LLU;

    t180 = ((x1309+x1310)>>(x1311==x1312));

    if (t180 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x1313 = 1U;
	int16_t x1314 = -1;
	volatile int32_t t181 = 13324;

    t181 = ((x1313+x1314)>>(x1315==x1316));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1317 = INT16_MIN;
	volatile int8_t x1320 = -1;

    t182 = ((x1317+x1318)>>(x1319==x1320));

    if (t182 != 123267LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x1337 = -1;
	static int8_t x1338 = INT8_MAX;
	volatile uint32_t x1339 = 369547693U;
	int32_t t183 = -506645;

    t183 = ((x1337+x1338)>>(x1339==x1340));

    if (t183 != 126) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1341 = -2LL;
	int64_t x1343 = INT64_MAX;
	uint64_t t184 = 5606LLU;

    t184 = ((x1341+x1342)>>(x1343==x1344));

    if (t184 != 67412443LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1345 = INT16_MIN;
	uint32_t x1346 = 79766930U;
	volatile int32_t x1348 = 195669;
	volatile uint32_t t185 = 39341U;

    t185 = ((x1345+x1346)>>(x1347==x1348));

    if (t185 != 79734162U) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x1350 = UINT64_MAX;

    t186 = ((x1349+x1350)>>(x1351==x1352));

    if (t186 != 4294967294LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1353 = INT32_MIN;
	volatile uint32_t x1354 = 13U;
	int8_t x1355 = INT8_MIN;
	int32_t x1356 = -185135;
	uint32_t t187 = 47U;

    t187 = ((x1353+x1354)>>(x1355==x1356));

    if (t187 != 2147483661U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x1357 = 31U;
	uint32_t x1358 = 0U;
	int8_t x1359 = INT8_MIN;
	uint64_t x1360 = UINT64_MAX;
	uint32_t t188 = 116884U;

    t188 = ((x1357+x1358)>>(x1359==x1360));

    if (t188 != 31U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1361 = -1;
	uint64_t x1362 = 64LLU;
	uint32_t x1363 = 1008U;
	int16_t x1364 = INT16_MAX;
	uint64_t t189 = 2786210715LLU;

    t189 = ((x1361+x1362)>>(x1363==x1364));

    if (t189 != 63LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1365 = -732;
	uint32_t x1366 = 0U;
	volatile int32_t x1367 = INT32_MIN;
	volatile uint32_t t190 = 51U;

    t190 = ((x1365+x1366)>>(x1367==x1368));

    if (t190 != 4294966564U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1373 = INT64_MIN;
	uint64_t x1374 = 16760035534LLU;
	uint16_t x1375 = UINT16_MAX;
	static int16_t x1376 = INT16_MAX;
	uint64_t t191 = 26820639LLU;

    t191 = ((x1373+x1374)>>(x1375==x1376));

    if (t191 != 9223372053614811342LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1377 = UINT8_MAX;
	uint16_t x1379 = 12U;
	int64_t t192 = -231LL;

    t192 = ((x1377+x1378)>>(x1379==x1380));

    if (t192 != 287996LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1381 = -1;
	uint8_t x1383 = 1U;
	volatile int32_t x1384 = -44150;
	volatile uint32_t t193 = 84280U;

    t193 = ((x1381+x1382)>>(x1383==x1384));

    if (t193 != 18395023U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x1385 = UINT64_MAX;
	volatile uint16_t x1386 = UINT16_MAX;
	int32_t x1388 = INT32_MAX;
	static volatile uint64_t t194 = 516678478LLU;

    t194 = ((x1385+x1386)>>(x1387==x1388));

    if (t194 != 65534LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x1389 = UINT64_MAX;
	static uint64_t x1390 = UINT64_MAX;
	static int64_t x1391 = INT64_MIN;
	static int64_t x1392 = 18LL;
	volatile uint64_t t195 = 164854120LLU;

    t195 = ((x1389+x1390)>>(x1391==x1392));

    if (t195 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1397 = -1;
	static uint16_t x1398 = 20138U;
	uint8_t x1399 = 0U;
	int8_t x1400 = INT8_MIN;
	static int32_t t196 = -120;

    t196 = ((x1397+x1398)>>(x1399==x1400));

    if (t196 != 20137) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x1401 = INT8_MAX;
	uint16_t x1402 = UINT16_MAX;
	volatile int32_t x1403 = INT32_MAX;
	uint64_t x1404 = 255448LLU;
	static int32_t t197 = -861;

    t197 = ((x1401+x1402)>>(x1403==x1404));

    if (t197 != 65662) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1405 = 2141677190U;
	static volatile int64_t x1407 = -1LL;
	static volatile int8_t x1408 = INT8_MIN;
	uint32_t t198 = 13911U;

    t198 = ((x1405+x1406)>>(x1407==x1408));

    if (t198 != 2141677236U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1413 = -1;
	volatile uint32_t x1414 = 58U;
	int32_t x1415 = INT32_MIN;
	int32_t x1416 = INT32_MIN;
	uint32_t t199 = 479637U;

    t199 = ((x1413+x1414)>>(x1415==x1416));

    if (t199 != 28U) { NG(); } else { ; }
	
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

