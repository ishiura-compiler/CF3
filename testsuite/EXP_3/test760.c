
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

int32_t x8 = INT32_MIN;
uint32_t t1 = 107335609U;
int64_t x18 = -174765016170818LL;
int64_t x19 = INT64_MIN;
int8_t x32 = -8;
int32_t x35 = INT32_MIN;
uint32_t x51 = UINT32_MAX;
int16_t x62 = INT16_MIN;
int8_t x64 = -1;
volatile int32_t t7 = 3583282;
static uint64_t x67 = 242166LLU;
static int64_t x71 = -21946989964727715LL;
int8_t x87 = INT8_MIN;
volatile int64_t x97 = INT64_MAX;
static int64_t t13 = -477360212315697249LL;
uint8_t x104 = UINT8_MAX;
int64_t x109 = INT64_MIN;
int8_t x110 = INT8_MIN;
static int64_t x117 = INT64_MIN;
int8_t x120 = 3;
uint32_t x137 = 122817U;
int16_t x140 = INT16_MIN;
int32_t x145 = -1191533;
int16_t x146 = INT16_MAX;
volatile int16_t x148 = 584;
volatile int64_t x159 = 371588058984LL;
int64_t x160 = -1LL;
uint64_t x161 = 6646804552645LLU;
int8_t x182 = INT8_MIN;
static int16_t x183 = INT16_MIN;
volatile uint32_t t27 = 1U;
int8_t x200 = -35;
int64_t t28 = -29301904LL;
int64_t x211 = INT64_MIN;
volatile int32_t x212 = 905746;
volatile int8_t x223 = INT8_MAX;
uint32_t x242 = UINT32_MAX;
int8_t x258 = -55;
uint8_t x274 = 15U;
uint32_t x288 = 30860U;
volatile uint32_t x289 = UINT32_MAX;
uint64_t t37 = 17965LLU;
uint32_t x293 = 106869197U;
static int64_t x295 = INT64_MIN;
int8_t x347 = -1;
uint64_t t45 = 41LLU;
int64_t t46 = -1586770LL;
uint32_t x362 = UINT32_MAX;
uint64_t t48 = 0LLU;
int8_t x365 = 1;
volatile int32_t t51 = -427391;
volatile int32_t t52 = 1;
volatile int64_t x405 = -158265054653367LL;
volatile int64_t t54 = 64126340359956569LL;
uint64_t x416 = 1892156989180150LLU;
int16_t x426 = 1753;
volatile int64_t x427 = -1655074180522LL;
volatile int64_t t57 = 1447288LL;
uint32_t x431 = UINT32_MAX;
volatile int64_t t58 = 1LL;
int8_t x452 = 40;
volatile int32_t t59 = -784;
int8_t x460 = 6;
static int64_t x479 = INT64_MIN;
volatile int64_t t65 = -54650717062424LL;
int64_t t66 = 1235047669303068511LL;
uint64_t x522 = 508349664140705109LLU;
int64_t x527 = 210365256496654LL;
int64_t t68 = 110605863663519929LL;
uint64_t x546 = UINT64_MAX;
uint64_t t69 = 27382978680918009LLU;
static uint16_t x551 = 4U;
volatile int64_t t72 = 43484000LL;
int8_t x602 = INT8_MIN;
int64_t x603 = INT64_MIN;
uint32_t x605 = 540U;
uint32_t t75 = 151271U;
int64_t x627 = -97030491860861LL;
int64_t t78 = -53533120400400758LL;
int16_t x633 = -1;
int8_t x635 = INT8_MIN;
int8_t x659 = INT8_MIN;
uint64_t x660 = 5644003856LLU;
int8_t x665 = -10;
volatile int16_t x666 = -1;
static int64_t x671 = INT64_MIN;
int64_t t84 = -187LL;
int64_t x681 = 2513527629LL;
int8_t x684 = -1;
uint8_t x704 = 1U;
static uint32_t x710 = UINT32_MAX;
static int8_t x712 = -1;
int64_t x724 = -1LL;
int16_t x739 = INT16_MAX;
uint32_t x740 = 1795U;
static int64_t t93 = -26072741381342LL;
int64_t x748 = -1LL;
volatile uint8_t x760 = UINT8_MAX;
static volatile int16_t x777 = INT16_MAX;
int64_t x779 = -1LL;
uint8_t x795 = 12U;
static int8_t x797 = INT8_MAX;
volatile int64_t t101 = -7262LL;
static uint64_t x859 = 2413211764837LLU;
int16_t x863 = 177;
volatile int16_t x864 = 7;
static volatile uint64_t t104 = 3LLU;
static volatile uint32_t t106 = 73U;
static uint32_t x895 = UINT32_MAX;
volatile uint64_t t109 = 20726054620650886LLU;
uint8_t x937 = 64U;
int64_t x939 = INT64_MAX;
int64_t x942 = -1372366887LL;
int8_t x948 = 14;
static int16_t x953 = -1;
int16_t x956 = 1153;
int8_t x963 = INT8_MIN;
int64_t x969 = INT64_MIN;
static int64_t x971 = -1LL;
int8_t x985 = INT8_MIN;
static int8_t x991 = INT8_MIN;
int8_t x992 = INT8_MIN;
volatile uint32_t x996 = UINT32_MAX;
int16_t x1004 = INT16_MIN;
int8_t x1007 = -1;
uint8_t x1009 = 20U;
int64_t x1011 = INT64_MIN;
int8_t x1018 = INT8_MIN;
uint32_t x1019 = UINT32_MAX;
int16_t x1020 = 25;
volatile int64_t t126 = 15029LL;
volatile int16_t x1031 = -1;
uint32_t x1032 = UINT32_MAX;
int64_t x1041 = INT64_MIN;
int64_t x1042 = -1LL;
int32_t x1043 = 20757;
int8_t x1044 = 1;
int32_t x1046 = INT32_MAX;
static uint16_t x1061 = 672U;
int32_t x1067 = -3530475;
volatile int64_t x1090 = INT64_MIN;
volatile int8_t x1091 = -39;
volatile int64_t t134 = 83461LL;
int64_t x1093 = INT64_MIN;
uint16_t x1094 = 2365U;
int64_t t135 = 1336LL;
volatile int16_t x1109 = INT16_MAX;
static uint64_t t138 = 258147609347205290LLU;
uint16_t x1125 = 1U;
volatile uint64_t t139 = 12308901373LLU;
volatile uint64_t t140 = 24911847301LLU;
int64_t x1145 = -2007LL;
int16_t x1147 = INT16_MIN;
int64_t x1163 = INT64_MIN;
uint32_t x1164 = 15671U;
volatile int64_t t142 = 1LL;
volatile uint64_t x1166 = 2LLU;
volatile uint32_t x1167 = UINT32_MAX;
static int64_t x1181 = INT64_MIN;
int32_t x1187 = INT32_MIN;
static uint16_t x1208 = 3618U;
uint8_t x1209 = 1U;
int32_t t149 = 4;
static int8_t x1240 = 18;
int64_t x1256 = -1LL;
int32_t x1273 = -1;
uint32_t x1274 = 20U;
int64_t x1289 = 20661986547536LL;
volatile int64_t x1291 = INT64_MIN;
int8_t x1322 = 12;
int16_t x1358 = 5;
int8_t x1377 = INT8_MIN;
int8_t x1386 = INT8_MIN;
int32_t x1389 = INT32_MAX;
volatile uint8_t x1390 = UINT8_MAX;
uint8_t x1393 = 61U;
static uint32_t x1401 = UINT32_MAX;
static volatile uint32_t t165 = 53178U;
uint32_t x1418 = 5149U;
static volatile int64_t t167 = 60255925634LL;
uint16_t x1429 = UINT16_MAX;
volatile int64_t x1430 = -1LL;
volatile int16_t x1432 = -1611;
volatile uint64_t x1470 = 198665075LLU;
int8_t x1476 = INT8_MIN;
static volatile int64_t t172 = 1524LL;
int16_t x1482 = -1;
volatile int64_t x1491 = 195442140044050LL;
int64_t x1498 = INT64_MAX;
volatile int16_t x1499 = INT16_MIN;
static volatile int8_t x1505 = -2;
int64_t x1508 = INT64_MIN;
volatile uint32_t t177 = 1485U;
static uint64_t t178 = 20224730363670LLU;
int16_t x1519 = 14;
volatile int32_t x1520 = -1;
int16_t x1534 = -56;
int8_t x1537 = INT8_MAX;
int32_t x1538 = 378203758;
volatile uint32_t x1541 = UINT32_MAX;
int32_t x1548 = -1;
int32_t t184 = -2;
static volatile int32_t x1549 = 1524;
uint32_t x1550 = 26U;
int32_t x1560 = INT32_MAX;
volatile int32_t t187 = 2;
int16_t x1585 = INT16_MIN;
int8_t x1587 = 22;
volatile int32_t t190 = -212387;
volatile int32_t t192 = -536;
volatile int64_t x1623 = INT64_MIN;
int64_t x1641 = INT64_MIN;
int32_t x1652 = INT32_MAX;


