
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

static uint8_t x2 = 2U;
uint8_t x3 = 1U;
int16_t x5 = 1;
int32_t x8 = -1;
volatile uint8_t x13 = UINT8_MAX;
static int64_t x19 = INT64_MAX;
int32_t t3 = 0;
int64_t x22 = -1LL;
uint32_t x25 = 16559324U;
static uint64_t x26 = UINT64_MAX;
volatile uint32_t t6 = 1U;
volatile uint64_t x33 = UINT64_MAX;
volatile int32_t t7 = 780;
uint8_t x43 = 14U;
static int8_t x50 = 1;
uint64_t x57 = 500368366879LLU;
static uint8_t x66 = UINT8_MAX;
uint64_t x92 = 106105LLU;
static int8_t x94 = 40;
int32_t t17 = -20;
int32_t x100 = -3835264;
uint16_t x109 = 14U;
int8_t x118 = INT8_MAX;
int32_t t23 = 648;
int32_t t24 = 14207;
volatile int32_t t26 = 477;
static uint8_t x138 = 34U;
static int32_t t27 = 68;
int8_t x141 = -1;
int16_t x144 = 381;
int32_t x147 = -1;
uint8_t x152 = 1U;
int32_t t30 = 7195380;
int8_t x161 = 52;
int8_t x166 = INT8_MIN;
static int16_t x168 = INT16_MAX;
volatile int32_t t34 = 3957;
int8_t x186 = 1;
static int32_t x206 = INT32_MIN;
uint64_t x207 = 29735448275LLU;
int32_t x222 = -1;
int32_t t41 = 7645;
int16_t x232 = INT16_MAX;
static uint16_t x245 = 1344U;
static int32_t x248 = 53205110;
static volatile uint64_t x254 = 17644132078374273LLU;
int16_t x261 = 326;
int16_t x283 = -1;
int64_t x293 = INT64_MAX;
int16_t x302 = INT16_MIN;
static uint16_t x304 = 0U;
volatile int32_t t54 = 432658;
uint8_t x305 = 81U;
static int32_t x315 = -1;
volatile int32_t x318 = INT32_MIN;
volatile uint64_t t57 = 139167393255654160LLU;
int32_t x323 = INT32_MIN;
volatile uint64_t x324 = 53LLU;
int32_t x327 = 0;
int16_t x329 = -1;
static uint32_t x332 = UINT32_MAX;
static int8_t x338 = INT8_MIN;
uint16_t x343 = UINT16_MAX;
static volatile int8_t x358 = 28;
int8_t x366 = 6;
volatile int16_t x372 = INT16_MAX;
volatile int32_t t68 = 7;
uint8_t x377 = 0U;
int8_t x385 = INT8_MAX;
int64_t x398 = 213198600629159678LL;
uint8_t x407 = 86U;
volatile int32_t t73 = -13491317;
volatile int8_t x409 = -1;
volatile int16_t x412 = INT16_MIN;
static uint8_t x418 = 2U;
uint32_t x425 = 1222565665U;
volatile int64_t x444 = INT64_MAX;
uint16_t x457 = 550U;
uint8_t x458 = UINT8_MAX;
int16_t x469 = INT16_MAX;
int32_t x471 = INT32_MAX;
int16_t x472 = INT16_MIN;
volatile int32_t t83 = 27587755;
int64_t x484 = -1599914153628LL;
int64_t x498 = -2580LL;
volatile int32_t t88 = 0;
static volatile int32_t t89 = 1;
static uint64_t t91 = 46LLU;
int32_t x523 = INT32_MAX;
static int32_t x538 = 231;
uint32_t x551 = 2139595U;
int8_t x555 = -1;
volatile int32_t x556 = INT32_MAX;
volatile int16_t x557 = -1;
uint64_t x568 = 880417173LLU;
volatile uint64_t t102 = 12050804005993LLU;
int8_t x575 = -1;
volatile int32_t t104 = 58658529;
uint8_t x578 = 5U;
uint32_t x580 = UINT32_MAX;
int32_t t106 = 9106;
static int16_t x588 = 2154;
volatile int32_t t108 = 0;
int16_t x613 = INT16_MIN;
static uint8_t x621 = UINT8_MAX;
uint64_t x633 = UINT64_MAX;
int64_t x636 = 117741LL;
uint16_t x641 = UINT16_MAX;
static int64_t x645 = -6LL;
int8_t x647 = -1;
static int16_t x658 = -7;
static int64_t x663 = -16LL;
int32_t x685 = 105637;
volatile int32_t t124 = 403370;
int64_t x689 = -15LL;
volatile int32_t x690 = INT32_MIN;
static volatile int8_t x694 = INT8_MIN;
int8_t x704 = -11;
int32_t x719 = INT32_MIN;
volatile int32_t t131 = 26073;
int32_t t133 = -1331479;
int64_t x735 = -1LL;
static uint64_t x736 = UINT64_MAX;
uint64_t t134 = 980LLU;
uint32_t x737 = 41321U;
uint8_t x744 = 4U;
static uint32_t x746 = 23U;
int8_t x748 = 1;
uint16_t x749 = UINT16_MAX;
volatile int32_t t139 = 116790463;
int16_t x775 = -1;
int16_t x777 = 702;
int8_t x786 = 3;
volatile int64_t t143 = 1772LL;
volatile uint32_t x790 = 91779U;
uint32_t x806 = 1780U;
static int8_t x808 = INT8_MIN;
volatile uint64_t x815 = 11777LLU;
volatile int32_t t148 = -3;
uint8_t x817 = 80U;
int32_t t149 = 1525066;
uint16_t x826 = UINT16_MAX;
int16_t x830 = INT16_MIN;
static int32_t t152 = 24;
int16_t x841 = INT16_MIN;
int16_t x842 = 3886;
int32_t t153 = -77;
int16_t x848 = INT16_MIN;
volatile int32_t x851 = -1;
int64_t x863 = 4341421906240665LL;
int32_t x866 = -1;
volatile int32_t x873 = INT32_MIN;
int64_t x876 = -1LL;
volatile int32_t t161 = 1;
int32_t x897 = INT32_MIN;
volatile int32_t t164 = -85;
volatile int32_t t165 = 463480;
static int32_t x925 = 988158;
static int32_t x929 = INT32_MIN;
int16_t x936 = INT16_MIN;
uint64_t t171 = 422LLU;
volatile int32_t t172 = -25878;
static volatile int64_t x962 = 1480323579923326LL;
volatile int32_t x963 = -1;
uint16_t x973 = 253U;
int32_t x981 = -4;
uint16_t x982 = 5U;
volatile int64_t x986 = INT64_MAX;
int64_t x995 = INT64_MIN;
uint16_t x1002 = UINT16_MAX;
static uint32_t x1003 = 11U;
int32_t x1025 = INT32_MAX;
int8_t x1027 = 0;
uint32_t t187 = 424203186U;
int8_t x1032 = INT8_MIN;
uint64_t x1041 = 116390LLU;
uint8_t x1045 = 1U;
int16_t x1047 = 3639;
volatile int16_t x1049 = INT16_MAX;
int16_t x1051 = INT16_MIN;
static int64_t t191 = 334661797833990228LL;
volatile int32_t x1059 = INT32_MIN;
static uint32_t x1062 = 75U;
uint32_t x1071 = UINT32_MAX;
static int32_t t195 = -4;
volatile int32_t t197 = -31222268;
static int8_t x1083 = INT8_MIN;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	uint64_t x4 = 7100821516989LLU;
	volatile uint64_t t0 = 1105LLU;

    t0 = (((x1+x2)>x3)-x4);

    if (t0 != 18446736972888034627LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 48U;
	int8_t x7 = -28;
	int32_t t1 = -51712438;

    t1 = (((x5+x6)>x7)-x8);

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MAX;
	int8_t x16 = -1;
	static volatile int32_t t2 = -11053956;

    t2 = (((x13+x14)>x15)-x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -995714843674LL;
	int16_t x18 = -3188;
	int32_t x20 = 31741977;

    t3 = (((x17+x18)>x19)-x20);

    if (t3 != -31741977) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -2;
	static int64_t x23 = 61539804LL;
	uint32_t x24 = 448515U;
	static volatile uint32_t t4 = 1878U;

    t4 = (((x21+x22)>x23)-x24);

    if (t4 != 4294518781U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x27 = -1;
	volatile int8_t x28 = 1;
	int32_t t5 = -5275223;

    t5 = (((x25+x26)>x27)-x28);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = 0;
	int16_t x30 = -3153;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = UINT32_MAX;

    t6 = (((x29+x30)>x31)-x32);

    if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x34 = INT8_MIN;
	volatile uint64_t x35 = UINT64_MAX;
	int32_t x36 = 299039751;

    t7 = (((x33+x34)>x35)-x36);

    if (t7 != -299039751) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = -9;
	uint16_t x38 = 501U;
	int16_t x39 = -1;
	uint64_t x40 = 4138769380LLU;
	uint64_t t8 = 44848LLU;

    t8 = (((x37+x38)>x39)-x40);

    if (t8 != 18446744069570782237LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x41 = 33LLU;
	int16_t x42 = -19;
	static volatile int8_t x44 = INT8_MIN;
	volatile int32_t t9 = -28100259;

    t9 = (((x41+x42)>x43)-x44);

    if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = INT8_MAX;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = 9U;
	int32_t t10 = -25487112;

    t10 = (((x49+x50)>x51)-x52);

    if (t10 != -8) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = 183207033152713LLU;
	uint16_t x54 = UINT16_MAX;
	int32_t x55 = 590;
	int64_t x56 = 15601133748LL;
	int64_t t11 = 0LL;

    t11 = (((x53+x54)>x55)-x56);

    if (t11 != -15601133747LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x58 = -3903;
	int16_t x59 = INT16_MIN;
	uint32_t x60 = UINT32_MAX;
	uint32_t t12 = 1U;

    t12 = (((x57+x58)>x59)-x60);

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x65 = INT8_MAX;
	int16_t x67 = INT16_MAX;
	int16_t x68 = -1;
	int32_t t13 = 763872;

    t13 = (((x65+x66)>x67)-x68);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x73 = 13U;
	int8_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	static int16_t x76 = 0;
	static int32_t t14 = -2;

    t14 = (((x73+x74)>x75)-x76);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x85 = 0U;
	static uint16_t x86 = 5U;
	static int64_t x87 = 487347814LL;
	static volatile int8_t x88 = INT8_MAX;
	int32_t t15 = -6334331;

    t15 = (((x85+x86)>x87)-x88);

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x89 = INT64_MIN;
	uint64_t x90 = 3800553936579621LLU;
	uint16_t x91 = 29U;
	uint64_t t16 = 209103222582226LLU;

    t16 = (((x89+x90)>x91)-x92);

    if (t16 != 18446744073709445512LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x93 = 8U;
	uint32_t x95 = 90022U;
	int8_t x96 = INT8_MAX;

    t17 = (((x93+x94)>x95)-x96);

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x97 = INT8_MAX;
	volatile int16_t x98 = INT16_MIN;
	static uint8_t x99 = 0U;
	volatile int32_t t18 = 26;

    t18 = (((x97+x98)>x99)-x100);

    if (t18 != 3835264) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x101 = UINT16_MAX;
	int16_t x102 = INT16_MIN;
	volatile int8_t x103 = INT8_MIN;
	uint16_t x104 = 1U;
	static volatile int32_t t19 = -25;

    t19 = (((x101+x102)>x103)-x104);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x105 = UINT32_MAX;
	uint16_t x106 = 163U;
	static int16_t x107 = 177;
	volatile int64_t x108 = INT64_MAX;
	int64_t t20 = 3032LL;

    t20 = (((x105+x106)>x107)-x108);

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x110 = INT8_MIN;
	volatile int16_t x111 = INT16_MIN;
	uint64_t x112 = 194151391365166091LLU;
	volatile uint64_t t21 = 371003756LLU;

    t21 = (((x109+x110)>x111)-x112);

    if (t21 != 18252592682344385526LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x113 = INT8_MIN;
	int8_t x114 = 2;
	static int8_t x115 = INT8_MIN;
	int16_t x116 = -3890;
	volatile int32_t t22 = 244163;

    t22 = (((x113+x114)>x115)-x116);

    if (t22 != 3891) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x117 = INT32_MIN;
	int32_t x119 = INT32_MAX;
	static int32_t x120 = -1;

    t23 = (((x117+x118)>x119)-x120);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x121 = 245957353617878502LLU;
	int16_t x122 = -15664;
	int8_t x123 = 19;
	int8_t x124 = INT8_MIN;

    t24 = (((x121+x122)>x123)-x124);

    if (t24 != 129) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x125 = 2U;
	int8_t x126 = INT8_MIN;
	volatile uint8_t x127 = 8U;
	int8_t x128 = -1;
	volatile int32_t t25 = -85377665;

    t25 = (((x125+x126)>x127)-x128);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x133 = -187292325;
	uint64_t x134 = 39169407066902LLU;
	int16_t x135 = -1;
	static volatile int16_t x136 = 0;

    t26 = (((x133+x134)>x135)-x136);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x137 = -1;
	int64_t x139 = -15373712801794230LL;
	int16_t x140 = 3;

    t27 = (((x137+x138)>x139)-x140);

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x142 = -1;
	int16_t x143 = 59;
	volatile int32_t t28 = 13941;

    t28 = (((x141+x142)>x143)-x144);

    if (t28 != -381) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x145 = -1;
	uint64_t x146 = 5516315500611982LLU;
	int8_t x148 = -1;
	int32_t t29 = -20;

    t29 = (((x145+x146)>x147)-x148);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x149 = INT8_MIN;
	static uint16_t x150 = UINT16_MAX;
	int16_t x151 = -2645;

    t30 = (((x149+x150)>x151)-x152);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x157 = 0;
	volatile int32_t x158 = -878190285;
	int8_t x159 = -1;
	uint64_t x160 = 380472LLU;
	static uint64_t t31 = 61502759868987237LLU;

    t31 = (((x157+x158)>x159)-x160);

    if (t31 != 18446744073709171144LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x162 = 982765174121LL;
	static int8_t x163 = 21;
	int16_t x164 = INT16_MIN;
	int32_t t32 = -6598770;

    t32 = (((x161+x162)>x163)-x164);

    if (t32 != 32769) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x165 = 6U;
	volatile int8_t x167 = 0;
	static int32_t t33 = 8088427;

    t33 = (((x165+x166)>x167)-x168);

    if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x177 = INT16_MAX;
	uint8_t x178 = 1U;
	uint8_t x179 = UINT8_MAX;
	volatile int16_t x180 = INT16_MIN;

    t34 = (((x177+x178)>x179)-x180);

    if (t34 != 32769) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x181 = 39;
	static uint8_t x182 = 4U;
	uint8_t x183 = 1U;
	uint32_t x184 = UINT32_MAX;
	volatile uint32_t t35 = 738U;

    t35 = (((x181+x182)>x183)-x184);

    if (t35 != 2U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x185 = 431U;
	int8_t x187 = 22;
	volatile int32_t x188 = INT32_MAX;
	int32_t t36 = 32548;

    t36 = (((x185+x186)>x187)-x188);

    if (t36 != -2147483646) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint64_t x193 = 96899556191402099LLU;
	static int16_t x194 = -1;
	int64_t x195 = INT64_MIN;
	int16_t x196 = INT16_MIN;
	int32_t t37 = 131;

    t37 = (((x193+x194)>x195)-x196);

    if (t37 != 32768) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x197 = INT64_MIN;
	static int16_t x198 = INT16_MAX;
	uint64_t x199 = 27396037LLU;
	uint16_t x200 = 3638U;
	static int32_t t38 = 57007;

    t38 = (((x197+x198)>x199)-x200);

    if (t38 != -3637) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x201 = 6255LLU;
	int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MAX;
	static int16_t x204 = 2;
	volatile int32_t t39 = -1;

    t39 = (((x201+x202)>x203)-x204);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x205 = 6;
	int32_t x208 = 1500;
	int32_t t40 = 10;

    t40 = (((x205+x206)>x207)-x208);

    if (t40 != -1499) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x221 = 0LL;
	int32_t x223 = INT32_MIN;
	volatile uint8_t x224 = 15U;

    t41 = (((x221+x222)>x223)-x224);

    if (t41 != -14) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x229 = -1;
	int16_t x230 = INT16_MAX;
	int32_t x231 = INT32_MIN;
	static volatile int32_t t42 = 844152275;

    t42 = (((x229+x230)>x231)-x232);

    if (t42 != -32766) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x233 = INT32_MIN;
	int64_t x234 = -1LL;
	volatile int32_t x235 = -1;
	int16_t x236 = INT16_MIN;
	static int32_t t43 = -211808;

    t43 = (((x233+x234)>x235)-x236);

    if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x237 = UINT8_MAX;
	int64_t x238 = 15658280003477567LL;
	int16_t x239 = 47;
	static uint16_t x240 = UINT16_MAX;
	int32_t t44 = 460766003;

    t44 = (((x237+x238)>x239)-x240);

    if (t44 != -65534) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x241 = 11U;
	int32_t x242 = INT32_MIN;
	static uint32_t x243 = 154U;
	volatile int64_t x244 = -1LL;
	volatile int64_t t45 = 1744887167139420044LL;

    t45 = (((x241+x242)>x243)-x244);

    if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x246 = -1LL;
	int16_t x247 = INT16_MIN;
	static int32_t t46 = -960828249;

    t46 = (((x245+x246)>x247)-x248);

    if (t46 != -53205109) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x253 = 2U;
	static int8_t x255 = INT8_MIN;
	int8_t x256 = INT8_MAX;
	volatile int32_t t47 = -7772562;

    t47 = (((x253+x254)>x255)-x256);

    if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x262 = -19;
	int8_t x263 = -1;
	int8_t x264 = INT8_MAX;
	volatile int32_t t48 = -197;

    t48 = (((x261+x262)>x263)-x264);

    if (t48 != -126) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint32_t x269 = 2U;
	int32_t x270 = INT32_MAX;
	uint8_t x271 = 11U;
	volatile uint16_t x272 = 27U;
	int32_t t49 = -1031;

    t49 = (((x269+x270)>x271)-x272);

    if (t49 != -26) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x281 = INT8_MIN;
	static int8_t x282 = INT8_MIN;
	static volatile int32_t x284 = -1;
	int32_t t50 = 760920205;

    t50 = (((x281+x282)>x283)-x284);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x285 = -1;
	int8_t x286 = INT8_MIN;
	int64_t x287 = 16726515LL;
	uint8_t x288 = 1U;
	volatile int32_t t51 = -13653;

    t51 = (((x285+x286)>x287)-x288);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x294 = -1679;
	int16_t x295 = -1;
	volatile int16_t x296 = INT16_MIN;
	int32_t t52 = 3;

    t52 = (((x293+x294)>x295)-x296);

    if (t52 != 32769) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x297 = INT32_MIN;
	uint8_t x298 = 17U;
	uint16_t x299 = UINT16_MAX;
	static int8_t x300 = INT8_MAX;
	int32_t t53 = 68;

    t53 = (((x297+x298)>x299)-x300);

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x301 = 97019119970477033LL;
	int8_t x303 = INT8_MIN;

    t54 = (((x301+x302)>x303)-x304);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x306 = -1;
	uint16_t x307 = 1729U;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t55 = -152036;

    t55 = (((x305+x306)>x307)-x308);

    if (t55 != 32768) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x313 = INT16_MAX;
	uint16_t x314 = 177U;
	uint16_t x316 = 1066U;
	int32_t t56 = 7;

    t56 = (((x313+x314)>x315)-x316);

    if (t56 != -1065) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x317 = INT32_MAX;
	int64_t x319 = INT64_MIN;
	uint64_t x320 = 124808626476755423LLU;

    t57 = (((x317+x318)>x319)-x320);

    if (t57 != 18321935447232796194LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x321 = INT8_MIN;
	uint16_t x322 = UINT16_MAX;
	uint64_t t58 = 83452544990990856LLU;

    t58 = (((x321+x322)>x323)-x324);

    if (t58 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x325 = 61U;
	uint8_t x326 = 5U;
	int8_t x328 = INT8_MAX;
	static int32_t t59 = 4900125;

    t59 = (((x325+x326)>x327)-x328);

    if (t59 != -126) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x330 = 1521LL;
	static int32_t x331 = 771;
	volatile uint32_t t60 = 1152496984U;

    t60 = (((x329+x330)>x331)-x332);

    if (t60 != 2U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MIN;
	static volatile int64_t x335 = 40LL;
	uint32_t x336 = 4U;
	uint32_t t61 = 0U;

    t61 = (((x333+x334)>x335)-x336);

    if (t61 != 4294967293U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x337 = UINT8_MAX;
	int16_t x339 = -27;
	int32_t x340 = -1;
	volatile int32_t t62 = 3611388;

    t62 = (((x337+x338)>x339)-x340);

    if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x341 = INT8_MIN;
	int64_t x342 = 16326151LL;
	int32_t x344 = -663;
	static volatile int32_t t63 = 3;

    t63 = (((x341+x342)>x343)-x344);

    if (t63 != 664) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x349 = -1;
	int32_t x350 = 2103;
	static int16_t x351 = -1;
	uint32_t x352 = 18U;
	uint32_t t64 = 6395446U;

    t64 = (((x349+x350)>x351)-x352);

    if (t64 != 4294967279U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x353 = INT32_MAX;
	uint64_t x354 = 3529113821279695328LLU;
	static int16_t x355 = INT16_MIN;
	uint16_t x356 = 222U;
	volatile int32_t t65 = -57;

    t65 = (((x353+x354)>x355)-x356);

    if (t65 != -222) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x357 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	int16_t x360 = -1227;
	volatile int32_t t66 = -461;

    t66 = (((x357+x358)>x359)-x360);

    if (t66 != 1227) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x365 = INT16_MIN;
	int16_t x367 = INT16_MAX;
	volatile int8_t x368 = -36;
	int32_t t67 = -15729;

    t67 = (((x365+x366)>x367)-x368);

    if (t67 != 36) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x369 = 511U;
	static volatile uint8_t x370 = 123U;
	volatile int16_t x371 = INT16_MIN;

    t68 = (((x369+x370)>x371)-x372);

    if (t68 != -32766) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x373 = -5;
	int32_t x374 = -118839111;
	int32_t x375 = -172708;
	uint16_t x376 = 13692U;
	volatile int32_t t69 = 0;

    t69 = (((x373+x374)>x375)-x376);

    if (t69 != -13692) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x378 = 603563322LLU;
	int32_t x379 = INT32_MAX;
	uint16_t x380 = 1415U;
	volatile int32_t t70 = 2869;

    t70 = (((x377+x378)>x379)-x380);

    if (t70 != -1415) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x386 = 0;
	int16_t x387 = -7;
	int16_t x388 = -1;
	int32_t t71 = 7477643;

    t71 = (((x385+x386)>x387)-x388);

    if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x397 = 492U;
	static int64_t x399 = INT64_MIN;
	static int8_t x400 = -1;
	int32_t t72 = 31;

    t72 = (((x397+x398)>x399)-x400);

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x405 = INT32_MAX;
	int16_t x406 = INT16_MIN;
	uint8_t x408 = UINT8_MAX;

    t73 = (((x405+x406)>x407)-x408);

    if (t73 != -254) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x410 = 1573202LLU;
	int64_t x411 = INT64_MAX;
	static int32_t t74 = -35690;

    t74 = (((x409+x410)>x411)-x412);

    if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x417 = INT32_MIN;
	volatile int16_t x419 = -1838;
	int64_t x420 = -7839866428LL;
	volatile int64_t t75 = 24LL;

    t75 = (((x417+x418)>x419)-x420);

    if (t75 != 7839866428LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x426 = 1304237680U;
	static volatile int32_t x427 = INT32_MIN;
	uint32_t x428 = 21857764U;
	static volatile uint32_t t76 = 40359037U;

    t76 = (((x425+x426)>x427)-x428);

    if (t76 != 4273109533U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x433 = INT8_MIN;
	int16_t x434 = -227;
	static uint32_t x435 = 27252U;
	int8_t x436 = INT8_MAX;
	int32_t t77 = -2;

    t77 = (((x433+x434)>x435)-x436);

    if (t77 != -126) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x441 = 1;
	int8_t x442 = INT8_MAX;
	static int32_t x443 = 129;
	int64_t t78 = -365175855384340LL;

    t78 = (((x441+x442)>x443)-x444);

    if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x445 = 12LL;
	int16_t x446 = INT16_MAX;
	int32_t x447 = INT32_MAX;
	int64_t x448 = INT64_MAX;
	volatile int64_t t79 = 576341292LL;

    t79 = (((x445+x446)>x447)-x448);

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x453 = UINT8_MAX;
	int32_t x454 = -1;
	int8_t x455 = 0;
	int32_t x456 = -7200;
	int32_t t80 = 21176;

    t80 = (((x453+x454)>x455)-x456);

    if (t80 != 7201) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x459 = 112389040LLU;
	volatile int8_t x460 = 15;
	int32_t t81 = 102425613;

    t81 = (((x457+x458)>x459)-x460);

    if (t81 != -15) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x461 = -1;
	int64_t x462 = 63481739756LL;
	volatile int16_t x463 = 1;
	int8_t x464 = INT8_MAX;
	int32_t t82 = -1434753;

    t82 = (((x461+x462)>x463)-x464);

    if (t82 != -126) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x470 = INT16_MAX;

    t83 = (((x469+x470)>x471)-x472);

    if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x477 = 2LLU;
	uint32_t x478 = 572071912U;
	static int64_t x479 = INT64_MAX;
	int8_t x480 = INT8_MIN;
	volatile int32_t t84 = -773286647;

    t84 = (((x477+x478)>x479)-x480);

    if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x481 = UINT16_MAX;
	int8_t x482 = INT8_MAX;
	int8_t x483 = -1;
	int64_t t85 = 4814017433LL;

    t85 = (((x481+x482)>x483)-x484);

    if (t85 != 1599914153629LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x485 = 868648856948LL;
	volatile int64_t x486 = 140480LL;
	static int64_t x487 = -22651394111LL;
	static int64_t x488 = -1LL;
	volatile int64_t t86 = 1711LL;

    t86 = (((x485+x486)>x487)-x488);

    if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	int64_t x490 = -1LL;
	int64_t x491 = INT64_MIN;
	volatile uint64_t x492 = UINT64_MAX;
	uint64_t t87 = 7804511554402568LLU;

    t87 = (((x489+x490)>x491)-x492);

    if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x497 = -1;
	int64_t x499 = INT64_MAX;
	int16_t x500 = -4346;

    t88 = (((x497+x498)>x499)-x500);

    if (t88 != 4346) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x505 = -129;
	uint64_t x506 = 52932255372LLU;
	static int8_t x507 = 3;
	volatile int32_t x508 = -3;

    t89 = (((x505+x506)>x507)-x508);

    if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x513 = UINT64_MAX;
	int16_t x514 = INT16_MIN;
	int8_t x515 = 20;
	static int32_t x516 = -23885;
	volatile int32_t t90 = -6367;

    t90 = (((x513+x514)>x515)-x516);

    if (t90 != 23886) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x517 = INT32_MIN;
	uint64_t x518 = 14095054LLU;
	volatile uint8_t x519 = 7U;
	uint64_t x520 = UINT64_MAX;

    t91 = (((x517+x518)>x519)-x520);

    if (t91 != 2LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x521 = UINT64_MAX;
	uint16_t x522 = UINT16_MAX;
	static uint16_t x524 = UINT16_MAX;
	static volatile int32_t t92 = 413;

    t92 = (((x521+x522)>x523)-x524);

    if (t92 != -65535) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x525 = INT16_MIN;
	int8_t x526 = INT8_MAX;
	static int64_t x527 = INT64_MIN;
	int64_t x528 = -45916559LL;
	int64_t t93 = 35196083687119878LL;

    t93 = (((x525+x526)>x527)-x528);

    if (t93 != 45916560LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x533 = 0;
	static volatile uint32_t x534 = 0U;
	int64_t x535 = INT64_MIN;
	static volatile uint16_t x536 = UINT16_MAX;
	int32_t t94 = 331130953;

    t94 = (((x533+x534)>x535)-x536);

    if (t94 != -65534) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x537 = 7013U;
	volatile int8_t x539 = INT8_MIN;
	static uint16_t x540 = UINT16_MAX;
	volatile int32_t t95 = 463;

    t95 = (((x537+x538)>x539)-x540);

    if (t95 != -65534) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x541 = 19;
	int64_t x542 = -1LL;
	uint32_t x543 = UINT32_MAX;
	static uint64_t x544 = 39LLU;
	uint64_t t96 = 438915890LLU;

    t96 = (((x541+x542)>x543)-x544);

    if (t96 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x545 = INT8_MAX;
	uint32_t x546 = UINT32_MAX;
	int8_t x547 = INT8_MIN;
	uint64_t x548 = UINT64_MAX;
	volatile uint64_t t97 = 4145508551867020LLU;

    t97 = (((x545+x546)>x547)-x548);

    if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x549 = -68;
	int8_t x550 = INT8_MIN;
	int64_t x552 = -1LL;
	static int64_t t98 = -4449717LL;

    t98 = (((x549+x550)>x551)-x552);

    if (t98 != 2LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x553 = INT16_MAX;
	volatile int16_t x554 = INT16_MIN;
	int32_t t99 = 12;

    t99 = (((x553+x554)>x555)-x556);

    if (t99 != -2147483647) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x558 = 29877063U;
	static uint64_t x559 = UINT64_MAX;
	int16_t x560 = INT16_MIN;
	int32_t t100 = 2;

    t100 = (((x557+x558)>x559)-x560);

    if (t100 != 32768) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x561 = INT16_MIN;
	static volatile int64_t x562 = -1LL;
	int16_t x563 = INT16_MIN;
	int8_t x564 = INT8_MIN;
	volatile int32_t t101 = -832052;

    t101 = (((x561+x562)>x563)-x564);

    if (t101 != 128) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x565 = -1LL;
	int32_t x566 = INT32_MAX;
	static int8_t x567 = -36;

    t102 = (((x565+x566)>x567)-x568);

    if (t102 != 18446744072829134444LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x569 = INT16_MAX;
	uint8_t x570 = 5U;
	volatile int8_t x571 = -1;
	int64_t x572 = INT64_MAX;
	static int64_t t103 = 3687216306009LL;

    t103 = (((x569+x570)>x571)-x572);

    if (t103 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x573 = -32;
	static uint16_t x574 = UINT16_MAX;
	volatile int32_t x576 = INT32_MAX;

    t104 = (((x573+x574)>x575)-x576);

    if (t104 != -2147483646) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x577 = -793740083;
	static int64_t x579 = INT64_MIN;
	uint32_t t105 = 62161U;

    t105 = (((x577+x578)>x579)-x580);

    if (t105 != 2U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x581 = -1;
	int16_t x582 = 1;
	volatile int32_t x583 = -11363;
	static uint16_t x584 = 280U;

    t106 = (((x581+x582)>x583)-x584);

    if (t106 != -279) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x585 = INT64_MIN;
	uint8_t x586 = UINT8_MAX;
	volatile int8_t x587 = INT8_MIN;
	volatile int32_t t107 = 165;

    t107 = (((x585+x586)>x587)-x588);

    if (t107 != -2154) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x589 = 31U;
	volatile int8_t x590 = INT8_MIN;
	volatile int32_t x591 = -55572;
	volatile int16_t x592 = 3672;

    t108 = (((x589+x590)>x591)-x592);

    if (t108 != -3671) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x605 = 718940414054LLU;
	volatile uint8_t x606 = 10U;
	volatile int32_t x607 = INT32_MAX;
	uint8_t x608 = 113U;
	volatile int32_t t109 = -39;

    t109 = (((x605+x606)>x607)-x608);

    if (t109 != -112) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x609 = 3221U;
	static uint32_t x610 = 109683U;
	int64_t x611 = INT64_MAX;
	volatile int16_t x612 = INT16_MAX;
	int32_t t110 = 62;

    t110 = (((x609+x610)>x611)-x612);

    if (t110 != -32767) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x614 = 24;
	int8_t x615 = INT8_MIN;
	int8_t x616 = -1;
	int32_t t111 = -130272;

    t111 = (((x613+x614)>x615)-x616);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x617 = INT32_MAX;
	static int32_t x618 = -2;
	static uint16_t x619 = 32365U;
	int8_t x620 = INT8_MAX;
	int32_t t112 = 4747;

    t112 = (((x617+x618)>x619)-x620);

    if (t112 != -126) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x622 = INT8_MIN;
	int16_t x623 = INT16_MIN;
	int32_t x624 = INT32_MAX;
	int32_t t113 = 126;

    t113 = (((x621+x622)>x623)-x624);

    if (t113 != -2147483646) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x634 = INT16_MIN;
	uint8_t x635 = UINT8_MAX;
	int64_t t114 = -823800481LL;

    t114 = (((x633+x634)>x635)-x636);

    if (t114 != -117740LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x642 = 49U;
	int64_t x643 = -3863291329LL;
	int16_t x644 = INT16_MIN;
	volatile int32_t t115 = 32784473;

    t115 = (((x641+x642)>x643)-x644);

    if (t115 != 32769) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x646 = -1;
	static int64_t x648 = 11617LL;
	static volatile int64_t t116 = -1073747019277LL;

    t116 = (((x645+x646)>x647)-x648);

    if (t116 != -11617LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x649 = INT8_MIN;
	volatile uint8_t x650 = UINT8_MAX;
	uint8_t x651 = 79U;
	int64_t x652 = INT64_MAX;
	int64_t t117 = -132LL;

    t117 = (((x649+x650)>x651)-x652);

    if (t117 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x657 = UINT8_MAX;
	volatile uint8_t x659 = 1U;
	static uint8_t x660 = UINT8_MAX;
	int32_t t118 = 8;

    t118 = (((x657+x658)>x659)-x660);

    if (t118 != -254) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x661 = INT16_MIN;
	static volatile uint32_t x662 = 0U;
	int8_t x664 = 3;
	volatile int32_t t119 = -121;

    t119 = (((x661+x662)>x663)-x664);

    if (t119 != -2) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x665 = INT16_MIN;
	static int16_t x666 = INT16_MIN;
	uint16_t x667 = UINT16_MAX;
	static int64_t x668 = INT64_MAX;
	int64_t t120 = -169627704855869552LL;

    t120 = (((x665+x666)>x667)-x668);

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x669 = -3333;
	volatile int32_t x670 = 385918886;
	int64_t x671 = 389605305045851LL;
	int32_t x672 = -1;
	volatile int32_t t121 = 6678397;

    t121 = (((x669+x670)>x671)-x672);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x673 = UINT16_MAX;
	uint16_t x674 = 2877U;
	uint8_t x675 = UINT8_MAX;
	int8_t x676 = INT8_MAX;
	static int32_t t122 = -254191619;

    t122 = (((x673+x674)>x675)-x676);

    if (t122 != -126) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x677 = INT32_MIN;
	int64_t x678 = -115818474819LL;
	int16_t x679 = -1;
	int16_t x680 = INT16_MIN;
	int32_t t123 = -440144;

    t123 = (((x677+x678)>x679)-x680);

    if (t123 != 32768) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x686 = -1;
	static uint32_t x687 = 7636225U;
	int8_t x688 = -1;

    t124 = (((x685+x686)>x687)-x688);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x691 = -4;
	uint64_t x692 = UINT64_MAX;
	uint64_t t125 = 27LLU;

    t125 = (((x689+x690)>x691)-x692);

    if (t125 != 1LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x693 = -1;
	int16_t x695 = 0;
	int8_t x696 = 19;
	volatile int32_t t126 = -23850;

    t126 = (((x693+x694)>x695)-x696);

    if (t126 != -19) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x701 = INT64_MIN;
	uint8_t x702 = UINT8_MAX;
	int8_t x703 = INT8_MIN;
	volatile int32_t t127 = 1;

    t127 = (((x701+x702)>x703)-x704);

    if (t127 != 11) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x705 = UINT32_MAX;
	volatile uint64_t x706 = UINT64_MAX;
	volatile int32_t x707 = 8167359;
	uint64_t x708 = 12LLU;
	uint64_t t128 = 52712991281337LLU;

    t128 = (((x705+x706)>x707)-x708);

    if (t128 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x709 = INT64_MIN;
	static uint64_t x710 = 483835805781081222LLU;
	int8_t x711 = INT8_MAX;
	static int16_t x712 = -382;
	int32_t t129 = -13137442;

    t129 = (((x709+x710)>x711)-x712);

    if (t129 != 383) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x713 = 84619077U;
	uint16_t x714 = 1990U;
	volatile int64_t x715 = INT64_MAX;
	uint64_t x716 = 2108821449516389231LLU;
	volatile uint64_t t130 = 234064269LLU;

    t130 = (((x713+x714)>x715)-x716);

    if (t130 != 16337922624193162385LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x717 = INT32_MIN;
	uint16_t x718 = 23U;
	volatile uint8_t x720 = 2U;

    t131 = (((x717+x718)>x719)-x720);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x721 = -174516042;
	int8_t x722 = -1;
	uint8_t x723 = UINT8_MAX;
	int64_t x724 = -1LL;
	int64_t t132 = 1635152836345046LL;

    t132 = (((x721+x722)>x723)-x724);

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x725 = 5248210020171LL;
	int32_t x726 = INT32_MAX;
	uint8_t x727 = UINT8_MAX;
	int8_t x728 = 0;

    t133 = (((x725+x726)>x727)-x728);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x733 = INT64_MAX;
	int16_t x734 = -13;

    t134 = (((x733+x734)>x735)-x736);

    if (t134 != 2LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x738 = UINT16_MAX;
	volatile int16_t x739 = INT16_MAX;
	uint16_t x740 = 1U;
	int32_t t135 = 118;

    t135 = (((x737+x738)>x739)-x740);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x741 = 26505190U;
	static int32_t x742 = INT32_MIN;
	uint8_t x743 = 1U;
	static int32_t t136 = -6701;

    t136 = (((x741+x742)>x743)-x744);

    if (t136 != -3) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x745 = UINT32_MAX;
	int8_t x747 = INT8_MIN;
	int32_t t137 = 772097;

    t137 = (((x745+x746)>x747)-x748);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x750 = 3U;
	int16_t x751 = INT16_MIN;
	uint64_t x752 = 2084185392868156LLU;
	volatile uint64_t t138 = 2022046LLU;

    t138 = (((x749+x750)>x751)-x752);

    if (t138 != 18444659888316683461LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x753 = 582;
	int8_t x754 = -5;
	static int32_t x755 = 1168;
	int16_t x756 = INT16_MIN;

    t139 = (((x753+x754)>x755)-x756);

    if (t139 != 32768) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x765 = INT64_MIN;
	uint16_t x766 = 61U;
	volatile uint32_t x767 = 29U;
	int64_t x768 = -39395000148896704LL;
	int64_t t140 = -271LL;

    t140 = (((x765+x766)>x767)-x768);

    if (t140 != 39395000148896704LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x773 = UINT32_MAX;
	int8_t x774 = INT8_MAX;
	int8_t x776 = INT8_MIN;
	int32_t t141 = 1681;

    t141 = (((x773+x774)>x775)-x776);

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x778 = -1;
	static uint32_t x779 = 5410U;
	static int32_t x780 = -463190170;
	int32_t t142 = 13814;

    t142 = (((x777+x778)>x779)-x780);

    if (t142 != 463190170) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x785 = INT32_MIN;
	static uint8_t x787 = UINT8_MAX;
	volatile int64_t x788 = -2921LL;

    t143 = (((x785+x786)>x787)-x788);

    if (t143 != 2921LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x789 = INT32_MIN;
	volatile uint64_t x791 = UINT64_MAX;
	int16_t x792 = INT16_MIN;
	int32_t t144 = -1034101651;

    t144 = (((x789+x790)>x791)-x792);

    if (t144 != 32768) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x793 = INT16_MIN;
	volatile int16_t x794 = -166;
	uint32_t x795 = 7363752U;
	volatile int32_t x796 = INT32_MAX;
	static volatile int32_t t145 = 1132999;

    t145 = (((x793+x794)>x795)-x796);

    if (t145 != -2147483646) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x797 = -1;
	volatile int32_t x798 = 749139640;
	volatile uint8_t x799 = 0U;
	static int16_t x800 = INT16_MIN;
	volatile int32_t t146 = -210228;

    t146 = (((x797+x798)>x799)-x800);

    if (t146 != 32769) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x805 = 1332589506828LL;
	int16_t x807 = -1;
	volatile int32_t t147 = 837172614;

    t147 = (((x805+x806)>x807)-x808);

    if (t147 != 129) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x813 = 1LL;
	int64_t x814 = -1LL;
	uint16_t x816 = 1U;

    t148 = (((x813+x814)>x815)-x816);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x818 = UINT16_MAX;
	uint64_t x819 = UINT64_MAX;
	static uint8_t x820 = UINT8_MAX;

    t149 = (((x817+x818)>x819)-x820);

    if (t149 != -255) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x825 = UINT8_MAX;
	int16_t x827 = INT16_MIN;
	int32_t x828 = INT32_MAX;
	static int32_t t150 = 59;

    t150 = (((x825+x826)>x827)-x828);

    if (t150 != -2147483646) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x829 = 41U;
	int16_t x831 = INT16_MIN;
	int32_t x832 = 107001;
	static volatile int32_t t151 = 42;

    t151 = (((x829+x830)>x831)-x832);

    if (t151 != -107000) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x837 = 2;
	int64_t x838 = -1LL;
	int8_t x839 = INT8_MIN;
	int16_t x840 = -943;

    t152 = (((x837+x838)>x839)-x840);

    if (t152 != 944) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x843 = -3610;
	uint16_t x844 = 9U;

    t153 = (((x841+x842)>x843)-x844);

    if (t153 != -9) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x845 = -53;
	int16_t x846 = INT16_MIN;
	uint8_t x847 = UINT8_MAX;
	static volatile int32_t t154 = 3646586;

    t154 = (((x845+x846)>x847)-x848);

    if (t154 != 32768) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x849 = -1206LL;
	int32_t x850 = 6567;
	uint16_t x852 = 3U;
	volatile int32_t t155 = 1912;

    t155 = (((x849+x850)>x851)-x852);

    if (t155 != -2) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x861 = UINT64_MAX;
	int8_t x862 = INT8_MIN;
	static volatile uint32_t x864 = 1007U;
	static uint32_t t156 = 634697528U;

    t156 = (((x861+x862)>x863)-x864);

    if (t156 != 4294966290U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x865 = 7U;
	uint16_t x867 = 3426U;
	uint16_t x868 = 1977U;
	int32_t t157 = 726660586;

    t157 = (((x865+x866)>x867)-x868);

    if (t157 != -1977) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x874 = UINT64_MAX;
	volatile int32_t x875 = INT32_MAX;
	int64_t t158 = 33650599831123LL;

    t158 = (((x873+x874)>x875)-x876);

    if (t158 != 2LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x877 = UINT32_MAX;
	int16_t x878 = INT16_MIN;
	int16_t x879 = 8168;
	int8_t x880 = INT8_MAX;
	volatile int32_t t159 = -339710789;

    t159 = (((x877+x878)>x879)-x880);

    if (t159 != -126) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x881 = -1;
	uint32_t x882 = UINT32_MAX;
	static uint16_t x883 = UINT16_MAX;
	volatile int8_t x884 = -27;
	int32_t t160 = -9;

    t160 = (((x881+x882)>x883)-x884);

    if (t160 != 28) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x885 = 1;
	volatile int64_t x886 = 30763380079LL;
	int16_t x887 = INT16_MAX;
	int16_t x888 = 0;

    t161 = (((x885+x886)>x887)-x888);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint64_t x889 = 3159230753409LLU;
	uint16_t x890 = 21U;
	int32_t x891 = 19;
	int32_t x892 = 29311;
	static volatile int32_t t162 = -279286524;

    t162 = (((x889+x890)>x891)-x892);

    if (t162 != -29310) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x893 = -1;
	int8_t x894 = INT8_MAX;
	int32_t x895 = INT32_MIN;
	int64_t x896 = -1383745991954556383LL;
	volatile int64_t t163 = -122308657LL;

    t163 = (((x893+x894)>x895)-x896);

    if (t163 != 1383745991954556384LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x898 = 20U;
	int16_t x899 = INT16_MIN;
	static volatile int32_t x900 = 0;

    t164 = (((x897+x898)>x899)-x900);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x905 = -1;
	int8_t x906 = INT8_MIN;
	int16_t x907 = INT16_MIN;
	uint16_t x908 = 224U;

    t165 = (((x905+x906)>x907)-x908);

    if (t165 != -223) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x909 = INT16_MAX;
	uint8_t x910 = UINT8_MAX;
	int64_t x911 = INT64_MAX;
	int16_t x912 = 730;
	int32_t t166 = -48620;

    t166 = (((x909+x910)>x911)-x912);

    if (t166 != -730) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x921 = -8;
	int16_t x922 = INT16_MIN;
	volatile int8_t x923 = 3;
	int64_t x924 = 267939224LL;
	int64_t t167 = 6354593LL;

    t167 = (((x921+x922)>x923)-x924);

    if (t167 != -267939224LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x926 = INT16_MIN;
	int16_t x927 = INT16_MIN;
	volatile int8_t x928 = -6;
	volatile int32_t t168 = 47;

    t168 = (((x925+x926)>x927)-x928);

    if (t168 != 7) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x930 = 1U;
	int64_t x931 = 1LL;
	volatile uint32_t x932 = 1544469942U;
	volatile uint32_t t169 = 126891566U;

    t169 = (((x929+x930)>x931)-x932);

    if (t169 != 2750497354U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x933 = -1;
	int16_t x934 = -1;
	int16_t x935 = 49;
	static int32_t t170 = 53;

    t170 = (((x933+x934)>x935)-x936);

    if (t170 != 32768) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x937 = UINT64_MAX;
	int8_t x938 = 0;
	volatile int8_t x939 = 1;
	uint64_t x940 = UINT64_MAX;

    t171 = (((x937+x938)>x939)-x940);

    if (t171 != 2LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x941 = INT32_MAX;
	int64_t x942 = -735LL;
	int32_t x943 = -737101;
	volatile uint16_t x944 = 0U;

    t172 = (((x941+x942)>x943)-x944);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x945 = UINT32_MAX;
	int32_t x946 = INT32_MAX;
	static uint32_t x947 = 51567208U;
	volatile uint64_t x948 = 8527893049184224585LLU;
	volatile uint64_t t173 = 1834288449505590531LLU;

    t173 = (((x945+x946)>x947)-x948);

    if (t173 != 9918851024525327032LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x949 = INT64_MIN;
	int8_t x950 = INT8_MAX;
	static uint16_t x951 = UINT16_MAX;
	int32_t x952 = -1;
	int32_t t174 = -1750;

    t174 = (((x949+x950)>x951)-x952);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x961 = -1;
	int32_t x964 = 888253;
	static int32_t t175 = 1;

    t175 = (((x961+x962)>x963)-x964);

    if (t175 != -888252) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x965 = -1;
	int32_t x966 = 30;
	static int8_t x967 = INT8_MAX;
	uint16_t x968 = 6939U;
	static volatile int32_t t176 = -6307485;

    t176 = (((x965+x966)>x967)-x968);

    if (t176 != -6939) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x974 = UINT32_MAX;
	int64_t x975 = 2726690466417155LL;
	int8_t x976 = INT8_MIN;
	int32_t t177 = -1803560;

    t177 = (((x973+x974)>x975)-x976);

    if (t177 != 128) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x983 = -423;
	int64_t x984 = -1LL;
	static int64_t t178 = -239LL;

    t178 = (((x981+x982)>x983)-x984);

    if (t178 != 2LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x985 = INT8_MIN;
	volatile int8_t x987 = INT8_MAX;
	volatile int32_t x988 = -9;
	int32_t t179 = 807;

    t179 = (((x985+x986)>x987)-x988);

    if (t179 != 10) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x989 = INT16_MIN;
	int16_t x990 = -314;
	static uint8_t x991 = 1U;
	uint32_t x992 = 46796U;
	uint32_t t180 = 656U;

    t180 = (((x989+x990)>x991)-x992);

    if (t180 != 4294920500U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x993 = 7;
	uint16_t x994 = 93U;
	static int8_t x996 = INT8_MIN;
	volatile int32_t t181 = -5;

    t181 = (((x993+x994)>x995)-x996);

    if (t181 != 129) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1001 = 267507518U;
	uint32_t x1004 = UINT32_MAX;
	volatile uint32_t t182 = 8111U;

    t182 = (((x1001+x1002)>x1003)-x1004);

    if (t182 != 2U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1005 = INT16_MIN;
	int8_t x1006 = INT8_MAX;
	uint32_t x1007 = UINT32_MAX;
	static volatile int64_t x1008 = -1LL;
	volatile int64_t t183 = -21705401649LL;

    t183 = (((x1005+x1006)>x1007)-x1008);

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1013 = 2017370U;
	int16_t x1014 = -1;
	volatile int16_t x1015 = INT16_MAX;
	volatile int8_t x1016 = INT8_MIN;
	int32_t t184 = -3960265;

    t184 = (((x1013+x1014)>x1015)-x1016);

    if (t184 != 129) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x1017 = INT8_MIN;
	static uint32_t x1018 = 2129U;
	int64_t x1019 = -1LL;
	int8_t x1020 = 14;
	volatile int32_t t185 = 83717871;

    t185 = (((x1017+x1018)>x1019)-x1020);

    if (t185 != -13) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1021 = 3U;
	int8_t x1022 = -11;
	int16_t x1023 = INT16_MIN;
	int64_t x1024 = INT64_MAX;
	volatile int64_t t186 = 701127424222535LL;

    t186 = (((x1021+x1022)>x1023)-x1024);

    if (t186 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1026 = INT32_MIN;
	volatile uint32_t x1028 = 12043959U;

    t187 = (((x1025+x1026)>x1027)-x1028);

    if (t187 != 4282923337U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x1029 = 10U;
	uint16_t x1030 = 1U;
	uint8_t x1031 = UINT8_MAX;
	static int32_t t188 = -7;

    t188 = (((x1029+x1030)>x1031)-x1032);

    if (t188 != 128) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1042 = 5U;
	volatile int16_t x1043 = INT16_MAX;
	int16_t x1044 = INT16_MIN;
	int32_t t189 = 125629;

    t189 = (((x1041+x1042)>x1043)-x1044);

    if (t189 != 32769) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x1046 = 221009756U;
	uint32_t x1048 = 0U;
	uint32_t t190 = 6227055U;

    t190 = (((x1045+x1046)>x1047)-x1048);

    if (t190 != 1U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x1050 = -1343LL;
	volatile int64_t x1052 = -247898747973709003LL;

    t191 = (((x1049+x1050)>x1051)-x1052);

    if (t191 != 247898747973709004LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1053 = 218U;
	int64_t x1054 = -55LL;
	int8_t x1055 = INT8_MAX;
	static int32_t x1056 = -1;
	volatile int32_t t192 = -1;

    t192 = (((x1053+x1054)>x1055)-x1056);

    if (t192 != 2) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1057 = INT32_MIN;
	int32_t x1058 = INT32_MAX;
	static int8_t x1060 = INT8_MIN;
	static volatile int32_t t193 = -1280749;

    t193 = (((x1057+x1058)>x1059)-x1060);

    if (t193 != 129) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1061 = -48333102360809LL;
	static int8_t x1063 = -1;
	volatile int64_t x1064 = -733730LL;
	static volatile int64_t t194 = -2483832268LL;

    t194 = (((x1061+x1062)>x1063)-x1064);

    if (t194 != 733730LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x1069 = -1;
	int64_t x1070 = -26159670595398LL;
	uint8_t x1072 = 0U;

    t195 = (((x1069+x1070)>x1071)-x1072);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1073 = 4U;
	int64_t x1074 = 53459LL;
	volatile uint16_t x1075 = 2U;
	static uint64_t x1076 = UINT64_MAX;
	static volatile uint64_t t196 = 7LLU;

    t196 = (((x1073+x1074)>x1075)-x1076);

    if (t196 != 2LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1077 = 7160078634LL;
	int32_t x1078 = 1654;
	uint16_t x1079 = 2U;
	volatile uint8_t x1080 = 0U;

    t197 = (((x1077+x1078)>x1079)-x1080);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1081 = -537634801762672LL;
	int64_t x1082 = -1471486812485187478LL;
	static int8_t x1084 = 19;
	int32_t t198 = 34;

    t198 = (((x1081+x1082)>x1083)-x1084);

    if (t198 != -19) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1085 = UINT8_MAX;
	int8_t x1086 = INT8_MIN;
	int8_t x1087 = INT8_MIN;
	int32_t x1088 = INT32_MAX;
	static int32_t t199 = 12;

    t199 = (((x1085+x1086)>x1087)-x1088);

    if (t199 != -2147483646) { NG(); } else { ; }
	
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

