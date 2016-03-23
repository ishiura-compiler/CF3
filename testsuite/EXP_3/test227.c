
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

volatile int32_t x1 = INT32_MIN;
uint64_t t1 = 897246979354218LLU;
volatile uint32_t x17 = UINT32_MAX;
uint64_t x18 = UINT64_MAX;
uint64_t x24 = 551760936295LLU;
int8_t x41 = -38;
volatile int8_t x42 = INT8_MAX;
int64_t t6 = -5108957088794LL;
volatile int8_t x66 = -59;
static int16_t x68 = INT16_MIN;
int8_t x73 = INT8_MIN;
uint32_t t14 = 0U;
volatile int32_t x95 = -1;
int64_t t15 = -185LL;
int64_t x112 = -124LL;
static uint8_t x114 = 0U;
volatile int8_t x146 = INT8_MAX;
int32_t x153 = INT32_MAX;
static int32_t x155 = INT32_MIN;
volatile uint32_t t23 = 2348U;
static volatile int16_t x168 = 192;
uint32_t x169 = UINT32_MAX;
uint64_t x177 = UINT64_MAX;
int64_t x195 = -16457671LL;
int64_t t29 = -17168LL;
uint64_t x197 = 7256135221178236998LLU;
static uint16_t x198 = UINT16_MAX;
uint8_t x199 = UINT8_MAX;
int8_t x213 = INT8_MIN;
volatile uint64_t x216 = 43LLU;
int16_t x232 = INT16_MIN;
int64_t x251 = 3787078LL;
volatile int16_t x253 = INT16_MAX;
int16_t x255 = 47;
volatile uint64_t t35 = 7347LLU;
volatile uint32_t x259 = 5U;
int32_t x260 = INT32_MIN;
volatile uint32_t t36 = 186089U;
volatile uint64_t t37 = 20LLU;
uint64_t x269 = UINT64_MAX;
uint32_t x270 = 684U;
uint16_t x277 = 676U;
static uint64_t t40 = 4281363LLU;
uint32_t x291 = UINT32_MAX;
volatile int32_t x303 = INT32_MAX;
uint8_t x306 = 86U;
static uint32_t t43 = 56227U;
int64_t x309 = -1LL;
int8_t x311 = 1;
static uint64_t x317 = 459517534728266847LLU;
uint8_t x326 = 124U;
int8_t x329 = INT8_MIN;
uint16_t x332 = 0U;
int64_t x340 = 249932969512417LL;
uint16_t x348 = UINT16_MAX;
volatile int32_t x352 = -1;
uint8_t x361 = UINT8_MAX;
volatile int32_t x376 = INT32_MIN;
int32_t x379 = -1;
static int32_t x403 = INT32_MAX;
volatile uint64_t t57 = 19092894LLU;
static uint64_t x429 = 69679192248LLU;
int16_t x442 = -1;
static uint64_t x444 = 60118927927790LLU;
int64_t x448 = -196LL;
volatile uint64_t t60 = 6443409532LLU;
volatile int16_t x460 = -250;
static uint64_t t64 = 1129849143892809478LLU;
static uint32_t x493 = 161789067U;
volatile uint64_t x503 = 1883LLU;
uint64_t x505 = 103LLU;
int8_t x508 = 1;
uint32_t x514 = 526867989U;
uint64_t x515 = 118990580LLU;
uint8_t x538 = 10U;
static volatile int64_t t72 = 216323LL;
int64_t x570 = -3LL;
int16_t x577 = -28;
int16_t x579 = -1;
int16_t x595 = -1;
static int8_t x628 = INT8_MIN;
volatile int64_t x636 = -1LL;
int8_t x644 = 1;
volatile int32_t x671 = -3509822;
uint32_t t90 = 1269539U;
static uint64_t t92 = 234226034121877736LLU;
uint16_t x727 = 148U;
static int16_t x728 = INT16_MIN;
static int8_t x730 = -1;
int32_t t96 = -53;
static int32_t x735 = -74922020;
uint64_t x736 = UINT64_MAX;
int32_t x741 = INT32_MAX;
int16_t x753 = -3657;
uint8_t x761 = 4U;
uint8_t x762 = UINT8_MAX;
uint32_t x763 = 95760598U;
uint64_t x769 = 59LLU;
uint8_t x806 = 48U;
volatile int32_t x811 = INT32_MAX;
static int8_t x814 = INT8_MIN;
uint32_t x815 = 0U;
int8_t x819 = 21;
volatile int16_t x833 = -1;
int64_t x838 = -37643729318474LL;
uint64_t x855 = UINT64_MAX;
uint64_t t111 = 30640592215736LLU;
static uint32_t x867 = UINT32_MAX;
uint64_t t114 = 3301260LLU;
int64_t x900 = -1LL;
static uint8_t x902 = 23U;
uint64_t x910 = 827LLU;
static volatile int8_t x920 = INT8_MAX;
uint16_t x928 = UINT16_MAX;
uint32_t x938 = UINT32_MAX;
uint16_t x947 = UINT16_MAX;
static int16_t x951 = INT16_MIN;
static int8_t x962 = INT8_MIN;
volatile int16_t x963 = -1;
static volatile int8_t x964 = INT8_MAX;
static int16_t x989 = INT16_MIN;
uint8_t x1009 = 1U;
int16_t x1012 = -1;
int64_t t129 = -2LL;
static int32_t x1024 = 6;
static volatile uint64_t t132 = 2LLU;
int8_t x1032 = 0;
int16_t x1066 = INT16_MIN;
volatile uint32_t x1067 = 47U;
uint32_t t136 = 1488U;
static uint16_t x1083 = 15U;
int8_t x1091 = INT8_MIN;
volatile int64_t t141 = -1449650519LL;
int8_t x1096 = INT8_MAX;
uint32_t x1100 = 3U;
uint32_t x1105 = 15U;
uint64_t x1111 = 2093267559664360LLU;
uint64_t t145 = 1476362561888957LLU;
int8_t x1117 = INT8_MAX;
static volatile uint64_t t146 = 63LLU;
int64_t x1121 = -1LL;
volatile int8_t x1127 = -1;
int8_t x1128 = INT8_MAX;
int8_t x1134 = -4;
uint8_t x1138 = 54U;
int32_t x1139 = 2718573;
uint64_t t150 = 3225523519309350LLU;
uint64_t x1157 = 11LLU;
int32_t x1158 = -18596;
int32_t t152 = -981334269;
static uint64_t x1173 = 173208366464075LLU;
int64_t x1174 = INT64_MIN;
volatile uint64_t t154 = 31LLU;
static uint64_t x1191 = 117803LLU;
uint32_t x1192 = 28U;
uint64_t t155 = 120012613LLU;
int8_t x1195 = -24;
static int64_t x1206 = INT64_MIN;
uint64_t t157 = 34281411988LLU;
uint32_t x1226 = 95U;
uint32_t t159 = 116U;
uint16_t x1236 = 1698U;
volatile int8_t x1240 = -20;
uint16_t x1251 = UINT16_MAX;
int16_t x1258 = INT16_MIN;
volatile uint8_t x1259 = UINT8_MAX;
volatile int32_t t165 = -6;
volatile int16_t x1265 = INT16_MIN;
volatile uint64_t x1268 = 985890101315042LLU;
volatile uint32_t x1274 = 14316212U;
int64_t x1279 = -1LL;
int64_t x1292 = 69127887290919LL;
int8_t x1303 = -1;
static uint64_t x1318 = UINT64_MAX;
volatile uint8_t x1319 = 93U;
volatile int64_t x1320 = INT64_MAX;
static volatile uint64_t x1325 = 48522817511932LLU;
volatile int16_t x1327 = -1;
int64_t x1328 = INT64_MAX;
int8_t x1337 = -1;
int32_t x1340 = -1;
static volatile int32_t t179 = 1047959;
int8_t x1349 = 1;
volatile int32_t t180 = -6;
static int64_t x1355 = -512266725698115LL;
int16_t x1384 = INT16_MAX;
static int32_t t185 = 37129;
static uint8_t x1415 = 43U;
uint8_t x1430 = UINT8_MAX;
volatile int8_t x1465 = -1;
static int32_t x1475 = INT32_MAX;
int8_t x1481 = -1;
uint32_t t197 = 9759654U;
volatile uint32_t t198 = 36787934U;


