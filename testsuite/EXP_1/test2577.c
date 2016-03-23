
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

static int64_t x1 = -1LL;
int64_t x17 = INT64_MIN;
volatile int8_t x21 = INT8_MIN;
volatile uint64_t x32 = 698129974LLU;
volatile int32_t x33 = -1;
uint8_t x35 = 12U;
int64_t x39 = INT64_MAX;
int16_t x41 = INT16_MAX;
int64_t x49 = 6212LL;
int64_t t8 = -443897915485148444LL;
static volatile int8_t x62 = INT8_MIN;
uint16_t x67 = 1U;
int16_t x69 = -1;
int8_t x75 = -1;
volatile uint16_t x80 = 1U;
uint64_t x81 = UINT64_MAX;
int64_t x95 = -8LL;
int8_t x96 = -6;
int16_t x102 = -2968;
int32_t x108 = INT32_MIN;
static int8_t x128 = INT8_MIN;
int64_t x130 = INT64_MIN;
int8_t x131 = -1;
int64_t t22 = 46548955916342484LL;
int16_t x141 = INT16_MAX;
uint8_t x144 = UINT8_MAX;
int64_t x145 = 350345461518389813LL;
static int16_t x146 = INT16_MIN;
int8_t x148 = 61;
uint64_t t24 = 0LLU;
volatile uint8_t x156 = UINT8_MAX;
uint16_t x168 = UINT16_MAX;
int32_t t27 = 0;
int16_t x172 = -1;
int64_t t28 = 3398643101680446896LL;
int16_t x174 = INT16_MIN;
int32_t x187 = -1;
static volatile int16_t x193 = INT16_MIN;
int8_t x194 = 6;
int32_t x195 = 0;
int32_t x196 = -1;
volatile int64_t x197 = -9621LL;
static int32_t x200 = -6436652;
uint32_t t33 = 279478188U;
int8_t x210 = 0;
volatile int64_t t37 = 26462LL;
static int64_t x248 = -1LL;
int64_t t40 = -232160828631253LL;
static int32_t x250 = INT32_MIN;
static uint64_t x251 = 11028LLU;
static int32_t x253 = -1;
static int64_t x255 = -532LL;
volatile int16_t x262 = INT16_MIN;
static int64_t x263 = -1LL;
static int64_t t45 = -2LL;
int16_t x290 = 28;
uint64_t x302 = 307212745595LLU;
volatile uint64_t t48 = 199816057022680LLU;
int32_t x319 = -1;
uint64_t t50 = 49LLU;
uint32_t t52 = 3531305U;
static int16_t x353 = -6;
static int32_t t54 = -10;
int32_t x366 = -1;
uint64_t t56 = 152504681LLU;
uint64_t x378 = UINT64_MAX;
uint64_t t57 = 735027291543LLU;
int8_t x389 = -1;
uint64_t x395 = 173LLU;
uint64_t t61 = 151512LLU;
uint8_t x405 = 81U;
uint64_t x415 = 60029235900195701LLU;
static int16_t x423 = -9;
uint32_t t67 = 298429526U;
uint32_t x433 = UINT32_MAX;
int16_t x435 = INT16_MAX;
static int8_t x440 = 1;
uint8_t x444 = UINT8_MAX;
uint32_t x456 = UINT32_MAX;
static uint32_t x466 = 2U;
volatile uint32_t x467 = UINT32_MAX;
uint32_t t75 = 32186U;
int64_t x472 = 103523211LL;
int64_t x479 = 1589123622691095LL;
static int32_t x486 = -1;
static volatile int16_t x493 = INT16_MIN;
int8_t x496 = INT8_MIN;
int32_t x500 = INT32_MIN;
volatile int32_t x503 = -1;
static int16_t x514 = -1;
uint16_t x516 = 1880U;
int32_t t83 = -59639705;
uint64_t t84 = 3805791372550083245LLU;
int16_t x527 = 1;
volatile int64_t t85 = 30398LL;
volatile int64_t x538 = 72923LL;
volatile int16_t x546 = -1;
volatile int64_t x548 = -1LL;
int8_t x557 = -1;
static int32_t x561 = INT32_MIN;
int64_t x571 = INT64_MIN;
uint8_t x608 = 1U;
volatile int64_t t99 = -5321957LL;
int8_t x611 = INT8_MAX;
int64_t x618 = INT64_MAX;
uint8_t x632 = 53U;
int64_t t103 = -1437758985875574034LL;
int32_t x651 = -1;
static int32_t t106 = 22800;
int32_t x653 = INT32_MIN;
int8_t x654 = 1;
int64_t x655 = -1LL;
static int64_t x661 = INT64_MIN;
int64_t t109 = -3LL;
volatile uint32_t x679 = 98954996U;
static uint64_t x693 = UINT64_MAX;
volatile uint64_t t114 = 20LLU;
uint64_t x697 = 64093LLU;
volatile int32_t x705 = INT32_MIN;
static int64_t t116 = -10922928602934LL;
volatile uint16_t x711 = 1U;
static int32_t t117 = 1419472;
int8_t x715 = -1;
int32_t t118 = -1;
static volatile int64_t x721 = INT64_MIN;
static int64_t x729 = -22474LL;
uint16_t x738 = UINT16_MAX;
uint64_t x754 = UINT64_MAX;
static volatile int32_t x755 = 16288;
volatile int64_t x758 = -15792LL;
int8_t x775 = -1;
volatile uint64_t t129 = 1039286LLU;
static int16_t x793 = INT16_MIN;
int8_t x795 = 1;
int32_t x800 = -274327231;
uint32_t x804 = 1407581755U;
static uint32_t t133 = 18U;
int64_t t134 = 1753203LL;
int8_t x828 = INT8_MIN;
int64_t x852 = 2871160LL;
static volatile uint64_t t137 = 0LLU;
uint8_t x853 = 72U;
uint64_t x861 = UINT64_MAX;
int64_t x864 = INT64_MIN;
uint32_t t141 = 41U;
static uint64_t x875 = 191299206244LLU;
int16_t x876 = -1;
volatile uint64_t t142 = 55475686875600987LLU;
volatile uint32_t x879 = 1287767U;
int32_t t145 = -942274;
uint64_t x889 = 33825018416LLU;
volatile uint64_t t146 = 819177LLU;
int8_t x893 = 36;
volatile int16_t x894 = -23;
static uint8_t x895 = 39U;
static int16_t x901 = INT16_MAX;
static int8_t x904 = INT8_MAX;
int16_t x905 = INT16_MIN;
static uint64_t t150 = 367157LLU;
int32_t x917 = 561018391;
uint64_t x928 = 157705049667LLU;
int8_t x957 = 23;
volatile uint32_t x958 = 23624283U;
static volatile int16_t x961 = 127;
int64_t x969 = -1LL;
int8_t x971 = INT8_MIN;
int8_t x977 = 6;
volatile int32_t x984 = -55448;
int64_t x1006 = -1580LL;
int32_t x1016 = -1623;
int32_t x1018 = INT32_MIN;
int8_t x1020 = 2;
uint32_t x1033 = 139696793U;
int64_t x1040 = -1LL;
int8_t x1046 = 23;
int64_t x1076 = 0LL;
int64_t t175 = -4LL;
int16_t x1080 = INT16_MAX;
volatile uint64_t x1087 = 24LLU;
int32_t x1089 = 0;
uint64_t x1090 = 30969736481LLU;
int32_t x1091 = -1;
int64_t x1102 = -1LL;
uint16_t x1108 = UINT16_MAX;
uint8_t x1125 = 59U;
static uint64_t t184 = 23LLU;
volatile uint32_t x1137 = 1U;
int16_t x1139 = -1;
int8_t x1147 = INT8_MAX;
uint16_t x1158 = 8686U;
int32_t t188 = -1269386;
volatile int16_t x1161 = INT16_MAX;
uint64_t x1163 = 202LLU;
uint32_t x1164 = 1285150U;
volatile int64_t x1174 = INT64_MIN;
uint32_t t194 = 1U;
uint64_t x1202 = UINT64_MAX;
static int64_t x1203 = INT64_MAX;
uint8_t x1204 = UINT8_MAX;
volatile uint64_t t196 = 193LLU;
volatile uint32_t t197 = UINT32_MAX;
uint64_t x1213 = 2202728862108882LLU;
int64_t x1214 = INT64_MIN;


