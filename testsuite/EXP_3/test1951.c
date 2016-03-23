
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

int16_t x7 = INT16_MIN;
int16_t x9 = INT16_MIN;
uint64_t x10 = UINT64_MAX;
int32_t x11 = -2;
static int16_t x12 = INT16_MAX;
volatile int32_t x29 = INT32_MIN;
int32_t t3 = -1021;
static int16_t x44 = -487;
static int8_t x49 = INT8_MIN;
int32_t t6 = -13;
static int8_t x87 = INT8_MIN;
int16_t x90 = 2;
volatile int64_t x103 = INT64_MIN;
volatile int8_t x105 = 4;
uint64_t x108 = 134988LLU;
int32_t t15 = 8237;
uint8_t x109 = 0U;
uint8_t x149 = 8U;
uint8_t x150 = UINT8_MAX;
uint16_t x163 = 1475U;
static uint64_t x178 = 248402615LLU;
static uint64_t t21 = 163115101138866181LLU;
uint64_t x183 = 55920409079702669LLU;
int32_t x184 = INT32_MIN;
volatile int8_t x188 = 8;
static uint64_t x198 = 61260699842752LLU;
int64_t x199 = 0LL;
int64_t x200 = INT64_MAX;
volatile uint64_t t24 = 8317538791493246707LLU;
int8_t x213 = 21;
volatile int8_t x252 = 6;
int8_t x267 = -14;
volatile uint64_t t32 = 15469447449908432LLU;
int8_t x274 = INT8_MIN;
int32_t x275 = INT32_MIN;
uint32_t t33 = 355U;
volatile int16_t x294 = -1;
volatile uint32_t t37 = 28U;
uint64_t t38 = 31LLU;
int64_t x341 = INT64_MIN;
volatile int64_t x346 = -1LL;
int8_t x347 = -1;
int8_t x356 = -1;
int64_t x364 = 89267472021780LL;
static int16_t x365 = -1;
static volatile int16_t x383 = INT16_MIN;
volatile int64_t x394 = -1LL;
int16_t x406 = 5;
int16_t x408 = 1;
uint32_t t51 = 600U;
static volatile uint16_t x414 = 3386U;
volatile int32_t x425 = INT32_MAX;
uint8_t x469 = UINT8_MAX;
int16_t x472 = 2268;
volatile int32_t t58 = -912;
uint32_t x474 = UINT32_MAX;
static volatile int16_t x477 = INT16_MIN;
static volatile int64_t x478 = -1LL;
int32_t x479 = -186974547;
int32_t x483 = INT32_MAX;
uint64_t x484 = UINT64_MAX;
uint32_t x496 = 74789679U;
static volatile int64_t t63 = -7428622LL;
uint64_t t65 = 175018787479LLU;
uint64_t t66 = 4305556139133083275LLU;
uint32_t t67 = 28U;
uint64_t x579 = 904324856022887320LLU;
int64_t x586 = -3712771602713046LL;
volatile int64_t t72 = -31847493755582182LL;
int64_t x591 = INT64_MIN;
static uint32_t x611 = 10U;
static volatile uint8_t x614 = UINT8_MAX;
int64_t x634 = -1LL;
static int64_t t79 = 48463914954335917LL;
uint32_t x640 = 1967876190U;
uint16_t x646 = UINT16_MAX;
static int64_t x659 = -1LL;
volatile uint16_t x660 = 11U;
static uint32_t t83 = 2U;
int64_t x670 = -1LL;
int32_t x672 = -52151364;
volatile int16_t x673 = -9002;
static int64_t x675 = INT64_MIN;
volatile uint32_t t85 = 1755983U;
int64_t x682 = -284569609344LL;
uint8_t x683 = 1U;
volatile int64_t t88 = -369335379077LL;
static int64_t x693 = INT64_MIN;
int64_t t92 = 4618LL;
volatile int64_t x724 = -1LL;
int64_t x734 = INT64_MIN;
uint64_t x749 = UINT64_MAX;
int16_t x758 = INT16_MIN;
int64_t x782 = 5673205270LL;
uint16_t x784 = UINT16_MAX;
volatile int32_t x786 = INT32_MIN;
int64_t x787 = -1LL;
int16_t x816 = INT16_MIN;
int32_t x849 = INT32_MAX;
int16_t x850 = INT16_MAX;
static int64_t x853 = 1029640085176924196LL;
static volatile uint8_t x854 = UINT8_MAX;
int32_t x863 = -18759995;
static volatile int32_t t108 = -9326488;
int16_t x885 = -1;
volatile uint64_t t110 = 3585LLU;
static volatile uint32_t x907 = UINT32_MAX;
uint64_t x916 = UINT64_MAX;
uint32_t x923 = 1277502651U;
int16_t x924 = -1;
volatile int8_t x926 = INT8_MAX;
int16_t x933 = -1;
static uint64_t x934 = 45879726836510426LLU;
int8_t x946 = -1;
int64_t x962 = -11LL;
int64_t x969 = INT64_MIN;
int16_t x975 = INT16_MIN;
uint32_t t123 = 445U;
volatile int8_t x978 = -1;
int64_t x982 = INT64_MIN;
uint64_t x996 = UINT64_MAX;
uint32_t x1014 = UINT32_MAX;
volatile int16_t x1023 = INT16_MIN;
uint16_t x1025 = 0U;
uint64_t x1028 = UINT64_MAX;
int16_t x1030 = INT16_MIN;
static uint32_t x1031 = 337U;
static int8_t x1042 = 1;
uint16_t x1061 = 2671U;
volatile int64_t x1065 = INT64_MAX;
uint8_t x1067 = UINT8_MAX;
uint64_t t137 = 61186345568LLU;
volatile int32_t x1081 = INT32_MIN;
static volatile int64_t x1090 = 571481LL;
int64_t x1122 = INT64_MAX;
int32_t x1123 = 0;
static uint32_t x1124 = 14U;
int64_t x1125 = 249052LL;
int64_t x1137 = -1LL;
int8_t x1138 = INT8_MIN;
int64_t x1150 = INT64_MIN;
int16_t x1154 = 3044;
uint8_t x1163 = 1U;
static int16_t x1178 = -5;
static int8_t x1179 = INT8_MAX;
uint8_t x1202 = UINT8_MAX;
uint32_t x1204 = 7277U;
static int8_t x1207 = INT8_MIN;
int32_t t155 = -6030379;
static int32_t x1225 = INT32_MIN;
volatile int8_t x1227 = -1;
volatile int32_t x1239 = INT32_MIN;
static int32_t x1240 = INT32_MIN;
int16_t x1241 = -1;
volatile int64_t x1245 = -208363547085955LL;
static uint32_t x1247 = 3479U;
volatile int8_t x1258 = -3;
static volatile uint32_t x1272 = 206U;
int16_t x1277 = 1;
int32_t x1278 = 854;
volatile int32_t x1294 = INT32_MAX;
static volatile uint32_t x1295 = 56U;
volatile int32_t t167 = 10958760;
int64_t x1301 = -1LL;
volatile uint64_t t168 = 141448045450LLU;
static volatile int32_t x1307 = 7;
static uint32_t x1318 = 20U;
static int16_t x1327 = INT16_MAX;
static volatile int32_t t171 = -812;
volatile int32_t t172 = 7495235;
uint64_t x1341 = UINT64_MAX;
volatile uint64_t t175 = 1271454222626199LLU;
int32_t x1356 = -1;
volatile int32_t x1357 = -1;
static uint16_t x1360 = 14184U;
volatile int32_t t179 = -395;
int8_t x1383 = INT8_MIN;
int32_t x1406 = -10825977;
int32_t x1421 = -60;
volatile uint16_t x1440 = UINT16_MAX;
int16_t x1443 = INT16_MAX;
int16_t x1450 = -15;
int8_t x1469 = -1;
int8_t x1470 = -1;
static int64_t x1476 = 11010081230LL;
int32_t x1516 = -506;
uint32_t t195 = 1647695369U;
volatile uint8_t x1533 = 118U;
int32_t x1556 = 47119397;


