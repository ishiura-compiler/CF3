
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

volatile int16_t x10 = 220;
int32_t x13 = 532;
uint16_t x17 = 1U;
volatile int16_t x21 = 0;
int32_t x22 = -1;
int32_t x24 = 36824697;
int32_t x26 = -2;
int32_t x31 = INT32_MIN;
int32_t x33 = INT32_MIN;
int16_t x36 = INT16_MIN;
static int64_t t10 = -14909864005841912LL;
uint32_t x47 = 1056832U;
volatile int8_t x49 = INT8_MAX;
uint16_t x52 = UINT16_MAX;
volatile int64_t t12 = 139640666657313172LL;
static volatile int8_t x54 = -1;
uint16_t x55 = 454U;
volatile int8_t x61 = INT8_MIN;
volatile uint8_t x69 = 46U;
static int16_t x71 = INT16_MIN;
int64_t x82 = -7301452LL;
int8_t x92 = INT8_MIN;
int8_t x93 = -9;
int32_t x96 = -619983;
volatile int64_t x99 = -235558523980246817LL;
uint16_t x101 = UINT16_MAX;
volatile int16_t x118 = 15;
uint16_t x121 = UINT16_MAX;
volatile int16_t x124 = -1;
int8_t x128 = 0;
volatile uint32_t t28 = 1063U;
static int8_t x136 = INT8_MAX;
uint64_t x139 = UINT64_MAX;
int8_t x140 = INT8_MIN;
int32_t x145 = -1;
static volatile int64_t t31 = 4130445681LL;
int8_t x149 = INT8_MIN;
static int8_t x152 = INT8_MAX;
static int32_t x160 = -1;
static int8_t x165 = -1;
uint64_t x174 = 957693379091944LLU;
uint32_t x178 = 253132U;
int32_t x181 = -1;
uint64_t t38 = 1344032040LLU;
int64_t x186 = -114338449581097213LL;
int64_t t39 = -3654453155480LL;
volatile int8_t x195 = 0;
int8_t x197 = INT8_MIN;
volatile int32_t x198 = INT32_MIN;
uint8_t x201 = UINT8_MAX;
int16_t x205 = -5713;
static int8_t x213 = INT8_MIN;
volatile uint32_t x214 = 13482897U;
int8_t x215 = -1;
uint8_t x221 = UINT8_MAX;
int32_t t48 = 1;
static int8_t x236 = 1;
uint32_t x237 = 804U;
uint64_t x240 = UINT64_MAX;
uint8_t x241 = UINT8_MAX;
volatile int32_t x243 = INT32_MAX;
int8_t x247 = -1;
uint16_t x255 = UINT16_MAX;
static int8_t x256 = -1;
static volatile uint64_t t53 = 12874706183019916LLU;
volatile int64_t t54 = 5LL;
static uint32_t x261 = 1852739U;
static uint32_t t55 = 111246748U;
int32_t x266 = -1;
uint32_t x267 = UINT32_MAX;
int64_t t57 = -263775180LL;
int16_t x276 = INT16_MIN;
static int32_t x278 = INT32_MIN;
volatile int32_t t60 = -2534;
static volatile uint32_t t63 = 1547286666U;
int8_t x310 = 53;
volatile int32_t x311 = INT32_MIN;
static volatile uint64_t t66 = 590974LLU;
static int64_t t67 = 11102LL;
int32_t x330 = -3;
volatile int64_t x332 = 12859388014LL;
volatile int32_t x338 = 5044;
volatile int32_t x339 = -1;
int64_t t71 = -459227067930LL;
uint16_t x342 = 4726U;
int32_t t72 = 126;
uint8_t x350 = UINT8_MAX;
volatile int16_t x355 = 4;
volatile uint16_t x356 = 240U;
static uint32_t x359 = 721652U;
static int64_t x379 = -334645267LL;
int64_t t80 = 142885LL;
int16_t x385 = 858;
volatile int32_t x388 = -130;
static int64_t t83 = 1786LL;
int8_t x395 = -20;
int8_t x397 = -1;
uint64_t x399 = UINT64_MAX;
volatile uint64_t t85 = 77344LLU;
int32_t x407 = -390684;
volatile int64_t t92 = 334564LL;
int64_t x437 = INT64_MAX;
int16_t x446 = 2;
int8_t x447 = 8;
uint8_t x450 = UINT8_MAX;
volatile int32_t x459 = 43662139;
static int64_t t102 = 1422505668050994LL;
uint32_t x480 = 3U;
int32_t x485 = -1;
int32_t x492 = INT32_MIN;
uint16_t x504 = 82U;
static volatile uint8_t x507 = UINT8_MAX;
int64_t t110 = 214686397939LL;
int8_t x513 = -1;
uint64_t x517 = 1963327130LLU;
int32_t x518 = -103;
int32_t x528 = INT32_MIN;
uint64_t x531 = 28LLU;
static volatile uint16_t x539 = UINT16_MAX;
int32_t x554 = -13001;
int8_t x555 = INT8_MIN;
int32_t x559 = -1;
int32_t x561 = 61290;
int32_t x571 = -1;
volatile uint8_t x573 = 20U;
static volatile int8_t x581 = 0;
int8_t x584 = -1;
static uint16_t x588 = 11U;
int16_t x590 = INT16_MAX;
static volatile int64_t x608 = INT64_MIN;
int32_t x617 = INT32_MIN;
int64_t x625 = INT64_MAX;
int16_t x630 = -1;
uint64_t t138 = 872127LLU;
uint16_t x641 = 135U;
int16_t x642 = 75;
uint16_t x643 = 4U;
uint64_t x645 = 10631578954LLU;
int64_t x649 = -2449054809LL;
int8_t x657 = INT8_MIN;
int32_t t145 = -2046799;
int8_t x668 = INT8_MAX;
uint32_t t146 = 154188U;
int32_t x669 = 5100011;
static uint64_t x679 = UINT64_MAX;
static int16_t x680 = INT16_MIN;
volatile uint64_t x683 = 4175LLU;
uint8_t x700 = UINT8_MAX;
uint32_t x702 = UINT32_MAX;
int8_t x709 = 0;
uint64_t x711 = UINT64_MAX;
static uint8_t x714 = UINT8_MAX;
volatile int32_t t156 = -6024;
uint32_t x718 = UINT32_MAX;
volatile int64_t x721 = -1LL;
int8_t x724 = INT8_MIN;
volatile uint8_t x728 = UINT8_MAX;
int8_t x732 = 3;
volatile int8_t x733 = INT8_MAX;
volatile int64_t x737 = -1LL;
static int32_t t163 = 10;
int8_t x746 = -5;
uint64_t x749 = 1989405827012164180LLU;
uint8_t x755 = 39U;
volatile uint64_t t166 = 241LLU;
static int16_t x757 = -3538;
int32_t x759 = INT32_MAX;
int64_t x763 = -1332LL;
int8_t x764 = INT8_MIN;
uint16_t x767 = 249U;
uint32_t t171 = 13834U;
static int16_t x786 = INT16_MAX;
int16_t x787 = -1;
int8_t x794 = INT8_MIN;
volatile int64_t t176 = -4443990973211LL;
static volatile int32_t x801 = 225267;
volatile int8_t x805 = -1;
uint64_t x808 = 1128536759795604978LLU;
int32_t t180 = -42;
static int8_t x813 = INT8_MIN;
int32_t x818 = 6;
int8_t x825 = INT8_MAX;
int32_t x829 = 1;
static volatile int64_t t184 = 20134645537LL;
static volatile uint32_t x843 = 2200U;
int32_t x847 = 13;
static int64_t x849 = -50776582414158381LL;
uint16_t x851 = 40U;
volatile int64_t t188 = -7286145348473LL;
volatile uint16_t x860 = UINT16_MAX;
uint8_t x862 = 67U;
int64_t x864 = 3726965822LL;
static int8_t x865 = -1;
uint32_t x867 = 1615459U;
int16_t x878 = INT16_MAX;
int64_t t195 = -20LL;
uint16_t x881 = 0U;
static int64_t x882 = -1LL;
static int64_t t196 = 896597824687030LL;
volatile int64_t t197 = -977709615251LL;
volatile int64_t x890 = 35040LL;
static int64_t x891 = INT64_MIN;
uint8_t x893 = 3U;
volatile int32_t x896 = 173;


