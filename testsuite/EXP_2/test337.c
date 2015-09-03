#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
int8_t x14 = INT8_MIN;
static volatile int64_t x15 = INT64_MIN;
volatile int16_t x19 = INT16_MAX;
uint16_t x22 = 14939U;
int8_t x34 = 52;
static int32_t x47 = -1;
uint16_t x48 = 3368U;
int32_t x66 = INT32_MIN;
static int8_t x70 = -6;
int16_t x75 = 342;
int16_t x79 = INT16_MIN;
volatile int32_t t19 = -1;
static volatile uint64_t t20 = 523712834461059LLU;
static uint16_t x96 = UINT16_MAX;
int16_t x98 = INT16_MAX;
int64_t x103 = 1891210348923149831LL;
int64_t x104 = INT64_MAX;
int32_t t25 = -2016591;
int16_t x115 = INT16_MIN;
volatile uint8_t x116 = 15U;
int64_t x117 = INT64_MAX;
int16_t x119 = INT16_MIN;
int64_t t27 = 251028956117111LL;
int16_t x122 = INT16_MAX;
int32_t x125 = INT32_MIN;
int8_t x129 = 1;
int64_t x130 = -64808840LL;
static volatile int16_t x132 = -2811;
int64_t t33 = -4LL;
uint32_t x151 = 2423U;
int16_t x152 = INT16_MIN;
uint16_t x159 = UINT16_MAX;
int32_t t38 = -237617;
volatile uint32_t t41 = UINT32_MAX;
static volatile uint8_t x179 = 32U;
int32_t x184 = INT32_MIN;
int32_t t43 = -25256995;
static int16_t x189 = -9;
static int64_t x193 = -56672LL;
static uint64_t x195 = UINT64_MAX;
static volatile int16_t x200 = -445;
int16_t x201 = INT16_MIN;
int16_t x203 = -1;
int64_t x205 = INT64_MIN;
uint32_t x213 = 96711236U;
uint64_t x215 = 506001589501585368LLU;
uint64_t t51 = 973534501LLU;
int64_t x221 = -33715136497LL;
volatile int8_t x230 = -1;
int8_t x232 = 24;
int16_t x244 = INT16_MAX;
int64_t x247 = INT64_MIN;
static int16_t x248 = -1;
volatile int64_t t57 = 66460205580LL;
volatile uint64_t t58 = 1052894843190365LLU;
volatile uint32_t t60 = 1915U;
int64_t x270 = -1826523991LL;
uint16_t x271 = UINT16_MAX;
volatile int64_t x274 = -30060384908476256LL;
int64_t x277 = -1LL;
int16_t x281 = INT16_MIN;
static volatile int16_t x282 = INT16_MIN;
int8_t x293 = -9;
int8_t x298 = -54;
uint32_t x299 = 5U;
uint16_t x301 = UINT16_MAX;
static volatile uint32_t x307 = UINT32_MAX;
uint64_t x309 = UINT64_MAX;
volatile uint16_t x313 = 1105U;
int8_t x318 = INT8_MIN;
static int32_t x320 = INT32_MIN;
int8_t x326 = 1;
int32_t t75 = 26295;
static uint16_t x330 = 13996U;
uint64_t x331 = UINT64_MAX;
static volatile uint64_t t76 = 415493516090LLU;
static int16_t x335 = INT16_MIN;
volatile int8_t x340 = -2;
static volatile int64_t x357 = -1LL;
volatile int64_t x359 = 1850989436717170LL;
int8_t x390 = INT8_MAX;
int32_t x397 = -17042839;
uint16_t x407 = UINT16_MAX;
int64_t x408 = -1LL;
volatile int64_t t92 = -852018433454625LL;
int32_t t94 = -734229889;
int32_t x417 = -1;
int16_t x418 = -988;
int8_t x419 = INT8_MIN;
volatile int64_t x420 = INT64_MIN;
volatile int64_t t95 = 1499LL;
static uint8_t x421 = 17U;
volatile int32_t x425 = INT32_MIN;
volatile uint32_t x428 = 27550593U;


