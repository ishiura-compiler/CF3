#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x5 = 115U;
static int8_t x6 = INT8_MIN;
int16_t x7 = INT16_MIN;
volatile int64_t x10 = 2001LL;
static int16_t x11 = 6;
int16_t x14 = -10;
int64_t x16 = -95618556855LL;
int16_t x23 = INT16_MAX;
uint8_t x26 = 8U;
int32_t x31 = -23779;
volatile int64_t x35 = -1LL;
int64_t x36 = -797521839LL;
uint64_t x39 = UINT64_MAX;
int8_t x45 = INT8_MIN;
int16_t x48 = -1;
int16_t x52 = -70;
static volatile int32_t t13 = -266705;
int64_t x70 = INT64_MIN;
static int64_t x71 = 91899193499804LL;
int16_t x76 = -1;
uint32_t x84 = 95262975U;
int32_t x94 = -1;
static volatile int32_t x95 = INT32_MIN;
int16_t x97 = 4647;
volatile int32_t t22 = 2799651;
int32_t x101 = INT32_MIN;
int32_t t23 = -1;
volatile int32_t t24 = 278;
int32_t x116 = INT32_MIN;
static uint16_t x126 = 1111U;
int8_t x127 = INT8_MIN;
int8_t x133 = -1;
int8_t x135 = -59;
volatile int16_t x138 = -1;
int16_t x141 = INT16_MIN;
int32_t x144 = INT32_MAX;
int16_t x145 = 457;
uint64_t x151 = 3419673404468837259LLU;
int64_t x152 = INT64_MIN;
volatile int8_t x159 = -1;
volatile int32_t x161 = -1;
static int64_t x171 = INT64_MIN;
uint32_t x181 = 1014596U;
int16_t x186 = INT16_MAX;
int32_t x187 = -1;
static int64_t x188 = INT64_MAX;
uint16_t x193 = 26U;
uint32_t x198 = 9U;
int64_t x200 = -19424812LL;
uint8_t x201 = 2U;
uint8_t x203 = 126U;
int8_t x205 = 36;
uint16_t x208 = 32595U;
int8_t x209 = INT8_MIN;
int32_t t47 = -1;
int32_t x218 = INT32_MIN;
uint16_t x220 = 0U;
static int8_t x221 = -7;
volatile int32_t t50 = 248;
int32_t x226 = 3715659;
static int32_t t52 = 1089;
volatile int8_t x234 = INT8_MIN;
int16_t x240 = INT16_MIN;
volatile int32_t t54 = 85499348;
volatile int64_t x241 = INT64_MIN;
volatile int8_t x244 = -1;
int32_t t55 = 5013;
int8_t x245 = -1;
static int64_t x249 = INT64_MIN;
uint64_t x251 = 6466389434572LLU;
static int8_t x252 = INT8_MIN;
volatile uint64_t x254 = 805552790773045759LLU;
static int8_t x260 = -1;
int16_t x261 = -1;
int32_t x264 = -88;
static int32_t t60 = -352;
int32_t t61 = -127262;
int32_t x271 = -1;
int64_t x272 = INT64_MAX;
static volatile uint32_t x275 = UINT32_MAX;
int32_t x280 = INT32_MAX;
uint64_t x282 = UINT64_MAX;
static int8_t x283 = INT8_MIN;
static volatile int32_t t65 = -248691;
uint16_t x286 = 1713U;
static volatile int64_t x294 = INT64_MAX;
int32_t t68 = 0;
uint64_t x299 = UINT64_MAX;
uint64_t x302 = 26130832338LLU;
volatile int32_t t71 = -97056553;
volatile int16_t x319 = INT16_MIN;
int32_t t74 = -10981;
int8_t x334 = -1;
int32_t x335 = INT32_MIN;
int16_t x341 = INT16_MIN;
static int32_t t79 = 928708546;
int8_t x351 = 36;
volatile int16_t x356 = -1;
uint64_t x359 = 779345345202LLU;
uint32_t x375 = 2U;
int16_t x379 = -95;
volatile int16_t x386 = INT16_MIN;
volatile uint8_t x387 = 15U;
volatile int8_t x390 = 16;
static volatile uint16_t x392 = 387U;
int32_t t92 = -5922770;
volatile int32_t t93 = -503;
int64_t x406 = -14224LL;
int32_t x410 = INT32_MIN;
uint32_t x414 = 293U;
volatile int32_t t96 = -2237854;
volatile int16_t x417 = -1;
int16_t x418 = -1;
static int32_t t97 = 264881;
int8_t x426 = INT8_MIN;


