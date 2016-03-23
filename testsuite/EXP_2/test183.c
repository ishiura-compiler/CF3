
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

static int64_t x8 = INT64_MIN;
int32_t x9 = -1;
volatile int64_t x14 = INT64_MIN;
int64_t t9 = -10464187LL;
volatile int64_t x61 = INT64_MAX;
int64_t t13 = -16LL;
uint16_t x73 = 3591U;
int8_t x83 = -38;
int64_t t16 = -18956439LL;
volatile int64_t t17 = -512883517644510LL;
volatile int64_t x90 = INT64_MAX;
int64_t x97 = -16568733968LL;
static int32_t x99 = -299193376;
uint8_t x101 = UINT8_MAX;
static int64_t x109 = INT64_MAX;
static volatile uint32_t x127 = 29U;
volatile int64_t t25 = 62302101451348LL;
int8_t x134 = -5;
int64_t x149 = -1LL;
volatile int32_t x157 = INT32_MIN;
uint16_t x168 = UINT16_MAX;
volatile int32_t t31 = -434320418;
static int64_t t32 = 464904LL;
int16_t x175 = -14;
static int64_t x181 = -2961287915LL;
int16_t x183 = 1;
int8_t x190 = -1;
volatile int8_t x194 = 0;
volatile uint64_t t38 = 1904584822109LLU;
static volatile int16_t x222 = INT16_MIN;
int8_t x225 = -1;
int32_t x227 = -1;
int64_t x234 = -1LL;
int16_t x236 = -1;
uint8_t x240 = UINT8_MAX;
volatile uint16_t x247 = 3089U;
int8_t x248 = -1;
uint64_t x259 = 2LLU;
uint64_t x262 = 31844440184985308LLU;
int16_t x264 = INT16_MAX;
uint64_t t50 = 34773255LLU;
static volatile int16_t x267 = -1;
int32_t x278 = -89086;
volatile uint64_t x284 = 41896589080LLU;
volatile uint32_t t54 = 129273527U;
int16_t x302 = -1;
int64_t x304 = INT64_MIN;
volatile int8_t x306 = INT8_MIN;
int64_t x309 = -1LL;
uint8_t x312 = UINT8_MAX;
uint64_t x317 = 158181499362395LLU;
uint8_t x319 = 50U;
int32_t x320 = INT32_MAX;
volatile uint64_t t60 = 2LLU;
int64_t x322 = -1LL;
static uint16_t x326 = UINT16_MAX;
uint64_t t62 = 1156004961003398076LLU;
int16_t x335 = INT16_MIN;
uint16_t x346 = UINT16_MAX;
volatile uint32_t x347 = 13U;
int64_t t67 = -15910334782170LL;
volatile int32_t t70 = -159;
int8_t x379 = INT8_MAX;
static volatile int64_t x380 = 33LL;
static int8_t x384 = INT8_MAX;
static volatile int64_t t74 = -1755940901889LL;
static uint8_t x401 = UINT8_MAX;
volatile uint32_t t75 = 1744U;
volatile uint32_t t76 = 151U;
int16_t x411 = -6278;
static int32_t x413 = -333922;
static int32_t x416 = -11382334;
volatile int64_t t78 = -381LL;
int8_t x426 = INT8_MIN;
volatile int16_t x432 = INT16_MAX;
uint64_t t82 = 19582LLU;
int8_t x441 = 0;
volatile uint32_t x443 = 13704U;
uint32_t t83 = 391U;
int32_t x465 = -1;
int16_t x467 = INT16_MAX;
uint64_t x468 = 32562077051LLU;
int8_t x470 = INT8_MIN;
int16_t x494 = -1;
int8_t x498 = INT8_MIN;
int64_t x504 = 5383871041LL;
uint16_t x515 = 631U;
uint8_t x516 = 5U;
int32_t x517 = -1;
uint64_t t98 = 755568569336805117LLU;
static volatile uint64_t x521 = UINT64_MAX;
uint16_t x525 = 21977U;
int32_t x529 = -1;
volatile int32_t x533 = 570109;
static int8_t x535 = -25;
volatile int64_t t102 = 140739033LL;
int32_t x537 = INT32_MIN;
volatile int8_t x539 = INT8_MIN;
int32_t t103 = 4146;
static volatile uint64_t x543 = 365586626413052982LLU;
int16_t x548 = INT16_MIN;
uint64_t x549 = UINT64_MAX;
static uint16_t x550 = 290U;
static volatile int8_t x562 = -1;
int64_t x564 = INT64_MIN;
static int64_t x567 = -1LL;
static volatile int32_t x568 = INT32_MIN;
uint8_t x569 = 118U;
uint64_t x571 = 60926454666898049LLU;
uint64_t t115 = 438LLU;
volatile uint32_t x603 = 54U;
int8_t x606 = -1;
static uint32_t x612 = 27U;
volatile int8_t x622 = INT8_MAX;
int64_t t123 = 1897521957887LL;
static int64_t x628 = INT64_MIN;
uint32_t t125 = 13U;
volatile uint64_t t126 = 113838668148708958LLU;
static int16_t x659 = -1;
int64_t t130 = 871LL;
int64_t x668 = -4498LL;
int64_t t132 = 1121579045996060LL;
static uint32_t x679 = 110U;
uint32_t x697 = UINT32_MAX;
int32_t x718 = 3;
static int8_t x720 = 5;
volatile int16_t x725 = INT16_MIN;
int16_t x726 = INT16_MIN;
int16_t x727 = 23;
static uint16_t x728 = UINT16_MAX;
int64_t x729 = 202309334621828LL;
int32_t x740 = -236;
int64_t x741 = -1LL;
uint32_t x743 = UINT32_MAX;
uint32_t x744 = 702094949U;
static int8_t x768 = -1;
int8_t x772 = INT8_MIN;
int64_t x774 = -1LL;
int32_t x781 = INT32_MIN;
uint16_t x782 = 5877U;
int32_t x783 = -1;
volatile int32_t t153 = 165;
int64_t x794 = 1368334157714LL;
int64_t x795 = INT64_MIN;
static int32_t x799 = 97;
volatile int64_t t160 = -20244987429566354LL;
uint16_t x817 = UINT16_MAX;
int64_t x826 = 469971129165LL;
uint64_t x827 = UINT64_MAX;
volatile uint64_t t163 = 51445516844LLU;
int32_t x835 = 514385;
int32_t x838 = INT32_MIN;
uint64_t x844 = UINT64_MAX;
static volatile uint64_t t166 = 31661668247815LLU;
volatile uint8_t x856 = 28U;
uint8_t x857 = 1U;
uint64_t x862 = UINT64_MAX;
int32_t x863 = 2258176;
int16_t x870 = 3;
int16_t x876 = -9059;
int32_t t172 = 142476413;
int64_t x883 = -470367553410389LL;
uint64_t x884 = UINT64_MAX;
volatile int32_t t174 = 30371;
uint8_t x891 = 0U;
uint8_t x892 = 9U;
int64_t t176 = 2084756360525529LL;
int64_t x903 = 279903800312180621LL;
int8_t x904 = -1;
static volatile int8_t x906 = INT8_MIN;
int8_t x907 = -2;
volatile int8_t x915 = -19;
uint32_t t181 = 963352U;
static uint64_t t182 = 46LLU;
static int8_t x927 = -1;
uint8_t x928 = 11U;
uint8_t x930 = UINT8_MAX;
int64_t x931 = -1LL;
volatile uint16_t x939 = 26559U;
uint64_t t186 = 3228764LLU;
int16_t x953 = -1;
int16_t x958 = INT16_MIN;
int8_t x962 = INT8_MIN;
int8_t x977 = INT8_MIN;
uint8_t x992 = UINT8_MAX;
static volatile int32_t x995 = INT32_MAX;
int8_t x999 = -1;
uint8_t x1003 = UINT8_MAX;
static int64_t x1009 = INT64_MAX;