void f0(void) {
	uint64_t x1 = 216LLU;
	int64_t x2 = INT64_MAX;
	volatile uint8_t x3 = UINT8_MAX;
	int8_t x4 = 0;
	volatile uint64_t t0 = 880310539LLU;

	t0 = ((x1^(x2-x3))|x4);

	if (t0 != 9223372036854775768LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = INT64_MAX;
	int16_t x7 = -1;
	int16_t x8 = INT16_MAX;
	int64_t t1 = 101645733805747523LL;

	t1 = ((x5^(x6-x7))|x8);

	if (t1 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 276;
	int64_t x10 = -67979LL;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 39831943LLU;
	uint64_t t2 = 518744883745LLU;

	t2 = ((x9^(x10-x11))|x12);

	if (t2 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = INT64_MAX;
	volatile uint32_t x16 = 1U;
	int64_t t3 = -29120792800095059LL;

	t3 = ((x13^(x14-x15))|x16);

	if (t3 != 127LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	volatile int32_t x18 = -1;
	volatile int8_t x20 = INT8_MIN;
	static int64_t t4 = -696060478854245LL;

	t4 = ((x17^(x18-x19))|x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 3U;
	int64_t x23 = INT64_MAX;
	static int64_t x24 = INT64_MIN;
	volatile int64_t t5 = 1401127225737612038LL;

	t5 = ((x21^(x22-x23))|x24);

	if (t5 != -9223372036854760865LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 1U;
	static int32_t x26 = INT32_MIN;
	uint8_t x27 = 0U;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 640712358;

	t6 = ((x25^(x26-x27))|x28);

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 213071;
	int64_t x30 = INT64_MAX;
	uint64_t x31 = 909181850817601355LLU;
	volatile uint16_t x32 = 2U;
	static uint64_t t7 = 241910531639632LLU;

	t7 = ((x29^(x30-x31))|x32);

	if (t7 != 8314190186037354747LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1203683U;
	int64_t x35 = 54LL;
	int64_t x36 = 18682688415LL;
	static volatile int64_t t8 = -11461711780484174LL;

	t8 = ((x33^(x34-x35))|x36);

	if (t8 != -19553LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int64_t x38 = INT64_MAX;
	int8_t x39 = INT8_MAX;
	volatile uint32_t x40 = UINT32_MAX;
	uint64_t t9 = 196233917904105LLU;

	t9 = ((x37^(x38-x39))|x40);

	if (t9 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint32_t x42 = 684823957U;
	uint32_t x43 = 26457U;
	static uint16_t x44 = 28865U;
	static uint32_t t10 = 707568U;

	t10 = ((x41^(x42-x43))|x44);

	if (t10 != 3610177987U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MAX;
	static int32_t x46 = -1;
	volatile int32_t t11 = INT32_MAX;

	t11 = ((x45^(x46-x47))|x48);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 106U;
	uint16_t x54 = UINT16_MAX;
	volatile uint32_t x55 = UINT32_MAX;
	static volatile uint64_t x56 = 13406046773079462LLU;
	volatile uint64_t t12 = 34LLU;

	t12 = ((x53^(x54-x55))|x56);

	if (t12 != 13406046773145070LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 10U;
	static int64_t x58 = -7879LL;
	volatile uint8_t x59 = 0U;
	int16_t x60 = -1;
	int64_t t13 = 25966174707729LL;

	t13 = ((x57^(x58-x59))|x60);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 30U;
	int8_t x67 = -19;
	int64_t x68 = -1974401LL;
	volatile int64_t t14 = 114LL;

	t14 = ((x65^(x66-x67))|x68);

	if (t14 != -1974401LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 31332246123914LLU;
	static volatile int8_t x71 = -1;
	int8_t x72 = 0;
	volatile uint64_t t15 = 27939LLU;

	t15 = ((x69^(x70-x71))|x72);

	if (t15 != 18446712741463427697LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = INT32_MIN;
	static uint16_t x74 = 93U;
	static volatile uint8_t x76 = 30U;
	int32_t t16 = 2140510;

	t16 = ((x73^(x74-x75))|x76);

	if (t16 != 2147483423) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = -1;
	int16_t x78 = -1;
	static int8_t x80 = -1;
	volatile int32_t t17 = -504647;

	t17 = ((x77^(x78-x79))|x80);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	uint64_t x82 = 41848685LLU;
	volatile uint32_t x83 = 21796224U;
	uint16_t x84 = 145U;
	volatile uint64_t t18 = 1494806032797LLU;

	t18 = ((x81^(x82-x83))|x84);

	if (t18 != 18446744073689499283LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MAX;
	int32_t x86 = -1;
	volatile int16_t x87 = 59;
	int32_t x88 = -1;

	t19 = ((x85^(x86-x87))|x88);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x89 = 2055847791135552LLU;
	int64_t x90 = INT64_MIN;
	uint64_t x91 = UINT64_MAX;
	volatile int16_t x92 = INT16_MIN;

	t20 = ((x89^(x90-x91))|x92);

	if (t20 != 18446744073709521729LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	volatile uint16_t x94 = 71U;
	int64_t x95 = -1LL;
	int64_t t21 = 4389145104096307878LL;

	t21 = ((x93^(x94-x95))|x96);

	if (t21 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = 3;
	int16_t x99 = INT16_MIN;
	volatile int32_t x100 = -1;
	volatile int32_t t22 = -192;

	t22 = ((x97^(x98-x99))|x100);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	int64_t x102 = -1468986927817557741LL;
	static int64_t t23 = INT64_MAX;

	t23 = ((x101^(x102-x103))|x104);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 35286581863233478LLU;
	int32_t x106 = 483631105;
	int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MIN;
	uint64_t t24 = 2LLU;

	t24 = ((x105^(x106-x107))|x108);

	if (t24 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 3;
	int8_t x110 = 3;
	uint16_t x111 = 44U;
	int16_t x112 = INT16_MIN;

	t25 = ((x109^(x110-x111))|x112);

	if (t25 != -44) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -1;
	volatile uint32_t x114 = 163U;
	volatile uint32_t t26 = 177658893U;

	t26 = ((x113^(x114-x115))|x116);

	if (t26 != 4294934367U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x118 = INT64_MIN;
	static int32_t x120 = INT32_MIN;

	t27 = ((x117^(x118-x119))|x120);

	if (t27 != -32769LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x121 = 843707U;
	int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MIN;
	static uint32_t t28 = 85731924U;

	t28 = ((x121^(x122-x123))|x124);

	if (t28 != 2148294596U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x126 = 2;
	uint32_t x127 = UINT32_MAX;
	uint16_t x128 = UINT16_MAX;
	volatile uint32_t t29 = 1221675037U;

	t29 = ((x125^(x126-x127))|x128);

	if (t29 != 2147549183U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x131 = UINT64_MAX;
	static uint64_t t30 = 17337LLU;

	t30 = ((x129^(x130-x131))|x132);

	if (t30 != 18446744073709550973LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 3788U;
	uint32_t x134 = 72366U;
	int16_t x135 = -1;
	static uint32_t x136 = 15399U;
	volatile uint32_t t31 = 13331076U;

	t31 = ((x133^(x134-x135))|x136);

	if (t31 != 80999U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -1;
	int32_t x138 = 5762219;
	int8_t x139 = INT8_MIN;
	int32_t x140 = 5;
	static volatile int32_t t32 = 111;

	t32 = ((x137^(x138-x139))|x140);

	if (t32 != -5762347) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MAX;
	uint16_t x142 = 92U;
	static int64_t x143 = 42761LL;
	int64_t x144 = INT64_MIN;

	t33 = ((x141^(x142-x143))|x144);

	if (t33 != -9223372036854733140LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = 99452042LL;
	static uint64_t x146 = 486756970631458LLU;
	static uint32_t x147 = 48297630U;
	uint64_t x148 = UINT64_MAX;
	uint64_t t34 = UINT64_MAX;

	t34 = ((x145^(x146-x147))|x148);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x149 = 1487LLU;
	volatile uint32_t x150 = UINT32_MAX;
	volatile uint64_t t35 = 98569081172631363LLU;

	t35 = ((x149^(x150-x151))|x152);

	if (t35 != 18446744073709548359LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x153 = 2330699270LLU;
	int16_t x154 = INT16_MIN;
	static int16_t x155 = INT16_MIN;
	static uint8_t x156 = UINT8_MAX;
	uint64_t t36 = 1096159LLU;

	t36 = ((x153^(x154-x155))|x156);

	if (t36 != 2330699519LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x157 = INT8_MIN;
	uint64_t x158 = UINT64_MAX;
	volatile int32_t x160 = 114801301;
	uint64_t t37 = 6159992728430420LLU;

	t37 = ((x157^(x158-x159))|x160);

	if (t37 != 114818965LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x161 = UINT16_MAX;
	int16_t x162 = 61;
	int32_t x163 = INT32_MAX;
	static uint16_t x164 = UINT16_MAX;

	t38 = ((x161^(x162-x163))|x164);

	if (t38 != -2147418113) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 1U;
	uint64_t x166 = UINT64_MAX;
	uint8_t x167 = UINT8_MAX;
	uint32_t x168 = UINT32_MAX;
	uint64_t t39 = UINT64_MAX;

	t39 = ((x165^(x166-x167))|x168);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	uint64_t x170 = 25529903560241100LLU;
	int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MIN;
	uint64_t t40 = 2618847822439LLU;

	t40 = ((x169^(x170-x171))|x172);

	if (t40 != 18446744072084541516LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x173 = -1;
	int8_t x174 = 1;
	int16_t x175 = -1;
	static volatile uint32_t x176 = UINT32_MAX;

	t41 = ((x173^(x174-x175))|x176);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = UINT16_MAX;
	int64_t x178 = -1LL;
	volatile uint32_t x180 = 39U;
	volatile int64_t t42 = -14985027912842LL;

	t42 = ((x177^(x178-x179))|x180);

	if (t42 != -65497LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x181 = INT16_MAX;
	static volatile uint8_t x182 = 4U;
	static volatile int8_t x183 = INT8_MAX;

	t43 = ((x181^(x182-x183))|x184);

	if (t43 != -32646) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x185 = INT64_MIN;
	static int64_t x186 = INT64_MIN;
	int32_t x187 = -5;
	uint16_t x188 = UINT16_MAX;
	int64_t t44 = 491846399666337LL;

	t44 = ((x185^(x186-x187))|x188);

	if (t44 != 65535LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x190 = 3U;
	int16_t x191 = -1;
	int8_t x192 = INT8_MIN;
	volatile int32_t t45 = 243;

	t45 = ((x189^(x190-x191))|x192);

	if (t45 != -13) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x194 = INT32_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile uint64_t t46 = 5704230065LLU;

	t46 = ((x193^(x194-x195))|x196);

	if (t46 != 2147483647LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -2;
	int32_t x198 = -1;
	uint64_t x199 = 142276339554LLU;
	volatile uint64_t t47 = 4587405LLU;

	t47 = ((x197^(x198-x199))|x200);

	if (t47 != 18446744073709551459LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x202 = INT64_MIN;
	int64_t x204 = INT64_MAX;
	int64_t t48 = INT64_MAX;

	t48 = ((x201^(x202-x203))|x204);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x206 = 93581320554105101LLU;
	int16_t x207 = INT16_MIN;
	uint32_t x208 = 10U;
	volatile uint64_t t49 = 3849LLU;

	t49 = ((x205^(x206-x207))|x208);

	if (t49 != 9316953357408913679LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = -1LL;
	int32_t x211 = -1;
	int64_t x212 = -1LL;
	volatile int64_t t50 = -549764634509113LL;

	t50 = ((x209^(x210-x211))|x212);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x214 = -1LL;
	int16_t x216 = INT16_MIN;

	t51 = ((x213^(x214-x215))|x216);

	if (t51 != 18446744073709529699LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = INT8_MIN;
	static int16_t x218 = INT16_MAX;
	int32_t x219 = INT32_MAX;
	int64_t x220 = INT64_MAX;
	int64_t t52 = INT64_MAX;

	t52 = ((x217^(x218-x219))|x220);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x222 = INT8_MIN;
	uint32_t x223 = UINT32_MAX;
	volatile int64_t x224 = INT64_MIN;
	int64_t t53 = 25613184910170LL;

	t53 = ((x221^(x222-x223))|x224);

	if (t53 != -30709373042LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = UINT32_MAX;
	uint32_t x231 = 1U;
	volatile uint32_t t54 = 1169U;

	t54 = ((x229^(x230-x231))|x232);

	if (t54 != 25U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int8_t x238 = -1;
	int8_t x239 = INT8_MIN;
	int32_t x240 = -326039;
	int32_t t55 = -147323450;

	t55 = ((x237^(x238-x239))|x240);

	if (t55 != -262167) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x241 = 13811;
	static uint16_t x242 = UINT16_MAX;
	uint32_t x243 = 1124U;
	volatile uint32_t t56 = 216U;

	t56 = ((x241^(x242-x243))|x244);

	if (t56 != 65535U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = 2948439;
	static int16_t x246 = INT16_MIN;

	t57 = ((x245^(x246-x247))|x248);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x249 = -2;
	int16_t x250 = INT16_MAX;
	uint64_t x251 = 29974508706870LLU;
	int64_t x252 = -14345055LL;

	t58 = ((x249^(x250-x251))|x252);

	if (t58 != 18446744073708838071LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x253 = UINT64_MAX;
	int64_t x254 = -30LL;
	int16_t x255 = INT16_MIN;
	volatile int16_t x256 = -902;
	uint64_t t59 = 56LLU;

	t59 = ((x253^(x254-x255))|x256);

	if (t59 != 18446744073709550719LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = UINT8_MAX;
	uint32_t x262 = 2U;
	volatile int8_t x263 = -1;
	int32_t x264 = INT32_MIN;

	t60 = ((x261^(x262-x263))|x264);

	if (t60 != 2147483900U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = 494;
	int64_t x272 = 126637820594328974LL;
	int64_t t61 = -25570535417613831LL;

	t61 = ((x269^(x270-x271))|x272);

	if (t61 != -676858418LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x273 = 105U;
	int64_t x275 = -351827932666LL;
	int64_t x276 = INT64_MIN;
	int64_t t62 = -103LL;

	t62 = ((x273^(x274-x275))|x276);

	if (t62 != -30060033080543501LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x278 = 298U;
	volatile int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MIN;
	static volatile int64_t t63 = 85LL;

	t63 = ((x277^(x278-x279))|x280);

	if (t63 != -33067LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x283 = UINT32_MAX;
	uint16_t x284 = UINT16_MAX;
	static volatile uint32_t t64 = 1712492630U;

	t64 = ((x281^(x282-x283))|x284);

	if (t64 != 65535U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	static int16_t x286 = INT16_MIN;
	int32_t x287 = 498452947;
	static volatile int32_t x288 = INT32_MAX;
	int64_t t65 = INT64_MAX;

	t65 = ((x285^(x286-x287))|x288);

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = 3485475318LL;
	int8_t x290 = 0;
	int64_t x291 = 9864735LL;
	uint16_t x292 = UINT16_MAX;
	int64_t t66 = 1LL;

	t66 = ((x289^(x290-x291))|x292);

	if (t66 != -3478519809LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x294 = 552408448447762LLU;
	volatile int32_t x295 = INT32_MIN;
	int8_t x296 = -1;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = ((x293^(x294-x295))|x296);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = UINT16_MAX;
	int32_t x300 = INT32_MIN;
	volatile uint32_t t68 = 36U;

	t68 = ((x297^(x298-x299))|x300);

	if (t68 != 4294901818U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x302 = UINT64_MAX;
	int64_t x303 = 162208764774536LL;
	static int16_t x304 = INT16_MIN;
	volatile uint64_t t69 = 220LLU;

	t69 = ((x301^(x302-x303))|x304);

	if (t69 != 18446744073709537416LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x305 = INT8_MIN;
	static int64_t x306 = -7451931851990LL;
	volatile uint8_t x308 = 126U;
	int64_t t70 = -94701694210LL;

	t70 = ((x305^(x306-x307))|x308);

	if (t70 != 7456226819327LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x310 = 0U;
	uint8_t x311 = 77U;
	static volatile uint8_t x312 = UINT8_MAX;
	volatile uint64_t t71 = 45473955LLU;

	t71 = ((x309^(x310-x311))|x312);

	if (t71 != 18446744069414584575LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x314 = -2474711;
	int16_t x315 = INT16_MAX;
	int32_t x316 = INT32_MAX;
	volatile int32_t t72 = 1826637;

	t72 = ((x313^(x314-x315))|x316);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x317 = 28297U;
	uint16_t x319 = 387U;
	int32_t t73 = 538;

	t73 = ((x317^(x318-x319))|x320);

	if (t73 != -27788) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -1;
	int64_t x322 = -818103928206194LL;
	int16_t x323 = 16;
	int64_t x324 = -1LL;
	static int64_t t74 = 6115LL;

	t74 = ((x321^(x322-x323))|x324);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x325 = UINT16_MAX;
	int32_t x327 = INT32_MAX;
	uint8_t x328 = UINT8_MAX;

	t75 = ((x325^(x326-x327))|x328);

	if (t75 != -2147418113) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = -17;
	int8_t x332 = 26;

	t76 = ((x329^(x330-x331))|x332);

	if (t76 != 18446744073709537626LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x333 = 2533U;
	uint64_t x334 = 13960808LLU;
	uint32_t x336 = UINT32_MAX;
	volatile uint64_t t77 = 380LLU;

	t77 = ((x333^(x334-x335))|x336);

	if (t77 != 4294967295LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = INT32_MIN;
	volatile int32_t x338 = INT32_MIN;
	int64_t x339 = -323960559351802045LL;
	static int64_t t78 = 1962496586500LL;

	t78 = ((x337^(x338-x339))|x340);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x341 = 21U;
	static int32_t x342 = INT32_MAX;
	volatile int32_t x343 = INT32_MAX;
	static int32_t x344 = 6938;
	volatile int32_t t79 = 310;

	t79 = ((x341^(x342-x343))|x344);

	if (t79 != 6943) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = -1;
	int64_t x354 = 285399713LL;
	uint16_t x355 = 412U;
	int64_t x356 = -1LL;
	static volatile int64_t t80 = 4199734461LL;

	t80 = ((x353^(x354-x355))|x356);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x358 = 8612863;
	volatile uint64_t x360 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = ((x357^(x358-x359))|x360);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x361 = 53U;
	static uint16_t x362 = 7670U;
	int8_t x363 = INT8_MIN;
	uint64_t x364 = 11178LLU;
	static volatile uint64_t t82 = 27LLU;

	t82 = ((x361^(x362-x363))|x364);

	if (t82 != 16363LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x365 = INT8_MIN;
	uint8_t x366 = 100U;
	int8_t x367 = -59;
	int64_t x368 = INT64_MIN;
	volatile int64_t t83 = -1LL;

	t83 = ((x365^(x366-x367))|x368);

	if (t83 != -225LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x369 = -808;
	int8_t x370 = 0;
	uint16_t x371 = 75U;
	static int64_t x372 = INT64_MIN;
	static volatile int64_t t84 = -1429523738LL;

	t84 = ((x369^(x370-x371))|x372);

	if (t84 != -9223372036854774931LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x377 = 1LLU;
	static int16_t x378 = -1;
	int64_t x379 = INT64_MAX;
	int8_t x380 = INT8_MIN;
	uint64_t t85 = 1781490508571651LLU;

	t85 = ((x377^(x378-x379))|x380);

	if (t85 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = -1;
	int32_t x382 = INT32_MIN;
	int16_t x383 = -223;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t86 = INT32_MAX;

	t86 = ((x381^(x382-x383))|x384);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = 88;
	volatile uint8_t x386 = UINT8_MAX;
	int64_t x387 = INT64_MAX;
	int32_t x388 = INT32_MIN;
	volatile int64_t t87 = -3506414935593LL;

	t87 = ((x385^(x386-x387))|x388);

	if (t87 != -2147483304LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = INT16_MAX;
	int32_t x391 = -1;
	volatile int64_t x392 = INT64_MAX;
	static int64_t t88 = INT64_MAX;

	t88 = ((x389^(x390-x391))|x392);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x393 = -767;
	int32_t x394 = INT32_MAX;
	int8_t x395 = INT8_MAX;
	int16_t x396 = 3980;
	int32_t t89 = 71;

	t89 = ((x393^(x394-x395))|x396);

	if (t89 != -2147479667) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	static int16_t x400 = -1;
	volatile int64_t t90 = 1214689302496057LL;

	t90 = ((x397^(x398-x399))|x400);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x401 = UINT8_MAX;
	static volatile uint64_t x402 = 199510109LLU;
	int64_t x403 = INT64_MIN;
	uint16_t x404 = UINT16_MAX;
	uint64_t t91 = 62210337431514LLU;

	t91 = ((x401^(x402-x403))|x404);

	if (t91 != 9223372037054332927LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x405 = 248367U;
	uint8_t x406 = 47U;

	t92 = ((x405^(x406-x407))|x408);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = 0LL;
	static volatile int16_t x410 = -18;
	uint8_t x411 = UINT8_MAX;
	int64_t x412 = -551089817581638LL;
	int64_t t93 = 3487LL;

	t93 = ((x409^(x410-x411))|x412);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x413 = UINT8_MAX;
	int16_t x414 = INT16_MAX;
	static uint8_t x415 = UINT8_MAX;
	int8_t x416 = 15;

	t94 = ((x413^(x414-x415))|x416);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {


	t95 = ((x417^(x418-x419))|x420);

	if (t95 != -9223372036854774949LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x422 = INT8_MIN;
	static int64_t x423 = INT64_MIN;
	uint16_t x424 = 7674U;
	int64_t t96 = -2648396013697427LL;

	t96 = ((x421^(x422-x423))|x424);

	if (t96 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x426 = INT16_MAX;
	int32_t x427 = -1;
	volatile uint32_t t97 = 27U;

	t97 = ((x425^(x426-x427))|x428);

	if (t97 != 2175067009U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x429 = UINT16_MAX;
	uint64_t x430 = 1776801818858909282LLU;
	int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;
	volatile uint64_t t98 = 339912987413LLU;

	t98 = ((x429^(x430-x431))|x432);

	if (t98 != 11000173855713693981LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x433 = 9LLU;
	volatile int64_t x434 = INT64_MIN;
	int64_t x435 = -1LL;
	int8_t x436 = -1;
	uint64_t t99 = UINT64_MAX;

	t99 = ((x433^(x434-x435))|x436);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

