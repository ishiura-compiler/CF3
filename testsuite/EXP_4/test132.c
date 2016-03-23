
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

static int64_t x38 = INT64_MIN;
static int32_t x42 = -1;
uint64_t x44 = 4281LLU;
uint32_t x72 = UINT32_MAX;
int64_t t10 = 0LL;
static uint64_t x96 = UINT64_MAX;
int64_t x100 = 1LL;
int8_t x102 = 4;
int32_t x103 = 4213;
int32_t t14 = -3104;
volatile uint32_t x113 = UINT32_MAX;
uint32_t t17 = 198U;
static int32_t x122 = 125814;
int64_t x124 = INT64_MAX;
int32_t t18 = 84450;
volatile int32_t x135 = INT32_MAX;
volatile uint16_t x137 = 122U;
uint8_t x138 = UINT8_MAX;
static int32_t t21 = 329698;
static uint64_t x154 = 14833934083078473LLU;
static int16_t x162 = -1;
uint64_t x187 = 9029472383LLU;
volatile uint16_t x193 = 15U;
volatile uint64_t x196 = 155267640765LLU;
int32_t x223 = -397624;
volatile uint16_t x224 = 2U;
uint32_t x261 = 927U;
int16_t x271 = INT16_MIN;
static int16_t x287 = 1802;
volatile int32_t x293 = 4;
int64_t x295 = INT64_MIN;
int8_t x345 = INT8_MAX;
volatile int32_t t40 = 111;
int32_t t42 = -44167;
int64_t x371 = -31LL;
static volatile int32_t t43 = -1;
uint16_t x373 = 0U;
volatile int32_t t44 = 293851984;
int32_t t45 = 1;
volatile int16_t x400 = -1;
int8_t x412 = 48;
int32_t t47 = 668434;
static uint64_t x413 = 544730121883LLU;
int16_t x426 = 24;
volatile int64_t x427 = INT64_MIN;
uint32_t x433 = 121U;
uint32_t t50 = 74354U;
uint64_t t52 = 17652060LLU;
int64_t x474 = 254139239034LL;
volatile int16_t x476 = -59;
static uint64_t t56 = 40245714LLU;
volatile int32_t x520 = -1;
volatile uint64_t x522 = UINT64_MAX;
int32_t t59 = 8;
int32_t t61 = -42152364;
volatile uint16_t x553 = UINT16_MAX;
uint16_t x562 = 4703U;
int8_t x565 = INT8_MAX;
volatile int8_t x587 = INT8_MIN;
uint32_t t70 = 96600900U;
uint16_t x618 = UINT16_MAX;
static volatile int8_t x634 = INT8_MAX;
volatile uint64_t t72 = 5528111486373966LLU;
int64_t x639 = INT64_MIN;
uint32_t x640 = 1529133U;
int32_t x654 = INT32_MIN;
int64_t t76 = -80662342LL;
static volatile uint64_t t77 = 1675601570LLU;
uint16_t x673 = UINT16_MAX;
volatile int16_t x674 = INT16_MAX;
uint64_t x675 = 2LLU;
static uint64_t x682 = 3546LLU;
volatile uint8_t x683 = 77U;
volatile uint32_t t81 = 1867193265U;
int16_t x694 = INT16_MIN;
int64_t x696 = -1LL;
int16_t x704 = -1;
uint32_t x714 = UINT32_MAX;
uint32_t x725 = 1U;
static int32_t t91 = -4803;
volatile uint16_t x763 = UINT16_MAX;
uint32_t x764 = 6488869U;
uint32_t x768 = UINT32_MAX;
volatile int32_t t93 = -437794759;
int64_t x769 = 3208164311685LL;
static int8_t x786 = -25;
uint64_t x808 = UINT64_MAX;
uint16_t x846 = 6U;
uint32_t x848 = 14922670U;
uint64_t x853 = 3681554221434054LLU;
volatile uint64_t t101 = 5LLU;
uint8_t x900 = 14U;
uint64_t x913 = UINT64_MAX;
static int16_t x916 = -1826;
volatile uint64_t t107 = UINT64_MAX;
int32_t x923 = INT32_MIN;
uint16_t x924 = 5U;
uint64_t x950 = UINT64_MAX;
int8_t x951 = -26;
static int32_t t111 = 7354380;
static uint32_t x1018 = UINT32_MAX;
int32_t t113 = 610;
uint64_t x1029 = 1155104314393LLU;
int16_t x1030 = 1;
uint64_t x1035 = 3455LLU;
int16_t x1070 = -30;
uint64_t t118 = 661LLU;
uint32_t x1101 = 13916000U;
int16_t x1102 = -4;
volatile uint16_t x1114 = UINT16_MAX;
static volatile int32_t x1116 = 9816;
volatile uint32_t t123 = UINT32_MAX;
int16_t x1138 = INT16_MIN;
int32_t t124 = INT32_MAX;
uint32_t x1161 = 241833074U;
volatile uint32_t t126 = 48493006U;
volatile uint16_t x1173 = 41U;
volatile uint32_t x1176 = 39849U;
volatile uint32_t x1181 = UINT32_MAX;
uint32_t x1185 = 1350U;
static int16_t x1186 = -1370;
uint64_t x1206 = UINT64_MAX;
static volatile uint32_t t134 = 65371U;
static volatile uint64_t t135 = 242LLU;
static int32_t x1229 = 191372878;
volatile int32_t t137 = -5575;
uint64_t x1246 = UINT64_MAX;
static uint64_t t138 = 8052501020LLU;
int16_t x1250 = INT16_MIN;
int8_t x1264 = -2;
volatile int8_t x1269 = INT8_MAX;
uint16_t x1270 = UINT16_MAX;
volatile int8_t x1320 = -1;
uint64_t x1326 = UINT64_MAX;
int32_t x1328 = -1;
volatile uint32_t t148 = UINT32_MAX;
int8_t x1350 = INT8_MIN;
volatile int32_t x1358 = INT32_MAX;
uint64_t x1360 = 295LLU;
uint64_t x1377 = 5430971097028895LLU;
static volatile uint64_t x1393 = 81887779LLU;
uint64_t x1403 = 130206498543645224LLU;
static volatile int16_t x1409 = 102;
uint64_t x1422 = 11639027LLU;
static volatile uint32_t t157 = 1265100U;
static uint64_t x1426 = UINT64_MAX;
volatile int32_t x1439 = -1;
int32_t t160 = -1;
int8_t x1448 = INT8_MIN;
volatile int32_t t161 = -165361445;
int32_t x1475 = INT32_MAX;
volatile uint32_t t164 = UINT32_MAX;
int8_t x1482 = INT8_MIN;
static int16_t x1483 = -1;
volatile uint64_t x1490 = 1297261LLU;
int16_t x1491 = -1;
int64_t x1493 = INT64_MAX;
int64_t t170 = 671104453LL;
volatile int8_t x1505 = 0;
uint8_t x1506 = UINT8_MAX;
int32_t t171 = -642392630;
uint32_t x1515 = UINT32_MAX;
int32_t x1516 = -35405;
int64_t x1520 = INT64_MIN;
static volatile uint16_t x1535 = UINT16_MAX;
uint16_t x1538 = 80U;
uint16_t x1539 = 782U;
int64_t x1564 = INT64_MAX;
int8_t x1574 = 3;
volatile uint32_t t180 = 437132U;
static int32_t x1582 = INT32_MIN;
int64_t x1588 = -1LL;
int8_t x1592 = INT8_MIN;
uint16_t x1601 = UINT16_MAX;
uint32_t x1603 = 868936834U;
int8_t x1604 = INT8_MIN;
int32_t t184 = 256449265;
static volatile int32_t t190 = -3228;
uint64_t x1635 = 125356086140716431LLU;
int8_t x1646 = INT8_MIN;
int16_t x1647 = INT16_MAX;
volatile uint16_t x1649 = UINT16_MAX;
uint32_t x1658 = UINT32_MAX;
static volatile int32_t x1660 = INT32_MAX;
volatile int32_t t195 = 36213283;
static uint16_t x1675 = 1U;
int8_t x1694 = INT8_MIN;
uint8_t x1708 = 2U;


