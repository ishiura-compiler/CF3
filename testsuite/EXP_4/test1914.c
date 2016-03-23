
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

static int64_t x15 = -1564141963LL;
int32_t x16 = 6741;
int16_t x18 = INT16_MAX;
int32_t x23 = -1;
static int64_t x24 = INT64_MAX;
volatile int8_t x31 = INT8_MIN;
int64_t x32 = -1LL;
volatile int32_t t3 = -4;
static uint32_t x37 = UINT32_MAX;
uint64_t x41 = 2254301277734924536LLU;
uint32_t x46 = 505252857U;
uint64_t x48 = 34132438LLU;
volatile uint16_t x49 = 105U;
int32_t t9 = -255;
uint32_t x78 = 3928036U;
int32_t x86 = 1;
static int32_t t12 = -3562126;
int8_t x106 = 0;
int16_t x107 = 13752;
volatile int32_t t14 = 895;
int32_t x111 = -1;
int32_t x112 = -1;
int32_t t16 = 62632672;
volatile int64_t x123 = INT64_MAX;
volatile int16_t x128 = 5259;
uint32_t x145 = 4U;
uint32_t x147 = 406U;
uint64_t x148 = UINT64_MAX;
uint64_t x169 = 1144852134410419LLU;
static int64_t x174 = 55824084909019LL;
int8_t x176 = INT8_MAX;
int8_t x179 = -2;
static int32_t x197 = -1;
int32_t x203 = INT32_MAX;
static int32_t x210 = 475361;
static int64_t x213 = INT64_MIN;
volatile uint64_t x214 = UINT64_MAX;
int64_t x224 = -1LL;
int32_t x225 = 0;
int64_t x226 = 41295962619879LL;
static int32_t t36 = 5991884;
static int64_t x325 = INT64_MIN;
uint8_t x330 = 3U;
int32_t t41 = 89613;
static int32_t x344 = INT32_MIN;
int32_t x345 = -1;
uint8_t x348 = 1U;
volatile int64_t x362 = INT64_MAX;
static int64_t x364 = INT64_MIN;
int64_t x365 = -1LL;
int32_t x367 = INT32_MAX;
int32_t x369 = 11930590;
volatile int8_t x370 = INT8_MAX;
static int32_t t49 = 73;
int32_t t52 = -3582621;
int32_t t53 = 5235;
int8_t x421 = INT8_MIN;
uint8_t x426 = UINT8_MAX;
int8_t x432 = 3;
int32_t t58 = -260;
uint8_t x450 = 15U;
static volatile int32_t t62 = 1;
uint8_t x455 = 50U;
static int32_t x458 = 336035;
int32_t t64 = -114;
static int32_t x461 = 48981;
volatile int32_t x465 = INT32_MAX;
int16_t x466 = 211;
int64_t x467 = INT64_MIN;
static uint16_t x479 = 32U;
uint64_t x480 = 107720290234310LLU;
volatile int32_t t68 = -22130931;
int8_t x493 = INT8_MAX;
int64_t x509 = -23722926018536888LL;
volatile int32_t t73 = 7684;
volatile uint8_t x516 = 50U;
static volatile int32_t x524 = 342;
uint32_t x526 = 152542U;
int64_t x527 = -1LL;
int32_t t76 = 16128580;
uint64_t x530 = 434276686556554731LLU;
static int64_t x532 = 208LL;
volatile int32_t t77 = -59934;
static int32_t t78 = 31957;
volatile int8_t x556 = INT8_MIN;
volatile int32_t x567 = 0;
int16_t x611 = -1;
int16_t x612 = 3;
uint8_t x622 = 82U;
static uint16_t x630 = 3U;
volatile uint32_t x638 = UINT32_MAX;
int32_t x647 = -1;
uint64_t x650 = UINT64_MAX;
int32_t t93 = -7836201;
volatile int32_t t95 = 288425;
static volatile int32_t t96 = 288958;
uint8_t x686 = 59U;
uint16_t x693 = 0U;
uint8_t x694 = 30U;
int64_t x696 = INT64_MIN;
static int8_t x704 = INT8_MIN;
int32_t x707 = INT32_MIN;
int32_t x711 = 11;
int32_t t103 = 174866888;
static int8_t x714 = INT8_MAX;
int16_t x723 = INT16_MIN;
int64_t x741 = INT64_MIN;
int16_t x745 = INT16_MIN;
int64_t x767 = INT64_MIN;
static uint64_t x769 = 1LLU;
int32_t x776 = INT32_MIN;
int16_t x779 = INT16_MAX;
volatile uint32_t x808 = 238031556U;
int8_t x809 = INT8_MIN;
int8_t x810 = 6;
int32_t t117 = -12637;
int32_t x824 = INT32_MIN;
volatile int32_t t118 = 1;
static int32_t t119 = 5;
static volatile uint64_t x834 = 143279565228907LLU;
int32_t t120 = -2965760;
volatile int32_t t121 = 1;
int16_t x853 = -1;
int32_t x862 = INT32_MAX;
int8_t x877 = 26;
volatile uint16_t x891 = 12U;
static volatile int32_t t128 = 1706917;
int8_t x895 = INT8_MIN;
volatile int32_t t131 = -917881;
int8_t x931 = -32;
int32_t t134 = 63;
uint16_t x960 = 6U;
int8_t x967 = 1;
int64_t x968 = -1LL;
volatile int32_t t138 = -388158;
int16_t x979 = -941;
uint8_t x981 = 126U;
volatile uint8_t x986 = UINT8_MAX;
static volatile int32_t x1012 = INT32_MAX;
volatile int16_t x1016 = -1;
volatile int32_t t146 = -53882176;
int64_t x1018 = 527592089356LL;
int64_t x1019 = INT64_MAX;
volatile int32_t t147 = 417060989;
int16_t x1030 = INT16_MAX;
uint32_t x1048 = 0U;
int8_t x1054 = 5;
int32_t t152 = 60;
int64_t x1062 = INT64_MAX;
int16_t x1063 = INT16_MIN;
static int32_t x1072 = -18869;
int32_t t154 = -1;
uint8_t x1094 = 1U;
static volatile int32_t t157 = 132;
int32_t t158 = 1006923394;
uint64_t x1103 = 330309895576968LLU;
uint16_t x1108 = 8U;
uint32_t x1114 = UINT32_MAX;
static uint64_t x1116 = 15007201300794LLU;
uint8_t x1137 = UINT8_MAX;
volatile uint8_t x1140 = 2U;
uint32_t x1145 = 1569693U;
volatile uint8_t x1157 = 7U;
static uint16_t x1158 = 1088U;
int64_t x1163 = INT64_MIN;
uint32_t x1168 = 11416U;
int32_t t170 = -3;
uint16_t x1186 = UINT16_MAX;
uint8_t x1191 = 0U;
uint64_t x1201 = UINT64_MAX;
static int32_t x1203 = 43702806;
volatile int16_t x1219 = INT16_MAX;
uint16_t x1227 = 3U;
volatile int32_t t175 = -1;
static uint32_t x1238 = 154U;
static int16_t x1239 = -5404;
uint64_t x1240 = 31616467908LLU;
int32_t t176 = -218949915;
int64_t x1243 = INT64_MAX;
uint64_t x1248 = 681815042604462LLU;
int32_t t178 = -706;
int8_t x1261 = -27;
int32_t x1263 = 27;
int64_t x1270 = INT64_MAX;
int16_t x1278 = 119;
volatile int64_t x1280 = INT64_MAX;
int16_t x1283 = INT16_MIN;
int64_t x1284 = INT64_MIN;
volatile int32_t t188 = -431362;
int64_t x1319 = INT64_MAX;
static volatile int64_t x1323 = INT64_MIN;
int32_t x1328 = INT32_MIN;
volatile int32_t t191 = -76010953;
uint64_t x1342 = UINT64_MAX;
volatile int64_t x1349 = 4LL;
static uint16_t x1354 = 14490U;
int32_t x1355 = INT32_MIN;
uint16_t x1362 = 787U;
uint64_t x1370 = 55LLU;
int32_t x1388 = INT32_MIN;
volatile uint32_t x1392 = 61404669U;