void f0(void) {
    	static uint32_t x2 = 6098U;
	uint16_t x3 = 647U;
	static int64_t x4 = INT64_MAX;
	int64_t t0 = 0LL;

    t0 = ((x1*x2)*(x3-x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x13 = -1LL;
	volatile int32_t x14 = 518787250;
	int16_t x15 = INT16_MAX;
	volatile uint64_t x16 = 10LLU;

    t1 = ((x13*x14)*(x15-x16));

    if (t1 != 18446727079795603366LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x19 = 19U;
	uint64_t x20 = 975866622329396LLU;
	volatile uint64_t t2 = 440284LLU;

    t2 = ((x17*x18)*(x19-x20));

    if (t2 != 12059455170000502239LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = INT16_MIN;
	static uint64_t x22 = 25481874539983LLU;
	volatile int32_t x23 = INT32_MAX;
	volatile uint64_t t3 = 143150265207661945LLU;

    t3 = ((x21*x22)*(x23-x24));

    if (t3 != 15825271436648120320LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x29 = UINT32_MAX;
	int8_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	uint64_t x32 = 1102894LLU;
	volatile uint64_t t4 = 1401LLU;

    t4 = ((x29*x30)*(x31-x32));

    if (t4 != 4293864401LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x43 = UINT16_MAX;
	int64_t x44 = -1LL;
	int64_t t5 = -8263828415LL;

    t5 = ((x41*x42)*(x43-x44));

    if (t5 != -316276736LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x45 = 3;
	int16_t x46 = -1;
	volatile int64_t x47 = -2191769660415LL;
	int16_t x48 = 15893;

    t6 = ((x45*x46)*(x47-x48));

    if (t6 != 6575309028924LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MIN;
	volatile int16_t x55 = INT16_MAX;
	static uint64_t x56 = 29LLU;
	volatile uint64_t t7 = 209393295621LLU;

    t7 = ((x53*x54)*(x55-x56));

    if (t7 != 70304319668224LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x61 = 51U;
	int64_t x62 = -1LL;
	volatile int16_t x63 = INT16_MIN;
	int16_t x64 = -1;
	volatile int64_t t8 = 1045662LL;

    t8 = ((x61*x62)*(x63-x64));

    if (t8 != 1671117LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x65 = -1;
	uint64_t x67 = 15806209475802595LLU;
	volatile uint64_t t9 = 594231385LLU;

    t9 = ((x65*x66)*(x67-x68));

    if (t9 != 932566359074286417LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x69 = 44U;
	volatile int16_t x70 = -1;
	static volatile int32_t x71 = -1;
	uint64_t x72 = 287379237LLU;
	volatile uint64_t t10 = 376368582119948LLU;

    t10 = ((x69*x70)*(x71-x72));

    if (t10 != 12644686472LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x74 = UINT64_MAX;
	volatile int64_t x75 = -24555LL;
	volatile int16_t x76 = INT16_MIN;
	uint64_t t11 = 147196113366LLU;

    t11 = ((x73*x74)*(x75-x76));

    if (t11 != 1051264LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint16_t x77 = 238U;
	uint8_t x78 = 28U;
	int32_t x79 = -107;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t12 = 8;

    t12 = ((x77*x78)*(x79-x80));

    if (t12 != -2412368) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x81 = INT8_MIN;
	int16_t x82 = -1;
	int16_t x83 = INT16_MAX;
	static volatile uint16_t x84 = 3036U;
	int32_t t13 = 8901511;

    t13 = ((x81*x82)*(x83-x84));

    if (t13 != 3805568) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x89 = 196U;
	int32_t x90 = -1;
	int8_t x91 = INT8_MIN;
	static int8_t x92 = INT8_MIN;

    t14 = ((x89*x90)*(x91-x92));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x93 = -1LL;
	int64_t x94 = INT64_MAX;
	int8_t x96 = -1;

    t15 = ((x93*x94)*(x95-x96));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x97 = -1;
	uint8_t x98 = 37U;
	uint64_t x99 = 2LLU;
	static volatile uint16_t x100 = 32U;
	uint64_t t16 = 59041740242879LLU;

    t16 = ((x97*x98)*(x99-x100));

    if (t16 != 1110LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x101 = INT16_MIN;
	int16_t x102 = 1;
	static int16_t x103 = -11891;
	static int64_t x104 = -16593605LL;
	static volatile int64_t t17 = -54215LL;

    t17 = ((x101*x102)*(x103-x104));

    if (t17 != -543349604352LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x109 = INT16_MIN;
	volatile int64_t x110 = -1LL;
	static int8_t x111 = -1;
	volatile int64_t t18 = -345035912457251094LL;

    t18 = ((x109*x110)*(x111-x112));

    if (t18 != 4030464LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x113 = 0U;
	uint8_t x115 = 2U;
	static uint16_t x116 = UINT16_MAX;
	volatile uint32_t t19 = 5U;

    t19 = ((x113*x114)*(x115-x116));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x137 = INT8_MIN;
	volatile uint64_t x138 = 33204998005179LLU;
	int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	uint64_t t20 = 98113543224LLU;

    t20 = ((x137*x138)*(x139-x140));

    if (t20 != 10144647437147439104LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x145 = INT8_MIN;
	uint16_t x147 = UINT16_MAX;
	volatile int16_t x148 = INT16_MAX;
	int32_t t21 = -50785;

    t21 = ((x145*x146)*(x147-x148));

    if (t21 != -532676608) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x149 = INT8_MAX;
	uint16_t x150 = 321U;
	volatile int8_t x151 = INT8_MAX;
	int8_t x152 = -1;
	volatile int32_t t22 = 82;

    t22 = ((x149*x150)*(x151-x152));

    if (t22 != 5218176) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x154 = UINT32_MAX;
	int16_t x156 = -8282;

    t23 = ((x153*x154)*(x155-x156));

    if (t23 != 2147491930U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x165 = -1;
	static uint32_t x166 = UINT32_MAX;
	uint8_t x167 = UINT8_MAX;
	volatile uint32_t t24 = 64465U;

    t24 = ((x165*x166)*(x167-x168));

    if (t24 != 63U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x170 = -1;
	volatile uint64_t x171 = 2LLU;
	int64_t x172 = INT64_MIN;
	volatile uint64_t t25 = 255469LLU;

    t25 = ((x169*x170)*(x171-x172));

    if (t25 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x173 = UINT32_MAX;
	int8_t x174 = -1;
	volatile uint32_t x175 = UINT32_MAX;
	uint64_t x176 = UINT64_MAX;
	uint64_t t26 = 56242850974426717LLU;

    t26 = ((x173*x174)*(x175-x176));

    if (t26 != 4294967296LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x178 = INT16_MIN;
	int16_t x179 = 15;
	volatile int8_t x180 = -7;
	volatile uint64_t t27 = 548472336196162LLU;

    t27 = ((x177*x178)*(x179-x180));

    if (t27 != 720896LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x185 = -1;
	int64_t x186 = 5068804695780LL;
	uint8_t x187 = 48U;
	static int16_t x188 = INT16_MIN;
	volatile int64_t t28 = 43111405906LL;

    t28 = ((x185*x186)*(x187-x188));

    if (t28 != -166337894896716480LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x193 = 1;
	uint32_t x194 = UINT32_MAX;
	uint16_t x196 = 51U;

    t29 = ((x193*x194)*(x195-x196));

    if (t29 != -70685377740201990LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x200 = UINT64_MAX;
	uint64_t t30 = 104481376321LLU;

    t30 = ((x197*x198)*(x199-x200));

    if (t30 != 15493505885363223040LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x205 = INT8_MIN;
	uint32_t x206 = 21U;
	int32_t x207 = -49187848;
	uint16_t x208 = 1432U;
	uint32_t t31 = 4684642U;

    t31 = ((x205*x206)*(x207-x208));

    if (t31 != 3371765760U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x214 = 312;
	uint64_t x215 = 348555118913LLU;
	volatile uint64_t t32 = 119825480896LLU;

    t32 = ((x213*x214)*(x215-x216));

    if (t32 != 18432824176482359296LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	volatile int64_t x230 = INT64_MIN;
	int32_t x231 = INT32_MIN;
	static volatile uint64_t t33 = 493LLU;

    t33 = ((x229*x230)*(x231-x232));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x249 = 26U;
	static volatile int16_t x250 = -1;
	int32_t x252 = -55409;
	volatile int64_t t34 = -502148109721LL;

    t34 = ((x249*x250)*(x251-x252));

    if (t34 != -99904662LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x254 = 1011741289LLU;
	uint32_t x256 = UINT32_MAX;

    t35 = ((x253*x254)*(x255-x256));

    if (t35 != 1591282887199824LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x257 = 11U;
	uint16_t x258 = 54U;

    t36 = ((x257*x258)*(x259-x260));

    if (t36 != 2970U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x265 = 4396549833542LLU;
	int32_t x266 = -1;
	static uint32_t x267 = 1U;
	volatile int16_t x268 = INT16_MIN;

    t37 = ((x265*x266)*(x267-x268));

    if (t37 != 18302673532214213818LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x271 = INT32_MIN;
	volatile int64_t x272 = 0LL;
	uint64_t t38 = 5456917986860549610LLU;

    t38 = ((x269*x270)*(x271-x272));

    if (t38 != 1468878815232LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x278 = -1;
	volatile int32_t x279 = -1;
	static uint8_t x280 = 2U;
	int32_t t39 = -239313;

    t39 = ((x277*x278)*(x279-x280));

    if (t39 != 2028) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x285 = INT64_MAX;
	static volatile uint64_t x286 = UINT64_MAX;
	int16_t x287 = -1;
	static int16_t x288 = INT16_MIN;

    t40 = ((x285*x286)*(x287-x288));

    if (t40 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x289 = UINT32_MAX;
	uint64_t x290 = UINT64_MAX;
	int64_t x292 = 107418LL;
	volatile uint64_t t41 = 131427869LLU;

    t41 = ((x289*x290)*(x291-x292));

    if (t41 != 461365386828901LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x301 = -1;
	uint32_t x302 = 61348U;
	uint64_t x304 = 16LLU;
	static uint64_t t42 = 7LLU;

    t42 = ((x301*x302)*(x303-x304));

    if (t42 != 9223240220014537188LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x305 = 705836448U;
	uint32_t x307 = 1551U;
	int16_t x308 = INT16_MIN;

    t43 = ((x305*x306)*(x307-x308));

    if (t43 != 3048781888U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x310 = UINT32_MAX;
	static int32_t x312 = INT32_MAX;
	int64_t t44 = 24LL;

    t44 = ((x309*x310)*(x311-x312));

    if (t44 != 9223372026117357570LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x313 = INT32_MIN;
	uint64_t x314 = 1113743988LLU;
	int16_t x315 = -1;
	volatile int64_t x316 = -344LL;
	volatile uint64_t t45 = 1121420513765521LLU;

    t45 = ((x313*x314)*(x315-x316));

    if (t45 != 9734261532040101888LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x318 = INT8_MIN;
	static uint16_t x319 = 756U;
	uint16_t x320 = UINT16_MAX;
	uint64_t t46 = 141596563704893LLU;

    t46 = ((x317*x318)*(x319-x320));

    if (t46 != 12068492079068187264LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x325 = INT8_MAX;
	int64_t x327 = -1LL;
	static int16_t x328 = INT16_MAX;
	volatile int64_t t47 = -295LL;

    t47 = ((x325*x326)*(x327-x328));

    if (t47 != -516030464LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x330 = 10293;
	int32_t x331 = -1;
	volatile int32_t t48 = 351;

    t48 = ((x329*x330)*(x331-x332));

    if (t48 != 1317504) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x337 = -1;
	int32_t x338 = INT32_MAX;
	static volatile uint64_t x339 = 1555918LLU;
	volatile uint64_t t49 = 32441447445LLU;

    t49 = ((x337*x338)*(x339-x340));

    if (t49 != 495964103496052717LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x345 = -1LL;
	static uint64_t x346 = 655435LLU;
	static uint16_t x347 = 5U;
	volatile uint64_t t50 = 7462LLU;

    t50 = ((x345*x346)*(x347-x348));

    if (t50 != 42950655550LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x349 = INT32_MIN;
	static uint64_t x350 = 526465LLU;
	int64_t x351 = INT64_MIN;
	static volatile uint64_t t51 = 199LLU;

    t51 = ((x349*x350)*(x351-x352));

    if (t51 != 18445613498730807296LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x362 = UINT32_MAX;
	uint8_t x363 = 14U;
	volatile int8_t x364 = INT8_MIN;
	volatile uint32_t t52 = 495U;

    t52 = ((x361*x362)*(x363-x364));

    if (t52 != 4294931086U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x373 = UINT8_MAX;
	volatile uint8_t x374 = UINT8_MAX;
	uint64_t x375 = UINT64_MAX;
	static volatile uint64_t t53 = 847456377510067LLU;

    t53 = ((x373*x374)*(x375-x376));

    if (t53 != 139640124146175LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x377 = 117124451973002LLU;
	int64_t x378 = -590795323LL;
	int64_t x380 = 1050240360167517LL;
	uint64_t t54 = 1113915280855137LLU;

    t54 = ((x377*x378)*(x379-x380));

    if (t54 != 6471757397542919076LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x381 = 1;
	static volatile uint8_t x382 = 1U;
	volatile uint16_t x383 = 7U;
	volatile uint8_t x384 = 99U;
	static int32_t t55 = 63215364;

    t55 = ((x381*x382)*(x383-x384));

    if (t55 != -92) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x389 = INT8_MAX;
	volatile uint64_t x390 = 980800564364LLU;
	int64_t x391 = INT64_MAX;
	volatile uint64_t x392 = 262496938127803LLU;
	static volatile uint64_t t56 = 21905526797092LLU;

    t56 = ((x389*x390)*(x391-x392));

    if (t56 != 7905370223745047248LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x401 = UINT8_MAX;
	volatile uint64_t x402 = 49665821978567LLU;
	static int32_t x404 = 5124647;

    t57 = ((x401*x402)*(x403-x404));

    if (t57 != 11079305972734311704LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x430 = INT64_MAX;
	uint64_t x431 = 441475655118LLU;
	int32_t x432 = INT32_MIN;
	uint64_t t58 = 249922561LLU;

    t58 = ((x429*x430)*(x431-x432));

    if (t58 != 5441095799913022448LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x441 = -1;
	volatile uint64_t x443 = UINT64_MAX;
	uint64_t t59 = 6854LLU;

    t59 = ((x441*x442)*(x443-x444));

    if (t59 != 18446683954781623825LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	uint8_t x446 = 1U;
	int32_t x447 = INT32_MIN;

    t60 = ((x445*x446)*(x447-x448));

    if (t60 != 2147483452LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	static int8_t x454 = INT8_MIN;
	volatile int16_t x455 = 0;
	volatile int16_t x456 = INT16_MIN;
	int32_t t61 = 249653;

    t61 = ((x453*x454)*(x455-x456));

    if (t61 != -1069547520) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x457 = -7301258256228LL;
	uint64_t x458 = 247268736LLU;
	volatile int16_t x459 = INT16_MAX;
	volatile uint64_t t62 = 141847954LLU;

    t62 = ((x457*x458)*(x459-x460));

    if (t62 != 96248906125314560LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x465 = 30U;
	uint16_t x466 = 31727U;
	int64_t x467 = -1LL;
	uint64_t x468 = 6993LLU;
	uint64_t t63 = 2763845573210524LLU;

    t63 = ((x465*x466)*(x467-x468));

    if (t63 != 18446744067052592476LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x473 = -1;
	int16_t x474 = -1;
	uint64_t x475 = 1100LLU;
	int64_t x476 = INT64_MIN;

    t64 = ((x473*x474)*(x475-x476));

    if (t64 != 9223372036854776908LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x494 = 825617565U;
	static int16_t x495 = -3;
	volatile int64_t x496 = 3467681LL;
	int64_t t65 = -98LL;

    t65 = ((x493*x494)*(x495-x496));

    if (t65 != -10950629815751516LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x501 = 174013662984LL;
	volatile int8_t x502 = 0;
	volatile uint64_t x504 = 847LLU;
	volatile uint64_t t66 = 470619448LLU;

    t66 = ((x501*x502)*(x503-x504));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x506 = -1LL;
	int8_t x507 = -1;
	volatile uint64_t t67 = 393995LLU;

    t67 = ((x505*x506)*(x507-x508));

    if (t67 != 206LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x513 = INT8_MIN;
	static volatile uint16_t x516 = 66U;
	uint64_t t68 = 6770062083LLU;

    t68 = ((x513*x514)*(x515-x516));

    if (t68 != 152352377506870016LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x521 = 11057575;
	uint32_t x522 = UINT32_MAX;
	int16_t x523 = -1;
	int32_t x524 = -1;
	volatile uint32_t t69 = 1042630U;

    t69 = ((x521*x522)*(x523-x524));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x533 = 833;
	uint16_t x534 = 8U;
	volatile int16_t x535 = INT16_MIN;
	int16_t x536 = 0;
	volatile int32_t t70 = 1;

    t70 = ((x533*x534)*(x535-x536));

    if (t70 != -218365952) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x537 = -15;
	int16_t x539 = INT16_MIN;
	uint64_t x540 = UINT64_MAX;
	static uint64_t t71 = 722077583LLU;

    t71 = ((x537*x538)*(x539-x540));

    if (t71 != 4915050LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x553 = INT16_MAX;
	int32_t x554 = -6;
	int64_t x555 = -1LL;
	int32_t x556 = -188464;

    t72 = ((x553*x554)*(x555-x556));

    if (t72 != -37052202726LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x565 = 1;
	uint64_t x566 = 6370069059518295LLU;
	uint32_t x567 = 6554788U;
	volatile uint64_t x568 = 6LLU;
	volatile uint64_t t73 = 2013114LLU;

    t73 = ((x565*x566)*(x567-x568));

    if (t73 != 9432171282733429682LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x569 = -1;
	uint8_t x571 = 10U;
	uint64_t x572 = UINT64_MAX;
	static uint64_t t74 = 635528462942816LLU;

    t74 = ((x569*x570)*(x571-x572));

    if (t74 != 33LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint32_t x573 = 2061198584U;
	volatile uint8_t x574 = 0U;
	int8_t x575 = INT8_MIN;
	volatile uint32_t x576 = 1185U;
	uint32_t t75 = 0U;

    t75 = ((x573*x574)*(x575-x576));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x578 = 397844;
	static int8_t x580 = INT8_MAX;
	volatile int32_t t76 = 3014363;

    t76 = ((x577*x578)*(x579-x580));

    if (t76 != 1425872896) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x581 = 0LLU;
	uint64_t x582 = 2087328970971626LLU;
	int8_t x583 = INT8_MAX;
	uint8_t x584 = 42U;
	volatile uint64_t t77 = 333378664462006090LLU;

    t77 = ((x581*x582)*(x583-x584));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x585 = INT8_MIN;
	volatile uint32_t x586 = 6888U;
	volatile int16_t x587 = INT16_MIN;
	static int8_t x588 = INT8_MIN;
	static uint32_t t78 = 715237641U;

    t78 = ((x585*x586)*(x587-x588));

    if (t78 != 3007709184U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x593 = 35;
	int8_t x594 = INT8_MIN;
	int8_t x596 = INT8_MIN;
	int32_t t79 = -400;

    t79 = ((x593*x594)*(x595-x596));

    if (t79 != -568960) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x605 = -36;
	int8_t x606 = -1;
	int32_t x607 = INT32_MIN;
	uint64_t x608 = 11746156LLU;
	volatile uint64_t t80 = 1595568556022LLU;

    t80 = ((x605*x606)*(x607-x608));

    if (t80 != 18446743995977278672LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x613 = INT8_MIN;
	int16_t x614 = -121;
	int64_t x615 = INT64_MIN;
	uint64_t x616 = 358590517656933192LLU;
	uint64_t t81 = 2222632210900445LLU;

    t81 = ((x613*x614)*(x615-x616));

    if (t81 != 17066772789703310336LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x617 = INT16_MIN;
	int8_t x618 = 3;
	uint64_t x619 = 158542LLU;
	volatile uint32_t x620 = UINT32_MAX;
	uint64_t t82 = 1219834699678278LLU;

    t82 = ((x617*x618)*(x619-x620));

    if (t82 != 422196879654912LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x625 = -1;
	static int8_t x626 = 0;
	uint32_t x627 = 83107934U;
	static uint32_t t83 = 122129894U;

    t83 = ((x625*x626)*(x627-x628));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x629 = INT8_MIN;
	static volatile int8_t x630 = INT8_MIN;
	int8_t x631 = -1;
	static uint8_t x632 = UINT8_MAX;
	volatile int32_t t84 = 19781;

    t84 = ((x629*x630)*(x631-x632));

    if (t84 != -4194304) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x633 = INT16_MIN;
	volatile int16_t x634 = INT16_MIN;
	volatile int32_t x635 = -1;
	int64_t t85 = 17376LL;

    t85 = ((x633*x634)*(x635-x636));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x641 = 59593911942373LLU;
	int64_t x642 = 2295772447410048128LL;
	volatile int8_t x643 = -12;
	volatile uint64_t t86 = 445275682LLU;

    t86 = ((x641*x642)*(x643-x644));

    if (t86 != 7003904429045801856LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x649 = 35U;
	volatile uint64_t x650 = UINT64_MAX;
	uint64_t x651 = UINT64_MAX;
	int32_t x652 = INT32_MAX;
	uint64_t t87 = 207LLU;

    t87 = ((x649*x650)*(x651-x652));

    if (t87 != 75161927680LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x661 = 1LLU;
	int32_t x662 = INT32_MAX;
	uint16_t x663 = 25064U;
	int32_t x664 = INT32_MAX;
	static uint64_t t88 = 348986008LLU;

    t88 = ((x661*x662)*(x663-x664));

    if (t88 != 13835111884107259415LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x669 = 62U;
	uint32_t x670 = 813752036U;
	int8_t x672 = INT8_MIN;
	uint32_t t89 = 154746U;

    t89 = ((x669*x670)*(x671-x672));

    if (t89 != 1475982448U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x685 = -31;
	uint8_t x686 = 30U;
	uint32_t x687 = 230288805U;
	static int16_t x688 = INT16_MIN;

    t90 = ((x685*x686)*(x687-x688));

    if (t90 != 549301910U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x693 = -37323945LL;
	volatile uint32_t x694 = 31714U;
	static volatile uint64_t x695 = UINT64_MAX;
	uint16_t x696 = 13295U;
	static uint64_t t91 = 735348939183LLU;

    t91 = ((x693*x694)*(x695-x696));

    if (t91 != 15738363403642080LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x701 = 3676LLU;
	int64_t x702 = -1LL;
	int8_t x703 = -1;
	static int8_t x704 = 4;

    t92 = ((x701*x702)*(x703-x704));

    if (t92 != 18380LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x705 = 413538LL;
	int16_t x706 = INT16_MIN;
	uint64_t x707 = UINT64_MAX;
	volatile uint64_t x708 = 15667226475LLU;
	uint64_t t93 = 3074173036333649314LLU;

    t93 = ((x705*x706)*(x707-x708));

    if (t93 != 9389474276889591808LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x717 = -1;
	int16_t x718 = INT16_MIN;
	static int8_t x719 = INT8_MIN;
	volatile uint32_t x720 = 102U;
	uint32_t t94 = 85U;

    t94 = ((x717*x718)*(x719-x720));

    if (t94 != 4287430656U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x725 = 6U;
	volatile int8_t x726 = INT8_MIN;
	volatile int32_t t95 = -6;

    t95 = ((x725*x726)*(x727-x728));

    if (t95 != -25279488) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x729 = 0;
	int16_t x731 = -71;
	uint8_t x732 = 53U;

    t96 = ((x729*x730)*(x731-x732));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x733 = -1LL;
	int16_t x734 = INT16_MIN;
	uint64_t t97 = 14504LLU;

    t97 = ((x733*x734)*(x735-x736));

    if (t97 != 18446741618664833024LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x742 = -1LL;
	int8_t x743 = 26;
	volatile int16_t x744 = -1457;
	int64_t t98 = 759833110491221LL;

    t98 = ((x741*x742)*(x743-x744));

    if (t98 != -3184718248501LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x754 = UINT32_MAX;
	volatile int8_t x755 = -1;
	volatile uint64_t x756 = UINT64_MAX;
	volatile uint64_t t99 = 13LLU;

    t99 = ((x753*x754)*(x755-x756));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x764 = INT8_MIN;
	volatile uint32_t t100 = 1722U;

    t100 = ((x761*x762)*(x763-x764));

    if (t100 != 3186660008U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x770 = UINT8_MAX;
	static volatile int8_t x771 = -1;
	int8_t x772 = INT8_MAX;
	static uint64_t t101 = 21039LLU;

    t101 = ((x769*x770)*(x771-x772));

    if (t101 != 18446744073707625856LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x777 = 2U;
	static int16_t x778 = -1829;
	uint16_t x779 = UINT16_MAX;
	uint16_t x780 = 17587U;
	static int32_t t102 = -3482615;

    t102 = ((x777*x778)*(x779-x780));

    if (t102 != -175393784) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x785 = -3;
	volatile uint64_t x786 = 17LLU;
	int8_t x787 = INT8_MAX;
	volatile uint16_t x788 = 14U;
	uint64_t t103 = 202876078029184LLU;

    t103 = ((x785*x786)*(x787-x788));

    if (t103 != 18446744073709545853LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x805 = -1;
	volatile int64_t x807 = 12182516431222093LL;
	uint32_t x808 = UINT32_MAX;
	int64_t t104 = -1346492182782115664LL;

    t104 = ((x805*x806)*(x807-x808));

    if (t104 != -584760582540230304LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x809 = 6790652U;
	int64_t x810 = -1LL;
	static uint8_t x812 = 3U;
	volatile int64_t t105 = -214281282874LL;

    t105 = ((x809*x810)*(x811-x812));

    if (t105 != -14582814102095888LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x813 = UINT64_MAX;
	static uint32_t x816 = UINT32_MAX;
	volatile uint64_t t106 = 3LLU;

    t106 = ((x813*x814)*(x815-x816));

    if (t106 != 128LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x817 = 14077798226952LLU;
	static int64_t x818 = 16962265798LL;
	static uint64_t x820 = UINT64_MAX;
	volatile uint64_t t107 = 277LLU;

    t107 = ((x817*x818)*(x819-x820));

    if (t107 != 16913756282854463520LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x821 = UINT8_MAX;
	int8_t x822 = -1;
	volatile int8_t x823 = INT8_MAX;
	int8_t x824 = INT8_MIN;
	int32_t t108 = -699219959;

    t108 = ((x821*x822)*(x823-x824));

    if (t108 != -65025) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x834 = UINT8_MAX;
	uint16_t x835 = UINT16_MAX;
	static int8_t x836 = INT8_MIN;
	int32_t t109 = 10;

    t109 = ((x833*x834)*(x835-x836));

    if (t109 != -16744065) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x837 = 3U;
	int16_t x839 = INT16_MIN;
	volatile int8_t x840 = INT8_MIN;
	static volatile int64_t t110 = -6902752LL;

    t110 = ((x837*x838)*(x839-x840));

    if (t110 != 3686073974864974080LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x853 = -1;
	uint64_t x854 = 10470055529482LLU;
	volatile int64_t x856 = INT64_MAX;

    t111 = ((x853*x854)*(x855-x856));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x861 = UINT8_MAX;
	volatile uint16_t x862 = 3U;
	int64_t x863 = -3511773068172246LL;
	int16_t x864 = -85;
	int64_t t112 = 2235361502408160LL;

    t112 = ((x861*x862)*(x863-x864));

    if (t112 != -2686506397151703165LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x865 = -1;
	static volatile int8_t x866 = INT8_MIN;
	int64_t x868 = 287560LL;
	int64_t t113 = -368016767LL;

    t113 = ((x865*x866)*(x867-x868));

    if (t113 != 549719006080LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x869 = 1U;
	uint64_t x870 = 7098691681526158257LLU;
	volatile int16_t x871 = INT16_MIN;
	uint16_t x872 = 1851U;

    t114 = ((x869*x870)*(x871-x872));

    if (t114 != 16363971278283480885LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x877 = 423455562U;
	int16_t x878 = INT16_MIN;
	uint16_t x879 = 424U;
	uint8_t x880 = UINT8_MAX;
	volatile uint32_t t115 = 18776U;

    t115 = ((x877*x878)*(x879-x880));

    if (t115 != 370343936U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x897 = -1;
	int16_t x898 = INT16_MAX;
	static int8_t x899 = -1;
	volatile int64_t t116 = 22391718448073608LL;

    t116 = ((x897*x898)*(x899-x900));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x901 = 864881994509LLU;
	int16_t x903 = -1;
	static uint32_t x904 = 1889761537U;
	volatile uint64_t t117 = 768LLU;

    t117 = ((x901*x902)*(x903-x904));

    if (t117 != 12633140093269864618LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x905 = 33717138208LLU;
	static int16_t x906 = INT16_MIN;
	int64_t x907 = -1032650805468891LL;
	int32_t x908 = -266779105;
	volatile uint64_t t118 = 446602371794LLU;

    t118 = ((x905*x906)*(x907-x908));

    if (t118 != 13404905921031700480LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x909 = -737;
	int8_t x911 = INT8_MIN;
	int32_t x912 = -833;
	static uint64_t t119 = 137315695387LLU;

    t119 = ((x909*x910)*(x911-x912));

    if (t119 != 18446744073279854821LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x917 = -15552;
	int64_t x918 = -1LL;
	volatile int8_t x919 = INT8_MAX;
	volatile int64_t t120 = 1891913715828LL;

    t120 = ((x917*x918)*(x919-x920));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x925 = -1;
	int64_t x926 = 128LL;
	int16_t x927 = -164;
	volatile int64_t t121 = -11432005672710LL;

    t121 = ((x925*x926)*(x927-x928));

    if (t121 != 8409472LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x937 = INT32_MIN;
	int32_t x939 = INT32_MAX;
	int32_t x940 = INT32_MAX;
	uint32_t t122 = 993963U;

    t122 = ((x937*x938)*(x939-x940));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x945 = 11U;
	static volatile int16_t x946 = -1;
	volatile int32_t x948 = 128013;
	int32_t t123 = 450299571;

    t123 = ((x945*x946)*(x947-x948));

    if (t123 != 687258) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x949 = 1U;
	volatile int8_t x950 = 0;
	static int16_t x952 = INT16_MAX;
	volatile int32_t t124 = 7665454;

    t124 = ((x949*x950)*(x951-x952));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x961 = -28;
	int32_t t125 = 41152507;

    t125 = ((x961*x962)*(x963-x964));

    if (t125 != -458752) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x965 = 209888687204390LLU;
	uint8_t x966 = 8U;
	static int32_t x967 = INT32_MIN;
	int32_t x968 = INT32_MIN;
	uint64_t t126 = 51LLU;

    t126 = ((x965*x966)*(x967-x968));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x981 = -1LL;
	uint16_t x982 = 958U;
	volatile int16_t x983 = INT16_MIN;
	static int16_t x984 = -7;
	static volatile int64_t t127 = 332911520LL;

    t127 = ((x981*x982)*(x983-x984));

    if (t127 != 31385038LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x990 = -60246109LL;
	int8_t x991 = -1;
	int16_t x992 = 5;
	int64_t t128 = 33899418286234802LL;

    t128 = ((x989*x990)*(x991-x992));

    if (t128 != -11844866998272LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x1010 = -126315839;
	volatile int64_t x1011 = -1LL;

    t129 = ((x1009*x1010)*(x1011-x1012));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x1017 = UINT32_MAX;
	uint64_t x1018 = 17495005567812871LLU;
	int8_t x1019 = INT8_MIN;
	int32_t x1020 = 314;
	volatile uint64_t t130 = 3513054315686LLU;

    t130 = ((x1017*x1018)*(x1019-x1020));

    if (t130 != 9020349069912026646LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x1021 = 1612826U;
	uint64_t x1022 = UINT64_MAX;
	int8_t x1023 = -14;
	uint64_t t131 = 104LLU;

    t131 = ((x1021*x1022)*(x1023-x1024));

    if (t131 != 32256520LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1025 = INT16_MAX;
	uint64_t x1026 = 565238089LLU;
	uint64_t x1027 = UINT64_MAX;
	volatile int16_t x1028 = -1;

    t132 = ((x1025*x1026)*(x1027-x1028));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x1029 = -1510;
	volatile int8_t x1030 = -1;
	volatile uint32_t x1031 = 264319U;
	volatile uint32_t t133 = 2U;

    t133 = ((x1029*x1030)*(x1031-x1032));

    if (t133 != 399121690U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x1041 = 0;
	uint64_t x1042 = 547033437919LLU;
	static int16_t x1043 = INT16_MIN;
	static volatile int16_t x1044 = -1;
	uint64_t t134 = 413389135509949LLU;

    t134 = ((x1041*x1042)*(x1043-x1044));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x1053 = 9940U;
	uint16_t x1054 = UINT16_MAX;
	uint8_t x1055 = 2U;
	uint8_t x1056 = 1U;
	int32_t t135 = 19231;

    t135 = ((x1053*x1054)*(x1055-x1056));

    if (t135 != 651417900) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x1065 = INT8_MAX;
	uint8_t x1068 = 6U;

    t136 = ((x1065*x1066)*(x1067-x1068));

    if (t136 != 4124344320U) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x1069 = UINT64_MAX;
	int32_t x1070 = -730236786;
	int16_t x1071 = INT16_MAX;
	static int32_t x1072 = 8;
	uint64_t t137 = 52LLU;

    t137 = ((x1069*x1070)*(x1071-x1072));

    if (t137 != 23921826872574LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1077 = INT64_MAX;
	volatile uint64_t x1078 = UINT64_MAX;
	static volatile int32_t x1079 = -1;
	uint32_t x1080 = UINT32_MAX;
	uint64_t t138 = 32925816216LLU;

    t138 = ((x1077*x1078)*(x1079-x1080));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x1081 = 12276LLU;
	uint64_t x1082 = 87LLU;
	volatile uint16_t x1084 = 8U;
	volatile uint64_t t139 = 10747741862810LLU;

    t139 = ((x1081*x1082)*(x1083-x1084));

    if (t139 != 7476084LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1085 = 1U;
	int32_t x1086 = INT32_MIN;
	int32_t x1087 = -1;
	uint32_t x1088 = 1295522U;
	volatile uint32_t t140 = 5042205U;

    t140 = ((x1085*x1086)*(x1087-x1088));

    if (t140 != 2147483648U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x1089 = UINT32_MAX;
	int16_t x1090 = INT16_MIN;
	int64_t x1092 = -21546518719500LL;

    t141 = ((x1089*x1090)*(x1091-x1092));

    if (t141 != 706036325396381696LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1093 = INT32_MIN;
	uint64_t x1094 = 15447339LLU;
	int16_t x1095 = -16278;
	uint64_t t142 = 2819324565033764794LLU;

    t142 = ((x1093*x1094)*(x1095-x1096));

    if (t142 != 9245976086808887296LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x1097 = 7U;
	uint32_t x1098 = UINT32_MAX;
	int16_t x1099 = -1;
	uint32_t t143 = 106247610U;

    t143 = ((x1097*x1098)*(x1099-x1100));

    if (t143 != 28U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x1106 = 351U;
	int64_t x1107 = 18LL;
	static int16_t x1108 = 40;
	volatile int64_t t144 = -344945LL;

    t144 = ((x1105*x1106)*(x1107-x1108));

    if (t144 != -115830LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1109 = -1;
	int16_t x1110 = INT16_MAX;
	static int16_t x1112 = INT16_MAX;

    t145 = ((x1109*x1110)*(x1111-x1112));

    if (t145 != 5196878168389798633LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1118 = 28;
	uint8_t x1119 = 13U;
	uint64_t x1120 = UINT64_MAX;

    t146 = ((x1117*x1118)*(x1119-x1120));

    if (t146 != 49784LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1122 = INT8_MIN;
	volatile uint8_t x1123 = 32U;
	int32_t x1124 = INT32_MAX;
	int64_t t147 = -1050872854973LL;

    t147 = ((x1121*x1122)*(x1123-x1124));

    if (t147 != -274877902720LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x1125 = UINT32_MAX;
	int16_t x1126 = INT16_MIN;
	uint32_t t148 = 24U;

    t148 = ((x1125*x1126)*(x1127-x1128));

    if (t148 != 4290772992U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1133 = -1;
	uint32_t x1135 = UINT32_MAX;
	int16_t x1136 = -1;
	static uint32_t t149 = 1866088U;

    t149 = ((x1133*x1134)*(x1135-x1136));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1137 = INT16_MIN;
	uint64_t x1140 = 127367190894826LLU;

    t150 = ((x1137*x1138)*(x1139-x1140));

    if (t150 != 4011744312096129024LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1159 = INT8_MIN;
	static uint64_t x1160 = 1LLU;
	static uint64_t t151 = 2177477226424537760LLU;

    t151 = ((x1157*x1158)*(x1159-x1160));

    if (t151 != 26387724LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x1161 = 1;
	volatile int16_t x1162 = -6990;
	int8_t x1163 = 24;
	static int32_t x1164 = -1;

    t152 = ((x1161*x1162)*(x1163-x1164));

    if (t152 != -174750) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x1169 = INT16_MIN;
	static int8_t x1170 = INT8_MAX;
	int32_t x1171 = -39;
	uint32_t x1172 = UINT32_MAX;
	volatile uint32_t t153 = 1978156649U;

    t153 = ((x1169*x1170)*(x1171-x1172));

    if (t153 != 158138368U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1175 = -1;
	int32_t x1176 = -1;

    t154 = ((x1173*x1174)*(x1175-x1176));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1189 = -1;
	static uint64_t x1190 = UINT64_MAX;

    t155 = ((x1189*x1190)*(x1191-x1192));

    if (t155 != 117775LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1193 = 492844761U;
	uint64_t x1194 = UINT64_MAX;
	volatile int16_t x1196 = 0;
	uint64_t t156 = 1232900285797LLU;

    t156 = ((x1193*x1194)*(x1195-x1196));

    if (t156 != 11828274264LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x1205 = 837128981179890940LLU;
	int16_t x1207 = INT16_MIN;
	int64_t x1208 = INT64_MIN;

    t157 = ((x1205*x1206)*(x1207-x1208));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1209 = UINT64_MAX;
	int8_t x1210 = INT8_MIN;
	volatile uint64_t x1211 = 14786021762LLU;
	int64_t x1212 = INT64_MAX;
	uint64_t t158 = 202416504340712LLU;

    t158 = ((x1209*x1210)*(x1211-x1212));

    if (t158 != 1892610785664LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1225 = INT16_MIN;
	uint32_t x1227 = 465820299U;
	uint8_t x1228 = UINT8_MAX;

    t159 = ((x1225*x1226)*(x1227-x1228));

    if (t159 != 579207168U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1229 = INT8_MIN;
	int8_t x1230 = 27;
	uint16_t x1231 = 6U;
	static volatile uint64_t x1232 = UINT64_MAX;
	volatile uint64_t t160 = 8954582675046LLU;

    t160 = ((x1229*x1230)*(x1231-x1232));

    if (t160 != 18446744073709527424LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1233 = -14;
	static int16_t x1234 = INT16_MIN;
	volatile int64_t x1235 = -1LL;
	volatile int64_t t161 = -265360059102451653LL;

    t161 = ((x1233*x1234)*(x1235-x1236));

    if (t161 != -779419648LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1237 = 29U;
	static int64_t x1238 = -1LL;
	uint16_t x1239 = UINT16_MAX;
	volatile int64_t t162 = -8922706949465069LL;

    t162 = ((x1237*x1238)*(x1239-x1240));

    if (t162 != -1901095LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x1245 = INT16_MIN;
	int8_t x1246 = -1;
	uint16_t x1247 = UINT16_MAX;
	int64_t x1248 = -1243480698LL;
	int64_t t163 = -392216060015499LL;

    t163 = ((x1245*x1246)*(x1247-x1248));

    if (t163 != 40748522962944LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1249 = INT8_MIN;
	volatile uint64_t x1250 = UINT64_MAX;
	static int16_t x1252 = 10;
	static uint64_t t164 = 210449LLU;

    t164 = ((x1249*x1250)*(x1251-x1252));

    if (t164 != 8387200LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1257 = 211U;
	int16_t x1260 = 1;

    t165 = ((x1257*x1258)*(x1259-x1260));

    if (t165 != -1756168192) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1266 = INT16_MAX;
	uint8_t x1267 = 0U;
	volatile uint64_t t166 = 5072883940825014157LLU;

    t166 = ((x1265*x1266)*(x1267-x1268));

    if (t166 != 11168076969194487808LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x1273 = UINT8_MAX;
	int32_t x1275 = -3666;
	static int32_t x1276 = INT32_MIN;
	static uint32_t t167 = 1063U;

    t167 = ((x1273*x1274)*(x1275-x1276));

    if (t167 != 4188597672U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1277 = 2;
	int8_t x1278 = INT8_MIN;
	volatile int16_t x1280 = -1038;
	volatile int64_t t168 = 1463844LL;

    t168 = ((x1277*x1278)*(x1279-x1280));

    if (t168 != -265472LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1281 = INT16_MIN;
	volatile int64_t x1282 = -1LL;
	int64_t x1283 = -1423LL;
	static int32_t x1284 = -3;
	int64_t t169 = 391688966LL;

    t169 = ((x1281*x1282)*(x1283-x1284));

    if (t169 != -46530560LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1285 = 1;
	uint8_t x1286 = 3U;
	int8_t x1287 = INT8_MIN;
	static int8_t x1288 = -1;
	static int32_t t170 = -690199483;

    t170 = ((x1285*x1286)*(x1287-x1288));

    if (t170 != -381) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1289 = -1;
	uint16_t x1290 = UINT16_MAX;
	int32_t x1291 = INT32_MIN;
	int64_t t171 = 25554927936176LL;

    t171 = ((x1289*x1290)*(x1291-x1292));

    if (t171 != 4530436828951248345LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint32_t x1297 = UINT32_MAX;
	static int32_t x1298 = INT32_MIN;
	volatile int64_t x1299 = INT64_MIN;
	uint64_t x1300 = 136LLU;
	volatile uint64_t t172 = 627336LLU;

    t172 = ((x1297*x1298)*(x1299-x1300));

    if (t172 != 18446743781651775488LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1301 = UINT64_MAX;
	uint8_t x1302 = UINT8_MAX;
	uint32_t x1304 = 6355838U;
	volatile uint64_t t173 = 48LLU;

    t173 = ((x1301*x1302)*(x1303-x1304));

    if (t173 != 18446742980113630081LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x1313 = 47331LL;
	static int32_t x1314 = INT32_MIN;
	uint32_t x1315 = 427U;
	volatile int16_t x1316 = INT16_MIN;
	static int64_t t174 = 1277700LL;

    t174 = ((x1313*x1314)*(x1315-x1316));

    if (t174 != -3374024398901084160LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1317 = -1;
	uint64_t t175 = 22229681LLU;

    t175 = ((x1317*x1318)*(x1319-x1320));

    if (t175 != 9223372036854775902LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1321 = 28955660U;
	volatile int8_t x1322 = 44;
	int16_t x1323 = INT16_MIN;
	uint16_t x1324 = 27U;
	static volatile uint32_t t176 = 163846218U;

    t176 = ((x1321*x1322)*(x1323-x1324));

    if (t176 != 3298555984U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x1326 = INT32_MIN;
	uint64_t t177 = 1604734LLU;

    t177 = ((x1325*x1326)*(x1327-x1328));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1333 = UINT64_MAX;
	volatile int16_t x1334 = 6;
	int16_t x1335 = -1;
	int8_t x1336 = 1;
	volatile uint64_t t178 = 1LLU;

    t178 = ((x1333*x1334)*(x1335-x1336));

    if (t178 != 12LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1338 = -41;
	int8_t x1339 = INT8_MIN;

    t179 = ((x1337*x1338)*(x1339-x1340));

    if (t179 != -5207) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x1350 = -1;
	uint16_t x1351 = UINT16_MAX;
	int32_t x1352 = 94733436;

    t180 = ((x1349*x1350)*(x1351-x1352));

    if (t180 != 94667901) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1353 = 0;
	static int32_t x1354 = INT32_MIN;
	int64_t x1356 = INT64_MIN;
	volatile int64_t t181 = 103361718304184LL;

    t181 = ((x1353*x1354)*(x1355-x1356));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1357 = 1;
	int16_t x1358 = INT16_MIN;
	static uint32_t x1359 = UINT32_MAX;
	int16_t x1360 = INT16_MIN;
	volatile uint32_t t182 = 68526644U;

    t182 = ((x1357*x1358)*(x1359-x1360));

    if (t182 != 3221258240U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x1369 = -1;
	uint64_t x1370 = 4936626776LLU;
	uint64_t x1371 = 7223LLU;
	uint32_t x1372 = 113U;
	volatile uint64_t t183 = 18573817211990741LLU;

    t183 = ((x1369*x1370)*(x1371-x1372));

    if (t183 != 18446708974293174256LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1381 = 11260873;
	static uint64_t x1382 = 1LLU;
	int64_t x1383 = -1LL;
	volatile uint64_t t184 = 4LLU;

    t184 = ((x1381*x1382)*(x1383-x1384));

    if (t184 != 18446743704713265152LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1385 = 621U;
	volatile int16_t x1386 = 358;
	int32_t x1387 = -1;
	int16_t x1388 = -1;

    t185 = ((x1385*x1386)*(x1387-x1388));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1413 = -1;
	uint16_t x1414 = 118U;
	static volatile uint16_t x1416 = 10657U;
	static int32_t t186 = -1;

    t186 = ((x1413*x1414)*(x1415-x1416));

    if (t186 != 1252452) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x1417 = 0LLU;
	int32_t x1418 = 1;
	volatile int64_t x1419 = -15589350953863LL;
	uint64_t x1420 = 20227871178477LLU;
	uint64_t t187 = 215248577836894LLU;

    t187 = ((x1417*x1418)*(x1419-x1420));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1429 = 4393;
	static volatile int64_t x1431 = INT64_MAX;
	volatile uint64_t x1432 = 471007315781188LLU;
	uint64_t t188 = 1LLU;

    t188 = ((x1429*x1430)*(x1431-x1432));

    if (t188 != 16549489926607137037LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1445 = UINT16_MAX;
	uint8_t x1446 = 1U;
	volatile int8_t x1447 = INT8_MAX;
	uint64_t x1448 = UINT64_MAX;
	volatile uint64_t t189 = 188692000LLU;

    t189 = ((x1445*x1446)*(x1447-x1448));

    if (t189 != 8388480LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1466 = -1;
	int32_t x1467 = INT32_MAX;
	volatile int16_t x1468 = 21;
	static volatile int32_t t190 = 86757;

    t190 = ((x1465*x1466)*(x1467-x1468));

    if (t190 != 2147483626) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1469 = INT16_MIN;
	int64_t x1470 = -1LL;
	int8_t x1471 = INT8_MAX;
	int16_t x1472 = 0;
	int64_t t191 = -8930765586LL;

    t191 = ((x1469*x1470)*(x1471-x1472));

    if (t191 != 4161536LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1473 = INT32_MIN;
	static volatile uint32_t x1474 = UINT32_MAX;
	uint64_t x1476 = 4337568281396469064LLU;
	static volatile uint64_t t192 = 19LLU;

    t192 = ((x1473*x1474)*(x1475-x1476));

    if (t192 != 15217189644362842112LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1477 = -1;
	int64_t x1478 = -35LL;
	static uint8_t x1479 = UINT8_MAX;
	volatile int64_t x1480 = 103227001LL;
	int64_t t193 = -98LL;

    t193 = ((x1477*x1478)*(x1479-x1480));

    if (t193 != -3612936110LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1482 = INT8_MIN;
	int32_t x1483 = 7;
	uint16_t x1484 = 655U;
	volatile int32_t t194 = -154193;

    t194 = ((x1481*x1482)*(x1483-x1484));

    if (t194 != -82944) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1485 = UINT64_MAX;
	int32_t x1486 = -87;
	static uint64_t x1487 = 458181358068158424LLU;
	static int32_t x1488 = INT32_MIN;
	volatile uint64_t t195 = 266412454521711167LLU;

    t195 = ((x1485*x1486)*(x1487-x1488));

    if (t195 != 2968290191341757032LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1489 = 1925095100U;
	int16_t x1490 = INT16_MAX;
	int8_t x1491 = INT8_MIN;
	volatile uint16_t x1492 = 22522U;
	uint32_t t196 = 22138U;

    t196 = ((x1489*x1490)*(x1491-x1492));

    if (t196 != 312231320U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1493 = 1669U;
	int8_t x1494 = INT8_MAX;
	static volatile int8_t x1495 = 1;
	int16_t x1496 = INT16_MAX;

    t197 = ((x1493*x1494)*(x1495-x1496));

    if (t197 != 1644754934U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1501 = INT16_MAX;
	int16_t x1502 = INT16_MAX;
	int32_t x1503 = INT32_MIN;
	uint32_t x1504 = UINT32_MAX;

    t198 = ((x1501*x1502)*(x1503-x1504));

    if (t198 != 3221159937U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1505 = 4148371715LLU;
	uint16_t x1506 = 2850U;
	int16_t x1507 = INT16_MIN;
	int32_t x1508 = -1825156;
	static volatile uint64_t t199 = 34LLU;

    t199 = ((x1505*x1506)*(x1507-x1508));

    if (t199 != 2744407218580895384LLU) { NG(); } else { ; }
	
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

