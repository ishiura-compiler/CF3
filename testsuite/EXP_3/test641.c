
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

int32_t x4 = -684;
int8_t x5 = INT8_MIN;
uint8_t x8 = 5U;
int32_t t1 = 4106167;
int64_t x14 = INT64_MIN;
int32_t x33 = -12420565;
int16_t x36 = -747;
volatile int32_t t3 = 1924;
int32_t x37 = 0;
int64_t x40 = 35292223330LL;
int32_t x43 = INT32_MIN;
static uint16_t x59 = 4U;
volatile uint16_t x60 = 23122U;
volatile int64_t t6 = -27109220205LL;
volatile int32_t t7 = -25;
int32_t x77 = -63693;
uint64_t x98 = UINT64_MAX;
volatile int8_t x149 = 5;
uint16_t x183 = 20768U;
static volatile int32_t t17 = 114;
uint64_t x193 = UINT64_MAX;
static volatile uint64_t t18 = 23249491951146LLU;
volatile int64_t x203 = -1LL;
volatile int64_t t20 = 52723923810445447LL;
int64_t x209 = -1LL;
int32_t x210 = -1;
uint16_t x214 = UINT16_MAX;
static int32_t t24 = -4330651;
volatile int64_t x279 = 111115736LL;
uint32_t x302 = 1U;
uint16_t x305 = UINT16_MAX;
uint8_t x306 = 13U;
volatile int32_t t32 = -2701447;
volatile uint64_t x326 = UINT64_MAX;
volatile uint64_t t33 = 198992539977LLU;
int8_t x336 = INT8_MIN;
uint64_t x337 = 81154355482LLU;
int64_t x340 = 14600766LL;
volatile uint64_t t35 = 74674377089137201LLU;
int32_t x344 = INT32_MIN;
uint32_t x357 = 386432U;
uint32_t x361 = UINT32_MAX;
int64_t t38 = -971179043938187LL;
volatile int64_t t39 = 10LL;
volatile int32_t x396 = INT32_MIN;
uint8_t x413 = 42U;
int32_t x416 = INT32_MAX;
int32_t x420 = INT32_MIN;
volatile uint64_t t45 = 1402358040LLU;
volatile int64_t x445 = -1LL;
int32_t x446 = INT32_MIN;
int32_t x465 = -5941;
int32_t x466 = INT32_MIN;
int8_t x478 = INT8_MIN;
int64_t x479 = INT64_MIN;
static uint64_t x480 = UINT64_MAX;
volatile int32_t x484 = -290989;
int32_t x493 = -14267;
int8_t x497 = INT8_MIN;
uint64_t t56 = 9400114108327LLU;
uint8_t x536 = 3U;
int32_t t58 = -26;
int32_t x547 = 0;
volatile int32_t t59 = -3396071;
static uint8_t x550 = 5U;
int32_t x553 = 25458;
int64_t t61 = 12932981811469129LL;
uint32_t x561 = 5162U;
int64_t x562 = INT64_MIN;
volatile int32_t x564 = INT32_MIN;
uint32_t x565 = 13994085U;
uint32_t t65 = 3U;
uint64_t x601 = UINT64_MAX;
volatile int8_t x604 = INT8_MAX;
int32_t x614 = 16368524;
uint32_t x621 = UINT32_MAX;
static uint32_t t72 = 0U;
static int16_t x655 = -1;
int64_t t73 = 147994816888402274LL;
int32_t x658 = INT32_MIN;
uint8_t x688 = UINT8_MAX;
int16_t x689 = INT16_MIN;
int64_t x691 = 3LL;
int32_t t78 = 839;
volatile uint64_t t79 = 262336578849304324LLU;
volatile int16_t x738 = INT16_MIN;
static int32_t x740 = INT32_MIN;
int32_t t82 = -773;
int64_t x748 = 4552LL;
volatile int16_t x766 = 5;
int16_t x769 = INT16_MIN;
uint16_t x803 = 20U;
int32_t x819 = -16988;
uint32_t x833 = 627U;
static int8_t x835 = -1;
int8_t x837 = 1;
static int32_t x839 = 1571661;
uint32_t x849 = UINT32_MAX;
static volatile int64_t x852 = INT64_MIN;
int8_t x865 = INT8_MIN;
volatile int32_t t94 = 85;
int32_t t98 = 6;
int32_t x916 = -1002;
uint16_t x920 = 9U;
volatile int32_t t100 = 374;
uint64_t x924 = UINT64_MAX;
volatile uint32_t x925 = 23880U;
uint16_t x926 = 1U;
int64_t x948 = 23069198LL;
int16_t x969 = INT16_MIN;
int16_t x970 = -1;
uint32_t x971 = 1U;
static int64_t x972 = INT64_MIN;
int32_t t107 = -5915358;
static uint32_t x975 = 7U;
uint64_t t108 = 319927314939LLU;
volatile int16_t x979 = INT16_MIN;
volatile uint64_t x980 = UINT64_MAX;
int32_t t110 = 3350;
int64_t x1010 = INT64_MIN;
volatile uint32_t x1012 = 59U;
volatile int64_t t113 = 112261LL;
int32_t x1023 = -1;
int64_t x1024 = INT64_MIN;
volatile uint32_t x1039 = 1641250U;
uint16_t x1040 = UINT16_MAX;
static volatile int32_t t116 = -17;
uint64_t t118 = 7163359339451670LLU;
volatile int16_t x1079 = -1;
int8_t x1089 = INT8_MIN;
uint32_t x1091 = UINT32_MAX;
int16_t x1106 = -1;
int32_t t122 = -3402;
int8_t x1118 = 34;
int16_t x1121 = -1;
int16_t x1122 = INT16_MIN;
static volatile int32_t t124 = -37;
volatile int32_t x1144 = INT32_MIN;
int8_t x1149 = -1;
static int64_t x1151 = -31737LL;
volatile int64_t t127 = -829794954096320LL;
uint8_t x1154 = 19U;
volatile uint64_t x1186 = UINT64_MAX;
static int8_t x1199 = INT8_MIN;
uint64_t x1214 = UINT64_MAX;
uint32_t x1215 = 31332U;
uint16_t x1221 = 1373U;
int32_t x1223 = -1;
uint64_t x1242 = 16514831660424LLU;
volatile int32_t x1244 = -1;
volatile int32_t t139 = 51;
volatile int32_t x1261 = 1796677;
static int64_t x1264 = -4501LL;
uint32_t x1265 = UINT32_MAX;
int32_t x1267 = -1;
static volatile int32_t x1271 = INT32_MAX;
int32_t x1273 = INT32_MAX;
uint64_t x1274 = 207314241LLU;
int16_t x1278 = INT16_MAX;
volatile int32_t t144 = 177889914;
volatile uint32_t t145 = 16U;
int64_t x1309 = -424006571LL;
static int16_t x1323 = -1;
volatile int16_t x1331 = -1420;
int8_t x1338 = -1;
volatile uint16_t x1342 = UINT16_MAX;
volatile uint64_t x1344 = UINT64_MAX;
volatile int32_t t154 = 18;
static uint8_t x1368 = 54U;
uint16_t x1376 = 9467U;
volatile int64_t t158 = 2101232576LL;
uint32_t t159 = 7U;
int32_t t162 = 57406139;
volatile int32_t x1424 = INT32_MIN;
int32_t x1427 = 63;
volatile uint8_t x1441 = UINT8_MAX;
int8_t x1454 = INT8_MIN;
volatile int64_t t169 = -620484373283421LL;
int64_t x1465 = -1LL;
uint32_t x1467 = 37309U;
uint32_t x1486 = 849729U;
int32_t t173 = -78090055;
int32_t x1509 = 1531733;
int16_t x1516 = INT16_MIN;
int64_t x1521 = INT64_MIN;
static volatile uint64_t t180 = 1348957068LLU;
uint64_t x1542 = UINT64_MAX;
uint64_t x1544 = UINT64_MAX;
int64_t x1548 = INT64_MIN;
volatile uint32_t t182 = 870146U;
int32_t t185 = -6;
static int16_t x1591 = -1;
static int64_t x1597 = INT64_MIN;
int16_t x1599 = -1;
static uint64_t x1601 = 684LLU;
static int16_t x1612 = INT16_MAX;
static int32_t x1620 = 249;
volatile int64_t t192 = 182158LL;
uint32_t x1629 = 121605907U;
int16_t x1631 = INT16_MIN;
volatile int8_t x1639 = -1;
uint64_t x1645 = 587374LLU;


