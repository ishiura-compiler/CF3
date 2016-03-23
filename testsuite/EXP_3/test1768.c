
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

uint16_t x6 = 196U;
uint16_t x14 = UINT16_MAX;
volatile uint8_t x18 = UINT8_MAX;
uint64_t x26 = 17715481LLU;
uint64_t x40 = UINT64_MAX;
static volatile uint32_t x45 = UINT32_MAX;
static int8_t x47 = INT8_MAX;
uint8_t x52 = UINT8_MAX;
int16_t x60 = INT16_MAX;
static int8_t x64 = INT8_MAX;
int8_t x70 = 13;
uint32_t x72 = UINT32_MAX;
int8_t x73 = INT8_MIN;
volatile uint32_t x81 = 1340760889U;
static int8_t x82 = INT8_MIN;
volatile uint32_t t11 = 1U;
int64_t t13 = -16967760303LL;
uint64_t x123 = 22007105676LLU;
uint16_t x156 = 3242U;
static int16_t x159 = -1;
int64_t x163 = INT64_MIN;
volatile int64_t t22 = -41028970075872LL;
uint16_t x198 = 523U;
int64_t t26 = 559678021301980606LL;
int32_t t27 = 60256;
int32_t x275 = INT32_MIN;
int64_t x292 = INT64_MIN;
int8_t x306 = INT8_MIN;
int32_t x313 = INT32_MIN;
volatile int64_t x322 = 7804203789858896LL;
int16_t x323 = -1;
volatile int32_t x329 = -1;
int32_t x332 = INT32_MAX;
static int8_t x333 = INT8_MAX;
volatile uint8_t x350 = UINT8_MAX;
int16_t x374 = INT16_MIN;
volatile int16_t x377 = INT16_MIN;
volatile uint16_t x393 = 1U;
static uint32_t x394 = 47197U;
static int32_t x398 = 3573;
uint64_t x407 = 694806LLU;
static int16_t x411 = -1;
volatile int32_t t52 = 378336;
int8_t x426 = -2;
int32_t x428 = INT32_MAX;
int32_t x441 = 50697;
int32_t x446 = -1;
int16_t x479 = 1174;
int64_t x480 = 295967070324LL;
uint32_t t59 = 344926U;
int64_t x504 = INT64_MAX;
static uint32_t x519 = 15361771U;
static uint32_t x520 = UINT32_MAX;
int32_t t64 = -2;
volatile int8_t x534 = INT8_MIN;
static volatile uint64_t t65 = 42LLU;
int16_t x563 = INT16_MIN;
int32_t x569 = INT32_MAX;
int32_t x586 = INT32_MAX;
volatile uint16_t x588 = 485U;
static int16_t x609 = INT16_MAX;
int16_t x611 = INT16_MIN;
uint16_t x612 = UINT16_MAX;
static volatile uint8_t x613 = 120U;
uint64_t x614 = UINT64_MAX;
uint16_t x616 = 30U;
volatile int32_t x619 = -1;
int64_t x635 = INT64_MIN;
uint32_t t74 = 509U;
volatile int32_t t76 = 277263;
volatile int32_t x653 = -1;
volatile int8_t x654 = 52;
int64_t x691 = -48LL;
static volatile int32_t x703 = INT32_MIN;
volatile int32_t t80 = -389;
int64_t x766 = -236759149808853LL;
static volatile uint16_t x770 = UINT16_MAX;
int64_t x772 = 526362184762067780LL;
volatile int32_t x777 = -1;
uint32_t x785 = 2776U;
uint32_t t87 = 165U;
uint32_t x821 = UINT32_MAX;
int32_t x823 = INT32_MIN;
int64_t x831 = INT64_MIN;
int16_t x840 = -1;
volatile int64_t t93 = -11076LL;
int8_t x858 = INT8_MIN;
int16_t x879 = INT16_MIN;
uint32_t x915 = 4327327U;
static int8_t x916 = INT8_MIN;
uint64_t t98 = 1118LLU;
volatile int64_t t99 = -65LL;
int64_t x926 = INT64_MIN;
volatile int64_t x927 = INT64_MIN;
int16_t x928 = 3;
int32_t x931 = INT32_MIN;
uint32_t x934 = 231044U;
uint16_t x970 = 2U;
volatile int8_t x972 = -1;
uint16_t x978 = 3337U;
int16_t x990 = INT16_MAX;
uint16_t x992 = 785U;
static uint32_t t110 = 97507U;
int64_t x1007 = INT64_MIN;
int8_t x1008 = 18;
volatile int16_t x1017 = -4;
static int32_t x1020 = INT32_MIN;
volatile int32_t t114 = 27557280;
uint8_t x1033 = 2U;
int32_t x1043 = INT32_MIN;
int32_t x1044 = -1;
int32_t x1046 = INT32_MAX;
static int8_t x1048 = -1;
volatile int32_t t118 = -7;
int64_t x1054 = -1903145402891737LL;
volatile int16_t x1061 = INT16_MIN;
int8_t x1062 = INT8_MIN;
int16_t x1072 = -1;
volatile uint64_t x1075 = 18LLU;
int64_t x1078 = -1LL;
static int64_t x1091 = INT64_MIN;
volatile int16_t x1098 = INT16_MAX;
int16_t x1123 = INT16_MIN;
int32_t t130 = 0;
static int8_t x1137 = INT8_MAX;
uint64_t x1149 = 18LLU;
int64_t x1153 = 3855163906329638LL;
uint32_t x1156 = 79U;
static uint32_t t136 = 1728536U;
uint8_t x1168 = 47U;
uint32_t x1173 = 46941195U;
volatile uint32_t t138 = 456U;
volatile int32_t x1179 = INT32_MIN;
static int32_t x1198 = INT32_MIN;
volatile int64_t t141 = -7815224265646LL;
volatile int16_t x1205 = INT16_MAX;
int32_t x1208 = INT32_MAX;
volatile int8_t x1231 = -1;
int32_t t144 = -26741;
int32_t t146 = -47875;
volatile int16_t x1255 = 3107;
uint64_t x1256 = UINT64_MAX;
int16_t x1271 = INT16_MIN;
uint64_t t148 = 11LLU;
int64_t x1275 = INT64_MIN;
uint64_t x1281 = 342787421LLU;
volatile int8_t x1282 = -1;
int32_t x1284 = INT32_MIN;
int64_t x1297 = 5333285LL;
int16_t x1300 = 0;
int16_t x1357 = INT16_MIN;
int8_t x1359 = 0;
int32_t t153 = 58839761;
static int8_t x1381 = INT8_MAX;
volatile int16_t x1384 = -1;
int32_t x1389 = INT32_MAX;
int32_t t156 = 710724799;
static uint16_t x1399 = UINT16_MAX;
volatile uint64_t x1400 = 642991375609236LLU;
int32_t t157 = -12155;
int16_t x1403 = 0;
uint32_t x1427 = UINT32_MAX;
int8_t x1438 = 0;
volatile int32_t t161 = -1;
int64_t x1464 = -1LL;
volatile uint32_t x1478 = 225U;
static uint8_t x1479 = UINT8_MAX;
volatile uint16_t x1499 = UINT16_MAX;
int16_t x1501 = INT16_MIN;
int64_t t169 = 1LL;
int32_t x1576 = 1;
volatile int32_t t177 = 25;
volatile uint32_t t178 = 2008888376U;
int8_t x1617 = 5;
static int8_t x1622 = INT8_MIN;
int8_t x1638 = INT8_MAX;
int32_t x1639 = -1;
volatile int32_t t183 = -1;
int8_t x1649 = 5;
static uint16_t x1652 = 0U;
volatile uint64_t x1654 = 807153330LLU;
static volatile int32_t t186 = -459172735;
int16_t x1668 = -1;
uint64_t t187 = 3291840540835LLU;
volatile int16_t x1671 = INT16_MIN;
int8_t x1674 = INT8_MIN;
volatile int64_t t189 = -225709645093900068LL;
int64_t x1699 = INT64_MIN;
int64_t t192 = -1524986032753520813LL;
uint32_t x1720 = 60301U;
int32_t t194 = 244;
int16_t x1725 = INT16_MIN;
int32_t x1735 = -1245;
uint16_t x1741 = 819U;
volatile int32_t t199 = 120008;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	int16_t x7 = INT16_MIN;
	uint8_t x8 = UINT8_MAX;
	static int32_t t0 = 7428642;

    t0 = ((x5+x6)/(x7<=x8));

    if (t0 != -32572) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x13 = INT32_MIN;
	int64_t x15 = -4510299242514099992LL;
	volatile int16_t x16 = INT16_MAX;
	int32_t t1 = 666;

    t1 = ((x13+x14)/(x15<=x16));

    if (t1 != -2147418113) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x17 = -1;
	int32_t x19 = -17078;
	uint8_t x20 = 0U;
	volatile int32_t t2 = -220430353;

    t2 = ((x17+x18)/(x19<=x20));

    if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x25 = INT16_MAX;
	static int64_t x27 = -1LL;
	volatile int8_t x28 = -1;
	uint64_t t3 = 7710433059LLU;

    t3 = ((x25+x26)/(x27<=x28));

    if (t3 != 17748248LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x37 = -1;
	volatile uint64_t x38 = 214164368356LLU;
	int16_t x39 = 976;
	volatile uint64_t t4 = 181879533LLU;

    t4 = ((x37+x38)/(x39<=x40));

    if (t4 != 214164368355LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x46 = -1LL;
	volatile int8_t x48 = INT8_MAX;
	volatile int64_t t5 = -59628559430447390LL;

    t5 = ((x45+x46)/(x47<=x48));

    if (t5 != 4294967294LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x49 = INT8_MIN;
	int8_t x50 = 25;
	volatile int16_t x51 = -1;
	int32_t t6 = -2746;

    t6 = ((x49+x50)/(x51<=x52));

    if (t6 != -103) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x57 = INT8_MIN;
	uint16_t x58 = 2692U;
	static int8_t x59 = INT8_MAX;
	volatile int32_t t7 = -1926203;

    t7 = ((x57+x58)/(x59<=x60));

    if (t7 != 2564) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x61 = 1000U;
	volatile uint16_t x62 = UINT16_MAX;
	static uint16_t x63 = 58U;
	volatile int32_t t8 = -951;

    t8 = ((x61+x62)/(x63<=x64));

    if (t8 != 66535) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x69 = INT16_MIN;
	static volatile int32_t x71 = INT32_MAX;
	volatile int32_t t9 = -6;

    t9 = ((x69+x70)/(x71<=x72));

    if (t9 != -32755) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x74 = 36260LL;
	uint16_t x75 = UINT16_MAX;
	volatile uint64_t x76 = UINT64_MAX;
	int64_t t10 = 101163202697497LL;

    t10 = ((x73+x74)/(x75<=x76));

    if (t10 != 36132LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x83 = INT32_MIN;
	int8_t x84 = 8;

    t11 = ((x81+x82)/(x83<=x84));

    if (t11 != 1340760761U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x97 = 3178U;
	int32_t x98 = -3648244;
	uint8_t x99 = 88U;
	uint16_t x100 = 1296U;
	uint32_t t12 = 2109712824U;

    t12 = ((x97+x98)/(x99<=x100));

    if (t12 != 4291322230U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x101 = INT64_MIN;
	static uint32_t x102 = UINT32_MAX;
	volatile int64_t x103 = -46825LL;
	static int32_t x104 = 66106529;

    t13 = ((x101+x102)/(x103<=x104));

    if (t13 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x105 = UINT64_MAX;
	static uint16_t x106 = 7838U;
	int8_t x107 = INT8_MIN;
	volatile uint8_t x108 = 39U;
	uint64_t t14 = 942748060604LLU;

    t14 = ((x105+x106)/(x107<=x108));

    if (t14 != 7837LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x121 = 7292300U;
	int32_t x122 = -628693585;
	int16_t x124 = INT16_MIN;
	volatile uint32_t t15 = 392U;

    t15 = ((x121+x122)/(x123<=x124));

    if (t15 != 3673566011U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x125 = -1;
	static uint8_t x126 = 0U;
	int8_t x127 = INT8_MAX;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t16 = -128279;

    t16 = ((x125+x126)/(x127<=x128));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x133 = INT16_MIN;
	uint64_t x134 = 2109175941183357LLU;
	uint32_t x135 = 22U;
	volatile uint16_t x136 = UINT16_MAX;
	uint64_t t17 = 29321316185LLU;

    t17 = ((x133+x134)/(x135<=x136));

    if (t17 != 2109175941150589LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x153 = INT32_MIN;
	uint8_t x154 = UINT8_MAX;
	volatile int16_t x155 = INT16_MIN;
	int32_t t18 = 15106;

    t18 = ((x153+x154)/(x155<=x156));

    if (t18 != -2147483393) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x157 = -1LL;
	static int8_t x158 = -1;
	static int8_t x160 = INT8_MAX;
	int64_t t19 = 50767916214LL;

    t19 = ((x157+x158)/(x159<=x160));

    if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x161 = -1LL;
	volatile uint16_t x162 = UINT16_MAX;
	uint32_t x164 = UINT32_MAX;
	static volatile int64_t t20 = 184897600937638296LL;

    t20 = ((x161+x162)/(x163<=x164));

    if (t20 != 65534LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MAX;
	int8_t x167 = -16;
	static int64_t x168 = 728140LL;
	static int64_t t21 = 215187LL;

    t21 = ((x165+x166)/(x167<=x168));

    if (t21 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x169 = -1LL;
	int32_t x170 = INT32_MIN;
	volatile int16_t x171 = -1;
	int32_t x172 = INT32_MAX;

    t22 = ((x169+x170)/(x171<=x172));

    if (t22 != -2147483649LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x197 = INT8_MIN;
	uint32_t x199 = 659194080U;
	int8_t x200 = INT8_MIN;
	volatile int32_t t23 = 76;

    t23 = ((x197+x198)/(x199<=x200));

    if (t23 != 395) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint8_t x217 = UINT8_MAX;
	int8_t x218 = -2;
	volatile uint64_t x219 = 20LLU;
	int32_t x220 = 322240;
	int32_t t24 = 336;

    t24 = ((x217+x218)/(x219<=x220));

    if (t24 != 253) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x225 = INT32_MAX;
	int8_t x226 = -25;
	uint16_t x227 = UINT16_MAX;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t25 = 7209102;

    t25 = ((x225+x226)/(x227<=x228));

    if (t25 != 2147483622) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x249 = 5169366462091330LL;
	static int64_t x250 = -1087559766061LL;
	int64_t x251 = 2LL;
	uint16_t x252 = 15122U;

    t26 = ((x249+x250)/(x251<=x252));

    if (t26 != 5168278902325269LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x257 = -1;
	int32_t x258 = -2409320;
	int16_t x259 = INT16_MIN;
	int16_t x260 = -644;

    t27 = ((x257+x258)/(x259<=x260));

    if (t27 != -2409321) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x265 = -414834181379238208LL;
	static int8_t x266 = INT8_MIN;
	int8_t x267 = -1;
	int16_t x268 = -1;
	static int64_t t28 = 421976722109LL;

    t28 = ((x265+x266)/(x267<=x268));

    if (t28 != -414834181379238336LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x273 = 0;
	int8_t x274 = -5;
	volatile int32_t x276 = 1012;
	int32_t t29 = -23846102;

    t29 = ((x273+x274)/(x275<=x276));

    if (t29 != -5) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x277 = -32232087;
	int32_t x278 = -1;
	int32_t x279 = 9759;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t30 = -55902;

    t30 = ((x277+x278)/(x279<=x280));

    if (t30 != -32232088) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x289 = 6119U;
	int8_t x290 = 0;
	uint64_t x291 = 74277474257914LLU;
	volatile int32_t t31 = 0;

    t31 = ((x289+x290)/(x291<=x292));

    if (t31 != 6119) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x293 = -1LL;
	volatile uint64_t x294 = 1983762243641098604LLU;
	volatile int16_t x295 = INT16_MIN;
	int8_t x296 = 59;
	volatile uint64_t t32 = 139168264863153174LLU;

    t32 = ((x293+x294)/(x295<=x296));

    if (t32 != 1983762243641098603LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x305 = INT8_MAX;
	uint16_t x307 = 47U;
	int32_t x308 = 98288162;
	static int32_t t33 = 170;

    t33 = ((x305+x306)/(x307<=x308));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x309 = -1;
	volatile int8_t x310 = INT8_MIN;
	volatile int64_t x311 = INT64_MIN;
	static volatile int32_t x312 = INT32_MIN;
	int32_t t34 = -2;

    t34 = ((x309+x310)/(x311<=x312));

    if (t34 != -129) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x314 = -1LL;
	int8_t x315 = -16;
	static int32_t x316 = -1;
	int64_t t35 = -15910153447194LL;

    t35 = ((x313+x314)/(x315<=x316));

    if (t35 != -2147483649LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x321 = 41773LLU;
	volatile uint32_t x324 = UINT32_MAX;
	volatile uint64_t t36 = 3802318LLU;

    t36 = ((x321+x322)/(x323<=x324));

    if (t36 != 7804203789900669LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x325 = INT64_MIN;
	uint32_t x326 = 2U;
	int32_t x327 = -51;
	static volatile uint32_t x328 = UINT32_MAX;
	int64_t t37 = -827177341LL;

    t37 = ((x325+x326)/(x327<=x328));

    if (t37 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x330 = 0U;
	volatile int32_t x331 = INT32_MIN;
	int32_t t38 = 24;

    t38 = ((x329+x330)/(x331<=x332));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x334 = INT8_MIN;
	int64_t x335 = INT64_MIN;
	int16_t x336 = INT16_MIN;
	static int32_t t39 = -6315191;

    t39 = ((x333+x334)/(x335<=x336));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MIN;
	uint8_t x348 = UINT8_MAX;
	static volatile int32_t t40 = 173129;

    t40 = ((x345+x346)/(x347<=x348));

    if (t40 != -32896) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x349 = 0;
	static uint16_t x351 = 501U;
	int64_t x352 = INT64_MAX;
	static volatile int32_t t41 = 514822;

    t41 = ((x349+x350)/(x351<=x352));

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x353 = INT8_MIN;
	int32_t x354 = -25;
	static uint32_t x355 = 111U;
	volatile int64_t x356 = INT64_MAX;
	volatile int32_t t42 = -387;

    t42 = ((x353+x354)/(x355<=x356));

    if (t42 != -153) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x361 = 9465U;
	static uint32_t x362 = 1421528644U;
	static int16_t x363 = 2;
	uint64_t x364 = UINT64_MAX;
	static volatile uint32_t t43 = 393671352U;

    t43 = ((x361+x362)/(x363<=x364));

    if (t43 != 1421538109U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x365 = 4U;
	uint8_t x366 = UINT8_MAX;
	static volatile uint32_t x367 = 2U;
	uint8_t x368 = 10U;
	volatile int32_t t44 = 521681;

    t44 = ((x365+x366)/(x367<=x368));

    if (t44 != 259) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x373 = -1810024812012924LL;
	int16_t x375 = -1984;
	int8_t x376 = INT8_MIN;
	volatile int64_t t45 = -1309746LL;

    t45 = ((x373+x374)/(x375<=x376));

    if (t45 != -1810024812045692LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x378 = 2891LL;
	int64_t x379 = 3LL;
	volatile uint16_t x380 = UINT16_MAX;
	volatile int64_t t46 = 906616LL;

    t46 = ((x377+x378)/(x379<=x380));

    if (t46 != -29877LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x381 = -1;
	static volatile int8_t x382 = INT8_MIN;
	static volatile int64_t x383 = -1LL;
	int32_t x384 = 18;
	static volatile int32_t t47 = -10;

    t47 = ((x381+x382)/(x383<=x384));

    if (t47 != -129) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x395 = -1LL;
	volatile int16_t x396 = INT16_MAX;
	uint32_t t48 = 117U;

    t48 = ((x393+x394)/(x395<=x396));

    if (t48 != 47198U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x397 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	volatile int16_t x400 = INT16_MAX;
	volatile int32_t t49 = -42768447;

    t49 = ((x397+x398)/(x399<=x400));

    if (t49 != -2147480075) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x405 = -1;
	volatile int16_t x406 = -1;
	int64_t x408 = INT64_MAX;
	int32_t t50 = 31505892;

    t50 = ((x405+x406)/(x407<=x408));

    if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x409 = UINT16_MAX;
	volatile uint64_t x410 = 304724LLU;
	int64_t x412 = 901615467914LL;
	uint64_t t51 = 67142509779266031LLU;

    t51 = ((x409+x410)/(x411<=x412));

    if (t51 != 370259LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x421 = -1;
	volatile int32_t x422 = 1473205;
	int64_t x423 = -1LL;
	uint64_t x424 = UINT64_MAX;

    t52 = ((x421+x422)/(x423<=x424));

    if (t52 != 1473204) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x425 = UINT64_MAX;
	volatile int8_t x427 = -1;
	uint64_t t53 = 633192855918985LLU;

    t53 = ((x425+x426)/(x427<=x428));

    if (t53 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x437 = -1;
	static int64_t x438 = -1LL;
	int16_t x439 = -1;
	static int16_t x440 = -1;
	int64_t t54 = 4202162720173LL;

    t54 = ((x437+x438)/(x439<=x440));

    if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x442 = -11274646LL;
	int64_t x443 = INT64_MIN;
	int8_t x444 = -1;
	volatile int64_t t55 = 1207972LL;

    t55 = ((x441+x442)/(x443<=x444));

    if (t55 != -11223949LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x445 = 21U;
	int32_t x447 = INT32_MIN;
	static int32_t x448 = 72;
	int32_t t56 = -22714931;

    t56 = ((x445+x446)/(x447<=x448));

    if (t56 != 20) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x453 = -284LL;
	uint32_t x454 = 1U;
	int8_t x455 = INT8_MAX;
	uint32_t x456 = UINT32_MAX;
	int64_t t57 = -22275965050143LL;

    t57 = ((x453+x454)/(x455<=x456));

    if (t57 != -283LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x457 = INT8_MAX;
	int8_t x458 = -1;
	volatile int16_t x459 = 1;
	volatile uint32_t x460 = UINT32_MAX;
	static volatile int32_t t58 = -2054078;

    t58 = ((x457+x458)/(x459<=x460));

    if (t58 != 126) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x477 = 5U;
	uint32_t x478 = UINT32_MAX;

    t59 = ((x477+x478)/(x479<=x480));

    if (t59 != 4U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x485 = 17097984416325066LLU;
	int32_t x486 = -4916;
	uint64_t x487 = 4458176183LLU;
	int64_t x488 = INT64_MAX;
	volatile uint64_t t60 = 1546385139664776LLU;

    t60 = ((x485+x486)/(x487<=x488));

    if (t60 != 17097984416320150LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x489 = -1LL;
	volatile int16_t x490 = 82;
	uint32_t x491 = 450142660U;
	int8_t x492 = -1;
	int64_t t61 = -54182702LL;

    t61 = ((x489+x490)/(x491<=x492));

    if (t61 != 81LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x501 = UINT64_MAX;
	static int64_t x502 = -1LL;
	volatile int64_t x503 = -187186205361LL;
	static uint64_t t62 = 1638581414325667LLU;

    t62 = ((x501+x502)/(x503<=x504));

    if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x505 = -332135504137184786LL;
	static int16_t x506 = 1;
	int16_t x507 = INT16_MAX;
	static uint64_t x508 = UINT64_MAX;
	volatile int64_t t63 = -29741896642LL;

    t63 = ((x505+x506)/(x507<=x508));

    if (t63 != -332135504137184785LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x517 = 12U;
	int16_t x518 = INT16_MIN;

    t64 = ((x517+x518)/(x519<=x520));

    if (t64 != -32756) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x533 = UINT64_MAX;
	int8_t x535 = -1;
	uint16_t x536 = UINT16_MAX;

    t65 = ((x533+x534)/(x535<=x536));

    if (t65 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x561 = INT16_MIN;
	int8_t x562 = INT8_MIN;
	uint8_t x564 = UINT8_MAX;
	volatile int32_t t66 = -1;

    t66 = ((x561+x562)/(x563<=x564));

    if (t66 != -32896) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x570 = -47;
	int8_t x571 = 12;
	uint8_t x572 = UINT8_MAX;
	int32_t t67 = -2623315;

    t67 = ((x569+x570)/(x571<=x572));

    if (t67 != 2147483600) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x585 = INT8_MIN;
	int8_t x587 = INT8_MIN;
	volatile int32_t t68 = -1;

    t68 = ((x585+x586)/(x587<=x588));

    if (t68 != 2147483519) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x589 = -375282882483LL;
	int32_t x590 = INT32_MIN;
	int16_t x591 = -1;
	volatile uint16_t x592 = 1844U;
	int64_t t69 = 10LL;

    t69 = ((x589+x590)/(x591<=x592));

    if (t69 != -377430366131LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x610 = INT32_MIN;
	int32_t t70 = -2778597;

    t70 = ((x609+x610)/(x611<=x612));

    if (t70 != -2147450881) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x615 = -1;
	uint64_t t71 = 4999881616LLU;

    t71 = ((x613+x614)/(x615<=x616));

    if (t71 != 119LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x617 = UINT64_MAX;
	int16_t x618 = 3;
	static int64_t x620 = INT64_MAX;
	volatile uint64_t t72 = 13LLU;

    t72 = ((x617+x618)/(x619<=x620));

    if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x629 = 455826504;
	int16_t x630 = 1295;
	static int32_t x631 = -1;
	uint16_t x632 = UINT16_MAX;
	static int32_t t73 = 245074610;

    t73 = ((x629+x630)/(x631<=x632));

    if (t73 != 455827799) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x633 = UINT32_MAX;
	int32_t x634 = -1;
	uint16_t x636 = 1509U;

    t74 = ((x633+x634)/(x635<=x636));

    if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x641 = UINT32_MAX;
	int32_t x642 = -108644971;
	uint64_t x643 = 321751LLU;
	volatile int8_t x644 = -7;
	uint32_t t75 = 2986U;

    t75 = ((x641+x642)/(x643<=x644));

    if (t75 != 4186322324U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x645 = -1;
	static uint16_t x646 = 18373U;
	static volatile uint16_t x647 = 14U;
	uint16_t x648 = 1229U;

    t76 = ((x645+x646)/(x647<=x648));

    if (t76 != 18372) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint8_t x655 = 26U;
	uint32_t x656 = UINT32_MAX;
	static int32_t t77 = 145881;

    t77 = ((x653+x654)/(x655<=x656));

    if (t77 != 51) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x677 = -3137LL;
	uint16_t x678 = UINT16_MAX;
	int64_t x679 = 50230LL;
	uint32_t x680 = UINT32_MAX;
	int64_t t78 = -64166912269888LL;

    t78 = ((x677+x678)/(x679<=x680));

    if (t78 != 62398LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x689 = UINT64_MAX;
	uint32_t x690 = 106436316U;
	uint8_t x692 = UINT8_MAX;
	static uint64_t t79 = 3436011693532783LLU;

    t79 = ((x689+x690)/(x691<=x692));

    if (t79 != 106436315LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x701 = INT8_MIN;
	static int32_t x702 = -1;
	uint16_t x704 = UINT16_MAX;

    t80 = ((x701+x702)/(x703<=x704));

    if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x709 = -1LL;
	uint16_t x710 = 308U;
	int16_t x711 = INT16_MIN;
	int16_t x712 = INT16_MIN;
	volatile int64_t t81 = 166855837202LL;

    t81 = ((x709+x710)/(x711<=x712));

    if (t81 != 307LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x737 = 286962LLU;
	static uint32_t x738 = UINT32_MAX;
	static int16_t x739 = -1;
	int16_t x740 = INT16_MAX;
	volatile uint64_t t82 = 152709628233LLU;

    t82 = ((x737+x738)/(x739<=x740));

    if (t82 != 4295254257LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x757 = -93145927772LL;
	static uint16_t x758 = 1843U;
	volatile int16_t x759 = INT16_MIN;
	static int8_t x760 = 26;
	volatile int64_t t83 = 0LL;

    t83 = ((x757+x758)/(x759<=x760));

    if (t83 != -93145925929LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x765 = -1;
	volatile int32_t x767 = INT32_MIN;
	int64_t x768 = 24045716497LL;
	volatile int64_t t84 = 70LL;

    t84 = ((x765+x766)/(x767<=x768));

    if (t84 != -236759149808854LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x769 = INT8_MIN;
	int32_t x771 = -1;
	volatile int32_t t85 = -207746342;

    t85 = ((x769+x770)/(x771<=x772));

    if (t85 != 65407) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x778 = INT32_MAX;
	int16_t x779 = INT16_MIN;
	int64_t x780 = INT64_MAX;
	volatile int32_t t86 = 859966458;

    t86 = ((x777+x778)/(x779<=x780));

    if (t86 != 2147483646) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x786 = 81U;
	static int32_t x787 = 64;
	uint32_t x788 = 321867U;

    t87 = ((x785+x786)/(x787<=x788));

    if (t87 != 2857U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x809 = INT32_MIN;
	uint16_t x810 = 12488U;
	uint32_t x811 = 397U;
	int32_t x812 = INT32_MIN;
	int32_t t88 = 1779;

    t88 = ((x809+x810)/(x811<=x812));

    if (t88 != -2147471160) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x822 = 11U;
	static int8_t x824 = INT8_MIN;
	volatile uint32_t t89 = 179545U;

    t89 = ((x821+x822)/(x823<=x824));

    if (t89 != 10U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x829 = 9888059020LLU;
	uint8_t x830 = 0U;
	volatile int32_t x832 = -1;
	uint64_t t90 = 56266342727399584LLU;

    t90 = ((x829+x830)/(x831<=x832));

    if (t90 != 9888059020LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x837 = INT16_MAX;
	int16_t x838 = INT16_MAX;
	int32_t x839 = -41796512;
	int32_t t91 = 3;

    t91 = ((x837+x838)/(x839<=x840));

    if (t91 != 65534) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x841 = INT32_MAX;
	static uint64_t x842 = 1424LLU;
	int64_t x843 = INT64_MIN;
	int16_t x844 = INT16_MIN;
	static uint64_t t92 = 877LLU;

    t92 = ((x841+x842)/(x843<=x844));

    if (t92 != 2147485071LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x845 = INT64_MAX;
	int16_t x846 = INT16_MIN;
	volatile int32_t x847 = INT32_MIN;
	uint64_t x848 = UINT64_MAX;

    t93 = ((x845+x846)/(x847<=x848));

    if (t93 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x857 = UINT8_MAX;
	int32_t x859 = -1;
	static uint16_t x860 = UINT16_MAX;
	volatile int32_t t94 = -88051;

    t94 = ((x857+x858)/(x859<=x860));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x865 = -194905009;
	int16_t x866 = 457;
	volatile int64_t x867 = INT64_MIN;
	int8_t x868 = INT8_MIN;
	int32_t t95 = -1397;

    t95 = ((x865+x866)/(x867<=x868));

    if (t95 != -194904552) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x877 = UINT32_MAX;
	volatile int64_t x878 = 2997204LL;
	int8_t x880 = 0;
	volatile int64_t t96 = -407279LL;

    t96 = ((x877+x878)/(x879<=x880));

    if (t96 != 4297964499LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x885 = INT16_MIN;
	int8_t x886 = INT8_MAX;
	static int8_t x887 = -13;
	static int32_t x888 = INT32_MAX;
	static volatile int32_t t97 = 0;

    t97 = ((x885+x886)/(x887<=x888));

    if (t97 != -32641) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x913 = 1LLU;
	uint64_t x914 = UINT64_MAX;

    t98 = ((x913+x914)/(x915<=x916));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x917 = -3958046569LL;
	int64_t x918 = -1LL;
	volatile uint16_t x919 = 14U;
	int64_t x920 = 167972832262LL;

    t99 = ((x917+x918)/(x919<=x920));

    if (t99 != -3958046570LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x925 = 62LLU;
	volatile uint64_t t100 = 15893160111915626LLU;

    t100 = ((x925+x926)/(x927<=x928));

    if (t100 != 9223372036854775870LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x929 = -1;
	volatile int8_t x930 = INT8_MAX;
	int64_t x932 = INT64_MAX;
	volatile int32_t t101 = 724;

    t101 = ((x929+x930)/(x931<=x932));

    if (t101 != 126) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x933 = -917386LL;
	uint8_t x935 = 4U;
	volatile int16_t x936 = 1370;
	volatile int64_t t102 = 54178LL;

    t102 = ((x933+x934)/(x935<=x936));

    if (t102 != -686342LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x937 = -11;
	int8_t x938 = INT8_MIN;
	volatile int64_t x939 = -4552154613LL;
	int16_t x940 = -6;
	static volatile int32_t t103 = 145814;

    t103 = ((x937+x938)/(x939<=x940));

    if (t103 != -139) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x941 = -1LL;
	int8_t x942 = INT8_MIN;
	int32_t x943 = INT32_MIN;
	volatile int8_t x944 = INT8_MAX;
	volatile int64_t t104 = 0LL;

    t104 = ((x941+x942)/(x943<=x944));

    if (t104 != -129LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x945 = INT32_MIN;
	volatile int16_t x946 = INT16_MAX;
	uint32_t x947 = 59U;
	int16_t x948 = -4757;
	static int32_t t105 = 443;

    t105 = ((x945+x946)/(x947<=x948));

    if (t105 != -2147450881) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x961 = 2;
	int16_t x962 = INT16_MAX;
	static volatile uint16_t x963 = UINT16_MAX;
	int64_t x964 = INT64_MAX;
	static int32_t t106 = -137644440;

    t106 = ((x961+x962)/(x963<=x964));

    if (t106 != 32769) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x969 = INT16_MIN;
	static uint64_t x971 = 434072450519197LLU;
	int32_t t107 = -4;

    t107 = ((x969+x970)/(x971<=x972));

    if (t107 != -32766) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x973 = 341LLU;
	int8_t x974 = INT8_MIN;
	int32_t x975 = INT32_MIN;
	static uint16_t x976 = UINT16_MAX;
	volatile uint64_t t108 = 172784642827LLU;

    t108 = ((x973+x974)/(x975<=x976));

    if (t108 != 213LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x977 = -5470;
	int32_t x979 = INT32_MIN;
	volatile uint16_t x980 = UINT16_MAX;
	int32_t t109 = 3889;

    t109 = ((x977+x978)/(x979<=x980));

    if (t109 != -2133) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x989 = 0U;
	int16_t x991 = INT16_MIN;

    t110 = ((x989+x990)/(x991<=x992));

    if (t110 != 32767U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x1005 = 88;
	static uint32_t x1006 = UINT32_MAX;
	uint32_t t111 = 3866883U;

    t111 = ((x1005+x1006)/(x1007<=x1008));

    if (t111 != 87U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x1009 = INT64_MIN;
	uint8_t x1010 = UINT8_MAX;
	uint8_t x1011 = 125U;
	static int32_t x1012 = INT32_MAX;
	volatile int64_t t112 = -236228LL;

    t112 = ((x1009+x1010)/(x1011<=x1012));

    if (t112 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x1018 = 52168433;
	int32_t x1019 = INT32_MIN;
	int32_t t113 = -270745;

    t113 = ((x1017+x1018)/(x1019<=x1020));

    if (t113 != 52168429) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x1021 = 17181U;
	static int8_t x1022 = -3;
	int8_t x1023 = -1;
	int16_t x1024 = 3;

    t114 = ((x1021+x1022)/(x1023<=x1024));

    if (t114 != 17178) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x1025 = 121U;
	volatile int64_t x1026 = INT64_MIN;
	static int64_t x1027 = INT64_MIN;
	int16_t x1028 = INT16_MAX;
	static int64_t t115 = -284401LL;

    t115 = ((x1025+x1026)/(x1027<=x1028));

    if (t115 != -9223372036854775687LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x1034 = 23LLU;
	static int32_t x1035 = -11069837;
	static int16_t x1036 = INT16_MAX;
	uint64_t t116 = 252LLU;

    t116 = ((x1033+x1034)/(x1035<=x1036));

    if (t116 != 25LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x1041 = 8;
	int8_t x1042 = 34;
	int32_t t117 = -241;

    t117 = ((x1041+x1042)/(x1043<=x1044));

    if (t117 != 42) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x1045 = INT8_MIN;
	uint32_t x1047 = 12693803U;

    t118 = ((x1045+x1046)/(x1047<=x1048));

    if (t118 != 2147483519) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1053 = -2624077628381662465LL;
	int8_t x1055 = 1;
	int16_t x1056 = INT16_MAX;
	volatile int64_t t119 = -10505LL;

    t119 = ((x1053+x1054)/(x1055<=x1056));

    if (t119 != -2625980773784554202LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x1057 = -1;
	int32_t x1058 = -1;
	uint16_t x1059 = 198U;
	uint32_t x1060 = UINT32_MAX;
	volatile int32_t t120 = -24406472;

    t120 = ((x1057+x1058)/(x1059<=x1060));

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x1063 = -1;
	uint16_t x1064 = UINT16_MAX;
	volatile int32_t t121 = 12582;

    t121 = ((x1061+x1062)/(x1063<=x1064));

    if (t121 != -32896) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x1065 = INT32_MIN;
	int16_t x1066 = INT16_MAX;
	uint8_t x1067 = 53U;
	uint32_t x1068 = 2153U;
	int32_t t122 = 247305;

    t122 = ((x1065+x1066)/(x1067<=x1068));

    if (t122 != -2147450881) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x1069 = UINT8_MAX;
	int16_t x1070 = 11;
	int64_t x1071 = INT64_MIN;
	volatile int32_t t123 = 43851;

    t123 = ((x1069+x1070)/(x1071<=x1072));

    if (t123 != 266) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x1073 = -9;
	int8_t x1074 = 9;
	uint16_t x1076 = 185U;
	volatile int32_t t124 = 1;

    t124 = ((x1073+x1074)/(x1075<=x1076));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x1077 = UINT8_MAX;
	uint64_t x1079 = 4341925LLU;
	volatile int8_t x1080 = INT8_MIN;
	volatile int64_t t125 = -15LL;

    t125 = ((x1077+x1078)/(x1079<=x1080));

    if (t125 != 254LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x1089 = -1;
	int64_t x1090 = -22924876LL;
	int8_t x1092 = INT8_MIN;
	static volatile int64_t t126 = -90571393996LL;

    t126 = ((x1089+x1090)/(x1091<=x1092));

    if (t126 != -22924877LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x1097 = 2094313LL;
	uint8_t x1099 = 9U;
	int16_t x1100 = 4919;
	int64_t t127 = -78661055677695803LL;

    t127 = ((x1097+x1098)/(x1099<=x1100));

    if (t127 != 2127080LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x1101 = 0U;
	uint64_t x1102 = UINT64_MAX;
	int32_t x1103 = -1;
	int64_t x1104 = 183060090276858120LL;
	static uint64_t t128 = UINT64_MAX;

    t128 = ((x1101+x1102)/(x1103<=x1104));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x1113 = -1LL;
	uint64_t x1114 = 1983158870672327LLU;
	uint16_t x1115 = 618U;
	uint64_t x1116 = 56174LLU;
	static volatile uint64_t t129 = 632851284890LLU;

    t129 = ((x1113+x1114)/(x1115<=x1116));

    if (t129 != 1983158870672326LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1121 = INT8_MAX;
	int32_t x1122 = -1;
	int8_t x1124 = INT8_MIN;

    t130 = ((x1121+x1122)/(x1123<=x1124));

    if (t130 != 126) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x1125 = INT64_MIN;
	int32_t x1126 = 26;
	int16_t x1127 = 0;
	uint8_t x1128 = 7U;
	static volatile int64_t t131 = -299768LL;

    t131 = ((x1125+x1126)/(x1127<=x1128));

    if (t131 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x1138 = -16977971770616LL;
	int8_t x1139 = INT8_MIN;
	int8_t x1140 = INT8_MAX;
	int64_t t132 = 56413859061LL;

    t132 = ((x1137+x1138)/(x1139<=x1140));

    if (t132 != -16977971770489LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x1145 = -1LL;
	uint64_t x1146 = UINT64_MAX;
	int64_t x1147 = -1LL;
	uint16_t x1148 = 18856U;
	uint64_t t133 = 127743712532541LLU;

    t133 = ((x1145+x1146)/(x1147<=x1148));

    if (t133 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1150 = 7U;
	uint8_t x1151 = UINT8_MAX;
	int64_t x1152 = INT64_MAX;
	uint64_t t134 = 5386LLU;

    t134 = ((x1149+x1150)/(x1151<=x1152));

    if (t134 != 25LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x1154 = 7U;
	int64_t x1155 = -255105055082LL;
	static int64_t t135 = -80449LL;

    t135 = ((x1153+x1154)/(x1155<=x1156));

    if (t135 != 3855163906329645LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint32_t x1161 = 3812U;
	static uint8_t x1162 = 60U;
	int32_t x1163 = INT32_MIN;
	volatile int32_t x1164 = -11103712;

    t136 = ((x1161+x1162)/(x1163<=x1164));

    if (t136 != 3872U) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x1165 = -28;
	int32_t x1166 = INT32_MAX;
	volatile int8_t x1167 = INT8_MIN;
	static int32_t t137 = 126;

    t137 = ((x1165+x1166)/(x1167<=x1168));

    if (t137 != 2147483619) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x1174 = INT8_MIN;
	static uint32_t x1175 = UINT32_MAX;
	volatile uint64_t x1176 = UINT64_MAX;

    t138 = ((x1173+x1174)/(x1175<=x1176));

    if (t138 != 46941067U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1177 = -1;
	int8_t x1178 = -1;
	int32_t x1180 = INT32_MIN;
	int32_t t139 = -17;

    t139 = ((x1177+x1178)/(x1179<=x1180));

    if (t139 != -2) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1197 = 2177;
	int16_t x1199 = INT16_MIN;
	static int16_t x1200 = 29;
	int32_t t140 = 0;

    t140 = ((x1197+x1198)/(x1199<=x1200));

    if (t140 != -2147481471) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1201 = -652041265;
	int64_t x1202 = 6510LL;
	volatile int16_t x1203 = -279;
	uint16_t x1204 = 4U;

    t141 = ((x1201+x1202)/(x1203<=x1204));

    if (t141 != -652034755LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x1206 = 574767974U;
	int64_t x1207 = INT64_MIN;
	volatile uint32_t t142 = 75288U;

    t142 = ((x1205+x1206)/(x1207<=x1208));

    if (t142 != 574800741U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1225 = -1;
	int8_t x1226 = -1;
	int8_t x1227 = INT8_MIN;
	uint64_t x1228 = UINT64_MAX;
	volatile int32_t t143 = -530316;

    t143 = ((x1225+x1226)/(x1227<=x1228));

    if (t143 != -2) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1229 = INT32_MIN;
	int16_t x1230 = 1058;
	volatile int32_t x1232 = 1;

    t144 = ((x1229+x1230)/(x1231<=x1232));

    if (t144 != -2147482590) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x1233 = 79535797U;
	uint8_t x1234 = 25U;
	static int8_t x1235 = -9;
	static int32_t x1236 = 40;
	static volatile uint32_t t145 = 29U;

    t145 = ((x1233+x1234)/(x1235<=x1236));

    if (t145 != 79535822U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1241 = 19732U;
	volatile int16_t x1242 = 1;
	int8_t x1243 = INT8_MIN;
	int8_t x1244 = INT8_MIN;

    t146 = ((x1241+x1242)/(x1243<=x1244));

    if (t146 != 19733) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1253 = 3835LLU;
	int64_t x1254 = INT64_MIN;
	static volatile uint64_t t147 = 486501551LLU;

    t147 = ((x1253+x1254)/(x1255<=x1256));

    if (t147 != 9223372036854779643LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1269 = INT32_MAX;
	volatile uint64_t x1270 = 13064175088350827LLU;
	int16_t x1272 = 10678;

    t148 = ((x1269+x1270)/(x1271<=x1272));

    if (t148 != 13064177235834474LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x1273 = 296U;
	int32_t x1274 = 75;
	static uint16_t x1276 = 19U;
	int32_t t149 = 8169533;

    t149 = ((x1273+x1274)/(x1275<=x1276));

    if (t149 != 371) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x1283 = INT64_MIN;
	volatile uint64_t t150 = 49713864565361LLU;

    t150 = ((x1281+x1282)/(x1283<=x1284));

    if (t150 != 342787420LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x1298 = 210566389U;
	int16_t x1299 = -1;
	int64_t t151 = -1059877869832178986LL;

    t151 = ((x1297+x1298)/(x1299<=x1300));

    if (t151 != 215899674LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x1309 = -1LL;
	int32_t x1310 = 133;
	int8_t x1311 = -34;
	static uint32_t x1312 = UINT32_MAX;
	static int64_t t152 = -19071052936LL;

    t152 = ((x1309+x1310)/(x1311<=x1312));

    if (t152 != 132LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1358 = UINT16_MAX;
	uint16_t x1360 = 30121U;

    t153 = ((x1357+x1358)/(x1359<=x1360));

    if (t153 != 32767) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x1369 = INT16_MIN;
	int8_t x1370 = INT8_MIN;
	int64_t x1371 = INT64_MIN;
	int64_t x1372 = -1LL;
	int32_t t154 = 0;

    t154 = ((x1369+x1370)/(x1371<=x1372));

    if (t154 != -32896) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1382 = INT32_MIN;
	int16_t x1383 = -1;
	static int32_t t155 = -255901624;

    t155 = ((x1381+x1382)/(x1383<=x1384));

    if (t155 != -2147483521) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1390 = -1;
	int64_t x1391 = 27637LL;
	volatile int64_t x1392 = INT64_MAX;

    t156 = ((x1389+x1390)/(x1391<=x1392));

    if (t156 != 2147483646) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x1397 = -4;
	int16_t x1398 = INT16_MAX;

    t157 = ((x1397+x1398)/(x1399<=x1400));

    if (t157 != 32763) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x1401 = 3298U;
	int8_t x1402 = 1;
	uint64_t x1404 = 2741664129327LLU;
	static volatile uint32_t t158 = 1927654U;

    t158 = ((x1401+x1402)/(x1403<=x1404));

    if (t158 != 3299U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x1417 = UINT16_MAX;
	int8_t x1418 = 3;
	static int64_t x1419 = -1LL;
	int64_t x1420 = -1LL;
	volatile int32_t t159 = -3145487;

    t159 = ((x1417+x1418)/(x1419<=x1420));

    if (t159 != 65538) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x1425 = 5625;
	int32_t x1426 = 318;
	static uint32_t x1428 = UINT32_MAX;
	int32_t t160 = 5820;

    t160 = ((x1425+x1426)/(x1427<=x1428));

    if (t160 != 5943) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1437 = INT8_MAX;
	int16_t x1439 = INT16_MAX;
	int64_t x1440 = 1104576950829138LL;

    t161 = ((x1437+x1438)/(x1439<=x1440));

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1461 = 101U;
	static int16_t x1462 = -1;
	int8_t x1463 = -61;
	volatile int32_t t162 = -510450117;

    t162 = ((x1461+x1462)/(x1463<=x1464));

    if (t162 != 100) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1465 = 230U;
	static int8_t x1466 = 5;
	int8_t x1467 = 12;
	volatile uint32_t x1468 = 7540U;
	static uint32_t t163 = 111U;

    t163 = ((x1465+x1466)/(x1467<=x1468));

    if (t163 != 235U) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint16_t x1477 = UINT16_MAX;
	uint8_t x1480 = UINT8_MAX;
	static volatile uint32_t t164 = 2U;

    t164 = ((x1477+x1478)/(x1479<=x1480));

    if (t164 != 65760U) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x1481 = -1LL;
	uint8_t x1482 = 111U;
	int32_t x1483 = -24;
	volatile int64_t x1484 = INT64_MAX;
	volatile int64_t t165 = -190847LL;

    t165 = ((x1481+x1482)/(x1483<=x1484));

    if (t165 != 110LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1485 = INT8_MAX;
	static uint8_t x1486 = UINT8_MAX;
	uint16_t x1487 = UINT16_MAX;
	uint16_t x1488 = UINT16_MAX;
	int32_t t166 = -1;

    t166 = ((x1485+x1486)/(x1487<=x1488));

    if (t166 != 382) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x1493 = INT8_MAX;
	volatile uint32_t x1494 = 7U;
	int8_t x1495 = INT8_MIN;
	int8_t x1496 = INT8_MIN;
	volatile uint32_t t167 = 18U;

    t167 = ((x1493+x1494)/(x1495<=x1496));

    if (t167 != 134U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1497 = 6910;
	static int8_t x1498 = INT8_MIN;
	volatile int32_t x1500 = INT32_MAX;
	int32_t t168 = -3;

    t168 = ((x1497+x1498)/(x1499<=x1500));

    if (t168 != 6782) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1502 = -1LL;
	static int32_t x1503 = -224201;
	uint16_t x1504 = 2357U;

    t169 = ((x1501+x1502)/(x1503<=x1504));

    if (t169 != -32769LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1505 = INT32_MIN;
	volatile uint8_t x1506 = 54U;
	static int8_t x1507 = INT8_MIN;
	static uint8_t x1508 = 5U;
	volatile int32_t t170 = 1;

    t170 = ((x1505+x1506)/(x1507<=x1508));

    if (t170 != -2147483594) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x1513 = -792126;
	uint32_t x1514 = 6781U;
	int32_t x1515 = INT32_MIN;
	int8_t x1516 = INT8_MAX;
	uint32_t t171 = 306006739U;

    t171 = ((x1513+x1514)/(x1515<=x1516));

    if (t171 != 4294181951U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1529 = 1893U;
	static uint16_t x1530 = 4U;
	uint64_t x1531 = 479LLU;
	static int8_t x1532 = -2;
	uint32_t t172 = 852U;

    t172 = ((x1529+x1530)/(x1531<=x1532));

    if (t172 != 1897U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x1573 = UINT64_MAX;
	int32_t x1574 = INT32_MIN;
	static int16_t x1575 = INT16_MIN;
	uint64_t t173 = 736414LLU;

    t173 = ((x1573+x1574)/(x1575<=x1576));

    if (t173 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x1585 = INT8_MIN;
	static int8_t x1586 = INT8_MAX;
	uint8_t x1587 = UINT8_MAX;
	static uint32_t x1588 = 6671U;
	volatile int32_t t174 = -268775;

    t174 = ((x1585+x1586)/(x1587<=x1588));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x1589 = UINT8_MAX;
	int64_t x1590 = INT64_MIN;
	int16_t x1591 = INT16_MIN;
	int64_t x1592 = INT64_MAX;
	volatile int64_t t175 = -106026LL;

    t175 = ((x1589+x1590)/(x1591<=x1592));

    if (t175 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x1597 = -2670531813584LL;
	int64_t x1598 = -1LL;
	static int16_t x1599 = 3546;
	int16_t x1600 = INT16_MAX;
	volatile int64_t t176 = 3LL;

    t176 = ((x1597+x1598)/(x1599<=x1600));

    if (t176 != -2670531813585LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1605 = INT32_MAX;
	int32_t x1606 = -1;
	int64_t x1607 = -1LL;
	static uint32_t x1608 = 756U;

    t177 = ((x1605+x1606)/(x1607<=x1608));

    if (t177 != 2147483646) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1609 = UINT32_MAX;
	uint16_t x1610 = UINT16_MAX;
	int32_t x1611 = INT32_MIN;
	int16_t x1612 = INT16_MIN;

    t178 = ((x1609+x1610)/(x1611<=x1612));

    if (t178 != 65534U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1618 = -7801;
	volatile int16_t x1619 = INT16_MIN;
	volatile int8_t x1620 = -28;
	static volatile int32_t t179 = 346049;

    t179 = ((x1617+x1618)/(x1619<=x1620));

    if (t179 != -7796) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1621 = -1;
	volatile int8_t x1623 = INT8_MIN;
	uint8_t x1624 = 44U;
	volatile int32_t t180 = 319;

    t180 = ((x1621+x1622)/(x1623<=x1624));

    if (t180 != -129) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1633 = INT32_MIN;
	uint8_t x1634 = UINT8_MAX;
	static volatile uint8_t x1635 = 0U;
	int8_t x1636 = INT8_MAX;
	volatile int32_t t181 = -106;

    t181 = ((x1633+x1634)/(x1635<=x1636));

    if (t181 != -2147483393) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1637 = 558031620146LL;
	uint16_t x1640 = 1343U;
	int64_t t182 = -4250849086LL;

    t182 = ((x1637+x1638)/(x1639<=x1640));

    if (t182 != 558031620273LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x1641 = 1058769245;
	uint16_t x1642 = 10U;
	int8_t x1643 = -1;
	volatile int64_t x1644 = 580465711584855131LL;

    t183 = ((x1641+x1642)/(x1643<=x1644));

    if (t183 != 1058769255) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1650 = -1;
	volatile int64_t x1651 = -1LL;
	volatile int32_t t184 = -934380054;

    t184 = ((x1649+x1650)/(x1651<=x1652));

    if (t184 != 4) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1653 = -1LL;
	static volatile int8_t x1655 = INT8_MIN;
	uint32_t x1656 = UINT32_MAX;
	volatile uint64_t t185 = 682631768048709LLU;

    t185 = ((x1653+x1654)/(x1655<=x1656));

    if (t185 != 807153329LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1661 = 111U;
	int8_t x1662 = INT8_MIN;
	static int32_t x1663 = INT32_MAX;
	static uint32_t x1664 = UINT32_MAX;

    t186 = ((x1661+x1662)/(x1663<=x1664));

    if (t186 != -17) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1665 = INT8_MIN;
	uint64_t x1666 = 11512561LLU;
	uint32_t x1667 = 66U;

    t187 = ((x1665+x1666)/(x1667<=x1668));

    if (t187 != 11512433LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1669 = 975545572LLU;
	volatile uint32_t x1670 = UINT32_MAX;
	uint8_t x1672 = UINT8_MAX;
	volatile uint64_t t188 = 120998774930LLU;

    t188 = ((x1669+x1670)/(x1671<=x1672));

    if (t188 != 5270512867LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1673 = -1LL;
	int64_t x1675 = -4148008274LL;
	volatile int32_t x1676 = INT32_MAX;

    t189 = ((x1673+x1674)/(x1675<=x1676));

    if (t189 != -129LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x1677 = UINT32_MAX;
	int64_t x1678 = INT64_MIN;
	int8_t x1679 = INT8_MIN;
	int32_t x1680 = 45776;
	volatile int64_t t190 = 126847215LL;

    t190 = ((x1677+x1678)/(x1679<=x1680));

    if (t190 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1685 = INT8_MAX;
	uint8_t x1686 = 1U;
	int16_t x1687 = -7;
	int32_t x1688 = 33;
	volatile int32_t t191 = -1;

    t191 = ((x1685+x1686)/(x1687<=x1688));

    if (t191 != 128) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1697 = INT64_MAX;
	int32_t x1698 = INT32_MIN;
	int32_t x1700 = -8;

    t192 = ((x1697+x1698)/(x1699<=x1700));

    if (t192 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1713 = 5093U;
	int64_t x1714 = -21066274508LL;
	int8_t x1715 = -29;
	uint16_t x1716 = UINT16_MAX;
	volatile int64_t t193 = 1326LL;

    t193 = ((x1713+x1714)/(x1715<=x1716));

    if (t193 != -21066269415LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x1717 = 7742U;
	volatile int8_t x1718 = -2;
	int8_t x1719 = INT8_MAX;

    t194 = ((x1717+x1718)/(x1719<=x1720));

    if (t194 != 7740) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1726 = -1;
	int32_t x1727 = INT32_MIN;
	static int32_t x1728 = 524014439;
	volatile int32_t t195 = 0;

    t195 = ((x1725+x1726)/(x1727<=x1728));

    if (t195 != -32769) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x1733 = 86789U;
	int16_t x1734 = 2420;
	uint16_t x1736 = UINT16_MAX;
	volatile uint32_t t196 = 1576083873U;

    t196 = ((x1733+x1734)/(x1735<=x1736));

    if (t196 != 89209U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1742 = INT16_MAX;
	int64_t x1743 = -1LL;
	int16_t x1744 = -1;
	int32_t t197 = -3599775;

    t197 = ((x1741+x1742)/(x1743<=x1744));

    if (t197 != 33586) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x1749 = -26761933LL;
	static volatile uint8_t x1750 = 21U;
	uint32_t x1751 = UINT32_MAX;
	uint64_t x1752 = 443428868843822LLU;
	volatile int64_t t198 = -259045697385289918LL;

    t198 = ((x1749+x1750)/(x1751<=x1752));

    if (t198 != -26761912LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1753 = 140U;
	static int8_t x1754 = INT8_MAX;
	static uint32_t x1755 = 318181U;
	int32_t x1756 = INT32_MIN;

    t199 = ((x1753+x1754)/(x1755<=x1756));

    if (t199 != 267) { NG(); } else { ; }
	
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

