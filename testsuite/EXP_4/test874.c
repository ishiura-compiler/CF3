
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

static int32_t x15 = INT32_MIN;
static uint16_t x40 = 1U;
static int32_t t3 = 853;
int16_t x41 = 13342;
int8_t x42 = 2;
int8_t x48 = INT8_MAX;
static uint32_t t5 = 20393859U;
int16_t x51 = INT16_MIN;
volatile uint16_t x63 = 121U;
uint32_t x67 = 3226747U;
int16_t x78 = -1;
int32_t x108 = 595682474;
static volatile int64_t t13 = 23378258139359LL;
int32_t x118 = 1773;
uint16_t x120 = 953U;
volatile int32_t x146 = -23;
volatile int8_t x153 = 22;
static volatile int64_t x155 = INT64_MAX;
int8_t x159 = INT8_MIN;
int64_t x170 = INT64_MAX;
int32_t t21 = 1233;
uint64_t x181 = 142LLU;
volatile uint64_t t22 = 56LLU;
volatile int64_t x186 = -1LL;
int32_t t23 = 13;
uint64_t x192 = 2257059489698128LLU;
volatile int32_t t26 = 1;
uint8_t x213 = UINT8_MAX;
static volatile int32_t t27 = 0;
uint32_t x232 = 2575U;
static int64_t x236 = INT64_MIN;
volatile int64_t x248 = INT64_MIN;
static int32_t x251 = 180762;
uint32_t x252 = UINT32_MAX;
int32_t t31 = -258780;
uint16_t x261 = 497U;
volatile uint16_t x266 = 15U;
static int8_t x267 = INT8_MIN;
uint64_t x274 = 1LLU;
static uint64_t x275 = UINT64_MAX;
static uint64_t x277 = 66964897059LLU;
static uint16_t x290 = UINT16_MAX;
int32_t t37 = -121639;
int16_t x298 = INT16_MIN;
static int32_t t38 = -9;
static uint32_t x302 = 91753156U;
volatile int64_t x320 = -372037868572LL;
volatile uint64_t x327 = 538999208242089LLU;
int8_t x333 = 11;
static volatile int32_t x336 = INT32_MIN;
int64_t x338 = INT64_MAX;
uint64_t x339 = UINT64_MAX;
volatile int32_t t44 = -3;
static uint16_t x341 = UINT16_MAX;
static volatile int32_t t51 = -3335;
int64_t x387 = 7688997057657107LL;
int64_t x390 = INT64_MAX;
uint8_t x397 = UINT8_MAX;
volatile uint32_t t56 = 1295U;
int64_t x415 = INT64_MAX;
volatile int64_t x425 = 34285111031719LL;
int16_t x428 = 1;
int8_t x432 = INT8_MAX;
volatile int64_t x447 = INT64_MAX;
volatile int32_t t63 = -8154;
static int8_t x462 = INT8_MAX;
static volatile uint32_t x482 = 14413U;
int64_t x484 = -1LL;
int16_t x485 = 1918;
static uint32_t t67 = 2U;
int32_t x519 = INT32_MIN;
uint16_t x520 = UINT16_MAX;
uint16_t x524 = UINT16_MAX;
uint32_t x538 = UINT32_MAX;
int32_t t71 = 56439;
uint8_t x544 = 90U;
volatile int32_t t72 = 1;
int16_t x547 = -1;
int32_t x548 = -1;
static uint32_t x569 = 583325795U;
static int32_t x578 = 17768454;
int8_t x579 = -7;
int32_t t79 = -36665;
int64_t x582 = INT64_MIN;
int32_t x584 = INT32_MAX;
int64_t x587 = 85LL;
volatile int8_t x588 = 61;
volatile uint32_t t81 = 380307U;
int32_t x594 = INT32_MAX;
static uint8_t x601 = 26U;
uint32_t x602 = 1893109U;
int16_t x604 = -1160;
uint8_t x617 = 1U;
int32_t x619 = 177;
int32_t x626 = -1;
int32_t t88 = -5;
volatile uint8_t x638 = UINT8_MAX;
uint8_t x639 = UINT8_MAX;
volatile int32_t t89 = -1;
static int32_t t90 = 1862;
int32_t t92 = -37183946;
uint32_t x684 = 148893U;
uint16_t x697 = 15U;
int64_t x700 = INT64_MAX;
uint32_t x701 = 486629U;
int64_t x703 = INT64_MAX;
int16_t x704 = -1;
int8_t x713 = 2;
volatile int32_t t96 = -3875700;
volatile int32_t x717 = 2;
int16_t x721 = INT16_MAX;
uint32_t x722 = 3U;
int32_t x723 = -2868187;
static int32_t x730 = -15004554;
int32_t x736 = INT32_MIN;
int16_t x739 = 1552;
volatile int32_t t102 = 861712;
static uint64_t x751 = 5993158944LLU;
int64_t x763 = INT64_MIN;
int64_t x764 = -1LL;
static int32_t t105 = 5;
int16_t x774 = -1;
int32_t x780 = 241631287;
int8_t x785 = 10;
uint32_t x792 = UINT32_MAX;
static int8_t x793 = 1;
static int32_t t110 = 14;
int64_t x804 = -2493483161LL;
int8_t x813 = 1;
int32_t x814 = 305519696;
int16_t x815 = -1;
static volatile uint16_t x816 = UINT16_MAX;
uint16_t x822 = UINT16_MAX;
volatile uint64_t x826 = 1987954270478LLU;
int64_t x846 = INT64_MIN;
uint64_t x858 = 10598087080362LLU;
static volatile uint32_t t118 = 63152824U;
int64_t x864 = INT64_MIN;
static int32_t x911 = INT32_MIN;
static int16_t x913 = INT16_MAX;
static int16_t x915 = 145;
static volatile int32_t t125 = -519040;
volatile int32_t x939 = INT32_MIN;
uint8_t x940 = 30U;
static uint8_t x941 = 3U;
int8_t x943 = INT8_MAX;
int64_t x960 = INT64_MIN;
int64_t x964 = INT64_MAX;
int16_t x966 = INT16_MIN;
static int16_t x978 = 338;
uint8_t x990 = UINT8_MAX;
int32_t x992 = -1;
int16_t x998 = INT16_MIN;
int32_t x1000 = INT32_MAX;
uint32_t t137 = 6U;
volatile int32_t x1002 = INT32_MAX;
int32_t t138 = -21;
uint32_t x1010 = 56307U;
uint8_t x1021 = 1U;
uint64_t x1036 = UINT64_MAX;
volatile int32_t t143 = -91747;
static int16_t x1041 = 15;
static int16_t x1043 = 15014;
int32_t x1044 = 5329678;
uint8_t x1045 = UINT8_MAX;
int8_t x1046 = -1;
uint32_t x1048 = 1257U;
uint64_t x1049 = 746947514599348LLU;
static int64_t x1050 = -3668LL;
volatile int64_t t147 = 22553650364LL;
volatile int32_t x1080 = 726;
volatile int32_t t153 = 85;
uint16_t x1113 = 1U;
uint64_t x1118 = UINT64_MAX;
int32_t x1119 = INT32_MIN;
uint16_t x1120 = 3U;
int16_t x1123 = 29;
static int64_t x1124 = -683758LL;
uint32_t x1130 = UINT32_MAX;
volatile uint32_t x1141 = UINT32_MAX;
uint64_t x1142 = 453386017LLU;
int8_t x1143 = -7;
uint32_t x1153 = 255363U;
uint8_t x1159 = 0U;
uint32_t t160 = 16765U;
int16_t x1163 = INT16_MAX;
uint8_t x1177 = 5U;
volatile uint8_t x1180 = 99U;
int64_t x1197 = 9813266638919900LL;
uint8_t x1206 = UINT8_MAX;
int16_t x1207 = -6292;
static int64_t x1215 = INT64_MIN;
int32_t t167 = 30;
uint16_t x1241 = UINT16_MAX;
volatile int8_t x1242 = 0;
volatile uint64_t x1252 = UINT64_MAX;
int64_t x1272 = INT64_MAX;
int32_t t175 = -126716;
uint32_t x1286 = 23U;
uint32_t x1287 = 893588U;
static int8_t x1294 = INT8_MIN;
int32_t x1295 = INT32_MAX;
static int64_t x1296 = -1LL;
volatile int32_t x1298 = -1;
int32_t x1300 = INT32_MAX;
int8_t x1319 = INT8_MAX;
int8_t x1329 = 2;
int8_t x1343 = -1;
uint32_t t184 = 713U;
static int64_t x1387 = INT64_MIN;
volatile int32_t t187 = -17571479;
volatile int8_t x1396 = INT8_MIN;
volatile int32_t t188 = 3;
uint8_t x1397 = 0U;
int16_t x1399 = 2;
volatile int32_t t190 = 36105770;
static volatile int32_t t191 = -1;
uint64_t x1425 = UINT64_MAX;
uint32_t t193 = 8U;
uint64_t t194 = 38952617983521867LLU;
volatile uint32_t x1462 = UINT32_MAX;
uint16_t x1464 = UINT16_MAX;
int64_t x1467 = INT64_MIN;