void f0(void) {
    	int32_t x1 = -2045103;
	static int32_t x2 = -6493826;
	int8_t x3 = INT8_MIN;
	int32_t t0 = 2541;

    t0 = ((x1/x2)>>(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MIN;
	static int8_t x7 = -1;

    t1 = ((x5/x6)>>(x7/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x13 = INT64_MAX;
	int8_t x15 = -48;
	int8_t x16 = INT8_MIN;
	volatile int64_t t2 = 1903LL;

    t2 = ((x13/x14)>>(x15/x16));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x34 = INT32_MIN;
	volatile uint32_t x35 = 0U;

    t3 = ((x33/x34)>>(x35/x36));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x38 = INT32_MIN;
	uint8_t x39 = UINT8_MAX;
	volatile int32_t t4 = -59222;

    t4 = ((x37/x38)>>(x39/x40));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x41 = 10;
	int8_t x42 = INT8_MIN;
	volatile int64_t x44 = INT64_MIN;
	volatile int32_t t5 = 89;

    t5 = ((x41/x42)>>(x43/x44));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x57 = INT16_MIN;
	int64_t x58 = -60618580LL;

    t6 = ((x57/x58)>>(x59/x60));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x69 = -3219;
	static int8_t x70 = INT8_MIN;
	static int64_t x71 = -1LL;
	uint32_t x72 = 3014083U;

    t7 = ((x69/x70)>>(x71/x72));

    if (t7 != 25) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x73 = 6;
	int32_t x74 = 6189;
	int32_t x75 = 1;
	int32_t x76 = INT32_MAX;
	int32_t t8 = 8371;

    t8 = ((x73/x74)>>(x75/x76));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x78 = INT16_MIN;
	uint32_t x79 = 37307U;
	int64_t x80 = INT64_MIN;
	volatile int32_t t9 = 7905;

    t9 = ((x77/x78)>>(x79/x80));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x85 = 2533U;
	int16_t x86 = -1;
	volatile uint8_t x87 = UINT8_MAX;
	static uint32_t x88 = UINT32_MAX;
	volatile uint32_t t10 = 612432U;

    t10 = ((x85/x86)>>(x87/x88));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x97 = INT16_MIN;
	uint8_t x99 = UINT8_MAX;
	int16_t x100 = INT16_MIN;
	static volatile uint64_t t11 = 627444LLU;

    t11 = ((x97/x98)>>(x99/x100));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x129 = -5;
	static int16_t x130 = INT16_MIN;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = INT16_MIN;
	volatile int32_t t12 = -124750293;

    t12 = ((x129/x130)>>(x131/x132));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x133 = -1;
	uint64_t x134 = 1268336828715LLU;
	static uint8_t x135 = UINT8_MAX;
	volatile uint32_t x136 = 422497U;
	volatile uint64_t t13 = 40152695LLU;

    t13 = ((x133/x134)>>(x135/x136));

    if (t13 != 14544041LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x141 = -1;
	int16_t x142 = INT16_MAX;
	static int16_t x143 = INT16_MIN;
	static int64_t x144 = -1604736169984047452LL;
	volatile int32_t t14 = -54507575;

    t14 = ((x141/x142)>>(x143/x144));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x150 = INT16_MIN;
	int32_t x151 = -1;
	int16_t x152 = 151;
	static volatile int32_t t15 = 10;

    t15 = ((x149/x150)>>(x151/x152));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x181 = INT32_MAX;
	int64_t x182 = INT64_MAX;
	volatile int32_t x184 = INT32_MIN;
	volatile int64_t t16 = 3316558925178033322LL;

    t16 = ((x181/x182)>>(x183/x184));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x189 = 1;
	volatile int32_t x190 = INT32_MIN;
	static uint64_t x191 = 3745LLU;
	static volatile int32_t x192 = INT32_MIN;

    t17 = ((x189/x190)>>(x191/x192));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x194 = 387159342651LLU;
	uint32_t x195 = 2951U;
	static int16_t x196 = -1;

    t18 = ((x193/x194)>>(x195/x196));

    if (t18 != 47646387LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x197 = INT8_MIN;
	static int16_t x198 = -1;
	int64_t x199 = -1LL;
	int64_t x200 = INT64_MIN;
	int32_t t19 = 89077;

    t19 = ((x197/x198)>>(x199/x200));

    if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x201 = 9741LL;
	uint32_t x202 = 31U;
	int64_t x204 = 142320635305288LL;

    t20 = ((x201/x202)>>(x203/x204));

    if (t20 != 314LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x211 = UINT8_MAX;
	uint32_t x212 = 5805965U;
	int64_t t21 = 209086207LL;

    t21 = ((x209/x210)>>(x211/x212));

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x213 = -1756;
	int16_t x215 = INT16_MAX;
	int64_t x216 = INT64_MIN;
	volatile int32_t t22 = -1;

    t22 = ((x213/x214)>>(x215/x216));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	volatile int32_t t23 = 204926780;

    t23 = ((x217/x218)>>(x219/x220));

    if (t23 != 16777216) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x245 = INT32_MAX;
	int16_t x246 = INT16_MAX;
	volatile int8_t x247 = INT8_MIN;
	int8_t x248 = INT8_MIN;

    t24 = ((x245/x246)>>(x247/x248));

    if (t24 != 32769) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x253 = -1;
	static volatile int32_t x254 = INT32_MIN;
	volatile uint32_t x255 = 888U;
	uint8_t x256 = 75U;
	int32_t t25 = 219;

    t25 = ((x253/x254)>>(x255/x256));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x265 = 16LLU;
	int8_t x266 = 2;
	int16_t x267 = 269;
	static int64_t x268 = -190574LL;
	volatile uint64_t t26 = 0LLU;

    t26 = ((x265/x266)>>(x267/x268));

    if (t26 != 8LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x277 = 92U;
	static uint32_t x278 = 6918U;
	int64_t x280 = INT64_MIN;
	static uint32_t t27 = 523U;

    t27 = ((x277/x278)>>(x279/x280));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x281 = INT16_MIN;
	volatile int8_t x282 = INT8_MIN;
	uint16_t x283 = 2U;
	static uint32_t x284 = UINT32_MAX;
	int32_t t28 = 513240;

    t28 = ((x281/x282)>>(x283/x284));

    if (t28 != 256) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x289 = INT64_MAX;
	int32_t x290 = INT32_MAX;
	volatile int16_t x291 = INT16_MIN;
	static int32_t x292 = INT32_MIN;
	volatile int64_t t29 = 16573482LL;

    t29 = ((x289/x290)>>(x291/x292));

    if (t29 != 4294967298LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x293 = UINT64_MAX;
	static int64_t x294 = INT64_MIN;
	int16_t x295 = -1;
	static int32_t x296 = INT32_MAX;
	volatile uint64_t t30 = 902LLU;

    t30 = ((x293/x294)>>(x295/x296));

    if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x301 = 9U;
	static int16_t x303 = INT16_MAX;
	int16_t x304 = INT16_MIN;
	uint32_t t31 = 31U;

    t31 = ((x301/x302)>>(x303/x304));

    if (t31 != 9U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x307 = -1;
	static int64_t x308 = -1LL;

    t32 = ((x305/x306)>>(x307/x308));

    if (t32 != 2520) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x325 = -24385459826LL;
	int16_t x327 = -17;
	int8_t x328 = INT8_MIN;

    t33 = ((x325/x326)>>(x327/x328));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x333 = 105U;
	int32_t x334 = -162;
	uint64_t x335 = 51619759191552690LLU;
	volatile uint32_t t34 = 923U;

    t34 = ((x333/x334)>>(x335/x336));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x338 = INT64_MIN;
	uint8_t x339 = UINT8_MAX;

    t35 = ((x337/x338)>>(x339/x340));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x341 = -1;
	uint16_t x342 = UINT16_MAX;
	int32_t x343 = INT32_MIN;
	int32_t t36 = 2953;

    t36 = ((x341/x342)>>(x343/x344));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x358 = INT32_MIN;
	volatile int8_t x359 = -1;
	int64_t x360 = INT64_MIN;
	static volatile uint32_t t37 = 24277149U;

    t37 = ((x357/x358)>>(x359/x360));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x362 = INT64_MAX;
	volatile uint32_t x363 = 115U;
	int64_t x364 = INT64_MIN;

    t38 = ((x361/x362)>>(x363/x364));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x365 = 32U;
	int64_t x366 = INT64_MIN;
	int32_t x367 = -1;
	uint8_t x368 = 43U;

    t39 = ((x365/x366)>>(x367/x368));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x369 = 6;
	int64_t x370 = INT64_MIN;
	int8_t x371 = 0;
	int64_t x372 = INT64_MIN;
	int64_t t40 = -3311112LL;

    t40 = ((x369/x370)>>(x371/x372));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x381 = 0U;
	static int64_t x382 = -3355631621788LL;
	uint16_t x383 = 533U;
	int16_t x384 = INT16_MIN;
	volatile int64_t t41 = 201609LL;

    t41 = ((x381/x382)>>(x383/x384));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x393 = -1;
	static volatile uint8_t x394 = 109U;
	static int64_t x395 = -1LL;
	volatile int32_t t42 = -3649;

    t42 = ((x393/x394)>>(x395/x396));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x409 = INT8_MAX;
	int64_t x410 = -26627382749495LL;
	int16_t x411 = INT16_MAX;
	static int64_t x412 = INT64_MIN;
	volatile int64_t t43 = 342LL;

    t43 = ((x409/x410)>>(x411/x412));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x414 = 67642295766397218LLU;
	volatile int32_t x415 = INT32_MAX;
	static volatile uint64_t t44 = 16829057638129833LLU;

    t44 = ((x413/x414)>>(x415/x416));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x417 = 9377954U;
	volatile uint64_t x418 = 988923LLU;
	static volatile uint16_t x419 = 18U;

    t45 = ((x417/x418)>>(x419/x420));

    if (t45 != 9LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x421 = INT8_MIN;
	int32_t x422 = -1;
	uint8_t x423 = 41U;
	int32_t x424 = INT32_MAX;
	static volatile int32_t t46 = -36616;

    t46 = ((x421/x422)>>(x423/x424));

    if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x425 = -1;
	int16_t x426 = INT16_MAX;
	int16_t x427 = -1;
	volatile uint32_t x428 = UINT32_MAX;
	int32_t t47 = 4881434;

    t47 = ((x425/x426)>>(x427/x428));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x447 = INT8_MAX;
	uint8_t x448 = 46U;
	static int64_t t48 = -22082792784LL;

    t48 = ((x445/x446)>>(x447/x448));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x461 = UINT16_MAX;
	int32_t x462 = -51334002;
	uint16_t x463 = UINT16_MAX;
	int64_t x464 = 88037LL;
	int32_t t49 = -264977801;

    t49 = ((x461/x462)>>(x463/x464));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x467 = 18;
	uint64_t x468 = UINT64_MAX;
	volatile int32_t t50 = -182164;

    t50 = ((x465/x466)>>(x467/x468));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x477 = 303716759050362024LLU;
	static uint64_t t51 = 16931343945369152LLU;

    t51 = ((x477/x478)>>(x479/x480));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x481 = -1LL;
	uint16_t x482 = UINT16_MAX;
	static volatile uint16_t x483 = 316U;
	volatile int64_t t52 = 2401914668LL;

    t52 = ((x481/x482)>>(x483/x484));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x494 = 531999743LLU;
	volatile int16_t x495 = -51;
	volatile int32_t x496 = -61160;
	uint64_t t53 = 9LLU;

    t53 = ((x493/x494)>>(x495/x496));

    if (t53 != 34674347716LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x498 = 1U;
	static int16_t x499 = INT16_MIN;
	static int32_t x500 = INT32_MIN;
	uint32_t t54 = 0U;

    t54 = ((x497/x498)>>(x499/x500));

    if (t54 != 4294967168U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x501 = INT16_MIN;
	uint64_t x502 = UINT64_MAX;
	static volatile int16_t x503 = 12;
	volatile int32_t x504 = 527471493;
	uint64_t t55 = 796892711396040553LLU;

    t55 = ((x501/x502)>>(x503/x504));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x513 = UINT64_MAX;
	static uint32_t x514 = 214135150U;
	uint8_t x515 = UINT8_MAX;
	static int32_t x516 = -467861;

    t56 = ((x513/x514)>>(x515/x516));

    if (t56 != 86145334260LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x529 = 63;
	int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MIN;
	int16_t x532 = INT16_MIN;
	int32_t t57 = -477071780;

    t57 = ((x529/x530)>>(x531/x532));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x533 = -2358;
	int16_t x534 = -1;
	volatile uint16_t x535 = 1U;

    t58 = ((x533/x534)>>(x535/x536));

    if (t58 != 2358) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x545 = 82U;
	int16_t x546 = INT16_MIN;
	static uint8_t x548 = 5U;

    t59 = ((x545/x546)>>(x547/x548));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x549 = 15552;
	int32_t x551 = 172;
	static volatile uint8_t x552 = UINT8_MAX;
	static int32_t t60 = -1;

    t60 = ((x549/x550)>>(x551/x552));

    if (t60 != 3110) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x554 = -1281144LL;
	volatile uint16_t x555 = 27U;
	int32_t x556 = INT32_MIN;

    t61 = ((x553/x554)>>(x555/x556));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x563 = 1;
	int64_t t62 = 461689003LL;

    t62 = ((x561/x562)>>(x563/x564));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x566 = 76731U;
	static int16_t x567 = INT16_MIN;
	static uint32_t x568 = UINT32_MAX;
	static uint32_t t63 = 484278U;

    t63 = ((x565/x566)>>(x567/x568));

    if (t63 != 182U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x577 = 74U;
	uint16_t x578 = 20561U;
	static volatile uint64_t x579 = 282LLU;
	volatile int32_t x580 = INT32_MIN;
	int32_t t64 = 17;

    t64 = ((x577/x578)>>(x579/x580));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x593 = 102U;
	int32_t x594 = INT32_MAX;
	uint16_t x595 = 483U;
	volatile uint64_t x596 = 8989371674591LLU;

    t65 = ((x593/x594)>>(x595/x596));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x597 = INT16_MIN;
	int16_t x598 = INT16_MIN;
	uint8_t x599 = 110U;
	uint32_t x600 = 31014U;
	int32_t t66 = -129;

    t66 = ((x597/x598)>>(x599/x600));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x602 = -140;
	uint64_t x603 = 0LLU;
	uint64_t t67 = 386LLU;

    t67 = ((x601/x602)>>(x603/x604));

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x605 = UINT32_MAX;
	int64_t x606 = 27930423LL;
	static int16_t x607 = -1;
	static int32_t x608 = 22662;
	static volatile int64_t t68 = 19615380977934LL;

    t68 = ((x605/x606)>>(x607/x608));

    if (t68 != 153LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x613 = 8122255U;
	int16_t x615 = -1;
	int32_t x616 = INT32_MIN;
	static uint32_t t69 = 12143655U;

    t69 = ((x613/x614)>>(x615/x616));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x622 = 92369668030579LLU;
	uint16_t x623 = 6255U;
	uint16_t x624 = 316U;
	uint64_t t70 = 0LLU;

    t70 = ((x621/x622)>>(x623/x624));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x625 = -35;
	int64_t x626 = INT64_MIN;
	volatile uint64_t x627 = 15LLU;
	volatile int32_t x628 = -52;
	static int64_t t71 = 593517371485587019LL;

    t71 = ((x625/x626)>>(x627/x628));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x645 = 23U;
	int8_t x646 = 1;
	int32_t x647 = 0;
	int8_t x648 = INT8_MAX;

    t72 = ((x645/x646)>>(x647/x648));

    if (t72 != 23U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x653 = 811;
	static volatile int64_t x654 = INT64_MAX;
	int64_t x656 = INT64_MIN;

    t73 = ((x653/x654)>>(x655/x656));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x657 = -42;
	volatile uint16_t x659 = 12166U;
	uint32_t x660 = 46672869U;
	static int32_t t74 = 118;

    t74 = ((x657/x658)>>(x659/x660));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x665 = 27U;
	int16_t x666 = INT16_MIN;
	volatile uint8_t x667 = 13U;
	volatile int16_t x668 = INT16_MAX;
	volatile int32_t t75 = 3;

    t75 = ((x665/x666)>>(x667/x668));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x673 = 1;
	int32_t x674 = -5670;
	int8_t x675 = INT8_MIN;
	int8_t x676 = INT8_MIN;
	volatile int32_t t76 = 7377676;

    t76 = ((x673/x674)>>(x675/x676));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x685 = UINT64_MAX;
	int16_t x686 = INT16_MAX;
	int32_t x687 = 1412;
	volatile uint64_t t77 = 1953758LLU;

    t77 = ((x685/x686)>>(x687/x688));

    if (t77 != 17592722931712LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x690 = UINT16_MAX;
	volatile int8_t x692 = INT8_MIN;

    t78 = ((x689/x690)>>(x691/x692));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x697 = 8312139605491553LLU;
	volatile int8_t x698 = -1;
	static int16_t x699 = INT16_MAX;
	int64_t x700 = 27816302825660LL;

    t79 = ((x697/x698)>>(x699/x700));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x701 = -1;
	uint8_t x702 = 106U;
	static int8_t x703 = INT8_MIN;
	int64_t x704 = -765195937276883LL;
	volatile int32_t t80 = 151630;

    t80 = ((x701/x702)>>(x703/x704));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x733 = 5706U;
	int32_t x734 = INT32_MIN;
	int32_t x735 = -1;
	static int32_t x736 = INT32_MIN;
	volatile uint32_t t81 = 102U;

    t81 = ((x733/x734)>>(x735/x736));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x737 = 391U;
	int32_t x739 = 2;

    t82 = ((x737/x738)>>(x739/x740));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x745 = 114;
	static int8_t x746 = INT8_MAX;
	volatile int8_t x747 = 1;
	volatile int32_t t83 = 186461641;

    t83 = ((x745/x746)>>(x747/x748));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x753 = INT32_MIN;
	uint32_t x754 = 4U;
	int64_t x755 = 58567283LL;
	static uint32_t x756 = UINT32_MAX;
	uint32_t t84 = 5031U;

    t84 = ((x753/x754)>>(x755/x756));

    if (t84 != 536870912U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x765 = 962589365U;
	volatile int32_t x767 = -4;
	static int8_t x768 = 28;
	volatile uint32_t t85 = 13618U;

    t85 = ((x765/x766)>>(x767/x768));

    if (t85 != 192517873U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x770 = INT64_MIN;
	int32_t x771 = INT32_MIN;
	static int32_t x772 = INT32_MIN;
	volatile int64_t t86 = 4996404684LL;

    t86 = ((x769/x770)>>(x771/x772));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x797 = INT16_MAX;
	int32_t x798 = INT32_MAX;
	static volatile uint16_t x799 = 83U;
	int8_t x800 = INT8_MIN;
	volatile int32_t t87 = -16067364;

    t87 = ((x797/x798)>>(x799/x800));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x801 = UINT8_MAX;
	static volatile int32_t x802 = INT32_MIN;
	int16_t x804 = INT16_MIN;
	int32_t t88 = 15160270;

    t88 = ((x801/x802)>>(x803/x804));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x817 = -1;
	static volatile int32_t x818 = INT32_MIN;
	int16_t x820 = INT16_MAX;
	volatile int32_t t89 = -296990;

    t89 = ((x817/x818)>>(x819/x820));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x834 = 4U;
	static int32_t x836 = INT32_MIN;
	uint32_t t90 = 70962U;

    t90 = ((x833/x834)>>(x835/x836));

    if (t90 != 156U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x838 = 3310361;
	int32_t x840 = INT32_MIN;
	int32_t t91 = 16187;

    t91 = ((x837/x838)>>(x839/x840));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x841 = 5305088U;
	static uint16_t x842 = 18U;
	static int64_t x843 = 29LL;
	int8_t x844 = 22;
	uint32_t t92 = 765290U;

    t92 = ((x841/x842)>>(x843/x844));

    if (t92 != 147363U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x850 = 121U;
	int8_t x851 = INT8_MAX;
	uint32_t t93 = 1375237419U;

    t93 = ((x849/x850)>>(x851/x852));

    if (t93 != 35495597U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x866 = INT8_MIN;
	static volatile int32_t x867 = INT32_MIN;
	int64_t x868 = INT64_MAX;

    t94 = ((x865/x866)>>(x867/x868));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x877 = 15243843218411LL;
	uint64_t x878 = 1LLU;
	int64_t x879 = -1LL;
	int32_t x880 = INT32_MAX;
	volatile uint64_t t95 = 6LLU;

    t95 = ((x877/x878)>>(x879/x880));

    if (t95 != 15243843218411LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x881 = 52;
	uint16_t x882 = 9930U;
	uint64_t x883 = 73LLU;
	int32_t x884 = INT32_MAX;
	int32_t t96 = -176198584;

    t96 = ((x881/x882)>>(x883/x884));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x885 = UINT32_MAX;
	uint64_t x886 = UINT64_MAX;
	uint8_t x887 = UINT8_MAX;
	int16_t x888 = INT16_MIN;
	uint64_t t97 = 89599483174000LLU;

    t97 = ((x885/x886)>>(x887/x888));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x889 = INT8_MIN;
	int32_t x890 = 71101;
	int8_t x891 = -1;
	int8_t x892 = INT8_MAX;

    t98 = ((x889/x890)>>(x891/x892));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x913 = -1LL;
	int8_t x914 = INT8_MIN;
	int8_t x915 = 1;
	static int64_t t99 = -468594077LL;

    t99 = ((x913/x914)>>(x915/x916));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x917 = -30;
	volatile int16_t x918 = INT16_MIN;
	uint16_t x919 = 250U;

    t100 = ((x917/x918)>>(x919/x920));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x921 = 206854U;
	uint64_t x922 = 47222701353171LLU;
	int32_t x923 = INT32_MAX;
	static uint64_t t101 = 1030053889LLU;

    t101 = ((x921/x922)>>(x923/x924));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x927 = -1;
	static volatile uint16_t x928 = 32U;
	uint32_t t102 = 1236302431U;

    t102 = ((x925/x926)>>(x927/x928));

    if (t102 != 23880U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x937 = INT16_MIN;
	uint32_t x938 = 215852049U;
	int16_t x939 = -7;
	int32_t x940 = INT32_MIN;
	uint32_t t103 = 5682U;

    t103 = ((x937/x938)>>(x939/x940));

    if (t103 != 19U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x941 = 5U;
	volatile int16_t x942 = INT16_MIN;
	int8_t x943 = 1;
	uint64_t x944 = 53125327288794386LLU;
	int32_t t104 = -203;

    t104 = ((x941/x942)>>(x943/x944));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x945 = -1LL;
	volatile uint32_t x946 = UINT32_MAX;
	int32_t x947 = -1;
	int64_t t105 = -85388930179193LL;

    t105 = ((x945/x946)>>(x947/x948));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x961 = 33095575180821LLU;
	static int64_t x962 = INT64_MIN;
	int16_t x963 = 4772;
	static int32_t x964 = INT32_MIN;
	volatile uint64_t t106 = 260483806943336LLU;

    t106 = ((x961/x962)>>(x963/x964));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    

    t107 = ((x969/x970)>>(x971/x972));

    if (t107 != 32768) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x973 = 2239368350LLU;
	volatile uint32_t x974 = 46909632U;
	uint8_t x976 = 21U;

    t108 = ((x973/x974)>>(x975/x976));

    if (t108 != 47LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x977 = INT32_MIN;
	static volatile int32_t x978 = INT32_MIN;
	static volatile int32_t t109 = -590896;

    t109 = ((x977/x978)>>(x979/x980));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x989 = UINT16_MAX;
	static volatile int8_t x990 = INT8_MAX;
	int16_t x991 = 0;
	int8_t x992 = 19;

    t110 = ((x989/x990)>>(x991/x992));

    if (t110 != 516) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x993 = 16;
	int64_t x994 = -29785LL;
	int32_t x995 = 63;
	int8_t x996 = INT8_MAX;
	static volatile int64_t t111 = -107340LL;

    t111 = ((x993/x994)>>(x995/x996));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x1009 = INT64_MIN;
	uint8_t x1011 = 42U;
	static int64_t t112 = 118109LL;

    t112 = ((x1009/x1010)>>(x1011/x1012));

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x1017 = UINT8_MAX;
	static int64_t x1018 = -14076672336827LL;
	int32_t x1019 = INT32_MIN;
	static int64_t x1020 = INT64_MIN;

    t113 = ((x1017/x1018)>>(x1019/x1020));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x1021 = 1793;
	uint16_t x1022 = UINT16_MAX;
	int32_t t114 = 4753968;

    t114 = ((x1021/x1022)>>(x1023/x1024));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x1033 = INT8_MIN;
	volatile int16_t x1034 = INT16_MAX;
	int32_t x1035 = INT32_MIN;
	volatile int64_t x1036 = -4236793246LL;
	static volatile int32_t t115 = -12361;

    t115 = ((x1033/x1034)>>(x1035/x1036));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x1037 = UINT8_MAX;
	int8_t x1038 = INT8_MAX;

    t116 = ((x1037/x1038)>>(x1039/x1040));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x1041 = -112LL;
	static int64_t x1042 = INT64_MIN;
	static int8_t x1043 = 20;
	int8_t x1044 = INT8_MIN;
	static int64_t t117 = -4470046LL;

    t117 = ((x1041/x1042)>>(x1043/x1044));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x1065 = 8722435028363181121LLU;
	int16_t x1066 = -8;
	volatile int32_t x1067 = -1;
	int8_t x1068 = INT8_MIN;

    t118 = ((x1065/x1066)>>(x1067/x1068));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x1073 = INT32_MIN;
	uint32_t x1074 = 988592U;
	uint32_t x1075 = UINT32_MAX;
	static int8_t x1076 = INT8_MIN;
	volatile uint32_t t119 = 32299U;

    t119 = ((x1073/x1074)>>(x1075/x1076));

    if (t119 != 1086U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x1077 = INT32_MAX;
	static uint16_t x1078 = 14U;
	volatile uint32_t x1080 = UINT32_MAX;
	volatile int32_t t120 = 282;

    t120 = ((x1077/x1078)>>(x1079/x1080));

    if (t120 != 76695844) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x1090 = UINT8_MAX;
	int16_t x1092 = INT16_MIN;
	static int32_t t121 = 3317;

    t121 = ((x1089/x1090)>>(x1091/x1092));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x1105 = INT8_MIN;
	volatile int8_t x1107 = 1;
	uint16_t x1108 = 30740U;

    t122 = ((x1105/x1106)>>(x1107/x1108));

    if (t122 != 128) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x1117 = 24917LL;
	int8_t x1119 = -1;
	int32_t x1120 = 4;
	volatile int64_t t123 = 541783463238932041LL;

    t123 = ((x1117/x1118)>>(x1119/x1120));

    if (t123 != 732LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x1123 = 11025704U;
	static int32_t x1124 = INT32_MAX;

    t124 = ((x1121/x1122)>>(x1123/x1124));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x1129 = -3237;
	int64_t x1130 = -7684LL;
	uint8_t x1131 = 0U;
	volatile int64_t x1132 = -9893438789399401LL;
	int64_t t125 = -24459558545LL;

    t125 = ((x1129/x1130)>>(x1131/x1132));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x1141 = UINT8_MAX;
	uint64_t x1142 = 544443856LLU;
	uint32_t x1143 = UINT32_MAX;
	uint64_t t126 = 124LLU;

    t126 = ((x1141/x1142)>>(x1143/x1144));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x1150 = INT64_MAX;
	static int32_t x1152 = INT32_MAX;

    t127 = ((x1149/x1150)>>(x1151/x1152));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x1153 = 1628;
	int32_t x1155 = 1109;
	uint8_t x1156 = UINT8_MAX;
	int32_t t128 = 133;

    t128 = ((x1153/x1154)>>(x1155/x1156));

    if (t128 != 5) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x1161 = 1909U;
	volatile uint64_t x1162 = UINT64_MAX;
	uint16_t x1163 = 36U;
	int64_t x1164 = INT64_MAX;
	static volatile uint64_t t129 = 5561223834LLU;

    t129 = ((x1161/x1162)>>(x1163/x1164));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x1177 = UINT64_MAX;
	int8_t x1178 = -1;
	uint32_t x1179 = 5981644U;
	volatile int8_t x1180 = INT8_MIN;
	uint64_t t130 = 3717487LLU;

    t130 = ((x1177/x1178)>>(x1179/x1180));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x1185 = 49U;
	uint64_t x1187 = 7LLU;
	uint8_t x1188 = 51U;
	static uint64_t t131 = 152633471LLU;

    t131 = ((x1185/x1186)>>(x1187/x1188));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1193 = -1;
	volatile uint64_t x1194 = 77383415495119025LLU;
	static volatile int8_t x1195 = INT8_MIN;
	int8_t x1196 = INT8_MIN;
	static volatile uint64_t t132 = 3214564151164LLU;

    t132 = ((x1193/x1194)>>(x1195/x1196));

    if (t132 != 119LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1197 = INT32_MIN;
	uint32_t x1198 = UINT32_MAX;
	int16_t x1200 = INT16_MIN;
	uint32_t t133 = 48816943U;

    t133 = ((x1197/x1198)>>(x1199/x1200));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1213 = INT64_MAX;
	int8_t x1216 = -1;
	uint64_t t134 = 29860920LLU;

    t134 = ((x1213/x1214)>>(x1215/x1216));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x1217 = -1;
	int8_t x1218 = 13;
	static int8_t x1219 = -2;
	volatile int64_t x1220 = -758LL;
	int32_t t135 = 651828388;

    t135 = ((x1217/x1218)>>(x1219/x1220));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x1222 = INT32_MIN;
	int16_t x1224 = -1;
	int32_t t136 = -964983095;

    t136 = ((x1221/x1222)>>(x1223/x1224));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1229 = -19621082LL;
	static volatile int32_t x1230 = INT32_MAX;
	uint8_t x1231 = 0U;
	static int8_t x1232 = INT8_MAX;
	volatile int64_t t137 = -227650663LL;

    t137 = ((x1229/x1230)>>(x1231/x1232));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x1241 = 1;
	uint32_t x1243 = 3U;
	volatile uint64_t t138 = 34447503789340LLU;

    t138 = ((x1241/x1242)>>(x1243/x1244));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x1257 = 7804U;
	volatile uint16_t x1258 = 32748U;
	volatile int32_t x1259 = -1;
	static volatile uint8_t x1260 = UINT8_MAX;

    t139 = ((x1257/x1258)>>(x1259/x1260));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x1262 = UINT16_MAX;
	volatile int64_t x1263 = -1LL;
	volatile int32_t t140 = -23;

    t140 = ((x1261/x1262)>>(x1263/x1264));

    if (t140 != 27) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1266 = INT16_MIN;
	uint64_t x1268 = UINT64_MAX;
	static volatile uint32_t t141 = 46677U;

    t141 = ((x1265/x1266)>>(x1267/x1268));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1269 = -1;
	static int64_t x1270 = -5105LL;
	static int32_t x1272 = INT32_MIN;
	int64_t t142 = 3794LL;

    t142 = ((x1269/x1270)>>(x1271/x1272));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1275 = -35;
	uint64_t x1276 = UINT64_MAX;
	volatile uint64_t t143 = 11LLU;

    t143 = ((x1273/x1274)>>(x1275/x1276));

    if (t143 != 10LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1277 = UINT8_MAX;
	volatile uint16_t x1279 = 3651U;
	static int32_t x1280 = INT32_MIN;

    t144 = ((x1277/x1278)>>(x1279/x1280));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x1285 = 43;
	volatile uint32_t x1286 = 14107645U;
	volatile int32_t x1287 = -1;
	volatile int16_t x1288 = INT16_MIN;

    t145 = ((x1285/x1286)>>(x1287/x1288));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1289 = INT16_MIN;
	int8_t x1290 = -1;
	volatile int16_t x1291 = 3;
	int8_t x1292 = INT8_MIN;
	int32_t t146 = 13219;

    t146 = ((x1289/x1290)>>(x1291/x1292));

    if (t146 != 32768) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1297 = UINT16_MAX;
	volatile int64_t x1298 = INT64_MIN;
	volatile int8_t x1299 = 20;
	uint16_t x1300 = 49U;
	volatile int64_t t147 = -2020535306LL;

    t147 = ((x1297/x1298)>>(x1299/x1300));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1305 = -1;
	static uint8_t x1306 = UINT8_MAX;
	int64_t x1307 = 48LL;
	uint32_t x1308 = 51182U;
	volatile int32_t t148 = -25837;

    t148 = ((x1305/x1306)>>(x1307/x1308));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1310 = -48;
	uint32_t x1311 = UINT32_MAX;
	volatile uint64_t x1312 = 8909072238459734LLU;
	int64_t t149 = -177238496792LL;

    t149 = ((x1309/x1310)>>(x1311/x1312));

    if (t149 != 8833470LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1321 = INT8_MIN;
	static volatile int32_t x1322 = INT32_MIN;
	static int16_t x1324 = INT16_MIN;
	volatile int32_t t150 = -828;

    t150 = ((x1321/x1322)>>(x1323/x1324));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x1329 = INT16_MIN;
	int64_t x1330 = INT64_MAX;
	uint32_t x1332 = 299031831U;
	int64_t t151 = 190995224LL;

    t151 = ((x1329/x1330)>>(x1331/x1332));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1337 = -32;
	static uint16_t x1339 = 6U;
	int64_t x1340 = 1196029693850921946LL;
	int32_t t152 = 95;

    t152 = ((x1337/x1338)>>(x1339/x1340));

    if (t152 != 32) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x1341 = 6U;
	int32_t x1343 = -11;
	static int32_t t153 = -1;

    t153 = ((x1341/x1342)>>(x1343/x1344));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x1361 = 228;
	int16_t x1362 = INT16_MIN;
	static int16_t x1363 = INT16_MIN;
	volatile int32_t x1364 = INT32_MIN;

    t154 = ((x1361/x1362)>>(x1363/x1364));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x1365 = 27776780LLU;
	uint16_t x1366 = 2293U;
	volatile int16_t x1367 = -1;
	static volatile uint64_t t155 = 58101582142644281LLU;

    t155 = ((x1365/x1366)>>(x1367/x1368));

    if (t155 != 12113LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1369 = UINT64_MAX;
	volatile int8_t x1370 = 7;
	static uint64_t x1371 = UINT64_MAX;
	uint64_t x1372 = 2967927621318139432LLU;
	volatile uint64_t t156 = 31672845028077LLU;

    t156 = ((x1369/x1370)>>(x1371/x1372));

    if (t156 != 41175768021673106LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1373 = 0;
	volatile int32_t x1374 = INT32_MIN;
	static volatile uint8_t x1375 = UINT8_MAX;
	int32_t t157 = 7523822;

    t157 = ((x1373/x1374)>>(x1375/x1376));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1381 = INT64_MIN;
	static volatile int8_t x1382 = -17;
	static uint8_t x1383 = 14U;
	uint32_t x1384 = 21058439U;

    t158 = ((x1381/x1382)>>(x1383/x1384));

    if (t158 != 542551296285575047LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1389 = 2864124U;
	volatile int16_t x1390 = 1;
	uint8_t x1391 = 12U;
	static volatile int32_t x1392 = INT32_MIN;

    t159 = ((x1389/x1390)>>(x1391/x1392));

    if (t159 != 2864124U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1393 = -1;
	static int8_t x1394 = -3;
	volatile uint8_t x1395 = 1U;
	static int16_t x1396 = INT16_MIN;
	static int32_t t160 = 16828;

    t160 = ((x1393/x1394)>>(x1395/x1396));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x1397 = 1664492;
	int8_t x1398 = INT8_MAX;
	volatile int8_t x1399 = INT8_MIN;
	uint16_t x1400 = 330U;
	volatile int32_t t161 = 992098565;

    t161 = ((x1397/x1398)>>(x1399/x1400));

    if (t161 != 13106) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1405 = 6U;
	int32_t x1406 = INT32_MAX;
	uint32_t x1407 = UINT32_MAX;
	uint32_t x1408 = UINT32_MAX;

    t162 = ((x1405/x1406)>>(x1407/x1408));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1409 = -1;
	volatile uint64_t x1410 = 2350782253342LLU;
	volatile uint8_t x1411 = 114U;
	int8_t x1412 = INT8_MIN;
	uint64_t t163 = 7939924067420691503LLU;

    t163 = ((x1409/x1410)>>(x1411/x1412));

    if (t163 != 7847066LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x1421 = 14;
	volatile uint32_t x1422 = 10518U;
	static int8_t x1423 = -8;
	volatile uint32_t t164 = 4U;

    t164 = ((x1421/x1422)>>(x1423/x1424));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x1425 = 560694271;
	uint64_t x1426 = 4LLU;
	int32_t x1428 = INT32_MIN;
	volatile uint64_t t165 = 4995LLU;

    t165 = ((x1425/x1426)>>(x1427/x1428));

    if (t165 != 140173567LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1442 = 18126310315654663LL;
	uint64_t x1443 = 217667174425087LLU;
	static int8_t x1444 = -1;
	static volatile int64_t t166 = 15771807838LL;

    t166 = ((x1441/x1442)>>(x1443/x1444));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1445 = INT64_MAX;
	int64_t x1446 = INT64_MIN;
	static uint64_t x1447 = UINT64_MAX;
	int64_t x1448 = INT64_MIN;
	static volatile int64_t t167 = 105135239LL;

    t167 = ((x1445/x1446)>>(x1447/x1448));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1453 = -1;
	volatile int16_t x1455 = -1;
	int16_t x1456 = 30;
	volatile int32_t t168 = 16047;

    t168 = ((x1453/x1454)>>(x1455/x1456));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x1457 = 1;
	int64_t x1458 = INT64_MIN;
	int8_t x1459 = INT8_MIN;
	uint8_t x1460 = UINT8_MAX;

    t169 = ((x1457/x1458)>>(x1459/x1460));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1466 = 30U;
	int32_t x1468 = 81666;
	static volatile int64_t t170 = -2224129548LL;

    t170 = ((x1465/x1466)>>(x1467/x1468));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1477 = INT8_MIN;
	static uint64_t x1478 = 4172047134384897LLU;
	uint32_t x1479 = 5874U;
	int8_t x1480 = -1;
	static uint64_t t171 = 34795LLU;

    t171 = ((x1477/x1478)>>(x1479/x1480));

    if (t171 != 4421LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1485 = -1;
	volatile uint16_t x1487 = UINT16_MAX;
	volatile uint32_t x1488 = 2262U;
	uint32_t t172 = 28185U;

    t172 = ((x1485/x1486)>>(x1487/x1488));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1497 = 1;
	uint16_t x1498 = UINT16_MAX;
	uint32_t x1499 = UINT32_MAX;
	static int64_t x1500 = INT64_MAX;

    t173 = ((x1497/x1498)>>(x1499/x1500));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1505 = -1;
	uint64_t x1506 = UINT64_MAX;
	uint16_t x1507 = 0U;
	static int16_t x1508 = INT16_MAX;
	volatile uint64_t t174 = 4006741LLU;

    t174 = ((x1505/x1506)>>(x1507/x1508));

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1510 = 5952126722654629230LLU;
	volatile int16_t x1511 = -1;
	int16_t x1512 = INT16_MIN;
	volatile uint64_t t175 = 1814943976623425602LLU;

    t175 = ((x1509/x1510)>>(x1511/x1512));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1513 = -2060909;
	int16_t x1514 = INT16_MIN;
	uint64_t x1515 = 0LLU;
	volatile int32_t t176 = -1;

    t176 = ((x1513/x1514)>>(x1515/x1516));

    if (t176 != 62) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1522 = INT64_MIN;
	int32_t x1523 = -1084756;
	static int64_t x1524 = INT64_MIN;
	int64_t t177 = 4484LL;

    t177 = ((x1521/x1522)>>(x1523/x1524));

    if (t177 != 1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1525 = UINT16_MAX;
	uint32_t x1526 = 44747U;
	static volatile uint16_t x1527 = UINT16_MAX;
	volatile uint16_t x1528 = UINT16_MAX;
	static volatile uint32_t t178 = 750U;

    t178 = ((x1525/x1526)>>(x1527/x1528));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1529 = UINT64_MAX;
	static uint8_t x1530 = 1U;
	int8_t x1531 = INT8_MAX;
	uint16_t x1532 = 31U;
	uint64_t t179 = 684LLU;

    t179 = ((x1529/x1530)>>(x1531/x1532));

    if (t179 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1533 = INT32_MAX;
	uint64_t x1534 = 47037311450111LLU;
	static int8_t x1535 = INT8_MIN;
	int8_t x1536 = INT8_MIN;

    t180 = ((x1533/x1534)>>(x1535/x1536));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x1541 = 34U;
	volatile int8_t x1543 = -1;
	uint64_t t181 = 663677092355971270LLU;

    t181 = ((x1541/x1542)>>(x1543/x1544));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1545 = INT8_MAX;
	static uint32_t x1546 = 184951224U;
	int8_t x1547 = -3;

    t182 = ((x1545/x1546)>>(x1547/x1548));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1561 = -1LL;
	uint32_t x1562 = 464U;
	static int32_t x1563 = INT32_MIN;
	volatile uint32_t x1564 = UINT32_MAX;
	static volatile int64_t t183 = 40513LL;

    t183 = ((x1561/x1562)>>(x1563/x1564));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1565 = -1;
	uint16_t x1566 = 116U;
	volatile uint16_t x1567 = 2444U;
	int64_t x1568 = -387664137LL;
	volatile int32_t t184 = 29673;

    t184 = ((x1565/x1566)>>(x1567/x1568));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1573 = INT16_MAX;
	volatile int16_t x1574 = INT16_MIN;
	int32_t x1575 = 8373875;
	static int32_t x1576 = INT32_MIN;

    t185 = ((x1573/x1574)>>(x1575/x1576));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1585 = -1;
	volatile uint32_t x1586 = 213838240U;
	int16_t x1587 = -1;
	int16_t x1588 = INT16_MIN;
	static volatile uint32_t t186 = 1687U;

    t186 = ((x1585/x1586)>>(x1587/x1588));

    if (t186 != 20U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1589 = 128239357U;
	int16_t x1590 = INT16_MIN;
	volatile int16_t x1592 = INT16_MIN;
	uint32_t t187 = 263U;

    t187 = ((x1589/x1590)>>(x1591/x1592));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1593 = 0;
	int16_t x1594 = -1;
	static int8_t x1595 = INT8_MIN;
	int16_t x1596 = INT16_MIN;
	static int32_t t188 = -587;

    t188 = ((x1593/x1594)>>(x1595/x1596));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1598 = INT16_MIN;
	uint32_t x1600 = UINT32_MAX;
	int64_t t189 = -4257402987179561LL;

    t189 = ((x1597/x1598)>>(x1599/x1600));

    if (t189 != 140737488355328LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x1602 = UINT8_MAX;
	int16_t x1603 = -166;
	volatile int64_t x1604 = -3180903LL;
	static volatile uint64_t t190 = 47158LLU;

    t190 = ((x1601/x1602)>>(x1603/x1604));

    if (t190 != 2LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1609 = UINT8_MAX;
	static uint64_t x1610 = 217215LLU;
	uint8_t x1611 = 44U;
	static volatile uint64_t t191 = 253548385698068LLU;

    t191 = ((x1609/x1610)>>(x1611/x1612));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1617 = INT64_MIN;
	volatile int8_t x1618 = INT8_MIN;
	int8_t x1619 = -1;

    t192 = ((x1617/x1618)>>(x1619/x1620));

    if (t192 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1630 = INT8_MIN;
	volatile int64_t x1632 = INT64_MAX;
	uint32_t t193 = 15U;

    t193 = ((x1629/x1630)>>(x1631/x1632));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1633 = 61;
	uint8_t x1634 = UINT8_MAX;
	int8_t x1635 = -1;
	static int64_t x1636 = INT64_MIN;
	int32_t t194 = -8;

    t194 = ((x1633/x1634)>>(x1635/x1636));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1637 = INT8_MIN;
	int64_t x1638 = -212212LL;
	static int32_t x1640 = INT32_MIN;
	int64_t t195 = 252434LL;

    t195 = ((x1637/x1638)>>(x1639/x1640));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1646 = -740308852633LL;
	uint32_t x1647 = UINT32_MAX;
	volatile int32_t x1648 = INT32_MIN;
	volatile uint64_t t196 = 2771812095764966028LLU;

    t196 = ((x1645/x1646)>>(x1647/x1648));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1665 = INT32_MIN;
	uint64_t x1666 = 257191785LLU;
	int32_t x1667 = 80428;
	static uint32_t x1668 = 13858U;
	volatile uint64_t t197 = 105760052231LLU;

    t197 = ((x1665/x1666)>>(x1667/x1668));

    if (t197 != 2241365338LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1677 = 1095953U;
	int16_t x1678 = -1;
	int8_t x1679 = INT8_MIN;
	static int64_t x1680 = INT64_MIN;
	static uint32_t t198 = 18755184U;

    t198 = ((x1677/x1678)>>(x1679/x1680));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x1685 = INT32_MAX;
	static int64_t x1686 = 841651212LL;
	uint16_t x1687 = 27334U;
	uint16_t x1688 = 2589U;
	volatile int64_t t199 = -56688466101334LL;

    t199 = ((x1685/x1686)>>(x1687/x1688));

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

