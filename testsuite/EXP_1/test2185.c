#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t0 = 17LLU;
int16_t x6 = 7743;
static volatile int32_t x12 = -12;
int64_t x17 = 11908LL;
static volatile int32_t x18 = -1;
static int16_t x20 = INT16_MIN;
int64_t t3 = -3955956855489439LL;
static int16_t x21 = INT16_MIN;
int16_t x24 = -1;
int32_t x25 = INT32_MAX;
int16_t x35 = INT16_MIN;
int32_t x36 = INT32_MIN;
volatile uint32_t t8 = 242U;
int16_t x46 = -1;
uint16_t x49 = UINT16_MAX;
int32_t x51 = -113914922;
uint64_t x53 = 3425039533260LLU;
int16_t x57 = 2;
uint32_t x69 = UINT32_MAX;
volatile uint64_t t17 = 987710LLU;
static uint8_t x80 = 105U;
static uint64_t t18 = 4557631566371679LLU;
uint8_t x81 = 7U;
int32_t x84 = 1078;
int16_t x86 = INT16_MAX;
volatile int64_t t21 = 191451491139205699LL;
static volatile int32_t x93 = -1;
int16_t x95 = INT16_MIN;
int32_t x101 = 1636728;
volatile int32_t t24 = 1;
int16_t x106 = -24;
int64_t t26 = 30484024693566LL;
static int16_t x117 = -1;
uint32_t t28 = 963U;
static int8_t x129 = -14;
int8_t x131 = 0;
int32_t x135 = INT32_MAX;
static int16_t x136 = 0;
int64_t x146 = -1LL;
int64_t x149 = 613658536LL;
static volatile int64_t x158 = INT64_MIN;
volatile int64_t t37 = 6700873982LL;
static int8_t x164 = INT8_MIN;
static int16_t x165 = INT16_MIN;
volatile uint64_t x166 = UINT64_MAX;
volatile int32_t t41 = -573578;
int64_t x179 = 25874870168LL;
int32_t x200 = -1;
static volatile uint64_t t46 = 9924076581059LLU;
static int64_t x201 = INT64_MAX;
int64_t x202 = INT64_MAX;
int64_t t48 = -535365862533910118LL;
static volatile uint64_t x215 = UINT64_MAX;
volatile uint64_t t49 = 2189602927894726LLU;
uint16_t x221 = 71U;
static int16_t x229 = INT16_MIN;
int64_t x231 = -212422058729064LL;
int8_t x232 = INT8_MIN;
static uint64_t t54 = 109778LLU;
uint8_t x238 = UINT8_MAX;
int64_t x249 = 1710546271155LL;
int32_t x255 = -1;
int16_t x270 = INT16_MIN;
static int64_t x271 = INT64_MAX;
static int64_t x277 = INT64_MIN;
uint32_t x278 = 51U;
static int8_t x285 = INT8_MIN;
int64_t x297 = INT64_MIN;
static volatile int32_t x298 = INT32_MAX;
int32_t x303 = INT32_MIN;
int64_t t70 = -330720LL;
int8_t x323 = -1;
static uint8_t x328 = 48U;
volatile uint64_t t73 = 1LLU;
uint16_t x331 = 10U;
int32_t t74 = -934451044;
int8_t x333 = INT8_MAX;
int16_t x336 = 6901;
volatile int32_t x339 = 7;
volatile int8_t x340 = INT8_MIN;
volatile int8_t x341 = INT8_MAX;
volatile int8_t x343 = -1;
int8_t x344 = -1;
int8_t x345 = INT8_MIN;
static volatile int16_t x346 = INT16_MIN;
static uint64_t x348 = 115382LLU;
static volatile int64_t x356 = -2LL;
volatile uint64_t t81 = 1558191925477122LLU;
int64_t x361 = INT64_MIN;
volatile uint64_t x363 = 33061204549554LLU;
uint64_t t82 = 6294463499384238LLU;
int16_t x369 = INT16_MAX;
volatile uint64_t t85 = 19686030LLU;
volatile uint8_t x377 = 24U;
static volatile uint64_t t87 = 1038990684LLU;
static uint64_t x385 = 2LLU;
static int8_t x394 = -1;
static uint64_t x395 = 728408023060LLU;
uint32_t x396 = 400210U;
int16_t x403 = INT16_MIN;
volatile uint32_t t93 = 3998U;
static int16_t x410 = -1524;
int32_t x411 = INT32_MIN;
volatile int64_t x413 = -9LL;
volatile int64_t t95 = 7481639340LL;
int64_t x420 = 746195450425008LL;
int8_t x422 = -1;
static uint16_t x424 = 8116U;
static volatile int64_t x429 = INT64_MIN;
uint64_t x433 = 253703733644719088LLU;
int8_t x436 = 3;
volatile uint64_t t99 = 849LLU;


