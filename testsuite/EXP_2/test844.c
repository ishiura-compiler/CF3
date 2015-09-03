#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 1U;
int8_t x5 = INT8_MAX;
uint64_t x23 = UINT64_MAX;
uint32_t x24 = 280321U;
uint8_t x25 = 0U;
int64_t x26 = -105892749747035945LL;
uint64_t t6 = 74LLU;
int64_t t7 = 1430256LL;
volatile int16_t x40 = INT16_MIN;
int8_t x42 = INT8_MIN;
int16_t x43 = INT16_MAX;
int16_t x51 = INT16_MIN;
static int16_t x55 = INT16_MIN;
int8_t x59 = INT8_MAX;
volatile int64_t t14 = 17217069751071LL;
int32_t x80 = INT32_MAX;
int8_t x81 = 28;
int8_t x86 = INT8_MAX;
int16_t x91 = -1;
static int64_t x92 = INT64_MIN;
static volatile int64_t t21 = -12626LL;
int8_t x99 = INT8_MAX;
volatile uint32_t x110 = 14U;
static int8_t x111 = INT8_MIN;
int64_t t26 = -88649239671319LL;
static int64_t x124 = INT64_MIN;
uint64_t x130 = 1048815617465343LLU;
static volatile int64_t x135 = 17573513000338LL;
int16_t x139 = INT16_MIN;
uint64_t t34 = UINT64_MAX;
int8_t x149 = 0;
static int8_t x152 = INT8_MIN;
int32_t x154 = INT32_MIN;
static volatile uint32_t t37 = UINT32_MAX;
uint16_t x167 = 8469U;
uint64_t x168 = UINT64_MAX;
volatile uint16_t x173 = 49U;
int64_t x177 = -1539686459796891LL;
volatile int32_t x182 = -1;
static volatile int16_t x185 = INT16_MIN;
int32_t x187 = -1;
static volatile int32_t t43 = 1781;
int64_t x190 = -1LL;
static uint32_t x191 = 4U;
uint64_t x194 = UINT64_MAX;
volatile uint64_t t45 = 2LLU;
uint8_t x199 = UINT8_MAX;
static volatile uint64_t x206 = 2LLU;
uint32_t x208 = 13193937U;
int16_t x212 = 1;
volatile uint32_t x213 = UINT32_MAX;
static uint16_t x215 = UINT16_MAX;
uint32_t x216 = 150528561U;
uint64_t t51 = 7552872556LLU;
int32_t x228 = INT32_MAX;
int32_t x229 = INT32_MIN;
static int64_t x231 = -1LL;
static int8_t x238 = 1;
static int64_t t57 = 81400LL;
int16_t x251 = INT16_MIN;
int16_t x252 = 0;
uint32_t x253 = 23456U;
int32_t t61 = -10863;
static int32_t x264 = INT32_MIN;
int16_t x272 = INT16_MIN;
int64_t x273 = 4298271236LL;
volatile int8_t x274 = INT8_MIN;
int32_t x276 = 129568525;
int64_t t66 = 130936034593201LL;
uint32_t x282 = UINT32_MAX;
int64_t x286 = INT64_MAX;
int8_t x290 = INT8_MIN;
int8_t x294 = 12;
uint64_t t70 = 450395LLU;
uint16_t x298 = 0U;
static uint8_t x305 = UINT8_MAX;
static int16_t x307 = -1;
int64_t x308 = -2865LL;
static volatile int64_t t74 = 59602428LL;
uint16_t x321 = 1575U;
static int16_t x322 = INT16_MIN;
int32_t t77 = 78076440;
int16_t x331 = 23;
uint16_t x335 = 5873U;
uint64_t t80 = 128211471606315LLU;
int16_t x340 = 5;
static volatile int8_t x346 = INT8_MAX;
static volatile uint64_t t83 = 25353241LLU;
int8_t x349 = INT8_MAX;
volatile int64_t x354 = -1LL;
volatile int64_t t85 = 4451410213817540LL;
volatile int64_t t87 = 879LL;
volatile int16_t x369 = INT16_MIN;
static int8_t x370 = 3;
int16_t x371 = INT16_MIN;
uint64_t x376 = 2349820LLU;
static int16_t x387 = -133;
uint32_t x391 = 1159318035U;
volatile int32_t x392 = INT32_MIN;
int32_t x395 = INT32_MIN;
static uint16_t x396 = 15U;
int64_t x398 = 1440137860731397LL;
int8_t x399 = INT8_MIN;
static volatile uint32_t x404 = 345908U;
volatile int32_t t98 = 1723;


