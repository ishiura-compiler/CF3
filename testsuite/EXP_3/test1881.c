
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

int8_t x6 = INT8_MIN;
int16_t x7 = -1;
int8_t x12 = INT8_MAX;
int32_t x43 = INT32_MIN;
int32_t x46 = INT32_MIN;
int32_t t5 = 2;
int32_t t6 = 0;
uint16_t x70 = 13U;
volatile uint64_t x84 = 1871LLU;
volatile int32_t t9 = 43097;
static volatile int32_t t10 = -971;
int16_t x90 = INT16_MIN;
uint64_t x91 = 3273697595989LLU;
int64_t x94 = INT64_MIN;
uint16_t x101 = 275U;
volatile uint64_t x107 = 19553LLU;
int32_t t14 = 38;
static volatile int32_t t15 = -26976;
uint32_t x115 = 34048405U;
int8_t x121 = INT8_MIN;
volatile int16_t x122 = INT16_MAX;
uint16_t x123 = UINT16_MAX;
int8_t x125 = INT8_MAX;
static int32_t x136 = INT32_MAX;
int32_t x139 = INT32_MIN;
int8_t x140 = INT8_MIN;
uint16_t x145 = 11689U;
uint16_t x148 = UINT16_MAX;
static volatile int16_t x157 = INT16_MAX;
static int16_t x162 = INT16_MAX;
int32_t x181 = INT32_MIN;
int64_t x184 = INT64_MAX;
int32_t t24 = 55398966;
static int32_t x191 = 22;
volatile int64_t x193 = INT64_MIN;
volatile uint16_t x195 = 5U;
int32_t x201 = INT32_MAX;
static int32_t t31 = 83226708;
uint16_t x230 = UINT16_MAX;
volatile int8_t x231 = INT8_MAX;
int16_t x233 = INT16_MIN;
uint32_t x265 = 841509U;
int16_t x267 = -15;
int32_t t37 = 48;
static int64_t x280 = INT64_MAX;
int8_t x285 = 5;
static int32_t x294 = INT32_MAX;
int32_t x299 = -3514178;
volatile int32_t t41 = -812943770;
int16_t x301 = INT16_MAX;
static uint8_t x302 = UINT8_MAX;
static uint32_t x317 = UINT32_MAX;
volatile uint16_t x318 = UINT16_MAX;
volatile int32_t t43 = -91;
int8_t x323 = -32;
uint8_t x330 = 2U;
int16_t x331 = INT16_MAX;
static int8_t x339 = -30;
int8_t x340 = -1;
int64_t x343 = INT64_MIN;
static volatile int32_t t49 = 13655;
static volatile int32_t t50 = 89;
volatile int32_t t54 = -3;
int32_t x417 = INT32_MIN;
volatile uint8_t x421 = UINT8_MAX;
int32_t t56 = -280;
static volatile int16_t x428 = -1;
volatile int16_t x432 = INT16_MAX;
int8_t x459 = INT8_MIN;
static int32_t t62 = 39225177;
uint64_t x482 = UINT64_MAX;
static int16_t x490 = -5299;
static volatile uint16_t x494 = 7086U;
int32_t x509 = INT32_MIN;
static uint32_t x513 = UINT32_MAX;
volatile int8_t x520 = INT8_MIN;
int8_t x547 = -1;
uint8_t x568 = UINT8_MAX;
volatile int32_t t75 = 1;
uint8_t x574 = UINT8_MAX;
volatile int64_t x582 = -1LL;
uint64_t x583 = 294002LLU;
int16_t x612 = INT16_MAX;
volatile int32_t t80 = 240;
int32_t t81 = -77149118;
int32_t x645 = INT32_MIN;
int64_t x665 = -10768113632733LL;
volatile int16_t x683 = INT16_MIN;
uint64_t x692 = UINT64_MAX;
volatile int32_t t88 = -76145;
int16_t x709 = -1;
int32_t t91 = -1195733;
int8_t x721 = INT8_MAX;
volatile uint8_t x735 = 117U;
volatile int32_t t93 = 8551;
static int32_t x739 = INT32_MIN;
static uint16_t x740 = UINT16_MAX;
int32_t x741 = INT32_MIN;
uint16_t x743 = 190U;
int16_t x746 = 207;
static volatile int32_t t98 = 449561878;
uint8_t x785 = 74U;
uint32_t x789 = UINT32_MAX;
volatile int32_t t104 = 9;
static int64_t x813 = -2195LL;
volatile uint16_t x824 = UINT16_MAX;
static int32_t x834 = INT32_MAX;
int32_t t109 = -25748491;
uint64_t x848 = 2013074039936442LLU;
int64_t x855 = -1LL;
uint16_t x860 = UINT16_MAX;
uint32_t x867 = UINT32_MAX;
volatile int32_t t114 = 1;
int64_t x871 = -1LL;
volatile int8_t x882 = INT8_MAX;
static int16_t x899 = -492;
static int8_t x904 = INT8_MAX;
int64_t x927 = INT64_MIN;
int32_t t120 = 274556083;
static volatile uint64_t x951 = 471LLU;
int32_t x955 = -1;
volatile int32_t x960 = 12164838;
int32_t t127 = 245;
int8_t x981 = -4;
int64_t x983 = INT64_MIN;
uint16_t x984 = UINT16_MAX;
uint16_t x1006 = 4U;
int16_t x1019 = -1;
int32_t t131 = -1878;
volatile int32_t x1031 = -1;
int8_t x1035 = INT8_MIN;
uint64_t x1046 = 6LLU;
static int8_t x1048 = -1;
static int32_t t135 = -14754483;
static int8_t x1056 = -2;
int32_t t137 = -50;
volatile int32_t x1073 = 282816675;
static int16_t x1079 = INT16_MIN;
int16_t x1080 = INT16_MIN;
int32_t t139 = -65376;
int16_t x1088 = -1;
static int8_t x1092 = -1;
int8_t x1093 = INT8_MIN;
uint32_t x1097 = 31746485U;
int32_t t143 = 29028504;
int64_t x1135 = INT64_MIN;
volatile int32_t t145 = -16;
int8_t x1140 = INT8_MIN;
int32_t x1142 = INT32_MIN;
int8_t x1143 = INT8_MIN;
uint16_t x1174 = 56U;
int16_t x1175 = 239;
int16_t x1180 = INT16_MIN;
int8_t x1187 = INT8_MIN;
static int64_t x1191 = -1LL;
uint64_t x1206 = UINT64_MAX;
volatile int32_t t154 = -3669;
int64_t x1235 = -215042072536981LL;
int8_t x1236 = -14;
static volatile uint8_t x1242 = 0U;
volatile uint32_t x1243 = 12164U;
int64_t x1251 = -1LL;
int16_t x1252 = INT16_MAX;
uint16_t x1253 = UINT16_MAX;
int16_t x1256 = INT16_MAX;
uint8_t x1257 = 0U;
int8_t x1259 = -1;
int32_t x1262 = 0;
int32_t t160 = -129848010;
int16_t x1273 = INT16_MIN;
int32_t t163 = -3835;
int8_t x1289 = INT8_MIN;
int32_t x1291 = INT32_MIN;
volatile int8_t x1307 = 2;
int32_t t167 = 154142877;
int32_t x1317 = 13164;
uint16_t x1321 = 6U;
int32_t x1322 = INT32_MIN;
uint8_t x1325 = 62U;
static int32_t t170 = 594;
volatile int8_t x1336 = INT8_MAX;
volatile int32_t t171 = -15;
uint32_t x1342 = 9762821U;
int32_t x1354 = 98880317;
static uint8_t x1357 = 0U;
static int16_t x1365 = -1;
static volatile int32_t t176 = -38597034;
uint32_t x1379 = 58380U;
volatile int32_t t177 = -100378347;
int64_t x1381 = INT64_MAX;
int32_t x1382 = INT32_MIN;
int32_t t178 = 3;
volatile uint64_t x1385 = 1248859262648775LLU;
static int16_t x1386 = INT16_MIN;
static uint16_t x1394 = 427U;
uint8_t x1396 = 14U;
volatile uint16_t x1404 = 1313U;
uint8_t x1415 = 3U;
uint16_t x1416 = 7U;
static int32_t t184 = 21304776;
int32_t t185 = -11;
static volatile uint16_t x1431 = 78U;
static volatile int32_t t187 = 635;
int16_t x1458 = -1;
int32_t x1459 = INT32_MIN;
int64_t x1476 = INT64_MIN;
static int64_t x1482 = 1103702311975487LL;
int16_t x1483 = -11808;
int32_t t193 = 146929167;
volatile int32_t t194 = -15989703;
volatile int32_t t197 = -627524966;
uint32_t x1517 = 49416063U;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	int32_t x8 = -1;
	static volatile int32_t t0 = 45;

    t0 = ((x5>x6)%(x7<=x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = UINT8_MAX;
	static int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	volatile int32_t t1 = -1459590;

    t1 = ((x9>x10)%(x11<=x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x41 = -408;
	uint32_t x42 = UINT32_MAX;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t2 = 1898;

    t2 = ((x41>x42)%(x43<=x44));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x45 = INT16_MAX;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t3 = -404392;

    t3 = ((x45>x46)%(x47<=x48));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x49 = INT8_MIN;
	static int16_t x50 = INT16_MIN;
	int64_t x51 = -1LL;
	int32_t x52 = 35315;
	volatile int32_t t4 = 32;

    t4 = ((x49>x50)%(x51<=x52));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x57 = 0U;
	int16_t x58 = INT16_MAX;
	int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MIN;

    t5 = ((x57>x58)%(x59<=x60));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x61 = INT16_MAX;
	int16_t x62 = -1;
	static volatile int64_t x63 = -1LL;
	int32_t x64 = -1;

    t6 = ((x61>x62)%(x63<=x64));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x65 = 2735;
	uint64_t x66 = UINT64_MAX;
	static uint64_t x67 = 1740493414920LLU;
	int64_t x68 = INT64_MIN;
	volatile int32_t t7 = 0;

    t7 = ((x65>x66)%(x67<=x68));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x69 = -1;
	int32_t x71 = -17323345;
	volatile uint16_t x72 = 31096U;
	static int32_t t8 = -265707;

    t8 = ((x69>x70)%(x71<=x72));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x81 = INT16_MIN;
	uint32_t x82 = UINT32_MAX;
	volatile uint8_t x83 = 50U;

    t9 = ((x81>x82)%(x83<=x84));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x85 = -1LL;
	volatile int32_t x86 = -47;
	volatile int64_t x87 = -6882LL;
	int8_t x88 = INT8_MAX;

    t10 = ((x85>x86)%(x87<=x88));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x89 = 8U;
	int8_t x92 = -11;
	int32_t t11 = -31;

    t11 = ((x89>x90)%(x91<=x92));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x93 = UINT16_MAX;
	int64_t x95 = -1LL;
	static int64_t x96 = -1LL;
	static volatile int32_t t12 = 52;

    t12 = ((x93>x94)%(x95<=x96));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x102 = INT32_MAX;
	static volatile uint8_t x103 = 1U;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t13 = -30745;

    t13 = ((x101>x102)%(x103<=x104));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	static int16_t x108 = INT16_MIN;

    t14 = ((x105>x106)%(x107<=x108));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x109 = INT64_MAX;
	int8_t x110 = 32;
	int64_t x111 = 7LL;
	volatile uint32_t x112 = UINT32_MAX;

    t15 = ((x109>x110)%(x111<=x112));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x113 = 63U;
	uint16_t x114 = UINT16_MAX;
	int32_t x116 = INT32_MAX;
	static int32_t t16 = -5853368;

    t16 = ((x113>x114)%(x115<=x116));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x124 = INT32_MAX;
	int32_t t17 = -230;

    t17 = ((x121>x122)%(x123<=x124));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x126 = 128U;
	volatile uint8_t x127 = 6U;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t18 = -3;

    t18 = ((x125>x126)%(x127<=x128));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x133 = 45U;
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = 347;
	int32_t t19 = 5;

    t19 = ((x133>x134)%(x135<=x136));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MIN;
	int32_t t20 = 264;

    t20 = ((x137>x138)%(x139<=x140));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x146 = INT32_MIN;
	volatile uint8_t x147 = 7U;
	static int32_t t21 = 0;

    t21 = ((x145>x146)%(x147<=x148));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x158 = INT16_MAX;
	int32_t x159 = -1866;
	int16_t x160 = 1;
	volatile int32_t t22 = 24;

    t22 = ((x157>x158)%(x159<=x160));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x161 = INT16_MIN;
	int64_t x163 = INT64_MIN;
	int64_t x164 = 1700676319LL;
	volatile int32_t t23 = -84116098;

    t23 = ((x161>x162)%(x163<=x164));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x182 = 107239;
	int8_t x183 = INT8_MIN;

    t24 = ((x181>x182)%(x183<=x184));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x185 = 446029LL;
	uint64_t x186 = UINT64_MAX;
	static int64_t x187 = INT64_MIN;
	volatile uint16_t x188 = 3U;
	static volatile int32_t t25 = -25301040;

    t25 = ((x185>x186)%(x187<=x188));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x189 = -67277392461125883LL;
	int16_t x190 = -23;
	int64_t x192 = 2437LL;
	static volatile int32_t t26 = -2759765;

    t26 = ((x189>x190)%(x191<=x192));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x194 = -353581LL;
	volatile int32_t x196 = 581904;
	static int32_t t27 = 1;

    t27 = ((x193>x194)%(x195<=x196));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x202 = 6052282796725783292LLU;
	static volatile uint16_t x203 = 499U;
	uint32_t x204 = 49347750U;
	int32_t t28 = -26432;

    t28 = ((x201>x202)%(x203<=x204));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x213 = 4U;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = INT64_MIN;
	uint16_t x216 = 17927U;
	volatile int32_t t29 = 112192121;

    t29 = ((x213>x214)%(x215<=x216));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x221 = 3U;
	static uint16_t x222 = UINT16_MAX;
	int32_t x223 = -1;
	int8_t x224 = INT8_MAX;
	int32_t t30 = -631207;

    t30 = ((x221>x222)%(x223<=x224));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x225 = 12699;
	volatile int16_t x226 = -11390;
	static int8_t x227 = 4;
	volatile uint64_t x228 = 44011LLU;

    t31 = ((x225>x226)%(x227<=x228));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x229 = INT16_MAX;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t32 = 51615;

    t32 = ((x229>x230)%(x231<=x232));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x234 = INT16_MIN;
	int32_t x235 = 204;
	uint64_t x236 = 3119LLU;
	volatile int32_t t33 = 9;

    t33 = ((x233>x234)%(x235<=x236));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x253 = INT16_MIN;
	uint8_t x254 = 7U;
	int16_t x255 = -1;
	int64_t x256 = 5631476566579LL;
	static volatile int32_t t34 = -3637;

    t34 = ((x253>x254)%(x255<=x256));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x257 = UINT16_MAX;
	static int32_t x258 = 216874871;
	uint8_t x259 = 29U;
	uint64_t x260 = 599285703719654LLU;
	volatile int32_t t35 = 247639443;

    t35 = ((x257>x258)%(x259<=x260));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x266 = 7164571599LLU;
	volatile int8_t x268 = INT8_MAX;
	int32_t t36 = -41870741;

    t36 = ((x265>x266)%(x267<=x268));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x273 = INT16_MAX;
	int8_t x274 = 1;
	int8_t x275 = INT8_MIN;
	static volatile int8_t x276 = INT8_MIN;

    t37 = ((x273>x274)%(x275<=x276));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x277 = -2201;
	static volatile uint16_t x278 = 16293U;
	static volatile int32_t x279 = 45;
	volatile int32_t t38 = -1;

    t38 = ((x277>x278)%(x279<=x280));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x286 = 5;
	int64_t x287 = -1LL;
	int64_t x288 = INT64_MAX;
	volatile int32_t t39 = 146;

    t39 = ((x285>x286)%(x287<=x288));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x293 = -1884362LL;
	int32_t x295 = INT32_MIN;
	volatile int64_t x296 = -1LL;
	volatile int32_t t40 = 199289121;

    t40 = ((x293>x294)%(x295<=x296));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MIN;
	int8_t x300 = INT8_MAX;

    t41 = ((x297>x298)%(x299<=x300));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x303 = 22094;
	int64_t x304 = INT64_MAX;
	int32_t t42 = 115613545;

    t42 = ((x301>x302)%(x303<=x304));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x319 = INT32_MIN;
	volatile int32_t x320 = -157;

    t43 = ((x317>x318)%(x319<=x320));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x321 = 2690LLU;
	volatile int64_t x322 = INT64_MIN;
	int8_t x324 = INT8_MAX;
	volatile int32_t t44 = -3;

    t44 = ((x321>x322)%(x323<=x324));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x325 = -1;
	static int16_t x326 = INT16_MIN;
	uint32_t x327 = 66549197U;
	volatile int32_t x328 = INT32_MAX;
	static int32_t t45 = -1734750;

    t45 = ((x325>x326)%(x327<=x328));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x329 = -14;
	uint16_t x332 = UINT16_MAX;
	int32_t t46 = 4;

    t46 = ((x329>x330)%(x331<=x332));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x337 = 13U;
	static uint16_t x338 = 62U;
	int32_t t47 = 592;

    t47 = ((x337>x338)%(x339<=x340));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x341 = UINT8_MAX;
	uint8_t x342 = UINT8_MAX;
	int16_t x344 = -1;
	volatile int32_t t48 = 0;

    t48 = ((x341>x342)%(x343<=x344));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x361 = 604283956920120777LLU;
	int64_t x362 = 46123752072LL;
	volatile int8_t x363 = -6;
	uint16_t x364 = 0U;

    t49 = ((x361>x362)%(x363<=x364));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x373 = -1;
	static uint8_t x374 = 76U;
	static int32_t x375 = INT32_MIN;
	volatile int64_t x376 = INT64_MAX;

    t50 = ((x373>x374)%(x375<=x376));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x377 = 769U;
	int16_t x378 = -1;
	static int16_t x379 = -1;
	int32_t x380 = -1;
	int32_t t51 = -1028;

    t51 = ((x377>x378)%(x379<=x380));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x381 = 31;
	volatile int32_t x382 = INT32_MIN;
	int64_t x383 = -79228432LL;
	uint64_t x384 = UINT64_MAX;
	static volatile int32_t t52 = -15159077;

    t52 = ((x381>x382)%(x383<=x384));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x405 = UINT8_MAX;
	int64_t x406 = -1LL;
	int32_t x407 = -1;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t53 = 3637;

    t53 = ((x405>x406)%(x407<=x408));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x413 = UINT16_MAX;
	static int64_t x414 = INT64_MIN;
	int8_t x415 = 6;
	int16_t x416 = 642;

    t54 = ((x413>x414)%(x415<=x416));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x418 = 20171902U;
	uint32_t x419 = 23U;
	static int32_t x420 = 93;
	int32_t t55 = -7;

    t55 = ((x417>x418)%(x419<=x420));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x422 = 1604U;
	uint64_t x423 = UINT64_MAX;
	static int32_t x424 = -1;

    t56 = ((x421>x422)%(x423<=x424));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x425 = 558005U;
	int64_t x426 = INT64_MIN;
	int32_t x427 = INT32_MIN;
	volatile int32_t t57 = 2503;

    t57 = ((x425>x426)%(x427<=x428));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x429 = -1;
	static int32_t x430 = -22;
	static int8_t x431 = 1;
	volatile int32_t t58 = -2857;

    t58 = ((x429>x430)%(x431<=x432));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x433 = INT8_MIN;
	volatile int32_t x434 = INT32_MIN;
	int64_t x435 = -1LL;
	static int32_t x436 = -1;
	static volatile int32_t t59 = -56;

    t59 = ((x433>x434)%(x435<=x436));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x457 = 43U;
	int8_t x458 = INT8_MAX;
	uint16_t x460 = UINT16_MAX;
	static volatile int32_t t60 = 14889807;

    t60 = ((x457>x458)%(x459<=x460));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x465 = INT32_MIN;
	int64_t x466 = -1LL;
	int8_t x467 = INT8_MIN;
	int8_t x468 = INT8_MIN;
	int32_t t61 = 107;

    t61 = ((x465>x466)%(x467<=x468));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x473 = 701614U;
	int32_t x474 = -13822;
	volatile uint32_t x475 = 12125375U;
	volatile int16_t x476 = -5;

    t62 = ((x473>x474)%(x475<=x476));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x477 = INT8_MIN;
	int8_t x478 = -1;
	volatile int32_t x479 = INT32_MAX;
	int64_t x480 = 271680277992014826LL;
	volatile int32_t t63 = 141589514;

    t63 = ((x477>x478)%(x479<=x480));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x481 = UINT32_MAX;
	int32_t x483 = -1;
	int64_t x484 = INT64_MAX;
	int32_t t64 = -5983355;

    t64 = ((x481>x482)%(x483<=x484));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x485 = INT16_MAX;
	int32_t x486 = -102;
	int32_t x487 = INT32_MIN;
	uint8_t x488 = 51U;
	static int32_t t65 = -1742023;

    t65 = ((x485>x486)%(x487<=x488));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x489 = -1;
	volatile int64_t x491 = INT64_MIN;
	int8_t x492 = INT8_MAX;
	int32_t t66 = 150802405;

    t66 = ((x489>x490)%(x491<=x492));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x493 = 3643U;
	int64_t x495 = INT64_MIN;
	int64_t x496 = INT64_MIN;
	static int32_t t67 = -1;

    t67 = ((x493>x494)%(x495<=x496));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x497 = -1;
	int16_t x498 = INT16_MIN;
	volatile int16_t x499 = -1;
	uint8_t x500 = UINT8_MAX;
	volatile int32_t t68 = -159;

    t68 = ((x497>x498)%(x499<=x500));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x510 = -2285;
	uint32_t x511 = 80U;
	int8_t x512 = -1;
	int32_t t69 = 417003;

    t69 = ((x509>x510)%(x511<=x512));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x514 = UINT32_MAX;
	int8_t x515 = INT8_MAX;
	int64_t x516 = 372784709LL;
	volatile int32_t t70 = 1;

    t70 = ((x513>x514)%(x515<=x516));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x517 = 14U;
	volatile int16_t x518 = 0;
	static int32_t x519 = INT32_MIN;
	volatile int32_t t71 = 6518473;

    t71 = ((x517>x518)%(x519<=x520));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x545 = 141636;
	static int16_t x546 = 768;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t72 = -2403;

    t72 = ((x545>x546)%(x547<=x548));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x549 = INT8_MIN;
	int32_t x550 = INT32_MIN;
	int64_t x551 = 114573LL;
	static volatile uint32_t x552 = 928994U;
	int32_t t73 = -107086411;

    t73 = ((x549>x550)%(x551<=x552));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x557 = INT8_MIN;
	volatile int64_t x558 = INT64_MIN;
	static int32_t x559 = -602;
	uint64_t x560 = UINT64_MAX;
	volatile int32_t t74 = 1;

    t74 = ((x557>x558)%(x559<=x560));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x565 = -1LL;
	int64_t x566 = 3029561352LL;
	volatile uint8_t x567 = 44U;

    t75 = ((x565>x566)%(x567<=x568));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x573 = INT16_MIN;
	int32_t x575 = -1;
	int64_t x576 = -1LL;
	int32_t t76 = -1406067;

    t76 = ((x573>x574)%(x575<=x576));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x577 = INT8_MAX;
	volatile uint32_t x578 = UINT32_MAX;
	int64_t x579 = INT64_MIN;
	volatile int16_t x580 = INT16_MIN;
	int32_t t77 = 0;

    t77 = ((x577>x578)%(x579<=x580));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x581 = 179632800179877LLU;
	int64_t x584 = INT64_MIN;
	volatile int32_t t78 = -3977029;

    t78 = ((x581>x582)%(x583<=x584));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x597 = -101;
	int64_t x598 = -1LL;
	int64_t x599 = -314525LL;
	int32_t x600 = -1;
	int32_t t79 = -363612;

    t79 = ((x597>x598)%(x599<=x600));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x609 = -5786;
	static uint64_t x610 = 31749LLU;
	int32_t x611 = 1;

    t80 = ((x609>x610)%(x611<=x612));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x621 = 3U;
	volatile int32_t x622 = INT32_MAX;
	int64_t x623 = INT64_MIN;
	static int8_t x624 = INT8_MAX;

    t81 = ((x621>x622)%(x623<=x624));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x633 = -22384255LL;
	static uint8_t x634 = UINT8_MAX;
	int8_t x635 = INT8_MIN;
	int64_t x636 = -1LL;
	volatile int32_t t82 = -17889;

    t82 = ((x633>x634)%(x635<=x636));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x646 = INT8_MIN;
	uint64_t x647 = 8896685895565491973LLU;
	int64_t x648 = INT64_MIN;
	static int32_t t83 = 152;

    t83 = ((x645>x646)%(x647<=x648));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x661 = INT16_MAX;
	int64_t x662 = INT64_MIN;
	int32_t x663 = 109282;
	static int64_t x664 = INT64_MAX;
	volatile int32_t t84 = -44512;

    t84 = ((x661>x662)%(x663<=x664));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x666 = INT16_MIN;
	int8_t x667 = -12;
	int8_t x668 = -1;
	int32_t t85 = -62798564;

    t85 = ((x665>x666)%(x667<=x668));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x681 = INT8_MIN;
	volatile int64_t x682 = -1LL;
	volatile int8_t x684 = INT8_MIN;
	int32_t t86 = -539315369;

    t86 = ((x681>x682)%(x683<=x684));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x685 = 29U;
	int16_t x686 = INT16_MIN;
	uint8_t x687 = 3U;
	uint8_t x688 = UINT8_MAX;
	int32_t t87 = 214;

    t87 = ((x685>x686)%(x687<=x688));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x689 = UINT8_MAX;
	int64_t x690 = INT64_MAX;
	uint32_t x691 = UINT32_MAX;

    t88 = ((x689>x690)%(x691<=x692));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x697 = INT32_MIN;
	int64_t x698 = -1LL;
	volatile uint8_t x699 = UINT8_MAX;
	uint64_t x700 = UINT64_MAX;
	static volatile int32_t t89 = 3308;

    t89 = ((x697>x698)%(x699<=x700));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x710 = 1U;
	static uint64_t x711 = 14LLU;
	int64_t x712 = -65465LL;
	static volatile int32_t t90 = -69525194;

    t90 = ((x709>x710)%(x711<=x712));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x717 = INT64_MAX;
	int8_t x718 = -1;
	int32_t x719 = INT32_MIN;
	int32_t x720 = INT32_MAX;

    t91 = ((x717>x718)%(x719<=x720));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x722 = UINT64_MAX;
	volatile uint8_t x723 = UINT8_MAX;
	volatile int32_t x724 = INT32_MAX;
	volatile int32_t t92 = 670160;

    t92 = ((x721>x722)%(x723<=x724));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x733 = INT32_MIN;
	int32_t x734 = 426787;
	static volatile uint8_t x736 = UINT8_MAX;

    t93 = ((x733>x734)%(x735<=x736));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x737 = -7;
	int8_t x738 = INT8_MIN;
	int32_t t94 = 24107344;

    t94 = ((x737>x738)%(x739<=x740));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x742 = -1;
	uint64_t x744 = 732464275622LLU;
	int32_t t95 = -1;

    t95 = ((x741>x742)%(x743<=x744));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x745 = INT16_MIN;
	int32_t x747 = -1;
	int16_t x748 = -1;
	volatile int32_t t96 = -75773;

    t96 = ((x745>x746)%(x747<=x748));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x757 = UINT8_MAX;
	volatile uint32_t x758 = 156774488U;
	uint16_t x759 = 13U;
	volatile uint32_t x760 = 164536U;
	volatile int32_t t97 = -3336;

    t97 = ((x757>x758)%(x759<=x760));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x761 = 2U;
	static int16_t x762 = INT16_MAX;
	int32_t x763 = -1;
	volatile int64_t x764 = 2302379849738294756LL;

    t98 = ((x761>x762)%(x763<=x764));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x769 = INT16_MIN;
	volatile int32_t x770 = 65185065;
	static volatile uint32_t x771 = 1254403137U;
	uint32_t x772 = UINT32_MAX;
	int32_t t99 = 1;

    t99 = ((x769>x770)%(x771<=x772));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x786 = INT8_MIN;
	int64_t x787 = INT64_MIN;
	static int64_t x788 = 13595742LL;
	volatile int32_t t100 = 1;

    t100 = ((x785>x786)%(x787<=x788));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x790 = 74;
	int32_t x791 = INT32_MIN;
	uint32_t x792 = UINT32_MAX;
	static volatile int32_t t101 = 298;

    t101 = ((x789>x790)%(x791<=x792));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x793 = INT8_MIN;
	uint32_t x794 = 23U;
	static int8_t x795 = -1;
	uint16_t x796 = 20886U;
	int32_t t102 = -483853906;

    t102 = ((x793>x794)%(x795<=x796));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x797 = 472482162U;
	static int64_t x798 = INT64_MIN;
	volatile int16_t x799 = -1;
	static int16_t x800 = INT16_MAX;
	int32_t t103 = -1814;

    t103 = ((x797>x798)%(x799<=x800));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x805 = 58866;
	volatile int32_t x806 = INT32_MAX;
	uint16_t x807 = 7817U;
	static int16_t x808 = INT16_MAX;

    t104 = ((x805>x806)%(x807<=x808));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x814 = -6359578706171049LL;
	static uint16_t x815 = 1U;
	int32_t x816 = 5739503;
	int32_t t105 = 1;

    t105 = ((x813>x814)%(x815<=x816));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x821 = 11579;
	int16_t x822 = INT16_MIN;
	int8_t x823 = INT8_MAX;
	static int32_t t106 = 10479759;

    t106 = ((x821>x822)%(x823<=x824));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x825 = INT32_MAX;
	uint64_t x826 = 1949LLU;
	int8_t x827 = -1;
	volatile int16_t x828 = INT16_MAX;
	volatile int32_t t107 = 0;

    t107 = ((x825>x826)%(x827<=x828));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x833 = 1U;
	static int16_t x835 = INT16_MIN;
	static int16_t x836 = INT16_MIN;
	int32_t t108 = 298017864;

    t108 = ((x833>x834)%(x835<=x836));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x841 = INT16_MAX;
	uint8_t x842 = 24U;
	int8_t x843 = -1;
	int8_t x844 = INT8_MAX;

    t109 = ((x841>x842)%(x843<=x844));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x845 = 657U;
	volatile uint16_t x846 = 143U;
	uint16_t x847 = UINT16_MAX;
	int32_t t110 = -505469;

    t110 = ((x845>x846)%(x847<=x848));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x849 = INT16_MAX;
	uint64_t x850 = UINT64_MAX;
	uint16_t x851 = 17U;
	int64_t x852 = 562773003610782258LL;
	int32_t t111 = 0;

    t111 = ((x849>x850)%(x851<=x852));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x853 = 1U;
	int64_t x854 = 2339600547LL;
	uint16_t x856 = 1184U;
	volatile int32_t t112 = -71;

    t112 = ((x853>x854)%(x855<=x856));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x857 = 1956U;
	int8_t x858 = INT8_MIN;
	int16_t x859 = 0;
	int32_t t113 = -2160337;

    t113 = ((x857>x858)%(x859<=x860));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x865 = INT64_MIN;
	int16_t x866 = INT16_MAX;
	int64_t x868 = INT64_MAX;

    t114 = ((x865>x866)%(x867<=x868));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x869 = INT64_MIN;
	int32_t x870 = -1;
	uint8_t x872 = 10U;
	volatile int32_t t115 = 1;

    t115 = ((x869>x870)%(x871<=x872));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x873 = 50U;
	int8_t x874 = 1;
	volatile int16_t x875 = -1;
	volatile uint8_t x876 = 28U;
	int32_t t116 = -5170;

    t116 = ((x873>x874)%(x875<=x876));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x881 = INT64_MAX;
	volatile int64_t x883 = INT64_MIN;
	int16_t x884 = INT16_MAX;
	static int32_t t117 = 11312;

    t117 = ((x881>x882)%(x883<=x884));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x897 = INT32_MIN;
	int64_t x898 = -1LL;
	static int8_t x900 = INT8_MIN;
	volatile int32_t t118 = 0;

    t118 = ((x897>x898)%(x899<=x900));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x901 = 987U;
	int8_t x902 = INT8_MIN;
	int8_t x903 = INT8_MAX;
	int32_t t119 = -25;

    t119 = ((x901>x902)%(x903<=x904));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x925 = 24;
	static int64_t x926 = 2545LL;
	int8_t x928 = INT8_MIN;

    t120 = ((x925>x926)%(x927<=x928));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x941 = -1;
	static int16_t x942 = -4539;
	static int32_t x943 = -1;
	uint8_t x944 = 1U;
	static int32_t t121 = 522429936;

    t121 = ((x941>x942)%(x943<=x944));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x945 = INT32_MIN;
	int32_t x946 = INT32_MAX;
	static volatile int32_t x947 = INT32_MIN;
	volatile int32_t x948 = -1;
	volatile int32_t t122 = 28488;

    t122 = ((x945>x946)%(x947<=x948));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x949 = INT64_MIN;
	uint8_t x950 = 48U;
	uint32_t x952 = UINT32_MAX;
	volatile int32_t t123 = -6;

    t123 = ((x949>x950)%(x951<=x952));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x953 = UINT16_MAX;
	int16_t x954 = INT16_MIN;
	int8_t x956 = INT8_MAX;
	static int32_t t124 = 118734983;

    t124 = ((x953>x954)%(x955<=x956));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x957 = 2U;
	volatile uint64_t x958 = 95626503379LLU;
	uint8_t x959 = 4U;
	int32_t t125 = -61694304;

    t125 = ((x957>x958)%(x959<=x960));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x961 = INT32_MIN;
	int64_t x962 = INT64_MIN;
	volatile int8_t x963 = INT8_MIN;
	volatile int8_t x964 = -13;
	static int32_t t126 = -21647445;

    t126 = ((x961>x962)%(x963<=x964));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x973 = 86091U;
	int32_t x974 = INT32_MIN;
	int64_t x975 = -1LL;
	uint8_t x976 = 2U;

    t127 = ((x973>x974)%(x975<=x976));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x982 = 3010275746001383LLU;
	static int32_t t128 = 128517;

    t128 = ((x981>x982)%(x983<=x984));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x1005 = INT64_MIN;
	static uint16_t x1007 = 27U;
	uint64_t x1008 = 141LLU;
	volatile int32_t t129 = -117044556;

    t129 = ((x1005>x1006)%(x1007<=x1008));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x1013 = 1047543570341LLU;
	uint16_t x1014 = 11U;
	int16_t x1015 = -1;
	uint16_t x1016 = 164U;
	int32_t t130 = -6014;

    t130 = ((x1013>x1014)%(x1015<=x1016));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x1017 = 118U;
	uint64_t x1018 = UINT64_MAX;
	volatile int8_t x1020 = 1;

    t131 = ((x1017>x1018)%(x1019<=x1020));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1029 = INT16_MIN;
	volatile int16_t x1030 = INT16_MIN;
	int16_t x1032 = 114;
	volatile int32_t t132 = 2;

    t132 = ((x1029>x1030)%(x1031<=x1032));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x1033 = 215706069LLU;
	int8_t x1034 = -40;
	int64_t x1036 = 152047533565540LL;
	int32_t t133 = 2;

    t133 = ((x1033>x1034)%(x1035<=x1036));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x1041 = 1;
	int16_t x1042 = INT16_MAX;
	int8_t x1043 = INT8_MIN;
	int32_t x1044 = -1;
	volatile int32_t t134 = -543716547;

    t134 = ((x1041>x1042)%(x1043<=x1044));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x1045 = INT32_MAX;
	uint64_t x1047 = UINT64_MAX;

    t135 = ((x1045>x1046)%(x1047<=x1048));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x1053 = INT16_MIN;
	uint8_t x1054 = UINT8_MAX;
	int64_t x1055 = INT64_MIN;
	volatile int32_t t136 = 10;

    t136 = ((x1053>x1054)%(x1055<=x1056));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x1057 = 43;
	uint16_t x1058 = 842U;
	static int8_t x1059 = INT8_MAX;
	int64_t x1060 = 4188229LL;

    t137 = ((x1057>x1058)%(x1059<=x1060));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1074 = UINT64_MAX;
	int32_t x1075 = 1051793898;
	static int32_t x1076 = INT32_MAX;
	int32_t t138 = 150612904;

    t138 = ((x1073>x1074)%(x1075<=x1076));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x1077 = 537;
	int32_t x1078 = -1;

    t139 = ((x1077>x1078)%(x1079<=x1080));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x1085 = UINT16_MAX;
	int16_t x1086 = -3923;
	int8_t x1087 = -1;
	volatile int32_t t140 = -2;

    t140 = ((x1085>x1086)%(x1087<=x1088));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x1089 = 19;
	volatile uint64_t x1090 = 897204423LLU;
	int64_t x1091 = -5LL;
	volatile int32_t t141 = -2;

    t141 = ((x1089>x1090)%(x1091<=x1092));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1094 = 1;
	uint32_t x1095 = 147463U;
	uint64_t x1096 = UINT64_MAX;
	int32_t t142 = -7750872;

    t142 = ((x1093>x1094)%(x1095<=x1096));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x1098 = 8527U;
	static int64_t x1099 = INT64_MIN;
	volatile int32_t x1100 = INT32_MAX;

    t143 = ((x1097>x1098)%(x1099<=x1100));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1125 = -845;
	uint64_t x1126 = UINT64_MAX;
	int64_t x1127 = INT64_MIN;
	uint8_t x1128 = 23U;
	static int32_t t144 = 825;

    t144 = ((x1125>x1126)%(x1127<=x1128));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1133 = INT8_MIN;
	static uint32_t x1134 = 5559U;
	uint16_t x1136 = 4065U;

    t145 = ((x1133>x1134)%(x1135<=x1136));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x1137 = INT16_MAX;
	int64_t x1138 = -238882857LL;
	static int64_t x1139 = -23972821039260LL;
	int32_t t146 = 7193;

    t146 = ((x1137>x1138)%(x1139<=x1140));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1141 = -1;
	int8_t x1144 = -15;
	static volatile int32_t t147 = -1417072;

    t147 = ((x1141>x1142)%(x1143<=x1144));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1165 = INT8_MAX;
	int64_t x1166 = 26LL;
	int64_t x1167 = INT64_MIN;
	int16_t x1168 = INT16_MAX;
	int32_t t148 = 0;

    t148 = ((x1165>x1166)%(x1167<=x1168));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1173 = INT64_MIN;
	uint64_t x1176 = 14620530116067LLU;
	static volatile int32_t t149 = -31409;

    t149 = ((x1173>x1174)%(x1175<=x1176));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1177 = INT16_MAX;
	int64_t x1178 = INT64_MIN;
	int32_t x1179 = INT32_MIN;
	volatile int32_t t150 = -218260671;

    t150 = ((x1177>x1178)%(x1179<=x1180));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1185 = 81U;
	static int64_t x1186 = 60LL;
	volatile uint16_t x1188 = UINT16_MAX;
	static volatile int32_t t151 = 1610;

    t151 = ((x1185>x1186)%(x1187<=x1188));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1189 = INT32_MAX;
	int32_t x1190 = -1;
	int16_t x1192 = INT16_MAX;
	volatile int32_t t152 = -15;

    t152 = ((x1189>x1190)%(x1191<=x1192));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1193 = UINT32_MAX;
	static int16_t x1194 = -21;
	int64_t x1195 = INT64_MIN;
	uint8_t x1196 = 101U;
	volatile int32_t t153 = -193;

    t153 = ((x1193>x1194)%(x1195<=x1196));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x1205 = INT32_MIN;
	volatile int8_t x1207 = INT8_MIN;
	int8_t x1208 = -1;

    t154 = ((x1205>x1206)%(x1207<=x1208));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x1233 = 1722321262708LL;
	static int8_t x1234 = INT8_MIN;
	static volatile int32_t t155 = -31;

    t155 = ((x1233>x1234)%(x1235<=x1236));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1241 = INT64_MIN;
	volatile int8_t x1244 = INT8_MIN;
	volatile int32_t t156 = -101849;

    t156 = ((x1241>x1242)%(x1243<=x1244));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1249 = INT64_MAX;
	volatile uint32_t x1250 = 124188827U;
	int32_t t157 = -117952425;

    t157 = ((x1249>x1250)%(x1251<=x1252));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x1254 = 77236433LLU;
	volatile int64_t x1255 = INT64_MIN;
	static int32_t t158 = 74108581;

    t158 = ((x1253>x1254)%(x1255<=x1256));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1258 = INT64_MIN;
	uint16_t x1260 = 8873U;
	int32_t t159 = 94882520;

    t159 = ((x1257>x1258)%(x1259<=x1260));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1261 = INT64_MIN;
	int16_t x1263 = INT16_MIN;
	int16_t x1264 = INT16_MIN;

    t160 = ((x1261>x1262)%(x1263<=x1264));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1274 = UINT32_MAX;
	int32_t x1275 = INT32_MIN;
	volatile uint8_t x1276 = UINT8_MAX;
	volatile int32_t t161 = 103;

    t161 = ((x1273>x1274)%(x1275<=x1276));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1277 = 12U;
	int32_t x1278 = 6290;
	static int16_t x1279 = -1;
	static int32_t x1280 = -1;
	int32_t t162 = -155124;

    t162 = ((x1277>x1278)%(x1279<=x1280));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1281 = 17058007251019LLU;
	static uint32_t x1282 = UINT32_MAX;
	int8_t x1283 = 0;
	volatile int8_t x1284 = INT8_MAX;

    t163 = ((x1281>x1282)%(x1283<=x1284));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1285 = INT64_MIN;
	int64_t x1286 = INT64_MAX;
	uint32_t x1287 = 1U;
	uint32_t x1288 = 66196864U;
	int32_t t164 = -705082232;

    t164 = ((x1285>x1286)%(x1287<=x1288));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1290 = 4039035938031LLU;
	volatile int8_t x1292 = -1;
	static volatile int32_t t165 = -56;

    t165 = ((x1289>x1290)%(x1291<=x1292));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x1297 = 51823868U;
	int16_t x1298 = INT16_MAX;
	int32_t x1299 = -59124913;
	int16_t x1300 = 75;
	volatile int32_t t166 = -45453250;

    t166 = ((x1297>x1298)%(x1299<=x1300));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1305 = 16208632467564LLU;
	uint8_t x1306 = 1U;
	int16_t x1308 = INT16_MAX;

    t167 = ((x1305>x1306)%(x1307<=x1308));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x1318 = INT32_MIN;
	static uint32_t x1319 = 14042U;
	uint64_t x1320 = 4882315317LLU;
	volatile int32_t t168 = 0;

    t168 = ((x1317>x1318)%(x1319<=x1320));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1323 = INT64_MIN;
	int16_t x1324 = INT16_MAX;
	int32_t t169 = -1;

    t169 = ((x1321>x1322)%(x1323<=x1324));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x1326 = 0LLU;
	int8_t x1327 = INT8_MIN;
	static int64_t x1328 = -115LL;

    t170 = ((x1325>x1326)%(x1327<=x1328));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x1333 = INT32_MIN;
	int16_t x1334 = -1;
	int64_t x1335 = -1LL;

    t171 = ((x1333>x1334)%(x1335<=x1336));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1341 = INT16_MIN;
	int8_t x1343 = INT8_MIN;
	int64_t x1344 = INT64_MAX;
	static int32_t t172 = -381;

    t172 = ((x1341>x1342)%(x1343<=x1344));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1349 = 93429947058LLU;
	int8_t x1350 = INT8_MIN;
	volatile int8_t x1351 = -1;
	static int32_t x1352 = -1;
	int32_t t173 = 49260098;

    t173 = ((x1349>x1350)%(x1351<=x1352));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1353 = INT64_MIN;
	static volatile int64_t x1355 = -1LL;
	uint8_t x1356 = 2U;
	int32_t t174 = 3261177;

    t174 = ((x1353>x1354)%(x1355<=x1356));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1358 = 4;
	volatile uint8_t x1359 = 21U;
	uint32_t x1360 = UINT32_MAX;
	volatile int32_t t175 = -603745233;

    t175 = ((x1357>x1358)%(x1359<=x1360));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1366 = 1;
	int16_t x1367 = -1;
	volatile uint8_t x1368 = UINT8_MAX;

    t176 = ((x1365>x1366)%(x1367<=x1368));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1377 = UINT32_MAX;
	int8_t x1378 = INT8_MIN;
	static int8_t x1380 = INT8_MIN;

    t177 = ((x1377>x1378)%(x1379<=x1380));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1383 = INT8_MAX;
	int16_t x1384 = INT16_MAX;

    t178 = ((x1381>x1382)%(x1383<=x1384));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x1387 = INT32_MIN;
	int16_t x1388 = 37;
	volatile int32_t t179 = -4158370;

    t179 = ((x1385>x1386)%(x1387<=x1388));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1389 = -1;
	int64_t x1390 = INT64_MIN;
	int32_t x1391 = 688450;
	int64_t x1392 = INT64_MAX;
	volatile int32_t t180 = -1;

    t180 = ((x1389>x1390)%(x1391<=x1392));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1393 = UINT8_MAX;
	int8_t x1395 = INT8_MIN;
	int32_t t181 = 10224502;

    t181 = ((x1393>x1394)%(x1395<=x1396));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1401 = 189443617;
	int64_t x1402 = -1LL;
	volatile int8_t x1403 = 28;
	volatile int32_t t182 = 682068;

    t182 = ((x1401>x1402)%(x1403<=x1404));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x1413 = -1;
	static volatile int32_t x1414 = INT32_MIN;
	int32_t t183 = 17854;

    t183 = ((x1413>x1414)%(x1415<=x1416));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1421 = UINT8_MAX;
	int16_t x1422 = -1;
	int16_t x1423 = INT16_MIN;
	static int16_t x1424 = -1;

    t184 = ((x1421>x1422)%(x1423<=x1424));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1425 = INT32_MIN;
	uint8_t x1426 = 5U;
	int64_t x1427 = INT64_MIN;
	static int16_t x1428 = -15727;

    t185 = ((x1425>x1426)%(x1427<=x1428));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1429 = UINT32_MAX;
	uint32_t x1430 = 1180U;
	volatile int16_t x1432 = 115;
	volatile int32_t t186 = -28528481;

    t186 = ((x1429>x1430)%(x1431<=x1432));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1445 = 5U;
	int8_t x1446 = -3;
	volatile int64_t x1447 = -2212352698LL;
	static int32_t x1448 = INT32_MAX;

    t187 = ((x1445>x1446)%(x1447<=x1448));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1457 = 0;
	volatile int8_t x1460 = 11;
	int32_t t188 = -245068444;

    t188 = ((x1457>x1458)%(x1459<=x1460));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x1461 = INT8_MIN;
	volatile uint8_t x1462 = 7U;
	int16_t x1463 = INT16_MIN;
	uint32_t x1464 = UINT32_MAX;
	volatile int32_t t189 = 50234747;

    t189 = ((x1461>x1462)%(x1463<=x1464));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x1469 = 159758LLU;
	static volatile uint8_t x1470 = 24U;
	uint8_t x1471 = UINT8_MAX;
	uint8_t x1472 = UINT8_MAX;
	static volatile int32_t t190 = 468;

    t190 = ((x1469>x1470)%(x1471<=x1472));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x1473 = INT8_MIN;
	static uint8_t x1474 = 2U;
	uint64_t x1475 = 5664LLU;
	static int32_t t191 = 4700934;

    t191 = ((x1473>x1474)%(x1475<=x1476));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1481 = INT16_MIN;
	int64_t x1484 = INT64_MAX;
	int32_t t192 = 891396739;

    t192 = ((x1481>x1482)%(x1483<=x1484));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1485 = INT16_MIN;
	static uint32_t x1486 = 271U;
	static int64_t x1487 = INT64_MIN;
	static int32_t x1488 = -1;

    t193 = ((x1485>x1486)%(x1487<=x1488));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1493 = INT8_MIN;
	int8_t x1494 = INT8_MAX;
	static volatile uint64_t x1495 = 107166517893LLU;
	int64_t x1496 = INT64_MAX;

    t194 = ((x1493>x1494)%(x1495<=x1496));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1497 = INT64_MIN;
	static volatile int32_t x1498 = -1;
	int64_t x1499 = -7498LL;
	volatile int64_t x1500 = -6076LL;
	volatile int32_t t195 = -4;

    t195 = ((x1497>x1498)%(x1499<=x1500));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x1501 = -1LL;
	int64_t x1502 = INT64_MIN;
	static int32_t x1503 = INT32_MIN;
	volatile int16_t x1504 = INT16_MIN;
	volatile int32_t t196 = 1;

    t196 = ((x1501>x1502)%(x1503<=x1504));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1505 = -1;
	volatile int8_t x1506 = -16;
	volatile int64_t x1507 = INT64_MIN;
	int16_t x1508 = INT16_MAX;

    t197 = ((x1505>x1506)%(x1507<=x1508));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1518 = 1LLU;
	int8_t x1519 = INT8_MIN;
	static int8_t x1520 = -1;
	volatile int32_t t198 = -19;

    t198 = ((x1517>x1518)%(x1519<=x1520));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1529 = 1043;
	static uint16_t x1530 = 13908U;
	volatile int32_t x1531 = -2566838;
	int8_t x1532 = INT8_MAX;
	int32_t t199 = 1987061;

    t199 = ((x1529>x1530)%(x1531<=x1532));

    if (t199 != 0) { NG(); } else { ; }
	
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

