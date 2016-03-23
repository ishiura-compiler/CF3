
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

static uint16_t x10 = 958U;
static volatile int64_t x15 = INT64_MAX;
uint64_t x16 = 8843683697LLU;
volatile uint64_t x20 = 388734158685750798LLU;
static volatile int16_t x23 = -1;
uint64_t x26 = 26378859031748LLU;
static uint16_t x32 = 45U;
uint64_t x33 = 4303365661906694LLU;
volatile uint32_t x36 = UINT32_MAX;
volatile int32_t t9 = 0;
volatile int16_t x47 = INT16_MIN;
volatile int64_t t10 = 148517464LL;
uint8_t x53 = 11U;
int32_t x62 = -4;
int16_t x63 = 1;
volatile uint64_t x75 = 228020699895493095LLU;
static volatile int32_t t13 = 1487;
volatile int32_t x77 = 385936536;
static volatile int8_t x78 = INT8_MAX;
int16_t x79 = 1888;
volatile int32_t t14 = 158961052;
int64_t x91 = INT64_MAX;
static uint32_t x95 = 1U;
int8_t x96 = 0;
int32_t x101 = INT32_MIN;
int8_t x111 = 8;
volatile uint64_t x117 = 1271107812118999437LLU;
volatile int64_t x120 = INT64_MIN;
int64_t x127 = INT64_MAX;
uint64_t x131 = UINT64_MAX;
int16_t x132 = 58;
static int32_t x135 = INT32_MIN;
int16_t x139 = INT16_MIN;
volatile int32_t t30 = -413;
static uint8_t x149 = 6U;
static uint32_t x150 = 229656U;
uint64_t x152 = UINT64_MAX;
int16_t x155 = 2003;
static int16_t x162 = -504;
int8_t x163 = INT8_MAX;
int16_t x166 = 2440;
static int64_t x168 = INT64_MIN;
int32_t t34 = 707545572;
int16_t x172 = INT16_MAX;
volatile uint64_t t35 = 1951018253755LLU;
volatile int64_t t37 = -302855181382407LL;
int64_t x181 = INT64_MIN;
static int16_t x184 = -3639;
static int16_t x185 = INT16_MIN;
volatile int64_t x186 = -5413165505191LL;
uint8_t x190 = 2U;
int32_t x191 = 414798;
static int8_t x196 = -1;
int8_t x200 = INT8_MIN;
int32_t t43 = 58777709;
volatile int64_t t44 = -5164304421900LL;
int32_t t45 = 389330;
volatile int8_t x224 = 61;
uint8_t x229 = UINT8_MAX;
int32_t t48 = 4;
int32_t x233 = 11;
volatile int8_t x235 = -4;
int32_t t49 = -472279;
volatile int32_t x239 = -1;
int16_t x242 = -1;
volatile uint16_t x243 = UINT16_MAX;
int32_t t51 = 97025;
uint8_t x251 = UINT8_MAX;
int16_t x254 = -1;
volatile uint32_t t54 = 1U;
static volatile uint8_t x263 = UINT8_MAX;
int8_t x265 = INT8_MAX;
uint16_t x273 = 4784U;
volatile uint8_t x276 = 3U;
volatile int32_t x277 = 32;
int32_t x278 = INT32_MIN;
volatile int32_t t59 = -245;
static int64_t x284 = INT64_MIN;
static int16_t x285 = INT16_MIN;
static uint64_t x297 = UINT64_MAX;
uint8_t x302 = 16U;
static int32_t x311 = -43;
volatile uint64_t t67 = 681620LLU;
uint8_t x325 = UINT8_MAX;
volatile int8_t x330 = 0;
int32_t t71 = -7103213;
uint8_t x334 = UINT8_MAX;
volatile int32_t t72 = 65973;
static int8_t x352 = INT8_MAX;
volatile int32_t t76 = 1593;
int64_t x367 = INT64_MAX;
static int32_t x368 = -19869553;
int64_t x372 = 38266LL;
int16_t x375 = INT16_MIN;
static volatile int32_t x377 = INT32_MAX;
volatile uint64_t t80 = 2LLU;
int64_t x383 = INT64_MIN;
volatile int32_t x386 = INT32_MAX;
uint16_t x390 = 1U;
static uint8_t x397 = 0U;
int8_t x409 = 0;
static volatile int32_t x419 = 220138;
uint32_t t87 = 3U;
static volatile int64_t x442 = -1LL;
static uint8_t x448 = 28U;
volatile int32_t t92 = 0;
static int64_t t93 = 7LL;
static uint64_t x458 = 6425712279362LLU;
static volatile uint64_t x466 = UINT64_MAX;
uint16_t x469 = 0U;
int8_t x474 = 0;
int16_t x476 = INT16_MIN;
volatile int64_t t101 = 996092892974LL;
volatile int32_t x492 = INT32_MAX;
volatile int16_t x499 = -1;
volatile uint64_t t104 = 7076LLU;
static volatile uint8_t x509 = UINT8_MAX;
uint16_t x522 = 32U;
static volatile uint8_t x533 = 10U;
uint16_t x535 = 29U;
uint16_t x538 = UINT16_MAX;
int64_t x541 = -1LL;
uint16_t x550 = UINT16_MAX;
static uint64_t x558 = 41784465936LLU;
volatile uint64_t t115 = 6639883814642LLU;
int32_t x567 = INT32_MIN;
volatile int8_t x571 = INT8_MAX;
volatile int64_t t117 = 4853LL;
static int32_t t118 = 641;
static uint8_t x578 = 9U;
static volatile int32_t t119 = -15;
int32_t x581 = 51;
volatile int16_t x586 = INT16_MIN;
volatile int32_t t121 = 326;
int32_t t122 = -10758;
int32_t x611 = INT32_MAX;
static uint64_t x612 = UINT64_MAX;
int16_t x613 = 0;
uint32_t x620 = 115902U;
volatile int64_t x627 = INT64_MAX;
int64_t x631 = INT64_MAX;
uint8_t x636 = 48U;
int32_t t131 = -5635;
volatile int64_t t133 = 31258234786474241LL;
uint64_t t135 = 1LLU;
int32_t x663 = INT32_MIN;
uint64_t x664 = 20LLU;
int8_t x665 = -1;
int8_t x667 = INT8_MIN;
int8_t x668 = INT8_MIN;
int64_t x671 = -100102617362297543LL;
static int32_t x672 = -1438;
static volatile int32_t t139 = -46523;
static int16_t x682 = INT16_MAX;
static volatile int32_t t146 = -27;
static int32_t x716 = -1;
volatile int64_t t148 = 426976LL;
static uint16_t x720 = 0U;
int16_t x725 = -2;
int8_t x727 = 15;
int8_t x729 = INT8_MAX;
static int16_t x730 = -1;
int64_t x732 = 568252000556452364LL;
uint32_t x737 = 2967U;
volatile int64_t t153 = 9747254611515799LL;
uint8_t x741 = 1U;
static uint8_t x749 = 10U;
static uint8_t x750 = 14U;
static uint32_t x751 = 896U;
static int8_t x759 = INT8_MIN;
volatile uint64_t x766 = 551045786540064464LLU;
int8_t x767 = INT8_MAX;
volatile uint64_t t158 = 8943085LLU;
volatile uint64_t x770 = UINT64_MAX;
static uint32_t x783 = 1761U;
int8_t x803 = 47;
static int32_t x804 = -1;
volatile int64_t x816 = INT64_MAX;
uint8_t x821 = 58U;
volatile int8_t x826 = INT8_MIN;
int64_t t171 = -125901198044LL;
static uint64_t x833 = 72LLU;
uint16_t x848 = 21U;
int64_t t176 = 7LL;
static volatile int8_t x857 = 5;
uint32_t x861 = 250075920U;
int32_t x864 = -1;
int16_t x866 = -1;
int32_t x875 = 196234531;
int16_t x876 = INT16_MIN;
int16_t x883 = -1522;
int64_t x887 = INT64_MIN;
int32_t t183 = -59;
volatile int64_t x890 = INT64_MIN;
int8_t x893 = 21;
int64_t x894 = -2LL;
int16_t x898 = -1;
int16_t x901 = -14387;
uint32_t x906 = 31U;
int16_t x909 = -1;
volatile int64_t x920 = 806LL;
static uint64_t t191 = 525LLU;
uint8_t x926 = 4U;
volatile uint64_t x929 = 24532071LLU;
int64_t x937 = -329682LL;
volatile int64_t t197 = -62718394982685076LL;
int8_t x950 = -1;
volatile int32_t t198 = -57;
volatile int8_t x954 = INT8_MIN;
uint8_t x955 = 2U;


