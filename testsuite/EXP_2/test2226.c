
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

uint8_t x5 = UINT8_MAX;
uint16_t x10 = UINT16_MAX;
int8_t x14 = -1;
static int64_t x15 = -1LL;
int64_t t2 = -253454600156LL;
int32_t t3 = 24921165;
static volatile uint16_t x21 = 6U;
int64_t x25 = INT64_MIN;
static uint16_t x26 = 1445U;
int64_t x27 = INT64_MAX;
uint32_t x28 = UINT32_MAX;
static volatile int32_t x33 = 0;
volatile uint8_t x34 = UINT8_MAX;
uint16_t x36 = 11935U;
uint16_t x41 = UINT16_MAX;
uint16_t x55 = 5U;
int8_t x58 = INT8_MIN;
int64_t x60 = INT64_MIN;
int64_t x74 = INT64_MAX;
static int64_t x83 = INT64_MAX;
static uint32_t x87 = 67014832U;
static uint8_t x91 = 6U;
static uint16_t x96 = UINT16_MAX;
static uint8_t x98 = UINT8_MAX;
uint64_t x103 = 435LLU;
volatile uint32_t x121 = UINT32_MAX;
int16_t x132 = 48;
int64_t x141 = INT64_MIN;
int8_t x145 = INT8_MIN;
volatile int64_t x147 = INT64_MAX;
volatile int16_t x167 = INT16_MIN;
int64_t x173 = INT64_MIN;
uint16_t x174 = UINT16_MAX;
static uint64_t x191 = 144869358750LLU;
static int64_t x193 = INT64_MAX;
uint16_t x195 = UINT16_MAX;
int8_t x197 = INT8_MIN;
int16_t x199 = INT16_MAX;
volatile int64_t t35 = -223887LL;
int16_t x202 = -3924;
uint8_t x203 = UINT8_MAX;
int64_t t37 = INT64_MIN;
static int32_t x217 = -1;
volatile uint64_t x218 = UINT64_MAX;
uint32_t x219 = 54U;
static int8_t x221 = -1;
int32_t x228 = INT32_MIN;
volatile int16_t x238 = -6;
uint32_t x240 = 74U;
volatile int32_t x247 = -27315;
volatile int32_t x248 = 165540730;
uint64_t t47 = 661424895LLU;
int16_t x262 = -12911;
int32_t x263 = INT32_MIN;
int32_t t48 = 4568;
static uint64_t x271 = 8315320237083838102LLU;
static uint32_t x272 = 31395U;
int32_t x273 = -1;
int32_t x280 = INT32_MIN;
uint8_t x282 = UINT8_MAX;
int32_t x283 = -1;
static int64_t x284 = 123922LL;
volatile int64_t t53 = 116468319996345LL;
static int8_t x287 = 7;
int64_t x288 = -1LL;
static int64_t t54 = -2609333313549LL;
static volatile uint64_t x303 = 836839295LLU;
volatile int64_t x305 = INT64_MIN;
volatile uint64_t t59 = UINT64_MAX;
volatile uint32_t x313 = 21692116U;
static uint8_t x325 = 27U;
int64_t t63 = -377LL;
uint16_t x343 = UINT16_MAX;
uint8_t x344 = 0U;
static volatile uint8_t x348 = 0U;
int64_t t69 = 35780704362LL;
int32_t x376 = -56;
uint64_t x377 = 418432750760964LLU;
uint16_t x397 = 3U;
static int32_t x398 = INT32_MIN;
volatile int16_t x413 = INT16_MIN;
static int32_t x414 = INT32_MIN;
int16_t x430 = -1;
volatile int32_t t82 = -286;
uint16_t x439 = 8227U;
volatile int32_t t84 = -312914;
uint64_t x452 = UINT64_MAX;
int16_t x465 = INT16_MAX;
int16_t x466 = 799;
uint32_t x475 = 14177U;
int8_t x479 = INT8_MAX;
uint64_t x491 = UINT64_MAX;
static int32_t x494 = INT32_MAX;
volatile int32_t x496 = INT32_MIN;
int32_t x506 = 10482;
int64_t x507 = -1LL;
volatile int64_t t98 = -765514LL;
int64_t x526 = INT64_MIN;
int64_t x530 = 8193321611263LL;
volatile uint32_t x541 = 10857137U;
uint64_t x542 = 404425LLU;
int8_t x543 = INT8_MAX;
static int16_t x544 = -1;
uint64_t x559 = UINT64_MAX;
uint32_t x560 = 17973U;
int32_t x563 = -1;
int32_t x565 = -1;
int32_t x573 = -781871;
static int16_t x575 = -1;
int64_t t108 = -4270LL;
uint64_t t109 = 29169816025709927LLU;
uint32_t x592 = 506740347U;
static uint32_t t110 = 4428927U;
uint32_t x593 = 1022U;
static uint64_t t111 = 103LLU;
int8_t x603 = INT8_MAX;
int16_t x612 = -1;
volatile int64_t t115 = 35799907LL;
volatile uint32_t x635 = 1007279U;
static volatile uint32_t t117 = 68998622U;
int16_t x638 = INT16_MIN;
int8_t x639 = INT8_MIN;
uint16_t x640 = UINT16_MAX;
int16_t x641 = -1;
volatile int32_t t120 = -538;
int16_t x664 = INT16_MIN;
volatile int32_t t123 = 5518;
int64_t t124 = INT64_MAX;
static int64_t x685 = 782LL;
static volatile uint8_t x686 = UINT8_MAX;
int8_t x703 = INT8_MAX;
int16_t x705 = INT16_MIN;
static volatile uint64_t x706 = 648993315514LLU;
uint64_t t130 = 1312801839LLU;
int16_t x721 = 14;
static int16_t x722 = -4054;
uint16_t x734 = UINT16_MAX;
volatile int64_t x744 = -1773528LL;
static uint16_t x765 = 7U;
uint32_t x768 = 26988595U;
volatile uint32_t t141 = 460374U;
volatile uint32_t t142 = 186U;
static uint64_t x782 = 9141111714913LLU;
uint64_t t144 = 13405768142016LLU;
static int8_t x785 = 1;
int32_t x788 = 6748125;
static int64_t x795 = 131264140291LL;
uint64_t t149 = 6871LLU;
volatile int64_t t150 = 27869647423049491LL;
static int8_t x818 = INT8_MIN;
volatile int64_t t152 = 860300596470092LL;
int64_t t154 = -3667065762969LL;
uint64_t x834 = 2594822LLU;
uint16_t x835 = 5678U;
static volatile uint64_t x842 = UINT64_MAX;
int8_t x845 = INT8_MIN;
volatile uint32_t t157 = 238U;
volatile uint8_t x849 = 119U;
int16_t x866 = 13;
volatile uint64_t t161 = 48005613323796238LLU;
uint64_t x870 = 973630320013LLU;
int64_t t163 = -160268LL;
static uint8_t x881 = 3U;
int32_t x883 = -1;
int32_t x899 = -1;
volatile int16_t x909 = -1;
int8_t x912 = -1;
uint16_t x913 = UINT16_MAX;
int8_t x915 = INT8_MIN;
volatile int16_t x921 = INT16_MIN;
int16_t x922 = -38;
volatile uint16_t x923 = 9U;
static volatile int32_t x937 = -1;
static int64_t x942 = 8580LL;
uint16_t x943 = 53U;
volatile int64_t t178 = 622971LL;
int8_t x953 = INT8_MIN;
static int16_t x955 = 3022;
int8_t x965 = INT8_MIN;
volatile int8_t x967 = INT8_MIN;
volatile int16_t x972 = INT16_MIN;
int8_t x979 = INT8_MIN;
int32_t t186 = -33811862;
uint32_t x995 = UINT32_MAX;
int64_t x996 = INT64_MAX;
volatile int64_t t188 = 101370281183130575LL;
int32_t x997 = -38;
uint16_t x1002 = UINT16_MAX;
uint32_t x1003 = 31579067U;
volatile uint64_t t195 = 105295LLU;
int8_t x1038 = -1;
int64_t x1040 = 1LL;
int64_t t198 = 162088757704007LL;


