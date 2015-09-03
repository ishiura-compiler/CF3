#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = 275;
int16_t x12 = INT16_MIN;
static int32_t x19 = -1;
int32_t x23 = INT32_MIN;
static volatile int64_t x27 = 7442570393734291LL;
uint16_t x28 = 58U;
uint32_t x34 = 192021U;
uint64_t x37 = 168775580103756473LLU;
int8_t x44 = INT8_MIN;
static int64_t x48 = INT64_MIN;
uint64_t x55 = 19221028LLU;
volatile int64_t x59 = -19538040979610LL;
volatile int64_t t14 = 55205327158112LL;
uint32_t x64 = 18144290U;
int64_t t15 = -3593LL;
uint32_t x76 = 160959U;
static int32_t x77 = INT32_MIN;
volatile int32_t x78 = -1;
uint32_t x84 = 3U;
int16_t x108 = INT16_MIN;
int64_t x110 = -22301749200LL;
int64_t x119 = 55309835408950LL;
volatile int64_t t29 = 42912LL;
volatile int64_t t30 = -476174008258885LL;
uint8_t x125 = 1U;
int64_t x132 = INT64_MIN;
int64_t t32 = INT64_MAX;
int8_t x139 = 3;
uint64_t t34 = 81749007077549LLU;
uint64_t t35 = 89182378468LLU;
int64_t x148 = -1345410761135499LL;
static uint8_t x149 = 15U;
volatile int32_t t37 = 221;
static volatile uint8_t x155 = 13U;
volatile uint32_t x158 = UINT32_MAX;
int8_t x163 = INT8_MIN;
int64_t x165 = INT64_MIN;
volatile int16_t x166 = -1;
int32_t x168 = 0;
int64_t x169 = -1LL;
static uint8_t x172 = 101U;
uint16_t x186 = 1U;
uint8_t x189 = 95U;
volatile int64_t t46 = 1329697311406897893LL;
uint8_t x196 = 3U;
static int16_t x200 = -1;
int64_t t50 = INT64_MAX;
int64_t t51 = -11030LL;
static int16_t x219 = INT16_MIN;
volatile uint32_t t53 = 62U;
volatile uint64_t t56 = 101793141188577188LLU;
volatile uint64_t t57 = 2649LLU;
int8_t x248 = -62;
int8_t x255 = INT8_MIN;
int64_t t62 = 6816126627176018LL;
static int8_t x264 = -11;
static uint64_t t66 = 204624LLU;
int64_t x276 = INT64_MAX;
uint16_t x277 = UINT16_MAX;
static int16_t x282 = -1;
int32_t x285 = -244;
volatile int16_t x292 = INT16_MAX;
static int16_t x293 = INT16_MAX;
int16_t x296 = 49;
static uint8_t x298 = 90U;
uint64_t t73 = 500137809LLU;
int64_t x301 = -1LL;
static volatile int8_t x303 = 1;
static int64_t t75 = INT64_MIN;
uint16_t x309 = 27996U;
int64_t t76 = 0LL;
int64_t x318 = -93921258248LL;
static volatile int16_t x323 = INT16_MIN;
int64_t x336 = INT64_MIN;
static volatile uint64_t t82 = 2227365921787LLU;
int32_t x342 = INT32_MIN;
int32_t x344 = -10180;
static uint8_t x346 = UINT8_MAX;
int8_t x347 = INT8_MIN;
int64_t x352 = INT64_MIN;
static volatile int64_t t86 = -32890368171LL;
static volatile int64_t x353 = -44470LL;
uint8_t x357 = 9U;
volatile int32_t x358 = INT32_MIN;
volatile uint64_t t89 = 447398924299LLU;
uint32_t x366 = UINT32_MAX;
volatile int8_t x372 = -1;
static volatile uint64_t t92 = 10354LLU;
volatile int8_t x379 = INT8_MAX;
volatile uint64_t t93 = 6395135LLU;
int8_t x382 = 7;
uint8_t x387 = UINT8_MAX;
volatile int64_t t95 = 4514578422929LL;
volatile int32_t t96 = 471;
volatile int8_t x397 = -18;


