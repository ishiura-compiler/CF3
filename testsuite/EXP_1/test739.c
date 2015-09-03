#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int16_t x4 = -20;
int32_t t1 = 1415104;
static uint8_t x12 = UINT8_MAX;
int32_t x13 = INT32_MIN;
int8_t x15 = INT8_MIN;
int32_t x16 = INT32_MIN;
static volatile int8_t x25 = INT8_MIN;
volatile int32_t x27 = -17372;
volatile int8_t x36 = INT8_MIN;
int32_t t8 = 23920181;
int64_t x37 = INT64_MIN;
static volatile int64_t x38 = -1LL;
uint8_t x43 = 2U;
uint16_t x48 = 106U;
volatile int32_t t11 = 786;
volatile int32_t x59 = INT32_MAX;
int8_t x60 = 47;
int8_t x64 = INT8_MAX;
static volatile uint64_t t15 = 315LLU;
int16_t x66 = INT16_MIN;
volatile int32_t t16 = -11843363;
int16_t x69 = -1;
volatile int16_t x70 = -4;
volatile uint16_t x72 = UINT16_MAX;
int16_t x73 = INT16_MIN;
int32_t x74 = -13;
volatile int64_t t19 = -791LL;
uint8_t x82 = UINT8_MAX;
uint8_t x83 = 12U;
static int32_t t20 = -60518;
static uint8_t x85 = 23U;
int32_t x92 = INT32_MAX;
int64_t x98 = 130882834904047LL;
static int8_t x103 = INT8_MIN;
volatile uint64_t x105 = UINT64_MAX;
uint8_t x109 = 0U;
int32_t x119 = INT32_MIN;
int8_t x120 = INT8_MIN;
volatile uint16_t x124 = 10207U;
volatile uint64_t t31 = 1237377503750793LLU;
int64_t x140 = 34489LL;
uint8_t x144 = UINT8_MAX;
uint32_t x154 = 141U;
int64_t x157 = -1LL;
uint8_t x160 = UINT8_MAX;
uint8_t x161 = 0U;
static volatile int16_t x164 = -1;
int8_t x170 = 1;
static uint64_t t40 = 44067652LLU;
int64_t x173 = 116LL;
int32_t x185 = -50978;
volatile uint8_t x187 = 30U;
uint64_t t44 = 185486867134152519LLU;
volatile int32_t t46 = -15798678;
int64_t x201 = 7442229348LL;
uint16_t x211 = 394U;
volatile int64_t t49 = -167639LL;
volatile int32_t t50 = -1689;
static int8_t x218 = -1;
int64_t t54 = -15967514000214464LL;
int64_t x249 = INT64_MIN;
volatile int64_t x255 = INT64_MAX;
volatile int8_t x256 = 2;
int8_t x258 = -1;
static uint8_t x262 = 40U;
int64_t t62 = INT64_MIN;
int64_t t63 = -15164967353LL;
volatile uint64_t t64 = 2042367866LLU;
volatile uint32_t x276 = 3232U;
uint32_t t65 = 16615460U;
static int32_t t66 = -3174994;
volatile int64_t x287 = INT64_MAX;
int32_t x288 = INT32_MIN;
uint32_t x289 = 360U;
uint8_t x291 = 28U;
int8_t x292 = INT8_MAX;
int64_t x299 = INT64_MIN;
volatile int64_t t71 = -887712248888571669LL;
uint32_t x305 = UINT32_MAX;
uint64_t t73 = 10511LLU;
int64_t x310 = -704916119818LL;
static int16_t x312 = -1;
int16_t x315 = -1;
int16_t x322 = INT16_MAX;
volatile int32_t t78 = -432;
static int32_t x331 = -25314;
int8_t x333 = INT8_MIN;
volatile int64_t x339 = -494153278964LL;
int16_t x340 = -1;
volatile uint64_t x341 = 3906493566354619938LLU;
uint16_t x355 = UINT16_MAX;
uint16_t x359 = UINT16_MAX;
int8_t x360 = -1;
int32_t x369 = 11663832;
volatile int64_t x372 = INT64_MAX;
int16_t x374 = INT16_MIN;
int64_t x379 = -8877LL;
static int32_t x380 = INT32_MAX;
static int64_t t91 = -637692888LL;
uint8_t x392 = 49U;
uint32_t x393 = 11397U;
static volatile int16_t x396 = -1;
int8_t x397 = INT8_MAX;
volatile int8_t x399 = -1;
int64_t t94 = -6LL;
volatile int32_t t95 = -6;
uint16_t x405 = 105U;
static volatile int32_t t97 = 54694866;
uint64_t x413 = 1235879LLU;
volatile uint64_t t98 = 12461690LLU;