void f0(void) {
    	int64_t x13 = 0LL;
	int16_t x14 = INT16_MIN;
	uint8_t x16 = 45U;
	static int64_t t0 = -2694462032695898906LL;

    t0 = (x13<<(x14!=(x15%x16)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x17 = UINT64_MAX;
	volatile int16_t x18 = 2;
	uint16_t x19 = UINT16_MAX;
	int32_t x20 = INT32_MAX;
	volatile uint64_t t1 = 217474900LLU;

    t1 = (x17<<(x18!=(x19%x20)));

    if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x29 = UINT32_MAX;
	static uint64_t x30 = 502974008476LLU;
	int8_t x31 = -6;
	int32_t x32 = -29209961;
	uint32_t t2 = 60U;

    t2 = (x29<<(x30!=(x31%x32)));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x37 = 1U;
	int16_t x38 = -52;
	uint8_t x39 = 5U;

    t3 = (x37<<(x38!=(x39%x40)));

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x43 = INT8_MIN;
	static int32_t x44 = -1;
	volatile int32_t t4 = 101040;

    t4 = (x41<<(x42!=(x43%x44)));

    if (t4 != 26684) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x45 = 150U;
	uint32_t x46 = UINT32_MAX;
	uint16_t x47 = 795U;

    t5 = (x45<<(x46!=(x47%x48)));

    if (t5 != 300U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x49 = 20987U;
	static int64_t x50 = -1LL;
	static int8_t x52 = INT8_MIN;
	static volatile int32_t t6 = 38893;

    t6 = (x49<<(x50!=(x51%x52)));

    if (t6 != 41974) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x61 = 3513975781383612336LLU;
	int32_t x62 = -1403;
	uint16_t x64 = UINT16_MAX;
	volatile uint64_t t7 = 68628850365LLU;

    t7 = (x61<<(x62!=(x63%x64)));

    if (t7 != 7027951562767224672LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x65 = 218U;
	volatile int16_t x66 = -709;
	volatile int8_t x68 = -1;
	int32_t t8 = -1593;

    t8 = (x65<<(x66!=(x67%x68)));

    if (t8 != 436) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x77 = 40191161LLU;
	uint32_t x79 = 66592781U;
	uint32_t x80 = UINT32_MAX;
	uint64_t t9 = 849946432LLU;

    t9 = (x77<<(x78!=(x79%x80)));

    if (t9 != 80382322LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x81 = 28735;
	volatile uint32_t x82 = UINT32_MAX;
	static uint64_t x83 = UINT64_MAX;
	volatile int16_t x84 = INT16_MAX;
	int32_t t10 = 3368280;

    t10 = (x81<<(x82!=(x83%x84)));

    if (t10 != 57470) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x85 = 60373292U;
	volatile int8_t x86 = INT8_MAX;
	volatile uint64_t x87 = 1122347107861526LLU;
	int32_t x88 = INT32_MIN;
	volatile uint32_t t11 = 1765919672U;

    t11 = (x85<<(x86!=(x87%x88)));

    if (t11 != 120746584U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x89 = UINT8_MAX;
	uint32_t x90 = 18093U;
	static int16_t x91 = INT16_MIN;
	static uint16_t x92 = 2U;
	static int32_t t12 = -408812630;

    t12 = (x89<<(x90!=(x91%x92)));

    if (t12 != 510) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x105 = 2201285908LL;
	static int64_t x106 = -1LL;
	int32_t x107 = INT32_MAX;

    t13 = (x105<<(x106!=(x107%x108)));

    if (t13 != 4402571816LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x117 = UINT32_MAX;
	uint16_t x119 = 3074U;
	volatile uint32_t t14 = 31465768U;

    t14 = (x117<<(x118!=(x119%x120)));

    if (t14 != 4294967294U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x125 = 903U;
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	int16_t x128 = INT16_MIN;
	static int32_t t15 = 5533314;

    t15 = (x125<<(x126!=(x127%x128)));

    if (t15 != 1806) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x141 = 621140342LL;
	uint32_t x142 = UINT32_MAX;
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = 1;
	volatile int64_t t16 = -980236335573094574LL;

    t16 = (x141<<(x142!=(x143%x144)));

    if (t16 != 1242280684LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x145 = UINT64_MAX;
	static volatile int16_t x147 = -1;
	static int8_t x148 = -1;
	static volatile uint64_t t17 = 17100742LLU;

    t17 = (x145<<(x146!=(x147%x148)));

    if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x154 = INT64_MIN;
	int16_t x156 = INT16_MIN;
	volatile int32_t t18 = 1;

    t18 = (x153<<(x154!=(x155%x156)));

    if (t18 != 44) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x157 = 9263846LLU;
	volatile int8_t x158 = -6;
	volatile int8_t x160 = INT8_MIN;
	static volatile uint64_t t19 = 4210846090710780502LLU;

    t19 = (x157<<(x158!=(x159%x160)));

    if (t19 != 18527692LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x169 = 14U;
	volatile uint8_t x171 = 1U;
	static uint8_t x172 = 1U;
	int32_t t20 = 137346867;

    t20 = (x169<<(x170!=(x171%x172)));

    if (t20 != 28) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x177 = INT16_MAX;
	int64_t x178 = INT64_MAX;
	int64_t x179 = -4443868296LL;
	int32_t x180 = -1;

    t21 = (x177<<(x178!=(x179%x180)));

    if (t21 != 65534) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x182 = 211U;
	uint16_t x183 = 3U;
	int16_t x184 = INT16_MIN;

    t22 = (x181<<(x182!=(x183%x184)));

    if (t22 != 284LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x185 = UINT8_MAX;
	static uint16_t x187 = 1746U;
	static int16_t x188 = -6780;

    t23 = (x185<<(x186!=(x187%x188)));

    if (t23 != 510) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x189 = UINT8_MAX;
	static uint16_t x190 = 71U;
	volatile uint8_t x191 = UINT8_MAX;
	int32_t t24 = 36;

    t24 = (x189<<(x190!=(x191%x192)));

    if (t24 != 510) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x205 = 25239;
	static int64_t x206 = INT64_MAX;
	uint64_t x207 = UINT64_MAX;
	int8_t x208 = 1;
	static int32_t t25 = -1;

    t25 = (x205<<(x206!=(x207%x208)));

    if (t25 != 50478) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x209 = 25U;
	static uint16_t x210 = UINT16_MAX;
	int16_t x211 = INT16_MAX;
	int16_t x212 = INT16_MIN;

    t26 = (x209<<(x210!=(x211%x212)));

    if (t26 != 50) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x214 = INT8_MAX;
	static volatile uint64_t x215 = 2LLU;
	int16_t x216 = INT16_MAX;

    t27 = (x213<<(x214!=(x215%x216)));

    if (t27 != 510) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x229 = UINT32_MAX;
	uint64_t x230 = UINT64_MAX;
	int32_t x231 = INT32_MIN;
	uint32_t t28 = 505273U;

    t28 = (x229<<(x230!=(x231%x232)));

    if (t28 != 4294967294U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x233 = 215U;
	static int8_t x234 = -1;
	static uint64_t x235 = 1LLU;
	static volatile int32_t t29 = -335;

    t29 = (x233<<(x234!=(x235%x236)));

    if (t29 != 430) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x245 = INT16_MAX;
	uint16_t x246 = 5682U;
	uint8_t x247 = 10U;
	int32_t t30 = -40356;

    t30 = (x245<<(x246!=(x247%x248)));

    if (t30 != 65534) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x249 = UINT16_MAX;
	static uint8_t x250 = UINT8_MAX;

    t31 = (x249<<(x250!=(x251%x252)));

    if (t31 != 131070) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x262 = 46U;
	uint8_t x263 = UINT8_MAX;
	int16_t x264 = 3723;
	volatile int32_t t32 = 912;

    t32 = (x261<<(x262!=(x263%x264)));

    if (t32 != 994) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x265 = 17U;
	volatile int16_t x268 = -1;
	volatile int32_t t33 = 6017910;

    t33 = (x265<<(x266!=(x267%x268)));

    if (t33 != 34) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	uint32_t x276 = UINT32_MAX;
	int32_t t34 = 460182520;

    t34 = (x273<<(x274!=(x275%x276)));

    if (t34 != 510) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x278 = 15U;
	volatile int64_t x279 = INT64_MIN;
	int16_t x280 = -1;
	uint64_t t35 = 1096911601929252LLU;

    t35 = (x277<<(x278!=(x279%x280)));

    if (t35 != 133929794118LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x281 = 938;
	uint16_t x282 = 1U;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 29U;
	int32_t t36 = 434904;

    t36 = (x281<<(x282!=(x283%x284)));

    if (t36 != 1876) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x289 = 54;
	int8_t x291 = INT8_MIN;
	static uint64_t x292 = 1LLU;

    t37 = (x289<<(x290!=(x291%x292)));

    if (t37 != 108) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x297 = 0;
	uint32_t x299 = 212226U;
	uint32_t x300 = 5173860U;

    t38 = (x297<<(x298!=(x299%x300)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x301 = 10U;
	uint32_t x303 = 12U;
	int64_t x304 = -1LL;
	volatile int32_t t39 = -3389185;

    t39 = (x301<<(x302!=(x303%x304)));

    if (t39 != 20) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x309 = 1556184LL;
	volatile int32_t x310 = 1;
	int32_t x311 = 0;
	int64_t x312 = 2454878834LL;
	volatile int64_t t40 = 26351453534LL;

    t40 = (x309<<(x310!=(x311%x312)));

    if (t40 != 3112368LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x317 = 3U;
	volatile uint64_t x318 = 2365771948LLU;
	int64_t x319 = -241335235138859986LL;
	volatile int32_t t41 = 113765;

    t41 = (x317<<(x318!=(x319%x320)));

    if (t41 != 6) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x325 = 2U;
	static volatile uint16_t x326 = 356U;
	int8_t x328 = -2;
	volatile int32_t t42 = -412170;

    t42 = (x325<<(x326!=(x327%x328)));

    if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x334 = 668;
	static int16_t x335 = -1;
	int32_t t43 = 29601861;

    t43 = (x333<<(x334!=(x335%x336)));

    if (t43 != 22) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x337 = UINT8_MAX;
	uint8_t x340 = UINT8_MAX;

    t44 = (x337<<(x338!=(x339%x340)));

    if (t44 != 510) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x342 = UINT64_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	volatile int16_t x344 = -1;
	int32_t t45 = 31;

    t45 = (x341<<(x342!=(x343%x344)));

    if (t45 != 131070) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x345 = 3U;
	volatile int16_t x346 = INT16_MIN;
	static int8_t x347 = INT8_MIN;
	uint16_t x348 = 9U;
	int32_t t46 = 340;

    t46 = (x345<<(x346!=(x347%x348)));

    if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x349 = 28846090135487LLU;
	int16_t x350 = INT16_MIN;
	static int8_t x351 = 10;
	static volatile int16_t x352 = INT16_MAX;
	uint64_t t47 = 747271516LLU;

    t47 = (x349<<(x350!=(x351%x352)));

    if (t47 != 57692180270974LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x361 = 4969;
	int16_t x362 = -445;
	int16_t x363 = INT16_MIN;
	volatile int16_t x364 = -1;
	int32_t t48 = -1682;

    t48 = (x361<<(x362!=(x363%x364)));

    if (t48 != 9938) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x365 = 123726U;
	int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MAX;
	uint16_t x368 = 326U;
	static uint32_t t49 = 100663611U;

    t49 = (x365<<(x366!=(x367%x368)));

    if (t49 != 247452U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x373 = 2U;
	int32_t x374 = -1;
	uint32_t x375 = UINT32_MAX;
	int16_t x376 = -1;
	volatile int32_t t50 = -110452;

    t50 = (x373<<(x374!=(x375%x376)));

    if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x377 = 1;
	int8_t x378 = INT8_MIN;
	int8_t x379 = -1;
	static int64_t x380 = -66137240LL;

    t51 = (x377<<(x378!=(x379%x380)));

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x385 = 4U;
	static int32_t x386 = INT32_MIN;
	int8_t x388 = -1;
	volatile int32_t t52 = -1284;

    t52 = (x385<<(x386!=(x387%x388)));

    if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x389 = 19U;
	int16_t x391 = -1;
	uint8_t x392 = 8U;
	static volatile uint32_t t53 = 5167U;

    t53 = (x389<<(x390!=(x391%x392)));

    if (t53 != 38U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x398 = 191233LL;
	static uint32_t x399 = UINT32_MAX;
	int32_t x400 = 53;
	volatile int32_t t54 = 63775196;

    t54 = (x397<<(x398!=(x399%x400)));

    if (t54 != 510) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x401 = 3407U;
	static uint32_t x402 = 106761U;
	int32_t x403 = INT32_MIN;
	uint8_t x404 = 17U;
	volatile int32_t t55 = -1;

    t55 = (x401<<(x402!=(x403%x404)));

    if (t55 != 6814) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x409 = UINT32_MAX;
	int64_t x410 = -297776404473303224LL;
	uint32_t x411 = 9U;
	uint64_t x412 = 3221616694266400559LLU;

    t56 = (x409<<(x410!=(x411%x412)));

    if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x413 = INT16_MAX;
	int32_t x414 = 156321;
	int64_t x416 = -1280005740881LL;
	volatile int32_t t57 = 41725734;

    t57 = (x413<<(x414!=(x415%x416)));

    if (t57 != 65534) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x426 = UINT16_MAX;
	static int16_t x427 = -9;
	int64_t t58 = 227095087LL;

    t58 = (x425<<(x426!=(x427%x428)));

    if (t58 != 68570222063438LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x429 = INT16_MAX;
	int16_t x430 = INT16_MIN;
	static uint32_t x431 = UINT32_MAX;
	int32_t t59 = -18;

    t59 = (x429<<(x430!=(x431%x432)));

    if (t59 != 65534) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x433 = UINT8_MAX;
	uint16_t x434 = 8564U;
	uint8_t x435 = 83U;
	volatile int64_t x436 = -1LL;
	volatile int32_t t60 = 1;

    t60 = (x433<<(x434!=(x435%x436)));

    if (t60 != 510) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint8_t x445 = 3U;
	static int32_t x446 = INT32_MIN;
	int16_t x448 = -1;
	volatile int32_t t61 = 0;

    t61 = (x445<<(x446!=(x447%x448)));

    if (t61 != 6) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x449 = 2U;
	volatile int16_t x450 = 3;
	int16_t x451 = INT16_MIN;
	int64_t x452 = 28135424464286217LL;
	volatile int32_t t62 = 15020;

    t62 = (x449<<(x450!=(x451%x452)));

    if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x457 = 31;
	static int16_t x458 = 1;
	volatile int16_t x459 = INT16_MAX;
	int8_t x460 = INT8_MIN;

    t63 = (x457<<(x458!=(x459%x460)));

    if (t63 != 62) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x461 = 2680067784LLU;
	int32_t x463 = INT32_MIN;
	int16_t x464 = INT16_MIN;
	volatile uint64_t t64 = 1276645LLU;

    t64 = (x461<<(x462!=(x463%x464)));

    if (t64 != 5360135568LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x481 = 1853U;
	int8_t x483 = 4;
	uint32_t t65 = 475816005U;

    t65 = (x481<<(x482!=(x483%x484)));

    if (t65 != 3706U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x486 = -2;
	int64_t x487 = 6421597579LL;
	int64_t x488 = INT64_MAX;
	int32_t t66 = 827824233;

    t66 = (x485<<(x486!=(x487%x488)));

    if (t66 != 3836) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x505 = 39432U;
	int8_t x506 = INT8_MAX;
	int16_t x507 = -83;
	int32_t x508 = -1;

    t67 = (x505<<(x506!=(x507%x508)));

    if (t67 != 78864U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x517 = UINT32_MAX;
	volatile int32_t x518 = INT32_MIN;
	static volatile uint32_t t68 = 0U;

    t68 = (x517<<(x518!=(x519%x520)));

    if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x521 = UINT8_MAX;
	uint64_t x522 = 243022078429153LLU;
	static uint64_t x523 = 56408LLU;
	volatile int32_t t69 = 175;

    t69 = (x521<<(x522!=(x523%x524)));

    if (t69 != 510) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x533 = UINT64_MAX;
	uint64_t x534 = UINT64_MAX;
	uint8_t x535 = UINT8_MAX;
	uint16_t x536 = UINT16_MAX;
	uint64_t t70 = 11522530913LLU;

    t70 = (x533<<(x534!=(x535%x536)));

    if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x537 = 111U;
	uint32_t x539 = UINT32_MAX;
	int8_t x540 = INT8_MIN;

    t71 = (x537<<(x538!=(x539%x540)));

    if (t71 != 222) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x541 = 1;
	uint8_t x542 = 11U;
	int16_t x543 = INT16_MAX;

    t72 = (x541<<(x542!=(x543%x544)));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x545 = UINT16_MAX;
	int64_t x546 = -1LL;
	volatile int32_t t73 = -830196265;

    t73 = (x545<<(x546!=(x547%x548)));

    if (t73 != 131070) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x553 = 47216644U;
	int16_t x554 = INT16_MAX;
	int8_t x555 = INT8_MIN;
	static int8_t x556 = INT8_MIN;
	volatile uint32_t t74 = 82U;

    t74 = (x553<<(x554!=(x555%x556)));

    if (t74 != 94433288U) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x561 = 0U;
	uint16_t x562 = 22U;
	volatile int8_t x563 = 0;
	int16_t x564 = INT16_MAX;
	volatile int32_t t75 = 359;

    t75 = (x561<<(x562!=(x563%x564)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x565 = UINT32_MAX;
	int64_t x566 = -1LL;
	int64_t x567 = 2414LL;
	int32_t x568 = -1;
	volatile uint32_t t76 = 236058391U;

    t76 = (x565<<(x566!=(x567%x568)));

    if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x570 = INT32_MAX;
	uint8_t x571 = UINT8_MAX;
	volatile int8_t x572 = -3;
	uint32_t t77 = 53U;

    t77 = (x569<<(x570!=(x571%x572)));

    if (t77 != 1166651590U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x573 = UINT32_MAX;
	int64_t x574 = INT64_MIN;
	uint8_t x575 = UINT8_MAX;
	static int32_t x576 = 27097632;
	volatile uint32_t t78 = 11133U;

    t78 = (x573<<(x574!=(x575%x576)));

    if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x577 = INT8_MAX;
	int32_t x580 = INT32_MAX;

    t79 = (x577<<(x578!=(x579%x580)));

    if (t79 != 254) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x581 = 1784LLU;
	volatile uint64_t x583 = 40LLU;
	volatile uint64_t t80 = 318060372LLU;

    t80 = (x581<<(x582!=(x583%x584)));

    if (t80 != 3568LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x585 = 33493U;
	int64_t x586 = 7084367743LL;

    t81 = (x585<<(x586!=(x587%x588)));

    if (t81 != 66986U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x589 = 66057U;
	int8_t x590 = -1;
	static int16_t x591 = INT16_MIN;
	uint8_t x592 = 23U;
	volatile uint32_t t82 = 2483U;

    t82 = (x589<<(x590!=(x591%x592)));

    if (t82 != 132114U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x593 = UINT32_MAX;
	uint16_t x595 = UINT16_MAX;
	int8_t x596 = INT8_MAX;
	uint32_t t83 = 1532U;

    t83 = (x593<<(x594!=(x595%x596)));

    if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x603 = 6U;
	volatile int32_t t84 = 1;

    t84 = (x601<<(x602!=(x603%x604)));

    if (t84 != 52) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x613 = 4;
	volatile int64_t x614 = INT64_MAX;
	uint8_t x615 = 15U;
	uint64_t x616 = UINT64_MAX;
	volatile int32_t t85 = 651754;

    t85 = (x613<<(x614!=(x615%x616)));

    if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x618 = INT32_MIN;
	int32_t x620 = -200594;
	int32_t t86 = -256059176;

    t86 = (x617<<(x618!=(x619%x620)));

    if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x625 = 71LLU;
	static int32_t x627 = -1;
	int8_t x628 = 1;
	volatile uint64_t t87 = 2024640LLU;

    t87 = (x625<<(x626!=(x627%x628)));

    if (t87 != 142LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x633 = INT16_MAX;
	int8_t x634 = INT8_MAX;
	int32_t x635 = INT32_MIN;
	uint8_t x636 = 14U;

    t88 = (x633<<(x634!=(x635%x636)));

    if (t88 != 65534) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x637 = 25;
	static int32_t x640 = INT32_MAX;

    t89 = (x637<<(x638!=(x639%x640)));

    if (t89 != 25) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x649 = 4407U;
	static int16_t x650 = INT16_MAX;
	int64_t x651 = -54018581829111615LL;
	int32_t x652 = -604859;

    t90 = (x649<<(x650!=(x651%x652)));

    if (t90 != 8814) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x657 = 7U;
	int16_t x658 = INT16_MIN;
	static int8_t x659 = INT8_MIN;
	static int64_t x660 = INT64_MIN;
	volatile uint32_t t91 = 15U;

    t91 = (x657<<(x658!=(x659%x660)));

    if (t91 != 14U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x673 = 5;
	int8_t x674 = -1;
	int8_t x675 = -1;
	int64_t x676 = -1LL;

    t92 = (x673<<(x674!=(x675%x676)));

    if (t92 != 10) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x681 = UINT8_MAX;
	volatile int16_t x682 = -1;
	volatile int8_t x683 = 13;
	static int32_t t93 = 12;

    t93 = (x681<<(x682!=(x683%x684)));

    if (t93 != 510) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x698 = INT8_MAX;
	uint32_t x699 = UINT32_MAX;
	volatile int32_t t94 = 217386001;

    t94 = (x697<<(x698!=(x699%x700)));

    if (t94 != 30) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x702 = 8LLU;
	volatile uint32_t t95 = 177496U;

    t95 = (x701<<(x702!=(x703%x704)));

    if (t95 != 973258U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x714 = INT16_MAX;
	static uint16_t x715 = 1U;
	int64_t x716 = INT64_MIN;

    t96 = (x713<<(x714!=(x715%x716)));

    if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x718 = 8U;
	volatile int8_t x719 = INT8_MIN;
	volatile int32_t x720 = 253;
	volatile int32_t t97 = -1;

    t97 = (x717<<(x718!=(x719%x720)));

    if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x724 = -106262561345LL;
	volatile int32_t t98 = -230347;

    t98 = (x721<<(x722!=(x723%x724)));

    if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x729 = INT16_MAX;
	static uint8_t x731 = UINT8_MAX;
	static volatile uint16_t x732 = 7023U;
	int32_t t99 = -1;

    t99 = (x729<<(x730!=(x731%x732)));

    if (t99 != 65534) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x733 = UINT32_MAX;
	uint8_t x734 = 0U;
	volatile int16_t x735 = -2274;
	volatile uint32_t t100 = 57225U;

    t100 = (x733<<(x734!=(x735%x736)));

    if (t100 != 4294967294U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x737 = 3247;
	uint8_t x738 = 58U;
	static int16_t x740 = -969;
	volatile int32_t t101 = 167366;

    t101 = (x737<<(x738!=(x739%x740)));

    if (t101 != 6494) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x741 = 54U;
	uint8_t x742 = 4U;
	volatile int32_t x743 = -16949776;
	uint32_t x744 = 1634655946U;

    t102 = (x741<<(x742!=(x743%x744)));

    if (t102 != 108) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x749 = 57U;
	int64_t x750 = INT64_MAX;
	int32_t x752 = INT32_MIN;
	volatile int32_t t103 = -220199;

    t103 = (x749<<(x750!=(x751%x752)));

    if (t103 != 114) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x761 = 769773U;
	volatile int64_t x762 = -522770415997650LL;
	static uint32_t t104 = 3U;

    t104 = (x761<<(x762!=(x763%x764)));

    if (t104 != 1539546U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x765 = 352U;
	uint8_t x766 = 0U;
	volatile int8_t x767 = INT8_MAX;
	uint16_t x768 = 1U;

    t105 = (x765<<(x766!=(x767%x768)));

    if (t105 != 352) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x773 = 2369757816331802LLU;
	int32_t x775 = INT32_MIN;
	int8_t x776 = 25;
	volatile uint64_t t106 = 325LLU;

    t106 = (x773<<(x774!=(x775%x776)));

    if (t106 != 4739515632663604LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x777 = UINT8_MAX;
	int8_t x778 = INT8_MIN;
	int8_t x779 = INT8_MIN;
	volatile int32_t t107 = 231;

    t107 = (x777<<(x778!=(x779%x780)));

    if (t107 != 255) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x786 = INT32_MIN;
	int32_t x787 = INT32_MAX;
	static int8_t x788 = 3;
	int32_t t108 = -4;

    t108 = (x785<<(x786!=(x787%x788)));

    if (t108 != 20) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x789 = UINT32_MAX;
	uint64_t x790 = 638LLU;
	uint32_t x791 = 597795479U;
	volatile uint32_t t109 = 1752U;

    t109 = (x789<<(x790!=(x791%x792)));

    if (t109 != 4294967294U) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x794 = INT64_MIN;
	int64_t x795 = -131680312992LL;
	uint16_t x796 = 26236U;

    t110 = (x793<<(x794!=(x795%x796)));

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x801 = 3276U;
	volatile int64_t x802 = 134432418LL;
	static volatile uint64_t x803 = 19197530757343532LLU;
	uint32_t t111 = 754944952U;

    t111 = (x801<<(x802!=(x803%x804)));

    if (t111 != 6552U) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t t112 = 215472775;

    t112 = (x813<<(x814!=(x815%x816)));

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x817 = 1;
	static uint64_t x818 = 28806884709297LLU;
	volatile int8_t x819 = -1;
	uint16_t x820 = 37U;
	int32_t t113 = -13;

    t113 = (x817<<(x818!=(x819%x820)));

    if (t113 != 2) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x821 = 1U;
	uint16_t x823 = 415U;
	uint64_t x824 = UINT64_MAX;
	static int32_t t114 = -870;

    t114 = (x821<<(x822!=(x823%x824)));

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x825 = UINT32_MAX;
	int32_t x827 = INT32_MAX;
	int8_t x828 = 24;
	static volatile uint32_t t115 = 0U;

    t115 = (x825<<(x826!=(x827%x828)));

    if (t115 != 4294967294U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x841 = 97;
	uint64_t x842 = 794323781230003499LLU;
	volatile int16_t x843 = -203;
	volatile uint32_t x844 = UINT32_MAX;
	int32_t t116 = -15;

    t116 = (x841<<(x842!=(x843%x844)));

    if (t116 != 194) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x845 = 1U;
	static int8_t x847 = INT8_MAX;
	int64_t x848 = INT64_MIN;
	volatile int32_t t117 = 3021;

    t117 = (x845<<(x846!=(x847%x848)));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x857 = 4U;
	int16_t x859 = 1;
	volatile int64_t x860 = INT64_MIN;

    t118 = (x857<<(x858!=(x859%x860)));

    if (t118 != 8U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x861 = UINT32_MAX;
	static uint32_t x862 = UINT32_MAX;
	uint32_t x863 = 9901U;
	uint32_t t119 = 179647744U;

    t119 = (x861<<(x862!=(x863%x864)));

    if (t119 != 4294967294U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x865 = INT16_MAX;
	static int64_t x866 = INT64_MIN;
	static uint8_t x867 = UINT8_MAX;
	uint32_t x868 = 3093U;
	volatile int32_t t120 = 6838075;

    t120 = (x865<<(x866!=(x867%x868)));

    if (t120 != 65534) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x885 = 14U;
	uint32_t x886 = UINT32_MAX;
	uint32_t x887 = 325U;
	volatile int32_t x888 = -1;
	volatile int32_t t121 = 2272;

    t121 = (x885<<(x886!=(x887%x888)));

    if (t121 != 28) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x893 = UINT32_MAX;
	static volatile int16_t x894 = -1;
	int64_t x895 = -709219290162753LL;
	uint8_t x896 = 2U;
	static uint32_t t122 = UINT32_MAX;

    t122 = (x893<<(x894!=(x895%x896)));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x905 = 1U;
	uint8_t x906 = UINT8_MAX;
	int64_t x907 = INT64_MIN;
	int64_t x908 = 3768391466LL;
	volatile uint32_t t123 = 453U;

    t123 = (x905<<(x906!=(x907%x908)));

    if (t123 != 2U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x909 = 76;
	int8_t x910 = INT8_MIN;
	int8_t x912 = -1;
	volatile int32_t t124 = -1000;

    t124 = (x909<<(x910!=(x911%x912)));

    if (t124 != 152) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x914 = 6039U;
	uint8_t x916 = 6U;

    t125 = (x913<<(x914!=(x915%x916)));

    if (t125 != 65534) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x925 = UINT32_MAX;
	volatile int8_t x926 = INT8_MIN;
	uint16_t x927 = 471U;
	static volatile int64_t x928 = INT64_MAX;
	volatile uint32_t t126 = 31296683U;

    t126 = (x925<<(x926!=(x927%x928)));

    if (t126 != 4294967294U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x937 = 11U;
	static int64_t x938 = 3032623681LL;
	int32_t t127 = -154356970;

    t127 = (x937<<(x938!=(x939%x940)));

    if (t127 != 22) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x942 = 7;
	int16_t x944 = INT16_MIN;
	volatile int32_t t128 = 886653;

    t128 = (x941<<(x942!=(x943%x944)));

    if (t128 != 6) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x957 = UINT16_MAX;
	uint32_t x958 = 901139U;
	static int8_t x959 = INT8_MIN;
	int32_t t129 = -11;

    t129 = (x957<<(x958!=(x959%x960)));

    if (t129 != 131070) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x961 = INT16_MAX;
	volatile int16_t x962 = INT16_MIN;
	int8_t x963 = INT8_MIN;
	volatile int32_t t130 = -815171;

    t130 = (x961<<(x962!=(x963%x964)));

    if (t130 != 65534) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x965 = 31LL;
	volatile int8_t x967 = INT8_MIN;
	int32_t x968 = INT32_MIN;
	static volatile int64_t t131 = 3676LL;

    t131 = (x965<<(x966!=(x967%x968)));

    if (t131 != 62LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x969 = 6U;
	static int8_t x970 = INT8_MIN;
	uint64_t x971 = 211645042924959270LLU;
	static int32_t x972 = -170702;
	volatile int32_t t132 = -1;

    t132 = (x969<<(x970!=(x971%x972)));

    if (t132 != 12) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x977 = UINT16_MAX;
	static int64_t x979 = -1LL;
	int16_t x980 = INT16_MAX;
	int32_t t133 = 6278888;

    t133 = (x977<<(x978!=(x979%x980)));

    if (t133 != 131070) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x981 = UINT32_MAX;
	static volatile uint32_t x982 = 11604664U;
	int32_t x983 = INT32_MAX;
	int16_t x984 = INT16_MIN;
	uint32_t t134 = 476U;

    t134 = (x981<<(x982!=(x983%x984)));

    if (t134 != 4294967294U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x989 = 7LLU;
	int16_t x991 = INT16_MAX;
	volatile uint64_t t135 = 152LLU;

    t135 = (x989<<(x990!=(x991%x992)));

    if (t135 != 14LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x993 = UINT16_MAX;
	uint64_t x994 = UINT64_MAX;
	int64_t x995 = INT64_MAX;
	int8_t x996 = INT8_MIN;
	static int32_t t136 = 3;

    t136 = (x993<<(x994!=(x995%x996)));

    if (t136 != 131070) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x997 = 76U;
	int32_t x999 = INT32_MAX;

    t137 = (x997<<(x998!=(x999%x1000)));

    if (t137 != 152U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1001 = 526;
	static uint32_t x1003 = 6779722U;
	int16_t x1004 = -1;

    t138 = (x1001<<(x1002!=(x1003%x1004)));

    if (t138 != 1052) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x1005 = UINT16_MAX;
	int8_t x1006 = INT8_MIN;
	uint16_t x1007 = 6U;
	int8_t x1008 = -1;
	volatile int32_t t139 = 3;

    t139 = (x1005<<(x1006!=(x1007%x1008)));

    if (t139 != 131070) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x1009 = UINT16_MAX;
	uint32_t x1011 = 27540014U;
	int32_t x1012 = -1;
	volatile int32_t t140 = -1232;

    t140 = (x1009<<(x1010!=(x1011%x1012)));

    if (t140 != 131070) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1022 = INT16_MIN;
	int16_t x1023 = INT16_MIN;
	int64_t x1024 = -1LL;
	volatile int32_t t141 = -10045813;

    t141 = (x1021<<(x1022!=(x1023%x1024)));

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x1025 = 155687794;
	uint64_t x1026 = 27913287143464LLU;
	uint32_t x1027 = 2780U;
	volatile int16_t x1028 = INT16_MIN;
	static int32_t t142 = -17;

    t142 = (x1025<<(x1026!=(x1027%x1028)));

    if (t142 != 311375588) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1033 = INT8_MAX;
	volatile int16_t x1034 = 0;
	int64_t x1035 = -1LL;

    t143 = (x1033<<(x1034!=(x1035%x1036)));

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x1042 = UINT64_MAX;
	int32_t t144 = -424;

    t144 = (x1041<<(x1042!=(x1043%x1044)));

    if (t144 != 30) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x1047 = 133477936473LLU;
	volatile int32_t t145 = -119;

    t145 = (x1045<<(x1046!=(x1047%x1048)));

    if (t145 != 510) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1051 = INT8_MIN;
	int16_t x1052 = -149;
	volatile uint64_t t146 = 31694483789106203LLU;

    t146 = (x1049<<(x1050!=(x1051%x1052)));

    if (t146 != 1493895029198696LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x1057 = 111785LL;
	int16_t x1058 = 17;
	static uint64_t x1059 = 524729260406972485LLU;
	int32_t x1060 = INT32_MAX;

    t147 = (x1057<<(x1058!=(x1059%x1060)));

    if (t147 != 223570LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x1061 = 126716691725LL;
	volatile int32_t x1062 = INT32_MIN;
	static int32_t x1063 = 55293180;
	uint16_t x1064 = UINT16_MAX;
	volatile int64_t t148 = 245149927236557LL;

    t148 = (x1061<<(x1062!=(x1063%x1064)));

    if (t148 != 253433383450LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x1077 = 9;
	volatile uint32_t x1078 = 1U;
	uint32_t x1079 = UINT32_MAX;
	volatile int32_t t149 = -6215014;

    t149 = (x1077<<(x1078!=(x1079%x1080)));

    if (t149 != 18) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x1085 = 53;
	int64_t x1086 = INT64_MIN;
	uint8_t x1087 = 29U;
	uint16_t x1088 = UINT16_MAX;
	int32_t t150 = -2217502;

    t150 = (x1085<<(x1086!=(x1087%x1088)));

    if (t150 != 106) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1097 = 20;
	static int8_t x1098 = -1;
	uint16_t x1099 = UINT16_MAX;
	int8_t x1100 = -55;
	int32_t t151 = 294603061;

    t151 = (x1097<<(x1098!=(x1099%x1100)));

    if (t151 != 40) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1101 = 6U;
	uint16_t x1102 = UINT16_MAX;
	volatile uint8_t x1103 = UINT8_MAX;
	uint64_t x1104 = 1719164362LLU;
	int32_t t152 = 1005943832;

    t152 = (x1101<<(x1102!=(x1103%x1104)));

    if (t152 != 12) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1105 = INT8_MAX;
	uint8_t x1106 = 4U;
	uint8_t x1107 = UINT8_MAX;
	static int8_t x1108 = INT8_MAX;

    t153 = (x1105<<(x1106!=(x1107%x1108)));

    if (t153 != 254) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1114 = 31381862786324LL;
	volatile int32_t x1115 = 570;
	uint32_t x1116 = 1626667377U;
	int32_t t154 = 3624384;

    t154 = (x1113<<(x1114!=(x1115%x1116)));

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1117 = 1417937U;
	uint32_t t155 = 3477036U;

    t155 = (x1117<<(x1118!=(x1119%x1120)));

    if (t155 != 2835874U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1121 = INT16_MAX;
	volatile int16_t x1122 = INT16_MAX;
	static int32_t t156 = -2;

    t156 = (x1121<<(x1122!=(x1123%x1124)));

    if (t156 != 65534) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1129 = UINT32_MAX;
	static uint64_t x1131 = 1168LLU;
	int16_t x1132 = -2540;
	volatile uint32_t t157 = 392636U;

    t157 = (x1129<<(x1130!=(x1131%x1132)));

    if (t157 != 4294967294U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1144 = 148;
	uint32_t t158 = 342564509U;

    t158 = (x1141<<(x1142!=(x1143%x1144)));

    if (t158 != 4294967294U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1154 = INT8_MIN;
	volatile int64_t x1155 = -1LL;
	volatile int64_t x1156 = INT64_MIN;
	static uint32_t t159 = 109631U;

    t159 = (x1153<<(x1154!=(x1155%x1156)));

    if (t159 != 510726U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1157 = 11049U;
	static int16_t x1158 = INT16_MAX;
	int8_t x1160 = 49;

    t160 = (x1157<<(x1158!=(x1159%x1160)));

    if (t160 != 22098U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1161 = UINT64_MAX;
	static volatile uint8_t x1162 = 12U;
	int32_t x1164 = 31658;
	uint64_t t161 = 0LLU;

    t161 = (x1161<<(x1162!=(x1163%x1164)));

    if (t161 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x1165 = UINT64_MAX;
	uint64_t x1166 = UINT64_MAX;
	int16_t x1167 = -313;
	int16_t x1168 = INT16_MIN;
	volatile uint64_t t162 = 4227965336899794652LLU;

    t162 = (x1165<<(x1166!=(x1167%x1168)));

    if (t162 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x1178 = 112729760U;
	static uint16_t x1179 = 1U;
	volatile int32_t t163 = 62032317;

    t163 = (x1177<<(x1178!=(x1179%x1180)));

    if (t163 != 10) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1198 = -1LL;
	int8_t x1199 = INT8_MIN;
	volatile uint64_t x1200 = 9209688469052LLU;
	volatile int64_t t164 = 45379989639245LL;

    t164 = (x1197<<(x1198!=(x1199%x1200)));

    if (t164 != 19626533277839800LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1205 = 97U;
	int64_t x1208 = INT64_MAX;
	volatile int32_t t165 = -1739;

    t165 = (x1205<<(x1206!=(x1207%x1208)));

    if (t165 != 194) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x1209 = INT8_MAX;
	int16_t x1210 = -259;
	static volatile int8_t x1211 = INT8_MAX;
	static int32_t x1212 = INT32_MAX;
	volatile int32_t t166 = 25404282;

    t166 = (x1209<<(x1210!=(x1211%x1212)));

    if (t166 != 254) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1213 = UINT8_MAX;
	int64_t x1214 = INT64_MIN;
	int64_t x1216 = 49199071622843818LL;

    t167 = (x1213<<(x1214!=(x1215%x1216)));

    if (t167 != 510) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint64_t x1217 = 0LLU;
	uint16_t x1218 = UINT16_MAX;
	uint8_t x1219 = 61U;
	int8_t x1220 = INT8_MIN;
	uint64_t t168 = 136880135476618820LLU;

    t168 = (x1217<<(x1218!=(x1219%x1220)));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x1221 = UINT8_MAX;
	static int8_t x1222 = 1;
	uint16_t x1223 = UINT16_MAX;
	int8_t x1224 = -1;
	int32_t t169 = -199104;

    t169 = (x1221<<(x1222!=(x1223%x1224)));

    if (t169 != 510) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1225 = INT16_MAX;
	uint32_t x1226 = 706937578U;
	int64_t x1227 = -809702262239126897LL;
	static int8_t x1228 = INT8_MIN;
	static volatile int32_t t170 = 208804;

    t170 = (x1225<<(x1226!=(x1227%x1228)));

    if (t170 != 65534) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1233 = 0U;
	volatile int8_t x1234 = 0;
	int8_t x1235 = INT8_MAX;
	int16_t x1236 = -1;
	int32_t t171 = -89690;

    t171 = (x1233<<(x1234!=(x1235%x1236)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x1243 = INT8_MIN;
	static int8_t x1244 = INT8_MIN;
	int32_t t172 = -3092;

    t172 = (x1241<<(x1242!=(x1243%x1244)));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1249 = 357310939LL;
	uint32_t x1250 = 21U;
	int16_t x1251 = -1;
	static int64_t t173 = 750LL;

    t173 = (x1249<<(x1250!=(x1251%x1252)));

    if (t173 != 714621878LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x1269 = 28;
	volatile uint64_t x1270 = 9710378LLU;
	int32_t x1271 = -2;
	volatile int32_t t174 = -4234;

    t174 = (x1269<<(x1270!=(x1271%x1272)));

    if (t174 != 56) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1273 = INT16_MAX;
	uint64_t x1274 = UINT64_MAX;
	int32_t x1275 = INT32_MIN;
	int8_t x1276 = 2;

    t175 = (x1273<<(x1274!=(x1275%x1276)));

    if (t175 != 65534) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1285 = 412965762LL;
	int8_t x1288 = INT8_MIN;
	static int64_t t176 = -5997233627424206LL;

    t176 = (x1285<<(x1286!=(x1287%x1288)));

    if (t176 != 825931524LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x1293 = UINT16_MAX;
	int32_t t177 = -18417287;

    t177 = (x1293<<(x1294!=(x1295%x1296)));

    if (t177 != 131070) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x1297 = INT8_MAX;
	volatile int8_t x1299 = -1;
	volatile int32_t t178 = 14608403;

    t178 = (x1297<<(x1298!=(x1299%x1300)));

    if (t178 != 127) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1301 = 221979U;
	int8_t x1302 = -12;
	int8_t x1303 = INT8_MIN;
	static volatile uint8_t x1304 = 63U;
	uint32_t t179 = 45314U;

    t179 = (x1301<<(x1302!=(x1303%x1304)));

    if (t179 != 443958U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1309 = 21411430616LLU;
	uint64_t x1310 = 32317539702955LLU;
	int16_t x1311 = 16000;
	int16_t x1312 = INT16_MIN;
	uint64_t t180 = 270080697LLU;

    t180 = (x1309<<(x1310!=(x1311%x1312)));

    if (t180 != 42822861232LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x1317 = 1;
	int32_t x1318 = -1;
	static int32_t x1320 = -424188235;
	int32_t t181 = 37;

    t181 = (x1317<<(x1318!=(x1319%x1320)));

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1330 = 0U;
	uint16_t x1331 = UINT16_MAX;
	uint8_t x1332 = 5U;
	int32_t t182 = 286565878;

    t182 = (x1329<<(x1330!=(x1331%x1332)));

    if (t182 != 2) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1341 = 16415451140014LLU;
	uint32_t x1342 = UINT32_MAX;
	uint8_t x1344 = UINT8_MAX;
	static uint64_t t183 = 2LLU;

    t183 = (x1341<<(x1342!=(x1343%x1344)));

    if (t183 != 16415451140014LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1345 = 13148U;
	int64_t x1346 = INT64_MIN;
	static int8_t x1347 = INT8_MIN;
	static int8_t x1348 = -16;

    t184 = (x1345<<(x1346!=(x1347%x1348)));

    if (t184 != 26296U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1365 = 1U;
	int8_t x1366 = INT8_MIN;
	static volatile int8_t x1367 = INT8_MIN;
	int64_t x1368 = -332858503356820LL;
	uint32_t t185 = 553382407U;

    t185 = (x1365<<(x1366!=(x1367%x1368)));

    if (t185 != 1U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1369 = INT16_MAX;
	volatile int64_t x1370 = INT64_MIN;
	uint32_t x1371 = 542887U;
	static int8_t x1372 = 4;
	int32_t t186 = 849;

    t186 = (x1369<<(x1370!=(x1371%x1372)));

    if (t186 != 65534) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1385 = INT16_MAX;
	static uint64_t x1386 = 443091624934195773LLU;
	uint64_t x1388 = 331138435LLU;

    t187 = (x1385<<(x1386!=(x1387%x1388)));

    if (t187 != 65534) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1393 = UINT8_MAX;
	volatile uint32_t x1394 = 5663063U;
	int32_t x1395 = INT32_MAX;

    t188 = (x1393<<(x1394!=(x1395%x1396)));

    if (t188 != 510) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1398 = UINT16_MAX;
	static int8_t x1400 = INT8_MIN;
	volatile int32_t t189 = -2257;

    t189 = (x1397<<(x1398!=(x1399%x1400)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x1405 = UINT16_MAX;
	static int64_t x1406 = -1LL;
	int32_t x1407 = INT32_MIN;
	int8_t x1408 = -9;

    t190 = (x1405<<(x1406!=(x1407%x1408)));

    if (t190 != 131070) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1409 = 14U;
	static uint32_t x1410 = 1973048U;
	static volatile int64_t x1411 = INT64_MIN;
	uint64_t x1412 = UINT64_MAX;

    t191 = (x1409<<(x1410!=(x1411%x1412)));

    if (t191 != 28) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1426 = 433U;
	int64_t x1427 = -18018235462376LL;
	int64_t x1428 = -1LL;
	static volatile uint64_t t192 = 238828202LLU;

    t192 = (x1425<<(x1426!=(x1427%x1428)));

    if (t192 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x1429 = 8619U;
	uint64_t x1430 = 9042196474LLU;
	int8_t x1431 = INT8_MIN;
	int32_t x1432 = -116636;

    t193 = (x1429<<(x1430!=(x1431%x1432)));

    if (t193 != 17238U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1437 = 1013324553319871LLU;
	int16_t x1438 = 1517;
	uint16_t x1439 = 3U;
	int16_t x1440 = -512;

    t194 = (x1437<<(x1438!=(x1439%x1440)));

    if (t194 != 2026649106639742LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1441 = UINT8_MAX;
	static volatile uint64_t x1442 = 8818972LLU;
	int8_t x1443 = 15;
	int16_t x1444 = -1;
	volatile int32_t t195 = 61264;

    t195 = (x1441<<(x1442!=(x1443%x1444)));

    if (t195 != 510) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1449 = 1996;
	int8_t x1450 = INT8_MIN;
	int32_t x1451 = 1997;
	int16_t x1452 = -174;
	int32_t t196 = -30429288;

    t196 = (x1449<<(x1450!=(x1451%x1452)));

    if (t196 != 3992) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1457 = 31507323530050358LLU;
	volatile int8_t x1458 = -3;
	uint32_t x1459 = 1U;
	uint16_t x1460 = 4U;
	uint64_t t197 = 30560118635LLU;

    t197 = (x1457<<(x1458!=(x1459%x1460)));

    if (t197 != 63014647060100716LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1461 = 1032LL;
	volatile int64_t x1463 = INT64_MIN;
	volatile int64_t t198 = 2268636681071LL;

    t198 = (x1461<<(x1462!=(x1463%x1464)));

    if (t198 != 2064LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1465 = 2563405314321477LL;
	int8_t x1466 = INT8_MIN;
	volatile int64_t x1468 = INT64_MIN;
	volatile int64_t t199 = -22823101355905974LL;

    t199 = (x1465<<(x1466!=(x1467%x1468)));

    if (t199 != 5126810628642954LL) { NG(); } else { ; }
	
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