void f0(void) {
    	uint64_t x2 = 0LLU;
	uint32_t x3 = UINT32_MAX;
	uint16_t x4 = UINT16_MAX;
	static uint64_t t0 = 266590729159411631LLU;

    t0 = (((x1^x2)*x3)+x4);

    if (t0 != 18446744069414649856LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x18 = INT8_MIN;
	uint64_t x19 = UINT64_MAX;
	volatile int32_t x20 = INT32_MIN;
	volatile uint64_t t1 = 3832174LLU;

    t1 = (((x17^x18)*x19)+x20);

    if (t1 != 9223372034707292288LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x22 = 1589972LLU;
	int32_t x23 = INT32_MIN;
	static volatile uint32_t x24 = 30557029U;
	volatile uint64_t t2 = 195LLU;

    t2 = (((x21^x22)*x23)+x24);

    if (t2 != 3414353001988965LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x25 = 0U;
	uint16_t x26 = 1070U;
	int16_t x27 = INT16_MIN;
	int8_t x28 = -1;
	volatile int32_t t3 = 1;

    t3 = (((x25^x26)*x27)+x28);

    if (t3 != -35061761) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x29 = 497519194094191LLU;
	int16_t x30 = INT16_MIN;
	static volatile int16_t x31 = INT16_MIN;
	uint64_t t4 = 1266571212LLU;

    t4 = (((x29^x30)*x31)+x32);

    if (t4 != 16302708952869969462LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x34 = 1U;
	volatile int16_t x36 = INT16_MIN;
	static int32_t t5 = 80008;

    t5 = (((x33^x34)*x35)+x36);

    if (t5 != -32792) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x37 = -1;
	int16_t x38 = -1;
	int64_t x40 = -1LL;
	int64_t t6 = 3995483217816122580LL;

    t6 = (((x37^x38)*x39)+x40);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x42 = UINT64_MAX;
	volatile int8_t x43 = INT8_MAX;
	int64_t x44 = INT64_MIN;
	uint64_t t7 = 29074044201LLU;

    t7 = (((x41^x42)*x43)+x44);

    if (t7 != 9223372036850614272LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x50 = -1;
	static uint8_t x51 = 2U;
	uint8_t x52 = 38U;

    t8 = (((x49^x50)*x51)+x52);

    if (t8 != -12388LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x57 = -5;
	int8_t x58 = INT8_MAX;
	int16_t x59 = -972;
	volatile uint8_t x60 = 5U;
	static volatile int32_t t9 = 1513;

    t9 = (((x57^x58)*x59)+x60);

    if (t9 != 120533) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x61 = INT16_MAX;
	uint8_t x63 = 75U;
	int16_t x64 = INT16_MAX;
	int32_t t10 = 2202;

    t10 = (((x61^x62)*x63)+x64);

    if (t10 != -2415308) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x65 = 112;
	int8_t x66 = -1;
	int32_t x68 = INT32_MAX;
	static volatile int32_t t11 = 483;

    t11 = (((x65^x66)*x67)+x68);

    if (t11 != 2147483534) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x70 = -2;
	int64_t x71 = -118177618554907630LL;
	uint32_t x72 = UINT32_MAX;
	volatile int64_t t12 = -34366439566174658LL;

    t12 = (((x69^x70)*x71)+x72);

    if (t12 != -118177614259940335LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x73 = INT64_MIN;
	volatile int64_t x74 = -1LL;
	uint8_t x76 = UINT8_MAX;
	int64_t t13 = -918772875052LL;

    t13 = (((x73^x74)*x75)+x76);

    if (t13 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x77 = 258436U;
	int32_t x78 = INT32_MIN;
	uint64_t x79 = UINT64_MAX;
	volatile uint64_t t14 = 113585LLU;

    t14 = (((x77^x78)*x79)+x80);

    if (t14 != 18446744071561809533LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x82 = 3447U;
	uint32_t x83 = 1U;
	volatile int16_t x84 = INT16_MAX;
	volatile uint64_t t15 = 10583780LLU;

    t15 = (((x81^x82)*x83)+x84);

    if (t15 != 29319LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x85 = -1;
	uint32_t x86 = 668U;
	volatile uint8_t x87 = 5U;
	volatile int16_t x88 = -1;
	static uint32_t t16 = 7U;

    t16 = (((x85^x86)*x87)+x88);

    if (t16 != 4294963950U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x93 = -21649190444LL;
	int64_t x94 = 7583897LL;
	volatile int64_t t17 = -55LL;

    t17 = (((x93^x94)*x95)+x96);

    if (t17 != 173153367442LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x101 = 7U;
	int16_t x103 = 1;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t18 = 7270066LLU;

    t18 = (((x101^x102)*x103)+x104);

    if (t18 != 18446744073709548654LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x105 = -1;
	static int32_t x106 = INT32_MIN;
	uint64_t x107 = UINT64_MAX;
	static uint64_t t19 = 6236647949086172485LLU;

    t19 = (((x105^x106)*x107)+x108);

    if (t19 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x125 = 15;
	int16_t x126 = INT16_MIN;
	uint8_t x127 = 23U;
	volatile int32_t t20 = 30;

    t20 = (((x125^x126)*x127)+x128);

    if (t20 != -753447) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x129 = -5;
	static uint8_t x132 = UINT8_MAX;
	volatile int64_t t21 = -3LL;

    t21 = (((x129^x130)*x131)+x132);

    if (t21 != -9223372036854775548LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x133 = -2839;
	volatile int8_t x134 = INT8_MIN;
	static uint8_t x135 = 7U;
	int64_t x136 = -1LL;

    t22 = (((x133^x134)*x135)+x136);

    if (t22 != 20446LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x142 = 302U;
	static int16_t x143 = INT16_MIN;
	int32_t t23 = -55623;

    t23 = (((x141^x142)*x143)+x144);

    if (t23 != -1063812865) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x147 = 2LLU;

    t24 = (((x145^x146)*x147)+x148);

    if (t24 != 17746053150672790695LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x153 = INT32_MAX;
	static int8_t x154 = INT8_MIN;
	static volatile uint64_t x155 = UINT64_MAX;
	static uint64_t t25 = 7917957LLU;

    t25 = (((x153^x154)*x155)+x156);

    if (t25 != 2147483776LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x161 = INT16_MIN;
	volatile int32_t x162 = -1;
	static uint8_t x163 = UINT8_MAX;
	static volatile uint32_t x164 = 2123513501U;
	volatile uint32_t t26 = 625820229U;

    t26 = (((x161^x162)*x163)+x164);

    if (t26 != 2131869086U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x165 = 15506U;
	static volatile int8_t x166 = INT8_MIN;
	static uint8_t x167 = UINT8_MAX;

    t27 = (((x165^x166)*x167)+x168);

    if (t27 != -3911955) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x169 = 7U;
	static int8_t x170 = INT8_MIN;
	int64_t x171 = 2024303741LL;

    t28 = (((x169^x170)*x171)+x172);

    if (t28 != -244940752662LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x173 = -224;
	uint16_t x175 = 1706U;
	uint32_t x176 = UINT32_MAX;
	static volatile uint32_t t29 = 6U;

    t29 = (((x173^x174)*x175)+x176);

    if (t29 != 55520063U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x185 = INT64_MIN;
	volatile int8_t x186 = 23;
	int8_t x188 = -1;
	static volatile int64_t t30 = -827404810270456865LL;

    t30 = (((x185^x186)*x187)+x188);

    if (t30 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t t31 = 728465998;

    t31 = (((x193^x194)*x195)+x196);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x198 = 46LLU;
	static int8_t x199 = 25;
	uint64_t t32 = 127LLU;

    t32 = (((x197^x198)*x199)+x200);

    if (t32 != 18446744073702873489LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int32_t x201 = -1;
	volatile int16_t x202 = INT16_MIN;
	int16_t x203 = 5;
	uint32_t x204 = UINT32_MAX;

    t33 = (((x201^x202)*x203)+x204);

    if (t33 != 163834U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x209 = -16901287485LL;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = 1;
	volatile uint64_t t34 = 2LLU;

    t34 = (((x209^x210)*x211)+x212);

    if (t34 != 16901287486LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x213 = INT32_MIN;
	uint64_t x214 = 2LLU;
	uint8_t x215 = 4U;
	static volatile uint16_t x216 = 8738U;
	volatile uint64_t t35 = 562569925892LLU;

    t35 = (((x213^x214)*x215)+x216);

    if (t35 != 18446744065119625770LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x221 = UINT16_MAX;
	int32_t x222 = INT32_MIN;
	volatile uint32_t x223 = 7445471U;
	uint64_t x224 = 56618807156163469LLU;
	uint64_t t36 = 26LLU;

    t36 = (((x221^x222)*x223)+x224);

    if (t36 != 56618807616317358LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x225 = 52U;
	int8_t x226 = INT8_MIN;
	int64_t x227 = 1530799989115LL;
	static int32_t x228 = -1;

    t37 = (((x225^x226)*x227)+x228);

    if (t37 != -116340799172741LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x229 = UINT8_MAX;
	static volatile int8_t x230 = -8;
	static int16_t x231 = INT16_MIN;
	int8_t x232 = -1;
	static int32_t t38 = 3;

    t38 = (((x229^x230)*x231)+x232);

    if (t38 != 8159231) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MAX;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MAX;
	volatile uint64_t t39 = 5195084LLU;

    t39 = (((x233^x234)*x235)+x236);

    if (t39 != 9223372034707324928LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	static uint32_t x247 = 18856747U;

    t40 = (((x245^x246)*x247)+x248);

    if (t40 != 3762607359LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x249 = -2;
	static uint64_t x252 = 8164897LLU;
	uint64_t t41 = 40LLU;

    t41 = (((x249^x250)*x251)+x252);

    if (t41 != 23682457812985LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x254 = INT32_MIN;
	volatile int64_t x256 = -1LL;
	volatile int64_t t42 = -1176291975590LL;

    t42 = (((x253^x254)*x255)+x256);

    if (t42 != -1142461300205LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x257 = 88U;
	uint64_t x258 = UINT64_MAX;
	uint8_t x259 = 101U;
	int32_t x260 = INT32_MIN;
	uint64_t t43 = 2490937276LLU;

    t43 = (((x257^x258)*x259)+x260);

    if (t43 != 18446744071562058979LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x261 = 1;
	static volatile int64_t x264 = -1LL;
	volatile int64_t t44 = -23708LL;

    t44 = (((x261^x262)*x263)+x264);

    if (t44 != 32766LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x277 = UINT8_MAX;
	volatile int64_t x278 = INT64_MAX;
	uint8_t x279 = 0U;
	static int32_t x280 = INT32_MIN;

    t45 = (((x277^x278)*x279)+x280);

    if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x285 = 9U;
	uint32_t x286 = 18481U;
	volatile int32_t x287 = -171648029;
	volatile int8_t x288 = -1;
	volatile uint32_t t46 = 1015U;

    t46 = (((x285^x286)*x287)+x288);

    if (t46 != 552071591U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x289 = INT16_MAX;
	static int8_t x291 = -2;
	int16_t x292 = -1;
	volatile int32_t t47 = -13748;

    t47 = (((x289^x290)*x291)+x292);

    if (t47 != -65479) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x301 = 862LLU;
	uint64_t x303 = UINT64_MAX;
	int16_t x304 = INT16_MIN;

    t48 = (((x301^x302)*x303)+x304);

    if (t48 != 18446743766496774107LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x309 = INT8_MIN;
	static uint8_t x310 = UINT8_MAX;
	volatile uint32_t x311 = UINT32_MAX;
	int64_t x312 = INT64_MIN;
	volatile int64_t t49 = 1584392LL;

    t49 = (((x309^x310)*x311)+x312);

    if (t49 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x317 = INT16_MIN;
	uint64_t x318 = UINT64_MAX;
	int32_t x320 = -1;

    t50 = (((x317^x318)*x319)+x320);

    if (t50 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x321 = -531;
	static int16_t x322 = 566;
	uint16_t x323 = 19U;
	volatile int32_t x324 = -1;
	volatile int32_t t51 = 12360;

    t51 = (((x321^x322)*x323)+x324);

    if (t51 != -704) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x345 = INT8_MIN;
	volatile int16_t x346 = INT16_MAX;
	volatile int8_t x347 = INT8_MAX;
	static uint32_t x348 = 528213057U;

    t52 = (((x345^x346)*x347)+x348);

    if (t52 != 524067650U) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x349 = 803LLU;
	uint32_t x350 = UINT32_MAX;
	static uint16_t x351 = 39U;
	int64_t x352 = -1LL;
	uint64_t t53 = 6LLU;

    t53 = (((x349^x350)*x351)+x352);

    if (t53 != 167503693187LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	static uint16_t x356 = 201U;

    t54 = (((x353^x354)*x355)+x356);

    if (t54 != -4193335) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x365 = -1;
	int64_t x367 = INT64_MAX;
	static int8_t x368 = INT8_MAX;
	int64_t t55 = 300214190640346341LL;

    t55 = (((x365^x366)*x367)+x368);

    if (t55 != 127LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x369 = 56;
	static volatile uint64_t x370 = UINT64_MAX;
	static int8_t x371 = INT8_MIN;
	int32_t x372 = 32321;

    t56 = (((x369^x370)*x371)+x372);

    if (t56 != 39617LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x377 = -1LL;
	uint64_t x379 = 927922235231LLU;
	int64_t x380 = 1100708791575676LL;

    t57 = (((x377^x378)*x379)+x380);

    if (t57 != 1100708791575676LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x381 = -1;
	static uint16_t x382 = UINT16_MAX;
	volatile uint64_t x383 = 1055019770539875458LLU;
	int64_t x384 = INT64_MIN;
	volatile uint64_t t58 = 128236LLU;

    t58 = (((x381^x382)*x383)+x384);

    if (t58 != 5844478198976217088LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x385 = INT64_MAX;
	volatile int16_t x386 = INT16_MAX;
	uint64_t x387 = 41LLU;
	int64_t x388 = INT64_MIN;
	volatile uint64_t t59 = 3842198086963LLU;

    t59 = (((x385^x386)*x387)+x388);

    if (t59 != 18446744073708208128LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x390 = -1;
	int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MIN;
	int64_t t60 = INT64_MIN;

    t60 = (((x389^x390)*x391)+x392);

    if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x393 = -1;
	int16_t x394 = -1;
	int64_t x396 = 3254731602663312183LL;

    t61 = (((x393^x394)*x395)+x396);

    if (t61 != 3254731602663312183LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x397 = INT8_MAX;
	volatile int16_t x398 = INT16_MAX;
	uint64_t x399 = 126479154LLU;
	volatile int64_t x400 = -1LL;
	uint64_t t62 = 35377693048594718LLU;

    t62 = (((x397^x398)*x399)+x400);

    if (t62 != 4128279586559LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x406 = 20;
	volatile int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t63 = -28;

    t63 = (((x405^x406)*x407)+x408);

    if (t63 != -2261120) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x409 = 2U;
	volatile uint32_t x410 = 216471U;
	int16_t x411 = INT16_MAX;
	int64_t x412 = 388664750LL;
	static volatile int64_t t64 = -1558467302223355664LL;

    t64 = (((x409^x410)*x411)+x412);

    if (t64 != 3186737177LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x413 = -1LL;
	static int8_t x414 = -1;
	volatile int32_t x416 = -274641;
	uint64_t t65 = 9493LLU;

    t65 = (((x413^x414)*x415)+x416);

    if (t65 != 18446744073709276975LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x421 = 56U;
	volatile int8_t x422 = -1;
	volatile uint16_t x424 = 735U;
	static volatile int32_t t66 = 18307;

    t66 = (((x421^x422)*x423)+x424);

    if (t66 != 1248) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x425 = INT16_MIN;
	static uint32_t x426 = 10U;
	volatile int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MIN;

    t67 = (((x425^x426)*x427)+x428);

    if (t67 != 4192896U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x434 = 3LLU;
	int16_t x436 = 7;
	uint64_t t68 = 24406924304090290LLU;

    t68 = (((x433^x434)*x435)+x436);

    if (t68 != 140733193256971LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x437 = 915352U;
	int8_t x438 = INT8_MAX;
	int8_t x439 = INT8_MIN;
	volatile uint32_t t69 = 122167459U;

    t69 = (((x437^x438)*x439)+x440);

    if (t69 != 4177792129U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x441 = -1;
	uint16_t x442 = 25760U;
	int16_t x443 = INT16_MAX;
	volatile int32_t t70 = 19033;

    t70 = (((x441^x442)*x443)+x444);

    if (t70 != -844110432) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x449 = UINT8_MAX;
	uint32_t x450 = 1U;
	int16_t x451 = -15000;
	uint8_t x452 = 1U;
	static uint32_t t71 = 49552U;

    t71 = (((x449^x450)*x451)+x452);

    if (t71 != 4291157297U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x453 = -24171535730470LL;
	uint8_t x454 = 103U;
	volatile int8_t x455 = INT8_MIN;
	volatile int64_t t72 = -16626213038LL;

    t72 = (((x453^x454)*x455)+x456);

    if (t72 != 3093960868471167LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x457 = 6;
	uint64_t x458 = 147112960228LLU;
	uint32_t x459 = 7U;
	volatile int64_t x460 = INT64_MAX;
	volatile uint64_t t73 = 0LLU;

    t73 = (((x457^x458)*x459)+x460);

    if (t73 != 9223373066645497389LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x461 = 798949077573270004LLU;
	uint16_t x462 = 54U;
	int8_t x463 = -1;
	uint64_t x464 = 0LLU;
	static uint64_t t74 = 4943963797240LLU;

    t74 = (((x461^x462)*x463)+x464);

    if (t74 != 17647794996136281662LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x465 = INT8_MAX;
	int16_t x468 = INT16_MIN;

    t75 = (((x465^x466)*x467)+x468);

    if (t75 != 4294934403U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x469 = INT16_MAX;
	static uint32_t x470 = UINT32_MAX;
	int32_t x471 = -362;
	volatile int64_t t76 = -637281LL;

    t76 = (((x469^x470)*x471)+x472);

    if (t76 != 115385227LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x477 = 0U;
	int8_t x478 = INT8_MAX;
	static int16_t x480 = INT16_MAX;
	int64_t t77 = -182583LL;

    t77 = (((x477^x478)*x479)+x480);

    if (t77 != 201818700081801832LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x485 = INT8_MIN;
	int16_t x487 = -2;
	int8_t x488 = -5;
	volatile int32_t t78 = -43626;

    t78 = (((x485^x486)*x487)+x488);

    if (t78 != -259) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x494 = 0;
	volatile int8_t x495 = INT8_MIN;
	volatile int32_t t79 = 86129;

    t79 = (((x493^x494)*x495)+x496);

    if (t79 != 4194176) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x497 = 405598851731968LLU;
	int8_t x498 = 17;
	uint8_t x499 = 1U;
	volatile uint64_t t80 = 450578934534LLU;

    t80 = (((x497^x498)*x499)+x500);

    if (t80 != 405596704248337LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x501 = 7079LLU;
	uint64_t x502 = 202LLU;
	int16_t x504 = INT16_MAX;
	volatile uint64_t t81 = 193220986466942189LLU;

    t81 = (((x501^x502)*x503)+x504);

    if (t81 != 25746LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x513 = INT16_MIN;
	volatile int8_t x515 = -1;
	int32_t t82 = -4164;

    t82 = (((x513^x514)*x515)+x516);

    if (t82 != -30887) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x517 = INT32_MAX;
	uint16_t x518 = UINT16_MAX;
	int8_t x519 = -1;
	volatile int8_t x520 = -1;

    t83 = (((x517^x518)*x519)+x520);

    if (t83 != -2147418113) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x521 = -1;
	uint64_t x522 = 7LLU;
	static uint64_t x523 = 1018861509493775658LLU;
	static volatile int64_t x524 = 229325LL;

    t84 = (((x521^x522)*x523)+x524);

    if (t84 != 10295851997759575677LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x525 = 79444U;
	int64_t x526 = -1LL;
	static int16_t x528 = -1;

    t85 = (((x525^x526)*x527)+x528);

    if (t85 != -79446LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x529 = INT16_MIN;
	static uint64_t x530 = 28101543396296198LLU;
	int16_t x531 = -1;
	int64_t x532 = 1495788326LL;
	uint64_t t86 = 26LLU;

    t86 = (((x529^x530)*x531)+x532);

    if (t86 != 28101544892081440LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x533 = -1;
	int32_t x534 = 61808;
	volatile int16_t x535 = -51;
	volatile int32_t x536 = -1;
	volatile int32_t t87 = 5740312;

    t87 = (((x533^x534)*x535)+x536);

    if (t87 != 3152258) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x537 = -1;
	uint8_t x539 = 0U;
	static uint16_t x540 = 15540U;
	volatile int64_t t88 = 1LL;

    t88 = (((x537^x538)*x539)+x540);

    if (t88 != 15540LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x545 = 38828U;
	volatile int16_t x547 = -1;
	volatile int64_t t89 = -1LL;

    t89 = (((x545^x546)*x547)+x548);

    if (t89 != 38828LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x549 = 117U;
	static int32_t x550 = INT32_MIN;
	uint32_t x551 = 18U;
	int64_t x552 = INT64_MIN;
	static volatile int64_t t90 = -4231500467075LL;

    t90 = (((x549^x550)*x551)+x552);

    if (t90 != -9223372036854773702LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x553 = 25234LL;
	volatile uint64_t x554 = 112802LLU;
	int32_t x555 = 0;
	int8_t x556 = INT8_MAX;
	uint64_t t91 = 3237596852907LLU;

    t91 = (((x553^x554)*x555)+x556);

    if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x558 = UINT64_MAX;
	static int8_t x559 = 0;
	int16_t x560 = INT16_MIN;
	volatile uint64_t t92 = 4LLU;

    t92 = (((x557^x558)*x559)+x560);

    if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x562 = INT32_MIN;
	static int16_t x563 = INT16_MIN;
	volatile int64_t x564 = 0LL;
	volatile int64_t t93 = -221146125LL;

    t93 = (((x561^x562)*x563)+x564);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x569 = 6129620LLU;
	int32_t x570 = -1;
	int8_t x572 = INT8_MAX;
	volatile uint64_t t94 = 564871693313354LLU;

    t94 = (((x569^x570)*x571)+x572);

    if (t94 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x577 = 7U;
	int16_t x578 = -18;
	static uint64_t x579 = UINT64_MAX;
	volatile int16_t x580 = -15;
	uint64_t t95 = 961300LLU;

    t95 = (((x577^x578)*x579)+x580);

    if (t95 != 8LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x585 = 21U;
	uint16_t x586 = 7041U;
	uint8_t x587 = UINT8_MAX;
	volatile int32_t x588 = -1;
	uint32_t t96 = 234198U;

    t96 = (((x585^x586)*x587)+x588);

    if (t96 != 1800299U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x593 = 13674U;
	static int64_t x594 = -1LL;
	uint32_t x595 = 22800U;
	volatile uint16_t x596 = 29296U;
	volatile int64_t t97 = 430066LL;

    t97 = (((x593^x594)*x595)+x596);

    if (t97 != -311760704LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x601 = -30LL;
	uint64_t x602 = UINT64_MAX;
	int8_t x603 = -14;
	uint64_t x604 = 359LLU;
	uint64_t t98 = 19815125226LLU;

    t98 = (((x601^x602)*x603)+x604);

    if (t98 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x605 = 2682;
	static int64_t x606 = -1LL;
	uint8_t x607 = 10U;

    t99 = (((x605^x606)*x607)+x608);

    if (t99 != -26829LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x609 = 0U;
	uint32_t x610 = UINT32_MAX;
	uint64_t x612 = 223155LLU;
	static volatile uint64_t t100 = 1011018758392843LLU;

    t100 = (((x609^x610)*x611)+x612);

    if (t100 != 4295190324LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x617 = UINT64_MAX;
	int16_t x619 = -1;
	static int8_t x620 = -1;
	volatile uint64_t t101 = 1560347LLU;

    t101 = (((x617^x618)*x619)+x620);

    if (t101 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x625 = 6513LLU;
	static volatile uint16_t x626 = 156U;
	uint8_t x627 = 9U;
	int16_t x628 = INT16_MIN;
	static uint64_t t102 = 129088712537933LLU;

    t102 = (((x625^x626)*x627)+x628);

    if (t102 != 26965LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x629 = -1742443871LL;
	uint16_t x630 = 119U;
	volatile uint8_t x631 = 2U;

    t103 = (((x629^x630)*x631)+x632);

    if (t103 != -3484887583LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x633 = 15954LLU;
	int16_t x634 = INT16_MAX;
	int32_t x635 = INT32_MIN;
	uint8_t x636 = 62U;
	volatile uint64_t t104 = 1LLU;

    t104 = (((x633^x634)*x635)+x636);

    if (t104 != 18446707968066977854LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x645 = 733602687094LL;
	volatile uint16_t x646 = UINT16_MAX;
	static volatile uint8_t x647 = 21U;
	int8_t x648 = INT8_MAX;
	volatile int64_t t105 = 1456748711952256626LL;

    t105 = (((x645^x646)*x647)+x648);

    if (t105 != 15405655994044LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint8_t x649 = 0U;
	uint16_t x650 = UINT16_MAX;
	int16_t x652 = -1;

    t106 = (((x649^x650)*x651)+x652);

    if (t106 != -65536) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x656 = -1LL;
	int64_t t107 = 1362964184691291LL;

    t107 = (((x653^x654)*x655)+x656);

    if (t107 != 2147483646LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x657 = 0;
	int8_t x658 = 0;
	uint32_t x659 = 467U;
	int32_t x660 = -14454900;
	uint32_t t108 = 145U;

    t108 = (((x657^x658)*x659)+x660);

    if (t108 != 4280512396U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x662 = 5744626;
	int16_t x663 = -1;
	int16_t x664 = -3072;

    t109 = (((x661^x662)*x663)+x664);

    if (t109 != 9223372036849028110LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x669 = INT64_MIN;
	int16_t x670 = -9;
	uint64_t x671 = 15007766732797LLU;
	static int8_t x672 = INT8_MIN;
	uint64_t t110 = 112834LLU;

    t110 = (((x669^x670)*x671)+x672);

    if (t110 != 9223236966954180507LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x677 = 84U;
	int64_t x678 = -1LL;
	volatile int32_t x680 = 666855;
	volatile int64_t t111 = 31LL;

    t111 = (((x677^x678)*x679)+x680);

    if (t111 != -8410507805LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x681 = UINT64_MAX;
	volatile int8_t x682 = INT8_MIN;
	int32_t x683 = INT32_MIN;
	int64_t x684 = -1LL;
	uint64_t t112 = 20230843189LLU;

    t112 = (((x681^x682)*x683)+x684);

    if (t112 != 18446743800979128319LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x689 = INT16_MIN;
	static uint8_t x690 = 2U;
	static int8_t x691 = -13;
	int64_t x692 = -12652496LL;
	int64_t t113 = 491151LL;

    t113 = (((x689^x690)*x691)+x692);

    if (t113 != -12226538LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x694 = 169;
	int64_t x695 = INT64_MAX;
	int64_t x696 = 270775LL;

    t114 = (((x693^x694)*x695)+x696);

    if (t114 != 270945LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x698 = 1981U;
	volatile int8_t x699 = INT8_MIN;
	int16_t x700 = -802;
	volatile uint64_t t115 = 15757715261123015LLU;

    t115 = (((x697^x698)*x699)+x700);

    if (t115 != 18446744073701231838LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x706 = INT64_MIN;
	int32_t x707 = -1;
	uint16_t x708 = 24252U;

    t116 = (((x705^x706)*x707)+x708);

    if (t116 != -9223372034707267908LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x709 = 69U;
	int32_t x710 = -1;
	int32_t x712 = -1;

    t117 = (((x709^x710)*x711)+x712);

    if (t117 != -71) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x713 = UINT8_MAX;
	int32_t x714 = INT32_MAX;
	int8_t x716 = INT8_MAX;

    t118 = (((x713^x714)*x715)+x716);

    if (t118 != -2147483265) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x717 = INT32_MAX;
	static volatile int32_t x718 = INT32_MIN;
	static uint32_t x719 = UINT32_MAX;
	int8_t x720 = -1;
	uint32_t t119 = 130387808U;

    t119 = (((x717^x718)*x719)+x720);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x722 = UINT64_MAX;
	int16_t x723 = -54;
	static int8_t x724 = -1;
	volatile uint64_t t120 = 0LLU;

    t120 = (((x721^x722)*x723)+x724);

    if (t120 != 53LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x730 = INT16_MIN;
	int16_t x731 = INT16_MIN;
	uint64_t x732 = UINT64_MAX;
	uint64_t t121 = 235200757762866591LLU;

    t121 = (((x729^x730)*x731)+x732);

    if (t121 != 18446744073372237823LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x737 = INT16_MIN;
	int16_t x739 = INT16_MIN;
	static int8_t x740 = INT8_MAX;
	int32_t t122 = -3;

    t122 = (((x737^x738)*x739)+x740);

    if (t122 != 1073774719) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x741 = 2U;
	uint64_t x742 = 1158689477279229LLU;
	int32_t x743 = -1;
	uint16_t x744 = UINT16_MAX;
	uint64_t t123 = 480900LLU;

    t123 = (((x741^x742)*x743)+x744);

    if (t123 != 18445585384232337920LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x749 = -24776515853LL;
	int16_t x750 = 0;
	volatile uint64_t x751 = 55862675745742833LLU;
	int32_t x752 = -80;
	volatile uint64_t t124 = 29153358947LLU;

    t124 = (((x749^x750)*x751)+x752);

    if (t124 != 16436052780116987763LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x753 = -1;
	int16_t x756 = INT16_MAX;
	uint64_t t125 = 28548371LLU;

    t125 = (((x753^x754)*x755)+x756);

    if (t125 != 32767LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x757 = INT32_MIN;
	volatile uint32_t x759 = UINT32_MAX;
	static uint64_t x760 = 100450552LLU;
	volatile uint64_t t126 = 43030538862507028LLU;

    t126 = (((x757^x758)*x759)+x760);

    if (t126 != 9223304208684220072LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x769 = 1;
	int16_t x770 = 3;
	int32_t x771 = -122871544;
	int8_t x772 = INT8_MIN;
	volatile int32_t t127 = -69725002;

    t127 = (((x769^x770)*x771)+x772);

    if (t127 != -245743216) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x773 = INT16_MIN;
	static int8_t x774 = INT8_MAX;
	uint64_t x776 = 1782605948185LLU;
	uint64_t t128 = 6332119540897125LLU;

    t128 = (((x773^x774)*x775)+x776);

    if (t128 != 1782605980826LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x777 = -15964363LL;
	uint64_t x778 = UINT64_MAX;
	int16_t x779 = INT16_MIN;
	volatile int64_t x780 = -8304332036631712LL;

    t129 = (((x777^x778)*x779)+x780);

    if (t129 != 18438439218552705888LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x794 = 252455261455935410LL;
	uint32_t x796 = 12U;
	int64_t t130 = -13LL;

    t130 = (((x793^x794)*x795)+x796);

    if (t130 != -252455261455915074LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x797 = 64122U;
	int8_t x798 = -4;
	int8_t x799 = 0;
	uint32_t t131 = 3U;

    t131 = (((x797^x798)*x799)+x800);

    if (t131 != 4020640065U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x801 = INT32_MIN;
	static volatile uint16_t x802 = 8397U;
	static uint64_t x803 = 0LLU;
	static volatile uint64_t t132 = 720533499728061689LLU;

    t132 = (((x801^x802)*x803)+x804);

    if (t132 != 1407581755LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x805 = 10449U;
	int32_t x806 = INT32_MIN;
	volatile uint32_t x807 = UINT32_MAX;
	uint8_t x808 = 0U;

    t133 = (((x805^x806)*x807)+x808);

    if (t133 != 2147473199U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x809 = 79U;
	int64_t x810 = INT64_MAX;
	int16_t x811 = -1;
	int8_t x812 = 0;

    t134 = (((x809^x810)*x811)+x812);

    if (t134 != -9223372036854775728LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x825 = -2;
	int32_t x826 = -51913213;
	volatile uint64_t x827 = 3413LLU;
	uint64_t t135 = 55LLU;

    t135 = (((x825^x826)*x827)+x828);

    if (t135 != 177179795841LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x829 = 396747934732217222LL;
	static uint64_t x830 = UINT64_MAX;
	int64_t x831 = -156311022914417123LL;
	int32_t x832 = -1;
	volatile uint64_t t136 = 8194379LLU;

    t136 = (((x829^x830)*x831)+x832);

    if (t136 != 15339578586379890612LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x849 = 3487856641LLU;
	int64_t x850 = INT64_MAX;
	uint16_t x851 = 26874U;

    t137 = (((x849^x850)*x851)+x852);

    if (t137 != 18446650341053025668LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x854 = -508LL;
	static uint32_t x855 = 11U;
	volatile int8_t x856 = -6;
	volatile int64_t t138 = -2LL;

    t138 = (((x853^x854)*x855)+x856);

    if (t138 != -4802LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x857 = INT8_MAX;
	int16_t x858 = INT16_MIN;
	uint64_t x859 = 3056855346197689LLU;
	uint32_t x860 = UINT32_MAX;
	static uint64_t t139 = 14LLU;

    t139 = (((x857^x858)*x859)+x860);

    if (t139 != 10901649091313510342LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x862 = 1662;
	int64_t x863 = -31230022545058LL;
	volatile uint64_t t140 = 15LLU;

    t140 = (((x861^x862)*x863)+x864);

    if (t140 != 9275307564347207262LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x865 = 0U;
	int32_t x866 = 27;
	uint32_t x867 = UINT32_MAX;
	uint32_t x868 = UINT32_MAX;

    t141 = (((x865^x866)*x867)+x868);

    if (t141 != 4294967268U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x873 = UINT32_MAX;
	volatile int64_t x874 = INT64_MIN;

    t142 = (((x873^x874)*x875)+x876);

    if (t142 != 9967095134219518875LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x877 = INT32_MIN;
	int32_t x878 = INT32_MIN;
	uint64_t x880 = 3315110657534706LLU;
	uint64_t t143 = 810266891LLU;

    t143 = (((x877^x878)*x879)+x880);

    if (t143 != 3315110657534706LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x881 = INT32_MIN;
	uint64_t x882 = 98126206147LLU;
	static int8_t x883 = -1;
	int64_t x884 = INT64_MIN;
	uint64_t t144 = 236LLU;

    t144 = (((x881^x882)*x883)+x884);

    if (t144 != 9223372134149581629LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x885 = 60U;
	int16_t x886 = 65;
	int8_t x887 = INT8_MIN;
	volatile int16_t x888 = 517;

    t145 = (((x885^x886)*x887)+x888);

    if (t145 != -15483) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x890 = UINT8_MAX;
	static int32_t x891 = 0;
	volatile uint32_t x892 = 58017686U;

    t146 = (((x889^x890)*x891)+x892);

    if (t146 != 58017686LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x896 = -10;
	int32_t t147 = -29990949;

    t147 = (((x893^x894)*x895)+x896);

    if (t147 != -1999) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x897 = -3;
	int64_t x898 = -1LL;
	int8_t x899 = -1;
	static int8_t x900 = -32;
	volatile int64_t t148 = -17946981772LL;

    t148 = (((x897^x898)*x899)+x900);

    if (t148 != -34LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x902 = 32877727U;
	int8_t x903 = 1;
	static uint32_t t149 = 4008U;

    t149 = (((x901^x902)*x903)+x904);

    if (t149 != 32887775U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x906 = -1;
	uint64_t x907 = UINT64_MAX;
	volatile uint16_t x908 = 0U;

    t150 = (((x905^x906)*x907)+x908);

    if (t150 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x918 = 83U;
	uint32_t x919 = UINT32_MAX;
	volatile int8_t x920 = INT8_MIN;
	volatile uint32_t t151 = 662179U;

    t151 = (((x917^x918)*x919)+x920);

    if (t151 != 3733948732U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x925 = 6;
	volatile uint8_t x926 = UINT8_MAX;
	int32_t x927 = -1;
	uint64_t t152 = 0LLU;

    t152 = (((x925^x926)*x927)+x928);

    if (t152 != 157705049418LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x933 = -46;
	uint64_t x934 = 13053489928449842LLU;
	uint8_t x935 = 0U;
	uint64_t x936 = UINT64_MAX;
	volatile uint64_t t153 = UINT64_MAX;

    t153 = (((x933^x934)*x935)+x936);

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x941 = UINT16_MAX;
	volatile uint32_t x942 = 102221145U;
	int16_t x943 = 520;
	int64_t x944 = -1LL;
	volatile int64_t t154 = -371038247825242193LL;

    t154 = (((x941^x942)*x943)+x944);

    if (t154 != 1596924207LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x949 = 62832462516LLU;
	int8_t x950 = INT8_MIN;
	int8_t x951 = -30;
	static int8_t x952 = 1;
	uint64_t t155 = 138390511607LLU;

    t155 = (((x949^x950)*x951)+x952);

    if (t155 != 1884973876201LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x959 = 1901;
	uint32_t x960 = 41U;
	volatile uint32_t t156 = 167396U;

    t156 = (((x957^x958)*x959)+x960);

    if (t156 != 1960060549U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x962 = 6U;
	uint64_t x963 = 234436LLU;
	volatile uint64_t x964 = UINT64_MAX;
	static volatile uint64_t t157 = 526242588589LLU;

    t157 = (((x961^x962)*x963)+x964);

    if (t157 != 28366755LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x965 = 12385979LLU;
	int8_t x966 = INT8_MAX;
	uint8_t x967 = 16U;
	volatile int64_t x968 = INT64_MAX;
	uint64_t t158 = 425066663585LLU;

    t158 = (((x965^x966)*x967)+x968);

    if (t158 != 9223372037052951615LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x970 = INT32_MIN;
	int32_t x972 = INT32_MAX;
	int64_t t159 = -9718902458LL;

    t159 = (((x969^x970)*x971)+x972);

    if (t159 != -272730423169LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x978 = UINT8_MAX;
	uint64_t x979 = UINT64_MAX;
	volatile int32_t x980 = INT32_MIN;
	uint64_t t160 = 276796419LLU;

    t160 = (((x977^x978)*x979)+x980);

    if (t160 != 18446744071562067719LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x981 = INT64_MAX;
	int8_t x982 = -1;
	volatile uint64_t x983 = 325925LLU;
	static uint64_t t161 = 7482240056196LLU;

    t161 = (((x981^x982)*x983)+x984);

    if (t161 != 9223372036854720360LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x993 = INT64_MAX;
	int16_t x994 = INT16_MIN;
	uint64_t x995 = UINT64_MAX;
	int32_t x996 = INT32_MIN;
	volatile uint64_t t162 = 30781751546LLU;

    t162 = (((x993^x994)*x995)+x996);

    if (t162 != 9223372034707259393LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1005 = 13U;
	int8_t x1007 = -2;
	int32_t x1008 = -107956;
	int64_t t163 = -6559148750LL;

    t163 = (((x1005^x1006)*x1007)+x1008);

    if (t163 != -104806LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1013 = INT64_MIN;
	static int64_t x1014 = INT64_MIN;
	volatile int64_t x1015 = INT64_MIN;
	volatile int64_t t164 = -57601169353057LL;

    t164 = (((x1013^x1014)*x1015)+x1016);

    if (t164 != -1623LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1017 = -505520;
	uint16_t x1019 = 0U;
	int32_t t165 = 34823730;

    t165 = (((x1017^x1018)*x1019)+x1020);

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x1021 = UINT64_MAX;
	int8_t x1022 = INT8_MIN;
	static int64_t x1023 = -176863LL;
	static int64_t x1024 = -1LL;
	uint64_t t166 = 111156283782179LLU;

    t166 = (((x1021^x1022)*x1023)+x1024);

    if (t166 != 18446744073687090014LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x1025 = INT64_MAX;
	int64_t x1026 = INT64_MIN;
	int32_t x1027 = INT32_MIN;
	uint64_t x1028 = 965380LLU;
	static uint64_t t167 = 2204338756682633984LLU;

    t167 = (((x1025^x1026)*x1027)+x1028);

    if (t167 != 2148449028LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1029 = 5U;
	uint64_t x1030 = UINT64_MAX;
	int8_t x1031 = INT8_MIN;
	volatile int32_t x1032 = -1;
	uint64_t t168 = 155616914LLU;

    t168 = (((x1029^x1030)*x1031)+x1032);

    if (t168 != 767LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x1034 = 43U;
	int64_t x1035 = 1LL;
	int64_t x1036 = INT64_MIN;
	static int64_t t169 = -180410214LL;

    t169 = (((x1033^x1034)*x1035)+x1036);

    if (t169 != -9223372036715078990LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1037 = INT64_MIN;
	static int32_t x1038 = 104484;
	int8_t x1039 = -1;
	volatile int64_t t170 = 5888176297116LL;

    t170 = (((x1037^x1038)*x1039)+x1040);

    if (t170 != 9223372036854671323LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x1041 = 9069795353067858554LLU;
	int32_t x1042 = -15866718;
	uint8_t x1043 = 0U;
	volatile int16_t x1044 = -1;
	volatile uint64_t t171 = UINT64_MAX;

    t171 = (((x1041^x1042)*x1043)+x1044);

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1045 = 84783LLU;
	uint8_t x1047 = 3U;
	int8_t x1048 = 0;
	uint64_t t172 = 3LLU;

    t172 = (((x1045^x1046)*x1047)+x1048);

    if (t172 != 254376LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x1053 = 3U;
	static volatile int64_t x1054 = -1086989LL;
	static int16_t x1055 = -1;
	volatile uint32_t x1056 = 2919524U;
	int64_t t173 = 645LL;

    t173 = (((x1053^x1054)*x1055)+x1056);

    if (t173 != 4006516LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1069 = 1;
	uint32_t x1070 = 10571363U;
	static uint64_t x1071 = 9392587210LLU;
	int16_t x1072 = INT16_MIN;
	static volatile uint64_t t174 = 949LLU;

    t174 = (((x1069^x1070)*x1071)+x1072);

    if (t174 != 99292439513447252LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x1073 = 1;
	static int32_t x1074 = INT32_MIN;
	volatile int64_t x1075 = 1048LL;

    t175 = (((x1073^x1074)*x1075)+x1076);

    if (t175 != -2250562862056LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1077 = UINT32_MAX;
	volatile int32_t x1078 = INT32_MIN;
	uint8_t x1079 = 0U;
	uint32_t t176 = 63U;

    t176 = (((x1077^x1078)*x1079)+x1080);

    if (t176 != 32767U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1085 = INT32_MIN;
	static uint64_t x1086 = 173659025300740LLU;
	volatile uint8_t x1088 = 33U;
	static uint64_t t177 = 123327791454LLU;

    t177 = (((x1085^x1086)*x1087)+x1088);

    if (t177 != 18442576234968561793LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1092 = -1LL;
	static volatile uint64_t t178 = 4261LLU;

    t178 = (((x1089^x1090)*x1091)+x1092);

    if (t178 != 18446744042739815134LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1093 = 581U;
	uint32_t x1094 = UINT32_MAX;
	uint8_t x1095 = UINT8_MAX;
	static volatile int8_t x1096 = INT8_MAX;
	uint32_t t179 = 375U;

    t179 = (((x1093^x1094)*x1095)+x1096);

    if (t179 != 4294819013U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1101 = UINT8_MAX;
	volatile int64_t x1103 = 18112LL;
	int32_t x1104 = -1455;
	volatile int64_t t180 = 70727940940LL;

    t180 = (((x1101^x1102)*x1103)+x1104);

    if (t180 != -4638127LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x1105 = UINT32_MAX;
	int64_t x1106 = 11LL;
	int8_t x1107 = INT8_MAX;
	volatile int64_t t181 = -1LL;

    t181 = (((x1105^x1106)*x1107)+x1108);

    if (t181 != 545460910603LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1117 = INT64_MAX;
	static volatile int8_t x1118 = INT8_MIN;
	static int32_t x1119 = -1;
	uint8_t x1120 = 56U;
	int64_t t182 = 1951593616LL;

    t182 = (((x1117^x1118)*x1119)+x1120);

    if (t182 != 9223372036854775737LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1121 = -1;
	uint8_t x1122 = 50U;
	volatile uint64_t x1123 = 106741854176540184LLU;
	uint64_t x1124 = 61LLU;
	volatile uint64_t t183 = 3LLU;

    t183 = (((x1121^x1122)*x1123)+x1124);

    if (t183 != 13002909510706002293LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1126 = -1LL;
	uint64_t x1127 = UINT64_MAX;
	int64_t x1128 = INT64_MIN;

    t184 = (((x1125^x1126)*x1127)+x1128);

    if (t184 != 9223372036854775868LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1129 = INT16_MAX;
	static volatile int32_t x1130 = INT32_MAX;
	int64_t x1131 = -4139LL;
	uint16_t x1132 = UINT16_MAX;
	volatile int64_t t185 = -387LL;

    t185 = (((x1129^x1130)*x1131)+x1132);

    if (t185 != -8888299126785LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1138 = -1;
	static volatile int16_t x1140 = INT16_MIN;
	volatile uint32_t t186 = 605980U;

    t186 = (((x1137^x1138)*x1139)+x1140);

    if (t186 != 4294934530U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1145 = 730043924971LL;
	int8_t x1146 = -1;
	uint16_t x1148 = UINT16_MAX;
	static int64_t t187 = -91957110128LL;

    t187 = (((x1145^x1146)*x1147)+x1148);

    if (t187 != -92715578405909LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1157 = -2;
	static volatile int8_t x1159 = INT8_MIN;
	uint8_t x1160 = 1U;

    t188 = (((x1157^x1158)*x1159)+x1160);

    if (t188 != 1112065) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1162 = 9820U;
	uint64_t t189 = 7215LLU;

    t189 = (((x1161^x1162)*x1163)+x1164);

    if (t189 != 5920444LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x1165 = 0U;
	int8_t x1166 = 1;
	volatile uint32_t x1167 = 1363054713U;
	static int32_t x1168 = INT32_MIN;
	volatile uint32_t t190 = 6531U;

    t190 = (((x1165^x1166)*x1167)+x1168);

    if (t190 != 3510538361U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1173 = UINT64_MAX;
	int64_t x1175 = -1LL;
	int16_t x1176 = -1;
	static volatile uint64_t t191 = 1781295422180LLU;

    t191 = (((x1173^x1174)*x1175)+x1176);

    if (t191 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1177 = UINT32_MAX;
	int16_t x1178 = -1;
	int64_t x1179 = INT64_MIN;
	int16_t x1180 = 29;
	volatile int64_t t192 = 18274718LL;

    t192 = (((x1177^x1178)*x1179)+x1180);

    if (t192 != 29LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint8_t x1189 = 4U;
	volatile uint32_t x1190 = 228U;
	static int16_t x1191 = INT16_MIN;
	uint32_t x1192 = 181U;
	uint32_t t193 = 2U;

    t193 = (((x1189^x1190)*x1191)+x1192);

    if (t193 != 4287627445U) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x1193 = INT8_MIN;
	volatile uint32_t x1194 = 10269U;
	uint16_t x1195 = 1U;
	static int32_t x1196 = -4913;

    t194 = (((x1193^x1194)*x1195)+x1196);

    if (t194 != 4294952044U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1197 = -37;
	static volatile uint64_t x1198 = 17147595073LLU;
	int32_t x1199 = -145;
	volatile int32_t x1200 = INT32_MIN;
	volatile uint64_t t195 = 53367419LLU;

    t195 = (((x1197^x1198)*x1199)+x1200);

    if (t195 != 2484253807302LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1201 = INT8_MAX;

    t196 = (((x1201^x1202)*x1203)+x1204);

    if (t196 != 383LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1205 = -1;
	static uint16_t x1206 = 135U;
	volatile int8_t x1207 = 0;
	static volatile uint32_t x1208 = UINT32_MAX;

    t197 = (((x1205^x1206)*x1207)+x1208);

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1209 = INT16_MAX;
	uint64_t x1210 = UINT64_MAX;
	int8_t x1211 = INT8_MIN;
	int64_t x1212 = -1LL;
	uint64_t t198 = 182324386417899716LLU;

    t198 = (((x1209^x1210)*x1211)+x1212);

    if (t198 != 4194303LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1215 = 693629027U;
	int16_t x1216 = -1;
	uint64_t t199 = 44645235829596533LLU;

    t199 = (((x1213^x1214)*x1215)+x1216);

    if (t199 != 15876092370522346805LLU) { NG(); } else { ; }
	
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

