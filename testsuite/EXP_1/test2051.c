#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -21014;
int64_t x8 = -87205321988144LL;
volatile int32_t t4 = 11;
int16_t x30 = INT16_MIN;
static volatile uint32_t x33 = 11829954U;
volatile int32_t x36 = 574076178;
int32_t x37 = INT32_MAX;
uint32_t x48 = 1946U;
int32_t x57 = -112190;
int32_t t13 = -18542248;
int8_t x68 = INT8_MIN;
int64_t x69 = 1LL;
volatile int64_t x71 = INT64_MIN;
volatile int16_t x77 = INT16_MIN;
uint16_t x88 = UINT16_MAX;
int32_t t18 = -256511233;
static int32_t t20 = 42799;
int8_t x105 = INT8_MIN;
static int8_t x118 = -1;
volatile int8_t x119 = -1;
static volatile uint8_t x120 = 7U;
volatile int32_t t26 = -2099324;
int32_t x122 = INT32_MIN;
volatile int8_t x125 = 14;
int8_t x128 = -21;
static volatile int32_t t28 = -26604;
int64_t x138 = -123290413754215LL;
volatile int16_t x141 = INT16_MAX;
volatile int32_t x142 = -8308;
static int64_t x145 = 14440810LL;
static volatile uint8_t x152 = 23U;
volatile int64_t x153 = -50LL;
static int8_t x162 = 2;
uint32_t x164 = 7U;
volatile int32_t t37 = -15;
int32_t x167 = INT32_MIN;
int32_t t39 = 3341463;
static volatile int8_t x177 = INT8_MIN;
int32_t x178 = -1;
int32_t t40 = -7;
uint64_t x185 = 3928LLU;
int8_t x188 = -1;
int32_t t44 = -6817109;
static volatile uint64_t x202 = 94164LLU;
uint8_t x203 = 72U;
static uint64_t x211 = 13260LLU;
uint32_t x218 = 126203142U;
volatile int16_t x220 = 96;
static int16_t x223 = 2246;
volatile int32_t t50 = 93;
static uint8_t x227 = 6U;
int64_t x229 = INT64_MAX;
int32_t t52 = 4637827;
int64_t x234 = INT64_MIN;
int64_t x238 = 84772891355859194LL;
volatile int32_t t54 = 1;
int8_t x241 = 62;
int8_t x242 = INT8_MIN;
int16_t x243 = INT16_MIN;
static uint8_t x246 = 62U;
uint16_t x247 = 36U;
int64_t x251 = INT64_MIN;
int8_t x254 = -1;
int16_t x259 = INT16_MIN;
int16_t x262 = -510;
static int64_t x264 = INT64_MIN;
int16_t x268 = INT16_MIN;
volatile int32_t x279 = 212052;
volatile int32_t t64 = 0;
uint8_t x281 = 1U;
int16_t x282 = 1;
int32_t x283 = -262092;
int64_t x284 = 177714LL;
volatile int32_t t65 = 3634236;
int32_t t67 = 23412496;
uint8_t x294 = 30U;
int16_t x297 = -1;
int16_t x300 = INT16_MIN;
int16_t x302 = INT16_MAX;
int32_t t70 = -11942063;
int8_t x307 = 2;
int16_t x316 = INT16_MAX;
int16_t x324 = 151;
volatile int16_t x342 = INT16_MIN;
uint8_t x346 = 7U;
volatile int32_t t80 = 12716820;
uint64_t x351 = 5936372010LLU;
uint8_t x354 = 0U;
int32_t x359 = -26969;
uint64_t x360 = UINT64_MAX;
uint32_t x364 = 124205596U;
static volatile int32_t t86 = -8676661;
int8_t x375 = -1;
int8_t x378 = 0;
static volatile int8_t x382 = INT8_MAX;
int8_t x412 = -13;
volatile int32_t t95 = 329872760;
uint64_t x416 = 4710279381LLU;
volatile int32_t t98 = -124474674;
uint8_t x429 = UINT8_MAX;
volatile int32_t t99 = -19;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint32_t x2 = 350314U;
	uint16_t x3 = 11445U;
	uint64_t x4 = 15868948743LLU;

	t0 = (((x1^x2)-x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 9612188131524LLU;
	int64_t x6 = 273364LL;
	static volatile int32_t x7 = -1;
	static volatile int32_t t1 = -12152;

	t1 = (((x5^x6)-x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static uint8_t x10 = 1U;
	int8_t x11 = INT8_MAX;
	uint16_t x12 = 0U;
	int32_t t2 = -241665715;

	t2 = (((x9^x10)-x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	uint16_t x14 = UINT16_MAX;
	int32_t x15 = INT32_MIN;
	int16_t x16 = -1;
	volatile int32_t t3 = 2;

	t3 = (((x13^x14)-x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 7U;
	volatile int8_t x26 = INT8_MAX;
	static int32_t x27 = INT32_MIN;
	static uint8_t x28 = UINT8_MAX;

	t4 = (((x25^x26)-x27)<=x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 54659LLU;
	int8_t x31 = INT8_MAX;
	volatile int32_t x32 = -638;
	volatile int32_t t5 = -644159;

	t5 = (((x29^x30)-x31)<=x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x34 = 72U;
	int16_t x35 = -1;
	volatile int32_t t6 = -51028158;

	t6 = (((x33^x34)-x35)<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x38 = INT32_MAX;
	int8_t x39 = -1;
	volatile uint32_t x40 = 54661500U;
	volatile int32_t t7 = -2305;

	t7 = (((x37^x38)-x39)<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -1;
	static int16_t x42 = -4;
	int64_t x43 = -246LL;
	int32_t x44 = 5823681;
	volatile int32_t t8 = 1129;

	t8 = (((x41^x42)-x43)<=x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x45 = -55;
	uint16_t x46 = UINT16_MAX;
	static int64_t x47 = -1LL;
	int32_t t9 = -11098555;

	t9 = (((x45^x46)-x47)<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = INT64_MAX;
	static int8_t x50 = INT8_MIN;
	volatile uint64_t x51 = UINT64_MAX;
	uint64_t x52 = 463489702725099LLU;
	volatile int32_t t10 = 374193513;

	t10 = (((x49^x50)-x51)<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x53 = INT32_MIN;
	int8_t x54 = INT8_MAX;
	uint8_t x55 = 55U;
	int32_t x56 = INT32_MIN;
	static volatile int32_t t11 = 78687898;

	t11 = (((x53^x54)-x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = 0;
	int64_t x59 = -1LL;
	volatile uint32_t x60 = 257217422U;
	int32_t t12 = -1;

	t12 = (((x57^x58)-x59)<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = -213016986453714LL;
	int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	static int16_t x64 = INT16_MIN;

	t13 = (((x61^x62)-x63)<=x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -27;
	int64_t x66 = -1LL;
	int8_t x67 = INT8_MAX;
	volatile int32_t t14 = -4;

	t14 = (((x65^x66)-x67)<=x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = -1;
	uint32_t x72 = 0U;
	volatile int32_t t15 = 14;

	t15 = (((x69^x70)-x71)<=x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 109659LL;
	uint8_t x74 = 0U;
	int16_t x75 = -1;
	int32_t x76 = INT32_MAX;
	volatile int32_t t16 = 1;

	t16 = (((x73^x74)-x75)<=x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = 88;
	uint8_t x79 = UINT8_MAX;
	int16_t x80 = 1;
	int32_t t17 = 2;

	t17 = (((x77^x78)-x79)<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -2645;
	static int8_t x86 = INT8_MAX;
	int64_t x87 = -1LL;

	t18 = (((x85^x86)-x87)<=x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = 0;
	int64_t x90 = -445LL;
	static int32_t x91 = INT32_MIN;
	int8_t x92 = -1;
	volatile int32_t t19 = -1054;

	t19 = (((x89^x90)-x91)<=x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = -7;
	static volatile int64_t x94 = INT64_MAX;
	int64_t x95 = INT64_MIN;
	int32_t x96 = INT32_MIN;

	t20 = (((x93^x94)-x95)<=x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x97 = INT32_MAX;
	int64_t x98 = INT64_MAX;
	uint64_t x99 = 101145596251LLU;
	volatile uint32_t x100 = 1075337U;
	static int32_t t21 = 16;

	t21 = (((x97^x98)-x99)<=x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = INT32_MIN;
	int8_t x103 = 47;
	uint8_t x104 = 18U;
	volatile int32_t t22 = -17;

	t22 = (((x101^x102)-x103)<=x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x106 = 4360660LLU;
	static int32_t x107 = -310316;
	int16_t x108 = -1;
	volatile int32_t t23 = 942926050;

	t23 = (((x105^x106)-x107)<=x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x109 = INT32_MIN;
	static uint64_t x110 = 168974867LLU;
	uint8_t x111 = 105U;
	int32_t x112 = INT32_MIN;
	static int32_t t24 = 134014889;

	t24 = (((x109^x110)-x111)<=x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = 411;
	int16_t x114 = -1;
	int8_t x115 = 0;
	volatile uint64_t x116 = 8569968383045252LLU;
	int32_t t25 = -139193;

	t25 = (((x113^x114)-x115)<=x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -1LL;

	t26 = (((x117^x118)-x119)<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = 9804;
	volatile int8_t x123 = -1;
	int8_t x124 = -44;
	static int32_t t27 = -427831;

	t27 = (((x121^x122)-x123)<=x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = -474;
	static int8_t x127 = -1;

	t28 = (((x125^x126)-x127)<=x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 126648101U;
	int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t29 = -595901;

	t29 = (((x129^x130)-x131)<=x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = INT32_MIN;
	static int64_t x134 = INT64_MIN;
	static volatile uint32_t x135 = 2883591U;
	int16_t x136 = INT16_MIN;
	volatile int32_t t30 = -1000241;

	t30 = (((x133^x134)-x135)<=x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = 1;
	uint16_t x139 = 9705U;
	uint8_t x140 = 2U;
	volatile int32_t t31 = 24;

	t31 = (((x137^x138)-x139)<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x143 = 26144218LLU;
	int8_t x144 = 0;
	volatile int32_t t32 = -736537790;

	t32 = (((x141^x142)-x143)<=x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x146 = INT8_MIN;
	static uint64_t x147 = UINT64_MAX;
	volatile int8_t x148 = -1;
	int32_t t33 = -964139;

	t33 = (((x145^x146)-x147)<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x149 = 52U;
	int16_t x150 = INT16_MAX;
	int64_t x151 = -249703166236172LL;
	static volatile int32_t t34 = 800830241;

	t34 = (((x149^x150)-x151)<=x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x154 = INT64_MIN;
	uint8_t x155 = UINT8_MAX;
	int64_t x156 = -1LL;
	int32_t t35 = -44205;

	t35 = (((x153^x154)-x155)<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = INT16_MIN;
	int16_t x158 = INT16_MAX;
	volatile int16_t x159 = 31;
	static uint32_t x160 = 1802209026U;
	int32_t t36 = -54376906;

	t36 = (((x157^x158)-x159)<=x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x161 = INT16_MIN;
	int32_t x163 = -132977;

	t37 = (((x161^x162)-x163)<=x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = UINT64_MAX;
	static int64_t x166 = INT64_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t38 = 750936;

	t38 = (((x165^x166)-x167)<=x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x169 = 5195U;
	uint32_t x170 = 103127126U;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = INT16_MIN;

	t39 = (((x169^x170)-x171)<=x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x179 = -1;
	static int8_t x180 = -1;

	t40 = (((x177^x178)-x179)<=x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = 0;
	volatile int64_t x182 = -1145LL;
	static uint32_t x183 = UINT32_MAX;
	int8_t x184 = INT8_MAX;
	int32_t t41 = -7558055;

	t41 = (((x181^x182)-x183)<=x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x186 = 737;
	volatile int8_t x187 = INT8_MIN;
	volatile int32_t t42 = 8;

	t42 = (((x185^x186)-x187)<=x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x189 = INT64_MAX;
	static int8_t x190 = 17;
	volatile uint64_t x191 = UINT64_MAX;
	volatile uint64_t x192 = UINT64_MAX;
	int32_t t43 = 603042;

	t43 = (((x189^x190)-x191)<=x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = INT8_MIN;
	static uint16_t x194 = 236U;
	static uint64_t x195 = 4LLU;
	uint32_t x196 = UINT32_MAX;

	t44 = (((x193^x194)-x195)<=x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = INT64_MIN;
	uint16_t x204 = 18U;
	volatile int32_t t45 = 7137;

	t45 = (((x201^x202)-x203)<=x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x205 = -1;
	volatile int16_t x206 = 1;
	int8_t x207 = INT8_MIN;
	int64_t x208 = 1559929LL;
	volatile int32_t t46 = -1;

	t46 = (((x205^x206)-x207)<=x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = 608268;
	static uint16_t x210 = 11542U;
	int64_t x212 = INT64_MIN;
	volatile int32_t t47 = -2045141;

	t47 = (((x209^x210)-x211)<=x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 1U;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = 19;
	volatile int8_t x216 = INT8_MIN;
	int32_t t48 = -22;

	t48 = (((x213^x214)-x215)<=x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x217 = 456;
	int16_t x219 = -1;
	volatile int32_t t49 = 38044598;

	t49 = (((x217^x218)-x219)<=x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x221 = UINT8_MAX;
	volatile int8_t x222 = -2;
	uint8_t x224 = 21U;

	t50 = (((x221^x222)-x223)<=x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = -188714994;
	int32_t x226 = INT32_MIN;
	int8_t x228 = INT8_MAX;
	volatile int32_t t51 = 107226;

	t51 = (((x225^x226)-x227)<=x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x230 = 771016229835LLU;
	int64_t x231 = -1LL;
	int16_t x232 = 0;

	t52 = (((x229^x230)-x231)<=x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = UINT32_MAX;
	int64_t x235 = INT64_MIN;
	int64_t x236 = INT64_MAX;
	int32_t t53 = 8646392;

	t53 = (((x233^x234)-x235)<=x236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = -36;
	static int8_t x239 = INT8_MIN;
	int32_t x240 = INT32_MAX;

	t54 = (((x237^x238)-x239)<=x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x244 = 15313502U;
	int32_t t55 = 101699360;

	t55 = (((x241^x242)-x243)<=x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x245 = -1;
	int64_t x248 = INT64_MIN;
	volatile int32_t t56 = -7071838;

	t56 = (((x245^x246)-x247)<=x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = UINT64_MAX;
	uint32_t x250 = 233589388U;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t57 = -36600;

	t57 = (((x249^x250)-x251)<=x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x253 = INT64_MIN;
	uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MIN;
	int32_t t58 = 0;

	t58 = (((x253^x254)-x255)<=x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = INT16_MIN;
	static int8_t x258 = -2;
	int32_t x260 = INT32_MAX;
	int32_t t59 = 0;

	t59 = (((x257^x258)-x259)<=x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = INT64_MAX;
	static uint8_t x263 = 92U;
	int32_t t60 = -356245;

	t60 = (((x261^x262)-x263)<=x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x265 = UINT16_MAX;
	uint16_t x266 = 16466U;
	volatile uint32_t x267 = 26098659U;
	static volatile int32_t t61 = 729;

	t61 = (((x265^x266)-x267)<=x268);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x269 = UINT16_MAX;
	int64_t x270 = INT64_MIN;
	int16_t x271 = 75;
	volatile int64_t x272 = INT64_MIN;
	volatile int32_t t62 = 172482;

	t62 = (((x269^x270)-x271)<=x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = -1433;
	static int32_t x274 = -1;
	static int8_t x275 = -1;
	int32_t x276 = -3;
	volatile int32_t t63 = -62290;

	t63 = (((x273^x274)-x275)<=x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x277 = 12U;
	volatile uint8_t x278 = 88U;
	uint16_t x280 = 39U;

	t64 = (((x277^x278)-x279)<=x280);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {


	t65 = (((x281^x282)-x283)<=x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x285 = 102U;
	volatile uint8_t x286 = 22U;
	int64_t x287 = INT64_MAX;
	int64_t x288 = -3766132LL;
	volatile int32_t t66 = -149861061;

	t66 = (((x285^x286)-x287)<=x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x289 = 885277853;
	int16_t x290 = INT16_MIN;
	uint64_t x291 = 8777LLU;
	int8_t x292 = INT8_MIN;

	t67 = (((x289^x290)-x291)<=x292);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x293 = 2544726498234630776LLU;
	int16_t x295 = -1;
	static int8_t x296 = INT8_MIN;
	int32_t t68 = 158;

	t68 = (((x293^x294)-x295)<=x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x298 = 1104848891878137470LL;
	static int32_t x299 = -1;
	int32_t t69 = -46392;

	t69 = (((x297^x298)-x299)<=x300);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x301 = -53;
	uint64_t x303 = 72LLU;
	volatile int16_t x304 = 24;

	t70 = (((x301^x302)-x303)<=x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x305 = 877664LLU;
	int16_t x306 = -1;
	int64_t x308 = 19496LL;
	int32_t t71 = -1210;

	t71 = (((x305^x306)-x307)<=x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x309 = 5;
	volatile int8_t x310 = 11;
	int8_t x311 = INT8_MIN;
	uint64_t x312 = 265988462495LLU;
	volatile int32_t t72 = 62588692;

	t72 = (((x309^x310)-x311)<=x312);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x313 = INT8_MIN;
	static int16_t x314 = -1;
	uint16_t x315 = UINT16_MAX;
	int32_t t73 = -140643296;

	t73 = (((x313^x314)-x315)<=x316);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x321 = 3U;
	uint32_t x322 = UINT32_MAX;
	int64_t x323 = INT64_MAX;
	volatile int32_t t74 = 2967187;

	t74 = (((x321^x322)-x323)<=x324);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x325 = INT8_MIN;
	int16_t x326 = 1;
	uint64_t x327 = 3477LLU;
	uint64_t x328 = 981847864257LLU;
	static volatile int32_t t75 = -62429;

	t75 = (((x325^x326)-x327)<=x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x329 = 7660588520LLU;
	int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MIN;
	volatile uint8_t x332 = UINT8_MAX;
	int32_t t76 = 529016188;

	t76 = (((x329^x330)-x331)<=x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MIN;
	int8_t x335 = 1;
	int64_t x336 = 4332442255301LL;
	volatile int32_t t77 = -227817;

	t77 = (((x333^x334)-x335)<=x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = INT8_MAX;
	int64_t x338 = 14698546666LL;
	uint32_t x339 = UINT32_MAX;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t78 = 3487992;

	t78 = (((x337^x338)-x339)<=x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x341 = INT8_MAX;
	uint32_t x343 = 162U;
	uint16_t x344 = UINT16_MAX;
	static int32_t t79 = 337899;

	t79 = (((x341^x342)-x343)<=x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x345 = -1;
	uint32_t x347 = 331011004U;
	int32_t x348 = INT32_MAX;

	t80 = (((x345^x346)-x347)<=x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x349 = INT32_MIN;
	static int64_t x350 = INT64_MIN;
	static volatile int32_t x352 = INT32_MIN;
	volatile int32_t t81 = 200564777;

	t81 = (((x349^x350)-x351)<=x352);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = -1722LL;
	volatile int8_t x355 = INT8_MIN;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t82 = -184001;

	t82 = (((x353^x354)-x355)<=x356);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x357 = 465393116U;
	volatile uint32_t x358 = UINT32_MAX;
	int32_t t83 = 0;

	t83 = (((x357^x358)-x359)<=x360);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x361 = 0;
	uint64_t x362 = UINT64_MAX;
	volatile int64_t x363 = -1LL;
	int32_t t84 = 948;

	t84 = (((x361^x362)-x363)<=x364);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = -1;
	uint8_t x366 = 3U;
	int32_t x367 = INT32_MIN;
	int8_t x368 = -25;
	volatile int32_t t85 = -7961048;

	t85 = (((x365^x366)-x367)<=x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x369 = INT8_MIN;
	int64_t x370 = 0LL;
	int32_t x371 = 11501;
	volatile int8_t x372 = -1;

	t86 = (((x369^x370)-x371)<=x372);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = -1LL;
	int32_t x374 = INT32_MIN;
	volatile int16_t x376 = -41;
	volatile int32_t t87 = 79;

	t87 = (((x373^x374)-x375)<=x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = INT8_MAX;
	static int32_t x379 = INT32_MAX;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t88 = 125597820;

	t88 = (((x377^x378)-x379)<=x380);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x381 = 0U;
	int32_t x383 = 47604693;
	int32_t x384 = 12744658;
	volatile int32_t t89 = 9633;

	t89 = (((x381^x382)-x383)<=x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x385 = 10U;
	static int16_t x386 = 16;
	static int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MAX;
	int32_t t90 = 15;

	t90 = (((x385^x386)-x387)<=x388);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x389 = UINT32_MAX;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 1U;
	int32_t t91 = 1410;

	t91 = (((x389^x390)-x391)<=x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x393 = 744618796617979LLU;
	static int8_t x394 = INT8_MIN;
	volatile int32_t x395 = -1;
	static int8_t x396 = 1;
	volatile int32_t t92 = 8090;

	t92 = (((x393^x394)-x395)<=x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = -1;
	volatile uint64_t x399 = UINT64_MAX;
	int8_t x400 = 1;
	int32_t t93 = -9651;

	t93 = (((x397^x398)-x399)<=x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = -1525;
	int16_t x402 = -1;
	int8_t x403 = INT8_MIN;
	static int8_t x404 = -1;
	volatile int32_t t94 = -12767;

	t94 = (((x401^x402)-x403)<=x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = INT8_MIN;
	static int16_t x410 = -2;
	int32_t x411 = 1047298777;

	t95 = (((x409^x410)-x411)<=x412);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x413 = INT32_MAX;
	int8_t x414 = INT8_MAX;
	int8_t x415 = 63;
	int32_t t96 = -1791;

	t96 = (((x413^x414)-x415)<=x416);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = INT16_MIN;
	static int8_t x418 = INT8_MIN;
	uint64_t x419 = UINT64_MAX;
	int64_t x420 = INT64_MAX;
	volatile int32_t t97 = 1;

	t97 = (((x417^x418)-x419)<=x420);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x425 = INT32_MIN;
	int16_t x426 = INT16_MIN;
	int8_t x427 = INT8_MIN;
	int32_t x428 = 997678;

	t98 = (((x425^x426)-x427)<=x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x430 = 967;
	volatile uint8_t x431 = 118U;
	int8_t x432 = INT8_MIN;

	t99 = (((x429^x430)-x431)<=x432);

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