void f0(void) {
    	volatile int32_t x1 = 314;
	int16_t x2 = 8924;
	volatile int8_t x3 = INT8_MIN;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = 206765592;

    t0 = (x1<<(x2<=(x3+x4)));

    if (t0 != 628) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 284604995416LLU;
	volatile int32_t x10 = -23;
	uint64_t x11 = UINT64_MAX;
	static int32_t x12 = INT32_MIN;
	volatile uint64_t t1 = 437093020LLU;

    t1 = (x9<<(x10<=(x11+x12)));

    if (t1 != 284604995416LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x37 = INT32_MAX;
	volatile int16_t x39 = INT16_MAX;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t2 = INT32_MAX;

    t2 = (x37<<(x38<=(x39+x40)));

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x41 = UINT8_MAX;
	volatile int16_t x43 = 1;
	static int32_t t3 = -27208;

    t3 = (x41<<(x42<=(x43+x44)));

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x45 = 1012006486U;
	uint32_t x46 = UINT32_MAX;
	volatile uint16_t x47 = 76U;
	int32_t x48 = INT32_MIN;
	volatile uint32_t t4 = 19974U;

    t4 = (x45<<(x46<=(x47+x48)));

    if (t4 != 1012006486U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x53 = INT8_MAX;
	volatile int32_t x54 = 48262;
	int64_t x55 = -1LL;
	static uint32_t x56 = UINT32_MAX;
	volatile int32_t t5 = 36;

    t5 = (x53<<(x54<=(x55+x56)));

    if (t5 != 254) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x57 = 3760LL;
	static uint8_t x58 = 1U;
	int32_t x59 = -1;
	int16_t x60 = INT16_MIN;
	int64_t t6 = 166761599306068025LL;

    t6 = (x57<<(x58<=(x59+x60)));

    if (t6 != 3760LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x61 = UINT64_MAX;
	uint8_t x62 = 10U;
	int16_t x63 = 2;
	uint8_t x64 = UINT8_MAX;
	volatile uint64_t t7 = 3845LLU;

    t7 = (x61<<(x62<=(x63+x64)));

    if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x69 = 234U;
	static int64_t x70 = INT64_MAX;
	uint32_t x71 = 20612U;
	uint32_t t8 = 27849U;

    t8 = (x69<<(x70<=(x71+x72)));

    if (t8 != 234U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x77 = 463768161894966906LL;
	volatile uint8_t x78 = 62U;
	int8_t x79 = -1;
	uint16_t x80 = 15U;
	volatile int64_t t9 = -25549LL;

    t9 = (x77<<(x78<=(x79+x80)));

    if (t9 != 463768161894966906LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x81 = 1518LL;
	int64_t x82 = INT64_MAX;
	volatile int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MAX;

    t10 = (x81<<(x82<=(x83+x84)));

    if (t10 != 1518LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x85 = UINT8_MAX;
	volatile uint16_t x86 = 85U;
	int8_t x87 = -12;
	uint16_t x88 = UINT16_MAX;
	static volatile int32_t t11 = 322805457;

    t11 = (x85<<(x86<=(x87+x88)));

    if (t11 != 510) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x93 = 1040;
	static int32_t x94 = -1;
	uint16_t x95 = UINT16_MAX;
	int32_t t12 = -1;

    t12 = (x93<<(x94<=(x95+x96)));

    if (t12 != 1040) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x97 = UINT64_MAX;
	int64_t x98 = INT64_MAX;
	uint16_t x99 = UINT16_MAX;
	volatile uint64_t t13 = UINT64_MAX;

    t13 = (x97<<(x98<=(x99+x100)));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x101 = INT8_MAX;
	int32_t x104 = -14057;

    t14 = (x101<<(x102<=(x103+x104)));

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x109 = INT16_MAX;
	int16_t x110 = 238;
	volatile int16_t x111 = -1;
	static volatile int16_t x112 = 11349;
	static int32_t t15 = 22250;

    t15 = (x109<<(x110<=(x111+x112)));

    if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x114 = 45015502LLU;
	static int8_t x115 = INT8_MAX;
	volatile uint32_t x116 = UINT32_MAX;
	uint32_t t16 = UINT32_MAX;

    t16 = (x113<<(x114<=(x115+x116)));

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x117 = 499U;
	static int8_t x118 = 0;
	volatile int64_t x119 = INT64_MAX;
	int8_t x120 = 0;

    t17 = (x117<<(x118<=(x119+x120)));

    if (t17 != 998U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x121 = 0U;
	int16_t x123 = INT16_MIN;

    t18 = (x121<<(x122<=(x123+x124)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x125 = UINT32_MAX;
	uint64_t x126 = 1043734668636815LLU;
	uint64_t x127 = UINT64_MAX;
	uint64_t x128 = 300LLU;
	static volatile uint32_t t19 = UINT32_MAX;

    t19 = (x125<<(x126<=(x127+x128)));

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x133 = UINT32_MAX;
	int16_t x134 = 1714;
	int8_t x136 = 0;
	volatile uint32_t t20 = 67160U;

    t20 = (x133<<(x134<=(x135+x136)));

    if (t20 != 4294967294U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x139 = -1;
	int16_t x140 = INT16_MAX;

    t21 = (x137<<(x138<=(x139+x140)));

    if (t21 != 244) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x153 = UINT64_MAX;
	static volatile int16_t x155 = INT16_MIN;
	int8_t x156 = 1;
	uint64_t t22 = 103508LLU;

    t22 = (x153<<(x154<=(x155+x156)));

    if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x161 = INT16_MAX;
	int64_t x163 = 1141285759050LL;
	int16_t x164 = -1;
	int32_t t23 = 1169063;

    t23 = (x161<<(x162<=(x163+x164)));

    if (t23 != 65534) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MIN;
	int32_t x188 = INT32_MIN;
	volatile uint32_t t24 = UINT32_MAX;

    t24 = (x185<<(x186<=(x187+x188)));

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x189 = INT16_MAX;
	uint8_t x190 = UINT8_MAX;
	volatile int16_t x191 = INT16_MAX;
	volatile uint16_t x192 = 0U;
	volatile int32_t t25 = 59358131;

    t25 = (x189<<(x190<=(x191+x192)));

    if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x194 = 7U;
	uint8_t x195 = 5U;
	volatile int32_t t26 = 1204;

    t26 = (x193<<(x194<=(x195+x196)));

    if (t26 != 30) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x221 = 3433993186165383530LL;
	static int16_t x222 = INT16_MIN;
	int64_t t27 = -48240655512935517LL;

    t27 = (x221<<(x222<=(x223+x224)));

    if (t27 != 3433993186165383530LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x225 = INT8_MAX;
	int16_t x226 = 1;
	uint8_t x227 = 99U;
	uint32_t x228 = UINT32_MAX;
	static int32_t t28 = 16555651;

    t28 = (x225<<(x226<=(x227+x228)));

    if (t28 != 254) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x245 = 6546U;
	uint16_t x246 = UINT16_MAX;
	volatile int8_t x247 = -1;
	uint64_t x248 = 5108673076536LLU;
	static volatile int32_t t29 = 53;

    t29 = (x245<<(x246<=(x247+x248)));

    if (t29 != 13092) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x262 = INT32_MIN;
	volatile int32_t x263 = 3504;
	static uint8_t x264 = 24U;
	uint32_t t30 = 454697407U;

    t30 = (x261<<(x262<=(x263+x264)));

    if (t30 != 1854U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x265 = UINT64_MAX;
	int8_t x266 = INT8_MIN;
	uint64_t x267 = 206913LLU;
	int64_t x268 = -14897098624LL;
	uint64_t t31 = UINT64_MAX;

    t31 = (x265<<(x266<=(x267+x268)));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x269 = 4375201LLU;
	static uint32_t x270 = 6958U;
	volatile uint8_t x272 = UINT8_MAX;
	uint64_t t32 = 183LLU;

    t32 = (x269<<(x270<=(x271+x272)));

    if (t32 != 8750402LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x285 = 0U;
	static int8_t x286 = -1;
	int32_t x288 = 0;
	int32_t t33 = -50945;

    t33 = (x285<<(x286<=(x287+x288)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x294 = -88485499;
	uint32_t x296 = 0U;
	volatile int32_t t34 = 5;

    t34 = (x293<<(x294<=(x295+x296)));

    if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x313 = 1;
	int8_t x314 = INT8_MAX;
	static int8_t x315 = INT8_MAX;
	static int8_t x316 = -14;
	int32_t t35 = 478;

    t35 = (x313<<(x314<=(x315+x316)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x317 = 3U;
	uint32_t x318 = UINT32_MAX;
	uint64_t x319 = UINT64_MAX;
	uint16_t x320 = UINT16_MAX;
	int32_t t36 = -51860127;

    t36 = (x317<<(x318<=(x319+x320)));

    if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x325 = INT32_MAX;
	int32_t x326 = INT32_MAX;
	int64_t x327 = -98LL;
	int8_t x328 = INT8_MAX;
	volatile int32_t t37 = INT32_MAX;

    t37 = (x325<<(x326<=(x327+x328)));

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x337 = 42U;
	int16_t x338 = -123;
	int64_t x339 = 71590710519768LL;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t38 = 38;

    t38 = (x337<<(x338<=(x339+x340)));

    if (t38 != 84) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x341 = 44;
	static int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MAX;
	static volatile uint8_t x344 = 54U;
	int32_t t39 = -1638042;

    t39 = (x341<<(x342<=(x343+x344)));

    if (t39 != 88) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x346 = 995U;
	static uint16_t x347 = 868U;
	int16_t x348 = -1;

    t40 = (x345<<(x346<=(x347+x348)));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x353 = INT64_MAX;
	int8_t x354 = 1;
	int32_t x355 = -1;
	int64_t x356 = -1LL;
	volatile int64_t t41 = INT64_MAX;

    t41 = (x353<<(x354<=(x355+x356)));

    if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x357 = 12U;
	volatile uint8_t x358 = 58U;
	int32_t x359 = INT32_MAX;
	uint64_t x360 = 68926715381764871LLU;

    t42 = (x357<<(x358<=(x359+x360)));

    if (t42 != 24) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x369 = INT8_MAX;
	uint8_t x370 = UINT8_MAX;
	static volatile int16_t x372 = INT16_MIN;

    t43 = (x369<<(x370<=(x371+x372)));

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x374 = INT64_MIN;
	static int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MAX;

    t44 = (x373<<(x374<=(x375+x376)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x389 = 2U;
	static int32_t x390 = 57251;
	volatile uint64_t x391 = 50688613468LLU;
	int32_t x392 = -1;

    t45 = (x389<<(x390<=(x391+x392)));

    if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x397 = 1766255378153158LL;
	static int8_t x398 = 1;
	static uint32_t x399 = 127150U;
	volatile int64_t t46 = -24LL;

    t46 = (x397<<(x398<=(x399+x400)));

    if (t46 != 3532510756306316LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x409 = 4;
	uint32_t x410 = 21406453U;
	int16_t x411 = 8759;

    t47 = (x409<<(x410<=(x411+x412)));

    if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x414 = INT32_MIN;
	static int8_t x415 = 32;
	uint16_t x416 = UINT16_MAX;
	static uint64_t t48 = 2761747564LLU;

    t48 = (x413<<(x414<=(x415+x416)));

    if (t48 != 1089460243766LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x425 = INT32_MAX;
	uint8_t x428 = 0U;
	int32_t t49 = INT32_MAX;

    t49 = (x425<<(x426<=(x427+x428)));

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x434 = -11798LL;
	volatile int64_t x435 = -334143971457699565LL;
	static int64_t x436 = INT64_MAX;

    t50 = (x433<<(x434<=(x435+x436)));

    if (t50 != 242U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x437 = INT16_MAX;
	int16_t x438 = 730;
	uint64_t x439 = UINT64_MAX;
	uint16_t x440 = 2U;
	int32_t t51 = -256018030;

    t51 = (x437<<(x438<=(x439+x440)));

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x453 = UINT64_MAX;
	volatile int8_t x454 = -1;
	int8_t x455 = 1;
	static volatile uint16_t x456 = UINT16_MAX;

    t52 = (x453<<(x454<=(x455+x456)));

    if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x457 = 272897222287LL;
	int64_t x458 = 26768715617237840LL;
	uint64_t x459 = 550983933LLU;
	volatile int32_t x460 = INT32_MIN;
	static volatile int64_t t53 = 2462246893LL;

    t53 = (x457<<(x458<=(x459+x460)));

    if (t53 != 545794444574LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x465 = 2;
	static int64_t x466 = -929LL;
	static int64_t x467 = 31511032340444LL;
	uint32_t x468 = 198510U;
	int32_t t54 = -289;

    t54 = (x465<<(x466<=(x467+x468)));

    if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x473 = 31359U;
	static int32_t x475 = -1;
	uint32_t t55 = 105035U;

    t55 = (x473<<(x474<=(x475+x476)));

    if (t55 != 31359U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x509 = 43875193744344034LLU;
	volatile int16_t x510 = INT16_MIN;
	int16_t x511 = INT16_MAX;
	uint16_t x512 = 1715U;

    t56 = (x509<<(x510<=(x511+x512)));

    if (t56 != 87750387488688068LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x517 = 4U;
	int32_t x518 = -6;
	int8_t x519 = -1;
	static volatile uint32_t t57 = 8334228U;

    t57 = (x517<<(x518<=(x519+x520)));

    if (t57 != 8U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x521 = 4113145036828918586LLU;
	int8_t x523 = INT8_MAX;
	int8_t x524 = -20;
	static volatile uint64_t t58 = 47894161600583811LLU;

    t58 = (x521<<(x522<=(x523+x524)));

    if (t58 != 4113145036828918586LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x529 = UINT16_MAX;
	int8_t x530 = 45;
	uint32_t x531 = 10232U;
	int16_t x532 = INT16_MAX;

    t59 = (x529<<(x530<=(x531+x532)));

    if (t59 != 131070) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x533 = 4992;
	int8_t x534 = -1;
	volatile int16_t x535 = INT16_MIN;
	int32_t x536 = INT32_MAX;
	int32_t t60 = 2450;

    t60 = (x533<<(x534<=(x535+x536)));

    if (t60 != 9984) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x537 = 455;
	uint64_t x538 = 113886807643LLU;
	uint32_t x539 = 1757U;
	int8_t x540 = -1;

    t61 = (x537<<(x538<=(x539+x540)));

    if (t61 != 455) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x554 = 5720266548892664156LLU;
	uint64_t x555 = UINT64_MAX;
	int64_t x556 = -27293673LL;
	static volatile int32_t t62 = -131861089;

    t62 = (x553<<(x554<=(x555+x556)));

    if (t62 != 131070) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x557 = UINT32_MAX;
	int8_t x558 = INT8_MIN;
	uint64_t x559 = 23LLU;
	int64_t x560 = -1LL;
	volatile uint32_t t63 = UINT32_MAX;

    t63 = (x557<<(x558<=(x559+x560)));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x561 = INT64_MAX;
	volatile uint16_t x563 = 14U;
	int8_t x564 = INT8_MAX;
	int64_t t64 = INT64_MAX;

    t64 = (x561<<(x562<=(x563+x564)));

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x566 = 13U;
	int16_t x567 = INT16_MIN;
	int64_t x568 = INT64_MAX;
	static volatile int32_t t65 = 1707417;

    t65 = (x565<<(x566<=(x567+x568)));

    if (t65 != 254) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x573 = INT8_MAX;
	int32_t x574 = -1;
	static int8_t x575 = 30;
	int16_t x576 = -1;
	int32_t t66 = -324262;

    t66 = (x573<<(x574<=(x575+x576)));

    if (t66 != 254) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x585 = 9091704123648203LL;
	int16_t x586 = 13558;
	static int16_t x588 = INT16_MAX;
	int64_t t67 = 387830010544917977LL;

    t67 = (x585<<(x586<=(x587+x588)));

    if (t67 != 18183408247296406LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x601 = 303;
	int8_t x602 = INT8_MIN;
	int32_t x603 = -1;
	static volatile int64_t x604 = -5LL;
	volatile int32_t t68 = -1;

    t68 = (x601<<(x602<=(x603+x604)));

    if (t68 != 606) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x605 = 2U;
	uint64_t x606 = 1552015887283501LLU;
	int16_t x607 = -1;
	int8_t x608 = INT8_MIN;
	int32_t t69 = -3200;

    t69 = (x605<<(x606<=(x607+x608)));

    if (t69 != 4) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x609 = 93401297U;
	volatile uint8_t x610 = 55U;
	int32_t x611 = -1;
	volatile int32_t x612 = 6;

    t70 = (x609<<(x610<=(x611+x612)));

    if (t70 != 93401297U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x617 = 6U;
	int16_t x619 = INT16_MIN;
	int8_t x620 = -6;
	int32_t t71 = -7;

    t71 = (x617<<(x618<=(x619+x620)));

    if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x633 = 835895LLU;
	uint64_t x635 = 465284513366660LLU;
	static uint16_t x636 = 29U;

    t72 = (x633<<(x634<=(x635+x636)));

    if (t72 != 1671790LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x637 = UINT16_MAX;
	int16_t x638 = INT16_MIN;
	volatile int32_t t73 = -250323947;

    t73 = (x637<<(x638<=(x639+x640)));

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x645 = 299496LL;
	int64_t x646 = -1LL;
	int16_t x647 = -247;
	static uint16_t x648 = 11U;
	int64_t t74 = 21106093583087713LL;

    t74 = (x645<<(x646<=(x647+x648)));

    if (t74 != 299496LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x649 = 14U;
	int8_t x650 = -1;
	int64_t x651 = -424431060400049LL;
	volatile int64_t x652 = INT64_MAX;
	volatile int32_t t75 = 6;

    t75 = (x649<<(x650<=(x651+x652)));

    if (t75 != 28) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x653 = 119383LL;
	int64_t x655 = -1LL;
	int64_t x656 = INT64_MAX;

    t76 = (x653<<(x654<=(x655+x656)));

    if (t76 != 238766LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x665 = 164850749012217LLU;
	int16_t x666 = 0;
	int32_t x667 = -6099;
	uint16_t x668 = 18U;

    t77 = (x665<<(x666<=(x667+x668)));

    if (t77 != 164850749012217LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x669 = INT8_MAX;
	static int64_t x670 = 20042597479LL;
	volatile int8_t x671 = INT8_MIN;
	uint16_t x672 = 20U;
	volatile int32_t t78 = 3759;

    t78 = (x669<<(x670<=(x671+x672)));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x676 = -27;
	int32_t t79 = 526640974;

    t79 = (x673<<(x674<=(x675+x676)));

    if (t79 != 131070) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x681 = 22U;
	static int16_t x684 = INT16_MIN;
	int32_t t80 = 18287;

    t80 = (x681<<(x682<=(x683+x684)));

    if (t80 != 44) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x689 = 152039198U;
	int32_t x690 = INT32_MIN;
	volatile uint32_t x691 = 21411U;
	int32_t x692 = 2995;

    t81 = (x689<<(x690<=(x691+x692)));

    if (t81 != 152039198U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x693 = 257091353LL;
	int64_t x695 = -2LL;
	int64_t t82 = -1090LL;

    t82 = (x693<<(x694<=(x695+x696)));

    if (t82 != 514182706LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x697 = 206282U;
	int64_t x698 = 369703304265LL;
	static int8_t x699 = INT8_MIN;
	int16_t x700 = INT16_MIN;
	volatile uint32_t t83 = 278U;

    t83 = (x697<<(x698<=(x699+x700)));

    if (t83 != 206282U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x701 = 6;
	int32_t x702 = -2;
	uint8_t x703 = 3U;
	volatile int32_t t84 = -45317832;

    t84 = (x701<<(x702<=(x703+x704)));

    if (t84 != 12) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x713 = 522U;
	static volatile uint8_t x715 = UINT8_MAX;
	int64_t x716 = INT64_MIN;
	volatile int32_t t85 = 3;

    t85 = (x713<<(x714<=(x715+x716)));

    if (t85 != 522) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x726 = 652LL;
	int8_t x727 = 36;
	int16_t x728 = INT16_MAX;
	volatile uint32_t t86 = 106924292U;

    t86 = (x725<<(x726<=(x727+x728)));

    if (t86 != 2U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x729 = UINT32_MAX;
	int64_t x730 = -1LL;
	volatile int64_t x731 = 3910LL;
	int16_t x732 = 0;
	static volatile uint32_t t87 = 1U;

    t87 = (x729<<(x730<=(x731+x732)));

    if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x737 = 29239;
	uint64_t x738 = UINT64_MAX;
	uint64_t x739 = 21700388901LLU;
	int8_t x740 = 2;
	volatile int32_t t88 = 253;

    t88 = (x737<<(x738<=(x739+x740)));

    if (t88 != 29239) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	int64_t x742 = INT64_MIN;
	int32_t x743 = 70493;
	int64_t x744 = INT64_MIN;
	volatile uint32_t t89 = 70496U;

    t89 = (x741<<(x742<=(x743+x744)));

    if (t89 != 4294967294U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x753 = 10297138;
	int32_t x754 = INT32_MIN;
	static uint64_t x755 = 2547875876655808101LLU;
	int8_t x756 = -1;
	volatile int32_t t90 = -47;

    t90 = (x753<<(x754<=(x755+x756)));

    if (t90 != 10297138) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x757 = UINT8_MAX;
	uint64_t x758 = 10875LLU;
	uint8_t x759 = 10U;
	int16_t x760 = -1;

    t91 = (x757<<(x758<=(x759+x760)));

    if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x761 = INT16_MAX;
	int64_t x762 = -1LL;
	volatile int32_t t92 = -221452884;

    t92 = (x761<<(x762<=(x763+x764)));

    if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x765 = 57U;
	int32_t x766 = -4147043;
	volatile int8_t x767 = INT8_MIN;

    t93 = (x765<<(x766<=(x767+x768)));

    if (t93 != 114) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x770 = 40U;
	int32_t x771 = 153060825;
	volatile uint32_t x772 = 14U;
	int64_t t94 = 294642832LL;

    t94 = (x769<<(x770<=(x771+x772)));

    if (t94 != 6416328623370LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x785 = UINT16_MAX;
	int16_t x787 = 1095;
	int16_t x788 = -1140;
	int32_t t95 = -26233351;

    t95 = (x785<<(x786<=(x787+x788)));

    if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x805 = INT16_MAX;
	static volatile uint32_t x806 = UINT32_MAX;
	static int16_t x807 = INT16_MIN;
	int32_t t96 = 817249488;

    t96 = (x805<<(x806<=(x807+x808)));

    if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x809 = 38;
	int32_t x810 = INT32_MIN;
	static uint8_t x811 = 2U;
	uint8_t x812 = 0U;
	int32_t t97 = -284818;

    t97 = (x809<<(x810<=(x811+x812)));

    if (t97 != 76) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x825 = 5;
	int32_t x826 = 84170614;
	static volatile int16_t x827 = INT16_MAX;
	int32_t x828 = INT32_MIN;
	volatile int32_t t98 = -1707047;

    t98 = (x825<<(x826<=(x827+x828)));

    if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x833 = 3;
	static int64_t x834 = -1LL;
	int8_t x835 = INT8_MIN;
	static uint32_t x836 = UINT32_MAX;
	static int32_t t99 = -80639;

    t99 = (x833<<(x834<=(x835+x836)));

    if (t99 != 6) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x845 = UINT16_MAX;
	int32_t x847 = INT32_MIN;
	volatile int32_t t100 = 78;

    t100 = (x845<<(x846<=(x847+x848)));

    if (t100 != 131070) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x854 = 9918241990487941LLU;
	int8_t x855 = -10;
	static volatile uint16_t x856 = UINT16_MAX;

    t101 = (x853<<(x854<=(x855+x856)));

    if (t101 != 3681554221434054LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x865 = UINT8_MAX;
	volatile uint64_t x866 = 40595413222004LLU;
	static volatile uint8_t x867 = 3U;
	uint16_t x868 = 2U;
	int32_t t102 = 99;

    t102 = (x865<<(x866<=(x867+x868)));

    if (t102 != 255) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x881 = 72U;
	uint64_t x882 = UINT64_MAX;
	static int16_t x883 = INT16_MAX;
	int32_t x884 = INT32_MIN;
	static volatile int32_t t103 = -2;

    t103 = (x881<<(x882<=(x883+x884)));

    if (t103 != 72) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x897 = INT64_MAX;
	int8_t x898 = INT8_MAX;
	volatile uint32_t x899 = UINT32_MAX;
	int64_t t104 = INT64_MAX;

    t104 = (x897<<(x898<=(x899+x900)));

    if (t104 != INT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x901 = UINT8_MAX;
	int8_t x902 = INT8_MAX;
	volatile int8_t x903 = -1;
	int8_t x904 = 1;
	int32_t t105 = 0;

    t105 = (x901<<(x902<=(x903+x904)));

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x909 = INT16_MAX;
	uint16_t x910 = 88U;
	uint32_t x911 = 0U;
	int32_t x912 = INT32_MIN;
	int32_t t106 = 97766;

    t106 = (x909<<(x910<=(x911+x912)));

    if (t106 != 65534) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x914 = INT8_MAX;
	volatile uint16_t x915 = 332U;

    t107 = (x913<<(x914<=(x915+x916)));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x921 = UINT8_MAX;
	int16_t x922 = INT16_MIN;
	volatile int32_t t108 = 0;

    t108 = (x921<<(x922<=(x923+x924)));

    if (t108 != 255) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x949 = UINT8_MAX;
	int64_t x952 = 117LL;
	int32_t t109 = 266675342;

    t109 = (x949<<(x950<=(x951+x952)));

    if (t109 != 255) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x985 = 132827206;
	int32_t x986 = INT32_MAX;
	int32_t x987 = 16;
	int8_t x988 = INT8_MIN;
	int32_t t110 = -1;

    t110 = (x985<<(x986<=(x987+x988)));

    if (t110 != 132827206) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x1005 = 486;
	static volatile int16_t x1006 = INT16_MIN;
	int64_t x1007 = 1478862511593LL;
	int32_t x1008 = -1;

    t111 = (x1005<<(x1006<=(x1007+x1008)));

    if (t111 != 972) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x1009 = INT64_MAX;
	volatile uint32_t x1010 = 1764740828U;
	uint64_t x1011 = 1342990LLU;
	int16_t x1012 = -1;
	int64_t t112 = INT64_MAX;

    t112 = (x1009<<(x1010<=(x1011+x1012)));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x1017 = UINT8_MAX;
	volatile int8_t x1019 = -1;
	uint16_t x1020 = 151U;

    t113 = (x1017<<(x1018<=(x1019+x1020)));

    if (t113 != 255) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x1025 = 0;
	static volatile uint16_t x1026 = 1U;
	volatile int32_t x1027 = -1;
	volatile uint32_t x1028 = 35444U;
	int32_t t114 = -12631;

    t114 = (x1025<<(x1026<=(x1027+x1028)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x1031 = 825U;
	volatile int32_t x1032 = -1;
	static uint64_t t115 = 330397267LLU;

    t115 = (x1029<<(x1030<=(x1031+x1032)));

    if (t115 != 2310208628786LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x1033 = 11U;
	uint16_t x1034 = 3968U;
	static uint16_t x1036 = 22U;
	volatile int32_t t116 = 795687;

    t116 = (x1033<<(x1034<=(x1035+x1036)));

    if (t116 != 11) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x1069 = 2U;
	volatile int8_t x1071 = 26;
	volatile uint16_t x1072 = 27U;
	volatile int32_t t117 = -394379;

    t117 = (x1069<<(x1070<=(x1071+x1072)));

    if (t117 != 4) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x1077 = 52739728943LLU;
	volatile uint64_t x1078 = 634LLU;
	int8_t x1079 = -1;
	int16_t x1080 = -1;

    t118 = (x1077<<(x1078<=(x1079+x1080)));

    if (t118 != 105479457886LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x1089 = UINT16_MAX;
	static uint32_t x1090 = 129U;
	int16_t x1091 = -16066;
	uint64_t x1092 = 332093244451LLU;
	volatile int32_t t119 = 1;

    t119 = (x1089<<(x1090<=(x1091+x1092)));

    if (t119 != 131070) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x1093 = INT16_MAX;
	int8_t x1094 = INT8_MIN;
	static int16_t x1095 = INT16_MIN;
	uint32_t x1096 = 1979U;
	int32_t t120 = -1465;

    t120 = (x1093<<(x1094<=(x1095+x1096)));

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x1103 = INT8_MIN;
	int8_t x1104 = 1;
	volatile uint32_t t121 = 63393659U;

    t121 = (x1101<<(x1102<=(x1103+x1104)));

    if (t121 != 13916000U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x1113 = INT64_MAX;
	static uint8_t x1115 = 94U;
	int64_t t122 = INT64_MAX;

    t122 = (x1113<<(x1114<=(x1115+x1116)));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x1125 = UINT32_MAX;
	int8_t x1126 = -3;
	int64_t x1127 = INT64_MAX;
	uint64_t x1128 = 742081LLU;

    t123 = (x1125<<(x1126<=(x1127+x1128)));

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x1137 = INT32_MAX;
	int8_t x1139 = INT8_MIN;
	volatile int64_t x1140 = -19452412618520375LL;

    t124 = (x1137<<(x1138<=(x1139+x1140)));

    if (t124 != INT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x1157 = UINT32_MAX;
	static volatile int16_t x1158 = -117;
	uint32_t x1159 = 1416442U;
	uint8_t x1160 = UINT8_MAX;
	static volatile uint32_t t125 = UINT32_MAX;

    t125 = (x1157<<(x1158<=(x1159+x1160)));

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x1162 = 3102436677401LLU;
	volatile int64_t x1163 = 11594435226753962LL;
	static int16_t x1164 = INT16_MAX;

    t126 = (x1161<<(x1162<=(x1163+x1164)));

    if (t126 != 483666148U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x1165 = 0U;
	int32_t x1166 = -3;
	uint32_t x1167 = UINT32_MAX;
	uint32_t x1168 = UINT32_MAX;
	volatile int32_t t127 = -2;

    t127 = (x1165<<(x1166<=(x1167+x1168)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x1174 = -1LL;
	int32_t x1175 = -1;
	volatile int32_t t128 = 8498257;

    t128 = (x1173<<(x1174<=(x1175+x1176)));

    if (t128 != 82) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x1182 = INT16_MIN;
	uint32_t x1183 = 87885U;
	int32_t x1184 = 98;
	static uint32_t t129 = UINT32_MAX;

    t129 = (x1181<<(x1182<=(x1183+x1184)));

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1187 = -1;
	volatile int16_t x1188 = INT16_MAX;
	uint32_t t130 = 2371295U;

    t130 = (x1185<<(x1186<=(x1187+x1188)));

    if (t130 != 2700U) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x1193 = 4761533LLU;
	int64_t x1194 = -1843LL;
	uint32_t x1195 = UINT32_MAX;
	static uint64_t x1196 = 248LLU;
	volatile uint64_t t131 = 91351LLU;

    t131 = (x1193<<(x1194<=(x1195+x1196)));

    if (t131 != 4761533LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x1205 = INT64_MAX;
	static volatile uint64_t x1207 = 53LLU;
	uint32_t x1208 = 218666410U;
	volatile int64_t t132 = INT64_MAX;

    t132 = (x1205<<(x1206<=(x1207+x1208)));

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x1213 = INT8_MAX;
	static int8_t x1214 = INT8_MIN;
	volatile uint64_t x1215 = 209736910501085292LLU;
	int16_t x1216 = -904;
	int32_t t133 = 7564535;

    t133 = (x1213<<(x1214<=(x1215+x1216)));

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x1221 = 55U;
	int8_t x1222 = INT8_MIN;
	uint16_t x1223 = 1U;
	int32_t x1224 = INT32_MIN;

    t134 = (x1221<<(x1222<=(x1223+x1224)));

    if (t134 != 55U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x1225 = 1214LLU;
	uint32_t x1226 = 7U;
	uint8_t x1227 = 55U;
	static int32_t x1228 = 2059338;

    t135 = (x1225<<(x1226<=(x1227+x1228)));

    if (t135 != 2428LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x1230 = -187;
	int16_t x1231 = -1;
	int8_t x1232 = 0;
	volatile int32_t t136 = -1;

    t136 = (x1229<<(x1230<=(x1231+x1232)));

    if (t136 != 382745756) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x1237 = UINT8_MAX;
	int8_t x1238 = -14;
	static volatile int64_t x1239 = INT64_MAX;
	static uint64_t x1240 = 1804684641135820257LLU;

    t137 = (x1237<<(x1238<=(x1239+x1240)));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint64_t x1245 = 2529350049382424LLU;
	uint64_t x1247 = 231438500330LLU;
	int64_t x1248 = 27LL;

    t138 = (x1245<<(x1246<=(x1247+x1248)));

    if (t138 != 2529350049382424LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x1249 = 492291350621581LLU;
	int32_t x1251 = INT32_MIN;
	int32_t x1252 = INT32_MAX;
	volatile uint64_t t139 = 35940LLU;

    t139 = (x1249<<(x1250<=(x1251+x1252)));

    if (t139 != 984582701243162LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1261 = INT8_MAX;
	volatile uint64_t x1262 = UINT64_MAX;
	static int64_t x1263 = 553LL;
	static volatile int32_t t140 = -368673579;

    t140 = (x1261<<(x1262<=(x1263+x1264)));

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x1271 = INT8_MIN;
	int32_t x1272 = -1;
	volatile int32_t t141 = -819940922;

    t141 = (x1269<<(x1270<=(x1271+x1272)));

    if (t141 != 127) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x1281 = 46U;
	volatile int32_t x1282 = INT32_MAX;
	static int64_t x1283 = INT64_MIN;
	uint16_t x1284 = UINT16_MAX;
	static int32_t t142 = -301545;

    t142 = (x1281<<(x1282<=(x1283+x1284)));

    if (t142 != 46) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1289 = UINT8_MAX;
	uint32_t x1290 = 829U;
	int8_t x1291 = INT8_MAX;
	static uint8_t x1292 = 3U;
	static volatile int32_t t143 = 32;

    t143 = (x1289<<(x1290<=(x1291+x1292)));

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1297 = 2;
	volatile int16_t x1298 = 848;
	int64_t x1299 = 417LL;
	uint64_t x1300 = UINT64_MAX;
	static int32_t t144 = -1;

    t144 = (x1297<<(x1298<=(x1299+x1300)));

    if (t144 != 2) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x1301 = UINT16_MAX;
	int16_t x1302 = INT16_MAX;
	volatile int64_t x1303 = -1LL;
	static int8_t x1304 = -1;
	volatile int32_t t145 = -12;

    t145 = (x1301<<(x1302<=(x1303+x1304)));

    if (t145 != 65535) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1317 = 0;
	static volatile uint8_t x1318 = 6U;
	int8_t x1319 = 0;
	int32_t t146 = 29;

    t146 = (x1317<<(x1318<=(x1319+x1320)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1321 = 1U;
	uint32_t x1322 = 57U;
	int64_t x1323 = -18533812LL;
	int8_t x1324 = -1;
	int32_t t147 = 1735;

    t147 = (x1321<<(x1322<=(x1323+x1324)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x1325 = UINT32_MAX;
	volatile int16_t x1327 = -3379;

    t148 = (x1325<<(x1326<=(x1327+x1328)));

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x1349 = UINT64_MAX;
	uint32_t x1351 = 405363407U;
	static int8_t x1352 = INT8_MIN;
	static volatile uint64_t t149 = UINT64_MAX;

    t149 = (x1349<<(x1350<=(x1351+x1352)));

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1353 = 6U;
	int8_t x1354 = -1;
	static uint16_t x1355 = 2699U;
	uint8_t x1356 = 3U;
	static volatile int32_t t150 = -24;

    t150 = (x1353<<(x1354<=(x1355+x1356)));

    if (t150 != 12) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1357 = INT16_MAX;
	int16_t x1359 = INT16_MIN;
	volatile int32_t t151 = -1770;

    t151 = (x1357<<(x1358<=(x1359+x1360)));

    if (t151 != 65534) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x1378 = INT32_MIN;
	volatile uint16_t x1379 = 3409U;
	volatile int32_t x1380 = -21859;
	volatile uint64_t t152 = 8807914125606LLU;

    t152 = (x1377<<(x1378<=(x1379+x1380)));

    if (t152 != 10861942194057790LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x1394 = 763321826;
	uint16_t x1395 = 30260U;
	int64_t x1396 = INT64_MIN;
	uint64_t t153 = 2269600389757213566LLU;

    t153 = (x1393<<(x1394<=(x1395+x1396)));

    if (t153 != 81887779LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1401 = INT32_MAX;
	volatile int64_t x1402 = INT64_MIN;
	static uint32_t x1404 = UINT32_MAX;
	int32_t t154 = INT32_MAX;

    t154 = (x1401<<(x1402<=(x1403+x1404)));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1410 = INT64_MIN;
	int32_t x1411 = INT32_MIN;
	uint16_t x1412 = 1U;
	int32_t t155 = 106489;

    t155 = (x1409<<(x1410<=(x1411+x1412)));

    if (t155 != 204) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1413 = 4U;
	int16_t x1414 = INT16_MAX;
	int8_t x1415 = INT8_MIN;
	volatile int32_t x1416 = 11;
	volatile int32_t t156 = 58892;

    t156 = (x1413<<(x1414<=(x1415+x1416)));

    if (t156 != 4) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1421 = UINT32_MAX;
	int8_t x1423 = INT8_MAX;
	static int32_t x1424 = INT32_MIN;

    t157 = (x1421<<(x1422<=(x1423+x1424)));

    if (t157 != 4294967294U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1425 = 63U;
	volatile uint16_t x1427 = 10U;
	static uint32_t x1428 = 2008965U;
	volatile int32_t t158 = -8024;

    t158 = (x1425<<(x1426<=(x1427+x1428)));

    if (t158 != 63) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1433 = INT64_MAX;
	int32_t x1434 = -1;
	int16_t x1435 = INT16_MIN;
	volatile int8_t x1436 = 0;
	volatile int64_t t159 = INT64_MAX;

    t159 = (x1433<<(x1434<=(x1435+x1436)));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x1437 = 1U;
	int64_t x1438 = INT64_MIN;
	static int64_t x1440 = -1LL;

    t160 = (x1437<<(x1438<=(x1439+x1440)));

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x1445 = 1U;
	int64_t x1446 = INT64_MIN;
	int16_t x1447 = INT16_MAX;

    t161 = (x1445<<(x1446<=(x1447+x1448)));

    if (t161 != 2) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x1457 = 437272029U;
	static uint16_t x1458 = UINT16_MAX;
	static int8_t x1459 = INT8_MIN;
	int64_t x1460 = 3325309845196809LL;
	static uint32_t t162 = 667847686U;

    t162 = (x1457<<(x1458<=(x1459+x1460)));

    if (t162 != 874544058U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1469 = UINT16_MAX;
	int32_t x1470 = -389860634;
	volatile uint16_t x1471 = 29U;
	volatile int8_t x1472 = -1;
	volatile int32_t t163 = -1513;

    t163 = (x1469<<(x1470<=(x1471+x1472)));

    if (t163 != 131070) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1473 = UINT32_MAX;
	volatile int32_t x1474 = INT32_MAX;
	volatile int64_t x1476 = -1LL;

    t164 = (x1473<<(x1474<=(x1475+x1476)));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1477 = INT16_MAX;
	uint64_t x1478 = 76444232708LLU;
	static volatile uint8_t x1479 = 3U;
	uint32_t x1480 = UINT32_MAX;
	int32_t t165 = 1654309;

    t165 = (x1477<<(x1478<=(x1479+x1480)));

    if (t165 != 32767) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1481 = 1U;
	int8_t x1484 = 0;
	int32_t t166 = -24;

    t166 = (x1481<<(x1482<=(x1483+x1484)));

    if (t166 != 2) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x1485 = 239183U;
	int32_t x1486 = INT32_MIN;
	int8_t x1487 = 0;
	static volatile int64_t x1488 = INT64_MIN;
	uint32_t t167 = 1354937672U;

    t167 = (x1485<<(x1486<=(x1487+x1488)));

    if (t167 != 239183U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x1489 = 10U;
	int32_t x1492 = 3165;
	volatile int32_t t168 = 26226;

    t168 = (x1489<<(x1490<=(x1491+x1492)));

    if (t168 != 10) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1494 = 909696259907441LLU;
	int32_t x1495 = INT32_MAX;
	uint32_t x1496 = UINT32_MAX;
	static volatile int64_t t169 = INT64_MAX;

    t169 = (x1493<<(x1494<=(x1495+x1496)));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1497 = 608670197814825724LL;
	uint8_t x1498 = 3U;
	int16_t x1499 = INT16_MIN;
	static int32_t x1500 = -1;

    t170 = (x1497<<(x1498<=(x1499+x1500)));

    if (t170 != 608670197814825724LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x1507 = INT8_MAX;
	uint8_t x1508 = UINT8_MAX;

    t171 = (x1505<<(x1506<=(x1507+x1508)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x1513 = 3U;
	int64_t x1514 = INT64_MAX;
	volatile int32_t t172 = -85;

    t172 = (x1513<<(x1514<=(x1515+x1516)));

    if (t172 != 3) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1517 = 63LLU;
	uint8_t x1518 = 0U;
	static volatile int8_t x1519 = INT8_MAX;
	static uint64_t t173 = 423536398LLU;

    t173 = (x1517<<(x1518<=(x1519+x1520)));

    if (t173 != 63LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x1525 = 25;
	volatile int64_t x1526 = INT64_MIN;
	uint16_t x1527 = 14U;
	volatile int16_t x1528 = INT16_MIN;
	int32_t t174 = 358338;

    t174 = (x1525<<(x1526<=(x1527+x1528)));

    if (t174 != 50) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1533 = UINT64_MAX;
	uint16_t x1534 = UINT16_MAX;
	int8_t x1536 = INT8_MIN;
	volatile uint64_t t175 = UINT64_MAX;

    t175 = (x1533<<(x1534<=(x1535+x1536)));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x1537 = 1884089142413297841LLU;
	int16_t x1540 = -3263;
	uint64_t t176 = 1445497268698624442LLU;

    t176 = (x1537<<(x1538<=(x1539+x1540)));

    if (t176 != 1884089142413297841LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1541 = 29438U;
	volatile uint32_t x1542 = UINT32_MAX;
	uint32_t x1543 = UINT32_MAX;
	int32_t x1544 = INT32_MIN;
	volatile int32_t t177 = 1878857;

    t177 = (x1541<<(x1542<=(x1543+x1544)));

    if (t177 != 29438) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x1553 = UINT16_MAX;
	volatile int16_t x1554 = INT16_MIN;
	uint32_t x1555 = UINT32_MAX;
	int64_t x1556 = INT64_MIN;
	int32_t t178 = 1;

    t178 = (x1553<<(x1554<=(x1555+x1556)));

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1561 = 9296995U;
	volatile int16_t x1562 = INT16_MIN;
	int8_t x1563 = -1;
	volatile uint32_t t179 = 423585U;

    t179 = (x1561<<(x1562<=(x1563+x1564)));

    if (t179 != 18593990U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x1573 = 27U;
	static uint16_t x1575 = UINT16_MAX;
	uint8_t x1576 = 1U;

    t180 = (x1573<<(x1574<=(x1575+x1576)));

    if (t180 != 54U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x1581 = 14LL;
	volatile int16_t x1583 = INT16_MAX;
	static int32_t x1584 = INT32_MIN;
	int64_t t181 = 23007528LL;

    t181 = (x1581<<(x1582<=(x1583+x1584)));

    if (t181 != 28LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x1585 = INT16_MAX;
	volatile int8_t x1586 = 43;
	int8_t x1587 = -1;
	static int32_t t182 = -8482157;

    t182 = (x1585<<(x1586<=(x1587+x1588)));

    if (t182 != 32767) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x1589 = 95;
	static uint8_t x1590 = 0U;
	int8_t x1591 = 0;
	static volatile int32_t t183 = 101;

    t183 = (x1589<<(x1590<=(x1591+x1592)));

    if (t183 != 95) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1602 = INT64_MIN;

    t184 = (x1601<<(x1602<=(x1603+x1604)));

    if (t184 != 131070) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1605 = INT16_MAX;
	uint16_t x1606 = 5U;
	static int16_t x1607 = 12064;
	int16_t x1608 = -397;
	int32_t t185 = -102780;

    t185 = (x1605<<(x1606<=(x1607+x1608)));

    if (t185 != 65534) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1609 = 375478U;
	uint16_t x1610 = UINT16_MAX;
	static uint16_t x1611 = 7177U;
	int8_t x1612 = INT8_MAX;
	volatile uint32_t t186 = 119U;

    t186 = (x1609<<(x1610<=(x1611+x1612)));

    if (t186 != 375478U) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x1617 = 62U;
	static uint16_t x1618 = UINT16_MAX;
	uint64_t x1619 = UINT64_MAX;
	volatile uint8_t x1620 = 1U;
	volatile int32_t t187 = -5;

    t187 = (x1617<<(x1618<=(x1619+x1620)));

    if (t187 != 62) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1621 = INT8_MAX;
	uint64_t x1622 = 379437LLU;
	uint32_t x1623 = 1910U;
	static int16_t x1624 = INT16_MIN;
	int32_t t188 = 4009144;

    t188 = (x1621<<(x1622<=(x1623+x1624)));

    if (t188 != 254) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1625 = 67323LLU;
	uint32_t x1626 = 23781U;
	uint64_t x1627 = UINT64_MAX;
	uint8_t x1628 = UINT8_MAX;
	uint64_t t189 = 1414LLU;

    t189 = (x1625<<(x1626<=(x1627+x1628)));

    if (t189 != 67323LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x1629 = UINT8_MAX;
	int8_t x1630 = INT8_MIN;
	static int16_t x1631 = INT16_MAX;
	int64_t x1632 = 41803812074LL;

    t190 = (x1629<<(x1630<=(x1631+x1632)));

    if (t190 != 510) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1633 = 51U;
	int32_t x1634 = -1;
	static int8_t x1636 = -18;
	volatile int32_t t191 = -22199755;

    t191 = (x1633<<(x1634<=(x1635+x1636)));

    if (t191 != 51) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1645 = UINT32_MAX;
	uint32_t x1648 = 3633345U;
	uint32_t t192 = UINT32_MAX;

    t192 = (x1645<<(x1646<=(x1647+x1648)));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x1650 = 4261U;
	int8_t x1651 = INT8_MAX;
	int64_t x1652 = INT64_MIN;
	int32_t t193 = -7070193;

    t193 = (x1649<<(x1650<=(x1651+x1652)));

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x1657 = 7742U;
	static int16_t x1659 = -1;
	static volatile int32_t t194 = 1;

    t194 = (x1657<<(x1658<=(x1659+x1660)));

    if (t194 != 7742) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1669 = INT8_MAX;
	int32_t x1670 = INT32_MIN;
	volatile uint8_t x1671 = UINT8_MAX;
	int16_t x1672 = INT16_MAX;

    t195 = (x1669<<(x1670<=(x1671+x1672)));

    if (t195 != 254) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1673 = UINT16_MAX;
	int8_t x1674 = 0;
	volatile uint64_t x1676 = UINT64_MAX;
	int32_t t196 = 9;

    t196 = (x1673<<(x1674<=(x1675+x1676)));

    if (t196 != 131070) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1693 = UINT32_MAX;
	static uint8_t x1695 = 3U;
	uint32_t x1696 = 50635U;
	volatile uint32_t t197 = UINT32_MAX;

    t197 = (x1693<<(x1694<=(x1695+x1696)));

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1701 = INT8_MAX;
	int16_t x1702 = 1;
	int8_t x1703 = INT8_MAX;
	int16_t x1704 = INT16_MIN;
	volatile int32_t t198 = 4618862;

    t198 = (x1701<<(x1702<=(x1703+x1704)));

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1705 = INT16_MAX;
	static int8_t x1706 = 30;
	uint32_t x1707 = UINT32_MAX;
	volatile int32_t t199 = -8005782;

    t199 = (x1705<<(x1706<=(x1707+x1708)));

    if (t199 != 32767) { NG(); } else { ; }
	
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

