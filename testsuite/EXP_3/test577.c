
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

uint8_t x3 = UINT8_MAX;
volatile uint64_t x10 = UINT64_MAX;
uint16_t x11 = 148U;
static int16_t x23 = -15469;
volatile int32_t x30 = INT32_MIN;
volatile uint32_t t5 = 10658U;
volatile uint64_t t8 = 305501219689414214LLU;
int16_t x57 = INT16_MAX;
uint32_t x58 = 15361764U;
uint64_t t11 = 302LLU;
int64_t x79 = INT64_MIN;
int8_t x88 = -18;
volatile uint64_t x97 = 680038LLU;
static int16_t x98 = INT16_MAX;
uint32_t x100 = 441685721U;
uint16_t x113 = 138U;
int64_t x114 = 202811689182LL;
uint64_t t17 = 1931870661638LLU;
volatile int64_t x129 = 64833303LL;
uint8_t x133 = 42U;
static int8_t x134 = -1;
static int16_t x148 = 889;
uint32_t x163 = 56U;
int32_t x164 = INT32_MAX;
int32_t t25 = 20;
int64_t x171 = -145844LL;
static volatile uint64_t t26 = 0LLU;
uint64_t t27 = 824300694058650963LLU;
int32_t x197 = -1;
int16_t x200 = 0;
int64_t x209 = INT64_MAX;
int16_t x216 = 1;
int32_t t34 = 41496502;
volatile uint64_t x221 = 483771964570LLU;
static volatile uint8_t x231 = UINT8_MAX;
int8_t x235 = INT8_MIN;
uint32_t x236 = 908U;
int32_t x239 = 39;
int8_t x240 = 0;
volatile int32_t t38 = 3059;
int16_t x250 = INT16_MAX;
static uint32_t x251 = 64384311U;
volatile int8_t x255 = INT8_MAX;
volatile int64_t x288 = 777394LL;
int8_t x289 = INT8_MIN;
uint8_t x290 = 7U;
int8_t x294 = -1;
int16_t x301 = 636;
volatile uint8_t x302 = 3U;
volatile uint16_t x306 = 1U;
volatile int64_t t45 = 1885287914980LL;
int16_t x324 = -1;
static int32_t x325 = -2179864;
volatile int8_t x327 = INT8_MIN;
int16_t x329 = -1;
volatile int64_t t49 = -29667967774768444LL;
volatile uint64_t t51 = 714831LLU;
static volatile uint64_t t53 = 9269072LLU;
static volatile uint64_t x362 = UINT64_MAX;
static uint32_t x364 = UINT32_MAX;
uint8_t x378 = 9U;
static int64_t x382 = INT64_MIN;
uint64_t t58 = 1LLU;
volatile int16_t x388 = -1;
uint64_t x412 = 4849012142LLU;
uint64_t t62 = 1302791689903873305LLU;
uint8_t x415 = 1U;
volatile uint64_t x416 = UINT64_MAX;
static int16_t x422 = -1;
int16_t x423 = -1;
uint64_t x431 = 31012298LLU;
volatile uint64_t x441 = 4137937492437017LLU;
volatile uint64_t x456 = UINT64_MAX;
static uint16_t x464 = 13560U;
uint32_t t71 = 13564671U;
int16_t x468 = -3369;
uint16_t x469 = 36U;
static int16_t x480 = INT16_MIN;
volatile int32_t t75 = -466;
int32_t x498 = INT32_MIN;
int16_t x500 = INT16_MIN;
static uint64_t x550 = UINT64_MAX;
int32_t x553 = INT32_MAX;
uint64_t x554 = 6092514765LLU;
uint64_t x558 = 23947097181870732LLU;
int32_t x559 = 0;
int64_t x560 = INT64_MAX;
uint16_t x575 = 11452U;
uint64_t x594 = 1460220639391LLU;
int8_t x595 = 7;
static uint8_t x598 = 14U;
int32_t x604 = INT32_MAX;
int16_t x606 = INT16_MIN;
uint16_t x625 = 0U;
static int8_t x637 = INT8_MAX;
int32_t x645 = 54371821;
int16_t x647 = -1;
int32_t x656 = -2;
uint64_t x666 = UINT64_MAX;
uint8_t x670 = 3U;
static uint8_t x671 = 5U;
int32_t t95 = -52690961;
volatile int16_t x674 = INT16_MIN;
int16_t x676 = -2452;
uint8_t x681 = 0U;
int16_t x693 = 669;
int16_t x695 = -10;
int8_t x700 = -63;
uint8_t x708 = 47U;
uint32_t t101 = 87513865U;
int32_t x733 = -1;
uint64_t x741 = 25553974723517395LLU;
static uint64_t t105 = 229659645062238LLU;
uint16_t x763 = 22U;
volatile uint64_t x764 = 12831643970308854LLU;
static int16_t x767 = INT16_MAX;
int64_t x772 = -1LL;
int16_t x773 = -49;
uint8_t x774 = 2U;
int8_t x778 = -1;
volatile uint64_t x780 = UINT64_MAX;
static int64_t x788 = 486536366016415451LL;
static volatile uint32_t x803 = UINT32_MAX;
int32_t x809 = INT32_MIN;
volatile uint64_t x811 = 70274711755907329LLU;
int8_t x814 = -14;
static uint32_t x836 = 1886737636U;
static int8_t x838 = -1;
uint32_t x850 = 9686U;
uint16_t x851 = 1384U;
volatile int8_t x854 = INT8_MIN;
volatile uint64_t x856 = UINT64_MAX;
static int8_t x858 = -1;
int32_t x862 = 16659934;
volatile int8_t x863 = 0;
int64_t t129 = -73259786288485098LL;
int16_t x900 = 530;
uint8_t x905 = 25U;
static volatile int8_t x909 = -1;
int32_t x912 = INT32_MAX;
static int8_t x928 = INT8_MIN;
volatile int32_t t133 = 356687548;
uint16_t x984 = 3U;
int16_t x993 = INT16_MIN;
volatile uint64_t x995 = UINT64_MAX;
volatile uint16_t x998 = 139U;
uint8_t x1016 = 0U;
int16_t x1022 = INT16_MAX;
static int8_t x1024 = 0;
static int16_t x1027 = INT16_MIN;
volatile uint32_t t142 = 927546U;
int16_t x1034 = -1;
static volatile uint16_t x1039 = 26857U;
uint64_t x1040 = 1LLU;
int16_t x1055 = -13;
int32_t t146 = 6;
volatile int64_t x1062 = 16037761LL;
int32_t x1064 = 43;
static volatile int64_t t147 = 986883201529247941LL;
volatile int8_t x1069 = -4;
uint64_t x1077 = 28251539LLU;
volatile uint8_t x1088 = UINT8_MAX;
static int16_t x1089 = INT16_MIN;
int64_t x1092 = -1817LL;
uint16_t x1101 = 56U;
volatile uint64_t t155 = 0LLU;
int16_t x1114 = INT16_MIN;
volatile uint64_t t158 = 4LLU;
volatile uint32_t x1125 = 566211517U;
uint8_t x1133 = UINT8_MAX;
int8_t x1135 = 0;
volatile uint64_t t163 = 12887LLU;
static int32_t x1148 = -3;
int32_t t165 = -10685619;
uint32_t x1162 = 53U;
int8_t x1167 = INT8_MAX;
volatile uint8_t x1173 = 70U;
int8_t x1175 = INT8_MIN;
uint32_t x1178 = 48U;
int8_t x1208 = INT8_MIN;
volatile int32_t t172 = -2481;
int64_t x1215 = -1LL;
static volatile int64_t t173 = 2066030785624LL;
uint32_t x1241 = UINT32_MAX;
int64_t x1242 = INT64_MIN;
volatile uint64_t t176 = 306420407376LLU;
volatile int16_t x1253 = INT16_MIN;
int8_t x1254 = -1;
int8_t x1255 = 0;
int16_t x1256 = INT16_MIN;
static volatile int32_t t177 = 1;
int16_t x1261 = INT16_MAX;
volatile uint32_t x1264 = 898U;
static volatile int64_t x1266 = INT64_MIN;
uint32_t x1269 = 13U;
uint32_t t180 = 234302U;
uint8_t x1275 = 2U;
static volatile int32_t t181 = -377682258;
int8_t x1299 = 0;
volatile int64_t t187 = 5LL;
int64_t t188 = 43387437581410LL;
uint32_t x1343 = 15328U;
uint64_t t189 = 35093LLU;
int32_t x1346 = -1;
static uint64_t x1347 = 416775213247067LLU;
uint64_t t190 = 1LLU;
int64_t x1349 = 99248272269LL;
uint32_t x1352 = 1204U;
int64_t t191 = -7LL;
volatile uint64_t t192 = 6632268743417LLU;
static uint32_t x1364 = 252920430U;
int16_t x1382 = -1;
static int64_t x1384 = -7LL;
int64_t t194 = -3834489445333655LL;
int32_t x1385 = -1;
volatile int8_t x1387 = -1;
int16_t x1389 = -60;
uint64_t x1397 = UINT64_MAX;
volatile int32_t x1407 = -1;
uint64_t x1411 = 238495274507242258LLU;