void f0(void) {
    	volatile int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MAX;
	static volatile int32_t t0 = 20228;

    t0 = (x13<=(x14>>(x15<=x16)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x17 = 0;
	volatile uint16_t x19 = UINT16_MAX;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t1 = -84561923;

    t1 = (x17<=(x18>>(x19<=x20)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x21 = 5129U;
	uint32_t x22 = 13018732U;
	volatile int32_t t2 = 35967958;

    t2 = (x21<=(x22>>(x23<=x24)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x29 = INT16_MAX;
	static int16_t x30 = INT16_MAX;

    t3 = (x29<=(x30>>(x31<=x32)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x38 = 484142405796107LLU;
	static int64_t x39 = -1LL;
	int64_t x40 = -1LL;
	volatile int32_t t4 = 379121;

    t4 = (x37<=(x38>>(x39<=x40)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x42 = INT32_MAX;
	volatile int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MAX;
	int32_t t5 = -61922369;

    t5 = (x41<=(x42>>(x43<=x44)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x45 = INT16_MAX;
	static uint16_t x47 = 1U;
	static int32_t t6 = 35888;

    t6 = (x45<=(x46>>(x47<=x48)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x50 = UINT8_MAX;
	int64_t x51 = INT64_MIN;
	static int64_t x52 = INT64_MAX;
	int32_t t7 = -932452204;

    t7 = (x49<=(x50>>(x51<=x52)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x61 = 3U;
	uint8_t x62 = 0U;
	static uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MIN;
	int32_t t8 = 0;

    t8 = (x61<=(x62>>(x63<=x64)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x65 = INT32_MAX;
	static uint64_t x66 = 429704030700LLU;
	volatile uint32_t x67 = UINT32_MAX;
	uint8_t x68 = UINT8_MAX;

    t9 = (x65<=(x66>>(x67<=x68)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x73 = INT64_MAX;
	static volatile uint8_t x74 = 61U;
	int8_t x75 = 0;
	uint8_t x76 = 63U;
	static int32_t t10 = -2;

    t10 = (x73<=(x74>>(x75<=x76)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x77 = UINT64_MAX;
	volatile int8_t x79 = INT8_MAX;
	static int32_t x80 = INT32_MIN;
	static volatile int32_t t11 = 0;

    t11 = (x77<=(x78>>(x79<=x80)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x85 = 3;
	static volatile int16_t x87 = -1;
	int32_t x88 = INT32_MAX;

    t12 = (x85<=(x86>>(x87<=x88)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x89 = -30;
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = INT32_MIN;
	int64_t x92 = -109LL;
	int32_t t13 = -175956397;

    t13 = (x89<=(x90>>(x91<=x92)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x105 = INT8_MIN;
	uint64_t x108 = 736284481457LLU;

    t14 = (x105<=(x106>>(x107<=x108)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x109 = -3438;
	uint8_t x110 = 47U;
	volatile int32_t t15 = -121947;

    t15 = (x109<=(x110>>(x111<=x112)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x117 = 1U;
	static uint32_t x118 = 36U;
	int8_t x119 = INT8_MAX;
	int16_t x120 = INT16_MAX;

    t16 = (x117<=(x118>>(x119<=x120)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x121 = INT64_MIN;
	volatile uint64_t x122 = 13229630634151LLU;
	int16_t x124 = -1;
	volatile int32_t t17 = 0;

    t17 = (x121<=(x122>>(x123<=x124)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x125 = -1;
	volatile uint64_t x126 = 633LLU;
	int8_t x127 = -1;
	int32_t t18 = 0;

    t18 = (x125<=(x126>>(x127<=x128)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x129 = INT32_MIN;
	static uint8_t x130 = 102U;
	int64_t x131 = -1LL;
	int8_t x132 = INT8_MIN;
	int32_t t19 = -111170;

    t19 = (x129<=(x130>>(x131<=x132)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x133 = INT32_MAX;
	static uint8_t x134 = UINT8_MAX;
	int64_t x135 = -159800132468LL;
	int64_t x136 = INT64_MIN;
	volatile int32_t t20 = 39;

    t20 = (x133<=(x134>>(x135<=x136)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x146 = 6477U;
	int32_t t21 = 1434126;

    t21 = (x145<=(x146>>(x147<=x148)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x149 = INT64_MAX;
	uint16_t x150 = 4154U;
	int8_t x151 = INT8_MIN;
	volatile int16_t x152 = 31;
	static int32_t t22 = 114072;

    t22 = (x149<=(x150>>(x151<=x152)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	volatile uint8_t x154 = 74U;
	uint8_t x155 = 6U;
	volatile int8_t x156 = INT8_MAX;
	int32_t t23 = 49228540;

    t23 = (x153<=(x154>>(x155<=x156)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x165 = 167U;
	uint8_t x166 = 14U;
	uint64_t x167 = 0LLU;
	volatile int32_t x168 = INT32_MIN;
	static int32_t t24 = 0;

    t24 = (x165<=(x166>>(x167<=x168)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x170 = 14088U;
	uint8_t x171 = 1U;
	int64_t x172 = INT64_MIN;
	volatile int32_t t25 = -335545;

    t25 = (x169<=(x170>>(x171<=x172)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x173 = -1;
	int16_t x175 = INT16_MIN;
	volatile int32_t t26 = 368;

    t26 = (x173<=(x174>>(x175<=x176)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x177 = -1;
	uint16_t x178 = 2U;
	static int16_t x180 = -1;
	static volatile int32_t t27 = -230978536;

    t27 = (x177<=(x178>>(x179<=x180)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x189 = UINT16_MAX;
	volatile uint64_t x190 = 1863111656461671LLU;
	int8_t x191 = -28;
	uint8_t x192 = UINT8_MAX;
	static int32_t t28 = -2;

    t28 = (x189<=(x190>>(x191<=x192)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x198 = 1800268893LLU;
	volatile int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t29 = -98;

    t29 = (x197<=(x198>>(x199<=x200)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x201 = INT32_MIN;
	volatile uint8_t x202 = 5U;
	static uint8_t x204 = UINT8_MAX;
	int32_t t30 = 881;

    t30 = (x201<=(x202>>(x203<=x204)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x205 = 1U;
	uint32_t x206 = UINT32_MAX;
	uint64_t x207 = UINT64_MAX;
	int8_t x208 = 0;
	int32_t t31 = 798;

    t31 = (x205<=(x206>>(x207<=x208)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x209 = 73722945512236272LL;
	uint64_t x211 = UINT64_MAX;
	static volatile int16_t x212 = INT16_MIN;
	int32_t t32 = 42;

    t32 = (x209<=(x210>>(x211<=x212)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x215 = 1292508397161LLU;
	uint32_t x216 = 1U;
	static int32_t t33 = 8;

    t33 = (x213<=(x214>>(x215<=x216)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x221 = 24441;
	uint8_t x222 = 54U;
	int16_t x223 = INT16_MIN;
	int32_t t34 = 17855;

    t34 = (x221<=(x222>>(x223<=x224)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x227 = 0U;
	uint64_t x228 = UINT64_MAX;
	int32_t t35 = -173972179;

    t35 = (x225<=(x226>>(x227<=x228)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x245 = 3630551255718014LLU;
	uint8_t x246 = 1U;
	static int8_t x247 = INT8_MIN;
	volatile int64_t x248 = INT64_MIN;

    t36 = (x245<=(x246>>(x247<=x248)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x285 = -9384318LL;
	int64_t x286 = 6171689769LL;
	volatile int8_t x287 = INT8_MIN;
	static uint32_t x288 = 3519U;
	int32_t t37 = 833746;

    t37 = (x285<=(x286>>(x287<=x288)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x301 = -1;
	volatile uint32_t x302 = UINT32_MAX;
	int16_t x303 = 980;
	uint8_t x304 = 2U;
	volatile int32_t t38 = -697166764;

    t38 = (x301<=(x302>>(x303<=x304)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x326 = UINT16_MAX;
	static int64_t x327 = -924371627LL;
	static int64_t x328 = INT64_MIN;
	static int32_t t39 = -2762175;

    t39 = (x325<=(x326>>(x327<=x328)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x329 = INT32_MIN;
	int32_t x331 = INT32_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t40 = 130168;

    t40 = (x329<=(x330>>(x331<=x332)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x333 = INT64_MIN;
	int8_t x334 = 13;
	int64_t x335 = -1LL;
	volatile int16_t x336 = -2498;

    t41 = (x333<=(x334>>(x335<=x336)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x337 = INT8_MIN;
	int8_t x338 = 0;
	uint32_t x339 = 3U;
	uint32_t x340 = 4U;
	volatile int32_t t42 = 1;

    t42 = (x337<=(x338>>(x339<=x340)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x341 = 26U;
	uint32_t x342 = 124452930U;
	volatile int16_t x343 = 6;
	volatile int32_t t43 = -3149;

    t43 = (x341<=(x342>>(x343<=x344)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x346 = UINT8_MAX;
	static volatile uint32_t x347 = 116U;
	volatile int32_t t44 = -1095692;

    t44 = (x345<=(x346>>(x347<=x348)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x349 = UINT8_MAX;
	volatile uint16_t x350 = 9U;
	static int32_t x351 = -1;
	int32_t x352 = 1403;
	volatile int32_t t45 = 0;

    t45 = (x349<=(x350>>(x351<=x352)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x353 = 16237394564616LL;
	static int16_t x354 = 99;
	int8_t x355 = -7;
	static int16_t x356 = INT16_MAX;
	int32_t t46 = 103235;

    t46 = (x353<=(x354>>(x355<=x356)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x361 = 21866U;
	uint16_t x363 = 103U;
	volatile int32_t t47 = 1197270;

    t47 = (x361<=(x362>>(x363<=x364)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x366 = 88862941536LLU;
	int16_t x368 = INT16_MAX;
	int32_t t48 = -1821229;

    t48 = (x365<=(x366>>(x367<=x368)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x371 = UINT32_MAX;
	int64_t x372 = 126226236LL;

    t49 = (x369<=(x370>>(x371<=x372)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MAX;
	int8_t x375 = -1;
	int16_t x376 = INT16_MIN;
	int32_t t50 = 1;

    t50 = (x373<=(x374>>(x375<=x376)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x389 = 0U;
	uint32_t x390 = 82508955U;
	uint32_t x391 = 1178U;
	static uint32_t x392 = UINT32_MAX;
	static volatile int32_t t51 = 2323;

    t51 = (x389<=(x390>>(x391<=x392)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x397 = 8;
	volatile int8_t x398 = INT8_MAX;
	uint64_t x399 = 24LLU;
	static int16_t x400 = -1;

    t52 = (x397<=(x398>>(x399<=x400)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x401 = INT8_MIN;
	static uint64_t x402 = 923755LLU;
	volatile int32_t x403 = INT32_MIN;
	uint16_t x404 = 2078U;

    t53 = (x401<=(x402>>(x403<=x404)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x405 = -1;
	uint64_t x406 = 8LLU;
	int32_t x407 = -1;
	static volatile int16_t x408 = -1;
	static int32_t t54 = 27386487;

    t54 = (x405<=(x406>>(x407<=x408)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x417 = INT16_MIN;
	int16_t x418 = 0;
	static int8_t x419 = INT8_MAX;
	int64_t x420 = INT64_MIN;
	volatile int32_t t55 = 8292092;

    t55 = (x417<=(x418>>(x419<=x420)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x422 = 345;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = INT32_MAX;
	static int32_t t56 = -5;

    t56 = (x421<=(x422>>(x423<=x424)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x425 = INT8_MAX;
	static int8_t x427 = -1;
	uint64_t x428 = UINT64_MAX;
	int32_t t57 = -27863076;

    t57 = (x425<=(x426>>(x427<=x428)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x429 = INT16_MIN;
	int8_t x430 = 5;
	static int64_t x431 = -14438855566502LL;

    t58 = (x429<=(x430>>(x431<=x432)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x437 = -1;
	uint64_t x438 = UINT64_MAX;
	uint64_t x439 = 7755502501LLU;
	int64_t x440 = INT64_MIN;
	static volatile int32_t t59 = 882;

    t59 = (x437<=(x438>>(x439<=x440)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x441 = INT16_MIN;
	uint8_t x442 = 2U;
	int16_t x443 = INT16_MAX;
	uint64_t x444 = 401294LLU;
	int32_t t60 = -34332210;

    t60 = (x441<=(x442>>(x443<=x444)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x445 = INT64_MIN;
	uint64_t x446 = 11967LLU;
	uint64_t x447 = 12LLU;
	int16_t x448 = 1;
	int32_t t61 = 1;

    t61 = (x445<=(x446>>(x447<=x448)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x449 = 2U;
	uint64_t x451 = 9005111417363263LLU;
	int8_t x452 = -1;

    t62 = (x449<=(x450>>(x451<=x452)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x453 = INT16_MIN;
	volatile int16_t x454 = 166;
	volatile int64_t x456 = INT64_MIN;
	volatile int32_t t63 = 499019;

    t63 = (x453<=(x454>>(x455<=x456)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x457 = 29U;
	uint64_t x459 = UINT64_MAX;
	int64_t x460 = 340550653LL;

    t64 = (x457<=(x458>>(x459<=x460)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x462 = UINT64_MAX;
	volatile uint8_t x463 = 10U;
	volatile int32_t x464 = INT32_MAX;
	static int32_t t65 = 5831;

    t65 = (x461<=(x462>>(x463<=x464)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x468 = 58;
	int32_t t66 = -10946827;

    t66 = (x465<=(x466>>(x467<=x468)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x469 = 457710440LL;
	uint64_t x470 = UINT64_MAX;
	uint32_t x471 = UINT32_MAX;
	static volatile int8_t x472 = 1;
	static int32_t t67 = 4;

    t67 = (x469<=(x470>>(x471<=x472)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x477 = UINT8_MAX;
	uint64_t x478 = 4170746181328LLU;

    t68 = (x477<=(x478>>(x479<=x480)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x481 = INT8_MIN;
	volatile int32_t x482 = INT32_MAX;
	uint64_t x483 = 290920772738LLU;
	uint8_t x484 = UINT8_MAX;
	static volatile int32_t t69 = 27672083;

    t69 = (x481<=(x482>>(x483<=x484)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x494 = 1424641U;
	uint64_t x495 = UINT64_MAX;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t70 = 22384510;

    t70 = (x493<=(x494>>(x495<=x496)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x497 = 45U;
	static volatile uint64_t x498 = 3227789638LLU;
	int64_t x499 = INT64_MIN;
	volatile int32_t x500 = INT32_MAX;
	int32_t t71 = 796;

    t71 = (x497<=(x498>>(x499<=x500)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x501 = -1LL;
	static int16_t x502 = INT16_MAX;
	uint32_t x503 = UINT32_MAX;
	uint32_t x504 = 11490018U;
	volatile int32_t t72 = -11983305;

    t72 = (x501<=(x502>>(x503<=x504)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x510 = 4184985U;
	static int8_t x511 = -27;
	volatile uint32_t x512 = UINT32_MAX;

    t73 = (x509<=(x510>>(x511<=x512)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x513 = 54U;
	int32_t x514 = INT32_MAX;
	volatile int64_t x515 = -1LL;
	volatile int32_t t74 = -649568848;

    t74 = (x513<=(x514>>(x515<=x516)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x521 = 1184LLU;
	uint8_t x522 = 35U;
	int32_t x523 = INT32_MIN;
	int32_t t75 = -219;

    t75 = (x521<=(x522>>(x523<=x524)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x525 = INT32_MAX;
	uint16_t x528 = 65U;

    t76 = (x525<=(x526>>(x527<=x528)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x529 = 20400360LLU;
	static volatile int16_t x531 = INT16_MAX;

    t77 = (x529<=(x530>>(x531<=x532)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x549 = -1;
	int32_t x550 = 446;
	uint16_t x551 = 0U;
	static int64_t x552 = 5LL;

    t78 = (x549<=(x550>>(x551<=x552)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x553 = INT64_MIN;
	static volatile int64_t x554 = 8478303023969575LL;
	uint64_t x555 = 16283257108352LLU;
	int32_t t79 = -141;

    t79 = (x553<=(x554>>(x555<=x556)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x561 = 77U;
	int16_t x562 = INT16_MAX;
	int8_t x563 = INT8_MIN;
	volatile uint32_t x564 = 9130U;
	int32_t t80 = 104385;

    t80 = (x561<=(x562>>(x563<=x564)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x565 = -1;
	static int8_t x566 = INT8_MAX;
	int32_t x568 = -1;
	volatile int32_t t81 = -14301048;

    t81 = (x565<=(x566>>(x567<=x568)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x569 = -1LL;
	uint16_t x570 = 8U;
	volatile int32_t x571 = -1;
	volatile int8_t x572 = -11;
	int32_t t82 = -499467;

    t82 = (x569<=(x570>>(x571<=x572)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x593 = 564U;
	static int32_t x594 = 22620;
	volatile int8_t x595 = INT8_MIN;
	static int8_t x596 = 43;
	volatile int32_t t83 = 1;

    t83 = (x593<=(x594>>(x595<=x596)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x601 = -1LL;
	static int32_t x602 = 4;
	static volatile int16_t x603 = -1;
	uint32_t x604 = 2709U;
	static volatile int32_t t84 = -11;

    t84 = (x601<=(x602>>(x603<=x604)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x605 = INT8_MIN;
	static int16_t x606 = 1;
	uint32_t x607 = 61994U;
	uint32_t x608 = 188U;
	int32_t t85 = 58;

    t85 = (x605<=(x606>>(x607<=x608)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x609 = -1;
	volatile uint64_t x610 = 6519591892448084890LLU;
	int32_t t86 = -3;

    t86 = (x609<=(x610>>(x611<=x612)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	static int8_t x614 = 1;
	uint8_t x615 = 2U;
	uint16_t x616 = 16U;
	static volatile int32_t t87 = -3;

    t87 = (x613<=(x614>>(x615<=x616)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x617 = INT16_MIN;
	static int16_t x618 = INT16_MAX;
	int32_t x619 = -1608555;
	int16_t x620 = INT16_MIN;
	int32_t t88 = -441459;

    t88 = (x617<=(x618>>(x619<=x620)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x621 = 10384U;
	volatile int64_t x623 = INT64_MIN;
	volatile uint8_t x624 = UINT8_MAX;
	volatile int32_t t89 = -7763;

    t89 = (x621<=(x622>>(x623<=x624)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x629 = -1LL;
	int32_t x631 = INT32_MAX;
	uint16_t x632 = 4223U;
	volatile int32_t t90 = 827793;

    t90 = (x629<=(x630>>(x631<=x632)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x637 = INT16_MIN;
	int64_t x639 = INT64_MAX;
	int64_t x640 = INT64_MAX;
	int32_t t91 = 10134609;

    t91 = (x637<=(x638>>(x639<=x640)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x645 = INT64_MIN;
	uint8_t x646 = 2U;
	int16_t x648 = INT16_MIN;
	static volatile int32_t t92 = 426;

    t92 = (x645<=(x646>>(x647<=x648)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x649 = -21;
	uint64_t x651 = 237955429442196LLU;
	int32_t x652 = -432798;

    t93 = (x649<=(x650>>(x651<=x652)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x653 = INT64_MAX;
	int32_t x654 = 137802;
	int16_t x655 = -1;
	volatile uint8_t x656 = 4U;
	volatile int32_t t94 = 3;

    t94 = (x653<=(x654>>(x655<=x656)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x665 = -1603239;
	int8_t x666 = 1;
	int8_t x667 = 24;
	static volatile int64_t x668 = -1LL;

    t95 = (x665<=(x666>>(x667<=x668)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x669 = 23446U;
	uint64_t x670 = 11038645513347LLU;
	static volatile uint64_t x671 = 5548339LLU;
	volatile int64_t x672 = 441272840060192788LL;

    t96 = (x669<=(x670>>(x671<=x672)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x685 = -16051LL;
	int16_t x687 = -1;
	volatile int32_t x688 = 20094;
	volatile int32_t t97 = -2;

    t97 = (x685<=(x686>>(x687<=x688)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x689 = -3268;
	static int8_t x690 = 0;
	uint32_t x691 = 60U;
	int16_t x692 = INT16_MIN;
	volatile int32_t t98 = -648;

    t98 = (x689<=(x690>>(x691<=x692)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x695 = INT8_MIN;
	int32_t t99 = 621073;

    t99 = (x693<=(x694>>(x695<=x696)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x697 = 2645U;
	int64_t x698 = 733LL;
	static int16_t x699 = -1;
	int8_t x700 = 3;
	int32_t t100 = -69373971;

    t100 = (x697<=(x698>>(x699<=x700)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x701 = INT32_MIN;
	int32_t x702 = INT32_MAX;
	int8_t x703 = -1;
	int32_t t101 = -13;

    t101 = (x701<=(x702>>(x703<=x704)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x705 = -1;
	static uint8_t x706 = UINT8_MAX;
	int32_t x708 = INT32_MAX;
	volatile int32_t t102 = 6;

    t102 = (x705<=(x706>>(x707<=x708)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x709 = INT16_MIN;
	uint32_t x710 = UINT32_MAX;
	uint8_t x712 = 23U;

    t103 = (x709<=(x710>>(x711<=x712)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x713 = 5U;
	static int32_t x715 = 1;
	static uint64_t x716 = UINT64_MAX;
	int32_t t104 = 2822380;

    t104 = (x713<=(x714>>(x715<=x716)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x717 = 224912558LLU;
	volatile uint32_t x718 = UINT32_MAX;
	int8_t x719 = INT8_MAX;
	int8_t x720 = -1;
	int32_t t105 = -2;

    t105 = (x717<=(x718>>(x719<=x720)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x721 = INT64_MIN;
	static uint16_t x722 = 396U;
	volatile uint64_t x724 = 1658366869432LLU;
	volatile int32_t t106 = -15634;

    t106 = (x721<=(x722>>(x723<=x724)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x737 = INT16_MIN;
	volatile uint16_t x738 = 16467U;
	uint16_t x739 = 23330U;
	int64_t x740 = INT64_MIN;
	volatile int32_t t107 = 9240;

    t107 = (x737<=(x738>>(x739<=x740)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x742 = 13826U;
	volatile int8_t x743 = 47;
	volatile int8_t x744 = -4;
	volatile int32_t t108 = -202742;

    t108 = (x741<=(x742>>(x743<=x744)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x746 = INT16_MAX;
	int64_t x747 = 184LL;
	int16_t x748 = INT16_MIN;
	volatile int32_t t109 = -89;

    t109 = (x745<=(x746>>(x747<=x748)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x753 = UINT32_MAX;
	static int64_t x754 = INT64_MAX;
	static int32_t x755 = INT32_MIN;
	static int16_t x756 = INT16_MIN;
	volatile int32_t t110 = -1;

    t110 = (x753<=(x754>>(x755<=x756)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x757 = -1LL;
	static int8_t x758 = INT8_MAX;
	int8_t x759 = INT8_MAX;
	volatile int64_t x760 = INT64_MAX;
	volatile int32_t t111 = 51864;

    t111 = (x757<=(x758>>(x759<=x760)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x765 = 177635U;
	volatile int16_t x766 = 90;
	int8_t x768 = INT8_MAX;
	int32_t t112 = 15620732;

    t112 = (x765<=(x766>>(x767<=x768)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x770 = INT16_MAX;
	static int32_t x771 = INT32_MIN;
	volatile int16_t x772 = INT16_MIN;
	volatile int32_t t113 = 337622;

    t113 = (x769<=(x770>>(x771<=x772)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x773 = INT8_MAX;
	static int64_t x774 = 398984562952329324LL;
	static uint64_t x775 = UINT64_MAX;
	int32_t t114 = -2;

    t114 = (x773<=(x774>>(x775<=x776)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x777 = -1;
	uint64_t x778 = 1109197408552126490LLU;
	uint8_t x780 = UINT8_MAX;
	int32_t t115 = 33667;

    t115 = (x777<=(x778>>(x779<=x780)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x805 = -1LL;
	uint8_t x806 = 2U;
	static int16_t x807 = INT16_MIN;
	static int32_t t116 = -9830;

    t116 = (x805<=(x806>>(x807<=x808)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x811 = INT32_MIN;
	static int8_t x812 = INT8_MIN;

    t117 = (x809<=(x810>>(x811<=x812)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x821 = 6807101U;
	static int8_t x822 = 6;
	uint32_t x823 = UINT32_MAX;

    t118 = (x821<=(x822>>(x823<=x824)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x825 = INT8_MIN;
	static uint64_t x826 = UINT64_MAX;
	int64_t x827 = -4LL;
	int8_t x828 = -3;

    t119 = (x825<=(x826>>(x827<=x828)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x833 = 3;
	uint64_t x835 = UINT64_MAX;
	int16_t x836 = -1;

    t120 = (x833<=(x834>>(x835<=x836)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x837 = 3281411;
	volatile int32_t x838 = 2666232;
	static int16_t x839 = -1;
	uint32_t x840 = 489U;

    t121 = (x837<=(x838>>(x839<=x840)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x841 = 13U;
	uint64_t x842 = 3287759773646721163LLU;
	volatile int8_t x843 = 2;
	static volatile int64_t x844 = INT64_MIN;
	static int32_t t122 = -1933;

    t122 = (x841<=(x842>>(x843<=x844)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x849 = 18512U;
	static volatile uint16_t x850 = UINT16_MAX;
	static int32_t x851 = -2965517;
	uint16_t x852 = 3653U;
	volatile int32_t t123 = 124;

    t123 = (x849<=(x850>>(x851<=x852)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x854 = INT16_MAX;
	int32_t x855 = -28442178;
	int32_t x856 = INT32_MIN;
	int32_t t124 = -8290318;

    t124 = (x853<=(x854>>(x855<=x856)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x857 = -1;
	volatile uint8_t x858 = 74U;
	uint16_t x859 = 17538U;
	int64_t x860 = INT64_MIN;
	volatile int32_t t125 = -7767;

    t125 = (x857<=(x858>>(x859<=x860)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x861 = INT32_MIN;
	volatile int8_t x863 = -1;
	volatile int16_t x864 = -1;
	int32_t t126 = -21;

    t126 = (x861<=(x862>>(x863<=x864)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x878 = 1LLU;
	volatile uint32_t x879 = 83440U;
	int32_t x880 = -97991881;
	int32_t t127 = -298968;

    t127 = (x877<=(x878>>(x879<=x880)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x889 = INT32_MAX;
	static uint64_t x890 = 10910LLU;
	uint32_t x892 = 678U;

    t128 = (x889<=(x890>>(x891<=x892)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x893 = 0U;
	uint16_t x894 = UINT16_MAX;
	int64_t x896 = -120673738642508739LL;
	int32_t t129 = -29852;

    t129 = (x893<=(x894>>(x895<=x896)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x905 = 22402U;
	volatile int16_t x906 = INT16_MAX;
	uint64_t x907 = UINT64_MAX;
	int16_t x908 = INT16_MAX;
	volatile int32_t t130 = 431198163;

    t130 = (x905<=(x906>>(x907<=x908)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x913 = INT8_MAX;
	int16_t x914 = 11707;
	uint16_t x915 = 754U;
	int64_t x916 = INT64_MAX;

    t131 = (x913<=(x914>>(x915<=x916)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x917 = INT64_MAX;
	volatile uint16_t x918 = 983U;
	static int32_t x919 = INT32_MAX;
	int16_t x920 = -31;
	volatile int32_t t132 = 305;

    t132 = (x917<=(x918>>(x919<=x920)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x929 = INT16_MIN;
	uint16_t x930 = UINT16_MAX;
	uint16_t x932 = UINT16_MAX;
	static int32_t t133 = 47167868;

    t133 = (x929<=(x930>>(x931<=x932)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x937 = UINT32_MAX;
	uint8_t x938 = 31U;
	uint64_t x939 = 593465574785LLU;
	volatile int32_t x940 = INT32_MAX;

    t134 = (x937<=(x938>>(x939<=x940)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x957 = INT32_MIN;
	static int64_t x958 = INT64_MAX;
	static int16_t x959 = INT16_MIN;
	static int32_t t135 = 30;

    t135 = (x957<=(x958>>(x959<=x960)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x961 = -485;
	uint64_t x962 = 2584034272900867562LLU;
	volatile int16_t x963 = -1;
	int32_t x964 = INT32_MAX;
	int32_t t136 = -141;

    t136 = (x961<=(x962>>(x963<=x964)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x965 = 116U;
	uint64_t x966 = 704LLU;
	int32_t t137 = 26537183;

    t137 = (x965<=(x966>>(x967<=x968)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x969 = INT64_MAX;
	int16_t x970 = 56;
	uint16_t x971 = 1U;
	static uint64_t x972 = 2892142618LLU;

    t138 = (x969<=(x970>>(x971<=x972)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x977 = INT64_MIN;
	int32_t x978 = INT32_MAX;
	int16_t x980 = INT16_MIN;
	volatile int32_t t139 = -13700443;

    t139 = (x977<=(x978>>(x979<=x980)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x982 = 5829;
	static uint8_t x983 = UINT8_MAX;
	int32_t x984 = -1330022;
	int32_t t140 = -610031437;

    t140 = (x981<=(x982>>(x983<=x984)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x985 = UINT8_MAX;
	volatile int32_t x987 = INT32_MAX;
	uint8_t x988 = 61U;
	int32_t t141 = 1550256;

    t141 = (x985<=(x986>>(x987<=x988)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x993 = -1LL;
	int64_t x994 = INT64_MAX;
	int8_t x995 = 0;
	static int64_t x996 = -1LL;
	static int32_t t142 = 1;

    t142 = (x993<=(x994>>(x995<=x996)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x997 = UINT64_MAX;
	int32_t x998 = 1;
	uint32_t x999 = 12966743U;
	uint32_t x1000 = 688988U;
	static volatile int32_t t143 = 34979538;

    t143 = (x997<=(x998>>(x999<=x1000)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1005 = INT16_MAX;
	static uint64_t x1006 = UINT64_MAX;
	volatile int32_t x1007 = -3;
	int16_t x1008 = INT16_MIN;
	volatile int32_t t144 = 1906;

    t144 = (x1005<=(x1006>>(x1007<=x1008)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x1009 = 22;
	uint8_t x1010 = 3U;
	static int64_t x1011 = INT64_MAX;
	volatile int32_t t145 = -10474;

    t145 = (x1009<=(x1010>>(x1011<=x1012)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x1013 = 58U;
	int16_t x1014 = INT16_MAX;
	int32_t x1015 = -1;

    t146 = (x1013<=(x1014>>(x1015<=x1016)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1017 = -1;
	static uint16_t x1020 = UINT16_MAX;

    t147 = (x1017<=(x1018>>(x1019<=x1020)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x1025 = 77U;
	static int16_t x1026 = 14;
	static volatile int8_t x1027 = -1;
	static int16_t x1028 = INT16_MIN;
	int32_t t148 = -1;

    t148 = (x1025<=(x1026>>(x1027<=x1028)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x1029 = 947321492LLU;
	volatile uint64_t x1031 = UINT64_MAX;
	static uint64_t x1032 = 86486LLU;
	int32_t t149 = -14900137;

    t149 = (x1029<=(x1030>>(x1031<=x1032)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1045 = 65652459U;
	int64_t x1046 = 2915LL;
	int32_t x1047 = INT32_MIN;
	volatile int32_t t150 = -6961;

    t150 = (x1045<=(x1046>>(x1047<=x1048)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1053 = 513850LLU;
	int8_t x1055 = INT8_MAX;
	int16_t x1056 = 1365;
	int32_t t151 = -13977011;

    t151 = (x1053<=(x1054>>(x1055<=x1056)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x1057 = 1055U;
	static int16_t x1058 = INT16_MAX;
	uint16_t x1059 = UINT16_MAX;
	int8_t x1060 = 0;

    t152 = (x1057<=(x1058>>(x1059<=x1060)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1061 = INT64_MIN;
	static volatile int8_t x1064 = INT8_MIN;
	volatile int32_t t153 = 498;

    t153 = (x1061<=(x1062>>(x1063<=x1064)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1069 = INT8_MIN;
	static uint32_t x1070 = 17307123U;
	int16_t x1071 = 926;

    t154 = (x1069<=(x1070>>(x1071<=x1072)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x1077 = INT64_MIN;
	volatile uint64_t x1078 = 2372193970LLU;
	int32_t x1079 = INT32_MAX;
	uint16_t x1080 = 129U;
	static int32_t t155 = -434;

    t155 = (x1077<=(x1078>>(x1079<=x1080)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x1089 = -1;
	uint16_t x1090 = UINT16_MAX;
	static volatile int32_t x1091 = -39;
	static int32_t x1092 = INT32_MIN;
	static volatile int32_t t156 = 1803423;

    t156 = (x1089<=(x1090>>(x1091<=x1092)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x1093 = -1563025LL;
	volatile int8_t x1095 = -24;
	uint16_t x1096 = UINT16_MAX;

    t157 = (x1093<=(x1094>>(x1095<=x1096)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1097 = 240529112134LLU;
	volatile int8_t x1098 = 33;
	int32_t x1099 = INT32_MIN;
	uint64_t x1100 = 8269992765745170LLU;

    t158 = (x1097<=(x1098>>(x1099<=x1100)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1101 = INT64_MAX;
	uint8_t x1102 = 62U;
	uint64_t x1104 = UINT64_MAX;
	static int32_t t159 = -1966;

    t159 = (x1101<=(x1102>>(x1103<=x1104)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1105 = INT32_MIN;
	uint64_t x1106 = UINT64_MAX;
	volatile uint8_t x1107 = 13U;
	int32_t t160 = -30;

    t160 = (x1105<=(x1106>>(x1107<=x1108)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1113 = 26;
	uint8_t x1115 = UINT8_MAX;
	int32_t t161 = -162;

    t161 = (x1113<=(x1114>>(x1115<=x1116)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1138 = 0;
	int8_t x1139 = 4;
	volatile int32_t t162 = -269778;

    t162 = (x1137<=(x1138>>(x1139<=x1140)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1146 = 2274491U;
	static int16_t x1147 = -352;
	static uint8_t x1148 = UINT8_MAX;
	volatile int32_t t163 = 2127;

    t163 = (x1145<=(x1146>>(x1147<=x1148)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x1149 = INT8_MIN;
	static uint8_t x1150 = 3U;
	static int64_t x1151 = INT64_MIN;
	static int32_t x1152 = INT32_MAX;
	volatile int32_t t164 = 76;

    t164 = (x1149<=(x1150>>(x1151<=x1152)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1153 = INT64_MAX;
	uint32_t x1154 = 117U;
	uint16_t x1155 = UINT16_MAX;
	int32_t x1156 = INT32_MAX;
	int32_t t165 = 16316;

    t165 = (x1153<=(x1154>>(x1155<=x1156)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1159 = 0;
	volatile int8_t x1160 = INT8_MAX;
	int32_t t166 = -747;

    t166 = (x1157<=(x1158>>(x1159<=x1160)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1161 = INT32_MAX;
	int32_t x1162 = INT32_MAX;
	volatile int64_t x1164 = -65677442317770LL;
	int32_t t167 = -404487108;

    t167 = (x1161<=(x1162>>(x1163<=x1164)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1165 = 125U;
	static int64_t x1166 = 2LL;
	uint32_t x1167 = UINT32_MAX;
	int32_t t168 = -113778033;

    t168 = (x1165<=(x1166>>(x1167<=x1168)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x1169 = 9;
	uint8_t x1170 = 37U;
	uint16_t x1171 = 154U;
	int64_t x1172 = -60195810186783655LL;
	static int32_t t169 = -6;

    t169 = (x1169<=(x1170>>(x1171<=x1172)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x1173 = INT16_MAX;
	uint32_t x1174 = 407180U;
	static int64_t x1175 = -1LL;
	int64_t x1176 = INT64_MIN;

    t170 = (x1173<=(x1174>>(x1175<=x1176)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1185 = 3502986211998248LL;
	uint16_t x1187 = UINT16_MAX;
	int32_t x1188 = -15384209;
	volatile int32_t t171 = 457029;

    t171 = (x1185<=(x1186>>(x1187<=x1188)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1189 = INT64_MIN;
	volatile uint32_t x1190 = UINT32_MAX;
	volatile int64_t x1192 = -17468586742212489LL;
	volatile int32_t t172 = -3579;

    t172 = (x1189<=(x1190>>(x1191<=x1192)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1202 = 6LLU;
	uint32_t x1204 = 212491U;
	volatile int32_t t173 = -57663905;

    t173 = (x1201<=(x1202>>(x1203<=x1204)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1217 = INT64_MIN;
	uint32_t x1218 = 1872183U;
	uint16_t x1220 = UINT16_MAX;
	static volatile int32_t t174 = 0;

    t174 = (x1217<=(x1218>>(x1219<=x1220)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1225 = 74U;
	int8_t x1226 = 7;
	static uint8_t x1228 = 95U;

    t175 = (x1225<=(x1226>>(x1227<=x1228)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1237 = 14;

    t176 = (x1237<=(x1238>>(x1239<=x1240)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1241 = INT32_MAX;
	volatile uint32_t x1242 = UINT32_MAX;
	uint32_t x1244 = UINT32_MAX;
	static int32_t t177 = -4;

    t177 = (x1241<=(x1242>>(x1243<=x1244)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1245 = 1835599238821070764LLU;
	volatile uint16_t x1246 = 187U;
	int32_t x1247 = -1;

    t178 = (x1245<=(x1246>>(x1247<=x1248)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x1249 = INT32_MIN;
	volatile int8_t x1250 = 0;
	int8_t x1251 = INT8_MIN;
	static volatile int8_t x1252 = INT8_MIN;
	int32_t t179 = 347763933;

    t179 = (x1249<=(x1250>>(x1251<=x1252)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1257 = 0;
	uint64_t x1258 = 43081LLU;
	uint64_t x1259 = UINT64_MAX;
	int64_t x1260 = INT64_MIN;
	volatile int32_t t180 = -26138;

    t180 = (x1257<=(x1258>>(x1259<=x1260)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1262 = 4U;
	int16_t x1264 = INT16_MIN;
	volatile int32_t t181 = -9112;

    t181 = (x1261<=(x1262>>(x1263<=x1264)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1269 = -3;
	static int32_t x1271 = -1;
	volatile int64_t x1272 = INT64_MIN;
	volatile int32_t t182 = -47;

    t182 = (x1269<=(x1270>>(x1271<=x1272)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x1277 = -11;
	uint32_t x1279 = UINT32_MAX;
	int32_t t183 = 267046806;

    t183 = (x1277<=(x1278>>(x1279<=x1280)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x1281 = -1LL;
	uint64_t x1282 = UINT64_MAX;
	volatile int32_t t184 = 1411;

    t184 = (x1281<=(x1282>>(x1283<=x1284)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1289 = -1;
	uint32_t x1290 = 3949235U;
	int8_t x1291 = INT8_MIN;
	int64_t x1292 = -1LL;
	int32_t t185 = -4218;

    t185 = (x1289<=(x1290>>(x1291<=x1292)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1297 = 1U;
	uint32_t x1298 = 127509497U;
	int32_t x1299 = INT32_MIN;
	static int16_t x1300 = INT16_MIN;
	int32_t t186 = -12;

    t186 = (x1297<=(x1298>>(x1299<=x1300)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1309 = INT16_MAX;
	int8_t x1310 = 0;
	int8_t x1311 = -1;
	uint8_t x1312 = 6U;
	int32_t t187 = -7436685;

    t187 = (x1309<=(x1310>>(x1311<=x1312)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1313 = INT64_MIN;
	volatile uint32_t x1314 = UINT32_MAX;
	int16_t x1315 = INT16_MIN;
	static int64_t x1316 = 66956631368323857LL;

    t188 = (x1313<=(x1314>>(x1315<=x1316)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x1317 = INT64_MIN;
	static volatile uint8_t x1318 = 21U;
	int64_t x1320 = INT64_MIN;
	int32_t t189 = 90;

    t189 = (x1317<=(x1318>>(x1319<=x1320)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1321 = -1LL;
	int64_t x1322 = 496006440LL;
	int16_t x1324 = -693;
	volatile int32_t t190 = -523847;

    t190 = (x1321<=(x1322>>(x1323<=x1324)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1325 = -1;
	uint32_t x1326 = 16143404U;
	int32_t x1327 = INT32_MIN;

    t191 = (x1325<=(x1326>>(x1327<=x1328)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1341 = -1;
	static volatile int64_t x1343 = INT64_MIN;
	int16_t x1344 = INT16_MIN;
	static volatile int32_t t192 = 7;

    t192 = (x1341<=(x1342>>(x1343<=x1344)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1350 = UINT16_MAX;
	static uint64_t x1351 = UINT64_MAX;
	int64_t x1352 = INT64_MIN;
	int32_t t193 = 27312208;

    t193 = (x1349<=(x1350>>(x1351<=x1352)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1353 = 757857866699875248LL;
	int64_t x1356 = INT64_MAX;
	static int32_t t194 = 681;

    t194 = (x1353<=(x1354>>(x1355<=x1356)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1361 = UINT8_MAX;
	int64_t x1363 = 13482LL;
	static int64_t x1364 = 121883LL;
	volatile int32_t t195 = 0;

    t195 = (x1361<=(x1362>>(x1363<=x1364)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1369 = INT64_MIN;
	int8_t x1371 = INT8_MAX;
	int64_t x1372 = -663768LL;
	volatile int32_t t196 = 98435233;

    t196 = (x1369<=(x1370>>(x1371<=x1372)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1373 = -1;
	static uint16_t x1374 = 1U;
	volatile int16_t x1375 = -1;
	int32_t x1376 = -1;
	static int32_t t197 = -12437051;

    t197 = (x1373<=(x1374>>(x1375<=x1376)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x1385 = UINT16_MAX;
	uint32_t x1386 = 7086650U;
	static int64_t x1387 = -2861999LL;
	volatile int32_t t198 = 8337;

    t198 = (x1385<=(x1386>>(x1387<=x1388)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x1389 = 6U;
	static int64_t x1390 = INT64_MAX;
	uint64_t x1391 = UINT64_MAX;
	volatile int32_t t199 = -41214089;

    t199 = (x1389<=(x1390>>(x1391<=x1392)));

    if (t199 != 1) { NG(); } else { ; }
	
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

