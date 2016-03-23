
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

int16_t x9 = -9293;
int8_t x29 = 3;
int8_t x31 = -1;
volatile int16_t x32 = INT16_MAX;
int32_t t4 = -4;
int8_t x60 = -1;
int32_t t7 = -782083;
uint16_t x78 = UINT16_MAX;
volatile int64_t x85 = -824430LL;
int64_t x88 = 153790857014342LL;
static int64_t x89 = INT64_MAX;
int16_t x90 = INT16_MAX;
int8_t x104 = INT8_MAX;
volatile int32_t t12 = -643;
int64_t x115 = INT64_MIN;
static int8_t x131 = INT8_MAX;
int32_t t15 = 1;
int64_t x146 = INT64_MIN;
int32_t x155 = INT32_MIN;
uint8_t x160 = UINT8_MAX;
int32_t x170 = -1;
volatile int64_t x178 = 2LL;
uint32_t x181 = 27U;
uint64_t x217 = 106712234021186LLU;
volatile int32_t x220 = 464643482;
volatile int8_t x227 = INT8_MIN;
int64_t x229 = -1LL;
volatile int32_t x239 = INT32_MIN;
volatile int32_t t34 = 27654855;
int32_t t35 = 174687269;
volatile int32_t t36 = 126;
uint32_t x282 = 139U;
volatile uint8_t x300 = UINT8_MAX;
static int32_t x303 = INT32_MIN;
int16_t x313 = INT16_MIN;
static int16_t x327 = -401;
int32_t t43 = -1;
static volatile int16_t x333 = INT16_MIN;
uint8_t x342 = 2U;
int64_t x350 = INT64_MAX;
int32_t t47 = 50;
int32_t x362 = INT32_MIN;
int8_t x363 = -7;
volatile int32_t t48 = 1031377397;
uint64_t x369 = 12919597571426880LLU;
int32_t x373 = -1;
volatile uint16_t x385 = 3U;
int32_t x389 = 118;
int32_t x396 = INT32_MAX;
int64_t x397 = INT64_MAX;
int32_t x408 = INT32_MIN;
int64_t x409 = INT64_MIN;
int32_t x438 = INT32_MAX;
int64_t x439 = -1281LL;
uint32_t x440 = UINT32_MAX;
int16_t x445 = INT16_MIN;
int64_t x448 = INT64_MAX;
static volatile int32_t t61 = 48658326;
int8_t x460 = -1;
volatile int32_t t63 = -14211449;
uint64_t x467 = 7658595LLU;
int32_t x489 = 84429;
static int32_t t67 = 9847;
uint8_t x497 = 56U;
int8_t x500 = -1;
volatile int8_t x501 = 12;
int32_t t69 = -64;
static int8_t x522 = INT8_MAX;
uint16_t x523 = 27U;
int16_t x537 = 474;
int8_t x539 = INT8_MIN;
uint8_t x541 = UINT8_MAX;
int32_t x542 = INT32_MAX;
int32_t t75 = 0;
int16_t x556 = -120;
int32_t x566 = INT32_MAX;
int16_t x567 = INT16_MAX;
int16_t x575 = 1;
uint64_t x595 = 108LLU;
static int8_t x599 = INT8_MIN;
uint8_t x608 = 31U;
static int32_t t88 = -142230586;
int64_t x642 = 51634LL;
volatile int32_t t91 = -1195789;
int32_t t92 = 1353770;
uint64_t x661 = 576257LLU;
static int16_t x669 = -1;
static int32_t x670 = -122;
int16_t x688 = INT16_MAX;
int8_t x691 = 2;
static int8_t x693 = -24;
int16_t x696 = INT16_MIN;
int16_t x697 = INT16_MIN;
uint8_t x699 = 5U;
uint64_t x734 = 190LLU;
int32_t x736 = INT32_MIN;
uint8_t x737 = UINT8_MAX;
uint64_t x744 = UINT64_MAX;
int32_t x745 = 20;
int64_t x751 = 0LL;
static int32_t t105 = -15713;
int8_t x755 = INT8_MIN;
uint8_t x761 = 0U;
int8_t x770 = -1;
uint8_t x771 = 14U;
int32_t t108 = 262420721;
static volatile int32_t x773 = 4;
uint32_t x774 = UINT32_MAX;
static uint64_t x778 = 10295LLU;
int64_t x780 = -67036668966LL;
uint8_t x786 = 6U;
volatile int16_t x787 = 0;
int32_t t116 = 17399;
volatile int32_t t117 = 341691;
int32_t t118 = 32033214;
volatile int32_t x827 = INT32_MIN;
int64_t x829 = -1LL;
static uint8_t x830 = 13U;
static volatile int32_t t120 = -250976400;
int8_t x835 = 42;
int8_t x846 = INT8_MAX;
static int16_t x847 = INT16_MIN;
uint64_t x861 = 36942LLU;
volatile int32_t x864 = 95850662;
static int32_t t126 = -42394678;
static volatile int32_t t128 = 9;
static int32_t t129 = -398070;
int8_t x885 = 34;
volatile int32_t t130 = 3420013;
int16_t x896 = INT16_MAX;
static int8_t x918 = -1;
static uint32_t x942 = UINT32_MAX;
int16_t x943 = -3572;
uint8_t x957 = UINT8_MAX;
uint8_t x960 = UINT8_MAX;
int64_t x967 = INT64_MIN;
uint32_t x970 = 319U;
static int8_t x971 = INT8_MIN;
static volatile int32_t t140 = -207855097;
int32_t x978 = INT32_MIN;
int8_t x980 = INT8_MAX;
int32_t x981 = INT32_MAX;
int16_t x982 = 0;
volatile uint32_t x1001 = 2U;
static int16_t x1003 = INT16_MIN;
volatile int32_t x1013 = INT32_MAX;
volatile int64_t x1016 = 0LL;
static volatile uint16_t x1023 = 1U;
volatile uint8_t x1028 = 31U;
int64_t x1038 = INT64_MIN;
int32_t x1040 = INT32_MIN;
int32_t x1048 = INT32_MIN;
static uint64_t x1053 = 111LLU;
int64_t x1056 = 116008899676620LL;
static volatile int32_t t154 = 6902;
uint32_t x1063 = UINT32_MAX;
static int32_t t156 = 554070009;
int64_t x1083 = 226059501221LL;
int64_t x1086 = INT64_MAX;
uint32_t x1113 = 2218965U;
uint16_t x1114 = UINT16_MAX;
volatile uint16_t x1115 = 99U;
static volatile uint64_t x1119 = 33877LLU;
uint64_t x1120 = 981472966037LLU;
int32_t t163 = 52439;
int64_t x1138 = INT64_MIN;
volatile int32_t t166 = 42;
int8_t x1177 = INT8_MIN;
static int8_t x1179 = INT8_MIN;
int16_t x1185 = 0;
int16_t x1187 = INT16_MIN;
int64_t x1217 = -642LL;
int8_t x1218 = INT8_MIN;
int32_t t171 = 3;
int64_t x1221 = INT64_MIN;
int16_t x1222 = 28;
uint8_t x1246 = 5U;
static uint16_t x1248 = UINT16_MAX;
static int32_t t175 = 405874434;
int8_t x1271 = INT8_MIN;
volatile int32_t x1273 = INT32_MIN;
int16_t x1275 = INT16_MIN;
static int64_t x1277 = INT64_MIN;
static uint64_t x1297 = 260526242354482LLU;
static volatile int32_t x1313 = INT32_MAX;
int32_t x1335 = INT32_MIN;
static int8_t x1336 = -39;
int32_t x1338 = -828;
int8_t x1346 = INT8_MAX;
volatile int64_t x1353 = INT64_MAX;
static int16_t x1357 = INT16_MAX;
uint16_t x1367 = 3062U;
int16_t x1372 = -49;
uint64_t x1377 = 157129354LLU;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int32_t x2 = -33;
	volatile int16_t x3 = INT16_MAX;
	uint32_t x4 = 4186849U;
	static volatile int32_t t0 = 22729192;

    t0 = (x1<=(x2/(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x10 = INT32_MIN;
	int8_t x11 = -17;
	volatile int64_t x12 = 464420545LL;
	int32_t t1 = -6;

    t1 = (x9<=(x10/(x11<=x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = 1418;
	int32_t x14 = 1010307508;
	uint8_t x15 = UINT8_MAX;
	uint32_t x16 = 45009U;
	volatile int32_t t2 = -165058833;

    t2 = (x13<=(x14/(x15<=x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x30 = UINT8_MAX;
	volatile int32_t t3 = 96248695;

    t3 = (x29<=(x30/(x31<=x32)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x37 = -14LL;
	volatile int64_t x38 = INT64_MIN;
	uint8_t x39 = UINT8_MAX;
	volatile uint8_t x40 = UINT8_MAX;

    t4 = (x37<=(x38/(x39<=x40)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	int32_t x42 = 1;
	int32_t x43 = -15517628;
	static uint64_t x44 = UINT64_MAX;
	volatile int32_t t5 = 1;

    t5 = (x41<=(x42/(x43<=x44)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x53 = 17U;
	volatile uint16_t x54 = 198U;
	uint8_t x55 = 14U;
	static volatile uint64_t x56 = UINT64_MAX;
	int32_t t6 = -110;

    t6 = (x53<=(x54/(x55<=x56)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x57 = -257686;
	int8_t x58 = INT8_MIN;
	int32_t x59 = -79144954;

    t7 = (x57<=(x58/(x59<=x60)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x77 = 2039423365U;
	int64_t x79 = INT64_MIN;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t8 = 326;

    t8 = (x77<=(x78/(x79<=x80)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x86 = 9531;
	int32_t x87 = -68;
	int32_t t9 = 1137375;

    t9 = (x85<=(x86/(x87<=x88)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x91 = INT8_MIN;
	int8_t x92 = -1;
	int32_t t10 = 52;

    t10 = (x89<=(x90/(x91<=x92)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x101 = -3072272LL;
	int8_t x102 = -5;
	uint16_t x103 = 13U;
	static int32_t t11 = 114436;

    t11 = (x101<=(x102/(x103<=x104)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x109 = INT64_MAX;
	static int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MIN;
	int32_t x112 = INT32_MIN;

    t12 = (x109<=(x110/(x111<=x112)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x113 = 500LLU;
	uint64_t x114 = UINT64_MAX;
	int16_t x116 = -1;
	static int32_t t13 = 34646;

    t13 = (x113<=(x114/(x115<=x116)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x129 = -1;
	volatile uint8_t x130 = UINT8_MAX;
	int64_t x132 = 158172616788LL;
	static volatile int32_t t14 = 0;

    t14 = (x129<=(x130/(x131<=x132)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x137 = 1;
	int8_t x138 = 1;
	int64_t x139 = -1LL;
	uint32_t x140 = 102699U;

    t15 = (x137<=(x138/(x139<=x140)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x145 = -1;
	int8_t x147 = 4;
	uint64_t x148 = 8LLU;
	int32_t t16 = -1727972;

    t16 = (x145<=(x146/(x147<=x148)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x153 = INT16_MIN;
	int16_t x154 = -1;
	int8_t x156 = INT8_MIN;
	static int32_t t17 = -514;

    t17 = (x153<=(x154/(x155<=x156)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x157 = UINT16_MAX;
	volatile uint64_t x158 = 56LLU;
	static volatile uint8_t x159 = UINT8_MAX;
	int32_t t18 = 15;

    t18 = (x157<=(x158/(x159<=x160)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x169 = INT8_MAX;
	static int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MAX;
	volatile int32_t t19 = -3217;

    t19 = (x169<=(x170/(x171<=x172)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x173 = 206U;
	uint32_t x174 = 5088668U;
	uint8_t x175 = 14U;
	uint32_t x176 = 169614535U;
	static volatile int32_t t20 = -21042;

    t20 = (x173<=(x174/(x175<=x176)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x177 = 5813669LL;
	static uint32_t x179 = 3U;
	int8_t x180 = INT8_MIN;
	int32_t t21 = 1320582;

    t21 = (x177<=(x178/(x179<=x180)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x182 = 23U;
	int64_t x183 = INT64_MIN;
	int32_t x184 = -1;
	volatile int32_t t22 = -498;

    t22 = (x181<=(x182/(x183<=x184)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x193 = INT32_MIN;
	int8_t x194 = INT8_MIN;
	int32_t x195 = -1;
	volatile int64_t x196 = -1LL;
	static volatile int32_t t23 = 132;

    t23 = (x193<=(x194/(x195<=x196)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x201 = -741893;
	uint16_t x202 = 0U;
	uint16_t x203 = UINT16_MAX;
	volatile uint16_t x204 = UINT16_MAX;
	int32_t t24 = 2186;

    t24 = (x201<=(x202/(x203<=x204)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x205 = INT32_MIN;
	int8_t x206 = INT8_MIN;
	volatile uint64_t x207 = 3090997041LLU;
	int64_t x208 = INT64_MAX;
	int32_t t25 = -4059;

    t25 = (x205<=(x206/(x207<=x208)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x209 = INT16_MIN;
	int16_t x210 = -1;
	volatile uint64_t x211 = 2877303702LLU;
	static int32_t x212 = -57202;
	int32_t t26 = -661317700;

    t26 = (x209<=(x210/(x211<=x212)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x213 = INT64_MAX;
	uint8_t x214 = UINT8_MAX;
	int32_t x215 = INT32_MIN;
	uint8_t x216 = 3U;
	static int32_t t27 = 22;

    t27 = (x213<=(x214/(x215<=x216)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x218 = 8076600843914LLU;
	int16_t x219 = -1;
	volatile int32_t t28 = 27983335;

    t28 = (x217<=(x218/(x219<=x220)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x225 = -315051;
	uint8_t x226 = UINT8_MAX;
	static int64_t x228 = INT64_MAX;
	volatile int32_t t29 = -1758838;

    t29 = (x225<=(x226/(x227<=x228)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x230 = INT32_MIN;
	static volatile uint32_t x231 = 33U;
	static int32_t x232 = INT32_MIN;
	int32_t t30 = 331;

    t30 = (x229<=(x230/(x231<=x232)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x233 = INT64_MIN;
	int32_t x234 = -1;
	int64_t x235 = -1LL;
	int8_t x236 = -1;
	volatile int32_t t31 = 195263;

    t31 = (x233<=(x234/(x235<=x236)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x237 = 3LLU;
	uint16_t x238 = 27429U;
	static int32_t x240 = -1;
	volatile int32_t t32 = 3956354;

    t32 = (x237<=(x238/(x239<=x240)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x241 = -49;
	static uint8_t x242 = UINT8_MAX;
	static int16_t x243 = -1;
	static volatile uint16_t x244 = 50U;
	int32_t t33 = 335575094;

    t33 = (x241<=(x242/(x243<=x244)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x245 = UINT8_MAX;
	uint64_t x246 = UINT64_MAX;
	uint16_t x247 = 10U;
	static uint8_t x248 = UINT8_MAX;

    t34 = (x245<=(x246/(x247<=x248)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x257 = 0;
	int8_t x258 = INT8_MAX;
	volatile int32_t x259 = INT32_MIN;
	int16_t x260 = 951;

    t35 = (x257<=(x258/(x259<=x260)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x261 = INT8_MAX;
	volatile int16_t x262 = INT16_MIN;
	uint64_t x263 = 7520709LLU;
	int32_t x264 = -1;

    t36 = (x261<=(x262/(x263<=x264)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x281 = INT16_MIN;
	int8_t x283 = -60;
	static int16_t x284 = -1;
	static int32_t t37 = 0;

    t37 = (x281<=(x282/(x283<=x284)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x293 = -1;
	int32_t x294 = INT32_MIN;
	static int64_t x295 = -3LL;
	uint8_t x296 = 4U;
	int32_t t38 = 3;

    t38 = (x293<=(x294/(x295<=x296)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x297 = 537;
	int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	volatile int32_t t39 = -484;

    t39 = (x297<=(x298/(x299<=x300)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x301 = 2U;
	uint32_t x302 = 3490U;
	volatile int32_t x304 = -9361;
	int32_t t40 = 945;

    t40 = (x301<=(x302/(x303<=x304)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x309 = -1LL;
	int8_t x310 = INT8_MIN;
	static uint64_t x311 = 239084LLU;
	int32_t x312 = INT32_MIN;
	int32_t t41 = -457;

    t41 = (x309<=(x310/(x311<=x312)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x314 = UINT64_MAX;
	int32_t x315 = -23799;
	int32_t x316 = INT32_MAX;
	volatile int32_t t42 = -3578456;

    t42 = (x313<=(x314/(x315<=x316)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x325 = UINT64_MAX;
	int32_t x326 = INT32_MAX;
	volatile int8_t x328 = INT8_MIN;

    t43 = (x325<=(x326/(x327<=x328)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x334 = 51LL;
	int16_t x335 = INT16_MIN;
	volatile uint8_t x336 = 0U;
	volatile int32_t t44 = -2;

    t44 = (x333<=(x334/(x335<=x336)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x341 = UINT8_MAX;
	static uint64_t x343 = 26515LLU;
	int32_t x344 = -8308463;
	int32_t t45 = -1;

    t45 = (x341<=(x342/(x343<=x344)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x345 = 89U;
	int32_t x346 = INT32_MAX;
	uint32_t x347 = 5179U;
	volatile int32_t x348 = -1999;
	int32_t t46 = -219031524;

    t46 = (x345<=(x346/(x347<=x348)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x349 = 612952U;
	int64_t x351 = -369656LL;
	volatile uint16_t x352 = 0U;

    t47 = (x349<=(x350/(x351<=x352)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x361 = 116351680800242837LL;
	static uint8_t x364 = UINT8_MAX;

    t48 = (x361<=(x362/(x363<=x364)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x370 = INT16_MAX;
	volatile int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t49 = 35871654;

    t49 = (x369<=(x370/(x371<=x372)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x374 = 3056U;
	int64_t x375 = INT64_MIN;
	static volatile int64_t x376 = -98964LL;
	int32_t t50 = -4;

    t50 = (x373<=(x374/(x375<=x376)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x386 = -1;
	uint64_t x387 = 315022971152394869LLU;
	int64_t x388 = INT64_MIN;
	volatile int32_t t51 = -3468;

    t51 = (x385<=(x386/(x387<=x388)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x390 = INT16_MIN;
	int64_t x391 = INT64_MIN;
	volatile uint16_t x392 = 1727U;
	volatile int32_t t52 = -627;

    t52 = (x389<=(x390/(x391<=x392)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x393 = UINT8_MAX;
	uint32_t x394 = 0U;
	int32_t x395 = INT32_MIN;
	volatile int32_t t53 = -1849585;

    t53 = (x393<=(x394/(x395<=x396)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x398 = -1LL;
	volatile int32_t x399 = INT32_MIN;
	static int32_t x400 = -4728392;
	volatile int32_t t54 = 7;

    t54 = (x397<=(x398/(x399<=x400)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x401 = -1;
	static uint32_t x402 = UINT32_MAX;
	volatile int32_t x403 = INT32_MIN;
	int64_t x404 = -1LL;
	int32_t t55 = -265772252;

    t55 = (x401<=(x402/(x403<=x404)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x405 = INT32_MIN;
	volatile int32_t x406 = INT32_MIN;
	volatile uint64_t x407 = 561580906443997796LLU;
	volatile int32_t t56 = -8130058;

    t56 = (x405<=(x406/(x407<=x408)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x410 = -332;
	int64_t x411 = -17387726167887LL;
	int32_t x412 = INT32_MIN;
	static volatile int32_t t57 = 56556;

    t57 = (x409<=(x410/(x411<=x412)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x417 = 28U;
	int64_t x418 = INT64_MIN;
	int32_t x419 = INT32_MIN;
	volatile uint32_t x420 = UINT32_MAX;
	int32_t t58 = 2018844;

    t58 = (x417<=(x418/(x419<=x420)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint32_t x421 = 88U;
	static volatile int32_t x422 = INT32_MIN;
	int8_t x423 = INT8_MIN;
	static int8_t x424 = 0;
	int32_t t59 = 146061;

    t59 = (x421<=(x422/(x423<=x424)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x437 = -3LL;
	static volatile int32_t t60 = 13398786;

    t60 = (x437<=(x438/(x439<=x440)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x446 = 870LL;
	volatile int8_t x447 = -1;

    t61 = (x445<=(x446/(x447<=x448)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x449 = -31423228911083876LL;
	uint8_t x450 = 1U;
	uint16_t x451 = 12U;
	volatile uint16_t x452 = 20046U;
	volatile int32_t t62 = -17039555;

    t62 = (x449<=(x450/(x451<=x452)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x457 = INT8_MIN;
	uint16_t x458 = UINT16_MAX;
	int8_t x459 = -1;

    t63 = (x457<=(x458/(x459<=x460)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x461 = INT32_MIN;
	int32_t x462 = INT32_MAX;
	static volatile int16_t x463 = INT16_MIN;
	uint8_t x464 = UINT8_MAX;
	int32_t t64 = -103;

    t64 = (x461<=(x462/(x463<=x464)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x465 = UINT32_MAX;
	int16_t x466 = -7;
	static int16_t x468 = -1;
	int32_t t65 = 72;

    t65 = (x465<=(x466/(x467<=x468)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x477 = INT64_MIN;
	static int8_t x478 = 0;
	int8_t x479 = INT8_MIN;
	static int64_t x480 = INT64_MAX;
	volatile int32_t t66 = 1;

    t66 = (x477<=(x478/(x479<=x480)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x490 = 172300222729LL;
	static uint16_t x491 = 113U;
	uint16_t x492 = UINT16_MAX;

    t67 = (x489<=(x490/(x491<=x492)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x498 = INT16_MIN;
	uint32_t x499 = 2390U;
	volatile int32_t t68 = -18;

    t68 = (x497<=(x498/(x499<=x500)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x502 = -1;
	uint16_t x503 = 32U;
	int64_t x504 = INT64_MAX;

    t69 = (x501<=(x502/(x503<=x504)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x517 = 29U;
	int32_t x518 = INT32_MIN;
	uint64_t x519 = 1108176543892178100LLU;
	int32_t x520 = INT32_MIN;
	static int32_t t70 = 225;

    t70 = (x517<=(x518/(x519<=x520)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x521 = INT16_MIN;
	uint64_t x524 = UINT64_MAX;
	volatile int32_t t71 = 1;

    t71 = (x521<=(x522/(x523<=x524)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x538 = -1;
	int16_t x540 = INT16_MAX;
	int32_t t72 = 397514343;

    t72 = (x537<=(x538/(x539<=x540)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x543 = -1;
	int8_t x544 = -1;
	volatile int32_t t73 = -19317;

    t73 = (x541<=(x542/(x543<=x544)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x545 = -5292027;
	static uint16_t x546 = 3U;
	static int32_t x547 = -100;
	uint8_t x548 = UINT8_MAX;
	int32_t t74 = -1825999;

    t74 = (x545<=(x546/(x547<=x548)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x549 = INT16_MAX;
	uint8_t x550 = 61U;
	static int16_t x551 = INT16_MIN;
	int8_t x552 = INT8_MIN;

    t75 = (x549<=(x550/(x551<=x552)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x553 = INT16_MAX;
	volatile int8_t x554 = 57;
	int16_t x555 = INT16_MIN;
	volatile int32_t t76 = 5;

    t76 = (x553<=(x554/(x555<=x556)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x561 = 6;
	volatile int8_t x562 = -26;
	int32_t x563 = INT32_MIN;
	volatile uint8_t x564 = 0U;
	static int32_t t77 = -32072823;

    t77 = (x561<=(x562/(x563<=x564)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x565 = INT64_MAX;
	int16_t x568 = INT16_MAX;
	static int32_t t78 = 1652071;

    t78 = (x565<=(x566/(x567<=x568)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x573 = UINT8_MAX;
	int8_t x574 = -1;
	volatile uint16_t x576 = UINT16_MAX;
	volatile int32_t t79 = -946945;

    t79 = (x573<=(x574/(x575<=x576)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x577 = -1054;
	int64_t x578 = INT64_MIN;
	volatile uint32_t x579 = 1982U;
	static uint16_t x580 = UINT16_MAX;
	static volatile int32_t t80 = -74639692;

    t80 = (x577<=(x578/(x579<=x580)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x589 = 8969;
	volatile int16_t x590 = INT16_MAX;
	int16_t x591 = -12;
	int32_t x592 = 0;
	volatile int32_t t81 = -241661808;

    t81 = (x589<=(x590/(x591<=x592)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x593 = -1;
	uint32_t x594 = 1U;
	uint32_t x596 = UINT32_MAX;
	volatile int32_t t82 = -1;

    t82 = (x593<=(x594/(x595<=x596)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x597 = -1;
	uint32_t x598 = UINT32_MAX;
	uint64_t x600 = UINT64_MAX;
	static volatile int32_t t83 = 49801752;

    t83 = (x597<=(x598/(x599<=x600)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x601 = -1LL;
	int16_t x602 = 0;
	int8_t x603 = 5;
	uint16_t x604 = 2305U;
	int32_t t84 = 15321;

    t84 = (x601<=(x602/(x603<=x604)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x605 = INT32_MAX;
	static int32_t x606 = INT32_MIN;
	int8_t x607 = -1;
	volatile int32_t t85 = -22;

    t85 = (x605<=(x606/(x607<=x608)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x617 = -1;
	uint32_t x618 = UINT32_MAX;
	int32_t x619 = -202;
	uint8_t x620 = UINT8_MAX;
	volatile int32_t t86 = 9;

    t86 = (x617<=(x618/(x619<=x620)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x621 = UINT32_MAX;
	uint64_t x622 = 1LLU;
	int32_t x623 = -489359047;
	int64_t x624 = -3LL;
	volatile int32_t t87 = -1;

    t87 = (x621<=(x622/(x623<=x624)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x633 = INT8_MIN;
	int8_t x634 = INT8_MIN;
	volatile int32_t x635 = INT32_MIN;
	int8_t x636 = INT8_MIN;

    t88 = (x633<=(x634/(x635<=x636)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x637 = 63U;
	int32_t x638 = INT32_MIN;
	uint64_t x639 = UINT64_MAX;
	uint64_t x640 = UINT64_MAX;
	int32_t t89 = 1036640;

    t89 = (x637<=(x638/(x639<=x640)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x641 = INT64_MAX;
	int32_t x643 = INT32_MIN;
	uint16_t x644 = 14272U;
	volatile int32_t t90 = -2;

    t90 = (x641<=(x642/(x643<=x644)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	int32_t x646 = -14;
	int16_t x647 = 73;
	int32_t x648 = 43059;

    t91 = (x645<=(x646/(x647<=x648)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x649 = UINT16_MAX;
	int8_t x650 = INT8_MIN;
	int8_t x651 = -1;
	int64_t x652 = INT64_MAX;

    t92 = (x649<=(x650/(x651<=x652)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x662 = UINT32_MAX;
	uint64_t x663 = 7178270LLU;
	static volatile uint64_t x664 = 606942156250059LLU;
	int32_t t93 = 13698;

    t93 = (x661<=(x662/(x663<=x664)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x671 = 6124416;
	uint64_t x672 = UINT64_MAX;
	static volatile int32_t t94 = 5326;

    t94 = (x669<=(x670/(x671<=x672)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x673 = INT16_MIN;
	volatile uint8_t x674 = 19U;
	uint32_t x675 = 3509U;
	int32_t x676 = -9;
	volatile int32_t t95 = 394460;

    t95 = (x673<=(x674/(x675<=x676)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x685 = INT64_MAX;
	uint64_t x686 = UINT64_MAX;
	int64_t x687 = 93LL;
	static int32_t t96 = -72;

    t96 = (x685<=(x686/(x687<=x688)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x689 = UINT32_MAX;
	volatile int64_t x690 = INT64_MIN;
	volatile int32_t x692 = INT32_MAX;
	volatile int32_t t97 = 111645465;

    t97 = (x689<=(x690/(x691<=x692)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x694 = 1;
	int32_t x695 = INT32_MIN;
	int32_t t98 = 478;

    t98 = (x693<=(x694/(x695<=x696)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x698 = INT8_MIN;
	int32_t x700 = INT32_MAX;
	volatile int32_t t99 = -696;

    t99 = (x697<=(x698/(x699<=x700)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x717 = -1LL;
	static int32_t x718 = INT32_MAX;
	int64_t x719 = -1LL;
	int64_t x720 = 52915273979LL;
	volatile int32_t t100 = -4;

    t100 = (x717<=(x718/(x719<=x720)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x733 = INT64_MIN;
	uint32_t x735 = 1U;
	int32_t t101 = 44505;

    t101 = (x733<=(x734/(x735<=x736)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x738 = -63197;
	int16_t x739 = -1;
	static uint32_t x740 = UINT32_MAX;
	static int32_t t102 = 248;

    t102 = (x737<=(x738/(x739<=x740)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x741 = INT32_MIN;
	int32_t x742 = -1;
	int8_t x743 = -1;
	volatile int32_t t103 = -178068562;

    t103 = (x741<=(x742/(x743<=x744)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x746 = -1;
	int32_t x747 = INT32_MIN;
	int64_t x748 = -1LL;
	static int32_t t104 = -11931;

    t104 = (x745<=(x746/(x747<=x748)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x749 = INT32_MIN;
	static int64_t x750 = INT64_MIN;
	int32_t x752 = 8469814;

    t105 = (x749<=(x750/(x751<=x752)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x753 = 1;
	int32_t x754 = -48;
	int16_t x756 = -1;
	volatile int32_t t106 = -94363564;

    t106 = (x753<=(x754/(x755<=x756)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x762 = UINT16_MAX;
	int32_t x763 = -1;
	volatile uint8_t x764 = 85U;
	int32_t t107 = 714840;

    t107 = (x761<=(x762/(x763<=x764)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x769 = UINT32_MAX;
	uint32_t x772 = 972U;

    t108 = (x769<=(x770/(x771<=x772)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x775 = UINT64_MAX;
	int32_t x776 = -1;
	int32_t t109 = -486;

    t109 = (x773<=(x774/(x775<=x776)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x777 = 7675349LLU;
	uint64_t x779 = 459451090813665309LLU;
	volatile int32_t t110 = 2715;

    t110 = (x777<=(x778/(x779<=x780)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x781 = 123191871342806LLU;
	uint32_t x782 = 410U;
	volatile int8_t x783 = INT8_MIN;
	uint8_t x784 = 2U;
	static volatile int32_t t111 = -1;

    t111 = (x781<=(x782/(x783<=x784)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x785 = 2581640;
	int64_t x788 = INT64_MAX;
	int32_t t112 = 41;

    t112 = (x785<=(x786/(x787<=x788)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x789 = 0U;
	int32_t x790 = -202028;
	int32_t x791 = INT32_MIN;
	int32_t x792 = 804759;
	volatile int32_t t113 = 221103626;

    t113 = (x789<=(x790/(x791<=x792)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x793 = INT32_MIN;
	int16_t x794 = INT16_MIN;
	volatile int64_t x795 = INT64_MIN;
	volatile uint32_t x796 = UINT32_MAX;
	static volatile int32_t t114 = 7750;

    t114 = (x793<=(x794/(x795<=x796)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x797 = -1597273;
	int8_t x798 = INT8_MIN;
	int8_t x799 = 1;
	static volatile uint8_t x800 = 2U;
	int32_t t115 = -1055497975;

    t115 = (x797<=(x798/(x799<=x800)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x805 = INT16_MIN;
	int8_t x806 = -1;
	volatile int8_t x807 = INT8_MIN;
	int32_t x808 = INT32_MAX;

    t116 = (x805<=(x806/(x807<=x808)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x809 = 14U;
	uint16_t x810 = 18503U;
	int8_t x811 = 0;
	uint64_t x812 = UINT64_MAX;

    t117 = (x809<=(x810/(x811<=x812)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x817 = INT32_MIN;
	int64_t x818 = -1LL;
	static int32_t x819 = INT32_MIN;
	static int64_t x820 = 5093775492319751LL;

    t118 = (x817<=(x818/(x819<=x820)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x825 = 29;
	int8_t x826 = INT8_MIN;
	volatile uint8_t x828 = 127U;
	int32_t t119 = 57781624;

    t119 = (x825<=(x826/(x827<=x828)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x831 = 1U;
	static uint8_t x832 = 2U;

    t120 = (x829<=(x830/(x831<=x832)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x833 = 2U;
	int64_t x834 = -1LL;
	uint32_t x836 = UINT32_MAX;
	static int32_t t121 = 90716;

    t121 = (x833<=(x834/(x835<=x836)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x837 = -1;
	volatile int32_t x838 = -122;
	int32_t x839 = INT32_MIN;
	int64_t x840 = INT64_MAX;
	volatile int32_t t122 = -1;

    t122 = (x837<=(x838/(x839<=x840)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x845 = INT8_MIN;
	int32_t x848 = INT32_MAX;
	static int32_t t123 = 655;

    t123 = (x845<=(x846/(x847<=x848)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x862 = INT32_MIN;
	static int64_t x863 = -1LL;
	int32_t t124 = 328187192;

    t124 = (x861<=(x862/(x863<=x864)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x865 = INT8_MAX;
	uint64_t x866 = 269273511886146401LLU;
	int64_t x867 = INT64_MIN;
	int32_t x868 = INT32_MIN;
	int32_t t125 = 1;

    t125 = (x865<=(x866/(x867<=x868)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x869 = 11103LL;
	volatile int64_t x870 = INT64_MIN;
	int32_t x871 = -35365879;
	int64_t x872 = -1LL;

    t126 = (x869<=(x870/(x871<=x872)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x873 = UINT16_MAX;
	static int8_t x874 = INT8_MIN;
	uint32_t x875 = 65U;
	int16_t x876 = -15611;
	int32_t t127 = 52;

    t127 = (x873<=(x874/(x875<=x876)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x877 = UINT8_MAX;
	int32_t x878 = -97374;
	int64_t x879 = 43277LL;
	uint32_t x880 = 719642U;

    t128 = (x877<=(x878/(x879<=x880)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x881 = -1;
	int64_t x882 = -704563LL;
	uint8_t x883 = 15U;
	int32_t x884 = 28416;

    t129 = (x881<=(x882/(x883<=x884)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x886 = 125U;
	static int32_t x887 = -1;
	uint64_t x888 = UINT64_MAX;

    t130 = (x885<=(x886/(x887<=x888)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x893 = UINT32_MAX;
	volatile int64_t x894 = INT64_MIN;
	static int32_t x895 = INT32_MIN;
	int32_t t131 = -391599;

    t131 = (x893<=(x894/(x895<=x896)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x913 = -12;
	int64_t x914 = INT64_MAX;
	uint32_t x915 = 1146U;
	int8_t x916 = INT8_MIN;
	int32_t t132 = 6879;

    t132 = (x913<=(x914/(x915<=x916)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x917 = 6746562433425073825LLU;
	uint32_t x919 = 860421U;
	int32_t x920 = INT32_MIN;
	int32_t t133 = 28526;

    t133 = (x917<=(x918/(x919<=x920)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x929 = INT16_MIN;
	volatile uint16_t x930 = 7U;
	uint16_t x931 = 22606U;
	uint64_t x932 = UINT64_MAX;
	int32_t t134 = 1663;

    t134 = (x929<=(x930/(x931<=x932)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x941 = 5U;
	static uint32_t x944 = UINT32_MAX;
	volatile int32_t t135 = -185919034;

    t135 = (x941<=(x942/(x943<=x944)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x945 = -1;
	static int32_t x946 = 0;
	int8_t x947 = -1;
	uint8_t x948 = 57U;
	volatile int32_t t136 = 6867;

    t136 = (x945<=(x946/(x947<=x948)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x958 = INT16_MIN;
	uint8_t x959 = 76U;
	volatile int32_t t137 = -3;

    t137 = (x957<=(x958/(x959<=x960)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x965 = INT32_MIN;
	static int64_t x966 = -600188054023LL;
	int32_t x968 = INT32_MAX;
	static volatile int32_t t138 = -3;

    t138 = (x965<=(x966/(x967<=x968)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x969 = INT32_MIN;
	volatile int8_t x972 = 16;
	static int32_t t139 = -38;

    t139 = (x969<=(x970/(x971<=x972)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x973 = INT64_MIN;
	int8_t x974 = -1;
	int8_t x975 = INT8_MIN;
	uint16_t x976 = 1U;

    t140 = (x973<=(x974/(x975<=x976)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x977 = 2U;
	int32_t x979 = INT32_MIN;
	int32_t t141 = 123;

    t141 = (x977<=(x978/(x979<=x980)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x983 = INT8_MIN;
	static int16_t x984 = INT16_MAX;
	int32_t t142 = -99425999;

    t142 = (x981<=(x982/(x983<=x984)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x993 = -1;
	uint64_t x994 = 521617910115949105LLU;
	int64_t x995 = -356175173481623129LL;
	static int8_t x996 = INT8_MIN;
	int32_t t143 = 15103;

    t143 = (x993<=(x994/(x995<=x996)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x1002 = -60;
	static volatile int16_t x1004 = -387;
	int32_t t144 = 0;

    t144 = (x1001<=(x1002/(x1003<=x1004)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x1009 = UINT8_MAX;
	volatile uint64_t x1010 = 44LLU;
	static volatile int64_t x1011 = INT64_MIN;
	uint16_t x1012 = 1111U;
	volatile int32_t t145 = 124427244;

    t145 = (x1009<=(x1010/(x1011<=x1012)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x1014 = 35;
	int8_t x1015 = -1;
	volatile int32_t t146 = 472327;

    t146 = (x1013<=(x1014/(x1015<=x1016)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x1017 = INT64_MIN;
	int32_t x1018 = 1009;
	uint64_t x1019 = UINT64_MAX;
	int8_t x1020 = -1;
	static int32_t t147 = 1;

    t147 = (x1017<=(x1018/(x1019<=x1020)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1021 = INT32_MAX;
	int64_t x1022 = INT64_MAX;
	uint32_t x1024 = UINT32_MAX;
	int32_t t148 = 5770002;

    t148 = (x1021<=(x1022/(x1023<=x1024)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x1025 = -1LL;
	int16_t x1026 = INT16_MIN;
	static int16_t x1027 = -1;
	int32_t t149 = 2121;

    t149 = (x1025<=(x1026/(x1027<=x1028)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1029 = -3;
	uint64_t x1030 = UINT64_MAX;
	int16_t x1031 = INT16_MIN;
	int32_t x1032 = INT32_MAX;
	int32_t t150 = 25700;

    t150 = (x1029<=(x1030/(x1031<=x1032)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x1037 = INT32_MIN;
	volatile int32_t x1039 = INT32_MIN;
	int32_t t151 = 223;

    t151 = (x1037<=(x1038/(x1039<=x1040)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1045 = UINT64_MAX;
	static uint64_t x1046 = UINT64_MAX;
	volatile uint64_t x1047 = 4611394517620203LLU;
	static volatile int32_t t152 = -60;

    t152 = (x1045<=(x1046/(x1047<=x1048)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1054 = 13684919;
	volatile uint8_t x1055 = UINT8_MAX;
	volatile int32_t t153 = -43868809;

    t153 = (x1053<=(x1054/(x1055<=x1056)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1057 = INT32_MIN;
	uint64_t x1058 = 55200441577LLU;
	static volatile int32_t x1059 = INT32_MIN;
	uint64_t x1060 = UINT64_MAX;

    t154 = (x1057<=(x1058/(x1059<=x1060)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x1061 = 29U;
	static int8_t x1062 = -1;
	volatile uint64_t x1064 = UINT64_MAX;
	static volatile int32_t t155 = 1010327;

    t155 = (x1061<=(x1062/(x1063<=x1064)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1069 = -28;
	uint64_t x1070 = 4351735765573173LLU;
	int16_t x1071 = INT16_MIN;
	int16_t x1072 = INT16_MIN;

    t156 = (x1069<=(x1070/(x1071<=x1072)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1081 = -1;
	int32_t x1082 = -1;
	volatile int64_t x1084 = INT64_MAX;
	static int32_t t157 = -1945;

    t157 = (x1081<=(x1082/(x1083<=x1084)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x1085 = 3240LL;
	int32_t x1087 = -1;
	volatile int8_t x1088 = INT8_MAX;
	int32_t t158 = 1605269;

    t158 = (x1085<=(x1086/(x1087<=x1088)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1093 = -1;
	uint32_t x1094 = 0U;
	int8_t x1095 = INT8_MIN;
	volatile int64_t x1096 = 146791995102255673LL;
	int32_t t159 = 97070;

    t159 = (x1093<=(x1094/(x1095<=x1096)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x1109 = -1;
	int8_t x1110 = INT8_MIN;
	volatile int64_t x1111 = -136474730390910LL;
	int32_t x1112 = -1;
	static int32_t t160 = -73511017;

    t160 = (x1109<=(x1110/(x1111<=x1112)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x1116 = INT64_MAX;
	volatile int32_t t161 = 13717574;

    t161 = (x1113<=(x1114/(x1115<=x1116)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1117 = INT32_MIN;
	int8_t x1118 = -1;
	int32_t t162 = 54027511;

    t162 = (x1117<=(x1118/(x1119<=x1120)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1125 = INT32_MAX;
	int64_t x1126 = -1LL;
	static int8_t x1127 = 4;
	uint32_t x1128 = 6017U;

    t163 = (x1125<=(x1126/(x1127<=x1128)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1129 = -3;
	int8_t x1130 = 1;
	static int64_t x1131 = INT64_MIN;
	volatile int8_t x1132 = INT8_MAX;
	int32_t t164 = 26321069;

    t164 = (x1129<=(x1130/(x1131<=x1132)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1137 = 283;
	volatile int16_t x1139 = -1;
	static uint16_t x1140 = 3351U;
	volatile int32_t t165 = 12;

    t165 = (x1137<=(x1138/(x1139<=x1140)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x1141 = 0U;
	int32_t x1142 = INT32_MIN;
	int8_t x1143 = INT8_MIN;
	int8_t x1144 = INT8_MIN;

    t166 = (x1141<=(x1142/(x1143<=x1144)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1178 = 1399U;
	uint32_t x1180 = UINT32_MAX;
	volatile int32_t t167 = 407644601;

    t167 = (x1177<=(x1178/(x1179<=x1180)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1181 = INT64_MAX;
	volatile int8_t x1182 = INT8_MIN;
	uint32_t x1183 = 1U;
	static int8_t x1184 = INT8_MIN;
	int32_t t168 = 34970;

    t168 = (x1181<=(x1182/(x1183<=x1184)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1186 = 8;
	uint16_t x1188 = UINT16_MAX;
	volatile int32_t t169 = -25;

    t169 = (x1185<=(x1186/(x1187<=x1188)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1189 = -1;
	int8_t x1190 = -1;
	static int16_t x1191 = INT16_MIN;
	int8_t x1192 = -1;
	int32_t t170 = 517746210;

    t170 = (x1189<=(x1190/(x1191<=x1192)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x1219 = -2765346211346LL;
	int16_t x1220 = INT16_MIN;

    t171 = (x1217<=(x1218/(x1219<=x1220)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1223 = INT64_MIN;
	static uint16_t x1224 = 1033U;
	int32_t t172 = 495;

    t172 = (x1221<=(x1222/(x1223<=x1224)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1233 = INT64_MAX;
	int8_t x1234 = -46;
	static int32_t x1235 = INT32_MIN;
	uint16_t x1236 = 2U;
	static volatile int32_t t173 = -15119;

    t173 = (x1233<=(x1234/(x1235<=x1236)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1241 = INT32_MIN;
	static int16_t x1242 = INT16_MIN;
	volatile int16_t x1243 = -34;
	uint16_t x1244 = 868U;
	int32_t t174 = 1;

    t174 = (x1241<=(x1242/(x1243<=x1244)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1245 = UINT64_MAX;
	static int64_t x1247 = -98783398LL;

    t175 = (x1245<=(x1246/(x1247<=x1248)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1261 = 21131520LLU;
	uint8_t x1262 = 3U;
	uint64_t x1263 = 17LLU;
	int16_t x1264 = INT16_MIN;
	static volatile int32_t t176 = -482799313;

    t176 = (x1261<=(x1262/(x1263<=x1264)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1269 = 27755168669694610LLU;
	static int32_t x1270 = -101371961;
	static uint16_t x1272 = 1723U;
	volatile int32_t t177 = 0;

    t177 = (x1269<=(x1270/(x1271<=x1272)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1274 = 1LLU;
	volatile int8_t x1276 = 0;
	int32_t t178 = 1808;

    t178 = (x1273<=(x1274/(x1275<=x1276)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1278 = 0LLU;
	uint8_t x1279 = 18U;
	uint64_t x1280 = 6451766658615320566LLU;
	static volatile int32_t t179 = -16224361;

    t179 = (x1277<=(x1278/(x1279<=x1280)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1281 = -1;
	int32_t x1282 = INT32_MIN;
	int32_t x1283 = -422996355;
	int16_t x1284 = INT16_MIN;
	volatile int32_t t180 = -1114923;

    t180 = (x1281<=(x1282/(x1283<=x1284)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1289 = 1U;
	static uint16_t x1290 = UINT16_MAX;
	int64_t x1291 = -1LL;
	volatile int8_t x1292 = -1;
	volatile int32_t t181 = 384;

    t181 = (x1289<=(x1290/(x1291<=x1292)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1293 = INT32_MIN;
	static int16_t x1294 = INT16_MAX;
	int8_t x1295 = INT8_MIN;
	volatile uint8_t x1296 = 0U;
	int32_t t182 = 9;

    t182 = (x1293<=(x1294/(x1295<=x1296)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x1298 = -1;
	int8_t x1299 = INT8_MAX;
	static volatile uint64_t x1300 = 129726934707975451LLU;
	volatile int32_t t183 = 15;

    t183 = (x1297<=(x1298/(x1299<=x1300)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1314 = INT16_MIN;
	uint8_t x1315 = UINT8_MAX;
	static int64_t x1316 = 304410613906LL;
	int32_t t184 = -111;

    t184 = (x1313<=(x1314/(x1315<=x1316)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x1317 = UINT32_MAX;
	int32_t x1318 = -1;
	int32_t x1319 = INT32_MIN;
	int64_t x1320 = 272897LL;
	int32_t t185 = 1;

    t185 = (x1317<=(x1318/(x1319<=x1320)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1329 = UINT32_MAX;
	volatile uint16_t x1330 = UINT16_MAX;
	uint32_t x1331 = UINT32_MAX;
	volatile int16_t x1332 = -1;
	volatile int32_t t186 = 1889801;

    t186 = (x1329<=(x1330/(x1331<=x1332)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1333 = INT8_MIN;
	int8_t x1334 = -1;
	int32_t t187 = 34895;

    t187 = (x1333<=(x1334/(x1335<=x1336)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1337 = -1;
	int32_t x1339 = -1;
	volatile int8_t x1340 = -1;
	int32_t t188 = 5105449;

    t188 = (x1337<=(x1338/(x1339<=x1340)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1341 = UINT32_MAX;
	uint8_t x1342 = UINT8_MAX;
	volatile int8_t x1343 = INT8_MIN;
	int8_t x1344 = -1;
	volatile int32_t t189 = -254;

    t189 = (x1341<=(x1342/(x1343<=x1344)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1345 = INT32_MIN;
	volatile int16_t x1347 = INT16_MIN;
	int8_t x1348 = INT8_MAX;
	static volatile int32_t t190 = -12959217;

    t190 = (x1345<=(x1346/(x1347<=x1348)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1349 = 4435519;
	int16_t x1350 = INT16_MIN;
	static volatile int64_t x1351 = INT64_MIN;
	uint16_t x1352 = UINT16_MAX;
	int32_t t191 = 1905817;

    t191 = (x1349<=(x1350/(x1351<=x1352)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1354 = 5;
	int8_t x1355 = -1;
	uint8_t x1356 = 0U;
	int32_t t192 = 1547;

    t192 = (x1353<=(x1354/(x1355<=x1356)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x1358 = 1U;
	int64_t x1359 = INT64_MIN;
	int64_t x1360 = -1LL;
	volatile int32_t t193 = 40128449;

    t193 = (x1357<=(x1358/(x1359<=x1360)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1361 = UINT16_MAX;
	static int16_t x1362 = INT16_MAX;
	static int64_t x1363 = INT64_MIN;
	int64_t x1364 = 65LL;
	int32_t t194 = 41583;

    t194 = (x1361<=(x1362/(x1363<=x1364)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x1365 = INT16_MIN;
	volatile int16_t x1366 = -1289;
	uint64_t x1368 = UINT64_MAX;
	static int32_t t195 = 360722382;

    t195 = (x1365<=(x1366/(x1367<=x1368)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x1369 = UINT16_MAX;
	int8_t x1370 = INT8_MIN;
	int8_t x1371 = INT8_MIN;
	int32_t t196 = -7622003;

    t196 = (x1369<=(x1370/(x1371<=x1372)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1373 = 2156U;
	int8_t x1374 = INT8_MIN;
	int64_t x1375 = -1LL;
	uint32_t x1376 = 2322U;
	int32_t t197 = 0;

    t197 = (x1373<=(x1374/(x1375<=x1376)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1378 = INT8_MIN;
	volatile uint16_t x1379 = 7U;
	uint64_t x1380 = 10618784403087958LLU;
	volatile int32_t t198 = -78;

    t198 = (x1377<=(x1378/(x1379<=x1380)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1381 = 4518017LLU;
	int16_t x1382 = INT16_MIN;
	volatile int32_t x1383 = -1;
	volatile int16_t x1384 = 1485;
	int32_t t199 = 38;

    t199 = (x1381<=(x1382/(x1383<=x1384)));

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

