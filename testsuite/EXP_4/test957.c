
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

int8_t x10 = -4;
volatile int16_t x18 = -657;
int32_t x20 = INT32_MIN;
static volatile uint64_t x22 = UINT64_MAX;
volatile uint64_t t5 = 111253210443377777LLU;
int64_t x28 = 18737547LL;
int32_t x30 = INT32_MIN;
int16_t x41 = 8;
static uint64_t x51 = 13165LLU;
uint64_t t12 = 29352LLU;
int8_t x59 = INT8_MIN;
int64_t t14 = -53822113552441466LL;
int64_t x62 = -59701426648LL;
volatile int64_t t15 = 5584652774892450LL;
int16_t x66 = INT16_MIN;
static volatile int32_t x68 = INT32_MIN;
uint32_t t16 = 172745U;
volatile uint64_t t17 = 34159217194619106LLU;
volatile int16_t x81 = INT16_MIN;
volatile int64_t t19 = 140599497187LL;
static volatile int32_t t20 = -7;
uint16_t x96 = UINT16_MAX;
uint16_t x106 = 483U;
int8_t x107 = INT8_MIN;
uint16_t x112 = 23U;
static uint32_t x120 = 3534U;
static int64_t x122 = INT64_MIN;
int64_t x126 = INT64_MIN;
int16_t x139 = INT16_MIN;
static int32_t x148 = -1;
uint32_t t34 = 1186691892U;
static int8_t x150 = INT8_MIN;
int8_t x152 = -2;
uint8_t x161 = UINT8_MAX;
static int16_t x163 = INT16_MIN;
int16_t x172 = INT16_MAX;
int64_t x173 = INT64_MIN;
int64_t x177 = INT64_MIN;
int64_t t42 = -1704702LL;
static uint32_t x187 = 1565U;
static uint32_t t44 = 19434U;
int64_t x198 = INT64_MAX;
int32_t t49 = 3956;
volatile int8_t x211 = INT8_MAX;
uint8_t x214 = UINT8_MAX;
static int64_t x216 = INT64_MIN;
volatile uint8_t x221 = 18U;
static int16_t x225 = -1;
int16_t x235 = INT16_MAX;
uint64_t x238 = 831923762422842971LLU;
volatile uint32_t x248 = 565359U;
volatile uint64_t t60 = 216LLU;
volatile int32_t x253 = -1392913;
uint32_t x276 = UINT32_MAX;
volatile int16_t x277 = -1;
int8_t x279 = INT8_MAX;
uint64_t t68 = 46519471LLU;
int64_t x287 = INT64_MIN;
volatile int16_t x294 = -1;
volatile int16_t x300 = INT16_MIN;
static int8_t x302 = INT8_MAX;
int32_t t75 = -458;
int16_t x315 = 46;
int16_t x316 = INT16_MAX;
static uint64_t t77 = 610599045LLU;
int32_t x321 = INT32_MIN;
static volatile int32_t t78 = 4159735;
int64_t x325 = INT64_MIN;
uint32_t x327 = UINT32_MAX;
int32_t x328 = INT32_MIN;
int8_t x331 = INT8_MAX;
volatile int64_t t81 = 3649235LL;
static int32_t x344 = INT32_MIN;
volatile int8_t x356 = INT8_MIN;
volatile uint64_t x358 = UINT64_MAX;
int32_t x359 = INT32_MAX;
volatile uint8_t x368 = UINT8_MAX;
static uint32_t t89 = 5U;
int64_t x379 = -47245980LL;
static volatile int64_t t92 = -928208786400718LL;
uint16_t x382 = 26U;
uint16_t x387 = UINT16_MAX;
uint8_t x397 = 76U;
int16_t x401 = -1;
int8_t x402 = -1;
uint8_t x406 = UINT8_MAX;
uint64_t x419 = 397656138352435LLU;
uint64_t t101 = 46348789765410068LLU;
int16_t x425 = 111;
int64_t x429 = -1LL;
uint8_t x433 = 39U;
int32_t x435 = 94249;
volatile int8_t x437 = INT8_MAX;
volatile int8_t x446 = INT8_MIN;
int16_t x449 = INT16_MIN;
int8_t x450 = -1;
uint8_t x452 = 11U;
static volatile int64_t t109 = -999LL;
static uint8_t x459 = UINT8_MAX;
int64_t x460 = 7146956643929LL;
int64_t x464 = 911819530LL;
volatile uint8_t x469 = UINT8_MAX;
int64_t t114 = 151973682967577LL;
int16_t x476 = 54;
int64_t t115 = 7LL;
volatile int8_t x479 = INT8_MAX;
int16_t x499 = -3642;
volatile int64_t t122 = -32578LL;
uint8_t x507 = 1U;
int8_t x510 = INT8_MAX;
static int16_t x511 = INT16_MIN;
int16_t x513 = INT16_MAX;
int64_t x519 = INT64_MAX;
int32_t x520 = INT32_MIN;
int64_t x523 = -1LL;
int16_t x527 = INT16_MAX;
uint64_t x550 = UINT64_MAX;
volatile int32_t t135 = -329115;
int16_t x559 = -1;
int64_t t136 = 1948992374LL;
volatile int64_t t137 = -1418669792995773LL;
int64_t x566 = -1LL;
int64_t t138 = 25718971223107LL;
static volatile int64_t x572 = INT64_MIN;
static int16_t x573 = INT16_MIN;
static int64_t t140 = -43LL;
volatile uint16_t x577 = 38U;
int64_t x578 = INT64_MIN;
static volatile int64_t t143 = -2405401LL;
int64_t x591 = INT64_MAX;
uint16_t x595 = UINT16_MAX;
static volatile int64_t t146 = -836337LL;
uint8_t x602 = 118U;
uint16_t x605 = 7347U;
uint64_t x620 = 57360LLU;
int64_t x623 = -1LL;
uint64_t x629 = 17138770452431LLU;
volatile int64_t x632 = -1LL;
int64_t x640 = INT64_MIN;
uint64_t t156 = 1LLU;
uint32_t x652 = 898U;
uint64_t x655 = UINT64_MAX;
uint64_t x657 = 8096131476LLU;
int8_t x659 = INT8_MIN;
int64_t x660 = INT64_MAX;
int8_t x661 = INT8_MIN;
int8_t x663 = 1;
uint64_t x664 = 44795259LLU;
static int16_t x668 = -1;
volatile int8_t x670 = 1;
int32_t x671 = INT32_MIN;
uint32_t x672 = UINT32_MAX;
volatile int8_t x673 = -7;
int8_t x677 = INT8_MIN;
static int32_t x694 = 172432;
uint8_t x701 = 1U;
uint16_t x706 = 1197U;
int16_t x712 = 112;
volatile int32_t t171 = 41;
int32_t x714 = -1;
volatile int64_t t173 = -3903879778119102LL;
volatile int8_t x726 = INT8_MAX;
uint8_t x739 = 3U;
uint64_t t177 = 921740975228429504LLU;
uint32_t x750 = 3U;
uint64_t x751 = 20LLU;
uint32_t x765 = 247U;
int32_t x766 = INT32_MAX;
volatile int32_t x771 = INT32_MAX;
static volatile uint8_t x774 = UINT8_MAX;
volatile int32_t t185 = 719;
volatile int32_t t186 = 8326008;
volatile int64_t x809 = INT64_MIN;
static int64_t t192 = -2750008530LL;
static volatile int32_t t193 = -6597704;
int8_t x817 = INT8_MIN;
uint8_t x837 = UINT8_MAX;
volatile int8_t x839 = INT8_MAX;