void f0(void) {
    	volatile int8_t x6 = INT8_MAX;
	uint16_t x7 = 468U;
	uint32_t x8 = UINT32_MAX;
	static volatile uint32_t t0 = 5711668U;

    t0 = ((x5%(x6&x7))^x8);

    if (t0 != 4294967292U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = INT32_MIN;
	int8_t x11 = INT8_MAX;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -4;

    t1 = ((x9%(x10&x11))^x12);

    if (t1 != 120) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	static int16_t x16 = INT16_MAX;

    t2 = ((x13%(x14&x15))^x16);

    if (t2 != 32767LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MIN;
	volatile int8_t x19 = INT8_MIN;
	static int16_t x20 = INT16_MIN;

    t3 = ((x17%(x18&x19))^x20);

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x22 = 119;
	int16_t x23 = INT16_MAX;
	static int64_t x24 = -843864676LL;
	int64_t t4 = -1LL;

    t4 = ((x21%(x22&x23))^x24);

    if (t4 != -843864678LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t t5 = 25997493481862LL;

    t5 = ((x25%(x26&x27))^x28);

    if (t5 != -4294966999LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x35 = -1;
	static volatile int32_t t6 = 148302778;

    t6 = ((x33%(x34&x35))^x36);

    if (t6 != 11935) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x37 = 222U;
	int64_t x38 = -9725036278LL;
	static volatile int16_t x39 = -1;
	static int64_t x40 = INT64_MIN;
	static int64_t t7 = 774253522LL;

    t7 = ((x37%(x38&x39))^x40);

    if (t7 != -9223372036854775586LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x42 = UINT8_MAX;
	int16_t x43 = 10;
	uint8_t x44 = 67U;
	volatile int32_t t8 = -1;

    t8 = ((x41%(x42&x43))^x44);

    if (t8 != 70) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x45 = INT16_MAX;
	volatile int16_t x46 = INT16_MIN;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = 827039803;
	uint64_t t9 = 28858LLU;

    t9 = ((x45%(x46&x47))^x48);

    if (t9 != 827056068LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x53 = INT64_MIN;
	int64_t x54 = -1LL;
	uint32_t x56 = 176U;
	int64_t t10 = 1000256970887988LL;

    t10 = ((x53%(x54&x55))^x56);

    if (t10 != -179LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x57 = INT8_MAX;
	volatile int8_t x59 = -1;
	int64_t t11 = -3697LL;

    t11 = ((x57%(x58&x59))^x60);

    if (t11 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x61 = 468U;
	volatile int64_t x62 = -1LL;
	int8_t x63 = -1;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t12 = UINT64_MAX;

    t12 = ((x61%(x62&x63))^x64);

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x69 = -1;
	int32_t x70 = -949;
	static uint64_t x71 = 154549770167LLU;
	int64_t x72 = -1LL;
	static uint64_t t13 = 8908775465162339LLU;

    t13 = ((x69%(x70&x71))^x72);

    if (t13 != 18446743936052479488LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x73 = 3369U;
	uint32_t x75 = UINT32_MAX;
	uint8_t x76 = 1U;
	volatile int64_t t14 = -166716603403130LL;

    t14 = ((x73%(x74&x75))^x76);

    if (t14 != 3368LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x81 = 55565320U;
	static volatile uint16_t x82 = UINT16_MAX;
	static int64_t x84 = 60611639LL;
	int64_t t15 = 29525LL;

    t15 = ((x81%(x82&x83))^x84);

    if (t15 != 60556128LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x85 = INT64_MIN;
	static uint32_t x86 = UINT32_MAX;
	static uint8_t x88 = UINT8_MAX;
	volatile int64_t t16 = -2136443981LL;

    t16 = ((x85%(x86&x87))^x88);

    if (t16 != -38036433LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x89 = 3242;
	int64_t x90 = -1LL;
	static int16_t x92 = INT16_MIN;
	static int64_t t17 = 5121LL;

    t17 = ((x89%(x90&x91))^x92);

    if (t17 != -32766LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x93 = -13919072360758LL;
	int32_t x94 = -1;
	volatile int16_t x95 = INT16_MIN;
	volatile int64_t t18 = 78LL;

    t18 = ((x93%(x94&x95))^x96);

    if (t18 != -59083LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x97 = -1;
	volatile uint16_t x99 = 1U;
	int32_t x100 = -2;
	volatile int32_t t19 = -135425129;

    t19 = ((x97%(x98&x99))^x100);

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x101 = INT64_MIN;
	volatile int32_t x102 = -1;
	int8_t x104 = -1;
	uint64_t t20 = 852259728386598LLU;

    t20 = ((x101%(x102&x103))^x104);

    if (t20 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x113 = -659244LL;
	static volatile uint64_t x114 = 24925LLU;
	uint16_t x115 = UINT16_MAX;
	int8_t x116 = INT8_MIN;
	volatile uint64_t t21 = 0LLU;

    t21 = ((x113%(x114&x115))^x116);

    if (t21 != 18446744073709546994LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x122 = INT16_MIN;
	int16_t x123 = -24;
	int16_t x124 = INT16_MIN;
	uint32_t t22 = UINT32_MAX;

    t22 = ((x121%(x122&x123))^x124);

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x125 = -1LL;
	uint16_t x126 = UINT16_MAX;
	int8_t x127 = 8;
	volatile int32_t x128 = INT32_MIN;
	static int64_t t23 = -14859774000839522LL;

    t23 = ((x125%(x126&x127))^x128);

    if (t23 != 2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x129 = 400LL;
	static volatile int16_t x130 = -1;
	int8_t x131 = -48;
	int64_t t24 = 841LL;

    t24 = ((x129%(x130&x131))^x132);

    if (t24 != 32LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x133 = UINT32_MAX;
	int8_t x134 = INT8_MAX;
	volatile int8_t x135 = INT8_MAX;
	int8_t x136 = 21;
	static volatile uint32_t t25 = 2691U;

    t25 = ((x133%(x134&x135))^x136);

    if (t25 != 26U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x142 = 2030892;
	int8_t x143 = INT8_MAX;
	static volatile int8_t x144 = INT8_MAX;
	volatile int64_t t26 = -4468LL;

    t26 = ((x141%(x142&x143))^x144);

    if (t26 != -121LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x146 = 250426660;
	static int8_t x148 = -1;
	static volatile int64_t t27 = 1766514LL;

    t27 = ((x145%(x146&x147))^x148);

    if (t27 != 127LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x157 = 43495LL;
	volatile int64_t x158 = 34878LL;
	static int8_t x159 = INT8_MAX;
	static int64_t x160 = 267205635169503947LL;
	static volatile int64_t t28 = -1048695231643795LL;

    t28 = ((x157%(x158&x159))^x160);

    if (t28 != 267205635169503978LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x165 = UINT16_MAX;
	uint32_t x166 = 1075915273U;
	int64_t x168 = -589177135LL;
	volatile int64_t t29 = -1886240LL;

    t29 = ((x165%(x166&x167))^x168);

    if (t29 != -589225682LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x169 = -5;
	static int32_t x170 = INT32_MIN;
	volatile int8_t x171 = -1;
	uint32_t x172 = 13653752U;
	static volatile uint32_t t30 = 1693U;

    t30 = ((x169%(x170&x171))^x172);

    if (t30 != 4281313539U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x175 = 65531012U;
	int8_t x176 = 22;
	volatile int64_t t31 = -187822381728LL;

    t31 = ((x173%(x174&x175))^x176);

    if (t31 != -26790LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x177 = INT64_MAX;
	int32_t x178 = INT32_MIN;
	static int16_t x179 = INT16_MIN;
	static int16_t x180 = INT16_MAX;
	volatile int64_t t32 = 42116LL;

    t32 = ((x177%(x178&x179))^x180);

    if (t32 != 2147450880LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x189 = INT64_MIN;
	int16_t x190 = -1;
	int16_t x192 = INT16_MAX;
	volatile uint64_t t33 = 28985590275387LLU;

    t33 = ((x189%(x190&x191))^x192);

    if (t33 != 70325698543LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x194 = INT16_MIN;
	int16_t x196 = INT16_MIN;
	volatile int64_t t34 = 44306LL;

    t34 = ((x193%(x194&x195))^x196);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x198 = 59274LL;
	volatile uint32_t x200 = 15078728U;

    t35 = ((x197%(x198&x199))^x200);

    if (t35 != -15078712LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x201 = 43U;
	uint32_t x204 = UINT32_MAX;
	uint32_t t36 = 12U;

    t36 = ((x201%(x202&x203))^x204);

    if (t36 != 4294967252U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x205 = INT64_MIN;
	volatile int64_t x206 = INT64_MIN;
	int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MIN;

    t37 = ((x205%(x206&x207))^x208);

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x209 = INT16_MIN;
	uint8_t x210 = 50U;
	static uint32_t x211 = UINT32_MAX;
	volatile uint8_t x212 = 98U;
	uint32_t t38 = 13430U;

    t38 = ((x209%(x210&x211))^x212);

    if (t38 != 126U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x213 = -1LL;
	int32_t x214 = INT32_MAX;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MAX;
	int64_t t39 = 14693626079LL;

    t39 = ((x213%(x214&x215))^x216);

    if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x220 = INT16_MIN;
	volatile uint64_t t40 = 36095LLU;

    t40 = ((x217%(x218&x219))^x220);

    if (t40 != 18446744073709518899LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x222 = UINT64_MAX;
	volatile uint8_t x223 = 1U;
	int32_t x224 = 184333;
	volatile uint64_t t41 = 3043653296074086LLU;

    t41 = ((x221%(x222&x223))^x224);

    if (t41 != 184333LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x225 = INT64_MAX;
	int8_t x226 = -1;
	static uint64_t x227 = UINT64_MAX;
	uint64_t t42 = 10108829245503768LLU;

    t42 = ((x225%(x226&x227))^x228);

    if (t42 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x229 = -1;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = 1;
	int64_t x232 = 1695185003177733655LL;
	volatile int64_t t43 = 105238611352308683LL;

    t43 = ((x229%(x230&x231))^x232);

    if (t43 != 1695185003177733655LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x237 = 92;
	volatile int32_t x239 = INT32_MAX;
	static volatile uint32_t t44 = 363496779U;

    t44 = ((x237%(x238&x239))^x240);

    if (t44 != 22U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x241 = -9;
	int32_t x242 = 325750;
	volatile int16_t x243 = INT16_MIN;
	uint64_t x244 = 3090521605LLU;
	uint64_t t45 = 3636LLU;

    t45 = ((x241%(x242&x243))^x244);

    if (t45 != 18446744070619030002LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x245 = INT64_MAX;
	volatile int8_t x246 = -61;
	int64_t t46 = -48791449LL;

    t46 = ((x245%(x246&x247))^x248);

    if (t46 != 165539259LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x253 = 194147234LL;
	uint32_t x254 = 1U;
	uint32_t x255 = UINT32_MAX;
	static uint64_t x256 = 8257LLU;

    t47 = ((x253%(x254&x255))^x256);

    if (t47 != 8257LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x261 = INT8_MIN;
	int32_t x264 = 55;

    t48 = ((x261%(x262&x263))^x264);

    if (t48 != -73) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x265 = UINT16_MAX;
	uint64_t x266 = UINT64_MAX;
	uint16_t x267 = UINT16_MAX;
	volatile int16_t x268 = 0;
	volatile uint64_t t49 = 9711LLU;

    t49 = ((x265%(x266&x267))^x268);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x269 = -1;
	int16_t x270 = INT16_MAX;
	volatile uint64_t t50 = 267270996LLU;

    t50 = ((x269%(x270&x271))^x272);

    if (t50 != 21994LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x274 = -1LL;
	int8_t x275 = INT8_MIN;
	uint16_t x276 = UINT16_MAX;
	volatile int64_t t51 = 3894990630093390408LL;

    t51 = ((x273%(x274&x275))^x276);

    if (t51 != -65536LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x277 = 118U;
	int32_t x278 = INT32_MAX;
	int32_t x279 = -448351315;
	static volatile int32_t t52 = 479;

    t52 = ((x277%(x278&x279))^x280);

    if (t52 != -2147483530) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x281 = -1LL;

    t53 = ((x281%(x282&x283))^x284);

    if (t53 != -123923LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x285 = INT32_MIN;
	static int8_t x286 = 4;

    t54 = ((x285%(x286&x287))^x288);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x289 = INT32_MAX;
	int32_t x290 = -1;
	static int16_t x291 = -1;
	int16_t x292 = 97;
	int32_t t55 = -1;

    t55 = ((x289%(x290&x291))^x292);

    if (t55 != 97) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x293 = 369;
	int64_t x294 = -1LL;
	int8_t x295 = INT8_MIN;
	int8_t x296 = -1;
	volatile int64_t t56 = 1948LL;

    t56 = ((x293%(x294&x295))^x296);

    if (t56 != -114LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x297 = -1683305;
	int32_t x298 = -1491;
	int8_t x299 = -11;
	volatile uint32_t x300 = UINT32_MAX;
	volatile uint32_t t57 = 16U;

    t57 = ((x297%(x298&x299))^x300);

    if (t57 != 1426U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x301 = 207U;
	volatile uint32_t x302 = UINT32_MAX;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t58 = 1655584684LLU;

    t58 = ((x301%(x302&x303))^x304);

    if (t58 != 18446744073709519055LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x306 = 437;
	uint64_t x307 = 9LLU;
	int64_t x308 = -1LL;

    t59 = ((x305%(x306&x307))^x308);

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x314 = INT64_MAX;
	static volatile int64_t x315 = 253556876LL;
	uint64_t x316 = 15LLU;
	volatile uint64_t t60 = 168541LLU;

    t60 = ((x313%(x314&x315))^x316);

    if (t60 != 21692123LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x321 = 50U;
	uint8_t x322 = UINT8_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile int8_t x324 = -1;
	static volatile uint32_t t61 = 7414U;

    t61 = ((x321%(x322&x323))^x324);

    if (t61 != 4294967245U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x326 = -1;
	int64_t x327 = INT64_MAX;
	int64_t x328 = INT64_MIN;
	int64_t t62 = -7307135726238LL;

    t62 = ((x325%(x326&x327))^x328);

    if (t62 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x333 = -1;
	volatile int8_t x334 = INT8_MIN;
	static int64_t x335 = INT64_MIN;
	int16_t x336 = INT16_MIN;

    t63 = ((x333%(x334&x335))^x336);

    if (t63 != 32767LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x341 = 0U;
	int16_t x342 = INT16_MIN;
	int32_t t64 = -164;

    t64 = ((x341%(x342&x343))^x344);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x345 = UINT16_MAX;
	static int8_t x346 = -6;
	int64_t x347 = 259917563LL;
	volatile int64_t t65 = 120LL;

    t65 = ((x345%(x346&x347))^x348);

    if (t65 != 65535LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x349 = -1;
	int16_t x350 = 3;
	int8_t x351 = INT8_MAX;
	volatile int64_t x352 = -1LL;
	int64_t t66 = 283631902190276LL;

    t66 = ((x349%(x350&x351))^x352);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x353 = 13741U;
	int64_t x354 = 1455885LL;
	int16_t x355 = 1;
	uint16_t x356 = UINT16_MAX;
	volatile int64_t t67 = 857518853LL;

    t67 = ((x353%(x354&x355))^x356);

    if (t67 != 65535LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x365 = 167U;
	static int16_t x366 = INT16_MIN;
	uint16_t x367 = UINT16_MAX;
	int32_t x368 = INT32_MAX;
	int32_t t68 = -464209;

    t68 = ((x365%(x366&x367))^x368);

    if (t68 != 2147483480) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x369 = -1;
	volatile int16_t x370 = 1;
	int64_t x371 = -1LL;
	static uint16_t x372 = 3U;

    t69 = ((x369%(x370&x371))^x372);

    if (t69 != 3LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x373 = INT64_MIN;
	int64_t x374 = 4149834652460674LL;
	volatile uint16_t x375 = UINT16_MAX;
	volatile int64_t t70 = 6LL;

    t70 = ((x373%(x374&x375))^x376);

    if (t70 != 9720LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x378 = 92500564963387LL;
	static int64_t x379 = INT64_MAX;
	static uint32_t x380 = 1U;
	static volatile uint64_t t71 = 538140545738LLU;

    t71 = ((x377%(x378&x379))^x380);

    if (t71 != 48430490907417LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x381 = 3U;
	int16_t x382 = INT16_MIN;
	static int8_t x383 = INT8_MIN;
	int32_t x384 = -1;
	static int32_t t72 = 100024;

    t72 = ((x381%(x382&x383))^x384);

    if (t72 != -4) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x385 = UINT16_MAX;
	volatile int16_t x386 = INT16_MIN;
	static volatile int32_t x387 = -53183;
	int8_t x388 = INT8_MIN;
	volatile int32_t t73 = 76032;

    t73 = ((x385%(x386&x387))^x388);

    if (t73 != -65409) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x393 = INT64_MIN;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = INT16_MIN;
	static uint32_t x396 = UINT32_MAX;
	int64_t t74 = -6846040233LL;

    t74 = ((x393%(x394&x395))^x396);

    if (t74 != -3758096385LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x399 = -55;
	uint8_t x400 = 0U;
	int32_t t75 = -256443359;

    t75 = ((x397%(x398&x399))^x400);

    if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x401 = -200364;
	int16_t x402 = INT16_MAX;
	static int8_t x403 = INT8_MIN;
	int64_t x404 = INT64_MAX;
	int64_t t76 = -11099LL;

    t76 = ((x401%(x402&x403))^x404);

    if (t76 != -9223372036854771285LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x405 = INT8_MAX;
	int32_t x406 = -1505;
	uint16_t x407 = 92U;
	int8_t x408 = INT8_MAX;
	int32_t t77 = -115961;

    t77 = ((x405%(x406&x407))^x408);

    if (t77 != 112) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x409 = -1;
	int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MIN;
	static volatile uint8_t x412 = UINT8_MAX;
	volatile int64_t t78 = 4793494LL;

    t78 = ((x409%(x410&x411))^x412);

    if (t78 != -256LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x415 = INT16_MIN;
	static int8_t x416 = 0;
	int32_t t79 = -27008697;

    t79 = ((x413%(x414&x415))^x416);

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x421 = 1;
	int8_t x422 = INT8_MIN;
	int64_t x423 = INT64_MAX;
	volatile uint32_t x424 = UINT32_MAX;
	int64_t t80 = -131529107419LL;

    t80 = ((x421%(x422&x423))^x424);

    if (t80 != 4294967294LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x425 = 22545161486LL;
	int16_t x426 = INT16_MIN;
	int16_t x427 = -1;
	static int64_t x428 = INT64_MIN;
	int64_t t81 = -460663847781219LL;

    t81 = ((x425%(x426&x427))^x428);

    if (t81 != -9223372036854751986LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x429 = INT16_MIN;
	uint16_t x431 = 337U;
	uint8_t x432 = UINT8_MAX;

    t82 = ((x429%(x430&x431))^x432);

    if (t82 != -178) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x433 = INT16_MIN;
	static uint32_t x434 = 25392U;
	int8_t x435 = INT8_MIN;
	uint16_t x436 = 763U;
	volatile uint32_t t83 = 5821U;

    t83 = ((x433%(x434&x435))^x436);

    if (t83 != 14331U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x437 = -60;
	int16_t x438 = -37;
	int32_t x440 = INT32_MIN;

    t84 = ((x437%(x438&x439))^x440);

    if (t84 != 2147483588) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x445 = -1;
	static int64_t x446 = INT64_MAX;
	int32_t x447 = -1;
	volatile uint64_t x448 = 2803136LLU;
	static volatile uint64_t t85 = 103865637LLU;

    t85 = ((x445%(x446&x447))^x448);

    if (t85 != 18446744073706748479LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x449 = 7098U;
	volatile int8_t x450 = INT8_MAX;
	int16_t x451 = INT16_MAX;
	uint64_t t86 = 117LLU;

    t86 = ((x449%(x450&x451))^x452);

    if (t86 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x453 = INT16_MIN;
	int32_t x454 = 2430938;
	static uint32_t x455 = 282704320U;
	volatile int16_t x456 = INT16_MAX;
	static uint32_t t87 = 224982546U;

    t87 = ((x453%(x454&x455))^x456);

    if (t87 != 21119U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x457 = 29104U;
	volatile int32_t x458 = 33074509;
	int32_t x459 = -1;
	static int32_t x460 = 572406;
	static int32_t t88 = 17553473;

    t88 = ((x457%(x458&x459))^x460);

    if (t88 != 576070) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x467 = 51471365;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t89 = 43LLU;

    t89 = ((x465%(x466&x467))^x468);

    if (t89 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x473 = -23LL;
	int8_t x474 = -1;
	int32_t x476 = -63;
	int64_t t90 = -20616768LL;

    t90 = ((x473%(x474&x475))^x476);

    if (t90 != 40LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x477 = INT32_MAX;
	uint64_t x478 = 8493076970597634894LLU;
	int32_t x480 = INT32_MIN;
	volatile uint64_t t91 = 149920250LLU;

    t91 = ((x477%(x478&x479))^x480);

    if (t91 != 18446744071562068017LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x481 = 1;
	int32_t x482 = -1;
	volatile int8_t x483 = -24;
	int8_t x484 = INT8_MAX;
	int32_t t92 = 111551;

    t92 = ((x481%(x482&x483))^x484);

    if (t92 != 126) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x485 = INT64_MIN;
	volatile int16_t x486 = -1;
	int8_t x487 = INT8_MAX;
	static volatile int8_t x488 = -1;
	int64_t t93 = 123332326LL;

    t93 = ((x485%(x486&x487))^x488);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x489 = INT8_MIN;
	volatile uint64_t x490 = UINT64_MAX;
	int64_t x492 = INT64_MAX;
	uint64_t t94 = 146917602448198064LLU;

    t94 = ((x489%(x490&x491))^x492);

    if (t94 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x493 = -1;
	uint64_t x495 = 12LLU;
	static volatile uint64_t t95 = 271564LLU;

    t95 = ((x493%(x494&x495))^x496);

    if (t95 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x497 = UINT64_MAX;
	volatile int32_t x498 = -960391;
	uint16_t x499 = UINT16_MAX;
	int32_t x500 = 886;
	uint64_t t96 = 1697043069666735LLU;

    t96 = ((x497%(x498&x499))^x500);

    if (t96 != 441LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x501 = INT64_MIN;
	uint8_t x502 = UINT8_MAX;
	uint64_t x503 = 3641602888854LLU;
	int16_t x504 = INT16_MIN;
	uint64_t t97 = 122391037348LLU;

    t97 = ((x501%(x502&x503))^x504);

    if (t97 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x505 = UINT32_MAX;
	int32_t x508 = -5927;

    t98 = ((x505%(x506&x507))^x508);

    if (t98 != -13022LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x509 = 31;
	int16_t x510 = -1;
	uint64_t x511 = 35LLU;
	int32_t x512 = 83;
	volatile uint64_t t99 = 1836954LLU;

    t99 = ((x509%(x510&x511))^x512);

    if (t99 != 76LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x521 = -839659;
	static volatile int32_t x522 = -1;
	static volatile int8_t x523 = INT8_MIN;
	int16_t x524 = -12;
	int32_t t100 = 67470076;

    t100 = ((x521%(x522&x523))^x524);

    if (t100 != 97) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x525 = 122U;
	int8_t x527 = INT8_MIN;
	static int16_t x528 = -1;
	volatile int64_t t101 = -1598168769822890015LL;

    t101 = ((x525%(x526&x527))^x528);

    if (t101 != -123LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x529 = UINT32_MAX;
	int32_t x531 = -1;
	volatile int64_t x532 = -50143212852107LL;
	volatile int64_t t102 = -2LL;

    t102 = ((x529%(x530&x531))^x532);

    if (t102 != -50139978542198LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint64_t t103 = 31022234LLU;

    t103 = ((x541%(x542&x543))^x544);

    if (t103 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x553 = -1;
	static int64_t x554 = -2LL;
	uint64_t x555 = 58761119548286358LLU;
	int16_t x556 = -3;
	uint64_t t104 = 2800107009LLU;

    t104 = ((x553%(x554&x555))^x556);

    if (t104 != 18392230418613630052LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x557 = 1U;
	uint64_t x558 = 2LLU;
	uint64_t t105 = 958819879780465719LLU;

    t105 = ((x557%(x558&x559))^x560);

    if (t105 != 17972LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x561 = -1;
	int16_t x562 = 486;
	int16_t x564 = -17;
	static volatile int32_t t106 = -19;

    t106 = ((x561%(x562&x563))^x564);

    if (t106 != 16) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x566 = 43U;
	uint64_t x567 = 18648753309492LLU;
	uint64_t x568 = UINT64_MAX;
	static volatile uint64_t t107 = 2839LLU;

    t107 = ((x565%(x566&x567))^x568);

    if (t107 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x574 = INT64_MIN;
	int32_t x576 = -1;

    t108 = ((x573%(x574&x575))^x576);

    if (t108 != 781870LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x577 = 504U;
	volatile uint64_t x578 = 8080706106733116LLU;
	uint8_t x579 = 12U;
	int64_t x580 = -28841396LL;

    t109 = ((x577%(x578&x579))^x580);

    if (t109 != 18446744073680710220LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x589 = -3;
	int16_t x590 = -48;
	int32_t x591 = INT32_MIN;

    t110 = ((x589%(x590&x591))^x592);

    if (t110 != 3788226950U) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x594 = 56358U;
	uint64_t x595 = UINT64_MAX;
	static uint64_t x596 = UINT64_MAX;

    t111 = ((x593%(x594&x595))^x596);

    if (t111 != 18446744073709550593LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x601 = 105U;
	static int64_t x602 = -1LL;
	int32_t x604 = 1;
	int64_t t112 = 841LL;

    t112 = ((x601%(x602&x603))^x604);

    if (t112 != 104LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x605 = 35U;
	static uint64_t x606 = UINT64_MAX;
	static int8_t x607 = -1;
	volatile int32_t x608 = INT32_MIN;
	uint64_t t113 = 1444935599989690LLU;

    t113 = ((x605%(x606&x607))^x608);

    if (t113 != 18446744071562068003LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x609 = -1;
	int32_t x610 = -31866856;
	uint64_t x611 = 2970440257071459183LLU;
	uint64_t t114 = 263478824980409LLU;

    t114 = ((x609%(x610&x611))^x612);

    if (t114 != 17822641542302072880LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x617 = -1LL;
	int8_t x618 = -1;
	int32_t x619 = INT32_MIN;
	int8_t x620 = INT8_MIN;

    t115 = ((x617%(x618&x619))^x620);

    if (t115 != 127LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x625 = INT8_MIN;
	static int64_t x626 = 193574514686LL;
	int64_t x627 = 3027123856828798002LL;
	int64_t x628 = INT64_MAX;
	int64_t t116 = 4293090115380168LL;

    t116 = ((x625%(x626&x627))^x628);

    if (t116 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x633 = UINT32_MAX;
	volatile uint8_t x634 = 1U;
	static volatile int16_t x636 = INT16_MAX;

    t117 = ((x633%(x634&x635))^x636);

    if (t117 != 32767U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x637 = 891431133U;
	volatile uint32_t t118 = 147523877U;

    t118 = ((x637%(x638&x639))^x640);

    if (t118 != 891475746U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x642 = 598U;
	uint32_t x643 = 1576822U;
	int32_t x644 = -1;
	uint32_t t119 = 22144464U;

    t119 = ((x641%(x642&x643))^x644);

    if (t119 != 4294966962U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x649 = INT16_MIN;
	volatile int8_t x650 = -1;
	uint8_t x651 = UINT8_MAX;
	static int32_t x652 = INT32_MAX;

    t120 = ((x649%(x650&x651))^x652);

    if (t120 != -2147483521) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x657 = UINT16_MAX;
	volatile int8_t x658 = INT8_MIN;
	int64_t x659 = 1839761905326LL;
	static int32_t x660 = INT32_MIN;
	int64_t t121 = 860024882023804LL;

    t121 = ((x657%(x658&x659))^x660);

    if (t121 != -2147418113LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x661 = INT32_MAX;
	static volatile int16_t x662 = INT16_MIN;
	int32_t x663 = -1;
	volatile int32_t t122 = -102;

    t122 = ((x661%(x662&x663))^x664);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x669 = 1;
	uint8_t x670 = UINT8_MAX;
	int32_t x671 = 9222088;
	int8_t x672 = INT8_MIN;

    t123 = ((x669%(x670&x671))^x672);

    if (t123 != -127) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x673 = -1LL;
	int16_t x674 = -1;
	int64_t x675 = 14226114746356135LL;
	int64_t x676 = INT64_MIN;

    t124 = ((x673%(x674&x675))^x676);

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x677 = -1;
	int16_t x678 = -1;
	int64_t x679 = INT64_MIN;
	static volatile int8_t x680 = INT8_MIN;
	volatile int64_t t125 = -81258916LL;

    t125 = ((x677%(x678&x679))^x680);

    if (t125 != 127LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x687 = -240372;
	static int8_t x688 = INT8_MAX;
	int64_t t126 = -6788309LL;

    t126 = ((x685%(x686&x687))^x688);

    if (t126 != 125LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x693 = -1;
	uint32_t x694 = 205353U;
	int16_t x695 = INT16_MIN;
	uint16_t x696 = 438U;
	uint32_t t127 = 1544U;

    t127 = ((x693%(x694&x695))^x696);

    if (t127 != 65097U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x697 = 454LLU;
	int16_t x698 = INT16_MIN;
	static int32_t x699 = -1;
	volatile uint32_t x700 = 6352U;
	uint64_t t128 = 32302321834LLU;

    t128 = ((x697%(x698&x699))^x700);

    if (t128 != 6422LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x701 = 1331933238149681819LLU;
	static uint32_t x702 = UINT32_MAX;
	int64_t x704 = INT64_MAX;
	static volatile uint64_t t129 = 52994446302924LLU;

    t129 = ((x701%(x702&x703))^x704);

    if (t129 != 9223372036854775721LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x707 = -12;
	int64_t x708 = -1LL;

    t130 = ((x705%(x706&x707))^x708);

    if (t130 != 18446743925379045775LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x709 = -7291536LL;
	int8_t x710 = 11;
	volatile uint32_t x711 = 4791U;
	uint64_t x712 = 9120548879678251LLU;
	uint64_t t131 = 468LLU;

    t131 = ((x709%(x710&x711))^x712);

    if (t131 != 9120548879678251LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x713 = INT32_MIN;
	static int8_t x714 = -1;
	int32_t x715 = 106759;
	int32_t x716 = INT32_MIN;
	int32_t t132 = -417;

    t132 = ((x713%(x714&x715))^x716);

    if (t132 != 2147457285) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x723 = UINT32_MAX;
	static volatile uint32_t x724 = 38U;
	static uint32_t t133 = 11541047U;

    t133 = ((x721%(x722&x723))^x724);

    if (t133 != 40U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x725 = INT32_MIN;
	int8_t x726 = INT8_MIN;
	uint16_t x727 = 305U;
	uint32_t x728 = 52256722U;
	volatile uint32_t t134 = 111U;

    t134 = ((x725%(x726&x727))^x728);

    if (t134 != 52256722U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x729 = 1LLU;
	int64_t x730 = -243370913LL;
	int16_t x731 = INT16_MIN;
	static uint32_t x732 = UINT32_MAX;
	static volatile uint64_t t135 = 8030885LLU;

    t135 = ((x729%(x730&x731))^x732);

    if (t135 != 4294967294LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x733 = INT8_MIN;
	int8_t x735 = -5;
	uint8_t x736 = 29U;
	int32_t t136 = 188634;

    t136 = ((x733%(x734&x735))^x736);

    if (t136 != -99) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x737 = 7;
	uint8_t x738 = UINT8_MAX;
	volatile uint32_t x739 = 3394393U;
	volatile int32_t x740 = -1;
	volatile uint32_t t137 = 18623515U;

    t137 = ((x737%(x738&x739))^x740);

    if (t137 != 4294967288U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x741 = INT32_MAX;
	int8_t x742 = INT8_MAX;
	int32_t x743 = 3163;
	volatile int64_t t138 = 2860217LL;

    t138 = ((x741%(x742&x743))^x744);

    if (t138 != -1773556LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x745 = INT16_MIN;
	volatile int8_t x746 = -1;
	volatile int8_t x747 = -2;
	uint8_t x748 = 1U;
	volatile int32_t t139 = 1;

    t139 = ((x745%(x746&x747))^x748);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x761 = INT8_MIN;
	uint64_t x762 = 19302212695650LLU;
	uint32_t x763 = UINT32_MAX;
	uint16_t x764 = UINT16_MAX;
	volatile uint64_t t140 = 3796988LLU;

    t140 = ((x761%(x762&x763))^x764);

    if (t140 != 405878841LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x766 = 614663U;
	uint32_t x767 = 22U;

    t141 = ((x765%(x766&x767))^x768);

    if (t141 != 26988594U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x769 = -9991;
	uint8_t x770 = UINT8_MAX;
	uint8_t x771 = 1U;
	uint32_t x772 = 7094130U;

    t142 = ((x769%(x770&x771))^x772);

    if (t142 != 7094130U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x773 = -1;
	static int8_t x774 = 63;
	int64_t x775 = -1LL;
	uint32_t x776 = 1586543827U;
	static int64_t t143 = 231308802229LL;

    t143 = ((x773%(x774&x775))^x776);

    if (t143 != -1586543828LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x781 = 107U;
	volatile int8_t x783 = INT8_MIN;
	int16_t x784 = -283;

    t144 = ((x781%(x782&x783))^x784);

    if (t144 != 18446744073709551246LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x786 = UINT64_MAX;
	uint8_t x787 = 93U;
	uint64_t t145 = 21087601492683LLU;

    t145 = ((x785%(x786&x787))^x788);

    if (t145 != 6748124LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x789 = INT8_MIN;
	uint64_t x790 = 913563LLU;
	static uint64_t x791 = UINT64_MAX;
	volatile int16_t x792 = INT16_MAX;
	volatile uint64_t t146 = 16795210842LLU;

    t146 = ((x789%(x790&x791))^x792);

    if (t146 != 247254LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x793 = INT8_MIN;
	int64_t x794 = INT64_MAX;
	int32_t x796 = INT32_MAX;
	static int64_t t147 = 24991LL;

    t147 = ((x793%(x794&x795))^x796);

    if (t147 != -2147483521LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x797 = 23347646LLU;
	int32_t x798 = INT32_MIN;
	volatile int32_t x799 = INT32_MIN;
	uint8_t x800 = UINT8_MAX;
	uint64_t t148 = 404374000231163689LLU;

    t148 = ((x797%(x798&x799))^x800);

    if (t148 != 23347521LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x801 = UINT16_MAX;
	static int8_t x802 = -1;
	uint64_t x803 = UINT64_MAX;
	int16_t x804 = 0;

    t149 = ((x801%(x802&x803))^x804);

    if (t149 != 65535LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x805 = UINT32_MAX;
	volatile uint32_t x806 = 8342125U;
	int64_t x807 = -1252226300LL;
	uint16_t x808 = 10U;

    t150 = ((x805%(x806&x807))^x808);

    if (t150 != 271573LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x813 = 8808922676131LLU;
	uint32_t x814 = 179822U;
	static volatile uint8_t x815 = 19U;
	static volatile int16_t x816 = -1;
	uint64_t t151 = 5LLU;

    t151 = ((x813%(x814&x815))^x816);

    if (t151 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x817 = INT16_MAX;
	int64_t x819 = 147781460549931702LL;
	int32_t x820 = 2137;

    t152 = ((x817%(x818&x819))^x820);

    if (t152 != 30630LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x825 = -4587646;
	volatile uint32_t x826 = UINT32_MAX;
	uint32_t x827 = UINT32_MAX;
	static int16_t x828 = INT16_MIN;
	static volatile uint32_t t153 = 634533077U;

    t153 = ((x825%(x826&x827))^x828);

    if (t153 != 4620162U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x829 = 7828;
	static uint32_t x830 = 28U;
	static volatile int16_t x831 = INT16_MAX;
	int64_t x832 = -17011728867LL;

    t154 = ((x829%(x830&x831))^x832);

    if (t154 != -17011728883LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x833 = INT8_MAX;
	uint16_t x836 = 1U;
	volatile uint64_t t155 = 1231719043656LLU;

    t155 = ((x833%(x834&x835))^x836);

    if (t155 != 126LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x841 = INT64_MIN;
	volatile uint32_t x843 = UINT32_MAX;
	uint32_t x844 = 21890U;
	volatile uint64_t t156 = 275301941622204475LLU;

    t156 = ((x841%(x842&x843))^x844);

    if (t156 != 2147505538LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x846 = -1;
	volatile uint32_t x847 = UINT32_MAX;
	uint8_t x848 = 9U;

    t157 = ((x845%(x846&x847))^x848);

    if (t157 != 4294967177U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x850 = -2303137;
	int16_t x851 = INT16_MAX;
	int16_t x852 = -10;
	static int32_t t158 = 262314;

    t158 = ((x849%(x850&x851))^x852);

    if (t158 != -127) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x857 = UINT64_MAX;
	int32_t x858 = -1;
	uint16_t x859 = 160U;
	uint32_t x860 = 0U;
	volatile uint64_t t159 = 10452524822309LLU;

    t159 = ((x857%(x858&x859))^x860);

    if (t159 != 95LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x861 = -1;
	volatile int8_t x862 = -1;
	static int32_t x863 = 44005;
	static uint32_t x864 = UINT32_MAX;
	uint32_t t160 = 361U;

    t160 = ((x861%(x862&x863))^x864);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x865 = -1;
	volatile uint64_t x867 = UINT64_MAX;
	static int64_t x868 = -106996547LL;

    t161 = ((x865%(x866&x867))^x868);

    if (t161 != 18446744073602555071LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x869 = UINT8_MAX;
	int8_t x871 = 23;
	static int64_t x872 = INT64_MIN;
	volatile uint64_t t162 = 299924LLU;

    t162 = ((x869%(x870&x871))^x872);

    if (t162 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x873 = INT8_MIN;
	int32_t x874 = 43;
	int64_t x875 = -3580043LL;
	int32_t x876 = INT32_MIN;

    t163 = ((x873%(x874&x875))^x876);

    if (t163 != 2147483619LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x877 = INT8_MAX;
	int32_t x878 = INT32_MAX;
	int8_t x879 = -1;
	int64_t x880 = INT64_MIN;
	static volatile int64_t t164 = 0LL;

    t164 = ((x877%(x878&x879))^x880);

    if (t164 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x882 = INT64_MIN;
	int8_t x884 = 1;
	static volatile int64_t t165 = 883952435915991LL;

    t165 = ((x881%(x882&x883))^x884);

    if (t165 != 2LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x885 = INT32_MIN;
	int32_t x886 = INT32_MIN;
	volatile int8_t x887 = -11;
	int32_t x888 = INT32_MIN;
	static volatile int32_t t166 = INT32_MIN;

    t166 = ((x885%(x886&x887))^x888);

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x893 = INT32_MAX;
	int8_t x894 = INT8_MIN;
	uint64_t x895 = 935LLU;
	uint64_t x896 = 969LLU;
	volatile uint64_t t167 = 291879922828LLU;

    t167 = ((x893%(x894&x895))^x896);

    if (t167 != 950LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x897 = 70752264444511LLU;
	uint32_t x898 = 1713U;
	static volatile int16_t x900 = INT16_MIN;
	uint64_t t168 = 7709LLU;

    t168 = ((x897%(x898&x899))^x900);

    if (t168 != 18446744073709518855LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x901 = INT32_MIN;
	uint32_t x902 = 1104355950U;
	uint32_t x903 = UINT32_MAX;
	int32_t x904 = INT32_MIN;
	static uint32_t t169 = 115U;

    t169 = ((x901%(x902&x903))^x904);

    if (t169 != 3190611346U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x905 = INT64_MAX;
	uint64_t x906 = UINT64_MAX;
	volatile int32_t x907 = INT32_MAX;
	int32_t x908 = INT32_MAX;
	volatile uint64_t t170 = 162LLU;

    t170 = ((x905%(x906&x907))^x908);

    if (t170 != 2147483646LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x910 = -1;
	int16_t x911 = INT16_MIN;
	static int32_t t171 = 14052;

    t171 = ((x909%(x910&x911))^x912);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x914 = -925290810496LL;
	int16_t x916 = -1;
	int64_t t172 = 1LL;

    t172 = ((x913%(x914&x915))^x916);

    if (t172 != -65536LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x917 = INT32_MIN;
	int32_t x918 = 727373384;
	int16_t x919 = -58;
	static int64_t x920 = -2256180051618230389LL;
	volatile int64_t t173 = -2463160484LL;

    t173 = ((x917%(x918&x919))^x920);

    if (t173 != 2256180052042228491LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x924 = 79767U;
	uint32_t t174 = 53U;

    t174 = ((x921%(x922&x923))^x924);

    if (t174 != 79767U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x925 = INT32_MIN;
	static uint32_t x926 = 498230U;
	static uint8_t x927 = UINT8_MAX;
	int64_t x928 = INT64_MIN;
	int64_t t175 = 49321035LL;

    t175 = ((x925%(x926&x927))^x928);

    if (t175 != -9223372036854775770LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x933 = INT32_MAX;
	uint64_t x934 = 127502LLU;
	int8_t x935 = INT8_MIN;
	int16_t x936 = 0;
	volatile uint64_t t176 = 7010843943LLU;

    t176 = ((x933%(x934&x935))^x936);

    if (t176 != 75775LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x938 = INT16_MIN;
	uint32_t x939 = 23611455U;
	int8_t x940 = INT8_MIN;
	static uint32_t t177 = 1U;

    t177 = ((x937%(x938&x939))^x940);

    if (t177 != 4293918847U) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x941 = 682U;
	int64_t x944 = -1LL;

    t178 = ((x941%(x942&x943))^x944);

    if (t178 != -3LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x945 = UINT64_MAX;
	volatile int64_t x946 = INT64_MAX;
	volatile uint64_t x947 = UINT64_MAX;
	uint32_t x948 = UINT32_MAX;
	uint64_t t179 = 48681996288270LLU;

    t179 = ((x945%(x946&x947))^x948);

    if (t179 != 4294967294LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x954 = -1;
	uint64_t x956 = 0LLU;
	uint64_t t180 = 1418424LLU;

    t180 = ((x953%(x954&x955))^x956);

    if (t180 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x961 = INT8_MAX;
	volatile uint32_t x962 = 7U;
	int16_t x963 = INT16_MAX;
	int16_t x964 = INT16_MIN;
	uint32_t t181 = 1U;

    t181 = ((x961%(x962&x963))^x964);

    if (t181 != 4294934529U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x966 = INT16_MIN;
	int16_t x968 = INT16_MAX;
	volatile int32_t t182 = -1;

    t182 = ((x965%(x966&x967))^x968);

    if (t182 != -32641) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x969 = -402353663LL;
	int8_t x970 = 29;
	uint8_t x971 = 1U;
	volatile int64_t t183 = -3102326719005883LL;

    t183 = ((x969%(x970&x971))^x972);

    if (t183 != -32768LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x973 = 920U;
	volatile int8_t x974 = 1;
	int64_t x975 = -1LL;
	static volatile int16_t x976 = 3;
	static volatile int64_t t184 = -24LL;

    t184 = ((x973%(x974&x975))^x976);

    if (t184 != 3LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x977 = 7U;
	static int16_t x978 = INT16_MAX;
	volatile int16_t x980 = -1;
	int32_t t185 = 21039213;

    t185 = ((x977%(x978&x979))^x980);

    if (t185 != -8) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x985 = UINT8_MAX;
	static int32_t x986 = INT32_MIN;
	int8_t x987 = INT8_MIN;
	int32_t x988 = -1;

    t186 = ((x985%(x986&x987))^x988);

    if (t186 != -256) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x989 = -1;
	int64_t x990 = -1LL;
	uint16_t x991 = UINT16_MAX;
	int8_t x992 = 1;
	volatile int64_t t187 = -4225109395LL;

    t187 = ((x989%(x990&x991))^x992);

    if (t187 != -2LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x993 = 137U;
	uint32_t x994 = UINT32_MAX;

    t188 = ((x993%(x994&x995))^x996);

    if (t188 != 9223372036854775670LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x998 = UINT64_MAX;
	static int16_t x999 = 13;
	int64_t x1000 = -137LL;
	volatile uint64_t t189 = 1719463089646LLU;

    t189 = ((x997%(x998&x999))^x1000);

    if (t189 != 18446744073709551475LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1001 = 22;
	int32_t x1004 = INT32_MIN;
	volatile uint32_t t190 = 254833U;

    t190 = ((x1001%(x1002&x1003))^x1004);

    if (t190 != 2147483670U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1005 = -23;
	uint64_t x1006 = UINT64_MAX;
	int8_t x1007 = -1;
	uint32_t x1008 = 168522769U;
	static volatile uint64_t t191 = 31898708861LLU;

    t191 = ((x1005%(x1006&x1007))^x1008);

    if (t191 != 18446744073541028856LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x1009 = INT32_MIN;
	int64_t x1010 = INT64_MAX;
	uint64_t x1011 = UINT64_MAX;
	static int32_t x1012 = -3920010;
	volatile uint64_t t192 = 56LLU;

    t192 = ((x1009%(x1010&x1011))^x1012);

    if (t192 != 9223372038998339447LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x1013 = INT64_MIN;
	static int32_t x1014 = INT32_MIN;
	int8_t x1015 = -32;
	int32_t x1016 = INT32_MIN;
	volatile int64_t t193 = -7527077856LL;

    t193 = ((x1013%(x1014&x1015))^x1016);

    if (t193 != -2147483648LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x1017 = 4366508U;
	static int8_t x1018 = -1;
	int64_t x1019 = -1LL;
	static uint32_t x1020 = UINT32_MAX;
	int64_t t194 = 2578870028LL;

    t194 = ((x1017%(x1018&x1019))^x1020);

    if (t194 != 4294967295LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x1021 = 5U;
	int16_t x1022 = INT16_MIN;
	volatile uint64_t x1023 = 141069230LLU;
	uint64_t x1024 = 294LLU;

    t195 = ((x1021%(x1022&x1023))^x1024);

    if (t195 != 291LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1025 = 2351;
	int64_t x1026 = -1LL;
	uint8_t x1027 = UINT8_MAX;
	static int32_t x1028 = INT32_MAX;
	int64_t t196 = 33038526LL;

    t196 = ((x1025%(x1026&x1027))^x1028);

    if (t196 != 2147483591LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1029 = -1LL;
	int8_t x1030 = INT8_MIN;
	volatile int32_t x1031 = INT32_MIN;
	uint8_t x1032 = UINT8_MAX;
	static volatile int64_t t197 = 205247LL;

    t197 = ((x1029%(x1030&x1031))^x1032);

    if (t197 != -256LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1037 = 7;
	int16_t x1039 = INT16_MAX;

    t198 = ((x1037%(x1038&x1039))^x1040);

    if (t198 != 6LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1041 = -45691LL;
	static int8_t x1042 = -1;
	int64_t x1043 = INT64_MIN;
	int32_t x1044 = INT32_MIN;
	static int64_t t199 = 21081LL;

    t199 = ((x1041%(x1042&x1043))^x1044);

    if (t199 != 2147437957LL) { NG(); } else { ; }
	
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

