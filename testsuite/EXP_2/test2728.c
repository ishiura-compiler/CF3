
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

int8_t x8 = INT8_MIN;
uint64_t x10 = 565760534693977721LLU;
int16_t x13 = INT16_MIN;
int32_t x16 = -123782;
volatile uint64_t t3 = 7871888LLU;
int32_t x20 = 478;
static int16_t x21 = INT16_MAX;
int16_t x26 = INT16_MIN;
int64_t x27 = INT64_MIN;
static int32_t x32 = INT32_MIN;
static volatile uint16_t x37 = 2U;
volatile int16_t x38 = INT16_MIN;
volatile int32_t t9 = -25483208;
volatile uint64_t t12 = 1456414502319LLU;
int64_t x54 = -1LL;
volatile int64_t t14 = 3238552826LL;
volatile int32_t x62 = INT32_MAX;
static uint8_t x66 = 1U;
int8_t x67 = INT8_MAX;
int8_t x71 = -7;
uint16_t x72 = UINT16_MAX;
uint32_t x77 = UINT32_MAX;
uint16_t x85 = 14U;
int8_t x88 = -2;
volatile int32_t t21 = -6707784;
int16_t x95 = -1;
volatile uint32_t x98 = 837136U;
uint64_t x101 = UINT64_MAX;
int16_t x106 = 10;
volatile uint8_t x115 = 0U;
uint16_t x119 = 4U;
volatile int64_t t29 = -14767163107730826LL;
volatile uint64_t t31 = 272409580836596893LLU;
volatile uint16_t x129 = 6U;
int8_t x130 = INT8_MIN;
int32_t t33 = -7167401;
int32_t x145 = 1;
volatile int8_t x148 = -1;
uint64_t t37 = 6368273832134LLU;
volatile int16_t x155 = -49;
volatile int16_t x157 = -1;
int8_t x164 = -27;
volatile uint64_t x167 = 4997642934079LLU;
int8_t x174 = INT8_MAX;
uint64_t t43 = 14028278506953608LLU;
int16_t x183 = 1;
volatile uint64_t t45 = 167993833434675239LLU;
static volatile int8_t x192 = INT8_MIN;
uint64_t x193 = 16357627793403249LLU;
static int32_t x204 = 109109;
volatile int64_t x205 = INT64_MIN;
int16_t x211 = -1;
int32_t t52 = -5;
uint8_t x215 = 49U;
uint32_t x219 = UINT32_MAX;
int64_t x220 = 283893LL;
volatile int32_t x221 = -12231984;
int32_t x223 = INT32_MAX;
int64_t x240 = INT64_MAX;
volatile int64_t t59 = INT64_MAX;
static int32_t x241 = INT32_MIN;
static int32_t x246 = -12596;
int32_t x247 = 0;
int8_t x248 = INT8_MIN;
int32_t t61 = 1071111315;
int64_t x263 = 231732072728LL;
int64_t x267 = INT64_MIN;
volatile int64_t t66 = -22054387950864LL;
int8_t x272 = INT8_MIN;
volatile int64_t x275 = INT64_MIN;
uint32_t x276 = 27U;
int32_t x293 = INT32_MAX;
static int64_t x294 = INT64_MIN;
volatile int32_t x304 = -1;
static int32_t t76 = INT32_MIN;
volatile int32_t x309 = -1;
volatile uint16_t x314 = 9114U;
static int64_t x316 = INT64_MAX;
static int32_t x321 = -110;
volatile uint64_t t80 = 441LLU;
static int32_t x327 = -1;
uint8_t x328 = UINT8_MAX;
int64_t t82 = -106LL;
static int16_t x336 = -415;
uint32_t x340 = 1U;
int32_t x342 = -1;
int64_t t85 = -426554078994LL;
static uint8_t x347 = UINT8_MAX;
static int16_t x352 = INT16_MIN;
volatile uint16_t x356 = UINT16_MAX;
int32_t x357 = -1;
int16_t x362 = -718;
uint32_t x363 = 169152U;
uint64_t x366 = 10906492202LLU;
int64_t x367 = -1LL;
uint16_t x371 = 7485U;
uint64_t t92 = 107251328LLU;
uint8_t x387 = 1U;
int16_t x392 = -1;
uint32_t t97 = 59451771U;
static int64_t x394 = INT64_MIN;
volatile int32_t x396 = -1;
uint16_t x397 = UINT16_MAX;
volatile int64_t t99 = -141LL;
volatile int32_t t100 = -710412;
int16_t x417 = -1;
int16_t x424 = INT16_MIN;
volatile int8_t x425 = INT8_MIN;
int64_t x426 = -48409LL;
static uint8_t x427 = 19U;
static int16_t x436 = -1;
int32_t x438 = INT32_MIN;
int16_t x441 = 2165;
uint8_t x453 = 6U;
int32_t x454 = INT32_MIN;
volatile int64_t t113 = -6693184580180LL;
int16_t x460 = -1;
int64_t t115 = -32612204055242LL;
int8_t x466 = -2;
int8_t x472 = INT8_MIN;
int32_t x486 = INT32_MIN;
int64_t x488 = -1LL;
static volatile int64_t t121 = 30680172617790565LL;
static int16_t x489 = -1;
int64_t x490 = INT64_MAX;
volatile int16_t x494 = INT16_MIN;
int64_t x496 = 108775585497201263LL;
uint64_t t124 = 3010026LLU;
static int16_t x501 = -1;
int8_t x502 = INT8_MIN;
int64_t t125 = 248349LL;
static int16_t x511 = INT16_MIN;
uint16_t x517 = 1193U;
static volatile uint32_t x521 = UINT32_MAX;
int8_t x522 = 0;
volatile uint64_t t130 = 11243638094489457LLU;
static int32_t x525 = 1;
volatile uint64_t t131 = 664805LLU;
static uint8_t x529 = 0U;
static uint32_t x536 = 454527873U;
int8_t x537 = INT8_MAX;
uint64_t x545 = UINT64_MAX;
static volatile uint64_t x548 = UINT64_MAX;
uint8_t x549 = 0U;
static uint16_t x551 = 11527U;
volatile int8_t x557 = -50;
int16_t x558 = INT16_MIN;
uint64_t x559 = 83324914LLU;
int32_t x567 = INT32_MIN;
static uint8_t x570 = 6U;
int16_t x572 = INT16_MIN;
int32_t t142 = INT32_MIN;
volatile uint8_t x573 = UINT8_MAX;
int64_t x574 = 1823563LL;
int32_t x577 = INT32_MIN;
volatile int32_t t151 = -213707042;
uint16_t x610 = UINT16_MAX;
uint16_t x612 = 2U;
int64_t x615 = -3588534693561356076LL;
int8_t x616 = -1;
static int64_t x617 = 36377525557334733LL;
volatile int16_t x618 = 1;
int64_t t154 = 62LL;
int16_t x626 = 1;
volatile int64_t t156 = -1LL;
int32_t x630 = 492301594;
int64_t x638 = INT64_MAX;
uint16_t x651 = 0U;
int64_t t162 = 64766398639LL;
volatile uint64_t t163 = 101222530785275924LLU;
int16_t x661 = -278;
uint16_t x662 = 97U;
static int16_t x663 = INT16_MAX;
int64_t x664 = 492572367439107276LL;
static volatile uint64_t t167 = 914601795617676LLU;
int8_t x678 = INT8_MIN;
uint32_t x687 = UINT32_MAX;
int8_t x688 = INT8_MIN;
static uint32_t x693 = UINT32_MAX;
int64_t x694 = INT64_MAX;
uint64_t x698 = 12149LLU;
volatile uint64_t t174 = 1401779415519LLU;
int64_t t175 = -34814566133046252LL;
static uint16_t x709 = 80U;
volatile int64_t t177 = -1401569LL;
int16_t x715 = INT16_MAX;
static uint16_t x717 = 15769U;
volatile int16_t x718 = -1;
int64_t x719 = -110514164302610LL;
int16_t x721 = INT16_MIN;
static uint16_t x723 = UINT16_MAX;
volatile uint16_t x729 = 6133U;
int8_t x731 = INT8_MIN;
volatile int64_t t184 = -75605LL;
static volatile uint64_t x749 = UINT64_MAX;
static int64_t x763 = -1LL;
volatile int8_t x764 = -1;
int32_t x766 = INT32_MAX;
uint64_t x772 = 141011143417428257LLU;
volatile uint8_t x776 = 0U;
volatile int64_t x780 = -1LL;
int32_t x788 = INT32_MIN;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	static uint16_t x2 = 12064U;
	static int8_t x3 = -3;
	static uint64_t x4 = 285302604710286049LLU;
	volatile uint64_t t0 = 1LLU;

    t0 = ((x1|(x2^x3))&x4);

    if (t0 != 390075105LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MIN;
	volatile int64_t x7 = -1LL;
	static volatile int64_t t1 = -1337592067405377LL;

    t1 = ((x5|(x6^x7))&x8);

    if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int32_t x11 = INT32_MAX;
	volatile uint16_t x12 = UINT16_MAX;
	uint64_t t2 = 2666286583581LLU;

    t2 = ((x9|(x10^x11))&x12);

    if (t2 != 65414LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	uint64_t x15 = UINT64_MAX;

    t3 = ((x13|(x14^x15))&x16);

    if (t3 != 18446744073709427834LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	int8_t x18 = 0;
	int64_t x19 = INT64_MIN;
	static volatile int64_t t4 = 135108974LL;

    t4 = ((x17|(x18^x19))&x20);

    if (t4 != 478LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MIN;
	uint8_t x23 = 1U;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 0;

    t5 = ((x21|(x22^x23))&x24);

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 14;
	volatile int8_t x28 = -6;
	volatile int64_t t6 = 2427303856114685260LL;

    t6 = ((x25|(x26^x27))&x28);

    if (t6 != 9223372036854743050LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 2U;
	uint8_t x30 = UINT8_MAX;
	static int32_t x31 = INT32_MAX;
	int32_t t7 = -44;

    t7 = ((x29|(x30^x31))&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = -1;
	int8_t x34 = -1;
	uint16_t x35 = 7U;
	int32_t x36 = 1014;
	static int32_t t8 = 4006;

    t8 = ((x33|(x34^x35))&x36);

    if (t8 != 1014) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x39 = INT32_MIN;
	uint8_t x40 = 43U;

    t9 = ((x37|(x38^x39))&x40);

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = UINT32_MAX;
	static int16_t x43 = INT16_MIN;
	uint16_t x44 = 611U;
	uint32_t t10 = 3131532U;

    t10 = ((x41|(x42^x43))&x44);

    if (t10 != 611U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	uint32_t x46 = UINT32_MAX;
	int16_t x47 = -52;
	static uint16_t x48 = 22633U;
	volatile uint32_t t11 = 282658816U;

    t11 = ((x45|(x46^x47))&x48);

    if (t11 != 22633U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -17;
	static volatile uint64_t x50 = 4699LLU;
	static int16_t x51 = INT16_MAX;
	int32_t x52 = -1;

    t12 = ((x49|(x50^x51))&x52);

    if (t12 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = -1;
	int16_t x55 = -77;
	uint32_t x56 = UINT32_MAX;
	static int64_t t13 = -4351789225318LL;

    t13 = ((x53|(x54^x55))&x56);

    if (t13 != 4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 484366U;
	static uint16_t x58 = 882U;
	int64_t x59 = INT64_MIN;
	int16_t x60 = -1971;

    t14 = ((x57|(x58^x59))&x60);

    if (t14 != -9223372036854292404LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	int8_t x63 = INT8_MIN;
	int16_t x64 = -14226;
	volatile int32_t t15 = -111;

    t15 = ((x61|(x62^x63))&x64);

    if (t15 != -2147465106) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	int8_t x68 = INT8_MAX;
	int32_t t16 = -255552;

    t16 = ((x65|(x66^x67))&x68);

    if (t16 != 126) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	static int8_t x70 = 0;
	int32_t t17 = -535601;

    t17 = ((x69|(x70^x71))&x72);

    if (t17 != 65529) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -3814867480LL;
	volatile int64_t x74 = INT64_MIN;
	uint8_t x75 = 1U;
	static uint8_t x76 = UINT8_MAX;
	volatile int64_t t18 = -105501400645LL;

    t18 = ((x73|(x74^x75))&x76);

    if (t18 != 233LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x78 = 9U;
	volatile int16_t x79 = INT16_MAX;
	int64_t x80 = -1LL;
	static volatile int64_t t19 = 8113291LL;

    t19 = ((x77|(x78^x79))&x80);

    if (t19 != 4294967295LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = INT8_MAX;
	int8_t x82 = INT8_MAX;
	uint64_t x83 = UINT64_MAX;
	static uint16_t x84 = UINT16_MAX;
	static volatile uint64_t t20 = 2335623346LLU;

    t20 = ((x81|(x82^x83))&x84);

    if (t20 != 65535LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = INT8_MIN;
	uint16_t x87 = UINT16_MAX;

    t21 = ((x85|(x86^x87))&x88);

    if (t21 != -65410) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 1U;
	uint32_t x90 = 15680U;
	static uint16_t x91 = UINT16_MAX;
	int32_t x92 = -1;
	uint32_t t22 = 27333U;

    t22 = ((x89|(x90^x91))&x92);

    if (t22 != 49855U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 2517240145730106124LLU;
	static int32_t x94 = -1;
	volatile int64_t x96 = -1LL;
	uint64_t t23 = 8384943513LLU;

    t23 = ((x93|(x94^x95))&x96);

    if (t23 != 2517240145730106124LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -30316;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MIN;
	uint32_t t24 = 220747U;

    t24 = ((x97|(x98^x99))&x100);

    if (t24 != 4294954880U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x102 = INT64_MAX;
	int8_t x103 = INT8_MIN;
	uint32_t x104 = 525U;
	volatile uint64_t t25 = 2602893157LLU;

    t25 = ((x101|(x102^x103))&x104);

    if (t25 != 525LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MIN;
	int32_t x107 = INT32_MAX;
	int16_t x108 = INT16_MIN;
	int32_t t26 = 86;

    t26 = ((x105|(x106^x107))&x108);

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = INT64_MIN;
	volatile int32_t x110 = -1;
	int8_t x111 = -8;
	int8_t x112 = -1;
	int64_t t27 = -43612717807148306LL;

    t27 = ((x109|(x110^x111))&x112);

    if (t27 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 61U;
	int16_t x114 = INT16_MAX;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 0;

    t28 = ((x113|(x114^x115))&x116);

    if (t28 != 32640) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int8_t x118 = 0;
	int64_t x120 = 175027689662LL;

    t29 = ((x117|(x118^x119))&x120);

    if (t29 != 4LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 121U;
	uint64_t x122 = 19282999574801035LLU;
	static volatile int8_t x123 = INT8_MIN;
	uint64_t x124 = UINT64_MAX;
	uint64_t t30 = 90579390LLU;

    t30 = ((x121|(x122^x123))&x124);

    if (t30 != 18427461074134750587LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	static int32_t x126 = INT32_MIN;
	int16_t x127 = 35;
	volatile uint64_t x128 = 2098165061369911LLU;

    t31 = ((x125|(x126^x127))&x128);

    if (t31 != 2098165061369911LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x131 = 50U;
	int8_t x132 = INT8_MAX;
	volatile uint32_t t32 = 298U;

    t32 = ((x129|(x130^x131))&x132);

    if (t32 != 54U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x133 = 30550U;
	volatile int32_t x134 = INT32_MIN;
	uint16_t x135 = 22U;
	int32_t x136 = -62782;

    t33 = ((x133|(x134^x135))&x136);

    if (t33 != -2147483070) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MAX;
	uint8_t x140 = 0U;
	int64_t t34 = 11422951LL;

    t34 = ((x137|(x138^x139))&x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 759612130459LLU;
	int32_t x142 = INT32_MIN;
	volatile int16_t x143 = INT16_MAX;
	uint64_t x144 = 1797704508LLU;
	static volatile uint64_t t35 = 8366219LLU;

    t35 = ((x141|(x142^x143))&x144);

    if (t35 != 1210075964LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MIN;
	uint64_t x147 = 13351LLU;
	uint64_t t36 = 18LLU;

    t36 = ((x145|(x146^x147))&x148);

    if (t36 != 18446744073709532199LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = UINT64_MAX;
	int32_t x150 = INT32_MIN;
	uint32_t x151 = UINT32_MAX;
	static int64_t x152 = INT64_MIN;

    t37 = ((x149|(x150^x151))&x152);

    if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x153 = UINT16_MAX;
	int64_t x154 = 12107855626LL;
	int32_t x156 = 154;
	volatile int64_t t38 = 4830606860LL;

    t38 = ((x153|(x154^x155))&x156);

    if (t38 != 154LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x158 = INT8_MIN;
	int8_t x159 = -1;
	static volatile int16_t x160 = -3761;
	static volatile int32_t t39 = -7;

    t39 = ((x157|(x158^x159))&x160);

    if (t39 != -3761) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 0U;
	uint16_t x162 = 1317U;
	static volatile int32_t x163 = INT32_MAX;
	int32_t t40 = -3;

    t40 = ((x161|(x162^x163))&x164);

    if (t40 != 2147482304) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MAX;
	uint64_t x166 = UINT64_MAX;
	int64_t x168 = INT64_MIN;
	uint64_t t41 = 21LLU;

    t41 = ((x165|(x166^x167))&x168);

    if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	static uint16_t x170 = 4U;
	uint64_t x171 = 245207571577684LLU;
	int32_t x172 = -9181;
	uint64_t t42 = 2639482293740768361LLU;

    t42 = ((x169|(x170^x171))&x172);

    if (t42 != 9223617244426344448LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 57301LLU;
	int64_t x175 = INT64_MIN;
	uint32_t x176 = 3185U;

    t43 = ((x173|(x174^x175))&x176);

    if (t43 != 3185LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = UINT16_MAX;
	static int64_t x178 = INT64_MIN;
	volatile int8_t x179 = 0;
	int8_t x180 = 0;
	int64_t t44 = 23136938386185732LL;

    t44 = ((x177|(x178^x179))&x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	uint64_t x182 = 448LLU;
	static int16_t x184 = INT16_MIN;

    t45 = ((x181|(x182^x183))&x184);

    if (t45 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x185 = 6683U;
	static int64_t x186 = INT64_MIN;
	volatile int32_t x187 = INT32_MIN;
	static int8_t x188 = INT8_MAX;
	volatile int64_t t46 = -3LL;

    t46 = ((x185|(x186^x187))&x188);

    if (t46 != 27LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = UINT32_MAX;
	uint8_t x190 = UINT8_MAX;
	uint8_t x191 = 1U;
	volatile uint32_t t47 = 19457U;

    t47 = ((x189|(x190^x191))&x192);

    if (t47 != 4294967168U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x194 = -1393;
	static int16_t x195 = INT16_MAX;
	int64_t x196 = 7112481LL;
	static volatile uint64_t t48 = 1863234850646LLU;

    t48 = ((x193|(x194^x195))&x196);

    if (t48 != 7111969LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	int64_t x199 = 392583362308LL;
	int16_t x200 = 304;
	int64_t t49 = 1119308855602LL;

    t49 = ((x197|(x198^x199))&x200);

    if (t49 != 256LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -2;
	static uint8_t x202 = 1U;
	int16_t x203 = -1;
	int32_t t50 = 1;

    t50 = ((x201|(x202^x203))&x204);

    if (t50 != 109108) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x206 = INT32_MAX;
	static uint8_t x207 = 79U;
	int16_t x208 = INT16_MIN;
	volatile int64_t t51 = 9LL;

    t51 = ((x205|(x206^x207))&x208);

    if (t51 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	volatile int8_t x210 = INT8_MIN;
	int32_t x212 = -1;

    t52 = ((x209|(x210^x211))&x212);

    if (t52 != -32641) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 68U;
	int64_t x214 = INT64_MIN;
	volatile int16_t x216 = -20;
	volatile int64_t t53 = 1LL;

    t53 = ((x213|(x214^x215))&x216);

    if (t53 != -9223372036854775708LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -109;
	int64_t x218 = INT64_MAX;
	volatile int64_t t54 = 12LL;

    t54 = ((x217|(x218^x219))&x220);

    if (t54 != 283793LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x222 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t55 = -1090161;

    t55 = ((x221|(x222^x223))&x224);

    if (t55 != -12222592) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = 117509;
	int64_t x226 = -253780650LL;
	int64_t x227 = -39495088425543532LL;
	static int32_t x228 = -1;
	volatile int64_t t56 = 1LL;

    t56 = ((x225|(x226^x227))&x228);

    if (t56 != 39495088306114503LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = UINT8_MAX;
	int16_t x230 = INT16_MAX;
	uint64_t x231 = UINT64_MAX;
	uint64_t x232 = 8036276LLU;
	uint64_t t57 = 3225139478LLU;

    t57 = ((x229|(x230^x231))&x232);

    if (t57 != 8028340LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x233 = 1121587559U;
	volatile uint8_t x234 = 10U;
	static uint16_t x235 = 59U;
	volatile uint64_t x236 = UINT64_MAX;
	volatile uint64_t t58 = 1068979LLU;

    t58 = ((x233|(x234^x235))&x236);

    if (t58 != 1121587575LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x237 = INT8_MIN;
	uint16_t x238 = 0U;
	static int8_t x239 = -1;

    t59 = ((x237|(x238^x239))&x240);

    if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x242 = 10193U;
	int32_t x243 = INT32_MIN;
	volatile uint16_t x244 = UINT16_MAX;
	int32_t t60 = 27;

    t60 = ((x241|(x242^x243))&x244);

    if (t60 != 10193) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = 37;

    t61 = ((x245|(x246^x247))&x248);

    if (t61 != -12672) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = UINT64_MAX;
	int8_t x250 = -12;
	int8_t x251 = -50;
	static int32_t x252 = INT32_MIN;
	static volatile uint64_t t62 = 6543502383854243LLU;

    t62 = ((x249|(x250^x251))&x252);

    if (t62 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	volatile int32_t x254 = -2;
	int16_t x255 = INT16_MAX;
	static volatile int16_t x256 = 826;
	static volatile int32_t t63 = -846937403;

    t63 = ((x253|(x254^x255))&x256);

    if (t63 != 768) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	volatile uint64_t x258 = 5716180236518776658LLU;
	static uint8_t x259 = 0U;
	static int64_t x260 = -11692988556770LL;
	uint64_t t64 = 162556730875393882LLU;

    t64 = ((x257|(x258^x259))&x260);

    if (t64 != 18446732380720994846LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x261 = 123U;
	int64_t x262 = -1LL;
	int8_t x264 = -1;
	volatile int64_t t65 = -530497136008416993LL;

    t65 = ((x261|(x262^x263))&x264);

    if (t65 != -231732072705LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x265 = 3U;
	static volatile int8_t x266 = 10;
	volatile int16_t x268 = 1457;

    t66 = ((x265|(x266^x267))&x268);

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 10559405U;
	uint64_t x270 = UINT64_MAX;
	int8_t x271 = 28;
	static volatile uint64_t t67 = 10505676596LLU;

    t67 = ((x269|(x270^x271))&x272);

    if (t67 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = -34;
	uint32_t x274 = 8577593U;
	static volatile int64_t t68 = 13166242540LL;

    t68 = ((x273|(x274^x275))&x276);

    if (t68 != 27LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 3U;
	int64_t x278 = -30LL;
	int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MIN;
	int64_t t69 = -1523307595LL;

    t69 = ((x277|(x278^x279))&x280);

    if (t69 != 2147450880LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	static volatile int8_t x282 = -12;
	static volatile int8_t x283 = -1;
	uint32_t x284 = 3U;
	uint32_t t70 = 355U;

    t70 = ((x281|(x282^x283))&x284);

    if (t70 != 3U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	volatile int64_t x286 = 245510LL;
	int64_t x287 = -358867871157657086LL;
	uint8_t x288 = 27U;
	int64_t t71 = 0LL;

    t71 = ((x285|(x286^x287))&x288);

    if (t71 != 27LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = 85388584U;
	int8_t x290 = 1;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	volatile int64_t t72 = INT64_MIN;

    t72 = ((x289|(x290^x291))&x292);

    if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x295 = -1;
	int8_t x296 = -1;
	volatile int64_t t73 = INT64_MAX;

    t73 = ((x293|(x294^x295))&x296);

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = -1;
	int64_t x298 = INT64_MIN;
	uint32_t x299 = 447997058U;
	int64_t x300 = INT64_MAX;
	int64_t t74 = INT64_MAX;

    t74 = ((x297|(x298^x299))&x300);

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = INT32_MIN;
	static int16_t x302 = 2;
	int16_t x303 = 13;
	int32_t t75 = -27867;

    t75 = ((x301|(x302^x303))&x304);

    if (t75 != -2147483633) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	int16_t x306 = -53;
	uint8_t x307 = 30U;
	int32_t x308 = INT32_MIN;

    t76 = ((x305|(x306^x307))&x308);

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x310 = 167U;
	uint32_t x311 = 185193U;
	static uint16_t x312 = 19U;
	volatile uint32_t t77 = 48433U;

    t77 = ((x309|(x310^x311))&x312);

    if (t77 != 19U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MAX;
	volatile int32_t x315 = 79098;
	volatile int64_t t78 = 14832491442993458LL;

    t78 = ((x313|(x314^x315))&x316);

    if (t78 != 98303LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = UINT8_MAX;
	volatile uint32_t x318 = 7U;
	int32_t x319 = -1;
	static volatile int8_t x320 = INT8_MAX;
	static volatile uint32_t t79 = 17753U;

    t79 = ((x317|(x318^x319))&x320);

    if (t79 != 127U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x322 = 313494138290373613LLU;
	uint16_t x323 = 7U;
	int8_t x324 = -1;

    t80 = ((x321|(x322^x323))&x324);

    if (t80 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 4207U;
	static int64_t x326 = INT64_MIN;
	volatile int64_t t81 = 8019LL;

    t81 = ((x325|(x326^x327))&x328);

    if (t81 != 255LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MAX;
	volatile int64_t x330 = 9491711701684LL;
	uint32_t x331 = 147488U;
	static uint8_t x332 = 0U;

    t82 = ((x329|(x330^x331))&x332);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x333 = 3U;
	int64_t x334 = 1224456207588LL;
	volatile int16_t x335 = INT16_MAX;
	int64_t t83 = 4038559524975LL;

    t83 = ((x333|(x334^x335))&x336);

    if (t83 != 1224456176129LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = -3;
	int8_t x338 = -4;
	volatile int32_t x339 = INT32_MIN;
	static volatile uint32_t t84 = 3U;

    t84 = ((x337|(x338^x339))&x340);

    if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	uint8_t x343 = 3U;
	volatile uint16_t x344 = 82U;

    t85 = ((x341|(x342^x343))&x344);

    if (t85 != 82LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 614887069493900180LLU;
	int8_t x346 = INT8_MIN;
	volatile int64_t x348 = -1LL;
	uint64_t t86 = UINT64_MAX;

    t86 = ((x345|(x346^x347))&x348);

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 7946428968024980LLU;
	static volatile uint32_t x350 = 47U;
	static uint32_t x351 = 1U;
	uint64_t t87 = 776655LLU;

    t87 = ((x349|(x350^x351))&x352);

    if (t87 != 7946428968009728LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 142718U;
	volatile int8_t x354 = INT8_MIN;
	int16_t x355 = -1;
	uint32_t t88 = 58U;

    t88 = ((x353|(x354^x355))&x356);

    if (t88 != 11647U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x358 = 3U;
	static int32_t x359 = -84;
	volatile uint16_t x360 = 8924U;
	int32_t t89 = 30;

    t89 = ((x357|(x358^x359))&x360);

    if (t89 != 8924) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	int8_t x364 = 25;
	volatile int64_t t90 = -79LL;

    t90 = ((x361|(x362^x363))&x364);

    if (t90 != 16LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	static int64_t x368 = 4318891749LL;
	uint64_t t91 = 1406752462LLU;

    t91 = ((x365|(x366^x367))&x368);

    if (t91 != 4318823141LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	uint32_t x370 = 10011U;
	volatile int16_t x372 = INT16_MIN;

    t92 = ((x369|(x370^x371))&x372);

    if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	static uint8_t x374 = UINT8_MAX;
	int32_t x375 = INT32_MIN;
	int16_t x376 = 915;
	int32_t t93 = 2;

    t93 = ((x373|(x374^x375))&x376);

    if (t93 != 147) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	volatile uint16_t x378 = 253U;
	int16_t x379 = INT16_MIN;
	volatile int32_t x380 = -32240995;
	static int32_t t94 = -130865;

    t94 = ((x377|(x378^x379))&x380);

    if (t94 != -32243555) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MAX;
	uint8_t x382 = UINT8_MAX;
	uint16_t x383 = 1849U;
	int32_t x384 = -1;
	int32_t t95 = -12;

    t95 = ((x381|(x382^x383))&x384);

    if (t95 != 2047) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 152U;
	uint8_t x386 = UINT8_MAX;
	static int16_t x388 = -1;
	uint32_t t96 = 543651U;

    t96 = ((x385|(x386^x387))&x388);

    if (t96 != 254U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 44803U;
	static uint32_t x390 = 344450U;
	int32_t x391 = INT32_MIN;

    t97 = ((x389|(x390^x391))&x392);

    if (t97 != 2147872643U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	uint64_t x395 = 2LLU;
	static uint64_t t98 = 27LLU;

    t98 = ((x393|(x394^x395))&x396);

    if (t98 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	volatile int64_t x400 = -1LL;

    t99 = ((x397|(x398^x399))&x400);

    if (t99 != 65535LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x401 = 67U;
	int8_t x402 = INT8_MIN;
	int8_t x403 = -1;
	int32_t x404 = 7;

    t100 = ((x401|(x402^x403))&x404);

    if (t100 != 7) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x405 = 9U;
	static int16_t x406 = 173;
	uint32_t x407 = 138546U;
	static uint64_t x408 = 224451292618132LLU;
	uint64_t t101 = 1LLU;

    t101 = ((x405|(x406^x407))&x408);

    if (t101 != 7572LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	static int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MAX;
	volatile int32_t x412 = 42954;
	volatile int64_t t102 = 454223388626LL;

    t102 = ((x409|(x410^x411))&x412);

    if (t102 != 42954LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = -3;
	int16_t x414 = 6;
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = INT64_MAX;
	int64_t t103 = 1LL;

    t103 = ((x413|(x414^x415))&x416);

    if (t103 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = 207U;
	static volatile int16_t x419 = INT16_MIN;
	static volatile uint16_t x420 = 6552U;
	static volatile uint32_t t104 = 353379473U;

    t104 = ((x417|(x418^x419))&x420);

    if (t104 != 6552U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	int8_t x422 = INT8_MIN;
	int32_t x423 = -1;
	int32_t t105 = 3294810;

    t105 = ((x421|(x422^x423))&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x428 = 5LLU;
	volatile uint64_t t106 = 104898666862049LLU;

    t106 = ((x425|(x426^x427))&x428);

    if (t106 != 4LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x429 = INT32_MAX;
	int64_t x430 = 4121232761LL;
	int16_t x431 = INT16_MIN;
	int32_t x432 = INT32_MAX;
	static volatile int64_t t107 = -208LL;

    t107 = ((x429|(x430^x431))&x432);

    if (t107 != 2147483647LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 3840649U;
	int16_t x434 = -1;
	static volatile uint32_t x435 = 104U;
	uint32_t t108 = 52923U;

    t108 = ((x433|(x434^x435))&x436);

    if (t108 != 4294967199U) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x437 = 0;
	int64_t x439 = -1LL;
	volatile int8_t x440 = INT8_MIN;
	int64_t t109 = -3954787156700661LL;

    t109 = ((x437|(x438^x439))&x440);

    if (t109 != 2147483520LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x442 = 206707725872LLU;
	volatile uint64_t x443 = 9732LLU;
	int8_t x444 = INT8_MAX;
	volatile uint64_t t110 = 11162488987LLU;

    t110 = ((x441|(x442^x443))&x444);

    if (t110 != 117LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = INT64_MAX;
	int16_t x446 = 166;
	volatile uint8_t x447 = UINT8_MAX;
	uint8_t x448 = UINT8_MAX;
	volatile int64_t t111 = -1940197522LL;

    t111 = ((x445|(x446^x447))&x448);

    if (t111 != 255LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = 150;
	int16_t x450 = -7373;
	uint16_t x451 = UINT16_MAX;
	uint64_t x452 = 512791414LLU;
	uint64_t t112 = 102949LLU;

    t112 = ((x449|(x450^x451))&x452);

    if (t112 != 512757846LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x455 = INT8_MAX;
	volatile int64_t x456 = INT64_MAX;

    t113 = ((x453|(x454^x455))&x456);

    if (t113 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MAX;
	volatile int32_t x458 = INT32_MAX;
	uint8_t x459 = UINT8_MAX;
	volatile int32_t t114 = INT32_MAX;

    t114 = ((x457|(x458^x459))&x460);

    if (t114 != INT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	static int8_t x462 = INT8_MAX;
	volatile int64_t x463 = 14LL;
	int8_t x464 = INT8_MIN;

    t115 = ((x461|(x462^x463))&x464);

    if (t115 != -128LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1575;
	uint32_t x467 = 1341274176U;
	volatile uint16_t x468 = 222U;
	volatile uint32_t t116 = 95396204U;

    t116 = ((x465|(x466^x467))&x468);

    if (t116 != 222U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = INT16_MIN;
	int8_t x470 = INT8_MIN;
	static volatile int64_t x471 = INT64_MAX;
	int64_t t117 = -630493864LL;

    t117 = ((x469|(x470^x471))&x472);

    if (t117 != -32768LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -3;
	static uint8_t x474 = 60U;
	uint8_t x475 = 56U;
	int8_t x476 = INT8_MAX;
	int32_t t118 = -88076;

    t118 = ((x473|(x474^x475))&x476);

    if (t118 != 125) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -1;
	int64_t x478 = 632LL;
	int8_t x479 = INT8_MAX;
	volatile int32_t x480 = INT32_MAX;
	volatile int64_t t119 = 17767949725736924LL;

    t119 = ((x477|(x478^x479))&x480);

    if (t119 != 2147483647LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MAX;
	int64_t x482 = INT64_MIN;
	int32_t x483 = INT32_MIN;
	uint64_t x484 = 130697LLU;
	static volatile uint64_t t120 = 198063504642137LLU;

    t120 = ((x481|(x482^x483))&x484);

    if (t120 != 9LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x485 = 318U;
	volatile int64_t x487 = -1LL;

    t121 = ((x485|(x486^x487))&x488);

    if (t121 != 2147483647LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x491 = -1LL;
	static uint64_t x492 = UINT64_MAX;
	static uint64_t t122 = UINT64_MAX;

    t122 = ((x489|(x490^x491))&x492);

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 29U;
	int16_t x495 = INT16_MIN;
	static volatile int64_t t123 = -1901325377766299LL;

    t123 = ((x493|(x494^x495))&x496);

    if (t123 != 13LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	uint64_t x498 = UINT64_MAX;
	static int8_t x499 = -7;
	int8_t x500 = -26;

    t124 = ((x497|(x498^x499))&x500);

    if (t124 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x503 = 0U;
	int64_t x504 = -975LL;

    t125 = ((x501|(x502^x503))&x504);

    if (t125 != -975LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x505 = 1LLU;
	static uint64_t x506 = 6LLU;
	volatile uint16_t x507 = 15535U;
	uint16_t x508 = 23U;
	volatile uint64_t t126 = 23385313LLU;

    t126 = ((x505|(x506^x507))&x508);

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x509 = 484628077442LLU;
	volatile int32_t x510 = INT32_MAX;
	uint16_t x512 = 191U;
	static volatile uint64_t t127 = 15716242397732LLU;

    t127 = ((x509|(x510^x511))&x512);

    if (t127 != 191LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	volatile int64_t x514 = INT64_MIN;
	static volatile int8_t x515 = -46;
	volatile uint64_t x516 = UINT64_MAX;
	uint64_t t128 = 274116728740865LLU;

    t128 = ((x513|(x514^x515))&x516);

    if (t128 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x518 = UINT8_MAX;
	int8_t x519 = 10;
	int16_t x520 = 12;
	int32_t t129 = -1;

    t129 = ((x517|(x518^x519))&x520);

    if (t129 != 12) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x523 = 436813387193999748LL;
	volatile uint64_t x524 = 13LLU;

    t130 = ((x521|(x522^x523))&x524);

    if (t130 != 13LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = 1451573LL;
	uint64_t x527 = 334LLU;
	int64_t x528 = INT64_MIN;

    t131 = ((x525|(x526^x527))&x528);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x530 = 100064U;
	volatile uint8_t x531 = UINT8_MAX;
	volatile uint64_t x532 = 1451808549905LLU;
	uint64_t t132 = 39694LLU;

    t132 = ((x529|(x530^x531))&x532);

    if (t132 != 1041LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MAX;
	int64_t x534 = 4908391988553273LL;
	static int64_t x535 = -129974336LL;
	volatile int64_t t133 = 670593570196833LL;

    t133 = ((x533|(x534^x535))&x536);

    if (t133 != 454527873LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x538 = INT8_MIN;
	uint64_t x539 = 103495LLU;
	uint8_t x540 = UINT8_MAX;
	uint64_t t134 = 2216998938LLU;

    t134 = ((x537|(x538^x539))&x540);

    if (t134 != 255LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -11270;
	uint8_t x542 = 78U;
	uint32_t x543 = UINT32_MAX;
	uint64_t x544 = 186249168762715894LLU;
	static volatile uint64_t t135 = 3120894894002419LLU;

    t135 = ((x541|(x542^x543))&x544);

    if (t135 != 3620749042LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MIN;
	static int16_t x547 = -2;
	uint64_t t136 = UINT64_MAX;

    t136 = ((x545|(x546^x547))&x548);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x550 = 1956U;
	uint8_t x552 = 3U;
	uint32_t t137 = 117402234U;

    t137 = ((x549|(x550^x551))&x552);

    if (t137 != 3U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = UINT64_MAX;
	int64_t x554 = INT64_MIN;
	uint16_t x555 = 74U;
	static int32_t x556 = -3290624;
	uint64_t t138 = 20494674LLU;

    t138 = ((x553|(x554^x555))&x556);

    if (t138 != 18446744073706260992LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x560 = INT8_MIN;
	uint64_t t139 = 133867581782LLU;

    t139 = ((x557|(x558^x559))&x560);

    if (t139 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	int8_t x562 = INT8_MIN;
	static int32_t x563 = -471844995;
	uint64_t x564 = 548381268885977557LLU;
	volatile uint64_t t140 = 342349579616682LLU;

    t140 = ((x561|(x562^x563))&x564);

    if (t140 != 202180821LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = INT32_MAX;
	volatile int8_t x566 = INT8_MAX;
	uint64_t x568 = 5723LLU;
	volatile uint64_t t141 = 3LLU;

    t141 = ((x565|(x566^x567))&x568);

    if (t141 != 5723LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	uint8_t x571 = 12U;

    t142 = ((x569|(x570^x571))&x572);

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x575 = 116U;
	uint16_t x576 = UINT16_MAX;
	int64_t t143 = 77LL;

    t143 = ((x573|(x574^x575))&x576);

    if (t143 != 54271LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x578 = INT8_MAX;
	int64_t x579 = -11696390317040943LL;
	static int32_t x580 = -1;
	int64_t t144 = 34292857238713813LL;

    t144 = ((x577|(x578^x579))&x580);

    if (t144 != -369124690LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x581 = INT64_MIN;
	int16_t x582 = -2947;
	int16_t x583 = 1;
	static uint64_t x584 = UINT64_MAX;
	volatile uint64_t t145 = 7867131775254841LLU;

    t145 = ((x581|(x582^x583))&x584);

    if (t145 != 18446744073709548668LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x585 = 2U;
	uint32_t x586 = 29569702U;
	int16_t x587 = -1;
	uint64_t x588 = 4209956LLU;
	volatile uint64_t t146 = 7980LLU;

    t146 = ((x585|(x586^x587))&x588);

    if (t146 != 3328LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x589 = 36838;
	int64_t x590 = -1LL;
	int64_t x591 = -3LL;
	static int64_t x592 = INT64_MIN;
	int64_t t147 = -8LL;

    t147 = ((x589|(x590^x591))&x592);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = INT16_MAX;
	int16_t x594 = INT16_MIN;
	int32_t x595 = -691664830;
	int64_t x596 = INT64_MIN;
	static volatile int64_t t148 = 5375356LL;

    t148 = ((x593|(x594^x595))&x596);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 2312U;
	int16_t x598 = INT16_MIN;
	int16_t x599 = -1953;
	volatile int32_t x600 = INT32_MAX;
	volatile uint32_t t149 = 158775U;

    t149 = ((x597|(x598^x599))&x600);

    if (t149 != 31071U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -1;
	volatile int64_t x602 = INT64_MIN;
	volatile uint64_t x603 = UINT64_MAX;
	uint16_t x604 = 210U;
	volatile uint64_t t150 = 5616093698670332LLU;

    t150 = ((x601|(x602^x603))&x604);

    if (t150 != 210LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	static int8_t x606 = INT8_MAX;
	int8_t x607 = INT8_MAX;
	uint16_t x608 = 170U;

    t151 = ((x605|(x606^x607))&x608);

    if (t151 != 170) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = 0;
	uint8_t x611 = UINT8_MAX;
	volatile int32_t t152 = 722;

    t152 = ((x609|(x610^x611))&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = 0;
	static uint16_t x614 = 1U;
	static int64_t t153 = 1LL;

    t153 = ((x613|(x614^x615))&x616);

    if (t153 != -3588534693561356075LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x619 = 71U;
	uint32_t x620 = UINT32_MAX;

    t154 = ((x617|(x618^x619))&x620);

    if (t154 != 2963739343LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x621 = 17U;
	int16_t x622 = -1647;
	int64_t x623 = INT64_MIN;
	uint32_t x624 = 15895U;
	volatile int64_t t155 = -436335LL;

    t155 = ((x621|(x622^x623))&x624);

    if (t155 != 14353LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	int32_t x627 = 62870;
	static int64_t x628 = 68451484645152543LL;

    t156 = ((x625|(x626^x627))&x628);

    if (t156 != 68451484645152535LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = 3758696721354867LLU;
	int16_t x631 = -621;
	volatile int16_t x632 = 36;
	uint64_t t157 = 5LLU;

    t157 = ((x629|(x630^x631))&x632);

    if (t157 != 32LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = UINT32_MAX;
	static int32_t x634 = INT32_MIN;
	static int16_t x635 = INT16_MIN;
	volatile uint8_t x636 = 2U;
	static volatile uint32_t t158 = 9751398U;

    t158 = ((x633|(x634^x635))&x636);

    if (t158 != 2U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x637 = 13892U;
	int8_t x639 = INT8_MIN;
	uint64_t x640 = 14LLU;
	volatile uint64_t t159 = 26302LLU;

    t159 = ((x637|(x638^x639))&x640);

    if (t159 != 14LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 35U;
	uint64_t x642 = 1525624749842LLU;
	int64_t x643 = -30487920893234550LL;
	volatile int8_t x644 = INT8_MIN;
	volatile uint64_t t160 = 4644141402LLU;

    t160 = ((x641|(x642^x643))&x644);

    if (t160 != 18416254646191771008LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 99908768LLU;
	uint16_t x646 = 0U;
	int64_t x647 = INT64_MIN;
	uint32_t x648 = 2668U;
	static volatile uint64_t t161 = 66585LLU;

    t161 = ((x645|(x646^x647))&x648);

    if (t161 != 2080LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = 14;
	uint32_t x650 = 64630U;
	int64_t x652 = -3630722LL;

    t162 = ((x649|(x650^x651))&x652);

    if (t162 != 39038LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 4279U;
	static uint64_t x654 = 3318670426420355LLU;
	uint8_t x655 = 1U;
	volatile uint16_t x656 = UINT16_MAX;

    t163 = ((x653|(x654^x655))&x656);

    if (t163 != 46263LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int16_t x658 = -1;
	int8_t x659 = INT8_MAX;
	static uint32_t x660 = 112540U;
	volatile uint32_t t164 = 1515912986U;

    t164 = ((x657|(x658^x659))&x660);

    if (t164 != 112512U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t t165 = 2749070326161632864LL;

    t165 = ((x661|(x662^x663))&x664);

    if (t165 != 492572367439107276LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 1U;
	static int32_t x666 = INT32_MIN;
	int32_t x667 = -7225094;
	int8_t x668 = -40;
	int32_t t166 = -1;

    t166 = ((x665|(x666^x667))&x668);

    if (t166 != 2140258520) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x669 = -1LL;
	uint64_t x670 = 3595217791LLU;
	int64_t x671 = INT64_MIN;
	uint64_t x672 = 16162091268802LLU;

    t167 = ((x669|(x670^x671))&x672);

    if (t167 != 16162091268802LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = 103517237LL;
	int64_t x674 = -686845331LL;
	int16_t x675 = -1;
	int16_t x676 = -1;
	int64_t t168 = 5090941810LL;

    t168 = ((x673|(x674^x675))&x676);

    if (t168 != 788262327LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x677 = INT8_MIN;
	int32_t x679 = 946156223;
	uint64_t x680 = 136925459495LLU;
	volatile uint64_t t169 = 6026899295LLU;

    t169 = ((x677|(x678^x679))&x680);

    if (t169 != 136925459495LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	static volatile int32_t x682 = -1;
	int32_t x683 = INT32_MAX;
	uint64_t x684 = 420LLU;
	volatile uint64_t t170 = 299471LLU;

    t170 = ((x681|(x682^x683))&x684);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x685 = INT32_MIN;
	volatile int64_t x686 = -2501220978LL;
	int64_t t171 = -87976030LL;

    t171 = ((x685|(x686^x687))&x688);

    if (t171 != -1793746432LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = -1;
	volatile int16_t x690 = INT16_MIN;
	static uint64_t x691 = 931543406435822LLU;
	int8_t x692 = 2;
	uint64_t t172 = 107878LLU;

    t172 = ((x689|(x690^x691))&x692);

    if (t172 != 2LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x695 = 7029;
	uint8_t x696 = 22U;
	volatile int64_t t173 = 839477LL;

    t173 = ((x693|(x694^x695))&x696);

    if (t173 != 22LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 140U;
	static int32_t x699 = INT32_MIN;
	int64_t x700 = -1LL;

    t174 = ((x697|(x698^x699))&x700);

    if (t174 != 18446744071562080253LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int32_t x702 = INT32_MIN;
	int64_t x703 = 470LL;
	volatile int16_t x704 = INT16_MIN;

    t175 = ((x701|(x702^x703))&x704);

    if (t175 != -32768LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = -1LL;
	int16_t x706 = 12064;
	int8_t x707 = 21;
	uint8_t x708 = 12U;
	int64_t t176 = -3852210490253315460LL;

    t176 = ((x705|(x706^x707))&x708);

    if (t176 != 12LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = INT32_MAX;
	int64_t x711 = INT64_MIN;
	int32_t x712 = -1;

    t177 = ((x709|(x710^x711))&x712);

    if (t177 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = INT8_MIN;
	static uint64_t x714 = UINT64_MAX;
	static int16_t x716 = INT16_MAX;
	uint64_t t178 = 3LLU;

    t178 = ((x713|(x714^x715))&x716);

    if (t178 != 32640LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x720 = INT64_MIN;
	int64_t t179 = 115049682479760LL;

    t179 = ((x717|(x718^x719))&x720);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x722 = -45;
	uint32_t x724 = UINT32_MAX;
	volatile uint32_t t180 = 2999U;

    t180 = ((x721|(x722^x723))&x724);

    if (t180 != 4294934572U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	volatile int64_t x726 = -30867504589693753LL;
	int32_t x727 = -4307;
	uint64_t x728 = UINT64_MAX;
	static volatile uint64_t t181 = 1421947299863798LLU;

    t181 = ((x725|(x726^x727))&x728);

    if (t181 != 18446744073544659946LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x730 = 25225U;
	volatile int8_t x732 = INT8_MIN;
	int32_t t182 = 16227;

    t182 = ((x729|(x730^x731))&x732);

    if (t182 != -24704) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MIN;
	static int64_t x734 = INT64_MIN;
	int8_t x735 = INT8_MIN;
	volatile uint8_t x736 = UINT8_MAX;
	static int64_t t183 = -5225469904LL;

    t183 = ((x733|(x734^x735))&x736);

    if (t183 != 128LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = -2478672212977LL;
	static int64_t x738 = INT64_MIN;
	uint32_t x739 = UINT32_MAX;
	int32_t x740 = 15933147;

    t184 = ((x737|(x738^x739))&x740);

    if (t184 != 15933147LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = INT8_MAX;
	int32_t x742 = INT32_MIN;
	uint16_t x743 = UINT16_MAX;
	int64_t x744 = INT64_MIN;
	int64_t t185 = INT64_MIN;

    t185 = ((x741|(x742^x743))&x744);

    if (t185 != INT64_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MAX;
	int64_t x746 = INT64_MAX;
	int16_t x747 = 1;
	int16_t x748 = INT16_MIN;
	int64_t t186 = 828164974422LL;

    t186 = ((x745|(x746^x747))&x748);

    if (t186 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x750 = -3;
	uint32_t x751 = 138U;
	volatile int32_t x752 = 920468;
	static volatile uint64_t t187 = 25946997641917247LLU;

    t187 = ((x749|(x750^x751))&x752);

    if (t187 != 920468LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = -15;
	int32_t x754 = -3419;
	uint16_t x755 = 31U;
	volatile uint16_t x756 = 32U;
	volatile int32_t t188 = -9358;

    t188 = ((x753|(x754^x755))&x756);

    if (t188 != 32) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = 62;
	volatile int64_t x758 = INT64_MIN;
	uint32_t x759 = 74U;
	volatile int8_t x760 = INT8_MAX;
	int64_t t189 = 7LL;

    t189 = ((x757|(x758^x759))&x760);

    if (t189 != 126LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x761 = 31092U;
	static uint16_t x762 = 15924U;
	volatile int64_t t190 = 580192850283575LL;

    t190 = ((x761|(x762^x763))&x764);

    if (t190 != -1537LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -5005;
	int8_t x767 = -1;
	volatile int32_t x768 = -1;
	int32_t t191 = -448;

    t191 = ((x765|(x766^x767))&x768);

    if (t191 != -5005) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = INT8_MAX;
	int16_t x770 = 1;
	static volatile int16_t x771 = INT16_MIN;
	uint64_t t192 = 336050881277498792LLU;

    t192 = ((x769|(x770^x771))&x772);

    if (t192 != 141011143417397281LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = UINT16_MAX;
	int32_t x774 = INT32_MIN;
	volatile uint32_t x775 = UINT32_MAX;
	volatile uint32_t t193 = 0U;

    t193 = ((x773|(x774^x775))&x776);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 34443925580LLU;
	int32_t x778 = INT32_MIN;
	static uint32_t x779 = UINT32_MAX;
	volatile uint64_t t194 = 3827588080514022463LLU;

    t194 = ((x777|(x778^x779))&x780);

    if (t194 != 36507222015LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -1;
	int8_t x782 = INT8_MIN;
	volatile int8_t x783 = -31;
	int8_t x784 = INT8_MAX;
	volatile int32_t t195 = 5460;

    t195 = ((x781|(x782^x783))&x784);

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x785 = UINT32_MAX;
	uint32_t x786 = 107426180U;
	uint16_t x787 = 41U;
	volatile uint32_t t196 = 819406U;

    t196 = ((x785|(x786^x787))&x788);

    if (t196 != 2147483648U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x789 = 0U;
	uint64_t x790 = UINT64_MAX;
	uint32_t x791 = UINT32_MAX;
	static int32_t x792 = 29656353;
	volatile uint64_t t197 = 319495835LLU;

    t197 = ((x789|(x790^x791))&x792);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	uint32_t x794 = 3855539U;
	uint64_t x795 = 3LLU;
	volatile int8_t x796 = -1;
	volatile uint64_t t198 = 26LLU;

    t198 = ((x793|(x794^x795))&x796);

    if (t198 != 9223372036858631344LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	static int16_t x798 = -1861;
	static uint16_t x799 = 8122U;
	int64_t x800 = -15544LL;
	int64_t t199 = -1434929062LL;

    t199 = ((x797|(x798^x799))&x800);

    if (t199 != -15616LL) { NG(); } else { ; }
	
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

