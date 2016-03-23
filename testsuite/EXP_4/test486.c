
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
int8_t x18 = INT8_MIN;
int8_t x20 = INT8_MIN;
int8_t x27 = -1;
volatile int64_t x29 = INT64_MAX;
uint64_t x32 = 302247387LLU;
volatile int16_t x40 = 15873;
uint16_t x47 = 118U;
volatile int32_t t11 = -67;
int64_t x69 = -503968797LL;
static int16_t x72 = INT16_MAX;
int32_t t14 = 41;
volatile int32_t x86 = INT32_MAX;
uint8_t x87 = 72U;
static uint32_t x104 = 254358041U;
volatile int32_t t20 = 1;
static int32_t x105 = -208298835;
static uint16_t x108 = UINT16_MAX;
static volatile int32_t t21 = -16;
static uint64_t x109 = 151140LLU;
int8_t x116 = -1;
static int32_t x123 = 0;
volatile int32_t t24 = 42273632;
uint16_t x125 = 4U;
int16_t x127 = INT16_MIN;
volatile int8_t x128 = -1;
static volatile int32_t t26 = 224701;
uint8_t x140 = 76U;
uint64_t x160 = 111908151873LLU;
volatile int32_t t29 = -232234;
volatile int32_t t30 = 0;
int64_t x173 = 290515128326495669LL;
volatile int64_t x179 = -102635567723327LL;
int32_t x195 = -19470;
static uint64_t x207 = 15038LLU;
volatile int64_t x218 = INT64_MIN;
int32_t x222 = INT32_MAX;
volatile int32_t x223 = -1021378;
volatile int32_t x225 = 5747;
int64_t x233 = INT64_MIN;
int32_t t41 = 13735;
uint8_t x239 = 23U;
static int16_t x240 = 2214;
int32_t t42 = -742820677;
int16_t x244 = -1;
static volatile uint32_t x245 = 50U;
int16_t x254 = -11;
static volatile int32_t t45 = -829;
int8_t x264 = INT8_MIN;
volatile int32_t t46 = -1;
uint16_t x270 = 1042U;
volatile int32_t t48 = 56;
uint16_t x294 = 1U;
static int32_t t52 = 20515739;
int8_t x297 = INT8_MIN;
uint16_t x303 = 99U;
volatile int32_t t55 = -29;
volatile int64_t x309 = INT64_MAX;
int8_t x318 = -5;
static int32_t t58 = -159;
static int32_t t62 = -5258662;
uint32_t x343 = 51U;
int32_t t63 = 13877;
uint32_t x347 = 222501U;
uint8_t x349 = UINT8_MAX;
uint64_t x351 = 1815LLU;
int16_t x353 = -1;
int64_t x357 = INT64_MAX;
static int8_t x359 = -1;
volatile int32_t t67 = 176608053;
int16_t x361 = INT16_MIN;
int32_t x365 = INT32_MIN;
static volatile int8_t x371 = 3;
int8_t x377 = INT8_MAX;
int32_t t73 = -1;
int32_t t74 = -125147;
int8_t x390 = -19;
volatile int8_t x395 = 25;
volatile int32_t x406 = INT32_MIN;
uint32_t x415 = UINT32_MAX;
static int32_t t78 = -1;
int16_t x418 = -1;
int32_t t79 = 0;
int64_t x424 = -27910542878076519LL;
int16_t x429 = 10;
uint32_t x434 = 7U;
int32_t x447 = 85;
int32_t t84 = -21855;
uint16_t x452 = 15897U;
volatile int32_t t86 = 0;
static int32_t x464 = -1;
static volatile int64_t x465 = 3776LL;
int32_t x466 = -432;
int8_t x467 = INT8_MIN;
int32_t x468 = -28583;
uint32_t x478 = 38227645U;
int32_t x486 = INT32_MIN;
int32_t x489 = INT32_MAX;
uint8_t x497 = 2U;
int16_t x503 = -212;
uint8_t x510 = 11U;
static uint32_t x516 = 779513U;
int8_t x519 = INT8_MIN;
volatile uint8_t x529 = UINT8_MAX;
int16_t x538 = INT16_MIN;
static volatile uint8_t x540 = 16U;
int32_t t102 = -45;
int16_t x544 = 64;
static int32_t x550 = -1;
uint8_t x564 = 6U;
volatile int32_t x574 = -1;
uint8_t x575 = 2U;
uint32_t x576 = UINT32_MAX;
int32_t t109 = 29;
int16_t x587 = INT16_MIN;
int32_t x596 = INT32_MAX;
int16_t x597 = 1050;
uint8_t x604 = UINT8_MAX;
static uint8_t x605 = 8U;
volatile uint32_t x608 = UINT32_MAX;
int8_t x614 = 10;
int8_t x616 = 0;
static int8_t x624 = 0;
volatile int8_t x626 = INT8_MIN;
uint32_t x630 = UINT32_MAX;
static int8_t x631 = -1;
int8_t x632 = -19;
volatile uint8_t x634 = 6U;
volatile int16_t x637 = 66;
static int16_t x640 = INT16_MIN;
int32_t t122 = 587;
int32_t x641 = INT32_MIN;
static uint16_t x644 = 8096U;
volatile uint64_t x663 = UINT64_MAX;
int64_t x664 = INT64_MIN;
volatile uint8_t x700 = 1U;
volatile int32_t t128 = -20487;
static int64_t x701 = -25031109918855030LL;
uint16_t x702 = 13U;
int32_t t131 = -26;
uint32_t x713 = 5582U;
uint32_t x715 = 113353349U;
int8_t x727 = -2;
uint64_t x734 = 480949LLU;
static volatile int32_t t137 = 327460722;
volatile int32_t x749 = 22;
int16_t x752 = INT16_MIN;
uint16_t x758 = 22994U;
int8_t x763 = 7;
static uint16_t x764 = 1494U;
static volatile uint16_t x782 = 2003U;
int32_t x788 = 3400914;
int64_t x789 = INT64_MIN;
static int8_t x793 = INT8_MAX;
volatile int16_t x807 = INT16_MIN;
uint32_t x810 = UINT32_MAX;
int16_t x811 = -1;
static volatile int8_t x817 = -1;
volatile int32_t x818 = INT32_MIN;
int64_t x823 = -43LL;
static int16_t x830 = INT16_MIN;
int32_t t155 = 43321;
int8_t x835 = 39;
int32_t x839 = -10950;
int32_t x841 = -1;
int32_t x842 = INT32_MAX;
int64_t x844 = 4LL;
uint32_t x850 = 1297201U;
int16_t x855 = INT16_MIN;
volatile int32_t t160 = -27;
int32_t t161 = -16235;
static uint64_t x866 = UINT64_MAX;
int32_t t164 = 1300199;
uint32_t x888 = UINT32_MAX;
static int8_t x893 = INT8_MIN;
volatile uint64_t x900 = 16485195997LLU;
uint64_t x904 = 23LLU;
volatile uint32_t x914 = 561799541U;
uint64_t x929 = 43249176557462483LLU;
volatile int32_t t175 = -10;
int16_t x935 = -8851;
volatile int32_t t176 = -977429;
uint16_t x937 = UINT16_MAX;
uint16_t x938 = 10U;
static uint16_t x945 = 24195U;
volatile int64_t x948 = 58612419253207LL;
uint8_t x964 = UINT8_MAX;
static volatile uint8_t x973 = 2U;
int8_t x974 = -12;
static int32_t x975 = -1;
uint8_t x999 = UINT8_MAX;
static volatile int16_t x1004 = -77;
int16_t x1006 = -1;
volatile int32_t x1008 = -1;
static int8_t x1012 = -20;
int16_t x1013 = INT16_MIN;
volatile uint16_t x1020 = 43U;
volatile uint16_t x1025 = 4170U;
uint8_t x1028 = 1U;
int16_t x1032 = 1;
uint16_t x1040 = 110U;
volatile int8_t x1050 = -1;
int32_t t197 = 1043558;
volatile int64_t x1057 = INT64_MIN;
uint8_t x1058 = UINT8_MAX;
int32_t t199 = 23181593;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	static uint64_t x2 = 4LLU;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -737017324;

    t0 = (x1<=(x2!=(x3*x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = 0;
	volatile int64_t x6 = -1284LL;
	volatile int8_t x7 = INT8_MIN;
	int32_t x8 = 32626;
	volatile int32_t t1 = -139922;

    t1 = (x5<=(x6!=(x7*x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = -627785;
	uint16_t x14 = 11U;
	uint64_t x15 = UINT64_MAX;
	int64_t x16 = -1LL;
	volatile int32_t t2 = -30705573;

    t2 = (x13<=(x14!=(x15*x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 1U;
	static uint8_t x19 = 88U;
	volatile int32_t t3 = 2728260;

    t3 = (x17<=(x18!=(x19*x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = INT8_MIN;
	volatile uint64_t x22 = 95779698499931254LLU;
	static int16_t x23 = INT16_MIN;
	uint16_t x24 = UINT16_MAX;
	static int32_t t4 = 4114318;

    t4 = (x21<=(x22!=(x23*x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x25 = INT32_MAX;
	uint64_t x26 = 156LLU;
	uint32_t x28 = 1448374U;
	volatile int32_t t5 = -2460757;

    t5 = (x25<=(x26!=(x27*x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x30 = -1;
	int16_t x31 = INT16_MIN;
	volatile int32_t t6 = 1394;

    t6 = (x29<=(x30!=(x31*x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -681;
	int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	uint16_t x36 = UINT16_MAX;
	int32_t t7 = -136817091;

    t7 = (x33<=(x34!=(x35*x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -1732;
	static volatile int32_t x38 = INT32_MAX;
	volatile uint32_t x39 = 1698334790U;
	int32_t t8 = 91;

    t8 = (x37<=(x38!=(x39*x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = 60;
	int32_t x42 = INT32_MIN;
	uint16_t x43 = UINT16_MAX;
	static int16_t x44 = -1;
	volatile int32_t t9 = -25866154;

    t9 = (x41<=(x42!=(x43*x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = -1;
	int16_t x46 = -1;
	static uint64_t x48 = 157019982155536LLU;
	volatile int32_t t10 = 16112;

    t10 = (x45<=(x46!=(x47*x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x49 = 12U;
	int8_t x50 = -6;
	int32_t x51 = -1;
	int8_t x52 = INT8_MIN;

    t11 = (x49<=(x50!=(x51*x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MIN;
	uint32_t x55 = UINT32_MAX;
	int16_t x56 = -884;
	int32_t t12 = 507;

    t12 = (x53<=(x54!=(x55*x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x61 = 6685888552410LLU;
	static uint16_t x62 = UINT16_MAX;
	int64_t x63 = -1LL;
	static uint16_t x64 = 14357U;
	volatile int32_t t13 = 0;

    t13 = (x61<=(x62!=(x63*x64)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x70 = UINT16_MAX;
	volatile int8_t x71 = INT8_MAX;

    t14 = (x69<=(x70!=(x71*x72)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x73 = 692290486564LLU;
	volatile uint64_t x74 = UINT64_MAX;
	volatile int8_t x75 = INT8_MAX;
	int32_t x76 = -11697;
	volatile int32_t t15 = -365;

    t15 = (x73<=(x74!=(x75*x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x81 = 167U;
	static uint32_t x82 = 3U;
	int16_t x83 = -1;
	static int64_t x84 = -1LL;
	volatile int32_t t16 = -5078652;

    t16 = (x81<=(x82!=(x83*x84)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MIN;
	int16_t x88 = -1;
	volatile int32_t t17 = -21533705;

    t17 = (x85<=(x86!=(x87*x88)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = INT16_MAX;
	int16_t x90 = -1;
	int16_t x91 = 1;
	uint32_t x92 = 52U;
	int32_t t18 = -1;

    t18 = (x89<=(x90!=(x91*x92)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x93 = INT8_MIN;
	volatile uint16_t x94 = 277U;
	int64_t x95 = -1LL;
	uint32_t x96 = 3806461U;
	static volatile int32_t t19 = -49227;

    t19 = (x93<=(x94!=(x95*x96)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x101 = INT8_MIN;
	int32_t x102 = 354407;
	int8_t x103 = 0;

    t20 = (x101<=(x102!=(x103*x104)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x106 = 12325U;
	uint8_t x107 = 10U;

    t21 = (x105<=(x106!=(x107*x108)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x110 = INT32_MIN;
	uint32_t x111 = 19U;
	int64_t x112 = -241161LL;
	int32_t t22 = -27;

    t22 = (x109<=(x110!=(x111*x112)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = INT16_MAX;
	static int32_t x114 = -2;
	int16_t x115 = INT16_MIN;
	int32_t t23 = 502447059;

    t23 = (x113<=(x114!=(x115*x116)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x121 = INT64_MIN;
	static uint64_t x122 = UINT64_MAX;
	int8_t x124 = -42;

    t24 = (x121<=(x122!=(x123*x124)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x126 = INT64_MIN;
	int32_t t25 = 183583;

    t25 = (x125<=(x126!=(x127*x128)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x133 = -1;
	int8_t x134 = 22;
	volatile uint32_t x135 = 527352580U;
	volatile uint16_t x136 = 0U;

    t26 = (x133<=(x134!=(x135*x136)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x137 = 32261626700376208LLU;
	int32_t x138 = INT32_MIN;
	static int8_t x139 = -1;
	static int32_t t27 = 29035;

    t27 = (x137<=(x138!=(x139*x140)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x141 = -1;
	int32_t x142 = INT32_MIN;
	volatile int8_t x143 = INT8_MAX;
	static uint32_t x144 = UINT32_MAX;
	volatile int32_t t28 = 251510514;

    t28 = (x141<=(x142!=(x143*x144)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x157 = INT8_MAX;
	static uint8_t x158 = 95U;
	uint32_t x159 = 4U;

    t29 = (x157<=(x158!=(x159*x160)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x161 = INT64_MIN;
	uint16_t x162 = UINT16_MAX;
	uint64_t x163 = UINT64_MAX;
	uint32_t x164 = 172138625U;

    t30 = (x161<=(x162!=(x163*x164)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x165 = 15562046U;
	volatile uint16_t x166 = 510U;
	volatile uint32_t x167 = UINT32_MAX;
	int16_t x168 = INT16_MIN;
	int32_t t31 = -220087;

    t31 = (x165<=(x166!=(x167*x168)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MAX;
	static uint32_t x176 = 358U;
	int32_t t32 = 16;

    t32 = (x173<=(x174!=(x175*x176)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x177 = INT64_MIN;
	volatile int8_t x178 = INT8_MIN;
	static int32_t x180 = -1;
	int32_t t33 = -20094559;

    t33 = (x177<=(x178!=(x179*x180)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x193 = 4U;
	static int8_t x194 = INT8_MIN;
	volatile uint8_t x196 = 12U;
	volatile int32_t t34 = 488128422;

    t34 = (x193<=(x194!=(x195*x196)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x197 = -4;
	int32_t x198 = -23258058;
	int64_t x199 = -1LL;
	uint8_t x200 = UINT8_MAX;
	int32_t t35 = -1;

    t35 = (x197<=(x198!=(x199*x200)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x205 = 165699LL;
	volatile int32_t x206 = 42628;
	int64_t x208 = INT64_MAX;
	int32_t t36 = 371;

    t36 = (x205<=(x206!=(x207*x208)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x209 = INT64_MIN;
	uint32_t x210 = UINT32_MAX;
	uint32_t x211 = UINT32_MAX;
	volatile int8_t x212 = INT8_MAX;
	static int32_t t37 = 66318623;

    t37 = (x209<=(x210!=(x211*x212)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x217 = 104U;
	uint16_t x219 = 385U;
	uint64_t x220 = 181470316306547LLU;
	volatile int32_t t38 = 216080222;

    t38 = (x217<=(x218!=(x219*x220)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x221 = -1;
	uint64_t x224 = 14178777574LLU;
	int32_t t39 = 112;

    t39 = (x221<=(x222!=(x223*x224)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x226 = INT64_MIN;
	uint64_t x227 = 82671968LLU;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t40 = -85975396;

    t40 = (x225<=(x226!=(x227*x228)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x234 = INT64_MIN;
	int8_t x235 = -4;
	int8_t x236 = INT8_MAX;

    t41 = (x233<=(x234!=(x235*x236)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x237 = INT32_MIN;
	uint32_t x238 = UINT32_MAX;

    t42 = (x237<=(x238!=(x239*x240)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x241 = 6068U;
	int32_t x242 = INT32_MIN;
	volatile int16_t x243 = INT16_MIN;
	static volatile int32_t t43 = 1;

    t43 = (x241<=(x242!=(x243*x244)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x246 = INT64_MAX;
	volatile uint16_t x247 = UINT16_MAX;
	int8_t x248 = INT8_MIN;
	int32_t t44 = 11512;

    t44 = (x245<=(x246!=(x247*x248)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x253 = 2071978216LLU;
	int8_t x255 = 3;
	int32_t x256 = -6299103;

    t45 = (x253<=(x254!=(x255*x256)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x261 = INT16_MIN;
	static uint8_t x262 = 15U;
	static int16_t x263 = -44;

    t46 = (x261<=(x262!=(x263*x264)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x265 = INT8_MIN;
	uint64_t x266 = 1LLU;
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = INT16_MIN;
	static volatile int32_t t47 = 385;

    t47 = (x265<=(x266!=(x267*x268)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x269 = INT32_MAX;
	volatile uint64_t x271 = UINT64_MAX;
	uint64_t x272 = 5062563066LLU;

    t48 = (x269<=(x270!=(x271*x272)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x273 = -244849732897699170LL;
	volatile int32_t x274 = INT32_MAX;
	uint32_t x275 = UINT32_MAX;
	volatile int32_t x276 = INT32_MIN;
	volatile int32_t t49 = -8166337;

    t49 = (x273<=(x274!=(x275*x276)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint32_t x285 = UINT32_MAX;
	int64_t x286 = 33163488137481132LL;
	int64_t x287 = -2954752023LL;
	int32_t x288 = -1;
	volatile int32_t t50 = -21949;

    t50 = (x285<=(x286!=(x287*x288)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x289 = 1244U;
	volatile int8_t x290 = 14;
	static volatile int16_t x291 = INT16_MAX;
	static int8_t x292 = 0;
	static int32_t t51 = 714959;

    t51 = (x289<=(x290!=(x291*x292)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x293 = 28U;
	static uint64_t x295 = 35LLU;
	volatile int32_t x296 = 20524879;

    t52 = (x293<=(x294!=(x295*x296)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x298 = -1244177252LL;
	uint16_t x299 = 1U;
	int16_t x300 = -2606;
	volatile int32_t t53 = -1;

    t53 = (x297<=(x298!=(x299*x300)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x301 = INT64_MAX;
	int64_t x302 = 337186337931LL;
	static int8_t x304 = -1;
	static volatile int32_t t54 = 0;

    t54 = (x301<=(x302!=(x303*x304)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x305 = INT16_MIN;
	static uint8_t x306 = 97U;
	static int64_t x307 = 1328596242LL;
	uint64_t x308 = UINT64_MAX;

    t55 = (x305<=(x306!=(x307*x308)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x310 = 3370600788LLU;
	volatile uint16_t x311 = UINT16_MAX;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t56 = 656;

    t56 = (x309<=(x310!=(x311*x312)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x317 = INT64_MIN;
	int16_t x319 = -1;
	int16_t x320 = 18;
	int32_t t57 = 0;

    t57 = (x317<=(x318!=(x319*x320)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x321 = 56668LLU;
	volatile int64_t x322 = -8608475LL;
	uint64_t x323 = 1928560217LLU;
	int32_t x324 = -1490828;

    t58 = (x321<=(x322!=(x323*x324)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x325 = 676084773U;
	volatile int32_t x326 = -5662;
	static uint16_t x327 = 0U;
	volatile uint64_t x328 = 2253LLU;
	int32_t t59 = 10;

    t59 = (x325<=(x326!=(x327*x328)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x329 = UINT16_MAX;
	uint8_t x330 = 0U;
	volatile int16_t x331 = INT16_MAX;
	static uint64_t x332 = UINT64_MAX;
	int32_t t60 = 1;

    t60 = (x329<=(x330!=(x331*x332)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	volatile int32_t x334 = -1;
	int8_t x335 = INT8_MIN;
	uint32_t x336 = 28355U;
	volatile int32_t t61 = -314906897;

    t61 = (x333<=(x334!=(x335*x336)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x337 = INT64_MIN;
	volatile uint8_t x338 = 28U;
	static volatile uint64_t x339 = 425096241088LLU;
	uint16_t x340 = UINT16_MAX;

    t62 = (x337<=(x338!=(x339*x340)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint64_t x341 = 62068LLU;
	int16_t x342 = INT16_MIN;
	int32_t x344 = -1;

    t63 = (x341<=(x342!=(x343*x344)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x345 = INT32_MAX;
	int16_t x346 = -1;
	volatile int32_t x348 = INT32_MAX;
	int32_t t64 = 3;

    t64 = (x345<=(x346!=(x347*x348)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x350 = -1;
	uint64_t x352 = 1929564515371816058LLU;
	int32_t t65 = 648;

    t65 = (x349<=(x350!=(x351*x352)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x354 = 0;
	uint16_t x355 = 238U;
	uint64_t x356 = 0LLU;
	int32_t t66 = -1537609;

    t66 = (x353<=(x354!=(x355*x356)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x358 = 3385;
	static int32_t x360 = -249;

    t67 = (x357<=(x358!=(x359*x360)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x362 = UINT16_MAX;
	int32_t x363 = -409;
	int8_t x364 = INT8_MIN;
	volatile int32_t t68 = -85;

    t68 = (x361<=(x362!=(x363*x364)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x366 = INT8_MIN;
	uint64_t x367 = 15147678299LLU;
	int8_t x368 = -7;
	volatile int32_t t69 = -78308034;

    t69 = (x365<=(x366!=(x367*x368)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x369 = 2624482274LLU;
	static uint32_t x370 = 6934314U;
	int16_t x372 = -1;
	volatile int32_t t70 = -1;

    t70 = (x369<=(x370!=(x371*x372)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x373 = 1941LLU;
	volatile int32_t x374 = -12952712;
	volatile int32_t x375 = INT32_MIN;
	uint32_t x376 = UINT32_MAX;
	int32_t t71 = -48;

    t71 = (x373<=(x374!=(x375*x376)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x378 = INT64_MAX;
	int8_t x379 = -5;
	int64_t x380 = -1LL;
	volatile int32_t t72 = 150626632;

    t72 = (x377<=(x378!=(x379*x380)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x381 = 1;
	volatile int32_t x382 = INT32_MAX;
	int64_t x383 = 114974699450LL;
	uint64_t x384 = 215593176LLU;

    t73 = (x381<=(x382!=(x383*x384)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x385 = -1;
	uint16_t x386 = 1U;
	uint8_t x387 = 1U;
	int64_t x388 = -1LL;

    t74 = (x385<=(x386!=(x387*x388)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x389 = -1482;
	uint64_t x391 = 358247864LLU;
	uint16_t x392 = 44U;
	volatile int32_t t75 = -80713818;

    t75 = (x389<=(x390!=(x391*x392)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x393 = 5793U;
	int16_t x394 = 455;
	uint32_t x396 = 0U;
	static int32_t t76 = 111523;

    t76 = (x393<=(x394!=(x395*x396)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x405 = 99364016069LLU;
	uint8_t x407 = 11U;
	volatile uint32_t x408 = 632248288U;
	volatile int32_t t77 = 15636;

    t77 = (x405<=(x406!=(x407*x408)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x413 = INT32_MIN;
	int32_t x414 = 8163;
	volatile int32_t x416 = INT32_MAX;

    t78 = (x413<=(x414!=(x415*x416)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x417 = INT16_MAX;
	volatile int16_t x419 = 5;
	volatile uint8_t x420 = 20U;

    t79 = (x417<=(x418!=(x419*x420)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x421 = -15367608LL;
	static int32_t x422 = -1;
	volatile int32_t x423 = 209;
	volatile int32_t t80 = -1030942;

    t80 = (x421<=(x422!=(x423*x424)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x430 = INT32_MIN;
	static int16_t x431 = 0;
	uint8_t x432 = 1U;
	int32_t t81 = 61814142;

    t81 = (x429<=(x430!=(x431*x432)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x433 = 30834180LL;
	volatile int8_t x435 = 34;
	int8_t x436 = -1;
	int32_t t82 = -393;

    t82 = (x433<=(x434!=(x435*x436)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x441 = -3253980;
	int32_t x442 = -1;
	int8_t x443 = -1;
	uint32_t x444 = 4906218U;
	static volatile int32_t t83 = 373050;

    t83 = (x441<=(x442!=(x443*x444)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x445 = INT16_MAX;
	int64_t x446 = INT64_MAX;
	static int8_t x448 = INT8_MIN;

    t84 = (x445<=(x446!=(x447*x448)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint64_t x449 = 119825125415420325LLU;
	int64_t x450 = -561064033789274644LL;
	int16_t x451 = -1;
	int32_t t85 = -122276;

    t85 = (x449<=(x450!=(x451*x452)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x453 = -1;
	int64_t x454 = -460058569LL;
	static uint16_t x455 = 2952U;
	int16_t x456 = INT16_MIN;

    t86 = (x453<=(x454!=(x455*x456)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x457 = -22;
	int16_t x458 = INT16_MIN;
	static int8_t x459 = INT8_MIN;
	uint64_t x460 = UINT64_MAX;
	int32_t t87 = 36864323;

    t87 = (x457<=(x458!=(x459*x460)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x461 = 6894872003694110LLU;
	int8_t x462 = INT8_MIN;
	uint16_t x463 = 472U;
	static volatile int32_t t88 = 989445094;

    t88 = (x461<=(x462!=(x463*x464)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t t89 = 913359;

    t89 = (x465<=(x466!=(x467*x468)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x477 = 0U;
	volatile uint16_t x479 = 3U;
	int16_t x480 = -299;
	static int32_t t90 = -205;

    t90 = (x477<=(x478!=(x479*x480)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x485 = INT64_MIN;
	uint8_t x487 = 0U;
	int64_t x488 = 1952336045141698LL;
	volatile int32_t t91 = 1030707;

    t91 = (x485<=(x486!=(x487*x488)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x490 = 7U;
	int32_t x491 = INT32_MIN;
	uint64_t x492 = 3671873012LLU;
	int32_t t92 = 688111;

    t92 = (x489<=(x490!=(x491*x492)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x493 = 10542650LLU;
	int8_t x494 = INT8_MIN;
	static int64_t x495 = -1LL;
	volatile uint32_t x496 = 2U;
	int32_t t93 = -221647;

    t93 = (x493<=(x494!=(x495*x496)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x498 = 0;
	uint32_t x499 = 1880U;
	int8_t x500 = -1;
	int32_t t94 = -228662527;

    t94 = (x497<=(x498!=(x499*x500)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x501 = INT32_MAX;
	uint32_t x502 = 618U;
	volatile int32_t x504 = -1;
	static int32_t t95 = -503977986;

    t95 = (x501<=(x502!=(x503*x504)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x509 = UINT64_MAX;
	uint64_t x511 = UINT64_MAX;
	int16_t x512 = 574;
	volatile int32_t t96 = -165187597;

    t96 = (x509<=(x510!=(x511*x512)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x513 = -1;
	uint8_t x514 = 0U;
	int32_t x515 = -6751774;
	volatile int32_t t97 = -13;

    t97 = (x513<=(x514!=(x515*x516)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x517 = INT32_MAX;
	volatile uint8_t x518 = 1U;
	uint32_t x520 = 1U;
	volatile int32_t t98 = -6;

    t98 = (x517<=(x518!=(x519*x520)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x521 = INT32_MIN;
	uint16_t x522 = 889U;
	int32_t x523 = INT32_MIN;
	uint8_t x524 = 0U;
	int32_t t99 = -3619;

    t99 = (x521<=(x522!=(x523*x524)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x525 = -214;
	int16_t x526 = -1;
	uint16_t x527 = UINT16_MAX;
	uint32_t x528 = 44925118U;
	int32_t t100 = -122905;

    t100 = (x525<=(x526!=(x527*x528)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x530 = INT32_MIN;
	uint16_t x531 = 6U;
	static int16_t x532 = -1;
	int32_t t101 = -60;

    t101 = (x529<=(x530!=(x531*x532)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x537 = INT64_MIN;
	int8_t x539 = -21;

    t102 = (x537<=(x538!=(x539*x540)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x541 = -1;
	uint16_t x542 = UINT16_MAX;
	volatile int8_t x543 = INT8_MAX;
	int32_t t103 = 1309;

    t103 = (x541<=(x542!=(x543*x544)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x549 = -1;
	int32_t x551 = -1;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t104 = -7032;

    t104 = (x549<=(x550!=(x551*x552)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x557 = -416254LL;
	volatile int8_t x558 = INT8_MIN;
	uint32_t x559 = UINT32_MAX;
	static volatile int8_t x560 = INT8_MIN;
	int32_t t105 = -296381;

    t105 = (x557<=(x558!=(x559*x560)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x561 = -1LL;
	int16_t x562 = INT16_MAX;
	uint64_t x563 = UINT64_MAX;
	volatile int32_t t106 = 200;

    t106 = (x561<=(x562!=(x563*x564)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x565 = INT32_MIN;
	uint16_t x566 = 482U;
	int32_t x567 = -288360438;
	uint64_t x568 = 329203632LLU;
	int32_t t107 = -118896514;

    t107 = (x565<=(x566!=(x567*x568)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x573 = INT64_MAX;
	static int32_t t108 = -685723;

    t108 = (x573<=(x574!=(x575*x576)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x577 = 486336636468328LL;
	static int32_t x578 = -62017;
	int32_t x579 = INT32_MIN;
	volatile uint32_t x580 = UINT32_MAX;

    t109 = (x577<=(x578!=(x579*x580)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x585 = -13;
	int8_t x586 = 15;
	int16_t x588 = 2612;
	volatile int32_t t110 = 71943455;

    t110 = (x585<=(x586!=(x587*x588)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x593 = -1740873;
	int8_t x594 = INT8_MAX;
	int32_t x595 = -1;
	volatile int32_t t111 = 145;

    t111 = (x593<=(x594!=(x595*x596)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x598 = 74015;
	static int64_t x599 = 86120LL;
	static int8_t x600 = INT8_MAX;
	int32_t t112 = 16294;

    t112 = (x597<=(x598!=(x599*x600)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x601 = INT8_MIN;
	int8_t x602 = INT8_MIN;
	int16_t x603 = -1;
	volatile int32_t t113 = -4416;

    t113 = (x601<=(x602!=(x603*x604)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x606 = INT64_MIN;
	volatile int32_t x607 = INT32_MIN;
	int32_t t114 = -14097316;

    t114 = (x605<=(x606!=(x607*x608)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x609 = INT64_MIN;
	int16_t x610 = INT16_MIN;
	uint8_t x611 = 1U;
	int64_t x612 = INT64_MIN;
	int32_t t115 = -50365;

    t115 = (x609<=(x610!=(x611*x612)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x613 = 886865007U;
	static int16_t x615 = 65;
	static int32_t t116 = -64796840;

    t116 = (x613<=(x614!=(x615*x616)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x617 = UINT64_MAX;
	int32_t x618 = -13465564;
	int8_t x619 = 11;
	int64_t x620 = -1LL;
	volatile int32_t t117 = 579781989;

    t117 = (x617<=(x618!=(x619*x620)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x621 = 1U;
	uint64_t x622 = 509258419842888LLU;
	int32_t x623 = -1933858;
	static volatile int32_t t118 = 16548766;

    t118 = (x621<=(x622!=(x623*x624)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x625 = UINT64_MAX;
	static uint8_t x627 = 46U;
	int8_t x628 = -1;
	int32_t t119 = 8;

    t119 = (x625<=(x626!=(x627*x628)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x629 = INT8_MAX;
	int32_t t120 = 889512;

    t120 = (x629<=(x630!=(x631*x632)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x633 = 3U;
	int8_t x635 = INT8_MIN;
	int16_t x636 = 9;
	volatile int32_t t121 = 38;

    t121 = (x633<=(x634!=(x635*x636)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x638 = INT8_MIN;
	static int64_t x639 = -1LL;

    t122 = (x637<=(x638!=(x639*x640)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x642 = INT8_MAX;
	int16_t x643 = -35;
	volatile int32_t t123 = -510;

    t123 = (x641<=(x642!=(x643*x644)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x645 = -1;
	int64_t x646 = -386253598117318840LL;
	volatile int32_t x647 = INT32_MIN;
	int8_t x648 = 1;
	int32_t t124 = 220446191;

    t124 = (x645<=(x646!=(x647*x648)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x661 = 1;
	static int16_t x662 = 1;
	static volatile int32_t t125 = 218;

    t125 = (x661<=(x662!=(x663*x664)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x673 = INT8_MAX;
	int32_t x674 = -261894471;
	uint32_t x675 = UINT32_MAX;
	int16_t x676 = 75;
	volatile int32_t t126 = 977;

    t126 = (x673<=(x674!=(x675*x676)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x693 = INT64_MIN;
	int32_t x694 = INT32_MAX;
	static uint8_t x695 = UINT8_MAX;
	static volatile int16_t x696 = INT16_MIN;
	int32_t t127 = 85163776;

    t127 = (x693<=(x694!=(x695*x696)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x697 = INT64_MIN;
	static int8_t x698 = 10;
	static uint8_t x699 = 95U;

    t128 = (x697<=(x698!=(x699*x700)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x703 = UINT64_MAX;
	uint8_t x704 = UINT8_MAX;
	int32_t t129 = 50;

    t129 = (x701<=(x702!=(x703*x704)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint8_t x705 = 1U;
	int32_t x706 = INT32_MIN;
	int8_t x707 = 3;
	int64_t x708 = -1LL;
	volatile int32_t t130 = 16144;

    t130 = (x705<=(x706!=(x707*x708)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x709 = INT32_MIN;
	volatile int16_t x710 = INT16_MIN;
	uint8_t x711 = 0U;
	volatile int32_t x712 = INT32_MIN;

    t131 = (x709<=(x710!=(x711*x712)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x714 = INT32_MIN;
	volatile uint16_t x716 = 1724U;
	int32_t t132 = -480947628;

    t132 = (x713<=(x714!=(x715*x716)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x717 = 2323U;
	volatile int64_t x718 = INT64_MIN;
	uint16_t x719 = 1U;
	static uint32_t x720 = 172719841U;
	int32_t t133 = -111229125;

    t133 = (x717<=(x718!=(x719*x720)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x725 = 12;
	static int8_t x726 = INT8_MIN;
	int64_t x728 = 65080869017455LL;
	int32_t t134 = -57025;

    t134 = (x725<=(x726!=(x727*x728)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x729 = INT32_MAX;
	volatile uint16_t x730 = 0U;
	static volatile int16_t x731 = -1;
	int16_t x732 = INT16_MIN;
	int32_t t135 = -106;

    t135 = (x729<=(x730!=(x731*x732)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x733 = 32314U;
	static int8_t x735 = INT8_MIN;
	uint64_t x736 = 8LLU;
	static volatile int32_t t136 = 20;

    t136 = (x733<=(x734!=(x735*x736)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x741 = INT8_MIN;
	uint64_t x742 = 439035478358605240LLU;
	uint32_t x743 = 2145678398U;
	uint16_t x744 = UINT16_MAX;

    t137 = (x741<=(x742!=(x743*x744)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x750 = -1;
	int8_t x751 = -1;
	int32_t t138 = -246;

    t138 = (x749<=(x750!=(x751*x752)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x753 = UINT64_MAX;
	volatile int16_t x754 = INT16_MIN;
	volatile uint64_t x755 = 1112313454086LLU;
	int8_t x756 = 3;
	volatile int32_t t139 = -1;

    t139 = (x753<=(x754!=(x755*x756)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x757 = 3U;
	static volatile int64_t x759 = 2169935009737635LL;
	static uint8_t x760 = UINT8_MAX;
	volatile int32_t t140 = -6030312;

    t140 = (x757<=(x758!=(x759*x760)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x761 = -1;
	volatile int64_t x762 = -1LL;
	volatile int32_t t141 = 3203693;

    t141 = (x761<=(x762!=(x763*x764)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x765 = INT32_MIN;
	volatile int64_t x766 = -1LL;
	uint8_t x767 = 0U;
	int32_t x768 = INT32_MIN;
	int32_t t142 = -983477;

    t142 = (x765<=(x766!=(x767*x768)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x777 = 120U;
	int64_t x778 = INT64_MIN;
	uint64_t x779 = 31068LLU;
	uint8_t x780 = 112U;
	int32_t t143 = -794;

    t143 = (x777<=(x778!=(x779*x780)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint32_t x781 = UINT32_MAX;
	static uint8_t x783 = 1U;
	uint8_t x784 = UINT8_MAX;
	int32_t t144 = -5984053;

    t144 = (x781<=(x782!=(x783*x784)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x785 = 21U;
	int64_t x786 = INT64_MIN;
	int16_t x787 = 148;
	volatile int32_t t145 = -1173146;

    t145 = (x785<=(x786!=(x787*x788)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x790 = INT64_MIN;
	static int16_t x791 = -1;
	int16_t x792 = -1;
	volatile int32_t t146 = -153570;

    t146 = (x789<=(x790!=(x791*x792)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x794 = 78417LL;
	static volatile uint32_t x795 = UINT32_MAX;
	static int16_t x796 = 54;
	volatile int32_t t147 = 6077;

    t147 = (x793<=(x794!=(x795*x796)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x797 = 15;
	uint64_t x798 = 426333967583LLU;
	static uint64_t x799 = 28193821592529599LLU;
	int8_t x800 = -1;
	volatile int32_t t148 = 4304348;

    t148 = (x797<=(x798!=(x799*x800)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x801 = INT32_MIN;
	static int8_t x802 = 5;
	int16_t x803 = -1;
	uint16_t x804 = UINT16_MAX;
	static volatile int32_t t149 = 2797;

    t149 = (x801<=(x802!=(x803*x804)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x805 = 4041452U;
	uint64_t x806 = 1LLU;
	uint32_t x808 = 2155195U;
	volatile int32_t t150 = -51;

    t150 = (x805<=(x806!=(x807*x808)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x809 = INT16_MIN;
	volatile uint64_t x812 = 4197969469LLU;
	volatile int32_t t151 = -43157107;

    t151 = (x809<=(x810!=(x811*x812)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x819 = 31;
	uint16_t x820 = 33U;
	volatile int32_t t152 = -29860;

    t152 = (x817<=(x818!=(x819*x820)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x821 = UINT8_MAX;
	int16_t x822 = -12;
	uint64_t x824 = 30LLU;
	int32_t t153 = -117144;

    t153 = (x821<=(x822!=(x823*x824)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x825 = UINT32_MAX;
	uint32_t x826 = 684U;
	static uint32_t x827 = 8U;
	static int8_t x828 = -1;
	volatile int32_t t154 = -176;

    t154 = (x825<=(x826!=(x827*x828)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x829 = INT64_MAX;
	volatile uint64_t x831 = 2118905LLU;
	static volatile int32_t x832 = INT32_MAX;

    t155 = (x829<=(x830!=(x831*x832)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x833 = 1U;
	int64_t x834 = INT64_MIN;
	int16_t x836 = -5100;
	volatile int32_t t156 = -540334;

    t156 = (x833<=(x834!=(x835*x836)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x837 = 2U;
	int8_t x838 = -20;
	volatile int16_t x840 = 7826;
	int32_t t157 = 915491;

    t157 = (x837<=(x838!=(x839*x840)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x843 = -1;
	volatile int32_t t158 = -169877;

    t158 = (x841<=(x842!=(x843*x844)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x849 = INT16_MIN;
	volatile int8_t x851 = INT8_MIN;
	uint16_t x852 = UINT16_MAX;
	volatile int32_t t159 = -2460254;

    t159 = (x849<=(x850!=(x851*x852)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x853 = INT16_MIN;
	uint8_t x854 = 12U;
	int32_t x856 = -1;

    t160 = (x853<=(x854!=(x855*x856)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x857 = 807U;
	int16_t x858 = -26;
	uint64_t x859 = 26LLU;
	uint32_t x860 = 1145U;

    t161 = (x857<=(x858!=(x859*x860)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x861 = INT16_MAX;
	uint16_t x862 = 5U;
	uint64_t x863 = UINT64_MAX;
	int8_t x864 = -1;
	volatile int32_t t162 = -7736574;

    t162 = (x861<=(x862!=(x863*x864)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x865 = 5806U;
	uint16_t x867 = 9418U;
	static int16_t x868 = 7925;
	volatile int32_t t163 = 46205;

    t163 = (x865<=(x866!=(x867*x868)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x873 = 9739U;
	static int8_t x874 = -1;
	uint64_t x875 = 100444LLU;
	int16_t x876 = -1;

    t164 = (x873<=(x874!=(x875*x876)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x877 = UINT32_MAX;
	uint64_t x878 = 121524496079LLU;
	int32_t x879 = INT32_MIN;
	uint32_t x880 = 103680113U;
	int32_t t165 = 1980500;

    t165 = (x877<=(x878!=(x879*x880)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x881 = 60U;
	int64_t x882 = -1LL;
	uint8_t x883 = UINT8_MAX;
	uint64_t x884 = 662453463848067840LLU;
	volatile int32_t t166 = -18486445;

    t166 = (x881<=(x882!=(x883*x884)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x885 = UINT32_MAX;
	uint8_t x886 = UINT8_MAX;
	int8_t x887 = -1;
	int32_t t167 = 33366;

    t167 = (x885<=(x886!=(x887*x888)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x894 = INT32_MIN;
	static uint8_t x895 = 0U;
	volatile int16_t x896 = INT16_MAX;
	volatile int32_t t168 = -9;

    t168 = (x893<=(x894!=(x895*x896)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x897 = INT16_MIN;
	int64_t x898 = -1LL;
	int64_t x899 = INT64_MIN;
	volatile int32_t t169 = -336;

    t169 = (x897<=(x898!=(x899*x900)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x901 = INT16_MIN;
	uint64_t x902 = 695561182LLU;
	uint64_t x903 = 4462394329LLU;
	int32_t t170 = -335700;

    t170 = (x901<=(x902!=(x903*x904)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x905 = 1466548LLU;
	int16_t x906 = 0;
	uint16_t x907 = UINT16_MAX;
	int8_t x908 = INT8_MAX;
	volatile int32_t t171 = -1047673067;

    t171 = (x905<=(x906!=(x907*x908)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x913 = INT64_MIN;
	uint32_t x915 = UINT32_MAX;
	uint32_t x916 = 15600U;
	static volatile int32_t t172 = 69779746;

    t172 = (x913<=(x914!=(x915*x916)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x921 = -129982;
	static uint16_t x922 = 63U;
	volatile int8_t x923 = 2;
	volatile int32_t x924 = -123;
	static volatile int32_t t173 = -10186155;

    t173 = (x921<=(x922!=(x923*x924)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x925 = 1LLU;
	int64_t x926 = INT64_MAX;
	static uint32_t x927 = 1U;
	int32_t x928 = INT32_MAX;
	volatile int32_t t174 = -11038076;

    t174 = (x925<=(x926!=(x927*x928)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x930 = 5U;
	static uint32_t x931 = 35587218U;
	static uint32_t x932 = 94U;

    t175 = (x929<=(x930!=(x931*x932)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x933 = 0;
	volatile int32_t x934 = INT32_MIN;
	int16_t x936 = INT16_MIN;

    t176 = (x933<=(x934!=(x935*x936)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x939 = 492;
	int8_t x940 = -1;
	volatile int32_t t177 = -10272861;

    t177 = (x937<=(x938!=(x939*x940)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x946 = -1LL;
	static uint8_t x947 = UINT8_MAX;
	int32_t t178 = 1067;

    t178 = (x945<=(x946!=(x947*x948)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x949 = INT32_MIN;
	int8_t x950 = INT8_MIN;
	int64_t x951 = 329LL;
	int32_t x952 = INT32_MAX;
	volatile int32_t t179 = 2441911;

    t179 = (x949<=(x950!=(x951*x952)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x953 = INT64_MIN;
	static int16_t x954 = INT16_MIN;
	int16_t x955 = -127;
	static volatile uint64_t x956 = 5629501LLU;
	volatile int32_t t180 = -10930;

    t180 = (x953<=(x954!=(x955*x956)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x957 = 48186411;
	int16_t x958 = INT16_MIN;
	uint32_t x959 = 1070U;
	static int32_t x960 = -315;
	int32_t t181 = 745;

    t181 = (x957<=(x958!=(x959*x960)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x961 = -1LL;
	static int32_t x962 = 457828;
	volatile int8_t x963 = -44;
	volatile int32_t t182 = 151;

    t182 = (x961<=(x962!=(x963*x964)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x976 = UINT32_MAX;
	static volatile int32_t t183 = -3745;

    t183 = (x973<=(x974!=(x975*x976)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x993 = 1U;
	int64_t x994 = INT64_MIN;
	int32_t x995 = 5277;
	uint16_t x996 = 15075U;
	volatile int32_t t184 = -1982260;

    t184 = (x993<=(x994!=(x995*x996)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x997 = INT16_MAX;
	static uint16_t x998 = UINT16_MAX;
	int16_t x1000 = INT16_MAX;
	static volatile int32_t t185 = -1;

    t185 = (x997<=(x998!=(x999*x1000)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x1001 = UINT16_MAX;
	uint64_t x1002 = 18LLU;
	uint32_t x1003 = 4028560U;
	static volatile int32_t t186 = -963950571;

    t186 = (x1001<=(x1002!=(x1003*x1004)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1005 = 60427397U;
	volatile int16_t x1007 = INT16_MIN;
	static int32_t t187 = 4923181;

    t187 = (x1005<=(x1006!=(x1007*x1008)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1009 = INT64_MAX;
	static int8_t x1010 = INT8_MAX;
	static int32_t x1011 = -1;
	static int32_t t188 = -43;

    t188 = (x1009<=(x1010!=(x1011*x1012)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1014 = INT64_MIN;
	static volatile uint16_t x1015 = 13051U;
	static uint16_t x1016 = 102U;
	volatile int32_t t189 = 6609;

    t189 = (x1013<=(x1014!=(x1015*x1016)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1017 = 16;
	uint8_t x1018 = 23U;
	uint64_t x1019 = 54LLU;
	int32_t t190 = -3;

    t190 = (x1017<=(x1018!=(x1019*x1020)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1021 = 673LLU;
	int16_t x1022 = INT16_MAX;
	int64_t x1023 = 716461LL;
	int32_t x1024 = INT32_MIN;
	static volatile int32_t t191 = -4559215;

    t191 = (x1021<=(x1022!=(x1023*x1024)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x1026 = INT32_MIN;
	static uint16_t x1027 = 7874U;
	volatile int32_t t192 = -3;

    t192 = (x1025<=(x1026!=(x1027*x1028)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1029 = -1;
	int8_t x1030 = -1;
	int64_t x1031 = INT64_MAX;
	int32_t t193 = 1;

    t193 = (x1029<=(x1030!=(x1031*x1032)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1033 = -1;
	uint16_t x1034 = 42U;
	int64_t x1035 = 2834LL;
	int16_t x1036 = -1;
	static volatile int32_t t194 = 2;

    t194 = (x1033<=(x1034!=(x1035*x1036)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1037 = 12U;
	static int8_t x1038 = -1;
	uint16_t x1039 = 0U;
	volatile int32_t t195 = 15969;

    t195 = (x1037<=(x1038!=(x1039*x1040)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1041 = INT16_MIN;
	int64_t x1042 = -1LL;
	volatile int64_t x1043 = INT64_MIN;
	int16_t x1044 = 1;
	int32_t t196 = 267;

    t196 = (x1041<=(x1042!=(x1043*x1044)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1049 = INT16_MIN;
	static volatile uint16_t x1051 = UINT16_MAX;
	volatile int8_t x1052 = 41;

    t197 = (x1049<=(x1050!=(x1051*x1052)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1053 = 279611;
	int64_t x1054 = -1LL;
	uint32_t x1055 = 24U;
	uint8_t x1056 = 24U;
	volatile int32_t t198 = -13893595;

    t198 = (x1053<=(x1054!=(x1055*x1056)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1059 = -1;
	uint64_t x1060 = UINT64_MAX;

    t199 = (x1057<=(x1058!=(x1059*x1060)));

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

