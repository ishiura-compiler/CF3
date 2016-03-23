
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

static volatile int32_t x2 = 1;
volatile int8_t x4 = INT8_MAX;
uint16_t x5 = UINT16_MAX;
int8_t x7 = -1;
int8_t x8 = INT8_MIN;
static volatile int32_t x11 = 4;
int16_t x13 = 3890;
volatile int16_t x20 = -1;
uint32_t t4 = 1702218U;
int32_t x21 = INT32_MIN;
int16_t x33 = -1;
static volatile uint16_t x34 = 20U;
int32_t x41 = 340290;
static volatile int64_t x54 = 10796683228867214LL;
static int64_t t16 = -3336724744484580900LL;
volatile int32_t t18 = -4923;
uint8_t x81 = 18U;
int8_t x86 = INT8_MIN;
int16_t x90 = -2;
volatile int64_t x92 = -1LL;
int32_t t22 = -3;
int8_t x97 = INT8_MIN;
int32_t x98 = INT32_MIN;
uint16_t x103 = 2334U;
int8_t x105 = -1;
int64_t x124 = -1LL;
volatile uint16_t x125 = 12U;
static int8_t x126 = 11;
int16_t x128 = INT16_MAX;
volatile int32_t t31 = 153505;
int16_t x136 = -2;
uint16_t x144 = 15395U;
int16_t x150 = INT16_MAX;
static volatile int16_t x159 = INT16_MIN;
volatile uint64_t x161 = UINT64_MAX;
static int32_t x162 = INT32_MAX;
static uint64_t x168 = UINT64_MAX;
int16_t x174 = INT16_MIN;
uint64_t x185 = UINT64_MAX;
static int16_t x187 = -1;
uint8_t x197 = UINT8_MAX;
int64_t x199 = INT64_MIN;
static volatile int16_t x200 = 3624;
int8_t x210 = -5;
static int16_t x216 = INT16_MAX;
int8_t x218 = 6;
volatile int16_t x221 = INT16_MIN;
volatile int16_t x222 = 54;
int32_t x227 = 1;
static uint32_t x229 = UINT32_MAX;
static int32_t t58 = 880;
static int16_t x237 = INT16_MIN;
int64_t x240 = -5601936LL;
int64_t x243 = INT64_MAX;
int32_t x244 = -1;
volatile int32_t x250 = 191930;
int32_t x251 = -3960;
int32_t t62 = 2169;
static int16_t x259 = -1;
int32_t x261 = -1;
int32_t t65 = 5610550;
uint64_t x266 = 37LLU;
int8_t x267 = INT8_MIN;
int32_t t66 = -8010143;
uint32_t x269 = UINT32_MAX;
static volatile int8_t x276 = -1;
uint64_t x278 = UINT64_MAX;
static int64_t x285 = 7LL;
uint32_t x287 = UINT32_MAX;
int64_t x291 = INT64_MIN;
static volatile uint32_t x294 = 1U;
int64_t x295 = INT64_MIN;
int64_t t74 = -4830179129610LL;
int16_t x302 = -3654;
int64_t x309 = INT64_MIN;
int8_t x313 = -1;
int16_t x315 = -1;
int8_t x321 = -1;
int16_t x323 = -1;
volatile int32_t t80 = 236337235;
int32_t x325 = INT32_MAX;
uint16_t x331 = UINT16_MAX;
int32_t t82 = 75;
uint32_t x333 = UINT32_MAX;
int16_t x334 = INT16_MIN;
int16_t x335 = INT16_MIN;
static volatile int32_t x338 = INT32_MIN;
static int32_t t85 = 1007313139;
int32_t x346 = INT32_MIN;
int64_t x349 = INT64_MIN;
int8_t x352 = INT8_MIN;
int8_t x354 = 0;
volatile uint16_t x356 = 4354U;
volatile uint32_t x362 = 14U;
int16_t x364 = INT16_MAX;
uint64_t x365 = 7258434086LLU;
static volatile int64_t x367 = INT64_MIN;
uint32_t x370 = 139U;
int64_t x374 = -1LL;
int64_t x375 = 4142251715LL;
int16_t x378 = INT16_MAX;
uint16_t x380 = 38U;
static int32_t t94 = 959;
uint8_t x381 = 48U;
int16_t x383 = -1;
int64_t x387 = -125984LL;
int32_t x389 = INT32_MAX;
volatile int32_t t98 = -27878468;
int32_t x402 = INT32_MIN;
uint8_t x410 = 1U;
volatile int32_t t102 = -971724343;
volatile uint8_t x429 = 89U;
static int8_t x432 = INT8_MAX;
int32_t t107 = 450134;
int64_t x436 = INT64_MIN;
int64_t t108 = 172054983LL;
uint16_t x437 = UINT16_MAX;
int8_t x442 = 20;
int16_t x443 = -1;
volatile int8_t x447 = 0;
int32_t x453 = INT32_MIN;
uint64_t x454 = UINT64_MAX;
uint64_t x455 = UINT64_MAX;
volatile int16_t x462 = -1;
static int8_t x470 = 14;
int32_t x473 = 396981;
volatile int64_t x477 = 6632872661916LL;
int8_t x480 = INT8_MIN;
volatile int32_t t120 = -2167;
uint32_t x487 = 2752161U;
volatile int32_t x488 = -1;
uint16_t x496 = UINT16_MAX;
static volatile int64_t t125 = 9245029LL;
int64_t x505 = INT64_MIN;
int64_t t126 = -10730803977LL;
int8_t x509 = INT8_MIN;
volatile int32_t t127 = 5622;
uint64_t x516 = 90825962341LLU;
int32_t t128 = 1;
int64_t t129 = 605092LL;
int8_t x523 = 0;
uint16_t x529 = UINT16_MAX;
uint16_t x538 = UINT16_MAX;
volatile uint8_t x545 = UINT8_MAX;
static uint16_t x550 = 5948U;
int64_t x551 = INT64_MAX;
volatile int8_t x554 = -1;
int32_t x562 = 1;
uint64_t x566 = 174897271823331544LLU;
int16_t x568 = INT16_MIN;
static uint8_t x570 = 1U;
int16_t x576 = INT16_MAX;
static int64_t x577 = -314608906LL;
int16_t x580 = INT16_MIN;
uint16_t x582 = 7U;
int64_t x583 = -1LL;
static uint8_t x585 = 22U;
int32_t t148 = 2929558;
uint8_t x598 = UINT8_MAX;
static volatile int16_t x599 = INT16_MAX;
int32_t x600 = -1;
static uint64_t x601 = 1105867989694399832LLU;
int8_t x609 = 2;
int32_t x610 = 1920;
uint32_t x615 = UINT32_MAX;
static uint64_t x620 = 107102373LLU;
int32_t x624 = 59922687;
int64_t x625 = INT64_MAX;
volatile int32_t t157 = -1923;
uint16_t x643 = UINT16_MAX;
volatile int32_t t160 = -28;
static volatile int32_t t161 = 41307279;
int64_t x650 = -2LL;
int8_t x653 = 63;
static int16_t x655 = 63;
uint8_t x663 = 8U;
static int16_t x678 = -45;
uint32_t x680 = UINT32_MAX;
int32_t x684 = -1;
int32_t x689 = INT32_MIN;
volatile int32_t t173 = -101725;
static int8_t x698 = -2;
volatile int16_t x699 = -18;
uint8_t x700 = UINT8_MAX;
int32_t t175 = 468274;
uint64_t t176 = 5563003246398429LLU;
volatile int32_t x710 = -1;
int32_t t177 = -1;
uint64_t x715 = UINT64_MAX;
static uint8_t x717 = UINT8_MAX;
volatile int32_t t179 = -1825;
static int8_t x721 = -1;
int64_t x729 = INT64_MAX;
static uint32_t t183 = 2U;
uint32_t x740 = 1198U;
int64_t x741 = 2597667610683121491LL;
volatile int8_t x744 = INT8_MAX;
uint32_t x747 = UINT32_MAX;
volatile uint32_t x748 = 3173U;
int32_t t186 = 49538363;
int32_t t187 = 44;
volatile int32_t t188 = 384852;
static int16_t x761 = INT16_MIN;
int32_t x762 = -1;
volatile int32_t x766 = INT32_MIN;
static int64_t t191 = -22184098449165373LL;
static int32_t t192 = -49740591;
uint8_t x773 = UINT8_MAX;
int8_t x776 = -3;
volatile int32_t t195 = 163589;
int8_t x788 = INT8_MIN;
int16_t x795 = INT16_MIN;
int64_t x797 = 155884023370916LL;


