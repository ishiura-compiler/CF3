
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

int16_t x1 = INT16_MIN;
volatile uint32_t x3 = UINT32_MAX;
int8_t x7 = 17;
uint64_t x12 = 5615445130LLU;
static uint32_t x22 = UINT32_MAX;
static uint64_t x23 = UINT64_MAX;
static int8_t x25 = INT8_MIN;
uint32_t x32 = 1U;
int32_t t8 = -24;
static volatile uint8_t x40 = UINT8_MAX;
int8_t x42 = 33;
int32_t t11 = -342482;
int16_t x57 = INT16_MIN;
volatile int8_t x58 = 32;
uint16_t x64 = 115U;
int8_t x68 = INT8_MIN;
static int32_t x70 = -199756;
uint16_t x71 = 1832U;
static volatile uint16_t x73 = 1U;
static uint16_t x74 = UINT16_MAX;
int32_t t17 = -190239181;
int8_t x77 = INT8_MIN;
int16_t x88 = INT16_MIN;
volatile int32_t t20 = 9196;
int16_t x93 = INT16_MIN;
uint64_t x95 = UINT64_MAX;
volatile int32_t t24 = -620356;
int8_t x113 = 1;
volatile int16_t x114 = INT16_MIN;
static int8_t x116 = 0;
int8_t x119 = -1;
int16_t x126 = INT16_MIN;
static uint64_t x127 = UINT64_MAX;
volatile uint8_t x145 = 22U;
static int32_t x150 = INT32_MIN;
volatile int16_t x154 = -3322;
int32_t x165 = 23370374;
static volatile int32_t x170 = 380;
static uint16_t x177 = 3U;
static int8_t x182 = INT8_MAX;
uint8_t x186 = 45U;
static int32_t t43 = -1668244;
uint8_t x194 = UINT8_MAX;
uint16_t x195 = 816U;
uint64_t x202 = 49795LLU;
volatile int64_t x206 = INT64_MAX;
int16_t x211 = INT16_MIN;
int16_t x222 = INT16_MAX;
static int64_t x231 = INT64_MIN;
uint32_t x232 = 48U;
static int32_t t54 = 2235;
int8_t x237 = INT8_MIN;
int8_t x238 = INT8_MIN;
volatile int16_t x239 = -1;
volatile uint8_t x242 = UINT8_MAX;
volatile int8_t x249 = -1;
static int8_t x252 = 8;
static volatile int32_t t59 = 92464;
int32_t x256 = 58249333;
int16_t x257 = INT16_MIN;
int32_t x274 = INT32_MIN;
uint32_t x286 = 96808U;
uint8_t x289 = UINT8_MAX;
int16_t x290 = 0;
static volatile uint32_t x295 = 30U;
int8_t x296 = INT8_MIN;
static uint32_t x299 = UINT32_MAX;
int32_t t71 = -33743;
int16_t x307 = INT16_MIN;
int8_t x311 = INT8_MIN;
volatile int32_t t74 = -49;
uint32_t x325 = 246U;
uint64_t x337 = 270027364LLU;
uint32_t x339 = UINT32_MAX;
uint8_t x342 = 1U;
uint8_t x344 = 3U;
uint32_t x349 = 2056532561U;
static int8_t x351 = -14;
int16_t x353 = 1418;
int64_t x359 = -6434812455LL;
int32_t t83 = -407;
volatile int16_t x365 = 0;
uint8_t x370 = 8U;
int16_t x371 = INT16_MAX;
uint32_t x372 = UINT32_MAX;
int16_t x374 = -13;
int16_t x376 = -1;
int64_t x378 = 29LL;
uint64_t x385 = 4947732359413194346LLU;
int64_t x388 = -1LL;
uint8_t x390 = UINT8_MAX;
int32_t t91 = 330;
uint32_t x400 = 14989U;
int8_t x404 = 4;
static uint32_t x410 = UINT32_MAX;
uint32_t x411 = 8441U;
int16_t x414 = INT16_MIN;
int64_t x416 = INT64_MIN;
static volatile int64_t x419 = INT64_MIN;
static volatile int16_t x420 = INT16_MAX;
int64_t x425 = 99039903LL;
uint32_t x426 = 886089306U;
static int8_t x427 = 1;
int64_t x436 = INT64_MAX;
uint8_t x440 = 1U;
uint16_t x448 = UINT16_MAX;
volatile int32_t t103 = 14;
int8_t x451 = INT8_MIN;
int32_t t104 = -2748107;
volatile int32_t t106 = -2167494;
static int32_t t108 = 138;
int16_t x470 = INT16_MAX;
static int16_t x472 = INT16_MIN;
int16_t x479 = 114;
static uint16_t x482 = 5U;
int32_t x487 = 663154;
uint16_t x489 = UINT16_MAX;
uint8_t x492 = 7U;
static int16_t x495 = -3321;
static int32_t x503 = INT32_MAX;
static uint16_t x505 = 3U;
volatile uint8_t x506 = 12U;
volatile int32_t t118 = -318853;
static int64_t x509 = INT64_MIN;
int32_t x510 = INT32_MIN;
volatile int32_t t120 = 177841;
static int32_t x523 = INT32_MIN;
int32_t x528 = -1;
static volatile int32_t t122 = -47121;
int8_t x533 = INT8_MIN;
int32_t x534 = -544284;
int32_t x536 = 806;
static uint16_t x545 = 0U;
volatile int32_t x546 = 59;
int16_t x548 = -1;
volatile int16_t x563 = -1;
static int16_t x564 = -1;
static int32_t t129 = -13;
int8_t x566 = 25;
uint32_t x567 = 127348U;
int32_t t130 = -617;
uint32_t x583 = UINT32_MAX;
uint64_t x585 = 266LLU;
int32_t x593 = INT32_MIN;
volatile uint32_t x599 = UINT32_MAX;
static uint16_t x604 = UINT16_MAX;
int32_t t139 = 1;
volatile int32_t x631 = INT32_MIN;
volatile int32_t t144 = -127487387;
uint64_t x637 = 1430410LLU;
uint32_t x638 = 86U;
volatile int32_t t146 = 15;
int32_t x645 = INT32_MIN;
uint32_t x648 = UINT32_MAX;
int32_t t148 = -21774;
static int64_t x656 = INT64_MAX;
volatile int64_t x660 = INT64_MIN;
static int8_t x663 = -23;
static volatile int32_t x693 = INT32_MIN;
int8_t x701 = 59;
int32_t x721 = -1;
static int8_t x726 = -1;
int8_t x727 = INT8_MAX;
int16_t x729 = -52;
static uint32_t x731 = 170417U;
int16_t x732 = -1;
int32_t t169 = 1631;
int16_t x740 = 3;
int8_t x752 = 1;
int64_t x753 = INT64_MIN;
int8_t x755 = -1;
uint32_t x770 = 11U;
int16_t x773 = INT16_MIN;
volatile uint16_t x774 = 206U;
static int32_t t176 = 5122;
static uint64_t x779 = 3701LLU;
static uint8_t x781 = 6U;
uint8_t x783 = 16U;
int32_t t179 = -215228478;
uint64_t x790 = 53831LLU;
int16_t x792 = INT16_MAX;
static volatile int32_t t180 = -55;
uint32_t x794 = 2U;
volatile int16_t x796 = INT16_MIN;
int64_t x799 = -40220434LL;
uint8_t x805 = 15U;
volatile int32_t t184 = -62;
int16_t x815 = 5;
int64_t x816 = 125332328LL;
static volatile int32_t t186 = 2;
int16_t x818 = -9204;
volatile int64_t x819 = INT64_MIN;
int64_t x820 = -1LL;
int32_t x822 = -1;
uint64_t x823 = UINT64_MAX;
int32_t t188 = 2;
volatile int32_t t190 = -1387;
int16_t x836 = -851;
int64_t x845 = -1LL;
int16_t x846 = -1;
volatile int64_t x848 = -4131492LL;
volatile int32_t t194 = 754510421;
static uint16_t x853 = UINT16_MAX;
uint16_t x860 = 1534U;
volatile uint32_t x864 = 248426454U;
static int16_t x865 = 35;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 10950;

    t0 = ((x1-x2)!=(x3^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -888091LL;
	uint64_t x6 = 5685510429LLU;
	volatile uint32_t x8 = UINT32_MAX;
	static volatile int32_t t1 = 16209505;

    t1 = ((x5-x6)!=(x7^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = UINT8_MAX;
	int8_t x10 = INT8_MIN;
	static volatile int32_t x11 = -105;
	volatile int32_t t2 = -3205;

    t2 = ((x9-x10)!=(x11^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 14;
	int8_t x14 = INT8_MIN;
	int16_t x15 = -11;
	int8_t x16 = 0;
	volatile int32_t t3 = -21091;

    t3 = ((x13-x14)!=(x15^x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MAX;
	uint16_t x18 = 475U;
	static int32_t x19 = 158248515;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -928133;

    t4 = ((x17-x18)!=(x19^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -7474169LL;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -691321;

    t5 = ((x21-x22)!=(x23^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = 0;
	volatile int64_t x27 = INT64_MIN;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 35688305;

    t6 = ((x25-x26)!=(x27^x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	uint16_t x30 = 18718U;
	static volatile uint8_t x31 = 7U;
	static volatile int32_t t7 = -4;

    t7 = ((x29-x30)!=(x31^x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	static int16_t x34 = -1;
	int16_t x35 = -1;
	volatile int32_t x36 = INT32_MIN;

    t8 = ((x33-x34)!=(x35^x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 0U;
	uint16_t x38 = 28U;
	static int64_t x39 = INT64_MAX;
	int32_t t9 = -64;

    t9 = ((x37-x38)!=(x39^x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	uint32_t x43 = UINT32_MAX;
	static uint8_t x44 = UINT8_MAX;
	int32_t t10 = -268140270;

    t10 = ((x41-x42)!=(x43^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 3LLU;
	int64_t x46 = INT64_MIN;
	volatile int32_t x47 = -1061827634;
	volatile int64_t x48 = -11473828399885246LL;

    t11 = ((x45-x46)!=(x47^x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x53 = 1975U;
	int8_t x54 = INT8_MIN;
	static uint32_t x55 = 15U;
	volatile int16_t x56 = INT16_MIN;
	int32_t t12 = -44627623;

    t12 = ((x53-x54)!=(x55^x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x59 = UINT8_MAX;
	int64_t x60 = -1LL;
	volatile int32_t t13 = 0;

    t13 = ((x57-x58)!=(x59^x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = UINT64_MAX;
	uint32_t x62 = UINT32_MAX;
	int8_t x63 = 0;
	volatile int32_t t14 = -1;

    t14 = ((x61-x62)!=(x63^x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 253727923U;
	volatile int16_t x66 = INT16_MAX;
	volatile uint8_t x67 = 15U;
	volatile int32_t t15 = -5361;

    t15 = ((x65-x66)!=(x67^x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x69 = 36;
	int16_t x72 = -1;
	int32_t t16 = -96132370;

    t16 = ((x69-x70)!=(x71^x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x75 = 0;
	uint32_t x76 = UINT32_MAX;

    t17 = ((x73-x74)!=(x75^x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x78 = -1LL;
	int32_t x79 = INT32_MAX;
	uint8_t x80 = 2U;
	static int32_t t18 = 12540;

    t18 = ((x77-x78)!=(x79^x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 3918417773LLU;
	uint64_t x82 = 467972LLU;
	int8_t x83 = INT8_MIN;
	volatile uint16_t x84 = 1484U;
	int32_t t19 = -1267148;

    t19 = ((x81-x82)!=(x83^x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MIN;
	static int8_t x86 = -1;
	uint8_t x87 = UINT8_MAX;

    t20 = ((x85-x86)!=(x87^x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x94 = 97LLU;
	int64_t x96 = -2058686870510LL;
	int32_t t21 = 12283024;

    t21 = ((x93-x94)!=(x95^x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x97 = 7U;
	volatile int32_t x98 = INT32_MIN;
	int8_t x99 = -1;
	int32_t x100 = -31;
	int32_t t22 = -6300641;

    t22 = ((x97-x98)!=(x99^x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x101 = UINT8_MAX;
	static int8_t x102 = INT8_MIN;
	int64_t x103 = 693282LL;
	static uint64_t x104 = UINT64_MAX;
	volatile int32_t t23 = 193;

    t23 = ((x101-x102)!=(x103^x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x105 = INT8_MIN;
	volatile int16_t x106 = INT16_MIN;
	static volatile uint64_t x107 = UINT64_MAX;
	volatile int8_t x108 = INT8_MIN;

    t24 = ((x105-x106)!=(x107^x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = 0;
	volatile int32_t x110 = 12354381;
	int8_t x111 = INT8_MAX;
	uint8_t x112 = 67U;
	int32_t t25 = 0;

    t25 = ((x109-x110)!=(x111^x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x115 = 4U;
	int32_t t26 = -330913257;

    t26 = ((x113-x114)!=(x115^x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x117 = INT8_MIN;
	static int32_t x118 = -1;
	uint64_t x120 = 1809252702795LLU;
	static volatile int32_t t27 = 75;

    t27 = ((x117-x118)!=(x119^x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = 3;
	int16_t x122 = 51;
	int32_t x123 = 443458336;
	static volatile uint32_t x124 = 171249613U;
	volatile int32_t t28 = 46;

    t28 = ((x121-x122)!=(x123^x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x125 = 10U;
	static int8_t x128 = -1;
	volatile int32_t t29 = -37;

    t29 = ((x125-x126)!=(x127^x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = INT32_MIN;
	int16_t x130 = -1;
	int8_t x131 = -1;
	int16_t x132 = INT16_MIN;
	volatile int32_t t30 = -30;

    t30 = ((x129-x130)!=(x131^x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MIN;
	int64_t x139 = -140843327LL;
	int32_t x140 = INT32_MAX;
	volatile int32_t t31 = 33709611;

    t31 = ((x137-x138)!=(x139^x140));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x141 = 106871124LLU;
	uint16_t x142 = 11U;
	uint64_t x143 = 7LLU;
	static volatile int16_t x144 = 3;
	int32_t t32 = 126474;

    t32 = ((x141-x142)!=(x143^x144));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x146 = INT32_MAX;
	uint8_t x147 = 31U;
	static int32_t x148 = -1;
	static int32_t t33 = -7;

    t33 = ((x145-x146)!=(x147^x148));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = -33113082416LL;
	int32_t x151 = -1;
	volatile uint32_t x152 = UINT32_MAX;
	volatile int32_t t34 = -170309;

    t34 = ((x149-x150)!=(x151^x152));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = 291;
	int16_t x155 = -1;
	volatile uint8_t x156 = 2U;
	int32_t t35 = 2161794;

    t35 = ((x153-x154)!=(x155^x156));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = -14LL;
	int16_t x158 = -1;
	uint32_t x159 = 437479U;
	static volatile uint32_t x160 = UINT32_MAX;
	volatile int32_t t36 = -868;

    t36 = ((x157-x158)!=(x159^x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x161 = INT32_MAX;
	static uint8_t x162 = 104U;
	uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MAX;
	static int32_t t37 = -1120823;

    t37 = ((x161-x162)!=(x163^x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x166 = INT8_MAX;
	volatile uint32_t x167 = 3845U;
	uint16_t x168 = UINT16_MAX;
	static int32_t t38 = -81605;

    t38 = ((x165-x166)!=(x167^x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x169 = 25752823850LLU;
	int8_t x171 = 9;
	volatile int32_t x172 = 605;
	int32_t t39 = 11438282;

    t39 = ((x169-x170)!=(x171^x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = -1;
	uint64_t x174 = 152395940471LLU;
	volatile uint64_t x175 = 0LLU;
	static uint16_t x176 = 7311U;
	volatile int32_t t40 = 53498;

    t40 = ((x173-x174)!=(x175^x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x178 = 2003740904U;
	volatile int32_t x179 = 7114;
	uint16_t x180 = 3962U;
	int32_t t41 = -817830;

    t41 = ((x177-x178)!=(x179^x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint8_t x181 = UINT8_MAX;
	static uint16_t x183 = UINT16_MAX;
	volatile int32_t x184 = INT32_MIN;
	int32_t t42 = 0;

    t42 = ((x181-x182)!=(x183^x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x185 = 13142357U;
	int8_t x187 = INT8_MIN;
	int8_t x188 = 0;

    t43 = ((x185-x186)!=(x187^x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x189 = 41U;
	uint16_t x190 = 795U;
	uint8_t x191 = 1U;
	uint32_t x192 = 28601497U;
	int32_t t44 = 0;

    t44 = ((x189-x190)!=(x191^x192));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x193 = 132U;
	static uint32_t x196 = 0U;
	int32_t t45 = -43022607;

    t45 = ((x193-x194)!=(x195^x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = -10;
	uint8_t x198 = UINT8_MAX;
	uint64_t x199 = 616882032135636466LLU;
	static uint8_t x200 = 19U;
	volatile int32_t t46 = 2299;

    t46 = ((x197-x198)!=(x199^x200));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x201 = -1;
	volatile uint8_t x203 = 5U;
	static int8_t x204 = INT8_MIN;
	int32_t t47 = 33;

    t47 = ((x201-x202)!=(x203^x204));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x205 = -1LL;
	static int32_t x207 = INT32_MAX;
	int8_t x208 = 1;
	static volatile int32_t t48 = 636369;

    t48 = ((x205-x206)!=(x207^x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = -1;
	int8_t x210 = 18;
	uint64_t x212 = 88797924795390729LLU;
	volatile int32_t t49 = 2350199;

    t49 = ((x209-x210)!=(x211^x212));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x213 = -1LL;
	uint8_t x214 = UINT8_MAX;
	uint32_t x215 = 145902U;
	int16_t x216 = INT16_MAX;
	int32_t t50 = -1;

    t50 = ((x213-x214)!=(x215^x216));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x217 = 53U;
	volatile int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int16_t x220 = -1;
	static int32_t t51 = -952;

    t51 = ((x217-x218)!=(x219^x220));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x221 = 638LLU;
	uint64_t x223 = 113604504431648LLU;
	int16_t x224 = -1;
	static int32_t t52 = -909471553;

    t52 = ((x221-x222)!=(x223^x224));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x225 = 37U;
	int8_t x226 = -1;
	int8_t x227 = INT8_MIN;
	static int16_t x228 = INT16_MIN;
	static int32_t t53 = 81;

    t53 = ((x225-x226)!=(x227^x228));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = 58;
	int8_t x230 = INT8_MIN;

    t54 = ((x229-x230)!=(x231^x232));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x233 = 7U;
	int16_t x234 = INT16_MIN;
	int64_t x235 = -4654970019LL;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t55 = -19041;

    t55 = ((x233-x234)!=(x235^x236));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x240 = -1;
	int32_t t56 = -23137939;

    t56 = ((x237-x238)!=(x239^x240));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x241 = 2933U;
	int64_t x243 = 103146421LL;
	uint8_t x244 = 3U;
	static volatile int32_t t57 = 536797;

    t57 = ((x241-x242)!=(x243^x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x245 = UINT8_MAX;
	uint16_t x246 = 3919U;
	static uint32_t x247 = 2974841U;
	volatile int32_t x248 = INT32_MIN;
	static volatile int32_t t58 = 2;

    t58 = ((x245-x246)!=(x247^x248));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x250 = INT64_MIN;
	static int32_t x251 = INT32_MIN;

    t59 = ((x249-x250)!=(x251^x252));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x253 = INT32_MAX;
	int64_t x254 = 22216421766007LL;
	uint32_t x255 = 27379426U;
	volatile int32_t t60 = -4465463;

    t60 = ((x253-x254)!=(x255^x256));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x258 = -1;
	int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MAX;
	int32_t t61 = 18803;

    t61 = ((x257-x258)!=(x259^x260));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x261 = UINT8_MAX;
	volatile int8_t x262 = -3;
	int16_t x263 = INT16_MAX;
	static int32_t x264 = -1;
	int32_t t62 = 9778;

    t62 = ((x261-x262)!=(x263^x264));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x265 = 125762669U;
	uint32_t x266 = UINT32_MAX;
	uint16_t x267 = 51U;
	int32_t x268 = -1;
	int32_t t63 = 4360881;

    t63 = ((x265-x266)!=(x267^x268));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x273 = INT64_MIN;
	volatile uint16_t x275 = 0U;
	int8_t x276 = -1;
	int32_t t64 = -2094603;

    t64 = ((x273-x274)!=(x275^x276));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x277 = 128107712408546222LLU;
	int8_t x278 = INT8_MIN;
	static int8_t x279 = INT8_MIN;
	volatile int16_t x280 = INT16_MIN;
	volatile int32_t t65 = -6;

    t65 = ((x277-x278)!=(x279^x280));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x281 = INT32_MIN;
	static int8_t x282 = INT8_MIN;
	uint64_t x283 = 212127462590792413LLU;
	volatile int8_t x284 = INT8_MIN;
	int32_t t66 = 102;

    t66 = ((x281-x282)!=(x283^x284));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x285 = -5820732LL;
	int64_t x287 = -535354450822836LL;
	int32_t x288 = -1;
	int32_t t67 = 0;

    t67 = ((x285-x286)!=(x287^x288));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x291 = INT64_MIN;
	volatile uint16_t x292 = 22647U;
	volatile int32_t t68 = 10;

    t68 = ((x289-x290)!=(x291^x292));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x293 = UINT32_MAX;
	uint64_t x294 = UINT64_MAX;
	volatile int32_t t69 = 14227;

    t69 = ((x293-x294)!=(x295^x296));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x297 = 52U;
	int32_t x298 = 3;
	static int8_t x300 = INT8_MIN;
	static volatile int32_t t70 = -1852572;

    t70 = ((x297-x298)!=(x299^x300));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x301 = 77446006142LL;
	int16_t x302 = INT16_MAX;
	int32_t x303 = -1;
	int16_t x304 = INT16_MAX;

    t71 = ((x301-x302)!=(x303^x304));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x305 = UINT16_MAX;
	int16_t x306 = INT16_MIN;
	int16_t x308 = -99;
	static volatile int32_t t72 = -87;

    t72 = ((x305-x306)!=(x307^x308));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x309 = INT16_MIN;
	uint16_t x310 = UINT16_MAX;
	int32_t x312 = INT32_MAX;
	volatile int32_t t73 = -30055;

    t73 = ((x309-x310)!=(x311^x312));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x313 = -134883402LL;
	uint16_t x314 = 468U;
	int8_t x315 = -1;
	static int16_t x316 = INT16_MIN;

    t74 = ((x313-x314)!=(x315^x316));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x321 = INT32_MIN;
	int32_t x322 = -1;
	int64_t x323 = INT64_MAX;
	static int16_t x324 = -1;
	int32_t t75 = -89;

    t75 = ((x321-x322)!=(x323^x324));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x326 = -9;
	int32_t x327 = 3811;
	volatile uint16_t x328 = UINT16_MAX;
	int32_t t76 = 260438497;

    t76 = ((x325-x326)!=(x327^x328));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x333 = 58981LLU;
	volatile int64_t x334 = INT64_MAX;
	int8_t x335 = INT8_MIN;
	uint32_t x336 = 116663665U;
	int32_t t77 = -721386349;

    t77 = ((x333-x334)!=(x335^x336));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x338 = -1LL;
	static int32_t x340 = -1;
	int32_t t78 = -782183002;

    t78 = ((x337-x338)!=(x339^x340));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x341 = 1U;
	static int64_t x343 = INT64_MIN;
	volatile int32_t t79 = -342067689;

    t79 = ((x341-x342)!=(x343^x344));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x345 = -1LL;
	volatile uint16_t x346 = UINT16_MAX;
	static uint32_t x347 = 53U;
	int64_t x348 = 356809329LL;
	static volatile int32_t t80 = -685504987;

    t80 = ((x345-x346)!=(x347^x348));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x350 = UINT32_MAX;
	int64_t x352 = INT64_MIN;
	int32_t t81 = 429275116;

    t81 = ((x349-x350)!=(x351^x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x354 = INT64_MAX;
	int8_t x355 = INT8_MAX;
	int8_t x356 = 3;
	volatile int32_t t82 = 142582;

    t82 = ((x353-x354)!=(x355^x356));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x357 = UINT16_MAX;
	volatile int16_t x358 = 1;
	int64_t x360 = -56511223LL;

    t83 = ((x357-x358)!=(x359^x360));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x361 = INT8_MIN;
	int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MIN;
	static uint8_t x364 = 113U;
	int32_t t84 = -6398822;

    t84 = ((x361-x362)!=(x363^x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x366 = UINT16_MAX;
	int64_t x367 = INT64_MAX;
	int16_t x368 = -1;
	int32_t t85 = 879967073;

    t85 = ((x365-x366)!=(x367^x368));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x369 = -15836;
	int32_t t86 = -207605;

    t86 = ((x369-x370)!=(x371^x372));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x373 = 5U;
	int32_t x375 = -1;
	int32_t t87 = 87877;

    t87 = ((x373-x374)!=(x375^x376));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x377 = 718310719834LLU;
	static int16_t x379 = -962;
	volatile int8_t x380 = -1;
	static volatile int32_t t88 = 59584;

    t88 = ((x377-x378)!=(x379^x380));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x386 = INT64_MIN;
	uint16_t x387 = 25767U;
	static volatile int32_t t89 = 5363207;

    t89 = ((x385-x386)!=(x387^x388));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x389 = 7U;
	volatile uint64_t x391 = 1491230447636950099LLU;
	int16_t x392 = INT16_MIN;
	static int32_t t90 = 404;

    t90 = ((x389-x390)!=(x391^x392));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x393 = 15U;
	uint32_t x394 = UINT32_MAX;
	uint8_t x395 = UINT8_MAX;
	static int16_t x396 = -1;

    t91 = ((x393-x394)!=(x395^x396));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x397 = -15;
	uint8_t x398 = 0U;
	int64_t x399 = 2LL;
	volatile int32_t t92 = -11296;

    t92 = ((x397-x398)!=(x399^x400));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x401 = 15U;
	uint32_t x402 = UINT32_MAX;
	int64_t x403 = 157LL;
	int32_t t93 = 355;

    t93 = ((x401-x402)!=(x403^x404));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x405 = -1;
	static volatile uint32_t x406 = 7476U;
	int16_t x407 = -7296;
	volatile int16_t x408 = -1;
	volatile int32_t t94 = 28;

    t94 = ((x405-x406)!=(x407^x408));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x409 = UINT16_MAX;
	uint16_t x412 = UINT16_MAX;
	int32_t t95 = -1977376;

    t95 = ((x409-x410)!=(x411^x412));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x413 = INT8_MAX;
	int8_t x415 = INT8_MAX;
	int32_t t96 = -381;

    t96 = ((x413-x414)!=(x415^x416));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x417 = -15595451LL;
	volatile uint64_t x418 = 13915028LLU;
	volatile int32_t t97 = -107;

    t97 = ((x417-x418)!=(x419^x420));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x421 = -6;
	int32_t x422 = -1;
	static uint8_t x423 = 108U;
	int32_t x424 = -4069968;
	int32_t t98 = -33;

    t98 = ((x421-x422)!=(x423^x424));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x428 = -10LL;
	volatile int32_t t99 = 7834;

    t99 = ((x425-x426)!=(x427^x428));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x433 = 0U;
	uint32_t x434 = 471309776U;
	int32_t x435 = INT32_MIN;
	int32_t t100 = 67;

    t100 = ((x433-x434)!=(x435^x436));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x437 = 126;
	volatile int32_t x438 = 982036;
	int16_t x439 = -1;
	volatile int32_t t101 = -875642788;

    t101 = ((x437-x438)!=(x439^x440));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x441 = INT8_MAX;
	int8_t x442 = INT8_MIN;
	int16_t x443 = 0;
	uint64_t x444 = 121LLU;
	volatile int32_t t102 = 29140102;

    t102 = ((x441-x442)!=(x443^x444));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x445 = 90U;
	int16_t x446 = 2;
	int32_t x447 = -19;

    t103 = ((x445-x446)!=(x447^x448));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x449 = -1;
	volatile int16_t x450 = 142;
	uint32_t x452 = 5126350U;

    t104 = ((x449-x450)!=(x451^x452));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x453 = 1U;
	static uint32_t x454 = 42U;
	int16_t x455 = 609;
	int16_t x456 = INT16_MIN;
	int32_t t105 = -202249736;

    t105 = ((x453-x454)!=(x455^x456));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x457 = 768814U;
	static int32_t x458 = INT32_MIN;
	volatile int64_t x459 = -1147845063638618778LL;
	int64_t x460 = -121315167510LL;

    t106 = ((x457-x458)!=(x459^x460));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x461 = 1882610LLU;
	static uint32_t x462 = UINT32_MAX;
	int8_t x463 = -1;
	volatile int8_t x464 = 0;
	static int32_t t107 = 525845;

    t107 = ((x461-x462)!=(x463^x464));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x465 = UINT64_MAX;
	int64_t x466 = -1LL;
	int8_t x467 = INT8_MAX;
	static int16_t x468 = INT16_MAX;

    t108 = ((x465-x466)!=(x467^x468));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x469 = UINT16_MAX;
	static uint32_t x471 = UINT32_MAX;
	int32_t t109 = 6;

    t109 = ((x469-x470)!=(x471^x472));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x473 = 3813456481LLU;
	uint16_t x474 = UINT16_MAX;
	int64_t x475 = INT64_MIN;
	volatile int8_t x476 = INT8_MAX;
	volatile int32_t t110 = 974;

    t110 = ((x473-x474)!=(x475^x476));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x477 = INT16_MIN;
	volatile int64_t x478 = 12382629998655LL;
	uint32_t x480 = 1146991392U;
	static volatile int32_t t111 = 0;

    t111 = ((x477-x478)!=(x479^x480));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x481 = -1;
	int64_t x483 = -317821236437929708LL;
	int32_t x484 = INT32_MAX;
	volatile int32_t t112 = 3669410;

    t112 = ((x481-x482)!=(x483^x484));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x485 = 110U;
	uint16_t x486 = 10U;
	static uint64_t x488 = UINT64_MAX;
	int32_t t113 = -1127;

    t113 = ((x485-x486)!=(x487^x488));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint8_t x490 = 4U;
	int16_t x491 = -218;
	volatile int32_t t114 = -75835;

    t114 = ((x489-x490)!=(x491^x492));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x493 = UINT32_MAX;
	int64_t x494 = -1LL;
	volatile uint16_t x496 = 33U;
	volatile int32_t t115 = 100297;

    t115 = ((x493-x494)!=(x495^x496));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x497 = -1;
	volatile int16_t x498 = 180;
	int8_t x499 = INT8_MAX;
	int32_t x500 = INT32_MIN;
	int32_t t116 = 13;

    t116 = ((x497-x498)!=(x499^x500));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x501 = 11U;
	uint8_t x502 = UINT8_MAX;
	static int16_t x504 = -1;
	int32_t t117 = -3042;

    t117 = ((x501-x502)!=(x503^x504));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x507 = INT16_MIN;
	uint16_t x508 = UINT16_MAX;

    t118 = ((x505-x506)!=(x507^x508));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x511 = INT8_MIN;
	static uint32_t x512 = 2U;
	volatile int32_t t119 = -515029764;

    t119 = ((x509-x510)!=(x511^x512));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x517 = 43945371U;
	static int16_t x518 = INT16_MIN;
	int8_t x519 = -1;
	volatile int64_t x520 = INT64_MAX;

    t120 = ((x517-x518)!=(x519^x520));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x521 = UINT32_MAX;
	uint16_t x522 = 7U;
	int16_t x524 = INT16_MIN;
	int32_t t121 = -108055363;

    t121 = ((x521-x522)!=(x523^x524));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x525 = -1;
	uint16_t x526 = UINT16_MAX;
	uint16_t x527 = UINT16_MAX;

    t122 = ((x525-x526)!=(x527^x528));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x529 = -3;
	int16_t x530 = 513;
	static uint64_t x531 = UINT64_MAX;
	volatile uint16_t x532 = UINT16_MAX;
	volatile int32_t t123 = 875538239;

    t123 = ((x529-x530)!=(x531^x532));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x535 = INT64_MIN;
	static volatile int32_t t124 = -3267;

    t124 = ((x533-x534)!=(x535^x536));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x541 = UINT64_MAX;
	int64_t x542 = -1LL;
	volatile int16_t x543 = -1;
	int16_t x544 = 47;
	int32_t t125 = 124;

    t125 = ((x541-x542)!=(x543^x544));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x547 = INT32_MIN;
	int32_t t126 = 8264;

    t126 = ((x545-x546)!=(x547^x548));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x549 = 12124U;
	volatile int16_t x550 = -1;
	int64_t x551 = 1489555815811525254LL;
	int16_t x552 = -147;
	int32_t t127 = 4;

    t127 = ((x549-x550)!=(x551^x552));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x553 = -1;
	static int64_t x554 = INT64_MIN;
	int8_t x555 = 0;
	uint8_t x556 = UINT8_MAX;
	int32_t t128 = -656;

    t128 = ((x553-x554)!=(x555^x556));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x561 = 3;
	uint64_t x562 = 3583LLU;

    t129 = ((x561-x562)!=(x563^x564));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x565 = 0LLU;
	static int16_t x568 = INT16_MIN;

    t130 = ((x565-x566)!=(x567^x568));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x569 = UINT64_MAX;
	uint8_t x570 = UINT8_MAX;
	volatile uint32_t x571 = 30U;
	int32_t x572 = INT32_MAX;
	volatile int32_t t131 = -329;

    t131 = ((x569-x570)!=(x571^x572));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x577 = UINT32_MAX;
	uint32_t x578 = 80134U;
	int64_t x579 = 817011434094783262LL;
	volatile uint64_t x580 = 26942751297LLU;
	volatile int32_t t132 = 88298;

    t132 = ((x577-x578)!=(x579^x580));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x581 = 111LLU;
	volatile int16_t x582 = INT16_MAX;
	volatile uint16_t x584 = 3179U;
	static volatile int32_t t133 = -1758;

    t133 = ((x581-x582)!=(x583^x584));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x586 = 44;
	static uint64_t x587 = UINT64_MAX;
	static int16_t x588 = -1;
	static int32_t t134 = -11;

    t134 = ((x585-x586)!=(x587^x588));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x594 = -1;
	uint16_t x595 = 4U;
	static int8_t x596 = 59;
	static int32_t t135 = -15460;

    t135 = ((x593-x594)!=(x595^x596));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x597 = -1LL;
	volatile int64_t x598 = -885LL;
	int64_t x600 = -1110LL;
	volatile int32_t t136 = 7;

    t136 = ((x597-x598)!=(x599^x600));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x601 = UINT32_MAX;
	int8_t x602 = INT8_MIN;
	int64_t x603 = INT64_MAX;
	static volatile int32_t t137 = -95;

    t137 = ((x601-x602)!=(x603^x604));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x605 = 0U;
	volatile uint64_t x606 = 16394LLU;
	int64_t x607 = -1LL;
	static uint64_t x608 = 8501352256LLU;
	static int32_t t138 = -63628029;

    t138 = ((x605-x606)!=(x607^x608));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x609 = 980;
	uint32_t x610 = 10357333U;
	static int8_t x611 = -1;
	volatile uint32_t x612 = 29U;

    t139 = ((x609-x610)!=(x611^x612));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x613 = 19;
	int64_t x614 = -1091514551312LL;
	uint16_t x615 = 15322U;
	int8_t x616 = INT8_MAX;
	int32_t t140 = 182;

    t140 = ((x613-x614)!=(x615^x616));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x617 = 0U;
	int8_t x618 = INT8_MIN;
	int8_t x619 = 13;
	uint64_t x620 = 7365270580LLU;
	volatile int32_t t141 = -319446;

    t141 = ((x617-x618)!=(x619^x620));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x621 = -1;
	int32_t x622 = 110;
	volatile int16_t x623 = INT16_MIN;
	uint64_t x624 = 14009846LLU;
	static int32_t t142 = -617387072;

    t142 = ((x621-x622)!=(x623^x624));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x625 = 5220U;
	volatile int8_t x626 = INT8_MAX;
	uint64_t x627 = 1889191153972931444LLU;
	static volatile int64_t x628 = INT64_MIN;
	int32_t t143 = 2975;

    t143 = ((x625-x626)!=(x627^x628));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x629 = 16033919664553523LLU;
	int32_t x630 = 11536778;
	int8_t x632 = INT8_MIN;

    t144 = ((x629-x630)!=(x631^x632));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x633 = INT32_MIN;
	static int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MAX;
	static int32_t x636 = INT32_MAX;
	volatile int32_t t145 = 668533135;

    t145 = ((x633-x634)!=(x635^x636));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x639 = -204341759038LL;
	int32_t x640 = INT32_MIN;

    t146 = ((x637-x638)!=(x639^x640));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x641 = INT16_MIN;
	uint64_t x642 = UINT64_MAX;
	int32_t x643 = INT32_MIN;
	uint8_t x644 = UINT8_MAX;
	static int32_t t147 = 236778134;

    t147 = ((x641-x642)!=(x643^x644));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x646 = 7U;
	int8_t x647 = INT8_MIN;

    t148 = ((x645-x646)!=(x647^x648));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x649 = INT16_MIN;
	int8_t x650 = INT8_MIN;
	volatile uint64_t x651 = UINT64_MAX;
	uint32_t x652 = 1831500U;
	static int32_t t149 = -3620;

    t149 = ((x649-x650)!=(x651^x652));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x653 = -1;
	static int32_t x654 = -1;
	uint8_t x655 = 7U;
	int32_t t150 = -491;

    t150 = ((x653-x654)!=(x655^x656));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x657 = 3U;
	int8_t x658 = 0;
	uint32_t x659 = 25U;
	volatile int32_t t151 = -2122940;

    t151 = ((x657-x658)!=(x659^x660));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x661 = INT16_MAX;
	static volatile int16_t x662 = -1;
	volatile uint64_t x664 = 9813380536147418LLU;
	static volatile int32_t t152 = 15273979;

    t152 = ((x661-x662)!=(x663^x664));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x669 = 0U;
	int8_t x670 = -1;
	int8_t x671 = -10;
	volatile int8_t x672 = INT8_MAX;
	int32_t t153 = -2;

    t153 = ((x669-x670)!=(x671^x672));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x674 = INT8_MIN;
	uint16_t x675 = UINT16_MAX;
	uint8_t x676 = UINT8_MAX;
	int32_t t154 = -228048;

    t154 = ((x673-x674)!=(x675^x676));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x677 = -26;
	volatile int8_t x678 = -2;
	int32_t x679 = -1;
	volatile int32_t x680 = INT32_MIN;
	int32_t t155 = -54046;

    t155 = ((x677-x678)!=(x679^x680));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x681 = UINT16_MAX;
	volatile uint64_t x682 = UINT64_MAX;
	static int32_t x683 = INT32_MIN;
	int32_t x684 = -1;
	volatile int32_t t156 = 12;

    t156 = ((x681-x682)!=(x683^x684));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x685 = INT64_MAX;
	uint8_t x686 = 1U;
	int64_t x687 = INT64_MAX;
	uint16_t x688 = 104U;
	int32_t t157 = -13;

    t157 = ((x685-x686)!=(x687^x688));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x689 = -3;
	uint32_t x690 = 1955109U;
	static int16_t x691 = INT16_MIN;
	int16_t x692 = INT16_MIN;
	volatile int32_t t158 = -450;

    t158 = ((x689-x690)!=(x691^x692));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x694 = -86;
	uint16_t x695 = UINT16_MAX;
	volatile int64_t x696 = INT64_MAX;
	volatile int32_t t159 = 25;

    t159 = ((x693-x694)!=(x695^x696));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x697 = 0U;
	static volatile uint64_t x698 = UINT64_MAX;
	uint8_t x699 = 1U;
	static int64_t x700 = INT64_MIN;
	volatile int32_t t160 = 297587;

    t160 = ((x697-x698)!=(x699^x700));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x702 = -1;
	volatile uint64_t x703 = 92004881783289926LLU;
	int32_t x704 = 1;
	int32_t t161 = -20363882;

    t161 = ((x701-x702)!=(x703^x704));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x705 = INT64_MAX;
	uint32_t x706 = UINT32_MAX;
	static int16_t x707 = -3;
	int32_t x708 = -1;
	int32_t t162 = -107943184;

    t162 = ((x705-x706)!=(x707^x708));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x709 = -2;
	int64_t x710 = -173230613182360LL;
	volatile int16_t x711 = 6806;
	static int8_t x712 = 0;
	int32_t t163 = -1;

    t163 = ((x709-x710)!=(x711^x712));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x713 = 180U;
	int8_t x714 = INT8_MIN;
	int16_t x715 = 7521;
	int64_t x716 = 610083924406428901LL;
	int32_t t164 = -171665;

    t164 = ((x713-x714)!=(x715^x716));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x717 = INT8_MIN;
	int16_t x718 = INT16_MIN;
	int32_t x719 = INT32_MIN;
	int32_t x720 = INT32_MIN;
	volatile int32_t t165 = 131143875;

    t165 = ((x717-x718)!=(x719^x720));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x722 = -6;
	static volatile uint8_t x723 = UINT8_MAX;
	static int16_t x724 = 972;
	volatile int32_t t166 = 62841;

    t166 = ((x721-x722)!=(x723^x724));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x725 = -1;
	int8_t x728 = INT8_MAX;
	volatile int32_t t167 = -321;

    t167 = ((x725-x726)!=(x727^x728));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x730 = 4920;
	int32_t t168 = -14881394;

    t168 = ((x729-x730)!=(x731^x732));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x733 = UINT32_MAX;
	int32_t x734 = INT32_MIN;
	int32_t x735 = 16686669;
	static int32_t x736 = INT32_MIN;

    t169 = ((x733-x734)!=(x735^x736));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x737 = INT8_MAX;
	uint8_t x738 = 57U;
	static uint16_t x739 = 935U;
	volatile int32_t t170 = 997;

    t170 = ((x737-x738)!=(x739^x740));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x745 = INT16_MAX;
	int32_t x746 = -27;
	static volatile int32_t x747 = INT32_MIN;
	int16_t x748 = INT16_MIN;
	int32_t t171 = -12;

    t171 = ((x745-x746)!=(x747^x748));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x749 = -1LL;
	int8_t x750 = INT8_MIN;
	volatile int16_t x751 = -1;
	int32_t t172 = 5089;

    t172 = ((x749-x750)!=(x751^x752));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x754 = INT64_MIN;
	uint8_t x756 = 0U;
	int32_t t173 = -373812189;

    t173 = ((x753-x754)!=(x755^x756));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x765 = INT8_MIN;
	static volatile int8_t x766 = -48;
	int8_t x767 = INT8_MAX;
	int64_t x768 = INT64_MIN;
	int32_t t174 = -2;

    t174 = ((x765-x766)!=(x767^x768));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x769 = 113U;
	volatile int16_t x771 = -7;
	int16_t x772 = INT16_MIN;
	static int32_t t175 = -6;

    t175 = ((x769-x770)!=(x771^x772));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x775 = INT8_MIN;
	static int64_t x776 = INT64_MIN;

    t176 = ((x773-x774)!=(x775^x776));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x777 = -15;
	uint16_t x778 = UINT16_MAX;
	uint64_t x780 = UINT64_MAX;
	int32_t t177 = -766819;

    t177 = ((x777-x778)!=(x779^x780));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x782 = UINT8_MAX;
	volatile int8_t x784 = -4;
	volatile int32_t t178 = -5;

    t178 = ((x781-x782)!=(x783^x784));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x785 = -1;
	volatile uint8_t x786 = UINT8_MAX;
	int32_t x787 = 21387327;
	volatile int64_t x788 = 25899845LL;

    t179 = ((x785-x786)!=(x787^x788));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x789 = 27U;
	uint16_t x791 = 487U;

    t180 = ((x789-x790)!=(x791^x792));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x793 = INT32_MAX;
	static int32_t x795 = -228;
	volatile int32_t t181 = 404600;

    t181 = ((x793-x794)!=(x795^x796));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x797 = UINT16_MAX;
	volatile int64_t x798 = INT64_MAX;
	volatile int16_t x800 = INT16_MIN;
	static int32_t t182 = -15925;

    t182 = ((x797-x798)!=(x799^x800));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x801 = 8;
	int16_t x802 = -84;
	volatile uint64_t x803 = UINT64_MAX;
	static int8_t x804 = 1;
	volatile int32_t t183 = 8358883;

    t183 = ((x801-x802)!=(x803^x804));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x806 = 1U;
	volatile int32_t x807 = -6719747;
	static int8_t x808 = 28;

    t184 = ((x805-x806)!=(x807^x808));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x809 = INT16_MAX;
	int16_t x810 = INT16_MAX;
	static int8_t x811 = 3;
	static uint8_t x812 = UINT8_MAX;
	volatile int32_t t185 = 5;

    t185 = ((x809-x810)!=(x811^x812));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x813 = INT16_MIN;
	static int8_t x814 = INT8_MAX;

    t186 = ((x813-x814)!=(x815^x816));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x817 = 1U;
	int32_t t187 = -6386899;

    t187 = ((x817-x818)!=(x819^x820));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x821 = 269667882977LLU;
	uint32_t x824 = 0U;

    t188 = ((x821-x822)!=(x823^x824));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x825 = -1;
	volatile int16_t x826 = -1;
	int16_t x827 = INT16_MAX;
	int64_t x828 = -13736474282LL;
	volatile int32_t t189 = 234788977;

    t189 = ((x825-x826)!=(x827^x828));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x829 = 6U;
	static int32_t x830 = -681;
	static int32_t x831 = -1;
	uint64_t x832 = 450815090916156765LLU;

    t190 = ((x829-x830)!=(x831^x832));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x833 = 46757487U;
	int16_t x834 = INT16_MIN;
	volatile int32_t x835 = -6134;
	volatile int32_t t191 = 46106938;

    t191 = ((x833-x834)!=(x835^x836));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x837 = -1;
	uint64_t x838 = UINT64_MAX;
	static int32_t x839 = INT32_MIN;
	int32_t x840 = -1;
	volatile int32_t t192 = -342961;

    t192 = ((x837-x838)!=(x839^x840));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x841 = 192;
	int8_t x842 = INT8_MIN;
	static uint64_t x843 = 107674796089235LLU;
	int8_t x844 = INT8_MIN;
	volatile int32_t t193 = -1757;

    t193 = ((x841-x842)!=(x843^x844));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x847 = INT64_MAX;

    t194 = ((x845-x846)!=(x847^x848));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x849 = UINT8_MAX;
	uint32_t x850 = 93900745U;
	static volatile int16_t x851 = INT16_MIN;
	int8_t x852 = -44;
	int32_t t195 = -1104761;

    t195 = ((x849-x850)!=(x851^x852));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x854 = 1;
	uint16_t x855 = UINT16_MAX;
	static uint64_t x856 = 66244028099735215LLU;
	volatile int32_t t196 = -2599749;

    t196 = ((x853-x854)!=(x855^x856));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x857 = UINT8_MAX;
	int8_t x858 = -1;
	int8_t x859 = INT8_MIN;
	volatile int32_t t197 = 140;

    t197 = ((x857-x858)!=(x859^x860));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x861 = INT64_MIN;
	int8_t x862 = 0;
	uint16_t x863 = UINT16_MAX;
	int32_t t198 = 20490;

    t198 = ((x861-x862)!=(x863^x864));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x866 = INT16_MAX;
	static volatile int8_t x867 = INT8_MIN;
	volatile int16_t x868 = -1;
	int32_t t199 = 933;

    t199 = ((x865-x866)!=(x867^x868));

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

