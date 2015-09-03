#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x5 = 9;
volatile int8_t x8 = INT8_MIN;
int16_t x10 = INT16_MIN;
uint8_t x11 = 17U;
int16_t x18 = 989;
int32_t t5 = 38828;
static volatile int8_t x33 = -10;
volatile int8_t x38 = 1;
int8_t x39 = -3;
uint64_t x41 = 6792LLU;
static int16_t x44 = INT16_MIN;
static volatile int64_t t10 = 64265494843067LL;
volatile int32_t t11 = -400;
int32_t x62 = INT32_MIN;
int32_t x64 = INT32_MIN;
volatile int64_t t14 = -13619087412066830LL;
static volatile uint16_t x72 = 194U;
volatile int16_t x76 = 2880;
static uint16_t x86 = 0U;
int8_t x88 = -1;
int16_t x89 = 78;
static volatile int32_t t20 = 493;
int16_t x97 = -1;
static volatile int64_t x106 = INT64_MAX;
static uint32_t x108 = 263667U;
volatile int32_t t24 = -1415360;
static volatile int32_t x116 = INT32_MAX;
volatile int32_t x120 = INT32_MIN;
volatile uint8_t x128 = 1U;
volatile int8_t x129 = -2;
int16_t x131 = -53;
uint8_t x133 = UINT8_MAX;
volatile uint64_t x136 = UINT64_MAX;
volatile uint64_t t30 = 0LLU;
int64_t t32 = -12381LL;
int64_t x157 = -1LL;
int32_t x158 = 541;
int8_t x160 = -1;
volatile uint32_t x166 = UINT32_MAX;
uint8_t x169 = UINT8_MAX;
int8_t x177 = INT8_MIN;
int64_t x178 = -11LL;
int8_t x179 = 0;
static int64_t x180 = -1LL;
volatile int64_t t39 = -1792LL;
static int32_t x187 = -28296009;
static int16_t x188 = -1;
int32_t x190 = -1;
static uint16_t x193 = UINT16_MAX;
int64_t x200 = 947006669689699LL;
int64_t t44 = -1009812419LL;
uint64_t x225 = 14897LLU;
uint8_t x228 = UINT8_MAX;
volatile uint64_t t48 = 311469850LLU;
uint32_t t49 = 170832U;
int64_t x243 = INT64_MIN;
uint64_t t51 = 18528121LLU;
static int8_t x245 = -2;
int16_t x247 = INT16_MAX;
static int32_t t53 = -57;
volatile uint8_t x258 = UINT8_MAX;
volatile int32_t t55 = -1137791;
static uint16_t x264 = 8U;
static uint8_t x266 = UINT8_MAX;
uint8_t x274 = UINT8_MAX;
int32_t x277 = -1;
uint32_t x278 = UINT32_MAX;
static int64_t x302 = -21688758455465LL;
volatile int16_t x304 = INT16_MIN;
uint64_t x307 = 6587LLU;
int32_t t67 = 109010;
static int8_t x319 = INT8_MAX;
static uint16_t x330 = 34U;
static int64_t x331 = INT64_MIN;
int64_t x332 = INT64_MIN;
int64_t t71 = 1490721937LL;
uint8_t x333 = 0U;
volatile int8_t x341 = INT8_MIN;
int32_t x344 = -19691166;
int8_t x349 = INT8_MIN;
int64_t x350 = INT64_MIN;
volatile int32_t x352 = -1;
static int32_t t75 = -231869;
int8_t x355 = 0;
static uint16_t x356 = UINT16_MAX;
uint64_t x361 = UINT64_MAX;
static uint8_t x369 = 1U;
int8_t x371 = INT8_MIN;
uint32_t x372 = 10223U;
uint32_t x376 = UINT32_MAX;
uint64_t x377 = 3599317952307LLU;
uint16_t x378 = 0U;
uint16_t x385 = UINT16_MAX;
uint64_t x388 = 3550907813LLU;
int16_t x394 = INT16_MIN;
volatile uint64_t x399 = UINT64_MAX;
static uint64_t x400 = UINT64_MAX;
volatile uint64_t t85 = 916LLU;
volatile int32_t x401 = -12879406;
int16_t x404 = -3;
uint8_t x408 = UINT8_MAX;
int64_t x414 = -45276282346758LL;
volatile uint64_t t89 = 24575LLU;
static uint64_t x429 = 1376762LLU;
uint8_t x434 = UINT8_MAX;
static int8_t x438 = INT8_MIN;
static int8_t x446 = 4;
uint8_t x447 = 1U;
int16_t x449 = -1;
int8_t x453 = INT8_MAX;
uint16_t x454 = 100U;
volatile int32_t x461 = -1;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	volatile int16_t x2 = INT16_MIN;
	static int16_t x3 = INT16_MIN;
	uint64_t x4 = 107737LLU;
	uint64_t t0 = 66340448834LLU;

	t0 = ((x1|(x2<=x3))+x4);

	if (t0 != 18446744071562175706LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	int64_t x7 = INT64_MIN;
	int32_t t1 = 0;

	t1 = ((x5|(x6<=x7))+x8);

	if (t1 != -119) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1863340480774515LL;
	static int64_t x12 = INT64_MAX;
	int64_t t2 = -1996LL;

	t2 = ((x9|(x10<=x11))+x12);

	if (t2 != 9221508696374001292LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static uint32_t x14 = UINT32_MAX;
	int16_t x15 = -1;
	int16_t x16 = -1;
	volatile int32_t t3 = -1376;

	t3 = ((x13|(x14<=x15))+x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint8_t x19 = UINT8_MAX;
	uint8_t x20 = 0U;
	static int32_t t4 = INT32_MIN;

	t4 = ((x17|(x18<=x19))+x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	uint16_t x26 = 69U;
	static volatile int8_t x27 = INT8_MIN;
	volatile int8_t x28 = 1;

	t5 = ((x25|(x26<=x27))+x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	volatile int32_t x30 = INT32_MAX;
	uint8_t x31 = 0U;
	volatile int8_t x32 = -1;
	int32_t t6 = -6605;

	t6 = ((x29|(x30<=x31))+x32);

	if (t6 != 32766) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x34 = INT32_MIN;
	static uint32_t x35 = 2444087U;
	int16_t x36 = INT16_MIN;
	volatile int32_t t7 = -247;

	t7 = ((x33|(x34<=x35))+x36);

	if (t7 != -32778) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	uint8_t x40 = UINT8_MAX;
	int32_t t8 = -21;

	t8 = ((x37|(x38<=x39))+x40);

	if (t8 != 382) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MIN;
	int8_t x43 = INT8_MIN;
	uint64_t t9 = 1048064LLU;

	t9 = ((x41|(x42<=x43))+x44);

	if (t9 != 18446744073709525641LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 38U;
	static volatile int8_t x46 = INT8_MAX;
	volatile uint32_t x47 = 167274246U;
	int64_t x48 = INT64_MIN;

	t10 = ((x45|(x46<=x47))+x48);

	if (t10 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 58U;
	static uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MAX;
	static volatile int16_t x52 = INT16_MIN;

	t11 = ((x49|(x50<=x51))+x52);

	if (t11 != -32710) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x53 = 0U;
	int16_t x54 = INT16_MIN;
	uint32_t x55 = 568361U;
	int16_t x56 = -1;
	volatile int32_t t12 = -21;

	t12 = ((x53|(x54<=x55))+x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1LL;
	static uint64_t x58 = 525353526552184LLU;
	int32_t x59 = -131857321;
	int8_t x60 = INT8_MIN;
	int64_t t13 = 103845018LL;

	t13 = ((x57|(x58<=x59))+x60);

	if (t13 != -129LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = -1LL;
	int16_t x63 = INT16_MIN;

	t14 = ((x61|(x62<=x63))+x64);

	if (t14 != -2147483649LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x69 = 70U;
	static int16_t x70 = INT16_MIN;
	uint16_t x71 = 1586U;
	int32_t t15 = -3;

	t15 = ((x69|(x70<=x71))+x72);

	if (t15 != 265) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = UINT16_MAX;
	int16_t x74 = INT16_MIN;
	int32_t x75 = -1;
	int32_t t16 = -3791;

	t16 = ((x73|(x74<=x75))+x76);

	if (t16 != 68415) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -55205120;
	int8_t x78 = 11;
	int8_t x79 = -1;
	int64_t x80 = INT64_MAX;
	volatile int64_t t17 = 92360193731205LL;

	t17 = ((x77|(x78<=x79))+x80);

	if (t17 != 9223372036799570687LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x81 = 0LL;
	int64_t x82 = INT64_MIN;
	volatile int16_t x83 = 12583;
	static uint32_t x84 = UINT32_MAX;
	volatile int64_t t18 = 192731648106LL;

	t18 = ((x81|(x82<=x83))+x84);

	if (t18 != 4294967296LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = -1;
	int16_t x87 = -1;
	int32_t t19 = -2711003;

	t19 = ((x85|(x86<=x87))+x88);

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x90 = INT8_MAX;
	static int16_t x91 = INT16_MAX;
	static uint16_t x92 = 6379U;

	t20 = ((x89|(x90<=x91))+x92);

	if (t20 != 6458) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	int32_t x94 = -1854766;
	uint8_t x95 = 14U;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t21 = 7;

	t21 = ((x93|(x94<=x95))+x96);

	if (t21 != -129) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x98 = INT16_MIN;
	int16_t x99 = -1;
	volatile int64_t x100 = -67380LL;
	static int64_t t22 = -611589528LL;

	t22 = ((x97|(x98<=x99))+x100);

	if (t22 != -67381LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -1;
	volatile int8_t x107 = INT8_MIN;
	uint32_t t23 = 1797017U;

	t23 = ((x105|(x106<=x107))+x108);

	if (t23 != 263666U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	uint8_t x110 = 6U;
	uint32_t x111 = 2208794U;
	uint16_t x112 = UINT16_MAX;

	t24 = ((x109|(x110<=x111))+x112);

	if (t24 != -2147418112) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x113 = 740488LL;
	uint16_t x114 = UINT16_MAX;
	int16_t x115 = 4473;
	volatile int64_t t25 = -592379181152223093LL;

	t25 = ((x113|(x114<=x115))+x116);

	if (t25 != 2148224135LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x117 = UINT64_MAX;
	int8_t x118 = INT8_MAX;
	uint64_t x119 = 2052902LLU;
	static volatile uint64_t t26 = 17845464988402352LLU;

	t26 = ((x117|(x118<=x119))+x120);

	if (t26 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x121 = 255552;
	int64_t x122 = 2120149509829LL;
	uint16_t x123 = 4U;
	int8_t x124 = 2;
	static int32_t t27 = -5;

	t27 = ((x121|(x122<=x123))+x124);

	if (t27 != 255554) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x125 = INT16_MAX;
	int64_t x126 = INT64_MAX;
	int32_t x127 = INT32_MIN;
	int32_t t28 = 23887027;

	t28 = ((x125|(x126<=x127))+x128);

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x130 = INT16_MIN;
	uint8_t x132 = 9U;
	volatile int32_t t29 = 0;

	t29 = ((x129|(x130<=x131))+x132);

	if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x134 = UINT8_MAX;
	uint64_t x135 = 671LLU;

	t30 = ((x133|(x134<=x135))+x136);

	if (t30 != 254LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MAX;
	int8_t x138 = INT8_MIN;
	volatile int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t31 = 92007244;

	t31 = ((x137|(x138<=x139))+x140);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x145 = INT64_MAX;
	static uint64_t x146 = 1LLU;
	int16_t x147 = 20;
	static int64_t x148 = -1LL;

	t32 = ((x145|(x146<=x147))+x148);

	if (t32 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = 4;
	int8_t x154 = INT8_MAX;
	volatile int8_t x155 = 20;
	uint8_t x156 = 1U;
	volatile int32_t t33 = -404349532;

	t33 = ((x153|(x154<=x155))+x156);

	if (t33 != 5) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x159 = UINT32_MAX;
	static volatile int64_t t34 = 8918630LL;

	t34 = ((x157|(x158<=x159))+x160);

	if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x161 = UINT64_MAX;
	int16_t x162 = INT16_MAX;
	volatile int32_t x163 = -1;
	static int16_t x164 = -1;
	volatile uint64_t t35 = 248LLU;

	t35 = ((x161|(x162<=x163))+x164);

	if (t35 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x165 = -81967956840LL;
	static volatile int8_t x167 = -28;
	volatile int32_t x168 = INT32_MIN;
	volatile int64_t t36 = -1866474211523610LL;

	t36 = ((x165|(x166<=x167))+x168);

	if (t36 != -84115440488LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x170 = 26915154;
	static int64_t x171 = -116680LL;
	volatile int16_t x172 = INT16_MIN;
	volatile int32_t t37 = -51;

	t37 = ((x169|(x170<=x171))+x172);

	if (t37 != -32513) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MIN;
	volatile uint16_t x174 = UINT16_MAX;
	int8_t x175 = INT8_MIN;
	uint8_t x176 = 31U;
	static volatile int64_t t38 = -924574272702313LL;

	t38 = ((x173|(x174<=x175))+x176);

	if (t38 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f39(void) {


	t39 = ((x177|(x178<=x179))+x180);

	if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x181 = 7U;
	volatile uint8_t x182 = 9U;
	volatile int32_t x183 = INT32_MIN;
	volatile int16_t x184 = -6599;
	volatile int32_t t40 = 1121;

	t40 = ((x181|(x182<=x183))+x184);

	if (t40 != -6592) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = UINT32_MAX;
	volatile uint8_t x186 = 49U;
	volatile uint32_t t41 = 4519U;

	t41 = ((x185|(x186<=x187))+x188);

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = -1;
	static int16_t x191 = 273;
	int64_t x192 = INT64_MAX;
	int64_t t42 = 131735514965LL;

	t42 = ((x189|(x190<=x191))+x192);

	if (t42 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x194 = 24U;
	static uint32_t x195 = UINT32_MAX;
	static int8_t x196 = 30;
	int32_t t43 = 383215;

	t43 = ((x193|(x194<=x195))+x196);

	if (t43 != 65565) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = -1;
	static volatile int16_t x198 = -1;
	uint32_t x199 = 155576U;

	t44 = ((x197|(x198<=x199))+x200);

	if (t44 != 947006669689698LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = -3;
	static volatile int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = UINT32_MAX;
	volatile uint32_t t45 = 218U;

	t45 = ((x201|(x202<=x203))+x204);

	if (t45 != 4294967292U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MAX;
	uint64_t x211 = 2761LLU;
	int64_t x212 = INT64_MIN;
	static volatile uint64_t t46 = 18666095LLU;

	t46 = ((x209|(x210<=x211))+x212);

	if (t46 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x213 = UINT8_MAX;
	int16_t x214 = -1;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t47 = 1;

	t47 = ((x213|(x214<=x215))+x216);

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x226 = INT32_MAX;
	int64_t x227 = INT64_MIN;

	t48 = ((x225|(x226<=x227))+x228);

	if (t48 != 15152LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x229 = INT32_MAX;
	int8_t x230 = INT8_MAX;
	int16_t x231 = INT16_MAX;
	volatile uint32_t x232 = 4925808U;

	t49 = ((x229|(x230<=x231))+x232);

	if (t49 != 2152409455U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = -1;
	static int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = UINT64_MAX;
	uint64_t t50 = 63936626LLU;

	t50 = ((x237|(x238<=x239))+x240);

	if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x241 = UINT64_MAX;
	uint16_t x242 = 14166U;
	volatile uint32_t x244 = 2108394U;

	t51 = ((x241|(x242<=x243))+x244);

	if (t51 != 2108393LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x246 = INT32_MAX;
	static int8_t x248 = INT8_MIN;
	int32_t t52 = 390751643;

	t52 = ((x245|(x246<=x247))+x248);

	if (t52 != -130) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x249 = 10U;
	volatile int64_t x250 = -9LL;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = -65676;

	t53 = ((x249|(x250<=x251))+x252);

	if (t53 != -65665) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x253 = INT64_MIN;
	uint16_t x254 = 7U;
	volatile uint64_t x255 = UINT64_MAX;
	int32_t x256 = -1;
	int64_t t54 = INT64_MIN;

	t54 = ((x253|(x254<=x255))+x256);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x257 = 921U;
	static int64_t x259 = INT64_MIN;
	uint8_t x260 = 29U;

	t55 = ((x257|(x258<=x259))+x260);

	if (t55 != 950) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x261 = INT64_MIN;
	int8_t x262 = -1;
	int32_t x263 = INT32_MAX;
	static volatile int64_t t56 = -3964LL;

	t56 = ((x261|(x262<=x263))+x264);

	if (t56 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x265 = 1632;
	volatile int32_t x267 = -1;
	volatile int16_t x268 = -10;
	int32_t t57 = 73699;

	t57 = ((x265|(x266<=x267))+x268);

	if (t57 != 1622) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = -22LL;
	int64_t x275 = INT64_MIN;
	volatile int16_t x276 = INT16_MAX;
	int64_t t58 = -17296619451845169LL;

	t58 = ((x273|(x274<=x275))+x276);

	if (t58 != 32745LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x279 = UINT8_MAX;
	uint16_t x280 = 1U;
	int32_t t59 = -1095259;

	t59 = ((x277|(x278<=x279))+x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = INT32_MIN;
	static int64_t x282 = INT64_MIN;
	uint8_t x283 = UINT8_MAX;
	int8_t x284 = 0;
	volatile int32_t t60 = -1;

	t60 = ((x281|(x282<=x283))+x284);

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x285 = 30396145610513LL;
	int32_t x286 = -1;
	static uint64_t x287 = 54702119617243125LLU;
	static uint16_t x288 = UINT16_MAX;
	volatile int64_t t61 = 10426LL;

	t61 = ((x285|(x286<=x287))+x288);

	if (t61 != 30396145676048LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = -17;
	int16_t x290 = -1;
	uint64_t x291 = 228326122LLU;
	static volatile int64_t x292 = -1LL;
	volatile int64_t t62 = 119209041748LL;

	t62 = ((x289|(x290<=x291))+x292);

	if (t62 != -18LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = -1;
	int64_t x294 = INT64_MIN;
	static int32_t x295 = INT32_MIN;
	uint16_t x296 = 7U;
	static int32_t t63 = -2134;

	t63 = ((x293|(x294<=x295))+x296);

	if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x301 = 15;
	volatile uint64_t x303 = 6964LLU;
	int32_t t64 = 397538;

	t64 = ((x301|(x302<=x303))+x304);

	if (t64 != -32753) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = 1707;
	volatile int32_t x306 = -733;
	uint8_t x308 = UINT8_MAX;
	static volatile int32_t t65 = -2985;

	t65 = ((x305|(x306<=x307))+x308);

	if (t65 != 1962) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x309 = 28U;
	int16_t x310 = -1;
	int8_t x311 = 29;
	int32_t x312 = INT32_MIN;
	volatile int32_t t66 = -107522057;

	t66 = ((x309|(x310<=x311))+x312);

	if (t66 != -2147483619) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x313 = -1;
	int16_t x314 = INT16_MAX;
	int32_t x315 = -1;
	uint16_t x316 = UINT16_MAX;

	t67 = ((x313|(x314<=x315))+x316);

	if (t67 != 65534) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MAX;
	int8_t x318 = -3;
	uint8_t x320 = 47U;
	volatile int32_t t68 = 47;

	t68 = ((x317|(x318<=x319))+x320);

	if (t68 != 174) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x321 = INT64_MIN;
	int16_t x322 = 31;
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = 1;
	int64_t t69 = -129702230312453LL;

	t69 = ((x321|(x322<=x323))+x324);

	if (t69 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x325 = 467177LLU;
	volatile int64_t x326 = INT64_MIN;
	int8_t x327 = -1;
	int16_t x328 = -1;
	volatile uint64_t t70 = 161562328223LLU;

	t70 = ((x325|(x326<=x327))+x328);

	if (t70 != 467176LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x329 = INT16_MAX;

	t71 = ((x329|(x330<=x331))+x332);

	if (t71 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x334 = INT16_MAX;
	int64_t x335 = INT64_MIN;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t72 = -1582;

	t72 = ((x333|(x334<=x335))+x336);

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x337 = -3;
	uint32_t x338 = 30U;
	static uint32_t x339 = UINT32_MAX;
	int16_t x340 = INT16_MAX;
	int32_t t73 = -287;

	t73 = ((x337|(x338<=x339))+x340);

	if (t73 != 32764) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x342 = UINT32_MAX;
	static int32_t x343 = -703590563;
	volatile int32_t t74 = -1051;

	t74 = ((x341|(x342<=x343))+x344);

	if (t74 != -19691294) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x351 = -1;

	t75 = ((x349|(x350<=x351))+x352);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = 3;
	int32_t x354 = 3;
	int32_t t76 = -7;

	t76 = ((x353|(x354<=x355))+x356);

	if (t76 != 65538) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = INT64_MAX;
	int16_t x358 = -1656;
	uint8_t x359 = 15U;
	static int64_t x360 = INT64_MIN;
	int64_t t77 = -648LL;

	t77 = ((x357|(x358<=x359))+x360);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x362 = 442U;
	int16_t x363 = INT16_MAX;
	int32_t x364 = 3733424;
	volatile uint64_t t78 = 39894936394456989LLU;

	t78 = ((x361|(x362<=x363))+x364);

	if (t78 != 3733423LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x370 = 267517831483679LLU;
	uint32_t t79 = 8935U;

	t79 = ((x369|(x370<=x371))+x372);

	if (t79 != 10224U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x373 = 2190810098136664828LLU;
	int16_t x374 = INT16_MIN;
	uint16_t x375 = 1U;
	volatile uint64_t t80 = 3375630615633820LLU;

	t80 = ((x373|(x374<=x375))+x376);

	if (t80 != 2190810102431632124LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x379 = -984805LL;
	int16_t x380 = 195;
	volatile uint64_t t81 = 1318238886941LLU;

	t81 = ((x377|(x378<=x379))+x380);

	if (t81 != 3599317952502LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = 172983;
	uint8_t x382 = 112U;
	int32_t x383 = -63214;
	uint64_t x384 = UINT64_MAX;
	uint64_t t82 = 88741509629LLU;

	t82 = ((x381|(x382<=x383))+x384);

	if (t82 != 172982LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x386 = INT8_MIN;
	static uint64_t x387 = 54209924178899LLU;
	static volatile uint64_t t83 = 891311459361LLU;

	t83 = ((x385|(x386<=x387))+x388);

	if (t83 != 3550973348LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x393 = INT64_MAX;
	int8_t x395 = INT8_MAX;
	uint64_t x396 = 58881750LLU;
	uint64_t t84 = 64618880674LLU;

	t84 = ((x393|(x394<=x395))+x396);

	if (t84 != 9223372036913657557LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x397 = UINT16_MAX;
	uint8_t x398 = UINT8_MAX;

	t85 = ((x397|(x398<=x399))+x400);

	if (t85 != 65534LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x402 = 6LLU;
	static int16_t x403 = -58;
	int32_t t86 = 1004195116;

	t86 = ((x401|(x402<=x403))+x404);

	if (t86 != -12879408) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x405 = -1LL;
	uint64_t x406 = UINT64_MAX;
	int32_t x407 = INT32_MIN;
	static int64_t t87 = -242LL;

	t87 = ((x405|(x406<=x407))+x408);

	if (t87 != 254LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x413 = 469744951511920308LL;
	static uint8_t x415 = 15U;
	int64_t x416 = INT64_MIN;
	static volatile int64_t t88 = 458969LL;

	t88 = ((x413|(x414<=x415))+x416);

	if (t88 != -8753627085342855499LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x421 = 49189939945558LLU;
	int16_t x422 = INT16_MIN;
	int8_t x423 = INT8_MIN;
	volatile int16_t x424 = -1;

	t89 = ((x421|(x422<=x423))+x424);

	if (t89 != 49189939945558LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x425 = 14134U;
	uint32_t x426 = 7433U;
	int64_t x427 = INT64_MIN;
	static int8_t x428 = INT8_MIN;
	int32_t t90 = -519;

	t90 = ((x425|(x426<=x427))+x428);

	if (t90 != 14006) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x430 = INT16_MIN;
	int8_t x431 = -1;
	int64_t x432 = INT64_MIN;
	volatile uint64_t t91 = 9568810822342277LLU;

	t91 = ((x429|(x430<=x431))+x432);

	if (t91 != 9223372036856152571LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x433 = -1;
	int16_t x435 = 3419;
	int8_t x436 = -1;
	int32_t t92 = 1;

	t92 = ((x433|(x434<=x435))+x436);

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x437 = UINT64_MAX;
	uint64_t x439 = UINT64_MAX;
	int64_t x440 = INT64_MIN;
	static uint64_t t93 = 2542259748784110LLU;

	t93 = ((x437|(x438<=x439))+x440);

	if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x441 = -1;
	int8_t x442 = INT8_MIN;
	static uint8_t x443 = 4U;
	int64_t x444 = INT64_MAX;
	int64_t t94 = 55519721950508740LL;

	t94 = ((x441|(x442<=x443))+x444);

	if (t94 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x445 = INT32_MAX;
	static int16_t x448 = INT16_MIN;
	int32_t t95 = 76;

	t95 = ((x445|(x446<=x447))+x448);

	if (t95 != 2147450879) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x450 = INT64_MIN;
	static int8_t x451 = INT8_MIN;
	int8_t x452 = 0;
	int32_t t96 = -1;

	t96 = ((x449|(x450<=x451))+x452);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x455 = -1LL;
	int8_t x456 = INT8_MIN;
	int32_t t97 = 728;

	t97 = ((x453|(x454<=x455))+x456);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x457 = INT16_MAX;
	int32_t x458 = INT32_MIN;
	static volatile int32_t x459 = INT32_MAX;
	int8_t x460 = INT8_MAX;
	int32_t t98 = -74755;

	t98 = ((x457|(x458<=x459))+x460);

	if (t98 != 32894) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x462 = 118845159U;
	uint8_t x463 = UINT8_MAX;
	static int64_t x464 = INT64_MAX;
	int64_t t99 = -3LL;

	t99 = ((x461|(x462<=x463))+x464);

	if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
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