void f0(void) {
    	static int64_t x1 = -7416156892383LL;
	static int16_t x3 = INT16_MIN;
	volatile int64_t t0 = 11LL;

    t0 = (x1&(x2<=(x3^x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MAX;
	int32_t t1 = -387;

    t1 = (x5&(x6<=(x7^x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 4U;
	static int32_t x10 = 695381;
	uint8_t x12 = UINT8_MAX;
	volatile uint32_t t2 = 22503U;

    t2 = (x9&(x10<=(x11^x12)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = UINT32_MAX;
	volatile int64_t x15 = INT64_MIN;
	volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -473;

    t3 = (x13&(x14<=(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	volatile uint64_t x18 = 688908035416998LLU;
	static int16_t x19 = INT16_MIN;

    t4 = (x17&(x18<=(x19^x20)));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = INT32_MIN;
	static int64_t x23 = INT64_MIN;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 67690032;

    t5 = (x21&(x22<=(x23^x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 15LLU;
	static uint16_t x26 = UINT16_MAX;
	int32_t x27 = INT32_MAX;
	int16_t x28 = -645;
	uint64_t t6 = 1456279LLU;

    t6 = (x25&(x26<=(x27^x28)));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 1268U;
	int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MAX;
	volatile int8_t x32 = -1;
	volatile int32_t t7 = -88129;

    t7 = (x29&(x30<=(x31^x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x35 = 28U;
	int8_t x36 = INT8_MIN;
	static int32_t t8 = 1663;

    t8 = (x33&(x34<=(x35^x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = UINT16_MAX;
	volatile int16_t x38 = INT16_MIN;
	uint64_t x39 = UINT64_MAX;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -4067775;

    t9 = (x37&(x38<=(x39^x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x42 = 7;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = 0U;
	int32_t t10 = -4503;

    t10 = (x41&(x42<=(x43^x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	static int64_t x46 = -1LL;
	int64_t x47 = 43345349305LL;
	int8_t x48 = INT8_MAX;
	int64_t t11 = -7346857LL;

    t11 = (x45&(x46<=(x47^x48)));

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = 57375LLU;
	int8_t x50 = -1;
	int8_t x51 = -6;
	static int16_t x52 = -419;
	static uint64_t t12 = 296135178434LLU;

    t12 = (x49&(x50<=(x51^x52)));

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	int16_t x55 = 34;
	uint16_t x56 = 506U;
	static int64_t t13 = 818894913LL;

    t13 = (x53&(x54<=(x55^x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	static uint64_t x58 = 9466110LLU;
	uint64_t x59 = 0LLU;
	int8_t x60 = INT8_MIN;
	static volatile int64_t t14 = -32702101035638245LL;

    t14 = (x57&(x58<=(x59^x60)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = UINT32_MAX;
	int64_t x62 = 2481254888LL;
	int16_t x63 = INT16_MIN;
	uint32_t x64 = 22430U;
	static volatile uint32_t t15 = 9U;

    t15 = (x61&(x62<=(x63^x64)));

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 4836027131318758LL;
	int64_t x66 = INT64_MIN;
	static uint64_t x67 = 1284101308112755308LLU;
	static int32_t x68 = INT32_MIN;

    t16 = (x65&(x66<=(x67^x68)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 115670369U;
	volatile int16_t x70 = -1;
	volatile int16_t x71 = INT16_MAX;
	volatile int32_t x72 = -5;
	uint32_t t17 = 1501592U;

    t17 = (x69&(x70<=(x71^x72)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x73 = UINT16_MAX;
	int16_t x74 = INT16_MIN;
	uint16_t x75 = 3U;
	static volatile int64_t x76 = INT64_MAX;

    t18 = (x73&(x74<=(x75^x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = 6395LLU;
	static int64_t x78 = INT64_MIN;
	volatile int64_t x79 = INT64_MAX;
	static int32_t x80 = 1613436;
	volatile uint64_t t19 = 2919971658LLU;

    t19 = (x77&(x78<=(x79^x80)));

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = INT8_MAX;
	int16_t x83 = -1;
	static int8_t x84 = INT8_MAX;
	volatile int32_t t20 = 1016993404;

    t20 = (x81&(x82<=(x83^x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	int32_t x87 = 50904;
	static int32_t x88 = -32;
	volatile uint32_t t21 = 94U;

    t21 = (x85&(x86<=(x87^x88)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 4007U;
	volatile int8_t x91 = INT8_MAX;

    t22 = (x89&(x90<=(x91^x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	static int16_t x94 = INT16_MIN;
	static volatile int64_t x95 = INT64_MAX;
	static int8_t x96 = -54;
	static int64_t t23 = -342LL;

    t23 = (x93&(x94<=(x95^x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x99 = 2;
	static volatile int64_t x100 = 1818LL;
	static volatile int32_t t24 = 3438;

    t24 = (x97&(x98<=(x99^x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x101 = 4U;
	int64_t x102 = INT64_MIN;
	uint8_t x104 = 15U;
	int32_t t25 = 1703436;

    t25 = (x101&(x102<=(x103^x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MAX;
	uint64_t x107 = 35LLU;
	volatile uint32_t x108 = 210156685U;
	volatile int32_t t26 = 143785;

    t26 = (x105&(x106<=(x107^x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x109 = 5;
	static uint8_t x110 = 91U;
	static int8_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	int32_t t27 = -8188509;

    t27 = (x109&(x110<=(x111^x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 6833U;
	static uint64_t x114 = UINT64_MAX;
	int8_t x115 = INT8_MIN;
	static volatile uint32_t x116 = 9382U;
	volatile int32_t t28 = -576767;

    t28 = (x113&(x114<=(x115^x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = UINT64_MAX;
	volatile int64_t x118 = -1LL;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = 18U;
	static volatile uint64_t t29 = 2012192380392927LLU;

    t29 = (x117&(x118<=(x119^x120)));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = INT8_MIN;
	static int64_t x122 = -1LL;
	int32_t x123 = INT32_MIN;
	volatile int32_t t30 = -7602872;

    t30 = (x121&(x122<=(x123^x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x127 = UINT8_MAX;

    t31 = (x125&(x126<=(x127^x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	uint8_t x130 = 1U;
	static volatile int16_t x131 = INT16_MIN;
	int32_t x132 = -1;
	volatile int32_t t32 = 146;

    t32 = (x129&(x130<=(x131^x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	uint16_t x134 = 9U;
	int64_t x135 = -1LL;
	uint32_t t33 = 268619U;

    t33 = (x133&(x134<=(x135^x136)));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 56001U;
	int16_t x138 = 63;
	static uint8_t x139 = UINT8_MAX;
	volatile int64_t x140 = 64391LL;
	volatile uint32_t t34 = 40U;

    t34 = (x137&(x138<=(x139^x140)));

    if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x141 = UINT16_MAX;
	static int16_t x142 = -1;
	int32_t x143 = INT32_MIN;
	static int32_t t35 = 26;

    t35 = (x141&(x142<=(x143^x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = INT32_MAX;
	static int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 87655;

    t36 = (x145&(x146<=(x147^x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x149 = UINT32_MAX;
	int32_t x151 = 64341124;
	int64_t x152 = INT64_MIN;
	volatile uint32_t t37 = 42702U;

    t37 = (x149&(x150<=(x151^x152)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = -24;
	int32_t x154 = INT32_MIN;
	int16_t x155 = INT16_MIN;
	int64_t x156 = 26770293LL;
	static int32_t t38 = -1059056011;

    t38 = (x153&(x154<=(x155^x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = -1;
	static int8_t x158 = 1;
	static uint32_t x160 = UINT32_MAX;
	static int32_t t39 = 52386;

    t39 = (x157&(x158<=(x159^x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x163 = 28U;
	uint16_t x164 = UINT16_MAX;
	static uint64_t t40 = 5LLU;

    t40 = (x161&(x162<=(x163^x164)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MIN;
	int8_t x167 = -1;
	volatile int32_t t41 = 31700;

    t41 = (x165&(x166<=(x167^x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -1;
	int8_t x170 = INT8_MIN;
	uint64_t x171 = 13186153730680893LLU;
	uint16_t x172 = 3861U;
	volatile int32_t t42 = 6825;

    t42 = (x169&(x170<=(x171^x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x173 = -3914451LL;
	volatile uint64_t x175 = 318LLU;
	static int16_t x176 = INT16_MAX;
	volatile int64_t t43 = -4195766504062368696LL;

    t43 = (x173&(x174<=(x175^x176)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = INT64_MIN;
	uint32_t x178 = 3054272U;
	volatile int32_t x179 = INT32_MAX;
	static int16_t x180 = INT16_MAX;
	static volatile int64_t t44 = 787LL;

    t44 = (x177&(x178<=(x179^x180)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	volatile uint64_t x182 = 1514LLU;
	uint16_t x183 = 127U;
	int16_t x184 = 5;
	int32_t t45 = -2;

    t45 = (x181&(x182<=(x183^x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = UINT64_MAX;
	uint8_t x188 = 5U;
	volatile uint64_t t46 = 7698837633748LLU;

    t46 = (x185&(x186<=(x187^x188)));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = INT64_MIN;
	uint64_t x190 = 3588456687LLU;
	int32_t x191 = -39;
	volatile int64_t x192 = INT64_MIN;
	int64_t t47 = 1LL;

    t47 = (x189&(x190<=(x191^x192)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MAX;
	int32_t x194 = INT32_MIN;
	int64_t x195 = 4888227408245LL;
	volatile int32_t x196 = -1;
	int32_t t48 = 52;

    t48 = (x193&(x194<=(x195^x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x198 = UINT32_MAX;
	volatile int32_t t49 = 471716;

    t49 = (x197&(x198<=(x199^x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 1U;
	volatile int8_t x202 = -3;
	volatile int16_t x203 = 6;
	int8_t x204 = INT8_MAX;
	int32_t t50 = -335896158;

    t50 = (x201&(x202<=(x203^x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MAX;
	int32_t x206 = 5259482;
	int8_t x207 = -1;
	uint64_t x208 = 45451LLU;
	static int32_t t51 = -77;

    t51 = (x205&(x206<=(x207^x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = -1;
	volatile uint64_t x211 = UINT64_MAX;
	uint8_t x212 = 4U;
	volatile int32_t t52 = -1585504;

    t52 = (x209&(x210<=(x211^x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	static uint8_t x214 = UINT8_MAX;
	int8_t x215 = INT8_MIN;
	static int32_t t53 = -152243527;

    t53 = (x213&(x214<=(x215^x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = -3;
	volatile uint8_t x219 = UINT8_MAX;
	int16_t x220 = INT16_MIN;
	static int32_t t54 = 266528;

    t54 = (x217&(x218<=(x219^x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x223 = INT16_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = -1;

    t55 = (x221&(x222<=(x223^x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	uint64_t x226 = 305074006942626LLU;
	volatile uint32_t x228 = 7051U;
	int64_t t56 = -1314LL;

    t56 = (x225&(x226<=(x227^x228)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x230 = -1;
	uint16_t x231 = 28U;
	static int32_t x232 = -1;
	volatile uint32_t t57 = 1U;

    t57 = (x229&(x230<=(x231^x232)));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MAX;
	int8_t x234 = 61;
	static volatile int64_t x235 = INT64_MIN;
	int16_t x236 = -1;

    t58 = (x233&(x234<=(x235^x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = 0;
	int64_t x239 = 3414244714120291LL;
	static volatile int32_t t59 = -388591;

    t59 = (x237&(x238<=(x239^x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = INT32_MIN;
	uint64_t x242 = 3554965LLU;
	int32_t t60 = -1;

    t60 = (x241&(x242<=(x243^x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1688;
	volatile int16_t x246 = -14360;
	static int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MAX;
	volatile int32_t t61 = 818;

    t61 = (x245&(x246<=(x247^x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x249 = INT16_MIN;
	uint32_t x252 = 881844U;

    t62 = (x249&(x250<=(x251^x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = INT64_MIN;
	volatile int16_t x254 = INT16_MAX;
	uint8_t x255 = 11U;
	int32_t x256 = -1;
	volatile int64_t t63 = -2937215399LL;

    t63 = (x253&(x254<=(x255^x256)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 57796937LLU;
	volatile int64_t x258 = -1LL;
	uint64_t x260 = 351591790800830LLU;
	uint64_t t64 = 3601399LLU;

    t64 = (x257&(x258<=(x259^x260)));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = INT8_MIN;
	static int8_t x263 = -1;
	static volatile uint16_t x264 = UINT16_MAX;

    t65 = (x261&(x262<=(x263^x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = INT32_MAX;
	uint32_t x268 = 15003U;

    t66 = (x265&(x266<=(x267^x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x270 = UINT16_MAX;
	uint32_t x271 = 4U;
	volatile int32_t x272 = INT32_MIN;
	static uint32_t t67 = 1U;

    t67 = (x269&(x270<=(x271^x272)));

    if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -773;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = 0U;
	int32_t t68 = -367073701;

    t68 = (x273&(x274<=(x275^x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 32412300U;
	uint64_t x279 = 425LLU;
	int8_t x280 = 10;
	static volatile uint32_t t69 = 144351U;

    t69 = (x277&(x278<=(x279^x280)));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = INT32_MIN;
	int16_t x282 = -1;
	int16_t x283 = 402;
	uint8_t x284 = 7U;
	volatile int32_t t70 = 1;

    t70 = (x281&(x282<=(x283^x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = INT64_MAX;
	int64_t x288 = 206079056140LL;
	volatile int64_t t71 = -110213075341LL;

    t71 = (x285&(x286<=(x287^x288)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 265LL;
	int64_t x290 = INT64_MIN;
	static volatile int8_t x292 = -32;
	int64_t t72 = 4LL;

    t72 = (x289&(x290<=(x291^x292)));

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = 2347893LL;
	static uint16_t x296 = 24U;
	volatile int64_t t73 = -56470785302LL;

    t73 = (x293&(x294<=(x295^x296)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = INT64_MIN;
	volatile int8_t x298 = 1;
	int8_t x299 = INT8_MIN;
	volatile int64_t x300 = INT64_MIN;

    t74 = (x297&(x298<=(x299^x300)));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MAX;
	int64_t x303 = INT64_MAX;
	static int64_t x304 = INT64_MIN;
	int32_t t75 = 10974;

    t75 = (x301&(x302<=(x303^x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x305 = -1;
	volatile int32_t x306 = INT32_MIN;
	volatile uint8_t x307 = UINT8_MAX;
	uint32_t x308 = 2099755U;
	volatile int32_t t76 = 441546;

    t76 = (x305&(x306<=(x307^x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x310 = INT16_MIN;
	static int16_t x311 = 1239;
	static int16_t x312 = -46;
	volatile int64_t t77 = 438550018063721426LL;

    t77 = (x309&(x310<=(x311^x312)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x314 = UINT16_MAX;
	volatile int32_t x316 = -1;
	int32_t t78 = -25;

    t78 = (x313&(x314<=(x315^x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	int8_t x318 = INT8_MIN;
	int16_t x319 = 7691;
	int32_t x320 = INT32_MIN;
	uint64_t t79 = 2LLU;

    t79 = (x317&(x318<=(x319^x320)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x322 = 13754U;
	static int64_t x324 = -739601808879675LL;

    t80 = (x321&(x322<=(x323^x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x326 = INT64_MIN;
	int8_t x327 = INT8_MAX;
	int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 167;

    t81 = (x325&(x326<=(x327^x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 1U;
	static volatile int16_t x330 = INT16_MIN;
	static int16_t x332 = 14130;

    t82 = (x329&(x330<=(x331^x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x336 = -1;
	static uint32_t t83 = 12U;

    t83 = (x333&(x334<=(x335^x336)));

    if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 85LL;
	uint8_t x339 = 3U;
	static uint32_t x340 = 4U;
	volatile int64_t t84 = 58LL;

    t84 = (x337&(x338<=(x339^x340)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	static int8_t x342 = INT8_MIN;
	int32_t x343 = INT32_MAX;
	static uint16_t x344 = 163U;

    t85 = (x341&(x342<=(x343^x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = -206;
	int8_t x347 = -1;
	static uint16_t x348 = 17U;
	volatile int32_t t86 = 555;

    t86 = (x345&(x346<=(x347^x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x350 = 67U;
	static uint8_t x351 = 46U;
	int64_t t87 = -1387648387318666430LL;

    t87 = (x349&(x350<=(x351^x352)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x353 = 83U;
	uint8_t x355 = 93U;
	volatile int32_t t88 = 1528882;

    t88 = (x353&(x354<=(x355^x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -5712LL;
	static int64_t x358 = -1LL;
	int64_t x359 = INT64_MAX;
	volatile int32_t x360 = 1659492;
	int64_t t89 = 2500LL;

    t89 = (x357&(x358<=(x359^x360)));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	static int32_t x363 = INT32_MAX;
	int64_t t90 = 128039LL;

    t90 = (x361&(x362<=(x363^x364)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x366 = -76;
	volatile int64_t x368 = INT64_MIN;
	volatile uint64_t t91 = 3164745LLU;

    t91 = (x365&(x366<=(x367^x368)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	static uint64_t x371 = 2901859502LLU;
	static volatile int16_t x372 = 11;
	int64_t t92 = 342497711556LL;

    t92 = (x369&(x370<=(x371^x372)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MAX;
	volatile int32_t x376 = INT32_MIN;
	volatile int32_t t93 = -18816169;

    t93 = (x373&(x374<=(x375^x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x377 = 17U;
	uint8_t x379 = 31U;

    t94 = (x377&(x378<=(x379^x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x382 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = 33792;

    t95 = (x381&(x382<=(x383^x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = INT8_MAX;
	int32_t x386 = INT32_MIN;
	int8_t x388 = INT8_MAX;
	static int32_t t96 = -98571431;

    t96 = (x385&(x386<=(x387^x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x390 = INT32_MIN;
	uint16_t x391 = UINT16_MAX;
	static uint32_t x392 = UINT32_MAX;
	int32_t t97 = -312;

    t97 = (x389&(x390<=(x391^x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MIN;
	volatile int8_t x395 = -2;
	uint32_t x396 = 24855U;

    t98 = (x393&(x394<=(x395^x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x397 = 0;
	uint64_t x398 = 22515726110227253LLU;
	int32_t x399 = -1;
	int32_t x400 = 1710;
	volatile int32_t t99 = 251;

    t99 = (x397&(x398<=(x399^x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = 1732LL;
	int64_t x403 = -1225649LL;
	static int32_t x404 = -1;
	static volatile int64_t t100 = 1LL;

    t100 = (x401&(x402<=(x403^x404)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 264703U;
	int32_t x406 = 295;
	uint8_t x407 = 71U;
	uint8_t x408 = 7U;
	uint32_t t101 = 13020744U;

    t101 = (x405&(x406<=(x407^x408)));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int64_t x411 = -80508LL;
	volatile uint8_t x412 = 14U;

    t102 = (x409&(x410<=(x411^x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x413 = -8;
	static volatile int8_t x414 = INT8_MAX;
	static uint64_t x415 = UINT64_MAX;
	uint8_t x416 = 29U;
	int32_t t103 = 126130002;

    t103 = (x413&(x414<=(x415^x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	uint16_t x418 = UINT16_MAX;
	int64_t x419 = INT64_MAX;
	volatile int32_t x420 = 9577015;
	int32_t t104 = 7787122;

    t104 = (x417&(x418<=(x419^x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = 10650232430LL;
	static int16_t x422 = INT16_MIN;
	volatile uint8_t x423 = 1U;
	volatile uint16_t x424 = UINT16_MAX;
	static volatile int64_t t105 = 910980422627868LL;

    t105 = (x421&(x422<=(x423^x424)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = INT16_MIN;
	uint16_t x426 = UINT16_MAX;
	int16_t x427 = INT16_MIN;
	int32_t x428 = -1;
	int32_t t106 = 25120044;

    t106 = (x425&(x426<=(x427^x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x430 = 4006143001149501LLU;
	volatile uint64_t x431 = 1634LLU;

    t107 = (x429&(x430<=(x431^x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -125754079016LL;
	volatile uint8_t x434 = UINT8_MAX;
	uint16_t x435 = UINT16_MAX;

    t108 = (x433&(x434<=(x435^x436)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = -1;
	static int8_t x439 = -1;
	uint16_t x440 = 4U;
	volatile int32_t t109 = -2170783;

    t109 = (x437&(x438<=(x439^x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	volatile int16_t x444 = INT16_MIN;
	int32_t t110 = -44375294;

    t110 = (x441&(x442<=(x443^x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	int32_t x446 = INT32_MIN;
	int8_t x448 = INT8_MAX;
	int32_t t111 = -328966062;

    t111 = (x445&(x446<=(x447^x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	int16_t x450 = INT16_MIN;
	uint64_t x451 = 20403854628LLU;
	uint32_t x452 = 43U;
	static int64_t t112 = 0LL;

    t112 = (x449&(x450<=(x451^x452)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x456 = -3;
	volatile int32_t t113 = 1;

    t113 = (x453&(x454<=(x455^x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	int64_t x458 = -1LL;
	int64_t x459 = INT64_MAX;
	int64_t x460 = INT64_MAX;
	static volatile int32_t t114 = 1;

    t114 = (x457&(x458<=(x459^x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x461 = 0;
	uint32_t x463 = 513U;
	uint8_t x464 = 0U;
	volatile int32_t t115 = 0;

    t115 = (x461&(x462<=(x463^x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	int8_t x466 = -1;
	int16_t x467 = 15;
	int16_t x468 = -1;
	uint64_t t116 = 798129572LLU;

    t116 = (x465&(x466<=(x467^x468)));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x471 = -1;
	uint64_t x472 = 29969268LLU;
	volatile int32_t t117 = -35537;

    t117 = (x469&(x470<=(x471^x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x474 = 18845598LLU;
	volatile uint32_t x475 = 3U;
	int8_t x476 = -1;
	volatile int32_t t118 = 1;

    t118 = (x473&(x474<=(x475^x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = -1;
	uint32_t x479 = 9062U;
	volatile int64_t t119 = 3688409634LL;

    t119 = (x477&(x478<=(x479^x480)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint8_t x481 = 5U;
	static uint32_t x482 = 101U;
	int64_t x483 = INT64_MIN;
	int8_t x484 = INT8_MAX;

    t120 = (x481&(x482<=(x483^x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 394339906LLU;
	int16_t x486 = 457;
	static volatile uint64_t t121 = 167221LLU;

    t121 = (x485&(x486<=(x487^x488)));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 13573;
	static int64_t x490 = -1LL;
	volatile int8_t x491 = INT8_MIN;
	int8_t x492 = INT8_MIN;
	int32_t t122 = -22001308;

    t122 = (x489&(x490<=(x491^x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = INT16_MIN;
	uint16_t x494 = 191U;
	uint64_t x495 = 67950628846199LLU;
	int32_t t123 = 0;

    t123 = (x493&(x494<=(x495^x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x497 = INT16_MIN;
	uint8_t x498 = UINT8_MAX;
	volatile uint16_t x499 = UINT16_MAX;
	int16_t x500 = -1;
	int32_t t124 = -5;

    t124 = (x497&(x498<=(x499^x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -3446625LL;
	volatile int64_t x502 = INT64_MAX;
	static uint16_t x503 = 112U;
	uint16_t x504 = 0U;

    t125 = (x501&(x502<=(x503^x504)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x506 = 5322;
	volatile uint8_t x507 = 20U;
	volatile int8_t x508 = -1;

    t126 = (x505&(x506<=(x507^x508)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x510 = -1;
	uint8_t x511 = 43U;
	volatile int32_t x512 = -1;

    t127 = (x509&(x510<=(x511^x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	uint64_t x514 = UINT64_MAX;
	int8_t x515 = INT8_MIN;

    t128 = (x513&(x514<=(x515^x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MAX;
	static volatile int16_t x518 = -1;
	uint16_t x519 = 17494U;
	static int16_t x520 = INT16_MIN;

    t129 = (x517&(x518<=(x519^x520)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	int16_t x522 = INT16_MAX;
	int32_t x524 = -1;
	static volatile int32_t t130 = -91298;

    t130 = (x521&(x522<=(x523^x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	volatile int16_t x526 = -1;
	int16_t x527 = 1;
	int8_t x528 = 17;
	static volatile int32_t t131 = 763;

    t131 = (x525&(x526<=(x527^x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x530 = INT8_MIN;
	int8_t x531 = INT8_MAX;
	int32_t x532 = -1;
	int32_t t132 = 131663422;

    t132 = (x529&(x530<=(x531^x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = INT16_MIN;
	static int32_t x534 = INT32_MIN;
	static int16_t x535 = INT16_MIN;
	static int8_t x536 = -4;
	static int32_t t133 = 1030804;

    t133 = (x533&(x534<=(x535^x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x537 = 16857019U;
	int8_t x539 = -40;
	volatile int64_t x540 = INT64_MIN;
	volatile uint32_t t134 = 1745U;

    t134 = (x537&(x538<=(x539^x540)));

    if (t134 != 1U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = UINT32_MAX;
	int32_t x542 = INT32_MIN;
	static uint8_t x543 = 2U;
	uint64_t x544 = 3LLU;
	volatile uint32_t t135 = 12U;

    t135 = (x541&(x542<=(x543^x544)));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MIN;
	uint32_t x547 = 13398318U;
	int32_t x548 = INT32_MIN;
	volatile int32_t t136 = -969296750;

    t136 = (x545&(x546<=(x547^x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	static int64_t x552 = INT64_MIN;
	volatile int64_t t137 = 233233808883627LL;

    t137 = (x549&(x550<=(x551^x552)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MAX;
	int64_t x555 = INT64_MIN;
	uint8_t x556 = 58U;
	static int32_t t138 = -23673;

    t138 = (x553&(x554<=(x555^x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 3418323471479LLU;
	uint8_t x558 = 2U;
	volatile int64_t x559 = INT64_MAX;
	int16_t x560 = INT16_MIN;
	volatile uint64_t t139 = 4286435609LLU;

    t139 = (x557&(x558<=(x559^x560)));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x561 = 1267U;
	uint64_t x563 = 24452111LLU;
	static volatile int8_t x564 = -1;
	uint32_t t140 = 1118792465U;

    t140 = (x561&(x562<=(x563^x564)));

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = -3;
	volatile int32_t x567 = -1769;
	volatile int32_t t141 = -272;

    t141 = (x565&(x566<=(x567^x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = UINT16_MAX;
	uint64_t x571 = 1430LLU;
	uint16_t x572 = 2009U;
	int32_t t142 = -58;

    t142 = (x569&(x570<=(x571^x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x573 = UINT64_MAX;
	int8_t x574 = INT8_MAX;
	int32_t x575 = 394;
	uint64_t t143 = 225997052983201031LLU;

    t143 = (x573&(x574<=(x575^x576)));

    if (t143 != 1LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x578 = UINT16_MAX;
	int64_t x579 = -1LL;
	int64_t t144 = 66812293151LL;

    t144 = (x577&(x578<=(x579^x580)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 2U;
	volatile int16_t x584 = -1;
	volatile int32_t t145 = -410202737;

    t145 = (x581&(x582<=(x583^x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = -1;
	volatile uint32_t x587 = UINT32_MAX;
	volatile int32_t x588 = INT32_MIN;
	int32_t t146 = -21;

    t146 = (x585&(x586<=(x587^x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x589 = UINT64_MAX;
	int32_t x590 = INT32_MIN;
	static int64_t x591 = -1LL;
	volatile int16_t x592 = -1;
	static volatile uint64_t t147 = 2744006373LLU;

    t147 = (x589&(x590<=(x591^x592)));

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -1;
	static uint32_t x594 = 55275U;
	int16_t x595 = -1;
	uint32_t x596 = UINT32_MAX;

    t148 = (x593&(x594<=(x595^x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	int64_t t149 = 993983LL;

    t149 = (x597&(x598<=(x599^x600)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x602 = INT32_MIN;
	static volatile int64_t x603 = -3427413LL;
	volatile int64_t x604 = 1LL;
	volatile uint64_t t150 = 1511141744LLU;

    t150 = (x601&(x602<=(x603^x604)));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	int16_t x606 = 35;
	static uint16_t x607 = UINT16_MAX;
	int32_t x608 = INT32_MIN;
	volatile int32_t t151 = -14;

    t151 = (x605&(x606<=(x607^x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x611 = 28U;
	int8_t x612 = -7;
	volatile int32_t t152 = -253;

    t152 = (x609&(x610<=(x611^x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	uint8_t x614 = 7U;
	volatile uint16_t x616 = UINT16_MAX;
	static int32_t t153 = 2167365;

    t153 = (x613&(x614<=(x615^x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x617 = UINT8_MAX;
	int64_t x618 = -2469184283LL;
	static int16_t x619 = INT16_MIN;
	int32_t t154 = 129192;

    t154 = (x617&(x618<=(x619^x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x621 = 1348414713U;
	static uint32_t x622 = 4277823U;
	int16_t x623 = INT16_MIN;
	volatile uint32_t t155 = 238U;

    t155 = (x621&(x622<=(x623^x624)));

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x626 = -15;
	static uint8_t x627 = 1U;
	int32_t x628 = INT32_MIN;
	int64_t t156 = -497610837LL;

    t156 = (x625&(x626<=(x627^x628)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -1;
	static uint8_t x630 = 119U;
	int8_t x631 = INT8_MIN;
	volatile int64_t x632 = -1LL;

    t157 = (x629&(x630<=(x631^x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x633 = INT8_MIN;
	int64_t x634 = INT64_MIN;
	uint64_t x635 = UINT64_MAX;
	volatile int32_t x636 = INT32_MIN;
	volatile int32_t t158 = 1;

    t158 = (x633&(x634<=(x635^x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = INT8_MAX;
	static int8_t x638 = -1;
	int16_t x639 = -1;
	int8_t x640 = 0;
	int32_t t159 = -23618204;

    t159 = (x637&(x638<=(x639^x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -2169;
	int8_t x642 = -1;
	volatile uint8_t x644 = 62U;

    t160 = (x641&(x642<=(x643^x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	int32_t x646 = 0;
	static int32_t x647 = INT32_MAX;
	volatile int32_t x648 = 35;

    t161 = (x645&(x646<=(x647^x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x649 = -1;
	static volatile int16_t x651 = -1;
	uint8_t x652 = UINT8_MAX;
	volatile int32_t t162 = 2606;

    t162 = (x649&(x650<=(x651^x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x654 = UINT16_MAX;
	uint64_t x656 = 85674644810058448LLU;
	volatile int32_t t163 = 1042586435;

    t163 = (x653&(x654<=(x655^x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint64_t x657 = 257023151LLU;
	uint64_t x658 = UINT64_MAX;
	uint16_t x659 = 31U;
	int8_t x660 = INT8_MIN;
	uint64_t t164 = 7696LLU;

    t164 = (x657&(x658<=(x659^x660)));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x661 = INT64_MIN;
	int8_t x662 = -17;
	int16_t x664 = INT16_MAX;
	volatile int64_t t165 = 8273427949LL;

    t165 = (x661&(x662<=(x663^x664)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	int8_t x666 = -1;
	int16_t x667 = INT16_MAX;
	volatile uint8_t x668 = UINT8_MAX;
	int32_t t166 = 1298860;

    t166 = (x665&(x666<=(x667^x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = UINT32_MAX;
	int64_t x670 = INT64_MIN;
	uint64_t x671 = 8939565367531414LLU;
	volatile uint64_t x672 = 1311225341931293LLU;
	uint32_t t167 = 31016883U;

    t167 = (x669&(x670<=(x671^x672)));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x673 = -1;
	volatile int32_t x674 = INT32_MAX;
	static int32_t x675 = -1;
	uint32_t x676 = UINT32_MAX;
	volatile int32_t t168 = 56;

    t168 = (x673&(x674<=(x675^x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = 31475LL;
	uint8_t x679 = UINT8_MAX;
	int64_t t169 = 2814858991LL;

    t169 = (x677&(x678<=(x679^x680)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x681 = 455LLU;
	int32_t x682 = -386647;
	int16_t x683 = INT16_MIN;
	uint64_t t170 = 110090LLU;

    t170 = (x681&(x682<=(x683^x684)));

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	int32_t x686 = 103067560;
	uint32_t x687 = 3585907U;
	volatile int32_t x688 = INT32_MIN;
	static int32_t t171 = 243690684;

    t171 = (x685&(x686<=(x687^x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x690 = INT8_MAX;
	int64_t x691 = INT64_MAX;
	int32_t x692 = INT32_MIN;
	volatile int32_t t172 = -4276346;

    t172 = (x689&(x690<=(x691^x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x693 = 6;
	uint16_t x694 = 42U;
	int16_t x695 = INT16_MIN;
	static int32_t x696 = INT32_MIN;

    t173 = (x693&(x694<=(x695^x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	static volatile int32_t t174 = -783631661;

    t174 = (x697&(x698<=(x699^x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 13U;
	uint8_t x702 = UINT8_MAX;
	uint8_t x703 = 10U;
	static volatile int64_t x704 = INT64_MIN;

    t175 = (x701&(x702<=(x703^x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 842099151LLU;
	volatile int64_t x706 = -438209LL;
	uint16_t x707 = UINT16_MAX;
	static int16_t x708 = -1;

    t176 = (x705&(x706<=(x707^x708)));

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x709 = UINT8_MAX;
	int32_t x711 = -228004;
	uint64_t x712 = UINT64_MAX;

    t177 = (x709&(x710<=(x711^x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = -166190LL;
	int16_t x714 = INT16_MIN;
	static volatile uint8_t x716 = UINT8_MAX;
	int64_t t178 = 918186399LL;

    t178 = (x713&(x714<=(x715^x716)));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x718 = 305439U;
	static uint32_t x719 = UINT32_MAX;
	int32_t x720 = -9679;

    t179 = (x717&(x718<=(x719^x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = INT32_MIN;
	int16_t x723 = -1;
	int16_t x724 = INT16_MIN;
	volatile int32_t t180 = 1;

    t180 = (x721&(x722<=(x723^x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MAX;
	int64_t x726 = 15LL;
	int16_t x727 = INT16_MIN;
	volatile uint16_t x728 = UINT16_MAX;
	int32_t t181 = -1465407;

    t181 = (x725&(x726<=(x727^x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x730 = 167U;
	static uint64_t x731 = 882642139LLU;
	int64_t x732 = -396598008101452884LL;
	static volatile int64_t t182 = -53960585895LL;

    t182 = (x729&(x730<=(x731^x732)));

    if (t182 != 1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 1255151U;
	int16_t x734 = 11422;
	uint64_t x735 = UINT64_MAX;
	uint64_t x736 = 31616876569525LLU;

    t183 = (x733&(x734<=(x735^x736)));

    if (t183 != 1U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = INT32_MIN;
	int32_t x738 = INT32_MIN;
	volatile int16_t x739 = INT16_MIN;
	static int32_t t184 = 15914445;

    t184 = (x737&(x738<=(x739^x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = INT32_MIN;
	uint64_t x743 = UINT64_MAX;
	volatile int64_t t185 = -1935692675207LL;

    t185 = (x741&(x742<=(x743^x744)));

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 3U;
	int16_t x746 = INT16_MIN;

    t186 = (x745&(x746<=(x747^x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x749 = 109U;
	uint8_t x750 = 0U;
	int8_t x751 = INT8_MAX;
	uint16_t x752 = 1142U;

    t187 = (x749&(x750<=(x751^x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = INT16_MIN;
	uint32_t x754 = UINT32_MAX;
	volatile int64_t x755 = INT64_MAX;
	int64_t x756 = -1LL;

    t188 = (x753&(x754<=(x755^x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = 0;
	uint32_t x758 = 86863U;
	int32_t x759 = INT32_MIN;
	int16_t x760 = 0;
	int32_t t189 = -796826;

    t189 = (x757&(x758<=(x759^x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x763 = UINT64_MAX;
	int8_t x764 = INT8_MIN;
	int32_t t190 = -249135868;

    t190 = (x761&(x762<=(x763^x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MAX;
	int32_t x767 = -15402582;
	int64_t x768 = INT64_MAX;

    t191 = (x765&(x766<=(x767^x768)));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = 54410156;
	uint32_t x770 = 451738739U;
	volatile uint8_t x771 = 89U;
	uint64_t x772 = 2231482394635LLU;

    t192 = (x769&(x770<=(x771^x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x774 = 2U;
	volatile int64_t x775 = -1LL;
	int32_t t193 = 7;

    t193 = (x773&(x774<=(x775^x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x777 = UINT32_MAX;
	static volatile uint32_t x778 = UINT32_MAX;
	int8_t x779 = -1;
	static int32_t x780 = INT32_MAX;
	volatile uint32_t t194 = 7768U;

    t194 = (x777&(x778<=(x779^x780)));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = 1;
	int16_t x782 = INT16_MIN;
	int64_t x783 = INT64_MAX;
	int16_t x784 = INT16_MIN;

    t195 = (x781&(x782<=(x783^x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	int64_t x786 = INT64_MAX;
	uint16_t x787 = 10973U;
	volatile int32_t t196 = -201832660;

    t196 = (x785&(x786<=(x787^x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = 454791525058026LL;
	uint32_t x790 = 12U;
	int32_t x791 = INT32_MAX;
	int8_t x792 = INT8_MIN;
	static int64_t t197 = -12513397838382840LL;

    t197 = (x789&(x790<=(x791^x792)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	int16_t x794 = INT16_MAX;
	static int32_t x796 = INT32_MIN;
	int32_t t198 = -1;

    t198 = (x793&(x794<=(x795^x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x798 = INT64_MIN;
	static int32_t x799 = 4;
	static int16_t x800 = INT16_MIN;
	int64_t t199 = -1710516958LL;

    t199 = (x797&(x798<=(x799^x800)));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