void f0(void) {
	static uint8_t x1 = 36U;
	static uint64_t x2 = 3013574128LLU;
	volatile int32_t x3 = INT32_MIN;
	int32_t x4 = -1855813;
	static int32_t t0 = -1;

	t0 = (x1<=((x2/x3)^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 1;

	t1 = (x5<=((x6/x7)^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint16_t x12 = 22U;
	int32_t t2 = 33;

	t2 = (x9<=((x10/x11)^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	uint32_t x15 = UINT32_MAX;
	int32_t t3 = 58;

	t3 = (x13<=((x14/x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x18 = INT64_MIN;
	static int64_t x19 = INT64_MIN;
	static int16_t x20 = -1;
	volatile int32_t t4 = -133;

	t4 = (x17<=((x18/x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 84U;
	static uint32_t x22 = 32376426U;
	int64_t x24 = INT64_MAX;
	int32_t t5 = 413509;

	t5 = (x21<=((x22/x23)^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 105U;
	int32_t x27 = 1;
	static uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = -19608177;

	t6 = (x25<=((x26/x27)^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 225;
	static uint16_t x30 = UINT16_MAX;
	volatile int16_t x32 = 13;
	int32_t t7 = 153337150;

	t7 = (x29<=((x30/x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 113U;
	int32_t x34 = -1;
	volatile int32_t t8 = -9219;

	t8 = (x33<=((x34/x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	static uint64_t x38 = UINT64_MAX;
	volatile uint16_t x40 = 5001U;
	int32_t t9 = -495688903;

	t9 = (x37<=((x38/x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	static int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MIN;
	static int8_t x44 = -7;
	int32_t t10 = 7711681;

	t10 = (x41<=((x42/x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = INT64_MAX;
	static int8_t x47 = INT8_MAX;
	int32_t t11 = 105288710;

	t11 = (x45<=((x46/x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 1;
	int8_t x50 = INT8_MIN;
	static int32_t x51 = INT32_MIN;
	int32_t t12 = -517756464;

	t12 = (x49<=((x50/x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 120U;
	volatile int32_t x54 = INT32_MIN;
	volatile uint32_t x55 = 914009975U;
	uint32_t x56 = UINT32_MAX;

	t13 = (x53<=((x54/x55)^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	uint64_t x62 = UINT64_MAX;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = 3U;
	int32_t t14 = 17064870;

	t14 = (x61<=((x62/x63)^x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 7502;
	volatile uint64_t x66 = 25360455LLU;
	uint32_t x67 = UINT32_MAX;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t15 = -1207;

	t15 = (x65<=((x66/x67)^x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	uint64_t x72 = 7LLU;
	volatile int32_t t16 = 40362031;

	t16 = (x69<=((x70/x71)^x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = -432344749058451LL;
	static int32_t x75 = INT32_MIN;
	volatile int32_t t17 = -1;

	t17 = (x73<=((x74/x75)^x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -844158707807LL;
	volatile int32_t x78 = -1031252;
	static int32_t x79 = -181073;
	int64_t x80 = 1LL;
	int32_t t18 = -5;

	t18 = (x77<=((x78/x79)^x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	static volatile uint64_t x82 = 651558LLU;
	uint32_t x83 = 13573U;
	int32_t t19 = 5;

	t19 = (x81<=((x82/x83)^x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	int64_t x86 = -1LL;
	uint16_t x87 = 69U;
	int64_t x88 = -2999495152216321LL;
	volatile int32_t t20 = 31947687;

	t20 = (x85<=((x86/x87)^x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = INT8_MIN;
	volatile uint8_t x96 = 5U;
	volatile int32_t t21 = 2235131;

	t21 = (x93<=((x94/x95)^x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x98 = INT64_MAX;
	int32_t x99 = INT32_MIN;
	volatile int64_t x100 = INT64_MIN;

	t22 = (x97<=((x98/x99)^x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = -1LL;
	volatile int64_t x104 = INT64_MAX;

	t23 = (x101<=((x102/x103)^x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	static int64_t x106 = -1LL;
	int16_t x107 = -4;
	int32_t x108 = INT32_MIN;

	t24 = (x105<=((x106/x107)^x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x113 = INT8_MIN;
	uint16_t x114 = 4035U;
	int8_t x115 = -16;
	int32_t t25 = 2;

	t25 = (x113<=((x114/x115)^x116));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = 1;
	int32_t x122 = INT32_MIN;
	uint16_t x123 = 483U;
	volatile uint64_t x124 = 18073619552LLU;
	int32_t t26 = 41323274;

	t26 = (x121<=((x122/x123)^x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x125 = 4U;
	int16_t x128 = INT16_MIN;
	static int32_t t27 = 21;

	t27 = (x125<=((x126/x127)^x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MIN;
	int32_t x132 = INT32_MAX;
	int32_t t28 = -51;

	t28 = (x129<=((x130/x131)^x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x134 = 2560U;
	static volatile int16_t x136 = 3;
	static volatile int32_t t29 = -1992617;

	t29 = (x133<=((x134/x135)^x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 1U;
	static int32_t x139 = -1;
	uint64_t x140 = 6LLU;
	static int32_t t30 = 307603;

	t30 = (x137<=((x138/x139)^x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x142 = UINT16_MAX;
	int32_t x143 = -1;
	volatile int32_t t31 = -8313993;

	t31 = (x141<=((x142/x143)^x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x146 = INT64_MAX;
	static uint64_t x147 = UINT64_MAX;
	uint32_t x148 = 6563U;
	int32_t t32 = -14684;

	t32 = (x145<=((x146/x147)^x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = UINT16_MAX;
	int64_t x150 = -55514394315384LL;
	volatile int32_t t33 = -9833;

	t33 = (x149<=((x150/x151)^x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x153 = 0U;
	volatile int32_t x154 = INT32_MIN;
	int16_t x155 = 85;
	volatile uint16_t x156 = 1626U;
	int32_t t34 = -474807414;

	t34 = (x153<=((x154/x155)^x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = 11U;
	uint16_t x158 = 3U;
	int32_t x160 = INT32_MAX;
	static volatile int32_t t35 = 6;

	t35 = (x157<=((x158/x159)^x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x162 = -1;
	int32_t x163 = 53;
	uint64_t x164 = 14LLU;
	volatile int32_t t36 = 6640;

	t36 = (x161<=((x162/x163)^x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x165 = -1;
	int16_t x166 = -7884;
	static int64_t x167 = -8LL;
	volatile int16_t x168 = INT16_MIN;
	int32_t t37 = -1;

	t37 = (x165<=((x166/x167)^x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MAX;
	int16_t x170 = -13043;
	int64_t x172 = -1LL;
	static volatile int32_t t38 = -13680;

	t38 = (x169<=((x170/x171)^x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;
	int32_t x179 = 6;
	int64_t x180 = 37221065749700LL;
	volatile int32_t t39 = 2;

	t39 = (x177<=((x178/x179)^x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x182 = UINT8_MAX;
	int16_t x183 = -1;
	uint64_t x184 = 902013024LLU;
	static int32_t t40 = 15489;

	t40 = (x181<=((x182/x183)^x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 644LLU;
	static volatile int32_t t41 = -747046;

	t41 = (x185<=((x186/x187)^x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = UINT8_MAX;
	volatile int64_t x190 = 26709122LL;
	volatile int16_t x191 = 189;
	static uint16_t x192 = UINT16_MAX;
	static int32_t t42 = -3;

	t42 = (x189<=((x190/x191)^x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x194 = 2870U;
	int8_t x195 = -1;
	int64_t x196 = -3LL;
	volatile int32_t t43 = 11667805;

	t43 = (x193<=((x194/x195)^x196));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = 16;
	int8_t x199 = -14;
	int32_t t44 = -14;

	t44 = (x197<=((x198/x199)^x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x202 = 1009U;
	static int8_t x204 = 11;
	static volatile int32_t t45 = -213516097;

	t45 = (x201<=((x202/x203)^x204));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x206 = -1;
	static int64_t x207 = INT64_MAX;
	int32_t t46 = 840351;

	t46 = (x205<=((x206/x207)^x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x210 = 3043243985LLU;
	int64_t x211 = 960718LL;
	int8_t x212 = INT8_MIN;

	t47 = (x209<=((x210/x211)^x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x213 = -137;
	volatile int16_t x214 = -6688;
	uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t48 = 34679;

	t48 = (x213<=((x214/x215)^x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;
	volatile int32_t t49 = -11;

	t49 = (x217<=((x218/x219)^x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x222 = 19;
	int32_t x223 = -1;
	uint8_t x224 = 1U;

	t50 = (x221<=((x222/x223)^x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = -1045112LL;
	int16_t x227 = INT16_MIN;
	static int8_t x228 = INT8_MAX;
	int32_t t51 = 48244;

	t51 = (x225<=((x226/x227)^x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x229 = INT8_MAX;
	int32_t x230 = 7395;
	volatile int8_t x231 = -1;
	int64_t x232 = -1LL;

	t52 = (x229<=((x230/x231)^x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = 6LLU;
	int16_t x235 = INT16_MIN;
	volatile uint64_t x236 = UINT64_MAX;
	static volatile int32_t t53 = 28652;

	t53 = (x233<=((x234/x235)^x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = 156176209891LL;
	volatile uint64_t x238 = 84116904LLU;
	int32_t x239 = -236;

	t54 = (x237<=((x238/x239)^x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x242 = UINT64_MAX;
	volatile int64_t x243 = 13467592641810794LL;

	t55 = (x241<=((x242/x243)^x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x246 = 19;
	uint8_t x247 = 47U;
	static volatile int16_t x248 = 0;
	volatile int32_t t56 = 0;

	t56 = (x245<=((x246/x247)^x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x250 = UINT64_MAX;
	static int32_t t57 = 4515705;

	t57 = (x249<=((x250/x251)^x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x253 = 128LL;
	static uint16_t x255 = 3U;
	int32_t x256 = INT32_MIN;
	static int32_t t58 = 6016223;

	t58 = (x253<=((x254/x255)^x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x257 = INT16_MIN;
	uint64_t x258 = 3843931998LLU;
	int8_t x259 = -1;
	int32_t t59 = -2065972;

	t59 = (x257<=((x258/x259)^x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x262 = 2097U;
	int32_t x263 = -6;

	t60 = (x261<=((x262/x263)^x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	volatile uint32_t x266 = UINT32_MAX;
	static uint16_t x267 = 5U;
	uint16_t x268 = UINT16_MAX;

	t61 = (x265<=((x266/x267)^x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x269 = INT16_MIN;
	uint16_t x270 = 9U;
	volatile int32_t t62 = 86;

	t62 = (x269<=((x270/x271)^x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = INT8_MIN;
	int32_t x274 = -8;
	int64_t x276 = INT64_MIN;
	volatile int32_t t63 = -130631;

	t63 = (x273<=((x274/x275)^x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x277 = INT16_MIN;
	volatile int8_t x278 = INT8_MAX;
	volatile uint16_t x279 = 23143U;
	volatile int32_t t64 = -409699645;

	t64 = (x277<=((x278/x279)^x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -1;
	int64_t x284 = -1022837223LL;

	t65 = (x281<=((x282/x283)^x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x287 = INT8_MAX;
	volatile uint8_t x288 = 3U;
	static int32_t t66 = 271;

	t66 = (x285<=((x286/x287)^x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x289 = -1;
	int32_t x290 = INT32_MAX;
	static uint16_t x291 = 10070U;
	volatile int64_t x292 = -1LL;
	volatile int32_t t67 = -1023696;

	t67 = (x289<=((x290/x291)^x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x293 = INT32_MAX;
	uint64_t x295 = 6437141LLU;
	int16_t x296 = INT16_MIN;

	t68 = (x293<=((x294/x295)^x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x297 = UINT64_MAX;
	int16_t x298 = INT16_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t69 = -11;

	t69 = (x297<=((x298/x299)^x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = -516;
	uint64_t x303 = 17731992342359094LLU;
	static uint32_t x304 = UINT32_MAX;
	int32_t t70 = 12;

	t70 = (x301<=((x302/x303)^x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x305 = -1;
	volatile int8_t x306 = -1;
	static uint64_t x307 = 96790673478370187LLU;
	int16_t x308 = INT16_MAX;

	t71 = (x305<=((x306/x307)^x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x309 = 19U;
	int32_t x310 = INT32_MIN;
	int64_t x311 = 1696438081339LL;
	volatile int8_t x312 = 6;
	volatile int32_t t72 = -1620640;

	t72 = (x309<=((x310/x311)^x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 895U;
	uint8_t x314 = 53U;
	uint16_t x315 = 169U;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t73 = 0;

	t73 = (x313<=((x314/x315)^x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x317 = 1981009560641534718LLU;
	int64_t x318 = INT64_MIN;
	static int32_t x320 = -2;

	t74 = (x317<=((x318/x319)^x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x321 = -476397935;
	static int16_t x322 = 0;
	static int32_t x323 = INT32_MIN;
	int8_t x324 = INT8_MAX;
	static int32_t t75 = 5020;

	t75 = (x321<=((x322/x323)^x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x329 = UINT64_MAX;
	volatile int8_t x330 = -1;
	int8_t x331 = 2;
	int16_t x332 = INT16_MIN;
	volatile int32_t t76 = 1477;

	t76 = (x329<=((x330/x331)^x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = 0U;
	int8_t x336 = 1;
	volatile int32_t t77 = -2;

	t77 = (x333<=((x334/x335)^x336));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x337 = 69780124U;
	static volatile uint8_t x338 = UINT8_MAX;
	int32_t x339 = INT32_MIN;
	int8_t x340 = INT8_MIN;
	static int32_t t78 = 351402;

	t78 = (x337<=((x338/x339)^x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x342 = INT16_MAX;
	uint32_t x343 = UINT32_MAX;
	volatile uint64_t x344 = UINT64_MAX;

	t79 = (x341<=((x342/x343)^x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x345 = 15137291LLU;
	static volatile uint64_t x346 = UINT64_MAX;
	volatile int32_t x347 = -23198841;
	static int16_t x348 = -7;
	volatile int32_t t80 = 11590831;

	t80 = (x345<=((x346/x347)^x348));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x349 = -45;
	uint8_t x350 = 4U;
	int32_t x352 = -1;
	volatile int32_t t81 = -2;

	t81 = (x349<=((x350/x351)^x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x353 = 10340U;
	volatile int16_t x354 = -5;
	uint8_t x355 = UINT8_MAX;
	volatile int32_t t82 = -4;

	t82 = (x353<=((x354/x355)^x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = 55;
	int8_t x358 = INT8_MIN;
	uint64_t x360 = 238215382093LLU;
	int32_t t83 = 240942;

	t83 = (x357<=((x358/x359)^x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = 5;
	int64_t x362 = INT64_MAX;
	int16_t x363 = INT16_MIN;
	uint8_t x364 = 44U;
	volatile int32_t t84 = -1;

	t84 = (x361<=((x362/x363)^x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x365 = INT32_MIN;
	uint64_t x366 = 1LLU;
	volatile uint16_t x367 = 2U;
	int8_t x368 = 1;
	static int32_t t85 = -731;

	t85 = (x365<=((x366/x367)^x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x369 = UINT64_MAX;
	static uint32_t x370 = 159155U;
	int32_t x371 = INT32_MIN;
	static uint16_t x372 = 1497U;
	volatile int32_t t86 = -623078;

	t86 = (x369<=((x370/x371)^x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x373 = -1;
	uint8_t x374 = 4U;
	int16_t x376 = 665;
	int32_t t87 = 5025;

	t87 = (x373<=((x374/x375)^x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x377 = UINT8_MAX;
	int32_t x378 = INT32_MIN;
	int64_t x380 = 2267034841113142LL;
	static volatile int32_t t88 = 209;

	t88 = (x377<=((x378/x379)^x380));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = INT32_MIN;
	int32_t x382 = INT32_MAX;
	int8_t x383 = 1;
	static volatile int64_t x384 = 15607LL;
	volatile int32_t t89 = -56361177;

	t89 = (x381<=((x382/x383)^x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x385 = INT8_MAX;
	static uint32_t x388 = 64U;
	static volatile int32_t t90 = -592405400;

	t90 = (x385<=((x386/x387)^x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x389 = 287U;
	static int32_t x391 = 1761;
	int32_t t91 = 287834;

	t91 = (x389<=((x390/x391)^x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = INT64_MIN;
	int16_t x394 = INT16_MAX;
	int64_t x395 = -249284152438LL;
	uint8_t x396 = 33U;

	t92 = (x393<=((x394/x395)^x396));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x401 = -1LL;
	int16_t x402 = 11884;
	volatile uint8_t x403 = UINT8_MAX;
	static int32_t x404 = -1;

	t93 = (x401<=((x402/x403)^x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x405 = 2LLU;
	int16_t x407 = 3650;
	int8_t x408 = INT8_MIN;
	int32_t t94 = -36270;

	t94 = (x405<=((x406/x407)^x408));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x409 = UINT16_MAX;
	int16_t x411 = INT16_MIN;
	uint8_t x412 = 60U;
	int32_t t95 = 3;

	t95 = (x409<=((x410/x411)^x412));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x413 = INT16_MIN;
	uint16_t x415 = 9648U;
	uint8_t x416 = 10U;

	t96 = (x413<=((x414/x415)^x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x419 = 1;
	uint16_t x420 = 17U;

	t97 = (x417<=((x418/x419)^x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = INT32_MAX;
	int64_t x422 = 50223880LL;
	static int64_t x423 = INT64_MIN;
	volatile int64_t x424 = INT64_MIN;
	int32_t t98 = -5109798;

	t98 = (x421<=((x422/x423)^x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x425 = INT32_MAX;
	static uint16_t x427 = 5U;
	int16_t x428 = INT16_MIN;
	int32_t t99 = 1;

	t99 = (x425<=((x426/x427)^x428));

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