void f0(void) {
    	static uint32_t x5 = 35U;
	int32_t x6 = INT32_MIN;
	uint16_t x7 = UINT16_MAX;
	volatile int64_t t0 = 7562515LL;

    t0 = ((x5^(x6+x7))+x8);

    if (t0 != -9223372034707226660LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x10 = UINT8_MAX;
	static int8_t x11 = -1;
	int8_t x12 = INT8_MIN;
	int32_t t1 = 60;

    t1 = ((x9^(x10+x11))+x12);

    if (t1 != -383) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x13 = INT8_MIN;
	volatile int16_t x15 = 43;
	int16_t x16 = 49;
	volatile int64_t t2 = -194627LL;

    t2 = ((x13^(x14+x15))+x16);

    if (t2 != 9223372036854775772LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = 447U;
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 38898803U;
	static uint32_t x20 = 3321U;
	volatile uint32_t t3 = 915U;

    t3 = ((x17^(x18+x19))+x20);

    if (t3 != 2186386117U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = INT8_MIN;
	uint32_t x26 = 15706893U;
	int8_t x27 = -1;
	static volatile int8_t x28 = -1;
	uint32_t t4 = 1303U;

    t4 = ((x25^(x26+x27))+x28);

    if (t4 != 4279260299U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = -50;
	int32_t x30 = INT32_MIN;
	static volatile int64_t x31 = -3736327447875958154LL;
	int32_t x32 = 8;
	volatile int64_t t5 = -29LL;

    t5 = ((x29^(x30+x31))+x32);

    if (t5 != 3736327450023441856LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x33 = -1;
	int32_t x34 = INT32_MIN;
	uint64_t x35 = 275745155046123LLU;
	static uint64_t x36 = 1869980LLU;
	static uint64_t t6 = 427131LLU;

    t6 = ((x33^(x34+x35))+x36);

    if (t6 != 18446468330703859120LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = INT32_MIN;
	int64_t x38 = -1LL;
	uint64_t x39 = 937120LLU;
	int16_t x40 = -1;
	static uint64_t t7 = 0LLU;

    t7 = ((x37^(x38+x39))+x40);

    if (t7 != 18446744071563005086LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = INT32_MAX;
	int8_t x42 = INT8_MIN;
	volatile int16_t x43 = INT16_MIN;
	uint8_t x44 = 1U;
	static volatile int32_t t8 = 5;

    t8 = ((x41^(x42+x43))+x44);

    if (t8 != -2147450752) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x45 = 30723458541428LL;
	volatile int8_t x46 = -1;
	int16_t x47 = -1;
	uint16_t x48 = 27954U;

    t9 = ((x45^(x46+x47))+x48);

    if (t9 != -30723458513476LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x49 = 8994LLU;
	uint32_t x50 = 118U;
	uint16_t x51 = UINT16_MAX;
	static volatile int64_t x52 = INT64_MAX;
	volatile uint64_t t10 = 12588LLU;

    t10 = ((x49^(x50+x51))+x52);

    if (t10 != 9223372036854850390LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = -1;
	volatile int16_t x54 = INT16_MIN;
	int64_t x55 = -1LL;
	volatile int64_t x56 = INT64_MIN;
	int64_t t11 = 79217844708302201LL;

    t11 = ((x53^(x54+x55))+x56);

    if (t11 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = INT32_MAX;
	volatile int16_t x58 = INT16_MIN;
	int64_t x59 = -16268652LL;
	static int32_t x60 = INT32_MIN;
	int64_t t12 = -294477698602494922LL;

    t12 = ((x57^(x58+x59))+x60);

    if (t12 != -4278665877LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	static int16_t x64 = INT16_MIN;

    t13 = ((x61^(x62+x63))+x64);

    if (t13 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x65 = INT64_MIN;
	int32_t x66 = INT32_MIN;
	uint8_t x67 = UINT8_MAX;
	int32_t x68 = 2268938;
	volatile int64_t t14 = -377877205736578310LL;

    t14 = ((x65^(x66+x67))+x68);

    if (t14 != 9223372034709561353LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x74 = UINT32_MAX;
	static volatile int32_t x75 = INT32_MAX;
	int8_t x76 = 0;
	static volatile uint32_t t15 = 5U;

    t15 = ((x73^(x74+x75))+x76);

    if (t15 != 2147480057U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x81 = INT32_MIN;
	int64_t x82 = -44251037010210LL;
	int32_t x84 = -52453812;

    t16 = ((x81^(x82+x83))+x84);

    if (t16 != 44248859153668LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = 0LL;
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = -1;
	volatile uint16_t x88 = 74U;

    t17 = ((x85^(x86+x87))+x88);

    if (t17 != 4294967368LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 6662U;
	static volatile int8_t x91 = -1;
	static int16_t x92 = -11;
	volatile int64_t t18 = 215416348LL;

    t18 = ((x89^(x90+x91))+x92);

    if (t18 != 9223372036854769133LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x98 = 2403309340LL;
	static uint64_t x100 = 119085315448517LLU;
	volatile uint64_t t19 = 1118353350832LLU;

    t19 = ((x97^(x98+x99))+x100);

    if (t19 != 119069629237969LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x102 = UINT32_MAX;
	int16_t x103 = 240;
	static volatile uint16_t x104 = UINT16_MAX;
	uint32_t t20 = 101203912U;

    t20 = ((x101^(x102+x103))+x104);

    if (t20 != 65551U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x110 = INT64_MIN;
	uint8_t x111 = UINT8_MAX;
	static int8_t x112 = 1;
	volatile int64_t t21 = 170472174131LL;

    t21 = ((x109^(x110+x111))+x112);

    if (t21 != -255LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x113 = 222392934LL;
	int8_t x114 = INT8_MAX;
	uint8_t x115 = UINT8_MAX;
	uint64_t x116 = UINT64_MAX;
	static uint64_t t22 = 434581LLU;

    t22 = ((x113^(x114+x115))+x116);

    if (t22 != 222393111LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x121 = 7LLU;
	int64_t x122 = -1LL;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = INT16_MAX;
	static volatile uint64_t t23 = 61775100731LLU;

    t23 = ((x121^(x122+x123))+x124);

    if (t23 != 32760LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x125 = 416682U;
	uint16_t x126 = 0U;
	static int32_t x128 = INT32_MIN;
	volatile uint32_t t24 = 149U;

    t24 = ((x125^(x126+x127))+x128);

    if (t24 != 2147900343U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x129 = 100121559U;
	static int64_t x130 = INT64_MIN;
	uint8_t x131 = 34U;
	uint16_t x132 = 1926U;

    t25 = ((x129^(x130+x131))+x132);

    if (t25 != -9223372036754652293LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x133 = INT32_MAX;
	int16_t x135 = -1;
	uint32_t x136 = 0U;
	volatile uint32_t t26 = 14U;

    t26 = ((x133^(x134+x135))+x136);

    if (t26 != 2147483653U) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x141 = -32;
	uint64_t x142 = 39409458875LLU;
	uint32_t x143 = UINT32_MAX;
	int64_t x144 = -1LL;
	volatile uint64_t t27 = 9862905148715767LLU;

    t27 = ((x141^(x142+x143))+x144);

    if (t27 != 18446744030005125465LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MIN;
	volatile int32_t x152 = -72688927;
	volatile int64_t t28 = 122LL;

    t28 = ((x149^(x150+x151))+x152);

    if (t28 != -72721567LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x158 = -125149546413734LL;
	uint8_t x159 = UINT8_MAX;
	volatile uint64_t x160 = 6012LLU;
	volatile uint64_t t29 = 10244397473383540LLU;

    t29 = ((x157^(x158+x159))+x160);

    if (t29 != 125150410185173LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x161 = -1;
	static int16_t x162 = INT16_MAX;
	int64_t x163 = 74212616698LL;
	int8_t x164 = -44;
	volatile int64_t t30 = -1220450480LL;

    t30 = ((x161^(x162+x163))+x164);

    if (t30 != -74212649510LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x165 = INT16_MIN;
	int8_t x166 = -1;
	int16_t x167 = 833;

    t31 = ((x165^(x166+x167))+x168);

    if (t31 != 33599) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x169 = 5;
	static int64_t x170 = 1835LL;
	uint8_t x171 = 3U;
	static int8_t x172 = -1;

    t32 = ((x169^(x170+x171))+x172);

    if (t32 != 1834LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x173 = 598U;
	uint8_t x174 = 3U;
	volatile int8_t x176 = 1;
	int32_t t33 = 434;

    t33 = ((x173^(x174+x175))+x176);

    if (t33 != -604) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x177 = -975;
	uint32_t x178 = 3308U;
	uint32_t x179 = UINT32_MAX;
	volatile int8_t x180 = -1;
	uint32_t t34 = 11U;

    t34 = ((x177^(x178+x179))+x180);

    if (t34 != 4294963417U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x182 = UINT64_MAX;
	volatile int8_t x184 = 0;
	static volatile uint64_t t35 = 1778LLU;

    t35 = ((x181^(x182+x183))+x184);

    if (t35 != 18446744070748263701LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x189 = INT32_MAX;
	static uint16_t x191 = UINT16_MAX;
	volatile int64_t x192 = INT64_MIN;
	volatile int64_t t36 = 6867LL;

    t36 = ((x189^(x190+x191))+x192);

    if (t36 != -9223372034707357695LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x193 = 6869U;
	int64_t x195 = 377LL;
	int16_t x196 = INT16_MIN;
	static volatile int64_t t37 = 123647272457LL;

    t37 = ((x193^(x194+x195))+x196);

    if (t37 != -25684LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x197 = -1776;
	uint16_t x198 = 2U;
	uint8_t x199 = 38U;
	uint64_t x200 = UINT64_MAX;

    t38 = ((x197^(x198+x199))+x200);

    if (t38 != 18446744073709549879LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x205 = INT16_MIN;
	static volatile int8_t x206 = 12;
	uint16_t x207 = UINT16_MAX;
	uint32_t x208 = 20682U;
	volatile uint32_t t39 = 162U;

    t39 = ((x205^(x206+x207))+x208);

    if (t39 != 4294889685U) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint16_t x217 = UINT16_MAX;
	static volatile int32_t x218 = -1400;
	int16_t x219 = -48;
	uint16_t x220 = 31U;
	volatile int32_t t40 = -296;

    t40 = ((x217^(x218+x219))+x220);

    if (t40 != -64058) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x221 = -1;
	uint16_t x223 = 5U;
	uint8_t x224 = 0U;
	int32_t t41 = 5467;

    t41 = ((x221^(x222+x223))+x224);

    if (t41 != 32762) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x226 = INT16_MAX;
	int8_t x228 = 0;
	int32_t t42 = 14350293;

    t42 = ((x225^(x226+x227))+x228);

    if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x233 = 5027276LLU;
	volatile int64_t x235 = -1LL;
	uint64_t t43 = 256876403LLU;

    t43 = ((x233^(x234+x235))+x236);

    if (t43 != 18446744073704524337LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x237 = 1565;
	uint16_t x238 = 2U;
	int64_t x239 = -6653LL;
	volatile int64_t t44 = -1095632603569335LL;

    t44 = ((x237^(x238+x239))+x240);

    if (t44 != -7913LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x241 = INT16_MIN;
	volatile int32_t x242 = INT32_MIN;
	uint32_t x243 = UINT32_MAX;
	static volatile int32_t x244 = INT32_MIN;
	volatile uint32_t t45 = 3U;

    t45 = ((x241^(x242+x243))+x244);

    if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x245 = INT16_MIN;
	static volatile int32_t x246 = INT32_MIN;
	int32_t t46 = 2591642;

    t46 = ((x245^(x246+x247))+x248);

    if (t46 != 2147453968) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x249 = -1;
	int16_t x250 = -1;
	int64_t x251 = -395004986988177657LL;
	int32_t x252 = -1;
	volatile int64_t t47 = -305593388751LL;

    t47 = ((x249^(x250+x251))+x252);

    if (t47 != 395004986988177656LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x253 = -1;
	uint8_t x254 = 9U;
	int64_t x255 = -2550747996294858LL;
	uint64_t x256 = 28504LLU;
	volatile uint64_t t48 = 2579576165369LLU;

    t48 = ((x253^(x254+x255))+x256);

    if (t48 != 2550747996323352LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x257 = UINT64_MAX;
	uint32_t x258 = 58U;
	volatile uint64_t x260 = UINT64_MAX;
	volatile uint64_t t49 = 336093315806424040LLU;

    t49 = ((x257^(x258+x259))+x260);

    if (t49 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x261 = UINT64_MAX;
	int16_t x263 = -31;

    t50 = ((x261^(x262+x263))+x264);

    if (t50 != 18414899633524599105LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x265 = UINT32_MAX;
	uint64_t x266 = UINT64_MAX;
	int64_t x268 = -541186249643050LL;
	volatile uint64_t t51 = 52294974368LLU;

    t51 = ((x265^(x266+x267))+x268);

    if (t51 != 18446202883164941271LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x277 = INT32_MIN;
	int64_t x279 = -2095459960LL;
	volatile int32_t x280 = INT32_MIN;
	int64_t t52 = -119444188558384176LL;

    t52 = ((x277^(x278+x279))+x280);

    if (t52 != -2095549046LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x281 = -1LL;
	uint32_t x282 = 3U;
	int16_t x283 = -1;
	uint64_t t53 = 15LLU;

    t53 = ((x281^(x282+x283))+x284);

    if (t53 != 41896589077LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x285 = INT8_MIN;
	int16_t x286 = -33;
	uint32_t x287 = 95U;
	int16_t x288 = -34;

    t54 = ((x285^(x286+x287))+x288);

    if (t54 != 4294967196U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x289 = UINT32_MAX;
	static int8_t x290 = INT8_MIN;
	static int16_t x291 = -12;
	int64_t x292 = -1LL;
	volatile int64_t t55 = 378144LL;

    t55 = ((x289^(x290+x291))+x292);

    if (t55 != 138LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint64_t x301 = 46283363134588LLU;
	uint16_t x303 = 98U;
	volatile uint64_t t56 = 448079LLU;

    t56 = ((x301^(x302+x303))+x304);

    if (t56 != 9223418320217910301LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x305 = 24734893006018741LL;
	uint16_t x307 = 4058U;
	volatile int32_t x308 = -96600;
	int64_t t57 = -23LL;

    t57 = ((x305^(x306+x307))+x308);

    if (t57 != 24734893005921943LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x310 = 29289354U;
	static uint64_t x311 = UINT64_MAX;
	uint64_t t58 = 1611860867509098062LLU;

    t58 = ((x309^(x310+x311))+x312);

    if (t58 != 18446744073680262517LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MAX;
	int8_t x315 = -2;
	int32_t x316 = -2100;
	static volatile int64_t t59 = 147LL;

    t59 = ((x313^(x314+x315))+x316);

    if (t59 != -9223372034707294263LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x318 = INT16_MIN;

    t60 = ((x317^(x318+x319))+x320);

    if (t60 != 18446585894357687400LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x321 = INT16_MAX;
	static volatile uint32_t x323 = UINT32_MAX;
	static volatile int8_t x324 = -1;
	static volatile int64_t t61 = 85LL;

    t61 = ((x321^(x322+x323))+x324);

    if (t61 != 4294934528LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x325 = UINT64_MAX;
	volatile int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;

    t62 = ((x325^(x326+x327))+x328);

    if (t62 != 18446744071562002560LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x329 = INT16_MIN;
	static uint32_t x330 = 10332U;
	int16_t x331 = INT16_MAX;
	volatile int32_t x332 = INT32_MIN;
	volatile uint32_t t63 = 128443217U;

    t63 = ((x329^(x330+x331))+x332);

    if (t63 != 2147428443U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x333 = -5;
	volatile int16_t x334 = -1;
	uint64_t x336 = 4606158LLU;
	static volatile uint64_t t64 = 200LLU;

    t64 = ((x333^(x334+x335))+x336);

    if (t64 != 4638930LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x345 = 1371;
	int8_t x348 = INT8_MAX;
	static volatile uint32_t t65 = 7U;

    t65 = ((x345^(x346+x347))+x348);

    if (t65 != 67030U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x349 = 25;
	uint64_t x350 = 1436897042LLU;
	uint64_t x351 = 21287721640953LLU;
	static uint32_t x352 = 2U;
	static volatile uint64_t t66 = 675154LLU;

    t66 = ((x349^(x350+x351))+x352);

    if (t66 != 21289158538004LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x357 = INT16_MIN;
	int64_t x358 = INT64_MAX;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = UINT32_MAX;

    t67 = ((x357^(x358+x359))+x360);

    if (t67 != 4295000062LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x365 = -916;
	volatile uint16_t x366 = 11889U;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = 0;
	uint64_t t68 = 15392LLU;

    t68 = ((x365^(x366+x367))+x368);

    if (t68 != 18446744073709539868LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x369 = INT32_MIN;
	static uint8_t x370 = 117U;
	int32_t x371 = -55;
	uint16_t x372 = 2121U;
	volatile int32_t t69 = 4;

    t69 = ((x369^(x370+x371))+x372);

    if (t69 != -2147481465) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint16_t x373 = UINT16_MAX;
	uint16_t x374 = UINT16_MAX;
	int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MAX;

    t70 = ((x373^(x374+x375))+x376);

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x377 = INT8_MIN;
	int64_t x378 = -1LL;
	volatile int64_t t71 = 6233533LL;

    t71 = ((x377^(x378+x379))+x380);

    if (t71 != 31LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x381 = -29024761754LL;
	uint16_t x382 = UINT16_MAX;
	int8_t x383 = 0;
	volatile int64_t t72 = -1LL;

    t72 = ((x381^(x382+x383))+x384);

    if (t72 != -29024733160LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x385 = INT8_MIN;
	static uint32_t x386 = 535168U;
	uint8_t x387 = UINT8_MAX;
	int64_t x388 = 7LL;
	volatile int64_t t73 = 84484249LL;

    t73 = ((x385^(x386+x387))+x388);

    if (t73 != 4294432006LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x393 = INT32_MIN;
	int32_t x394 = -1;
	int16_t x395 = 0;
	int64_t x396 = -1LL;

    t74 = ((x393^(x394+x395))+x396);

    if (t74 != 2147483646LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x402 = 180U;
	static int16_t x403 = -159;
	volatile int8_t x404 = INT8_MIN;

    t75 = ((x401^(x402+x403))+x404);

    if (t75 != 106U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x405 = INT16_MIN;
	volatile uint32_t x406 = UINT32_MAX;
	uint32_t x407 = 168U;
	static volatile int32_t x408 = 678589;

    t76 = ((x405^(x406+x407))+x408);

    if (t76 != 645988U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x409 = INT8_MIN;
	uint8_t x410 = 0U;
	static volatile int8_t x412 = -13;
	static volatile int32_t t77 = -12235783;

    t77 = ((x409^(x410+x411))+x412);

    if (t77 != 6381) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x414 = INT64_MIN;
	uint32_t x415 = 3U;

    t78 = ((x413^(x414+x415))+x416);

    if (t78 != 9223372036843059551LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x425 = INT16_MIN;
	volatile int64_t x427 = 291321919918546328LL;
	int32_t x428 = INT32_MAX;
	volatile int64_t t79 = 14236LL;

    t79 = ((x425^(x426+x427))+x428);

    if (t79 != -291321917771080425LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x429 = INT64_MIN;
	static volatile uint64_t x430 = 838553169126311117LLU;
	int8_t x431 = INT8_MAX;
	volatile uint64_t t80 = 4772022774347070LLU;

    t80 = ((x429^(x430+x431))+x432);

    if (t80 != 10061925205981119819LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x433 = UINT32_MAX;
	int8_t x434 = INT8_MIN;
	uint64_t x435 = UINT64_MAX;
	uint8_t x436 = 69U;
	static uint64_t t81 = 474LLU;

    t81 = ((x433^(x434+x435))+x436);

    if (t81 != 18446744069414584517LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x437 = INT8_MAX;
	volatile int16_t x438 = -1;
	static uint64_t x439 = 65LLU;
	uint64_t x440 = 27LLU;

    t82 = ((x437^(x438+x439))+x440);

    if (t82 != 90LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x442 = INT32_MIN;
	uint16_t x444 = 35U;

    t83 = ((x441^(x442+x443))+x444);

    if (t83 != 2147497387U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x449 = UINT32_MAX;
	static int8_t x450 = INT8_MIN;
	volatile uint8_t x451 = 7U;
	uint32_t x452 = 127287989U;
	static uint32_t t84 = 23U;

    t84 = ((x449^(x450+x451))+x452);

    if (t84 != 127288109U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x453 = -1LL;
	uint64_t x454 = 3LLU;
	static uint8_t x455 = 60U;
	volatile int8_t x456 = 1;
	uint64_t t85 = 6766749LLU;

    t85 = ((x453^(x454+x455))+x456);

    if (t85 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x457 = -1;
	uint64_t x458 = UINT64_MAX;
	int16_t x459 = INT16_MIN;
	int64_t x460 = 3LL;
	volatile uint64_t t86 = 167085222191264157LLU;

    t86 = ((x457^(x458+x459))+x460);

    if (t86 != 32771LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x461 = 460U;
	int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MIN;
	static uint64_t x464 = UINT64_MAX;
	volatile uint64_t t87 = 655LLU;

    t87 = ((x461^(x462+x463))+x464);

    if (t87 != 18446744073709518411LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x466 = INT16_MIN;
	static volatile uint64_t t88 = 7425LLU;

    t88 = ((x465^(x466+x467))+x468);

    if (t88 != 32562077051LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x469 = INT8_MAX;
	static int8_t x471 = -1;
	int32_t x472 = INT32_MAX;
	int32_t t89 = 5;

    t89 = ((x469^(x470+x471))+x472);

    if (t89 != 2147483391) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x473 = -1LL;
	static uint8_t x474 = UINT8_MAX;
	static volatile uint8_t x475 = 0U;
	volatile uint16_t x476 = UINT16_MAX;
	volatile int64_t t90 = -34450919LL;

    t90 = ((x473^(x474+x475))+x476);

    if (t90 != 65279LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x477 = 23;
	volatile int16_t x478 = INT16_MIN;
	uint32_t x479 = 116426000U;
	uint64_t x480 = 24964LLU;
	uint64_t t91 = 950847LLU;

    t91 = ((x477^(x478+x479))+x480);

    if (t91 != 116418187LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x485 = -64230;
	volatile int64_t x486 = 170328766625129LL;
	static int64_t x487 = -92333605970LL;
	static int64_t x488 = INT64_MAX;
	volatile int64_t t92 = -266169882268LL;

    t92 = ((x485^(x486+x487))+x488);

    if (t92 != 9223201800421717004LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x489 = INT16_MIN;
	int64_t x490 = INT64_MAX;
	int32_t x491 = -1;
	int32_t x492 = -1;
	int64_t t93 = -516625694533LL;

    t93 = ((x489^(x490+x491))+x492);

    if (t93 != -9223372036854743043LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x493 = -69;
	int8_t x495 = INT8_MIN;
	static int32_t x496 = -1;
	int32_t t94 = 31;

    t94 = ((x493^(x494+x495))+x496);

    if (t94 != 195) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x497 = 0LL;
	uint16_t x499 = UINT16_MAX;
	int16_t x500 = INT16_MIN;
	int64_t t95 = 2137014703879226LL;

    t95 = ((x497^(x498+x499))+x500);

    if (t95 != 32639LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x501 = 10U;
	int8_t x502 = -1;
	static int8_t x503 = INT8_MIN;
	int64_t t96 = -1536062665733LL;

    t96 = ((x501^(x502+x503))+x504);

    if (t96 != 5383870902LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x513 = -1LL;
	static int32_t x514 = -1;
	volatile int64_t t97 = 84142491789LL;

    t97 = ((x513^(x514+x515))+x516);

    if (t97 != -626LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x518 = 374359774LL;
	static volatile uint64_t x519 = UINT64_MAX;
	static int8_t x520 = -1;

    t98 = ((x517^(x518+x519))+x520);

    if (t98 != 18446744073335191841LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x522 = 2269064775149370627LLU;
	int16_t x523 = 1;
	int16_t x524 = -1;
	static uint64_t t99 = 4357409828855LLU;

    t99 = ((x521^(x522+x523))+x524);

    if (t99 != 16177679298560180986LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x526 = UINT8_MAX;
	uint16_t x527 = UINT16_MAX;
	uint32_t x528 = 142536U;
	volatile uint32_t t100 = 9846U;

    t100 = ((x525^(x526+x527))+x528);

    if (t100 != 229871U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x530 = 7U;
	volatile int16_t x531 = INT16_MAX;
	volatile int16_t x532 = INT16_MAX;
	int32_t t101 = 1896478;

    t101 = ((x529^(x530+x531))+x532);

    if (t101 != -8) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x534 = 67;
	static int64_t x536 = -123804291990210LL;

    t102 = ((x533^(x534+x535))+x536);

    if (t102 != -123804291420139LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x538 = 1;
	int16_t x540 = INT16_MIN;

    t103 = ((x537^(x538+x539))+x540);

    if (t103 != 2147450753) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x541 = 10U;
	uint64_t x542 = UINT64_MAX;
	uint8_t x544 = 1U;
	uint64_t t104 = 12449922913LLU;

    t104 = ((x541^(x542+x543))+x544);

    if (t104 != 365586626413052992LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x545 = INT32_MIN;
	static int8_t x546 = INT8_MIN;
	volatile int32_t x547 = 34;
	int32_t t105 = 4207;

    t105 = ((x545^(x546+x547))+x548);

    if (t105 != 2147450786) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x551 = UINT64_MAX;
	uint16_t x552 = 13183U;
	volatile uint64_t t106 = 63701LLU;

    t106 = ((x549^(x550+x551))+x552);

    if (t106 != 12893LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x553 = INT64_MIN;
	volatile int8_t x554 = INT8_MIN;
	uint16_t x555 = UINT16_MAX;
	int8_t x556 = INT8_MAX;
	static volatile int64_t t107 = 2387746746740079665LL;

    t107 = ((x553^(x554+x555))+x556);

    if (t107 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x561 = 4U;
	int16_t x563 = -1;
	int64_t t108 = 15419529712LL;

    t108 = ((x561^(x562+x563))+x564);

    if (t108 != -9223372032559808518LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x565 = -1;
	int32_t x566 = 57102;
	static int64_t t109 = -1287LL;

    t109 = ((x565^(x566+x567))+x568);

    if (t109 != -2147540750LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x570 = INT32_MAX;
	int32_t x572 = INT32_MAX;
	static volatile uint64_t t110 = 2454399805313161420LLU;

    t110 = ((x569^(x570+x571))+x572);

    if (t110 != 60926458961865461LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x573 = INT32_MIN;
	int16_t x574 = INT16_MIN;
	uint8_t x575 = UINT8_MAX;
	uint8_t x576 = 1U;
	volatile int32_t t111 = -19;

    t111 = ((x573^(x574+x575))+x576);

    if (t111 != 2147451136) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x577 = -1;
	uint32_t x578 = 50916782U;
	volatile int64_t x579 = INT64_MIN;
	uint64_t x580 = 1LLU;
	uint64_t t112 = 6225LLU;

    t112 = ((x577^(x578+x579))+x580);

    if (t112 != 9223372036803859026LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x581 = -1;
	uint64_t x582 = 977374091041LLU;
	uint64_t x583 = 5011361613856207063LLU;
	uint64_t x584 = UINT64_MAX;
	volatile uint64_t t113 = 263LLU;

    t113 = ((x581^(x582+x583))+x584);

    if (t113 != 13435381482479253510LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x585 = -1;
	int16_t x586 = INT16_MIN;
	int64_t x587 = -5816534781LL;
	volatile uint16_t x588 = 873U;
	static volatile int64_t t114 = -903003LL;

    t114 = ((x585^(x586+x587))+x588);

    if (t114 != 5816568421LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x589 = 16U;
	int16_t x590 = INT16_MIN;
	int16_t x591 = -59;
	uint64_t x592 = 60LLU;

    t115 = ((x589^(x590+x591))+x592);

    if (t115 != 4294934545LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x593 = INT8_MAX;
	int16_t x594 = INT16_MAX;
	static int16_t x595 = -3;
	static int16_t x596 = -1;
	volatile int32_t t116 = -461;

    t116 = ((x593^(x594+x595))+x596);

    if (t116 != 32642) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x597 = INT16_MAX;
	static int32_t x598 = 25;
	volatile uint32_t x599 = UINT32_MAX;
	static volatile int32_t x600 = -25209819;
	uint32_t t117 = 11U;

    t117 = ((x597^(x598+x599))+x600);

    if (t117 != 4269790220U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x601 = INT32_MAX;
	int8_t x602 = INT8_MIN;
	int64_t x604 = -264923883870697LL;
	volatile int64_t t118 = -120748139635484866LL;

    t118 = ((x601^(x602+x603))+x604);

    if (t118 != -264921736386976LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x605 = UINT16_MAX;
	int64_t x607 = -1LL;
	uint16_t x608 = 7U;
	int64_t t119 = -802571963736073LL;

    t119 = ((x605^(x606+x607))+x608);

    if (t119 != -65528LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x609 = INT16_MIN;
	int8_t x610 = INT8_MIN;
	int8_t x611 = INT8_MIN;
	volatile uint32_t t120 = 173363875U;

    t120 = ((x609^(x610+x611))+x612);

    if (t120 != 32539U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x613 = INT64_MAX;
	int8_t x614 = -39;
	int16_t x615 = INT16_MIN;
	int16_t x616 = INT16_MIN;
	volatile int64_t t121 = -277857031968LL;

    t121 = ((x613^(x614+x615))+x616);

    if (t121 != -9223372036854775770LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x617 = -1LL;
	int8_t x618 = INT8_MIN;
	static uint32_t x619 = 8065226U;
	int64_t x620 = 43659115452626LL;
	int64_t t122 = 127LL;

    t122 = ((x617^(x618+x619))+x620);

    if (t122 != 43659107387527LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x621 = INT64_MAX;
	static int8_t x623 = 0;
	int64_t x624 = INT64_MIN;

    t123 = ((x621^(x622+x623))+x624);

    if (t123 != -128LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x625 = 27270491511713LL;
	uint8_t x626 = UINT8_MAX;
	uint32_t x627 = 160503U;
	volatile int64_t t124 = 2LL;

    t124 = ((x625^(x626+x627))+x628);

    if (t124 != -9223344766363113385LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x637 = UINT32_MAX;
	static int16_t x638 = INT16_MIN;
	uint32_t x639 = 78U;
	int16_t x640 = INT16_MAX;

    t125 = ((x637^(x638+x639))+x640);

    if (t125 != 65456U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x641 = 3724559692379LLU;
	int64_t x642 = 26091802125486LL;
	int64_t x643 = INT64_MIN;
	volatile int16_t x644 = INT16_MIN;

    t126 = ((x641^(x642+x643))+x644);

    if (t126 != 9223394962477274869LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x645 = 0;
	volatile int32_t x646 = INT32_MAX;
	uint64_t x647 = UINT64_MAX;
	volatile int64_t x648 = INT64_MIN;
	volatile uint64_t t127 = 3580878935059014LLU;

    t127 = ((x645^(x646+x647))+x648);

    if (t127 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x649 = 4;
	int16_t x650 = INT16_MAX;
	volatile int64_t x651 = INT64_MIN;
	int8_t x652 = -33;
	int64_t t128 = -4068395859775212621LL;

    t128 = ((x649^(x650+x651))+x652);

    if (t128 != -9223372036854743078LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x657 = 2337937U;
	uint32_t x658 = UINT32_MAX;
	int64_t x660 = INT64_MIN;
	int64_t t129 = 13421305827793141LL;

    t129 = ((x657^(x658+x659))+x660);

    if (t129 != -9223372032562146449LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x661 = INT64_MIN;
	int8_t x662 = 0;
	volatile int64_t x663 = -1LL;
	int16_t x664 = -1;

    t130 = ((x661^(x662+x663))+x664);

    if (t130 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x665 = UINT64_MAX;
	int16_t x666 = 204;
	static volatile uint16_t x667 = 422U;
	volatile uint64_t t131 = 434802509232486492LLU;

    t131 = ((x665^(x666+x667))+x668);

    if (t131 != 18446744073709546491LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x669 = UINT32_MAX;
	int64_t x670 = INT64_MIN;
	volatile int64_t x671 = 3902807844LL;
	int16_t x672 = INT16_MIN;

    t132 = ((x669^(x670+x671))+x672);

    if (t132 != -9223372036462649125LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x673 = 122U;
	volatile uint16_t x674 = 2U;
	volatile uint64_t x675 = UINT64_MAX;
	int32_t x676 = INT32_MAX;
	volatile uint64_t t133 = 997768034660LLU;

    t133 = ((x673^(x674+x675))+x676);

    if (t133 != 2147483770LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x677 = 188012057533075LLU;
	volatile int16_t x678 = -58;
	int64_t x680 = INT64_MIN;
	volatile uint64_t t134 = 88917609255LLU;

    t134 = ((x677^(x678+x679))+x680);

    if (t134 != 9223560048912308903LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x681 = INT64_MIN;
	volatile uint16_t x682 = UINT16_MAX;
	static uint64_t x683 = 489322807524533LLU;
	static int32_t x684 = INT32_MAX;
	volatile uint64_t t135 = 0LLU;

    t135 = ((x681^(x682+x683))+x684);

    if (t135 != 9223861361809849523LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x693 = INT8_MAX;
	uint16_t x694 = 2U;
	static int8_t x695 = 2;
	static volatile int64_t x696 = INT64_MIN;
	static volatile int64_t t136 = -22LL;

    t136 = ((x693^(x694+x695))+x696);

    if (t136 != -9223372036854775685LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x698 = 1;
	int32_t x699 = INT32_MIN;
	int32_t x700 = 619;
	uint32_t t137 = 991U;

    t137 = ((x697^(x698+x699))+x700);

    if (t137 != 2147484265U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x701 = 818152LLU;
	volatile uint64_t x702 = UINT64_MAX;
	int16_t x703 = INT16_MIN;
	int64_t x704 = INT64_MAX;
	uint64_t t138 = 648821514951LLU;

    t138 = ((x701^(x702+x703))+x704);

    if (t138 != 9223372036853924886LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x709 = INT8_MIN;
	static volatile int32_t x710 = -1;
	uint64_t x711 = 3165818192515LLU;
	uint32_t x712 = 1018U;
	static uint64_t t139 = 1075833465632730465LLU;

    t139 = ((x709^(x710+x711))+x712);

    if (t139 != 18446740907891359996LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x717 = -11259;
	volatile int16_t x719 = INT16_MIN;
	static volatile int32_t t140 = -1;

    t140 = ((x717^(x718+x719))+x720);

    if (t140 != 21515) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t t141 = 63;

    t141 = ((x725^(x726+x727))+x728);

    if (t141 != 65558) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x730 = INT8_MAX;
	int64_t x731 = INT64_MIN;
	int32_t x732 = INT32_MIN;
	int64_t t142 = 2713552520778203586LL;

    t142 = ((x729^(x730+x731))+x732);

    if (t142 != -9223169729667637509LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x737 = 1814108566037389254LLU;
	static uint16_t x738 = UINT16_MAX;
	int64_t x739 = INT64_MIN;
	volatile uint64_t t143 = 3076762635836449LLU;

    t143 = ((x737^(x738+x739))+x740);

    if (t143 != 11037480602892115789LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x742 = UINT8_MAX;
	int64_t t144 = 69650734827LL;

    t144 = ((x741^(x742+x743))+x744);

    if (t144 != 702094694LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x745 = UINT32_MAX;
	uint64_t x746 = UINT64_MAX;
	volatile uint32_t x747 = 0U;
	int64_t x748 = 60709742632LL;
	static uint64_t t145 = 14524006959842258LLU;

    t145 = ((x745^(x746+x747))+x748);

    if (t145 != 56414775336LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x749 = UINT32_MAX;
	int8_t x750 = 33;
	int16_t x751 = INT16_MIN;
	int8_t x752 = INT8_MIN;
	uint32_t t146 = 176420691U;

    t146 = ((x749^(x750+x751))+x752);

    if (t146 != 32606U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x757 = 1U;
	int8_t x758 = INT8_MIN;
	int64_t x759 = -1LL;
	int16_t x760 = 10101;
	volatile int64_t t147 = 16714596622LL;

    t147 = ((x757^(x758+x759))+x760);

    if (t147 != 9971LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x765 = INT32_MAX;
	static int32_t x766 = INT32_MAX;
	static int16_t x767 = INT16_MIN;
	int32_t t148 = -425;

    t148 = ((x765^(x766+x767))+x768);

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x769 = 2;
	static uint8_t x770 = 1U;
	uint8_t x771 = 43U;
	int32_t t149 = 23077;

    t149 = ((x769^(x770+x771))+x772);

    if (t149 != -82) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x773 = 3204U;
	uint32_t x775 = 1224U;
	volatile uint8_t x776 = UINT8_MAX;
	int64_t t150 = -1524859286LL;

    t150 = ((x773^(x774+x775))+x776);

    if (t150 != 2370LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x777 = INT16_MAX;
	static volatile int16_t x778 = INT16_MAX;
	static int16_t x779 = -1;
	int8_t x780 = -1;
	int32_t t151 = 588683700;

    t151 = ((x777^(x778+x779))+x780);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x784 = 168U;
	uint32_t t152 = 1488U;

    t152 = ((x781^(x782+x783))+x784);

    if (t152 != 2147489692U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x785 = INT16_MAX;
	int16_t x786 = -1;
	int8_t x787 = 7;
	int8_t x788 = INT8_MIN;

    t153 = ((x785^(x786+x787))+x788);

    if (t153 != 32633) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x789 = -1LL;
	uint16_t x790 = 8274U;
	volatile uint64_t x791 = UINT64_MAX;
	int64_t x792 = INT64_MIN;
	volatile uint64_t t154 = 7964643494866LLU;

    t154 = ((x789^(x790+x791))+x792);

    if (t154 != 9223372036854767534LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x793 = -1;
	int8_t x796 = 0;
	volatile int64_t t155 = -58LL;

    t155 = ((x793^(x794+x795))+x796);

    if (t155 != 9223370668520618093LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x797 = -1;
	int32_t x798 = INT32_MIN;
	int64_t x800 = 8609914001367792LL;
	volatile int64_t t156 = 5759816041LL;

    t156 = ((x797^(x798+x799))+x800);

    if (t156 != 8609916148851342LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x801 = INT16_MIN;
	volatile int64_t x802 = -1LL;
	int8_t x803 = INT8_MAX;
	volatile int16_t x804 = INT16_MIN;
	int64_t t157 = -4078501462129617LL;

    t157 = ((x801^(x802+x803))+x804);

    if (t157 != -65410LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x805 = INT32_MIN;
	volatile int64_t x806 = -1LL;
	int16_t x807 = INT16_MIN;
	uint64_t x808 = UINT64_MAX;
	uint64_t t158 = 4981660359996307683LLU;

    t158 = ((x805^(x806+x807))+x808);

    if (t158 != 2147450878LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x809 = INT8_MAX;
	int16_t x810 = 6;
	uint8_t x811 = 6U;
	int16_t x812 = -87;
	volatile int32_t t159 = 0;

    t159 = ((x809^(x810+x811))+x812);

    if (t159 != 28) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x813 = -1;
	int16_t x814 = INT16_MIN;
	static int64_t x815 = INT64_MAX;
	volatile int8_t x816 = INT8_MIN;

    t160 = ((x813^(x814+x815))+x816);

    if (t160 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x818 = 84781LLU;
	int32_t x819 = INT32_MIN;
	static uint32_t x820 = 267760U;
	uint64_t t161 = 20935LLU;

    t161 = ((x817^(x818+x819))+x820);

    if (t161 != 18446744071562447554LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x821 = 31U;
	static int64_t x822 = INT64_MIN;
	static uint8_t x823 = UINT8_MAX;
	volatile uint16_t x824 = UINT16_MAX;
	volatile int64_t t162 = 11263878LL;

    t162 = ((x821^(x822+x823))+x824);

    if (t162 != -9223372036854710049LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x825 = -954477307726845LL;
	static uint32_t x828 = 28346236U;

    t163 = ((x825^(x826+x827))+x828);

    if (t163 != 18445789169419988683LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x833 = INT64_MIN;
	int16_t x834 = INT16_MIN;
	static uint64_t x836 = 8613249251908LLU;
	static uint64_t t164 = 232753330LLU;

    t164 = ((x833^(x834+x835))+x836);

    if (t164 != 9223380650104509333LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x837 = INT64_MIN;
	volatile uint8_t x839 = 15U;
	int32_t x840 = INT32_MIN;
	volatile int64_t t165 = -31519178LL;

    t165 = ((x837^(x838+x839))+x840);

    if (t165 != 9223372032559808527LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x841 = INT16_MIN;
	uint16_t x842 = UINT16_MAX;
	int32_t x843 = INT32_MIN;

    t166 = ((x841^(x842+x843))+x844);

    if (t166 != 2147450878LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x849 = UINT32_MAX;
	uint64_t x850 = 7222546LLU;
	int64_t x851 = INT64_MIN;
	int8_t x852 = 0;
	volatile uint64_t t167 = 7782098298LLU;

    t167 = ((x849^(x850+x851))+x852);

    if (t167 != 9223372041142520557LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x853 = INT16_MAX;
	int32_t x854 = 67;
	uint8_t x855 = 1U;
	int32_t t168 = 285871;

    t168 = ((x853^(x854+x855))+x856);

    if (t168 != 32727) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x858 = 305U;
	static int16_t x859 = INT16_MAX;
	static uint32_t x860 = 3U;
	static volatile uint32_t t169 = 750U;

    t169 = ((x857^(x858+x859))+x860);

    if (t169 != 33076U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x861 = 2574U;
	int32_t x864 = -6561873;
	uint64_t t170 = 1364612LLU;

    t170 = ((x861^(x862+x863))+x864);

    if (t170 != 18446744073705250464LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x869 = -478135;
	int32_t x871 = INT32_MIN;
	int8_t x872 = INT8_MAX;
	static int32_t t171 = -1;

    t171 = ((x869^(x870+x871))+x872);

    if (t171 != 2147005641) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x873 = 120U;
	int32_t x874 = INT32_MAX;
	int32_t x875 = INT32_MIN;

    t172 = ((x873^(x874+x875))+x876);

    if (t172 != -9180) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x881 = -532061LL;
	uint16_t x882 = 2U;
	static volatile uint64_t t173 = 25194706237032235LLU;

    t173 = ((x881^(x882+x883))+x884);

    if (t173 != 470367552883469LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x885 = -1;
	volatile int32_t x886 = 91;
	int16_t x887 = -1;
	uint16_t x888 = 226U;

    t174 = ((x885^(x886+x887))+x888);

    if (t174 != 135) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x889 = 63U;
	uint32_t x890 = 17373245U;
	static uint32_t t175 = 211760668U;

    t175 = ((x889^(x890+x891))+x892);

    if (t175 != 17373195U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x893 = INT64_MAX;
	uint32_t x894 = UINT32_MAX;
	int8_t x895 = -1;
	int8_t x896 = -1;

    t176 = ((x893^(x894+x895))+x896);

    if (t176 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x897 = UINT64_MAX;
	volatile uint16_t x898 = UINT16_MAX;
	int8_t x899 = 1;
	volatile uint32_t x900 = 24567373U;
	volatile uint64_t t177 = 7469184950744LLU;

    t177 = ((x897^(x898+x899))+x900);

    if (t177 != 24501836LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x901 = INT16_MAX;
	int32_t x902 = INT32_MAX;
	int64_t t178 = 117949356LL;

    t178 = ((x901^(x902+x903))+x904);

    if (t178 != 279903802459672690LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x905 = INT64_MIN;
	int8_t x908 = -1;
	static volatile int64_t t179 = 2007343LL;

    t179 = ((x905^(x906+x907))+x908);

    if (t179 != 9223372036854775677LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x909 = 49U;
	int8_t x910 = 6;
	int32_t x911 = 102;
	uint64_t x912 = UINT64_MAX;
	static uint64_t t180 = 520878LLU;

    t180 = ((x909^(x910+x911))+x912);

    if (t180 != 92LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x913 = UINT16_MAX;
	int16_t x914 = -1;
	uint32_t x916 = 2729U;

    t181 = ((x913^(x914+x915))+x916);

    if (t181 != 4294904508U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x917 = INT32_MIN;
	volatile uint16_t x918 = 928U;
	static volatile uint8_t x919 = 3U;
	uint64_t x920 = 136770325190005407LLU;

    t182 = ((x917^(x918+x919))+x920);

    if (t182 != 136770323042522690LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x925 = INT8_MAX;
	int16_t x926 = 13604;
	int32_t t183 = 108771951;

    t183 = ((x925^(x926+x927))+x928);

    if (t183 != 13671) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x929 = 1U;
	uint32_t x932 = 1216468150U;
	volatile int64_t t184 = 147159235139LL;

    t184 = ((x929^(x930+x931))+x932);

    if (t184 != 1216468405LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint16_t x937 = 735U;
	int8_t x938 = -1;
	static int8_t x940 = INT8_MAX;
	int32_t t185 = 625467;

    t185 = ((x937^(x938+x939))+x940);

    if (t185 != 26080) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x941 = 4651361U;
	static volatile uint64_t x942 = UINT64_MAX;
	static int8_t x943 = -1;
	int8_t x944 = INT8_MIN;

    t186 = ((x941^(x942+x943))+x944);

    if (t186 != 18446744073704900127LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x945 = INT32_MAX;
	int8_t x946 = -1;
	uint64_t x947 = UINT64_MAX;
	uint8_t x948 = 45U;
	static volatile uint64_t t187 = 1052028474066878LLU;

    t187 = ((x945^(x946+x947))+x948);

    if (t187 != 18446744071562068014LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x949 = UINT64_MAX;
	volatile uint16_t x950 = 5U;
	static int64_t x951 = INT64_MIN;
	uint16_t x952 = UINT16_MAX;
	uint64_t t188 = 136666LLU;

    t188 = ((x949^(x950+x951))+x952);

    if (t188 != 9223372036854841337LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x954 = INT16_MIN;
	static volatile uint8_t x955 = 72U;
	volatile uint16_t x956 = 1U;
	int32_t t189 = -1243;

    t189 = ((x953^(x954+x955))+x956);

    if (t189 != 32696) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x957 = -91;
	uint16_t x959 = 1U;
	volatile uint8_t x960 = 12U;
	volatile int32_t t190 = -953861;

    t190 = ((x957^(x958+x959))+x960);

    if (t190 != 32688) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x961 = -114;
	uint8_t x963 = UINT8_MAX;
	static int32_t x964 = INT32_MAX;
	int32_t t191 = -193522;

    t191 = ((x961^(x962+x963))+x964);

    if (t191 != 2147483632) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x965 = INT16_MAX;
	volatile uint64_t x966 = UINT64_MAX;
	uint32_t x967 = 839138323U;
	uint16_t x968 = UINT16_MAX;
	volatile uint64_t t192 = 11930447LLU;

    t192 = ((x965^(x966+x967))+x968);

    if (t192 != 839205868LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x978 = INT16_MAX;
	int8_t x979 = -1;
	int16_t x980 = -141;
	volatile int32_t t193 = 20554405;

    t193 = ((x977^(x978+x979))+x980);

    if (t193 != -32783) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x989 = 44;
	uint64_t x990 = 329173800710LLU;
	static uint16_t x991 = 9U;
	volatile uint64_t t194 = 118LLU;

    t194 = ((x989^(x990+x991))+x992);

    if (t194 != 329173800994LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x993 = INT8_MAX;
	uint64_t x994 = 513494106LLU;
	int16_t x996 = INT16_MIN;
	uint64_t t195 = 91955010845LLU;

    t195 = ((x993^(x994+x995))+x996);

    if (t195 != 2660944934LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x997 = 71;
	uint8_t x998 = UINT8_MAX;
	static int16_t x1000 = 1225;
	static volatile int32_t t196 = 10;

    t196 = ((x997^(x998+x999))+x1000);

    if (t196 != 1410) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1001 = 480LLU;
	int8_t x1002 = -1;
	int64_t x1004 = INT64_MIN;
	volatile uint64_t t197 = 570076166469LLU;

    t197 = ((x1001^(x1002+x1003))+x1004);

    if (t197 != 9223372036854776094LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1005 = -1;
	int32_t x1006 = -104562149;
	volatile int32_t x1007 = -1;
	volatile int32_t x1008 = -1;
	static int32_t t198 = -1;

    t198 = ((x1005^(x1006+x1007))+x1008);

    if (t198 != 104562148) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1010 = INT16_MIN;
	int64_t x1011 = INT64_MAX;
	uint64_t x1012 = 310391LLU;
	volatile uint64_t t199 = 7LLU;

    t199 = ((x1009^(x1010+x1011))+x1012);

    if (t199 != 343159LLU) { NG(); } else { ; }
	
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