void f0(void) {
    	static uint64_t x5 = 63580713706LLU;
	volatile int8_t x6 = -7;
	volatile int32_t x8 = -1;
	uint64_t t0 = 11LLU;

    t0 = ((x5^x6)%(x7<=x8));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t t1 = 539127789836524335LLU;

    t1 = ((x9^x10)%(x11<=x12));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = INT8_MAX;
	uint16_t x18 = UINT16_MAX;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = INT64_MAX;
	volatile int32_t t2 = 34232847;

    t2 = ((x17^x18)%(x19<=x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x30 = -1;
	uint32_t x31 = 324872302U;
	int32_t x32 = INT32_MIN;

    t3 = ((x29^x30)%(x31<=x32));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x37 = 14U;
	uint16_t x38 = 84U;
	int32_t x39 = -1;
	int32_t x40 = 83;
	int32_t t4 = -5467009;

    t4 = ((x37^x38)%(x39<=x40));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x41 = 1847204;
	int64_t x42 = -800368349567792596LL;
	static int64_t x43 = -23593283715LL;
	volatile int64_t t5 = 35709852486LL;

    t5 = ((x41^x42)%(x43<=x44));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x50 = 6;
	static uint32_t x51 = 11449U;
	int32_t x52 = INT32_MAX;

    t6 = ((x49^x50)%(x51<=x52));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x53 = 6926436;
	int32_t x54 = INT32_MIN;
	static int8_t x55 = 1;
	volatile uint16_t x56 = 1U;
	static int32_t t7 = 444;

    t7 = ((x53^x54)%(x55<=x56));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x57 = INT64_MAX;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = -92801070124LL;
	uint32_t x60 = UINT32_MAX;
	int64_t t8 = 12104358753224LL;

    t8 = ((x57^x58)%(x59<=x60));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x61 = INT32_MAX;
	int64_t x62 = -262042055028798349LL;
	int8_t x63 = INT8_MAX;
	uint32_t x64 = 2341U;
	static int64_t t9 = -1317713974613LL;

    t9 = ((x61^x62)%(x63<=x64));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x85 = -9959LL;
	int8_t x86 = -33;
	int8_t x88 = INT8_MIN;
	volatile int64_t t10 = -1557287471318878561LL;

    t10 = ((x85^x86)%(x87<=x88));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x89 = -1LL;
	int32_t x91 = -1;
	int32_t x92 = 184;
	volatile int64_t t11 = 44359763180LL;

    t11 = ((x89^x90)%(x91<=x92));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x94 = -27369128706LL;
	volatile int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MAX;
	volatile int64_t t12 = -106425588737378153LL;

    t12 = ((x93^x94)%(x95<=x96));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x97 = INT16_MIN;
	uint16_t x98 = 30504U;
	int64_t x99 = INT64_MIN;
	volatile int64_t x100 = INT64_MIN;
	int32_t t13 = 777217078;

    t13 = ((x97^x98)%(x99<=x100));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x101 = 6501;
	uint32_t x102 = UINT32_MAX;
	int32_t x104 = INT32_MIN;
	static volatile uint32_t t14 = 401263U;

    t14 = ((x101^x102)%(x103<=x104));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x106 = INT32_MIN;
	volatile uint8_t x107 = 4U;

    t15 = ((x105^x106)%(x107<=x108));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x110 = INT32_MAX;
	static int32_t x111 = INT32_MIN;
	uint8_t x112 = 2U;
	int32_t t16 = 6911;

    t16 = ((x109^x110)%(x111<=x112));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x133 = INT64_MAX;
	uint8_t x134 = UINT8_MAX;
	int8_t x135 = -1;
	int8_t x136 = -1;
	int64_t t17 = -2619825562244LL;

    t17 = ((x133^x134)%(x135<=x136));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x151 = -171;
	uint16_t x152 = 26U;
	volatile int32_t t18 = 1052;

    t18 = ((x149^x150)%(x151<=x152));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x161 = -1;
	static volatile uint8_t x162 = 2U;
	static int64_t x164 = 16556311021340LL;
	int32_t t19 = 7100;

    t19 = ((x161^x162)%(x163<=x164));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x169 = -1;
	uint32_t x170 = 3627U;
	int64_t x171 = -1LL;
	uint16_t x172 = 8950U;
	uint32_t t20 = 430U;

    t20 = ((x169^x170)%(x171<=x172));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x177 = INT32_MIN;
	uint64_t x179 = UINT64_MAX;
	uint64_t x180 = UINT64_MAX;

    t21 = ((x177^x178)%(x179<=x180));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x181 = INT64_MAX;
	int8_t x182 = -1;
	static int64_t t22 = -5275852LL;

    t22 = ((x181^x182)%(x183<=x184));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x185 = -616991193931636LL;
	int8_t x186 = 0;
	int16_t x187 = INT16_MIN;
	volatile int64_t t23 = 2644263523LL;

    t23 = ((x185^x186)%(x187<=x188));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x197 = -1;

    t24 = ((x197^x198)%(x199<=x200));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x214 = INT16_MIN;
	static uint64_t x215 = 20079889325608819LLU;
	static int32_t x216 = -152982949;
	static volatile int32_t t25 = 97472;

    t25 = ((x213^x214)%(x215<=x216));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x217 = INT64_MAX;
	uint32_t x218 = 158375U;
	volatile uint32_t x219 = 2716U;
	volatile int16_t x220 = -3783;
	volatile int64_t t26 = -405743LL;

    t26 = ((x217^x218)%(x219<=x220));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x245 = -58;
	int16_t x246 = -1;
	uint32_t x247 = 535U;
	volatile int32_t x248 = INT32_MIN;
	int32_t t27 = -1402;

    t27 = ((x245^x246)%(x247<=x248));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x249 = 117138LLU;
	static uint8_t x250 = UINT8_MAX;
	volatile int32_t x251 = -277;
	uint64_t t28 = 705623304LLU;

    t28 = ((x249^x250)%(x251<=x252));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x253 = UINT64_MAX;
	static uint64_t x254 = 406231333676348243LLU;
	volatile int16_t x255 = 14;
	uint32_t x256 = UINT32_MAX;
	uint64_t t29 = 1240361LLU;

    t29 = ((x253^x254)%(x255<=x256));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x257 = -10;
	static int8_t x258 = -1;
	uint32_t x259 = 2U;
	static int64_t x260 = INT64_MAX;
	volatile int32_t t30 = -173212948;

    t30 = ((x257^x258)%(x259<=x260));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x265 = INT16_MIN;
	static int8_t x266 = 5;
	static int64_t x268 = INT64_MAX;
	int32_t t31 = -111500122;

    t31 = ((x265^x266)%(x267<=x268));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x269 = 15299LLU;
	uint8_t x270 = 53U;
	int64_t x271 = -1LL;
	uint32_t x272 = 319452U;

    t32 = ((x269^x270)%(x271<=x272));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x273 = 219482762U;
	int8_t x276 = -1;

    t33 = ((x273^x274)%(x275<=x276));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x277 = -766918428808644796LL;
	volatile uint16_t x278 = UINT16_MAX;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MAX;
	int64_t t34 = 1024922915255150470LL;

    t34 = ((x277^x278)%(x279<=x280));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x293 = 2158500U;
	static uint32_t x295 = 20U;
	static int8_t x296 = -1;
	static uint32_t t35 = 7817U;

    t35 = ((x293^x294)%(x295<=x296));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x309 = 10510U;
	uint8_t x310 = 14U;
	uint64_t x311 = 7LLU;
	volatile int64_t x312 = -604278842LL;
	int32_t t36 = 154313;

    t36 = ((x309^x310)%(x311<=x312));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x313 = -1;
	uint32_t x314 = 2874774U;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MIN;

    t37 = ((x313^x314)%(x315<=x316));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x317 = 62LLU;
	uint8_t x318 = UINT8_MAX;
	int32_t x319 = INT32_MIN;
	volatile uint64_t x320 = UINT64_MAX;

    t38 = ((x317^x318)%(x319<=x320));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x321 = INT8_MIN;
	volatile int64_t x322 = -1LL;
	int64_t x323 = -38526511124LL;
	static int32_t x324 = -944819;
	int64_t t39 = -16169428LL;

    t39 = ((x321^x322)%(x323<=x324));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x342 = 2U;
	static int64_t x343 = INT64_MIN;
	uint8_t x344 = 10U;
	int64_t t40 = 9762443LL;

    t40 = ((x341^x342)%(x343<=x344));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x345 = INT16_MIN;
	volatile int8_t x348 = 1;
	int64_t t41 = 529937644939046248LL;

    t41 = ((x345^x346)%(x347<=x348));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x353 = INT32_MIN;
	int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	int32_t t42 = 71;

    t42 = ((x353^x354)%(x355<=x356));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x357 = -111;
	uint8_t x358 = UINT8_MAX;
	volatile int32_t x359 = -25788;
	uint16_t x360 = 287U;
	int32_t t43 = 1;

    t43 = ((x357^x358)%(x359<=x360));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x361 = 3379U;
	volatile int64_t x362 = INT64_MIN;
	volatile int64_t x363 = INT64_MIN;
	int64_t t44 = 10205LL;

    t44 = ((x361^x362)%(x363<=x364));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t45 = -77082;

    t45 = ((x365^x366)%(x367<=x368));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x381 = INT64_MAX;
	uint8_t x382 = UINT8_MAX;
	int64_t x384 = -1LL;
	int64_t t46 = -73921368LL;

    t46 = ((x381^x382)%(x383<=x384));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x385 = INT64_MAX;
	int8_t x386 = -1;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = UINT16_MAX;
	int64_t t47 = -582862890114756LL;

    t47 = ((x385^x386)%(x387<=x388));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x389 = 52U;
	int32_t x390 = INT32_MIN;
	int64_t x391 = 1071334LL;
	static volatile uint32_t x392 = 6319274U;
	volatile int32_t t48 = 2670;

    t48 = ((x389^x390)%(x391<=x392));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x393 = 24LLU;
	uint32_t x395 = 284U;
	uint32_t x396 = 416292890U;
	volatile uint64_t t49 = 34212535449295LLU;

    t49 = ((x393^x394)%(x395<=x396));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x405 = INT64_MIN;
	int32_t x407 = -13823515;
	volatile int64_t t50 = 395114086410687738LL;

    t50 = ((x405^x406)%(x407<=x408));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	uint32_t x410 = UINT32_MAX;
	int16_t x411 = INT16_MIN;
	volatile uint64_t x412 = UINT64_MAX;

    t51 = ((x409^x410)%(x411<=x412));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x413 = 426040351967LLU;
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = -1;
	volatile uint64_t t52 = 301605548032679316LLU;

    t52 = ((x413^x414)%(x415<=x416));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x426 = -1;
	volatile int32_t x427 = INT32_MIN;
	int64_t x428 = INT64_MAX;
	volatile int32_t t53 = -692;

    t53 = ((x425^x426)%(x427<=x428));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x433 = 0U;
	int16_t x434 = INT16_MIN;
	uint64_t x435 = 1LLU;
	volatile int8_t x436 = INT8_MIN;
	int32_t t54 = -721779;

    t54 = ((x433^x434)%(x435<=x436));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x437 = -158022591LL;
	int8_t x438 = INT8_MIN;
	uint8_t x439 = 1U;
	int32_t x440 = INT32_MAX;
	static int64_t t55 = 1LL;

    t55 = ((x437^x438)%(x439<=x440));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x453 = -1LL;
	static volatile int64_t x454 = -14539LL;
	static int64_t x455 = INT64_MIN;
	static int8_t x456 = INT8_MAX;
	int64_t t56 = -1LL;

    t56 = ((x453^x454)%(x455<=x456));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x465 = INT8_MIN;
	int8_t x466 = -1;
	int16_t x467 = INT16_MIN;
	volatile int8_t x468 = INT8_MIN;
	int32_t t57 = 4791;

    t57 = ((x465^x466)%(x467<=x468));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x470 = 1095U;
	static int8_t x471 = INT8_MIN;

    t58 = ((x469^x470)%(x471<=x472));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x473 = 932U;
	static int64_t x475 = -533878369957279431LL;
	int64_t x476 = 5LL;
	static volatile uint32_t t59 = 356107175U;

    t59 = ((x473^x474)%(x475<=x476));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x480 = 14U;
	static volatile int64_t t60 = 6240520811LL;

    t60 = ((x477^x478)%(x479<=x480));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x481 = INT8_MIN;
	uint32_t x482 = 949U;
	uint32_t t61 = 99204342U;

    t61 = ((x481^x482)%(x483<=x484));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x493 = UINT64_MAX;
	int32_t x494 = -1;
	uint16_t x495 = UINT16_MAX;
	uint64_t t62 = 30572345LLU;

    t62 = ((x493^x494)%(x495<=x496));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x497 = -564;
	int64_t x498 = INT64_MAX;
	int64_t x499 = -10LL;
	static int16_t x500 = 19;

    t63 = ((x497^x498)%(x499<=x500));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x509 = UINT32_MAX;
	int16_t x510 = INT16_MAX;
	int16_t x511 = INT16_MIN;
	static int64_t x512 = -3LL;
	volatile uint32_t t64 = 2709U;

    t64 = ((x509^x510)%(x511<=x512));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x521 = INT16_MIN;
	uint64_t x522 = 4857429982280LLU;
	uint8_t x523 = 65U;
	uint64_t x524 = UINT64_MAX;

    t65 = ((x521^x522)%(x523<=x524));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x537 = 8268914923694635LLU;
	int8_t x538 = INT8_MAX;
	static volatile int16_t x539 = -1870;
	volatile int8_t x540 = -29;

    t66 = ((x537^x538)%(x539<=x540));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x541 = INT16_MIN;
	volatile uint32_t x542 = 51023306U;
	volatile uint32_t x543 = 676U;
	static int16_t x544 = INT16_MIN;

    t67 = ((x541^x542)%(x543<=x544));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x549 = INT64_MIN;
	static int16_t x550 = INT16_MAX;
	uint32_t x551 = 1U;
	int16_t x552 = -1;
	int64_t t68 = 2651666LL;

    t68 = ((x549^x550)%(x551<=x552));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x569 = 5434U;
	uint64_t x570 = 23500363904023LLU;
	int32_t x571 = -1;
	int8_t x572 = -1;
	static uint64_t t69 = 13447244039LLU;

    t69 = ((x569^x570)%(x571<=x572));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x573 = INT8_MIN;
	volatile int64_t x574 = -1LL;
	int16_t x575 = 1444;
	volatile int64_t x576 = 358316713978834343LL;
	volatile int64_t t70 = 224LL;

    t70 = ((x573^x574)%(x575<=x576));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x577 = 182033;
	static int32_t x578 = INT32_MIN;
	int8_t x580 = INT8_MIN;
	int32_t t71 = 41;

    t71 = ((x577^x578)%(x579<=x580));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x585 = INT32_MIN;
	static int64_t x587 = -17365078804914LL;
	int8_t x588 = 3;

    t72 = ((x585^x586)%(x587<=x588));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint64_t x589 = 222776742015LLU;
	uint16_t x590 = 0U;
	static int32_t x592 = INT32_MIN;
	uint64_t t73 = 1259054155LLU;

    t73 = ((x589^x590)%(x591<=x592));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x593 = UINT64_MAX;
	uint64_t x594 = 5425769LLU;
	int64_t x595 = INT64_MIN;
	volatile int16_t x596 = INT16_MIN;
	volatile uint64_t t74 = 2LLU;

    t74 = ((x593^x594)%(x595<=x596));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x605 = -1;
	static int8_t x606 = 20;
	int64_t x607 = -1LL;
	volatile int16_t x608 = -1;
	static int32_t t75 = -208;

    t75 = ((x605^x606)%(x607<=x608));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x609 = 5405072196084LLU;
	uint32_t x610 = 36519171U;
	volatile uint16_t x612 = 14U;
	uint64_t t76 = 644226068229058693LLU;

    t76 = ((x609^x610)%(x611<=x612));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x613 = -8;
	uint32_t x615 = UINT32_MAX;
	volatile int64_t x616 = 659411688949LL;
	static volatile int32_t t77 = 25309;

    t77 = ((x613^x614)%(x615<=x616));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x625 = 11857LL;
	volatile int64_t x626 = 360827872209LL;
	int16_t x627 = -67;
	volatile int64_t x628 = -1LL;
	volatile int64_t t78 = 28328109039245858LL;

    t78 = ((x625^x626)%(x627<=x628));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x633 = INT16_MAX;
	static int32_t x635 = -1;
	volatile int8_t x636 = INT8_MAX;

    t79 = ((x633^x634)%(x635<=x636));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x637 = 476845077U;
	int64_t x638 = INT64_MAX;
	int64_t x639 = 24446776LL;
	volatile int64_t t80 = 1242638LL;

    t80 = ((x637^x638)%(x639<=x640));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x645 = 1;
	uint64_t x647 = 2LLU;
	int64_t x648 = INT64_MIN;
	volatile int32_t t81 = -73047;

    t81 = ((x645^x646)%(x647<=x648));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x653 = 19U;
	int32_t x654 = -791468;
	volatile int16_t x655 = INT16_MAX;
	int32_t x656 = INT32_MAX;
	volatile int32_t t82 = 461199;

    t82 = ((x653^x654)%(x655<=x656));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x657 = -1;
	static uint32_t x658 = UINT32_MAX;

    t83 = ((x657^x658)%(x659<=x660));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint16_t x669 = 0U;
	int64_t x671 = INT64_MIN;
	int64_t t84 = -278LL;

    t84 = ((x669^x670)%(x671<=x672));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x674 = 60U;
	int8_t x676 = 22;

    t85 = ((x673^x674)%(x675<=x676));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x677 = INT8_MAX;
	uint8_t x678 = 3U;
	volatile int8_t x679 = INT8_MIN;
	uint16_t x680 = UINT16_MAX;
	volatile int32_t t86 = 79481;

    t86 = ((x677^x678)%(x679<=x680));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x681 = INT16_MAX;
	uint8_t x684 = 10U;
	volatile int64_t t87 = -21717LL;

    t87 = ((x681^x682)%(x683<=x684));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x685 = INT16_MIN;
	int64_t x686 = 1811678492783LL;
	int8_t x687 = -1;
	int64_t x688 = -1LL;

    t88 = ((x685^x686)%(x687<=x688));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x694 = 0U;
	int8_t x695 = INT8_MIN;
	int32_t x696 = INT32_MAX;
	volatile int64_t t89 = 2461851210505LL;

    t89 = ((x693^x694)%(x695<=x696));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x697 = INT64_MIN;
	int8_t x698 = INT8_MAX;
	static int16_t x699 = -1;
	int64_t x700 = 757597158741321025LL;
	volatile int64_t t90 = 16457190948465LL;

    t90 = ((x697^x698)%(x699<=x700));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x701 = UINT8_MAX;
	int64_t x702 = INT64_MIN;
	int32_t x703 = INT32_MIN;
	int32_t x704 = INT32_MAX;
	volatile int64_t t91 = 57108LL;

    t91 = ((x701^x702)%(x703<=x704));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x705 = -186917713LL;
	int64_t x706 = INT64_MAX;
	static volatile int16_t x707 = INT16_MIN;
	static int16_t x708 = -4717;

    t92 = ((x705^x706)%(x707<=x708));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x721 = 2598;
	static int16_t x722 = INT16_MIN;
	int16_t x723 = -2;
	volatile int32_t t93 = -21;

    t93 = ((x721^x722)%(x723<=x724));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x729 = -1;
	uint64_t x730 = UINT64_MAX;
	static int32_t x731 = INT32_MIN;
	int8_t x732 = -6;
	uint64_t t94 = 36LLU;

    t94 = ((x729^x730)%(x731<=x732));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x733 = -1LL;
	uint16_t x735 = UINT16_MAX;
	int64_t x736 = 347687669LL;
	static int64_t t95 = -3102LL;

    t95 = ((x733^x734)%(x735<=x736));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x750 = INT32_MIN;
	int64_t x751 = INT64_MIN;
	int32_t x752 = INT32_MIN;
	volatile uint64_t t96 = 178745060912129384LLU;

    t96 = ((x749^x750)%(x751<=x752));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x757 = INT64_MAX;
	int32_t x759 = -1;
	volatile int32_t x760 = 697401;
	int64_t t97 = 2660382472LL;

    t97 = ((x757^x758)%(x759<=x760));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x773 = INT16_MAX;
	int64_t x774 = INT64_MIN;
	int8_t x775 = -1;
	int8_t x776 = 3;
	static volatile int64_t t98 = 17775406798617LL;

    t98 = ((x773^x774)%(x775<=x776));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x777 = -1LL;
	static int64_t x778 = INT64_MAX;
	volatile int8_t x779 = INT8_MAX;
	int64_t x780 = INT64_MAX;
	static volatile int64_t t99 = 2735303560843717LL;

    t99 = ((x777^x778)%(x779<=x780));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x781 = INT16_MIN;
	uint32_t x783 = 3820U;
	int64_t t100 = -14148142688877LL;

    t100 = ((x781^x782)%(x783<=x784));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x785 = 7U;
	int8_t x788 = -1;
	volatile uint32_t t101 = 832162288U;

    t101 = ((x785^x786)%(x787<=x788));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x789 = 318U;
	int64_t x790 = -1LL;
	static int16_t x791 = INT16_MIN;
	static int32_t x792 = -9;
	int64_t t102 = -1575795547093373LL;

    t102 = ((x789^x790)%(x791<=x792));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x813 = 0;
	int64_t x814 = -30534658LL;
	int16_t x815 = INT16_MIN;
	int64_t t103 = -4223112329341604181LL;

    t103 = ((x813^x814)%(x815<=x816));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x829 = -1563583890818263LL;
	int8_t x830 = INT8_MAX;
	int16_t x831 = INT16_MIN;
	int16_t x832 = INT16_MAX;
	static volatile int64_t t104 = -15447956541136LL;

    t104 = ((x829^x830)%(x831<=x832));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x851 = -11125685945660LL;
	volatile int64_t x852 = INT64_MAX;
	static volatile int32_t t105 = -32760146;

    t105 = ((x849^x850)%(x851<=x852));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x855 = INT16_MIN;
	int8_t x856 = -1;
	volatile int64_t t106 = -663LL;

    t106 = ((x853^x854)%(x855<=x856));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x861 = INT16_MAX;
	static int32_t x862 = -1;
	volatile int32_t x864 = -640;
	volatile int32_t t107 = 1859274;

    t107 = ((x861^x862)%(x863<=x864));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x865 = INT16_MIN;
	int16_t x866 = -19;
	int8_t x867 = 1;
	uint16_t x868 = UINT16_MAX;

    t108 = ((x865^x866)%(x867<=x868));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x877 = UINT32_MAX;
	int64_t x878 = -641771444LL;
	volatile uint64_t x879 = 564471196954LLU;
	static int8_t x880 = INT8_MIN;
	volatile int64_t t109 = 59501404LL;

    t109 = ((x877^x878)%(x879<=x880));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x886 = 221216559749LLU;
	int8_t x887 = -1;
	volatile uint32_t x888 = UINT32_MAX;

    t110 = ((x885^x886)%(x887<=x888));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x893 = INT32_MAX;
	uint8_t x894 = UINT8_MAX;
	volatile int64_t x895 = INT64_MIN;
	uint8_t x896 = 1U;
	int32_t t111 = -57191;

    t111 = ((x893^x894)%(x895<=x896));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x905 = INT16_MIN;
	static int16_t x906 = INT16_MAX;
	int16_t x908 = -1;
	volatile int32_t t112 = 0;

    t112 = ((x905^x906)%(x907<=x908));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x913 = INT64_MIN;
	int16_t x914 = INT16_MIN;
	int16_t x915 = INT16_MAX;
	int64_t t113 = -7992LL;

    t113 = ((x913^x914)%(x915<=x916));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x921 = 16229LLU;
	int64_t x922 = 13393294505451702LL;
	volatile uint64_t t114 = 164LLU;

    t114 = ((x921^x922)%(x923<=x924));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x925 = -1;
	int8_t x927 = 0;
	uint64_t x928 = UINT64_MAX;
	static volatile int32_t t115 = -23307;

    t115 = ((x925^x926)%(x927<=x928));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x929 = INT8_MAX;
	uint8_t x930 = UINT8_MAX;
	int32_t x931 = INT32_MIN;
	int32_t x932 = INT32_MIN;
	static int32_t t116 = 10739;

    t116 = ((x929^x930)%(x931<=x932));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x935 = -3;
	volatile int8_t x936 = INT8_MAX;
	static volatile uint64_t t117 = 113999617LLU;

    t117 = ((x933^x934)%(x935<=x936));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x937 = 624;
	int8_t x938 = INT8_MIN;
	static int32_t x939 = INT32_MIN;
	volatile int16_t x940 = -1;
	int32_t t118 = 2;

    t118 = ((x937^x938)%(x939<=x940));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x945 = 4611724559398571242LLU;
	uint64_t x947 = 3LLU;
	int32_t x948 = 658452;
	volatile uint64_t t119 = 1858231LLU;

    t119 = ((x945^x946)%(x947<=x948));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x957 = INT8_MAX;
	uint8_t x958 = 0U;
	int32_t x959 = -2713556;
	uint16_t x960 = 0U;
	volatile int32_t t120 = 150562767;

    t120 = ((x957^x958)%(x959<=x960));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x961 = -5;
	volatile int8_t x963 = INT8_MIN;
	int8_t x964 = INT8_MIN;
	static int64_t t121 = 6558389692130051LL;

    t121 = ((x961^x962)%(x963<=x964));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x970 = 42686U;
	int64_t x971 = -1LL;
	volatile uint8_t x972 = UINT8_MAX;
	static volatile int64_t t122 = -83LL;

    t122 = ((x969^x970)%(x971<=x972));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x973 = UINT32_MAX;
	uint32_t x974 = 1222159282U;
	int16_t x976 = -1;

    t123 = ((x973^x974)%(x975<=x976));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x977 = INT16_MAX;
	int64_t x979 = INT64_MIN;
	static int8_t x980 = INT8_MAX;
	static int32_t t124 = -278497980;

    t124 = ((x977^x978)%(x979<=x980));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x981 = INT16_MIN;
	int8_t x983 = INT8_MIN;
	int8_t x984 = -1;
	static int64_t t125 = 2875498LL;

    t125 = ((x981^x982)%(x983<=x984));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x989 = 17U;
	volatile uint8_t x990 = 28U;
	static int16_t x991 = INT16_MIN;
	int64_t x992 = -1LL;
	volatile int32_t t126 = 204;

    t126 = ((x989^x990)%(x991<=x992));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x993 = INT64_MIN;
	int16_t x994 = INT16_MIN;
	uint64_t x995 = 698905542831970191LLU;
	static int64_t t127 = -47955345543LL;

    t127 = ((x993^x994)%(x995<=x996));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x1009 = INT32_MIN;
	int64_t x1010 = -74LL;
	volatile int64_t x1011 = INT64_MIN;
	uint16_t x1012 = 0U;
	int64_t t128 = -419163065351757866LL;

    t128 = ((x1009^x1010)%(x1011<=x1012));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x1013 = UINT32_MAX;
	uint32_t x1015 = 9769U;
	int8_t x1016 = -1;
	uint32_t t129 = 3U;

    t129 = ((x1013^x1014)%(x1015<=x1016));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x1021 = INT32_MIN;
	static volatile int64_t x1022 = INT64_MAX;
	static int16_t x1024 = -1;
	int64_t t130 = -152021369543566863LL;

    t130 = ((x1021^x1022)%(x1023<=x1024));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1026 = 36;
	int16_t x1027 = INT16_MAX;
	int32_t t131 = 3;

    t131 = ((x1025^x1026)%(x1027<=x1028));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x1029 = UINT8_MAX;
	int32_t x1032 = INT32_MAX;
	int32_t t132 = 1;

    t132 = ((x1029^x1030)%(x1031<=x1032));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x1041 = 3376U;
	volatile uint32_t x1043 = 94U;
	static uint16_t x1044 = UINT16_MAX;
	volatile uint32_t t133 = 85U;

    t133 = ((x1041^x1042)%(x1043<=x1044));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x1045 = -1;
	int64_t x1046 = 995602842517464LL;
	volatile uint64_t x1047 = 198LLU;
	int64_t x1048 = 160114116062698359LL;
	volatile int64_t t134 = 226195LL;

    t134 = ((x1045^x1046)%(x1047<=x1048));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x1057 = 0;
	int8_t x1058 = 6;
	volatile uint64_t x1059 = 827LLU;
	int8_t x1060 = -5;
	volatile int32_t t135 = 3068809;

    t135 = ((x1057^x1058)%(x1059<=x1060));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1062 = -1LL;
	int32_t x1063 = INT32_MIN;
	int8_t x1064 = INT8_MIN;
	static volatile int64_t t136 = -107081914129926870LL;

    t136 = ((x1061^x1062)%(x1063<=x1064));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x1066 = 3LLU;
	static uint32_t x1068 = 545311U;

    t137 = ((x1065^x1066)%(x1067<=x1068));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x1077 = -1;
	int8_t x1078 = INT8_MIN;
	int64_t x1079 = -58159907952014LL;
	uint16_t x1080 = 59U;
	volatile int32_t t138 = -5;

    t138 = ((x1077^x1078)%(x1079<=x1080));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x1082 = 14U;
	uint16_t x1083 = UINT16_MAX;
	int64_t x1084 = INT64_MAX;
	static int32_t t139 = -11222175;

    t139 = ((x1081^x1082)%(x1083<=x1084));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x1089 = 132U;
	int16_t x1091 = INT16_MIN;
	int64_t x1092 = -1LL;
	volatile int64_t t140 = 115451670838798LL;

    t140 = ((x1089^x1090)%(x1091<=x1092));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x1101 = INT8_MAX;
	int64_t x1102 = -1LL;
	uint32_t x1103 = 211U;
	uint32_t x1104 = 47163U;
	static volatile int64_t t141 = 3511687LL;

    t141 = ((x1101^x1102)%(x1103<=x1104));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1105 = INT8_MIN;
	int8_t x1106 = -1;
	int64_t x1107 = -5673652640408LL;
	volatile int32_t x1108 = -1;
	static volatile int32_t t142 = 2982;

    t142 = ((x1105^x1106)%(x1107<=x1108));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x1117 = -1LL;
	int64_t x1118 = -1LL;
	int16_t x1119 = INT16_MIN;
	volatile int16_t x1120 = INT16_MIN;
	volatile int64_t t143 = 1570635679879031924LL;

    t143 = ((x1117^x1118)%(x1119<=x1120));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x1121 = 2869737LLU;
	volatile uint64_t t144 = 18260251029810077LLU;

    t144 = ((x1121^x1122)%(x1123<=x1124));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1126 = INT8_MIN;
	int32_t x1127 = INT32_MIN;
	static int8_t x1128 = INT8_MAX;
	static volatile int64_t t145 = 1083840LL;

    t145 = ((x1125^x1126)%(x1127<=x1128));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x1139 = 0U;
	int32_t x1140 = INT32_MAX;
	volatile int64_t t146 = 19990558LL;

    t146 = ((x1137^x1138)%(x1139<=x1140));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x1145 = UINT8_MAX;
	int8_t x1146 = INT8_MIN;
	uint32_t x1147 = 46U;
	int16_t x1148 = INT16_MIN;
	int32_t t147 = -2;

    t147 = ((x1145^x1146)%(x1147<=x1148));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1149 = INT32_MIN;
	int64_t x1151 = -6671527399LL;
	volatile int16_t x1152 = -1;
	volatile int64_t t148 = 1679562LL;

    t148 = ((x1149^x1150)%(x1151<=x1152));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1153 = 10035886682LLU;
	int64_t x1155 = INT64_MIN;
	int8_t x1156 = INT8_MAX;
	static uint64_t t149 = 247578001LLU;

    t149 = ((x1153^x1154)%(x1155<=x1156));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1157 = -1;
	static int32_t x1158 = INT32_MIN;
	uint32_t x1159 = 2443569U;
	static int8_t x1160 = -1;
	int32_t t150 = 2981569;

    t150 = ((x1157^x1158)%(x1159<=x1160));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1161 = -1;
	uint8_t x1162 = UINT8_MAX;
	uint8_t x1164 = UINT8_MAX;
	int32_t t151 = 881667;

    t151 = ((x1161^x1162)%(x1163<=x1164));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1177 = 470032LLU;
	static int8_t x1180 = INT8_MAX;
	uint64_t t152 = 67876222LLU;

    t152 = ((x1177^x1178)%(x1179<=x1180));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint32_t x1181 = UINT32_MAX;
	uint64_t x1182 = 145649858542LLU;
	uint32_t x1183 = 916U;
	int16_t x1184 = INT16_MAX;
	volatile uint64_t t153 = 203LLU;

    t153 = ((x1181^x1182)%(x1183<=x1184));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1201 = 28165U;
	volatile int16_t x1203 = 590;
	volatile int32_t t154 = 4754;

    t154 = ((x1201^x1202)%(x1203<=x1204));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1205 = 71418;
	static int32_t x1206 = 13842;
	int8_t x1208 = INT8_MAX;

    t155 = ((x1205^x1206)%(x1207<=x1208));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x1226 = 1U;
	uint16_t x1228 = UINT16_MAX;
	volatile int32_t t156 = -22022;

    t156 = ((x1225^x1226)%(x1227<=x1228));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1237 = 0U;
	int16_t x1238 = 3;
	volatile int32_t t157 = -28356487;

    t157 = ((x1237^x1238)%(x1239<=x1240));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1242 = INT8_MAX;
	int32_t x1243 = INT32_MIN;
	int32_t x1244 = -446895;
	volatile int32_t t158 = 14702782;

    t158 = ((x1241^x1242)%(x1243<=x1244));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x1246 = UINT64_MAX;
	int64_t x1248 = INT64_MAX;
	uint64_t t159 = 9713053332986369LLU;

    t159 = ((x1245^x1246)%(x1247<=x1248));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1249 = UINT64_MAX;
	int32_t x1250 = -1;
	int32_t x1251 = -16542;
	uint16_t x1252 = 1644U;
	volatile uint64_t t160 = 301426551LLU;

    t160 = ((x1249^x1250)%(x1251<=x1252));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1257 = UINT32_MAX;
	int32_t x1259 = INT32_MIN;
	uint32_t x1260 = UINT32_MAX;
	volatile uint32_t t161 = 8898340U;

    t161 = ((x1257^x1258)%(x1259<=x1260));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x1261 = 2LLU;
	static volatile int32_t x1262 = INT32_MIN;
	uint16_t x1263 = UINT16_MAX;
	volatile uint64_t x1264 = 10792064LLU;
	volatile uint64_t t162 = 201389638542313LLU;

    t162 = ((x1261^x1262)%(x1263<=x1264));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1269 = 39274;
	volatile int16_t x1270 = INT16_MIN;
	int64_t x1271 = INT64_MIN;
	volatile int32_t t163 = -118835;

    t163 = ((x1269^x1270)%(x1271<=x1272));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1273 = UINT8_MAX;
	int16_t x1274 = INT16_MAX;
	uint64_t x1275 = 18748LLU;
	int8_t x1276 = -6;
	int32_t t164 = 18003610;

    t164 = ((x1273^x1274)%(x1275<=x1276));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1279 = INT8_MIN;
	int8_t x1280 = INT8_MIN;
	int32_t t165 = -713887667;

    t165 = ((x1277^x1278)%(x1279<=x1280));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1285 = -279;
	uint32_t x1286 = 11457914U;
	static int64_t x1287 = INT64_MIN;
	int32_t x1288 = INT32_MIN;
	volatile uint32_t t166 = 60841349U;

    t166 = ((x1285^x1286)%(x1287<=x1288));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1293 = INT32_MAX;
	volatile int16_t x1296 = INT16_MIN;

    t167 = ((x1293^x1294)%(x1295<=x1296));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1302 = 30133196535LLU;
	int32_t x1303 = -6504540;
	int64_t x1304 = -3LL;

    t168 = ((x1301^x1302)%(x1303<=x1304));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x1305 = INT8_MIN;
	int16_t x1306 = INT16_MIN;
	int32_t x1308 = 6327;
	volatile int32_t t169 = 57983890;

    t169 = ((x1305^x1306)%(x1307<=x1308));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x1317 = -1;
	int16_t x1319 = INT16_MIN;
	int8_t x1320 = INT8_MIN;
	uint32_t t170 = 4491U;

    t170 = ((x1317^x1318)%(x1319<=x1320));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1325 = -187748;
	uint8_t x1326 = UINT8_MAX;
	uint16_t x1328 = UINT16_MAX;

    t171 = ((x1325^x1326)%(x1327<=x1328));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1329 = 3U;
	uint16_t x1330 = UINT16_MAX;
	static uint8_t x1331 = 5U;
	volatile int32_t x1332 = 553742;

    t172 = ((x1329^x1330)%(x1331<=x1332));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x1333 = 1093592691453002LL;
	uint8_t x1334 = 26U;
	volatile int64_t x1335 = INT64_MIN;
	int16_t x1336 = INT16_MIN;
	static int64_t t173 = 8466921LL;

    t173 = ((x1333^x1334)%(x1335<=x1336));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x1337 = -1LL;
	int32_t x1338 = INT32_MIN;
	int8_t x1339 = INT8_MIN;
	uint8_t x1340 = UINT8_MAX;
	volatile int64_t t174 = -39968553393323685LL;

    t174 = ((x1337^x1338)%(x1339<=x1340));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x1342 = -1;
	volatile int64_t x1343 = -1LL;
	static uint8_t x1344 = UINT8_MAX;

    t175 = ((x1341^x1342)%(x1343<=x1344));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1345 = 1U;
	uint16_t x1346 = UINT16_MAX;
	static volatile int16_t x1347 = INT16_MIN;
	static int16_t x1348 = 20;
	int32_t t176 = -4;

    t176 = ((x1345^x1346)%(x1347<=x1348));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1349 = 2030U;
	int16_t x1350 = INT16_MAX;
	static int8_t x1351 = -1;
	int64_t x1352 = 35503690008595LL;
	int32_t t177 = -45;

    t177 = ((x1349^x1350)%(x1351<=x1352));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x1353 = INT16_MIN;
	volatile int16_t x1354 = INT16_MIN;
	uint64_t x1355 = UINT64_MAX;
	static volatile int32_t t178 = 108;

    t178 = ((x1353^x1354)%(x1355<=x1356));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x1358 = INT16_MIN;
	uint8_t x1359 = 34U;

    t179 = ((x1357^x1358)%(x1359<=x1360));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1377 = INT8_MIN;
	int16_t x1378 = INT16_MIN;
	volatile int64_t x1379 = 42LL;
	uint16_t x1380 = 4900U;
	volatile int32_t t180 = 115;

    t180 = ((x1377^x1378)%(x1379<=x1380));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1381 = UINT32_MAX;
	int8_t x1382 = INT8_MIN;
	static volatile int64_t x1384 = -1LL;
	volatile uint32_t t181 = 220U;

    t181 = ((x1381^x1382)%(x1383<=x1384));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1393 = 1;
	int16_t x1394 = -1;
	int16_t x1395 = 1638;
	static uint64_t x1396 = 648446623661501LLU;
	static int32_t t182 = 560147645;

    t182 = ((x1393^x1394)%(x1395<=x1396));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1405 = 13;
	int8_t x1407 = INT8_MIN;
	int64_t x1408 = -1LL;
	int32_t t183 = -681209480;

    t183 = ((x1405^x1406)%(x1407<=x1408));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1413 = INT32_MIN;
	volatile int64_t x1414 = INT64_MAX;
	static int8_t x1415 = -1;
	int64_t x1416 = -1LL;
	int64_t t184 = 1730978633964142010LL;

    t184 = ((x1413^x1414)%(x1415<=x1416));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1422 = -1;
	static uint8_t x1423 = 77U;
	uint16_t x1424 = 31396U;
	volatile int32_t t185 = -60;

    t185 = ((x1421^x1422)%(x1423<=x1424));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1437 = INT8_MIN;
	uint8_t x1438 = UINT8_MAX;
	static int16_t x1439 = INT16_MIN;
	static int32_t t186 = 2070664;

    t186 = ((x1437^x1438)%(x1439<=x1440));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1441 = 60072872965LLU;
	volatile int64_t x1442 = -1LL;
	uint64_t x1444 = UINT64_MAX;
	uint64_t t187 = 2491853LLU;

    t187 = ((x1441^x1442)%(x1443<=x1444));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1445 = INT64_MIN;
	static uint64_t x1446 = UINT64_MAX;
	int16_t x1447 = -1;
	volatile int64_t x1448 = -1LL;
	uint64_t t188 = 8641381366576051LLU;

    t188 = ((x1445^x1446)%(x1447<=x1448));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1449 = 7U;
	int32_t x1451 = INT32_MIN;
	int16_t x1452 = INT16_MIN;
	int32_t t189 = -65608;

    t189 = ((x1449^x1450)%(x1451<=x1452));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1471 = INT64_MIN;
	int16_t x1472 = INT16_MIN;
	static volatile int32_t t190 = -639;

    t190 = ((x1469^x1470)%(x1471<=x1472));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1473 = 2230306LLU;
	int8_t x1474 = INT8_MIN;
	static int8_t x1475 = INT8_MIN;
	static uint64_t t191 = 7409989242475726LLU;

    t191 = ((x1473^x1474)%(x1475<=x1476));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1489 = -1LL;
	static uint16_t x1490 = 158U;
	int32_t x1491 = -51889505;
	uint8_t x1492 = 6U;
	volatile int64_t t192 = -1354971245LL;

    t192 = ((x1489^x1490)%(x1491<=x1492));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1513 = -1;
	uint16_t x1514 = UINT16_MAX;
	uint64_t x1515 = 677792359749LLU;
	volatile int32_t t193 = 32;

    t193 = ((x1513^x1514)%(x1515<=x1516));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1521 = INT64_MIN;
	int16_t x1522 = INT16_MIN;
	int8_t x1523 = INT8_MIN;
	static int16_t x1524 = -1;
	volatile int64_t t194 = 1076960159666468LL;

    t194 = ((x1521^x1522)%(x1523<=x1524));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1529 = 2045916U;
	int16_t x1530 = -1;
	int16_t x1531 = 250;
	volatile uint32_t x1532 = UINT32_MAX;

    t195 = ((x1529^x1530)%(x1531<=x1532));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1534 = UINT16_MAX;
	int8_t x1535 = -5;
	volatile int32_t x1536 = INT32_MAX;
	volatile int32_t t196 = 182;

    t196 = ((x1533^x1534)%(x1535<=x1536));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1549 = -1;
	uint32_t x1550 = 198107U;
	volatile int32_t x1551 = INT32_MIN;
	uint8_t x1552 = UINT8_MAX;
	uint32_t t197 = 156438967U;

    t197 = ((x1549^x1550)%(x1551<=x1552));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1553 = -1;
	int8_t x1554 = 5;
	static uint64_t x1555 = 128LLU;
	volatile int32_t t198 = 17;

    t198 = ((x1553^x1554)%(x1555<=x1556));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1557 = INT16_MIN;
	uint32_t x1558 = 796097543U;
	int16_t x1559 = -20;
	int64_t x1560 = -1LL;
	uint32_t t199 = 254131U;

    t199 = ((x1557^x1558)%(x1559<=x1560));

    if (t199 != 0U) { NG(); } else { ; }
	
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

