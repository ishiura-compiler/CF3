
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

static uint8_t x1 = 3U;
uint8_t x2 = 12U;
int32_t x17 = -1;
static int8_t x18 = 0;
int16_t x20 = INT16_MAX;
volatile uint32_t x31 = UINT32_MAX;
int8_t x34 = INT8_MAX;
static int32_t x36 = 340107182;
int16_t x40 = INT16_MIN;
uint8_t x41 = 79U;
volatile uint32_t t7 = 0U;
static uint16_t x50 = UINT16_MAX;
static int8_t x51 = INT8_MIN;
uint32_t x65 = UINT32_MAX;
uint64_t x66 = 230571LLU;
int32_t x71 = 61141;
int16_t x74 = INT16_MAX;
int8_t x76 = -1;
volatile uint16_t x90 = 1U;
uint64_t t15 = 1561207934615650LLU;
uint32_t x98 = 120U;
uint16_t x112 = UINT16_MAX;
static volatile uint32_t t18 = 21065358U;
int16_t x120 = INT16_MIN;
volatile int64_t t19 = 284197767333529608LL;
int64_t x122 = 0LL;
static int32_t x124 = 3915728;
static int64_t t20 = 7065LL;
int8_t x126 = 42;
volatile uint64_t t21 = 408730823LLU;
uint16_t x141 = UINT16_MAX;
static volatile uint64_t x142 = UINT64_MAX;
volatile uint64_t t23 = 327633171958028LLU;
volatile int8_t x149 = -1;
int16_t x150 = INT16_MAX;
static int16_t x155 = INT16_MAX;
volatile int64_t x156 = -1LL;
static volatile int64_t t25 = 15776LL;
uint8_t x159 = 0U;
static int32_t t27 = 282;
volatile int64_t x169 = 1LL;
static int8_t x172 = INT8_MIN;
volatile int64_t t29 = -22573904773LL;
int64_t x178 = -1LL;
volatile int64_t x194 = -102537875547LL;
uint32_t x205 = 2562342U;
int32_t x206 = INT32_MAX;
int8_t x207 = INT8_MIN;
static uint8_t x211 = 77U;
static volatile int32_t t34 = -36536934;
uint32_t x221 = 1495449U;
int8_t x222 = 0;
uint64_t x225 = 1549918LLU;
static int16_t x228 = -1;
static volatile uint32_t t37 = 7692U;
volatile int32_t x249 = 200289;
static int64_t x260 = 47313223551LL;
static int64_t t41 = -33461447LL;
int64_t t42 = -1543LL;
int8_t x291 = 0;
int16_t x292 = 0;
static int16_t x313 = 91;
static int16_t x318 = INT16_MIN;
int16_t x329 = INT16_MIN;
int16_t x332 = INT16_MIN;
static uint64_t x350 = 164025LLU;
static int8_t x370 = -56;
uint8_t x371 = 1U;
uint8_t x379 = 13U;
static uint8_t x395 = UINT8_MAX;
uint32_t x419 = UINT32_MAX;
uint16_t x423 = UINT16_MAX;
volatile int8_t x429 = INT8_MIN;
int16_t x430 = INT16_MAX;
uint64_t x432 = UINT64_MAX;
int64_t x437 = 931859954170722433LL;
uint32_t x452 = 535014205U;
uint16_t x475 = 0U;
int16_t x498 = INT16_MIN;
int16_t x501 = INT16_MIN;
uint8_t x508 = 4U;
volatile int32_t t72 = -48464;
uint32_t x529 = 20188708U;
int16_t x548 = INT16_MAX;
uint32_t x586 = 6U;
int8_t x590 = INT8_MIN;
int16_t x591 = INT16_MIN;
int8_t x597 = -9;
int16_t x607 = INT16_MIN;
int32_t t82 = 0;
int16_t x622 = INT16_MIN;
uint64_t x624 = UINT64_MAX;
static volatile uint64_t t85 = 2141122742LLU;
int64_t x628 = 92LL;
uint64_t x630 = 111485LLU;
uint8_t x631 = 26U;
int32_t x635 = -31;
static int8_t x637 = 2;
uint64_t t89 = 46187LLU;
uint32_t x658 = 835143U;
volatile uint32_t t92 = 50636833U;
int64_t x666 = -979LL;
volatile uint32_t t96 = 346859U;
volatile int16_t x714 = -1;
volatile int64_t t100 = 236549919LL;
int16_t x730 = INT16_MIN;
volatile uint32_t x750 = UINT32_MAX;
int8_t x759 = INT8_MIN;
volatile uint32_t t104 = 38958627U;
int64_t x762 = -1LL;
int32_t x763 = INT32_MAX;
static uint32_t x764 = 962608966U;
uint16_t x766 = UINT16_MAX;
volatile uint32_t x767 = 99755650U;
uint16_t x768 = 515U;
volatile int16_t x769 = INT16_MIN;
int32_t x770 = INT32_MIN;
uint32_t t108 = 1U;
int8_t x805 = -53;
volatile uint8_t x812 = UINT8_MAX;
static volatile int16_t x839 = INT16_MIN;
int64_t x854 = 5LL;
uint32_t x856 = 2U;
volatile int64_t t115 = 313372548275795709LL;
int32_t x857 = INT32_MAX;
static volatile int64_t x865 = INT64_MIN;
uint8_t x867 = 61U;
volatile uint64_t t120 = 967LLU;
int32_t x895 = -1;
static uint32_t x896 = UINT32_MAX;
int16_t x899 = INT16_MIN;
uint64_t x921 = 69744LLU;
uint32_t x924 = UINT32_MAX;
static uint16_t x933 = 40U;
static volatile int16_t x935 = INT16_MAX;
int16_t x941 = INT16_MIN;
int8_t x944 = INT8_MAX;
int8_t x971 = INT8_MIN;
int32_t t132 = 0;
static int32_t t133 = 557556;
int16_t x985 = INT16_MIN;
volatile int16_t x1005 = -1;
int16_t x1007 = INT16_MIN;
int64_t x1013 = -6648LL;
static int32_t x1015 = -1;
int8_t x1016 = 56;
int16_t x1021 = -1;
static int64_t x1022 = INT64_MIN;
int64_t x1029 = INT64_MIN;
static int64_t x1034 = INT64_MAX;
static uint64_t x1036 = UINT64_MAX;
volatile int32_t t142 = 96891;
int64_t x1063 = 1306907747LL;
int8_t x1071 = INT8_MAX;
int64_t t146 = -124868LL;
volatile int32_t x1085 = -1;
int16_t x1114 = INT16_MIN;
int16_t x1115 = -1;
int16_t x1121 = INT16_MAX;
uint64_t x1133 = 4878123431690787LLU;
volatile uint16_t x1151 = UINT16_MAX;
uint64_t t155 = 481642539114434LLU;
int32_t x1159 = -27785;
static volatile uint16_t x1167 = 492U;
uint64_t x1168 = UINT64_MAX;
uint64_t t157 = 836032LLU;
volatile int64_t t158 = -3LL;
uint16_t x1177 = 2U;
uint64_t x1185 = UINT64_MAX;
volatile int16_t x1187 = INT16_MIN;
static uint32_t t161 = 28209U;
volatile int64_t x1197 = -30681974020547141LL;
int16_t x1200 = -45;
static uint8_t x1201 = UINT8_MAX;
int8_t x1211 = -1;
int16_t x1218 = -3;
int32_t x1219 = 0;
uint8_t x1228 = 1U;
int64_t t168 = -1LL;
int32_t x1236 = -116476;
volatile uint32_t x1237 = 1U;
uint8_t x1245 = 8U;
volatile uint8_t x1247 = 10U;
uint64_t x1257 = UINT64_MAX;
int8_t x1258 = INT8_MAX;
uint64_t t173 = 3470189307566LLU;
int16_t x1271 = INT16_MAX;
volatile uint8_t x1274 = 122U;
uint32_t x1279 = 141U;
int8_t x1280 = INT8_MIN;
int16_t x1300 = INT16_MIN;
uint64_t t179 = 15186658791LLU;
int64_t x1313 = -92824533249LL;
uint8_t x1321 = 2U;
int16_t x1323 = INT16_MIN;
int32_t t182 = -15856;
int8_t x1328 = -1;
uint64_t t183 = 5932LLU;
static volatile uint64_t t184 = 15902LLU;
uint64_t x1333 = 6167420567021489925LLU;
static int32_t x1336 = INT32_MAX;
static volatile uint64_t t185 = 54LLU;
int16_t x1343 = 0;
int64_t x1351 = -52350LL;
uint32_t x1352 = 4U;
uint32_t x1364 = 166334126U;
int64_t t188 = -403078LL;
int16_t x1369 = INT16_MIN;
static uint8_t x1373 = 31U;
int64_t x1410 = -1LL;
int8_t x1411 = -1;
static int16_t x1425 = -1;
static uint32_t x1427 = UINT32_MAX;
int8_t x1456 = 7;
int8_t x1465 = 5;
uint64_t x1468 = 18486LLU;