void f0(void) {
    	volatile int64_t x1 = -4489123046468608LL;
	int32_t x2 = INT32_MAX;
	volatile uint32_t x3 = 5U;
	int32_t x4 = 0;
	static int64_t t0 = -258587LL;

    t0 = ((x1+x2)-(x3<=x4));

    if (t0 != -4489120898984961LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -1399;
	uint8_t x11 = UINT8_MAX;
	uint32_t x12 = UINT32_MAX;
	static volatile int32_t t1 = -142498412;

    t1 = ((x9+x10)-(x11<=x12));

    if (t1 != -442) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = 30877U;
	static int16_t x14 = INT16_MIN;
	uint32_t t2 = 8U;

    t2 = ((x13+x14)-(x15<=x16));

    if (t2 != 4294965405U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x17 = -29;
	int64_t x18 = 28465732264384338LL;
	uint8_t x19 = 55U;
	volatile int64_t t3 = 0LL;

    t3 = ((x17+x18)-(x19<=x20));

    if (t3 != 28465732264384308LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	volatile int64_t x22 = 2360815849LL;
	int32_t x24 = INT32_MIN;
	volatile int64_t t4 = -849LL;

    t4 = ((x21+x22)-(x23<=x24));

    if (t4 != 2360815721LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = 520830534;
	int64_t x27 = 157849LL;
	uint64_t x28 = 494LLU;
	volatile uint64_t t5 = 1668LLU;

    t5 = ((x25+x26)-(x27<=x28));

    if (t5 != 26379379862282LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = INT16_MAX;
	uint64_t x30 = 72404566145744033LLU;
	volatile int8_t x31 = INT8_MIN;
	static uint64_t t6 = 2013405727709375962LLU;

    t6 = ((x29+x30)-(x31<=x32));

    if (t6 != 72404566145776799LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x34 = INT64_MIN;
	static int16_t x35 = INT16_MIN;
	static uint64_t t7 = 29450071646014LLU;

    t7 = ((x33+x34)-(x35<=x36));

    if (t7 != 9227675402516682501LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 34190740160040LLU;
	volatile int64_t x38 = INT64_MIN;
	int16_t x39 = -1516;
	volatile uint16_t x40 = UINT16_MAX;
	static uint64_t t8 = 1LLU;

    t8 = ((x37+x38)-(x39<=x40));

    if (t8 != 9223406227594935847LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x41 = 21U;
	int32_t x42 = -1;
	int64_t x43 = -1LL;
	int16_t x44 = -3922;

    t9 = ((x41+x42)-(x43<=x44));

    if (t9 != 20) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -15557758471609LL;
	static int32_t x46 = INT32_MIN;
	uint64_t x48 = UINT64_MAX;

    t10 = ((x45+x46)-(x47<=x48));

    if (t10 != -15559905955258LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x54 = -1LL;
	volatile uint8_t x55 = UINT8_MAX;
	uint32_t x56 = UINT32_MAX;
	static int64_t t11 = 112LL;

    t11 = ((x53+x54)-(x55<=x56));

    if (t11 != 9LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = -1;
	static volatile uint64_t x64 = 302290LLU;
	int32_t t12 = -75745;

    t12 = ((x61+x62)-(x63<=x64));

    if (t12 != -6) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x73 = -5132;
	int16_t x74 = INT16_MIN;
	volatile uint32_t x76 = 15477892U;

    t13 = ((x73+x74)-(x75<=x76));

    if (t13 != -37900) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x80 = INT64_MAX;

    t14 = ((x77+x78)-(x79<=x80));

    if (t14 != 385936662) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x81 = 0;
	int16_t x82 = INT16_MIN;
	int16_t x83 = 0;
	volatile int64_t x84 = 168546643LL;
	static volatile int32_t t15 = 118;

    t15 = ((x81+x82)-(x83<=x84));

    if (t15 != -32769) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x85 = 433557U;
	uint16_t x86 = 17U;
	static uint32_t x87 = 3U;
	uint8_t x88 = UINT8_MAX;
	static volatile uint32_t t16 = 414314U;

    t16 = ((x85+x86)-(x87<=x88));

    if (t16 != 433573U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x89 = 28;
	static volatile int8_t x90 = -1;
	static int16_t x92 = INT16_MAX;
	int32_t t17 = 26;

    t17 = ((x89+x90)-(x91<=x92));

    if (t17 != 27) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x93 = INT16_MIN;
	int32_t x94 = -1;
	volatile int32_t t18 = 95040;

    t18 = ((x93+x94)-(x95<=x96));

    if (t18 != -32769) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x97 = -1;
	static int64_t x98 = -1LL;
	int32_t x99 = INT32_MIN;
	static volatile int8_t x100 = INT8_MIN;
	volatile int64_t t19 = 242016467402857559LL;

    t19 = ((x97+x98)-(x99<=x100));

    if (t19 != -3LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x102 = INT8_MAX;
	static int16_t x103 = INT16_MIN;
	int32_t x104 = -58;
	volatile int32_t t20 = 1633594;

    t20 = ((x101+x102)-(x103<=x104));

    if (t20 != -2147483522) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x105 = INT8_MIN;
	int64_t x106 = -1LL;
	volatile uint8_t x107 = UINT8_MAX;
	int8_t x108 = INT8_MAX;
	volatile int64_t t21 = 92965762744437880LL;

    t21 = ((x105+x106)-(x107<=x108));

    if (t21 != -129LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x109 = 183U;
	uint64_t x110 = 58LLU;
	int8_t x112 = -1;
	uint64_t t22 = 26LLU;

    t22 = ((x109+x110)-(x111<=x112));

    if (t22 != 241LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x113 = 94U;
	int32_t x114 = 11;
	int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t23 = 4;

    t23 = ((x113+x114)-(x115<=x116));

    if (t23 != 104) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x118 = 18996776933LLU;
	int32_t x119 = INT32_MIN;
	volatile uint64_t t24 = 5664404710859873LLU;

    t24 = ((x117+x118)-(x119<=x120));

    if (t24 != 1271107831115776370LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x121 = 0;
	volatile int16_t x122 = INT16_MAX;
	int8_t x123 = INT8_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t25 = -242232710;

    t25 = ((x121+x122)-(x123<=x124));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x125 = UINT16_MAX;
	static uint64_t x126 = 188LLU;
	static int32_t x128 = INT32_MAX;
	volatile uint64_t t26 = 7769LLU;

    t26 = ((x125+x126)-(x127<=x128));

    if (t26 != 65723LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x129 = UINT8_MAX;
	int64_t x130 = INT64_MIN;
	volatile int64_t t27 = -1028018249012LL;

    t27 = ((x129+x130)-(x131<=x132));

    if (t27 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x133 = INT64_MAX;
	int64_t x134 = INT64_MIN;
	static int32_t x136 = -1678;
	static volatile int64_t t28 = 23224320368LL;

    t28 = ((x133+x134)-(x135<=x136));

    if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MAX;
	uint8_t x140 = 92U;
	volatile int32_t t29 = -84063;

    t29 = ((x137+x138)-(x139<=x140));

    if (t29 != -32642) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = INT16_MIN;
	uint8_t x142 = 1U;
	int32_t x143 = INT32_MAX;
	static int16_t x144 = 38;

    t30 = ((x141+x142)-(x143<=x144));

    if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x151 = -42;
	volatile uint32_t t31 = 4U;

    t31 = ((x149+x150)-(x151<=x152));

    if (t31 != 229661U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x153 = 1;
	volatile int8_t x154 = INT8_MAX;
	int16_t x156 = INT16_MIN;
	static int32_t t32 = 3626;

    t32 = ((x153+x154)-(x155<=x156));

    if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x161 = 140188555081LL;
	int8_t x164 = 0;
	int64_t t33 = -1376045994LL;

    t33 = ((x161+x162)-(x163<=x164));

    if (t33 != 140188554577LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x165 = 394170486;
	int64_t x167 = -17148503LL;

    t34 = ((x165+x166)-(x167<=x168));

    if (t34 != 394172926) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x169 = 616923706;
	uint64_t x170 = 12657478896386LLU;
	int32_t x171 = INT32_MAX;

    t35 = ((x169+x170)-(x171<=x172));

    if (t35 != 12658095820092LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x173 = 457;
	uint32_t x174 = 9978721U;
	int64_t x175 = INT64_MIN;
	int64_t x176 = INT64_MIN;
	uint32_t t36 = 63014U;

    t36 = ((x173+x174)-(x175<=x176));

    if (t36 != 9979177U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x177 = INT64_MIN;
	int64_t x178 = INT64_MAX;
	int64_t x179 = INT64_MIN;
	volatile int16_t x180 = INT16_MIN;

    t37 = ((x177+x178)-(x179<=x180));

    if (t37 != -2LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x182 = UINT8_MAX;
	int8_t x183 = INT8_MAX;
	static int64_t t38 = 10150245106242771LL;

    t38 = ((x181+x182)-(x183<=x184));

    if (t38 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x187 = -4;
	int8_t x188 = INT8_MIN;
	int64_t t39 = 47LL;

    t39 = ((x185+x186)-(x187<=x188));

    if (t39 != -5413165537959LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x189 = 650U;
	volatile int16_t x192 = -3644;
	int32_t t40 = -12085688;

    t40 = ((x189+x190)-(x191<=x192));

    if (t40 != 652) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x193 = 262774585907LL;
	static int8_t x194 = 18;
	volatile uint16_t x195 = UINT16_MAX;
	volatile int64_t t41 = -8702493837399LL;

    t41 = ((x193+x194)-(x195<=x196));

    if (t41 != 262774585925LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = 27;
	static int32_t x198 = INT32_MIN;
	int32_t x199 = INT32_MIN;
	volatile int32_t t42 = 0;

    t42 = ((x197+x198)-(x199<=x200));

    if (t42 != -2147483622) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x201 = UINT16_MAX;
	volatile int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MAX;
	int32_t x204 = INT32_MAX;

    t43 = ((x201+x202)-(x203<=x204));

    if (t43 != 32766) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x209 = 6283235389LL;
	int64_t x210 = INT64_MIN;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = 1;

    t44 = ((x209+x210)-(x211<=x212));

    if (t44 != -9223372030571540419LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x217 = 1;
	int32_t x218 = -29553;
	static uint64_t x219 = UINT64_MAX;
	uint32_t x220 = UINT32_MAX;

    t45 = ((x217+x218)-(x219<=x220));

    if (t45 != -29552) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x221 = INT32_MIN;
	int64_t x222 = -1979LL;
	int8_t x223 = INT8_MIN;
	static volatile int64_t t46 = 322325355454481LL;

    t46 = ((x221+x222)-(x223<=x224));

    if (t46 != -2147485628LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x225 = UINT8_MAX;
	int32_t x226 = -1;
	volatile int64_t x227 = -77248055899039348LL;
	int64_t x228 = -1LL;
	int32_t t47 = 44016135;

    t47 = ((x225+x226)-(x227<=x228));

    if (t47 != 253) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x230 = UINT8_MAX;
	int16_t x231 = 0;
	int8_t x232 = INT8_MAX;

    t48 = ((x229+x230)-(x231<=x232));

    if (t48 != 509) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x234 = -1;
	int8_t x236 = -1;

    t49 = ((x233+x234)-(x235<=x236));

    if (t49 != 9) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x237 = 14341097LLU;
	uint64_t x238 = 6261404970559LLU;
	int64_t x240 = -7247362LL;
	uint64_t t50 = 3268LLU;

    t50 = ((x237+x238)-(x239<=x240));

    if (t50 != 6261419311656LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x241 = 15U;
	volatile int8_t x244 = INT8_MAX;

    t51 = ((x241+x242)-(x243<=x244));

    if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x245 = 13U;
	volatile uint8_t x246 = 19U;
	uint16_t x247 = 5314U;
	int32_t x248 = INT32_MAX;
	volatile int32_t t52 = -685072271;

    t52 = ((x245+x246)-(x247<=x248));

    if (t52 != 31) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x249 = -1;
	int16_t x250 = INT16_MAX;
	int64_t x252 = INT64_MIN;
	int32_t t53 = -37925;

    t53 = ((x249+x250)-(x251<=x252));

    if (t53 != 32766) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x253 = 991042U;
	int64_t x255 = -49875LL;
	uint16_t x256 = 92U;

    t54 = ((x253+x254)-(x255<=x256));

    if (t54 != 991040U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x257 = 0;
	static uint16_t x258 = 145U;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = INT32_MAX;
	volatile int32_t t55 = 709041637;

    t55 = ((x257+x258)-(x259<=x260));

    if (t55 != 145) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x261 = INT8_MIN;
	static uint8_t x262 = 36U;
	static int64_t x264 = INT64_MIN;
	volatile int32_t t56 = -96;

    t56 = ((x261+x262)-(x263<=x264));

    if (t56 != -92) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x266 = 44U;
	volatile int32_t x267 = -859509;
	uint64_t x268 = 145948031169LLU;
	volatile uint32_t t57 = 2U;

    t57 = ((x265+x266)-(x267<=x268));

    if (t57 != 171U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x274 = 32635502426992LLU;
	uint16_t x275 = 6111U;
	uint64_t t58 = 74528056745333144LLU;

    t58 = ((x273+x274)-(x275<=x276));

    if (t58 != 32635502431776LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x279 = -1;
	uint64_t x280 = UINT64_MAX;

    t59 = ((x277+x278)-(x279<=x280));

    if (t59 != -2147483617) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x281 = INT64_MIN;
	int16_t x282 = INT16_MAX;
	uint32_t x283 = UINT32_MAX;
	static int64_t t60 = 559518517315862LL;

    t60 = ((x281+x282)-(x283<=x284));

    if (t60 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x286 = INT8_MAX;
	static int32_t x287 = INT32_MIN;
	int64_t x288 = -1LL;
	volatile int32_t t61 = -4476310;

    t61 = ((x285+x286)-(x287<=x288));

    if (t61 != -32642) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x289 = INT8_MIN;
	uint8_t x290 = UINT8_MAX;
	int32_t x291 = -1;
	int8_t x292 = INT8_MIN;
	volatile int32_t t62 = 1;

    t62 = ((x289+x290)-(x291<=x292));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x293 = -235306277;
	static int32_t x294 = -189402;
	static int64_t x295 = INT64_MIN;
	int32_t x296 = -1;
	int32_t t63 = -454141;

    t63 = ((x293+x294)-(x295<=x296));

    if (t63 != -235495680) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x298 = -1;
	volatile uint16_t x299 = UINT16_MAX;
	uint64_t x300 = 391LLU;
	static uint64_t t64 = 369LLU;

    t64 = ((x297+x298)-(x299<=x300));

    if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x301 = 597;
	int32_t x303 = -1;
	int64_t x304 = INT64_MIN;
	int32_t t65 = -1230;

    t65 = ((x301+x302)-(x303<=x304));

    if (t65 != 613) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x305 = 1LL;
	uint8_t x306 = UINT8_MAX;
	uint8_t x307 = 13U;
	int64_t x308 = INT64_MIN;
	int64_t t66 = -1181089116986040LL;

    t66 = ((x305+x306)-(x307<=x308));

    if (t66 != 256LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x309 = 0;
	uint64_t x310 = 328599696591795LLU;
	int16_t x312 = -1367;

    t67 = ((x309+x310)-(x311<=x312));

    if (t67 != 328599696591795LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x313 = UINT32_MAX;
	int32_t x314 = 21;
	volatile uint16_t x315 = 56U;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t68 = 1534U;

    t68 = ((x313+x314)-(x315<=x316));

    if (t68 != 19U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x321 = 8U;
	int64_t x322 = -1LL;
	uint16_t x323 = UINT16_MAX;
	int8_t x324 = INT8_MAX;
	static volatile int64_t t69 = -8047797679LL;

    t69 = ((x321+x322)-(x323<=x324));

    if (t69 != 7LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x326 = -29;
	volatile int64_t x327 = INT64_MAX;
	static int64_t x328 = INT64_MIN;
	static volatile int32_t t70 = 1;

    t70 = ((x325+x326)-(x327<=x328));

    if (t70 != 226) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x329 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	volatile uint32_t x332 = 3664U;

    t71 = ((x329+x330)-(x331<=x332));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x333 = INT16_MIN;
	uint64_t x335 = UINT64_MAX;
	uint64_t x336 = 427399546435498LLU;

    t72 = ((x333+x334)-(x335<=x336));

    if (t72 != -32513) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x337 = INT32_MAX;
	int64_t x338 = -707285270234105169LL;
	static volatile uint32_t x339 = 23524U;
	volatile uint8_t x340 = 28U;
	int64_t t73 = -142791LL;

    t73 = ((x337+x338)-(x339<=x340));

    if (t73 != -707285268086621522LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x345 = INT32_MAX;
	volatile int16_t x346 = INT16_MIN;
	static volatile uint8_t x347 = 91U;
	int64_t x348 = -1LL;
	int32_t t74 = 43864250;

    t74 = ((x345+x346)-(x347<=x348));

    if (t74 != 2147450879) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x349 = 1;
	static int8_t x350 = -3;
	uint32_t x351 = 66015U;
	int32_t t75 = 16011;

    t75 = ((x349+x350)-(x351<=x352));

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x357 = INT16_MIN;
	int16_t x358 = -1;
	int16_t x359 = 0;
	int16_t x360 = INT16_MIN;

    t76 = ((x357+x358)-(x359<=x360));

    if (t76 != -32769) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x365 = 3U;
	uint64_t x366 = 518059339051682LLU;
	uint64_t t77 = 2616802532474462388LLU;

    t77 = ((x365+x366)-(x367<=x368));

    if (t77 != 518059339051685LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x369 = 54;
	uint32_t x370 = 703168U;
	int8_t x371 = -1;
	static uint32_t t78 = 58066U;

    t78 = ((x369+x370)-(x371<=x372));

    if (t78 != 703221U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x373 = -1LL;
	int8_t x374 = INT8_MIN;
	static volatile uint32_t x376 = UINT32_MAX;
	int64_t t79 = -61LL;

    t79 = ((x373+x374)-(x375<=x376));

    if (t79 != -130LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x378 = UINT64_MAX;
	volatile int64_t x379 = -1LL;
	int64_t x380 = INT64_MIN;

    t80 = ((x377+x378)-(x379<=x380));

    if (t80 != 2147483646LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x381 = 5119;
	int8_t x382 = INT8_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t81 = -580;

    t81 = ((x381+x382)-(x383<=x384));

    if (t81 != 5245) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x385 = -1LL;
	uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MIN;
	volatile int64_t t82 = -408754970835178LL;

    t82 = ((x385+x386)-(x387<=x388));

    if (t82 != 2147483646LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x389 = UINT64_MAX;
	int8_t x391 = INT8_MAX;
	int32_t x392 = INT32_MAX;
	static uint64_t t83 = UINT64_MAX;

    t83 = ((x389+x390)-(x391<=x392));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x398 = -1;
	uint32_t x399 = 3444U;
	uint8_t x400 = UINT8_MAX;
	static int32_t t84 = -31408;

    t84 = ((x397+x398)-(x399<=x400));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x401 = INT8_MAX;
	uint32_t x402 = 4189823U;
	int8_t x403 = INT8_MIN;
	volatile uint8_t x404 = UINT8_MAX;
	volatile uint32_t t85 = 630U;

    t85 = ((x401+x402)-(x403<=x404));

    if (t85 != 4189949U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x410 = 541U;
	int64_t x411 = INT64_MIN;
	static uint16_t x412 = 32U;
	int32_t t86 = -10912624;

    t86 = ((x409+x410)-(x411<=x412));

    if (t86 != 540) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x417 = 400976358;
	static uint32_t x418 = 12715309U;
	int32_t x420 = INT32_MAX;

    t87 = ((x417+x418)-(x419<=x420));

    if (t87 != 413691666U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x425 = 36U;
	int64_t x426 = 228415680907245LL;
	int8_t x427 = INT8_MIN;
	int16_t x428 = -67;
	int64_t t88 = 5067LL;

    t88 = ((x425+x426)-(x427<=x428));

    if (t88 != 228415680907280LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x429 = INT16_MAX;
	volatile int16_t x430 = -1;
	int32_t x431 = -43339673;
	volatile uint32_t x432 = 10823431U;
	volatile int32_t t89 = -11;

    t89 = ((x429+x430)-(x431<=x432));

    if (t89 != 32766) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x437 = 80U;
	int64_t x438 = INT64_MIN;
	static volatile int8_t x439 = -1;
	static int16_t x440 = -5647;
	static int64_t t90 = -38LL;

    t90 = ((x437+x438)-(x439<=x440));

    if (t90 != -9223372036854775728LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x441 = 1304U;
	uint16_t x443 = UINT16_MAX;
	int8_t x444 = 7;
	int64_t t91 = 13614513359601LL;

    t91 = ((x441+x442)-(x443<=x444));

    if (t91 != 1303LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x445 = INT16_MAX;
	uint16_t x446 = UINT16_MAX;
	uint16_t x447 = 186U;

    t92 = ((x445+x446)-(x447<=x448));

    if (t92 != 98302) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x449 = INT8_MAX;
	static volatile int64_t x450 = INT64_MIN;
	int32_t x451 = INT32_MIN;
	int8_t x452 = INT8_MIN;

    t93 = ((x449+x450)-(x451<=x452));

    if (t93 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x453 = INT8_MAX;
	static uint64_t x454 = UINT64_MAX;
	int16_t x455 = INT16_MAX;
	uint64_t x456 = UINT64_MAX;
	uint64_t t94 = 624460099254475LLU;

    t94 = ((x453+x454)-(x455<=x456));

    if (t94 != 125LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x457 = INT32_MIN;
	int32_t x459 = INT32_MAX;
	volatile int64_t x460 = INT64_MAX;
	volatile uint64_t t95 = 185LLU;

    t95 = ((x457+x458)-(x459<=x460));

    if (t95 != 6423564795713LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x461 = 25U;
	int16_t x462 = 21;
	uint32_t x463 = 7276409U;
	int64_t x464 = INT64_MIN;
	volatile int32_t t96 = -21848;

    t96 = ((x461+x462)-(x463<=x464));

    if (t96 != 46) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x465 = 41U;
	volatile int8_t x467 = INT8_MIN;
	uint16_t x468 = 2881U;
	uint64_t t97 = 108658LLU;

    t97 = ((x465+x466)-(x467<=x468));

    if (t97 != 39LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x470 = -1LL;
	uint8_t x471 = 1U;
	static int8_t x472 = INT8_MIN;
	volatile int64_t t98 = 1087825499365LL;

    t98 = ((x469+x470)-(x471<=x472));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x473 = -1;
	int8_t x475 = 1;
	static volatile int32_t t99 = -124538675;

    t99 = ((x473+x474)-(x475<=x476));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x477 = -1;
	int16_t x478 = -57;
	static volatile uint16_t x479 = 590U;
	static uint16_t x480 = UINT16_MAX;
	volatile int32_t t100 = 3;

    t100 = ((x477+x478)-(x479<=x480));

    if (t100 != -59) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x481 = 11U;
	int64_t x482 = 724053724517372771LL;
	static int32_t x483 = -20;
	volatile int8_t x484 = INT8_MIN;

    t101 = ((x481+x482)-(x483<=x484));

    if (t101 != 724053724517372782LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x489 = INT32_MIN;
	int64_t x490 = -1LL;
	static int64_t x491 = INT64_MAX;
	int64_t t102 = -460118LL;

    t102 = ((x489+x490)-(x491<=x492));

    if (t102 != -2147483649LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x493 = -19;
	volatile uint64_t x494 = 12LLU;
	int16_t x495 = INT16_MIN;
	int32_t x496 = INT32_MIN;
	volatile uint64_t t103 = 2267771977441161LLU;

    t103 = ((x493+x494)-(x495<=x496));

    if (t103 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x497 = -1LL;
	uint64_t x498 = 249068849711947080LLU;
	static int64_t x500 = INT64_MIN;

    t104 = ((x497+x498)-(x499<=x500));

    if (t104 != 249068849711947079LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x510 = 7U;
	volatile uint8_t x511 = 50U;
	int32_t x512 = 10493282;
	int32_t t105 = 27078845;

    t105 = ((x509+x510)-(x511<=x512));

    if (t105 != 261) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x521 = 24;
	int32_t x523 = INT32_MIN;
	volatile int32_t x524 = INT32_MAX;
	static volatile int32_t t106 = 888;

    t106 = ((x521+x522)-(x523<=x524));

    if (t106 != 55) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x525 = UINT16_MAX;
	uint32_t x526 = 1U;
	static volatile uint32_t x527 = 3U;
	volatile uint64_t x528 = UINT64_MAX;
	volatile uint32_t t107 = 1226305908U;

    t107 = ((x525+x526)-(x527<=x528));

    if (t107 != 65535U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x529 = 7U;
	int16_t x530 = INT16_MIN;
	int32_t x531 = -55314;
	uint32_t x532 = 235079610U;
	int32_t t108 = -288925114;

    t108 = ((x529+x530)-(x531<=x532));

    if (t108 != -32761) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x534 = 452U;
	static int16_t x536 = 24;
	int32_t t109 = 77349;

    t109 = ((x533+x534)-(x535<=x536));

    if (t109 != 462) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x537 = INT8_MIN;
	static volatile int64_t x539 = INT64_MIN;
	int8_t x540 = INT8_MIN;
	volatile int32_t t110 = 35;

    t110 = ((x537+x538)-(x539<=x540));

    if (t110 != 65406) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x542 = 1959741628LLU;
	uint64_t x543 = UINT64_MAX;
	int32_t x544 = -18371;
	uint64_t t111 = 84373792506178LLU;

    t111 = ((x541+x542)-(x543<=x544));

    if (t111 != 1959741627LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x545 = 5U;
	uint8_t x546 = 0U;
	volatile int16_t x547 = 3338;
	static int32_t x548 = INT32_MIN;
	volatile int32_t t112 = 1766548;

    t112 = ((x545+x546)-(x547<=x548));

    if (t112 != 5) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x549 = -1LL;
	int32_t x551 = -971979005;
	int16_t x552 = 399;
	static volatile int64_t t113 = -19648335533152LL;

    t113 = ((x549+x550)-(x551<=x552));

    if (t113 != 65533LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x553 = INT8_MAX;
	volatile uint32_t x554 = UINT32_MAX;
	int32_t x555 = INT32_MAX;
	int64_t x556 = INT64_MAX;
	volatile uint32_t t114 = 1U;

    t114 = ((x553+x554)-(x555<=x556));

    if (t114 != 125U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x557 = 1371299267LL;
	int8_t x559 = -1;
	int64_t x560 = INT64_MAX;

    t115 = ((x557+x558)-(x559<=x560));

    if (t115 != 43155765202LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x565 = UINT64_MAX;
	uint64_t x566 = UINT64_MAX;
	uint64_t x568 = 73744287LLU;
	static uint64_t t116 = 728553402915505LLU;

    t116 = ((x565+x566)-(x567<=x568));

    if (t116 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x569 = INT64_MAX;
	volatile int16_t x570 = -11855;
	int32_t x572 = INT32_MAX;

    t117 = ((x569+x570)-(x571<=x572));

    if (t117 != 9223372036854763951LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x573 = INT16_MIN;
	uint8_t x574 = 109U;
	int16_t x575 = INT16_MIN;
	int8_t x576 = -59;

    t118 = ((x573+x574)-(x575<=x576));

    if (t118 != -32660) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x577 = 6;
	int32_t x579 = INT32_MAX;
	uint32_t x580 = 17057304U;

    t119 = ((x577+x578)-(x579<=x580));

    if (t119 != 15) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x582 = 223U;
	static uint8_t x583 = 14U;
	uint16_t x584 = 611U;
	int32_t t120 = -521013;

    t120 = ((x581+x582)-(x583<=x584));

    if (t120 != 273) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x585 = INT8_MAX;
	int32_t x587 = INT32_MIN;
	int16_t x588 = INT16_MAX;

    t121 = ((x585+x586)-(x587<=x588));

    if (t121 != -32642) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x597 = 0U;
	static int16_t x598 = INT16_MIN;
	static int32_t x599 = 170;
	int8_t x600 = 0;

    t122 = ((x597+x598)-(x599<=x600));

    if (t122 != -32768) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x601 = INT64_MIN;
	int16_t x602 = INT16_MAX;
	uint16_t x603 = 74U;
	static int32_t x604 = -3709051;
	int64_t t123 = 750848016LL;

    t123 = ((x601+x602)-(x603<=x604));

    if (t123 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x605 = -643LL;
	uint8_t x606 = UINT8_MAX;
	volatile int32_t x607 = INT32_MIN;
	int32_t x608 = 7;
	volatile int64_t t124 = 139695344239LL;

    t124 = ((x605+x606)-(x607<=x608));

    if (t124 != -389LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x609 = 94U;
	volatile int8_t x610 = INT8_MIN;
	uint32_t t125 = 181U;

    t125 = ((x609+x610)-(x611<=x612));

    if (t125 != 4294967261U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x614 = -1;
	uint32_t x615 = 82U;
	volatile uint16_t x616 = 331U;
	int32_t t126 = 2725954;

    t126 = ((x613+x614)-(x615<=x616));

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x617 = 469085019136900475LLU;
	int64_t x618 = -1LL;
	static volatile int8_t x619 = 15;
	volatile uint64_t t127 = 14LLU;

    t127 = ((x617+x618)-(x619<=x620));

    if (t127 != 469085019136900473LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x621 = -1;
	int8_t x622 = INT8_MIN;
	volatile int64_t x623 = INT64_MIN;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t128 = 187780413;

    t128 = ((x621+x622)-(x623<=x624));

    if (t128 != -130) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x625 = 35;
	int32_t x626 = -191684;
	int8_t x628 = INT8_MAX;
	int32_t t129 = 159857;

    t129 = ((x625+x626)-(x627<=x628));

    if (t129 != -191649) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x629 = 1817U;
	int8_t x630 = INT8_MAX;
	int64_t x632 = INT64_MAX;
	volatile uint32_t t130 = 3U;

    t130 = ((x629+x630)-(x631<=x632));

    if (t130 != 1943U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x633 = 6;
	static int32_t x634 = 13493;
	volatile int8_t x635 = 7;

    t131 = ((x633+x634)-(x635<=x636));

    if (t131 != 13498) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x637 = INT16_MIN;
	static int64_t x638 = -1LL;
	static uint64_t x639 = UINT64_MAX;
	int16_t x640 = -6;
	volatile int64_t t132 = 1544LL;

    t132 = ((x637+x638)-(x639<=x640));

    if (t132 != -32769LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x641 = 157085608119374LL;
	volatile uint8_t x642 = UINT8_MAX;
	static uint16_t x643 = UINT16_MAX;
	int8_t x644 = -1;

    t133 = ((x641+x642)-(x643<=x644));

    if (t133 != 157085608119629LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x649 = -14566;
	int8_t x650 = -1;
	static volatile uint64_t x651 = 27054917850338LLU;
	static uint64_t x652 = 4467349041156815LLU;
	int32_t t134 = 1;

    t134 = ((x649+x650)-(x651<=x652));

    if (t134 != -14568) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x653 = 791385916288LLU;
	int64_t x654 = INT64_MIN;
	int32_t x655 = -6144;
	static int64_t x656 = INT64_MAX;

    t135 = ((x653+x654)-(x655<=x656));

    if (t135 != 9223372828240692095LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x657 = INT8_MIN;
	uint64_t x658 = UINT64_MAX;
	int8_t x659 = -1;
	volatile int8_t x660 = INT8_MIN;
	uint64_t t136 = 3101910788917601656LLU;

    t136 = ((x657+x658)-(x659<=x660));

    if (t136 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x661 = 4827531LLU;
	static int64_t x662 = 22196220974LL;
	uint64_t t137 = 24644003LLU;

    t137 = ((x661+x662)-(x663<=x664));

    if (t137 != 22201048505LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x666 = UINT8_MAX;
	int32_t t138 = -143;

    t138 = ((x665+x666)-(x667<=x668));

    if (t138 != 253) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x669 = 16908U;
	volatile int32_t x670 = INT32_MIN;

    t139 = ((x669+x670)-(x671<=x672));

    if (t139 != -2147466741) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x677 = 1;
	int16_t x678 = 1428;
	uint16_t x679 = 0U;
	static uint32_t x680 = 64404U;
	int32_t t140 = 708;

    t140 = ((x677+x678)-(x679<=x680));

    if (t140 != 1428) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x681 = INT64_MIN;
	uint32_t x683 = 98354U;
	int8_t x684 = -40;
	volatile int64_t t141 = -179884586962498LL;

    t141 = ((x681+x682)-(x683<=x684));

    if (t141 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x685 = 14288670504627LLU;
	volatile int64_t x686 = INT64_MIN;
	volatile int32_t x687 = 8271431;
	uint64_t x688 = UINT64_MAX;
	volatile uint64_t t142 = 12996441353353821LLU;

    t142 = ((x685+x686)-(x687<=x688));

    if (t142 != 9223386325525280434LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x689 = 860U;
	int16_t x690 = INT16_MIN;
	uint64_t x691 = 1713LLU;
	uint16_t x692 = 3899U;
	volatile uint32_t t143 = 119U;

    t143 = ((x689+x690)-(x691<=x692));

    if (t143 != 4294935387U) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint32_t x693 = 19U;
	static int16_t x694 = INT16_MIN;
	int8_t x695 = -1;
	int32_t x696 = -3714;
	static uint32_t t144 = 2U;

    t144 = ((x693+x694)-(x695<=x696));

    if (t144 != 4294934547U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x697 = 0;
	volatile int64_t x698 = -425885970415842LL;
	int16_t x699 = INT16_MAX;
	int8_t x700 = -1;
	volatile int64_t t145 = -84143LL;

    t145 = ((x697+x698)-(x699<=x700));

    if (t145 != -425885970415842LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x705 = 7U;
	uint8_t x706 = UINT8_MAX;
	static volatile int32_t x707 = INT32_MIN;
	int32_t x708 = 122556;

    t146 = ((x705+x706)-(x707<=x708));

    if (t146 != 261) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x709 = 10LL;
	int8_t x710 = INT8_MAX;
	static volatile int8_t x711 = INT8_MIN;
	volatile int8_t x712 = INT8_MIN;
	volatile int64_t t147 = 2975666086278LL;

    t147 = ((x709+x710)-(x711<=x712));

    if (t147 != 136LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x713 = -1LL;
	volatile uint8_t x714 = UINT8_MAX;
	static volatile uint64_t x715 = UINT64_MAX;

    t148 = ((x713+x714)-(x715<=x716));

    if (t148 != 253LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x717 = INT16_MAX;
	volatile int32_t x718 = INT32_MIN;
	volatile int8_t x719 = -1;
	int32_t t149 = -604;

    t149 = ((x717+x718)-(x719<=x720));

    if (t149 != -2147450882) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x721 = INT16_MIN;
	volatile int32_t x722 = 46741;
	static uint8_t x723 = UINT8_MAX;
	int32_t x724 = INT32_MIN;
	volatile int32_t t150 = -2435;

    t150 = ((x721+x722)-(x723<=x724));

    if (t150 != 13973) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x726 = 30U;
	int32_t x728 = -4968982;
	int32_t t151 = -177;

    t151 = ((x725+x726)-(x727<=x728));

    if (t151 != 28) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x731 = INT16_MAX;
	static int32_t t152 = 84;

    t152 = ((x729+x730)-(x731<=x732));

    if (t152 != 125) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x738 = -1LL;
	int32_t x739 = -499518376;
	uint64_t x740 = 454LLU;

    t153 = ((x737+x738)-(x739<=x740));

    if (t153 != 2966LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x742 = UINT16_MAX;
	uint32_t x743 = 698918U;
	int32_t x744 = 124;
	int32_t t154 = -7509;

    t154 = ((x741+x742)-(x743<=x744));

    if (t154 != 65536) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x752 = INT16_MAX;
	volatile int32_t t155 = 193132;

    t155 = ((x749+x750)-(x751<=x752));

    if (t155 != 23) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x757 = UINT64_MAX;
	int16_t x758 = INT16_MIN;
	int16_t x760 = INT16_MAX;
	uint64_t t156 = 14298513028LLU;

    t156 = ((x757+x758)-(x759<=x760));

    if (t156 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x761 = 55U;
	int8_t x762 = -1;
	uint64_t x763 = UINT64_MAX;
	static uint8_t x764 = UINT8_MAX;
	volatile int32_t t157 = -4189657;

    t157 = ((x761+x762)-(x763<=x764));

    if (t157 != 54) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x765 = INT32_MIN;
	uint32_t x768 = 251U;

    t158 = ((x765+x766)-(x767<=x768));

    if (t158 != 551045784392580815LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x769 = INT64_MIN;
	volatile int8_t x771 = INT8_MAX;
	uint8_t x772 = 3U;
	volatile uint64_t t159 = 1606586684497863LLU;

    t159 = ((x769+x770)-(x771<=x772));

    if (t159 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x777 = UINT8_MAX;
	uint8_t x778 = 11U;
	uint64_t x779 = UINT64_MAX;
	int32_t x780 = -1;
	int32_t t160 = 463;

    t160 = ((x777+x778)-(x779<=x780));

    if (t160 != 265) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x781 = -1;
	int8_t x782 = -1;
	int8_t x784 = -3;
	int32_t t161 = 59009394;

    t161 = ((x781+x782)-(x783<=x784));

    if (t161 != -3) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x793 = INT16_MIN;
	int16_t x794 = INT16_MAX;
	volatile int32_t x795 = INT32_MAX;
	uint8_t x796 = UINT8_MAX;
	int32_t t162 = -5;

    t162 = ((x793+x794)-(x795<=x796));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x797 = -1;
	uint64_t x798 = 502391789887LLU;
	static volatile uint8_t x799 = UINT8_MAX;
	uint16_t x800 = UINT16_MAX;
	uint64_t t163 = 63473468LLU;

    t163 = ((x797+x798)-(x799<=x800));

    if (t163 != 502391789885LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x801 = 4451690115330693LLU;
	static uint8_t x802 = UINT8_MAX;
	uint64_t t164 = 8LLU;

    t164 = ((x801+x802)-(x803<=x804));

    if (t164 != 4451690115330948LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x805 = 249U;
	static int64_t x806 = INT64_MIN;
	volatile int32_t x807 = INT32_MIN;
	int8_t x808 = INT8_MIN;
	volatile int64_t t165 = 111LL;

    t165 = ((x805+x806)-(x807<=x808));

    if (t165 != -9223372036854775560LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x809 = -4;
	int32_t x810 = 6186519;
	uint64_t x811 = UINT64_MAX;
	int8_t x812 = -1;
	volatile int32_t t166 = 589555318;

    t166 = ((x809+x810)-(x811<=x812));

    if (t166 != 6186514) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x813 = INT64_MIN;
	static uint64_t x814 = 664646344LLU;
	uint16_t x815 = 747U;
	uint64_t t167 = 3399363989LLU;

    t167 = ((x813+x814)-(x815<=x816));

    if (t167 != 9223372037519422151LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x817 = 34U;
	volatile int32_t x818 = -1;
	uint64_t x819 = 259188103116870935LLU;
	uint64_t x820 = 5709318227LLU;
	volatile int32_t t168 = 48737804;

    t168 = ((x817+x818)-(x819<=x820));

    if (t168 != 33) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x822 = 25;
	int16_t x823 = 36;
	static volatile int32_t x824 = INT32_MAX;
	volatile int32_t t169 = -1241967;

    t169 = ((x821+x822)-(x823<=x824));

    if (t169 != 82) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x825 = 0LLU;
	volatile int64_t x827 = -1LL;
	static int8_t x828 = INT8_MIN;
	volatile uint64_t t170 = 112LLU;

    t170 = ((x825+x826)-(x827<=x828));

    if (t170 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x829 = -7761799436652LL;
	volatile uint16_t x830 = 192U;
	uint32_t x831 = 7687U;
	int8_t x832 = INT8_MAX;

    t171 = ((x829+x830)-(x831<=x832));

    if (t171 != -7761799436460LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x834 = 2LLU;
	uint8_t x835 = 2U;
	static int8_t x836 = INT8_MAX;
	volatile uint64_t t172 = 785946975655453LLU;

    t172 = ((x833+x834)-(x835<=x836));

    if (t172 != 73LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x837 = UINT8_MAX;
	static uint64_t x838 = 46001925436308LLU;
	int64_t x839 = INT64_MIN;
	int32_t x840 = -131;
	static volatile uint64_t t173 = 163LLU;

    t173 = ((x837+x838)-(x839<=x840));

    if (t173 != 46001925436562LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x841 = INT32_MAX;
	static int8_t x842 = INT8_MIN;
	volatile int8_t x843 = -1;
	int16_t x844 = INT16_MIN;
	int32_t t174 = 4699;

    t174 = ((x841+x842)-(x843<=x844));

    if (t174 != 2147483519) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x845 = INT32_MIN;
	uint16_t x846 = 6U;
	volatile int64_t x847 = -1LL;
	volatile int32_t t175 = 599901963;

    t175 = ((x845+x846)-(x847<=x848));

    if (t175 != -2147483643) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x849 = 12LL;
	static volatile int16_t x850 = INT16_MIN;
	uint16_t x851 = 5U;
	int16_t x852 = -12;

    t176 = ((x849+x850)-(x851<=x852));

    if (t176 != -32756LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x858 = 10451862U;
	volatile uint32_t x859 = 301U;
	int64_t x860 = INT64_MIN;
	uint32_t t177 = 2U;

    t177 = ((x857+x858)-(x859<=x860));

    if (t177 != 10451867U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x862 = 667822912LL;
	static uint16_t x863 = 26778U;
	volatile int64_t t178 = -1492233044422LL;

    t178 = ((x861+x862)-(x863<=x864));

    if (t178 != 917898832LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x865 = 616LL;
	volatile uint8_t x867 = UINT8_MAX;
	int16_t x868 = -1;
	volatile int64_t t179 = 23900LL;

    t179 = ((x865+x866)-(x867<=x868));

    if (t179 != 615LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x873 = -55;
	int64_t x874 = -98923977844034LL;
	static int64_t t180 = -3185139LL;

    t180 = ((x873+x874)-(x875<=x876));

    if (t180 != -98923977844089LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x877 = INT16_MIN;
	int16_t x878 = INT16_MAX;
	volatile int32_t x879 = -210466;
	int32_t x880 = INT32_MAX;
	volatile int32_t t181 = 36647;

    t181 = ((x877+x878)-(x879<=x880));

    if (t181 != -2) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x881 = UINT32_MAX;
	int16_t x882 = 21;
	uint16_t x884 = 25071U;
	uint32_t t182 = 14U;

    t182 = ((x881+x882)-(x883<=x884));

    if (t182 != 19U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x885 = INT32_MIN;
	int16_t x886 = INT16_MAX;
	static int64_t x888 = -1LL;

    t183 = ((x885+x886)-(x887<=x888));

    if (t183 != -2147450882) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x889 = 34675977U;
	static int32_t x891 = 226589858;
	int32_t x892 = -1;
	int64_t t184 = -909307728LL;

    t184 = ((x889+x890)-(x891<=x892));

    if (t184 != -9223372036820099831LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x895 = -1016;
	int64_t x896 = INT64_MIN;
	volatile int64_t t185 = -8944909948175LL;

    t185 = ((x893+x894)-(x895<=x896));

    if (t185 != 19LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x897 = -61;
	volatile uint16_t x899 = 13291U;
	int32_t x900 = INT32_MIN;
	int32_t t186 = -528211410;

    t186 = ((x897+x898)-(x899<=x900));

    if (t186 != -62) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x902 = -1;
	static int64_t x903 = INT64_MIN;
	static volatile uint8_t x904 = 47U;
	volatile int32_t t187 = 1;

    t187 = ((x901+x902)-(x903<=x904));

    if (t187 != -14389) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x905 = 1U;
	int16_t x907 = INT16_MAX;
	int32_t x908 = 25;
	volatile uint32_t t188 = 2106U;

    t188 = ((x905+x906)-(x907<=x908));

    if (t188 != 32U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x910 = 10;
	volatile int8_t x911 = -2;
	int64_t x912 = INT64_MAX;
	static int32_t t189 = -25;

    t189 = ((x909+x910)-(x911<=x912));

    if (t189 != 8) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x913 = 1;
	int16_t x914 = INT16_MIN;
	static int64_t x915 = INT64_MIN;
	uint64_t x916 = 4573093502344LLU;
	int32_t t190 = -17427;

    t190 = ((x913+x914)-(x915<=x916));

    if (t190 != -32767) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x917 = 2599LLU;
	int32_t x918 = INT32_MAX;
	int32_t x919 = -13225587;

    t191 = ((x917+x918)-(x919<=x920));

    if (t191 != 2147486245LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x921 = -1;
	static int8_t x922 = INT8_MIN;
	int16_t x923 = -1;
	uint32_t x924 = 44U;
	int32_t t192 = -4487;

    t192 = ((x921+x922)-(x923<=x924));

    if (t192 != -129) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x925 = 48;
	uint8_t x927 = 111U;
	int32_t x928 = INT32_MIN;
	volatile int32_t t193 = 1;

    t193 = ((x925+x926)-(x927<=x928));

    if (t193 != 52) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x930 = 1068U;
	int32_t x931 = INT32_MIN;
	volatile int8_t x932 = INT8_MIN;
	volatile uint64_t t194 = 6497021268839228LLU;

    t194 = ((x929+x930)-(x931<=x932));

    if (t194 != 24533138LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x933 = 180599161;
	int16_t x934 = -7055;
	volatile int64_t x935 = 1663306LL;
	int8_t x936 = -26;
	int32_t t195 = 348344;

    t195 = ((x933+x934)-(x935<=x936));

    if (t195 != 180592106) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x938 = -1;
	volatile int16_t x939 = -17;
	int8_t x940 = INT8_MAX;
	int64_t t196 = 5237932329691093LL;

    t196 = ((x937+x938)-(x939<=x940));

    if (t196 != -329684LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x941 = 227288250;
	static volatile int64_t x942 = INT64_MIN;
	uint16_t x943 = UINT16_MAX;
	static volatile uint16_t x944 = 0U;

    t197 = ((x941+x942)-(x943<=x944));

    if (t197 != -9223372036627487558LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x949 = 10U;
	uint8_t x951 = 22U;
	static int64_t x952 = INT64_MIN;

    t198 = ((x949+x950)-(x951<=x952));

    if (t198 != 9) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x953 = INT16_MAX;
	volatile int32_t x956 = INT32_MIN;
	volatile int32_t t199 = -45221394;

    t199 = ((x953+x954)-(x955<=x956));

    if (t199 != 32639) { NG(); } else { ; }
	
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

