
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

int32_t x2 = -1;
uint32_t x5 = UINT32_MAX;
uint32_t t1 = 1827209U;
volatile int64_t t2 = 58098925323204LL;
int64_t x13 = 15445LL;
volatile int16_t x19 = INT16_MAX;
static volatile uint32_t t4 = 428779U;
int64_t x21 = 487738883LL;
int32_t x22 = -1;
volatile int64_t t6 = 20LL;
static int32_t x32 = -1;
uint64_t x34 = UINT64_MAX;
uint64_t t8 = 16595543247018LLU;
volatile int32_t x40 = INT32_MAX;
volatile int8_t x46 = -1;
uint32_t t11 = 52168477U;
int64_t x52 = INT64_MAX;
uint64_t x56 = UINT64_MAX;
uint8_t x68 = UINT8_MAX;
static uint64_t x75 = 12800074256330611LLU;
uint8_t x80 = 34U;
int64_t t21 = -1032907354911LL;
static int8_t x110 = -32;
volatile int64_t x118 = -1LL;
uint8_t x123 = 0U;
int64_t t29 = 10577677667LL;
static uint64_t x128 = 5840LLU;
uint64_t t30 = 1482LLU;
uint64_t x129 = UINT64_MAX;
uint64_t x144 = 2474LLU;
static int64_t x157 = INT64_MAX;
static int32_t x158 = 26;
uint8_t x166 = 0U;
int64_t x173 = -1LL;
int8_t x189 = -28;
int16_t x201 = -3399;
static int64_t x203 = -1LL;
int64_t x204 = INT64_MIN;
uint64_t t42 = 1330LLU;
volatile int32_t t45 = -6;
static int64_t x224 = -18266578285LL;
int32_t x229 = -476200153;
uint32_t x231 = 2592U;
int8_t x239 = -1;
int64_t t48 = -5238084LL;
volatile int64_t t49 = 3388739LL;
volatile int32_t t52 = -261;
volatile int64_t t55 = 217LL;
int64_t x278 = INT64_MAX;
int64_t t56 = -453054710208817901LL;
static int16_t x283 = INT16_MAX;
uint64_t x295 = 43653994929LLU;
static int64_t x301 = INT64_MIN;
uint32_t t62 = 1838118U;
int8_t x313 = -1;
static volatile uint64_t t65 = 3699LLU;
volatile uint64_t x330 = UINT64_MAX;
int32_t x335 = INT32_MAX;
uint8_t x336 = 1U;
volatile int64_t t68 = -7204901267946LL;
int32_t x357 = INT32_MIN;
volatile uint64_t t71 = 7588409LLU;
int64_t x365 = INT64_MIN;
int16_t x377 = 15866;
volatile uint32_t x381 = UINT32_MAX;
static int8_t x383 = INT8_MIN;
volatile uint32_t t76 = 15409U;
uint32_t x401 = 387540U;
static int16_t x404 = -1;
volatile int64_t x411 = -1LL;
uint64_t x412 = UINT64_MAX;
int32_t x437 = INT32_MIN;
volatile uint32_t x441 = 219U;
static int8_t x443 = -4;
volatile uint64_t x444 = 8LLU;
int32_t x445 = INT32_MIN;
uint8_t x446 = 23U;
uint8_t x455 = 52U;
volatile int8_t x457 = INT8_MIN;
volatile int64_t t90 = 3378715879741827243LL;
int8_t x465 = INT8_MAX;
volatile int32_t x467 = INT32_MIN;
int64_t t92 = -273LL;
uint32_t x470 = 44334189U;
uint64_t t94 = 3084LLU;
int32_t x477 = -11209;
uint32_t x490 = 1750215U;
volatile int32_t x492 = 1064699971;
int16_t x494 = -7;
static uint32_t x512 = 24185U;
volatile int64_t t100 = -28588197443142907LL;
static uint16_t x526 = 19U;
static int32_t x549 = -19807786;
int16_t x551 = INT16_MIN;
uint8_t x552 = 69U;
int8_t x553 = 16;
static int32_t x556 = 74;
static volatile int32_t x557 = -1;
int32_t x559 = -15;
int16_t x570 = 13;
uint8_t x571 = UINT8_MAX;
int8_t x577 = -1;
volatile uint16_t x581 = 0U;
int16_t x606 = 716;
volatile int32_t x607 = -1;
volatile int64_t x608 = 17230LL;
int64_t x609 = INT64_MIN;
int32_t x614 = -1064028;
volatile int16_t x621 = INT16_MIN;
uint8_t x624 = 1U;
static uint64_t x635 = 100235LLU;
static volatile int16_t x642 = -1;
uint32_t x643 = 2879217U;
int16_t x648 = -1;
int32_t t121 = 1137;
uint32_t x656 = 11U;
static int16_t x665 = INT16_MIN;
int32_t x667 = INT32_MIN;
int32_t x669 = INT32_MIN;
static int8_t x678 = -1;
static uint32_t t129 = 182080333U;
int32_t t131 = 2;
static uint64_t x712 = UINT64_MAX;
volatile uint64_t t132 = 417190363978LLU;
uint32_t x719 = 71U;
uint64_t x729 = 73790858268971LLU;
volatile int64_t t138 = -662153214006487LL;
volatile uint32_t x742 = 9U;
int8_t x753 = 1;
uint16_t x761 = 471U;
static int8_t x762 = INT8_MIN;
volatile int16_t x788 = 295;
uint64_t t148 = 19LLU;
int8_t x819 = INT8_MIN;
static int32_t x825 = -1;
uint64_t t151 = 36924LLU;
volatile int8_t x833 = -1;
int16_t x853 = INT16_MIN;
uint64_t x856 = 14LLU;
uint64_t t156 = 79515487417628LLU;
static int32_t x859 = 0;
volatile uint64_t x873 = 25822LLU;
static volatile int8_t x874 = -3;
volatile int64_t x875 = INT64_MIN;
volatile uint64_t t159 = 289664402LLU;
uint8_t x889 = 1U;
int16_t x892 = INT16_MIN;
uint16_t x902 = UINT16_MAX;
volatile int32_t x905 = -674;
volatile int8_t x907 = INT8_MIN;
int64_t x921 = INT64_MIN;
static volatile uint16_t x934 = UINT16_MAX;
uint32_t x935 = UINT32_MAX;
int32_t x936 = INT32_MIN;
int64_t x941 = 257487422734LL;
uint64_t x945 = 47778077137691LLU;
volatile int16_t x954 = INT16_MIN;
volatile int64_t t173 = -5590LL;
uint8_t x961 = 10U;
uint32_t x962 = 804795856U;
int16_t x969 = -1;
uint16_t x973 = 2329U;
int32_t t177 = -3504;
volatile int32_t x978 = INT32_MIN;
static int16_t x981 = INT16_MIN;
int32_t x983 = 21871;
volatile int32_t t179 = -15397;
volatile uint16_t x987 = 851U;
int8_t x989 = INT8_MIN;
static int16_t x990 = INT16_MIN;
int16_t x999 = INT16_MIN;
volatile uint64_t t187 = 112LLU;
int32_t x1036 = INT32_MIN;
int64_t x1038 = -12501368941154LL;
volatile int64_t t189 = 9407768822LL;
static volatile int8_t x1045 = INT8_MAX;
static volatile uint64_t x1054 = UINT64_MAX;
int64_t t192 = -854197050516221LL;
int8_t x1065 = INT8_MIN;
volatile uint64_t t194 = 6LLU;
int32_t x1074 = 1167761;
int64_t x1075 = -1LL;
static int16_t x1082 = INT16_MAX;
volatile int64_t t198 = -9765087LL;
volatile int64_t t199 = -8255LL;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	static int64_t x3 = INT64_MIN;
	uint8_t x4 = UINT8_MAX;
	volatile int64_t t0 = 17360740535LL;

    t0 = ((x1%(x2-x3))*x4);

    if (t0 != -32640LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 8162788U;
	int16_t x7 = INT16_MIN;
	volatile int16_t x8 = INT16_MAX;

    t1 = ((x5%(x6-x7))*x8);

    if (t1 != 3365924529U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 1697267U;
	static int32_t x10 = -1;
	int64_t x11 = INT64_MIN;
	static int8_t x12 = -1;

    t2 = ((x9%(x10-x11))*x12);

    if (t2 != -1697267LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = 140491417711389492LLU;
	int32_t x15 = INT32_MIN;
	int16_t x16 = INT16_MAX;
	uint64_t t3 = 2803663LLU;

    t3 = ((x13%(x14-x15))*x16);

    if (t3 != 506086315LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = UINT32_MAX;
	int8_t x18 = -3;
	volatile int8_t x20 = INT8_MAX;

    t4 = ((x17%(x18-x19))*x20);

    if (t4 != 4161663U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x23 = 5U;
	uint16_t x24 = 56U;
	volatile int64_t t5 = 2714455253LL;

    t5 = ((x21%(x22-x23))*x24);

    if (t5 != 280LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	uint8_t x26 = 25U;
	static int16_t x27 = INT16_MAX;
	volatile int8_t x28 = INT8_MIN;

    t6 = ((x25%(x26-x27))*x28);

    if (t6 != 128LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	static uint64_t x30 = UINT64_MAX;
	int8_t x31 = INT8_MIN;
	static uint64_t t7 = 17LLU;

    t7 = ((x29%(x30-x31))*x32);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MAX;
	static volatile uint32_t x35 = 58397U;
	volatile int64_t x36 = INT64_MIN;

    t8 = ((x33%(x34-x35))*x36);

    if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	uint32_t x38 = 51U;
	volatile int8_t x39 = 0;
	volatile uint32_t t9 = 0U;

    t9 = ((x37%(x38-x39))*x40);

    if (t9 != 4294967270U) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint8_t x41 = 12U;
	volatile uint32_t x42 = 117409611U;
	int8_t x43 = INT8_MAX;
	int16_t x44 = INT16_MAX;
	uint32_t t10 = 3731810U;

    t10 = ((x41%(x42-x43))*x44);

    if (t10 != 393204U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = INT8_MIN;
	uint32_t x47 = 186193109U;
	int8_t x48 = 0;

    t11 = ((x45%(x46-x47))*x48);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 4749215949925LLU;
	int8_t x50 = -1;
	int16_t x51 = 1;
	uint64_t t12 = 809913206LLU;

    t12 = ((x49%(x50-x51))*x52);

    if (t12 != 9223367287638825883LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x53 = 1U;
	volatile uint32_t x54 = 14435U;
	uint32_t x55 = UINT32_MAX;
	uint64_t t13 = UINT64_MAX;

    t13 = ((x53%(x54-x55))*x56);

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	volatile uint64_t x58 = 6251657165622376LLU;
	volatile int64_t x59 = INT64_MIN;
	volatile int64_t x60 = 3445842LL;
	uint64_t t14 = 196996418LLU;

    t14 = ((x57%(x58-x59))*x60);

    if (t14 != 225823255470LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 1U;
	int32_t x62 = INT32_MAX;
	uint64_t x63 = 143538961322LLU;
	int32_t x64 = -1;
	volatile uint64_t t15 = UINT64_MAX;

    t15 = ((x61%(x62-x63))*x64);

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MAX;
	int8_t x66 = INT8_MIN;
	int8_t x67 = INT8_MAX;
	int32_t t16 = -69918210;

    t16 = ((x65%(x66-x67))*x68);

    if (t16 != 32385) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = 44314937;
	volatile uint64_t x74 = UINT64_MAX;
	int64_t x76 = INT64_MIN;
	static volatile uint64_t t17 = 1607519206713118066LLU;

    t17 = ((x73%(x74-x75))*x76);

    if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MIN;
	volatile int64_t x78 = 261901778LL;
	uint32_t x79 = 613U;
	int64_t t18 = -72994905464LL;

    t18 = ((x77%(x78-x79))*x80);

    if (t18 != -1777327152LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x81 = INT32_MIN;
	volatile int8_t x82 = -23;
	int64_t x83 = 12216986LL;
	int64_t x84 = -1LL;
	volatile int64_t t19 = 1421444243426364802LL;

    t19 = ((x81%(x82-x83))*x84);

    if (t19 != 9507073LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x85 = UINT32_MAX;
	volatile int32_t x86 = 7417781;
	int16_t x87 = 219;
	volatile int64_t x88 = -499LL;
	int64_t t20 = -19005648LL;

    t20 = ((x85%(x86-x87))*x88);

    if (t20 != -99249603LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x89 = INT16_MIN;
	static volatile int64_t x90 = -54LL;
	int8_t x91 = INT8_MAX;
	volatile int64_t x92 = -1LL;

    t21 = ((x89%(x90-x91))*x92);

    if (t21 != 7LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 4003995U;
	uint8_t x94 = 3U;
	int32_t x95 = INT32_MAX;
	uint16_t x96 = 13779U;
	uint32_t t22 = 3126U;

    t22 = ((x93%(x94-x95))*x96);

    if (t22 != 3631439553U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x97 = 29990618305562LLU;
	static int16_t x98 = INT16_MIN;
	static int8_t x99 = -14;
	int16_t x100 = 10;
	static uint64_t t23 = 221273428707242935LLU;

    t23 = ((x97%(x98-x99))*x100);

    if (t23 != 299906183055620LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = 31U;
	uint16_t x102 = 12495U;
	uint16_t x103 = 3104U;
	static int64_t x104 = -7914923838751568LL;
	int64_t t24 = -4756981255953224LL;

    t24 = ((x101%(x102-x103))*x104);

    if (t24 != -245362639001298608LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = 3;
	uint8_t x106 = 0U;
	static int8_t x107 = -1;
	int32_t x108 = INT32_MIN;
	static volatile int32_t t25 = -2702530;

    t25 = ((x105%(x106-x107))*x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x109 = 12172U;
	static uint64_t x111 = 182619269796844LLU;
	int8_t x112 = -1;
	uint64_t t26 = 111835018977LLU;

    t26 = ((x109%(x110-x111))*x112);

    if (t26 != 18446744073709539444LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = 0U;
	int64_t x114 = 946186LL;
	uint32_t x115 = 1095085965U;
	volatile int8_t x116 = INT8_MIN;
	volatile int64_t t27 = 0LL;

    t27 = ((x113%(x114-x115))*x116);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = -7396067958654369LL;
	static int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MAX;
	volatile int64_t t28 = 50418974612LL;

    t28 = ((x117%(x118-x119))*x120);

    if (t28 != -2752428LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MIN;
	int8_t x122 = 1;
	volatile int64_t x124 = INT64_MIN;

    t29 = ((x121%(x122-x123))*x124);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = 286;
	int16_t x126 = -1;
	int32_t x127 = INT32_MIN;

    t30 = ((x125%(x126-x127))*x128);

    if (t30 != 1670240LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x130 = INT16_MAX;
	uint16_t x131 = 225U;
	static int32_t x132 = -1;
	volatile uint64_t t31 = 1404LLU;

    t31 = ((x129%(x130-x131))*x132);

    if (t31 != 18446744073709521127LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = INT64_MAX;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = UINT64_MAX;
	volatile uint64_t t32 = 1393782292959LLU;

    t32 = ((x141%(x142-x143))*x144);

    if (t32 != 18446744073709549142LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x149 = INT64_MIN;
	static int16_t x150 = 29;
	static int16_t x151 = INT16_MIN;
	static int32_t x152 = -1;
	static volatile int64_t t33 = -90615587LL;

    t33 = ((x149%(x150-x151))*x152);

    if (t33 != 17164LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x153 = 0U;
	int32_t x154 = 94918;
	int8_t x155 = -1;
	uint16_t x156 = 3U;
	volatile uint32_t t34 = 0U;

    t34 = ((x153%(x154-x155))*x156);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x159 = 0U;
	uint64_t x160 = 972LLU;
	volatile uint64_t t35 = 845LLU;

    t35 = ((x157%(x158-x159))*x160);

    if (t35 != 6804LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x165 = 941338790;
	volatile int64_t x167 = INT64_MAX;
	volatile int16_t x168 = -1;
	static int64_t t36 = 16557179007172LL;

    t36 = ((x165%(x166-x167))*x168);

    if (t36 != -941338790LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x174 = -1;
	int16_t x175 = INT16_MIN;
	int64_t x176 = -262885047044857LL;
	volatile int64_t t37 = -90635411335204LL;

    t37 = ((x173%(x174-x175))*x176);

    if (t37 != 262885047044857LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = INT8_MAX;
	uint16_t x178 = 222U;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = 572U;
	int32_t t38 = 23767;

    t38 = ((x177%(x178-x179))*x180);

    if (t38 != 72644) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x185 = 9089U;
	int16_t x186 = -1;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MAX;
	int32_t t39 = -1;

    t39 = ((x185%(x186-x187))*x188);

    if (t39 != 297819263) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x190 = INT32_MAX;
	static uint16_t x191 = 6894U;
	int8_t x192 = -7;
	static volatile int32_t t40 = 3159781;

    t40 = ((x189%(x190-x191))*x192);

    if (t40 != 196) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x193 = 15U;
	uint8_t x194 = 82U;
	int8_t x195 = 11;
	static int16_t x196 = INT16_MAX;
	volatile int32_t t41 = 2;

    t41 = ((x193%(x194-x195))*x196);

    if (t41 != 491505) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x202 = 1490316655496001LLU;

    t42 = ((x201%(x202-x203))*x204);

    if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x209 = 2360U;
	static int64_t x210 = 2297955646177706965LL;
	int8_t x211 = -1;
	int32_t x212 = INT32_MAX;
	volatile int64_t t43 = 257153LL;

    t43 = ((x209%(x210-x211))*x212);

    if (t43 != 5068061406920LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x213 = UINT16_MAX;
	int64_t x214 = -375912842618189538LL;
	volatile int16_t x215 = INT16_MIN;
	static int8_t x216 = INT8_MIN;
	int64_t t44 = -1LL;

    t44 = ((x213%(x214-x215))*x216);

    if (t44 != -8388480LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x217 = INT32_MIN;
	int32_t x218 = INT32_MIN;
	volatile int16_t x219 = -1;
	uint8_t x220 = 50U;

    t45 = ((x217%(x218-x219))*x220);

    if (t45 != -50) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x221 = INT32_MIN;
	int16_t x222 = 2137;
	int64_t x223 = -1LL;
	static int64_t t46 = 34533830303892LL;

    t46 = ((x221%(x222-x223))*x224);

    if (t46 != 29555323665130LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x230 = INT32_MIN;
	int8_t x232 = INT8_MAX;
	volatile uint32_t t47 = 19U;

    t47 = ((x229%(x230-x231))*x232);

    if (t47 != 1799935545U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x237 = 17U;
	int64_t x238 = 241753128LL;
	static int8_t x240 = -1;

    t48 = ((x237%(x238-x239))*x240);

    if (t48 != -17LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x241 = 31846810;
	volatile uint16_t x242 = UINT16_MAX;
	int8_t x243 = -1;
	volatile int64_t x244 = -1LL;

    t49 = ((x241%(x242-x243))*x244);

    if (t49 != -61850LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x249 = 8U;
	static uint16_t x250 = UINT16_MAX;
	volatile int64_t x251 = 0LL;
	volatile uint32_t x252 = UINT32_MAX;
	int64_t t50 = -920671749883529428LL;

    t50 = ((x249%(x250-x251))*x252);

    if (t50 != 34359738360LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x253 = 6U;
	static int16_t x254 = -36;
	uint8_t x255 = 102U;
	static int8_t x256 = INT8_MAX;
	static volatile int32_t t51 = -7204;

    t51 = ((x253%(x254-x255))*x256);

    if (t51 != 762) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x257 = INT16_MIN;
	int32_t x258 = 445486274;
	int16_t x259 = 0;
	static uint8_t x260 = 15U;

    t52 = ((x257%(x258-x259))*x260);

    if (t52 != -491520) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x261 = -1;
	int16_t x262 = 7;
	static int64_t x263 = -1LL;
	int8_t x264 = 29;
	int64_t t53 = -1LL;

    t53 = ((x261%(x262-x263))*x264);

    if (t53 != -29LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint8_t x269 = 4U;
	int16_t x270 = INT16_MAX;
	uint64_t x271 = 2982668LLU;
	static int16_t x272 = 728;
	volatile uint64_t t54 = 938LLU;

    t54 = ((x269%(x270-x271))*x272);

    if (t54 != 2912LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x273 = -153614180100143LL;
	int8_t x274 = -1;
	volatile int8_t x275 = 7;
	static int32_t x276 = INT32_MIN;

    t55 = ((x273%(x274-x275))*x276);

    if (t55 != 15032385536LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x277 = INT8_MIN;
	volatile uint8_t x279 = UINT8_MAX;
	volatile uint8_t x280 = UINT8_MAX;

    t56 = ((x277%(x278-x279))*x280);

    if (t56 != -32640LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x281 = INT8_MAX;
	int8_t x282 = -1;
	static volatile int64_t x284 = -1LL;
	int64_t t57 = 1651LL;

    t57 = ((x281%(x282-x283))*x284);

    if (t57 != -127LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x285 = 0U;
	volatile uint64_t x286 = 26LLU;
	static int32_t x287 = INT32_MIN;
	volatile int16_t x288 = INT16_MIN;
	volatile uint64_t t58 = 119654228136LLU;

    t58 = ((x285%(x286-x287))*x288);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x293 = 131U;
	static volatile int8_t x294 = INT8_MIN;
	uint32_t x296 = 110158557U;
	static uint64_t t59 = 784219118068828329LLU;

    t59 = ((x293%(x294-x295))*x296);

    if (t59 != 14430770967LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x297 = INT64_MIN;
	volatile int16_t x298 = -1;
	volatile int8_t x299 = 0;
	int32_t x300 = 30;
	static volatile int64_t t60 = 1LL;

    t60 = ((x297%(x298-x299))*x300);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x302 = 0;
	int32_t x303 = 297268506;
	volatile int8_t x304 = -1;
	static volatile int64_t t61 = 92328LL;

    t61 = ((x301%(x302-x303))*x304);

    if (t61 != 171160226LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x305 = INT16_MAX;
	int16_t x306 = -221;
	uint32_t x307 = 389U;
	uint16_t x308 = UINT16_MAX;

    t62 = ((x305%(x306-x307))*x308);

    if (t62 != 2147385345U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x309 = 65644196797LLU;
	static int16_t x310 = -1;
	uint64_t x311 = 1380640LLU;
	int64_t x312 = -53604590LL;
	volatile uint64_t t63 = 7540020LLU;

    t63 = ((x309%(x310-x311))*x312);

    if (t63 != 14927913818527053386LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x314 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	uint64_t x316 = 6593LLU;
	uint64_t t64 = 261032195LLU;

    t64 = ((x313%(x314-x315))*x316);

    if (t64 != 98895LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x321 = UINT16_MAX;
	uint64_t x322 = 2533667589880573267LLU;
	int8_t x323 = INT8_MAX;
	int32_t x324 = -1;

    t65 = ((x321%(x322-x323))*x324);

    if (t65 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x329 = -40693075270LL;
	volatile int8_t x331 = INT8_MAX;
	static int16_t x332 = -432;
	static uint64_t t66 = 5335168353LLU;

    t66 = ((x329%(x330-x331))*x332);

    if (t66 != 17579408516640LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x333 = INT8_MIN;
	volatile int16_t x334 = 1185;
	int32_t t67 = 645649;

    t67 = ((x333%(x334-x335))*x336);

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x337 = 28487765LL;
	int64_t x338 = 26LL;
	volatile int16_t x339 = 20;
	volatile int8_t x340 = INT8_MAX;

    t68 = ((x337%(x338-x339))*x340);

    if (t68 != 635LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x345 = -1;
	static uint8_t x346 = UINT8_MAX;
	int64_t x347 = 2363142338362197LL;
	int64_t x348 = INT64_MAX;
	int64_t t69 = -847023772731LL;

    t69 = ((x345%(x346-x347))*x348);

    if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x353 = 9LLU;
	uint32_t x354 = 80311426U;
	static int32_t x355 = INT32_MAX;
	static int16_t x356 = INT16_MIN;
	uint64_t t70 = 6173823294795420727LLU;

    t70 = ((x353%(x354-x355))*x356);

    if (t70 != 18446744073709256704LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x358 = INT16_MIN;
	uint64_t x359 = 1684412802078024484LLU;
	uint8_t x360 = 2U;

    t71 = ((x357%(x358-x359))*x360);

    if (t71 != 3368825599861147208LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x366 = 23486024587262918LL;
	volatile int64_t x367 = INT64_MAX;
	volatile uint64_t x368 = 7116996104963507971LLU;
	static volatile uint64_t t72 = 2057167LLU;

    t72 = ((x365%(x366-x367))*x368);

    if (t72 != 14942832735096052651LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x369 = 162U;
	int8_t x370 = INT8_MIN;
	int32_t x371 = 37238452;
	int16_t x372 = INT16_MAX;
	volatile int32_t t73 = -13;

    t73 = ((x369%(x370-x371))*x372);

    if (t73 != 5308254) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x373 = INT8_MIN;
	uint64_t x374 = 3219422788717466LLU;
	int16_t x375 = -1;
	int16_t x376 = INT16_MAX;
	uint64_t t74 = 1788315965627820LLU;

    t74 = ((x373%(x374-x375))*x376);

    if (t74 != 13730965866908629051LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x378 = 822;
	volatile int64_t x379 = INT64_MAX;
	int16_t x380 = INT16_MIN;
	int64_t t75 = 39LL;

    t75 = ((x377%(x378-x379))*x380);

    if (t75 != -519897088LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x382 = 1;
	uint8_t x384 = 1U;

    t76 = ((x381%(x382-x383))*x384);

    if (t76 != 15U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x385 = UINT32_MAX;
	uint64_t x386 = UINT64_MAX;
	uint16_t x387 = 226U;
	int64_t x388 = INT64_MIN;
	static uint64_t t77 = 68LLU;

    t77 = ((x385%(x386-x387))*x388);

    if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x393 = INT8_MAX;
	int8_t x394 = -1;
	int8_t x395 = 0;
	int32_t x396 = -1;
	int32_t t78 = 2849786;

    t78 = ((x393%(x394-x395))*x396);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x397 = -1;
	uint8_t x398 = 4U;
	volatile int8_t x399 = 1;
	volatile int16_t x400 = INT16_MAX;
	int32_t t79 = 356038963;

    t79 = ((x397%(x398-x399))*x400);

    if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x402 = -1866;
	volatile int8_t x403 = INT8_MIN;
	volatile uint32_t t80 = 974U;

    t80 = ((x401%(x402-x403))*x404);

    if (t80 != 4294579756U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x405 = 0;
	static int8_t x406 = INT8_MAX;
	uint8_t x407 = 7U;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t81 = 1451689610160LLU;

    t81 = ((x405%(x406-x407))*x408);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x409 = INT32_MIN;
	uint32_t x410 = 6472356U;
	uint64_t t82 = 9156697LLU;

    t82 = ((x409%(x410-x411))*x412);

    if (t82 != 5133481LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x421 = INT64_MAX;
	uint16_t x422 = 18687U;
	int16_t x423 = -103;
	int8_t x424 = INT8_MAX;
	int64_t t83 = 2964213000416LL;

    t83 = ((x421%(x422-x423))*x424);

    if (t83 != 66929LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x425 = INT32_MAX;
	volatile uint64_t x426 = 73LLU;
	int64_t x427 = INT64_MIN;
	int16_t x428 = INT16_MAX;
	volatile uint64_t t84 = 4259782LLU;

    t84 = ((x425%(x426-x427))*x428);

    if (t84 != 70366596661249LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x433 = 372405583409417LLU;
	static uint8_t x434 = 14U;
	volatile int64_t x435 = -1LL;
	uint64_t x436 = 969256779069066LLU;
	volatile uint64_t t85 = 49461721LLU;

    t85 = ((x433%(x434-x435))*x436);

    if (t85 != 1938513558138132LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x438 = 4072U;
	uint64_t x439 = 10361LLU;
	uint64_t x440 = 4LLU;
	uint64_t t86 = 6822854LLU;

    t86 = ((x437%(x438-x439))*x440);

    if (t86 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x442 = 38U;
	volatile uint64_t t87 = 9411277LLU;

    t87 = ((x441%(x442-x443))*x444);

    if (t87 != 72LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x447 = INT8_MIN;
	int32_t x448 = 437;
	int32_t t88 = -108155;

    t88 = ((x445%(x446-x447))*x448);

    if (t88 != -874) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x453 = UINT64_MAX;
	uint8_t x454 = 2U;
	volatile int64_t x456 = 963721487868877360LL;
	uint64_t t89 = 18496516921352LLU;

    t89 = ((x453%(x454-x455))*x456);

    if (t89 != 10328864758155887408LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x458 = INT64_MIN;
	int64_t x459 = -1LL;
	uint8_t x460 = UINT8_MAX;

    t90 = ((x457%(x458-x459))*x460);

    if (t90 != -32640LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x461 = 33186389;
	int16_t x462 = INT16_MAX;
	int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MIN;
	int32_t t91 = 43894;

    t91 = ((x461%(x462-x463))*x464);

    if (t91 != -925007872) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x466 = -1LL;
	int64_t x468 = -1LL;

    t92 = ((x465%(x466-x467))*x468);

    if (t92 != -127LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x469 = 382U;
	uint64_t x471 = UINT64_MAX;
	volatile int64_t x472 = INT64_MIN;
	volatile uint64_t t93 = 6033839479LLU;

    t93 = ((x469%(x470-x471))*x472);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x473 = 3443;
	volatile uint64_t x474 = UINT64_MAX;
	volatile int16_t x475 = INT16_MAX;
	static int64_t x476 = INT64_MIN;

    t94 = ((x473%(x474-x475))*x476);

    if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x478 = INT8_MIN;
	int32_t x479 = -1;
	int64_t x480 = -1LL;
	volatile int64_t t95 = -85858571701858910LL;

    t95 = ((x477%(x478-x479))*x480);

    if (t95 != 33LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x489 = UINT8_MAX;
	volatile int64_t x491 = -25LL;
	int64_t t96 = -573253499143293915LL;

    t96 = ((x489%(x490-x491))*x492);

    if (t96 != 271498492605LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x493 = 147578947935657353LLU;
	uint16_t x495 = UINT16_MAX;
	int64_t x496 = INT64_MIN;
	uint64_t t97 = 30850931LLU;

    t97 = ((x493%(x494-x495))*x496);

    if (t97 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x497 = -404;
	uint32_t x498 = UINT32_MAX;
	int64_t x499 = -1LL;
	int8_t x500 = -2;
	volatile int64_t t98 = 2656665LL;

    t98 = ((x497%(x498-x499))*x500);

    if (t98 != 808LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x505 = -10;
	int8_t x506 = -1;
	volatile int32_t x507 = INT32_MIN;
	int8_t x508 = INT8_MIN;
	int32_t t99 = 897839909;

    t99 = ((x505%(x506-x507))*x508);

    if (t99 != 1280) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x509 = INT64_MIN;
	int64_t x510 = 283631136108820LL;
	int32_t x511 = INT32_MAX;

    t100 = ((x509%(x510-x511))*x512);

    if (t100 != -990514880863882885LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x525 = 0;
	uint64_t x527 = 3486341423006188LLU;
	uint8_t x528 = 1U;
	volatile uint64_t t101 = 4421812LLU;

    t101 = ((x525%(x526-x527))*x528);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x529 = UINT32_MAX;
	static int16_t x530 = -1;
	static int16_t x531 = 0;
	int32_t x532 = -1;
	volatile uint32_t t102 = 28788035U;

    t102 = ((x529%(x530-x531))*x532);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x533 = INT16_MIN;
	uint16_t x534 = 1720U;
	int16_t x535 = 0;
	uint8_t x536 = 127U;
	int32_t t103 = 31;

    t103 = ((x533%(x534-x535))*x536);

    if (t103 != -11176) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x537 = INT64_MIN;
	volatile uint16_t x538 = UINT16_MAX;
	int32_t x539 = 2405706;
	volatile int8_t x540 = 12;
	volatile int64_t t104 = -28LL;

    t104 = ((x537%(x538-x539))*x540);

    if (t104 != -25193580LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x550 = 8918939LLU;
	uint64_t t105 = 477759850LLU;

    t105 = ((x549%(x550-x551))*x552);

    if (t105 != 425319450LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x554 = UINT8_MAX;
	volatile int64_t x555 = -1LL;
	int64_t t106 = -26624816LL;

    t106 = ((x553%(x554-x555))*x556);

    if (t106 != 1184LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x558 = -1;
	static int8_t x560 = 15;
	volatile int32_t t107 = 3;

    t107 = ((x557%(x558-x559))*x560);

    if (t107 != -15) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x569 = INT64_MIN;
	int32_t x572 = 1608960;
	int64_t t108 = -18336178LL;

    t108 = ((x569%(x570-x571))*x572);

    if (t108 != -366842880LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x578 = 29U;
	static int32_t x579 = INT32_MIN;
	volatile uint32_t x580 = 613290588U;
	uint32_t t109 = 10501131U;

    t109 = ((x577%(x578-x579))*x580);

    if (t109 != 3076118840U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x582 = -45;
	int8_t x583 = INT8_MAX;
	volatile int8_t x584 = INT8_MIN;
	volatile int32_t t110 = 81309574;

    t110 = ((x581%(x582-x583))*x584);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x593 = INT32_MIN;
	int8_t x594 = INT8_MIN;
	static uint64_t x595 = UINT64_MAX;
	int32_t x596 = INT32_MIN;
	uint64_t t111 = 9670159050985LLU;

    t111 = ((x593%(x594-x595))*x596);

    if (t111 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x597 = -1;
	int16_t x598 = INT16_MAX;
	volatile int32_t x599 = INT32_MAX;
	static int8_t x600 = -1;
	volatile int32_t t112 = -64431119;

    t112 = ((x597%(x598-x599))*x600);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x605 = INT32_MIN;
	volatile int64_t t113 = -71LL;

    t113 = ((x605%(x606-x607))*x608);

    if (t113 != -9183590LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x610 = INT8_MIN;
	static int16_t x611 = INT16_MAX;
	uint32_t x612 = UINT32_MAX;
	int64_t t114 = 88155078109LL;

    t114 = ((x609%(x610-x611))*x612);

    if (t114 != -94738388593110LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x613 = 45;
	static int32_t x615 = INT32_MIN;
	uint32_t x616 = 12228U;
	uint32_t t115 = 160697335U;

    t115 = ((x613%(x614-x615))*x616);

    if (t115 != 550260U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x617 = 125U;
	volatile int32_t x618 = INT32_MAX;
	int8_t x619 = 5;
	uint64_t x620 = 1944339986717948549LLU;
	uint64_t t116 = 4130573LLU;

    t116 = ((x617%(x618-x619))*x620);

    if (t116 != 3234825381519397617LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x622 = UINT64_MAX;
	uint16_t x623 = UINT16_MAX;
	static volatile uint64_t t117 = 892236LLU;

    t117 = ((x621%(x622-x623))*x624);

    if (t117 != 32768LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x629 = 12608U;
	uint16_t x630 = 84U;
	uint8_t x631 = 0U;
	int16_t x632 = -1;
	volatile uint32_t t118 = 7U;

    t118 = ((x629%(x630-x631))*x632);

    if (t118 != 4294967288U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x633 = -222;
	int32_t x634 = INT32_MIN;
	static volatile uint8_t x636 = 39U;
	uint64_t t119 = 125015LLU;

    t119 = ((x633%(x634-x635))*x636);

    if (t119 != 83755762779LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x641 = INT64_MIN;
	int16_t x644 = INT16_MIN;
	static volatile int64_t t120 = 6980377LL;

    t120 = ((x641%(x642-x643))*x644);

    if (t120 != 101028675321856LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x645 = INT16_MIN;
	volatile int16_t x646 = INT16_MIN;
	uint8_t x647 = 0U;

    t121 = ((x645%(x646-x647))*x648);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x649 = UINT16_MAX;
	static int64_t x650 = -19LL;
	volatile int32_t x651 = -8719688;
	int8_t x652 = -1;
	volatile int64_t t122 = -1LL;

    t122 = ((x649%(x650-x651))*x652);

    if (t122 != -65535LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x653 = -1;
	volatile uint8_t x654 = 27U;
	int8_t x655 = -47;
	uint32_t t123 = 140U;

    t123 = ((x653%(x654-x655))*x656);

    if (t123 != 4294967285U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x666 = -1LL;
	volatile int8_t x668 = INT8_MAX;
	int64_t t124 = 23275171502590492LL;

    t124 = ((x665%(x666-x667))*x668);

    if (t124 != -4161536LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x670 = UINT32_MAX;
	uint8_t x671 = 26U;
	volatile uint32_t x672 = UINT32_MAX;
	uint32_t t125 = 222U;

    t125 = ((x669%(x670-x671))*x672);

    if (t125 != 2147483648U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x673 = INT8_MIN;
	uint16_t x674 = 3795U;
	volatile int8_t x675 = INT8_MAX;
	int8_t x676 = INT8_MIN;
	int32_t t126 = -267;

    t126 = ((x673%(x674-x675))*x676);

    if (t126 != 16384) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x677 = 3147607050982LL;
	int32_t x679 = -1743;
	int16_t x680 = -1;
	static int64_t t127 = 465735776520673LL;

    t127 = ((x677%(x678-x679))*x680);

    if (t127 != -680LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x685 = 925U;
	int8_t x686 = -1;
	static uint16_t x687 = UINT16_MAX;
	static int32_t x688 = INT32_MIN;
	static volatile uint32_t t128 = 133U;

    t128 = ((x685%(x686-x687))*x688);

    if (t128 != 2147483648U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x689 = -164743;
	uint16_t x690 = UINT16_MAX;
	static uint32_t x691 = UINT32_MAX;
	static volatile int16_t x692 = INT16_MIN;

    t129 = ((x689%(x690-x691))*x692);

    if (t129 != 3250814976U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x701 = 800171610235359667LLU;
	uint32_t x702 = 17474078U;
	uint16_t x703 = 6305U;
	int8_t x704 = 2;
	uint64_t t130 = 0LLU;

    t130 = ((x701%(x702-x703))*x704);

    if (t130 != 27294932LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x705 = UINT16_MAX;
	static int8_t x706 = -30;
	volatile uint8_t x707 = 10U;
	static volatile int8_t x708 = INT8_MIN;

    t131 = ((x705%(x706-x707))*x708);

    if (t131 != -1920) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x709 = 6996U;
	uint32_t x710 = UINT32_MAX;
	static uint8_t x711 = UINT8_MAX;

    t132 = ((x709%(x710-x711))*x712);

    if (t132 != 18446744073709544620LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x713 = INT64_MAX;
	int8_t x714 = 0;
	uint32_t x715 = 44408041U;
	int32_t x716 = INT32_MIN;
	int64_t t133 = -1LL;

    t133 = ((x713%(x714-x715))*x716);

    if (t133 != -6320370958934736896LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x717 = -1;
	uint64_t x718 = UINT64_MAX;
	int32_t x720 = INT32_MAX;
	uint64_t t134 = 60629LLU;

    t134 = ((x717%(x718-x719))*x720);

    if (t134 != 152471338937LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x721 = 109523458950127978LL;
	int32_t x722 = -30;
	volatile int32_t x723 = -1;
	int16_t x724 = -70;
	static int64_t t135 = 129927564LL;

    t135 = ((x721%(x722-x723))*x724);

    if (t135 != -210LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x725 = INT8_MIN;
	int8_t x726 = INT8_MIN;
	int64_t x727 = -104271979192LL;
	int16_t x728 = INT16_MAX;
	static volatile int64_t t136 = -62849LL;

    t136 = ((x725%(x726-x727))*x728);

    if (t136 != -4194176LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x730 = 1243U;
	volatile int64_t x731 = INT64_MAX;
	static volatile uint32_t x732 = 6098U;
	volatile uint64_t t137 = 14573801576921LLU;

    t137 = ((x729%(x730-x731))*x732);

    if (t137 != 449976653724185158LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x737 = INT64_MIN;
	uint16_t x738 = 3999U;
	static int32_t x739 = 1764727;
	int16_t x740 = -379;

    t138 = ((x737%(x738-x739))*x740);

    if (t138 != 48181512LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x741 = INT16_MAX;
	volatile int8_t x743 = INT8_MIN;
	static volatile uint32_t x744 = 576123459U;
	volatile uint32_t t139 = 41308U;

    t139 = ((x741%(x742-x743))*x744);

    if (t139 != 942061128U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x754 = UINT16_MAX;
	int8_t x755 = -1;
	volatile int16_t x756 = INT16_MIN;
	int32_t t140 = -729;

    t140 = ((x753%(x754-x755))*x756);

    if (t140 != -32768) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x763 = UINT16_MAX;
	volatile int16_t x764 = -5;
	volatile int32_t t141 = -486180694;

    t141 = ((x761%(x762-x763))*x764);

    if (t141 != -2355) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x769 = 0U;
	int64_t x770 = 71LL;
	static volatile int16_t x771 = INT16_MIN;
	int32_t x772 = 3619844;
	static int64_t t142 = -3888175533846992532LL;

    t142 = ((x769%(x770-x771))*x772);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x777 = 2132U;
	volatile int16_t x778 = INT16_MIN;
	uint8_t x779 = UINT8_MAX;
	int64_t x780 = -1LL;
	int64_t t143 = 579395177LL;

    t143 = ((x777%(x778-x779))*x780);

    if (t143 != -2132LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x785 = 3U;
	uint16_t x786 = 1U;
	static uint16_t x787 = 7U;
	volatile int32_t t144 = -34955465;

    t144 = ((x785%(x786-x787))*x788);

    if (t144 != 885) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x789 = 2;
	static int16_t x790 = INT16_MIN;
	int8_t x791 = -1;
	uint16_t x792 = 1U;
	int32_t t145 = -26;

    t145 = ((x789%(x790-x791))*x792);

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x797 = 18U;
	volatile uint16_t x798 = UINT16_MAX;
	volatile int16_t x799 = INT16_MIN;
	int16_t x800 = -1;
	static volatile uint32_t t146 = 1478856369U;

    t146 = ((x797%(x798-x799))*x800);

    if (t146 != 4294967278U) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint16_t x801 = 36U;
	int64_t x802 = -172743128541622LL;
	int8_t x803 = -1;
	volatile int64_t x804 = 3LL;
	volatile int64_t t147 = -439957523469767804LL;

    t147 = ((x801%(x802-x803))*x804);

    if (t147 != 108LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x805 = 6656;
	uint64_t x806 = UINT64_MAX;
	int64_t x807 = 4113224LL;
	volatile uint8_t x808 = 22U;

    t148 = ((x805%(x806-x807))*x808);

    if (t148 != 146432LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x809 = 1601;
	int64_t x810 = 1286491454173LL;
	volatile int8_t x811 = -61;
	volatile int16_t x812 = 1003;
	volatile int64_t t149 = 2122469071LL;

    t149 = ((x809%(x810-x811))*x812);

    if (t149 != 1605803LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x817 = -45;
	static int8_t x818 = 3;
	volatile int16_t x820 = -1;
	int32_t t150 = -20736;

    t150 = ((x817%(x818-x819))*x820);

    if (t150 != 45) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x826 = UINT64_MAX;
	static uint16_t x827 = UINT16_MAX;
	static int32_t x828 = -1013209;

    t151 = ((x825%(x826-x827))*x828);

    if (t151 != 18446744007308899801LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x834 = -4;
	uint8_t x835 = 2U;
	int16_t x836 = -1;
	int32_t t152 = 18052297;

    t152 = ((x833%(x834-x835))*x836);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x841 = 54U;
	int32_t x842 = -1;
	int64_t x843 = INT64_MIN;
	uint64_t x844 = 5LLU;
	uint64_t t153 = 66090699330514538LLU;

    t153 = ((x841%(x842-x843))*x844);

    if (t153 != 270LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x845 = 4U;
	uint32_t x846 = 17155799U;
	int32_t x847 = -1;
	uint8_t x848 = 3U;
	volatile uint32_t t154 = 763948374U;

    t154 = ((x845%(x846-x847))*x848);

    if (t154 != 12U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x849 = 5595U;
	static uint32_t x850 = 1559507U;
	int16_t x851 = -1;
	static volatile uint8_t x852 = UINT8_MAX;
	static volatile uint32_t t155 = 5464U;

    t155 = ((x849%(x850-x851))*x852);

    if (t155 != 1426725U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x854 = -190105540LL;
	uint8_t x855 = UINT8_MAX;

    t156 = ((x853%(x854-x855))*x856);

    if (t156 != 18446744073709092864LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x857 = 2U;
	volatile int16_t x858 = -1;
	int16_t x860 = -1;
	volatile int32_t t157 = -508674;

    t157 = ((x857%(x858-x859))*x860);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x861 = -1;
	static int8_t x862 = 26;
	static uint8_t x863 = UINT8_MAX;
	uint8_t x864 = UINT8_MAX;
	static volatile int32_t t158 = 6618143;

    t158 = ((x861%(x862-x863))*x864);

    if (t158 != -255) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x876 = 19LLU;

    t159 = ((x873%(x874-x875))*x876);

    if (t159 != 490618LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x877 = 12U;
	volatile uint8_t x878 = UINT8_MAX;
	volatile uint8_t x879 = 0U;
	static uint16_t x880 = UINT16_MAX;
	static volatile int32_t t160 = -189116;

    t160 = ((x877%(x878-x879))*x880);

    if (t160 != 786420) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x890 = 127U;
	int8_t x891 = INT8_MIN;
	volatile int32_t t161 = 278;

    t161 = ((x889%(x890-x891))*x892);

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x893 = INT64_MAX;
	uint32_t x894 = UINT32_MAX;
	static uint32_t x895 = 107U;
	int32_t x896 = -1;
	static volatile int64_t t162 = -23186689374382LL;

    t162 = ((x893%(x894-x895))*x896);

    if (t162 != -5831LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x897 = INT16_MAX;
	static int32_t x898 = -8975;
	volatile uint16_t x899 = 455U;
	uint16_t x900 = 4U;
	volatile int32_t t163 = -229;

    t163 = ((x897%(x898-x899))*x900);

    if (t163 != 17908) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x901 = -1;
	int8_t x903 = INT8_MAX;
	int16_t x904 = -1;
	volatile int32_t t164 = -13;

    t164 = ((x901%(x902-x903))*x904);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x906 = 253;
	uint8_t x908 = 22U;
	int32_t t165 = 394230267;

    t165 = ((x905%(x906-x907))*x908);

    if (t165 != -6446) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x909 = INT64_MIN;
	volatile int8_t x910 = -1;
	int64_t x911 = 39LL;
	int8_t x912 = -1;
	volatile int64_t t166 = -2849871LL;

    t166 = ((x909%(x910-x911))*x912);

    if (t166 != 8LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x913 = INT16_MIN;
	uint32_t x914 = 28U;
	int16_t x915 = INT16_MIN;
	volatile int8_t x916 = INT8_MAX;
	volatile uint32_t t167 = 185U;

    t167 = ((x913%(x914-x915))*x916);

    if (t167 != 401828U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x922 = INT8_MIN;
	volatile uint64_t x923 = UINT64_MAX;
	volatile uint32_t x924 = 670313U;
	uint64_t t168 = 395LLU;

    t168 = ((x921%(x922-x923))*x924);

    if (t168 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x933 = 13U;
	volatile uint32_t t169 = 3929U;

    t169 = ((x933%(x934-x935))*x936);

    if (t169 != 2147483648U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x942 = UINT8_MAX;
	int8_t x943 = 27;
	volatile int64_t x944 = -1LL;
	volatile int64_t t170 = -77LL;

    t170 = ((x941%(x942-x943))*x944);

    if (t170 != -106LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x946 = UINT8_MAX;
	volatile int8_t x947 = 30;
	uint32_t x948 = 2944U;
	uint64_t t171 = 2LLU;

    t171 = ((x945%(x946-x947))*x948);

    if (t171 != 562304LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x949 = INT8_MAX;
	static uint8_t x950 = 66U;
	uint32_t x951 = 8137969U;
	volatile int16_t x952 = 689;
	static volatile uint32_t t172 = 1563033U;

    t172 = ((x949%(x950-x951))*x952);

    if (t172 != 87503U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x953 = UINT8_MAX;
	volatile int64_t x955 = INT64_MIN;
	int32_t x956 = INT32_MIN;

    t173 = ((x953%(x954-x955))*x956);

    if (t173 != -547608330240LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x957 = UINT32_MAX;
	volatile int32_t x958 = INT32_MAX;
	int16_t x959 = INT16_MAX;
	int32_t x960 = INT32_MIN;
	volatile uint32_t t174 = 23056U;

    t174 = ((x957%(x958-x959))*x960);

    if (t174 != 2147483648U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x963 = INT8_MAX;
	static uint64_t x964 = UINT64_MAX;
	static volatile uint64_t t175 = 24LLU;

    t175 = ((x961%(x962-x963))*x964);

    if (t175 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x970 = 5103LLU;
	uint16_t x971 = 1U;
	static uint64_t x972 = 131015LLU;
	static volatile uint64_t t176 = 93937734251573507LLU;

    t176 = ((x969%(x970-x971))*x972);

    if (t176 != 335529415LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x974 = INT32_MAX;
	uint8_t x975 = 96U;
	static uint16_t x976 = 320U;

    t177 = ((x973%(x974-x975))*x976);

    if (t177 != 745280) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x977 = UINT8_MAX;
	static int16_t x979 = INT16_MIN;
	int16_t x980 = INT16_MIN;
	volatile int32_t t178 = -50663600;

    t178 = ((x977%(x978-x979))*x980);

    if (t178 != -8355840) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x982 = INT16_MIN;
	int16_t x984 = -25;

    t179 = ((x981%(x982-x983))*x984);

    if (t179 != 819200) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x985 = INT32_MAX;
	int64_t x986 = 30297806248LL;
	uint8_t x988 = 0U;
	volatile int64_t t180 = 3LL;

    t180 = ((x985%(x986-x987))*x988);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x991 = INT32_MIN;
	static int8_t x992 = INT8_MIN;
	volatile int32_t t181 = 7;

    t181 = ((x989%(x990-x991))*x992);

    if (t181 != 16384) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x997 = 9278U;
	static int8_t x998 = -1;
	uint32_t x1000 = 27624748U;
	uint32_t t182 = 4344646U;

    t182 = ((x997%(x998-x999))*x1000);

    if (t182 != 2899341480U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x1001 = -2;
	static volatile int8_t x1002 = INT8_MIN;
	uint64_t x1003 = UINT64_MAX;
	uint16_t x1004 = 325U;
	volatile uint64_t t183 = 622LLU;

    t183 = ((x1001%(x1002-x1003))*x1004);

    if (t183 != 40625LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1005 = 0;
	uint32_t x1006 = 75U;
	static int8_t x1007 = INT8_MIN;
	static volatile int8_t x1008 = INT8_MAX;
	uint32_t t184 = 30257575U;

    t184 = ((x1005%(x1006-x1007))*x1008);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1013 = 537619143928840021LL;
	uint16_t x1014 = 1536U;
	int16_t x1015 = -1;
	int64_t x1016 = -1LL;
	int64_t t185 = 207736644LL;

    t185 = ((x1013%(x1014-x1015))*x1016);

    if (t185 != -108LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1021 = -17;
	static uint32_t x1022 = 905U;
	static uint16_t x1023 = UINT16_MAX;
	volatile uint32_t x1024 = 112U;
	uint32_t t186 = 7U;

    t186 = ((x1021%(x1022-x1023))*x1024);

    if (t186 != 7236656U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1029 = 598LL;
	int32_t x1030 = INT32_MIN;
	uint64_t x1031 = 20943911076LLU;
	int64_t x1032 = INT64_MAX;

    t187 = ((x1029%(x1030-x1031))*x1032);

    if (t187 != 18446744073709551018LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1033 = 16;
	static uint32_t x1034 = 46U;
	uint64_t x1035 = UINT64_MAX;
	uint64_t t188 = 2777154084766900288LLU;

    t188 = ((x1033%(x1034-x1035))*x1036);

    if (t188 != 18446744039349813248LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1037 = 0U;
	uint16_t x1039 = UINT16_MAX;
	volatile int64_t x1040 = -75LL;

    t189 = ((x1037%(x1038-x1039))*x1040);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1046 = INT8_MIN;
	int8_t x1047 = -1;
	int32_t x1048 = 3976773;
	static int32_t t190 = -1691;

    t190 = ((x1045%(x1046-x1047))*x1048);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1053 = INT8_MAX;
	volatile uint16_t x1055 = UINT16_MAX;
	uint8_t x1056 = 18U;
	volatile uint64_t t191 = 3546526694408LLU;

    t191 = ((x1053%(x1054-x1055))*x1056);

    if (t191 != 2286LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1057 = 380125624U;
	int16_t x1058 = 0;
	static uint32_t x1059 = UINT32_MAX;
	int64_t x1060 = INT64_MIN;

    t192 = ((x1057%(x1058-x1059))*x1060);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x1061 = -1;
	uint64_t x1062 = 27867LLU;
	uint64_t x1063 = 13397LLU;
	int32_t x1064 = -1;
	uint64_t t193 = 3188856LLU;

    t193 = ((x1061%(x1062-x1063))*x1064);

    if (t193 != 18446744073709542301LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x1066 = 9U;
	static uint16_t x1067 = 3U;
	static uint64_t x1068 = 60724LLU;

    t194 = ((x1065%(x1066-x1067))*x1068);

    if (t194 != 18446744073709430168LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1073 = -1LL;
	int16_t x1076 = 7;
	static volatile int64_t t195 = -372997816672LL;

    t195 = ((x1073%(x1074-x1075))*x1076);

    if (t195 != -7LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x1077 = UINT32_MAX;
	int8_t x1078 = -1;
	static int32_t x1079 = 1025428;
	uint16_t x1080 = 10782U;
	static uint32_t t196 = 3313U;

    t196 = ((x1077%(x1078-x1079))*x1080);

    if (t196 != 2466230104U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1081 = INT32_MIN;
	volatile uint64_t x1083 = UINT64_MAX;
	int8_t x1084 = -17;
	volatile uint64_t t197 = 39319847218759LLU;

    t197 = ((x1081%(x1082-x1083))*x1084);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1085 = INT64_MIN;
	int16_t x1086 = INT16_MIN;
	int8_t x1087 = INT8_MIN;
	int32_t x1088 = INT32_MIN;

    t198 = ((x1085%(x1086-x1087))*x1088);

    if (t198 != 274877906944LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x1093 = -1;
	int32_t x1094 = INT32_MIN;
	volatile int16_t x1095 = -17;
	int64_t x1096 = -1LL;

    t199 = ((x1093%(x1094-x1095))*x1096);

    if (t199 != 1LL) { NG(); } else { ; }
	
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