void f0(void) {
    	int16_t x1 = -1;
	static int16_t x2 = 881;
	int64_t x3 = INT64_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int64_t t0 = -4443123033913912805LL;

    t0 = ((x1|x2)/(x3/x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	volatile uint8_t x6 = 119U;
	uint32_t x7 = UINT32_MAX;

    t1 = ((x5|x6)/(x7/x8));

    if (t1 != 127U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x17 = UINT64_MAX;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t2 = 1183099LLU;

    t2 = ((x17|x18)/(x19/x20));

    if (t2 != 255LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x29 = INT16_MAX;
	int8_t x30 = 19;
	int8_t x31 = INT8_MIN;
	static volatile int32_t t3 = -507116837;

    t3 = ((x29|x30)/(x31/x32));

    if (t3 != 2047) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x33 = 5;
	volatile int32_t x34 = -1;
	int32_t x36 = INT32_MAX;
	int32_t t4 = -325;

    t4 = ((x33|x34)/(x35/x36));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x41 = -1;
	volatile int64_t x42 = -2892LL;
	volatile uint64_t x43 = 92885LLU;
	uint16_t x44 = 430U;
	volatile uint64_t t5 = 3943409LLU;

    t5 = ((x41|x42)/(x43/x44));

    if (t5 != 85401592933840516LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x49 = UINT64_MAX;
	volatile uint64_t x50 = 3LLU;
	int64_t x52 = -1LL;
	volatile uint64_t t6 = 12LLU;

    t6 = ((x49|x50)/(x51/x52));

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x61 = -1;
	uint16_t x63 = UINT16_MAX;

    t7 = ((x61|x62)/(x63/x64));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MIN;
	int32_t x68 = 157;
	uint64_t t8 = 29025LLU;

    t8 = ((x65|x66)/(x67/x68));

    if (t8 != 11962869049098282LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x69 = 87;
	uint64_t x70 = 18936694849LLU;
	static int32_t x72 = -1;
	volatile uint64_t t9 = 2841227432047LLU;

    t9 = ((x69|x70)/(x71/x72));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x73 = INT64_MIN;
	volatile int32_t x74 = INT32_MIN;
	int64_t x75 = INT64_MAX;
	uint64_t x76 = 227680LLU;
	volatile uint64_t t10 = 1319318814LLU;

    t10 = ((x73|x74)/(x75/x76));

    if (t10 != 455359LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x81 = -1LL;
	int8_t x82 = INT8_MIN;
	int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MIN;
	volatile int64_t t11 = -2LL;

    t11 = ((x81|x82)/(x83/x84));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x85 = -1;
	int8_t x86 = INT8_MIN;
	static uint32_t x88 = 731810U;
	volatile uint32_t t12 = 1U;

    t12 = ((x85|x86)/(x87/x88));

    if (t12 != 731930U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x98 = INT32_MAX;
	int64_t x99 = 4582059119893002556LL;
	volatile int64_t x100 = 404432560LL;

    t13 = ((x97|x98)/(x99/x100));

    if (t13 != 814095119LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	int16_t x103 = INT16_MIN;
	volatile int32_t t14 = 1;

    t14 = ((x101|x102)/(x103/x104));

    if (t14 != 256) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x111 = INT8_MAX;
	static uint8_t x112 = 20U;
	volatile int64_t t15 = 2703LL;

    t15 = ((x109|x110)/(x111/x112));

    if (t15 != -21LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x118 = -1LL;
	int16_t x119 = INT16_MIN;
	static volatile int64_t t16 = 385507950LL;

    t16 = ((x117|x118)/(x119/x120));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x125 = INT64_MAX;
	static uint8_t x126 = 15U;
	static int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MIN;
	volatile int64_t t17 = 4148535LL;

    t17 = ((x125|x126)/(x127/x128));

    if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MIN;
	uint32_t t18 = 24900U;

    t18 = ((x137|x138)/(x139/x140));

    if (t18 != 32769U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x147 = 19258U;
	volatile uint32_t t19 = 395262U;

    t19 = ((x145|x146)/(x147/x148));

    if (t19 != 134180863U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x153 = 39873405068LL;
	uint16_t x154 = 21344U;
	int16_t x155 = INT16_MIN;
	volatile int16_t x156 = -1363;
	volatile int64_t t20 = -2LL;

    t20 = ((x153|x154)/(x155/x156));

    if (t20 != 1661392084LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x157 = -1;
	uint32_t x158 = 64U;
	int64_t t21 = 915978687LL;

    t21 = ((x157|x158)/(x159/x160));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x162 = 54844757U;
	int16_t x163 = INT16_MAX;
	int16_t x164 = 315;
	volatile uint64_t t22 = 9846775245LLU;

    t22 = ((x161|x162)/(x163/x164));

    if (t22 != 63912066362LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x177 = 23U;
	int8_t x178 = -6;
	int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MAX;
	int64_t t23 = -28323763374228LL;

    t23 = ((x177|x178)/(x179/x180));

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x181 = INT16_MIN;
	uint8_t x184 = 27U;
	int32_t t24 = 224430185;

    t24 = ((x181|x182)/(x183/x184));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x185 = INT64_MIN;
	static volatile uint8_t x186 = UINT8_MAX;
	static int64_t x187 = INT64_MIN;
	static uint32_t x188 = UINT32_MAX;
	volatile int64_t t25 = -1LL;

    t25 = ((x185|x186)/(x187/x188));

    if (t25 != 4294967295LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x189 = 12;
	volatile int64_t x190 = -1LL;
	int64_t x191 = INT64_MAX;
	static int8_t x192 = 2;
	static int64_t t26 = -1878998280586987LL;

    t26 = ((x189|x190)/(x191/x192));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x193 = INT16_MAX;
	uint8_t x194 = UINT8_MAX;
	uint32_t x195 = UINT32_MAX;
	uint16_t x196 = 14U;

    t27 = ((x193|x194)/(x195/x196));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x197 = -24;
	int32_t x198 = INT32_MAX;
	int64_t x199 = INT64_MIN;

    t28 = ((x197|x198)/(x199/x200));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x209 = -12803;
	static int64_t x210 = INT64_MAX;
	int64_t t29 = -106958585064655LL;

    t29 = ((x209|x210)/(x211/x212));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x221 = INT16_MIN;
	static uint8_t x222 = UINT8_MAX;
	int16_t x224 = -38;
	int32_t t30 = 60400;

    t30 = ((x221|x222)/(x223/x224));

    if (t30 != 10837) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x241 = -1;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = 1354570LLU;
	volatile uint64_t t31 = 3969348842012LLU;

    t31 = ((x241|x242)/(x243/x244));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x257 = INT8_MAX;
	int32_t x259 = -751381071;
	static uint8_t x260 = 100U;
	volatile int32_t t32 = -19293204;

    t32 = ((x257|x258)/(x259/x260));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x261 = 884LL;
	int64_t x262 = 1698770524775LL;
	uint64_t x263 = 79492LLU;
	uint8_t x264 = UINT8_MAX;
	uint64_t t33 = 725251936LLU;

    t33 = ((x261|x262)/(x263/x264));

    if (t33 != 5462284646LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x269 = 41623216;
	static uint16_t x270 = UINT16_MAX;
	int32_t x271 = INT32_MIN;
	static uint8_t x272 = UINT8_MAX;
	int32_t t34 = 7510;

    t34 = ((x269|x270)/(x271/x272));

    if (t34 != -4) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x273 = 890692820LLU;
	volatile int64_t x275 = INT64_MIN;
	int16_t x276 = -5284;
	uint64_t t35 = 10LLU;

    t35 = ((x273|x274)/(x275/x276));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x285 = INT16_MIN;
	static int16_t x286 = INT16_MAX;
	uint32_t x287 = 218665U;
	volatile uint32_t t36 = 188129U;

    t36 = ((x285|x286)/(x287/x288));

    if (t36 != 613566756U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x290 = UINT8_MAX;
	uint64_t x291 = 17909324795465LLU;
	uint64_t x292 = 14292741707385LLU;

    t37 = ((x289|x290)/(x291/x292));

    if (t37 != 4294967295LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x294 = 6;
	uint8_t x296 = UINT8_MAX;
	int64_t t38 = 367390579804850956LL;

    t38 = ((x293|x294)/(x295/x296));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x305 = 156U;
	int16_t x306 = 1;
	static int64_t x307 = INT64_MIN;
	uint64_t x308 = 3473559936447449707LLU;
	static volatile uint64_t t39 = 14066664239335LLU;

    t39 = ((x305|x306)/(x307/x308));

    if (t39 != 78LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x317 = 1423962585LLU;
	int8_t x318 = INT8_MIN;
	volatile int64_t x319 = -833793277279069216LL;
	static uint8_t x320 = UINT8_MAX;
	static volatile uint64_t t40 = 8919440845008619LLU;

    t40 = ((x317|x318)/(x319/x320));

    if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x321 = INT16_MAX;
	uint8_t x322 = 3U;
	int32_t x323 = 858147835;
	uint16_t x324 = 7U;
	int32_t t41 = 881;

    t41 = ((x321|x322)/(x323/x324));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x329 = INT8_MIN;
	int32_t x330 = -2081325;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t42 = -477860;

    t42 = ((x329|x330)/(x331/x332));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x333 = INT64_MIN;
	static uint32_t x334 = 6166U;
	static int32_t x335 = INT32_MAX;
	uint32_t x336 = 198494U;
	volatile int64_t t43 = -209LL;

    t43 = ((x333|x334)/(x335/x336));

    if (t43 != -852594937775445LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x341 = -1LL;
	volatile int16_t x342 = -1;
	int8_t x343 = 1;
	static int32_t x344 = -1;
	int64_t t44 = 13859693834LL;

    t44 = ((x341|x342)/(x343/x344));

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x345 = 536335258LLU;
	static volatile int16_t x346 = INT16_MAX;
	uint32_t x348 = UINT32_MAX;

    t45 = ((x345|x346)/(x347/x348));

    if (t45 != 536346623LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x349 = INT8_MIN;
	uint32_t x350 = 5538U;
	volatile int64_t x351 = INT64_MIN;
	static volatile uint32_t x352 = UINT32_MAX;

    t46 = ((x349|x350)/(x351/x352));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x357 = -1LL;
	int8_t x358 = INT8_MIN;
	uint16_t x359 = 333U;
	int16_t x360 = 1;
	static int64_t t47 = -66622744000275LL;

    t47 = ((x357|x358)/(x359/x360));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x361 = 71045778984273LLU;
	uint64_t x363 = 956219835352390LLU;
	uint32_t x364 = UINT32_MAX;

    t48 = ((x361|x362)/(x363/x364));

    if (t48 != 319117437LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	int32_t x368 = 2;
	int32_t t49 = 3110;

    t49 = ((x365|x366)/(x367/x368));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x369 = UINT32_MAX;
	int64_t x370 = -1LL;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;
	volatile int64_t t50 = 1LL;

    t50 = ((x369|x370)/(x371/x372));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MAX;
	static int16_t x383 = INT16_MIN;
	static int32_t x384 = 1882;

    t51 = ((x381|x382)/(x383/x384));

    if (t51 != 126322560) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x385 = -1;
	int8_t x386 = INT8_MIN;
	uint8_t x387 = 106U;
	uint8_t x388 = 51U;

    t52 = ((x385|x386)/(x387/x388));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x397 = INT16_MAX;
	volatile int8_t x398 = 32;
	static uint16_t x399 = UINT16_MAX;
	uint8_t x400 = 6U;
	static volatile int32_t t53 = 86;

    t53 = ((x397|x398)/(x399/x400));

    if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x406 = 0;
	uint16_t x407 = UINT16_MAX;
	int8_t x408 = INT8_MIN;

    t54 = ((x405|x406)/(x407/x408));

    if (t54 != 309716349615LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x413 = -1;
	int8_t x414 = 6;
	static int8_t x415 = -1;
	volatile uint64_t t55 = 50442615176259397LLU;

    t55 = ((x413|x414)/(x415/x416));

    if (t55 != 1892167819644020LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x417 = 6112582LL;
	volatile int8_t x418 = INT8_MIN;
	uint8_t x419 = 33U;
	int64_t x420 = -1LL;
	volatile int64_t t56 = -283407478180LL;

    t56 = ((x417|x418)/(x419/x420));

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x425 = 1599308589LL;
	static int16_t x428 = -4;

    t57 = ((x425|x426)/(x427/x428));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x429 = 136U;
	static volatile int64_t x430 = -6473175752251LL;
	int16_t x432 = 5282;

    t58 = ((x429|x430)/(x431/x432));

    if (t58 != -7960793LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x449 = UINT16_MAX;
	int32_t x450 = INT32_MIN;
	int8_t x451 = INT8_MIN;

    t59 = ((x449|x450)/(x451/x452));

    if (t59 != 715806037) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x453 = INT64_MIN;
	uint32_t x454 = UINT32_MAX;
	uint64_t x455 = UINT64_MAX;
	volatile uint8_t x456 = UINT8_MAX;
	volatile uint64_t t60 = 5LLU;

    t60 = ((x453|x454)/(x455/x456));

    if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x457 = 1;
	int32_t x458 = INT32_MAX;
	static volatile int64_t x459 = INT64_MIN;
	volatile int64_t t61 = -750LL;

    t61 = ((x457|x458)/(x459/x460));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x465 = -50;
	volatile uint64_t x466 = 8485030164660578LLU;
	volatile int8_t x467 = 61;
	volatile int8_t x468 = -1;
	uint64_t t62 = 1164339719464105LLU;

    t62 = ((x465|x466)/(x467/x468));

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x477 = UINT32_MAX;
	volatile int16_t x478 = -1;
	int32_t x480 = 1421173;
	volatile int64_t t63 = 1694225LL;

    t63 = ((x477|x478)/(x479/x480));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x485 = -1;
	static int32_t x486 = -94401025;
	volatile int64_t x487 = INT64_MIN;
	int16_t x488 = INT16_MIN;
	volatile int64_t t64 = 777716151658788007LL;

    t64 = ((x485|x486)/(x487/x488));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x497 = INT64_MIN;
	static volatile uint32_t x498 = 1195525U;
	int32_t x499 = INT32_MIN;
	int8_t x500 = 9;

    t65 = ((x497|x498)/(x499/x500));

    if (t65 != 38654705699LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x517 = -4249145LL;
	uint32_t x518 = 16686U;
	static uint16_t x519 = 4U;
	int16_t x520 = 3;

    t66 = ((x517|x518)/(x519/x520));

    if (t66 != -4232721LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x521 = -1;
	int64_t x523 = INT64_MIN;
	int8_t x524 = INT8_MAX;
	uint64_t t67 = 6LLU;

    t67 = ((x521|x522)/(x523/x524));

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x525 = -60;
	int16_t x526 = INT16_MIN;
	int64_t x528 = -188LL;

    t68 = ((x525|x526)/(x527/x528));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x545 = UINT8_MAX;
	int16_t x547 = -331;
	static uint8_t x548 = 2U;

    t69 = ((x545|x546)/(x547/x548));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x549 = INT32_MIN;
	int16_t x550 = INT16_MAX;
	static int8_t x552 = -1;
	int32_t t70 = -3;

    t70 = ((x549|x550)/(x551/x552));

    if (t70 != 536862720) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x569 = 120U;
	int32_t x570 = 439852;
	int64_t x571 = -35427621343239647LL;
	int32_t x572 = 244258280;
	int64_t t71 = -451090868487855329LL;

    t71 = ((x569|x570)/(x571/x572));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x585 = INT64_MIN;
	static int16_t x586 = INT16_MIN;
	volatile uint16_t x587 = UINT16_MAX;
	int16_t x588 = INT16_MAX;

    t72 = ((x585|x586)/(x587/x588));

    if (t72 != -16384LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x593 = 4;
	static int8_t x594 = 30;
	int8_t x595 = INT8_MIN;
	uint16_t x596 = 75U;
	int32_t t73 = -33648;

    t73 = ((x593|x594)/(x595/x596));

    if (t73 != -30) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x601 = 244244023;
	int16_t x604 = INT16_MIN;
	volatile int64_t t74 = 12384136972310190LL;

    t74 = ((x601|x602)/(x603/x604));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x606 = INT32_MIN;
	volatile uint16_t x607 = UINT16_MAX;
	int32_t x608 = 19518;

    t75 = ((x605|x606)/(x607/x608));

    if (t75 != 715828062U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x617 = UINT16_MAX;
	int8_t x618 = -3;
	static volatile int32_t x619 = INT32_MIN;
	int32_t x620 = INT32_MAX;
	int32_t t76 = 7400;

    t76 = ((x617|x618)/(x619/x620));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x625 = INT64_MAX;
	uint16_t x626 = 97U;
	volatile int16_t x628 = -1;
	int64_t t77 = -4266454543865919LL;

    t77 = ((x625|x626)/(x627/x628));

    if (t77 != 95056LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x629 = 665;
	int32_t x630 = INT32_MAX;
	int64_t x631 = -1LL;
	int16_t x632 = -1;

    t78 = ((x629|x630)/(x631/x632));

    if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x634 = INT8_MAX;
	int16_t x636 = -1;
	int32_t t79 = -758;

    t79 = ((x633|x634)/(x635/x636));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x641 = UINT32_MAX;
	int32_t x642 = INT32_MIN;
	int64_t x643 = -232687LL;
	uint32_t x644 = 1610U;
	int64_t t80 = -640916463969563416LL;

    t80 = ((x641|x642)/(x643/x644));

    if (t80 != -29826161LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x657 = INT32_MIN;
	uint64_t x658 = 255802863456024LLU;
	volatile uint64_t t81 = 120LLU;

    t81 = ((x657|x658)/(x659/x660));

    if (t81 != 5644003857LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x661 = INT8_MAX;
	static uint8_t x662 = 53U;
	int32_t x663 = INT32_MAX;
	int8_t x664 = 33;
	int32_t t82 = 4;

    t82 = ((x661|x662)/(x663/x664));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x667 = INT32_MIN;
	int16_t x668 = INT16_MIN;
	volatile int32_t t83 = -39772;

    t83 = ((x665|x666)/(x667/x668));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x669 = INT16_MIN;
	volatile int64_t x670 = INT64_MAX;
	uint16_t x672 = UINT16_MAX;

    t84 = ((x669|x670)/(x671/x672));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x673 = 70470311U;
	static volatile uint32_t x674 = 4U;
	static volatile int64_t x675 = INT64_MIN;
	int32_t x676 = INT32_MAX;
	int64_t t85 = 21LL;

    t85 = ((x673|x674)/(x675/x676));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x682 = 0LLU;
	int16_t x683 = INT16_MIN;
	uint64_t t86 = 111200389709228LLU;

    t86 = ((x681|x682)/(x683/x684));

    if (t86 != 76706LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x689 = INT32_MIN;
	uint32_t x690 = 57788512U;
	static int8_t x691 = -15;
	int16_t x692 = -1;
	volatile uint32_t t87 = 2894U;

    t87 = ((x689|x690)/(x691/x692));

    if (t87 != 147018144U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x697 = UINT16_MAX;
	uint32_t x698 = 32U;
	static uint16_t x699 = UINT16_MAX;
	uint16_t x700 = 6597U;
	volatile uint32_t t88 = 988512272U;

    t88 = ((x697|x698)/(x699/x700));

    if (t88 != 7281U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x701 = 1U;
	int64_t x702 = -127611LL;
	int64_t x703 = -1LL;
	int64_t t89 = -1979536776477411LL;

    t89 = ((x701|x702)/(x703/x704));

    if (t89 != 127611LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x705 = UINT32_MAX;
	uint16_t x706 = 113U;
	int32_t x707 = INT32_MIN;
	uint64_t x708 = 34236370416590554LLU;
	static volatile uint64_t t90 = 38862LLU;

    t90 = ((x705|x706)/(x707/x708));

    if (t90 != 7983210LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x709 = 52265443391LLU;
	static int32_t x711 = 189;
	static uint64_t t91 = 6085450LLU;

    t91 = ((x709|x710)/(x711/x712));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x721 = -118665LL;
	static volatile int8_t x722 = 51;
	int16_t x723 = -15259;
	int64_t t92 = -2353547996LL;

    t92 = ((x721|x722)/(x723/x724));

    if (t92 != -7LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x737 = INT64_MIN;
	uint32_t x738 = 24429773U;

    t93 = ((x737|x738)/(x739/x740));

    if (t93 != -512409557601685890LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x745 = -1;
	int64_t x746 = 3238447431421928552LL;
	volatile int16_t x747 = INT16_MIN;
	int64_t t94 = 2178764121934143LL;

    t94 = ((x745|x746)/(x747/x748));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x753 = -1;
	uint8_t x754 = 108U;
	volatile int32_t x755 = 3007;
	int64_t x756 = -1LL;
	int64_t t95 = -20914932LL;

    t95 = ((x753|x754)/(x755/x756));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x757 = 40;
	uint32_t x758 = 813471436U;
	volatile int64_t x759 = INT64_MAX;
	volatile int64_t t96 = 11488548165LL;

    t96 = ((x757|x758)/(x759/x760));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x778 = INT8_MIN;
	int16_t x780 = -1;
	int64_t t97 = -1978LL;

    t97 = ((x777|x778)/(x779/x780));

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x793 = INT64_MIN;
	volatile int16_t x794 = -1;
	int32_t x796 = -1;
	volatile int64_t t98 = 6318996816892551LL;

    t98 = ((x793|x794)/(x795/x796));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x798 = INT8_MIN;
	uint32_t x799 = UINT32_MAX;
	static int16_t x800 = 3800;
	volatile uint32_t t99 = 39U;

    t99 = ((x797|x798)/(x799/x800));

    if (t99 != 3800U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x829 = UINT8_MAX;
	volatile int64_t x830 = 3456483471855LL;
	int16_t x831 = INT16_MIN;
	uint32_t x832 = 5U;
	volatile int64_t t100 = 1152LL;

    t100 = ((x829|x830)/(x831/x832));

    if (t100 != 4023LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x837 = INT32_MAX;
	int16_t x838 = 0;
	static uint32_t x839 = 580346115U;
	int64_t x840 = -1LL;

    t101 = ((x837|x838)/(x839/x840));

    if (t101 != -3LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x853 = INT8_MIN;
	int64_t x854 = -1LL;
	int64_t x855 = -8273436LL;
	uint16_t x856 = 28U;
	volatile int64_t t102 = -41651874LL;

    t102 = ((x853|x854)/(x855/x856));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x857 = UINT64_MAX;
	int16_t x858 = INT16_MIN;
	volatile uint32_t x860 = 54U;
	volatile uint64_t t103 = 781563841861677167LLU;

    t103 = ((x857|x858)/(x859/x860));

    if (t103 != 412779431LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x861 = 3154049419LLU;
	int64_t x862 = -1LL;

    t104 = ((x861|x862)/(x863/x864));

    if (t104 != 737869762948382064LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x877 = -29;
	int64_t x878 = INT64_MAX;
	volatile uint16_t x879 = 67U;
	volatile int8_t x880 = 1;
	int64_t t105 = -4LL;

    t105 = ((x877|x878)/(x879/x880));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x885 = INT8_MAX;
	volatile int32_t x886 = -12405;
	uint32_t x887 = UINT32_MAX;
	volatile int32_t x888 = -1;

    t106 = ((x885|x886)/(x887/x888));

    if (t106 != 4294955007U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x889 = -1;
	int64_t x890 = INT64_MIN;
	static volatile int32_t x891 = INT32_MIN;
	volatile int16_t x892 = INT16_MAX;
	int64_t t107 = 15813572LL;

    t107 = ((x889|x890)/(x891/x892));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x893 = UINT16_MAX;
	int32_t x894 = INT32_MIN;
	int32_t x896 = 1;
	volatile uint32_t t108 = 229550U;

    t108 = ((x893|x894)/(x895/x896));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x905 = UINT64_MAX;
	uint64_t x906 = 217153552767547LLU;
	static int16_t x907 = -18;
	volatile uint64_t x908 = 4205487816724773387LLU;

    t109 = ((x905|x906)/(x907/x908));

    if (t109 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x933 = -50;
	int64_t x934 = -393091648LL;
	int16_t x935 = INT16_MIN;
	int16_t x936 = INT16_MAX;
	volatile int64_t t110 = -4500945LL;

    t110 = ((x933|x934)/(x935/x936));

    if (t110 != 50LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x938 = 0U;
	uint8_t x940 = UINT8_MAX;
	volatile int64_t t111 = -377292LL;

    t111 = ((x937|x938)/(x939/x940));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x941 = -2371;
	static int64_t x943 = INT64_MAX;
	uint8_t x944 = UINT8_MAX;
	static volatile int64_t t112 = 5638687LL;

    t112 = ((x941|x942)/(x943/x944));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x945 = INT8_MIN;
	uint8_t x946 = UINT8_MAX;
	int32_t x947 = INT32_MIN;
	static int32_t t113 = -45166868;

    t113 = ((x945|x946)/(x947/x948));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x954 = INT64_MIN;
	uint16_t x955 = 15287U;
	static int64_t t114 = 1LL;

    t114 = ((x953|x954)/(x955/x956));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x961 = -1;
	int16_t x962 = 0;
	uint64_t x964 = 949633490LLU;
	volatile uint64_t t115 = 2588807741348214907LLU;

    t115 = ((x961|x962)/(x963/x964));

    if (t115 != 949633490LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x965 = 9U;
	int16_t x966 = -1;
	uint64_t x967 = 1220736683169457LLU;
	uint8_t x968 = 18U;
	uint64_t t116 = 0LLU;

    t116 = ((x965|x966)/(x967/x968));

    if (t116 != 272000LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x970 = INT64_MAX;
	int16_t x972 = -1;
	volatile int64_t t117 = 502389318LL;

    t117 = ((x969|x970)/(x971/x972));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x986 = INT64_MAX;
	uint64_t x987 = UINT64_MAX;
	uint32_t x988 = 194U;
	static volatile uint64_t t118 = 44505731198887LLU;

    t118 = ((x985|x986)/(x987/x988));

    if (t118 != 194LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x989 = UINT64_MAX;
	static volatile uint8_t x990 = 12U;
	static volatile uint64_t t119 = UINT64_MAX;

    t119 = ((x989|x990)/(x991/x992));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x993 = 10U;
	int32_t x994 = INT32_MAX;
	uint32_t x995 = UINT32_MAX;
	volatile uint32_t t120 = 3213U;

    t120 = ((x993|x994)/(x995/x996));

    if (t120 != 2147483647U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x997 = 26;
	volatile uint64_t x998 = 1LLU;
	static uint64_t x999 = 117091655351LLU;
	uint8_t x1000 = UINT8_MAX;
	uint64_t t121 = 3865445336LLU;

    t121 = ((x997|x998)/(x999/x1000));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x1001 = 514963540LLU;
	uint32_t x1002 = 929990U;
	int64_t x1003 = 456079617985268LL;
	uint64_t t122 = 8234397141601072LLU;

    t122 = ((x1001|x1002)/(x1003/x1004));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x1005 = UINT8_MAX;
	volatile int16_t x1006 = 5;
	int64_t x1008 = -1LL;
	int64_t t123 = -1139507LL;

    t123 = ((x1005|x1006)/(x1007/x1008));

    if (t123 != 255LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x1010 = INT16_MIN;
	uint32_t x1012 = UINT32_MAX;
	int64_t t124 = 301711496925LL;

    t124 = ((x1009|x1010)/(x1011/x1012));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x1017 = INT8_MIN;
	static uint32_t t125 = 63U;

    t125 = ((x1017|x1018)/(x1019/x1020));

    if (t125 != 24U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x1025 = 2U;
	static volatile uint8_t x1026 = 71U;
	int64_t x1027 = INT64_MIN;
	uint32_t x1028 = UINT32_MAX;

    t126 = ((x1025|x1026)/(x1027/x1028));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x1029 = 127LLU;
	static volatile int64_t x1030 = INT64_MIN;
	static uint64_t t127 = 551450322292LLU;

    t127 = ((x1029|x1030)/(x1031/x1032));

    if (t127 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x1037 = UINT32_MAX;
	int16_t x1038 = -24;
	static int8_t x1039 = INT8_MIN;
	uint8_t x1040 = 27U;
	volatile uint32_t t128 = 17194423U;

    t128 = ((x1037|x1038)/(x1039/x1040));

    if (t128 != 1U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t t129 = 2663622315306LL;

    t129 = ((x1041|x1042)/(x1043/x1044));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x1045 = UINT64_MAX;
	int32_t x1047 = 542;
	int8_t x1048 = -10;
	uint64_t t130 = 198421721869271509LLU;

    t130 = ((x1045|x1046)/(x1047/x1048));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x1057 = 0;
	volatile int16_t x1058 = INT16_MAX;
	int16_t x1059 = 4394;
	uint8_t x1060 = 50U;
	volatile int32_t t131 = -1326;

    t131 = ((x1057|x1058)/(x1059/x1060));

    if (t131 != 376) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1062 = INT8_MAX;
	int16_t x1063 = -1;
	uint64_t x1064 = UINT64_MAX;
	uint64_t t132 = 6700389655304597LLU;

    t132 = ((x1061|x1062)/(x1063/x1064));

    if (t132 != 767LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1065 = INT16_MIN;
	static int64_t x1066 = INT64_MIN;
	static int16_t x1068 = -357;
	volatile int64_t t133 = 26LL;

    t133 = ((x1065|x1066)/(x1067/x1068));

    if (t133 != -3LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x1089 = UINT16_MAX;
	static volatile int8_t x1092 = -1;

    t134 = ((x1089|x1090)/(x1091/x1092));

    if (t134 != -236496718893710519LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x1095 = -81598988;
	static int16_t x1096 = -9;

    t135 = ((x1093|x1094)/(x1095/x1096));

    if (t135 != -1017296321938LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1110 = INT8_MIN;
	volatile uint64_t x1111 = 3563422446103279LLU;
	uint16_t x1112 = UINT16_MAX;
	uint64_t t136 = 3986054LLU;

    t136 = ((x1109|x1110)/(x1111/x1112));

    if (t136 != 339254576LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1117 = INT64_MAX;
	uint8_t x1118 = UINT8_MAX;
	static int64_t x1119 = INT64_MAX;
	uint32_t x1120 = UINT32_MAX;
	int64_t t137 = -43471994LL;

    t137 = ((x1117|x1118)/(x1119/x1120));

    if (t137 != 4294967295LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1121 = 73126LLU;
	int64_t x1122 = -1LL;
	static int32_t x1123 = 75391135;
	uint32_t x1124 = 2952111U;

    t138 = ((x1121|x1122)/(x1123/x1124));

    if (t138 != 737869762948382064LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x1126 = -303;
	static uint64_t x1127 = UINT64_MAX;
	int16_t x1128 = INT16_MAX;

    t139 = ((x1125|x1126)/(x1127/x1128));

    if (t139 != 32766LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x1129 = 786033402001109456LLU;
	int64_t x1130 = INT64_MIN;
	int64_t x1131 = INT64_MAX;
	int8_t x1132 = INT8_MAX;

    t140 = ((x1129|x1130)/(x1131/x1132));

    if (t140 != 137LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1146 = -1;
	int8_t x1148 = -24;
	volatile int64_t t141 = -5LL;

    t141 = ((x1145|x1146)/(x1147/x1148));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1161 = INT32_MAX;
	uint16_t x1162 = 8U;

    t142 = ((x1161|x1162)/(x1163/x1164));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1165 = 1;
	uint64_t x1168 = 969785754LLU;
	volatile uint64_t t143 = 58690LLU;

    t143 = ((x1165|x1166)/(x1167/x1168));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1177 = INT8_MIN;
	uint8_t x1178 = 1U;
	uint64_t x1179 = UINT64_MAX;
	int64_t x1180 = INT64_MIN;
	static uint64_t t144 = 102869137LLU;

    t144 = ((x1177|x1178)/(x1179/x1180));

    if (t144 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1182 = 856325U;
	int32_t x1183 = INT32_MIN;
	int8_t x1184 = INT8_MAX;
	volatile int64_t t145 = 52993295489945467LL;

    t145 = ((x1181|x1182)/(x1183/x1184));

    if (t145 != 545460848623LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1185 = 0;
	static uint32_t x1186 = 5181447U;
	int8_t x1188 = INT8_MIN;
	volatile uint32_t t146 = 68954839U;

    t146 = ((x1185|x1186)/(x1187/x1188));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1189 = INT8_MIN;
	int64_t x1190 = INT64_MAX;
	volatile int8_t x1191 = INT8_MIN;
	static volatile uint8_t x1192 = 29U;
	volatile int64_t t147 = -3298886334566355LL;

    t147 = ((x1189|x1190)/(x1191/x1192));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x1205 = INT64_MAX;
	uint16_t x1206 = 32735U;
	int32_t x1207 = INT32_MIN;
	volatile int64_t t148 = 46670314701LL;

    t148 = ((x1205|x1206)/(x1207/x1208));

    if (t148 != -15539203674225LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x1210 = INT32_MIN;
	static int16_t x1211 = INT16_MIN;
	static uint8_t x1212 = UINT8_MAX;

    t149 = ((x1209|x1210)/(x1211/x1212));

    if (t149 != 16777215) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x1237 = 1626410566609676LLU;
	int64_t x1238 = INT64_MIN;
	int64_t x1239 = INT64_MIN;
	static volatile uint64_t t150 = 1754312443047871186LLU;

    t150 = ((x1237|x1238)/(x1239/x1240));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1241 = 20117;
	volatile uint8_t x1242 = 1U;
	int8_t x1243 = INT8_MIN;
	static int8_t x1244 = -1;
	int32_t t151 = -340;

    t151 = ((x1241|x1242)/(x1243/x1244));

    if (t151 != 157) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1253 = 7U;
	int16_t x1254 = INT16_MAX;
	int8_t x1255 = INT8_MAX;
	int64_t t152 = 5302LL;

    t152 = ((x1253|x1254)/(x1255/x1256));

    if (t152 != -258LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1269 = 1U;
	int32_t x1270 = 125223;
	uint64_t x1271 = UINT64_MAX;
	static int8_t x1272 = INT8_MAX;
	uint64_t t153 = 674LLU;

    t153 = ((x1269|x1270)/(x1271/x1272));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1275 = 20255;
	int8_t x1276 = 25;
	uint32_t t154 = 10729U;

    t154 = ((x1273|x1274)/(x1275/x1276));

    if (t154 != 5302428U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x1290 = INT32_MIN;
	uint32_t x1292 = 179U;
	volatile int64_t t155 = 1060937LL;

    t155 = ((x1289|x1290)/(x1291/x1292));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x1309 = INT16_MIN;
	uint8_t x1310 = 19U;
	volatile int16_t x1311 = INT16_MIN;
	static int16_t x1312 = INT16_MAX;
	int32_t t156 = -295308201;

    t156 = ((x1309|x1310)/(x1311/x1312));

    if (t156 != 32749) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1321 = 29U;
	volatile int16_t x1323 = INT16_MIN;
	static int16_t x1324 = -1;
	int32_t t157 = -9164597;

    t157 = ((x1321|x1322)/(x1323/x1324));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1349 = 1;
	uint16_t x1350 = UINT16_MAX;
	volatile int8_t x1351 = INT8_MIN;
	int8_t x1352 = INT8_MAX;
	static int32_t t158 = -3277;

    t158 = ((x1349|x1350)/(x1351/x1352));

    if (t158 != -65535) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x1357 = INT64_MIN;
	volatile int8_t x1359 = INT8_MIN;
	int64_t x1360 = -1LL;
	static volatile int64_t t159 = -6206153534LL;

    t159 = ((x1357|x1358)/(x1359/x1360));

    if (t159 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x1373 = -228375;
	int64_t x1374 = -1LL;
	static int16_t x1375 = INT16_MIN;
	int16_t x1376 = INT16_MAX;
	volatile int64_t t160 = -267954452735588LL;

    t160 = ((x1373|x1374)/(x1375/x1376));

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1378 = INT8_MAX;
	int64_t x1379 = 16987313490090352LL;
	uint8_t x1380 = 22U;
	static int64_t t161 = 1251325831649LL;

    t161 = ((x1377|x1378)/(x1379/x1380));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1385 = INT32_MAX;
	uint64_t x1387 = UINT64_MAX;
	static volatile uint16_t x1388 = 930U;
	static uint64_t t162 = 2769LLU;

    t162 = ((x1385|x1386)/(x1387/x1388));

    if (t162 != 930LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1391 = 292385866;
	uint8_t x1392 = UINT8_MAX;
	volatile int32_t t163 = 3;

    t163 = ((x1389|x1390)/(x1391/x1392));

    if (t163 != 1872) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x1394 = 2U;
	uint8_t x1395 = 13U;
	volatile int64_t x1396 = -1LL;
	int64_t t164 = 70004312LL;

    t164 = ((x1393|x1394)/(x1395/x1396));

    if (t164 != -4LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x1402 = -58;
	int32_t x1403 = 7169173;
	int8_t x1404 = INT8_MIN;

    t165 = ((x1401|x1402)/(x1403/x1404));

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1405 = -1;
	int16_t x1406 = INT16_MAX;
	uint16_t x1407 = 567U;
	uint8_t x1408 = UINT8_MAX;
	static volatile int32_t t166 = -131929039;

    t166 = ((x1405|x1406)/(x1407/x1408));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x1417 = INT32_MIN;
	int8_t x1419 = INT8_MIN;
	int64_t x1420 = -1LL;

    t167 = ((x1417|x1418)/(x1419/x1420));

    if (t167 != 16777256LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x1431 = UINT32_MAX;
	volatile int64_t t168 = 48684632LL;

    t168 = ((x1429|x1430)/(x1431/x1432));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1441 = 1750760858U;
	uint16_t x1442 = 11046U;
	int64_t x1443 = INT64_MAX;
	volatile int32_t x1444 = INT32_MIN;
	volatile int64_t t169 = 25526646682LL;

    t169 = ((x1441|x1442)/(x1443/x1444));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1461 = INT16_MAX;
	uint32_t x1462 = 617782855U;
	uint32_t x1463 = UINT32_MAX;
	int32_t x1464 = -1;
	volatile uint32_t t170 = 363860U;

    t170 = ((x1461|x1462)/(x1463/x1464));

    if (t170 != 617807871U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1469 = -1;
	static uint16_t x1471 = 6U;
	int8_t x1472 = -1;
	volatile uint64_t t171 = 37LLU;

    t171 = ((x1469|x1470)/(x1471/x1472));

    if (t171 != 1LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1473 = -1;
	int32_t x1474 = 43596444;
	int64_t x1475 = -6630LL;

    t172 = ((x1473|x1474)/(x1475/x1476));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x1481 = 82905051LLU;
	volatile uint64_t x1483 = UINT64_MAX;
	int16_t x1484 = -2;
	volatile uint64_t t173 = UINT64_MAX;

    t173 = ((x1481|x1482)/(x1483/x1484));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x1489 = 255180534630423LL;
	static volatile int64_t x1490 = -1235414691790LL;
	uint32_t x1492 = 7654929U;
	volatile int64_t t174 = 6031LL;

    t174 = ((x1489|x1490)/(x1491/x1492));

    if (t174 != -44770LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1497 = INT32_MIN;
	static uint16_t x1500 = 64U;
	volatile int64_t t175 = -474072LL;

    t175 = ((x1497|x1498)/(x1499/x1500));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1506 = INT32_MAX;
	volatile int64_t x1507 = INT64_MIN;
	volatile int64_t t176 = 198555735LL;

    t176 = ((x1505|x1506)/(x1507/x1508));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x1509 = 2U;
	uint8_t x1510 = 13U;
	uint32_t x1511 = 4254686U;
	int16_t x1512 = 62;

    t177 = ((x1509|x1510)/(x1511/x1512));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1513 = -923;
	int16_t x1514 = -7666;
	volatile uint64_t x1515 = UINT64_MAX;
	int8_t x1516 = INT8_MIN;

    t178 = ((x1513|x1514)/(x1515/x1516));

    if (t178 != 18446744073709551215LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1517 = INT16_MAX;
	int64_t x1518 = INT64_MIN;
	int64_t t179 = 52667077001551232LL;

    t179 = ((x1517|x1518)/(x1519/x1520));

    if (t179 != 658812288346767360LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1525 = 13U;
	static int32_t x1526 = 16614985;
	int64_t x1527 = INT64_MIN;
	static volatile int8_t x1528 = 23;
	volatile int64_t t180 = 0LL;

    t180 = ((x1525|x1526)/(x1527/x1528));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1533 = -1;
	int8_t x1535 = 47;
	static int8_t x1536 = -1;
	int32_t t181 = 472614;

    t181 = ((x1533|x1534)/(x1535/x1536));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x1539 = -18;
	int8_t x1540 = 1;
	static volatile int32_t t182 = -1;

    t182 = ((x1537|x1538)/(x1539/x1540));

    if (t182 != -21011320) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1542 = INT16_MAX;
	int16_t x1543 = INT16_MIN;
	int16_t x1544 = -197;
	uint32_t t183 = 47678494U;

    t183 = ((x1541|x1542)/(x1543/x1544));

    if (t183 != 25873296U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1545 = UINT8_MAX;
	uint8_t x1546 = 3U;
	uint16_t x1547 = 120U;

    t184 = ((x1545|x1546)/(x1547/x1548));

    if (t184 != -2) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x1551 = 952359853U;
	int8_t x1552 = 29;
	static uint32_t t185 = 87747068U;

    t185 = ((x1549|x1550)/(x1551/x1552));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1557 = INT64_MAX;
	uint32_t x1558 = 4U;
	static uint64_t x1559 = UINT64_MAX;
	volatile uint64_t t186 = 1991400195LLU;

    t186 = ((x1557|x1558)/(x1559/x1560));

    if (t186 != 1073741823LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x1565 = 0;
	int8_t x1566 = INT8_MAX;
	int32_t x1567 = 8086883;
	volatile uint8_t x1568 = 59U;

    t187 = ((x1565|x1566)/(x1567/x1568));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1573 = INT8_MAX;
	volatile int8_t x1574 = INT8_MIN;
	uint64_t x1575 = UINT64_MAX;
	uint8_t x1576 = 20U;
	uint64_t t188 = 65601388360503LLU;

    t188 = ((x1573|x1574)/(x1575/x1576));

    if (t188 != 20LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1581 = 956166407LLU;
	volatile int32_t x1582 = INT32_MIN;
	int64_t x1583 = INT64_MIN;
	int16_t x1584 = INT16_MIN;
	uint64_t t189 = 128543694LLU;

    t189 = ((x1581|x1582)/(x1583/x1584));

    if (t189 != 65535LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1586 = 3U;
	static int16_t x1588 = 1;

    t190 = ((x1585|x1586)/(x1587/x1588));

    if (t190 != -1489) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1593 = INT32_MAX;
	int8_t x1594 = -14;
	int64_t x1595 = INT64_MIN;
	int64_t x1596 = -2403910050613LL;
	static int64_t t191 = -368LL;

    t191 = ((x1593|x1594)/(x1595/x1596));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x1617 = 20429U;
	int16_t x1618 = -1;
	uint16_t x1619 = 12070U;
	uint8_t x1620 = UINT8_MAX;

    t192 = ((x1617|x1618)/(x1619/x1620));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1621 = 34200834;
	static int16_t x1622 = INT16_MIN;
	int16_t x1624 = INT16_MIN;
	int64_t t193 = 209624855LL;

    t193 = ((x1621|x1622)/(x1623/x1624));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1633 = INT64_MIN;
	uint32_t x1634 = 1093111U;
	uint16_t x1635 = UINT16_MAX;
	int8_t x1636 = -1;
	volatile int64_t t194 = -917626346030847LL;

    t194 = ((x1633|x1634)/(x1635/x1636));

    if (t194 != 140739635871727LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x1637 = 30009772157LLU;
	volatile int32_t x1638 = -1;
	static int32_t x1639 = INT32_MIN;
	int16_t x1640 = -135;
	uint64_t t195 = 367151LLU;

    t195 = ((x1637|x1638)/(x1639/x1640));

    if (t195 != 1159641190440LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1642 = UINT16_MAX;
	int32_t x1643 = 269705431;
	static int16_t x1644 = INT16_MAX;
	static volatile int64_t t196 = 5342228079795467LL;

    t196 = ((x1641|x1642)/(x1643/x1644));

    if (t196 != -1120565184893051LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1649 = INT16_MIN;
	int64_t x1650 = INT64_MIN;
	uint64_t x1651 = 443387316623LLU;
	volatile uint64_t t197 = 301039LLU;

    t197 = ((x1649|x1650)/(x1651/x1652));

    if (t197 != 89547301328686984LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x1653 = INT32_MIN;
	volatile int32_t x1654 = INT32_MIN;
	static volatile int16_t x1655 = INT16_MAX;
	int8_t x1656 = INT8_MIN;
	volatile int32_t t198 = -1;

    t198 = ((x1653|x1654)/(x1655/x1656));

    if (t198 != 8421504) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1661 = INT32_MAX;
	int8_t x1662 = INT8_MAX;
	int64_t x1663 = -7772096706601110LL;
	int32_t x1664 = -1;
	int64_t t199 = 19LL;

    t199 = ((x1661|x1662)/(x1663/x1664));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

