#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = UINT32_MAX;
int8_t x29 = -1;
static uint32_t x37 = 80937U;
int32_t x38 = INT32_MIN;
static int8_t x40 = INT8_MAX;
volatile uint64_t x41 = 2422603LLU;
volatile uint64_t t9 = 10950LLU;
volatile int64_t t11 = -6043LL;
int8_t x53 = 34;
static int16_t x54 = -1;
int32_t x62 = 63;
static int64_t t13 = -11811780601622119LL;
uint64_t x67 = UINT64_MAX;
uint32_t x70 = UINT32_MAX;
volatile uint64_t t16 = 778LLU;
uint32_t t17 = 1685163U;
int16_t x81 = INT16_MAX;
int64_t x87 = -1LL;
uint8_t x97 = UINT8_MAX;
int64_t t22 = 45526914LL;
uint32_t x103 = 106854199U;
int64_t x113 = 15012602741439LL;
volatile int8_t x114 = -1;
volatile uint32_t t26 = 203513U;
uint64_t x131 = 6627761671613LLU;
int32_t x150 = 35;
static volatile uint64_t x152 = 47579469127882LLU;
uint8_t x158 = UINT8_MAX;
int32_t t34 = -760771;
int16_t x172 = INT16_MAX;
int16_t x174 = -10914;
volatile uint64_t t36 = 3119997LLU;
int32_t x181 = INT32_MIN;
uint64_t t38 = 61617LLU;
static int16_t x197 = INT16_MIN;
int16_t x198 = INT16_MIN;
volatile int16_t x201 = 0;
int32_t x212 = INT32_MAX;
uint64_t x225 = 3LLU;
uint64_t x239 = UINT64_MAX;
static int32_t t49 = 150702619;
uint32_t x253 = 224U;
uint32_t x258 = UINT32_MAX;
int8_t x259 = -1;
static volatile int16_t x260 = INT16_MAX;
int64_t x262 = 330917020255LL;
int16_t x266 = 0;
int32_t x268 = 11;
int16_t x271 = -2;
static int8_t x272 = INT8_MIN;
uint32_t t54 = 0U;
int32_t x273 = -337;
int8_t x293 = 34;
int16_t x295 = INT16_MAX;
int8_t x300 = INT8_MIN;
int8_t x306 = -5;
volatile int16_t x310 = -1;
int8_t x331 = INT8_MIN;
volatile int64_t x338 = -21LL;
uint64_t t66 = 3LLU;
int32_t x348 = INT32_MAX;
int8_t x373 = 3;
int8_t x387 = 0;
static volatile int8_t x402 = 0;
uint64_t t75 = 35LLU;
volatile uint32_t t77 = 1U;
int8_t x430 = -1;
int64_t x432 = INT64_MAX;
static int64_t x436 = 3808212547458118LL;
volatile int32_t x441 = -1;
int8_t x443 = INT8_MIN;
volatile int32_t x458 = -822;
int32_t x460 = INT32_MIN;
int8_t x463 = -26;
int32_t x464 = 15082196;
volatile int16_t x468 = INT16_MIN;
volatile int32_t x479 = INT32_MIN;
volatile int32_t x485 = INT32_MAX;
volatile uint64_t x486 = 983509540294633LLU;
int64_t x492 = INT64_MAX;
uint32_t x496 = 354U;
volatile uint32_t t89 = 1376187U;
volatile uint64_t x507 = 1627271082LLU;
uint64_t t91 = 259886133LLU;
int16_t x530 = INT16_MAX;
uint64_t x533 = 496609471948848LLU;
volatile int8_t x534 = INT8_MIN;
int8_t x538 = 43;
uint8_t x540 = 48U;
uint64_t t98 = 234105823291LLU;
volatile int32_t x567 = INT32_MAX;
static volatile int64_t t99 = -833450LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint16_t x2 = UINT16_MAX;
	int8_t x4 = -57;
	volatile uint32_t t0 = 171751U;

	t0 = (((x1^x2)*x3)^x4);

	if (t0 != 65351U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int64_t x6 = INT64_MIN;
	int16_t x7 = -1;
	uint64_t x8 = UINT64_MAX;
	static uint64_t t1 = 16509904575LLU;

	t1 = (((x5^x6)*x7)^x8);

	if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -3268;
	uint64_t x10 = 27787682659LLU;
	static uint32_t x11 = 478163030U;
	int16_t x12 = INT16_MIN;
	volatile uint64_t t2 = 23829LLU;

	t2 = (((x9^x10)*x11)^x12);

	if (t2 != 13287044035468840938LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	uint64_t x18 = UINT64_MAX;
	uint8_t x19 = UINT8_MAX;
	int16_t x20 = -7137;
	uint64_t t3 = 106809761666782LLU;

	t3 = (((x17^x18)*x19)^x20);

	if (t3 != 9223372036854782750LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	uint32_t x22 = 1022U;
	int32_t x23 = -7;
	int64_t x24 = -62497LL;
	volatile int64_t t4 = -132213023101483LL;

	t4 = (((x21^x22)*x23)^x24);

	if (t4 != -4294569946LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = UINT64_MAX;
	int8_t x26 = -1;
	uint16_t x27 = 27596U;
	int64_t x28 = INT64_MAX;
	uint64_t t5 = 4514904LLU;

	t5 = (((x25^x26)*x27)^x28);

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = -3;
	uint32_t x31 = UINT32_MAX;
	volatile uint8_t x32 = 58U;
	volatile uint32_t t6 = 0U;

	t6 = (((x29^x30)*x31)^x32);

	if (t6 != 4294967236U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	static uint16_t x34 = 16U;
	static volatile int64_t x35 = 14882LL;
	int16_t x36 = 137;
	int64_t t7 = 6643961120966043LL;

	t7 = (((x33^x34)*x35)^x36);

	if (t7 != 1651767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x39 = INT32_MAX;
	volatile uint32_t t8 = 782813U;

	t8 = (((x37^x38)*x39)^x40);

	if (t8 != 4294886312U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x42 = INT16_MAX;
	static int8_t x43 = -1;
	int64_t x44 = -1100150489773LL;

	t9 = (((x41^x42)*x43)^x44);

	if (t9 != 1100152359455LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = -2;
	uint8_t x46 = 2U;
	int16_t x47 = 1617;
	volatile int8_t x48 = INT8_MAX;
	int32_t t10 = 225964222;

	t10 = (((x45^x46)*x47)^x48);

	if (t10 != -6461) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	volatile int32_t x50 = 128670377;
	static uint32_t x51 = 79U;
	int64_t x52 = INT64_MIN;

	t11 = (((x49^x50)*x51)^x52);

	if (t11 != -9223372034134833782LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x55 = 722U;
	static int32_t x56 = INT32_MIN;
	volatile uint32_t t12 = 119U;

	t12 = (((x53^x54)*x55)^x56);

	if (t12 != 2147458378U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x61 = 22U;
	int16_t x63 = 6123;
	static volatile int64_t x64 = 51610204LL;

	t13 = (((x61^x62)*x63)^x64);

	if (t13 != 51402495LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = INT64_MIN;
	int16_t x66 = 0;
	volatile int8_t x68 = INT8_MIN;
	uint64_t t14 = 10107115171858747LLU;

	t14 = (((x65^x66)*x67)^x68);

	if (t14 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = 535206LL;
	int32_t x71 = INT32_MIN;
	uint8_t x72 = 1U;
	int64_t t15 = -718711515863955LL;

	t15 = (((x69^x70)*x71)^x72);

	if (t15 != -9222222688573980671LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x73 = -1;
	static int32_t x74 = INT32_MIN;
	volatile uint64_t x75 = UINT64_MAX;
	static int64_t x76 = -1LL;

	t16 = (((x73^x74)*x75)^x76);

	if (t16 != 2147483646LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 4815785U;
	static int8_t x78 = INT8_MAX;
	int16_t x79 = -3;
	int32_t x80 = INT32_MAX;

	t17 = (((x77^x78)*x79)^x80);

	if (t17 != 2161931137U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x82 = -1;
	static uint64_t x83 = 20465LLU;
	int8_t x84 = 54;
	uint64_t t18 = 405471867240221LLU;

	t18 = (((x81^x82)*x83)^x84);

	if (t18 != 18446744073038954550LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 1;
	volatile int8_t x86 = INT8_MIN;
	uint16_t x88 = UINT16_MAX;
	int64_t t19 = 45035987LL;

	t19 = (((x85^x86)*x87)^x88);

	if (t19 != 65408LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x89 = 2U;
	int16_t x90 = 2503;
	static volatile int16_t x91 = INT16_MIN;
	volatile int64_t x92 = INT64_MAX;
	int64_t t20 = 1114819142847369896LL;

	t20 = (((x89^x90)*x91)^x92);

	if (t20 != -9223372036772823041LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = INT8_MIN;
	uint64_t x94 = UINT64_MAX;
	static uint16_t x95 = 59U;
	int16_t x96 = INT16_MIN;
	volatile uint64_t t21 = 2382197409390644LLU;

	t21 = (((x93^x94)*x95)^x96);

	if (t21 != 18446744073709526341LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = -1;
	int64_t x99 = -1LL;
	int8_t x100 = INT8_MIN;

	t22 = (((x97^x98)*x99)^x100);

	if (t22 != -384LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = 28U;
	static uint64_t x102 = UINT64_MAX;
	int8_t x104 = INT8_MIN;
	static uint64_t t23 = 43811636283033LLU;

	t23 = (((x101^x102)*x103)^x104);

	if (t23 != 3098771781LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = 3;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	static uint16_t x112 = UINT16_MAX;
	int32_t t24 = 7;

	t24 = (((x109^x110)*x111)^x112);

	if (t24 != 49535) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x115 = -113;
	static int16_t x116 = -96;
	int64_t t25 = 21318521LL;

	t25 = (((x113^x114)*x115)^x116);

	if (t25 != -1696424109782688LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MAX;
	int32_t x118 = INT32_MAX;
	uint32_t x119 = 3U;
	int8_t x120 = -1;

	t26 = (((x117^x118)*x119)^x120);

	if (t26 != 2147581951U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 6U;
	uint64_t x122 = UINT64_MAX;
	volatile int16_t x123 = INT16_MAX;
	volatile int16_t x124 = INT16_MAX;
	volatile uint64_t t27 = 20653LLU;

	t27 = (((x121^x122)*x123)^x124);

	if (t27 != 18446744073709355000LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -1;
	int64_t x130 = INT64_MIN;
	int16_t x132 = -21;
	uint64_t t28 = 1428555110759539LLU;

	t28 = (((x129^x130)*x131)^x132);

	if (t28 != 9223378664616447400LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = 9886;
	uint64_t x139 = 2822678277896416LLU;
	int16_t x140 = 15578;
	volatile uint64_t t29 = 8804631024469338315LLU;

	t29 = (((x137^x138)*x139)^x140);

	if (t29 != 9455759208166287002LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x141 = 4729070631087LLU;
	int64_t x142 = INT64_MAX;
	int8_t x143 = INT8_MAX;
	int8_t x144 = -1;
	volatile uint64_t t30 = 777814156681640LLU;

	t30 = (((x141^x142)*x143)^x144);

	if (t30 != 9223972628824923983LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x149 = 205710U;
	int16_t x151 = INT16_MIN;
	uint64_t t31 = 12LLU;

	t31 = (((x149^x150)*x151)^x152);

	if (t31 != 47577960718538LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x157 = 23;
	int16_t x159 = 0;
	volatile int8_t x160 = -5;
	volatile int32_t t32 = -1388372;

	t32 = (((x157^x158)*x159)^x160);

	if (t32 != -5) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x161 = -3462;
	static uint8_t x162 = 3U;
	uint32_t x163 = 26779U;
	static uint32_t x164 = UINT32_MAX;
	uint32_t t33 = 2651U;

	t33 = (((x161^x162)*x163)^x164);

	if (t33 != 92735676U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MIN;
	volatile int32_t x166 = 775928;
	int8_t x167 = -1;
	volatile int16_t x168 = -1;

	t34 = (((x165^x166)*x167)^x168);

	if (t34 != -764169) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -13;
	int32_t x170 = INT32_MIN;
	volatile int8_t x171 = 0;
	int32_t t35 = 6162034;

	t35 = (((x169^x170)*x171)^x172);

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x173 = -226499919;
	uint64_t x175 = UINT64_MAX;
	volatile int32_t x176 = -1;

	t36 = (((x173^x174)*x175)^x176);

	if (t36 != 226506734LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = 7362235710248743LL;
	int32_t x178 = INT32_MIN;
	uint8_t x179 = 13U;
	static int8_t x180 = INT8_MAX;
	static int64_t t37 = 2LL;

	t37 = (((x177^x178)*x179)^x180);

	if (t37 != -95709083312051068LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x182 = 56027212LL;
	static uint16_t x183 = UINT16_MAX;
	uint64_t x184 = UINT64_MAX;

	t38 = (((x181^x182)*x183)^x184);

	if (t38 != 137063597533259LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = 1;
	uint8_t x194 = 0U;
	static volatile uint64_t x195 = 4LLU;
	int16_t x196 = -25;
	static uint64_t t39 = 24387LLU;

	t39 = (((x193^x194)*x195)^x196);

	if (t39 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x199 = INT64_MAX;
	int32_t x200 = 872;
	int64_t t40 = 3100LL;

	t40 = (((x197^x198)*x199)^x200);

	if (t40 != 872LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x202 = 70452920LLU;
	static int16_t x203 = -1;
	int16_t x204 = 1987;
	static volatile uint64_t t41 = 51396904LLU;

	t41 = (((x201^x202)*x203)^x204);

	if (t41 != 18446744073639100043LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x209 = 15U;
	int32_t x210 = -1;
	static uint32_t x211 = UINT32_MAX;
	volatile uint32_t t42 = 10740785U;

	t42 = (((x209^x210)*x211)^x212);

	if (t42 != 2147483631U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = 1;
	volatile uint64_t x214 = 1133251953395421LLU;
	static volatile int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t43 = 4487740455367350LLU;

	t43 = (((x213^x214)*x215)^x216);

	if (t43 != 240911861441986560LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x217 = INT64_MIN;
	static volatile uint64_t x218 = UINT64_MAX;
	int8_t x219 = -1;
	int32_t x220 = INT32_MAX;
	uint64_t t44 = 243756944356LLU;

	t44 = (((x217^x218)*x219)^x220);

	if (t44 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x226 = 156U;
	int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	volatile uint64_t t45 = 4227618309791589LLU;

	t45 = (((x225^x226)*x227)^x228);

	if (t45 != 2147463296LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x233 = -1;
	int8_t x234 = -1;
	volatile uint8_t x235 = UINT8_MAX;
	static int32_t x236 = -1;
	int32_t t46 = -21164;

	t46 = (((x233^x234)*x235)^x236);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x237 = -1429;
	uint8_t x238 = 62U;
	uint32_t x240 = 911318U;
	uint64_t t47 = 143831987LLU;

	t47 = (((x237^x238)*x239)^x240);

	if (t47 != 909949LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x245 = INT16_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	volatile int32_t x247 = -425;
	int64_t x248 = INT64_MIN;
	volatile int64_t t48 = -50328LL;

	t48 = (((x245^x246)*x247)^x248);

	if (t48 != 9223372036840849408LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x249 = -1;
	volatile uint8_t x250 = 13U;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;

	t49 = (((x249^x250)*x251)^x252);

	if (t49 != -30976) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x254 = UINT8_MAX;
	uint32_t x255 = 387823U;
	int8_t x256 = INT8_MAX;
	uint32_t t50 = 287U;

	t50 = (((x253^x254)*x255)^x256);

	if (t50 != 12022414U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x257 = UINT32_MAX;
	volatile uint32_t t51 = 2664940U;

	t51 = (((x257^x258)*x259)^x260);

	if (t51 != 32767U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x261 = INT8_MAX;
	static int64_t x263 = 862551LL;
	static int32_t x264 = INT32_MIN;
	static volatile int64_t t52 = -112938914987LL;

	t52 = (((x261^x262)*x263)^x264);

	if (t52 != -285432807971432224LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x265 = INT8_MAX;
	uint64_t x267 = UINT64_MAX;
	volatile uint64_t t53 = 1714755LLU;

	t53 = (((x265^x266)*x267)^x268);

	if (t53 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x269 = 3U;
	uint16_t x270 = UINT16_MAX;

	t54 = (((x269^x270)*x271)^x272);

	if (t54 != 130952U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x274 = -259;
	volatile int16_t x275 = 2766;
	static int32_t x276 = INT32_MAX;
	int32_t t55 = -943834200;

	t55 = (((x273^x274)*x275)^x276);

	if (t55 != 2147256835) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x277 = 535438411720120259LLU;
	static int16_t x278 = 259;
	int32_t x279 = INT32_MAX;
	uint32_t x280 = 805906U;
	uint64_t t56 = 119413190101197313LLU;

	t56 = (((x277^x278)*x279)^x280);

	if (t56 != 18259960111963235666LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = 6358870158632LL;
	static volatile uint16_t x287 = 9242U;
	static uint8_t x288 = 1U;
	int64_t t57 = -765039698926806291LL;

	t57 = (((x285^x286)*x287)^x288);

	if (t57 != -58768678006520559LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x294 = -1;
	uint16_t x296 = UINT16_MAX;
	int32_t t58 = -3;

	t58 = (((x293^x294)*x295)^x296);

	if (t58 != -1146916) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x297 = 5901096509108584LL;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = 2U;
	volatile int64_t t59 = -306876528087303LL;

	t59 = (((x297^x298)*x299)^x300);

	if (t59 != 11802193018166608LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x301 = 64276;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MAX;
	int64_t x304 = -1LL;
	int64_t t60 = -2088810603136335LL;

	t60 = (((x301^x302)*x303)^x304);

	if (t60 != 1114995475LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x305 = INT16_MIN;
	uint16_t x307 = 1U;
	int64_t x308 = 931330LL;
	int64_t t61 = 30152972333969LL;

	t61 = (((x305^x306)*x307)^x308);

	if (t61 != 936441LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = -1;
	volatile int16_t x311 = -1;
	volatile int64_t x312 = -225653535LL;
	volatile int64_t t62 = 2779755373987LL;

	t62 = (((x309^x310)*x311)^x312);

	if (t62 != -225653535LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x317 = UINT16_MAX;
	volatile int16_t x318 = INT16_MIN;
	volatile int64_t x319 = -1LL;
	uint16_t x320 = 4U;
	int64_t t63 = 3089015887405787LL;

	t63 = (((x317^x318)*x319)^x320);

	if (t63 != 32773LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x321 = 3219U;
	int64_t x322 = -1LL;
	uint8_t x323 = 3U;
	uint8_t x324 = 44U;
	static volatile int64_t t64 = 1257678171166332LL;

	t64 = (((x321^x322)*x323)^x324);

	if (t64 != -9624LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x329 = 0U;
	int16_t x330 = INT16_MIN;
	uint8_t x332 = 47U;
	int32_t t65 = -890279;

	t65 = (((x329^x330)*x331)^x332);

	if (t65 != 4194351) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x337 = INT8_MIN;
	volatile int32_t x339 = INT32_MAX;
	uint64_t x340 = UINT64_MAX;

	t66 = (((x337^x338)*x339)^x340);

	if (t66 != 18446743843928801386LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x341 = INT16_MIN;
	volatile uint64_t x342 = 103196795858387152LLU;
	int8_t x343 = 34;
	uint16_t x344 = 10887U;
	uint64_t t67 = 24934721193588LLU;

	t67 = (((x341^x342)*x343)^x344);

	if (t67 != 14938053014523293991LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x345 = -686;
	int32_t x346 = 32791;
	uint64_t x347 = 28535970LLU;
	uint64_t t68 = 1165286542LLU;

	t68 = (((x345^x346)*x347)^x348);

	if (t68 != 18446743119609896533LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x353 = -35476;
	static int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	int32_t x356 = -1;
	static int32_t t69 = 1000133964;

	t69 = (((x353^x354)*x355)^x356);

	if (t69 != 1165361151) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x365 = -1;
	int8_t x366 = INT8_MIN;
	static int8_t x367 = INT8_MIN;
	static int64_t x368 = INT64_MAX;
	int64_t t70 = 404079325856251LL;

	t70 = (((x365^x366)*x367)^x368);

	if (t70 != -9223372036854759553LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x369 = INT8_MIN;
	volatile int64_t x370 = 1841LL;
	volatile int32_t x371 = INT32_MAX;
	volatile int8_t x372 = -7;
	int64_t t71 = -1870127096LL;

	t71 = (((x369^x370)*x371)^x372);

	if (t71 != 4017941903542LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x374 = 7830U;
	volatile int8_t x375 = -1;
	int16_t x376 = INT16_MIN;
	volatile int32_t t72 = -215;

	t72 = (((x373^x374)*x375)^x376);

	if (t72 != 24939) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x385 = 4U;
	uint32_t x386 = 14669527U;
	int64_t x388 = INT64_MIN;
	static volatile int64_t t73 = INT64_MIN;

	t73 = (((x385^x386)*x387)^x388);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x397 = UINT64_MAX;
	uint64_t x398 = 33967LLU;
	uint32_t x399 = UINT32_MAX;
	static uint16_t x400 = UINT16_MAX;
	volatile uint64_t t74 = 1LLU;

	t74 = (((x397^x398)*x399)^x400);

	if (t74 != 18446598182260472655LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x401 = INT32_MAX;
	uint64_t x403 = 2418772868970914LLU;
	int8_t x404 = -1;

	t75 = (((x401^x402)*x403)^x404);

	if (t75 != 14354585045139044769LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x409 = UINT32_MAX;
	int32_t x410 = INT32_MIN;
	uint32_t x411 = UINT32_MAX;
	volatile int64_t x412 = INT64_MIN;
	volatile int64_t t76 = -3506132320610LL;

	t76 = (((x409^x410)*x411)^x412);

	if (t76 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x413 = UINT32_MAX;
	static uint16_t x414 = UINT16_MAX;
	static int16_t x415 = -1;
	uint32_t x416 = UINT32_MAX;

	t77 = (((x413^x414)*x415)^x416);

	if (t77 != 4294901759U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x429 = INT8_MIN;
	int8_t x431 = INT8_MIN;
	volatile int64_t t78 = 27900174314940704LL;

	t78 = (((x429^x430)*x431)^x432);

	if (t78 != -9223372036854759553LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x433 = 92U;
	static uint8_t x434 = UINT8_MAX;
	int32_t x435 = 886;
	int64_t t79 = -94780209LL;

	t79 = (((x433^x434)*x435)^x436);

	if (t79 != 3808212547330148LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x442 = 58U;
	static int32_t x444 = INT32_MIN;
	static volatile uint32_t t80 = 330785804U;

	t80 = (((x441^x442)*x443)^x444);

	if (t80 != 2147491200U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x453 = 5402LLU;
	int8_t x454 = -3;
	static int32_t x455 = INT32_MAX;
	int32_t x456 = INT32_MIN;
	uint64_t t81 = 0LLU;

	t81 = (((x453^x454)*x455)^x456);

	if (t81 != 11596411704601LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x457 = 247U;
	int64_t x459 = 28246730830748LL;
	int64_t t82 = 75323LL;

	t82 = (((x457^x458)*x459)^x460);

	if (t82 != 27201600044669996LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x461 = UINT64_MAX;
	uint16_t x462 = UINT16_MAX;
	static volatile uint64_t t83 = 134968459613511844LLU;

	t83 = (((x461^x462)*x463)^x464);

	if (t83 != 16523988LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x465 = 934023LLU;
	int64_t x466 = INT64_MIN;
	int8_t x467 = INT8_MIN;
	uint64_t t84 = 85848LLU;

	t84 = (((x465^x466)*x467)^x468);

	if (t84 != 119553152LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x469 = INT16_MAX;
	uint8_t x470 = 13U;
	volatile uint32_t x471 = 252729815U;
	static volatile int32_t x472 = -950;
	volatile uint32_t t85 = 4007849U;

	t85 = (((x469^x470)*x471)^x472);

	if (t85 != 2784586356U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x477 = INT32_MIN;
	volatile int64_t x478 = -4031829631LL;
	volatile uint32_t x480 = 940575U;
	static volatile int64_t t86 = -4204887263320LL;

	t86 = (((x477^x478)*x479)^x480);

	if (t86 != -5176769851186849249LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x487 = INT64_MAX;
	int16_t x488 = 858;
	volatile uint64_t t87 = 17097055115230526LLU;

	t87 = (((x485^x486)*x487)^x488);

	if (t87 != 18445760563390205104LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x489 = -6;
	int16_t x490 = INT16_MAX;
	static int16_t x491 = -1;
	int64_t t88 = -30435245811787LL;

	t88 = (((x489^x490)*x491)^x492);

	if (t88 != 9223372036854743044LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x493 = -1;
	uint8_t x494 = UINT8_MAX;
	uint16_t x495 = UINT16_MAX;

	t89 = (((x493^x494)*x495)^x496);

	if (t89 != 4278190178U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x505 = INT32_MIN;
	int16_t x506 = -1;
	int16_t x508 = INT16_MAX;
	uint64_t t90 = 25LLU;

	t90 = (((x505^x506)*x507)^x508);

	if (t90 != 3494538037830987689LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x517 = -4056608LL;
	uint64_t x518 = 372736977915091LLU;
	static int8_t x519 = -1;
	volatile int8_t x520 = 6;

	t91 = (((x517^x518)*x519)^x520);

	if (t91 != 372736976497355LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x521 = INT64_MIN;
	int32_t x522 = INT32_MIN;
	uint64_t x523 = 3LLU;
	uint64_t x524 = UINT64_MAX;
	uint64_t t92 = 2195509108931353LLU;

	t92 = (((x521^x522)*x523)^x524);

	if (t92 != 9223372043297226751LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x525 = 238107072U;
	static volatile int16_t x526 = INT16_MIN;
	int8_t x527 = INT8_MIN;
	static int64_t x528 = INT64_MIN;
	static volatile int64_t t93 = 90LL;

	t93 = (((x525^x526)*x527)^x528);

	if (t93 != -9223372036441432064LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x529 = -1;
	uint64_t x531 = UINT64_MAX;
	int16_t x532 = -6;
	static volatile uint64_t t94 = 808LLU;

	t94 = (((x529^x530)*x531)^x532);

	if (t94 != 18446744073709518842LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x535 = INT8_MIN;
	int16_t x536 = INT16_MAX;
	uint64_t t95 = 2159886419884576LLU;

	t95 = (((x533^x534)*x535)^x536);

	if (t95 != 63566012409468927LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x537 = -3817;
	uint32_t x539 = 408U;
	volatile uint32_t t96 = 879U;

	t96 = (((x537^x538)*x539)^x540);

	if (t96 != 4293425040U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x557 = INT64_MIN;
	uint8_t x558 = UINT8_MAX;
	uint64_t x559 = UINT64_MAX;
	uint64_t x560 = 179187792877609LLU;
	static uint64_t t97 = 2235646465852025LLU;

	t97 = (((x557^x558)*x559)^x560);

	if (t97 != 9223192849061898024LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x561 = INT32_MAX;
	uint64_t x562 = 1384654945691223612LLU;
	int64_t x563 = 6LL;
	int16_t x564 = INT16_MIN;

	t98 = (((x561^x562)*x563)^x564);

	if (t98 != 10138814399242754706LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x565 = -1;
	static volatile int64_t x566 = -124776LL;
	uint16_t x568 = 1690U;

	t99 = (((x565^x566)*x567)^x568);

	if (t99 != 267952272055811LL) { NG(); } else { ; }
	
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

