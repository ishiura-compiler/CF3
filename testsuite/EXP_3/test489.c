
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

static volatile int32_t x9 = INT32_MIN;
static int16_t x22 = INT16_MAX;
uint64_t x28 = 212467LLU;
int8_t x37 = INT8_MIN;
volatile int8_t x38 = INT8_MAX;
uint8_t x50 = 4U;
uint64_t x51 = 454067906933567LLU;
static volatile int16_t x52 = INT16_MIN;
uint16_t x62 = 4097U;
int64_t x64 = -2996365914LL;
int16_t x67 = INT16_MIN;
volatile int32_t t13 = 1681933;
volatile int32_t t15 = 33;
volatile int32_t t18 = 178;
int8_t x110 = INT8_MIN;
int16_t x146 = INT16_MIN;
volatile int16_t x175 = 3259;
int32_t t30 = -3244;
volatile int16_t x180 = INT16_MIN;
static volatile int16_t x181 = INT16_MAX;
volatile uint32_t t32 = 3U;
static volatile int64_t x189 = -1LL;
static uint8_t x200 = 2U;
uint32_t x221 = 15884504U;
int64_t x222 = 4328735614LL;
int32_t x229 = INT32_MIN;
int8_t x233 = 0;
uint8_t x234 = UINT8_MAX;
volatile uint8_t x235 = 7U;
int64_t x241 = -65LL;
int16_t x246 = -33;
int16_t x251 = -1;
volatile int32_t t45 = -7004057;
volatile uint32_t x255 = UINT32_MAX;
int32_t x275 = 11;
int32_t t48 = -348344;
static uint32_t x280 = 1U;
int8_t x285 = -1;
static volatile int8_t x286 = 11;
int64_t x292 = -1LL;
volatile int32_t x297 = -1;
int32_t t55 = -75;
int32_t x305 = 61;
static int16_t x315 = INT16_MAX;
int8_t x316 = 30;
uint32_t x323 = 55U;
volatile uint32_t t58 = 482U;
static int16_t x327 = -1;
int16_t x333 = INT16_MIN;
volatile int32_t t60 = 119;
static int16_t x339 = INT16_MAX;
uint64_t x345 = UINT64_MAX;
uint32_t x346 = 1310U;
static int32_t x358 = INT32_MIN;
int64_t x363 = -1LL;
uint64_t x371 = 2LLU;
volatile int64_t x384 = 53962778842LL;
int32_t x388 = 0;
int16_t x389 = -1;
static uint16_t x394 = UINT16_MAX;
static int16_t x395 = INT16_MAX;
uint16_t x396 = UINT16_MAX;
volatile int64_t x400 = 7328466750LL;
volatile int64_t t73 = 11581111758LL;
static int16_t x413 = -3;
uint64_t t76 = 6LLU;
int8_t x426 = 7;
static uint16_t x427 = 201U;
uint64_t x428 = UINT64_MAX;
volatile int64_t x450 = INT64_MIN;
uint32_t x452 = 25314U;
volatile uint32_t t80 = 2099625578U;
volatile int32_t x455 = -4713;
static volatile int32_t t81 = -774829874;
int16_t x457 = INT16_MIN;
static volatile int32_t t83 = -47870;
uint32_t x467 = 7U;
int64_t x468 = -14088LL;
int32_t t89 = 325194764;
int32_t x495 = 1;
int64_t x496 = 3747315356329460LL;
volatile int64_t t91 = 1855411423LL;
uint64_t x515 = UINT64_MAX;
static int8_t x518 = 0;
int16_t x519 = -1;
int32_t x525 = 713;
static int32_t t98 = 218245632;
static uint32_t x531 = UINT32_MAX;
uint32_t t100 = 66703718U;
static uint16_t x542 = UINT16_MAX;
int16_t x546 = INT16_MIN;
static int64_t x557 = INT64_MAX;
int32_t x562 = INT32_MAX;
volatile int32_t x566 = -1;
static int64_t x567 = -5948565048066707LL;
int32_t x570 = INT32_MIN;
static uint8_t x579 = 1U;
uint32_t x592 = UINT32_MAX;
static uint64_t x602 = UINT64_MAX;
int16_t x603 = INT16_MIN;
int32_t t112 = -15671003;
int64_t x609 = INT64_MIN;
static int8_t x610 = 3;
uint64_t x611 = UINT64_MAX;
static volatile int32_t t115 = 125502349;
int16_t x629 = 1;
int32_t x638 = INT32_MIN;
volatile uint64_t x639 = 22LLU;
volatile int64_t t119 = 349LL;
int8_t x646 = INT8_MIN;
int32_t x648 = INT32_MIN;
static int16_t x656 = 6489;
int16_t x667 = 1;
int8_t x673 = INT8_MIN;
uint32_t x677 = UINT32_MAX;
int8_t x679 = 52;
int64_t x680 = 63471926126299331LL;
int8_t x707 = INT8_MIN;
int32_t t131 = -13480136;
int64_t x715 = -1LL;
volatile int64_t x716 = 1767185091173265409LL;
static int16_t x722 = INT16_MAX;
uint16_t x731 = 117U;
volatile int32_t t136 = 1;
static int16_t x737 = -1;
uint32_t x744 = 1987845U;
int32_t x745 = INT32_MAX;
uint32_t x746 = 3349U;
int16_t x747 = INT16_MIN;
int8_t x750 = 8;
uint8_t x761 = UINT8_MAX;
int32_t x762 = 21619763;
int8_t x768 = 32;
static uint32_t x769 = 14U;
volatile int16_t x771 = -1;
uint32_t x773 = 90565U;
int32_t x777 = INT32_MIN;
uint8_t x782 = UINT8_MAX;
uint16_t x783 = 7828U;
static volatile uint16_t x785 = 2275U;
uint8_t x798 = 42U;
volatile int32_t t150 = -5941;
static int16_t x807 = INT16_MIN;
volatile uint64_t t152 = 321833893401188771LLU;
int64_t x816 = -1LL;
uint8_t x820 = UINT8_MAX;
int32_t x822 = -1;
static uint64_t x823 = 1385016LLU;
int32_t x825 = INT32_MIN;
volatile int16_t x827 = INT16_MAX;
volatile int32_t t156 = -5285;
int64_t x829 = -1LL;
int8_t x837 = -1;
int32_t t158 = 28;
int16_t x849 = 3;
static int16_t x856 = INT16_MIN;
static volatile int64_t x863 = 3246LL;
int16_t x868 = -3171;
int32_t t162 = -62;
static uint64_t x880 = 79362LLU;
uint32_t t166 = 636U;
volatile uint8_t x889 = 1U;
int16_t x890 = INT16_MIN;
uint64_t x892 = UINT64_MAX;
static int32_t x899 = 1762391;
int32_t t169 = 57;
int8_t x901 = INT8_MIN;
static volatile int64_t t170 = -21328LL;
static int16_t x905 = -1;
uint64_t x907 = UINT64_MAX;
int32_t x921 = -1;
uint16_t x929 = 2061U;
int8_t x940 = INT8_MAX;
int16_t x943 = 3;
int64_t x945 = INT64_MIN;
int32_t t179 = -42452292;
uint8_t x953 = 3U;
static uint32_t x956 = 99634054U;
int8_t x961 = INT8_MIN;
int8_t x962 = -1;
int8_t x963 = -1;
uint64_t x967 = 111271293LLU;
uint8_t x972 = 3U;
int32_t x979 = INT32_MAX;
int32_t x980 = -1;
int64_t x983 = 66356LL;
volatile uint64_t x1008 = 59474244728490LLU;
static uint32_t x1014 = 23330U;
int16_t x1029 = -1;
uint16_t x1032 = 103U;
uint64_t x1056 = 4LLU;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	int64_t x6 = INT64_MIN;
	int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MIN;
	volatile int32_t t0 = 3789;

    t0 = ((x5!=x6)|(x7*x8));

    if (t0 != -4161535) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x10 = -1;
	int8_t x11 = INT8_MAX;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -62201940;

    t1 = ((x9!=x10)|(x11*x12));

    if (t1 != -16255) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x21 = -1;
	static int32_t x23 = -1;
	uint16_t x24 = UINT16_MAX;
	int32_t t2 = -541254;

    t2 = ((x21!=x22)|(x23*x24));

    if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x25 = 9204898610871119108LLU;
	volatile uint16_t x26 = 5714U;
	static volatile int16_t x27 = INT16_MAX;
	static volatile uint64_t t3 = 4978632LLU;

    t3 = ((x25!=x26)|(x27*x28));

    if (t3 != 6961906189LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x33 = INT16_MIN;
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = -696;
	int32_t x36 = -2;
	int32_t t4 = 1067644476;

    t4 = ((x33!=x34)|(x35*x36));

    if (t4 != 1393) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x39 = 2606815916LLU;
	int64_t x40 = 3523786147658LL;
	volatile uint64_t t5 = 1008614LLU;

    t5 = ((x37!=x38)|(x39*x40));

    if (t5 != 17830009661553371577LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x41 = UINT16_MAX;
	int32_t x42 = 0;
	uint64_t x43 = 10442043226087LLU;
	uint64_t x44 = UINT64_MAX;
	uint64_t t6 = 8642031241850000LLU;

    t6 = ((x41!=x42)|(x43*x44));

    if (t6 != 18446733631666325529LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x49 = UINT16_MAX;
	uint64_t t7 = 7LLU;

    t7 = ((x49!=x50)|(x51*x52));

    if (t7 != 3567846899310428161LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x53 = 154802814698LLU;
	static uint16_t x54 = 243U;
	static int16_t x55 = INT16_MAX;
	uint32_t x56 = 450579U;
	volatile uint32_t t8 = 4U;

    t8 = ((x53!=x54)|(x55*x56));

    if (t8 != 1879220205U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x57 = -1LL;
	int16_t x58 = INT16_MIN;
	volatile int8_t x59 = INT8_MIN;
	int64_t x60 = -88873LL;
	volatile int64_t t9 = -418082280935LL;

    t9 = ((x57!=x58)|(x59*x60));

    if (t9 != 11375745LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x61 = INT32_MAX;
	uint64_t x63 = 118922431979171605LLU;
	volatile uint64_t t10 = 75214018701LLU;

    t10 = ((x61!=x62)|(x63*x64));

    if (t10 != 6490175547262845087LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x65 = INT64_MIN;
	uint64_t x66 = 90125967723LLU;
	int8_t x68 = INT8_MIN;
	int32_t t11 = 358;

    t11 = ((x65!=x66)|(x67*x68));

    if (t11 != 4194305) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x69 = -1;
	uint16_t x70 = 946U;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = -1;
	int32_t t12 = 9575;

    t12 = ((x69!=x70)|(x71*x72));

    if (t12 != -65535) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x73 = INT32_MIN;
	uint32_t x74 = 4976U;
	int16_t x75 = -4784;
	uint16_t x76 = 3711U;

    t13 = ((x73!=x74)|(x75*x76));

    if (t13 != -17753423) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	static volatile uint8_t x79 = UINT8_MAX;
	int16_t x80 = INT16_MIN;
	static int32_t t14 = 15540;

    t14 = ((x77!=x78)|(x79*x80));

    if (t14 != -8355839) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x85 = UINT32_MAX;
	uint32_t x86 = 26762246U;
	volatile int32_t x87 = -1;
	int16_t x88 = INT16_MAX;

    t15 = ((x85!=x86)|(x87*x88));

    if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x93 = -9LL;
	static int16_t x94 = 505;
	static volatile int64_t x95 = 1674680259807LL;
	int8_t x96 = -16;
	volatile int64_t t16 = -2567515925566818LL;

    t16 = ((x93!=x94)|(x95*x96));

    if (t16 != -26794884156911LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	volatile int32_t x99 = -750898;
	int16_t x100 = -1;
	int32_t t17 = -440;

    t17 = ((x97!=x98)|(x99*x100));

    if (t17 != 750899) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x101 = 4U;
	uint32_t x102 = 488381087U;
	static int8_t x103 = -7;
	static int8_t x104 = -1;

    t18 = ((x101!=x102)|(x103*x104));

    if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x105 = INT32_MAX;
	static uint16_t x106 = 0U;
	static uint8_t x107 = 1U;
	static uint16_t x108 = 7U;
	int32_t t19 = -43531;

    t19 = ((x105!=x106)|(x107*x108));

    if (t19 != 7) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x109 = -1;
	uint32_t x111 = 34U;
	int8_t x112 = INT8_MIN;
	volatile uint32_t t20 = 12746939U;

    t20 = ((x109!=x110)|(x111*x112));

    if (t20 != 4294962945U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x113 = 19381U;
	volatile int64_t x114 = -1LL;
	static int8_t x115 = 28;
	int8_t x116 = INT8_MIN;
	volatile int32_t t21 = -1050908;

    t21 = ((x113!=x114)|(x115*x116));

    if (t21 != -3583) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x125 = 20151037U;
	static uint32_t x126 = UINT32_MAX;
	int16_t x127 = 1;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t22 = UINT32_MAX;

    t22 = ((x125!=x126)|(x127*x128));

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x129 = 1LL;
	static int32_t x130 = -1;
	uint64_t x131 = 84196512192238LLU;
	int32_t x132 = INT32_MAX;
	static volatile uint64_t t23 = 1491LLU;

    t23 = ((x129!=x130)|(x131*x132));

    if (t23 != 14094400839909943571LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x137 = UINT8_MAX;
	uint32_t x138 = 3965388U;
	int64_t x139 = 56694803306LL;
	uint8_t x140 = 3U;
	int64_t t24 = -250217521987455936LL;

    t24 = ((x137!=x138)|(x139*x140));

    if (t24 != 170084409919LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x145 = UINT8_MAX;
	int8_t x147 = -1;
	int8_t x148 = INT8_MIN;
	int32_t t25 = 80752908;

    t25 = ((x145!=x146)|(x147*x148));

    if (t25 != 129) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x157 = INT8_MAX;
	int32_t x158 = -27228;
	volatile int64_t x159 = -1LL;
	static int8_t x160 = INT8_MIN;
	volatile int64_t t26 = 122463551LL;

    t26 = ((x157!=x158)|(x159*x160));

    if (t26 != 129LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x161 = 144172;
	int32_t x162 = INT32_MIN;
	volatile int32_t x163 = -1;
	int8_t x164 = 2;
	int32_t t27 = 0;

    t27 = ((x161!=x162)|(x163*x164));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x165 = 1725109216946LLU;
	volatile uint16_t x166 = 0U;
	uint64_t x167 = 888052LLU;
	int8_t x168 = 0;
	static uint64_t t28 = 9LLU;

    t28 = ((x165!=x166)|(x167*x168));

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x169 = -588947822;
	uint32_t x170 = 871U;
	int64_t x171 = -1LL;
	int32_t x172 = INT32_MAX;
	static int64_t t29 = 3970961188386369LL;

    t29 = ((x169!=x170)|(x171*x172));

    if (t29 != -2147483647LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x173 = INT32_MIN;
	uint64_t x174 = UINT64_MAX;
	int8_t x176 = -1;

    t30 = ((x173!=x174)|(x175*x176));

    if (t30 != -3259) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x177 = INT64_MIN;
	static int16_t x178 = 8075;
	int8_t x179 = 0;
	int32_t t31 = 1;

    t31 = ((x177!=x178)|(x179*x180));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x182 = -1;
	volatile int16_t x183 = -292;
	uint32_t x184 = 75758986U;

    t32 = ((x181!=x182)|(x183*x184));

    if (t32 != 3648179865U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x190 = UINT16_MAX;
	int32_t x191 = -1;
	static uint32_t x192 = 9088981U;
	volatile uint32_t t33 = 14216U;

    t33 = ((x189!=x190)|(x191*x192));

    if (t33 != 4285878315U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x197 = UINT8_MAX;
	int32_t x198 = INT32_MIN;
	int32_t x199 = 1;
	volatile int32_t t34 = -1413186;

    t34 = ((x197!=x198)|(x199*x200));

    if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x201 = -1;
	volatile int32_t x202 = INT32_MIN;
	int64_t x203 = 2193LL;
	volatile uint64_t x204 = 2706650393940LLU;
	uint64_t t35 = 123403205361297618LLU;

    t35 = ((x201!=x202)|(x203*x204));

    if (t35 != 5935684313910421LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x205 = 631575U;
	volatile int8_t x206 = INT8_MIN;
	int8_t x207 = 5;
	int16_t x208 = -1;
	volatile int32_t t36 = 13787063;

    t36 = ((x205!=x206)|(x207*x208));

    if (t36 != -5) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x209 = -1;
	static int16_t x210 = INT16_MAX;
	static int16_t x211 = INT16_MIN;
	static uint16_t x212 = 10U;
	static int32_t t37 = 1868;

    t37 = ((x209!=x210)|(x211*x212));

    if (t37 != -327679) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x217 = -15;
	int16_t x218 = 3;
	int8_t x219 = INT8_MAX;
	volatile uint32_t x220 = 10612335U;
	volatile uint32_t t38 = 250943628U;

    t38 = ((x217!=x218)|(x219*x220));

    if (t38 != 1347766545U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x223 = 23U;
	int32_t x224 = -1;
	volatile int32_t t39 = -818792458;

    t39 = ((x221!=x222)|(x223*x224));

    if (t39 != -23) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x225 = INT32_MAX;
	static int8_t x226 = -1;
	uint32_t x227 = 2U;
	uint32_t x228 = 7777U;
	volatile uint32_t t40 = 431U;

    t40 = ((x225!=x226)|(x227*x228));

    if (t40 != 15555U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x230 = -81;
	uint64_t x231 = 1325420LLU;
	int32_t x232 = INT32_MIN;
	volatile uint64_t t41 = 28721732LLU;

    t41 = ((x229!=x230)|(x231*x232));

    if (t41 != 18443897755932819457LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x236 = -1LL;
	static volatile int64_t t42 = -3158541199LL;

    t42 = ((x233!=x234)|(x235*x236));

    if (t42 != -7LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x242 = -22344698LL;
	uint16_t x243 = 5277U;
	static int8_t x244 = 41;
	volatile int32_t t43 = -1170;

    t43 = ((x241!=x242)|(x243*x244));

    if (t43 != 216357) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x245 = 2U;
	uint16_t x247 = 1U;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t44 = 1462537;

    t44 = ((x245!=x246)|(x247*x248));

    if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x249 = 34820761550762LLU;
	int32_t x250 = INT32_MIN;
	static int32_t x252 = INT32_MAX;

    t45 = ((x249!=x250)|(x251*x252));

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x253 = INT32_MAX;
	static int16_t x254 = 6295;
	static int16_t x256 = 3736;
	volatile uint32_t t46 = 2U;

    t46 = ((x253!=x254)|(x255*x256));

    if (t46 != 4294963561U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x261 = -207899922109LL;
	int32_t x262 = 1;
	uint32_t x263 = 7297U;
	int32_t x264 = INT32_MIN;
	static volatile uint32_t t47 = 32U;

    t47 = ((x261!=x262)|(x263*x264));

    if (t47 != 2147483649U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x273 = INT32_MIN;
	volatile uint64_t x274 = 77LLU;
	int16_t x276 = INT16_MIN;

    t48 = ((x273!=x274)|(x275*x276));

    if (t48 != -360447) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x277 = -1;
	int8_t x278 = INT8_MAX;
	static uint64_t x279 = 6527154036LLU;
	volatile uint64_t t49 = 58823LLU;

    t49 = ((x277!=x278)|(x279*x280));

    if (t49 != 6527154037LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x281 = -1LL;
	int8_t x282 = INT8_MIN;
	static int8_t x283 = -1;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t50 = 6936;

    t50 = ((x281!=x282)|(x283*x284));

    if (t50 != -255) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x287 = 252U;
	static int8_t x288 = INT8_MAX;
	volatile int32_t t51 = -136;

    t51 = ((x285!=x286)|(x287*x288));

    if (t51 != 32005) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x289 = 9907;
	volatile uint16_t x290 = UINT16_MAX;
	int8_t x291 = -19;
	volatile int64_t t52 = 24LL;

    t52 = ((x289!=x290)|(x291*x292));

    if (t52 != 19LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x293 = 9;
	static int64_t x294 = INT64_MIN;
	volatile int16_t x295 = -7973;
	volatile int8_t x296 = 3;
	int32_t t53 = -351877;

    t53 = ((x293!=x294)|(x295*x296));

    if (t53 != -23919) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x298 = -7;
	uint64_t x299 = 521919516116LLU;
	static uint16_t x300 = 15004U;
	volatile uint64_t t54 = 8149391643LLU;

    t54 = ((x297!=x298)|(x299*x300));

    if (t54 != 7830880419804465LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x301 = 503;
	uint64_t x302 = UINT64_MAX;
	static int8_t x303 = INT8_MIN;
	int16_t x304 = -368;

    t55 = ((x301!=x302)|(x303*x304));

    if (t55 != 47105) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x306 = INT16_MIN;
	uint8_t x307 = 0U;
	int16_t x308 = 0;
	volatile int32_t t56 = 56250;

    t56 = ((x305!=x306)|(x307*x308));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x313 = 290274537838795LLU;
	uint8_t x314 = 1U;
	int32_t t57 = 479877358;

    t57 = ((x313!=x314)|(x315*x316));

    if (t57 != 983011) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x321 = INT16_MIN;
	uint32_t x322 = 263024U;
	int8_t x324 = INT8_MIN;

    t58 = ((x321!=x322)|(x323*x324));

    if (t58 != 4294960257U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x325 = 130004467345LLU;
	uint32_t x326 = 167593196U;
	int32_t x328 = INT32_MAX;
	int32_t t59 = 246817893;

    t59 = ((x325!=x326)|(x327*x328));

    if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x334 = -1;
	int8_t x335 = -1;
	static int16_t x336 = INT16_MIN;

    t60 = ((x333!=x334)|(x335*x336));

    if (t60 != 32769) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x337 = INT8_MAX;
	volatile int32_t x338 = INT32_MAX;
	static uint8_t x340 = 12U;
	volatile int32_t t61 = 71283674;

    t61 = ((x337!=x338)|(x339*x340));

    if (t61 != 393205) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x347 = INT8_MAX;
	uint64_t x348 = 23155LLU;
	static volatile uint64_t t62 = 7526426LLU;

    t62 = ((x345!=x346)|(x347*x348));

    if (t62 != 2940685LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x353 = -1;
	uint64_t x354 = 257033882375379623LLU;
	uint16_t x355 = 2717U;
	int8_t x356 = INT8_MIN;
	int32_t t63 = -4958;

    t63 = ((x353!=x354)|(x355*x356));

    if (t63 != -347775) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x357 = -1370666;
	int64_t x359 = -1537215LL;
	uint32_t x360 = 1521213602U;
	static int64_t t64 = 6701123LL;

    t64 = ((x357!=x358)|(x359*x360));

    if (t64 != -2338432367198429LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x361 = INT64_MIN;
	int8_t x362 = 0;
	int8_t x364 = -1;
	int64_t t65 = 21088772007LL;

    t65 = ((x361!=x362)|(x363*x364));

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x365 = 3;
	static volatile int16_t x366 = INT16_MIN;
	uint32_t x367 = 203243238U;
	static int16_t x368 = 0;
	volatile uint32_t t66 = 19133927U;

    t66 = ((x365!=x366)|(x367*x368));

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x369 = INT8_MIN;
	uint64_t x370 = UINT64_MAX;
	volatile int8_t x372 = INT8_MIN;
	volatile uint64_t t67 = 1708087478975LLU;

    t67 = ((x369!=x370)|(x371*x372));

    if (t67 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x377 = 2046448441641059LLU;
	static uint8_t x378 = 15U;
	int16_t x379 = 1917;
	int64_t x380 = -1LL;
	static int64_t t68 = 16848953937013207LL;

    t68 = ((x377!=x378)|(x379*x380));

    if (t68 != -1917LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x381 = 1887621310584602975LLU;
	uint16_t x382 = UINT16_MAX;
	volatile int8_t x383 = INT8_MIN;
	volatile int64_t t69 = -2LL;

    t69 = ((x381!=x382)|(x383*x384));

    if (t69 != -6907235691775LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x385 = -1069722;
	int64_t x386 = -13022LL;
	uint32_t x387 = UINT32_MAX;
	volatile uint32_t t70 = 2U;

    t70 = ((x385!=x386)|(x387*x388));

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x390 = -43LL;
	volatile uint64_t x391 = 198304325LLU;
	int32_t x392 = INT32_MAX;
	uint64_t t71 = 62LLU;

    t71 = ((x389!=x390)|(x391*x392));

    if (t71 != 425855295066873275LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x393 = -1;
	static int32_t t72 = 56980;

    t72 = ((x393!=x394)|(x395*x396));

    if (t72 != 2147385345) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x397 = 10281U;
	volatile uint32_t x398 = UINT32_MAX;
	volatile int16_t x399 = 914;

    t73 = ((x397!=x398)|(x399*x400));

    if (t73 != 6698218609501LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x405 = 1;
	int32_t x406 = INT32_MAX;
	static int64_t x407 = -1LL;
	uint32_t x408 = 0U;
	volatile int64_t t74 = 94835574112582905LL;

    t74 = ((x405!=x406)|(x407*x408));

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x414 = INT64_MIN;
	static volatile int32_t x415 = -39263551;
	volatile uint64_t x416 = 331LLU;
	uint64_t t75 = 122LLU;

    t75 = ((x413!=x414)|(x415*x416));

    if (t75 != 18446744060713316235LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x421 = INT64_MIN;
	static uint32_t x422 = 103U;
	int32_t x423 = INT32_MIN;
	uint64_t x424 = 497021194278889LLU;

    t76 = ((x421!=x422)|(x423*x424));

    if (t76 != 2171425563086946305LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x425 = 585551U;
	static uint64_t t77 = 3807913105574357LLU;

    t77 = ((x425!=x426)|(x427*x428));

    if (t77 != 18446744073709551415LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x433 = INT16_MIN;
	static int16_t x434 = INT16_MAX;
	int8_t x435 = INT8_MAX;
	uint32_t x436 = 504817388U;
	volatile uint32_t t78 = 14692885U;

    t78 = ((x433!=x434)|(x435*x436));

    if (t78 != 3982266133U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x445 = -1975160228759580833LL;
	uint64_t x446 = 12629LLU;
	uint64_t x447 = 27676880778870LLU;
	static int16_t x448 = INT16_MAX;
	volatile uint64_t t79 = 4LLU;

    t79 = ((x445!=x446)|(x447*x448));

    if (t79 != 906888352481233291LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x449 = -1;
	int32_t x451 = INT32_MIN;

    t80 = ((x449!=x450)|(x451*x452));

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x453 = INT16_MIN;
	int16_t x454 = 302;
	volatile int16_t x456 = 1364;

    t81 = ((x453!=x454)|(x455*x456));

    if (t81 != -6428531) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x458 = 7283853450970LL;
	volatile int8_t x459 = -1;
	int8_t x460 = -1;
	int32_t t82 = -3;

    t82 = ((x457!=x458)|(x459*x460));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x461 = -1;
	int32_t x462 = -1;
	uint16_t x463 = 11U;
	volatile int16_t x464 = -1;

    t83 = ((x461!=x462)|(x463*x464));

    if (t83 != -11) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x465 = -1;
	volatile int64_t x466 = INT64_MIN;
	volatile int64_t t84 = -278526786590LL;

    t84 = ((x465!=x466)|(x467*x468));

    if (t84 != -98615LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x470 = INT32_MAX;
	int16_t x471 = -1;
	volatile uint8_t x472 = UINT8_MAX;
	volatile int32_t t85 = 0;

    t85 = ((x469!=x470)|(x471*x472));

    if (t85 != -255) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int64_t x473 = INT64_MIN;
	volatile int16_t x474 = INT16_MIN;
	static volatile uint64_t x475 = 851759762870886306LLU;
	static uint32_t x476 = UINT32_MAX;
	static uint64_t t86 = 116593299LLU;

    t86 = ((x473!=x474)|(x475*x476));

    if (t86 != 14416533285722923103LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x477 = INT64_MIN;
	int16_t x478 = -1;
	volatile int8_t x479 = INT8_MIN;
	int64_t x480 = -1LL;
	int64_t t87 = 5422398882446LL;

    t87 = ((x477!=x478)|(x479*x480));

    if (t87 != 129LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x481 = INT16_MAX;
	int32_t x482 = INT32_MIN;
	uint32_t x483 = UINT32_MAX;
	int8_t x484 = INT8_MIN;
	volatile uint32_t t88 = 113978138U;

    t88 = ((x481!=x482)|(x483*x484));

    if (t88 != 129U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x485 = INT16_MAX;
	uint16_t x486 = 15U;
	static uint8_t x487 = 7U;
	int16_t x488 = INT16_MAX;

    t89 = ((x485!=x486)|(x487*x488));

    if (t89 != 229369) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x489 = -1;
	static uint8_t x490 = 0U;
	int8_t x491 = INT8_MIN;
	static int8_t x492 = INT8_MIN;
	volatile int32_t t90 = -197;

    t90 = ((x489!=x490)|(x491*x492));

    if (t90 != 16385) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x493 = 2880965300349826LLU;
	uint8_t x494 = UINT8_MAX;

    t91 = ((x493!=x494)|(x495*x496));

    if (t91 != 3747315356329461LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x497 = 180267801090601LLU;
	static int16_t x498 = INT16_MIN;
	uint8_t x499 = 1U;
	int32_t x500 = -53210549;
	int32_t t92 = 3583893;

    t92 = ((x497!=x498)|(x499*x500));

    if (t92 != -53210549) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x505 = -1;
	static uint32_t x506 = UINT32_MAX;
	uint8_t x507 = UINT8_MAX;
	int8_t x508 = INT8_MIN;
	static volatile int32_t t93 = -1535901;

    t93 = ((x505!=x506)|(x507*x508));

    if (t93 != -32640) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x509 = -1;
	static uint8_t x510 = UINT8_MAX;
	int32_t x511 = -1;
	int32_t x512 = 16312904;
	int32_t t94 = 6995;

    t94 = ((x509!=x510)|(x511*x512));

    if (t94 != -16312903) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x513 = UINT16_MAX;
	int64_t x514 = INT64_MIN;
	volatile int8_t x516 = 15;
	volatile uint64_t t95 = 824388186899539LLU;

    t95 = ((x513!=x514)|(x515*x516));

    if (t95 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x517 = INT32_MIN;
	static uint8_t x520 = UINT8_MAX;
	static volatile int32_t t96 = 487876;

    t96 = ((x517!=x518)|(x519*x520));

    if (t96 != -255) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x521 = 28;
	volatile int8_t x522 = 0;
	int16_t x523 = INT16_MIN;
	static volatile int32_t x524 = -6812;
	volatile int32_t t97 = -15;

    t97 = ((x521!=x522)|(x523*x524));

    if (t97 != 223215617) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x526 = -1;
	int16_t x527 = INT16_MIN;
	volatile int8_t x528 = -3;

    t98 = ((x525!=x526)|(x527*x528));

    if (t98 != 98305) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x529 = INT16_MIN;
	static uint32_t x530 = 245U;
	uint64_t x532 = 9431362263LLU;
	uint64_t t99 = 4310344LLU;

    t99 = ((x529!=x530)|(x531*x532));

    if (t99 != 3613904319463085353LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x537 = UINT32_MAX;
	int8_t x538 = INT8_MIN;
	uint16_t x539 = 1963U;
	uint32_t x540 = UINT32_MAX;

    t100 = ((x537!=x538)|(x539*x540));

    if (t100 != 4294965333U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x541 = -7240411;
	volatile uint8_t x543 = 10U;
	static int16_t x544 = -5;
	volatile int32_t t101 = 3722249;

    t101 = ((x541!=x542)|(x543*x544));

    if (t101 != -49) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x545 = -20496489;
	int16_t x547 = INT16_MIN;
	int8_t x548 = INT8_MIN;
	volatile int32_t t102 = 25223378;

    t102 = ((x545!=x546)|(x547*x548));

    if (t102 != 4194305) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x549 = -1;
	int64_t x550 = INT64_MAX;
	volatile int32_t x551 = INT32_MAX;
	int16_t x552 = -1;
	int32_t t103 = 957;

    t103 = ((x549!=x550)|(x551*x552));

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x553 = INT8_MAX;
	uint32_t x554 = 3217067U;
	int32_t x555 = 118;
	uint32_t x556 = UINT32_MAX;
	uint32_t t104 = 44949U;

    t104 = ((x553!=x554)|(x555*x556));

    if (t104 != 4294967179U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x558 = INT8_MIN;
	int32_t x559 = INT32_MIN;
	volatile uint64_t x560 = 3LLU;
	volatile uint64_t t105 = 193LLU;

    t105 = ((x557!=x558)|(x559*x560));

    if (t105 != 18446744067267100673LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x561 = 205488487LLU;
	int32_t x563 = -652373548;
	int64_t x564 = -1LL;
	volatile int64_t t106 = -67341111611LL;

    t106 = ((x561!=x562)|(x563*x564));

    if (t106 != 652373549LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x565 = UINT8_MAX;
	uint16_t x568 = 19U;
	volatile int64_t t107 = -121LL;

    t107 = ((x565!=x566)|(x567*x568));

    if (t107 != -113022735913267433LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x569 = INT16_MAX;
	int8_t x571 = INT8_MIN;
	int32_t x572 = 47691;
	volatile int32_t t108 = -3483239;

    t108 = ((x569!=x570)|(x571*x572));

    if (t108 != -6104447) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x577 = INT16_MIN;
	int64_t x578 = 1590931880LL;
	volatile int16_t x580 = INT16_MIN;
	int32_t t109 = -8368477;

    t109 = ((x577!=x578)|(x579*x580));

    if (t109 != -32767) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	int32_t x586 = INT32_MIN;
	static volatile int16_t x587 = INT16_MIN;
	static int32_t x588 = -1;
	static int32_t t110 = -1;

    t110 = ((x585!=x586)|(x587*x588));

    if (t110 != 32769) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x589 = 7070;
	int64_t x590 = -1LL;
	uint16_t x591 = 6U;
	volatile uint32_t t111 = 1358715U;

    t111 = ((x589!=x590)|(x591*x592));

    if (t111 != 4294967291U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x601 = INT64_MAX;
	int16_t x604 = INT16_MAX;

    t112 = ((x601!=x602)|(x603*x604));

    if (t112 != -1073709055) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x605 = INT16_MAX;
	uint8_t x606 = 3U;
	static volatile int8_t x607 = INT8_MAX;
	volatile int32_t x608 = -1;
	volatile int32_t t113 = 20875;

    t113 = ((x605!=x606)|(x607*x608));

    if (t113 != -127) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x612 = 3761U;
	volatile uint64_t t114 = 100106958LLU;

    t114 = ((x609!=x610)|(x611*x612));

    if (t114 != 18446744073709547855LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x613 = 0U;
	static uint32_t x614 = UINT32_MAX;
	int32_t x615 = INT32_MIN;
	volatile uint8_t x616 = 0U;

    t115 = ((x613!=x614)|(x615*x616));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x630 = 1621489590469LL;
	uint8_t x631 = 0U;
	volatile int64_t x632 = -1LL;
	int64_t t116 = 3484530LL;

    t116 = ((x629!=x630)|(x631*x632));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x633 = INT32_MAX;
	volatile int8_t x634 = -36;
	static volatile int16_t x635 = INT16_MAX;
	static int8_t x636 = 1;
	static volatile int32_t t117 = 443;

    t117 = ((x633!=x634)|(x635*x636));

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x637 = -3293747;
	int64_t x640 = INT64_MAX;
	uint64_t t118 = 4659323918452LLU;

    t118 = ((x637!=x638)|(x639*x640));

    if (t118 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x641 = UINT16_MAX;
	uint8_t x642 = 9U;
	int64_t x643 = -906439LL;
	volatile int8_t x644 = -36;

    t119 = ((x641!=x642)|(x643*x644));

    if (t119 != 32631805LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x645 = INT8_MAX;
	static volatile int64_t x647 = 288094268LL;
	volatile int64_t t120 = -242342839848741484LL;

    t120 = ((x645!=x646)|(x647*x648));

    if (t120 != -618677729612529663LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x653 = 48;
	volatile int8_t x654 = -1;
	int8_t x655 = INT8_MIN;
	static volatile int32_t t121 = -1;

    t121 = ((x653!=x654)|(x655*x656));

    if (t121 != -830591) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x657 = INT64_MAX;
	uint16_t x658 = UINT16_MAX;
	int64_t x659 = -1LL;
	int16_t x660 = -12;
	volatile int64_t t122 = -23366LL;

    t122 = ((x657!=x658)|(x659*x660));

    if (t122 != 13LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x665 = 7U;
	static int64_t x666 = INT64_MAX;
	int16_t x668 = INT16_MAX;
	volatile int32_t t123 = -31;

    t123 = ((x665!=x666)|(x667*x668));

    if (t123 != 32767) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x669 = 21U;
	volatile int32_t x670 = INT32_MIN;
	volatile int16_t x671 = -1;
	uint64_t x672 = UINT64_MAX;
	uint64_t t124 = 1069126196LLU;

    t124 = ((x669!=x670)|(x671*x672));

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x674 = -1;
	uint8_t x675 = 1U;
	int64_t x676 = INT64_MIN;
	int64_t t125 = 119837053606LL;

    t125 = ((x673!=x674)|(x675*x676));

    if (t125 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x678 = 117U;
	int64_t t126 = 295994310556987LL;

    t126 = ((x677!=x678)|(x679*x680));

    if (t126 != 3300540158567565213LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x681 = INT8_MAX;
	static int32_t x682 = INT32_MIN;
	int64_t x683 = INT64_MIN;
	uint8_t x684 = 0U;
	int64_t t127 = 0LL;

    t127 = ((x681!=x682)|(x683*x684));

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x685 = -1;
	static volatile int64_t x686 = INT64_MIN;
	uint8_t x687 = UINT8_MAX;
	uint8_t x688 = 4U;
	int32_t t128 = 1049636;

    t128 = ((x685!=x686)|(x687*x688));

    if (t128 != 1021) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x689 = UINT32_MAX;
	volatile int8_t x690 = INT8_MIN;
	int64_t x691 = -1LL;
	volatile int16_t x692 = -1;
	int64_t t129 = -2224344468484714100LL;

    t129 = ((x689!=x690)|(x691*x692));

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x693 = INT16_MAX;
	static volatile uint16_t x694 = UINT16_MAX;
	uint64_t x695 = 1069374277488LLU;
	volatile int16_t x696 = INT16_MAX;
	volatile uint64_t t130 = 9LLU;

    t130 = ((x693!=x694)|(x695*x696));

    if (t130 != 35040186950449297LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x705 = INT64_MAX;
	int32_t x706 = INT32_MIN;
	static int32_t x708 = -1;

    t131 = ((x705!=x706)|(x707*x708));

    if (t131 != 129) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x709 = 0U;
	static int16_t x710 = INT16_MIN;
	int16_t x711 = 14375;
	volatile int8_t x712 = INT8_MIN;
	volatile int32_t t132 = 381;

    t132 = ((x709!=x710)|(x711*x712));

    if (t132 != -1839999) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x713 = 6U;
	int16_t x714 = -1;
	int64_t t133 = -4634885910LL;

    t133 = ((x713!=x714)|(x715*x716));

    if (t133 != -1767185091173265409LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x721 = 81U;
	volatile uint32_t x723 = 4U;
	volatile int16_t x724 = INT16_MIN;
	volatile uint32_t t134 = 13327U;

    t134 = ((x721!=x722)|(x723*x724));

    if (t134 != 4294836225U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x725 = 80076182LL;
	uint32_t x726 = 640488545U;
	int64_t x727 = 60564197359LL;
	uint8_t x728 = UINT8_MAX;
	volatile int64_t t135 = 66318464281536LL;

    t135 = ((x725!=x726)|(x727*x728));

    if (t135 != 15443870326545LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x729 = 10;
	uint64_t x730 = 2580420556813470009LLU;
	uint8_t x732 = UINT8_MAX;

    t136 = ((x729!=x730)|(x731*x732));

    if (t136 != 29835) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x738 = 25LLU;
	int8_t x739 = -5;
	uint8_t x740 = 3U;
	int32_t t137 = -50696;

    t137 = ((x737!=x738)|(x739*x740));

    if (t137 != -15) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x741 = INT64_MAX;
	uint64_t x742 = 133561289530LLU;
	int16_t x743 = 27;
	volatile uint32_t t138 = 16222523U;

    t138 = ((x741!=x742)|(x743*x744));

    if (t138 != 53671815U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x748 = 373U;
	static uint32_t t139 = 5192U;

    t139 = ((x745!=x746)|(x747*x748));

    if (t139 != 4282744833U) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x749 = 16028U;
	int16_t x751 = INT16_MIN;
	int8_t x752 = INT8_MAX;
	volatile int32_t t140 = -9;

    t140 = ((x749!=x750)|(x751*x752));

    if (t140 != -4161535) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x763 = -1;
	int8_t x764 = 1;
	volatile int32_t t141 = -188;

    t141 = ((x761!=x762)|(x763*x764));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x765 = 1U;
	static uint64_t x766 = UINT64_MAX;
	static volatile uint32_t x767 = 101U;
	uint32_t t142 = 147U;

    t142 = ((x765!=x766)|(x767*x768));

    if (t142 != 3233U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x770 = INT64_MAX;
	uint16_t x772 = 112U;
	volatile int32_t t143 = -5855858;

    t143 = ((x769!=x770)|(x771*x772));

    if (t143 != -111) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x774 = 598;
	uint8_t x775 = 0U;
	static volatile int32_t x776 = INT32_MIN;
	static int32_t t144 = 5673;

    t144 = ((x773!=x774)|(x775*x776));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x778 = INT64_MIN;
	int8_t x779 = 1;
	uint16_t x780 = 1U;
	volatile int32_t t145 = 768;

    t145 = ((x777!=x778)|(x779*x780));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x781 = INT8_MAX;
	static int16_t x784 = -18;
	volatile int32_t t146 = -3492278;

    t146 = ((x781!=x782)|(x783*x784));

    if (t146 != -140903) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x786 = UINT16_MAX;
	uint8_t x787 = 28U;
	int16_t x788 = -1;
	volatile int32_t t147 = 912;

    t147 = ((x785!=x786)|(x787*x788));

    if (t147 != -27) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint64_t x789 = UINT64_MAX;
	uint16_t x790 = UINT16_MAX;
	static int8_t x791 = INT8_MAX;
	volatile int64_t x792 = 13299622305281LL;
	static int64_t t148 = 9338301407476LL;

    t148 = ((x789!=x790)|(x791*x792));

    if (t148 != 1689052032770687LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x793 = -1;
	int16_t x794 = -1;
	int8_t x795 = -22;
	int64_t x796 = -256LL;
	volatile int64_t t149 = -65845270692049314LL;

    t149 = ((x793!=x794)|(x795*x796));

    if (t149 != 5632LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x797 = -2995;
	uint8_t x799 = UINT8_MAX;
	int32_t x800 = -1;

    t150 = ((x797!=x798)|(x799*x800));

    if (t150 != -255) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x805 = 56U;
	uint32_t x806 = 0U;
	uint8_t x808 = 0U;
	int32_t t151 = -192539;

    t151 = ((x805!=x806)|(x807*x808));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x809 = -1;
	int16_t x810 = -1;
	uint32_t x811 = UINT32_MAX;
	uint64_t x812 = 2787600516023892LLU;

    t152 = ((x809!=x810)|(x811*x812));

    if (t152 != 15167735439616866732LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x813 = INT8_MIN;
	uint32_t x814 = UINT32_MAX;
	volatile uint16_t x815 = 439U;
	int64_t t153 = -1794508583554121755LL;

    t153 = ((x813!=x814)|(x815*x816));

    if (t153 != -439LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x817 = 94U;
	volatile uint8_t x818 = 6U;
	int16_t x819 = INT16_MIN;
	static volatile int32_t t154 = -28153;

    t154 = ((x817!=x818)|(x819*x820));

    if (t154 != -8355839) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x821 = INT16_MAX;
	int32_t x824 = -112;
	volatile uint64_t t155 = 122LLU;

    t155 = ((x821!=x822)|(x823*x824));

    if (t155 != 18446744073554429825LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x826 = 0U;
	int16_t x828 = -83;

    t156 = ((x825!=x826)|(x827*x828));

    if (t156 != -2719661) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x830 = -1;
	int16_t x831 = -12651;
	uint16_t x832 = 1U;
	volatile int32_t t157 = -1;

    t157 = ((x829!=x830)|(x831*x832));

    if (t157 != -12651) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x838 = -1;
	volatile uint16_t x839 = 1U;
	int32_t x840 = -36907562;

    t158 = ((x837!=x838)|(x839*x840));

    if (t158 != -36907562) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x850 = INT8_MIN;
	volatile int16_t x851 = -2951;
	uint64_t x852 = UINT64_MAX;
	uint64_t t159 = 127776885791LLU;

    t159 = ((x849!=x850)|(x851*x852));

    if (t159 != 2951LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x853 = 1856U;
	uint8_t x854 = 1U;
	uint16_t x855 = UINT16_MAX;
	int32_t t160 = 1;

    t160 = ((x853!=x854)|(x855*x856));

    if (t160 != -2147450879) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x861 = INT32_MAX;
	volatile int16_t x862 = 3942;
	uint64_t x864 = UINT64_MAX;
	volatile uint64_t t161 = 226274450608831335LLU;

    t161 = ((x861!=x862)|(x863*x864));

    if (t161 != 18446744073709548371LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x865 = -8061;
	uint8_t x866 = UINT8_MAX;
	uint8_t x867 = 114U;

    t162 = ((x865!=x866)|(x867*x868));

    if (t162 != -361493) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x869 = UINT16_MAX;
	uint32_t x870 = 7217U;
	int32_t x871 = 1;
	static int16_t x872 = 184;
	volatile int32_t t163 = 1;

    t163 = ((x869!=x870)|(x871*x872));

    if (t163 != 185) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x873 = -1LL;
	uint64_t x874 = 1193147298522996LLU;
	static volatile int8_t x875 = INT8_MIN;
	static volatile uint64_t x876 = UINT64_MAX;
	uint64_t t164 = 3070908491495275117LLU;

    t164 = ((x873!=x874)|(x875*x876));

    if (t164 != 129LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x877 = UINT16_MAX;
	uint8_t x878 = 31U;
	static int32_t x879 = 32624;
	uint64_t t165 = 18958000658786LLU;

    t165 = ((x877!=x878)|(x879*x880));

    if (t165 != 2589105889LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x881 = -2528;
	volatile int16_t x882 = INT16_MIN;
	int32_t x883 = -25;
	uint32_t x884 = 310U;

    t166 = ((x881!=x882)|(x883*x884));

    if (t166 != 4294959547U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x885 = UINT8_MAX;
	uint64_t x886 = 447LLU;
	static int32_t x887 = -230;
	uint8_t x888 = UINT8_MAX;
	static int32_t t167 = -193645;

    t167 = ((x885!=x886)|(x887*x888));

    if (t167 != -58649) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x891 = INT64_MIN;
	volatile uint64_t t168 = 1503LLU;

    t168 = ((x889!=x890)|(x891*x892));

    if (t168 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint8_t x897 = 58U;
	int64_t x898 = INT64_MIN;
	static int32_t x900 = 8;

    t169 = ((x897!=x898)|(x899*x900));

    if (t169 != 14099129) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x902 = -1;
	static int16_t x903 = -1;
	int64_t x904 = INT64_MAX;

    t170 = ((x901!=x902)|(x903*x904));

    if (t170 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x906 = 26U;
	volatile int32_t x908 = INT32_MAX;
	static volatile uint64_t t171 = 828926LLU;

    t171 = ((x905!=x906)|(x907*x908));

    if (t171 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x909 = UINT8_MAX;
	static int32_t x910 = -1;
	int32_t x911 = -636;
	uint8_t x912 = 2U;
	int32_t t172 = -1946551;

    t172 = ((x909!=x910)|(x911*x912));

    if (t172 != -1271) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x922 = -92349;
	uint8_t x923 = 0U;
	volatile int8_t x924 = 0;
	int32_t t173 = -4;

    t173 = ((x921!=x922)|(x923*x924));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x925 = INT16_MIN;
	uint16_t x926 = UINT16_MAX;
	int16_t x927 = 2027;
	static uint8_t x928 = 72U;
	static volatile int32_t t174 = -234596060;

    t174 = ((x925!=x926)|(x927*x928));

    if (t174 != 145945) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x930 = UINT16_MAX;
	volatile uint64_t x931 = UINT64_MAX;
	int8_t x932 = INT8_MIN;
	uint64_t t175 = 145769374963098054LLU;

    t175 = ((x929!=x930)|(x931*x932));

    if (t175 != 129LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x937 = -1;
	int32_t x938 = -555928765;
	int16_t x939 = INT16_MIN;
	volatile int32_t t176 = 7;

    t176 = ((x937!=x938)|(x939*x940));

    if (t176 != -4161535) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x941 = INT16_MIN;
	int8_t x942 = INT8_MAX;
	int32_t x944 = 1848901;
	volatile int32_t t177 = 3375381;

    t177 = ((x941!=x942)|(x943*x944));

    if (t177 != 5546703) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x946 = INT32_MAX;
	static volatile uint32_t x947 = 18589U;
	volatile uint16_t x948 = 3668U;
	uint32_t t178 = 6U;

    t178 = ((x945!=x946)|(x947*x948));

    if (t178 != 68184453U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x949 = 160U;
	static volatile int8_t x950 = -1;
	uint8_t x951 = 27U;
	static int16_t x952 = -1;

    t179 = ((x949!=x950)|(x951*x952));

    if (t179 != -27) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x954 = -2;
	int32_t x955 = INT32_MIN;
	static volatile uint32_t t180 = 99291010U;

    t180 = ((x953!=x954)|(x955*x956));

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x957 = 0LL;
	uint64_t x958 = UINT64_MAX;
	int64_t x959 = -1LL;
	volatile uint16_t x960 = 10U;
	int64_t t181 = -17535530LL;

    t181 = ((x957!=x958)|(x959*x960));

    if (t181 != -9LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x964 = UINT32_MAX;
	volatile uint32_t t182 = 988161U;

    t182 = ((x961!=x962)|(x963*x964));

    if (t182 != 1U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x965 = 696106261U;
	uint32_t x966 = UINT32_MAX;
	static int16_t x968 = 147;
	uint64_t t183 = 2292369907087074676LLU;

    t183 = ((x965!=x966)|(x967*x968));

    if (t183 != 16356880071LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x969 = 4279704U;
	uint8_t x970 = UINT8_MAX;
	static int16_t x971 = -1;
	volatile int32_t t184 = -22;

    t184 = ((x969!=x970)|(x971*x972));

    if (t184 != -3) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x977 = INT8_MAX;
	int16_t x978 = INT16_MIN;
	volatile int32_t t185 = 45;

    t185 = ((x977!=x978)|(x979*x980));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x981 = INT32_MIN;
	uint64_t x982 = UINT64_MAX;
	int16_t x984 = -43;
	volatile int64_t t186 = -29491918260LL;

    t186 = ((x981!=x982)|(x983*x984));

    if (t186 != -2853307LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x985 = INT16_MIN;
	static volatile uint16_t x986 = 4U;
	int64_t x987 = -11024044225LL;
	static uint64_t x988 = 722648377558990LLU;
	volatile uint64_t t187 = 1029904825184978746LLU;

    t187 = ((x985!=x986)|(x987*x988));

    if (t187 != 13902801845911862707LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x989 = INT8_MIN;
	int32_t x990 = 16365;
	uint64_t x991 = 1921826855LLU;
	uint32_t x992 = 25U;
	static uint64_t t188 = 4319936446183LLU;

    t188 = ((x989!=x990)|(x991*x992));

    if (t188 != 48045671375LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x993 = INT32_MIN;
	int8_t x994 = INT8_MIN;
	static int64_t x995 = 2887668163603LL;
	uint32_t x996 = 7536U;
	volatile int64_t t189 = -2952248951613752LL;

    t189 = ((x993!=x994)|(x995*x996));

    if (t189 != 21761467280912209LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1005 = 10;
	uint64_t x1006 = 3971965232LLU;
	static int8_t x1007 = 38;
	volatile uint64_t t190 = 63LLU;

    t190 = ((x1005!=x1006)|(x1007*x1008));

    if (t190 != 2260021299682621LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1013 = UINT32_MAX;
	static volatile int64_t x1015 = 317LL;
	uint16_t x1016 = 1000U;
	volatile int64_t t191 = -108861LL;

    t191 = ((x1013!=x1014)|(x1015*x1016));

    if (t191 != 317001LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1021 = -38;
	uint32_t x1022 = UINT32_MAX;
	int64_t x1023 = 0LL;
	int64_t x1024 = INT64_MIN;
	static int64_t t192 = 8524401688211LL;

    t192 = ((x1021!=x1022)|(x1023*x1024));

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1025 = 1LLU;
	uint8_t x1026 = 16U;
	int32_t x1027 = -1;
	static uint32_t x1028 = 456U;
	volatile uint32_t t193 = 2477253U;

    t193 = ((x1025!=x1026)|(x1027*x1028));

    if (t193 != 4294966841U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1030 = INT64_MIN;
	uint64_t x1031 = 94683320695084557LLU;
	static volatile uint64_t t194 = 1920931624LLU;

    t194 = ((x1029!=x1030)|(x1031*x1032));

    if (t194 != 9752382031593709371LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1033 = -439;
	volatile uint32_t x1034 = UINT32_MAX;
	volatile uint64_t x1035 = 190471LLU;
	int32_t x1036 = -1;
	uint64_t t195 = 5LLU;

    t195 = ((x1033!=x1034)|(x1035*x1036));

    if (t195 != 18446744073709361145LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint8_t x1045 = 4U;
	uint64_t x1046 = 124025451LLU;
	int16_t x1047 = INT16_MIN;
	int8_t x1048 = -1;
	int32_t t196 = 74779;

    t196 = ((x1045!=x1046)|(x1047*x1048));

    if (t196 != 32769) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1053 = 1U;
	uint32_t x1054 = UINT32_MAX;
	int32_t x1055 = -1;
	static volatile uint64_t t197 = 615908997271LLU;

    t197 = ((x1053!=x1054)|(x1055*x1056));

    if (t197 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1057 = 360327818892LLU;
	int32_t x1058 = 347260;
	int64_t x1059 = -1LL;
	int16_t x1060 = -1;
	int64_t t198 = -31748098LL;

    t198 = ((x1057!=x1058)|(x1059*x1060));

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x1061 = UINT16_MAX;
	int8_t x1062 = INT8_MIN;
	uint64_t x1063 = UINT64_MAX;
	int8_t x1064 = INT8_MIN;
	volatile uint64_t t199 = 734LLU;

    t199 = ((x1061!=x1062)|(x1063*x1064));

    if (t199 != 129LLU) { NG(); } else { ; }
	
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