void f0(void) {
	static volatile uint16_t x1 = 29091U;
	uint16_t x3 = 7U;
	static uint32_t x4 = 212726315U;
	volatile uint32_t t0 = 117U;

	t0 = ((x1^(x2%x3))|x4);

	if (t0 != 212726699U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	volatile int64_t x7 = INT64_MAX;
	int16_t x8 = -1;
	volatile int64_t t1 = 878785393756476LL;

	t1 = ((x5^(x6%x7))|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 3521809886590563LL;
	uint64_t x10 = UINT64_MAX;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MAX;
	static uint64_t t2 = 335220945956496786LLU;

	t2 = ((x9^(x10%x11))|x12);

	if (t2 != 3521809886609407LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 195782189LLU;
	uint8_t x14 = 12U;
	int64_t x15 = INT64_MIN;
	uint64_t x16 = 1140040821946515991LLU;
	uint64_t t3 = 7552153942711884LLU;

	t3 = ((x13^(x14%x15))|x16);

	if (t3 != 1140040821982848567LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	volatile int8_t x19 = INT8_MIN;
	static int8_t x20 = INT8_MIN;
	int32_t t4 = -4;

	t4 = ((x17^(x18%x19))|x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint64_t x22 = 36191LLU;
	volatile uint64_t t5 = 55734LLU;

	t5 = ((x21^(x22%x23))|x24);

	if (t5 != 18446744073709516705LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x27 = 3713837LLU;
	volatile int16_t x28 = 3;

	t6 = ((x25^(x26%x27))|x28);

	if (t6 != 933499LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1LL;
	int32_t x30 = -1;
	uint32_t x31 = 943701943U;
	volatile int32_t x32 = INT32_MIN;

	t7 = ((x29^(x30%x31))|x32);

	if (t7 != -520159524LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -6083LL;
	uint8_t x34 = 1U;
	static uint16_t x35 = 4U;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = 32663327506330LL;

	t8 = ((x33^(x34%x35))|x36);

	if (t8 != -6084LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = 49;
	int8_t x38 = 1;
	static int64_t x39 = INT64_MIN;
	volatile int64_t t9 = 108946158576554263LL;

	t9 = ((x37^(x38%x39))|x40);

	if (t9 != -32720LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -2LL;
	int8_t x44 = 0;
	static volatile int64_t t10 = 51858741752LL;

	t10 = ((x41^(x42%x43))|x44);

	if (t10 != 126LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int8_t x46 = -4;
	int32_t x47 = -1;
	volatile int16_t x48 = INT16_MIN;
	int64_t t11 = -4LL;

	t11 = ((x45^(x46%x47))|x48);

	if (t11 != -32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 16756146125LLU;
	int32_t x50 = INT32_MIN;
	static volatile int32_t x52 = INT32_MIN;
	uint64_t t12 = 3095793197887497LLU;

	t12 = ((x49^(x50%x51))|x52);

	if (t12 != 18446744073285828557LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -59;
	uint64_t x54 = 64551392037745LLU;
	int32_t x56 = -1;
	uint64_t t13 = UINT64_MAX;

	t13 = ((x53^(x54%x55))|x56);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int8_t x58 = -1;
	static int32_t x60 = 1345940;

	t14 = ((x57^(x58%x59))|x60);

	if (t14 != -9223372036853429868LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -28;
	static int8_t x62 = INT8_MAX;
	int16_t x63 = INT16_MIN;
	static int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -999099;

	t15 = ((x61^(x62%x63))|x64);

	if (t15 != -101) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	volatile int32_t x66 = 51;
	volatile int64_t x67 = INT64_MIN;
	int8_t x68 = -6;
	volatile int64_t t16 = -6972656LL;

	t16 = ((x65^(x66%x67))|x68);

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MAX;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 180LLU;
	int16_t x76 = -15888;
	static volatile uint64_t t17 = 31101255785251538LLU;

	t17 = ((x73^(x74%x75))|x76);

	if (t17 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = 4;
	uint32_t x78 = UINT32_MAX;
	uint32_t x79 = 46U;
	uint32_t t18 = 43231173U;

	t18 = ((x77^(x78%x79))|x80);

	if (t18 != 2147483647U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x82 = 63327958U;
	volatile uint8_t x83 = UINT8_MAX;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = ((x81^(x82%x83))|x84);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	int32_t x87 = 627;
	uint32_t x88 = 19U;
	uint32_t t20 = 249U;

	t20 = ((x85^(x86%x87))|x88);

	if (t20 != 32659U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -1LL;
	volatile uint32_t x90 = 447779596U;

	t21 = ((x89^(x90%x91))|x92);

	if (t21 != -447779597LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	uint16_t x94 = UINT16_MAX;
	int64_t x95 = -1LL;
	int8_t x96 = 57;
	static volatile int64_t t22 = -2010449LL;

	t22 = ((x93^(x94%x95))|x96);

	if (t22 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = INT16_MIN;
	uint16_t x98 = 0U;
	uint64_t x100 = 284522643002093LLU;
	uint64_t t23 = 31916LLU;

	t23 = ((x97^(x98%x99))|x100);

	if (t23 != 18446744073709523693LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = INT8_MAX;
	volatile int8_t x102 = INT8_MIN;
	volatile uint64_t x103 = 89398379096408LLU;
	int32_t x104 = 126;
	volatile uint64_t t24 = 17997404479LLU;

	t24 = ((x101^(x102%x103))|x104);

	if (t24 != 14335819435647LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 13U;
	uint16_t x106 = 23U;
	uint16_t x107 = 6272U;
	volatile int8_t x108 = -1;
	int32_t t25 = -157618661;

	t25 = ((x105^(x106%x107))|x108);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = INT32_MAX;
	int64_t x112 = INT64_MIN;

	t26 = ((x109^(x110%x111))|x112);

	if (t26 != -9223372034707292175LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = 0;
	uint16_t x114 = UINT16_MAX;
	int64_t x115 = INT64_MAX;
	int16_t x116 = -1;
	volatile int64_t t27 = 843132035040289LL;

	t27 = ((x113^(x114%x115))|x116);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -36;
	volatile int8_t x122 = -1;
	volatile int32_t x123 = -1;
	int64_t t28 = 27387878580LL;

	t28 = ((x121^(x122%x123))|x124);

	if (t28 != -36LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 27264U;
	int8_t x126 = INT8_MIN;
	int8_t x127 = 3;
	static volatile int32_t x128 = -15515099;
	uint32_t t29 = 715U;

	t29 = ((x125^(x126%x127))|x128);

	if (t29 != 4294956927U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 7318U;
	int16_t x131 = -9;
	int32_t x132 = -2229;
	volatile uint64_t t30 = 2995015036582LLU;

	t30 = ((x129^(x130%x131))|x132);

	if (t30 != 18446744073709549419LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = INT32_MIN;
	static int64_t x136 = -1LL;
	volatile int64_t t31 = 25458LL;

	t31 = ((x133^(x134%x135))|x136);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x137 = 16U;
	static uint16_t x138 = 1U;
	volatile int8_t x140 = INT8_MIN;
	uint32_t t32 = 1086214U;

	t32 = ((x137^(x138%x139))|x140);

	if (t32 != 4294967185U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x141 = 42U;
	int64_t x142 = 671529137575LL;
	uint8_t x143 = 10U;
	uint8_t x144 = 51U;
	static int64_t t33 = -33918688358LL;

	t33 = ((x141^(x142%x143))|x144);

	if (t33 != 63LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x145 = 21;
	static int32_t x146 = -1;
	uint8_t x147 = 120U;
	uint64_t x148 = UINT64_MAX;

	t34 = ((x145^(x146%x147))|x148);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = -1;
	int64_t x151 = INT64_MIN;
	volatile int64_t t35 = 3990LL;

	t35 = ((x149^(x150%x151))|x152);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	static uint8_t x155 = 37U;
	int16_t x156 = 1607;
	int64_t t36 = 5LL;

	t36 = ((x153^(x154%x155))|x156);

	if (t36 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = 176540U;
	int32_t x158 = -1;
	int16_t x159 = 1;
	int32_t x160 = -1;

	t37 = ((x157^(x158%x159))|x160);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x165 = INT32_MIN;
	int64_t x166 = -1LL;
	uint64_t t38 = UINT64_MAX;

	t38 = ((x165^(x166%x167))|x168);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x169 = -1LL;
	int64_t x170 = -30211346LL;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = 21920U;
	volatile uint64_t t39 = 402608787763LLU;

	t39 = ((x169^(x170%x171))|x172);

	if (t39 != 30211505LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x174 = -900;
	int8_t x175 = -53;
	uint32_t x176 = 1507U;
	static uint32_t t40 = UINT32_MAX;

	t40 = ((x173^(x174%x175))|x176);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x178 = 22760U;
	uint8_t x179 = 49U;
	volatile uint64_t x180 = 436860697619504LLU;
	uint64_t t41 = 705LLU;

	t41 = ((x177^(x178%x179))|x180);

	if (t41 != 18445495010515205757LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x181 = 4041983;
	int32_t x183 = INT32_MIN;
	int64_t x184 = INT64_MAX;
	volatile int64_t t42 = -83535507705862LL;

	t42 = ((x181^(x182%x183))|x184);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x186 = 9393;
	int16_t x188 = -1;

	t43 = ((x185^(x186%x187))|x188);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x189 = INT8_MIN;
	int64_t x192 = -1LL;
	volatile int64_t t44 = -7452210608815LL;

	t44 = ((x189^(x190%x191))|x192);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x193 = 382263U;
	volatile int8_t x195 = -1;
	int64_t x196 = INT64_MIN;

	t45 = ((x193^(x194%x195))|x196);

	if (t45 != 9223372036855158071LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = UINT32_MAX;
	int32_t x198 = -490989790;
	int64_t x200 = INT64_MIN;
	volatile int64_t t46 = -9383LL;

	t46 = ((x197^(x198%x199))|x200);

	if (t46 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x201 = UINT64_MAX;
	int64_t x202 = 0LL;
	int16_t x203 = -2;
	int16_t x204 = INT16_MAX;
	uint64_t t47 = UINT64_MAX;

	t47 = ((x201^(x202%x203))|x204);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x205 = -1;
	volatile int32_t x207 = INT32_MAX;
	uint64_t t48 = 1238122881LLU;

	t48 = ((x205^(x206%x207))|x208);

	if (t48 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = 568;
	volatile int64_t x210 = -1508201LL;
	int64_t x211 = -1LL;
	volatile int64_t t49 = 666054050046LL;

	t49 = ((x209^(x210%x211))|x212);

	if (t49 != 569LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x214 = 1647299472722915621LL;
	volatile int64_t t50 = -177551LL;

	t50 = ((x213^(x214%x215))|x216);

	if (t50 != 4294963123LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -16;
	uint64_t x218 = 6365LLU;
	static volatile int16_t x219 = INT16_MAX;
	volatile int32_t x220 = 0;

	t51 = ((x217^(x218%x219))|x220);

	if (t51 != 18446744073709545261LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x221 = INT32_MIN;
	static int8_t x222 = INT8_MIN;
	int8_t x223 = 1;
	int32_t x224 = -1938571;
	static volatile int32_t t52 = -3006386;

	t52 = ((x221^(x222%x223))|x224);

	if (t52 != -1938571) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MAX;
	int8_t x226 = INT8_MAX;
	static int8_t x227 = INT8_MIN;
	volatile int64_t t53 = INT64_MAX;

	t53 = ((x225^(x226%x227))|x228);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x230 = 0U;
	static int8_t x232 = INT8_MAX;
	volatile int64_t t54 = 54553244LL;

	t54 = ((x229^(x230%x231))|x232);

	if (t54 != -2147483521LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = -1;
	int64_t x234 = INT64_MIN;
	int8_t x235 = INT8_MIN;
	int64_t x236 = 5829LL;
	volatile int64_t t55 = 222675330530359110LL;

	t55 = ((x233^(x234%x235))|x236);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	uint16_t x239 = 2U;
	static uint8_t x240 = 15U;
	int64_t t56 = -4992LL;

	t56 = ((x237^(x238%x239))|x240);

	if (t56 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MAX;
	static int8_t x242 = INT8_MIN;
	uint16_t x243 = 736U;
	volatile int64_t x244 = 21738876761714597LL;

	t57 = ((x241^(x242%x243))|x244);

	if (t57 != -20481LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = 21698U;
	int32_t x246 = 232930157;
	uint16_t x247 = UINT16_MAX;
	volatile int8_t x248 = INT8_MIN;
	int32_t t58 = 0;

	t58 = ((x245^(x246%x247))|x248);

	if (t58 != -115) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MAX;
	int32_t x250 = -2554554;
	int64_t t59 = -19338240996332LL;

	t59 = ((x249^(x250%x251))|x252);

	if (t59 != -9223372036854744391LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x254 = -12;
	uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MAX;
	volatile uint32_t t60 = 14832U;

	t60 = ((x253^(x254%x255))|x256);

	if (t60 != 4294943871U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = -1;
	uint16_t x258 = UINT16_MAX;
	static int16_t x259 = INT16_MIN;
	int16_t x260 = 950;

	t61 = ((x257^(x258%x259))|x260);

	if (t61 != -31818) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = INT32_MIN;
	uint64_t x262 = UINT64_MAX;
	static volatile int64_t x263 = INT64_MIN;
	static uint64_t t62 = UINT64_MAX;

	t62 = ((x261^(x262%x263))|x264);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -2;
	static volatile int64_t x266 = INT64_MAX;
	uint16_t x267 = 1846U;
	int32_t x268 = -1;
	int64_t t63 = 58LL;

	t63 = ((x265^(x266%x267))|x268);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MAX;
	volatile uint64_t x270 = UINT64_MAX;
	uint64_t x271 = 3LLU;
	uint64_t t64 = UINT64_MAX;

	t64 = ((x269^(x270%x271))|x272);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x275 = -1;
	volatile int64_t t65 = 63389626LL;

	t65 = ((x273^(x274%x275))|x276);

	if (t65 != 4424691469LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = 4050464965086759087LL;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MAX;
	static int8_t x280 = -1;

	t66 = ((x277^(x278%x279))|x280);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = UINT8_MAX;
	int32_t x283 = -81795;
	int8_t x284 = INT8_MAX;
	volatile uint32_t t67 = 422U;

	t67 = ((x281^(x282%x283))|x284);

	if (t67 != 81791U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = 347693923;
	volatile int8_t x287 = INT8_MAX;
	uint32_t x288 = 16926U;
	volatile int64_t t68 = 1865913280LL;

	t68 = ((x285^(x286%x287))|x288);

	if (t68 != 347693951LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 1208U;
	int8_t x291 = INT8_MAX;
	static int32_t x292 = INT32_MAX;
	volatile int32_t t69 = -12798908;

	t69 = ((x289^(x290%x291))|x292);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = 1011133LLU;
	int8_t x295 = -7;
	uint8_t x296 = UINT8_MAX;

	t70 = ((x293^(x294%x295))|x296);

	if (t70 != 1011199LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = 87;
	static volatile uint64_t x299 = 46535131089977LLU;
	static int16_t x300 = -769;
	uint64_t t71 = 466467215478547160LLU;

	t71 = ((x297^(x298%x299))|x300);

	if (t71 != 18446744073709550847LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MAX;
	static int64_t x303 = INT64_MIN;
	static volatile int8_t x304 = -1;
	int64_t t72 = -26101618252LL;

	t72 = ((x301^(x302%x303))|x304);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x306 = -1;
	volatile int64_t t73 = -59938LL;

	t73 = ((x305^(x306%x307))|x308);

	if (t73 != -2817LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MAX;
	static int16_t x310 = -9;
	static int32_t x311 = -1;
	static int64_t x312 = -214431LL;

	t74 = ((x309^(x310%x311))|x312);

	if (t74 != -214401LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MAX;
	uint32_t x314 = 4600438U;
	int64_t x315 = -3841761823225939LL;
	int32_t x316 = INT32_MIN;
	volatile int64_t t75 = 197194809253195428LL;

	t75 = ((x313^(x314%x315))|x316);

	if (t75 != -2142876279LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -920060082LL;
	volatile int64_t x318 = INT64_MIN;
	int64_t x319 = -1LL;
	static int8_t x320 = 0;
	int64_t t76 = -35965005231198LL;

	t76 = ((x317^(x318%x319))|x320);

	if (t76 != -920060082LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x323 = -1;
	int32_t x324 = INT32_MIN;

	t77 = ((x321^(x322%x323))|x324);

	if (t77 != -2147482073) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = -8;
	int32_t x327 = -1;
	int16_t x328 = INT16_MIN;
	volatile int64_t t78 = 33058693176129288LL;

	t78 = ((x325^(x326%x327))|x328);

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -1LL;
	int8_t x330 = INT8_MIN;
	volatile int16_t x332 = -1;
	int64_t t79 = -8299435000543LL;

	t79 = ((x329^(x330%x331))|x332);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = INT16_MAX;
	int8_t x334 = INT8_MIN;
	uint64_t x336 = 1080377800873043LLU;

	t80 = ((x333^(x334%x335))|x336);

	if (t80 != 18446744073709540479LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = UINT16_MAX;
	int8_t x338 = -1;
	uint8_t x339 = 113U;
	static volatile int32_t t81 = 706569;

	t81 = ((x337^(x338%x339))|x340);

	if (t81 != -65531) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	volatile int16_t x343 = -3;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = ((x341^(x342%x343))|x344);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = 1784990LLU;
	int64_t x347 = INT64_MIN;
	static uint32_t x348 = 157289763U;

	t83 = ((x345^(x346%x347))|x348);

	if (t83 != 159071715LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x350 = -13;
	int64_t x351 = -1LL;
	int32_t x352 = INT32_MAX;
	int64_t t84 = 3474891012LL;

	t84 = ((x349^(x350%x351))|x352);

	if (t84 != 2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = -117008812491LL;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = INT8_MIN;

	t85 = ((x353^(x354%x355))|x356);

	if (t85 != -54LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = -720;
	int32_t x358 = -1;
	uint16_t x359 = 572U;
	uint16_t x360 = 4U;
	volatile int32_t t86 = 430937;

	t86 = ((x357^(x358%x359))|x360);

	if (t86 != 719) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x365 = 833143U;
	volatile int64_t x366 = INT64_MIN;
	static volatile uint32_t x367 = UINT32_MAX;
	int16_t x368 = 58;

	t87 = ((x365^(x366%x367))|x368);

	if (t87 != -2146650497LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x372 = 35U;
	int32_t t88 = -1563;

	t88 = ((x369^(x370%x371))|x372);

	if (t88 != -32733) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = 12695U;
	uint32_t x374 = UINT32_MAX;
	volatile uint16_t x375 = UINT16_MAX;
	uint64_t t89 = 8256941041384140615LLU;

	t89 = ((x373^(x374%x375))|x376);

	if (t89 != 2358271LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = 1U;
	volatile int64_t t90 = -333122018380505LL;

	t90 = ((x377^(x378%x379))|x380);

	if (t90 != -32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MAX;
	int8_t x382 = INT8_MIN;
	uint64_t x383 = 1545LLU;
	uint8_t x384 = UINT8_MAX;
	uint64_t t91 = 13443LLU;

	t91 = ((x381^(x382%x383))|x384);

	if (t91 != 1279LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x385 = 60U;
	int64_t x386 = INT64_MAX;
	uint16_t x388 = 86U;
	int64_t t92 = 3LL;

	t92 = ((x385^(x386%x387))|x388);

	if (t92 != 94LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = 3454U;
	volatile int32_t x390 = INT32_MAX;
	static uint32_t t93 = 5U;

	t93 = ((x389^(x390%x391))|x392);

	if (t93 != 3135649938U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x393 = INT16_MIN;
	static int64_t x394 = 29188455988165LL;
	volatile int64_t t94 = -867732543691LL;

	t94 = ((x393^(x394%x395))|x396);

	if (t94 != -2005697585LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x397 = INT32_MIN;
	int8_t x400 = INT8_MIN;
	int64_t t95 = 11166943530281LL;

	t95 = ((x397^(x398%x399))|x400);

	if (t95 != -123LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x401 = -1;
	int32_t x402 = INT32_MAX;
	int16_t x403 = -5;
	volatile uint32_t t96 = 24715298U;

	t96 = ((x401^(x402%x403))|x404);

	if (t96 != 4294967293U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = INT32_MIN;
	uint64_t x406 = 119545888071049213LLU;
	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MAX;
	volatile uint64_t t97 = 88365930LLU;

	t97 = ((x405^(x406%x407))|x408);

	if (t97 != 18327198184055857151LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x409 = 14U;
	int16_t x410 = INT16_MIN;
	static int8_t x411 = INT8_MAX;
	int32_t x412 = INT32_MAX;

	t98 = ((x409^(x410%x411))|x412);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x413 = 4243U;
	int8_t x414 = 60;
	int32_t x415 = -7487331;
	int8_t x416 = 0;
	uint32_t t99 = 18833U;

	t99 = ((x413^(x414%x415))|x416);

	if (t99 != 4271U) { NG(); } else { ; }
	
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