void f0(void) {
    	static volatile uint8_t x3 = 7U;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -18;

    t0 = ((x1-x2)*(x3*x4));

    if (t0 != 2064384) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x13 = UINT32_MAX;
	static volatile int8_t x14 = 0;
	static int8_t x15 = INT8_MIN;
	uint16_t x16 = 13100U;
	volatile uint32_t t1 = 9820U;

    t1 = ((x13-x14)*(x15*x16));

    if (t1 != 1676800U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x19 = UINT32_MAX;
	uint32_t t2 = 2U;

    t2 = ((x17-x18)*(x19*x20));

    if (t2 != 32767U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x25 = 4456017476LLU;
	volatile int16_t x26 = 1;
	int16_t x27 = INT16_MIN;
	int8_t x28 = -1;
	uint64_t t3 = 2565LLU;

    t3 = ((x25-x26)*(x27*x28));

    if (t3 != 146014780620800LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x29 = 1778U;
	int8_t x30 = INT8_MIN;
	static volatile int32_t x32 = -1;
	uint32_t t4 = 109568U;

    t4 = ((x29-x30)*(x31*x32));

    if (t4 != 1906U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x33 = 11;
	volatile uint64_t x35 = UINT64_MAX;
	volatile uint64_t t5 = 393813267942751431LLU;

    t5 = ((x33-x34)*(x35*x36));

    if (t5 != 39452433112LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = -1;
	static uint64_t x38 = 57949LLU;
	int8_t x39 = INT8_MIN;
	uint64_t t6 = 13299298543LLU;

    t6 = ((x37-x38)*(x39*x40));

    if (t6 != 18446743830649634816LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x42 = -24;
	uint32_t x43 = UINT32_MAX;
	uint32_t x44 = UINT32_MAX;

    t7 = ((x41-x42)*(x43*x44));

    if (t7 != 103U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x49 = -7454303593LL;
	int8_t x52 = INT8_MIN;
	static int64_t t8 = -648835817LL;

    t8 = ((x49-x50)*(x51*x52));

    if (t8 != -122132383793152LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint64_t x53 = 13596605LLU;
	uint32_t x54 = 350535U;
	int8_t x55 = 3;
	int16_t x56 = 1913;
	volatile uint64_t t9 = 16LLU;

    t9 = ((x53-x54)*(x55*x56));

    if (t9 != 76019195730LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x57 = -3;
	int32_t x58 = INT32_MIN;
	uint32_t x59 = 54U;
	int32_t x60 = 5;
	uint32_t t10 = 16383U;

    t10 = ((x57-x58)*(x59*x60));

    if (t10 != 4294966486U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x67 = -1;
	volatile int64_t x68 = 369LL;
	uint64_t t11 = 211564LLU;

    t11 = ((x65-x66)*(x67*x68));

    if (t11 != 18446742488951700460LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x69 = -120547312LL;
	int16_t x70 = INT16_MIN;
	uint8_t x72 = UINT8_MAX;
	static int64_t t12 = 1LL;

    t12 = ((x69-x70)*(x71*x72));

    if (t12 != -1878936832349520LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x73 = 4598U;
	uint64_t x75 = UINT64_MAX;
	uint64_t t13 = 4971358LLU;

    t13 = ((x73-x74)*(x75*x76));

    if (t13 != 18446744073709523447LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x81 = INT8_MAX;
	static int16_t x82 = INT16_MIN;
	static uint32_t x83 = 13U;
	volatile int8_t x84 = INT8_MIN;
	volatile uint32_t t14 = 51097U;

    t14 = ((x81-x82)*(x83*x84));

    if (t14 != 4240230016U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x89 = 1U;
	volatile uint32_t x91 = UINT32_MAX;
	uint64_t x92 = UINT64_MAX;

    t15 = ((x89-x90)*(x91*x92));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x93 = 3338848303751228LLU;
	volatile int16_t x94 = INT16_MIN;
	uint8_t x95 = 13U;
	uint8_t x96 = 2U;
	volatile uint64_t t16 = 34457104695453864LLU;

    t16 = ((x93-x94)*(x95*x96));

    if (t16 != 86810055898383896LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x97 = -3086LL;
	int8_t x99 = -1;
	static volatile int8_t x100 = -41;
	int64_t t17 = -477017813LL;

    t17 = ((x97-x98)*(x99*x100));

    if (t17 != -131446LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x109 = INT8_MIN;
	uint32_t x110 = 1107235798U;
	uint16_t x111 = 6U;

    t18 = ((x109-x110)*(x111*x112));

    if (t18 != 301365764U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x117 = 185LL;
	int64_t x118 = -140LL;
	volatile int16_t x119 = -1;

    t19 = ((x117-x118)*(x119*x120));

    if (t19 != 10649600LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x121 = 40U;
	int8_t x123 = INT8_MAX;

    t20 = ((x121-x122)*(x123*x124));

    if (t20 != 19891898240LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x125 = 9283;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = -1;

    t21 = ((x125-x126)*(x127*x128));

    if (t21 != 9241LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x133 = 32425;
	static int32_t x134 = -3518;
	volatile int8_t x135 = INT8_MIN;
	int32_t x136 = -1;
	volatile int32_t t22 = 14;

    t22 = ((x133-x134)*(x135*x136));

    if (t22 != 4600704) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x143 = 8;
	int8_t x144 = 1;

    t23 = ((x141-x142)*(x143*x144));

    if (t23 != 524288LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x151 = 33601349U;
	static int8_t x152 = -1;
	volatile uint32_t t24 = 0U;

    t24 = ((x149-x150)*(x151*x152));

    if (t24 != 1537376256U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x153 = 90403201U;
	static uint16_t x154 = UINT16_MAX;

    t25 = ((x153-x154)*(x155*x156));

    if (t25 != -2960094301822LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x157 = INT64_MIN;
	uint64_t x158 = 20699512967004LLU;
	int16_t x160 = -1;
	uint64_t t26 = 27719728505LLU;

    t26 = ((x157-x158)*(x159*x160));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x161 = INT8_MIN;
	int16_t x162 = 4058;
	uint8_t x163 = UINT8_MAX;
	volatile int8_t x164 = INT8_MAX;

    t27 = ((x161-x162)*(x163*x164));

    if (t27 != -135563610) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x165 = 1418372U;
	int8_t x166 = INT8_MAX;
	volatile uint64_t x167 = UINT64_MAX;
	static volatile int8_t x168 = INT8_MIN;
	volatile uint64_t t28 = 4765164533942LLU;

    t28 = ((x165-x166)*(x167*x168));

    if (t28 != 181535360LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x170 = 26541U;
	uint16_t x171 = UINT16_MAX;

    t29 = ((x169-x170)*(x171*x172));

    if (t29 != 222630259200LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x173 = 120U;
	int8_t x174 = 8;
	volatile int16_t x175 = INT16_MAX;
	uint32_t x176 = 60786852U;
	uint32_t t30 = 1336U;

    t30 = ((x173-x174)*(x175*x176));

    if (t30 != 1309947968U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x177 = INT8_MIN;
	volatile uint32_t x179 = 2616U;
	volatile int16_t x180 = -1;
	volatile int64_t t31 = 0LL;

    t31 = ((x177-x178)*(x179*x180));

    if (t31 != -545460514360LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x193 = INT8_MAX;
	uint32_t x195 = UINT32_MAX;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t32 = 10931133LLU;

    t32 = ((x193-x194)*(x195*x196));

    if (t32 != 2325035250423156954LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x208 = -1;
	uint32_t t33 = 0U;

    t33 = ((x205-x206)*(x207*x208));

    if (t33 != 327979904U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x209 = -1;
	volatile int8_t x210 = INT8_MIN;
	static int16_t x212 = -7;

    t34 = ((x209-x210)*(x211*x212));

    if (t34 != -68453) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x223 = -1;
	uint16_t x224 = UINT16_MAX;
	static uint32_t t35 = 2966651U;

    t35 = ((x221-x222)*(x223*x224));

    if (t35 != 779997593U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x226 = UINT32_MAX;
	volatile int8_t x227 = -1;
	volatile uint64_t t36 = 16353931291047LLU;

    t36 = ((x225-x226)*(x227*x228));

    if (t36 != 18446744069416134239LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x229 = 323U;
	int8_t x230 = INT8_MIN;
	uint32_t x231 = 1694U;
	uint16_t x232 = 0U;

    t37 = ((x229-x230)*(x231*x232));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint8_t x233 = 1U;
	volatile uint32_t x234 = 1176065431U;
	int32_t x235 = -28576;
	int64_t x236 = -1LL;
	int64_t t38 = 26022956095630LL;

    t38 = ((x233-x234)*(x235*x236));

    if (t38 != 89125739722816LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x250 = -1;
	uint32_t x251 = 153U;
	uint8_t x252 = 20U;
	static uint32_t t39 = 116776936U;

    t39 = ((x249-x250)*(x251*x252));

    if (t39 != 612887400U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x253 = INT8_MIN;
	int32_t x254 = -3870892;
	int64_t x255 = -14750869LL;
	int8_t x256 = INT8_MAX;
	int64_t t40 = -5775LL;

    t40 = ((x253-x254)*(x255*x256));

    if (t40 != -7251335852127332LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x257 = -1;
	volatile int32_t x258 = -5906;
	static volatile uint8_t x259 = 3U;

    t41 = ((x257-x258)*(x259*x260));

    if (t41 != 838153755205965LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x269 = -1LL;
	int8_t x270 = -49;
	int16_t x271 = 3;
	int16_t x272 = -1;

    t42 = ((x269-x270)*(x271*x272));

    if (t42 != -144LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x281 = UINT8_MAX;
	int8_t x282 = INT8_MIN;
	uint32_t x283 = 1487984468U;
	int64_t x284 = -6013172LL;
	volatile int64_t t43 = 2958342247863005LL;

    t43 = ((x281-x282)*(x283*x284));

    if (t43 != -3426895004594985968LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x285 = -5LL;
	int8_t x286 = -1;
	uint32_t x287 = 245U;
	int16_t x288 = 48;
	int64_t t44 = -4LL;

    t44 = ((x285-x286)*(x287*x288));

    if (t44 != -47040LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	volatile int32_t t45 = 649331422;

    t45 = ((x289-x290)*(x291*x292));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x314 = 31676307304135LLU;
	uint64_t x315 = 1870004163LLU;
	uint8_t x316 = 2U;
	uint64_t t46 = 7794LLU;

    t46 = ((x313-x314)*(x315*x316));

    if (t46 != 13784131377276559224LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x317 = 3210U;
	uint8_t x319 = 0U;
	int8_t x320 = INT8_MIN;
	uint32_t t47 = 198U;

    t47 = ((x317-x318)*(x319*x320));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	int16_t x323 = 1;
	uint64_t x324 = 16244261035446475LLU;
	volatile uint64_t t48 = 3618790LLU;

    t48 = ((x321-x322)*(x323*x324));

    if (t48 != 6941182157716979712LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x330 = INT16_MIN;
	int8_t x331 = 51;
	static int32_t t49 = -169329;

    t49 = ((x329-x330)*(x331*x332));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x333 = 3U;
	static uint8_t x334 = 6U;
	int64_t x335 = -18232131LL;
	int16_t x336 = -25;
	static int64_t t50 = -11888669211689545LL;

    t50 = ((x333-x334)*(x335*x336));

    if (t50 != -1367409825LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x341 = 4U;
	int16_t x342 = INT16_MAX;
	static int64_t x343 = -1LL;
	int16_t x344 = INT16_MIN;
	int64_t t51 = 121LL;

    t51 = ((x341-x342)*(x343*x344));

    if (t51 != -1073577984LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x349 = UINT8_MAX;
	static int64_t x351 = INT64_MAX;
	static uint64_t x352 = UINT64_MAX;
	uint64_t t52 = 0LLU;

    t52 = ((x349-x350)*(x351*x352));

    if (t52 != 18446744073709387846LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x365 = INT8_MIN;
	static int16_t x366 = INT16_MAX;
	volatile uint64_t x367 = 49929584570LLU;
	int16_t x368 = 3;
	volatile uint64_t t53 = 20113LLU;

    t53 = ((x365-x366)*(x367*x368));

    if (t53 != 18441816772656261166LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x369 = INT8_MIN;
	int32_t x372 = -1;
	static int32_t t54 = 10869;

    t54 = ((x369-x370)*(x371*x372));

    if (t54 != 72) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x373 = -6787311357514693LL;
	static uint16_t x374 = 30U;
	int16_t x375 = 1;
	uint8_t x376 = 92U;
	static volatile int64_t t55 = 4888630LL;

    t55 = ((x373-x374)*(x375*x376));

    if (t55 != -624432644891354516LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x377 = INT32_MIN;
	int16_t x378 = -63;
	uint64_t x380 = 1355LLU;
	uint64_t t56 = 32779677LLU;

    t56 = ((x377-x378)*(x379*x380));

    if (t56 != 18446706245786201841LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x393 = -1;
	int16_t x394 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t57 = 5;

    t57 = ((x393-x394)*(x395*x396));

    if (t57 != -1069514880) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x401 = -1;
	int64_t x402 = -1LL;
	uint16_t x403 = UINT16_MAX;
	int64_t x404 = -1LL;
	volatile int64_t t58 = 509495996286779470LL;

    t58 = ((x401-x402)*(x403*x404));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x405 = INT32_MAX;
	int64_t x406 = -1LL;
	static int32_t x407 = INT32_MIN;
	static uint32_t x408 = UINT32_MAX;
	static volatile int64_t t59 = -1748790LL;

    t59 = ((x405-x406)*(x407*x408));

    if (t59 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x409 = -1;
	volatile uint8_t x410 = 2U;
	uint16_t x411 = 201U;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t60 = 9U;

    t60 = ((x409-x410)*(x411*x412));

    if (t60 != 603U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x417 = INT8_MIN;
	int16_t x418 = INT16_MIN;
	int16_t x420 = -1;
	volatile uint32_t t61 = 448290U;

    t61 = ((x417-x418)*(x419*x420));

    if (t61 != 32640U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x421 = 41U;
	int8_t x422 = -30;
	static uint64_t x424 = UINT64_MAX;
	volatile uint64_t t62 = 2302260366022863933LLU;

    t62 = ((x421-x422)*(x423*x424));

    if (t62 != 18446744073704898631LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x431 = UINT8_MAX;
	uint64_t t63 = 495264LLU;

    t63 = ((x429-x430)*(x431*x432));

    if (t63 != 8388225LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x438 = UINT16_MAX;
	volatile uint64_t x439 = 77LLU;
	volatile int8_t x440 = 1;
	uint64_t t64 = 3963951LLU;

    t64 = ((x437-x438)*(x439*x440));

    if (t64 != 16412984250011926298LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x449 = -1;
	int16_t x450 = INT16_MIN;
	uint16_t x451 = 1U;
	uint32_t t65 = 36U;

    t65 = ((x449-x450)*(x451*x452));

    if (t65 != 3048920259U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x457 = 109U;
	int16_t x458 = 6432;
	static volatile int16_t x459 = INT16_MAX;
	volatile int16_t x460 = 4;
	int32_t t66 = 110010;

    t66 = ((x457-x458)*(x459*x460));

    if (t66 != -828742964) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x461 = INT64_MAX;
	uint64_t x462 = 66168094LLU;
	int8_t x463 = INT8_MIN;
	int32_t x464 = 64033;
	uint64_t t67 = 8055304212LLU;

    t67 = ((x461-x462)*(x463*x464));

    if (t67 != 542328528273280LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x473 = INT16_MIN;
	int32_t x474 = INT32_MIN;
	int8_t x476 = INT8_MIN;
	volatile int32_t t68 = 23;

    t68 = ((x473-x474)*(x475*x476));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x485 = INT16_MAX;
	uint64_t x486 = UINT64_MAX;
	int16_t x487 = INT16_MIN;
	volatile int16_t x488 = -1;
	uint64_t t69 = 180983731LLU;

    t69 = ((x485-x486)*(x487*x488));

    if (t69 != 1073741824LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x497 = UINT64_MAX;
	static int64_t x499 = -1LL;
	int64_t x500 = 11837487569467LL;
	uint64_t t70 = 11360251890LLU;

    t70 = ((x497-x498)*(x499*x500));

    if (t70 != 18058865118520826427LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x502 = 1396531264806064867LLU;
	volatile int8_t x503 = -1;
	static uint16_t x504 = 7742U;
	uint64_t t71 = 8374797328526386613LLU;

    t71 = ((x501-x502)*(x503*x504));

    if (t71 != 2153024935010643194LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x505 = UINT8_MAX;
	uint16_t x506 = UINT16_MAX;
	int8_t x507 = -1;

    t72 = ((x505-x506)*(x507*x508));

    if (t72 != 261120) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x517 = 1735429345341476671LLU;
	uint32_t x518 = UINT32_MAX;
	static volatile uint16_t x519 = UINT16_MAX;
	static volatile uint64_t x520 = UINT64_MAX;
	uint64_t t73 = 7766760319067LLU;

    t73 = ((x517-x518)*(x519*x520));

    if (t73 != 11262093010103308096LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x530 = -1;
	int16_t x531 = 0;
	int8_t x532 = INT8_MIN;
	volatile uint32_t t74 = 3368779U;

    t74 = ((x529-x530)*(x531*x532));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x533 = 67U;
	static int16_t x534 = -1;
	int8_t x535 = INT8_MAX;
	int8_t x536 = INT8_MAX;
	volatile uint32_t t75 = 5609U;

    t75 = ((x533-x534)*(x535*x536));

    if (t75 != 1096772U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x545 = -1;
	static int32_t x546 = INT32_MIN;
	uint64_t x547 = 14156933000029LLU;
	uint64_t t76 = 18261LLU;

    t76 = ((x545-x546)*(x547*x548));

    if (t76 != 9145686826445957981LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x553 = -1;
	static volatile int64_t x554 = 1881797LL;
	uint64_t x555 = 105422215850855988LLU;
	uint16_t x556 = UINT16_MAX;
	uint64_t t77 = 5459989159LLU;

    t77 = ((x553-x554)*(x555*x556));

    if (t77 != 13553730581356147768LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x577 = INT16_MIN;
	uint16_t x578 = 30U;
	static volatile int32_t x579 = -1;
	static int8_t x580 = INT8_MIN;
	int32_t t78 = 3357;

    t78 = ((x577-x578)*(x579*x580));

    if (t78 != -4198144) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x585 = 319066590010451935LLU;
	volatile int32_t x587 = -8;
	volatile uint32_t x588 = UINT32_MAX;
	static uint64_t t79 = 17320036327LLU;

    t79 = ((x585-x586)*(x587*x588));

    if (t79 != 2552532720083615432LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x589 = 96U;
	static volatile uint32_t x592 = UINT32_MAX;
	uint32_t t80 = 1U;

    t80 = ((x589-x590)*(x591*x592));

    if (t80 != 7340032U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x598 = -39;
	int8_t x599 = INT8_MIN;
	uint64_t x600 = UINT64_MAX;
	static volatile uint64_t t81 = 1896108LLU;

    t81 = ((x597-x598)*(x599*x600));

    if (t81 != 3840LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x605 = -2;
	volatile int8_t x606 = INT8_MIN;
	uint8_t x608 = 4U;

    t82 = ((x605-x606)*(x607*x608));

    if (t82 != -16515072) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x609 = 0;
	static uint32_t x610 = 9730654U;
	uint32_t x611 = UINT32_MAX;
	int8_t x612 = 37;
	uint32_t t83 = 755252336U;

    t83 = ((x609-x610)*(x611*x612));

    if (t83 != 360034198U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x613 = UINT16_MAX;
	volatile int16_t x614 = INT16_MIN;
	static uint32_t x615 = 1999U;
	int16_t x616 = INT16_MIN;
	static uint32_t t84 = 8392517U;

    t84 = ((x613-x614)*(x615*x616));

    if (t84 != 3286728704U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x621 = INT64_MIN;
	uint32_t x623 = 155278U;

    t85 = ((x621-x622)*(x623*x624));

    if (t85 != 18446744068621402112LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x625 = INT16_MAX;
	int16_t x626 = INT16_MIN;
	static uint16_t x627 = UINT16_MAX;
	int64_t t86 = -95437288619320LL;

    t86 = ((x625-x626)*(x627*x628));

    if (t86 != 395124932700LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x629 = INT8_MAX;
	uint16_t x632 = 11U;
	static uint64_t t87 = 48397724LLU;

    t87 = ((x629-x630)*(x631*x632));

    if (t87 != 18446744073677703228LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x633 = 15149U;
	int64_t x634 = 354618645584LL;
	uint8_t x636 = 4U;
	int64_t t88 = -380165LL;

    t88 = ((x633-x634)*(x635*x636));

    if (t88 != 43972710173940LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x638 = 227038U;
	uint64_t x639 = 368990707LLU;
	uint16_t x640 = 28U;

    t89 = ((x637-x638)*(x639*x640));

    if (t89 != 7478650710306283728LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x641 = INT32_MIN;
	int16_t x642 = -1;
	uint32_t x643 = UINT32_MAX;
	int32_t x644 = -108;
	volatile uint32_t t90 = 9796750U;

    t90 = ((x641-x642)*(x643*x644));

    if (t90 != 108U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x653 = 2U;
	uint64_t x654 = UINT64_MAX;
	uint16_t x655 = 3U;
	volatile uint32_t x656 = 4164383U;
	volatile uint64_t t91 = 5901575LLU;

    t91 = ((x653-x654)*(x655*x656));

    if (t91 != 37479447LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x657 = INT16_MIN;
	uint16_t x659 = 66U;
	volatile int32_t x660 = -15050987;

    t92 = ((x657-x658)*(x659*x660));

    if (t92 != 2273595802U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x661 = -1LL;
	static uint32_t x662 = 1341644576U;
	int32_t x663 = -1;
	int16_t x664 = INT16_MIN;
	volatile int64_t t93 = -239593164935429LL;

    t93 = ((x661-x662)*(x663*x664));

    if (t93 != -43963009499136LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x665 = UINT8_MAX;
	uint64_t x667 = 389151LLU;
	int64_t x668 = INT64_MIN;
	static volatile uint64_t t94 = 3LLU;

    t94 = ((x665-x666)*(x667*x668));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x669 = UINT64_MAX;
	uint64_t x670 = 4906555012LLU;
	int16_t x671 = INT16_MIN;
	static int16_t x672 = INT16_MAX;
	uint64_t t95 = 77481967862LLU;

    t95 = ((x669-x670)*(x671*x672));

    if (t95 != 5268212551220297728LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x673 = -1;
	uint32_t x674 = 789U;
	volatile int8_t x675 = INT8_MAX;
	static int16_t x676 = -1;

    t96 = ((x673-x674)*(x675*x676));

    if (t96 != 100330U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x701 = -1;
	volatile int8_t x702 = -1;
	uint32_t x703 = 62U;
	int32_t x704 = INT32_MAX;
	static uint32_t t97 = 8555U;

    t97 = ((x701-x702)*(x703*x704));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x713 = 1824156U;
	int8_t x715 = INT8_MAX;
	int64_t x716 = 48LL;
	int64_t t98 = 3191752LL;

    t98 = ((x713-x714)*(x715*x716));

    if (t98 != 11120061072LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x721 = UINT16_MAX;
	int8_t x722 = 6;
	int16_t x723 = INT16_MIN;
	int64_t x724 = -1LL;
	volatile int64_t t99 = -248LL;

    t99 = ((x721-x722)*(x723*x724));

    if (t99 != 2147254272LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x725 = INT8_MAX;
	int64_t x726 = 22828564LL;
	volatile uint32_t x727 = 2781U;
	int16_t x728 = -5;

    t100 = ((x725-x726)*(x727*x728));

    if (t100 != -98047072904379867LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x729 = 91U;
	int16_t x731 = -1;
	static int64_t x732 = -771LL;
	volatile int64_t t101 = -1881654765158193167LL;

    t101 = ((x729-x730)*(x731*x732));

    if (t101 != 25334289LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x737 = -1;
	static int32_t x738 = INT32_MIN;
	uint64_t x739 = 706286236826LLU;
	int16_t x740 = -1;
	uint64_t t102 = 5100007091409LLU;

    t102 = ((x737-x738)*(x739*x740));

    if (t102 != 14341614432888599706LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x749 = -2894;
	int16_t x751 = INT16_MIN;
	volatile uint16_t x752 = 3U;
	uint32_t t103 = 3208U;

    t103 = ((x749-x750)*(x751*x752));

    if (t103 != 284393472U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x757 = 12099;
	int16_t x758 = -1;
	uint32_t x760 = 1304U;

    t104 = ((x757-x758)*(x759*x760));

    if (t104 != 2275332096U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x761 = 3191;
	volatile int64_t t105 = -2286179175496366024LL;

    t105 = ((x761-x762)*(x763*x764));

    if (t105 != 10636887789360LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x765 = 51U;
	uint32_t t106 = 9U;

    t106 = ((x765-x766)*(x767*x768));

    if (t106 != 2276345656U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x771 = 2151U;
	int16_t x772 = 4120;
	volatile uint32_t t107 = 40U;

    t107 = ((x769-x770)*(x771*x772));

    if (t107 != 1663827968U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x793 = -1;
	int16_t x794 = 1742;
	static volatile int32_t x795 = INT32_MIN;
	static uint32_t x796 = 7U;

    t108 = ((x793-x794)*(x795*x796));

    if (t108 != 2147483648U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x801 = 55;
	int16_t x802 = 1332;
	int32_t x803 = -1812;
	static int8_t x804 = 8;
	volatile int32_t t109 = -45278;

    t109 = ((x801-x802)*(x803*x804));

    if (t109 != 18511392) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x806 = INT16_MAX;
	int8_t x807 = INT8_MAX;
	uint64_t x808 = 1842187351LLU;
	volatile uint64_t t110 = 1892615095LLU;

    t110 = ((x805-x806)*(x807*x808));

    if (t110 != 18439065578924354476LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x809 = INT32_MIN;
	static volatile int64_t x810 = -1LL;
	volatile uint16_t x811 = UINT16_MAX;
	int64_t t111 = 4044057698305010LL;

    t111 = ((x809-x810)*(x811*x812));

    if (t111 != -35887511905566975LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x825 = INT64_MAX;
	static uint64_t x826 = 3630058507505LLU;
	int16_t x827 = INT16_MAX;
	uint32_t x828 = 2923U;
	volatile uint64_t t112 = 3136690LLU;

    t112 = ((x825-x826)*(x827*x828));

    if (t112 != 12031979878878531366LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x837 = INT8_MIN;
	volatile uint16_t x838 = 1814U;
	static int8_t x840 = -1;
	static volatile int32_t t113 = -28540047;

    t113 = ((x837-x838)*(x839*x840));

    if (t113 != -63635456) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x845 = INT16_MIN;
	int16_t x846 = INT16_MIN;
	static int8_t x847 = 0;
	static int32_t x848 = -1;
	volatile int32_t t114 = 458032;

    t114 = ((x845-x846)*(x847*x848));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x853 = INT16_MIN;
	int8_t x855 = -1;

    t115 = ((x853-x854)*(x855*x856));

    if (t115 != -140758963126262LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x858 = 209U;
	static uint64_t x859 = 192LLU;
	static volatile int32_t x860 = -4676;
	uint64_t t116 = 9879297998428LLU;

    t116 = ((x857-x858)*(x859*x860));

    if (t116 != 18444816080258782720LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x866 = 47363LLU;
	int64_t x868 = 1206119849154LL;
	uint64_t t117 = 200819561391328LLU;

    t117 = ((x865-x866)*(x867*x868));

    if (t117 != 14962091354365216594LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x869 = UINT8_MAX;
	uint16_t x870 = 1U;
	int32_t x871 = INT32_MIN;
	volatile uint32_t x872 = 4196856U;
	volatile uint32_t t118 = 1U;

    t118 = ((x869-x870)*(x871*x872));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x873 = 13;
	static uint64_t x874 = 7353221LLU;
	int64_t x875 = 4012695423468476LL;
	static uint64_t x876 = UINT64_MAX;
	static uint64_t t119 = 148LLU;

    t119 = ((x873-x874)*(x875*x876));

    if (t119 != 9840315550212437024LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x877 = 19485663;
	static volatile uint64_t x878 = 2087277LLU;
	int8_t x879 = INT8_MIN;
	uint16_t x880 = UINT16_MAX;

    t120 = ((x877-x878)*(x879*x880));

    if (t120 != 18446598127696558336LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x881 = -9;
	int32_t x882 = INT32_MIN;
	uint16_t x883 = UINT16_MAX;
	uint64_t x884 = 1260LLU;
	static volatile uint64_t t121 = 406952LLU;

    t121 = ((x881-x882)*(x883*x884));

    if (t121 != 177326528755149900LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x889 = 1;
	volatile uint8_t x890 = 1U;
	int16_t x891 = INT16_MAX;
	int16_t x892 = -1;
	int32_t t122 = -2982;

    t122 = ((x889-x890)*(x891*x892));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x893 = -9686;
	static int16_t x894 = 2040;
	volatile uint32_t t123 = 7400U;

    t123 = ((x893-x894)*(x895*x896));

    if (t123 != 4294955570U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x897 = -4;
	int32_t x898 = -1;
	volatile uint64_t x900 = 1130587LLU;
	volatile uint64_t t124 = 4207371259963LLU;

    t124 = ((x897-x898)*(x899*x900));

    if (t124 != 111141224448LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x901 = -1LL;
	static int16_t x902 = 122;
	int8_t x903 = INT8_MIN;
	uint8_t x904 = 4U;
	volatile int64_t t125 = -61LL;

    t125 = ((x901-x902)*(x903*x904));

    if (t125 != 62976LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x905 = INT16_MAX;
	uint32_t x906 = 2768U;
	static volatile uint8_t x907 = 9U;
	int8_t x908 = 3;
	uint32_t t126 = 60U;

    t126 = ((x905-x906)*(x907*x908));

    if (t126 != 809973U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x909 = -1;
	int32_t x910 = INT32_MIN;
	uint64_t x911 = UINT64_MAX;
	uint32_t x912 = 10U;
	uint64_t t127 = 3412224707LLU;

    t127 = ((x909-x910)*(x911*x912));

    if (t127 != 18446744052234715146LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x922 = -1LL;
	int32_t x923 = INT32_MIN;
	volatile uint64_t t128 = 183868045704198822LLU;

    t128 = ((x921-x922)*(x923*x924));

    if (t128 != 149776247029760LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x934 = INT8_MIN;
	uint8_t x936 = 106U;
	int32_t t129 = 12354653;

    t129 = ((x933-x934)*(x935*x936));

    if (t129 != 583514736) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x942 = -1LL;
	int8_t x943 = INT8_MIN;
	int64_t t130 = -3812464286589870LL;

    t130 = ((x941-x942)*(x943*x944));

    if (t130 != 532660352LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x945 = UINT16_MAX;
	uint8_t x946 = UINT8_MAX;
	volatile int64_t x947 = INT64_MAX;
	static int32_t x948 = 0;
	int64_t t131 = 268410601828367LL;

    t131 = ((x945-x946)*(x947*x948));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x969 = -29;
	int8_t x970 = INT8_MIN;
	volatile int32_t x972 = -356;

    t132 = ((x969-x970)*(x971*x972));

    if (t132 != 4511232) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x973 = UINT8_MAX;
	int8_t x974 = -1;
	int16_t x975 = INT16_MIN;
	int8_t x976 = INT8_MIN;

    t133 = ((x973-x974)*(x975*x976));

    if (t133 != 1073741824) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x986 = -1;
	volatile int16_t x987 = 0;
	int16_t x988 = -1;
	static volatile int32_t t134 = 5;

    t134 = ((x985-x986)*(x987*x988));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x997 = -1;
	static int8_t x998 = 31;
	static int8_t x999 = -1;
	volatile uint8_t x1000 = UINT8_MAX;
	volatile int32_t t135 = 1768281;

    t135 = ((x997-x998)*(x999*x1000));

    if (t135 != 8160) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x1006 = 9U;
	volatile uint16_t x1008 = 105U;
	volatile int32_t t136 = 0;

    t136 = ((x1005-x1006)*(x1007*x1008));

    if (t136 != 34406400) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x1014 = 517;
	static volatile int64_t t137 = 408191LL;

    t137 = ((x1013-x1014)*(x1015*x1016));

    if (t137 != 401240LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1023 = 1;
	int32_t x1024 = -1;
	volatile int64_t t138 = 11814544LL;

    t138 = ((x1021-x1022)*(x1023*x1024));

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x1030 = 821481994639603140LLU;
	static int8_t x1031 = INT8_MIN;
	int8_t x1032 = -36;
	uint64_t t139 = 670122731716183694LLU;

    t139 = ((x1029-x1030)*(x1031*x1032));

    if (t139 != 14640247884876363776LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1033 = -1;
	int16_t x1035 = -98;
	uint64_t t140 = 4621866459LLU;

    t140 = ((x1033-x1034)*(x1035*x1036));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1037 = UINT64_MAX;
	int8_t x1038 = INT8_MIN;
	uint64_t x1039 = UINT64_MAX;
	int32_t x1040 = INT32_MIN;
	static volatile uint64_t t141 = 254377576383105LLU;

    t141 = ((x1037-x1038)*(x1039*x1040));

    if (t141 != 272730423296LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1045 = -1;
	uint8_t x1046 = 105U;
	volatile int8_t x1047 = 0;
	int8_t x1048 = INT8_MIN;

    t142 = ((x1045-x1046)*(x1047*x1048));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x1057 = -6;
	volatile uint64_t x1058 = 11983938437450LLU;
	int8_t x1059 = INT8_MIN;
	static uint16_t x1060 = 13U;
	volatile uint64_t t143 = 120LLU;

    t143 = ((x1057-x1058)*(x1059*x1060));

    if (t143 != 19941273559926784LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x1061 = INT64_MIN;
	static int64_t x1062 = INT64_MIN;
	uint8_t x1064 = 79U;
	int64_t t144 = 177LL;

    t144 = ((x1061-x1062)*(x1063*x1064));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1065 = INT32_MAX;
	int32_t x1066 = 336580;
	static uint64_t x1067 = 3841LLU;
	int64_t x1068 = INT64_MAX;
	uint64_t t145 = 0LLU;

    t145 = ((x1065-x1066)*(x1067*x1068));

    if (t145 != 9223363789662891461LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x1069 = INT8_MAX;
	uint8_t x1070 = 115U;
	int64_t x1072 = -1LL;

    t146 = ((x1069-x1070)*(x1071*x1072));

    if (t146 != -1524LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1086 = 15486U;
	static int32_t x1087 = 18;
	static uint64_t x1088 = UINT64_MAX;
	uint64_t t147 = 3166136933723LLU;

    t147 = ((x1085-x1086)*(x1087*x1088));

    if (t147 != 18446743996400419054LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x1097 = 3U;
	static int16_t x1098 = -1;
	int64_t x1099 = -37623LL;
	volatile uint64_t x1100 = 10579469723638LLU;
	uint64_t t148 = 228815118071LLU;

    t148 = ((x1097-x1098)*(x1099*x1100));

    if (t148 != 16854618516059821720LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x1101 = INT16_MIN;
	volatile uint16_t x1102 = UINT16_MAX;
	static uint8_t x1103 = 3U;
	int8_t x1104 = INT8_MIN;
	int32_t t149 = 139822;

    t149 = ((x1101-x1102)*(x1103*x1104));

    if (t149 != 37748352) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1113 = -1;
	volatile uint64_t x1116 = 340954839736564368LLU;
	volatile uint64_t t150 = 741645LLU;

    t150 = ((x1113-x1114)*(x1115*x1116));

    if (t150 != 6659675019983633040LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1122 = -6214;
	static uint64_t x1123 = UINT64_MAX;
	static int64_t x1124 = -1LL;
	uint64_t t151 = 1LLU;

    t151 = ((x1121-x1122)*(x1123*x1124));

    if (t151 != 38981LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x1125 = 10U;
	int8_t x1126 = INT8_MIN;
	int8_t x1127 = -1;
	int8_t x1128 = INT8_MIN;
	volatile int32_t t152 = -2;

    t152 = ((x1125-x1126)*(x1127*x1128));

    if (t152 != 17664) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1134 = -1;
	int32_t x1135 = 17;
	uint8_t x1136 = UINT8_MAX;
	uint64_t t153 = 1727LLU;

    t153 = ((x1133-x1134)*(x1135*x1136));

    if (t153 != 2699921002670014364LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x1145 = UINT32_MAX;
	static uint64_t x1146 = 383475LLU;
	int64_t x1147 = 15288415LL;
	int8_t x1148 = INT8_MAX;
	volatile uint64_t t154 = 328806051036555LLU;

    t154 = ((x1145-x1146)*(x1147*x1148));

    if (t154 != 8338487220940553100LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1149 = 26U;
	static uint8_t x1150 = UINT8_MAX;
	volatile uint64_t x1152 = 1427842133329LLU;

    t155 = ((x1149-x1150)*(x1151*x1152));

    if (t155 != 15465125913852135797LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x1157 = 1U;
	int16_t x1158 = -1;
	uint8_t x1160 = 70U;
	int32_t t156 = 647988240;

    t156 = ((x1157-x1158)*(x1159*x1160));

    if (t156 != -3889900) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1165 = INT32_MIN;
	volatile int8_t x1166 = -1;

    t157 = ((x1165-x1166)*(x1167*x1168));

    if (t157 != 1056561954324LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1169 = INT8_MIN;
	static int64_t x1170 = -210136104792LL;
	int64_t x1171 = -1LL;
	volatile int8_t x1172 = 11;

    t158 = ((x1169-x1170)*(x1171*x1172));

    if (t158 != -2311497151304LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1178 = -1LL;
	int64_t x1179 = -71670LL;
	uint32_t x1180 = 60517529U;
	volatile int64_t t159 = 96578420LL;

    t159 = ((x1177-x1178)*(x1179*x1180));

    if (t159 != -13011873910290LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x1186 = 5980;
	int64_t x1188 = -1LL;
	volatile uint64_t t160 = 512792427048701LLU;

    t160 = ((x1185-x1186)*(x1187*x1188));

    if (t160 != 18446744073513566208LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1189 = 18582U;
	int32_t x1190 = -1;
	static uint32_t x1191 = UINT32_MAX;
	uint16_t x1192 = 55U;

    t161 = ((x1189-x1190)*(x1191*x1192));

    if (t161 != 4293945231U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x1193 = 4U;
	uint64_t x1194 = 208157705193LLU;
	int64_t x1195 = INT64_MIN;
	uint64_t x1196 = 1969111064838LLU;
	volatile uint64_t t162 = 1908505937481276095LLU;

    t162 = ((x1193-x1194)*(x1195*x1196));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x1198 = -46;
	int8_t x1199 = -1;
	int64_t t163 = -333719941600396253LL;

    t163 = ((x1197-x1198)*(x1199*x1200));

    if (t163 != -1380688830924619275LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x1202 = INT64_MAX;
	uint16_t x1203 = 0U;
	int32_t x1204 = INT32_MAX;
	int64_t t164 = -968384LL;

    t164 = ((x1201-x1202)*(x1203*x1204));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1209 = INT16_MIN;
	int16_t x1210 = INT16_MIN;
	int16_t x1212 = INT16_MAX;
	volatile int32_t t165 = 83;

    t165 = ((x1209-x1210)*(x1211*x1212));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1217 = -16;
	volatile uint8_t x1220 = UINT8_MAX;
	static volatile int32_t t166 = 57;

    t166 = ((x1217-x1218)*(x1219*x1220));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x1221 = 32776350192773LLU;
	volatile int16_t x1222 = -11077;
	uint32_t x1223 = UINT32_MAX;
	static uint64_t x1224 = 247LLU;
	uint64_t t167 = 23711LLU;

    t167 = ((x1221-x1222)*(x1223*x1224));

    if (t167 != 12212927494049117210LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1225 = 894;
	volatile int64_t x1226 = -1LL;
	uint8_t x1227 = 86U;

    t168 = ((x1225-x1226)*(x1227*x1228));

    if (t168 != 76970LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1233 = UINT8_MAX;
	volatile int64_t x1234 = -1LL;
	uint32_t x1235 = UINT32_MAX;
	volatile int64_t t169 = 8698893045LL;

    t169 = ((x1233-x1234)*(x1235*x1236));

    if (t169 != 29817856LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1238 = 2749999185LLU;
	int16_t x1239 = INT16_MIN;
	int8_t x1240 = INT8_MIN;
	uint64_t t170 = 1837687367402015LLU;

    t170 = ((x1237-x1238)*(x1239*x1240));

    if (t170 != 18435209741132103680LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1246 = -25331874;
	int64_t x1248 = -284449LL;
	volatile int64_t t171 = 309864950LL;

    t171 = ((x1245-x1246)*(x1247*x1248));

    if (t171 != -72056285030180LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x1259 = INT8_MIN;
	static uint16_t x1260 = UINT16_MAX;
	volatile uint64_t t172 = 179275029939841377LLU;

    t172 = ((x1257-x1258)*(x1259*x1260));

    if (t172 != 1073725440LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1261 = UINT32_MAX;
	int64_t x1262 = -1LL;
	int16_t x1263 = INT16_MAX;
	uint64_t x1264 = 224754080875786LLU;

    t173 = ((x1261-x1262)*(x1263*x1264));

    if (t173 != 16095296577760919552LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1269 = 50U;
	static uint32_t x1270 = 137U;
	uint16_t x1272 = 13U;
	uint32_t t174 = 334124882U;

    t174 = ((x1269-x1270)*(x1271*x1272));

    if (t174 != 4257907819U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1273 = INT8_MIN;
	int64_t x1275 = -394LL;
	uint32_t x1276 = 812332U;
	volatile int64_t t175 = 59LL;

    t175 = ((x1273-x1274)*(x1275*x1276));

    if (t175 != 80014702000LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x1277 = 44LLU;
	int64_t x1278 = -31959LL;
	volatile uint64_t t176 = 7650881358404820895LLU;

    t176 = ((x1277-x1278)*(x1279*x1280));

    if (t176 != 137451260783744LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1289 = INT8_MAX;
	uint32_t x1290 = 1544U;
	static int16_t x1291 = INT16_MIN;
	static uint32_t x1292 = 14477588U;
	volatile uint32_t t177 = 0U;

    t177 = ((x1289-x1290)*(x1291*x1292));

    if (t177 != 265945088U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1293 = INT8_MIN;
	static volatile int16_t x1294 = -1;
	volatile uint32_t x1295 = 1626731517U;
	uint32_t x1296 = UINT32_MAX;
	volatile uint32_t t178 = 2919614U;

    t178 = ((x1293-x1294)*(x1295*x1296));

    if (t178 != 436472451U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1297 = 148660LLU;
	int16_t x1298 = INT16_MAX;
	int64_t x1299 = -318814353LL;

    t179 = ((x1297-x1298)*(x1299*x1300));

    if (t179 != 1210723592183119872LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x1305 = INT16_MIN;
	uint8_t x1306 = 29U;
	int8_t x1307 = INT8_MIN;
	uint8_t x1308 = 6U;
	int32_t t180 = -7408088;

    t180 = ((x1305-x1306)*(x1307*x1308));

    if (t180 != 25188096) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1314 = -1LL;
	uint8_t x1315 = UINT8_MAX;
	volatile int16_t x1316 = 4;
	int64_t t181 = 1022916440484353266LL;

    t181 = ((x1313-x1314)*(x1315*x1316));

    if (t181 != -94681023912960LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1322 = 13U;
	int8_t x1324 = -11;

    t182 = ((x1321-x1322)*(x1323*x1324));

    if (t182 != -3964928) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1325 = UINT64_MAX;
	uint16_t x1326 = UINT16_MAX;
	uint64_t x1327 = 91LLU;

    t183 = ((x1325-x1326)*(x1327*x1328));

    if (t183 != 5963776LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x1329 = UINT64_MAX;
	int16_t x1330 = INT16_MAX;
	volatile int32_t x1331 = INT32_MAX;
	static int64_t x1332 = 355LL;

    t184 = ((x1329-x1330)*(x1331*x1332));

    if (t184 != 18421763169538113536LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x1334 = INT32_MIN;
	static uint64_t x1335 = UINT64_MAX;

    t185 = ((x1333-x1334)*(x1335*x1336));

    if (t185 != 17201090661663706885LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1341 = -1;
	static uint32_t x1342 = 2164U;
	static volatile uint32_t x1344 = UINT32_MAX;
	volatile uint32_t t186 = 240322541U;

    t186 = ((x1341-x1342)*(x1343*x1344));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1349 = -12694;
	int64_t x1350 = -1LL;
	volatile int64_t t187 = 245LL;

    t187 = ((x1349-x1350)*(x1351*x1352));

    if (t187 != 2657914200LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1361 = INT8_MAX;
	static int64_t x1362 = -323173LL;
	static uint32_t x1363 = 6U;

    t188 = ((x1361-x1362)*(x1363*x1364));

    if (t188 != 322654937614800LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1370 = INT16_MAX;
	int8_t x1371 = INT8_MAX;
	uint16_t x1372 = 0U;
	static volatile int32_t t189 = -1;

    t189 = ((x1369-x1370)*(x1371*x1372));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1374 = 8197597307LLU;
	int64_t x1375 = INT64_MIN;
	static int8_t x1376 = 1;
	static uint64_t t190 = 8079780737LLU;

    t190 = ((x1373-x1374)*(x1375*x1376));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1385 = UINT64_MAX;
	int64_t x1386 = 1822425633LL;
	int16_t x1387 = INT16_MIN;
	uint16_t x1388 = 26828U;
	uint64_t t191 = 109715572088562549LLU;

    t191 = ((x1385-x1386)*(x1387*x1388));

    if (t191 != 1602094199896539136LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1397 = -1;
	volatile int16_t x1398 = -1;
	uint8_t x1399 = UINT8_MAX;
	static int8_t x1400 = INT8_MIN;
	int32_t t192 = 1;

    t192 = ((x1397-x1398)*(x1399*x1400));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1409 = -1LL;
	uint16_t x1412 = 11948U;
	int64_t t193 = 236LL;

    t193 = ((x1409-x1410)*(x1411*x1412));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1421 = 17U;
	static int8_t x1422 = -1;
	int8_t x1423 = 0;
	int64_t x1424 = INT64_MAX;
	int64_t t194 = -1371LL;

    t194 = ((x1421-x1422)*(x1423*x1424));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1426 = 1U;
	int32_t x1428 = -587575;
	static volatile uint32_t t195 = 1164851U;

    t195 = ((x1425-x1426)*(x1427*x1428));

    if (t195 != 4293792146U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1449 = 102606LLU;
	int8_t x1450 = 2;
	int64_t x1451 = -1LL;
	volatile int16_t x1452 = INT16_MAX;
	volatile uint64_t t196 = 34149373833LLU;

    t196 = ((x1449-x1450)*(x1451*x1452));

    if (t196 != 18446744070347526348LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1453 = UINT8_MAX;
	static int8_t x1454 = INT8_MAX;
	int64_t x1455 = -70LL;
	int64_t t197 = -27139444545492848LL;

    t197 = ((x1453-x1454)*(x1455*x1456));

    if (t197 != -62720LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1461 = INT64_MAX;
	uint16_t x1462 = 25222U;
	volatile uint64_t x1463 = UINT64_MAX;
	static uint8_t x1464 = 53U;
	uint64_t t198 = 1376779856LLU;

    t198 = ((x1461-x1462)*(x1463*x1464));

    if (t198 != 9223372036856112627LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1466 = 4203115367930403797LLU;
	int16_t x1467 = -1;
	volatile uint64_t t199 = 19LLU;

    t199 = ((x1465-x1466)*(x1467*x1468));

    if (t199 != 1104653096813092320LLU) { NG(); } else { ; }
	
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

