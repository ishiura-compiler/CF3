
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

uint16_t x2 = 0U;
int64_t x4 = -19166LL;
volatile int16_t x81 = -5;
static uint8_t x151 = 0U;
int8_t x152 = -23;
static int32_t x206 = -1;
uint8_t x221 = 82U;
uint8_t x222 = 0U;
int32_t x237 = -123;
int16_t x290 = INT16_MIN;
int64_t x305 = -2130809952887213529LL;
uint64_t x307 = 26LLU;
int64_t t15 = 3941534LL;
int64_t x445 = 1173LL;
volatile uint8_t x447 = 1U;
int64_t x448 = -1LL;
volatile int64_t x455 = 0LL;
int64_t x493 = 11199400140380541LL;
static volatile int64_t t19 = -1LL;
uint32_t x773 = UINT32_MAX;
int64_t x784 = -1LL;
int64_t t24 = -6887LL;
static uint32_t x875 = 9U;
volatile int32_t t26 = -364873867;
volatile int8_t x917 = -1;
int16_t x947 = 0;
volatile int32_t t28 = -1;
volatile int32_t t31 = 447;
static uint64_t x1001 = 0LLU;
volatile uint16_t x1004 = UINT16_MAX;
static int64_t x1029 = INT64_MIN;
int8_t x1031 = 14;
static uint16_t x1080 = 8U;
volatile int8_t x1137 = 1;
uint16_t x1259 = 7U;
volatile int8_t x1260 = INT8_MAX;
int32_t t39 = -8;
int64_t x1426 = INT64_MIN;
static int16_t x1512 = INT16_MIN;
volatile int32_t t43 = 41886;
volatile int32_t t45 = -3;
int32_t t47 = -472937208;
int8_t x1671 = 19;
int16_t x1708 = 10;
uint32_t x1737 = 992811901U;
int16_t x1768 = INT16_MIN;
int32_t t52 = -239;
volatile uint16_t x1787 = 13U;
int16_t x1788 = 0;
int32_t t53 = -2832;
int16_t x1817 = -6604;
uint16_t x1901 = 0U;
volatile uint32_t t58 = 89481263U;
int32_t t60 = 80607117;
static volatile int32_t t61 = -7386;
uint64_t x2174 = UINT64_MAX;
int32_t x2281 = 0;
volatile int16_t x2284 = -4299;
volatile int32_t t65 = -6536;
int16_t x2309 = -1;
uint64_t x2310 = 134363688835LLU;
int64_t x2359 = 1LL;
uint8_t x2459 = 3U;
uint8_t x2525 = UINT8_MAX;
int32_t t70 = 1;
volatile int64_t t71 = 238878102LL;
uint8_t x2723 = 0U;
int8_t x2741 = -1;
volatile uint32_t t78 = 1U;
int64_t x3005 = INT64_MAX;
int32_t x3034 = INT32_MAX;
int16_t x3079 = 1;
int16_t x3137 = -1;
uint16_t x3234 = 322U;
uint64_t x3258 = 10381799482535611LLU;
static int16_t x3269 = -1;
int64_t x3320 = INT64_MAX;
int64_t t89 = -223966863LL;
int8_t x3344 = -1;
int16_t x3397 = 97;
volatile uint16_t x3399 = 4U;
int32_t t92 = 6952555;
int16_t x3410 = INT16_MIN;
int32_t x3493 = INT32_MIN;
int16_t x3521 = 229;
uint8_t x3607 = 1U;
static uint8_t x3727 = 5U;
uint8_t x3789 = 127U;
volatile int64_t t101 = -7LL;
static volatile int32_t t102 = -233;
int8_t x3972 = -1;
static uint64_t x4019 = 2LLU;
int8_t x4099 = 0;
static int64_t x4131 = 0LL;
int32_t t110 = 1;
static int64_t x4224 = INT64_MAX;
int32_t t113 = 9367;
volatile int8_t x4369 = -46;
volatile uint8_t x4371 = 0U;
int32_t x4481 = INT32_MIN;
static volatile int32_t t117 = 1;
uint64_t x4497 = 6LLU;
uint32_t x4546 = UINT32_MAX;
uint8_t x4547 = 8U;
volatile uint64_t x4612 = 33207711LLU;
uint64_t t121 = 149945206846LLU;
int64_t x4613 = -1814270809926LL;
int8_t x4614 = 1;
int16_t x4616 = INT16_MAX;
uint64_t x4689 = 331942028098LLU;
int8_t x4702 = INT8_MIN;
int16_t x4852 = INT16_MIN;
int8_t x5111 = 1;
static int32_t t132 = -30;
int8_t x5115 = 0;
int8_t x5137 = -1;
uint64_t x5138 = 35LLU;
static int32_t x5157 = -3481;
uint32_t t135 = 269003U;
int64_t x5174 = INT64_MIN;
uint32_t x5185 = UINT32_MAX;
int16_t x5186 = INT16_MAX;
int32_t t137 = 29;
static uint8_t x5418 = UINT8_MAX;
volatile uint32_t x5430 = 6774917U;
int16_t x5548 = INT16_MIN;
volatile int32_t t142 = 109384843;
uint16_t x5553 = UINT16_MAX;
static int16_t x5634 = 4;
volatile int8_t x5635 = 0;
volatile int32_t t144 = 13567646;
int8_t x5645 = INT8_MIN;
int64_t x5646 = -1LL;
uint64_t x5769 = 6901122622363LLU;
uint16_t x5772 = 165U;
int16_t x5899 = 1;
uint32_t x5928 = UINT32_MAX;
static int8_t x5967 = 0;
static uint32_t x5968 = 7U;
static volatile int32_t t157 = -227362;
int64_t x6149 = INT64_MAX;
uint16_t x6179 = 20U;
static uint8_t x6211 = 7U;
uint8_t x6307 = 6U;
static uint8_t x6334 = 92U;
int64_t x6385 = INT64_MAX;
uint16_t x6388 = UINT16_MAX;
uint8_t x6415 = 3U;
uint8_t x6421 = 55U;
static uint8_t x6423 = 1U;
static int64_t x6529 = INT64_MAX;
int32_t t172 = -370;
uint64_t t173 = 525LLU;
uint8_t x6667 = 9U;
int32_t t176 = -2039590;
volatile int16_t x6881 = -5644;
int16_t x6883 = 0;
volatile int32_t x6893 = -3153;
static volatile uint32_t x6896 = 1000160939U;
volatile uint32_t t179 = 21245U;
int8_t x7012 = INT8_MAX;
int32_t t181 = 2822;
volatile int16_t x7024 = INT16_MAX;
volatile int32_t t185 = 1924952;
uint64_t x7266 = 288841LLU;
volatile int32_t t187 = 53663064;
uint16_t x7393 = 235U;
volatile int32_t t188 = 2;
int8_t x7818 = -1;
uint64_t x7882 = 2295567600487053172LLU;
int8_t x7982 = 35;
volatile int32_t t199 = -420381;