void f0(void) {
    	int32_t x1 = 1043912;
	uint16_t x2 = 283U;
	int8_t x3 = INT8_MIN;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 0;

    t0 = (x1%(x2|(x3%x4)));

    if (t0 != 77) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -78;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = 56093U;
	int32_t x8 = -1;
	uint32_t t1 = 19178904U;

    t1 = (x5%(x6|(x7%x8)));

    if (t1 != 9365U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	uint32_t x11 = UINT32_MAX;
	int8_t x12 = INT8_MIN;
	uint32_t t2 = 15956U;

    t2 = (x9%(x10|(x11%x12)));

    if (t2 != 4294934528U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = INT32_MAX;
	int16_t x14 = -1;
	static int32_t x15 = -8598156;
	int32_t x16 = INT32_MIN;
	static volatile int32_t t3 = 37259879;

    t3 = (x13%(x14|(x15%x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int64_t x19 = 122LL;
	int64_t t4 = 3914LL;

    t4 = (x17%(x18|(x19%x20)));

    if (t4 != 153LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MIN;
	int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MIN;

    t5 = (x21%(x22|(x23%x24)));

    if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int64_t x26 = -29257744081135LL;
	uint8_t x27 = 2U;
	int64_t t6 = -105961043527LL;

    t6 = (x25%(x26|(x27%x28)));

    if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = INT32_MIN;
	static int8_t x31 = 6;
	int16_t x32 = -1;
	volatile int32_t t7 = 0;

    t7 = (x29%(x30|(x31%x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	volatile uint8_t x34 = 89U;
	static volatile uint16_t x35 = UINT16_MAX;
	int16_t x36 = INT16_MIN;
	static int32_t t8 = 52803;

    t8 = (x33%(x34|(x35%x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	static int8_t x38 = INT8_MIN;
	int64_t x39 = INT64_MIN;
	int32_t x40 = -7068;
	int64_t t9 = -139545748239542LL;

    t9 = (x37%(x38|(x39%x40)));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = -1;
	int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -583432617493LL;

    t10 = (x41%(x42|(x43%x44)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = 1;
	volatile int16_t x46 = INT16_MAX;
	int8_t x47 = INT8_MIN;
	uint8_t x48 = 1U;
	int32_t t11 = 396416684;

    t11 = (x45%(x46|(x47%x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 1U;
	volatile int32_t x50 = -1;
	static int8_t x52 = -9;

    t12 = (x49%(x50|(x51%x52)));

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	uint32_t x54 = 386U;
	static int64_t x55 = -1LL;
	volatile int64_t x56 = INT64_MIN;
	volatile int64_t t13 = 0LL;

    t13 = (x53%(x54|(x55%x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	int32_t x58 = -1;
	static int64_t x60 = -58026LL;

    t14 = (x57%(x58|(x59%x60)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x61 = INT64_MAX;
	static volatile int16_t x63 = INT16_MIN;
	int32_t x64 = -51705;

    t15 = (x61%(x62|(x63%x64)));

    if (t15 != 8575LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 3348U;
	int32_t x67 = INT32_MIN;

    t16 = (x65%(x66|(x67%x68)));

    if (t16 != 3348U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	int16_t x70 = INT16_MIN;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 7817213LLU;

    t17 = (x69%(x70|(x71%x72)));

    if (t17 != 19204LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = -1590;
	uint8_t x78 = 1U;
	int8_t x79 = INT8_MIN;
	uint8_t x80 = 23U;
	int32_t t18 = -5;

    t18 = (x77%(x78|(x79%x80)));

    if (t18 != -4) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;

    t19 = (x81%(x82|(x83%x84)));

    if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x89 = 1;
	uint8_t x90 = UINT8_MAX;
	static int16_t x91 = INT16_MIN;
	volatile uint8_t x92 = 48U;

    t20 = (x89%(x90|(x91%x92)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x93 = INT32_MIN;
	volatile int8_t x94 = INT8_MAX;
	static int64_t x95 = INT64_MIN;
	int64_t t21 = -885894601267142LL;

    t21 = (x93%(x94|(x95%x96)));

    if (t21 != -32258LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x97 = INT16_MAX;
	static volatile int32_t x98 = INT32_MIN;
	uint64_t x99 = UINT64_MAX;
	int32_t x100 = -126921;
	volatile uint64_t t22 = 18100086551544LLU;

    t22 = (x97%(x98|(x99%x100)));

    if (t22 != 32767LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x101 = UINT64_MAX;
	static int16_t x102 = 180;
	uint64_t x103 = UINT64_MAX;
	volatile int32_t x104 = INT32_MIN;
	volatile uint64_t t23 = 41682252852462747LLU;

    t23 = (x101%(x102|(x103%x104)));

    if (t23 != 3LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = 71059;
	int32_t x108 = INT32_MIN;
	static int32_t t24 = -165578;

    t24 = (x105%(x106|(x107%x108)));

    if (t24 != 9) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = -1;
	uint64_t x110 = 216LLU;
	static volatile uint16_t x111 = UINT16_MAX;
	volatile uint64_t t25 = 417106002LLU;

    t25 = (x109%(x110|(x111%x112)));

    if (t25 != 159LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = 654;
	uint64_t x114 = UINT64_MAX;
	static int8_t x115 = 3;
	volatile uint32_t x116 = 9U;
	uint64_t t26 = 10426373855LLU;

    t26 = (x113%(x114|(x115%x116)));

    if (t26 != 654LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = INT64_MAX;
	uint64_t x118 = 21934597LLU;
	int64_t x119 = INT64_MIN;
	static uint64_t t27 = 2494510908046LLU;

    t27 = (x117%(x118|(x119%x120)));

    if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x121 = 344141LLU;
	uint32_t x123 = 241U;
	static int64_t x124 = INT64_MAX;
	volatile uint64_t t28 = 135LLU;

    t28 = (x121%(x122|(x123%x124)));

    if (t28 != 344141LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x125 = UINT64_MAX;
	int8_t x127 = -1;
	volatile int32_t x128 = INT32_MAX;
	volatile uint64_t t29 = 1562LLU;

    t29 = (x125%(x126|(x127%x128)));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x129 = UINT64_MAX;
	int32_t x130 = INT32_MIN;
	static uint16_t x131 = UINT16_MAX;
	static int32_t x132 = 4826;
	volatile uint64_t t30 = 19118LLU;

    t30 = (x129%(x130|(x131%x132)));

    if (t30 != 2147480850LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = UINT16_MAX;
	uint64_t x134 = 4LLU;
	static int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;
	volatile uint64_t t31 = 1LLU;

    t31 = (x133%(x134|(x135%x136)));

    if (t31 != 65535LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = UINT32_MAX;
	uint64_t x138 = 10LLU;
	uint32_t x140 = 35560U;
	volatile uint64_t t32 = 8063875130438LLU;

    t32 = (x137%(x138|(x139%x140)));

    if (t32 != 24655LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = INT32_MAX;
	int64_t x142 = INT64_MAX;
	static int16_t x143 = INT16_MAX;
	static volatile uint32_t x144 = 253U;
	volatile int64_t t33 = -2797960098LL;

    t33 = (x141%(x142|(x143%x144)));

    if (t33 != 2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x145 = 88U;
	uint8_t x146 = 3U;
	uint32_t x147 = UINT32_MAX;

    t34 = (x145%(x146|(x147%x148)));

    if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = 0;
	int8_t x151 = INT8_MAX;
	int32_t t35 = -1;

    t35 = (x149%(x150|(x151%x152)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x153 = 2106400U;
	uint64_t x154 = UINT64_MAX;
	uint8_t x155 = UINT8_MAX;
	volatile int8_t x156 = -25;
	uint64_t t36 = 92LLU;

    t36 = (x153%(x154|(x155%x156)));

    if (t36 != 2106400LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x157 = UINT8_MAX;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MAX;
	volatile int64_t x160 = INT64_MIN;
	int64_t t37 = -28029LL;

    t37 = (x157%(x158|(x159%x160)));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x162 = -1LL;
	uint32_t x164 = UINT32_MAX;
	int64_t t38 = -59549554283672783LL;

    t38 = (x161%(x162|(x163%x164)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x165 = UINT16_MAX;
	int64_t x166 = INT64_MAX;
	int16_t x167 = INT16_MAX;
	static int32_t x168 = INT32_MIN;
	static volatile int64_t t39 = 1297034064790LL;

    t39 = (x165%(x166|(x167%x168)));

    if (t39 != 65535LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x169 = 0U;
	int16_t x170 = 1;
	volatile int8_t x171 = INT8_MIN;
	int32_t t40 = 108896013;

    t40 = (x169%(x170|(x171%x172)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x174 = 954419844350LL;
	int32_t x175 = INT32_MIN;
	volatile uint8_t x176 = UINT8_MAX;
	volatile int64_t t41 = -497502059476LL;

    t41 = (x173%(x174|(x175%x176)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x178 = -15;
	volatile uint32_t x179 = 42067803U;
	static int16_t x180 = INT16_MIN;

    t42 = (x177%(x178|(x179%x180)));

    if (t42 != -2147483658LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = INT16_MIN;
	uint32_t x182 = 269424U;
	int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MIN;
	static int64_t t43 = 13423595LL;

    t43 = (x181%(x182|(x183%x184)));

    if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 1611U;
	uint8_t x188 = 26U;

    t44 = (x185%(x186|(x187%x188)));

    if (t44 != 765U) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x189 = 2U;
	int8_t x190 = -28;
	static volatile int16_t x191 = -3136;
	uint16_t x192 = 1U;
	static int32_t t45 = 16;

    t45 = (x189%(x190|(x191%x192)));

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x193 = -1;
	int8_t x194 = 1;
	static volatile uint32_t x195 = 32197U;
	uint32_t x196 = 11616496U;
	uint32_t t46 = 105U;

    t46 = (x193%(x194|(x195%x196)));

    if (t46 != 16283U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x197 = 31893882;
	volatile int8_t x199 = INT8_MIN;
	static volatile uint8_t x200 = UINT8_MAX;
	int64_t t47 = 1559854714131LL;

    t47 = (x197%(x198|(x199%x200)));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x201 = 16380U;
	int32_t x202 = INT32_MAX;
	int64_t x203 = 40122917821987111LL;
	volatile uint16_t x204 = UINT16_MAX;
	static int64_t t48 = 270385831288LL;

    t48 = (x201%(x202|(x203%x204)));

    if (t48 != 16380LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x205 = 6U;
	int16_t x206 = INT16_MAX;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MAX;

    t49 = (x205%(x206|(x207%x208)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = -1LL;
	int64_t x210 = 1303277032808LL;
	volatile int8_t x212 = INT8_MIN;
	static int64_t t50 = 61883510268822490LL;

    t50 = (x209%(x210|(x211%x212)));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = 9674659LLU;
	static volatile uint8_t x215 = 28U;
	static volatile uint64_t t51 = 44310LLU;

    t51 = (x213%(x214|(x215%x216)));

    if (t51 != 214LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x217 = 6LLU;
	uint16_t x218 = 8U;
	int64_t x219 = INT64_MIN;
	volatile uint16_t x220 = 3871U;
	uint64_t t52 = 23439LLU;

    t52 = (x217%(x218|(x219%x220)));

    if (t52 != 6LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x222 = UINT64_MAX;
	volatile int16_t x223 = -1;
	static int16_t x224 = -78;
	uint64_t t53 = 5671352261966705LLU;

    t53 = (x221%(x222|(x223%x224)));

    if (t53 != 18LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x226 = 269298453U;
	volatile uint64_t x227 = UINT64_MAX;
	int64_t x228 = -1LL;
	volatile uint64_t t54 = 34406944LLU;

    t54 = (x225%(x226|(x227%x228)));

    if (t54 != 3888645LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x229 = UINT8_MAX;
	static int32_t x230 = INT32_MIN;
	uint16_t x231 = 6777U;
	int64_t x232 = INT64_MAX;
	static volatile int64_t t55 = -32782061800539432LL;

    t55 = (x229%(x230|(x231%x232)));

    if (t55 != 255LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x233 = INT16_MAX;
	static uint64_t x234 = 1240693274LLU;
	int64_t x236 = INT64_MAX;
	volatile uint64_t t56 = 16823LLU;

    t56 = (x233%(x234|(x235%x236)));

    if (t56 != 32767LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x237 = INT8_MIN;
	static int32_t x239 = -1;
	int64_t x240 = -1LL;
	volatile uint64_t t57 = 29564771LLU;

    t57 = (x237%(x238|(x239%x240)));

    if (t57 != 144421300407006126LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x241 = 2U;
	int8_t x242 = 10;
	int8_t x243 = 30;
	uint32_t x244 = 40U;
	uint32_t t58 = 9640U;

    t58 = (x241%(x242|(x243%x244)));

    if (t58 != 2U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x245 = 47214415781604LLU;
	uint8_t x246 = 0U;
	uint8_t x247 = 8U;
	uint64_t t59 = 196573770LLU;

    t59 = (x245%(x246|(x247%x248)));

    if (t59 != 4LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x249 = -52;
	uint64_t x250 = UINT64_MAX;
	int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MIN;

    t60 = (x249%(x250|(x251%x252)));

    if (t60 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x254 = 20146109U;
	uint64_t x255 = 41030648LLU;
	uint16_t x256 = UINT16_MAX;
	uint64_t t61 = 496352573508527517LLU;

    t61 = (x253%(x254|(x255%x256)));

    if (t61 != 10099239LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x257 = 85077U;
	volatile uint16_t x258 = 2028U;
	int64_t x259 = -1LL;
	static int32_t x260 = INT32_MIN;
	volatile int64_t t62 = -16916646677316LL;

    t62 = (x257%(x258|(x259%x260)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MIN;
	static int64_t x263 = -1LL;
	int16_t x264 = INT16_MIN;
	int64_t t63 = 877970425177394LL;

    t63 = (x261%(x262|(x263%x264)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = -1;
	volatile int32_t x266 = 23969;
	int16_t x267 = INT16_MIN;
	static int64_t x268 = INT64_MIN;
	int64_t t64 = 252683976722LL;

    t64 = (x265%(x266|(x267%x268)));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MAX;
	int8_t x271 = INT8_MAX;
	uint32_t x272 = 1720U;
	volatile uint32_t t65 = 6662211U;

    t65 = (x269%(x270|(x271%x272)));

    if (t65 != 14U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x273 = -1;
	volatile int32_t x274 = -1;
	int64_t x275 = 114657LL;
	static volatile int64_t t66 = -1LL;

    t66 = (x273%(x274|(x275%x276)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x278 = UINT32_MAX;
	volatile int64_t x280 = INT64_MAX;
	int64_t t67 = 1255890137LL;

    t67 = (x277%(x278|(x279%x280)));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x281 = INT32_MIN;
	volatile int64_t x282 = INT64_MIN;
	static uint64_t x283 = 1709537LLU;
	static int16_t x284 = -60;

    t68 = (x281%(x282|(x283%x284)));

    if (t68 != 9223372034705582623LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = 26775063328236155LL;
	int32_t x286 = -3780595;
	int16_t x288 = -1;
	volatile int64_t t69 = -14758457356036LL;

    t69 = (x285%(x286|(x287%x288)));

    if (t69 != 2038605LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x289 = INT8_MIN;
	volatile int32_t x290 = -1;
	int16_t x291 = -1;
	int16_t x292 = 955;
	volatile int32_t t70 = -12863;

    t70 = (x289%(x290|(x291%x292)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x293 = INT8_MAX;
	int32_t x295 = -209011;
	volatile int8_t x296 = 6;
	volatile int32_t t71 = 19;

    t71 = (x293%(x294|(x295%x296)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = 256U;
	int16_t x298 = 1;
	int64_t x299 = -1LL;
	int64_t t72 = -3558002LL;

    t72 = (x297%(x298|(x299%x300)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x301 = -1LL;
	uint32_t x303 = 13195U;
	uint8_t x304 = 29U;
	static int64_t t73 = -164152002LL;

    t73 = (x301%(x302|(x303%x304)));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	volatile int8_t x307 = INT8_MAX;
	int8_t x308 = -28;
	static volatile uint32_t t74 = 4034642U;

    t74 = (x305%(x306|(x307%x308)));

    if (t74 != 4294934528U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x309 = 1U;
	int8_t x310 = 1;
	static int32_t x311 = -133929184;
	int16_t x312 = INT16_MAX;

    t75 = (x309%(x310|(x311%x312)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x313 = UINT64_MAX;
	uint8_t x314 = 57U;
	uint64_t t76 = 10992LLU;

    t76 = (x313%(x314|(x315%x316)));

    if (t76 != 15LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x317 = 129097267U;
	static uint64_t x318 = UINT64_MAX;
	int8_t x319 = INT8_MAX;
	volatile int64_t x320 = INT64_MIN;

    t77 = (x317%(x318|(x319%x320)));

    if (t77 != 129097267LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x322 = INT32_MAX;
	static int32_t x323 = -1;
	int16_t x324 = -1;

    t78 = (x321%(x322|(x323%x324)));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x326 = 6497801U;
	int64_t t79 = 1723LL;

    t79 = (x325%(x326|(x327%x328)));

    if (t79 != -2LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x329 = INT16_MIN;
	uint32_t x330 = UINT32_MAX;
	volatile uint16_t x332 = 21848U;
	static volatile uint32_t t80 = 61U;

    t80 = (x329%(x330|(x331%x332)));

    if (t80 != 4294934528U) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x333 = INT8_MAX;
	static int8_t x334 = -39;
	int64_t x335 = INT64_MIN;
	volatile uint16_t x336 = UINT16_MAX;

    t81 = (x333%(x334|(x335%x336)));

    if (t81 != 10LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x337 = 28514772245672LLU;
	static int64_t x338 = INT64_MIN;
	int64_t x339 = INT64_MIN;
	static volatile int32_t x340 = INT32_MIN;
	volatile uint64_t t82 = 4473995098047804334LLU;

    t82 = (x337%(x338|(x339%x340)));

    if (t82 != 28514772245672LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x341 = 6LLU;
	static int32_t x342 = INT32_MIN;
	uint8_t x343 = 2U;
	volatile uint64_t t83 = 15LLU;

    t83 = (x341%(x342|(x343%x344)));

    if (t83 != 6LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x345 = 128097LLU;
	int8_t x346 = 0;
	int64_t x347 = 86752LL;
	int32_t x348 = 6623320;
	uint64_t t84 = 56LLU;

    t84 = (x345%(x346|(x347%x348)));

    if (t84 != 41345LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x349 = 13249974962311091LLU;
	volatile int32_t x350 = -1;
	uint64_t x351 = 123909128965LLU;
	int8_t x352 = -1;
	volatile uint64_t t85 = 6074968913826LLU;

    t85 = (x349%(x350|(x351%x352)));

    if (t85 != 13249974962311091LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x353 = -1LL;
	volatile int8_t x354 = 1;
	volatile int16_t x355 = 6646;
	int64_t t86 = 424850LL;

    t86 = (x353%(x354|(x355%x356)));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x357 = INT64_MIN;
	volatile uint16_t x360 = 5750U;
	volatile uint64_t t87 = 43886639699LLU;

    t87 = (x357%(x358|(x359%x360)));

    if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	uint8_t x363 = UINT8_MAX;
	uint8_t x364 = 81U;
	int64_t t88 = -7981790349LL;

    t88 = (x361%(x362|(x363%x364)));

    if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x365 = INT8_MIN;
	uint32_t x366 = UINT32_MAX;
	static int8_t x367 = INT8_MIN;

    t89 = (x365%(x366|(x367%x368)));

    if (t89 != 4294967168U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x369 = 5U;
	static int32_t x370 = 253;
	volatile int32_t x371 = INT32_MIN;
	int64_t x372 = 42173658741310LL;
	int64_t t90 = 204629764LL;

    t90 = (x369%(x370|(x371%x372)));

    if (t90 != 5LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x373 = 3U;
	static uint32_t x374 = 28U;
	int64_t x375 = -1LL;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t91 = 25LLU;

    t91 = (x373%(x374|(x375%x376)));

    if (t91 != 3LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x377 = INT16_MAX;
	static int64_t x378 = -1931443376699449296LL;
	int32_t x380 = -1;

    t92 = (x377%(x378|(x379%x380)));

    if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x381 = UINT16_MAX;
	int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	static int32_t t93 = 975;

    t93 = (x381%(x382|(x383%x384)));

    if (t93 != 15) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x385 = 89437327;
	volatile int16_t x386 = -6;
	int16_t x388 = -11775;
	volatile int32_t t94 = 1;

    t94 = (x385%(x386|(x387%x388)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x393 = 3;
	static int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MAX;
	volatile uint64_t x396 = 3386LLU;
	volatile uint64_t t95 = 231106LLU;

    t95 = (x393%(x394|(x395%x396)));

    if (t95 != 3LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x398 = INT64_MIN;
	int32_t x399 = INT32_MIN;
	static volatile uint16_t x400 = 10888U;
	volatile int64_t t96 = -192665LL;

    t96 = (x397%(x398|(x399%x400)));

    if (t96 != 76LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x403 = 1051821989U;
	static int64_t x404 = -298LL;
	static volatile int64_t t97 = 34409179249643LL;

    t97 = (x401%(x402|(x403%x404)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x405 = 4;
	static int32_t x407 = -1;
	uint16_t x408 = 270U;
	volatile int32_t t98 = 29910;

    t98 = (x405%(x406|(x407%x408)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = 2;
	volatile uint8_t x410 = UINT8_MAX;
	int32_t x411 = INT32_MAX;
	int64_t x412 = 395292192427732183LL;
	int64_t t99 = 4332927424220519453LL;

    t99 = (x409%(x410|(x411%x412)));

    if (t99 != 2LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x413 = 3417271U;
	static int8_t x414 = 0;
	static int32_t x415 = 927577;
	int32_t x416 = INT32_MIN;
	uint32_t t100 = 65093U;

    t100 = (x413%(x414|(x415%x416)));

    if (t100 != 634540U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x417 = INT64_MIN;
	int64_t x418 = INT64_MAX;
	uint32_t x420 = UINT32_MAX;

    t101 = (x417%(x418|(x419%x420)));

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x421 = 100332LLU;
	int32_t x422 = -5;
	volatile uint16_t x423 = 15577U;
	static int32_t x424 = 11;
	uint64_t t102 = 4456784783LLU;

    t102 = (x421%(x422|(x423%x424)));

    if (t102 != 100332LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x426 = 54U;
	static int32_t x427 = 10;
	volatile uint64_t x428 = 3697LLU;
	uint64_t t103 = 39937LLU;

    t103 = (x425%(x426|(x427%x428)));

    if (t103 != 49LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x430 = 81LLU;
	uint32_t x431 = 1402330296U;
	volatile int64_t x432 = INT64_MIN;
	volatile uint64_t t104 = 3667952150911297637LLU;

    t104 = (x429%(x430|(x431%x432)));

    if (t104 != 806541757LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x434 = INT32_MAX;
	int32_t x436 = INT32_MAX;
	int32_t t105 = -99;

    t105 = (x433%(x434|(x435%x436)));

    if (t105 != 39) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x438 = 48LL;
	static uint8_t x439 = 1U;
	static volatile int16_t x440 = INT16_MIN;
	static volatile int64_t t106 = -177013LL;

    t106 = (x437%(x438|(x439%x440)));

    if (t106 != 29LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x441 = 75U;
	static int32_t x442 = INT32_MAX;
	int16_t x443 = -1;
	uint8_t x444 = UINT8_MAX;
	static volatile int32_t t107 = -3682;

    t107 = (x441%(x442|(x443%x444)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = INT64_MIN;
	int32_t x447 = 29270;
	volatile int64_t x448 = 30524361629258LL;
	volatile int64_t t108 = -187817075996LL;

    t108 = (x445%(x446|(x447%x448)));

    if (t108 != -8LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x451 = INT64_MIN;

    t109 = (x449%(x450|(x451%x452)));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x453 = -7294;
	volatile int64_t x454 = -691830681000LL;
	uint64_t x455 = UINT64_MAX;
	int16_t x456 = INT16_MIN;
	uint64_t t110 = 4297319478066LLU;

    t110 = (x453%(x454|(x455%x456)));

    if (t110 != 691830645635LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x457 = 6584600744LL;
	uint64_t x458 = 395045403387215077LLU;
	volatile uint64_t t111 = 149771606833633LLU;

    t111 = (x457%(x458|(x459%x460)));

    if (t111 != 6584600744LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x461 = INT64_MIN;
	int8_t x462 = INT8_MAX;
	int32_t x463 = -1;
	static volatile int64_t t112 = 1120329590064764598LL;

    t112 = (x461%(x462|(x463%x464)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x465 = INT8_MIN;
	volatile int32_t x466 = 303552738;
	int32_t x467 = INT32_MAX;
	static volatile uint32_t x468 = UINT32_MAX;
	static uint32_t t113 = 826692U;

    t113 = (x465%(x466|(x467%x468)));

    if (t113 != 2147483521U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x470 = INT32_MIN;
	static uint32_t x471 = 26178U;
	static int64_t x472 = INT64_MIN;

    t114 = (x469%(x470|(x471%x472)));

    if (t114 != 255LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x473 = -1;
	static int64_t x474 = INT64_MIN;
	volatile int16_t x475 = 5;

    t115 = (x473%(x474|(x475%x476)));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x477 = -1;
	static uint64_t x478 = 5LLU;
	int32_t x480 = INT32_MIN;
	volatile uint64_t t116 = 8651001873375504633LLU;

    t116 = (x477%(x478|(x479%x480)));

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x481 = INT32_MIN;
	uint16_t x482 = 3995U;
	static volatile uint16_t x483 = 25U;
	int8_t x484 = 3;
	volatile int32_t t117 = -1;

    t117 = (x481%(x482|(x483%x484)));

    if (t117 != -3358) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x485 = 9;
	static int16_t x486 = -1;
	static int16_t x487 = INT16_MIN;
	static int64_t x488 = INT64_MIN;
	int64_t t118 = -118287313309659LL;

    t118 = (x485%(x486|(x487%x488)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x489 = 2038U;
	volatile uint8_t x490 = 0U;
	uint8_t x491 = 30U;
	int16_t x492 = INT16_MAX;
	int32_t t119 = 22396;

    t119 = (x489%(x490|(x491%x492)));

    if (t119 != 28) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x493 = INT32_MIN;
	uint32_t x494 = 29241U;
	volatile uint8_t x495 = 0U;
	static int64_t x496 = INT64_MIN;
	volatile int64_t t120 = 100985359516977634LL;

    t120 = (x493%(x494|(x495%x496)));

    if (t120 != -24608LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x497 = INT64_MIN;
	static int32_t x498 = -197501897;
	uint16_t x500 = 3U;
	volatile int64_t t121 = 2076708LL;

    t121 = (x497%(x498|(x499%x500)));

    if (t121 != -8518858LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x501 = -1;
	int64_t x502 = -495879697536847LL;
	volatile int32_t x503 = -26636;
	int8_t x504 = INT8_MIN;

    t122 = (x501%(x502|(x503%x504)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x505 = -1;
	static int8_t x506 = -1;
	static uint32_t x508 = UINT32_MAX;
	uint32_t t123 = 3274368U;

    t123 = (x505%(x506|(x507%x508)));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = 5521561LL;
	static uint64_t x512 = UINT64_MAX;
	volatile uint64_t t124 = 71LLU;

    t124 = (x509%(x510|(x511%x512)));

    if (t124 != 5521561LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x514 = UINT32_MAX;
	static volatile int8_t x515 = INT8_MIN;
	int32_t x516 = INT32_MIN;
	uint32_t t125 = 0U;

    t125 = (x513%(x514|(x515%x516)));

    if (t125 != 32767U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x517 = 114U;
	uint64_t x518 = 124216839734286LLU;
	static volatile uint64_t t126 = 104030357359584LLU;

    t126 = (x517%(x518|(x519%x520)));

    if (t126 != 114LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x521 = 1;
	volatile int32_t x522 = -139;
	int64_t x524 = -723485LL;
	int64_t t127 = 22470206568317695LL;

    t127 = (x521%(x522|(x523%x524)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x525 = UINT16_MAX;
	volatile int32_t x526 = -1;
	int8_t x528 = -1;
	volatile int32_t t128 = 12815;

    t128 = (x525%(x526|(x527%x528)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x529 = INT16_MIN;
	int64_t x530 = 391LL;
	volatile int64_t x531 = -1LL;
	int16_t x532 = INT16_MIN;
	volatile int64_t t129 = 845836089256LL;

    t129 = (x529%(x530|(x531%x532)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x533 = 59469LLU;
	int8_t x534 = INT8_MIN;
	int8_t x535 = 57;
	int64_t x536 = -1LL;
	uint64_t t130 = 777959703LLU;

    t130 = (x533%(x534|(x535%x536)));

    if (t130 != 59469LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x537 = 1;
	static volatile uint64_t x538 = 1LLU;
	int16_t x539 = INT16_MIN;
	int64_t x540 = -303157216LL;
	uint64_t t131 = 42992483084331905LLU;

    t131 = (x537%(x538|(x539%x540)));

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = -1LL;
	volatile int16_t x542 = -1;
	int8_t x543 = -1;
	static volatile int64_t x544 = -241487LL;
	int64_t t132 = 849LL;

    t132 = (x541%(x542|(x543%x544)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x545 = 10085205208219LL;
	volatile int16_t x546 = 4;
	int16_t x547 = INT16_MIN;
	static int16_t x548 = -947;
	static int64_t t133 = -6246627912047354LL;

    t133 = (x545%(x546|(x547%x548)));

    if (t133 != 319LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x549 = INT8_MIN;
	int32_t x551 = 705;
	int32_t x552 = -1;
	volatile uint64_t t134 = 7242LLU;

    t134 = (x549%(x550|(x551%x552)));

    if (t134 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x553 = INT8_MIN;
	volatile int32_t x554 = INT32_MIN;
	int8_t x555 = -1;
	int8_t x556 = -1;

    t135 = (x553%(x554|(x555%x556)));

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x557 = INT64_MIN;
	volatile int64_t x558 = INT64_MIN;
	int16_t x560 = INT16_MAX;

    t136 = (x557%(x558|(x559%x560)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x561 = 329107149U;
	int32_t x562 = INT32_MIN;
	static int8_t x563 = -23;
	int64_t x564 = INT64_MIN;

    t137 = (x561%(x562|(x563%x564)));

    if (t137 != 11LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x565 = INT64_MIN;
	uint32_t x567 = UINT32_MAX;
	uint8_t x568 = 3U;

    t138 = (x565%(x566|(x567%x568)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x569 = -119;
	static volatile int8_t x570 = -1;
	volatile uint64_t x571 = UINT64_MAX;
	volatile uint64_t t139 = 5021993448420431LLU;

    t139 = (x569%(x570|(x571%x572)));

    if (t139 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x574 = UINT32_MAX;
	uint8_t x575 = 0U;
	int64_t x576 = INT64_MIN;

    t140 = (x573%(x574|(x575%x576)));

    if (t140 != -32768LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x579 = -68852986;
	volatile int32_t x580 = INT32_MIN;
	volatile int64_t t141 = 1LL;

    t141 = (x577%(x578|(x579%x580)));

    if (t141 != 38LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x581 = INT16_MIN;
	int32_t x582 = 106;
	int32_t x583 = -1;
	volatile int8_t x584 = INT8_MAX;
	volatile int32_t t142 = 241264;

    t142 = (x581%(x582|(x583%x584)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x585 = INT64_MAX;
	static int64_t x586 = INT64_MAX;
	int32_t x587 = -1;
	static int64_t x588 = 128244LL;

    t143 = (x585%(x586|(x587%x588)));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x589 = UINT16_MAX;
	uint16_t x590 = 482U;
	volatile int8_t x592 = -15;
	static volatile int64_t t144 = 103608594851LL;

    t144 = (x589%(x590|(x591%x592)));

    if (t144 != 277LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x593 = 0U;
	int8_t x594 = INT8_MIN;
	int8_t x596 = INT8_MIN;
	int32_t t145 = 1053;

    t145 = (x593%(x594|(x595%x596)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x597 = INT8_MIN;
	int64_t x598 = 2141231924LL;
	volatile int8_t x599 = -16;
	int64_t x600 = -1LL;

    t146 = (x597%(x598|(x599%x600)));

    if (t146 != -128LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x601 = 1703;
	int16_t x603 = INT16_MIN;
	int64_t x604 = 42762533408456LL;
	int64_t t147 = 137092986175LL;

    t147 = (x601%(x602|(x603%x604)));

    if (t147 != 1703LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x606 = INT16_MAX;
	int8_t x607 = INT8_MIN;
	uint32_t x608 = 13829U;
	uint32_t t148 = 3U;

    t148 = (x605%(x606|(x607%x608)));

    if (t148 != 7347U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x609 = -1;
	uint64_t x610 = 12836759804299LLU;
	int32_t x611 = -57686;
	int8_t x612 = -1;
	uint64_t t149 = 29367LLU;

    t149 = (x609%(x610|(x611%x612)));

    if (t149 != 12152696585439LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x613 = 2;
	uint32_t x614 = UINT32_MAX;
	static int16_t x615 = -1;
	uint8_t x616 = UINT8_MAX;
	volatile uint32_t t150 = 29052U;

    t150 = (x613%(x614|(x615%x616)));

    if (t150 != 2U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x617 = 308;
	int64_t x618 = INT64_MIN;
	uint64_t x619 = 999751394LLU;
	volatile uint64_t t151 = 7234055296085LLU;

    t151 = (x617%(x618|(x619%x620)));

    if (t151 != 308LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x621 = -1;
	uint8_t x622 = 3U;
	volatile int16_t x624 = 71;
	volatile int64_t t152 = 155659918LL;

    t152 = (x621%(x622|(x623%x624)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x625 = 4;
	uint32_t x626 = 60059406U;
	int64_t x627 = INT64_MAX;
	volatile uint16_t x628 = 7U;
	int64_t t153 = 209115LL;

    t153 = (x625%(x626|(x627%x628)));

    if (t153 != 4LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x630 = UINT16_MAX;
	int16_t x631 = INT16_MIN;
	volatile uint64_t t154 = 81LLU;

    t154 = (x629%(x630|(x631%x632)));

    if (t154 != 40376LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x633 = INT32_MAX;
	int16_t x634 = -1;
	static uint16_t x635 = 229U;
	static volatile int8_t x636 = -1;
	volatile int32_t t155 = -881;

    t155 = (x633%(x634|(x635%x636)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x637 = 85U;
	int64_t x638 = INT64_MIN;
	uint64_t x639 = 199006931249LLU;

    t156 = (x637%(x638|(x639%x640)));

    if (t156 != 85LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x641 = 3U;
	uint32_t x642 = 202U;
	uint32_t x643 = 1U;
	volatile int32_t x644 = INT32_MAX;
	uint32_t t157 = 1506554U;

    t157 = (x641%(x642|(x643%x644)));

    if (t157 != 3U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x649 = UINT16_MAX;
	int16_t x650 = INT16_MIN;
	int64_t x651 = -8929534970661840LL;
	int64_t t158 = -43LL;

    t158 = (x649%(x650|(x651%x652)));

    if (t158 != 175LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x653 = 3253970137721LLU;
	static int64_t x654 = INT64_MAX;
	int64_t x656 = -12398LL;
	uint64_t t159 = 5591LLU;

    t159 = (x653%(x654|(x655%x656)));

    if (t159 != 3253970137721LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x658 = INT64_MAX;
	volatile uint64_t t160 = 490248919LLU;

    t160 = (x657%(x658|(x659%x660)));

    if (t160 != 8096131476LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x662 = INT64_MIN;
	uint64_t t161 = 1191363180055890LLU;

    t161 = (x661%(x662|(x663%x664)));

    if (t161 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x665 = 23232LL;
	int16_t x666 = INT16_MIN;
	int32_t x667 = INT32_MIN;
	volatile int64_t t162 = -7998716139846LL;

    t162 = (x665%(x666|(x667%x668)));

    if (t162 != 23232LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x669 = 22267171559011636LLU;
	uint64_t t163 = 1LLU;

    t163 = (x669%(x670|(x671%x672)));

    if (t163 != 1649360245LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x674 = 752;
	int16_t x675 = INT16_MIN;
	static uint64_t x676 = 4097828556199201LLU;
	volatile uint64_t t164 = 2778466822149759LLU;

    t164 = (x673%(x674|(x675%x676)));

    if (t164 != 1788395703528954LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x678 = INT32_MAX;
	static volatile uint16_t x679 = UINT16_MAX;
	static uint8_t x680 = 117U;
	int32_t t165 = -9263182;

    t165 = (x677%(x678|(x679%x680)));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x681 = INT64_MIN;
	int8_t x682 = -1;
	static int32_t x683 = -1;
	static uint64_t x684 = 2730589665LLU;
	volatile uint64_t t166 = 135519489000454551LLU;

    t166 = (x681%(x682|(x683%x684)));

    if (t166 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x685 = 1995;
	int32_t x686 = -3167181;
	uint8_t x687 = 44U;
	int16_t x688 = 511;
	int32_t t167 = -74347;

    t167 = (x685%(x686|(x687%x688)));

    if (t167 != 1995) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x693 = -52;
	uint32_t x695 = 360834272U;
	int64_t x696 = -23LL;
	static volatile int64_t t168 = -1009021760502LL;

    t168 = (x693%(x694|(x695%x696)));

    if (t168 != -52LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x702 = 253481663U;
	uint16_t x703 = 2U;
	int32_t x704 = INT32_MIN;
	uint32_t t169 = 0U;

    t169 = (x701%(x702|(x703%x704)));

    if (t169 != 1U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x705 = 16;
	static int8_t x707 = INT8_MIN;
	int8_t x708 = -1;
	static int32_t t170 = -45087000;

    t170 = (x705%(x706|(x707%x708)));

    if (t170 != 16) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x709 = -781865;
	int16_t x710 = 111;
	static uint8_t x711 = 4U;

    t171 = (x709%(x710|(x711%x712)));

    if (t171 != -92) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x713 = 2069165LL;
	volatile int16_t x715 = INT16_MIN;
	int64_t x716 = -171343170115983LL;
	volatile int64_t t172 = -707LL;

    t172 = (x713%(x714|(x715%x716)));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x717 = UINT16_MAX;
	uint16_t x718 = 6663U;
	int64_t x719 = INT64_MIN;
	static uint16_t x720 = UINT16_MAX;

    t173 = (x717%(x718|(x719%x720)));

    if (t173 != 13325LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x721 = 29U;
	static int64_t x722 = INT64_MAX;
	uint8_t x723 = UINT8_MAX;
	static int8_t x724 = INT8_MIN;
	volatile int64_t t174 = 711LL;

    t174 = (x721%(x722|(x723%x724)));

    if (t174 != 29LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x725 = UINT16_MAX;
	static volatile uint32_t x727 = UINT32_MAX;
	static int16_t x728 = -1;
	uint32_t t175 = 781252U;

    t175 = (x725%(x726|(x727%x728)));

    if (t175 != 3U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x733 = 4U;
	int16_t x734 = -1;
	static uint8_t x735 = UINT8_MAX;
	volatile int32_t x736 = INT32_MIN;
	static int32_t t176 = -20;

    t176 = (x733%(x734|(x735%x736)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x737 = UINT64_MAX;
	int16_t x738 = INT16_MIN;
	int16_t x740 = INT16_MIN;

    t177 = (x737%(x738|(x739%x740)));

    if (t177 != 32764LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x749 = UINT64_MAX;
	int64_t x752 = -28209213LL;
	volatile uint64_t t178 = 212362882012108LLU;

    t178 = (x749%(x750|(x751%x752)));

    if (t178 != 5LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x753 = 1;
	int8_t x754 = INT8_MAX;
	static uint16_t x755 = 52U;
	int32_t x756 = -1;
	volatile int32_t t179 = 1446897;

    t179 = (x753%(x754|(x755%x756)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x757 = INT8_MIN;
	uint8_t x758 = 14U;
	static int32_t x759 = -1;
	uint16_t x760 = UINT16_MAX;
	int32_t t180 = -2649;

    t180 = (x757%(x758|(x759%x760)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x761 = -3789629LL;
	int16_t x762 = INT16_MIN;
	int16_t x763 = -770;
	static int8_t x764 = 1;
	volatile int64_t t181 = 501590LL;

    t181 = (x761%(x762|(x763%x764)));

    if (t181 != -21309LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x767 = 0;
	int8_t x768 = 2;
	volatile uint32_t t182 = 332U;

    t182 = (x765%(x766|(x767%x768)));

    if (t182 != 247U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x769 = UINT16_MAX;
	volatile uint32_t x770 = 94U;
	int8_t x772 = -36;
	volatile uint32_t t183 = 6009U;

    t183 = (x769%(x770|(x771%x772)));

    if (t183 != 80U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x773 = -10;
	int8_t x775 = INT8_MAX;
	static int16_t x776 = INT16_MIN;
	int32_t t184 = -13;

    t184 = (x773%(x774|(x775%x776)));

    if (t184 != -10) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x777 = INT8_MAX;
	volatile int32_t x778 = INT32_MIN;
	volatile int16_t x779 = -2;
	uint16_t x780 = 944U;

    t185 = (x777%(x778|(x779%x780)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x781 = 16;
	int32_t x782 = -7;
	static int16_t x783 = 22;
	static volatile int32_t x784 = -46487353;

    t186 = (x781%(x782|(x783%x784)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x785 = -467568;
	uint8_t x786 = 28U;
	static int64_t x787 = INT64_MAX;
	int64_t x788 = -1LL;
	int64_t t187 = 13750736887277LL;

    t187 = (x785%(x786|(x787%x788)));

    if (t187 != -24LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x789 = INT32_MAX;
	static volatile int64_t x790 = -13132LL;
	int32_t x791 = -1;
	int64_t x792 = -114LL;
	volatile int64_t t188 = 30154476608LL;

    t188 = (x789%(x790|(x791%x792)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x793 = INT32_MAX;
	volatile int32_t x794 = 45794;
	int64_t x795 = INT64_MIN;
	volatile int64_t x796 = -30292705LL;
	volatile int64_t t189 = -41944047LL;

    t189 = (x793%(x794|(x795%x796)));

    if (t189 != 38386LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x797 = INT64_MIN;
	uint8_t x798 = 0U;
	uint16_t x799 = 1774U;
	volatile uint32_t x800 = 183U;
	int64_t t190 = 39617756LL;

    t190 = (x797%(x798|(x799%x800)));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x805 = -218148;
	int16_t x806 = INT16_MIN;
	int16_t x807 = INT16_MAX;
	uint32_t x808 = UINT32_MAX;
	uint32_t t191 = 689U;

    t191 = (x805%(x806|(x807%x808)));

    if (t191 != 4294749148U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x810 = 23;
	static uint16_t x811 = 212U;
	int8_t x812 = INT8_MIN;

    t192 = (x809%(x810|(x811%x812)));

    if (t192 != -41LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x813 = 0U;
	static volatile int32_t x814 = INT32_MIN;
	int8_t x815 = INT8_MIN;
	int8_t x816 = INT8_MIN;

    t193 = (x813%(x814|(x815%x816)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x818 = 260518378U;
	uint8_t x819 = UINT8_MAX;
	volatile uint16_t x820 = 2061U;
	volatile uint32_t t194 = 895258163U;

    t194 = (x817%(x818|(x819%x820)));

    if (t194 != 126672784U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x821 = UINT64_MAX;
	int32_t x822 = -23427593;
	int64_t x823 = INT64_MIN;
	int8_t x824 = INT8_MIN;
	uint64_t t195 = 13487LLU;

    t195 = (x821%(x822|(x823%x824)));

    if (t195 != 23427592LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x825 = 160760969682535LLU;
	int64_t x826 = INT64_MAX;
	int32_t x827 = INT32_MAX;
	int32_t x828 = INT32_MIN;
	volatile uint64_t t196 = 1309LLU;

    t196 = (x825%(x826|(x827%x828)));

    if (t196 != 160760969682535LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x829 = 20U;
	uint64_t x830 = UINT64_MAX;
	volatile uint8_t x831 = 0U;
	volatile int64_t x832 = -233228747LL;
	uint64_t t197 = 10772645093468276LLU;

    t197 = (x829%(x830|(x831%x832)));

    if (t197 != 20LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x833 = 3604010058992016192LL;
	int64_t x834 = INT64_MAX;
	uint64_t x835 = 71864549LLU;
	int8_t x836 = INT8_MIN;
	volatile uint64_t t198 = 13429727168LLU;

    t198 = (x833%(x834|(x835%x836)));

    if (t198 != 3604010058992016192LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x838 = -1LL;
	int32_t x840 = INT32_MIN;
	volatile int64_t t199 = 3LL;

    t199 = (x837%(x838|(x839%x840)));

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