void f0(void) {
    	int32_t x1 = -1;
	static uint64_t x2 = 25601322590LLU;
	int8_t x3 = 22;
	uint8_t x4 = UINT8_MAX;
	volatile uint64_t t0 = 449615738LLU;

    t0 = (x1*(x2%(x3^x4)));

    if (t0 != 18446744073709551386LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -15;
	int32_t x6 = INT32_MIN;
	static int8_t x7 = INT8_MIN;
	volatile int16_t x8 = -135;
	int32_t t1 = 1018940856;

    t1 = (x5*(x6%(x7^x8)));

    if (t1 != 1200) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 6657U;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 65341LLU;

    t2 = (x9*(x10%(x11^x12)));

    if (t2 != 619101LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = -1;
	volatile int32_t x15 = INT32_MAX;
	int64_t x16 = INT64_MAX;
	int64_t t3 = 87LL;

    t3 = (x13*(x14%(x15^x16)));

    if (t3 != -532LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x18 = UINT32_MAX;
	int32_t x19 = 77197446;
	static uint32_t x20 = 1504553253U;
	static volatile uint32_t t4 = 8312988U;

    t4 = (x17*(x18%(x19^x20)));

    if (t4 != 1167543481U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x23 = UINT16_MAX;
	int32_t t5 = -6752210;

    t5 = (x21*(x22%(x23^x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = UINT16_MAX;
	static int8_t x27 = -1;
	int32_t x28 = 1255379;
	int32_t t6 = -43;

    t6 = (x25*(x26%(x27^x28)));

    if (t6 != -131070) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 31U;
	int16_t x30 = -13927;
	int8_t x32 = INT8_MAX;
	int32_t t7 = 395291236;

    t7 = (x29*(x30%(x31^x32)));

    if (t7 != -431737) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = 42;
	int64_t x35 = INT64_MAX;
	volatile int64_t t8 = -30LL;

    t8 = (x33*(x34%(x35^x36)));

    if (t8 != -90194313216LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 12689U;
	int8_t x38 = -2;
	static int16_t x39 = INT16_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -102608747;

    t9 = (x37*(x38%(x39^x40)));

    if (t9 != -25378) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MIN;
	int64_t x42 = INT64_MAX;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = UINT16_MAX;

    t10 = (x41*(x42%(x43^x44)));

    if (t10 != -229376LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	int16_t x46 = INT16_MAX;
	int8_t x48 = INT8_MIN;
	volatile int64_t t11 = 3326LL;

    t11 = (x45*(x46%(x47^x48)));

    if (t11 != -32767LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x50 = 4U;
	volatile int64_t x51 = 1105097598159034227LL;

    t12 = (x49*(x50%(x51^x52)));

    if (t12 != 508LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -1;
	volatile int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 1074046;

    t13 = (x53*(x54%(x55^x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MIN;
	static uint64_t x59 = UINT64_MAX;
	uint8_t x60 = 125U;
	volatile uint64_t t14 = 245246033682415LLU;

    t14 = (x57*(x58%(x59^x60)));

    if (t14 != 18446743523953737856LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = 55;
	int32_t x63 = -1;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -3744546;

    t15 = (x61*(x62%(x63^x64)));

    if (t15 != -7040) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = 2280LL;
	static int16_t x66 = -1;
	static volatile int8_t x67 = -1;
	int32_t x68 = INT32_MAX;
	int64_t t16 = 26LL;

    t16 = (x65*(x66%(x67^x68)));

    if (t16 != -2280LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x70 = 616;
	int64_t x72 = -1LL;
	int64_t t17 = 177390LL;

    t17 = (x69*(x70%(x71^x72)));

    if (t17 != 28336LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 55;
	int32_t x74 = INT32_MAX;
	volatile int32_t x75 = INT32_MIN;
	uint8_t x76 = 7U;
	volatile int32_t t18 = 5;

    t18 = (x73*(x74%(x75^x76)));

    if (t18 != 330) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x81 = UINT64_MAX;
	int8_t x83 = -11;
	int32_t x84 = 0;
	volatile uint64_t t19 = 15303505672LLU;

    t19 = (x81*(x82%(x83^x84)));

    if (t19 != 4LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = -1;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;
	volatile int32_t t20 = 7;

    t20 = (x89*(x90%(x91^x92)));

    if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x94 = INT16_MIN;
	uint32_t x95 = 202U;
	volatile uint32_t t21 = 327U;

    t21 = (x93*(x94%(x95^x96)));

    if (t21 != 4289684179U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = 0;
	int8_t x98 = 9;
	volatile int8_t x100 = INT8_MIN;
	static int64_t t22 = 24458809284101LL;

    t22 = (x97*(x98%(x99^x100)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x102 = INT32_MIN;
	int16_t x103 = -1;
	int32_t x104 = -9;
	int32_t t23 = 70;

    t23 = (x101*(x102%(x103^x104)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x109 = -50;
	static int8_t x110 = INT8_MAX;
	int16_t x111 = INT16_MAX;
	int8_t x112 = -1;
	int32_t t24 = -599512634;

    t24 = (x109*(x110%(x111^x112)));

    if (t24 != -6350) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x117 = 31628982865LLU;
	static int32_t x119 = -462;
	int8_t x120 = INT8_MAX;
	volatile uint64_t t25 = 455078578031LLU;

    t25 = (x117*(x118%(x119^x120)));

    if (t25 != 474434742975LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x122 = INT64_MAX;
	int64_t x123 = INT64_MIN;
	int64_t t26 = -841942593LL;

    t26 = (x121*(x122%(x123^x124)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = INT32_MIN;
	static int32_t x126 = 3983;
	uint32_t x127 = UINT32_MAX;
	volatile uint32_t t27 = 36U;

    t27 = (x125*(x126%(x127^x128)));

    if (t27 != 2147483648U) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x129 = -249;
	volatile int32_t x130 = -41666117;
	uint32_t x131 = UINT32_MAX;
	uint8_t x132 = 1U;

    t28 = (x129*(x130%(x131^x132)));

    if (t28 != 1784928541U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x133 = -7568;
	uint64_t x134 = 48440399709LLU;
	int32_t x135 = INT32_MAX;
	volatile uint64_t t29 = 925998465LLU;

    t29 = (x133*(x134%(x135^x136)));

    if (t29 != 18446735024180699824LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x137 = -1742LL;
	int16_t x138 = INT16_MIN;
	uint64_t t30 = 10976454LLU;

    t30 = (x137*(x138%(x139^x140)));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x146 = -1;
	int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MIN;

    t31 = (x145*(x146%(x147^x148)));

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x150 = INT16_MIN;
	volatile int64_t x151 = INT64_MIN;
	volatile int64_t t32 = 20968001521256LL;

    t32 = (x149*(x150%(x151^x152)));

    if (t32 != 4194304LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x157 = 2;
	uint32_t x158 = UINT32_MAX;
	static int8_t x159 = INT8_MIN;
	uint32_t t33 = 0U;

    t33 = (x157*(x158%(x159^x160)));

    if (t33 != 30U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x161 = INT32_MIN;
	volatile uint8_t x162 = UINT8_MAX;
	uint16_t x163 = 679U;
	uint32_t x164 = 210U;
	uint32_t t34 = 16483706U;

    t34 = (x161*(x162%(x163^x164)));

    if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x166 = -1;
	int16_t x167 = -1;
	uint64_t x168 = 553840485960512009LLU;
	volatile uint64_t t35 = 61494033562214LLU;

    t35 = (x165*(x166%(x167^x168)));

    if (t35 != 17892903587749039607LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x173 = UINT32_MAX;
	uint64_t x175 = UINT64_MAX;
	static int32_t x176 = INT32_MAX;
	volatile uint64_t t36 = 3229749LLU;

    t36 = (x173*(x174%(x175^x176)));

    if (t36 != 6748282180458635800LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x177 = 191476U;
	uint8_t x179 = UINT8_MAX;
	static int16_t x180 = 1;
	static uint32_t t37 = 121U;

    t37 = (x177*(x178%(x179^x180)));

    if (t37 != 28338448U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x182 = 808542032125804LL;
	volatile uint16_t x183 = 1U;
	volatile uint64_t x184 = 0LLU;

    t38 = (x181*(x182%(x183^x184)));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x185 = UINT16_MAX;
	int8_t x187 = -1;
	static volatile int8_t x188 = INT8_MIN;

    t39 = (x185*(x186%(x187^x188)));

    if (t39 != -5570475LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x189 = 628958120550LL;
	volatile int8_t x190 = INT8_MAX;
	int64_t x191 = INT64_MIN;
	int16_t x192 = 1694;
	volatile int64_t t40 = -54524345542458200LL;

    t40 = (x189*(x190%(x191^x192)));

    if (t40 != 79877681309850LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t41 = 0;

    t41 = (x193*(x194%(x195^x196)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x199 = -1;
	int64_t x200 = 18862081LL;
	int64_t t42 = 258LL;

    t42 = (x197*(x198%(x199^x200)));

    if (t42 != 2056752896LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x202 = 1LLU;
	int64_t x203 = INT64_MIN;
	uint8_t x204 = UINT8_MAX;
	volatile uint64_t t43 = 11314059LLU;

    t43 = (x201*(x202%(x203^x204)));

    if (t43 != 255LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x206 = 485688749;
	int8_t x207 = 8;
	int64_t x208 = INT64_MAX;
	volatile int64_t t44 = -3709521544LL;

    t44 = (x205*(x206%(x207^x208)));

    if (t44 != -2774739823037LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x216 = 48;
	static uint32_t t45 = 211482342U;

    t45 = (x213*(x214%(x215^x216)));

    if (t45 != 2569156480U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x222 = 0U;
	int32_t x223 = 1502725;
	int32_t x224 = INT32_MAX;
	static int32_t t46 = -717;

    t46 = (x221*(x222%(x223^x224)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x225 = 45336938338628832LLU;
	int8_t x226 = -11;
	int32_t x227 = 235757;
	int16_t x228 = INT16_MAX;
	volatile uint64_t t47 = 1461781215371LLU;

    t47 = (x225*(x226%(x227^x228)));

    if (t47 != 17948037751984634464LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x229 = INT16_MAX;
	volatile int32_t x230 = INT32_MAX;
	int32_t x231 = -166;
	int16_t x232 = -1;

    t48 = (x229*(x230%(x231^x232)));

    if (t48 != 2195389) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x233 = -1LL;
	volatile int8_t x234 = INT8_MIN;
	static volatile int16_t x235 = INT16_MIN;
	volatile int64_t t49 = 56882072061326519LL;

    t49 = (x233*(x234%(x235^x236)));

    if (t49 != 128LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x238 = 47663U;
	uint32_t x239 = 860086U;
	volatile uint64_t t50 = 516927131102840LLU;

    t50 = (x237*(x238%(x239^x240)));

    if (t50 != 38321052LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x242 = UINT32_MAX;
	int32_t x244 = INT32_MIN;
	uint32_t t51 = 964881239U;

    t51 = (x241*(x242%(x243^x244)));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x245 = 36U;
	int64_t x246 = INT64_MIN;
	uint8_t x248 = UINT8_MAX;
	static int64_t t52 = 1661LL;

    t52 = (x245*(x246%(x247^x248)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x253 = 6LLU;
	int8_t x254 = 1;

    t53 = (x253*(x254%(x255^x256)));

    if (t53 != 6LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x257 = 43U;
	int64_t x258 = -2128531909144535LL;
	int32_t x259 = -401041269;
	volatile int64_t x260 = INT64_MIN;

    t54 = (x257*(x258%(x259^x260)));

    if (t54 != -91526872093215005LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x262 = INT16_MAX;
	uint8_t x263 = UINT8_MAX;
	uint8_t x264 = 5U;

    t55 = (x261*(x262%(x263^x264)));

    if (t55 != 31496563U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x265 = 39282U;
	volatile uint32_t x268 = 503U;
	volatile uint32_t t56 = 91191U;

    t56 = (x265*(x266%(x267^x268)));

    if (t56 != 19758846U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x269 = -995452LL;
	int32_t x270 = INT32_MAX;
	int8_t x271 = -1;
	int32_t x272 = 830;

    t57 = (x269*(x270%(x271^x272)));

    if (t57 != -150313252LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	static int64_t x275 = -52989040208195LL;
	static volatile int64_t t58 = -542225791LL;

    t58 = (x273*(x274%(x275^x276)));

    if (t58 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x277 = 3;
	uint64_t x279 = UINT64_MAX;
	int8_t x280 = INT8_MIN;
	static uint64_t t59 = 179631769155LLU;

    t59 = (x277*(x278%(x279^x280)));

    if (t59 != 363LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x281 = 0U;
	uint16_t x282 = 32146U;
	static uint8_t x283 = 4U;
	uint16_t x284 = UINT16_MAX;

    t60 = (x281*(x282%(x283^x284)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x285 = 1;
	uint64_t x286 = UINT64_MAX;
	uint32_t x287 = 55U;
	int8_t x288 = 0;
	uint64_t t61 = 70750227772248338LLU;

    t61 = (x285*(x286%(x287^x288)));

    if (t61 != 15LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x289 = -1LL;
	int64_t x290 = -1LL;
	volatile int32_t x291 = INT32_MAX;
	int8_t x292 = INT8_MIN;
	int64_t t62 = 30233617430LL;

    t62 = (x289*(x290%(x291^x292)));

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x297 = INT16_MIN;
	uint32_t x298 = 2024U;
	volatile uint8_t x299 = 24U;
	volatile int16_t x300 = -961;

    t63 = (x297*(x298%(x299^x300)));

    if (t63 != 4228644864U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x305 = UINT32_MAX;
	int16_t x306 = INT16_MIN;
	volatile int16_t x307 = 3;
	uint16_t x308 = 554U;
	volatile uint32_t t64 = 89777U;

    t64 = (x305*(x306%(x307^x308)));

    if (t64 != 141U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x309 = 3U;
	uint8_t x312 = 13U;
	int32_t t65 = -3;

    t65 = (x309*(x310%(x311^x312)));

    if (t65 != 159) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x313 = 727LLU;
	int16_t x314 = 1;
	volatile uint32_t x315 = 2U;
	volatile int64_t x316 = -28419779027999LL;

    t66 = (x313*(x314%(x315^x316)));

    if (t66 != 727LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x317 = -1;
	volatile int32_t x318 = -5924945;
	int32_t x319 = INT32_MIN;
	int64_t x320 = 1056122406731166LL;

    t67 = (x317*(x318%(x319^x320)));

    if (t67 != 5924945LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x325 = 1;
	uint32_t x326 = 85U;
	int32_t x327 = INT32_MIN;
	int16_t x328 = INT16_MAX;
	uint32_t t68 = 4876202U;

    t68 = (x325*(x326%(x327^x328)));

    if (t68 != 85U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x329 = 922LLU;
	static uint64_t x331 = 15012040676LLU;
	static volatile uint64_t t69 = 680878818731957100LLU;

    t69 = (x329*(x330%(x331^x332)));

    if (t69 != 551398189798LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x333 = INT32_MIN;
	uint64_t x334 = UINT64_MAX;
	uint64_t x335 = UINT64_MAX;
	int8_t x336 = INT8_MAX;
	volatile uint64_t t70 = 35538761LLU;

    t70 = (x333*(x334%(x335^x336)));

    if (t70 != 18446743800979128320LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x337 = -1LL;
	uint16_t x340 = 1793U;

    t71 = (x337*(x338%(x339^x340)));

    if (t71 != -1456LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x341 = -8188;
	uint8_t x343 = 13U;
	static int32_t x344 = -1106128;

    t72 = (x341*(x342%(x343^x344)));

    if (t72 != -38696488) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x345 = UINT32_MAX;
	uint16_t x346 = UINT16_MAX;
	int8_t x347 = -11;
	int64_t x348 = 467336908685LL;
	volatile int64_t t73 = -10330539280201384LL;

    t73 = (x345*(x346%(x347^x348)));

    if (t73 != 281470681677825LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x349 = INT8_MIN;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 19U;
	static int32_t t74 = 94394686;

    t74 = (x349*(x350%(x351^x352)));

    if (t74 != -32640) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MAX;
	static int32_t t75 = -4134;

    t75 = (x353*(x354%(x355^x356)));

    if (t75 != -2326528) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x357 = 19598984;
	volatile uint32_t x358 = UINT32_MAX;
	uint8_t x360 = 80U;
	volatile uint32_t t76 = 6382627U;

    t76 = (x357*(x358%(x359^x360)));

    if (t76 != 766593400U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	static int32_t x368 = 15054239;
	int32_t t77 = -3922880;

    t77 = (x365*(x366%(x367^x368)));

    if (t77 != -8355840) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MIN;
	int8_t x371 = -1;
	int8_t x372 = INT8_MAX;
	volatile int32_t t78 = -3;

    t78 = (x369*(x370%(x371^x372)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x373 = INT32_MAX;
	int32_t x374 = INT32_MAX;
	uint64_t x375 = 201LLU;
	uint64_t x376 = 412LLU;
	volatile uint64_t t79 = 1072303727497LLU;

    t79 = (x373*(x374%(x375^x376)));

    if (t79 != 2147483647LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x377 = 32U;
	volatile int8_t x378 = -1;
	int8_t x380 = -1;

    t80 = (x377*(x378%(x379^x380)));

    if (t80 != -32LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x381 = 12U;
	int64_t x382 = 245217LL;
	volatile int8_t x383 = INT8_MIN;
	int32_t x384 = -1;
	int64_t t81 = 23LL;

    t81 = (x381*(x382%(x383^x384)));

    if (t81 != 1284LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x386 = INT8_MAX;
	int64_t x387 = -1LL;
	int64_t t82 = 13LL;

    t82 = (x385*(x386%(x387^x388)));

    if (t82 != 108966LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x389 = INT64_MIN;
	int64_t x390 = 1072457068436LL;
	volatile int16_t x391 = -1;
	int32_t x392 = -2;

    t83 = (x389*(x390%(x391^x392)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x393 = -1LL;
	int64_t x394 = INT64_MAX;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int64_t t84 = 45087614865022LL;

    t84 = (x393*(x394%(x395^x396)));

    if (t84 != -32401LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x398 = 37U;
	int64_t x400 = 968972508659899766LL;

    t85 = (x397*(x398%(x399^x400)));

    if (t85 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x401 = 18U;
	int64_t x402 = -3802973026534460LL;
	volatile int32_t x403 = -16265145;
	int32_t x404 = -1000185987;
	volatile int64_t t86 = -48LL;

    t86 = (x401*(x402%(x403^x404)));

    if (t86 != -17301741300LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x405 = 1U;
	static uint16_t x406 = 1U;
	volatile uint16_t x408 = 25U;
	uint32_t t87 = 0U;

    t87 = (x405*(x406%(x407^x408)));

    if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x409 = 728387322;
	int64_t x410 = 138LL;
	int64_t x411 = INT64_MAX;
	uint16_t x412 = 0U;
	volatile int64_t t88 = 879310604579LL;

    t88 = (x409*(x410%(x411^x412)));

    if (t88 != 100517450436LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x413 = 204066136U;
	int64_t x414 = -10620845978LL;
	int32_t x415 = -1752425;
	uint16_t x416 = 51U;
	volatile int64_t t89 = 8187170LL;

    t89 = (x413*(x414%(x415^x416)));

    if (t89 != -250849930207088LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x421 = 33139;
	int32_t x422 = INT32_MAX;
	int16_t x423 = INT16_MIN;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t90 = 975059945;

    t90 = (x421*(x422%(x423^x424)));

    if (t90 != 33139) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x425 = -4014;
	int64_t x426 = 1142397249943LL;
	int32_t x427 = INT32_MIN;
	uint16_t x428 = 2U;
	volatile int64_t t91 = -190LL;

    t91 = (x425*(x426%(x427^x428)));

    if (t91 != -8362903742838LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int64_t x429 = -1LL;
	int16_t x430 = 11378;
	volatile uint16_t x431 = 1517U;
	static int32_t x432 = INT32_MIN;

    t92 = (x429*(x430%(x431^x432)));

    if (t92 != -11378LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x433 = INT64_MIN;
	int32_t x434 = -1;
	int8_t x435 = INT8_MIN;
	uint64_t x436 = 55819841742949172LLU;
	volatile uint64_t t93 = 32475902LLU;

    t93 = (x433*(x434%(x435^x436)));

    if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x438 = 5087007874105611648LLU;
	uint32_t x439 = UINT32_MAX;
	uint8_t x440 = 110U;
	uint64_t t94 = 164173096895455559LLU;

    t94 = (x437*(x438%(x439^x440)));

    if (t94 != 18446744072805555348LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x441 = UINT8_MAX;
	int16_t x442 = -1;
	uint8_t x443 = 2U;
	int8_t x444 = -1;
	int32_t t95 = 72770;

    t95 = (x441*(x442%(x443^x444)));

    if (t95 != -255) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x445 = INT32_MIN;
	int64_t x448 = INT64_MIN;
	int64_t t96 = -235947014899076998LL;

    t96 = (x445*(x446%(x447^x448)));

    if (t96 != -4294967296LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x449 = -1;
	int8_t x451 = INT8_MIN;
	int16_t x452 = INT16_MAX;
	int32_t t97 = -54;

    t97 = (x449*(x450%(x451^x452)));

    if (t97 != -255) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x453 = -1;
	uint32_t x454 = UINT32_MAX;
	uint32_t x455 = UINT32_MAX;
	static int8_t x456 = -4;
	uint32_t t98 = 1217923848U;

    t98 = (x453*(x454%(x455^x456)));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x457 = INT64_MAX;
	int8_t x458 = -1;
	static int16_t x460 = 1;
	volatile int64_t t99 = 420LL;

    t99 = (x457*(x458%(x459^x460)));

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x461 = -13787053949LL;
	static uint8_t x462 = 74U;
	uint8_t x463 = UINT8_MAX;
	int16_t x464 = INT16_MIN;
	static volatile int64_t t100 = -66148744748323567LL;

    t100 = (x461*(x462%(x463^x464)));

    if (t100 != -1020241992226LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x465 = 23U;
	static int8_t x466 = 11;
	uint64_t x467 = 10455LLU;
	uint16_t x468 = UINT16_MAX;
	uint64_t t101 = 16180428405LLU;

    t101 = (x465*(x466%(x467^x468)));

    if (t101 != 253LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x469 = INT16_MAX;
	static int64_t x470 = 4732033LL;
	static uint8_t x471 = 3U;
	volatile uint32_t x472 = UINT32_MAX;

    t102 = (x469*(x470%(x471^x472)));

    if (t102 != 155054525311LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x473 = -407178060LL;
	static int64_t x474 = INT64_MIN;
	uint16_t x475 = UINT16_MAX;
	volatile int64_t x476 = INT64_MIN;
	volatile int64_t t103 = -1931LL;

    t103 = (x473*(x474%(x475^x476)));

    if (t103 != 26684414162100LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x477 = 1675788LLU;
	uint16_t x478 = 5U;
	volatile int32_t x479 = INT32_MAX;
	volatile uint64_t t104 = 253805298LLU;

    t104 = (x477*(x478%(x479^x480)));

    if (t104 != 8378940LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x481 = UINT64_MAX;
	static uint8_t x482 = 7U;
	uint16_t x483 = 28U;
	static int16_t x484 = -1;
	uint64_t t105 = 1165794737122LLU;

    t105 = (x481*(x482%(x483^x484)));

    if (t105 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x486 = INT16_MAX;
	volatile uint8_t x487 = UINT8_MAX;
	uint64_t x488 = 976577410521089LLU;
	volatile uint64_t t106 = 49438343583LLU;

    t106 = (x485*(x486%(x487^x488)));

    if (t106 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x489 = INT16_MIN;
	uint8_t x490 = 8U;
	volatile uint32_t x491 = 32630U;
	volatile uint32_t t107 = 3011666U;

    t107 = (x489*(x490%(x491^x492)));

    if (t107 != 4294705152U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x497 = INT32_MIN;
	uint64_t x498 = UINT64_MAX;
	int8_t x499 = INT8_MAX;
	static uint32_t x500 = UINT32_MAX;
	volatile uint64_t t108 = 87LLU;

    t108 = (x497*(x498%(x499^x500)));

    if (t108 != 18446708891484946432LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x501 = -1;
	uint8_t x502 = UINT8_MAX;
	static volatile uint16_t x503 = 449U;
	volatile int32_t t109 = 1;

    t109 = (x501*(x502%(x503^x504)));

    if (t109 != -255) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x505 = INT32_MIN;
	static volatile int64_t x506 = INT64_MAX;
	volatile uint8_t x508 = 2U;

    t110 = (x505*(x506%(x507^x508)));

    if (t110 != -251255586816LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x509 = 5463998;
	volatile int32_t x510 = -1;
	int16_t x511 = INT16_MIN;
	uint16_t x512 = UINT16_MAX;
	int32_t t111 = -462730;

    t111 = (x509*(x510%(x511^x512)));

    if (t111 != -5463998) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x514 = 99U;
	uint16_t x515 = 28973U;
	uint32_t x516 = 39925092U;
	volatile uint32_t t112 = 522937159U;

    t112 = (x513*(x514%(x515^x516)));

    if (t112 != 4294967197U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x519 = UINT32_MAX;
	uint32_t x520 = 1378401U;
	volatile uint64_t t113 = 6985649279LLU;

    t113 = (x517*(x518%(x519^x520)));

    if (t113 != 2706051819951870LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x521 = 3548387067335LLU;
	volatile int16_t x522 = -1;
	volatile int16_t x523 = INT16_MAX;
	int32_t x524 = -473;
	uint64_t t114 = 33059815506741LLU;

    t114 = (x521*(x522%(x523^x524)));

    if (t114 != 18446740525322484281LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x525 = 15716944345LL;
	static uint64_t x526 = UINT64_MAX;
	int8_t x527 = INT8_MIN;
	volatile uint64_t t115 = 19LLU;

    t115 = (x525*(x526%(x527^x528)));

    if (t115 != 1030009947649575LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x529 = INT32_MIN;
	uint8_t x530 = UINT8_MAX;
	uint8_t x532 = UINT8_MAX;
	static volatile uint64_t t116 = 55LLU;

    t116 = (x529*(x530%(x531^x532)));

    if (t116 != 18446744013580009472LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x533 = INT64_MAX;
	int16_t x534 = -3764;
	volatile uint8_t x535 = UINT8_MAX;
	uint64_t x536 = 88225734947760LLU;
	uint64_t t117 = 24344257482058LLU;

    t117 = (x533*(x534%(x535^x536)));

    if (t117 != 9223305754677346311LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x537 = UINT64_MAX;
	int32_t x538 = INT32_MIN;
	int8_t x540 = -3;
	uint64_t t118 = 1244421218941093LLU;

    t118 = (x537*(x538%(x539^x540)));

    if (t118 != 2LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x541 = -1;
	uint16_t x542 = 246U;
	static int8_t x543 = 11;
	uint8_t x544 = 13U;
	static int32_t t119 = 795719;

    t119 = (x541*(x542%(x543^x544)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x545 = -1;
	static uint8_t x546 = 55U;
	int32_t x547 = 1;
	int32_t x548 = 6;
	static int32_t t120 = -183491743;

    t120 = (x545*(x546%(x547^x548)));

    if (t120 != -6) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x553 = -1LL;
	int16_t x556 = -14723;
	volatile int64_t t121 = 805348818LL;

    t121 = (x553*(x554%(x555^x556)));

    if (t121 != 13001LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x557 = INT64_MIN;
	static volatile int32_t x558 = INT32_MAX;
	uint64_t x560 = 29119267323LLU;
	volatile uint64_t t122 = 289LLU;

    t122 = (x557*(x558%(x559^x560)));

    if (t122 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x562 = -1;
	static volatile int8_t x563 = INT8_MIN;
	uint32_t x564 = UINT32_MAX;
	volatile uint32_t t123 = 2672U;

    t123 = (x561*(x562%(x563^x564)));

    if (t123 != 919350U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x565 = -378825672LL;
	uint16_t x566 = 68U;
	int8_t x567 = INT8_MIN;
	uint8_t x568 = UINT8_MAX;
	volatile int64_t t124 = -1661510805493LL;

    t124 = (x565*(x566%(x567^x568)));

    if (t124 != -25760145696LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x569 = 2U;
	int64_t x570 = INT64_MIN;
	static int16_t x572 = INT16_MAX;
	volatile int64_t t125 = 267614004748918LL;

    t125 = (x569*(x570%(x571^x572)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x574 = UINT32_MAX;
	volatile int8_t x575 = INT8_MIN;
	int64_t x576 = 677025LL;
	volatile int64_t t126 = -969780865867989LL;

    t126 = (x573*(x574%(x575^x576)));

    if (t126 != 4089080LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x577 = -1;
	int8_t x578 = 12;
	int32_t x579 = -1;
	int64_t x580 = 2920641769864396LL;
	int64_t t127 = -385964661970195LL;

    t127 = (x577*(x578%(x579^x580)));

    if (t127 != -12LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x582 = INT64_MIN;
	int16_t x583 = -3;
	int64_t t128 = 13142LL;

    t128 = (x581*(x582%(x583^x584)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x585 = -40;
	int8_t x586 = INT8_MIN;
	uint8_t x587 = 10U;
	volatile int32_t t129 = 103707331;

    t129 = (x585*(x586%(x587^x588)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x589 = 7U;
	int16_t x591 = -1;
	volatile int16_t x592 = INT16_MIN;
	int32_t t130 = 39611458;

    t130 = (x589*(x590%(x591^x592)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x597 = INT8_MIN;
	uint64_t x598 = UINT64_MAX;
	int64_t x599 = -1LL;
	static int64_t x600 = 3577624LL;
	volatile uint64_t t131 = 1665390243217424337LLU;

    t131 = (x597*(x598%(x599^x600)));

    if (t131 != 18446744073251615744LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x601 = INT16_MIN;
	int16_t x602 = -198;
	static int16_t x603 = INT16_MAX;
	volatile int64_t x604 = 2LL;
	static int64_t t132 = 0LL;

    t132 = (x601*(x602%(x603^x604)));

    if (t132 != 6488064LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x605 = -1;
	int64_t x606 = -1LL;
	uint8_t x607 = UINT8_MAX;
	volatile int64_t t133 = 871770LL;

    t133 = (x605*(x606%(x607^x608)));

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x613 = 927929388LLU;
	static int32_t x614 = INT32_MAX;
	uint64_t x615 = UINT64_MAX;
	uint32_t x616 = 524225U;
	volatile uint64_t t134 = 479567891435527314LLU;

    t134 = (x613*(x614%(x615^x616)));

    if (t134 != 1992713186300718036LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x618 = UINT16_MAX;
	volatile int16_t x619 = INT16_MAX;
	uint64_t x620 = 1LLU;
	volatile uint64_t t135 = 32433699266LLU;

    t135 = (x617*(x618%(x619^x620)));

    if (t135 != 18446744067267100672LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x621 = 0U;
	uint32_t x622 = UINT32_MAX;
	int64_t x623 = INT64_MIN;
	static volatile int64_t x624 = 5071350189329LL;
	volatile int64_t t136 = -1155807561385224LL;

    t136 = (x621*(x622%(x623^x624)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x626 = 0;
	int32_t x627 = 6060;
	int32_t x628 = INT32_MAX;
	static int64_t t137 = 1260488215923576LL;

    t137 = (x625*(x626%(x627^x628)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x629 = 19586168699805LLU;
	uint8_t x631 = 0U;
	int64_t x632 = -347657226LL;

    t138 = (x629*(x630%(x631^x632)));

    if (t138 != 18446724487540851811LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x637 = -1;
	volatile uint8_t x638 = 0U;
	int64_t x639 = INT64_MIN;
	uint8_t x640 = 0U;
	int64_t t139 = 1590817866LL;

    t139 = (x637*(x638%(x639^x640)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x644 = 7U;
	int32_t t140 = -95;

    t140 = (x641*(x642%(x643^x644)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x646 = 28767795996803159LL;
	volatile int32_t x647 = -4308;
	int64_t x648 = INT64_MIN;
	static uint64_t t141 = 1658482206378LLU;

    t141 = (x645*(x646%(x647^x648)));

    if (t141 != 3943497255873629222LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x650 = INT64_MIN;
	uint64_t x651 = 1123461671355538LLU;
	int16_t x652 = -25;
	uint64_t t142 = 345781391373LLU;

    t142 = (x649*(x650%(x651^x652)));

    if (t142 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x653 = -1LL;
	volatile int8_t x654 = -1;
	int32_t x655 = -1;
	int64_t x656 = INT64_MIN;
	volatile int64_t t143 = 16015311LL;

    t143 = (x653*(x654%(x655^x656)));

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x658 = INT8_MAX;
	uint16_t x659 = UINT16_MAX;
	int16_t x660 = INT16_MIN;
	volatile int32_t t144 = -15959;

    t144 = (x657*(x658%(x659^x660)));

    if (t144 != -16256) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x661 = 20U;
	int8_t x662 = -1;
	int32_t x663 = INT32_MAX;
	int8_t x664 = INT8_MIN;

    t145 = (x661*(x662%(x663^x664)));

    if (t145 != -20) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x665 = INT32_MIN;
	uint32_t x666 = UINT32_MAX;
	int32_t x667 = INT32_MIN;

    t146 = (x665*(x666%(x667^x668)));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x670 = -1;
	static int16_t x671 = 7470;
	int64_t x672 = 638039108770899LL;
	static volatile int64_t t147 = -69061864951035LL;

    t147 = (x669*(x670%(x671^x672)));

    if (t147 != -5100011LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x673 = INT8_MIN;
	volatile int8_t x674 = INT8_MIN;
	static uint64_t x675 = 141335072697041397LLU;
	int64_t x676 = INT64_MAX;
	volatile uint64_t t148 = 5178968197LLU;

    t148 = (x673*(x674%(x675^x676)));

    if (t148 != 711709536976521728LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x677 = INT8_MIN;
	static int64_t x678 = INT64_MIN;
	uint64_t t149 = 21621408136LLU;

    t149 = (x677*(x678%(x679^x680)));

    if (t149 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x681 = -1;
	uint8_t x682 = UINT8_MAX;
	int16_t x684 = -3586;
	uint64_t t150 = 367LLU;

    t150 = (x681*(x682%(x683^x684)));

    if (t150 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x689 = UINT16_MAX;
	static volatile int16_t x690 = INT16_MIN;
	static int32_t x691 = INT32_MAX;
	uint64_t x692 = UINT64_MAX;
	uint64_t t151 = 15112456LLU;

    t151 = (x689*(x690%(x691^x692)));

    if (t151 != 140733193420800LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x697 = INT32_MIN;
	volatile uint32_t x698 = 4595U;
	volatile int32_t x699 = INT32_MIN;
	static uint32_t t152 = 15U;

    t152 = (x697*(x698%(x699^x700)));

    if (t152 != 2147483648U) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x701 = -1;
	uint64_t x703 = UINT64_MAX;
	int8_t x704 = 31;
	volatile uint64_t t153 = 103437522256023461LLU;

    t153 = (x701*(x702%(x703^x704)));

    if (t153 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x705 = 283201368;
	uint32_t x706 = 18975424U;
	static uint64_t x707 = UINT64_MAX;
	int32_t x708 = INT32_MIN;
	uint64_t t154 = 69665930553271LLU;

    t154 = (x705*(x706%(x707^x708)));

    if (t154 != 5373866035180032LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x710 = -1;
	int32_t x712 = 102;
	uint64_t t155 = 19LLU;

    t155 = (x709*(x710%(x711^x712)));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x713 = INT16_MIN;
	int16_t x715 = 7902;
	static int8_t x716 = 14;

    t156 = (x713*(x714%(x715^x716)));

    if (t156 != -8355840) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x717 = -1LL;
	volatile int8_t x719 = 0;
	static volatile int8_t x720 = INT8_MAX;
	static volatile int64_t t157 = -1923026206387959LL;

    t157 = (x717*(x718%(x719^x720)));

    if (t157 != -15LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x722 = INT16_MAX;
	int64_t x723 = -1LL;
	volatile int64_t t158 = -240623690767581330LL;

    t158 = (x721*(x722%(x723^x724)));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x725 = INT16_MAX;
	volatile uint16_t x726 = 241U;
	int16_t x727 = INT16_MIN;
	volatile int32_t t159 = 125452885;

    t159 = (x725*(x726%(x727^x728)));

    if (t159 != 7896847) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x729 = 1737217LLU;
	int64_t x730 = INT64_MIN;
	int64_t x731 = INT64_MAX;
	uint64_t t160 = 1593717035389607LLU;

    t160 = (x729*(x730%(x731^x732)));

    if (t160 != 18446744073702602748LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x734 = 2041LLU;
	uint32_t x735 = UINT32_MAX;
	static uint64_t x736 = UINT64_MAX;
	uint64_t t161 = 113119LLU;

    t161 = (x733*(x734%(x735^x736)));

    if (t161 != 259207LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x738 = 1;
	int32_t x739 = 7851;
	uint64_t x740 = UINT64_MAX;
	uint64_t t162 = UINT64_MAX;

    t162 = (x737*(x738%(x739^x740)));

    if (t162 != UINT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x741 = INT16_MIN;
	int16_t x742 = INT16_MIN;
	int16_t x743 = -1;
	uint16_t x744 = UINT16_MAX;

    t163 = (x741*(x742%(x743^x744)));

    if (t163 != 1073741824) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x745 = INT16_MIN;
	int8_t x747 = INT8_MAX;
	int32_t x748 = INT32_MAX;
	volatile int32_t t164 = 1;

    t164 = (x745*(x746%(x747^x748)));

    if (t164 != 163840) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x750 = INT16_MIN;
	int16_t x751 = 8;
	static int8_t x752 = 0;
	volatile uint64_t t165 = 0LLU;

    t165 = (x749*(x750%(x751^x752)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x753 = 1427;
	volatile uint64_t x754 = 403240861160777LLU;
	int64_t x756 = INT64_MIN;

    t166 = (x753*(x754%(x755^x756)));

    if (t166 != 575424708876428779LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x758 = 470817148U;
	int32_t x760 = -167923;
	volatile uint32_t t167 = 517344U;

    t167 = (x757*(x758%(x759^x760)));

    if (t167 != 696241224U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x761 = UINT64_MAX;
	uint16_t x762 = UINT16_MAX;
	uint64_t t168 = 3982316368809251533LLU;

    t168 = (x761*(x762%(x763^x764)));

    if (t168 != 18446744073709551169LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x765 = INT64_MIN;
	int32_t x766 = INT32_MAX;
	static uint64_t x768 = UINT64_MAX;
	uint64_t t169 = 2673153LLU;

    t169 = (x765*(x766%(x767^x768)));

    if (t169 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x769 = -251LL;
	static int64_t x770 = INT64_MAX;
	uint64_t x771 = 113699305193LLU;
	int64_t x772 = -143LL;
	volatile uint64_t t170 = 2330341865741761LLU;

    t170 = (x769*(x770%(x771^x772)));

    if (t170 != 9223372036854776059LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x773 = UINT32_MAX;
	int32_t x774 = INT32_MIN;
	int32_t x775 = INT32_MAX;
	volatile int32_t x776 = INT32_MIN;

    t171 = (x773*(x774%(x775^x776)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x777 = -1104;
	volatile uint64_t x778 = UINT64_MAX;
	int64_t x779 = -3480LL;
	int32_t x780 = -701790419;
	uint64_t t172 = 4156738LLU;

    t172 = (x777*(x778%(x779^x780)));

    if (t172 != 18446743691915812768LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x781 = 593U;
	static volatile int32_t x782 = INT32_MIN;
	volatile int16_t x783 = 1;
	uint64_t x784 = 21961041933657964LLU;
	static volatile uint64_t t173 = 1LLU;

    t173 = (x781*(x782%(x783^x784)));

    if (t173 != 12707924309259952469LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x785 = INT16_MIN;
	volatile int16_t x788 = INT16_MIN;
	int32_t t174 = 14403652;

    t174 = (x785*(x786%(x787^x788)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	int32_t x790 = INT32_MIN;
	static int8_t x791 = 0;
	static volatile int64_t x792 = INT64_MIN;
	volatile int64_t t175 = 2687060401953LL;

    t175 = (x789*(x790%(x791^x792)));

    if (t175 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	volatile uint32_t x795 = 73U;
	int64_t x796 = INT64_MIN;

    t176 = (x793*(x794%(x795^x796)));

    if (t176 != -32640LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x797 = -1LL;
	volatile int8_t x798 = -1;
	int64_t x799 = INT64_MIN;
	int8_t x800 = INT8_MIN;
	int64_t t177 = 15696046634888LL;

    t177 = (x797*(x798%(x799^x800)));

    if (t177 != 1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x802 = UINT64_MAX;
	int16_t x803 = INT16_MIN;
	int8_t x804 = 20;
	static volatile uint64_t t178 = 269LLU;

    t178 = (x801*(x802%(x803^x804)));

    if (t178 != 7376818449LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x806 = INT8_MIN;
	uint64_t x807 = UINT64_MAX;
	static volatile uint64_t t179 = 494332999769387LLU;

    t179 = (x805*(x806%(x807^x808)));

    if (t179 != 17318207313913946765LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x809 = INT8_MIN;
	int32_t x810 = -14;
	int8_t x811 = INT8_MAX;
	uint8_t x812 = 0U;

    t180 = (x809*(x810%(x811^x812)));

    if (t180 != 1792) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x814 = -1LL;
	uint8_t x815 = UINT8_MAX;
	int32_t x816 = INT32_MIN;
	int64_t t181 = -248328349802506919LL;

    t181 = (x813*(x814%(x815^x816)));

    if (t181 != 128LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x817 = UINT32_MAX;
	int64_t x819 = -1LL;
	uint32_t x820 = 81U;
	volatile int64_t t182 = -12668250780LL;

    t182 = (x817*(x818%(x819^x820)));

    if (t182 != 25769803770LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x826 = INT16_MAX;
	int8_t x827 = INT8_MIN;
	uint8_t x828 = 58U;
	int32_t t183 = -3661;

    t183 = (x825*(x826%(x827^x828)));

    if (t183 != 889) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x830 = 16U;
	int64_t x831 = INT64_MIN;
	int8_t x832 = -33;

    t184 = (x829*(x830%(x831^x832)));

    if (t184 != 16LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x837 = -1;
	int32_t x838 = INT32_MIN;
	static int32_t x839 = -1;
	int64_t x840 = 17598286814LL;
	int64_t t185 = -15006LL;

    t185 = (x837*(x838%(x839^x840)));

    if (t185 != 2147483648LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x841 = -1;
	static uint8_t x842 = 116U;
	volatile uint8_t x844 = 25U;
	volatile uint32_t t186 = 47U;

    t186 = (x841*(x842%(x843^x844)));

    if (t186 != 4294967180U) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x845 = 825U;
	uint16_t x846 = 342U;
	int64_t x848 = 1201808287088LL;
	static int64_t t187 = 8073680LL;

    t187 = (x845*(x846%(x847^x848)));

    if (t187 != 282150LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x850 = 58;
	volatile int32_t x852 = -5;

    t188 = (x849*(x850%(x851^x852)));

    if (t188 != -660095571384058953LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x853 = 1U;
	static volatile int32_t x854 = 158745;
	int32_t x855 = INT32_MIN;
	volatile uint32_t x856 = UINT32_MAX;
	uint32_t t189 = 482U;

    t189 = (x853*(x854%(x855^x856)));

    if (t189 != 158745U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x857 = -978;
	uint64_t x858 = 35570131796382566LLU;
	uint16_t x859 = 3U;
	uint64_t t190 = 6443816902098LLU;

    t190 = (x857*(x858%(x859^x860)));

    if (t190 != 18446744073703071388LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x861 = 1U;
	static uint64_t x863 = UINT64_MAX;
	uint64_t t191 = 4220LLU;

    t191 = (x861*(x862%(x863^x864)));

    if (t191 != 67LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x866 = INT8_MAX;
	volatile int32_t x868 = INT32_MIN;
	static volatile uint32_t t192 = 65580479U;

    t192 = (x865*(x866%(x867^x868)));

    if (t192 != 4294967169U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x869 = -1;
	int8_t x870 = 1;
	uint64_t x871 = 382403145835734005LLU;
	int16_t x872 = -9;
	uint64_t t193 = UINT64_MAX;

    t193 = (x869*(x870%(x871^x872)));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x873 = 4;
	static int8_t x874 = -10;
	uint32_t x875 = 2006U;
	uint64_t x876 = UINT64_MAX;
	volatile uint64_t t194 = 6LLU;

    t194 = (x873*(x874%(x875^x876)));

    if (t194 != 7988LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x877 = INT32_MIN;
	int64_t x879 = -3953508LL;
	int8_t x880 = -1;

    t195 = (x877*(x878%(x879^x880)));

    if (t195 != -70366596694016LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x883 = 10;
	static int32_t x884 = -1;

    t196 = (x881*(x882%(x883^x884)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x885 = -1;
	int32_t x886 = -1;
	int64_t x887 = INT64_MAX;
	static uint16_t x888 = 10U;

    t197 = (x885*(x886%(x887^x888)));

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x889 = 1;
	int64_t x892 = -6885LL;
	volatile int64_t t198 = 71245887489LL;

    t198 = (x889*(x890%(x891^x892)));

    if (t198 != 35040LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x894 = INT16_MAX;
	int16_t x895 = INT16_MIN;
	int32_t t199 = -4805;

    t199 = (x893*(x894%(x895^x896)));

    if (t199 != 516) { NG(); } else { ; }
	
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