void f0(void) {
	int64_t x1 = -1LL;
	int64_t x2 = 14337981719819350LL;
	uint64_t x3 = 29663747771LLU;
	int32_t x4 = -2659;

	t0 = (((x1^x2)^x3)+x4);

	if (t0 != 18432406066623122095LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint16_t x7 = 69U;
	int16_t x8 = -38;
	int32_t t1 = -1;

	t1 = (((x5^x6)^x7)+x8);

	if (t1 != -7724) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 21;
	int8_t x10 = INT8_MAX;
	int32_t x11 = INT32_MIN;
	volatile int32_t t2 = -1;

	t2 = (((x9^x10)^x11)+x12);

	if (t2 != -2147483554) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x19 = 11;

	t3 = (((x17^x18)^x19)+x20);

	if (t3 != -44688LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x22 = 98LLU;
	uint16_t x23 = 0U;
	volatile uint64_t t4 = 10043495353LLU;

	t4 = (((x21^x22)^x23)+x24);

	if (t4 != 18446744073709518945LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x26 = INT64_MAX;
	int16_t x27 = 28;
	uint16_t x28 = UINT16_MAX;
	volatile int64_t t5 = -94911061407LL;

	t5 = (((x25^x26)^x27)+x28);

	if (t5 != 9223372034707357723LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = -1;
	static uint64_t x30 = 1LLU;
	int8_t x31 = -3;
	int32_t x32 = 16625925;
	volatile uint64_t t6 = 11542LLU;

	t6 = (((x29^x30)^x31)+x32);

	if (t6 != 16625928LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -2;
	int16_t x34 = 0;
	volatile int32_t t7 = 0;

	t7 = (((x33^x34)^x35)+x36);

	if (t7 != -2147450882) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 6543U;
	volatile int32_t x38 = 609554812;
	uint32_t x39 = UINT32_MAX;
	uint16_t x40 = UINT16_MAX;

	t8 = (((x37^x38)^x39)+x40);

	if (t8 != 3685480203U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int16_t x42 = -1;
	uint64_t x43 = 3699169421951549LLU;
	int16_t x44 = -68;
	uint64_t t9 = 273478LLU;

	t9 = (((x41^x42)^x43)+x44);

	if (t9 != 18443044906413588985LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x47 = 25U;
	int32_t x48 = -1;
	volatile int32_t t10 = 128544;

	t10 = (((x45^x46)^x47)+x48);

	if (t10 != 101) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x50 = -1LL;
	volatile int16_t x52 = INT16_MAX;
	volatile int64_t t11 = -371151365419LL;

	t11 = (((x49^x50)^x51)+x52);

	if (t11 != 113986517LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = INT16_MAX;
	static int32_t x55 = -1;
	static int32_t x56 = INT32_MIN;
	static volatile uint64_t t12 = 9166893881710LLU;

	t12 = (((x53^x54)^x55)+x56);

	if (t12 != 18446740646522537164LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = 1;
	int8_t x59 = INT8_MIN;
	volatile uint8_t x60 = UINT8_MAX;
	int32_t t13 = -236205;

	t13 = (((x57^x58)^x59)+x60);

	if (t13 != 130) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MAX;
	static int64_t x62 = -1LL;
	uint32_t x63 = 138583166U;
	volatile uint32_t x64 = 14U;
	static int64_t t14 = 196112861848936LL;

	t14 = (((x61^x62)^x63)+x64);

	if (t14 != -9223372036716192628LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	static int64_t x66 = 0LL;
	uint32_t x67 = UINT32_MAX;
	volatile uint16_t x68 = UINT16_MAX;
	int64_t t15 = -1LL;

	t15 = (((x65^x66)^x67)+x68);

	if (t15 != 4294967295LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x70 = -168026;
	uint32_t x71 = 79638U;
	uint32_t x72 = UINT32_MAX;
	uint32_t t16 = 3U;

	t16 = (((x69^x70)^x71)+x72);

	if (t16 != 239438U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = -7796;
	uint64_t x74 = 266497141396LLU;
	int32_t x75 = INT32_MIN;
	volatile int8_t x76 = -1;

	t17 = (((x73^x74)^x75)+x76);

	if (t17 != 268226284311LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x77 = 5860LLU;
	int16_t x78 = -1;
	uint8_t x79 = 12U;

	t18 = (((x77^x78)^x79)+x80);

	if (t18 != 18446744073709545856LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x82 = -4;
	int32_t x83 = INT32_MAX;
	int32_t t19 = -41;

	t19 = (((x81^x82)^x83)+x84);

	if (t19 != -2147482566) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 104017171U;
	int64_t x87 = -2132695LL;
	int16_t x88 = -1;
	volatile int64_t t20 = 242099794LL;

	t20 = (((x85^x86)^x87)+x88);

	if (t20 != -101963836LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 27U;
	uint8_t x90 = UINT8_MAX;
	static int64_t x91 = 311126LL;
	static uint8_t x92 = 2U;

	t21 = (((x89^x90)^x91)+x92);

	if (t21 != 311220LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x94 = 3026484661776001746LLU;
	static uint64_t x96 = UINT64_MAX;
	volatile uint64_t t22 = 1466355366093217152LLU;

	t22 = (((x93^x94)^x95)+x96);

	if (t22 != 3026484661776012588LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = INT16_MIN;
	static int32_t x98 = 5;
	int8_t x99 = INT8_MIN;
	static int32_t x100 = -29658;
	int32_t t23 = 3505;

	t23 = (((x97^x98)^x99)+x100);

	if (t23 != 2987) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x102 = INT32_MIN;
	uint8_t x103 = 57U;
	static uint8_t x104 = 1U;

	t24 = (((x101^x102)^x103)+x104);

	if (t24 != -2145846974) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = -40;
	int32_t x107 = -1;
	int32_t x108 = -1;
	int32_t t25 = 244569593;

	t25 = (((x105^x106)^x107)+x108);

	if (t25 != -50) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	static int8_t x110 = INT8_MIN;
	static int8_t x111 = -3;
	int64_t x112 = -490122459285022LL;

	t26 = (((x109^x110)^x111)+x112);

	if (t26 != -490122459317665LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	uint8_t x114 = 33U;
	static int16_t x115 = -1;
	volatile int16_t x116 = -1224;
	int64_t t27 = -23636640LL;

	t27 = (((x113^x114)^x115)+x116);

	if (t27 != 9223372036854774550LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x118 = INT32_MIN;
	uint8_t x119 = UINT8_MAX;
	uint32_t x120 = 1U;

	t28 = (((x117^x118)^x119)+x120);

	if (t28 != 2147483393U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 14U;
	static uint64_t x122 = UINT64_MAX;
	int16_t x123 = -15;
	uint16_t x124 = UINT16_MAX;
	uint64_t t29 = 4843776148LLU;

	t29 = (((x121^x122)^x123)+x124);

	if (t29 != 65535LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1LL;
	int64_t x126 = 1089681595004258202LL;
	uint32_t x127 = 6421U;
	volatile int16_t x128 = -1;
	volatile int64_t t30 = -1LL;

	t30 = (((x125^x126)^x127)+x128);

	if (t30 != -1089681595004264081LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	uint16_t x132 = UINT16_MAX;
	static int32_t t31 = 15;

	t31 = (((x129^x130)^x131)+x132);

	if (t31 != 98289) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	static volatile int8_t x134 = 1;
	volatile int32_t t32 = -5549;

	t32 = (((x133^x134)^x135)+x136);

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MIN;
	volatile uint64_t x143 = UINT64_MAX;
	static volatile uint32_t x144 = 2398556U;
	volatile uint64_t t33 = 20076730720LLU;

	t33 = (((x141^x142)^x143)+x144);

	if (t33 != 2398555LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 628523762U;
	uint8_t x147 = 2U;
	int16_t x148 = -1130;
	static volatile int64_t t34 = 2987964824400578203LL;

	t34 = (((x145^x146)^x147)+x148);

	if (t34 != -628524891LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x150 = UINT64_MAX;
	int8_t x151 = -49;
	int8_t x152 = INT8_MIN;
	uint64_t t35 = 52243531963608LLU;

	t35 = (((x149^x150)^x151)+x152);

	if (t35 != 613658392LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x153 = -246;
	uint8_t x154 = UINT8_MAX;
	static int16_t x155 = -1;
	static volatile int64_t x156 = INT64_MIN;
	int64_t t36 = 381LL;

	t36 = (((x153^x154)^x155)+x156);

	if (t36 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 1491;
	uint16_t x159 = 323U;
	volatile uint8_t x160 = 1U;

	t37 = (((x157^x158)^x159)+x160);

	if (t37 != -9223372036854774639LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MAX;
	uint16_t x162 = UINT16_MAX;
	static volatile int8_t x163 = -1;
	volatile int64_t t38 = 2337LL;

	t38 = (((x161^x162)^x163)+x164);

	if (t38 != -9223372036854710401LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x167 = 13485LLU;
	static int64_t x168 = INT64_MIN;
	volatile uint64_t t39 = 501246613763083LLU;

	t39 = (((x165^x166)^x167)+x168);

	if (t39 != 9223372036854795090LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	static uint64_t x170 = 1776LLU;
	int16_t x171 = INT16_MIN;
	volatile int32_t x172 = INT32_MIN;
	static volatile uint64_t t40 = 10691LLU;

	t40 = (((x169^x170)^x171)+x172);

	if (t40 != 18446744071562033423LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x173 = 452;
	volatile int32_t x174 = INT32_MIN;
	uint8_t x175 = 29U;
	static int32_t x176 = -1;

	t41 = (((x173^x174)^x175)+x176);

	if (t41 != -2147483176) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 5U;
	uint64_t x178 = 891737539LLU;
	static uint8_t x180 = UINT8_MAX;
	volatile uint64_t t42 = 1011836454846681LLU;

	t42 = (((x177^x178)^x179)+x180);

	if (t42 != 26632125277LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MIN;
	volatile int64_t x186 = 87LL;
	static int8_t x187 = -10;
	uint16_t x188 = UINT16_MAX;
	int64_t t43 = 3895LL;

	t43 = (((x185^x186)^x187)+x188);

	if (t43 != 98208LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	static uint64_t x190 = UINT64_MAX;
	volatile uint16_t x191 = 98U;
	int16_t x192 = -397;
	uint64_t t44 = 762121192LLU;

	t44 = (((x189^x190)^x191)+x192);

	if (t44 != 2147483152LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -1LL;
	uint8_t x194 = 4U;
	uint64_t x195 = 265469837835LLU;
	volatile int64_t x196 = -1LL;
	uint64_t t45 = 13171LLU;

	t45 = (((x193^x194)^x195)+x196);

	if (t45 != 18446743808239713775LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -50;
	uint64_t x198 = 1035889025900360LLU;
	volatile uint64_t x199 = 943LLU;

	t46 = (((x197^x198)^x199)+x200);

	if (t46 != 18445708184683651880LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x203 = 13LLU;
	int16_t x204 = INT16_MIN;
	volatile uint64_t t47 = 4130391004694951999LLU;

	t47 = (((x201^x202)^x203)+x204);

	if (t47 != 18446744073709518861LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x205 = INT16_MIN;
	static int32_t x206 = 13855;
	volatile int64_t x207 = -1LL;
	int64_t x208 = INT64_MIN;

	t48 = (((x205^x206)^x207)+x208);

	if (t48 != -9223372036854756896LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = 1894001LL;
	int16_t x214 = 0;
	uint32_t x216 = 23U;

	t49 = (((x213^x214)^x215)+x216);

	if (t49 != 18446744073707657637LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MAX;
	static uint32_t x218 = 219324539U;
	int32_t x219 = INT32_MIN;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t50 = 57832231006LLU;

	t50 = (((x217^x218)^x219)+x220);

	if (t50 != 2366824323LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x222 = UINT32_MAX;
	volatile int64_t x223 = INT64_MIN;
	static int16_t x224 = INT16_MIN;
	volatile int64_t t51 = -1LL;

	t51 = (((x221^x222)^x223)+x224);

	if (t51 != -9223372032559841352LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x225 = INT64_MAX;
	int64_t x226 = -1LL;
	int64_t x227 = INT64_MIN;
	static int16_t x228 = INT16_MIN;
	int64_t t52 = 87LL;

	t52 = (((x225^x226)^x227)+x228);

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x230 = -1;
	static volatile int64_t t53 = 33906000425716LL;

	t53 = (((x229^x230)^x231)+x232);

	if (t53 != -212422058713625LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x233 = UINT32_MAX;
	volatile uint16_t x234 = 28854U;
	int16_t x235 = -1;
	static uint64_t x236 = 44343401894431LLU;

	t54 = (((x233^x234)^x235)+x236);

	if (t54 != 44343401923285LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x237 = 965;
	int64_t x239 = INT64_MIN;
	int8_t x240 = -1;
	int64_t t55 = 3842LL;

	t55 = (((x237^x238)^x239)+x240);

	if (t55 != -9223372036854774983LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x241 = -1;
	int16_t x242 = INT16_MIN;
	static uint16_t x243 = 1195U;
	int16_t x244 = INT16_MAX;
	volatile int32_t t56 = -5772862;

	t56 = (((x241^x242)^x243)+x244);

	if (t56 != 64339) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 6U;
	uint16_t x246 = 5299U;
	int32_t x247 = -1;
	int16_t x248 = INT16_MIN;
	volatile int32_t t57 = -14720;

	t57 = (((x245^x246)^x247)+x248);

	if (t57 != -38070) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x250 = 260714;
	static uint32_t x251 = 292457287U;
	int8_t x252 = 1;
	int64_t t58 = -1050430275289LL;

	t58 = (((x249^x250)^x251)+x252);

	if (t58 != 1710838631071LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MAX;
	static uint64_t x256 = UINT64_MAX;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x253^x254)^x255)+x256);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x257 = 960U;
	int16_t x258 = INT16_MIN;
	uint64_t x259 = 8887909LLU;
	int16_t x260 = INT16_MAX;
	volatile uint64_t t60 = 255509448LLU;

	t60 = (((x257^x258)^x259)+x260);

	if (t60 != 4286094756LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = INT64_MAX;
	int32_t x266 = INT32_MAX;
	static uint32_t x267 = 2U;
	int32_t x268 = INT32_MIN;
	int64_t t61 = 1571564688LL;

	t61 = (((x265^x266)^x267)+x268);

	if (t61 != 9223372032559808514LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = 14;
	int64_t x272 = -1LL;
	volatile int64_t t62 = 147412142880496LL;

	t62 = (((x269^x270)^x271)+x272);

	if (t62 != -9223372036854743056LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x279 = 22LLU;
	static uint16_t x280 = 29942U;
	volatile uint64_t t63 = 25059083985LLU;

	t63 = (((x277^x278)^x279)+x280);

	if (t63 != 9223372036854805787LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x281 = INT64_MIN;
	int32_t x282 = -1;
	uint32_t x283 = 2120748U;
	int64_t x284 = -43195LL;
	int64_t t64 = 32035478119304071LL;

	t64 = (((x281^x282)^x283)+x284);

	if (t64 != 9223372036852611864LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x286 = 4;
	int16_t x287 = -1;
	uint64_t x288 = UINT64_MAX;
	uint64_t t65 = 2089LLU;

	t65 = (((x285^x286)^x287)+x288);

	if (t65 != 122LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = 21433976LL;
	int8_t x290 = INT8_MAX;
	uint16_t x291 = 16U;
	int32_t x292 = INT32_MIN;
	static int64_t t66 = 619672LL;

	t66 = (((x289^x290)^x291)+x292);

	if (t66 != -2126049769LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x293 = -1;
	uint64_t x294 = 357137LLU;
	int8_t x295 = INT8_MIN;
	int64_t x296 = -1LL;
	static volatile uint64_t t67 = 871629LLU;

	t67 = (((x293^x294)^x295)+x296);

	if (t67 != 357229LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x299 = -1;
	int32_t x300 = INT32_MIN;
	int64_t t68 = -1600648188LL;

	t68 = (((x297^x298)^x299)+x300);

	if (t68 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = INT16_MIN;
	volatile int32_t x302 = -4804;
	int16_t x304 = INT16_MAX;
	volatile int32_t t69 = 2761644;

	t69 = (((x301^x302)^x303)+x304);

	if (t69 != -2147422917) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x305 = UINT32_MAX;
	uint8_t x306 = UINT8_MAX;
	uint8_t x307 = 0U;
	int64_t x308 = INT64_MIN;

	t70 = (((x305^x306)^x307)+x308);

	if (t70 != -9223372032559808768LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = -1;
	uint16_t x318 = 21257U;
	static int32_t x319 = -109819915;
	volatile int64_t x320 = -56113467927767LL;
	int64_t t71 = -31011LL;

	t71 = (((x317^x318)^x319)+x320);

	if (t71 != -56113358094804LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x321 = 231U;
	volatile int32_t x322 = INT32_MIN;
	int64_t x324 = -1LL;
	static volatile int64_t t72 = -8419LL;

	t72 = (((x321^x322)^x323)+x324);

	if (t72 != 2147483415LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = -12358;
	int16_t x326 = INT16_MAX;
	uint64_t x327 = UINT64_MAX;

	t73 = (((x325^x326)^x327)+x328);

	if (t73 != 20458LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x329 = 31U;
	static volatile int8_t x330 = -5;
	static volatile int8_t x332 = 11;

	t74 = (((x329^x330)^x331)+x332);

	if (t74 != -7) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x334 = 1067521261LL;
	volatile uint64_t x335 = 40213279325842128LLU;
	uint64_t t75 = 49610300712683610LLU;

	t75 = (((x333^x334)^x335)+x336);

	if (t75 != 40213278610790711LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x337 = 1951765027758738195LLU;
	uint8_t x338 = 2U;
	volatile uint64_t t76 = 1674LLU;

	t76 = (((x337^x338)^x339)+x340);

	if (t76 != 1951765027758738070LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x342 = INT16_MAX;
	static int32_t t77 = -4422;

	t77 = (((x341^x342)^x343)+x344);

	if (t77 != -32642) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x347 = 3U;
	volatile uint64_t t78 = 250431327084427974LLU;

	t78 = (((x345^x346)^x347)+x348);

	if (t78 != 148025LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x349 = UINT8_MAX;
	uint16_t x350 = 4017U;
	volatile int16_t x351 = 0;
	int32_t x352 = -874413;
	int32_t t79 = -840719;

	t79 = (((x349^x350)^x351)+x352);

	if (t79 != -870495) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x353 = 1U;
	int64_t x354 = INT64_MIN;
	static int64_t x355 = INT64_MIN;
	volatile int64_t t80 = 1648257144085LL;

	t80 = (((x353^x354)^x355)+x356);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MAX;
	int64_t x358 = -1LL;
	uint64_t x359 = 824805997843479LLU;
	int16_t x360 = INT16_MIN;

	t81 = (((x357^x358)^x359)+x360);

	if (t81 != 18445919267711675287LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x362 = INT8_MAX;
	int16_t x364 = 454;

	t82 = (((x361^x362)^x363)+x364);

	if (t82 != 9223405098059325843LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x365 = -9;
	int32_t x366 = -148884346;
	uint8_t x367 = UINT8_MAX;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t83 = -1350;

	t83 = (((x365^x366)^x367)+x368);

	if (t83 != 148949901) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x370 = -7;
	int16_t x371 = -1002;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t84 = 27LLU;

	t84 = (((x369^x370)^x371)+x372);

	if (t84 != 31759LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = 3;
	int8_t x374 = INT8_MIN;
	static uint64_t x375 = UINT64_MAX;
	static uint8_t x376 = UINT8_MAX;

	t85 = (((x373^x374)^x375)+x376);

	if (t85 != 379LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x378 = -1LL;
	int8_t x379 = -1;
	volatile int32_t x380 = INT32_MIN;
	int64_t t86 = -2765183402008377LL;

	t86 = (((x377^x378)^x379)+x380);

	if (t86 != -2147483624LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x381 = INT16_MAX;
	uint64_t x382 = 7819LLU;
	uint32_t x383 = 1185884549U;
	int32_t x384 = 0;

	t87 = (((x381^x382)^x383)+x384);

	if (t87 != 1185892593LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x386 = INT16_MAX;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = 857U;
	static uint64_t t88 = 481399223714938716LLU;

	t88 = (((x385^x386)^x387)+x388);

	if (t88 != 854LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = INT8_MAX;
	int16_t x390 = INT16_MAX;
	int8_t x391 = INT8_MAX;
	int32_t x392 = -5986793;
	int32_t t89 = 2;

	t89 = (((x389^x390)^x391)+x392);

	if (t89 != -5954026) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x393 = INT8_MAX;
	volatile uint64_t t90 = 537044987563338LLU;

	t90 = (((x393^x394)^x395)+x396);

	if (t90 != 18446743345301928678LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x397 = 2;
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MIN;
	uint8_t x400 = 0U;
	int64_t t91 = -3866923198LL;

	t91 = (((x397^x398)^x399)+x400);

	if (t91 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = INT32_MIN;
	static uint32_t x402 = 8726599U;
	int32_t x404 = 185;
	uint32_t t92 = 1766U;

	t92 = (((x401^x402)^x403)+x404);

	if (t92 != 2138745088U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MIN;
	uint32_t x406 = UINT32_MAX;
	volatile int16_t x407 = -53;
	int16_t x408 = -1;

	t93 = (((x405^x406)^x407)+x408);

	if (t93 != 4294934579U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x412 = INT8_MIN;
	uint64_t t94 = 98550290325931582LLU;

	t94 = (((x409^x410)^x411)+x412);

	if (t94 != 18446744071562069363LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x414 = -1;
	int64_t x415 = 0LL;
	int64_t x416 = -127LL;

	t95 = (((x413^x414)^x415)+x416);

	if (t95 != -119LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x417 = UINT16_MAX;
	volatile int8_t x418 = -1;
	static int8_t x419 = -1;
	volatile int64_t t96 = -63098014LL;

	t96 = (((x417^x418)^x419)+x420);

	if (t96 != 746195450490543LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = 13;
	int64_t x423 = -1LL;
	volatile int64_t t97 = 75034016004LL;

	t97 = (((x421^x422)^x423)+x424);

	if (t97 != 8129LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x430 = UINT64_MAX;
	int64_t x431 = 0LL;
	int64_t x432 = -1LL;
	static volatile uint64_t t98 = 66976LLU;

	t98 = (((x429^x430)^x431)+x432);

	if (t98 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x434 = INT16_MAX;
	static int64_t x435 = INT64_MIN;

	t99 = (((x433^x434)^x435)+x436);

	if (t99 != 9477075770499468306LLU) { NG(); } else { ; }
	
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

