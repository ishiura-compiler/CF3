#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
uint64_t x6 = 201606430317911995LLU;
int16_t x8 = INT16_MIN;
int32_t t1 = 236;
int8_t x20 = -5;
int64_t x28 = 1191936LL;
uint32_t x31 = 47392U;
static uint16_t x33 = 12606U;
int8_t x36 = INT8_MAX;
static uint64_t x55 = 34LLU;
int32_t x60 = -12603;
int64_t x63 = INT64_MIN;
int32_t x64 = INT32_MIN;
volatile int32_t t15 = -190897;
int8_t x65 = INT8_MIN;
static uint32_t x68 = UINT32_MAX;
int16_t x76 = INT16_MIN;
volatile int32_t t18 = -17;
int8_t x80 = -30;
static volatile int64_t x81 = INT64_MAX;
int16_t x84 = 102;
uint8_t x86 = 26U;
int16_t x91 = INT16_MIN;
static uint16_t x92 = 317U;
uint32_t x97 = UINT32_MAX;
volatile uint64_t x99 = 131079385LLU;
volatile int64_t x100 = INT64_MIN;
static volatile int32_t x103 = -1;
int8_t x104 = 1;
volatile int8_t x110 = -1;
volatile int64_t x111 = INT64_MAX;
volatile int32_t t27 = 5170;
uint64_t x116 = UINT64_MAX;
volatile int16_t x118 = 1;
int32_t t29 = -1;
volatile uint16_t x121 = 0U;
uint64_t x127 = 16619402021828LLU;
int64_t x128 = INT64_MIN;
static int16_t x131 = -1;
volatile int32_t t33 = -2;
volatile int32_t t34 = 322500739;
volatile int64_t x144 = INT64_MIN;
int16_t x145 = INT16_MIN;
int32_t x146 = -1;
volatile int16_t x151 = -1;
uint16_t x155 = 124U;
uint32_t x164 = 5618811U;
static int8_t x166 = INT8_MIN;
int64_t x170 = INT64_MIN;
uint64_t x176 = 158LLU;
volatile uint16_t x178 = 33U;
volatile int32_t t45 = 832018;
uint8_t x188 = 25U;
int32_t t46 = -1037984222;
volatile int64_t x190 = INT64_MIN;
static int32_t t48 = -215069274;
int32_t x204 = 12452;
uint32_t x217 = UINT32_MAX;
volatile int64_t x221 = INT64_MIN;
static int64_t x223 = 4047405LL;
int32_t x230 = -1;
volatile uint8_t x234 = UINT8_MAX;
volatile int32_t t59 = 156505;
uint64_t x243 = UINT64_MAX;
volatile int8_t x244 = INT8_MAX;
int8_t x245 = INT8_MIN;
int16_t x247 = -1;
int64_t x253 = 3038790730571109315LL;
int64_t x260 = 155282112905609420LL;
int64_t x261 = -1LL;
uint32_t x272 = 32462432U;
volatile uint16_t x279 = 3U;
volatile uint32_t x285 = UINT32_MAX;
int64_t x289 = INT64_MIN;
static uint16_t x302 = 3U;
int32_t x314 = INT32_MIN;
int64_t x317 = -801191LL;
volatile uint16_t x349 = 1734U;
int16_t x350 = -1;
uint64_t x351 = 4118572449899090LLU;
int8_t x354 = INT8_MIN;
int64_t x356 = 2447954010295707LL;
int32_t t88 = -570074977;
static int32_t x366 = 1019629296;
int32_t x367 = INT32_MIN;
static volatile int32_t t91 = -834536;
volatile int64_t x373 = INT64_MIN;
static int32_t x375 = -23;
uint64_t x382 = UINT64_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = UINT64_MAX;
	int64_t x4 = -1LL;
	volatile int32_t t0 = 674764134;

	t0 = (((x1^x2)|x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x7 = 0U;

	t1 = (((x5^x6)|x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 2U;
	int16_t x10 = INT16_MIN;
	int8_t x11 = -1;
	int8_t x12 = -3;
	volatile int32_t t2 = 58244;

	t2 = (((x9^x10)|x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -653LL;
	static uint16_t x14 = UINT16_MAX;
	static volatile int8_t x15 = 1;
	uint32_t x16 = 384561U;
	volatile int32_t t3 = 3648;

	t3 = (((x13^x14)|x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 370832631511LLU;
	int16_t x18 = -126;
	int32_t x19 = INT32_MAX;
	volatile int32_t t4 = -3;

	t4 = (((x17^x18)|x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int32_t x22 = INT32_MIN;
	int32_t x23 = -5562;
	uint64_t x24 = 488188523592493928LLU;
	volatile int32_t t5 = 432250;

	t5 = (((x21^x22)|x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static volatile uint16_t x26 = UINT16_MAX;
	static int64_t x27 = -401252884180395918LL;
	int32_t t6 = 3746;

	t6 = (((x25^x26)|x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int64_t x30 = INT64_MIN;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 6430061;

	t7 = (((x29^x30)|x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x34 = 1LLU;
	volatile int16_t x35 = INT16_MAX;
	volatile int32_t t8 = 1015699367;

	t8 = (((x33^x34)|x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x37 = 513572121117LLU;
	int16_t x38 = INT16_MIN;
	int16_t x39 = -1;
	int16_t x40 = -1;
	volatile int32_t t9 = -26700589;

	t9 = (((x37^x38)|x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	uint8_t x42 = 30U;
	volatile int16_t x43 = 3;
	int16_t x44 = -1;
	static int32_t t10 = 1;

	t10 = (((x41^x42)|x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	static uint32_t x46 = UINT32_MAX;
	int8_t x47 = INT8_MIN;
	int64_t x48 = -2037547LL;
	volatile int32_t t11 = -47;

	t11 = (((x45^x46)|x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 0LL;
	int8_t x50 = -1;
	volatile int8_t x51 = 1;
	volatile int64_t x52 = INT64_MAX;
	static int32_t t12 = 6416785;

	t12 = (((x49^x50)|x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int64_t x54 = -162227LL;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -6690115;

	t13 = (((x53^x54)|x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	static uint32_t x58 = 30U;
	int8_t x59 = INT8_MAX;
	int32_t t14 = 21;

	t14 = (((x57^x58)|x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	static int32_t x62 = -1195;

	t15 = (((x61^x62)|x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = 22494882;
	volatile uint64_t x67 = UINT64_MAX;
	int32_t t16 = -2400;

	t16 = (((x65^x66)|x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -3060;
	static int16_t x70 = -1;
	volatile int64_t x71 = -1LL;
	int16_t x72 = -5817;
	int32_t t17 = -1976;

	t17 = (((x69^x70)|x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	int32_t x74 = INT32_MIN;
	uint8_t x75 = 7U;

	t18 = (((x73^x74)|x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 250922342103LL;
	static int32_t x78 = INT32_MIN;
	int32_t x79 = 527771;
	volatile int32_t t19 = 628688728;

	t19 = (((x77^x78)|x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	static int64_t x83 = -28858781025LL;
	static volatile int32_t t20 = 619643;

	t20 = (((x81^x82)|x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static int16_t x87 = 0;
	uint64_t x88 = 68513843LLU;
	static int32_t t21 = 127;

	t21 = (((x85^x86)|x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MAX;
	int8_t x90 = -14;
	volatile int32_t t22 = 8404280;

	t22 = (((x89^x90)|x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int8_t x94 = -28;
	uint64_t x95 = 510282285882LLU;
	int8_t x96 = -22;
	volatile int32_t t23 = 300;

	t23 = (((x93^x94)|x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MIN;
	volatile int32_t t24 = -13482;

	t24 = (((x97^x98)|x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = UINT32_MAX;
	uint8_t x102 = 5U;
	int32_t t25 = -1;

	t25 = (((x101^x102)|x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = UINT64_MAX;
	int32_t x106 = -1;
	static int8_t x107 = INT8_MIN;
	int32_t x108 = -1;
	int32_t t26 = 0;

	t26 = (((x105^x106)|x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	static volatile int8_t x112 = INT8_MIN;

	t27 = (((x109^x110)|x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	static volatile int64_t x114 = 27134360633519LL;
	int32_t x115 = INT32_MIN;
	static int32_t t28 = -32;

	t28 = (((x113^x114)|x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int8_t x119 = 3;
	int8_t x120 = INT8_MAX;

	t29 = (((x117^x118)|x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x122 = INT16_MIN;
	static int8_t x123 = INT8_MAX;
	volatile uint16_t x124 = 1303U;
	static int32_t t30 = -1;

	t30 = (((x121^x122)|x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static int32_t x126 = 333849904;
	int32_t t31 = 39286;

	t31 = (((x125^x126)|x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 837U;
	static int32_t x130 = INT32_MIN;
	int8_t x132 = -1;
	int32_t t32 = 1159639;

	t32 = (((x129^x130)|x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 99U;
	static int64_t x134 = INT64_MIN;
	int8_t x135 = -1;
	volatile int8_t x136 = -1;

	t33 = (((x133^x134)|x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	uint32_t x138 = UINT32_MAX;
	int64_t x139 = INT64_MIN;
	int32_t x140 = -8178149;

	t34 = (((x137^x138)|x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 31072U;
	volatile int8_t x142 = INT8_MIN;
	int32_t x143 = -1;
	volatile int32_t t35 = 41237;

	t35 = (((x141^x142)|x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x147 = -122;
	uint8_t x148 = 0U;
	int32_t t36 = 0;

	t36 = (((x145^x146)|x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	static uint64_t x150 = 1465037417810495LLU;
	int64_t x152 = 7128551992LL;
	volatile int32_t t37 = -173604;

	t37 = (((x149^x150)|x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	static volatile int64_t x154 = INT64_MAX;
	int8_t x156 = -1;
	static volatile int32_t t38 = -1290377;

	t38 = (((x153^x154)|x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 1287290U;
	static uint16_t x158 = 5047U;
	uint64_t x159 = 100LLU;
	volatile int32_t x160 = -1;
	int32_t t39 = -52670;

	t39 = (((x157^x158)|x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	volatile uint64_t x162 = 3962810423983LLU;
	static uint32_t x163 = 7958890U;
	volatile int32_t t40 = -3;

	t40 = (((x161^x162)|x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 6448256LLU;
	static int64_t x167 = INT64_MAX;
	int8_t x168 = -1;
	volatile int32_t t41 = 1;

	t41 = (((x165^x166)|x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -1;
	volatile int64_t x171 = INT64_MIN;
	static int8_t x172 = INT8_MIN;
	static int32_t t42 = 19;

	t42 = (((x169^x170)|x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 1U;
	int32_t x174 = 815090;
	uint64_t x175 = 515266LLU;
	volatile int32_t t43 = 318949;

	t43 = (((x173^x174)|x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MAX;
	int64_t x179 = INT64_MIN;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = 27633;

	t44 = (((x177^x178)|x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 13U;
	static int16_t x182 = INT16_MIN;
	static uint64_t x183 = UINT64_MAX;
	uint32_t x184 = UINT32_MAX;

	t45 = (((x181^x182)|x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -2;
	uint64_t x186 = 2179305488275490LLU;
	int16_t x187 = INT16_MIN;

	t46 = (((x185^x186)|x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 1332;
	volatile int8_t x191 = INT8_MAX;
	volatile int64_t x192 = INT64_MIN;
	static volatile int32_t t47 = 82348233;

	t47 = (((x189^x190)|x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = 207LL;
	static int64_t x194 = INT64_MIN;
	volatile uint8_t x195 = 1U;
	int8_t x196 = INT8_MIN;

	t48 = (((x193^x194)|x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = 60155LLU;
	int8_t x198 = -1;
	uint64_t x199 = 128209516LLU;
	int8_t x200 = INT8_MIN;
	int32_t t49 = -2;

	t49 = (((x197^x198)|x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x201 = UINT64_MAX;
	static volatile int8_t x202 = INT8_MIN;
	int16_t x203 = 0;
	int32_t t50 = -95096564;

	t50 = (((x201^x202)|x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint64_t x206 = UINT64_MAX;
	int16_t x207 = INT16_MIN;
	uint32_t x208 = 584U;
	static int32_t t51 = 26;

	t51 = (((x205^x206)|x207)<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = -310729;
	int16_t x211 = INT16_MIN;
	uint32_t x212 = 5925319U;
	int32_t t52 = -558879;

	t52 = (((x209^x210)|x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	volatile int64_t x214 = INT64_MIN;
	static int64_t x215 = 8872399LL;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = -1;

	t53 = (((x213^x214)|x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x218 = INT8_MIN;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = -1;
	int32_t t54 = 86799;

	t54 = (((x217^x218)|x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = 1;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -107;

	t55 = (((x221^x222)|x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MAX;
	static uint64_t x227 = UINT64_MAX;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = -1989;

	t56 = (((x225^x226)|x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 379643U;
	uint8_t x231 = 8U;
	int16_t x232 = -1;
	volatile int32_t t57 = 3753492;

	t57 = (((x229^x230)|x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	volatile int32_t x235 = 246394675;
	int32_t x236 = -47561161;
	volatile int32_t t58 = -110;

	t58 = (((x233^x234)|x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -265LL;
	uint64_t x238 = UINT64_MAX;
	volatile int8_t x239 = INT8_MAX;
	static volatile int8_t x240 = 3;

	t59 = (((x237^x238)|x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1766996;
	volatile int16_t x242 = -1;
	int32_t t60 = 3;

	t60 = (((x241^x242)|x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = INT8_MIN;
	uint16_t x248 = UINT16_MAX;
	int32_t t61 = -222432454;

	t61 = (((x245^x246)|x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	uint8_t x250 = UINT8_MAX;
	uint32_t x251 = UINT32_MAX;
	int16_t x252 = 6385;
	int32_t t62 = -13993;

	t62 = (((x249^x250)|x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x254 = UINT64_MAX;
	uint64_t x255 = 22LLU;
	static int16_t x256 = 4019;
	int32_t t63 = -3;

	t63 = (((x253^x254)|x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	static int64_t x258 = -1LL;
	volatile int64_t x259 = 128919686406LL;
	int32_t t64 = 2750;

	t64 = (((x257^x258)|x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x262 = INT8_MIN;
	static int8_t x263 = INT8_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = 21;

	t65 = (((x261^x262)|x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -1LL;
	uint8_t x266 = 1U;
	int32_t x267 = INT32_MIN;
	volatile int64_t x268 = -12029LL;
	int32_t t66 = 0;

	t66 = (((x265^x266)|x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MIN;
	uint16_t x271 = UINT16_MAX;
	volatile int32_t t67 = -2306110;

	t67 = (((x269^x270)|x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	uint16_t x274 = 26U;
	volatile int32_t x275 = INT32_MAX;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t68 = -238962778;

	t68 = (((x273^x274)|x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	uint32_t x278 = 456U;
	volatile uint64_t x280 = 34768799795000LLU;
	volatile int32_t t69 = 18115;

	t69 = (((x277^x278)|x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -13;
	int8_t x282 = -1;
	int32_t x283 = INT32_MAX;
	uint32_t x284 = 22U;
	static volatile int32_t t70 = -2360;

	t70 = (((x281^x282)|x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = 5;
	volatile uint64_t x287 = 44LLU;
	int64_t x288 = INT64_MAX;
	volatile int32_t t71 = 9815;

	t71 = (((x285^x286)|x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x290 = INT64_MAX;
	static int64_t x291 = -63780LL;
	int8_t x292 = 5;
	int32_t t72 = 144975;

	t72 = (((x289^x290)|x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = 9;
	volatile int64_t x294 = -1LL;
	volatile int32_t x295 = -1;
	uint32_t x296 = UINT32_MAX;
	static int32_t t73 = -11838738;

	t73 = (((x293^x294)|x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -58;
	uint32_t x298 = 472U;
	int64_t x299 = 4097LL;
	static volatile int16_t x300 = -1;
	int32_t t74 = -164252;

	t74 = (((x297^x298)|x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	uint64_t x303 = 49723LLU;
	int16_t x304 = INT16_MIN;
	int32_t t75 = -4046;

	t75 = (((x301^x302)|x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MAX;
	volatile int32_t x306 = INT32_MAX;
	int32_t x307 = -1;
	uint32_t x308 = UINT32_MAX;
	int32_t t76 = 641097675;

	t76 = (((x305^x306)|x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 26191865U;
	volatile uint8_t x310 = 11U;
	static uint32_t x311 = UINT32_MAX;
	int16_t x312 = INT16_MIN;
	static int32_t t77 = -66972;

	t77 = (((x309^x310)|x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -127;
	uint64_t x315 = 52750LLU;
	int8_t x316 = INT8_MAX;
	static volatile int32_t t78 = 6;

	t78 = (((x313^x314)|x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x318 = 1U;
	int32_t x319 = INT32_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t79 = 1;

	t79 = (((x317^x318)|x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = -228LL;
	int16_t x322 = 42;
	uint32_t x323 = 233284488U;
	int64_t x324 = 1LL;
	volatile int32_t t80 = 54;

	t80 = (((x321^x322)|x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 0;
	int64_t x326 = INT64_MIN;
	static int64_t x327 = -1LL;
	int8_t x328 = -52;
	volatile int32_t t81 = 16111;

	t81 = (((x325^x326)|x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	static volatile int16_t x330 = 79;
	int32_t x331 = INT32_MIN;
	static uint16_t x332 = UINT16_MAX;
	int32_t t82 = 1;

	t82 = (((x329^x330)|x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MIN;
	uint16_t x335 = 60U;
	volatile int16_t x336 = 124;
	int32_t t83 = 109185426;

	t83 = (((x333^x334)|x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	int8_t x338 = -1;
	int32_t x339 = INT32_MIN;
	uint64_t x340 = UINT64_MAX;
	int32_t t84 = -110;

	t84 = (((x337^x338)|x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = 0LLU;
	volatile int32_t x342 = -1;
	volatile int32_t x343 = -1;
	int64_t x344 = 2225558LL;
	int32_t t85 = 1;

	t85 = (((x341^x342)|x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	uint32_t x346 = 519926218U;
	int8_t x347 = -1;
	static uint16_t x348 = 2U;
	volatile int32_t t86 = 22;

	t86 = (((x345^x346)|x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t87 = 0;

	t87 = (((x349^x350)|x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -12;
	uint8_t x355 = UINT8_MAX;

	t88 = (((x353^x354)|x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = 0;
	int64_t x358 = -1LL;
	volatile uint32_t x359 = UINT32_MAX;
	static int64_t x360 = -21069203446783294LL;
	int32_t t89 = -70195;

	t89 = (((x357^x358)|x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint8_t x362 = UINT8_MAX;
	uint64_t x363 = 36427375192LLU;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -156018349;

	t90 = (((x361^x362)|x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 30U;
	int8_t x368 = -1;

	t91 = (((x365^x366)|x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 959986748LLU;
	int16_t x370 = INT16_MIN;
	int32_t x371 = -1;
	uint16_t x372 = 15326U;
	static volatile int32_t t92 = 0;

	t92 = (((x369^x370)|x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = INT8_MIN;
	volatile int16_t x376 = INT16_MAX;
	volatile int32_t t93 = 5195060;

	t93 = (((x373^x374)|x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	int8_t x378 = INT8_MAX;
	uint16_t x379 = 6498U;
	volatile uint16_t x380 = UINT16_MAX;
	volatile int32_t t94 = 7134750;

	t94 = (((x377^x378)|x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 287504935LLU;
	uint8_t x383 = 2U;
	uint64_t x384 = UINT64_MAX;
	int32_t t95 = -345403783;

	t95 = (((x381^x382)|x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	int16_t x386 = INT16_MIN;
	static int64_t x387 = 93386321966LL;
	static int16_t x388 = 31;
	volatile int32_t t96 = 16194;

	t96 = (((x385^x386)|x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	uint32_t x390 = 1U;
	uint32_t x391 = 1770U;
	int64_t x392 = INT64_MIN;
	int32_t t97 = 0;

	t97 = (((x389^x390)|x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -33;
	static int32_t x394 = INT32_MIN;
	int32_t x395 = INT32_MAX;
	static int32_t x396 = INT32_MIN;
	int32_t t98 = 6840512;

	t98 = (((x393^x394)|x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 2;
	uint16_t x398 = 16142U;
	int64_t x399 = 3LL;
	static int64_t x400 = -22LL;
	volatile int32_t t99 = 895;

	t99 = (((x397^x398)|x399)<=x400);

	if (t99 != 0) { NG(); } else { ; }
	
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

