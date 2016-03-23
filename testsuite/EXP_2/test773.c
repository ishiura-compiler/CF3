
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

static int32_t x7 = INT32_MIN;
int8_t x11 = -1;
uint8_t x18 = UINT8_MAX;
uint16_t x42 = UINT16_MAX;
static uint64_t t6 = 80049757754LLU;
uint16_t x45 = UINT16_MAX;
uint64_t t8 = 1333275535750480LLU;
uint32_t x54 = 13U;
uint8_t x58 = 0U;
int64_t x59 = -1LL;
int64_t x64 = INT64_MIN;
volatile uint64_t x70 = UINT64_MAX;
volatile uint64_t x85 = 26832786LLU;
int64_t x95 = INT64_MIN;
int16_t x103 = -1;
volatile int64_t x107 = INT64_MIN;
int64_t t19 = 8LL;
uint32_t x117 = 254U;
static volatile int32_t x118 = INT32_MIN;
volatile uint64_t x119 = 5339833LLU;
int16_t x122 = INT16_MAX;
int16_t x137 = INT16_MAX;
uint32_t x142 = 7218671U;
int64_t x143 = -25859982388351057LL;
volatile int16_t x144 = INT16_MAX;
volatile int32_t x146 = 42;
uint8_t x148 = UINT8_MAX;
int64_t x150 = INT64_MAX;
static volatile uint64_t t27 = 16105LLU;
uint32_t x153 = UINT32_MAX;
int16_t x156 = 7854;
int32_t x179 = INT32_MAX;
static uint64_t t32 = 945760569864181099LLU;
uint32_t t33 = 1123895U;
static int8_t x193 = 5;
uint8_t x194 = UINT8_MAX;
uint16_t x204 = UINT16_MAX;
uint64_t t36 = 272203858307756341LLU;
uint32_t x209 = UINT32_MAX;
static uint32_t x223 = UINT32_MAX;
volatile uint32_t t40 = 516656573U;
volatile uint32_t t42 = 8118U;
static int64_t x239 = -456997LL;
static uint8_t x260 = UINT8_MAX;
int8_t x268 = INT8_MIN;
static volatile int32_t x269 = INT32_MIN;
uint32_t x271 = UINT32_MAX;
int32_t x282 = INT32_MIN;
uint32_t x283 = 25699605U;
int16_t x284 = 1;
static int16_t x288 = -1;
volatile uint64_t x306 = UINT64_MAX;
int32_t x313 = 0;
volatile int32_t x315 = INT32_MAX;
int64_t x318 = -1104658LL;
uint64_t t57 = 6540LLU;
uint8_t x326 = UINT8_MAX;
uint64_t x328 = 386198925LLU;
uint64_t t60 = 439LLU;
static uint64_t t62 = 118846483978426934LLU;
static int8_t x351 = -27;
volatile int16_t x352 = 411;
volatile int16_t x353 = -1;
volatile uint32_t t65 = 41U;
static int64_t x359 = INT64_MIN;
volatile int64_t t66 = 33416903131LL;
int8_t x370 = INT8_MIN;
uint8_t x371 = 9U;
int32_t x372 = INT32_MIN;
static uint8_t x377 = 0U;
static uint32_t x379 = UINT32_MAX;
volatile int32_t t70 = 90070;
int8_t x396 = INT8_MAX;
int32_t x410 = INT32_MIN;
uint32_t x417 = 124U;
uint64_t t77 = 236LLU;
uint32_t x424 = 2U;
int8_t x433 = -4;
volatile int16_t x443 = -94;
static volatile int64_t x447 = 171833457LL;
int64_t x448 = -1LL;
int64_t x452 = -2847883580LL;
uint64_t x453 = 531086684LLU;
int16_t x454 = INT16_MAX;
volatile uint8_t x462 = 11U;
int16_t x479 = INT16_MIN;
uint64_t x480 = UINT64_MAX;
static uint16_t x482 = UINT16_MAX;
volatile int64_t t90 = -68871LL;
uint8_t x491 = 3U;
uint32_t x520 = UINT32_MAX;
static int16_t x522 = -14260;
int64_t x523 = INT64_MIN;
uint64_t x525 = 26732290564774879LLU;
uint64_t t97 = 108LLU;
volatile uint64_t t99 = 507176697449968528LLU;
volatile int8_t x537 = INT8_MIN;
uint32_t x538 = UINT32_MAX;
volatile uint64_t t101 = 49088LLU;
uint32_t x546 = 2032733U;
static int32_t x548 = INT32_MAX;
uint16_t x552 = 1U;
uint64_t x556 = 30689303381LLU;
int64_t x558 = -11994149395357635LL;
int32_t x567 = 324;
static int64_t x568 = -1LL;
int8_t x570 = INT8_MIN;
int16_t x575 = -186;
int32_t x576 = INT32_MIN;
int64_t x583 = -17378LL;
static uint64_t x587 = UINT64_MAX;
int32_t t112 = 3818;
int64_t x598 = INT64_MIN;
volatile uint32_t t117 = 39553715U;
uint16_t x626 = 336U;
int8_t x644 = INT8_MAX;
int8_t x645 = -1;
static int16_t x646 = INT16_MIN;
int16_t x647 = 253;
int16_t x648 = -1;
int16_t x649 = INT16_MAX;
uint8_t x651 = 106U;
int64_t x658 = 3LL;
static int32_t x667 = -1;
int64_t x675 = INT64_MIN;
int32_t x694 = INT32_MAX;
uint64_t x696 = 0LLU;
uint32_t x710 = 2U;
volatile int32_t x711 = INT32_MIN;
static int16_t x722 = INT16_MIN;
static volatile int64_t t134 = -185435433557LL;
int16_t x725 = INT16_MIN;
uint16_t x730 = 40U;
static int8_t x731 = 10;
static volatile uint8_t x737 = 0U;
int64_t x755 = INT64_MAX;
uint32_t x764 = 9960U;
uint8_t x775 = 10U;
uint64_t t141 = 171490274LLU;
volatile int32_t x796 = -1;
int32_t t143 = -24;
int32_t t144 = 43403;
static uint64_t t147 = 15895832124626333LLU;
static int64_t t148 = 6782855035075273LL;
volatile int8_t x831 = INT8_MIN;
volatile int8_t x837 = INT8_MIN;
int8_t x838 = INT8_MIN;
int16_t x840 = 165;
int8_t x842 = INT8_MIN;
volatile uint16_t x846 = 3U;
volatile int64_t x853 = -18421LL;
int16_t x856 = INT16_MAX;
static int64_t t156 = -3541043429110LL;
uint16_t x858 = 3539U;
volatile int16_t x860 = 2688;
int8_t x862 = 1;
static uint64_t x863 = UINT64_MAX;
int32_t x866 = INT32_MIN;
uint8_t x872 = 15U;
uint32_t x876 = 856U;
uint64_t x880 = UINT64_MAX;
uint64_t t162 = 60826LLU;
volatile int64_t x881 = -1LL;
volatile int64_t x882 = -1LL;
volatile uint8_t x894 = 1U;
uint32_t x895 = UINT32_MAX;
int16_t x909 = 1;
volatile int32_t x912 = INT32_MAX;
int16_t x917 = -858;
volatile uint32_t x920 = 7U;
volatile uint32_t t172 = 174U;
uint32_t x925 = 1409898U;
int16_t x926 = INT16_MAX;
int16_t x928 = INT16_MIN;
static uint32_t t173 = 219665661U;
static int64_t x938 = INT64_MIN;
static uint8_t x940 = 0U;
uint64_t x952 = 25531057LLU;
int8_t x954 = -1;
static int16_t x956 = -1;
static uint8_t x973 = 8U;
uint16_t x980 = UINT16_MAX;
static int32_t t183 = -680433869;
int16_t x981 = INT16_MAX;
static volatile uint64_t t184 = 28705LLU;
static int8_t x1001 = INT8_MIN;
static uint32_t x1007 = 1569649062U;
int16_t x1018 = 4;
int16_t x1020 = 60;
uint8_t x1025 = 0U;
volatile int32_t x1026 = -1;
int16_t x1037 = INT16_MIN;
static int8_t x1044 = -1;
int16_t x1049 = INT16_MIN;
uint32_t x1051 = 4037U;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = -1;
	static uint32_t x4 = 795823877U;
	volatile uint32_t t0 = 94297U;

    t0 = ((x1^(x2/x3))*x4);

    if (t0 != 1218699766U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	static int32_t x6 = INT32_MIN;
	uint32_t x8 = 0U;
	static volatile uint32_t t1 = 64186U;

    t1 = ((x5^(x6/x7))*x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint8_t x10 = UINT8_MAX;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 3U;

    t2 = ((x9^(x10/x11))*x12);

    if (t2 != 2147483903U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -1LL;
	uint64_t x14 = 21LLU;
	static uint32_t x15 = UINT32_MAX;
	static uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 9224LLU;

    t3 = ((x13^(x14/x15))*x16);

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	volatile uint32_t x19 = 1122293U;
	uint8_t x20 = UINT8_MAX;
	uint32_t t4 = 2398U;

    t4 = ((x17^(x18/x19))*x20);

    if (t4 != 4294934656U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x25 = 0U;
	static int32_t x26 = INT32_MIN;
	volatile int16_t x27 = -649;
	int32_t x28 = -1;
	static volatile int32_t t5 = 432635;

    t5 = ((x25^(x26/x27))*x28);

    if (t5 != -3308911) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x41 = 84LLU;
	static int16_t x43 = INT16_MIN;
	int16_t x44 = INT16_MIN;

    t6 = ((x41^(x42/x43))*x44);

    if (t6 != 2785280LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x46 = UINT8_MAX;
	int32_t x47 = -1;
	uint8_t x48 = 41U;
	volatile int32_t t7 = 242;

    t7 = ((x45^(x46/x47))*x48);

    if (t7 != -2676562) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x49 = -233;
	int8_t x50 = INT8_MAX;
	uint64_t x51 = 25813477LLU;
	volatile int8_t x52 = INT8_MAX;

    t8 = ((x49^(x50/x51))*x52);

    if (t8 != 18446744073709522025LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x53 = 2466U;
	volatile int16_t x55 = INT16_MAX;
	static int16_t x56 = -1;
	volatile uint32_t t9 = 88254U;

    t9 = ((x53^(x54/x55))*x56);

    if (t9 != 4294964830U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x57 = INT8_MAX;
	volatile int8_t x60 = -1;
	int64_t t10 = 69549LL;

    t10 = ((x57^(x58/x59))*x60);

    if (t10 != -127LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x61 = -35692;
	static volatile uint64_t x62 = UINT64_MAX;
	volatile int32_t x63 = -18;
	volatile uint64_t t11 = 193400894552117274LLU;

    t11 = ((x61^(x62/x63))*x64);

    if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x69 = 32285U;
	uint8_t x71 = UINT8_MAX;
	uint32_t x72 = UINT32_MAX;
	volatile uint64_t t12 = 8538LLU;

    t12 = ((x69^(x70/x71))*x72);

    if (t12 != 138654412341476LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x86 = INT64_MIN;
	static int32_t x87 = INT32_MIN;
	int16_t x88 = -15;
	volatile uint64_t t13 = 367868866886LLU;

    t13 = ((x85^(x86/x87))*x88);

    if (t13 != 18446744008882550386LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x89 = 0;
	volatile int64_t x90 = INT64_MAX;
	int8_t x91 = 22;
	volatile uint8_t x92 = 18U;
	volatile int64_t t14 = 4274343788LL;

    t14 = ((x89^(x90/x91))*x92);

    if (t14 != 7546395302881180200LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x93 = 31U;
	static int32_t x94 = INT32_MAX;
	volatile uint16_t x96 = 94U;
	int64_t t15 = -13053347894LL;

    t15 = ((x93^(x94/x95))*x96);

    if (t15 != 2914LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x97 = 52LLU;
	uint8_t x98 = 74U;
	uint16_t x99 = 3U;
	int32_t x100 = -1;
	uint64_t t16 = 448629LLU;

    t16 = ((x97^(x98/x99))*x100);

    if (t16 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x101 = 235015LL;
	static volatile uint32_t x102 = 233353735U;
	uint8_t x104 = UINT8_MAX;
	int64_t t17 = -20808702630144LL;

    t17 = ((x101^(x102/x103))*x104);

    if (t17 != 59928825LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x105 = UINT8_MAX;
	static uint32_t x106 = 38573U;
	volatile uint32_t x108 = 10247U;
	static volatile int64_t t18 = 7491499132LL;

    t18 = ((x105^(x106/x107))*x108);

    if (t18 != 2612985LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x113 = INT8_MAX;
	static uint32_t x114 = UINT32_MAX;
	int64_t x115 = INT64_MAX;
	uint16_t x116 = 22U;

    t19 = ((x113^(x114/x115))*x116);

    if (t19 != 2794LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x120 = -34622392942831LL;
	volatile uint64_t t20 = 3LLU;

    t20 = ((x117^(x118/x119))*x120);

    if (t20 != 855927792158715727LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x121 = -1LL;
	static int64_t x123 = INT64_MIN;
	static uint64_t x124 = UINT64_MAX;
	volatile uint64_t t21 = 19000832786LLU;

    t21 = ((x121^(x122/x123))*x124);

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x125 = -1;
	volatile uint16_t x126 = UINT16_MAX;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 7U;
	volatile int32_t t22 = 465183661;

    t22 = ((x125^(x126/x127))*x128);

    if (t22 != -7) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x133 = 1;
	int16_t x134 = 1;
	int32_t x135 = -1;
	volatile uint16_t x136 = 22U;
	volatile int32_t t23 = 3794;

    t23 = ((x133^(x134/x135))*x136);

    if (t23 != -44) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x138 = 6;
	volatile int16_t x139 = -1;
	int64_t x140 = 23046LL;
	static volatile int64_t t24 = 51877869074332LL;

    t24 = ((x137^(x138/x139))*x140);

    if (t24 != -755056098LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x141 = INT16_MIN;
	int64_t t25 = 0LL;

    t25 = ((x141^(x142/x143))*x144);

    if (t25 != -1073709056LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x145 = 11141U;
	uint32_t x147 = UINT32_MAX;
	volatile uint32_t t26 = 3262227U;

    t26 = ((x145^(x146/x147))*x148);

    if (t26 != 2840955U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x149 = 0U;
	uint64_t x151 = 74428315LLU;
	static int64_t x152 = 911997516099LL;

    t27 = ((x149^(x150/x151))*x152);

    if (t27 != 12615438804081594147LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x154 = 23;
	int64_t x155 = INT64_MIN;
	volatile int64_t t28 = 77605908812832LL;

    t28 = ((x153^(x154/x155))*x156);

    if (t28 != 33732673134930LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x157 = INT8_MAX;
	int16_t x158 = 1710;
	int64_t x159 = -1LL;
	static int32_t x160 = INT32_MIN;
	int64_t t29 = 19016128870LL;

    t29 = ((x157^(x158/x159))*x160);

    if (t29 != 3751653933056LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x161 = -1LL;
	uint32_t x162 = UINT32_MAX;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	int64_t t30 = -19LL;

    t30 = ((x161^(x162/x163))*x164);

    if (t30 != 4294967296LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x177 = INT64_MAX;
	static int8_t x178 = -1;
	int8_t x180 = -1;
	int64_t t31 = 132612077382LL;

    t31 = ((x177^(x178/x179))*x180);

    if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x185 = 3638784044896LLU;
	int16_t x186 = INT16_MAX;
	uint8_t x187 = 114U;
	uint32_t x188 = 207256U;

    t32 = ((x185^(x186/x187))*x188);

    if (t32 != 754159825962332776LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x189 = UINT32_MAX;
	int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MAX;
	volatile uint8_t x192 = 21U;

    t33 = ((x189^(x190/x191))*x192);

    if (t33 != 4294967275U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x195 = 125684U;
	int32_t x196 = 664465;
	volatile uint32_t t34 = 453U;

    t34 = ((x193^(x194/x195))*x196);

    if (t34 != 3322325U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x197 = 1833043LLU;
	volatile int16_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	volatile int32_t x200 = -1;
	volatile uint64_t t35 = 64364499240683180LLU;

    t35 = ((x197^(x198/x199))*x200);

    if (t35 != 18446744073707718574LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x201 = INT64_MAX;
	uint64_t x202 = UINT64_MAX;
	uint32_t x203 = 116508709U;

    t36 = ((x201^(x202/x203))*x204);

    if (t36 != 9212995925203983938LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x205 = -11;
	int64_t x206 = INT64_MAX;
	uint16_t x207 = 28U;
	uint16_t x208 = 3U;
	int64_t t37 = -44179712LL;

    t37 = ((x205^(x206/x207))*x208);

    if (t37 != -988218432520154571LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x210 = UINT64_MAX;
	uint32_t x211 = 24352U;
	int64_t x212 = -1LL;
	volatile uint64_t t38 = 12587716063987701LLU;

    t38 = ((x209^(x210/x211))*x212);

    if (t38 != 18445986566924316570LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x217 = UINT8_MAX;
	int64_t x218 = INT64_MAX;
	static volatile uint32_t x219 = 54U;
	static uint8_t x220 = 4U;
	int64_t t39 = 16905LL;

    t39 = ((x217^(x218/x219))*x220);

    if (t39 != 683212743470725080LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MAX;
	volatile int32_t x224 = -1;

    t40 = ((x221^(x222/x223))*x224);

    if (t40 != 4294967169U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x229 = UINT32_MAX;
	uint16_t x230 = UINT16_MAX;
	static int32_t x231 = INT32_MIN;
	uint16_t x232 = 96U;
	volatile uint32_t t41 = 9U;

    t41 = ((x229^(x230/x231))*x232);

    if (t41 != 4294967200U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x233 = 53;
	static int16_t x234 = INT16_MIN;
	uint32_t x235 = 6837U;
	int8_t x236 = 6;

    t42 = ((x233^(x234/x235))*x236);

    if (t42 != 3769200U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x237 = -1;
	uint16_t x238 = 251U;
	uint16_t x240 = 11U;
	int64_t t43 = 213LL;

    t43 = ((x237^(x238/x239))*x240);

    if (t43 != -11LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x245 = INT16_MAX;
	volatile uint8_t x246 = UINT8_MAX;
	static uint32_t x247 = 232240U;
	uint64_t x248 = UINT64_MAX;
	uint64_t t44 = 147731537594625672LLU;

    t44 = ((x245^(x246/x247))*x248);

    if (t44 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x249 = 9289U;
	uint32_t x250 = UINT32_MAX;
	int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	uint32_t t45 = 0U;

    t45 = ((x249^(x250/x251))*x252);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x257 = 241581U;
	int64_t x258 = 947954716863LL;
	int64_t x259 = -1LL;
	static volatile int64_t t46 = -8079857298061954LL;

    t46 = ((x257^(x258/x259))*x260);

    if (t46 != -241728480892140LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x265 = 54U;
	uint32_t x266 = UINT32_MAX;
	volatile uint64_t x267 = 8548408904945681660LLU;
	static uint64_t t47 = 9703301467711139LLU;

    t47 = ((x265^(x266/x267))*x268);

    if (t47 != 18446744073709544704LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x270 = 3336245;
	int32_t x272 = INT32_MIN;
	volatile uint32_t t48 = 277U;

    t48 = ((x269^(x270/x271))*x272);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x273 = -1;
	volatile int16_t x274 = INT16_MIN;
	static int64_t x275 = INT64_MIN;
	static int32_t x276 = INT32_MIN;
	volatile int64_t t49 = -310LL;

    t49 = ((x273^(x274/x275))*x276);

    if (t49 != 2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x281 = -24871;
	volatile uint32_t t50 = 22740U;

    t50 = ((x281^(x282/x283))*x284);

    if (t50 != 4294942346U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x285 = 1;
	int8_t x286 = 29;
	static int32_t x287 = -208116;
	volatile int32_t t51 = 1;

    t51 = ((x285^(x286/x287))*x288);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x293 = UINT64_MAX;
	volatile uint16_t x294 = 5125U;
	int16_t x295 = INT16_MIN;
	static int8_t x296 = 1;
	uint64_t t52 = UINT64_MAX;

    t52 = ((x293^(x294/x295))*x296);

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x297 = 6117129468206LLU;
	int16_t x298 = INT16_MIN;
	static uint64_t x299 = 870254LLU;
	volatile uint8_t x300 = 25U;
	volatile uint64_t t53 = 3514600321667718350LLU;

    t53 = ((x297^(x298/x299))*x300);

    if (t53 != 627822215823925LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x305 = 250273LLU;
	uint16_t x307 = UINT16_MAX;
	int8_t x308 = 11;
	uint64_t t54 = 1546021082710952LLU;

    t54 = ((x305^(x306/x307))*x308);

    if (t54 != 3096271990489568LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MIN;
	volatile int16_t x311 = INT16_MIN;
	int64_t x312 = -1LL;
	static volatile int64_t t55 = INT64_MAX;

    t55 = ((x309^(x310/x311))*x312);

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x314 = 0U;
	static uint8_t x316 = 2U;
	int32_t t56 = 15129069;

    t56 = ((x313^(x314/x315))*x316);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x317 = 13U;
	int16_t x319 = 14782;
	uint64_t x320 = UINT64_MAX;

    t57 = ((x317^(x318/x319))*x320);

    if (t57 != 69LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x321 = -22;
	static uint32_t x322 = UINT32_MAX;
	volatile int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MAX;
	uint32_t t58 = 21719U;

    t58 = ((x321^(x322/x323))*x324);

    if (t58 != 4261480454U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x325 = UINT64_MAX;
	int64_t x327 = INT64_MIN;
	uint64_t t59 = 3741399126557935821LLU;

    t59 = ((x325^(x326/x327))*x328);

    if (t59 != 18446744073323352691LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x329 = INT64_MAX;
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = INT64_MIN;
	int64_t x332 = INT64_MIN;

    t60 = ((x329^(x330/x331))*x332);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x333 = UINT64_MAX;
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = -1;
	volatile int8_t x336 = INT8_MIN;
	uint64_t t61 = 116835927405310888LLU;

    t61 = ((x333^(x334/x335))*x336);

    if (t61 != 18446744073701163264LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x341 = INT32_MIN;
	uint64_t x342 = 2745701143365LLU;
	int32_t x343 = 30069;
	int64_t x344 = -1LL;

    t62 = ((x341^(x342/x343))*x344);

    if (t62 != 2056170298LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x345 = 0;
	int32_t x346 = -1;
	static uint64_t x347 = UINT64_MAX;
	uint64_t x348 = 9LLU;
	volatile uint64_t t63 = 3306552209LLU;

    t63 = ((x345^(x346/x347))*x348);

    if (t63 != 9LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x349 = 1U;
	static uint16_t x350 = 58U;
	int32_t t64 = -70020;

    t64 = ((x349^(x350/x351))*x352);

    if (t64 != -411) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x354 = UINT32_MAX;
	volatile int32_t x355 = INT32_MIN;
	static volatile uint8_t x356 = 43U;

    t65 = ((x353^(x354/x355))*x356);

    if (t65 != 4294967210U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x357 = -1;
	int16_t x358 = INT16_MAX;
	volatile int16_t x360 = INT16_MIN;

    t66 = ((x357^(x358/x359))*x360);

    if (t66 != 32768LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x369 = 119169530LLU;
	uint64_t t67 = 20655884603351754LLU;

    t67 = ((x369^(x370/x371))*x372);

    if (t67 != 255914612719878144LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x373 = UINT16_MAX;
	volatile int16_t x374 = -6899;
	uint64_t x375 = 2036108LLU;
	static uint8_t x376 = UINT8_MAX;
	uint64_t t68 = 3LLU;

    t68 = ((x373^(x374/x375))*x376);

    if (t68 != 2310250615417095LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x378 = -4012;
	volatile uint64_t x380 = UINT64_MAX;
	static volatile uint64_t t69 = 1LLU;

    t69 = ((x377^(x378/x379))*x380);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x381 = -26058215;
	static int32_t x382 = -1;
	int16_t x383 = INT16_MIN;
	volatile uint8_t x384 = 1U;

    t70 = ((x381^(x382/x383))*x384);

    if (t70 != -26058215) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MIN;
	uint16_t x388 = 2538U;
	int32_t t71 = -21051;

    t71 = ((x385^(x386/x387))*x388);

    if (t71 != -83162646) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x389 = -1LL;
	int8_t x390 = INT8_MAX;
	uint16_t x391 = UINT16_MAX;
	volatile int32_t x392 = -1;
	static int64_t t72 = 285367529527968917LL;

    t72 = ((x389^(x390/x391))*x392);

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x393 = 106;
	volatile int32_t x394 = -41395;
	uint64_t x395 = 1726029468680570834LLU;
	volatile uint64_t t73 = 38181483231LLU;

    t73 = ((x393^(x394/x395))*x396);

    if (t73 != 12192LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x405 = -70241;
	uint64_t x406 = 60640217600224LLU;
	int8_t x407 = -1;
	int8_t x408 = 0;
	uint64_t t74 = 7967532491LLU;

    t74 = ((x405^(x406/x407))*x408);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x409 = INT16_MAX;
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = INT64_MIN;
	volatile uint64_t t75 = 16487742583365886LLU;

    t75 = ((x409^(x410/x411))*x412);

    if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x413 = INT32_MAX;
	int8_t x414 = INT8_MIN;
	int64_t x415 = 25433291017013LL;
	static int16_t x416 = -1;
	volatile int64_t t76 = -3329379054370LL;

    t76 = ((x413^(x414/x415))*x416);

    if (t76 != -2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x418 = INT8_MAX;
	int16_t x419 = INT16_MIN;
	uint64_t x420 = 3872332300797LLU;

    t77 = ((x417^(x418/x419))*x420);

    if (t77 != 480169205298828LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x421 = INT8_MIN;
	volatile int16_t x422 = 16;
	static uint8_t x423 = 26U;
	volatile uint32_t t78 = 3U;

    t78 = ((x421^(x422/x423))*x424);

    if (t78 != 4294967040U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x425 = INT8_MIN;
	uint8_t x426 = 0U;
	int16_t x427 = INT16_MIN;
	int8_t x428 = 2;
	int32_t t79 = -4409;

    t79 = ((x425^(x426/x427))*x428);

    if (t79 != -256) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x429 = 246306054U;
	int32_t x430 = INT32_MIN;
	int64_t x431 = INT64_MIN;
	static volatile uint8_t x432 = UINT8_MAX;
	volatile int64_t t80 = 4LL;

    t80 = ((x429^(x430/x431))*x432);

    if (t80 != 62808043770LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x434 = 6844397U;
	volatile int32_t x435 = 7108;
	static int32_t x436 = -1;
	static volatile uint32_t t81 = 76211U;

    t81 = ((x433^(x434/x435))*x436);

    if (t81 != 962U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x437 = INT16_MAX;
	int32_t x438 = INT32_MAX;
	static int16_t x439 = -1;
	uint64_t x440 = 7024618938408LLU;
	volatile uint64_t t82 = 14401732516LLU;

    t82 = ((x437^(x438/x439))*x440);

    if (t82 != 4412517296249946032LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x441 = INT16_MIN;
	static uint64_t x442 = UINT64_MAX;
	uint64_t x444 = UINT64_MAX;
	uint64_t t83 = 1LLU;

    t83 = ((x441^(x442/x443))*x444);

    if (t83 != 32767LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x445 = 7377010;
	int8_t x446 = 1;
	int64_t t84 = 413606608310LL;

    t84 = ((x445^(x446/x447))*x448);

    if (t84 != -7377010LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x449 = -1;
	int16_t x450 = -1;
	static int16_t x451 = -1;
	static volatile int64_t t85 = 50851LL;

    t85 = ((x449^(x450/x451))*x452);

    if (t85 != 5695767160LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x455 = 1;
	uint32_t x456 = 145368U;
	volatile uint64_t t86 = 20LLU;

    t86 = ((x453^(x454/x455))*x456);

    if (t86 != 77203205471880LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x461 = -1;
	uint16_t x463 = UINT16_MAX;
	int8_t x464 = -1;
	volatile int32_t t87 = -3592;

    t87 = ((x461^(x462/x463))*x464);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x469 = -7;
	uint32_t x470 = 2503U;
	static int32_t x471 = INT32_MAX;
	int8_t x472 = INT8_MIN;
	volatile uint32_t t88 = 1U;

    t88 = ((x469^(x470/x471))*x472);

    if (t88 != 896U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x477 = -58;
	volatile int64_t x478 = -1LL;
	volatile uint64_t t89 = 3829511652126LLU;

    t89 = ((x477^(x478/x479))*x480);

    if (t89 != 58LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x481 = 1U;
	int64_t x483 = -1LL;
	volatile int16_t x484 = 44;

    t90 = ((x481^(x482/x483))*x484);

    if (t90 != -2883584LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x485 = 1U;
	uint32_t x486 = UINT32_MAX;
	static int64_t x487 = -1LL;
	volatile int16_t x488 = -239;
	int64_t t91 = -474254527LL;

    t91 = ((x485^(x486/x487))*x488);

    if (t91 != 1026497183744LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x489 = UINT64_MAX;
	volatile int64_t x490 = INT64_MAX;
	volatile int32_t x492 = INT32_MAX;
	static uint64_t t92 = 89463299292942LLU;

    t92 = ((x489^(x490/x491))*x492);

    if (t92 != 15372286727375465131LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x505 = UINT32_MAX;
	int8_t x506 = 3;
	static uint8_t x507 = 101U;
	static volatile uint8_t x508 = UINT8_MAX;
	uint32_t t93 = 0U;

    t93 = ((x505^(x506/x507))*x508);

    if (t93 != 4294967041U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x509 = 64U;
	int64_t x510 = -1LL;
	int16_t x511 = INT16_MAX;
	volatile uint32_t x512 = UINT32_MAX;
	int64_t t94 = -140224LL;

    t94 = ((x509^(x510/x511))*x512);

    if (t94 != 274877906880LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x517 = 19U;
	int32_t x518 = INT32_MIN;
	int32_t x519 = INT32_MIN;
	uint32_t t95 = 664149U;

    t95 = ((x517^(x518/x519))*x520);

    if (t95 != 4294967278U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x521 = -1LL;
	volatile int64_t x524 = INT64_MAX;
	int64_t t96 = -14443LL;

    t96 = ((x521^(x522/x523))*x524);

    if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x526 = INT64_MAX;
	int32_t x527 = 35768980;
	static int64_t x528 = -224763LL;

    t97 = ((x525^(x526/x527))*x528);

    if (t97 != 5212637742235832504LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x529 = 4352279896223219LLU;
	volatile int8_t x530 = INT8_MAX;
	int16_t x531 = -2470;
	int64_t x532 = INT64_MIN;
	uint64_t t98 = 316LLU;

    t98 = ((x529^(x530/x531))*x532);

    if (t98 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x533 = 2051626LLU;
	static int16_t x534 = 0;
	uint16_t x535 = 372U;
	static int8_t x536 = -1;

    t99 = ((x533^(x534/x535))*x536);

    if (t99 != 18446744073707499990LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x539 = -1LL;
	uint8_t x540 = 0U;
	int64_t t100 = 2051831895613898347LL;

    t100 = ((x537^(x538/x539))*x540);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x541 = INT16_MIN;
	uint64_t x542 = 1952043031LLU;
	static volatile uint32_t x543 = 444941U;
	int32_t x544 = INT32_MIN;

    t101 = ((x541^(x542/x543))*x544);

    if (t101 != 60947733413888LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x545 = INT8_MIN;
	uint16_t x547 = 181U;
	static uint32_t t102 = 0U;

    t102 = ((x545^(x546/x547))*x548);

    if (t102 != 11170U) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x549 = UINT64_MAX;
	uint32_t x550 = UINT32_MAX;
	int8_t x551 = -6;
	static uint64_t t103 = 25158040LLU;

    t103 = ((x549^(x550/x551))*x552);

    if (t103 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x553 = 52815U;
	int8_t x554 = INT8_MIN;
	int8_t x555 = INT8_MAX;
	static volatile uint64_t t104 = 6200559922LLU;

    t104 = ((x553^(x554/x555))*x556);

    if (t104 != 2680724956202995568LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x557 = -9776;
	volatile int32_t x559 = -1;
	int8_t x560 = 1;
	volatile int64_t t105 = 20002716626LL;

    t105 = ((x557^(x558/x559))*x560);

    if (t105 != -11994149395364333LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x565 = UINT32_MAX;
	volatile int64_t x566 = INT64_MIN;
	volatile int64_t t106 = -262566691172LL;

    t106 = ((x565^(x566/x567))*x568);

    if (t106 != 28467193773840512LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x569 = INT8_MIN;
	int16_t x571 = 1;
	int64_t x572 = -1LL;
	volatile int64_t t107 = 129219843834375LL;

    t107 = ((x569^(x570/x571))*x572);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x573 = 89LLU;
	static int64_t x574 = INT64_MIN;
	static volatile uint64_t t108 = 119579535LLU;

    t108 = ((x573^(x574/x575))*x576);

    if (t108 != 9124195836773793792LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x577 = 2784U;
	uint32_t x578 = 195692921U;
	volatile int16_t x579 = -1;
	int32_t x580 = -13105685;
	uint32_t t109 = 1191226509U;

    t109 = ((x577^(x578/x579))*x580);

    if (t109 != 2168478624U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x581 = -1;
	uint16_t x582 = 5871U;
	uint8_t x584 = 1U;
	int64_t t110 = -202273593482434365LL;

    t110 = ((x581^(x582/x583))*x584);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x585 = -14;
	int64_t x586 = -42LL;
	int8_t x588 = INT8_MIN;
	volatile uint64_t t111 = 6150566521294029LLU;

    t111 = ((x585^(x586/x587))*x588);

    if (t111 != 1792LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x593 = INT16_MIN;
	static volatile int8_t x594 = -1;
	static uint8_t x595 = 6U;
	int8_t x596 = -1;

    t112 = ((x593^(x594/x595))*x596);

    if (t112 != 32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x597 = -253;
	uint8_t x599 = UINT8_MAX;
	uint8_t x600 = 5U;
	static int64_t t113 = 26655193122LL;

    t113 = ((x597^(x598/x599))*x600);

    if (t113 != 180850432095191695LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x605 = UINT8_MAX;
	int64_t x606 = -104309LL;
	int64_t x607 = INT64_MAX;
	int32_t x608 = -1;
	static int64_t t114 = -2654582280169LL;

    t114 = ((x605^(x606/x607))*x608);

    if (t114 != -255LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x609 = -1;
	uint16_t x610 = 12U;
	uint16_t x611 = 2445U;
	int32_t x612 = INT32_MAX;
	volatile int32_t t115 = 3;

    t115 = ((x609^(x610/x611))*x612);

    if (t115 != -2147483647) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x613 = 229496510853LLU;
	static uint8_t x614 = 0U;
	int8_t x615 = -4;
	static int16_t x616 = INT16_MIN;
	static volatile uint64_t t116 = 1098876477945LLU;

    t116 = ((x613^(x614/x615))*x616);

    if (t116 != 18439223932041920512LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x617 = 438U;
	static int8_t x618 = 1;
	int16_t x619 = INT16_MIN;
	uint8_t x620 = 7U;

    t117 = ((x617^(x618/x619))*x620);

    if (t117 != 3066U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x625 = INT16_MIN;
	int8_t x627 = INT8_MIN;
	int8_t x628 = 1;
	volatile int32_t t118 = 1;

    t118 = ((x625^(x626/x627))*x628);

    if (t118 != 32766) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x629 = INT8_MAX;
	int16_t x630 = INT16_MIN;
	int64_t x631 = INT64_MIN;
	int32_t x632 = -1;
	int64_t t119 = 11477582LL;

    t119 = ((x629^(x630/x631))*x632);

    if (t119 != -127LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x633 = -1;
	uint8_t x634 = UINT8_MAX;
	int8_t x635 = INT8_MIN;
	volatile uint16_t x636 = UINT16_MAX;
	volatile int32_t t120 = -28374502;

    t120 = ((x633^(x634/x635))*x636);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x637 = INT16_MIN;
	static int8_t x638 = 1;
	uint8_t x639 = 23U;
	volatile int16_t x640 = 9346;
	volatile int32_t t121 = -10299594;

    t121 = ((x637^(x638/x639))*x640);

    if (t121 != -306249728) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x641 = INT16_MAX;
	volatile int16_t x642 = INT16_MIN;
	int64_t x643 = INT64_MAX;
	int64_t t122 = -20434595074525951LL;

    t122 = ((x641^(x642/x643))*x644);

    if (t122 != 4161409LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t t123 = -40273;

    t123 = ((x645^(x646/x647))*x648);

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x650 = 56692436867506194LL;
	volatile int8_t x652 = INT8_MIN;
	volatile int64_t t124 = 9991750638568LL;

    t124 = ((x649^(x650/x651))*x652);

    if (t124 != -68458791688925440LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x657 = UINT16_MAX;
	int8_t x659 = -1;
	int32_t x660 = INT32_MIN;
	static int64_t t125 = 2025081LL;

    t125 = ((x657^(x658/x659))*x660);

    if (t125 != 140733193388032LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x661 = 2045U;
	volatile uint32_t x662 = UINT32_MAX;
	static uint16_t x663 = UINT16_MAX;
	static uint16_t x664 = 1U;
	volatile uint32_t t126 = 6045052U;

    t126 = ((x661^(x662/x663))*x664);

    if (t126 != 67580U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x665 = -48;
	int64_t x666 = -1LL;
	uint8_t x668 = 4U;
	int64_t t127 = 3064LL;

    t127 = ((x665^(x666/x667))*x668);

    if (t127 != -188LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x669 = 1;
	int8_t x670 = INT8_MIN;
	int8_t x671 = -18;
	volatile int8_t x672 = INT8_MAX;
	volatile int32_t t128 = -3196;

    t128 = ((x669^(x670/x671))*x672);

    if (t128 != 762) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x673 = -1;
	uint64_t x674 = 1LLU;
	uint32_t x676 = 1275U;
	uint64_t t129 = 34825430660659962LLU;

    t129 = ((x673^(x674/x675))*x676);

    if (t129 != 18446744073709550341LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x693 = 1911393569428LL;
	uint16_t x695 = UINT16_MAX;
	static volatile uint64_t t130 = 421LLU;

    t130 = ((x693^(x694/x695))*x696);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x697 = 122U;
	int16_t x698 = 14;
	static int32_t x699 = -1;
	static uint32_t x700 = 86483139U;
	volatile uint32_t t131 = 893U;

    t131 = ((x697^(x698/x699))*x700);

    if (t131 != 2506925208U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x701 = 0;
	int16_t x702 = -1;
	int32_t x703 = 6596;
	volatile uint8_t x704 = 3U;
	volatile int32_t t132 = 0;

    t132 = ((x701^(x702/x703))*x704);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x709 = -1;
	uint16_t x712 = 128U;
	volatile uint32_t t133 = 3U;

    t133 = ((x709^(x710/x711))*x712);

    if (t133 != 4294967168U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x721 = INT8_MAX;
	static int64_t x723 = -1LL;
	volatile int16_t x724 = INT16_MIN;

    t134 = ((x721^(x722/x723))*x724);

    if (t134 != -1077903360LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x726 = -7603770878263LL;
	uint16_t x727 = UINT16_MAX;
	uint16_t x728 = UINT16_MAX;
	volatile int64_t t135 = 285759656509407788LL;

    t135 = ((x725^(x726/x727))*x728);

    if (t135 != 7602328824570LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x729 = 32;
	volatile uint64_t x732 = 196284LLU;
	uint64_t t136 = 299233486LLU;

    t136 = ((x729^(x730/x731))*x732);

    if (t136 != 7066224LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x738 = 8458U;
	int32_t x739 = INT32_MIN;
	volatile int64_t x740 = -1LL;
	int64_t t137 = 24333533LL;

    t137 = ((x737^(x738/x739))*x740);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x753 = -107286LL;
	volatile uint16_t x754 = 55U;
	volatile int8_t x756 = INT8_MIN;
	int64_t t138 = 9048848620LL;

    t138 = ((x753^(x754/x755))*x756);

    if (t138 != 13732608LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	int8_t x762 = INT8_MIN;
	int8_t x763 = 1;
	static uint32_t t139 = 1021013625U;

    t139 = ((x761^(x762/x763))*x764);

    if (t139 != 4293682456U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x773 = -1;
	uint64_t x774 = 4285LLU;
	uint16_t x776 = 36U;
	uint64_t t140 = 12884911694656627LLU;

    t140 = ((x773^(x774/x775))*x776);

    if (t140 != 18446744073709536172LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x777 = -1;
	uint8_t x778 = 0U;
	uint64_t x779 = UINT64_MAX;
	uint16_t x780 = 12120U;

    t141 = ((x777^(x778/x779))*x780);

    if (t141 != 18446744073709539496LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x781 = 28U;
	volatile uint16_t x782 = UINT16_MAX;
	int64_t x783 = -307861279255741497LL;
	int32_t x784 = INT32_MIN;
	int64_t t142 = 344857845LL;

    t142 = ((x781^(x782/x783))*x784);

    if (t142 != -60129542144LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x793 = -1;
	int16_t x794 = -5489;
	uint8_t x795 = 1U;

    t143 = ((x793^(x794/x795))*x796);

    if (t143 != -5488) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x801 = -1;
	static int32_t x802 = INT32_MIN;
	volatile int32_t x803 = INT32_MIN;
	uint16_t x804 = 6944U;

    t144 = ((x801^(x802/x803))*x804);

    if (t144 != -13888) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x805 = -1;
	volatile int8_t x806 = -1;
	volatile uint64_t x807 = 12373LLU;
	static int32_t x808 = INT32_MIN;
	volatile uint64_t t145 = 12757558472633065LLU;

    t145 = ((x805^(x806/x807))*x808);

    if (t145 != 1523686450514624512LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x809 = 71870744715LLU;
	uint64_t x810 = 6LLU;
	static uint8_t x811 = 17U;
	uint64_t x812 = 7778353395983566116LLU;
	volatile uint64_t t146 = 163673515115689LLU;

    t146 = ((x809^(x810/x811))*x812);

    if (t146 != 15418984070792948364LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x813 = UINT64_MAX;
	static volatile int64_t x814 = -1LL;
	int8_t x815 = INT8_MAX;
	int32_t x816 = -1;

    t147 = ((x813^(x814/x815))*x816);

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x817 = 2276U;
	int32_t x818 = -3;
	int64_t x819 = -42481522050LL;
	static int32_t x820 = -3682630;

    t148 = ((x817^(x818/x819))*x820);

    if (t148 != -8381665880LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x825 = INT8_MIN;
	uint16_t x826 = UINT16_MAX;
	uint16_t x827 = 1U;
	int16_t x828 = INT16_MIN;
	int32_t t149 = -41;

    t149 = ((x825^(x826/x827))*x828);

    if (t149 != 2143322112) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x829 = 12704523LLU;
	volatile int8_t x830 = -2;
	volatile int16_t x832 = -4;
	uint64_t t150 = 0LLU;

    t150 = ((x829^(x830/x831))*x832);

    if (t150 != 18446744073658733524LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x833 = INT16_MIN;
	uint32_t x834 = 0U;
	static volatile int32_t x835 = INT32_MIN;
	int64_t x836 = -1LL;
	volatile int64_t t151 = 55LL;

    t151 = ((x833^(x834/x835))*x836);

    if (t151 != -4294934528LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x839 = INT32_MIN;
	volatile int32_t t152 = -4908840;

    t152 = ((x837^(x838/x839))*x840);

    if (t152 != -21120) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x841 = 1;
	static uint16_t x843 = 215U;
	uint64_t x844 = 26063076996542LLU;
	volatile uint64_t t153 = 2978264241715LLU;

    t153 = ((x841^(x842/x843))*x844);

    if (t153 != 26063076996542LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x845 = INT8_MAX;
	uint64_t x847 = UINT64_MAX;
	int32_t x848 = -14736779;
	uint64_t t154 = 1040150LLU;

    t154 = ((x845^(x846/x847))*x848);

    if (t154 != 18446744071837980683LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x849 = INT32_MIN;
	int16_t x850 = INT16_MIN;
	uint32_t x851 = UINT32_MAX;
	int64_t x852 = -23663LL;
	volatile int64_t t155 = -65207191342LL;

    t155 = ((x849^(x850/x851))*x852);

    if (t155 != -50815905562624LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x854 = UINT8_MAX;
	int8_t x855 = 44;

    t156 = ((x853^(x854/x855))*x856);

    if (t156 != -603502606LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x857 = INT8_MIN;
	int32_t x859 = INT32_MIN;
	int32_t t157 = 61600192;

    t157 = ((x857^(x858/x859))*x860);

    if (t157 != -344064) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x861 = -28619256152LL;
	static uint8_t x864 = 31U;
	volatile uint64_t t158 = 23085LLU;

    t158 = ((x861^(x862/x863))*x864);

    if (t158 != 18446743186512610904LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x865 = UINT16_MAX;
	uint32_t x867 = UINT32_MAX;
	static int32_t x868 = INT32_MIN;
	static volatile uint32_t t159 = 21100U;

    t159 = ((x865^(x866/x867))*x868);

    if (t159 != 2147483648U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x869 = -1;
	uint8_t x870 = 1U;
	static volatile int16_t x871 = INT16_MIN;
	static int32_t t160 = 16919;

    t160 = ((x869^(x870/x871))*x872);

    if (t160 != -15) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x873 = UINT32_MAX;
	static int16_t x874 = -1;
	int32_t x875 = -15956;
	uint32_t t161 = 13858U;

    t161 = ((x873^(x874/x875))*x876);

    if (t161 != 4294966440U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x877 = INT32_MAX;
	volatile int32_t x878 = -1;
	volatile uint16_t x879 = 28237U;

    t162 = ((x877^(x878/x879))*x880);

    if (t162 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x883 = INT16_MAX;
	static int32_t x884 = -799617491;
	volatile int64_t t163 = 1749340192423128597LL;

    t163 = ((x881^(x882/x883))*x884);

    if (t163 != 799617491LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x885 = UINT16_MAX;
	static volatile int16_t x886 = INT16_MAX;
	uint64_t x887 = UINT64_MAX;
	int8_t x888 = INT8_MIN;
	volatile uint64_t t164 = 114348770443999LLU;

    t164 = ((x885^(x886/x887))*x888);

    if (t164 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x889 = INT32_MAX;
	int64_t x890 = 23LL;
	uint8_t x891 = 28U;
	static volatile uint8_t x892 = 3U;
	int64_t t165 = 5459LL;

    t165 = ((x889^(x890/x891))*x892);

    if (t165 != 6442450941LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x893 = 1;
	int64_t x896 = -33941083614806LL;
	volatile int64_t t166 = 128066634023302472LL;

    t166 = ((x893^(x894/x895))*x896);

    if (t166 != -33941083614806LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x901 = 12498U;
	uint16_t x902 = 2472U;
	int32_t x903 = INT32_MIN;
	uint64_t x904 = UINT64_MAX;
	static volatile uint64_t t167 = 1258109199168027062LLU;

    t167 = ((x901^(x902/x903))*x904);

    if (t167 != 18446744073709539118LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x905 = 1U;
	uint64_t x906 = 68398048846LLU;
	volatile uint16_t x907 = 1U;
	int16_t x908 = INT16_MAX;
	static uint64_t t168 = 2634820158LLU;

    t168 = ((x905^(x906/x907))*x908);

    if (t168 != 2241198866569649LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x910 = 16U;
	static uint64_t x911 = UINT64_MAX;
	volatile uint64_t t169 = 4455819241384189589LLU;

    t169 = ((x909^(x910/x911))*x912);

    if (t169 != 2147483647LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x913 = INT16_MIN;
	int32_t x914 = INT32_MIN;
	volatile uint32_t x915 = 70554U;
	int32_t x916 = INT32_MIN;
	volatile uint32_t t170 = 125U;

    t170 = ((x913^(x914/x915))*x916);

    if (t170 != 2147483648U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x918 = -1LL;
	volatile int16_t x919 = -1;
	volatile int64_t t171 = 181331LL;

    t171 = ((x917^(x918/x919))*x920);

    if (t171 != -5999LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x921 = 55491U;
	uint16_t x922 = UINT16_MAX;
	uint32_t x923 = 171269005U;
	uint32_t x924 = 95910518U;

    t172 = ((x921^(x922/x923))*x924);

    if (t172 != 706074594U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x927 = -144413;

    t173 = ((x925^(x926/x927))*x928);

    if (t173 != 1045102592U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x929 = 14U;
	volatile int16_t x930 = -1;
	uint32_t x931 = 2143731748U;
	int32_t x932 = -1;
	static uint32_t t174 = 93U;

    t174 = ((x929^(x930/x931))*x932);

    if (t174 != 4294967284U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x933 = INT16_MAX;
	uint32_t x934 = 1000336U;
	uint64_t x935 = 574685846LLU;
	int32_t x936 = INT32_MIN;
	volatile uint64_t t175 = 107384760867730771LLU;

    t175 = ((x933^(x934/x935))*x936);

    if (t175 != 18446673707112857600LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x937 = 0U;
	uint64_t x939 = 754380689864284LLU;
	volatile uint64_t t176 = 15608997116094LLU;

    t176 = ((x937^(x938/x939))*x940);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x945 = INT8_MAX;
	uint16_t x946 = UINT16_MAX;
	static uint32_t x947 = UINT32_MAX;
	int8_t x948 = INT8_MIN;
	static volatile uint32_t t177 = 4U;

    t177 = ((x945^(x946/x947))*x948);

    if (t177 != 4294951040U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x949 = INT8_MIN;
	int8_t x950 = INT8_MIN;
	int16_t x951 = INT16_MIN;
	uint64_t t178 = 172098094LLU;

    t178 = ((x949^(x950/x951))*x952);

    if (t178 != 18446744070441576320LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x953 = INT8_MAX;
	static uint32_t x955 = 10673172U;
	volatile uint32_t t179 = 11U;

    t179 = ((x953^(x954/x955))*x956);

    if (t179 != 4294966803U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x961 = 184U;
	uint8_t x962 = 7U;
	int64_t x963 = INT64_MIN;
	int32_t x964 = INT32_MIN;
	volatile int64_t t180 = -18082LL;

    t180 = ((x961^(x962/x963))*x964);

    if (t180 != -395136991232LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x969 = 0;
	int8_t x970 = -1;
	uint16_t x971 = UINT16_MAX;
	volatile int8_t x972 = INT8_MAX;
	volatile int32_t t181 = -221851113;

    t181 = ((x969^(x970/x971))*x972);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x974 = INT32_MAX;
	int64_t x975 = -1LL;
	static volatile uint8_t x976 = UINT8_MAX;
	int64_t t182 = -109962LL;

    t182 = ((x973^(x974/x975))*x976);

    if (t182 != -547608327945LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x977 = INT16_MIN;
	int16_t x978 = INT16_MIN;
	volatile int8_t x979 = INT8_MAX;

    t183 = ((x977^(x978/x979))*x980);

    if (t183 != 2130542850) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x982 = 43223008975831598LLU;
	volatile int8_t x983 = 3;
	int16_t x984 = INT16_MIN;

    t184 = ((x981^(x982/x983))*x984);

    if (t184 != 7504826543826436096LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x985 = UINT8_MAX;
	uint16_t x986 = UINT16_MAX;
	int32_t x987 = INT32_MIN;
	int8_t x988 = 7;
	int32_t t185 = 212579;

    t185 = ((x985^(x986/x987))*x988);

    if (t185 != 1785) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x993 = 3269U;
	int16_t x994 = INT16_MAX;
	volatile int8_t x995 = -1;
	int32_t x996 = INT32_MIN;
	uint32_t t186 = 1091U;

    t186 = ((x993^(x994/x995))*x996);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x997 = INT8_MIN;
	static int32_t x998 = -349236532;
	static uint64_t x999 = UINT64_MAX;
	static volatile int32_t x1000 = -25437;
	uint64_t t187 = 23302542891876886LLU;

    t187 = ((x997^(x998/x999))*x1000);

    if (t187 != 3255936LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1002 = -2;
	volatile int64_t x1003 = 4661282984LL;
	int16_t x1004 = INT16_MIN;
	int64_t t188 = 24040912051021LL;

    t188 = ((x1001^(x1002/x1003))*x1004);

    if (t188 != 4194304LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x1005 = -2;
	int64_t x1006 = INT64_MIN;
	uint8_t x1008 = 2U;
	static volatile int64_t t189 = 77150LL;

    t189 = ((x1005^(x1006/x1007))*x1008);

    if (t189 != 11752145440LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1013 = INT8_MIN;
	int8_t x1014 = 0;
	volatile int16_t x1015 = INT16_MIN;
	volatile uint32_t x1016 = UINT32_MAX;
	static volatile uint32_t t190 = 9440U;

    t190 = ((x1013^(x1014/x1015))*x1016);

    if (t190 != 128U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1017 = 8U;
	int8_t x1019 = INT8_MIN;
	int32_t t191 = 11938;

    t191 = ((x1017^(x1018/x1019))*x1020);

    if (t191 != 480) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x1027 = 9U;
	int16_t x1028 = -1;
	volatile int32_t t192 = -4893;

    t192 = ((x1025^(x1026/x1027))*x1028);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1029 = INT8_MIN;
	uint64_t x1030 = 30LLU;
	uint16_t x1031 = UINT16_MAX;
	int32_t x1032 = INT32_MIN;
	volatile uint64_t t193 = 37027051405719LLU;

    t193 = ((x1029^(x1030/x1031))*x1032);

    if (t193 != 274877906944LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1033 = 3675869132610472LLU;
	uint64_t x1034 = 23146827357063LLU;
	int8_t x1035 = 43;
	int16_t x1036 = INT16_MAX;
	volatile uint64_t t194 = 811LLU;

    t194 = ((x1033^(x1034/x1035))*x1036);

    if (t194 != 9771904266455153587LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1038 = 0U;
	volatile uint64_t x1039 = UINT64_MAX;
	int8_t x1040 = INT8_MIN;
	volatile uint64_t t195 = 2100886307507LLU;

    t195 = ((x1037^(x1038/x1039))*x1040);

    if (t195 != 4194304LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x1041 = UINT8_MAX;
	static volatile uint16_t x1042 = 0U;
	volatile int16_t x1043 = INT16_MIN;
	volatile int32_t t196 = -94097;

    t196 = ((x1041^(x1042/x1043))*x1044);

    if (t196 != -255) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1050 = INT32_MAX;
	int16_t x1052 = 1902;
	static uint32_t t197 = 863508U;

    t197 = ((x1049^(x1050/x1051))*x1052);

    if (t197 != 3250019908U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1065 = INT16_MIN;
	int16_t x1066 = -1;
	int64_t x1067 = -4746LL;
	uint32_t x1068 = 81363U;
	volatile int64_t t198 = 17026212LL;

    t198 = ((x1065^(x1066/x1067))*x1068);

    if (t198 != -2666102784LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1077 = 7683559050LLU;
	int8_t x1078 = INT8_MIN;
	volatile int8_t x1079 = 2;
	int16_t x1080 = 149;
	static volatile uint64_t t199 = 824906112LLU;

    t199 = ((x1077^(x1078/x1079))*x1080);

    if (t199 != 18446742928859246610LLU) { NG(); } else { ; }
	
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