void f0(void) {
    	int8_t x1 = -7;
	int32_t x2 = 13;
	uint32_t x4 = 4071U;
	static volatile uint32_t t0 = 77242183U;

    t0 = ((x1^x2)*(x3*x4));

    if (t0 != 4282510036U) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x9 = 28U;
	int32_t x12 = -1;
	uint64_t t1 = 377928169725LLU;

    t1 = ((x9^x10)*(x11*x12));

    if (t1 != 4292LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x21 = UINT8_MAX;
	int64_t x22 = -4766170LL;
	volatile int32_t x24 = -1;
	volatile int64_t t2 = 6736529LL;

    t2 = ((x21^x22)*(x23*x24));

    if (t2 != -73725114779LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x25 = -25;
	static int64_t x26 = INT64_MIN;
	volatile int16_t x27 = -1;
	uint64_t x28 = 108448057595456LLU;
	uint64_t t3 = 4005215707576074807LLU;

    t3 = ((x25^x26)*(x27*x28));

    if (t3 != 2711201439886400LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x29 = UINT32_MAX;
	int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	uint32_t t4 = 1U;

    t4 = ((x29^x30)*(x31*x32));

    if (t4 != 3221225472U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x33 = INT32_MIN;
	int8_t x34 = INT8_MIN;
	static volatile uint32_t x35 = UINT32_MAX;
	static int16_t x36 = -1;

    t5 = ((x33^x34)*(x35*x36));

    if (t5 != 2147483520U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = -1;
	volatile int8_t x38 = -1;
	int8_t x39 = 1;
	volatile int64_t x40 = 59785034LL;
	int64_t t6 = 114162172305LL;

    t6 = ((x37^x38)*(x39*x40));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x41 = 20U;
	static int16_t x42 = -1297;
	volatile int64_t x43 = -1LL;
	volatile int8_t x44 = -1;
	volatile int64_t t7 = -25LL;

    t7 = ((x41^x42)*(x43*x44));

    if (t7 != -1285LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x53 = 5U;
	static int8_t x54 = 1;
	int8_t x55 = INT8_MIN;
	uint64_t x56 = UINT64_MAX;

    t8 = ((x53^x54)*(x55*x56));

    if (t8 != 512LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x59 = UINT8_MAX;
	static int16_t x60 = 3893;
	uint32_t t9 = 10U;

    t9 = ((x57^x58)*(x59*x60));

    if (t9 != 131583849U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x65 = 47U;
	uint32_t x66 = 13300726U;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;
	uint32_t t10 = 0U;

    t10 = ((x65^x66)*(x67*x68));

    if (t10 != 4193026048U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x69 = INT64_MAX;
	volatile int64_t x70 = -1LL;
	uint8_t x71 = UINT8_MAX;
	static uint64_t x72 = 1395LLU;

    t11 = ((x69^x70)*(x71*x72));

    if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x77 = INT8_MIN;
	static uint32_t x78 = 354332157U;
	uint64_t x80 = 837383237LLU;
	static uint64_t t12 = 39745LLU;

    t12 = ((x77^x78)*(x79*x80));

    if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x85 = 3147U;
	volatile uint16_t x86 = 11U;
	volatile int16_t x87 = -1;
	volatile uint32_t t13 = 62U;

    t13 = ((x85^x86)*(x87*x88));

    if (t13 != 56448U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x93 = 14U;
	uint8_t x94 = 25U;
	volatile uint8_t x95 = UINT8_MAX;
	static int32_t x96 = 0;
	static int32_t t14 = -787977947;

    t14 = ((x93^x94)*(x95*x96));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x99 = INT32_MAX;
	static uint64_t t15 = 1654LLU;

    t15 = ((x97^x98)*(x99*x100));

    if (t15 != 1131709928870223LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x101 = 31578U;
	uint8_t x102 = 123U;
	volatile int16_t x103 = INT16_MIN;
	uint16_t x104 = 1U;
	int32_t t16 = -597800951;

    t16 = ((x101^x102)*(x103*x104));

    if (t16 != -1032880128) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x115 = 47U;
	volatile uint64_t x116 = 3293876370781LLU;

    t17 = ((x113^x114)*(x115*x116));

    if (t17 != 16596459087065198140LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x117 = INT8_MIN;
	volatile int64_t x118 = -9351992052LL;
	volatile uint8_t x119 = UINT8_MAX;
	static int16_t x120 = INT16_MAX;
	volatile int64_t t18 = 14922004293037LL;

    t18 = ((x117^x118)*(x119*x120));

    if (t18 != 78141363640829580LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x130 = 53U;
	volatile int64_t x131 = -1LL;
	volatile uint16_t x132 = 16U;
	static int64_t t19 = 15119LL;

    t19 = ((x129^x130)*(x131*x132));

    if (t19 != -1037333024LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x135 = -1485831974LL;
	uint64_t x136 = UINT64_MAX;
	uint64_t t20 = 85794839890966LLU;

    t20 = ((x133^x134)*(x135*x136));

    if (t20 != 18446744009818776734LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MAX;
	uint64_t x147 = UINT64_MAX;
	static uint64_t t21 = 22193053515079117LLU;

    t21 = ((x145^x146)*(x147*x148));

    if (t21 != 9223372036825645945LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x149 = 9567305LL;
	int8_t x150 = -1;
	int64_t x151 = -1LL;
	int16_t x152 = -1;
	volatile int64_t t22 = 448097352LL;

    t22 = ((x149^x150)*(x151*x152));

    if (t22 != -9567306LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x157 = UINT64_MAX;
	static int16_t x158 = -1;
	int8_t x159 = -30;
	volatile int8_t x160 = -10;
	volatile uint64_t t23 = 105819396110085631LLU;

    t23 = ((x157^x158)*(x159*x160));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x161 = 11654;
	static int32_t x162 = INT32_MAX;
	volatile uint32_t t24 = 973U;

    t24 = ((x161^x162)*(x163*x164));

    if (t24 != 652680U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x165 = 1U;
	volatile int8_t x166 = 0;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = -1;

    t25 = ((x165^x166)*(x167*x168));

    if (t25 != -65535) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x169 = -5161;
	volatile int8_t x170 = 31;
	volatile uint64_t x172 = 60781264070535LLU;

    t26 = ((x169^x170)*(x171*x172));

    if (t26 != 6027425370024582048LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x177 = INT8_MIN;
	volatile int8_t x178 = 3;
	uint64_t x179 = 202613752751354142LLU;
	int32_t x180 = INT32_MIN;

    t27 = ((x177^x178)*(x179*x180));

    if (t27 != 2563847617444315136LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x181 = -1;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = 26349U;
	static uint32_t x184 = UINT32_MAX;
	volatile uint32_t t28 = 113807U;

    t28 = ((x181^x182)*(x183*x184));

    if (t28 != 3431589613U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x189 = 101U;
	static int16_t x190 = 1;
	volatile uint8_t x191 = 15U;
	volatile int8_t x192 = -2;
	volatile int32_t t29 = -6111;

    t29 = ((x189^x190)*(x191*x192));

    if (t29 != -3000) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x193 = 63U;
	int32_t x194 = INT32_MIN;
	volatile uint64_t x195 = UINT64_MAX;
	int32_t x196 = -1;
	uint64_t t30 = 1017005303LLU;

    t30 = ((x193^x194)*(x195*x196));

    if (t30 != 18446744071562068031LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MIN;
	int32_t t31 = 11;

    t31 = ((x197^x198)*(x199*x200));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x201 = 1LL;
	volatile int32_t x202 = -954120;
	int8_t x203 = INT8_MIN;
	int32_t x204 = -2;
	volatile int64_t t32 = -10LL;

    t32 = ((x201^x202)*(x203*x204));

    if (t32 != -244254464LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x210 = INT8_MIN;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = 3;
	static volatile uint64_t t33 = 7363714981397LLU;

    t33 = ((x209^x210)*(x211*x212));

    if (t33 != 9223372036854775427LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x213 = -1;
	uint8_t x214 = 6U;
	int16_t x215 = INT16_MIN;

    t34 = ((x213^x214)*(x215*x216));

    if (t34 != 229376) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x222 = -1;
	int64_t x223 = -1341LL;
	int64_t x224 = -54575585LL;
	volatile uint64_t t35 = 7565583876933145LLU;

    t35 = ((x221^x222)*(x223*x224));

    if (t35 != 12481599646734796785LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x229 = 773815560LLU;
	volatile int16_t x230 = -1;
	uint64_t x232 = UINT64_MAX;
	uint64_t t36 = 4278503LLU;

    t36 = ((x229^x230)*(x231*x232));

    if (t36 != 197322968055LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x233 = 144U;
	uint16_t x234 = 413U;
	volatile uint32_t t37 = 128156802U;

    t37 = ((x233^x234)*(x235*x236));

    if (t37 != 4263703040U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x237 = -1274;
	static volatile uint8_t x238 = 3U;

    t38 = ((x237^x238)*(x239*x240));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x249 = -1;
	uint8_t x252 = 1U;
	uint32_t t39 = 132563U;

    t39 = ((x249^x250)*(x251*x252));

    if (t39 != 3378806784U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x253 = INT8_MAX;
	int8_t x254 = INT8_MIN;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t40 = -104;

    t40 = ((x253^x254)*(x255*x256));

    if (t40 != -32385) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x285 = 1;
	uint16_t x286 = 28U;
	int16_t x287 = 1;
	int64_t t41 = -21624LL;

    t41 = ((x285^x286)*(x287*x288));

    if (t41 != 22544426LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x291 = 2;
	uint64_t x292 = 15LLU;
	uint64_t t42 = 632323333750228LLU;

    t42 = ((x289^x290)*(x291*x292));

    if (t42 != 18446744073709547986LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x293 = INT64_MAX;
	uint32_t x295 = UINT32_MAX;
	int8_t x296 = 0;
	static int64_t t43 = 636516LL;

    t43 = ((x293^x294)*(x295*x296));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x303 = UINT64_MAX;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t44 = 15997625052995LLU;

    t44 = ((x301^x302)*(x303*x304));

    if (t44 != 20938752LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x305 = -1LL;
	int8_t x307 = INT8_MIN;
	uint32_t x308 = 224546U;

    t45 = ((x305^x306)*(x307*x308));

    if (t45 != -8532450816LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MIN;
	static uint16_t x320 = 0U;
	int64_t t46 = -46LL;

    t46 = ((x317^x318)*(x319*x320));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MAX;
	uint64_t x323 = 59377807358LLU;
	volatile uint64_t t47 = 274630312229523658LLU;

    t47 = ((x321^x322)*(x323*x324));

    if (t47 != 16830460280528072702LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x326 = 3216608U;
	volatile int16_t x328 = INT16_MIN;
	uint32_t t48 = 1U;

    t48 = ((x325^x326)*(x327*x328));

    if (t48 != 33554432U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x330 = 3LL;
	int16_t x331 = INT16_MIN;
	static int16_t x332 = INT16_MIN;

    t49 = ((x329^x330)*(x331*x332));

    if (t49 != -4294967296LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x333 = -1LL;
	uint32_t x334 = UINT32_MAX;
	volatile int32_t x335 = 30677;
	int16_t x336 = INT16_MIN;
	int64_t t50 = -1067524878544810387LL;

    t50 = ((x333^x334)*(x335*x336));

    if (t50 != 4317403930276397056LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x345 = 11U;
	int32_t x346 = -673131615;
	uint64_t x347 = 15893715225149668LLU;
	uint8_t x348 = 2U;

    t51 = ((x345^x346)*(x347*x348));

    if (t51 != 10657979435788601040LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x349 = 367730760579LL;
	static uint16_t x350 = 5354U;
	int8_t x351 = -1;
	volatile int16_t x352 = INT16_MIN;
	volatile int64_t t52 = -5608038045268129LL;

    t52 = ((x349^x350)*(x351*x352));

    if (t52 != 12049801461137408LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x357 = 8271U;
	int16_t x358 = 492;
	volatile int64_t x359 = -3210267739927367LL;
	volatile uint64_t x360 = UINT64_MAX;

    t53 = ((x357^x358)*(x359*x360));

    if (t53 != 9196871434805005621LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x361 = INT32_MIN;
	uint8_t x363 = 2U;
	uint64_t t54 = 89335641979278282LLU;

    t54 = ((x361^x362)*(x363*x364));

    if (t54 != 9223372028264841218LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x369 = UINT64_MAX;
	volatile int16_t x370 = INT16_MIN;
	uint64_t x371 = 502996179209680LLU;
	uint16_t x372 = 12U;
	uint64_t t55 = 29027172LLU;

    t55 = ((x369^x370)*(x371*x372));

    if (t55 != 13312668912867498560LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x373 = 3LL;
	uint8_t x374 = 37U;
	int8_t x375 = INT8_MIN;
	int8_t x376 = -1;
	static volatile int64_t t56 = -17LL;

    t56 = ((x373^x374)*(x375*x376));

    if (t56 != 4864LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x377 = INT16_MIN;
	int64_t x379 = -1LL;
	int64_t x380 = -258373558182786LL;
	static volatile int64_t t57 = -793192193306049755LL;

    t57 = ((x377^x378)*(x379*x380));

    if (t57 != -8464059392509886574LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x381 = INT32_MIN;
	volatile int8_t x383 = INT8_MIN;
	uint64_t x384 = 16412130954750240LLU;

    t58 = ((x381^x382)*(x383*x384));

    if (t58 != 16441032554506616832LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x385 = INT8_MIN;
	int8_t x386 = 13;
	static volatile uint64_t x387 = 27495284600LLU;
	static uint64_t t59 = 3124519937059LLU;

    t59 = ((x385^x386)*(x387*x388));

    if (t59 != 3161957729000LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x389 = -14;
	int64_t x390 = -144LL;
	static volatile uint32_t x391 = 26835U;
	int16_t x392 = INT16_MAX;
	int64_t t60 = -82068706LL;

    t60 = ((x389^x390)*(x391*x392));

    if (t60 != 114309317850LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x401 = UINT64_MAX;
	int32_t x402 = 4;
	int16_t x403 = INT16_MAX;
	int32_t x404 = -1;
	volatile uint64_t t61 = 143690609LLU;

    t61 = ((x401^x402)*(x403*x404));

    if (t61 != 163835LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x409 = INT32_MIN;
	static uint32_t x410 = 2U;
	static int32_t x411 = INT32_MAX;

    t62 = ((x409^x410)*(x411*x412));

    if (t62 != 1189802237345653924LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x413 = -1;
	int32_t x414 = 6427;
	volatile uint64_t t63 = 19473LLU;

    t63 = ((x413^x414)*(x415*x416));

    if (t63 != 6428LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x417 = -1;
	int16_t x418 = -1;
	uint8_t x419 = 1U;
	volatile uint8_t x420 = UINT8_MAX;
	int32_t t64 = 15996;

    t64 = ((x417^x418)*(x419*x420));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x421 = -13865477180556515LL;
	uint8_t x424 = UINT8_MAX;
	volatile int64_t t65 = 33812263LL;

    t65 = ((x421^x422)*(x423*x424));

    if (t65 != -3535696681041911070LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x429 = INT32_MIN;
	volatile int64_t x430 = -1819225856390997LL;
	static uint64_t x432 = 253LLU;
	uint64_t t66 = 7449LLU;

    t66 = ((x429^x430)*(x431*x432));

    if (t66 != 12986764967447802934LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x442 = -1;
	volatile int8_t x443 = -42;
	uint32_t x444 = 1U;
	uint64_t t67 = 68LLU;

    t67 = ((x441^x442)*(x443*x444));

    if (t67 != 6634514791731958852LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x445 = -1LL;
	int16_t x446 = INT16_MAX;
	uint16_t x447 = UINT16_MAX;
	volatile uint8_t x448 = 65U;
	volatile int64_t t68 = 7294834LL;

    t68 = ((x445^x446)*(x447*x448));

    if (t68 != -139584307200LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x453 = UINT16_MAX;
	volatile uint8_t x454 = UINT8_MAX;
	static int64_t x455 = -1LL;
	static uint64_t t69 = 622364886LLU;

    t69 = ((x453^x454)*(x455*x456));

    if (t69 != 65280LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x457 = UINT64_MAX;
	int16_t x458 = 28;
	int32_t x459 = INT32_MIN;
	static int64_t x460 = -13LL;
	uint64_t t70 = 57345LLU;

    t70 = ((x457^x458)*(x459*x460));

    if (t70 != 18446743264108216320LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x461 = 1U;
	static int8_t x462 = -1;
	int8_t x463 = INT8_MIN;

    t71 = ((x461^x462)*(x463*x464));

    if (t71 != 3471360U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x465 = INT8_MIN;
	int64_t x466 = INT64_MIN;
	static volatile uint64_t x467 = UINT64_MAX;
	static volatile uint64_t t72 = 36085324LLU;

    t72 = ((x465^x466)*(x467*x468));

    if (t72 != 9223372036854344576LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x470 = UINT64_MAX;
	uint32_t x471 = 6U;
	static uint32_t x472 = 6600996U;
	volatile uint64_t t73 = 1321474LLU;

    t73 = ((x469^x470)*(x471*x472));

    if (t73 != 18446744072244130504LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x477 = 37;
	static uint16_t x478 = 6U;
	static volatile int8_t x479 = INT8_MAX;
	volatile int32_t t74 = 30971465;

    t74 = ((x477^x478)*(x479*x480));

    if (t74 != -145653760) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x485 = INT8_MIN;
	int16_t x486 = -7;
	int8_t x487 = -1;
	int16_t x488 = INT16_MAX;

    t75 = ((x485^x486)*(x487*x488));

    if (t75 != -3964807) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x489 = INT16_MIN;
	int32_t x490 = 141533261;
	uint32_t x491 = UINT32_MAX;
	uint16_t x492 = 809U;
	uint32_t t76 = 241509U;

    t76 = ((x489^x490)*(x491*x492));

    if (t76 != 2844388523U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x493 = INT8_MIN;
	int32_t x494 = 0;
	int8_t x495 = INT8_MIN;
	int16_t x496 = INT16_MAX;
	static volatile int32_t t77 = -25079284;

    t77 = ((x493^x494)*(x495*x496));

    if (t77 != 536854528) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x497 = 3728U;
	volatile int16_t x499 = INT16_MAX;
	volatile uint32_t t78 = 35347742U;

    t78 = ((x497^x498)*(x499*x500));

    if (t78 != 122159104U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x501 = 14U;
	volatile int8_t x502 = INT8_MAX;
	uint32_t x503 = UINT32_MAX;
	uint8_t x504 = 20U;
	static uint32_t t79 = 29791073U;

    t79 = ((x501^x502)*(x503*x504));

    if (t79 != 4294965036U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x549 = 12055U;
	static int8_t x551 = INT8_MAX;
	volatile int8_t x552 = INT8_MIN;
	volatile uint64_t t80 = 2075027794923LLU;

    t80 = ((x549^x550)*(x551*x552));

    if (t80 != 195982336LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x555 = -1;
	volatile uint16_t x556 = 10U;
	volatile uint64_t t81 = 107930LLU;

    t81 = ((x553^x554)*(x555*x556));

    if (t81 != 18446744027260516876LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x557 = 53726416784225LLU;
	volatile uint64_t t82 = 2939046758605LLU;

    t82 = ((x557^x558)*(x559*x560));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x573 = INT8_MAX;
	volatile int8_t x574 = INT8_MIN;
	int16_t x576 = 1;
	int32_t t83 = 4;

    t83 = ((x573^x574)*(x575*x576));

    if (t83 != -11452) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x589 = 7U;
	volatile uint32_t x590 = 6263223U;
	static uint8_t x591 = UINT8_MAX;
	int8_t x592 = -12;
	uint32_t t84 = 167381U;

    t84 = ((x589^x590)*(x591*x592));

    if (t84 != 2309395520U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x593 = INT8_MAX;
	static uint32_t x596 = UINT32_MAX;
	volatile uint64_t t85 = 1136548839513582LLU;

    t85 = ((x593^x594)*(x595*x596));

    if (t85 != 18153640198644756960LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x597 = 0;
	volatile int8_t x599 = INT8_MIN;
	int32_t x600 = 2;
	volatile int32_t t86 = -134436;

    t86 = ((x597^x598)*(x599*x600));

    if (t86 != -3584) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x601 = INT64_MAX;
	static volatile uint32_t x602 = 856467U;
	uint64_t x603 = 1079996412802142LLU;
	uint64_t t87 = 9641613827458LLU;

    t87 = ((x601^x602)*(x603*x604));

    if (t87 != 8419550384820487256LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x605 = 18824514U;
	uint16_t x607 = 6007U;
	volatile uint8_t x608 = 90U;
	volatile uint32_t t88 = 536620U;

    t88 = ((x605^x606)*(x607*x608));

    if (t88 != 1216443180U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x626 = 907;
	uint32_t x627 = 14940145U;
	uint64_t x628 = 127LLU;
	static uint64_t t89 = 3LLU;

    t89 = ((x625^x626)*(x627*x628));

    if (t89 != 1720940362405LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x633 = -50274;
	volatile int8_t x634 = INT8_MIN;
	static int64_t x635 = -1LL;
	uint64_t x636 = 11877909474LLU;
	volatile uint64_t t90 = 5LLU;

    t90 = ((x633^x634)*(x635*x636));

    if (t90 != 18446147731386499972LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x638 = 2U;
	int16_t x639 = INT16_MIN;
	int8_t x640 = -1;
	int32_t t91 = -111014;

    t91 = ((x637^x638)*(x639*x640));

    if (t91 != 4096000) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x646 = UINT32_MAX;
	int64_t x648 = -1LL;
	volatile int64_t t92 = -26317920494459LL;

    t92 = ((x645^x646)*(x647*x648));

    if (t92 != 4240595474LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x653 = INT8_MAX;
	uint16_t x654 = 3078U;
	uint16_t x655 = UINT16_MAX;
	int32_t t93 = 0;

    t93 = ((x653^x654)*(x655*x656));

    if (t93 != -418506510) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x665 = INT32_MIN;
	uint64_t x667 = UINT64_MAX;
	int32_t x668 = INT32_MAX;
	static uint64_t t94 = 117971329LLU;

    t94 = ((x665^x666)*(x667*x668));

    if (t94 != 13835058059577131007LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x669 = -1;
	volatile int16_t x672 = INT16_MAX;

    t95 = ((x669^x670)*(x671*x672));

    if (t95 != -655340) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x673 = 14U;
	int8_t x675 = -1;
	uint32_t t96 = 749171594U;

    t96 = ((x673^x674)*(x675*x676));

    if (t96 != 4214654488U) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x677 = 28U;
	int8_t x678 = -58;
	int8_t x679 = INT8_MIN;
	int32_t x680 = 1;
	int32_t t97 = -3008;

    t97 = ((x677^x678)*(x679*x680));

    if (t97 != 4864) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x682 = 414572U;
	volatile int64_t x683 = INT64_MAX;
	uint16_t x684 = 0U;
	static volatile int64_t t98 = 2825528LL;

    t98 = ((x681^x682)*(x683*x684));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x694 = 118827LLU;
	volatile int16_t x696 = 15;
	uint64_t t99 = 444338945307LLU;

    t99 = ((x693^x694)*(x695*x696));

    if (t99 != 18446744073691629916LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x697 = 0U;
	uint32_t x698 = 447U;
	volatile uint16_t x699 = UINT16_MAX;
	volatile uint32_t t100 = 61U;

    t100 = ((x697^x698)*(x699*x700));

    if (t100 != 2449436161U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x705 = -1044598378;
	uint32_t x706 = 1U;
	volatile uint16_t x707 = 14U;

    t101 = ((x705^x706)*(x707*x708));

    if (t101 != 4144002590U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x725 = -1LL;
	static volatile int8_t x726 = INT8_MIN;
	int16_t x727 = INT16_MAX;
	uint8_t x728 = 0U;
	volatile int64_t t102 = -4522920801833LL;

    t102 = ((x725^x726)*(x727*x728));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x734 = INT16_MAX;
	uint64_t x735 = 72416636252060LLU;
	uint16_t x736 = UINT16_MAX;
	volatile uint64_t t103 = 47LLU;

    t103 = ((x733^x734)*(x735*x736));

    if (t103 != 13330039319080861696LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x742 = 3689860U;
	int8_t x743 = -1;
	uint64_t x744 = UINT64_MAX;
	static volatile uint64_t t104 = 24049542958134710LLU;

    t104 = ((x741^x742)*(x743*x744));

    if (t104 != 25553974719862359LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x745 = INT32_MIN;
	volatile uint64_t x746 = 5542167690496243LLU;
	uint16_t x747 = 8U;
	int8_t x748 = INT8_MIN;

    t105 = ((x745^x746)*(x747*x748));

    if (t105 != 5675177774509995008LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x761 = UINT64_MAX;
	int8_t x762 = 0;
	volatile uint64_t t106 = 432679586LLU;

    t106 = ((x761^x762)*(x763*x764));

    if (t106 != 18164447906362756828LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x765 = 28486733U;
	int64_t x766 = INT64_MAX;
	int8_t x768 = 0;
	volatile int64_t t107 = -1LL;

    t107 = ((x765^x766)*(x767*x768));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x769 = 6U;
	uint64_t x770 = 16975075284LLU;
	static int64_t x771 = -1LL;
	uint64_t t108 = 198131503908444295LLU;

    t108 = ((x769^x770)*(x771*x772));

    if (t108 != 16975075282LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x775 = UINT32_MAX;
	static int8_t x776 = INT8_MIN;
	volatile uint32_t t109 = 11715541U;

    t109 = ((x773^x774)*(x775*x776));

    if (t109 != 4294960768U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x777 = -394552LL;
	static int64_t x779 = INT64_MIN;
	volatile uint64_t t110 = 53221571LLU;

    t110 = ((x777^x778)*(x779*x780));

    if (t110 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x785 = -1;
	static uint64_t x786 = 13032140083LLU;
	uint64_t x787 = 83537273LLU;
	uint64_t t111 = 210261483073LLU;

    t111 = ((x785^x786)*(x787*x788));

    if (t111 != 13518833331909045860LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x789 = 108U;
	uint16_t x790 = 715U;
	static volatile int8_t x791 = 5;
	uint32_t x792 = 3U;
	uint32_t t112 = 380431U;

    t112 = ((x789^x790)*(x791*x792));

    if (t112 != 10185U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x801 = -107116698;
	uint16_t x802 = 1200U;
	int16_t x804 = INT16_MIN;
	uint32_t t113 = 63488329U;

    t113 = ((x801^x802)*(x803*x804));

    if (t113 != 3253403648U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x805 = 0;
	int32_t x806 = -2869452;
	volatile int64_t x807 = -1LL;
	int16_t x808 = INT16_MAX;
	int64_t t114 = -146120515468652443LL;

    t114 = ((x805^x806)*(x807*x808));

    if (t114 != 94023333684LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x810 = UINT32_MAX;
	int32_t x812 = 24076275;
	static uint64_t t115 = 11084578538LLU;

    t115 = ((x809^x810)*(x811*x812));

    if (t115 != 637664403439783181LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x813 = 30U;
	static volatile int32_t x815 = INT32_MIN;
	volatile uint32_t x816 = 24741U;
	static uint32_t t116 = 3U;

    t116 = ((x813^x814)*(x815*x816));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x825 = -1;
	int16_t x826 = -1;
	int32_t x827 = -1;
	int8_t x828 = INT8_MIN;
	volatile int32_t t117 = 211;

    t117 = ((x825^x826)*(x827*x828));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x833 = 1460LLU;
	volatile int8_t x834 = 45;
	uint8_t x835 = 21U;
	static volatile uint64_t t118 = 54LLU;

    t118 = ((x833^x834)*(x835*x836));

    if (t118 != 1385402463636LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x837 = 176551247U;
	volatile uint64_t x839 = 251LLU;
	int8_t x840 = INT8_MAX;
	volatile uint64_t t119 = 590349LLU;

    t119 = ((x837^x838)*(x839*x840));

    if (t119 != 131282748362096LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x841 = -1LL;
	uint16_t x842 = 11706U;
	uint64_t x843 = UINT64_MAX;
	int64_t x844 = INT64_MIN;
	volatile uint64_t t120 = 6134356400330821LLU;

    t120 = ((x841^x842)*(x843*x844));

    if (t120 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x849 = -5;
	uint8_t x852 = UINT8_MAX;
	static volatile uint32_t t121 = 16491439U;

    t121 = ((x849^x850)*(x851*x852));

    if (t121 != 877642936U) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x853 = INT16_MIN;
	volatile uint8_t x855 = 11U;
	uint64_t t122 = 311612635LLU;

    t122 = ((x853^x854)*(x855*x856));

    if (t122 != 18446744073709192576LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x857 = 0LLU;
	uint64_t x859 = 10472997701LLU;
	int64_t x860 = INT64_MIN;
	uint64_t t123 = 589107185770790332LLU;

    t123 = ((x857^x858)*(x859*x860));

    if (t123 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x861 = UINT8_MAX;
	int16_t x864 = INT16_MIN;
	volatile int32_t t124 = 27795135;

    t124 = ((x861^x862)*(x863*x864));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x869 = INT16_MAX;
	uint32_t x870 = UINT32_MAX;
	uint16_t x871 = 5413U;
	int16_t x872 = INT16_MAX;
	volatile uint32_t t125 = 2U;

    t125 = ((x869^x870)*(x871*x872));

    if (t125 != 3398598656U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x873 = UINT8_MAX;
	int8_t x874 = INT8_MIN;
	int8_t x875 = INT8_MAX;
	uint16_t x876 = UINT16_MAX;
	volatile int32_t t126 = 29992475;

    t126 = ((x873^x874)*(x875*x876));

    if (t126 != -1073659905) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x881 = INT32_MIN;
	int32_t x882 = INT32_MAX;
	static uint64_t x883 = UINT64_MAX;
	volatile uint64_t x884 = 2549714191LLU;
	static volatile uint64_t t127 = 88570LLU;

    t127 = ((x881^x882)*(x883*x884));

    if (t127 != 2549714191LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x889 = -78;
	uint8_t x890 = UINT8_MAX;
	int16_t x891 = 0;
	int8_t x892 = INT8_MIN;
	int32_t t128 = -7;

    t128 = ((x889^x890)*(x891*x892));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x893 = INT32_MIN;
	volatile int16_t x894 = INT16_MAX;
	int16_t x895 = INT16_MAX;
	int64_t x896 = 15LL;

    t129 = ((x893^x894)*(x895*x896));

    if (t129 != -1055482845265905LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x897 = INT16_MAX;
	volatile int8_t x898 = 3;
	uint16_t x899 = 1U;
	int32_t t130 = -715878;

    t130 = ((x897^x898)*(x899*x900));

    if (t130 != 17364920) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x906 = INT64_MAX;
	int8_t x907 = INT8_MAX;
	uint64_t x908 = 14LLU;
	uint64_t t131 = 1073553794LLU;

    t131 = ((x905^x906)*(x907*x908));

    if (t131 != 18446744073709505388LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x910 = UINT64_MAX;
	uint64_t x911 = 1042456475LLU;
	volatile uint64_t t132 = 129822359LLU;

    t132 = ((x909^x910)*(x911*x912));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x925 = 11U;
	static volatile int16_t x926 = INT16_MIN;
	int8_t x927 = INT8_MAX;

    t133 = ((x925^x926)*(x927*x928));

    if (t133 != 532497792) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x941 = 9664U;
	uint16_t x942 = UINT16_MAX;
	uint16_t x943 = 2539U;
	uint32_t x944 = UINT32_MAX;
	volatile uint32_t t134 = 27460366U;

    t134 = ((x941^x942)*(x943*x944));

    if (t134 != 4153110827U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x953 = UINT8_MAX;
	int8_t x954 = INT8_MIN;
	int16_t x955 = INT16_MIN;
	volatile int16_t x956 = 4;
	static volatile int32_t t135 = 4794717;

    t135 = ((x953^x954)*(x955*x956));

    if (t135 != 16908288) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x981 = UINT16_MAX;
	uint16_t x982 = 311U;
	volatile uint32_t x983 = 2U;
	uint32_t t136 = 834137575U;

    t136 = ((x981^x982)*(x983*x984));

    if (t136 != 391344U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x985 = INT32_MAX;
	uint8_t x986 = 10U;
	static int64_t x987 = -1LL;
	static uint32_t x988 = 90706827U;
	static int64_t t137 = -1893898949LL;

    t137 = ((x985^x986)*(x987*x988));

    if (t137 != -194791426746689799LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x994 = -1LL;
	int8_t x996 = -1;
	uint64_t t138 = 99LLU;

    t138 = ((x993^x994)*(x995*x996));

    if (t138 != 32767LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x997 = INT8_MIN;
	uint16_t x999 = 55U;
	int16_t x1000 = INT16_MAX;
	volatile int32_t t139 = -99855;

    t139 = ((x997^x998)*(x999*x1000));

    if (t139 != -441535325) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1013 = INT8_MAX;
	int32_t x1014 = INT32_MAX;
	static int16_t x1015 = -3606;
	int32_t t140 = 42396608;

    t140 = ((x1013^x1014)*(x1015*x1016));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x1021 = 217LLU;
	uint32_t x1023 = UINT32_MAX;
	uint64_t t141 = 183885LLU;

    t141 = ((x1021^x1022)*(x1023*x1024));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x1025 = 16U;
	static uint32_t x1026 = 2U;
	static uint32_t x1028 = 23841470U;

    t142 = ((x1025^x1026)*(x1027*x1028));

    if (t142 != 3746693120U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1033 = INT32_MAX;
	volatile int8_t x1035 = INT8_MIN;
	volatile uint32_t x1036 = 1119477419U;
	volatile uint32_t t143 = 924981643U;

    t143 = ((x1033^x1034)*(x1035*x1036));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1037 = INT8_MAX;
	volatile int64_t x1038 = INT64_MAX;
	uint64_t t144 = 13699797902616742LLU;

    t144 = ((x1037^x1038)*(x1039*x1040));

    if (t144 != 9223372036851338112LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x1041 = INT16_MIN;
	int16_t x1042 = -11;
	int64_t x1043 = -1LL;
	static int8_t x1044 = INT8_MIN;
	int64_t t145 = -176LL;

    t145 = ((x1041^x1042)*(x1043*x1044));

    if (t145 != 4192896LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x1053 = INT32_MIN;
	int32_t x1054 = INT32_MIN;
	int8_t x1056 = -1;

    t146 = ((x1053^x1054)*(x1055*x1056));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1061 = 1424U;
	static int8_t x1063 = INT8_MIN;

    t147 = ((x1061^x1062)*(x1063*x1064));

    if (t147 != -88264174976LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1065 = INT32_MIN;
	volatile int8_t x1066 = INT8_MIN;
	static int64_t x1067 = -1LL;
	int8_t x1068 = -1;
	static int64_t t148 = -97808553289936234LL;

    t148 = ((x1065^x1066)*(x1067*x1068));

    if (t148 != 2147483520LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1070 = -1;
	static volatile int8_t x1071 = INT8_MIN;
	static volatile uint32_t x1072 = UINT32_MAX;
	uint32_t t149 = 298U;

    t149 = ((x1069^x1070)*(x1071*x1072));

    if (t149 != 384U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x1073 = 2U;
	int8_t x1074 = INT8_MIN;
	volatile uint16_t x1075 = 36U;
	uint32_t x1076 = 38U;
	uint32_t t150 = 8619U;

    t150 = ((x1073^x1074)*(x1075*x1076));

    if (t150 != 4294794928U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1078 = INT32_MIN;
	int16_t x1079 = -1;
	volatile uint64_t x1080 = 322687499LLU;
	uint64_t t151 = 53890265LLU;

    t151 = ((x1077^x1078)*(x1079*x1080));

    if (t151 != 683849709053705391LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x1081 = 855U;
	volatile int32_t x1082 = INT32_MAX;
	int16_t x1083 = 0;
	uint64_t x1084 = 1971084445LLU;
	uint64_t t152 = 9652923LLU;

    t152 = ((x1081^x1082)*(x1083*x1084));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x1085 = 3510152892821169LLU;
	static int32_t x1086 = -1;
	uint32_t x1087 = 468U;
	static volatile uint64_t t153 = 469736LLU;

    t153 = ((x1085^x1086)*(x1087*x1088));

    if (t153 != 5373467466041259368LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x1090 = UINT64_MAX;
	volatile int8_t x1091 = INT8_MAX;
	volatile uint64_t t154 = 1861531641786LLU;

    t154 = ((x1089^x1090)*(x1091*x1092));

    if (t154 != 18446744066148271463LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1102 = 48896921LL;
	uint64_t x1103 = UINT64_MAX;
	int8_t x1104 = INT8_MIN;

    t155 = ((x1101^x1102)*(x1103*x1104));

    if (t155 != 6258806912LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1105 = UINT64_MAX;
	int8_t x1106 = 50;
	static int16_t x1107 = -10;
	static uint16_t x1108 = 1U;
	static uint64_t t156 = 4938754254711710LLU;

    t156 = ((x1105^x1106)*(x1107*x1108));

    if (t156 != 510LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x1113 = -1LL;
	int32_t x1115 = -1;
	uint8_t x1116 = UINT8_MAX;
	volatile int64_t t157 = 20964993308671LL;

    t157 = ((x1113^x1114)*(x1115*x1116));

    if (t157 != -8355585LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x1117 = INT8_MIN;
	volatile uint32_t x1118 = UINT32_MAX;
	uint64_t x1119 = 27158072347918144LLU;
	int32_t x1120 = -25;

    t158 = ((x1117^x1118)*(x1119*x1120));

    if (t158 != 6006840663907650880LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1121 = INT8_MIN;
	uint32_t x1122 = 4333U;
	int8_t x1123 = 0;
	uint64_t x1124 = 143806456613729305LLU;
	uint64_t t159 = 1810634LLU;

    t159 = ((x1121^x1122)*(x1123*x1124));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x1126 = -5820858;
	int32_t x1127 = -1;
	static uint16_t x1128 = 0U;
	uint32_t t160 = 16U;

    t160 = ((x1125^x1126)*(x1127*x1128));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1129 = 29;
	volatile int16_t x1130 = -1;
	int64_t x1131 = -1LL;
	int16_t x1132 = -1;
	volatile int64_t t161 = -30231613857LL;

    t161 = ((x1129^x1130)*(x1131*x1132));

    if (t161 != -30LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x1134 = INT64_MAX;
	static uint8_t x1136 = 10U;
	int64_t t162 = 6830473865256717LL;

    t162 = ((x1133^x1134)*(x1135*x1136));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1137 = INT8_MAX;
	uint16_t x1138 = UINT16_MAX;
	int8_t x1139 = 1;
	volatile uint64_t x1140 = 1874404589118LLU;

    t163 = ((x1137^x1138)*(x1139*x1140));

    if (t163 != 122601055365030144LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1141 = -14614;
	static volatile uint64_t x1142 = UINT64_MAX;
	uint8_t x1143 = 1U;
	int64_t x1144 = INT64_MAX;
	uint64_t t164 = 5353159411051457LLU;

    t164 = ((x1141^x1142)*(x1143*x1144));

    if (t164 != 9223372036854761195LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1145 = -1;
	static int16_t x1146 = 0;
	uint16_t x1147 = 36U;

    t165 = ((x1145^x1146)*(x1147*x1148));

    if (t165 != 108) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1157 = 3U;
	static int8_t x1158 = 55;
	uint8_t x1159 = UINT8_MAX;
	int16_t x1160 = 17;
	static int32_t t166 = 5767295;

    t166 = ((x1157^x1158)*(x1159*x1160));

    if (t166 != 225420) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1161 = INT64_MAX;
	volatile uint8_t x1163 = 1U;
	uint64_t x1164 = 184602153179LLU;
	volatile uint64_t t167 = 902LLU;

    t167 = ((x1161^x1162)*(x1163*x1164));

    if (t167 != 9223362068338504142LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1165 = INT16_MAX;
	static int8_t x1166 = INT8_MIN;
	int32_t x1168 = -1;
	int32_t t168 = -6285;

    t168 = ((x1165^x1166)*(x1167*x1168));

    if (t168 != 4145407) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1169 = -1;
	static int32_t x1170 = INT32_MIN;
	uint16_t x1171 = 0U;
	uint8_t x1172 = 2U;
	int32_t t169 = -2;

    t169 = ((x1169^x1170)*(x1171*x1172));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1174 = INT8_MIN;
	int64_t x1176 = -5653LL;
	volatile int64_t t170 = 21531225665LL;

    t170 = ((x1173^x1174)*(x1175*x1176));

    if (t170 != -41967872LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1177 = 9;
	static int64_t x1179 = 4LL;
	static int16_t x1180 = INT16_MIN;
	int64_t t171 = -970340680776089LL;

    t171 = ((x1177^x1178)*(x1179*x1180));

    if (t171 != -7471104LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x1205 = 1632;
	int16_t x1206 = INT16_MIN;
	uint8_t x1207 = 0U;

    t172 = ((x1205^x1206)*(x1207*x1208));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x1213 = INT8_MIN;
	int32_t x1214 = -1038325188;
	volatile uint8_t x1216 = 5U;

    t173 = ((x1213^x1214)*(x1215*x1216));

    if (t173 != -5191625900LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1217 = -2;
	volatile uint64_t x1218 = 1795345069375397LLU;
	int16_t x1219 = INT16_MIN;
	int8_t x1220 = INT8_MIN;
	volatile uint64_t t174 = 30LLU;

    t174 = ((x1217^x1218)*(x1219*x1220));

    if (t174 != 14495320285701472256LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1243 = UINT32_MAX;
	volatile uint64_t x1244 = UINT64_MAX;
	static uint64_t t175 = 4LLU;

    t175 = ((x1241^x1242)*(x1243*x1244));

    if (t175 != 9223372045444710399LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x1249 = 1235519U;
	int32_t x1250 = INT32_MIN;
	uint64_t x1251 = 4350007423530LLU;
	int32_t x1252 = -803158;

    t176 = ((x1249^x1250)*(x1251*x1252));

    if (t176 != 2520738007515243804LLU) { NG(); } else { ; }
	
}

void f177(void) {
    

    t177 = ((x1253^x1254)*(x1255*x1256));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x1262 = INT32_MIN;
	uint16_t x1263 = 30U;
	volatile uint32_t t178 = 219U;

    t178 = ((x1261^x1262)*(x1263*x1264));

    if (t178 != 882742980U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1265 = 5185;
	int16_t x1267 = INT16_MIN;
	uint64_t x1268 = 147361LLU;
	volatile uint64_t t179 = 14927LLU;

    t179 = ((x1265^x1266)*(x1267*x1268));

    if (t179 != 18446719036769140736LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1270 = 1169U;
	static int32_t x1271 = -1;
	int8_t x1272 = -4;

    t180 = ((x1269^x1270)*(x1271*x1272));

    if (t180 != 4720U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x1273 = UINT8_MAX;
	int8_t x1274 = INT8_MIN;
	static volatile int32_t x1276 = -7270;

    t181 = ((x1273^x1274)*(x1275*x1276));

    if (t181 != 1875660) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x1281 = INT16_MAX;
	int8_t x1282 = INT8_MIN;
	volatile uint8_t x1283 = 7U;
	int8_t x1284 = 1;
	int32_t t182 = 934;

    t182 = ((x1281^x1282)*(x1283*x1284));

    if (t182 != -228487) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1285 = 2U;
	int64_t x1286 = -1651LL;
	uint8_t x1287 = UINT8_MAX;
	volatile uint32_t x1288 = 1286862U;
	int64_t t183 = -2939317389LL;

    t183 = ((x1285^x1286)*(x1287*x1288));

    if (t183 != -541119036690LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1297 = -3;
	int32_t x1298 = 356331;
	int16_t x1300 = 1;
	volatile int32_t t184 = 3;

    t184 = ((x1297^x1298)*(x1299*x1300));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1301 = -1;
	volatile int8_t x1302 = INT8_MIN;
	static int16_t x1303 = -26;
	uint8_t x1304 = 29U;
	volatile int32_t t185 = 1010;

    t185 = ((x1301^x1302)*(x1303*x1304));

    if (t185 != -95758) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1305 = INT64_MAX;
	uint32_t x1306 = 28635U;
	int16_t x1307 = -10642;
	uint64_t x1308 = 2763LLU;
	uint64_t t186 = 59356636427LLU;

    t186 = ((x1305^x1306)*(x1307*x1308));

    if (t186 != 842008534056LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1317 = 1904363181LL;
	int8_t x1318 = INT8_MIN;
	int32_t x1319 = -1;
	uint16_t x1320 = UINT16_MAX;

    t187 = ((x1317^x1318)*(x1319*x1320));

    if (t187 != 124802443557165LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1325 = -1LL;
	uint8_t x1326 = 0U;
	int8_t x1327 = -1;
	static uint32_t x1328 = 74U;

    t188 = ((x1325^x1326)*(x1327*x1328));

    if (t188 != -4294967222LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1341 = 761135334LLU;
	int8_t x1342 = -12;
	volatile int16_t x1344 = -7;

    t189 = ((x1341^x1342)*(x1343*x1344));

    if (t189 != 15177774338767431616LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1345 = INT16_MIN;
	int16_t x1348 = 8;

    t190 = ((x1345^x1346)*(x1347*x1348));

    if (t190 != 17018066931185397032LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x1350 = -2;
	int8_t x1351 = 7;

    t191 = ((x1349^x1350)*(x1351*x1352));

    if (t191 != -836464438683132LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1353 = INT16_MAX;
	volatile uint64_t x1354 = 27870LLU;
	volatile int16_t x1355 = INT16_MIN;
	volatile uint64_t x1356 = UINT64_MAX;

    t192 = ((x1353^x1354)*(x1355*x1356));

    if (t192 != 160464896LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1361 = INT16_MIN;
	int32_t x1362 = -3819448;
	int32_t x1363 = 653;
	uint32_t t193 = 187501U;

    t193 = ((x1361^x1362)*(x1363*x1364));

    if (t193 != 3089959472U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1381 = 11;
	volatile int16_t x1383 = INT16_MIN;

    t194 = ((x1381^x1382)*(x1383*x1384));

    if (t194 != -2752512LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1386 = 7U;
	static uint64_t x1388 = 124837LLU;
	uint64_t t195 = 218029681048LLU;

    t195 = ((x1385^x1386)*(x1387*x1388));

    if (t195 != 998696LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x1390 = 28757053LLU;
	static int64_t x1391 = 113095LL;
	int32_t x1392 = INT32_MIN;
	uint64_t t196 = 503832LLU;

    t196 = ((x1389^x1390)*(x1391*x1392));

    if (t196 != 11333401063920238592LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1398 = -1;
	static uint16_t x1399 = 0U;
	int16_t x1400 = 3;
	volatile uint64_t t197 = 950876LLU;

    t197 = ((x1397^x1398)*(x1399*x1400));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x1405 = 3807U;
	int16_t x1406 = INT16_MIN;
	volatile uint16_t x1408 = 601U;
	static volatile uint32_t t198 = 66264387U;

    t198 = ((x1405^x1406)*(x1407*x1408));

    if (t198 != 17405561U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1409 = INT32_MAX;
	uint16_t x1410 = 151U;
	uint16_t x1412 = UINT16_MAX;
	volatile uint64_t t199 = 7087863614272LLU;

    t199 = ((x1409^x1410)*(x1411*x1412));

    if (t199 != 17088787709898429104LLU) { NG(); } else { ; }
	
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