void f0(void) {
	static int32_t x1 = 8585;
	int8_t x2 = -1;
	uint32_t x3 = 191293U;
	uint8_t x4 = 7U;
	volatile uint32_t t0 = 363217992U;

	t0 = (((x1%x2)%x3)^x4);

	if (t0 != 7U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 4221362LL;
	int32_t x6 = INT32_MIN;
	int32_t x7 = INT32_MIN;
	int32_t x8 = -1;
	volatile int64_t t1 = -123LL;

	t1 = (((x5%x6)%x7)^x8);

	if (t1 != -4221363LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x11 = -1;
	volatile int32_t t2 = -724;

	t2 = (((x9%x10)%x11)^x12);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int64_t x14 = INT64_MAX;
	uint32_t x15 = 112824U;
	uint64_t x16 = UINT64_MAX;
	static uint64_t t3 = 695LLU;

	t3 = (((x13%x14)%x15)^x16);

	if (t3 != 18446744073709455528LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MAX;
	int16_t x18 = INT16_MIN;
	int16_t x20 = -165;
	volatile int64_t t4 = 3931965386502488438LL;

	t4 = (((x17%x18)%x19)^x20);

	if (t4 != -165LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	static int32_t x22 = -1912;
	static int16_t x24 = INT16_MIN;
	static volatile int64_t t5 = -11884LL;

	t5 = (((x21%x22)%x23)^x24);

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int16_t x26 = INT16_MIN;
	volatile int64_t t6 = 457671504LL;

	t6 = (((x25%x26)%x27)^x28);

	if (t6 != -59LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	static uint64_t x30 = UINT64_MAX;
	static int16_t x31 = INT16_MAX;
	volatile int32_t x32 = -1;
	volatile uint64_t t7 = 123512LLU;

	t7 = (((x29%x30)%x31)^x32);

	if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	uint8_t x35 = 10U;
	volatile int16_t x36 = 1615;
	volatile uint32_t t8 = 5U;

	t8 = (((x33%x34)%x35)^x36);

	if (t8 != 1607U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = 2115346451713846953LL;
	uint32_t x39 = 23613U;
	int64_t x40 = INT64_MIN;
	uint64_t t9 = 106549058693095LLU;

	t9 = (((x37%x38)%x39)^x40);

	if (t9 != 9223372036854781843LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -22;
	int64_t x42 = -1LL;
	int32_t x43 = INT32_MIN;
	volatile int64_t t10 = 20859587543783681LL;

	t10 = (((x41%x42)%x43)^x44);

	if (t10 != -128LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint8_t x46 = UINT8_MAX;
	static int64_t x47 = -1LL;
	volatile int64_t t11 = INT64_MIN;

	t11 = (((x45%x46)%x47)^x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	volatile uint32_t x50 = UINT32_MAX;
	uint32_t x51 = 4U;
	int64_t x52 = 79650124944110551LL;
	int64_t t12 = 3728183070LL;

	t12 = (((x49%x50)%x51)^x52);

	if (t12 != 79650124944110551LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MAX;
	uint8_t x56 = 1U;
	volatile uint64_t t13 = 3396122577371622805LLU;

	t13 = (((x53%x54)%x55)^x56);

	if (t13 != 2958834LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	uint32_t x58 = 28834U;
	int64_t x60 = INT64_MAX;

	t14 = (((x57%x58)%x59)^x60);

	if (t14 != 9223372036854761977LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 818555;
	volatile int32_t x62 = INT32_MIN;
	int64_t x63 = 3824LL;

	t15 = (((x61%x62)%x63)^x64);

	if (t15 != 18144505LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 2348LL;
	static uint8_t x66 = UINT8_MAX;
	uint64_t x67 = 442228977156527193LLU;
	volatile int32_t x68 = 1008221509;
	static volatile uint64_t t16 = 449LLU;

	t16 = (((x65%x66)%x67)^x68);

	if (t16 != 1008221552LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -65;
	static uint64_t x70 = 715089LLU;
	int64_t x71 = -1LL;
	static volatile int16_t x72 = INT16_MIN;
	static uint64_t t17 = 702153006039799LLU;

	t17 = (((x69%x70)%x71)^x72);

	if (t17 != 18446744073709297086LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 7927;
	uint8_t x74 = 5U;
	static int64_t x75 = -1LL;
	int64_t t18 = -796801595326469LL;

	t18 = (((x73%x74)%x75)^x76);

	if (t18 != 160959LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x79 = -16698095779LL;
	int16_t x80 = -1;
	int64_t t19 = 2LL;

	t19 = (((x77%x78)%x79)^x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	static volatile int64_t x82 = -3006007LL;
	int32_t x83 = 75035542;
	volatile int64_t t20 = -1LL;

	t20 = (((x81%x82)%x83)^x84);

	if (t20 != 65532LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x86 = INT8_MAX;
	int64_t x87 = INT64_MAX;
	volatile uint32_t x88 = 36157659U;
	volatile int64_t t21 = 377491795178LL;

	t21 = (((x85%x86)%x87)^x88);

	if (t21 != 36157652LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = UINT8_MAX;
	int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MIN;
	static uint64_t x92 = 41562649LLU;
	uint64_t t22 = 32300LLU;

	t22 = (((x89%x90)%x91)^x92);

	if (t22 != 41562726LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = -1;
	static int8_t x94 = INT8_MAX;
	volatile uint8_t x95 = UINT8_MAX;
	static uint64_t x96 = 1LLU;
	volatile uint64_t t23 = 1382LLU;

	t23 = (((x93%x94)%x95)^x96);

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	uint32_t x98 = 770U;
	int32_t x99 = INT32_MIN;
	int8_t x100 = 3;
	uint32_t t24 = 3221570U;

	t24 = (((x97%x98)%x99)^x100);

	if (t24 != 37U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 2558U;
	static volatile uint64_t x102 = UINT64_MAX;
	int32_t x103 = INT32_MIN;
	volatile int8_t x104 = INT8_MAX;
	static volatile uint64_t t25 = 67659565LLU;

	t25 = (((x101%x102)%x103)^x104);

	if (t25 != 2433LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	uint8_t x106 = UINT8_MAX;
	static uint32_t x107 = 4715245U;
	volatile uint32_t t26 = 3188U;

	t26 = (((x105%x106)%x107)^x108);

	if (t26 != 4294934655U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int16_t x111 = -1;
	int8_t x112 = -11;
	int64_t t27 = 2579254LL;

	t27 = (((x109%x110)%x111)^x112);

	if (t27 != -11LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	uint64_t x114 = 26333698516366368LLU;
	static volatile int32_t x115 = INT32_MIN;
	int64_t x116 = -1LL;
	volatile uint64_t t28 = 511101185242LLU;

	t28 = (((x113%x114)%x115)^x116);

	if (t28 != 18433588961456457600LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 303LL;
	int64_t x118 = INT64_MIN;
	int16_t x120 = INT16_MIN;

	t29 = (((x117%x118)%x119)^x120);

	if (t29 != -32465LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int16_t x122 = INT16_MIN;
	static int64_t x123 = 939664LL;
	volatile uint16_t x124 = 1U;

	t30 = (((x121%x122)%x123)^x124);

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = -1;
	int32_t x127 = INT32_MIN;
	uint16_t x128 = 3881U;
	int32_t t31 = 1;

	t31 = (((x125%x126)%x127)^x128);

	if (t31 != 3881) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	volatile int16_t x130 = INT16_MIN;
	volatile int16_t x131 = INT16_MIN;

	t32 = (((x129%x130)%x131)^x132);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = -1;
	volatile int8_t x136 = INT8_MAX;
	int64_t t33 = -102704LL;

	t33 = (((x133%x134)%x135)^x136);

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 22LLU;
	volatile int64_t x138 = -35050939810413LL;
	int32_t x140 = INT32_MIN;

	t34 = (((x137%x138)%x139)^x140);

	if (t34 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 1U;
	int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;
	static volatile uint64_t x144 = 1721LLU;

	t35 = (((x141%x142)%x143)^x144);

	if (t35 != 1721LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 0;
	int32_t x146 = -500;
	int16_t x147 = INT16_MIN;
	volatile int64_t t36 = -3LL;

	t36 = (((x145%x146)%x147)^x148);

	if (t36 != -1345410761135499LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MAX;
	uint16_t x151 = UINT16_MAX;
	static int16_t x152 = INT16_MAX;

	t37 = (((x149%x150)%x151)^x152);

	if (t37 != 32752) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	uint16_t x154 = 899U;
	volatile int32_t x156 = INT32_MIN;
	static int32_t t38 = INT32_MAX;

	t38 = (((x153%x154)%x155)^x156);

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MIN;
	int64_t t39 = 2724142876348798LL;

	t39 = (((x157%x158)%x159)^x160);

	if (t39 != 32767LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 19U;
	int16_t x162 = INT16_MAX;
	int16_t x164 = 5;
	int32_t t40 = -18758112;

	t40 = (((x161%x162)%x163)^x164);

	if (t40 != 22) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x167 = 330016342499583557LL;
	volatile int64_t t41 = -45072017812504LL;

	t41 = (((x165%x166)%x167)^x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MAX;
	int16_t x171 = -1;
	int64_t t42 = -17652783464849200LL;

	t42 = (((x169%x170)%x171)^x172);

	if (t42 != 101LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -23;
	int16_t x174 = INT16_MIN;
	static int16_t x175 = -189;
	static uint64_t x176 = 186082LLU;
	uint64_t t43 = 6045471LLU;

	t43 = (((x173%x174)%x175)^x176);

	if (t43 != 18446744073709365515LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MAX;
	volatile uint64_t x182 = UINT64_MAX;
	uint8_t x183 = UINT8_MAX;
	uint16_t x184 = 137U;
	uint64_t t44 = 23472430LLU;

	t44 = (((x181%x182)%x183)^x184);

	if (t44 != 246LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	int64_t x187 = -1LL;
	uint32_t x188 = UINT32_MAX;
	volatile int64_t t45 = -23350211227LL;

	t45 = (((x185%x186)%x187)^x188);

	if (t45 != 4294967295LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x190 = INT16_MIN;
	int64_t x191 = -746LL;
	volatile int64_t x192 = INT64_MAX;

	t46 = (((x189%x190)%x191)^x192);

	if (t46 != 9223372036854775712LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MAX;
	static int64_t x194 = INT64_MIN;
	int64_t x195 = -1LL;
	static volatile int64_t t47 = 418286244LL;

	t47 = (((x193%x194)%x195)^x196);

	if (t47 != 3LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 9U;
	int8_t x198 = -7;
	volatile int64_t x199 = INT64_MIN;
	static int64_t t48 = -198236022LL;

	t48 = (((x197%x198)%x199)^x200);

	if (t48 != -3LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x201 = 20U;
	static uint64_t x202 = 997698LLU;
	volatile uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MIN;
	static uint64_t t49 = 1LLU;

	t49 = (((x201%x202)%x203)^x204);

	if (t49 != 9223372036854775828LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = -1;
	int64_t x206 = -6609241944LL;
	int16_t x207 = INT16_MAX;
	static int64_t x208 = INT64_MIN;

	t50 = (((x205%x206)%x207)^x208);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 154U;
	volatile int16_t x210 = INT16_MAX;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -3431LL;

	t51 = (((x209%x210)%x211)^x212);

	if (t51 != -3581LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MIN;
	static int32_t x214 = INT32_MIN;
	int64_t x215 = 1281966919479773LL;
	uint32_t x216 = 9274368U;
	volatile int64_t t52 = 469377029231537LL;

	t52 = (((x213%x214)%x215)^x216);

	if (t52 != 9274368LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	uint32_t x218 = 2528363U;
	static int8_t x220 = 15;

	t53 = (((x217%x218)%x219)^x220);

	if (t53 != 903466U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x221 = -56869;
	uint32_t x222 = 1904302501U;
	int64_t x223 = 568560860047836LL;
	volatile uint8_t x224 = UINT8_MAX;
	static volatile int64_t t54 = 0LL;

	t54 = (((x221%x222)%x223)^x224);

	if (t54 != 486305390LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = 129619005181LLU;
	static int8_t x226 = INT8_MIN;
	uint64_t x227 = UINT64_MAX;
	int32_t x228 = -1;
	uint64_t t55 = 87300567LLU;

	t55 = (((x225%x226)%x227)^x228);

	if (t55 != 18446743944090546434LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MAX;
	int64_t x230 = -1LL;
	static uint64_t x231 = 64472576LLU;
	int64_t x232 = INT64_MAX;

	t56 = (((x229%x230)%x231)^x232);

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 15509303LLU;
	uint32_t x234 = UINT32_MAX;
	volatile int64_t x235 = 1667LL;
	uint32_t x236 = UINT32_MAX;

	t57 = (((x233%x234)%x235)^x236);

	if (t57 != 4294966093LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = INT32_MIN;
	uint32_t x238 = 2815U;
	static uint8_t x239 = UINT8_MAX;
	static uint32_t x240 = UINT32_MAX;
	volatile uint32_t t58 = 2758U;

	t58 = (((x237%x238)%x239)^x240);

	if (t58 != 4294967042U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x241 = 27U;
	uint8_t x242 = UINT8_MAX;
	static volatile int32_t x243 = 149051;
	int32_t x244 = -1;
	volatile int32_t t59 = 3919;

	t59 = (((x241%x242)%x243)^x244);

	if (t59 != -28) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 16U;
	volatile uint8_t x246 = 1U;
	uint64_t x247 = 230396020714LLU;
	uint64_t t60 = 17148910491284308LLU;

	t60 = (((x245%x246)%x247)^x248);

	if (t60 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = -49959242749LL;
	static uint16_t x250 = 7U;
	static int32_t x251 = 1;
	volatile int16_t x252 = 2;
	volatile int64_t t61 = -21LL;

	t61 = (((x249%x250)%x251)^x252);

	if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 0U;
	static int64_t x254 = INT64_MIN;
	int32_t x256 = INT32_MIN;

	t62 = (((x253%x254)%x255)^x256);

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MAX;
	static int32_t x258 = INT32_MAX;
	volatile int8_t x259 = INT8_MIN;
	static uint64_t x260 = 45LLU;
	uint64_t t63 = 360302794LLU;

	t63 = (((x257%x258)%x259)^x260);

	if (t63 != 44LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = 23;
	static int8_t x262 = INT8_MAX;
	volatile int8_t x263 = 61;
	volatile int32_t t64 = 4;

	t64 = (((x261%x262)%x263)^x264);

	if (t64 != -30) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = -1;
	volatile int64_t x266 = -1LL;
	static int16_t x267 = 5;
	uint16_t x268 = UINT16_MAX;
	static volatile int64_t t65 = -259168747LL;

	t65 = (((x265%x266)%x267)^x268);

	if (t65 != 65535LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MIN;
	uint16_t x270 = 3651U;
	static uint64_t x271 = UINT64_MAX;
	int32_t x272 = 259551574;

	t66 = (((x269%x270)%x271)^x272);

	if (t66 != 18446744073449998604LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MAX;
	int16_t x274 = INT16_MIN;
	volatile int8_t x275 = -25;
	static int64_t t67 = 13080266LL;

	t67 = (((x273%x274)%x275)^x276);

	if (t67 != 9223372036854775790LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x278 = 230017LLU;
	volatile uint8_t x279 = 43U;
	int8_t x280 = -1;
	uint64_t t68 = 12725831055LLU;

	t68 = (((x277%x278)%x279)^x280);

	if (t68 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = 112776626;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 0U;
	int32_t t69 = -2992026;

	t69 = (((x281%x282)%x283)^x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = -11;
	int64_t x288 = 78901926106793368LL;
	int64_t t70 = -20500924LL;

	t70 = (((x285%x286)%x287)^x288);

	if (t70 != -78901926106793370LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = UINT16_MAX;
	uint64_t x290 = UINT64_MAX;
	uint32_t x291 = 11077U;
	volatile uint64_t t71 = 662LLU;

	t71 = (((x289%x290)%x291)^x292);

	if (t71 != 22617LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x294 = 19845U;
	static uint32_t x295 = UINT32_MAX;
	static uint32_t t72 = 63U;

	t72 = (((x293%x294)%x295)^x296);

	if (t72 != 12875U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x297 = INT64_MAX;
	uint64_t x299 = UINT64_MAX;
	static int8_t x300 = INT8_MIN;

	t73 = (((x297%x298)%x299)^x300);

	if (t73 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x302 = 15552U;
	int64_t x304 = -1LL;
	static int64_t t74 = 872442127454844933LL;

	t74 = (((x301%x302)%x303)^x304);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x305 = 296U;
	int64_t x306 = 7136310LL;
	int8_t x307 = -1;
	int64_t x308 = INT64_MIN;

	t75 = (((x305%x306)%x307)^x308);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x310 = INT16_MAX;
	int64_t x311 = -544200366677966LL;
	int8_t x312 = INT8_MIN;

	t76 = (((x309%x310)%x311)^x312);

	if (t76 != -27940LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x313 = UINT8_MAX;
	int64_t x314 = -1LL;
	uint8_t x315 = 2U;
	uint32_t x316 = 19875U;
	int64_t t77 = 7947LL;

	t77 = (((x313%x314)%x315)^x316);

	if (t77 != 19875LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int64_t x319 = -2586808230LL;
	uint64_t x320 = 102499341359LLU;
	uint64_t t78 = 7489163445530LLU;

	t78 = (((x317%x318)%x319)^x320);

	if (t78 != 102499341520LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x321 = UINT32_MAX;
	uint16_t x322 = UINT16_MAX;
	volatile int32_t x324 = INT32_MIN;
	uint32_t t79 = 729404152U;

	t79 = (((x321%x322)%x323)^x324);

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 64U;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = 1;
	int8_t x328 = -1;
	uint64_t t80 = UINT64_MAX;

	t80 = (((x325%x326)%x327)^x328);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x329 = 5U;
	volatile int16_t x330 = INT16_MIN;
	static volatile int64_t x331 = -1LL;
	static uint64_t x332 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (((x329%x330)%x331)^x332);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x333 = -112;
	uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 99U;

	t82 = (((x333%x334)%x335)^x336);

	if (t82 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x337 = INT64_MAX;
	int64_t x338 = 213LL;
	int8_t x339 = INT8_MAX;
	int32_t x340 = -512196;
	volatile int64_t t83 = 0LL;

	t83 = (((x337%x338)%x339)^x340);

	if (t83 != -512200LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x341 = 3316644103982977LLU;
	int32_t x343 = -1;
	uint64_t t84 = 1532LLU;

	t84 = (((x341%x342)%x343)^x344);

	if (t84 != 18443427429605562301LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x345 = -337;
	volatile int32_t x348 = INT32_MIN;
	int32_t t85 = -11026;

	t85 = (((x345%x346)%x347)^x348);

	if (t85 != 2147483566) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = INT16_MIN;
	static int16_t x350 = 963;
	volatile int32_t x351 = 102899357;

	t86 = (((x349%x350)%x351)^x352);

	if (t86 != 9223372036854775782LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x354 = 1362663252137LLU;
	int64_t x355 = -1LL;
	volatile uint16_t x356 = 1176U;
	volatile uint64_t t87 = 15529703512LLU;

	t87 = (((x353%x354)%x355)^x356);

	if (t87 != 985126355722LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t88 = -45551472;

	t88 = (((x357%x358)%x359)^x360);

	if (t88 != -119) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 2536888LLU;
	int64_t x362 = INT64_MIN;
	int16_t x363 = -2024;
	int32_t x364 = INT32_MIN;

	t89 = (((x361%x362)%x363)^x364);

	if (t89 != 18446744071564604856LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x365 = UINT16_MAX;
	int16_t x367 = INT16_MIN;
	int16_t x368 = 906;
	uint32_t t90 = 61515U;

	t90 = (((x365%x366)%x367)^x368);

	if (t90 != 64629U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = INT64_MAX;
	volatile int32_t x370 = -13940;
	int16_t x371 = INT16_MIN;
	int64_t t91 = 200804LL;

	t91 = (((x369%x370)%x371)^x372);

	if (t91 != -10668LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x373 = UINT32_MAX;
	static uint64_t x374 = UINT64_MAX;
	volatile int8_t x375 = INT8_MIN;
	uint8_t x376 = 13U;

	t92 = (((x373%x374)%x375)^x376);

	if (t92 != 4294967282LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x377 = 307U;
	volatile uint16_t x378 = 1218U;
	uint64_t x380 = UINT64_MAX;

	t93 = (((x377%x378)%x379)^x380);

	if (t93 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x381 = 43609164588LLU;
	static uint64_t x383 = UINT64_MAX;
	int64_t x384 = INT64_MIN;
	uint64_t t94 = 153253740LLU;

	t94 = (((x381%x382)%x383)^x384);

	if (t94 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = INT64_MIN;
	int8_t x386 = -1;
	int8_t x388 = INT8_MIN;

	t95 = (((x385%x386)%x387)^x388);

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = -1240;
	uint16_t x391 = 2637U;
	uint16_t x392 = 1U;

	t96 = (((x389%x390)%x391)^x392);

	if (t96 != -807) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = -14920127830466LL;
	uint64_t x394 = 143322292008LLU;
	int8_t x395 = -2;
	int32_t x396 = -240929096;
	volatile uint64_t t97 = 8687LLU;

	t97 = (((x393%x394)%x395)^x396);

	if (t97 != 18446744062718782702LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x398 = INT8_MAX;
	uint32_t x399 = 5961155U;
	volatile uint64_t x400 = UINT64_MAX;
	uint64_t t98 = 1022725LLU;

	t98 = (((x397%x398)%x399)^x400);

	if (t98 != 18446744073706615937LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = INT8_MAX;
	static volatile int16_t x402 = INT16_MIN;
	uint32_t x403 = 1978U;
	uint64_t x404 = 16255636LLU;
	uint64_t t99 = 148853765999703LLU;

	t99 = (((x401%x402)%x403)^x404);

	if (t99 != 16255723LLU) { NG(); } else { ; }
	
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


    return 0;
}