void f0(void) {
    	volatile int16_t x1 = -2;
	uint8_t x3 = 4U;
	volatile int64_t t0 = -3797113LL;

    t0 = (((x1!=x2)<<x3)-x4);

    if (t0 != 19182LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	int8_t x67 = 6;
	int8_t x68 = INT8_MAX;
	volatile int32_t t1 = 16140;

    t1 = (((x65!=x66)<<x67)-x68);

    if (t1 != -63) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x82 = INT8_MIN;
	static int8_t x83 = 1;
	int16_t x84 = INT16_MIN;
	volatile int32_t t2 = 5279;

    t2 = (((x81!=x82)<<x83)-x84);

    if (t2 != 32770) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x133 = INT32_MAX;
	uint64_t x134 = UINT64_MAX;
	static int8_t x135 = 6;
	int64_t x136 = -1LL;
	static int64_t t3 = -13435762599209LL;

    t3 = (((x133!=x134)<<x135)-x136);

    if (t3 != 65LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x149 = 54U;
	int32_t x150 = INT32_MIN;
	static int32_t t4 = 12552825;

    t4 = (((x149!=x150)<<x151)-x152);

    if (t4 != 24) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x165 = UINT16_MAX;
	static volatile int64_t x166 = INT64_MIN;
	int16_t x167 = 1;
	volatile int64_t x168 = 128387217LL;
	int64_t t5 = -14583216LL;

    t5 = (((x165!=x166)<<x167)-x168);

    if (t5 != -128387215LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x169 = INT64_MIN;
	static int8_t x170 = 0;
	int32_t x171 = 8;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t6 = -3733;

    t6 = (((x169!=x170)<<x171)-x172);

    if (t6 != 384) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x201 = 22234087U;
	uint64_t x202 = UINT64_MAX;
	uint32_t x203 = 0U;
	volatile uint8_t x204 = UINT8_MAX;
	int32_t t7 = -355568;

    t7 = (((x201!=x202)<<x203)-x204);

    if (t7 != -254) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x205 = 2066485170LLU;
	static volatile uint8_t x207 = 6U;
	volatile int32_t x208 = -437807555;
	static volatile int32_t t8 = -1;

    t8 = (((x205!=x206)<<x207)-x208);

    if (t8 != 437807619) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x223 = 6LLU;
	static volatile int8_t x224 = 1;
	int32_t t9 = 2083214;

    t9 = (((x221!=x222)<<x223)-x224);

    if (t9 != 63) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x238 = 4822;
	uint8_t x239 = 0U;
	static int16_t x240 = -1;
	volatile int32_t t10 = -229;

    t10 = (((x237!=x238)<<x239)-x240);

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x277 = -1;
	static uint8_t x278 = 34U;
	volatile uint32_t x279 = 1U;
	uint16_t x280 = 3U;
	volatile int32_t t11 = -238500;

    t11 = (((x277!=x278)<<x279)-x280);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x289 = 19997U;
	uint8_t x291 = 11U;
	int32_t x292 = -65223;
	int32_t t12 = 36871;

    t12 = (((x289!=x290)<<x291)-x292);

    if (t12 != 67271) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x297 = 37;
	uint64_t x298 = 1026622250LLU;
	uint8_t x299 = 1U;
	int16_t x300 = -7941;
	volatile int32_t t13 = -4448021;

    t13 = (((x297!=x298)<<x299)-x300);

    if (t13 != 7943) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x306 = INT64_MIN;
	static uint16_t x308 = UINT16_MAX;
	volatile int32_t t14 = 996922;

    t14 = (((x305!=x306)<<x307)-x308);

    if (t14 != 67043329) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x429 = 318502393876182966LLU;
	static uint32_t x430 = 57860U;
	int8_t x431 = 1;
	volatile int64_t x432 = 1LL;

    t15 = (((x429!=x430)<<x431)-x432);

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x446 = INT64_MIN;
	static int64_t t16 = -189408LL;

    t16 = (((x445!=x446)<<x447)-x448);

    if (t16 != 3LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x453 = UINT32_MAX;
	volatile uint8_t x454 = 102U;
	int16_t x456 = -13296;
	static volatile int32_t t17 = -84354807;

    t17 = (((x453!=x454)<<x455)-x456);

    if (t17 != 13297) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x485 = INT32_MAX;
	static int64_t x486 = INT64_MIN;
	int64_t x487 = 2LL;
	int8_t x488 = INT8_MIN;
	volatile int32_t t18 = 1;

    t18 = (((x485!=x486)<<x487)-x488);

    if (t18 != 132) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x494 = -1LL;
	volatile uint8_t x495 = 0U;
	int64_t x496 = -1LL;

    t19 = (((x493!=x494)<<x495)-x496);

    if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x497 = 540487979232700LLU;
	int32_t x498 = -11120199;
	volatile uint8_t x499 = 1U;
	int16_t x500 = 1;
	int32_t t20 = -158489378;

    t20 = (((x497!=x498)<<x499)-x500);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x629 = INT16_MIN;
	int16_t x630 = 15091;
	int8_t x631 = 1;
	int64_t x632 = 2946073195577717430LL;
	int64_t t21 = 381LL;

    t21 = (((x629!=x630)<<x631)-x632);

    if (t21 != -2946073195577717428LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x669 = 9;
	int64_t x670 = 776287265998022LL;
	int8_t x671 = 28;
	int64_t x672 = 24194259740448348LL;
	int64_t t22 = 19700089LL;

    t22 = (((x669!=x670)<<x671)-x672);

    if (t22 != -24194259472012892LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x774 = -1LL;
	uint32_t x775 = 4U;
	static int16_t x776 = INT16_MIN;
	volatile int32_t t23 = 28125;

    t23 = (((x773!=x774)<<x775)-x776);

    if (t23 != 32784) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x781 = -22390848247LL;
	volatile int64_t x782 = 1308344LL;
	static int8_t x783 = 1;

    t24 = (((x781!=x782)<<x783)-x784);

    if (t24 != 3LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x861 = -1;
	static uint16_t x862 = 227U;
	volatile uint16_t x863 = 15U;
	uint16_t x864 = 6U;
	int32_t t25 = 0;

    t25 = (((x861!=x862)<<x863)-x864);

    if (t25 != 32762) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x873 = 3217;
	int64_t x874 = 24521711524815LL;
	int16_t x876 = INT16_MAX;

    t26 = (((x873!=x874)<<x875)-x876);

    if (t26 != -32255) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x918 = INT16_MAX;
	static uint8_t x919 = 3U;
	uint32_t x920 = 6812462U;
	volatile uint32_t t27 = 234U;

    t27 = (((x917!=x918)<<x919)-x920);

    if (t27 != 4288154842U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x945 = INT8_MIN;
	volatile int8_t x946 = -1;
	int8_t x948 = INT8_MIN;

    t28 = (((x945!=x946)<<x947)-x948);

    if (t28 != 129) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x961 = 54347984410275LLU;
	int8_t x962 = INT8_MIN;
	static uint32_t x963 = 1U;
	int8_t x964 = -5;
	int32_t t29 = -1581;

    t29 = (((x961!=x962)<<x963)-x964);

    if (t29 != 7) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x989 = INT16_MIN;
	volatile uint64_t x990 = 155091716521809LLU;
	uint8_t x991 = 1U;
	volatile uint32_t x992 = 128522656U;
	static uint32_t t30 = 247090442U;

    t30 = (((x989!=x990)<<x991)-x992);

    if (t30 != 4166444642U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x997 = INT16_MIN;
	static int8_t x998 = INT8_MAX;
	static volatile int32_t x999 = 15;
	uint8_t x1000 = 0U;

    t31 = (((x997!=x998)<<x999)-x1000);

    if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x1002 = INT8_MIN;
	uint32_t x1003 = 0U;
	int32_t t32 = 176388;

    t32 = (((x1001!=x1002)<<x1003)-x1004);

    if (t32 != -65534) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1013 = 0LLU;
	volatile int64_t x1014 = INT64_MIN;
	int16_t x1015 = 0;
	uint64_t x1016 = 12055962LLU;
	uint64_t t33 = 15305522281LLU;

    t33 = (((x1013!=x1014)<<x1015)-x1016);

    if (t33 != 18446744073697495655LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x1030 = -223;
	static volatile uint64_t x1032 = 9485113LLU;
	uint64_t t34 = 14137627992LLU;

    t34 = (((x1029!=x1030)<<x1031)-x1032);

    if (t34 != 18446744073700082887LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1077 = 14140479420719225LLU;
	int32_t x1078 = INT32_MIN;
	uint8_t x1079 = 1U;
	int32_t t35 = -29257891;

    t35 = (((x1077!=x1078)<<x1079)-x1080);

    if (t35 != -6) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x1138 = 0U;
	static int16_t x1139 = 0;
	uint32_t x1140 = 204U;
	uint32_t t36 = 77899686U;

    t36 = (((x1137!=x1138)<<x1139)-x1140);

    if (t36 != 4294967093U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1145 = INT8_MAX;
	int8_t x1146 = INT8_MAX;
	static uint16_t x1147 = 0U;
	volatile int8_t x1148 = 26;
	volatile int32_t t37 = 1447;

    t37 = (((x1145!=x1146)<<x1147)-x1148);

    if (t37 != -26) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1249 = 9159187472227940LLU;
	uint64_t x1250 = UINT64_MAX;
	uint8_t x1251 = 0U;
	int8_t x1252 = -22;
	volatile int32_t t38 = -46;

    t38 = (((x1249!=x1250)<<x1251)-x1252);

    if (t38 != 23) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x1257 = -1;
	int16_t x1258 = INT16_MAX;

    t39 = (((x1257!=x1258)<<x1259)-x1260);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x1389 = UINT8_MAX;
	static volatile int64_t x1390 = 26LL;
	volatile uint32_t x1391 = 10U;
	int8_t x1392 = INT8_MIN;
	static volatile int32_t t40 = 38218;

    t40 = (((x1389!=x1390)<<x1391)-x1392);

    if (t40 != 1152) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x1425 = -779;
	int64_t x1427 = 1LL;
	uint16_t x1428 = UINT16_MAX;
	static volatile int32_t t41 = 0;

    t41 = (((x1425!=x1426)<<x1427)-x1428);

    if (t41 != -65533) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1477 = INT64_MIN;
	int32_t x1478 = INT32_MIN;
	int8_t x1479 = 0;
	uint64_t x1480 = UINT64_MAX;
	volatile uint64_t t42 = 2LLU;

    t42 = (((x1477!=x1478)<<x1479)-x1480);

    if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x1509 = INT64_MIN;
	int32_t x1510 = INT32_MIN;
	volatile uint64_t x1511 = 1LLU;

    t43 = (((x1509!=x1510)<<x1511)-x1512);

    if (t43 != 32770) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x1513 = 7U;
	int64_t x1514 = INT64_MIN;
	static int16_t x1515 = 3;
	int16_t x1516 = -1;
	volatile int32_t t44 = -2;

    t44 = (((x1513!=x1514)<<x1515)-x1516);

    if (t44 != 9) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x1521 = -385712;
	static volatile int16_t x1522 = INT16_MIN;
	static volatile uint8_t x1523 = 7U;
	static int8_t x1524 = INT8_MIN;

    t45 = (((x1521!=x1522)<<x1523)-x1524);

    if (t45 != 256) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x1549 = INT32_MIN;
	uint8_t x1550 = 1U;
	uint16_t x1551 = 3U;
	int32_t x1552 = INT32_MAX;
	int32_t t46 = 535881338;

    t46 = (((x1549!=x1550)<<x1551)-x1552);

    if (t46 != -2147483639) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x1621 = INT8_MIN;
	uint32_t x1622 = 2015U;
	uint8_t x1623 = 11U;
	volatile int8_t x1624 = -30;

    t47 = (((x1621!=x1622)<<x1623)-x1624);

    if (t47 != 2078) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x1669 = UINT16_MAX;
	int32_t x1670 = INT32_MIN;
	uint32_t x1672 = UINT32_MAX;
	volatile uint32_t t48 = 823194358U;

    t48 = (((x1669!=x1670)<<x1671)-x1672);

    if (t48 != 524289U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x1705 = -1;
	uint32_t x1706 = 343U;
	static volatile uint8_t x1707 = 0U;
	volatile int32_t t49 = -2009347;

    t49 = (((x1705!=x1706)<<x1707)-x1708);

    if (t49 != -9) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x1738 = UINT64_MAX;
	volatile uint16_t x1739 = 23U;
	uint16_t x1740 = 1342U;
	static volatile int32_t t50 = -34964;

    t50 = (((x1737!=x1738)<<x1739)-x1740);

    if (t50 != 8387266) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x1749 = 20457U;
	int32_t x1750 = -1;
	static uint8_t x1751 = 3U;
	static volatile int64_t x1752 = -440450950310529602LL;
	volatile int64_t t51 = -126LL;

    t51 = (((x1749!=x1750)<<x1751)-x1752);

    if (t51 != 440450950310529610LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x1765 = INT16_MAX;
	uint32_t x1766 = 37U;
	uint32_t x1767 = 14U;

    t52 = (((x1765!=x1766)<<x1767)-x1768);

    if (t52 != 49152) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1785 = INT16_MAX;
	uint64_t x1786 = 26LLU;

    t53 = (((x1785!=x1786)<<x1787)-x1788);

    if (t53 != 8192) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1818 = INT8_MAX;
	uint64_t x1819 = 0LLU;
	static int32_t x1820 = 65;
	int32_t t54 = -477771;

    t54 = (((x1817!=x1818)<<x1819)-x1820);

    if (t54 != -64) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x1902 = INT16_MAX;
	uint8_t x1903 = 9U;
	int64_t x1904 = INT64_MAX;
	int64_t t55 = -2503109746338596LL;

    t55 = (((x1901!=x1902)<<x1903)-x1904);

    if (t55 != -9223372036854775295LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x1945 = INT8_MIN;
	uint32_t x1946 = 504U;
	int16_t x1947 = 0;
	uint8_t x1948 = UINT8_MAX;
	volatile int32_t t56 = 20702888;

    t56 = (((x1945!=x1946)<<x1947)-x1948);

    if (t56 != -254) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x1981 = 29U;
	int64_t x1982 = -299194LL;
	static int8_t x1983 = 1;
	uint16_t x1984 = UINT16_MAX;
	int32_t t57 = 164476785;

    t57 = (((x1981!=x1982)<<x1983)-x1984);

    if (t57 != -65533) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x2085 = 107U;
	int64_t x2086 = INT64_MIN;
	volatile uint16_t x2087 = 9U;
	uint32_t x2088 = 7145072U;

    t58 = (((x2085!=x2086)<<x2087)-x2088);

    if (t58 != 4287822736U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x2089 = UINT64_MAX;
	static volatile int32_t x2090 = 3;
	volatile int8_t x2091 = 0;
	uint8_t x2092 = 61U;
	int32_t t59 = -13;

    t59 = (((x2089!=x2090)<<x2091)-x2092);

    if (t59 != -60) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x2137 = INT16_MIN;
	int32_t x2138 = INT32_MIN;
	int16_t x2139 = 2;
	uint8_t x2140 = 5U;

    t60 = (((x2137!=x2138)<<x2139)-x2140);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x2161 = INT64_MAX;
	static int16_t x2162 = 503;
	static uint16_t x2163 = 4U;
	volatile int8_t x2164 = INT8_MAX;

    t61 = (((x2161!=x2162)<<x2163)-x2164);

    if (t61 != -111) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x2173 = 24025480422944995LLU;
	uint32_t x2175 = 1U;
	static int16_t x2176 = 2202;
	int32_t t62 = -176897479;

    t62 = (((x2173!=x2174)<<x2175)-x2176);

    if (t62 != -2200) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x2282 = -1;
	static uint16_t x2283 = 1U;
	volatile int32_t t63 = 907;

    t63 = (((x2281!=x2282)<<x2283)-x2284);

    if (t63 != 4301) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2289 = 5900;
	int16_t x2290 = -1;
	static uint8_t x2291 = 13U;
	volatile int64_t x2292 = INT64_MAX;
	int64_t t64 = 31LL;

    t64 = (((x2289!=x2290)<<x2291)-x2292);

    if (t64 != -9223372036854767615LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x2305 = INT32_MIN;
	int64_t x2306 = INT64_MIN;
	volatile int16_t x2307 = 9;
	uint16_t x2308 = UINT16_MAX;

    t65 = (((x2305!=x2306)<<x2307)-x2308);

    if (t65 != -65023) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x2311 = 1U;
	volatile int32_t x2312 = -1;
	volatile int32_t t66 = -7923;

    t66 = (((x2309!=x2310)<<x2311)-x2312);

    if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x2357 = INT64_MIN;
	int64_t x2358 = INT64_MIN;
	uint32_t x2360 = UINT32_MAX;
	uint32_t t67 = 9U;

    t67 = (((x2357!=x2358)<<x2359)-x2360);

    if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x2377 = INT32_MIN;
	uint64_t x2378 = 44LLU;
	uint8_t x2379 = 2U;
	int8_t x2380 = 15;
	volatile int32_t t68 = -3688;

    t68 = (((x2377!=x2378)<<x2379)-x2380);

    if (t68 != -11) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x2457 = UINT16_MAX;
	static int32_t x2458 = -1;
	int32_t x2460 = -1553078;
	int32_t t69 = 917419903;

    t69 = (((x2457!=x2458)<<x2459)-x2460);

    if (t69 != 1553086) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2526 = INT8_MIN;
	uint64_t x2527 = 0LLU;
	uint8_t x2528 = UINT8_MAX;

    t70 = (((x2525!=x2526)<<x2527)-x2528);

    if (t70 != -254) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x2573 = UINT64_MAX;
	int8_t x2574 = -1;
	int8_t x2575 = 0;
	int64_t x2576 = 2078531592379034442LL;

    t71 = (((x2573!=x2574)<<x2575)-x2576);

    if (t71 != -2078531592379034442LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x2713 = UINT8_MAX;
	int16_t x2714 = INT16_MAX;
	uint16_t x2715 = 5U;
	volatile int16_t x2716 = INT16_MIN;
	volatile int32_t t72 = 2926082;

    t72 = (((x2713!=x2714)<<x2715)-x2716);

    if (t72 != 32800) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x2721 = UINT32_MAX;
	static uint8_t x2722 = 0U;
	int32_t x2724 = 377;
	int32_t t73 = -1;

    t73 = (((x2721!=x2722)<<x2723)-x2724);

    if (t73 != -376) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x2742 = INT8_MAX;
	static volatile uint16_t x2743 = 23U;
	int64_t x2744 = -1LL;
	int64_t t74 = 3810827LL;

    t74 = (((x2741!=x2742)<<x2743)-x2744);

    if (t74 != 8388609LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x2761 = 160LL;
	int64_t x2762 = INT64_MIN;
	static volatile uint8_t x2763 = 30U;
	static volatile int16_t x2764 = -196;
	int32_t t75 = -3909797;

    t75 = (((x2761!=x2762)<<x2763)-x2764);

    if (t75 != 1073742020) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x2773 = -358758862618546LL;
	uint8_t x2774 = 1U;
	static uint8_t x2775 = 0U;
	int64_t x2776 = 212606LL;
	static int64_t t76 = 1884647LL;

    t76 = (((x2773!=x2774)<<x2775)-x2776);

    if (t76 != -212605LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2809 = 1;
	static uint64_t x2810 = UINT64_MAX;
	static int32_t x2811 = 2;
	volatile int64_t x2812 = INT64_MAX;
	volatile int64_t t77 = 884074616222065LL;

    t77 = (((x2809!=x2810)<<x2811)-x2812);

    if (t77 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x2877 = INT16_MIN;
	volatile int16_t x2878 = INT16_MIN;
	uint8_t x2879 = 7U;
	uint32_t x2880 = 669229747U;

    t78 = (((x2877!=x2878)<<x2879)-x2880);

    if (t78 != 3625737549U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x2909 = 25077213LL;
	uint32_t x2910 = 63569U;
	int8_t x2911 = 6;
	static uint32_t x2912 = 846504U;
	static volatile uint32_t t79 = 498381705U;

    t79 = (((x2909!=x2910)<<x2911)-x2912);

    if (t79 != 4294120856U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x3006 = 2U;
	volatile int8_t x3007 = 1;
	volatile uint32_t x3008 = UINT32_MAX;
	volatile uint32_t t80 = 98161U;

    t80 = (((x3005!=x3006)<<x3007)-x3008);

    if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x3033 = INT8_MIN;
	uint8_t x3035 = 5U;
	uint16_t x3036 = UINT16_MAX;
	volatile int32_t t81 = 1;

    t81 = (((x3033!=x3034)<<x3035)-x3036);

    if (t81 != -65503) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x3077 = UINT8_MAX;
	static volatile uint32_t x3078 = 2521229U;
	int16_t x3080 = -10;
	volatile int32_t t82 = 14;

    t82 = (((x3077!=x3078)<<x3079)-x3080);

    if (t82 != 12) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x3121 = 22;
	uint32_t x3122 = UINT32_MAX;
	uint8_t x3123 = 1U;
	int32_t x3124 = 70;
	volatile int32_t t83 = 49369691;

    t83 = (((x3121!=x3122)<<x3123)-x3124);

    if (t83 != -68) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x3138 = INT8_MAX;
	volatile uint8_t x3139 = 1U;
	int16_t x3140 = -637;
	static int32_t t84 = -25845;

    t84 = (((x3137!=x3138)<<x3139)-x3140);

    if (t84 != 639) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x3233 = 30U;
	uint16_t x3235 = 17U;
	uint32_t x3236 = 3563U;
	volatile uint32_t t85 = 498099713U;

    t85 = (((x3233!=x3234)<<x3235)-x3236);

    if (t85 != 127509U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x3257 = INT32_MIN;
	uint16_t x3259 = 8U;
	uint32_t x3260 = 2461004U;
	volatile uint32_t t86 = 37U;

    t86 = (((x3257!=x3258)<<x3259)-x3260);

    if (t86 != 4292506548U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x3270 = INT8_MAX;
	volatile uint8_t x3271 = 7U;
	uint64_t x3272 = 1832815382116LLU;
	volatile uint64_t t87 = 38LLU;

    t87 = (((x3269!=x3270)<<x3271)-x3272);

    if (t87 != 18446742240894169628LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x3305 = INT16_MIN;
	int8_t x3306 = INT8_MIN;
	static uint16_t x3307 = 23U;
	uint64_t x3308 = UINT64_MAX;
	uint64_t t88 = 2LLU;

    t88 = (((x3305!=x3306)<<x3307)-x3308);

    if (t88 != 8388609LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x3317 = 43U;
	uint16_t x3318 = 43U;
	static uint32_t x3319 = 14U;

    t89 = (((x3317!=x3318)<<x3319)-x3320);

    if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x3341 = -20;
	int16_t x3342 = INT16_MIN;
	int64_t x3343 = 3LL;
	static volatile int32_t t90 = 600254300;

    t90 = (((x3341!=x3342)<<x3343)-x3344);

    if (t90 != 9) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x3385 = INT64_MAX;
	uint64_t x3386 = 17724587LLU;
	int16_t x3387 = 0;
	int16_t x3388 = INT16_MAX;
	int32_t t91 = 92666;

    t91 = (((x3385!=x3386)<<x3387)-x3388);

    if (t91 != -32766) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x3398 = 22U;
	static int8_t x3400 = INT8_MIN;

    t92 = (((x3397!=x3398)<<x3399)-x3400);

    if (t92 != 144) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x3409 = 6U;
	uint8_t x3411 = 0U;
	uint64_t x3412 = UINT64_MAX;
	uint64_t t93 = 1632099190043LLU;

    t93 = (((x3409!=x3410)<<x3411)-x3412);

    if (t93 != 2LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x3494 = -3622084010233664LL;
	static volatile int16_t x3495 = 0;
	uint8_t x3496 = UINT8_MAX;
	volatile int32_t t94 = 2;

    t94 = (((x3493!=x3494)<<x3495)-x3496);

    if (t94 != -254) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x3522 = -1;
	uint16_t x3523 = 2U;
	int32_t x3524 = 0;
	int32_t t95 = 680209;

    t95 = (((x3521!=x3522)<<x3523)-x3524);

    if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x3585 = 32U;
	static int16_t x3586 = -44;
	static volatile uint8_t x3587 = 1U;
	volatile uint16_t x3588 = 2U;
	int32_t t96 = -7;

    t96 = (((x3585!=x3586)<<x3587)-x3588);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x3605 = 36U;
	volatile int32_t x3606 = INT32_MIN;
	volatile int32_t x3608 = INT32_MAX;
	static int32_t t97 = 787;

    t97 = (((x3605!=x3606)<<x3607)-x3608);

    if (t97 != -2147483645) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x3653 = 23U;
	volatile uint32_t x3654 = 112805U;
	int8_t x3655 = 25;
	volatile uint8_t x3656 = 13U;
	volatile int32_t t98 = 108298;

    t98 = (((x3653!=x3654)<<x3655)-x3656);

    if (t98 != 33554419) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x3725 = 0U;
	volatile int32_t x3726 = -1;
	int8_t x3728 = -1;
	volatile int32_t t99 = -250;

    t99 = (((x3725!=x3726)<<x3727)-x3728);

    if (t99 != 33) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x3737 = INT16_MIN;
	int64_t x3738 = INT64_MAX;
	uint16_t x3739 = 0U;
	volatile int8_t x3740 = INT8_MAX;
	int32_t t100 = -196;

    t100 = (((x3737!=x3738)<<x3739)-x3740);

    if (t100 != -126) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x3790 = INT32_MIN;
	uint16_t x3791 = 2U;
	static int64_t x3792 = INT64_MAX;

    t101 = (((x3789!=x3790)<<x3791)-x3792);

    if (t101 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x3921 = -1;
	volatile int32_t x3922 = INT32_MAX;
	int8_t x3923 = 1;
	int8_t x3924 = INT8_MIN;

    t102 = (((x3921!=x3922)<<x3923)-x3924);

    if (t102 != 130) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x3925 = UINT16_MAX;
	uint16_t x3926 = UINT16_MAX;
	volatile int8_t x3927 = 9;
	uint64_t x3928 = 44LLU;
	volatile uint64_t t103 = 2187204308042LLU;

    t103 = (((x3925!=x3926)<<x3927)-x3928);

    if (t103 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3961 = INT16_MIN;
	int8_t x3962 = -1;
	uint8_t x3963 = 5U;
	int64_t x3964 = -16156LL;
	static volatile int64_t t104 = 43025321316854038LL;

    t104 = (((x3961!=x3962)<<x3963)-x3964);

    if (t104 != 16188LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x3969 = 14930079LLU;
	int64_t x3970 = -3803908LL;
	volatile uint8_t x3971 = 1U;
	int32_t t105 = -466;

    t105 = (((x3969!=x3970)<<x3971)-x3972);

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint16_t x4017 = UINT16_MAX;
	static int64_t x4018 = -3LL;
	int64_t x4020 = 19439967843LL;
	volatile int64_t t106 = -3070939039LL;

    t106 = (((x4017!=x4018)<<x4019)-x4020);

    if (t106 != -19439967839LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x4049 = 52307646;
	int16_t x4050 = INT16_MIN;
	uint8_t x4051 = 5U;
	volatile uint8_t x4052 = UINT8_MAX;
	volatile int32_t t107 = 15454;

    t107 = (((x4049!=x4050)<<x4051)-x4052);

    if (t107 != -223) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x4097 = 1285LLU;
	uint64_t x4098 = 1068148114859LLU;
	static uint32_t x4100 = 55163391U;
	uint32_t t108 = 499988602U;

    t108 = (((x4097!=x4098)<<x4099)-x4100);

    if (t108 != 4239803906U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x4129 = INT64_MAX;
	int8_t x4130 = 2;
	int8_t x4132 = INT8_MIN;
	volatile int32_t t109 = 319889;

    t109 = (((x4129!=x4130)<<x4131)-x4132);

    if (t109 != 129) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x4205 = INT64_MAX;
	volatile int8_t x4206 = 0;
	uint8_t x4207 = 12U;
	uint16_t x4208 = 364U;

    t110 = (((x4205!=x4206)<<x4207)-x4208);

    if (t110 != 3732) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x4221 = 602056508174509152LLU;
	int32_t x4222 = INT32_MIN;
	static volatile int16_t x4223 = 2;
	int64_t t111 = 60678462701998LL;

    t111 = (((x4221!=x4222)<<x4223)-x4224);

    if (t111 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x4297 = INT32_MIN;
	int32_t x4298 = -1;
	static int32_t x4299 = 0;
	int32_t x4300 = 10;
	volatile int32_t t112 = 34;

    t112 = (((x4297!=x4298)<<x4299)-x4300);

    if (t112 != -9) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x4325 = INT32_MIN;
	int64_t x4326 = INT64_MAX;
	uint64_t x4327 = 2LLU;
	uint16_t x4328 = 1U;

    t113 = (((x4325!=x4326)<<x4327)-x4328);

    if (t113 != 3) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x4361 = 330U;
	static int8_t x4362 = INT8_MIN;
	uint8_t x4363 = 2U;
	static int8_t x4364 = 0;
	static volatile int32_t t114 = -19984191;

    t114 = (((x4361!=x4362)<<x4363)-x4364);

    if (t114 != 4) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x4370 = INT64_MAX;
	int16_t x4372 = INT16_MIN;
	int32_t t115 = -38;

    t115 = (((x4369!=x4370)<<x4371)-x4372);

    if (t115 != 32769) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x4401 = UINT32_MAX;
	static volatile uint8_t x4402 = UINT8_MAX;
	int8_t x4403 = 2;
	int32_t x4404 = INT32_MAX;
	volatile int32_t t116 = 48025;

    t116 = (((x4401!=x4402)<<x4403)-x4404);

    if (t116 != -2147483643) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x4482 = UINT16_MAX;
	int16_t x4483 = 1;
	volatile int8_t x4484 = 0;

    t117 = (((x4481!=x4482)<<x4483)-x4484);

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x4498 = INT16_MIN;
	int8_t x4499 = 0;
	int64_t x4500 = -1LL;
	volatile int64_t t118 = -2415432932036486LL;

    t118 = (((x4497!=x4498)<<x4499)-x4500);

    if (t118 != 2LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x4525 = 7;
	int32_t x4526 = INT32_MIN;
	uint8_t x4527 = 4U;
	int8_t x4528 = INT8_MIN;
	static volatile int32_t t119 = -98971724;

    t119 = (((x4525!=x4526)<<x4527)-x4528);

    if (t119 != 144) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x4545 = INT64_MAX;
	int32_t x4548 = -19280709;
	int32_t t120 = -2;

    t120 = (((x4545!=x4546)<<x4547)-x4548);

    if (t120 != 19280965) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x4609 = INT8_MAX;
	static uint16_t x4610 = UINT16_MAX;
	uint8_t x4611 = 8U;

    t121 = (((x4609!=x4610)<<x4611)-x4612);

    if (t121 != 18446744073676344161LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x4615 = 12;
	volatile int32_t t122 = -6201774;

    t122 = (((x4613!=x4614)<<x4615)-x4616);

    if (t122 != -28671) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x4690 = 22442697U;
	static int8_t x4691 = 0;
	int32_t x4692 = 268;
	int32_t t123 = -11459815;

    t123 = (((x4689!=x4690)<<x4691)-x4692);

    if (t123 != -267) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x4693 = INT16_MIN;
	static int32_t x4694 = INT32_MIN;
	uint8_t x4695 = 29U;
	uint16_t x4696 = UINT16_MAX;
	volatile int32_t t124 = 2;

    t124 = (((x4693!=x4694)<<x4695)-x4696);

    if (t124 != 536805377) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x4701 = -1;
	int8_t x4703 = 20;
	static uint16_t x4704 = UINT16_MAX;
	volatile int32_t t125 = -275153;

    t125 = (((x4701!=x4702)<<x4703)-x4704);

    if (t125 != 983041) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x4717 = INT32_MIN;
	static int64_t x4718 = INT64_MIN;
	uint16_t x4719 = 3U;
	volatile int64_t x4720 = -1LL;
	volatile int64_t t126 = 124104658LL;

    t126 = (((x4717!=x4718)<<x4719)-x4720);

    if (t126 != 9LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x4741 = INT8_MIN;
	volatile int16_t x4742 = INT16_MIN;
	volatile uint8_t x4743 = 14U;
	volatile int64_t x4744 = INT64_MAX;
	static int64_t t127 = 25236LL;

    t127 = (((x4741!=x4742)<<x4743)-x4744);

    if (t127 != -9223372036854759423LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x4829 = -53;
	int16_t x4830 = INT16_MIN;
	uint8_t x4831 = 5U;
	static volatile uint32_t x4832 = 4U;
	volatile uint32_t t128 = 34U;

    t128 = (((x4829!=x4830)<<x4831)-x4832);

    if (t128 != 28U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x4849 = -1;
	volatile int16_t x4850 = -2;
	uint16_t x4851 = 8U;
	int32_t t129 = -46;

    t129 = (((x4849!=x4850)<<x4851)-x4852);

    if (t129 != 33024) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x5045 = -1;
	static int32_t x5046 = INT32_MAX;
	int32_t x5047 = 5;
	volatile int16_t x5048 = -1;
	int32_t t130 = -14;

    t130 = (((x5045!=x5046)<<x5047)-x5048);

    if (t130 != 33) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x5049 = -1LL;
	static volatile int8_t x5050 = -16;
	uint16_t x5051 = 14U;
	int8_t x5052 = INT8_MAX;
	volatile int32_t t131 = -875282;

    t131 = (((x5049!=x5050)<<x5051)-x5052);

    if (t131 != 16257) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x5109 = INT16_MAX;
	int8_t x5110 = -1;
	int8_t x5112 = -1;

    t132 = (((x5109!=x5110)<<x5111)-x5112);

    if (t132 != 3) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x5113 = UINT32_MAX;
	uint8_t x5114 = 3U;
	int8_t x5116 = INT8_MIN;
	int32_t t133 = 8;

    t133 = (((x5113!=x5114)<<x5115)-x5116);

    if (t133 != 129) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x5139 = 1;
	volatile uint64_t x5140 = UINT64_MAX;
	volatile uint64_t t134 = 1977724790974005046LLU;

    t134 = (((x5137!=x5138)<<x5139)-x5140);

    if (t134 != 3LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x5158 = 34;
	volatile uint8_t x5159 = 0U;
	uint32_t x5160 = UINT32_MAX;

    t135 = (((x5157!=x5158)<<x5159)-x5160);

    if (t135 != 2U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x5173 = -1;
	uint8_t x5175 = 1U;
	volatile int64_t x5176 = -117974697185745LL;
	volatile int64_t t136 = 13204237LL;

    t136 = (((x5173!=x5174)<<x5175)-x5176);

    if (t136 != 117974697185747LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x5187 = 30U;
	int8_t x5188 = INT8_MIN;

    t137 = (((x5185!=x5186)<<x5187)-x5188);

    if (t137 != 1073741952) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x5265 = 9814767;
	uint32_t x5266 = 2502U;
	int8_t x5267 = 1;
	uint32_t x5268 = 344U;
	static volatile uint32_t t138 = 18098U;

    t138 = (((x5265!=x5266)<<x5267)-x5268);

    if (t138 != 4294966954U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x5417 = -1;
	int16_t x5419 = 18;
	static volatile int8_t x5420 = -5;
	volatile int32_t t139 = 373;

    t139 = (((x5417!=x5418)<<x5419)-x5420);

    if (t139 != 262149) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x5429 = INT64_MAX;
	uint8_t x5431 = 6U;
	volatile int32_t x5432 = INT32_MAX;
	int32_t t140 = 5160;

    t140 = (((x5429!=x5430)<<x5431)-x5432);

    if (t140 != -2147483583) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x5489 = 5U;
	int64_t x5490 = INT64_MAX;
	volatile uint16_t x5491 = 2U;
	uint32_t x5492 = 52915U;
	uint32_t t141 = 2U;

    t141 = (((x5489!=x5490)<<x5491)-x5492);

    if (t141 != 4294914385U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x5545 = 112304182LLU;
	volatile int8_t x5546 = INT8_MIN;
	volatile uint8_t x5547 = 1U;

    t142 = (((x5545!=x5546)<<x5547)-x5548);

    if (t142 != 32770) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x5554 = 0U;
	static uint8_t x5555 = 1U;
	uint64_t x5556 = 86LLU;
	uint64_t t143 = 954462484LLU;

    t143 = (((x5553!=x5554)<<x5555)-x5556);

    if (t143 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x5633 = 12453U;
	int8_t x5636 = INT8_MIN;

    t144 = (((x5633!=x5634)<<x5635)-x5636);

    if (t144 != 129) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x5647 = 1;
	int16_t x5648 = INT16_MIN;
	int32_t t145 = -1374;

    t145 = (((x5645!=x5646)<<x5647)-x5648);

    if (t145 != 32770) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x5701 = INT64_MIN;
	volatile int64_t x5702 = INT64_MIN;
	int8_t x5703 = 1;
	static uint8_t x5704 = UINT8_MAX;
	int32_t t146 = 107849100;

    t146 = (((x5701!=x5702)<<x5703)-x5704);

    if (t146 != -255) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x5733 = 0;
	uint32_t x5734 = 9014U;
	static uint64_t x5735 = 0LLU;
	static uint16_t x5736 = UINT16_MAX;
	int32_t t147 = -16791;

    t147 = (((x5733!=x5734)<<x5735)-x5736);

    if (t147 != -65534) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x5770 = UINT64_MAX;
	uint8_t x5771 = 18U;
	volatile int32_t t148 = 214;

    t148 = (((x5769!=x5770)<<x5771)-x5772);

    if (t148 != 261979) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x5829 = -4148;
	volatile int32_t x5830 = -39;
	uint32_t x5831 = 3U;
	uint16_t x5832 = 8U;
	static int32_t t149 = 2379380;

    t149 = (((x5829!=x5830)<<x5831)-x5832);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x5837 = -4042272350LL;
	static volatile int32_t x5838 = INT32_MIN;
	volatile uint16_t x5839 = 7U;
	static int64_t x5840 = 12056111403897LL;
	static volatile int64_t t150 = 13LL;

    t150 = (((x5837!=x5838)<<x5839)-x5840);

    if (t150 != -12056111403769LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x5853 = -1LL;
	uint8_t x5854 = 1U;
	uint16_t x5855 = 7U;
	int32_t x5856 = 59147;
	int32_t t151 = -16313;

    t151 = (((x5853!=x5854)<<x5855)-x5856);

    if (t151 != -59019) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x5897 = -128;
	int64_t x5898 = INT64_MAX;
	int16_t x5900 = INT16_MIN;
	volatile int32_t t152 = -168;

    t152 = (((x5897!=x5898)<<x5899)-x5900);

    if (t152 != 32770) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x5925 = -1;
	int64_t x5926 = INT64_MIN;
	int8_t x5927 = 3;
	uint32_t t153 = 140U;

    t153 = (((x5925!=x5926)<<x5927)-x5928);

    if (t153 != 9U) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint64_t x5953 = 9232LLU;
	int32_t x5954 = INT32_MIN;
	uint8_t x5955 = 18U;
	static volatile int8_t x5956 = -1;
	volatile int32_t t154 = -11;

    t154 = (((x5953!=x5954)<<x5955)-x5956);

    if (t154 != 262145) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x5965 = 500099735078336LL;
	int64_t x5966 = INT64_MAX;
	volatile uint32_t t155 = 138115U;

    t155 = (((x5965!=x5966)<<x5967)-x5968);

    if (t155 != 4294967290U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x6101 = -1LL;
	int64_t x6102 = -274LL;
	int8_t x6103 = 22;
	int8_t x6104 = 14;
	int32_t t156 = 385283;

    t156 = (((x6101!=x6102)<<x6103)-x6104);

    if (t156 != 4194290) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x6133 = 14790070LLU;
	static int64_t x6134 = -1LL;
	static int8_t x6135 = 29;
	int32_t x6136 = 122948;

    t157 = (((x6133!=x6134)<<x6135)-x6136);

    if (t157 != 536747964) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x6150 = 5;
	volatile uint64_t x6151 = 13LLU;
	uint32_t x6152 = UINT32_MAX;
	static uint32_t t158 = 588U;

    t158 = (((x6149!=x6150)<<x6151)-x6152);

    if (t158 != 8193U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x6177 = UINT64_MAX;
	int8_t x6178 = INT8_MIN;
	uint16_t x6180 = 7U;
	volatile int32_t t159 = 479;

    t159 = (((x6177!=x6178)<<x6179)-x6180);

    if (t159 != 1048569) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x6209 = 887848LLU;
	int32_t x6210 = INT32_MIN;
	int8_t x6212 = INT8_MAX;
	volatile int32_t t160 = -97;

    t160 = (((x6209!=x6210)<<x6211)-x6212);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x6301 = INT8_MAX;
	int8_t x6302 = -1;
	volatile uint16_t x6303 = 3U;
	uint64_t x6304 = 61861928076LLU;
	volatile uint64_t t161 = 90465LLU;

    t161 = (((x6301!=x6302)<<x6303)-x6304);

    if (t161 != 18446744011847623548LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x6305 = -1;
	static int32_t x6306 = INT32_MIN;
	uint64_t x6308 = 144842318533896LLU;
	uint64_t t162 = 964403469422022849LLU;

    t162 = (((x6305!=x6306)<<x6307)-x6308);

    if (t162 != 18446599231391017784LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x6317 = UINT8_MAX;
	uint16_t x6318 = UINT16_MAX;
	volatile int8_t x6319 = 5;
	int8_t x6320 = 56;
	int32_t t163 = 11282;

    t163 = (((x6317!=x6318)<<x6319)-x6320);

    if (t163 != -24) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x6333 = INT8_MAX;
	static uint16_t x6335 = 11U;
	int64_t x6336 = -1LL;
	volatile int64_t t164 = 512593LL;

    t164 = (((x6333!=x6334)<<x6335)-x6336);

    if (t164 != 2049LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x6341 = 4648LLU;
	int64_t x6342 = 65181190LL;
	uint16_t x6343 = 18U;
	int8_t x6344 = 36;
	int32_t t165 = -11292139;

    t165 = (((x6341!=x6342)<<x6343)-x6344);

    if (t165 != 262108) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x6386 = 37U;
	int8_t x6387 = 1;
	int32_t t166 = 440584;

    t166 = (((x6385!=x6386)<<x6387)-x6388);

    if (t166 != -65533) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x6413 = -7;
	int8_t x6414 = -1;
	uint16_t x6416 = UINT16_MAX;
	int32_t t167 = -47805;

    t167 = (((x6413!=x6414)<<x6415)-x6416);

    if (t167 != -65527) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x6422 = 2U;
	int8_t x6424 = INT8_MIN;
	int32_t t168 = -13812;

    t168 = (((x6421!=x6422)<<x6423)-x6424);

    if (t168 != 130) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x6441 = -1;
	int16_t x6442 = -1;
	static int16_t x6443 = 0;
	volatile int16_t x6444 = -1;
	static int32_t t169 = -6919;

    t169 = (((x6441!=x6442)<<x6443)-x6444);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x6445 = INT8_MAX;
	volatile int64_t x6446 = 1091569330393LL;
	uint8_t x6447 = 0U;
	uint32_t x6448 = UINT32_MAX;
	volatile uint32_t t170 = 29U;

    t170 = (((x6445!=x6446)<<x6447)-x6448);

    if (t170 != 2U) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x6481 = INT64_MIN;
	int16_t x6482 = -15;
	uint8_t x6483 = 29U;
	uint64_t x6484 = UINT64_MAX;
	static volatile uint64_t t171 = 106325LLU;

    t171 = (((x6481!=x6482)<<x6483)-x6484);

    if (t171 != 536870913LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x6530 = 6532U;
	uint16_t x6531 = 9U;
	int8_t x6532 = INT8_MAX;

    t172 = (((x6529!=x6530)<<x6531)-x6532);

    if (t172 != 385) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x6633 = UINT8_MAX;
	uint8_t x6634 = 30U;
	uint64_t x6635 = 11LLU;
	uint64_t x6636 = 297076272LLU;

    t173 = (((x6633!=x6634)<<x6635)-x6636);

    if (t173 != 18446744073412477392LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x6657 = INT16_MIN;
	volatile int64_t x6658 = -1LL;
	static int8_t x6659 = 5;
	int8_t x6660 = INT8_MIN;
	volatile int32_t t174 = 0;

    t174 = (((x6657!=x6658)<<x6659)-x6660);

    if (t174 != 160) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x6665 = 0U;
	int16_t x6666 = 7;
	volatile int8_t x6668 = INT8_MAX;
	volatile int32_t t175 = -7105;

    t175 = (((x6665!=x6666)<<x6667)-x6668);

    if (t175 != 385) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x6737 = INT64_MIN;
	int8_t x6738 = INT8_MIN;
	uint64_t x6739 = 11LLU;
	int32_t x6740 = -1;

    t176 = (((x6737!=x6738)<<x6739)-x6740);

    if (t176 != 2049) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x6793 = INT64_MAX;
	int32_t x6794 = INT32_MAX;
	uint64_t x6795 = 20LLU;
	static uint16_t x6796 = 7U;
	volatile int32_t t177 = 83497;

    t177 = (((x6793!=x6794)<<x6795)-x6796);

    if (t177 != 1048569) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x6882 = 50818284650LLU;
	uint16_t x6884 = 2U;
	static int32_t t178 = -1935;

    t178 = (((x6881!=x6882)<<x6883)-x6884);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x6894 = 0U;
	volatile uint64_t x6895 = 7LLU;

    t179 = (((x6893!=x6894)<<x6895)-x6896);

    if (t179 != 3294806485U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x6965 = INT64_MAX;
	uint8_t x6966 = 0U;
	int8_t x6967 = 5;
	int64_t x6968 = 195176237481LL;
	volatile int64_t t180 = 557246467061305365LL;

    t180 = (((x6965!=x6966)<<x6967)-x6968);

    if (t180 != -195176237449LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x7009 = -1;
	uint8_t x7010 = 0U;
	uint8_t x7011 = 1U;

    t181 = (((x7009!=x7010)<<x7011)-x7012);

    if (t181 != -125) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x7021 = 0;
	int16_t x7022 = INT16_MIN;
	uint8_t x7023 = 3U;
	int32_t t182 = 1;

    t182 = (((x7021!=x7022)<<x7023)-x7024);

    if (t182 != -32759) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x7061 = INT16_MIN;
	int32_t x7062 = -1;
	int16_t x7063 = 0;
	static int32_t x7064 = -1;
	volatile int32_t t183 = -3374076;

    t183 = (((x7061!=x7062)<<x7063)-x7064);

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x7109 = 53U;
	static int32_t x7110 = 843688507;
	static uint16_t x7111 = 0U;
	int64_t x7112 = -122803LL;
	static int64_t t184 = 2129828LL;

    t184 = (((x7109!=x7110)<<x7111)-x7112);

    if (t184 != 122804LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x7185 = INT32_MIN;
	uint64_t x7186 = 71202743755744327LLU;
	volatile uint16_t x7187 = 0U;
	static int16_t x7188 = INT16_MIN;

    t185 = (((x7185!=x7186)<<x7187)-x7188);

    if (t185 != 32769) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x7265 = INT64_MIN;
	static int16_t x7267 = 0;
	volatile int16_t x7268 = INT16_MIN;
	int32_t t186 = 655653293;

    t186 = (((x7265!=x7266)<<x7267)-x7268);

    if (t186 != 32769) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x7289 = -1;
	uint8_t x7290 = 51U;
	volatile uint32_t x7291 = 0U;
	static volatile int32_t x7292 = 642576521;

    t187 = (((x7289!=x7290)<<x7291)-x7292);

    if (t187 != -642576520) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x7394 = -1LL;
	uint32_t x7395 = 0U;
	int16_t x7396 = -1;

    t188 = (((x7393!=x7394)<<x7395)-x7396);

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x7445 = 231LL;
	uint16_t x7446 = 266U;
	uint16_t x7447 = 7U;
	static uint64_t x7448 = UINT64_MAX;
	volatile uint64_t t189 = 49435LLU;

    t189 = (((x7445!=x7446)<<x7447)-x7448);

    if (t189 != 129LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x7569 = 1532780LLU;
	int16_t x7570 = -1;
	uint16_t x7571 = 15U;
	static int8_t x7572 = -1;
	static int32_t t190 = -826183870;

    t190 = (((x7569!=x7570)<<x7571)-x7572);

    if (t190 != 32769) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x7589 = -1;
	static volatile int8_t x7590 = -1;
	static uint8_t x7591 = 0U;
	static volatile uint16_t x7592 = UINT16_MAX;
	volatile int32_t t191 = 50184;

    t191 = (((x7589!=x7590)<<x7591)-x7592);

    if (t191 != -65535) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x7709 = 0;
	static volatile int64_t x7710 = -1LL;
	uint16_t x7711 = 23U;
	volatile int16_t x7712 = INT16_MAX;
	static volatile int32_t t192 = -3664;

    t192 = (((x7709!=x7710)<<x7711)-x7712);

    if (t192 != 8355841) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x7817 = 180;
	int8_t x7819 = 2;
	int64_t x7820 = 955423182LL;
	volatile int64_t t193 = -35894117250429282LL;

    t193 = (((x7817!=x7818)<<x7819)-x7820);

    if (t193 != -955423178LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x7829 = UINT8_MAX;
	int64_t x7830 = INT64_MIN;
	static volatile uint8_t x7831 = 1U;
	uint64_t x7832 = 13387989LLU;
	uint64_t t194 = 33843964LLU;

    t194 = (((x7829!=x7830)<<x7831)-x7832);

    if (t194 != 18446744073696163629LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x7833 = UINT16_MAX;
	static uint64_t x7834 = 221446812894431328LLU;
	static uint8_t x7835 = 0U;
	int8_t x7836 = INT8_MIN;
	static volatile int32_t t195 = 1134;

    t195 = (((x7833!=x7834)<<x7835)-x7836);

    if (t195 != 129) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x7881 = INT16_MIN;
	static uint8_t x7883 = 0U;
	uint16_t x7884 = 0U;
	volatile int32_t t196 = 62622915;

    t196 = (((x7881!=x7882)<<x7883)-x7884);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x7933 = INT8_MAX;
	static int32_t x7934 = INT32_MIN;
	static uint8_t x7935 = 0U;
	uint32_t x7936 = 907U;
	static volatile uint32_t t197 = 91842U;

    t197 = (((x7933!=x7934)<<x7935)-x7936);

    if (t197 != 4294966390U) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x7941 = UINT16_MAX;
	volatile uint8_t x7942 = 86U;
	uint32_t x7943 = 0U;
	static int8_t x7944 = 0;
	volatile int32_t t198 = -4870525;

    t198 = (((x7941!=x7942)<<x7943)-x7944);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x7981 = -1LL;
	int16_t x7983 = 0;
	volatile int16_t x7984 = INT16_MAX;

    t199 = (((x7981!=x7982)<<x7983)-x7984);

    if (t199 != -32766) { NG(); } else { ; }
	
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

