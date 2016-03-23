
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

uint8_t x9 = UINT8_MAX;
int8_t x39 = INT8_MIN;
static int8_t x42 = INT8_MIN;
int32_t x44 = -387;
static int64_t t4 = -14LL;
volatile uint32_t x45 = 115829U;
int8_t x48 = -1;
static volatile int16_t x66 = 2;
static uint32_t x67 = 383282118U;
int8_t x80 = -1;
int64_t t11 = 101785255351LL;
static int32_t x82 = INT32_MAX;
int16_t x88 = INT16_MAX;
int32_t x89 = 89655475;
static volatile uint8_t x91 = 1U;
static int8_t x94 = INT8_MIN;
volatile int8_t x95 = INT8_MAX;
uint16_t x99 = 1U;
static int32_t x120 = -1;
volatile int64_t t21 = -16283726723001LL;
int8_t x140 = 0;
int32_t t23 = -721283;
uint64_t t24 = 508237LLU;
volatile int8_t x145 = INT8_MIN;
static uint32_t t25 = 3773852U;
int64_t x173 = -1LL;
uint32_t x180 = UINT32_MAX;
static int16_t x197 = INT16_MIN;
volatile int64_t t31 = 7802LL;
uint8_t x230 = 7U;
volatile uint64_t t32 = 1514366171LLU;
volatile int16_t x237 = INT16_MIN;
uint32_t t33 = 6717031U;
uint16_t x241 = 4777U;
uint64_t x258 = 7455776371073399855LLU;
volatile uint64_t t35 = 100095139LLU;
volatile uint64_t t36 = 10291007LLU;
int32_t x277 = -1;
volatile int32_t t38 = 554213;
uint16_t x286 = 18660U;
static int32_t t39 = -2437;
uint32_t x301 = 488U;
static uint8_t x303 = UINT8_MAX;
volatile int64_t x307 = -1LL;
volatile int32_t x309 = 58;
int64_t x323 = -1LL;
uint16_t x325 = 0U;
volatile uint16_t x328 = 5U;
int32_t x332 = -1946781;
int64_t x336 = INT64_MIN;
int64_t t50 = -1942LL;
int32_t t52 = 798;
uint16_t x351 = 430U;
int8_t x353 = INT8_MIN;
int16_t x355 = -1;
volatile int32_t t54 = -235;
static int32_t x359 = INT32_MAX;
int8_t x372 = -1;
static int8_t x374 = -1;
int16_t x376 = INT16_MIN;
uint16_t x382 = 3U;
static volatile int32_t x383 = -1;
int16_t x401 = -1;
static uint64_t x402 = UINT64_MAX;
volatile uint32_t x403 = 10981370U;
static uint8_t x409 = UINT8_MAX;
uint64_t x413 = 17846691280244421LLU;
int32_t x415 = -1;
int8_t x423 = 1;
volatile int64_t t67 = 261712939829240377LL;
int16_t x437 = INT16_MAX;
int64_t x438 = 3823717338LL;
volatile uint64_t x439 = 2510201085LLU;
static uint16_t x449 = UINT16_MAX;
int8_t x452 = INT8_MIN;
uint64_t t70 = 1LLU;
uint64_t x461 = UINT64_MAX;
uint16_t x479 = 11215U;
int64_t x480 = -200353854594LL;
static int16_t x482 = INT16_MIN;
uint8_t x493 = 0U;
uint16_t x498 = 6147U;
uint64_t t76 = 1682438601714LLU;
int64_t x511 = 327762LL;
int16_t x524 = INT16_MIN;
uint8_t x529 = 2U;
volatile uint32_t x530 = UINT32_MAX;
volatile uint64_t x533 = 7LLU;
uint64_t x540 = 0LLU;
volatile uint8_t x549 = 0U;
uint32_t x550 = UINT32_MAX;
uint16_t x551 = 3U;
uint16_t x558 = 62U;
int32_t x564 = INT32_MIN;
uint16_t x570 = 0U;
volatile uint64_t x582 = 173699LLU;
int8_t x584 = -1;
volatile uint64_t t92 = 3738155118411752273LLU;
static volatile uint32_t t93 = 14061U;
uint64_t x594 = 1055560107LLU;
uint32_t t95 = 2U;
int8_t x618 = -1;
volatile int32_t t99 = 8291117;
static uint8_t x638 = 98U;
int32_t x640 = INT32_MAX;
static uint8_t x648 = 70U;
volatile int64_t x685 = -387933571LL;
uint32_t x686 = 103411U;
int64_t x688 = -1LL;
volatile int64_t x699 = -14LL;
volatile int32_t x705 = 142;
static volatile int16_t x710 = INT16_MIN;
int32_t t110 = 430748989;
int8_t x720 = INT8_MIN;
static volatile uint8_t x729 = 25U;
uint64_t x730 = 108LLU;
volatile uint32_t x733 = 547129589U;
volatile uint16_t x735 = 17781U;
volatile int8_t x740 = INT8_MAX;
int16_t x743 = -869;
uint8_t x772 = 0U;
volatile uint64_t t118 = 5187057LLU;
volatile int64_t x774 = INT64_MAX;
static volatile uint16_t x775 = UINT16_MAX;
uint8_t x776 = UINT8_MAX;
int16_t x782 = -1;
static int8_t x790 = INT8_MIN;
int64_t t122 = 61LL;
int16_t x809 = -1;
uint32_t t125 = 63911U;
int8_t x823 = -1;
int64_t t127 = -2224236363171LL;
int32_t x826 = -1;
static int16_t x830 = -1;
int8_t x831 = -1;
int8_t x838 = INT8_MAX;
int8_t x839 = -1;
int8_t x841 = -1;
static int8_t x859 = -1;
int16_t x860 = -1;
static uint64_t x865 = 1541LLU;
volatile uint64_t t134 = 107688LLU;
uint64_t t136 = 83220979351LLU;
static int16_t x898 = INT16_MIN;
int32_t x901 = INT32_MAX;
static uint8_t x903 = 6U;
static int64_t x918 = -89830112894LL;
int64_t t143 = -378728392LL;
int8_t x926 = -60;
static uint64_t x932 = 4709LLU;
int16_t x935 = INT16_MIN;
volatile uint64_t x949 = 533462546429LLU;
uint32_t x969 = 3252U;
int16_t x972 = INT16_MAX;
static uint32_t x980 = UINT32_MAX;
int8_t x999 = INT8_MIN;
static int8_t x1000 = INT8_MAX;
int16_t x1006 = INT16_MAX;
static volatile int64_t t159 = 27LL;
int8_t x1011 = -15;
uint64_t x1033 = 2930906072500617428LLU;
int32_t x1037 = -3677484;
static int32_t x1049 = INT32_MIN;
static volatile uint64_t t166 = 4166LLU;
int8_t x1054 = INT8_MIN;
volatile int64_t x1081 = -1LL;
int8_t x1082 = INT8_MIN;
uint8_t x1083 = UINT8_MAX;
static int32_t x1084 = -1;
uint64_t x1091 = 500215059315374LLU;
int16_t x1102 = 393;
int8_t x1106 = 1;
int64_t x1116 = -1LL;
int32_t x1127 = -1;
uint64_t x1128 = 112LLU;
static int64_t x1146 = -412511LL;
uint16_t x1149 = UINT16_MAX;
uint32_t x1152 = 74542796U;
uint64_t x1153 = 51488320LLU;
int64_t x1154 = INT64_MIN;
volatile int16_t x1193 = INT16_MAX;
static int32_t t192 = -396;
static int16_t x1198 = INT16_MAX;
volatile int8_t x1219 = INT8_MAX;
volatile int16_t x1221 = -1;
int64_t x1223 = INT64_MIN;
static uint16_t x1227 = UINT16_MAX;
uint32_t x1231 = 171603251U;
uint8_t x1232 = 4U;
int32_t x1236 = INT32_MIN;
volatile uint64_t t198 = 2285170907002452LLU;