void f0(void) {
	int32_t x1 = -1;
	volatile int8_t x3 = INT8_MIN;
	volatile int32_t t0 = 107380;

	t0 = (((x1%x2)%x3)&x4);

	if (t0 != -20) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	int32_t x6 = 67622823;
	static int16_t x7 = -5;
	volatile int16_t x8 = 1175;

	t1 = (((x5%x6)%x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 6;
	int32_t x10 = INT32_MAX;
	volatile uint16_t x11 = UINT16_MAX;
	static int32_t t2 = -260533;

	t2 = (((x9%x10)%x11)&x12);

	if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	static int64_t t3 = -96LL;

	t3 = (((x13%x14)%x15)&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	int32_t x18 = -799;
	int16_t x19 = INT16_MAX;
	int32_t x20 = 92;
	volatile int32_t t4 = 2;

	t4 = (((x17%x18)%x19)&x20);

	if (t4 != 92) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MAX;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -182;

	t5 = (((x21%x22)%x23)&x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -723321;
	static uint32_t x28 = UINT32_MAX;
	volatile uint32_t t6 = 28U;

	t6 = (((x25%x26)%x27)&x28);

	if (t6 != 4294967168U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -548155;
	int8_t x30 = -1;
	static volatile int32_t x31 = -1;
	uint16_t x32 = 23436U;
	volatile int32_t t7 = -581;

	t7 = (((x29%x30)%x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 5180U;
	int8_t x34 = INT8_MIN;
	uint8_t x35 = UINT8_MAX;

	t8 = (((x33%x34)%x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x39 = INT32_MIN;
	int64_t x40 = -1LL;
	static volatile int64_t t9 = -6LL;

	t9 = (((x37%x38)%x39)&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	uint8_t x42 = 97U;
	int16_t x44 = -1;
	volatile int32_t t10 = 789600;

	t10 = (((x41%x42)%x43)&x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int8_t x46 = -1;
	int32_t x47 = -1;

	t11 = (((x45%x46)%x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 653733LL;
	uint8_t x50 = 26U;
	uint32_t x51 = 309776324U;
	uint8_t x52 = 25U;
	int64_t t12 = 16762LL;

	t12 = (((x49%x50)%x51)&x52);

	if (t12 != 9LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = INT8_MIN;
	static volatile int8_t x55 = INT8_MIN;
	volatile int64_t x56 = INT64_MAX;
	int64_t t13 = 5521062LL;

	t13 = (((x53%x54)%x55)&x56);

	if (t13 != 127LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	static int16_t x58 = INT16_MIN;
	int32_t t14 = 1;

	t14 = (((x57%x58)%x59)&x60);

	if (t14 != 47) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int8_t x62 = INT8_MIN;
	uint64_t x63 = UINT64_MAX;

	t15 = (((x61%x62)%x63)&x64);

	if (t15 != 127LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = 23U;

	t16 = (((x65%x66)%x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x71 = -3625900565037513LL;
	static volatile int64_t t17 = 1706935138062882087LL;

	t17 = (((x69%x70)%x71)&x72);

	if (t17 != 65535LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x75 = -3;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = -875599748;

	t18 = (((x73%x74)%x75)&x76);

	if (t18 != 2147483646) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int64_t x78 = -528199LL;
	uint32_t x79 = 20285U;
	static volatile uint32_t x80 = 6281261U;

	t19 = (((x77%x78)%x79)&x80);

	if (t19 != 6281261LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 124U;
	int16_t x84 = INT16_MIN;

	t20 = (((x81%x82)%x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x86 = 1034LLU;
	volatile int32_t x87 = INT32_MIN;
	static int8_t x88 = -1;
	uint64_t t21 = 144421286174041462LLU;

	t21 = (((x85%x86)%x87)&x88);

	if (t21 != 23LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	volatile int8_t x90 = INT8_MAX;
	int32_t x91 = 670;
	volatile int64_t t22 = 0LL;

	t22 = (((x89%x90)%x91)&x92);

	if (t22 != 2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -38LL;
	int32_t x94 = INT32_MAX;
	volatile int16_t x95 = -1;
	int64_t x96 = INT64_MIN;
	int64_t t23 = -42363LL;

	t23 = (((x93%x94)%x95)&x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MAX;
	volatile int8_t x99 = -1;
	static int64_t x100 = -141981779269142835LL;
	static volatile int64_t t24 = -3LL;

	t24 = (((x97%x98)%x99)&x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 1982638271472825LLU;
	int32_t x102 = INT32_MIN;
	uint32_t x104 = UINT32_MAX;
	uint64_t t25 = 89842LLU;

	t25 = (((x101%x102)%x103)&x104);

	if (t25 != 4058227897LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x106 = 4;
	static uint64_t x107 = 8018560968138LLU;
	uint16_t x108 = 3055U;
	uint64_t t26 = 1016300375871958887LLU;

	t26 = (((x105%x106)%x107)&x108);

	if (t26 != 3LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MIN;
	uint32_t x111 = UINT32_MAX;
	volatile int8_t x112 = INT8_MIN;
	volatile uint32_t t27 = 106822315U;

	t27 = (((x109%x110)%x111)&x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -1;
	int64_t x118 = INT64_MAX;
	volatile int64_t t28 = -265631616LL;

	t28 = (((x117%x118)%x119)&x120);

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x121 = 1U;
	static int64_t x122 = -63895621LL;
	int32_t x123 = -1604887;
	static volatile int64_t t29 = -1358LL;

	t29 = (((x121%x122)%x123)&x124);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	static uint8_t x126 = 70U;
	int8_t x127 = 62;
	int16_t x128 = -203;
	static volatile int32_t t30 = -70;

	t30 = (((x125%x126)%x127)&x128);

	if (t30 != 5) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = UINT64_MAX;
	int32_t x130 = INT32_MIN;
	static int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MAX;

	t31 = (((x129%x130)%x131)&x132);

	if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -14291;
	static volatile int64_t x134 = -95505674047886LL;
	uint64_t x135 = UINT64_MAX;
	uint32_t x136 = 36U;
	uint64_t t32 = 15171LLU;

	t32 = (((x133%x134)%x135)&x136);

	if (t32 != 36LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = 1675102LL;
	int16_t x138 = INT16_MIN;
	static int8_t x139 = -1;
	static int64_t t33 = -6LL;

	t33 = (((x137%x138)%x139)&x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -1;
	static uint32_t x142 = 199U;
	uint8_t x143 = 7U;
	volatile uint32_t t34 = 2480U;

	t34 = (((x141%x142)%x143)&x144);

	if (t34 != 3U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = 27;
	int8_t x150 = -1;
	int16_t x151 = -1;
	uint16_t x152 = 3U;
	static int32_t t35 = -760;

	t35 = (((x149%x150)%x151)&x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x153 = 1926U;
	int64_t x155 = INT64_MIN;
	volatile int16_t x156 = -1194;
	int64_t t36 = -5040168LL;

	t36 = (((x153%x154)%x155)&x156);

	if (t36 != 84LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x158 = -1LL;
	uint16_t x159 = 4U;
	int64_t t37 = -10991809099830LL;

	t37 = (((x157%x158)%x159)&x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x162 = -1;
	static uint64_t x163 = UINT64_MAX;
	volatile uint64_t t38 = 650025324632LLU;

	t38 = (((x161%x162)%x163)&x164);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = INT64_MAX;
	static int64_t x166 = INT64_MIN;
	static uint16_t x167 = UINT16_MAX;
	static int8_t x168 = INT8_MIN;
	volatile int64_t t39 = -155615485055818527LL;

	t39 = (((x165%x166)%x167)&x168);

	if (t39 != 32640LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = -28;
	uint64_t x171 = 12965005040LLU;
	int64_t x172 = INT64_MIN;

	t40 = (((x169%x170)%x171)&x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x174 = 8U;
	static volatile uint32_t x175 = UINT32_MAX;
	int16_t x176 = INT16_MIN;
	volatile int64_t t41 = 1673661788LL;

	t41 = (((x173%x174)%x175)&x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x177 = -3;
	int32_t x178 = INT32_MIN;
	uint16_t x179 = UINT16_MAX;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t42 = 4;

	t42 = (((x177%x178)%x179)&x180);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x181 = UINT64_MAX;
	static uint8_t x182 = 25U;
	int16_t x183 = INT16_MIN;
	uint32_t x184 = UINT32_MAX;
	uint64_t t43 = 75767633885870LLU;

	t43 = (((x181%x182)%x183)&x184);

	if (t43 != 15LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x186 = 261184666820LLU;
	static uint8_t x188 = 9U;

	t44 = (((x185%x186)%x187)&x188);

	if (t44 != 8LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = INT16_MIN;
	uint32_t x190 = 1488024U;
	uint16_t x191 = 929U;
	int8_t x192 = -1;
	static uint32_t t45 = 4U;

	t45 = (((x189%x190)%x191)&x192);

	if (t45 != 249U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = INT16_MIN;
	static int16_t x199 = INT16_MIN;
	static int16_t x200 = INT16_MAX;

	t46 = (((x197%x198)%x199)&x200);

	if (t46 != 32640) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x202 = 9U;
	volatile uint32_t x203 = UINT32_MAX;
	uint32_t x204 = 335066U;
	int64_t t47 = 548655144LL;

	t47 = (((x201%x202)%x203)&x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x205 = UINT8_MAX;
	int32_t x206 = -382;
	int64_t x207 = INT64_MAX;
	uint64_t x208 = 3495286045038465519LLU;
	uint64_t t48 = 1172044853551210864LLU;

	t48 = (((x205%x206)%x207)&x208);

	if (t48 != 239LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = -2055104143326LL;
	int16_t x210 = INT16_MAX;
	int32_t x212 = INT32_MAX;

	t49 = (((x209%x210)%x211)&x212);

	if (t49 != 2147483395LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	int16_t x215 = 293;
	static volatile int8_t x216 = INT8_MIN;

	t50 = (((x213%x214)%x215)&x216);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x217 = 142U;
	int8_t x219 = 1;
	int64_t x220 = INT64_MAX;
	int64_t t51 = -518178LL;

	t51 = (((x217%x218)%x219)&x220);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x221 = 13;
	static volatile int8_t x222 = -1;
	volatile int32_t x223 = INT32_MIN;
	int32_t x224 = -1;
	int32_t t52 = -1;

	t52 = (((x221%x222)%x223)&x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = 15U;
	volatile uint32_t x226 = 4026U;
	int8_t x227 = -1;
	uint16_t x228 = 188U;
	volatile uint32_t t53 = 2362831U;

	t53 = (((x225%x226)%x227)&x228);

	if (t53 != 12U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x229 = UINT32_MAX;
	volatile int64_t x230 = -16LL;
	int8_t x231 = -1;
	uint32_t x232 = 2874U;

	t54 = (((x229%x230)%x231)&x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = INT64_MIN;
	int8_t x234 = INT8_MAX;
	uint16_t x235 = 46U;
	int8_t x236 = INT8_MIN;
	int64_t t55 = -7404497LL;

	t55 = (((x233%x234)%x235)&x236);

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	uint64_t x239 = UINT64_MAX;
	static int32_t x240 = 82352;
	uint64_t t56 = 0LLU;

	t56 = (((x237%x238)%x239)&x240);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;
	static volatile int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MIN;
	static int64_t t57 = 535524544214494364LL;

	t57 = (((x241%x242)%x243)&x244);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = -1LL;
	uint32_t x246 = 16537U;
	static int32_t x247 = INT32_MIN;
	int16_t x248 = INT16_MIN;
	static volatile int64_t t58 = -1379600176259363LL;

	t58 = (((x245%x246)%x247)&x248);

	if (t58 != -32768LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x250 = INT8_MAX;
	uint16_t x251 = UINT16_MAX;
	int16_t x252 = INT16_MIN;
	volatile int64_t t59 = 27819036LL;

	t59 = (((x249%x250)%x251)&x252);

	if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = -1;
	uint16_t x254 = 86U;
	volatile int64_t t60 = -12LL;

	t60 = (((x253%x254)%x255)&x256);

	if (t60 != 2LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x257 = 3U;
	uint8_t x259 = 14U;
	uint8_t x260 = UINT8_MAX;
	volatile uint32_t t61 = 2857U;

	t61 = (((x257%x258)%x259)&x260);

	if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x261 = -1;
	uint16_t x263 = UINT16_MAX;
	int64_t x264 = INT64_MIN;

	t62 = (((x261%x262)%x263)&x264);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	uint32_t x266 = 35568U;
	int8_t x267 = -6;
	int8_t x268 = 13;

	t63 = (((x265%x266)%x267)&x268);

	if (t63 != 12LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = UINT16_MAX;
	int8_t x270 = 1;
	static volatile uint64_t x271 = UINT64_MAX;
	uint16_t x272 = UINT16_MAX;

	t64 = (((x269%x270)%x271)&x272);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MIN;
	uint16_t x275 = 1130U;

	t65 = (((x273%x274)%x275)&x276);

	if (t65 != 1056U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MAX;
	static volatile int32_t x278 = 4829;
	int16_t x279 = -1;
	static volatile int8_t x280 = INT8_MAX;

	t66 = (((x277%x278)%x279)&x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x281 = UINT16_MAX;
	uint8_t x282 = 6U;
	volatile int64_t x283 = -92325713919LL;
	uint8_t x284 = UINT8_MAX;
	int64_t t67 = 15077LL;

	t67 = (((x281%x282)%x283)&x284);

	if (t67 != 3LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = -1LL;
	int32_t x286 = INT32_MAX;
	int64_t t68 = -108305LL;

	t68 = (((x285%x286)%x287)&x288);

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x290 = INT32_MIN;
	uint32_t t69 = 0U;

	t69 = (((x289%x290)%x291)&x292);

	if (t69 != 24U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x293 = INT8_MIN;
	volatile uint64_t x294 = UINT64_MAX;
	volatile int64_t x295 = INT64_MAX;
	static volatile int8_t x296 = INT8_MAX;
	static uint64_t t70 = 39LLU;

	t70 = (((x293%x294)%x295)&x296);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = -1LL;
	static int64_t x300 = INT64_MIN;

	t71 = (((x297%x298)%x299)&x300);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 21257659U;
	int8_t x302 = INT8_MIN;
	uint64_t x303 = 114306609416LLU;
	int16_t x304 = -1;
	volatile uint64_t t72 = 16248118558490LLU;

	t72 = (((x301%x302)%x303)&x304);

	if (t72 != 21257659LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x306 = INT16_MAX;
	uint32_t x307 = 4U;
	uint64_t x308 = UINT64_MAX;

	t73 = (((x305%x306)%x307)&x308);

	if (t73 != 3LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = -1;
	static int32_t x311 = INT32_MIN;
	volatile int64_t t74 = -679431012035715LL;

	t74 = (((x309%x310)%x311)&x312);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = -3260;
	static uint64_t x314 = 42LLU;
	int8_t x316 = -1;
	volatile uint64_t t75 = 1037124LLU;

	t75 = (((x313%x314)%x315)&x316);

	if (t75 != 32LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = UINT32_MAX;
	static uint32_t x318 = 40258U;
	uint16_t x319 = 1U;
	volatile int64_t x320 = -22023238863196LL;
	static volatile int64_t t76 = -22062219068322LL;

	t76 = (((x317%x318)%x319)&x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x321 = INT64_MIN;
	uint64_t x323 = UINT64_MAX;
	uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t77 = 36815115440364670LLU;

	t77 = (((x321%x322)%x323)&x324);

	if (t77 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = -1;
	uint16_t x326 = UINT16_MAX;
	volatile int32_t x327 = INT32_MIN;
	int8_t x328 = 14;

	t78 = (((x325%x326)%x327)&x328);

	if (t78 != 14) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = 310077956U;
	int8_t x330 = -1;
	uint64_t x332 = 105LLU;
	volatile uint64_t t79 = 19LLU;

	t79 = (((x329%x330)%x331)&x332);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x334 = 4225U;
	static int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MAX;
	volatile int32_t t80 = 43982;

	t80 = (((x333%x334)%x335)&x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = -1;
	int8_t x338 = -32;
	volatile int64_t t81 = 1214625814LL;

	t81 = (((x337%x338)%x339)&x340);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x342 = 410;
	int32_t x343 = -1;
	int32_t x344 = -1085247;
	volatile uint64_t t82 = 4083115084649LLU;

	t82 = (((x341%x342)%x343)&x344);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x345 = 64U;
	volatile uint16_t x346 = 31336U;
	int64_t x347 = INT64_MIN;
	int32_t x348 = -1;
	volatile int64_t t83 = 109373452600LL;

	t83 = (((x345%x346)%x347)&x348);

	if (t83 != 64LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x353 = INT8_MAX;
	uint32_t x354 = UINT32_MAX;
	static int64_t x356 = INT64_MIN;
	int64_t t84 = 18794929LL;

	t84 = (((x353%x354)%x355)&x356);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = -1LL;
	static int32_t x358 = INT32_MIN;
	volatile int64_t t85 = 1992046184009LL;

	t85 = (((x357%x358)%x359)&x360);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x361 = -1;
	int32_t x362 = -24;
	volatile int64_t x363 = -1780LL;
	volatile int32_t x364 = -1;
	int64_t t86 = 722LL;

	t86 = (((x361%x362)%x363)&x364);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x370 = 26U;
	uint32_t x371 = 97995175U;
	volatile int64_t t87 = -1889458263291LL;

	t87 = (((x369%x370)%x371)&x372);

	if (t87 != 24LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x373 = 6U;
	int32_t x375 = 173;
	static volatile int64_t x376 = INT64_MAX;
	volatile int64_t t88 = -235586539492051LL;

	t88 = (((x373%x374)%x375)&x376);

	if (t88 != 6LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = INT8_MIN;
	uint16_t x378 = UINT16_MAX;
	volatile int64_t t89 = -61845433658872383LL;

	t89 = (((x377%x378)%x379)&x380);

	if (t89 != 2147483520LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x381 = INT8_MAX;
	static uint16_t x382 = 7643U;
	uint64_t x383 = 7757185254LLU;
	uint16_t x384 = UINT16_MAX;
	uint64_t t90 = 22027920593955LLU;

	t90 = (((x381%x382)%x383)&x384);

	if (t90 != 127LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = 2U;
	int32_t x386 = 188525738;
	uint32_t x387 = 2394U;
	volatile int64_t x388 = INT64_MAX;

	t91 = (((x385%x386)%x387)&x388);

	if (t91 != 2LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x389 = INT64_MAX;
	static volatile int16_t x390 = -10;
	int8_t x391 = -1;
	int64_t t92 = 742942131LL;

	t92 = (((x389%x390)%x391)&x392);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x394 = 1U;
	int32_t x395 = INT32_MIN;
	volatile uint32_t t93 = 71432859U;

	t93 = (((x393%x394)%x395)&x396);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x398 = -215404788003LL;
	int8_t x400 = INT8_MIN;

	t94 = (((x397%x398)%x399)&x400);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x401 = -1;
	int8_t x402 = 2;
	static int32_t x403 = 11340;
	uint8_t x404 = UINT8_MAX;

	t95 = (((x401%x402)%x403)&x404);

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x406 = 8U;
	uint32_t x407 = UINT32_MAX;
	static uint64_t x408 = 1450642690884LLU;
	static uint64_t t96 = 578592906481695942LLU;

	t96 = (((x405%x406)%x407)&x408);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = 2210U;
	int8_t x410 = INT8_MIN;
	int8_t x411 = -54;
	int16_t x412 = 1;

	t97 = (((x409%x410)%x411)&x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x414 = -86854745717010LL;
	static int64_t x415 = INT64_MAX;
	int32_t x416 = 4726;

	t98 = (((x413%x414)%x415)&x416);

	if (t98 != 4646LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x417 = 3;
	int32_t x418 = INT32_MAX;
	int32_t x419 = INT32_MIN;
	static int64_t x420 = INT64_MIN;
	volatile int64_t t99 = 49503LL;

	t99 = (((x417%x418)%x419)&x420);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