void f0(void) {
    	uint64_t x10 = UINT64_MAX;
	int8_t x11 = 3;
	int8_t x12 = 6;
	static uint64_t t0 = 5495LLU;

    t0 = (((x9-x10)*x11)-x12);

    if (t0 != 762LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x21 = INT16_MAX;
	int64_t x22 = 50LL;
	int32_t x23 = -15;
	volatile int64_t x24 = 54LL;
	int64_t t1 = 2118384268LL;

    t1 = (((x21-x22)*x23)-x24);

    if (t1 != -490809LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x33 = 239954LLU;
	int16_t x34 = -1;
	int16_t x35 = -1;
	uint32_t x36 = 1301U;
	volatile uint64_t t2 = 4169237877176030871LLU;

    t2 = (((x33-x34)*x35)-x36);

    if (t2 != 18446744073709310360LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MAX;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t3 = 70915;

    t3 = (((x37-x38)*x39)-x40);

    if (t3 != 4243328) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x41 = UINT8_MAX;
	int64_t x43 = -738256452498LL;

    t4 = (((x41-x42)*x43)-x44);

    if (t4 != -282752221306347LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x46 = -1;
	int32_t x47 = INT32_MIN;
	static volatile uint32_t t5 = 110U;

    t5 = (((x45-x46)*x47)-x48);

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x53 = -1;
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = INT8_MIN;
	uint16_t x56 = 48U;
	static int32_t t6 = -30761911;

    t6 = (((x53-x54)*x55)-x56);

    if (t6 != 32720) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x57 = -1;
	volatile int32_t x58 = -1;
	static uint16_t x59 = 478U;
	volatile int8_t x60 = -3;
	int32_t t7 = 951;

    t7 = (((x57-x58)*x59)-x60);

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x61 = UINT64_MAX;
	static volatile int16_t x62 = INT16_MAX;
	int16_t x63 = 0;
	static int64_t x64 = -1LL;
	static uint64_t t8 = 106628155852LLU;

    t8 = (((x61-x62)*x63)-x64);

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x65 = 10U;
	int64_t x68 = 7306531354390LL;
	static volatile int64_t t9 = -15735078206730678LL;

    t9 = (((x65-x66)*x67)-x68);

    if (t9 != -7303465097446LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x69 = INT8_MIN;
	uint64_t x70 = 492LLU;
	static uint8_t x71 = 17U;
	static volatile int32_t x72 = INT32_MIN;
	volatile uint64_t t10 = 23654357LLU;

    t10 = (((x69-x70)*x71)-x72);

    if (t10 != 2147473108LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x77 = -1;
	int8_t x78 = -13;
	int64_t x79 = -1LL;

    t11 = (((x77-x78)*x79)-x80);

    if (t11 != -11LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x81 = UINT32_MAX;
	int16_t x83 = INT16_MAX;
	int64_t x84 = -583848140630644231LL;
	volatile int64_t t12 = -182448LL;

    t12 = (((x81-x82)*x83)-x84);

    if (t12 != 583848142778127879LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x85 = UINT64_MAX;
	int32_t x86 = -69;
	uint32_t x87 = UINT32_MAX;
	volatile uint64_t t13 = 25889782LLU;

    t13 = (((x85-x86)*x87)-x88);

    if (t13 != 292057743293LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x90 = INT8_MAX;
	volatile uint16_t x92 = 92U;
	volatile int32_t t14 = -45851;

    t14 = (((x89-x90)*x91)-x92);

    if (t14 != 89655256) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x93 = INT16_MIN;
	uint16_t x96 = UINT16_MAX;
	int32_t t15 = -235;

    t15 = (((x93-x94)*x95)-x96);

    if (t15 != -4210815) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x97 = 6381;
	int32_t x98 = INT32_MAX;
	int8_t x100 = INT8_MAX;
	int32_t t16 = -1981136;

    t16 = (((x97-x98)*x99)-x100);

    if (t16 != -2147477393) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x105 = 386831316087973LLU;
	volatile int16_t x106 = 19;
	int16_t x107 = -1;
	static volatile int8_t x108 = INT8_MAX;
	static uint64_t t17 = 13441688756305299LLU;

    t17 = (((x105-x106)*x107)-x108);

    if (t17 != 18446357242393463535LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x113 = -1;
	static volatile int32_t x114 = INT32_MIN;
	int8_t x115 = 0;
	uint16_t x116 = 145U;
	volatile int32_t t18 = 4;

    t18 = (((x113-x114)*x115)-x116);

    if (t18 != -145) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x117 = -8;
	int8_t x118 = -1;
	int8_t x119 = INT8_MAX;
	volatile int32_t t19 = -201708;

    t19 = (((x117-x118)*x119)-x120);

    if (t19 != -888) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x121 = 149138984193LLU;
	int32_t x122 = -718807;
	volatile int32_t x123 = -33661291;
	static int8_t x124 = INT8_MIN;
	volatile uint64_t t20 = 37660669LLU;

    t20 = (((x121-x122)*x123)-x124);

    if (t20 != 13426509131372978744LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x125 = -1LL;
	int32_t x126 = INT32_MIN;
	volatile uint16_t x127 = 8734U;
	int8_t x128 = 32;

    t21 = (((x125-x126)*x127)-x128);

    if (t21 != 18756122172866LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x133 = -2911;
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = -1;
	uint64_t x136 = UINT64_MAX;
	uint64_t t22 = 442936LLU;

    t22 = (((x133-x134)*x135)-x136);

    if (t22 != 2911LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x137 = -1499;
	static int16_t x138 = INT16_MIN;
	volatile int16_t x139 = -79;

    t23 = (((x137-x138)*x139)-x140);

    if (t23 != -2470251) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x141 = INT16_MIN;
	volatile int16_t x142 = -1;
	static uint64_t x143 = UINT64_MAX;
	static uint8_t x144 = 27U;

    t24 = (((x141-x142)*x143)-x144);

    if (t24 != 32740LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x146 = -1;
	static volatile uint8_t x147 = 5U;
	uint32_t x148 = 227U;

    t25 = (((x145-x146)*x147)-x148);

    if (t25 != 4294966434U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x174 = 1256662638LLU;
	int16_t x175 = INT16_MAX;
	uint32_t x176 = 6325337U;
	volatile uint64_t t26 = 90731460LLU;

    t26 = (((x173-x174)*x175)-x176);

    if (t26 != 18446702896638534166LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x177 = 135329576131LLU;
	int32_t x178 = -1;
	int16_t x179 = -1;
	volatile uint64_t t27 = 64192745352LLU;

    t27 = (((x177-x178)*x179)-x180);

    if (t27 != 18446743934085008189LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x198 = INT16_MAX;
	int64_t x199 = -1LL;
	int16_t x200 = INT16_MIN;
	int64_t t28 = 522737450305LL;

    t28 = (((x197-x198)*x199)-x200);

    if (t28 != 98303LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x209 = UINT8_MAX;
	int64_t x210 = -1LL;
	static int32_t x211 = -1;
	uint8_t x212 = UINT8_MAX;
	static int64_t t29 = 40104541412LL;

    t29 = (((x209-x210)*x211)-x212);

    if (t29 != -511LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x221 = INT16_MIN;
	static volatile int64_t x222 = -18036LL;
	volatile int32_t x223 = 1;
	uint32_t x224 = 1154900U;
	volatile int64_t t30 = -7005344747041409LL;

    t30 = (((x221-x222)*x223)-x224);

    if (t30 != -1169632LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x225 = UINT8_MAX;
	int64_t x226 = 360497413LL;
	int32_t x227 = INT32_MAX;
	volatile int32_t x228 = INT32_MAX;

    t31 = (((x225-x226)*x227)-x228);

    if (t31 != -774161753742458873LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x229 = 20809010992580LLU;
	static uint32_t x231 = 338644447U;
	int16_t x232 = INT16_MAX;

    t32 = (((x229-x230)*x231)-x232);

    if (t32 != 199784039755942052LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x238 = INT8_MIN;
	uint32_t x239 = 9322710U;
	volatile int32_t x240 = INT32_MIN;

    t33 = (((x237-x238)*x239)-x240);

    if (t33 != 2796907264U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x242 = INT8_MIN;
	volatile int32_t x243 = 0;
	uint16_t x244 = 22U;
	static volatile int32_t t34 = 8;

    t34 = (((x241-x242)*x243)-x244);

    if (t34 != -22) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x257 = 19U;
	int8_t x259 = -1;
	static int64_t x260 = INT64_MIN;

    t35 = (((x257-x258)*x259)-x260);

    if (t35 != 16679148407928175644LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x269 = -1;
	uint64_t x270 = 8LLU;
	static int8_t x271 = 0;
	volatile uint32_t x272 = 499259U;

    t36 = (((x269-x270)*x271)-x272);

    if (t36 != 18446744073709052357LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x278 = INT64_MIN;
	volatile uint64_t x279 = 257LLU;
	int64_t x280 = INT64_MAX;
	volatile uint64_t t37 = 530597183501438LLU;

    t37 = (((x277-x278)*x279)-x280);

    if (t37 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x281 = UINT8_MAX;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = -38;
	int32_t x284 = 54557;

    t38 = (((x281-x282)*x283)-x284);

    if (t38 != 2426083) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x285 = INT16_MAX;
	uint16_t x287 = 7U;
	int16_t x288 = INT16_MIN;

    t39 = (((x285-x286)*x287)-x288);

    if (t39 != 131517) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x289 = 2065U;
	volatile int16_t x290 = -1;
	static int16_t x291 = -1;
	volatile int16_t x292 = INT16_MIN;
	static volatile uint32_t t40 = 757U;

    t40 = (((x289-x290)*x291)-x292);

    if (t40 != 30702U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x297 = UINT32_MAX;
	uint64_t x298 = 40931370765717780LLU;
	int32_t x299 = 61910585;
	int64_t x300 = -43256853992LL;
	volatile uint64_t t41 = 313634LLU;

    t41 = (((x297-x298)*x299)-x300);

    if (t41 != 18177328271285166651LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x302 = 25603564U;
	static int32_t x304 = 9;
	uint32_t t42 = 1203322U;

    t42 = (((x301-x302)*x303)-x304);

    if (t42 != 2061150203U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x305 = INT8_MIN;
	int16_t x306 = -1;
	volatile uint64_t x308 = 54774051601011LLU;
	volatile uint64_t t43 = 31962584LLU;

    t43 = (((x305-x306)*x307)-x308);

    if (t43 != 18446689299657950732LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x310 = 3U;
	static uint64_t x311 = UINT64_MAX;
	int64_t x312 = INT64_MAX;
	volatile uint64_t t44 = 713457663347203846LLU;

    t44 = (((x309-x310)*x311)-x312);

    if (t44 != 9223372036854775754LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x313 = -1;
	int16_t x314 = -21;
	int8_t x315 = INT8_MAX;
	volatile int64_t x316 = INT64_MAX;
	static volatile int64_t t45 = -907LL;

    t45 = (((x313-x314)*x315)-x316);

    if (t45 != -9223372036854773267LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x317 = 54457U;
	int64_t x318 = -3664300675LL;
	uint16_t x319 = 7U;
	int64_t x320 = INT64_MAX;
	int64_t t46 = -2014421983LL;

    t46 = (((x317-x318)*x319)-x320);

    if (t46 != -9223372011204289883LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x321 = -1LL;
	volatile int16_t x322 = INT16_MIN;
	int16_t x324 = INT16_MIN;
	int64_t t47 = -2129325333352556991LL;

    t47 = (((x321-x322)*x323)-x324);

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x326 = 532530171LLU;
	uint32_t x327 = 277U;
	uint64_t t48 = 3774316LLU;

    t48 = (((x325-x326)*x327)-x328);

    if (t48 != 18446743926198694244LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x329 = 59977369;
	int16_t x330 = INT16_MAX;
	uint8_t x331 = 18U;
	int32_t t49 = 5;

    t49 = (((x329-x330)*x331)-x332);

    if (t49 != 1080949617) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x333 = INT64_MAX;
	uint8_t x334 = 62U;
	int8_t x335 = -1;

    t50 = (((x333-x334)*x335)-x336);

    if (t50 != 63LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x341 = INT32_MAX;
	volatile int64_t x342 = INT64_MAX;
	volatile int8_t x343 = -1;
	uint8_t x344 = 1U;
	int64_t t51 = 50268345LL;

    t51 = (((x341-x342)*x343)-x344);

    if (t51 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x345 = 31;
	volatile uint16_t x346 = UINT16_MAX;
	static int8_t x347 = INT8_MIN;
	volatile uint8_t x348 = UINT8_MAX;

    t52 = (((x345-x346)*x347)-x348);

    if (t52 != 8384257) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x349 = UINT32_MAX;
	static uint32_t x350 = 31872U;
	uint16_t x352 = UINT16_MAX;
	static uint32_t t53 = 7063673U;

    t53 = (((x349-x350)*x351)-x352);

    if (t53 != 4281196371U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x354 = UINT16_MAX;
	int8_t x356 = -4;

    t54 = (((x353-x354)*x355)-x356);

    if (t54 != 65667) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x357 = INT64_MIN;
	static volatile uint64_t x358 = 744LLU;
	int64_t x360 = INT64_MIN;
	static uint64_t t55 = 449061287LLU;

    t55 = (((x357-x358)*x359)-x360);

    if (t55 != 18446742475981718248LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x365 = UINT16_MAX;
	volatile uint32_t x366 = 971363344U;
	int32_t x367 = -1;
	int32_t x368 = INT32_MAX;
	volatile uint32_t t56 = 169284U;

    t56 = (((x365-x366)*x367)-x368);

    if (t56 != 3118781458U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x369 = 2366794774LLU;
	static volatile int16_t x370 = 488;
	int32_t x371 = -1;
	uint64_t t57 = 904588LLU;

    t57 = (((x369-x370)*x371)-x372);

    if (t57 != 18446744071342757331LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x373 = INT8_MIN;
	uint16_t x375 = 0U;
	static int32_t t58 = 14511599;

    t58 = (((x373-x374)*x375)-x376);

    if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x381 = 404U;
	int16_t x384 = INT16_MIN;
	int32_t t59 = 1;

    t59 = (((x381-x382)*x383)-x384);

    if (t59 != 32367) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x389 = INT8_MAX;
	uint16_t x390 = 312U;
	static volatile uint16_t x391 = 24093U;
	int8_t x392 = INT8_MIN;
	int32_t t60 = 70008;

    t60 = (((x389-x390)*x391)-x392);

    if (t60 != -4457077) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x397 = -222;
	int8_t x398 = -1;
	int64_t x399 = -1LL;
	int64_t x400 = INT64_MAX;
	volatile int64_t t61 = -221048990LL;

    t61 = (((x397-x398)*x399)-x400);

    if (t61 != -9223372036854775586LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x404 = INT32_MIN;
	volatile uint64_t t62 = 31350239LLU;

    t62 = (((x401-x402)*x403)-x404);

    if (t62 != 2147483648LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x405 = UINT64_MAX;
	int16_t x406 = INT16_MAX;
	uint64_t x407 = 52757849LLU;
	uint8_t x408 = 19U;
	static volatile uint64_t t63 = 35491044170165648LLU;

    t63 = (((x405-x406)*x407)-x408);

    if (t63 != 18446742344940355565LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x410 = -1LL;
	static int16_t x411 = 45;
	volatile int8_t x412 = -1;
	static int64_t t64 = -3359082348964544119LL;

    t64 = (((x409-x410)*x411)-x412);

    if (t64 != 11521LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x414 = -1;
	int16_t x416 = INT16_MIN;
	uint64_t t65 = 19705629968LLU;

    t65 = (((x413-x414)*x415)-x416);

    if (t65 != 18428897382429339962LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x421 = -1;
	int64_t x422 = 3724321709LL;
	volatile int32_t x424 = INT32_MIN;
	volatile int64_t t66 = -130752524622496LL;

    t66 = (((x421-x422)*x423)-x424);

    if (t66 != -1576838062LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x425 = INT8_MAX;
	uint16_t x426 = 3U;
	int64_t x427 = 232840641LL;
	static int64_t x428 = INT64_MAX;

    t67 = (((x425-x426)*x427)-x428);

    if (t67 != -9223372007982536323LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x440 = 3558U;
	uint64_t t68 = 19LLU;

    t68 = (((x437-x438)*x439)-x440);

    if (t68 != 8848526914887588523LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x450 = 13;
	uint64_t x451 = 332791696LLU;
	volatile uint64_t t69 = 913421091535751LLU;

    t69 = (((x449-x450)*x451)-x452);

    if (t69 != 21805177505440LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x457 = INT8_MAX;
	volatile int64_t x458 = 4195423802256020LL;
	uint8_t x459 = UINT8_MAX;
	static uint64_t x460 = 386922776033377413LLU;

    t70 = (((x457-x458)*x459)-x460);

    if (t70 != 16989988228100921488LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x462 = 12937LL;
	int16_t x463 = -1;
	static uint32_t x464 = UINT32_MAX;
	uint64_t t71 = 444799548634120LLU;

    t71 = (((x461-x462)*x463)-x464);

    if (t71 != 18446744069414597259LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x477 = -1;
	int16_t x478 = INT16_MIN;
	int64_t t72 = 45LL;

    t72 = (((x477-x478)*x479)-x480);

    if (t72 != 200721336499LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x481 = INT16_MIN;
	static uint64_t x483 = 1653511821658944214LLU;
	static int32_t x484 = 2743;
	volatile uint64_t t73 = 14LLU;

    t73 = (((x481-x482)*x483)-x484);

    if (t73 != 18446744073709548873LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x489 = 478U;
	int8_t x490 = -1;
	int8_t x491 = -1;
	int32_t x492 = -206979;
	int32_t t74 = 3734795;

    t74 = (((x489-x490)*x491)-x492);

    if (t74 != 206500) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x494 = 8249855565451LLU;
	volatile int8_t x495 = INT8_MIN;
	volatile int16_t x496 = -47;
	uint64_t t75 = 15955998LLU;

    t75 = (((x493-x494)*x495)-x496);

    if (t75 != 1055981512377775LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x497 = UINT64_MAX;
	int32_t x499 = INT32_MAX;
	static int8_t x500 = INT8_MAX;

    t76 = (((x497-x498)*x499)-x500);

    if (t76 != 18446730870980089733LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x501 = 26U;
	int8_t x502 = 0;
	int32_t x503 = 7;
	volatile uint16_t x504 = UINT16_MAX;
	int32_t t77 = 4456;

    t77 = (((x501-x502)*x503)-x504);

    if (t77 != -65353) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x509 = 1U;
	volatile int16_t x510 = INT16_MIN;
	uint32_t x512 = 702693239U;
	static volatile int64_t t78 = 653558900963929488LL;

    t78 = (((x509-x510)*x511)-x512);

    if (t78 != 10037739739LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x513 = INT16_MIN;
	int64_t x514 = -6607LL;
	uint64_t x515 = UINT64_MAX;
	static int16_t x516 = -1;
	volatile uint64_t t79 = 20529169696362LLU;

    t79 = (((x513-x514)*x515)-x516);

    if (t79 != 26162LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x517 = 10975;
	int8_t x518 = 1;
	static int16_t x519 = INT16_MAX;
	int16_t x520 = 6;
	volatile int32_t t80 = 465;

    t80 = (((x517-x518)*x519)-x520);

    if (t80 != 359585052) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x521 = INT8_MAX;
	int64_t x522 = 288LL;
	int8_t x523 = INT8_MIN;
	volatile int64_t t81 = -436661LL;

    t81 = (((x521-x522)*x523)-x524);

    if (t81 != 53376LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x531 = 26;
	int8_t x532 = INT8_MIN;
	static uint32_t t82 = 146395U;

    t82 = (((x529-x530)*x531)-x532);

    if (t82 != 206U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x534 = UINT64_MAX;
	volatile int64_t x535 = INT64_MIN;
	uint64_t x536 = UINT64_MAX;
	static uint64_t t83 = 55278612969LLU;

    t83 = (((x533-x534)*x535)-x536);

    if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x537 = -1;
	uint8_t x538 = 22U;
	int8_t x539 = INT8_MAX;
	uint64_t t84 = 315487660LLU;

    t84 = (((x537-x538)*x539)-x540);

    if (t84 != 18446744073709548695LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x545 = -1;
	volatile uint16_t x546 = 24895U;
	uint8_t x547 = 3U;
	volatile int64_t x548 = -4248236086189LL;
	volatile int64_t t85 = 3LL;

    t85 = (((x545-x546)*x547)-x548);

    if (t85 != 4248236011501LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x552 = -1;
	static uint32_t t86 = 116608044U;

    t86 = (((x549-x550)*x551)-x552);

    if (t86 != 4U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x557 = -1779576893LL;
	static int32_t x559 = INT32_MIN;
	int16_t x560 = 28;
	int64_t t87 = 170630698LL;

    t87 = (((x557-x558)*x559)-x560);

    if (t87 != 3821612411220131812LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int16_t x561 = INT16_MIN;
	uint8_t x562 = UINT8_MAX;
	int64_t x563 = -1LL;
	volatile int64_t t88 = -6060640581035777LL;

    t88 = (((x561-x562)*x563)-x564);

    if (t88 != 2147516671LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x569 = 140756630U;
	uint32_t x571 = 514012U;
	static uint8_t x572 = 1U;
	volatile uint32_t t89 = 463U;

    t89 = (((x569-x570)*x571)-x572);

    if (t89 != 1872798439U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x573 = INT8_MIN;
	int8_t x574 = INT8_MIN;
	static uint8_t x575 = UINT8_MAX;
	int8_t x576 = INT8_MIN;
	volatile int32_t t90 = -1232753;

    t90 = (((x573-x574)*x575)-x576);

    if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x577 = -1LL;
	int16_t x578 = INT16_MIN;
	int32_t x579 = INT32_MAX;
	static uint16_t x580 = 2U;
	static volatile int64_t t91 = 107126555184LL;

    t91 = (((x577-x578)*x579)-x580);

    if (t91 != 70366596661247LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x581 = INT16_MAX;
	int8_t x583 = INT8_MAX;

    t92 = (((x581-x582)*x583)-x584);

    if (t92 != 18446744073691653253LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x589 = 0;
	int16_t x590 = 159;
	uint32_t x591 = 126539229U;
	int8_t x592 = 1;

    t93 = (((x589-x590)*x591)-x592);

    if (t93 != 1355099068U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x593 = UINT64_MAX;
	int16_t x595 = INT16_MIN;
	int8_t x596 = -1;
	static volatile uint64_t t94 = 6688914335808LLU;

    t94 = (((x593-x594)*x595)-x596);

    if (t94 != 34588593618945LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x605 = 376135U;
	int8_t x606 = 0;
	static uint16_t x607 = UINT16_MAX;
	int16_t x608 = -50;

    t95 = (((x605-x606)*x607)-x608);

    if (t95 != 3175170795U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x609 = -1LL;
	volatile uint16_t x610 = UINT16_MAX;
	uint16_t x611 = 53U;
	volatile uint32_t x612 = UINT32_MAX;
	static int64_t t96 = 3874343337LL;

    t96 = (((x609-x610)*x611)-x612);

    if (t96 != -4298440703LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x617 = 30111917219LLU;
	int8_t x619 = 1;
	volatile int8_t x620 = 0;
	static uint64_t t97 = 2321154LLU;

    t97 = (((x617-x618)*x619)-x620);

    if (t97 != 30111917220LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x621 = INT64_MIN;
	int64_t x622 = INT64_MIN;
	int8_t x623 = 0;
	static volatile uint16_t x624 = 6U;
	volatile int64_t t98 = 3267734LL;

    t98 = (((x621-x622)*x623)-x624);

    if (t98 != -6LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x625 = -1;
	volatile int8_t x626 = -4;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = 0;

    t99 = (((x625-x626)*x627)-x628);

    if (t99 != 196605) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x633 = 5U;
	uint32_t x634 = 13962236U;
	uint32_t x635 = 9860393U;
	static uint64_t x636 = 23426324LLU;
	uint64_t t100 = 89953LLU;

    t100 = (((x633-x634)*x635)-x636);

    if (t100 != 2068430173LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x637 = -1;
	volatile int64_t x639 = -1LL;
	volatile int64_t t101 = 2156475778345875LL;

    t101 = (((x637-x638)*x639)-x640);

    if (t101 != -2147483548LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x641 = 6LL;
	int16_t x642 = 0;
	uint16_t x643 = 729U;
	static volatile int32_t x644 = -661;
	int64_t t102 = 1LL;

    t102 = (((x641-x642)*x643)-x644);

    if (t102 != 5035LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x645 = 19LL;
	uint8_t x646 = 1U;
	int64_t x647 = 402166LL;
	volatile int64_t t103 = -357385LL;

    t103 = (((x645-x646)*x647)-x648);

    if (t103 != 7238918LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x661 = UINT64_MAX;
	volatile int16_t x662 = INT16_MIN;
	uint64_t x663 = 19366022LLU;
	static uint8_t x664 = UINT8_MAX;
	static volatile uint64_t t104 = 22465243435997783LLU;

    t104 = (((x661-x662)*x663)-x664);

    if (t104 != 634566442619LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x669 = 90493295LL;
	uint32_t x670 = UINT32_MAX;
	static volatile int32_t x671 = -1;
	uint32_t x672 = 6148927U;
	volatile int64_t t105 = -1678956426743440685LL;

    t105 = (((x669-x670)*x671)-x672);

    if (t105 != 4198325073LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x687 = INT32_MIN;
	volatile int64_t t106 = -44439398718844396LL;

    t106 = (((x685-x686)*x687)-x688);

    if (t106 != 833303073664270337LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x697 = -1630;
	int64_t x698 = -1LL;
	static int32_t x700 = -635;
	int64_t t107 = 1979404272199696LL;

    t107 = (((x697-x698)*x699)-x700);

    if (t107 != 23441LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x701 = 3882704708077345LLU;
	int16_t x702 = INT16_MIN;
	uint16_t x703 = UINT16_MAX;
	uint8_t x704 = UINT8_MAX;
	uint64_t t108 = 2199884734982609LLU;

    t108 = (((x701-x702)*x703)-x704);

    if (t108 != 14645380087772084192LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x706 = -1;
	uint16_t x707 = 59U;
	static uint64_t x708 = UINT64_MAX;
	uint64_t t109 = 6LLU;

    t109 = (((x705-x706)*x707)-x708);

    if (t109 != 8438LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x709 = 6856U;
	int16_t x711 = INT16_MAX;
	int16_t x712 = 4104;

    t110 = (((x709-x710)*x711)-x712);

    if (t110 != 1298355504) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x717 = 4;
	static volatile int16_t x718 = -1969;
	static int64_t x719 = 1017007605LL;
	int64_t t111 = 11585900287158914LL;

    t111 = (((x717-x718)*x719)-x720);

    if (t111 != 2006556004793LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x731 = 40U;
	static int16_t x732 = -356;
	uint64_t t112 = 0LLU;

    t112 = (((x729-x730)*x731)-x732);

    if (t112 != 18446744073709548652LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x734 = UINT32_MAX;
	int16_t x736 = 3278;
	uint32_t t113 = 2203U;

    t113 = (((x733-x734)*x735)-x736);

    if (t113 != 410311072U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x737 = -1;
	int32_t x738 = -1;
	static uint32_t x739 = 6U;
	static volatile uint32_t t114 = 48801U;

    t114 = (((x737-x738)*x739)-x740);

    if (t114 != 4294967169U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x741 = 1299451112299871686LLU;
	static int32_t x742 = -13449679;
	int8_t x744 = 1;
	uint64_t t115 = 345381748553LLU;

    t115 = (((x741-x742)*x743)-x744);

    if (t115 != 14475115969715934006LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x749 = INT16_MIN;
	static int8_t x750 = INT8_MIN;
	uint64_t x751 = 118382919684690LLU;
	static uint16_t x752 = UINT16_MAX;
	uint64_t t116 = 186852784LLU;

    t116 = (((x749-x750)*x751)-x752);

    if (t116 != 14582725575201204481LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x761 = 27990U;
	volatile uint64_t x762 = UINT64_MAX;
	int16_t x763 = INT16_MIN;
	uint32_t x764 = UINT32_MAX;
	uint64_t t117 = 8873230LLU;

    t117 = (((x761-x762)*x763)-x764);

    if (t117 != 18446744068497375233LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x769 = 395923367210LLU;
	int16_t x770 = -1;
	int64_t x771 = -1LL;

    t118 = (((x769-x770)*x771)-x772);

    if (t118 != 18446743677786184405LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x773 = UINT64_MAX;
	uint64_t t119 = 7LLU;

    t119 = (((x773-x774)*x775)-x776);

    if (t119 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x781 = 18845796LL;
	int16_t x783 = INT16_MIN;
	static volatile uint64_t x784 = UINT64_MAX;
	volatile uint64_t t120 = 3575LLU;

    t120 = (((x781-x782)*x783)-x784);

    if (t120 != 18446743456170475521LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x785 = 1U;
	static uint16_t x786 = UINT16_MAX;
	static uint32_t x787 = UINT32_MAX;
	int8_t x788 = INT8_MIN;
	static uint32_t t121 = 3812U;

    t121 = (((x785-x786)*x787)-x788);

    if (t121 != 65662U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x789 = INT32_MIN;
	static volatile int64_t x791 = -1LL;
	int16_t x792 = 0;

    t122 = (((x789-x790)*x791)-x792);

    if (t122 != 2147483520LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x793 = INT64_MAX;
	uint64_t x794 = 39631914322LLU;
	int32_t x795 = INT32_MIN;
	static uint16_t x796 = UINT16_MAX;
	volatile uint64_t t123 = 4781448020685369856LLU;

    t123 = (((x793-x794)*x795)-x796);

    if (t123 != 11321911652741218305LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x805 = -177638913;
	uint32_t x806 = 111891U;
	int16_t x807 = INT16_MIN;
	uint8_t x808 = 8U;
	uint32_t t124 = 11346U;

    t124 = (((x805-x806)*x807)-x808);

    if (t124 != 562692088U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x810 = 3U;
	volatile int32_t x811 = INT32_MAX;
	int16_t x812 = 0;

    t125 = (((x809-x810)*x811)-x812);

    if (t125 != 4U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x817 = 57195581LL;
	volatile int32_t x818 = 44;
	static uint8_t x819 = 1U;
	int64_t x820 = -287887706747594954LL;
	static int64_t t126 = -14228701666174682LL;

    t126 = (((x817-x818)*x819)-x820);

    if (t126 != 287887706804790491LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x821 = 1U;
	int64_t x822 = -1LL;
	int32_t x824 = -1;

    t127 = (((x821-x822)*x823)-x824);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x825 = -1;
	int16_t x827 = 772;
	uint8_t x828 = 42U;
	static int32_t t128 = -1219;

    t128 = (((x825-x826)*x827)-x828);

    if (t128 != -42) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x829 = 121756495LL;
	uint32_t x832 = 2505U;
	int64_t t129 = 1LL;

    t129 = (((x829-x830)*x831)-x832);

    if (t129 != -121759001LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x837 = -1LL;
	int32_t x840 = -3745;
	volatile int64_t t130 = -229392862684757LL;

    t130 = (((x837-x838)*x839)-x840);

    if (t130 != 3873LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x842 = 7127022576734LLU;
	uint16_t x843 = 1189U;
	uint64_t x844 = UINT64_MAX;
	static volatile uint64_t t131 = 3661767LLU;

    t131 = (((x841-x842)*x843)-x844);

    if (t131 != 18438270043865813702LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x857 = INT16_MIN;
	uint16_t x858 = 47U;
	static volatile int32_t t132 = -42876827;

    t132 = (((x857-x858)*x859)-x860);

    if (t132 != 32816) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x861 = 1U;
	static int64_t x862 = -2897038023LL;
	int16_t x863 = -1;
	uint8_t x864 = 62U;
	volatile int64_t t133 = -1824138583186158025LL;

    t133 = (((x861-x862)*x863)-x864);

    if (t133 != -2897038086LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x866 = -1;
	volatile uint8_t x867 = 14U;
	uint32_t x868 = 206U;

    t134 = (((x865-x866)*x867)-x868);

    if (t134 != 21382LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x869 = INT8_MIN;
	volatile int8_t x870 = INT8_MIN;
	static uint8_t x871 = UINT8_MAX;
	int8_t x872 = 45;
	volatile int32_t t135 = 241;

    t135 = (((x869-x870)*x871)-x872);

    if (t135 != -45) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x873 = INT16_MIN;
	static uint64_t x874 = 1991567897406LLU;
	static volatile int16_t x875 = -710;
	int8_t x876 = -1;

    t136 = (((x873-x874)*x875)-x876);

    if (t136 != 1414013230423541LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x889 = UINT8_MAX;
	uint64_t x890 = UINT64_MAX;
	int64_t x891 = INT64_MIN;
	uint8_t x892 = UINT8_MAX;
	volatile uint64_t t137 = 260697055156LLU;

    t137 = (((x889-x890)*x891)-x892);

    if (t137 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x897 = -1;
	uint16_t x899 = 0U;
	int64_t x900 = 1LL;
	volatile int64_t t138 = -1151403763LL;

    t138 = (((x897-x898)*x899)-x900);

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x902 = UINT32_MAX;
	int32_t x904 = INT32_MIN;
	volatile uint32_t t139 = 54328047U;

    t139 = (((x901-x902)*x903)-x904);

    if (t139 != 2147483648U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x905 = -1LL;
	uint32_t x906 = 32U;
	uint8_t x907 = 5U;
	int32_t x908 = -1;
	static volatile int64_t t140 = -442LL;

    t140 = (((x905-x906)*x907)-x908);

    if (t140 != -164LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x909 = INT64_MIN;
	volatile int8_t x910 = -6;
	static uint64_t x911 = 1803LLU;
	int8_t x912 = INT8_MAX;
	volatile uint64_t t141 = 24778137652140LLU;

    t141 = (((x909-x910)*x911)-x912);

    if (t141 != 9223372036854786499LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x913 = INT64_MIN;
	uint64_t x914 = 1057511LLU;
	volatile int8_t x915 = 7;
	int32_t x916 = -1;
	uint64_t t142 = 125738833603615LLU;

    t142 = (((x913-x914)*x915)-x916);

    if (t142 != 9223372036847373232LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x917 = 24U;
	volatile uint8_t x919 = 1U;
	int8_t x920 = INT8_MAX;

    t143 = (((x917-x918)*x919)-x920);

    if (t143 != 89830112791LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x921 = 40665U;
	static uint8_t x922 = UINT8_MAX;
	int8_t x923 = INT8_MIN;
	int32_t x924 = INT32_MIN;
	uint32_t t144 = 23865242U;

    t144 = (((x921-x922)*x923)-x924);

    if (t144 != 2142311168U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x925 = UINT8_MAX;
	static uint64_t x927 = UINT64_MAX;
	int16_t x928 = 6300;
	volatile uint64_t t145 = 64587806518LLU;

    t145 = (((x925-x926)*x927)-x928);

    if (t145 != 18446744073709545001LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x929 = 98U;
	int16_t x930 = -1;
	static uint32_t x931 = 1U;
	volatile uint64_t t146 = 1821446302479LLU;

    t146 = (((x929-x930)*x931)-x932);

    if (t146 != 18446744073709547006LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x933 = INT16_MAX;
	uint32_t x934 = 43675U;
	uint16_t x936 = 46U;
	uint32_t t147 = 929583355U;

    t147 = (((x933-x934)*x935)-x936);

    if (t147 != 357433298U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x937 = 119240360LLU;
	uint32_t x938 = 209U;
	static int32_t x939 = INT32_MIN;
	uint64_t x940 = 128307005LLU;
	uint64_t t148 = 2694932602LLU;

    t148 = (((x937-x938)*x939)-x940);

    if (t148 != 18190677799123693763LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x941 = 64;
	static int32_t x942 = 123635;
	int16_t x943 = 1;
	uint16_t x944 = 5285U;
	volatile int32_t t149 = 130722;

    t149 = (((x941-x942)*x943)-x944);

    if (t149 != -128856) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x950 = 17;
	volatile uint32_t x951 = 2355U;
	uint16_t x952 = 4040U;
	static volatile uint64_t t150 = 294666462508069LLU;

    t150 = (((x949-x950)*x951)-x952);

    if (t150 != 1256304296796220LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x953 = 1770358584454LL;
	int8_t x954 = INT8_MIN;
	int32_t x955 = -1;
	uint8_t x956 = UINT8_MAX;
	int64_t t151 = 11961LL;

    t151 = (((x953-x954)*x955)-x956);

    if (t151 != -1770358584837LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x957 = 0;
	int16_t x958 = INT16_MIN;
	uint32_t x959 = 2641U;
	int64_t x960 = 285000373763LL;
	static volatile int64_t t152 = -26890532LL;

    t152 = (((x957-x958)*x959)-x960);

    if (t152 != -284913833475LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x965 = INT64_MIN;
	static uint64_t x966 = 2958265LLU;
	uint16_t x967 = 1U;
	uint32_t x968 = UINT32_MAX;
	volatile uint64_t t153 = 345415480LLU;

    t153 = (((x965-x966)*x967)-x968);

    if (t153 != 9223372032556850248LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x970 = -1;
	static uint16_t x971 = 3U;
	uint32_t t154 = 0U;

    t154 = (((x969-x970)*x971)-x972);

    if (t154 != 4294944288U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x977 = -5LL;
	int32_t x978 = INT32_MAX;
	uint8_t x979 = UINT8_MAX;
	volatile int64_t t155 = -47513LL;

    t155 = (((x977-x978)*x979)-x980);

    if (t155 != -551903298555LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x981 = -1;
	int16_t x982 = -29;
	uint32_t x983 = 87U;
	volatile uint64_t x984 = UINT64_MAX;
	uint64_t t156 = 3330436LLU;

    t156 = (((x981-x982)*x983)-x984);

    if (t156 != 2437LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x993 = -1;
	int16_t x994 = INT16_MAX;
	static uint64_t x995 = UINT64_MAX;
	uint64_t x996 = UINT64_MAX;
	uint64_t t157 = 13688569LLU;

    t157 = (((x993-x994)*x995)-x996);

    if (t157 != 32769LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x997 = INT8_MAX;
	volatile int64_t x998 = -3290661000314LL;
	static volatile int64_t t158 = 13718015220118498LL;

    t158 = (((x997-x998)*x999)-x1000);

    if (t158 != -421204608056575LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1005 = 2663941LL;
	int32_t x1007 = INT32_MAX;
	int64_t x1008 = INT64_MAX;

    t159 = (((x1005-x1006)*x1007)-x1008);

    if (t159 != -9217721633717364229LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x1009 = 30U;
	volatile int64_t x1010 = -2LL;
	int32_t x1012 = INT32_MIN;
	int64_t t160 = 1039295453289LL;

    t160 = (((x1009-x1010)*x1011)-x1012);

    if (t160 != 2147483168LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1013 = -1LL;
	volatile int32_t x1014 = INT32_MIN;
	int16_t x1015 = -1;
	int16_t x1016 = INT16_MIN;
	volatile int64_t t161 = -9428428234942LL;

    t161 = (((x1013-x1014)*x1015)-x1016);

    if (t161 != -2147450879LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1034 = 1;
	int16_t x1035 = -6392;
	int16_t x1036 = INT16_MIN;
	volatile uint64_t t162 = 9949125743479936LLU;

    t162 = (((x1033-x1034)*x1035)-x1036);

    if (t162 != 7540363464957881240LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x1038 = 0;
	volatile uint32_t x1039 = UINT32_MAX;
	uint16_t x1040 = 16733U;
	uint32_t t163 = 53799U;

    t163 = (((x1037-x1038)*x1039)-x1040);

    if (t163 != 3660751U) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1041 = 1;
	uint64_t x1042 = 1LLU;
	volatile int32_t x1043 = -1;
	int16_t x1044 = -208;
	volatile uint64_t t164 = 222673166LLU;

    t164 = (((x1041-x1042)*x1043)-x1044);

    if (t164 != 208LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1045 = 91U;
	volatile int8_t x1046 = -1;
	uint32_t x1047 = 1U;
	static uint8_t x1048 = 3U;
	uint32_t t165 = 147839081U;

    t165 = (((x1045-x1046)*x1047)-x1048);

    if (t165 != 89U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x1050 = UINT64_MAX;
	int32_t x1051 = 2514884;
	uint8_t x1052 = 119U;

    t166 = (((x1049-x1050)*x1051)-x1052);

    if (t166 != 18441343401445449549LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint64_t x1053 = 1774LLU;
	int32_t x1055 = 875805;
	volatile int16_t x1056 = INT16_MIN;
	volatile uint64_t t167 = 23062687LLU;

    t167 = (((x1053-x1054)*x1055)-x1056);

    if (t167 != 1665813878LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1061 = -1LL;
	static int32_t x1062 = -1;
	uint8_t x1063 = UINT8_MAX;
	static uint32_t x1064 = 5U;
	volatile int64_t t168 = 4088088369LL;

    t168 = (((x1061-x1062)*x1063)-x1064);

    if (t168 != -5LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x1069 = 13;
	volatile int8_t x1070 = INT8_MIN;
	uint8_t x1071 = 57U;
	static int64_t x1072 = 27295260LL;
	volatile int64_t t169 = 9213LL;

    t169 = (((x1069-x1070)*x1071)-x1072);

    if (t169 != -27287223LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t t170 = 284906LL;

    t170 = (((x1081-x1082)*x1083)-x1084);

    if (t170 != 32386LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1085 = INT64_MIN;
	static int32_t x1086 = -17306;
	int64_t x1087 = -1LL;
	volatile uint64_t x1088 = 11528271405895LLU;
	volatile uint64_t t171 = 13865064061421460LLU;

    t171 = (((x1085-x1086)*x1087)-x1088);

    if (t171 != 9223360508583352607LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1089 = INT8_MIN;
	uint64_t x1090 = 416679309323436471LLU;
	int32_t x1092 = -270;
	uint64_t t172 = 40774477554LLU;

    t172 = (((x1089-x1090)*x1091)-x1092);

    if (t172 != 11717935811999877548LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x1093 = 17;
	volatile uint8_t x1094 = UINT8_MAX;
	static volatile int32_t x1095 = -1;
	uint64_t x1096 = 198686413780101LLU;
	volatile uint64_t t173 = 1140LLU;

    t173 = (((x1093-x1094)*x1095)-x1096);

    if (t173 != 18446545387295771753LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1101 = 2368U;
	int32_t x1103 = INT32_MAX;
	int16_t x1104 = -1;
	uint32_t t174 = 197571U;

    t174 = (((x1101-x1102)*x1103)-x1104);

    if (t174 != 2147481674U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1105 = 0;
	volatile uint32_t x1107 = 64266U;
	static uint32_t x1108 = UINT32_MAX;
	uint32_t t175 = 3U;

    t175 = (((x1105-x1106)*x1107)-x1108);

    if (t175 != 4294903031U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x1109 = 8007LLU;
	volatile int8_t x1110 = INT8_MIN;
	static int8_t x1111 = INT8_MIN;
	uint8_t x1112 = 105U;
	uint64_t t176 = 45185LLU;

    t176 = (((x1109-x1110)*x1111)-x1112);

    if (t176 != 18446744073708510231LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x1113 = INT8_MIN;
	volatile uint32_t x1114 = UINT32_MAX;
	uint8_t x1115 = UINT8_MAX;
	volatile int64_t t177 = 4409LL;

    t177 = (((x1113-x1114)*x1115)-x1116);

    if (t177 != 4294934912LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x1117 = -1;
	int64_t x1118 = INT64_MIN;
	uint16_t x1119 = 0U;
	volatile int8_t x1120 = -1;
	int64_t t178 = -48019LL;

    t178 = (((x1117-x1118)*x1119)-x1120);

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1125 = 116845048383120LLU;
	static int8_t x1126 = 7;
	uint64_t t179 = 134049020946128113LLU;

    t179 = (((x1125-x1126)*x1127)-x1128);

    if (t179 != 18446627228661168391LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1133 = 0;
	volatile uint32_t x1134 = 2145202813U;
	int16_t x1135 = -4;
	int16_t x1136 = INT16_MIN;
	static uint32_t t180 = 26441U;

    t180 = (((x1133-x1134)*x1135)-x1136);

    if (t180 != 4285876724U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1137 = -1;
	uint16_t x1138 = UINT16_MAX;
	int16_t x1139 = -1;
	int16_t x1140 = -1;
	volatile int32_t t181 = -43;

    t181 = (((x1137-x1138)*x1139)-x1140);

    if (t181 != 65537) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1145 = UINT16_MAX;
	int8_t x1147 = INT8_MIN;
	uint8_t x1148 = 8U;
	volatile int64_t t182 = 68345130782447LL;

    t182 = (((x1145-x1146)*x1147)-x1148);

    if (t182 != -61189896LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1150 = 164500U;
	uint64_t x1151 = 31572152296098010LLU;
	static volatile uint64_t t183 = 166386447LLU;

    t183 = (((x1149-x1150)*x1151)-x1152);

    if (t183 != 2934716474475443794LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1155 = -26;
	int64_t x1156 = 1909LL;
	volatile uint64_t t184 = 477156654185923681LLU;

    t184 = (((x1153-x1154)*x1155)-x1156);

    if (t184 != 18446744072370853387LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1157 = INT16_MIN;
	static uint32_t x1158 = UINT32_MAX;
	int8_t x1159 = INT8_MIN;
	uint64_t x1160 = 6365031399823547018LLU;
	uint64_t t185 = 358LLU;

    t185 = (((x1157-x1158)*x1159)-x1160);

    if (t185 != 12081712673890198774LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1161 = -14;
	uint16_t x1162 = 9613U;
	static uint16_t x1163 = 3U;
	int32_t x1164 = -1;
	static volatile int32_t t186 = 1;

    t186 = (((x1161-x1162)*x1163)-x1164);

    if (t186 != -28880) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x1165 = 7U;
	static int16_t x1166 = 0;
	static volatile int8_t x1167 = INT8_MAX;
	uint32_t x1168 = 569U;
	uint32_t t187 = 20974785U;

    t187 = (((x1165-x1166)*x1167)-x1168);

    if (t187 != 320U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1169 = -6;
	volatile int32_t x1170 = 31;
	volatile int8_t x1171 = 0;
	uint16_t x1172 = 8676U;
	volatile int32_t t188 = -19379;

    t188 = (((x1169-x1170)*x1171)-x1172);

    if (t188 != -8676) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1173 = -1LL;
	uint64_t x1174 = UINT64_MAX;
	int16_t x1175 = INT16_MIN;
	volatile uint16_t x1176 = UINT16_MAX;
	volatile uint64_t t189 = 968LLU;

    t189 = (((x1173-x1174)*x1175)-x1176);

    if (t189 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1181 = 0;
	volatile int16_t x1182 = INT16_MAX;
	int8_t x1183 = 45;
	uint8_t x1184 = 33U;
	volatile int32_t t190 = 117533;

    t190 = (((x1181-x1182)*x1183)-x1184);

    if (t190 != -1474548) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x1185 = 16768U;
	uint32_t x1186 = UINT32_MAX;
	static int32_t x1187 = INT32_MIN;
	int32_t x1188 = INT32_MIN;
	static uint32_t t191 = 1933833169U;

    t191 = (((x1185-x1186)*x1187)-x1188);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1194 = INT16_MIN;
	volatile uint8_t x1195 = 30U;
	volatile int32_t x1196 = INT32_MAX;

    t192 = (((x1193-x1194)*x1195)-x1196);

    if (t192 != -2145517597) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1197 = -1;
	static int8_t x1199 = 2;
	int16_t x1200 = 470;
	volatile int32_t t193 = 53;

    t193 = (((x1197-x1198)*x1199)-x1200);

    if (t193 != -66006) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1217 = INT8_MIN;
	int16_t x1218 = INT16_MIN;
	volatile int64_t x1220 = -16958211006LL;
	int64_t t194 = -1067304604893746LL;

    t194 = (((x1217-x1218)*x1219)-x1220);

    if (t194 != 16962356286LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1222 = 7707356782943LLU;
	uint32_t x1224 = 6946753U;
	volatile uint64_t t195 = 1348LLU;

    t195 = (((x1221-x1222)*x1223)-x1224);

    if (t195 != 18446744073702604863LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1225 = -49;
	volatile int64_t x1226 = -1LL;
	int64_t x1228 = 1819LL;
	static volatile int64_t t196 = 0LL;

    t196 = (((x1225-x1226)*x1227)-x1228);

    if (t196 != -3147499LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1229 = -1;
	volatile uint64_t x1230 = 77217118748071LLU;
	static volatile uint64_t t197 = 1450051352916293484LLU;

    t197 = (((x1229-x1230)*x1231)-x1232);

    if (t197 != 12500378974962429828LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1233 = UINT32_MAX;
	int32_t x1234 = INT32_MAX;
	static uint64_t x1235 = 1843LLU;

    t198 = (((x1233-x1234)*x1235)-x1236);

    if (t198 != 3959959846912LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x1257 = INT32_MIN;
	uint64_t x1258 = UINT64_MAX;
	uint64_t x1259 = 32595820311LLU;
	int8_t x1260 = INT8_MIN;
	volatile uint64_t t199 = 53822131958LLU;

    t199 = (((x1257-x1258)*x1259)-x1260);

    if (t199 != 3787985216415252375LLU) { NG(); } else { ; }
	
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

