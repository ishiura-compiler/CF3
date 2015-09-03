#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -39;
static int32_t t0 = 0;
int16_t x6 = -2650;
static volatile int32_t t1 = 46;
static int64_t x13 = INT64_MIN;
volatile int32_t t3 = 3241;
int32_t t5 = 2;
volatile uint8_t x43 = 1U;
volatile int32_t t12 = 94135;
int32_t x63 = INT32_MIN;
int8_t x75 = -1;
int8_t x76 = INT8_MIN;
static int8_t x79 = INT8_MAX;
uint16_t x81 = 2U;
uint16_t x82 = UINT16_MAX;
static volatile int32_t x84 = INT32_MAX;
volatile int32_t t20 = 42931;
uint8_t x90 = 67U;
volatile uint32_t x94 = 5913U;
int8_t x95 = INT8_MAX;
int8_t x96 = 0;
int32_t t22 = -191;
int64_t x99 = INT64_MIN;
static int8_t x105 = 51;
int32_t t25 = 71693;
static int16_t x123 = -3;
volatile int8_t x124 = INT8_MAX;
static int8_t x128 = -37;
int64_t x134 = -3174LL;
int8_t x135 = INT8_MAX;
uint8_t x137 = 1U;
volatile int32_t t33 = 5523;
uint16_t x141 = 48U;
int32_t x142 = INT32_MIN;
int8_t x144 = -3;
static int32_t x155 = INT32_MIN;
static int8_t x161 = -1;
static int32_t t39 = -89971167;
int8_t x172 = -1;
volatile int32_t t41 = -564;
int64_t x174 = INT64_MIN;
static int64_t x178 = -1LL;
int32_t x186 = INT32_MAX;
uint16_t x194 = 1743U;
uint16_t x198 = UINT16_MAX;
volatile int32_t t48 = -472093;
int64_t x204 = -15252545654333627LL;
volatile int8_t x208 = -1;
volatile int32_t t50 = 595;
volatile int32_t t51 = -56;
volatile int16_t x215 = INT16_MIN;
volatile int32_t t52 = 53;
uint64_t x227 = 306LLU;
volatile uint8_t x229 = 2U;
static int32_t x231 = -1;
volatile uint16_t x234 = 15473U;
volatile int64_t x239 = INT64_MAX;
static volatile int32_t t58 = 25203937;
uint64_t x244 = 6968870522361689948LLU;
static int32_t t59 = 10495;
uint32_t x248 = 1U;
static uint8_t x251 = 80U;
uint8_t x262 = 11U;
int64_t x264 = INT64_MAX;
volatile int8_t x266 = 28;
static int32_t x273 = INT32_MIN;
int64_t x276 = -1LL;
static volatile int32_t t66 = -10024;
int8_t x279 = -1;
uint32_t x282 = 460223113U;
volatile uint16_t x283 = 9U;
static volatile uint8_t x284 = 117U;
volatile int64_t x289 = 10305900LL;
volatile int32_t x292 = INT32_MIN;
volatile int8_t x299 = INT8_MAX;
volatile int32_t t72 = 1823837;
static int32_t x303 = 1;
volatile int64_t x306 = -7054005013687605LL;
int16_t x315 = INT16_MIN;
static uint32_t x321 = 21050412U;
int32_t t79 = -6225224;
volatile int16_t x329 = -1;
int64_t x333 = INT64_MAX;
volatile int32_t t81 = 761256;
uint64_t x350 = 119963189436974420LLU;
volatile int16_t x351 = INT16_MIN;
volatile int8_t x356 = -1;
static uint64_t x357 = 3492LLU;
int32_t x358 = -1;
static uint8_t x360 = 87U;
volatile int32_t t87 = 4037514;
uint64_t x368 = 7033LLU;
int8_t x369 = INT8_MIN;
uint8_t x379 = 3U;
static uint32_t x381 = UINT32_MAX;
uint16_t x391 = 725U;
uint64_t x393 = 10105433LLU;
static int32_t x396 = INT32_MIN;
volatile int32_t t96 = 3;
volatile uint16_t x406 = UINT16_MAX;


void f0(void) {
	volatile int16_t x1 = -8;
	int64_t x2 = 740330LL;
	int32_t x3 = INT32_MIN;

	t0 = (((x1/x2)^x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	volatile int8_t x7 = -1;
	static uint32_t x8 = 15163U;

	t1 = (((x5/x6)^x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint16_t x10 = 102U;
	uint32_t x11 = 203342629U;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = 2512752;

	t2 = (((x9/x10)^x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = 961U;
	static int8_t x15 = INT8_MIN;
	volatile int16_t x16 = INT16_MIN;

	t3 = (((x13/x14)^x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -34822726;
	volatile uint8_t x18 = 102U;
	uint64_t x19 = UINT64_MAX;
	int16_t x20 = -1;
	int32_t t4 = -7;

	t4 = (((x17/x18)^x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 12U;
	int64_t x22 = INT64_MIN;
	uint8_t x23 = 5U;
	static int16_t x24 = INT16_MAX;

	t5 = (((x21/x22)^x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	volatile int32_t x30 = INT32_MIN;
	static int16_t x31 = -7;
	int32_t x32 = INT32_MIN;
	static int32_t t6 = 0;

	t6 = (((x29/x30)^x31)<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 9193220784LL;
	int32_t x34 = 84863;
	uint16_t x35 = 16U;
	int64_t x36 = -1LL;
	int32_t t7 = 224;

	t7 = (((x33/x34)^x35)<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 19956U;
	int16_t x38 = INT16_MIN;
	static int64_t x39 = -1011LL;
	static int64_t x40 = -4LL;
	volatile int32_t t8 = -1971977;

	t8 = (((x37/x38)^x39)<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 3U;
	int32_t x42 = INT32_MIN;
	int64_t x44 = -1LL;
	volatile int32_t t9 = 14;

	t9 = (((x41/x42)^x43)<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 310597167765LLU;
	static uint16_t x46 = 114U;
	uint64_t x47 = 45303LLU;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t10 = 1833;

	t10 = (((x45/x46)^x47)<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 6U;
	volatile uint32_t x50 = 173056U;
	volatile uint8_t x51 = UINT8_MAX;
	uint32_t x52 = 4625888U;
	int32_t t11 = 17;

	t11 = (((x49/x50)^x51)<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 0U;
	int32_t x54 = 192996658;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = -1;

	t12 = (((x53/x54)^x55)<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -105117LL;
	uint64_t x58 = 22LLU;
	volatile int16_t x59 = 6203;
	static int32_t x60 = INT32_MAX;
	int32_t t13 = -2213;

	t13 = (((x57/x58)^x59)<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	int8_t x62 = INT8_MIN;
	int32_t x64 = INT32_MIN;
	volatile int32_t t14 = 1998;

	t14 = (((x61/x62)^x63)<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = -1LL;
	static int16_t x67 = -3665;
	static uint32_t x68 = UINT32_MAX;
	volatile int32_t t15 = -1;

	t15 = (((x65/x66)^x67)<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 0;
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 10LLU;
	volatile int32_t t16 = 3026895;

	t16 = (((x69/x70)^x71)<=x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x73 = -1;
	static uint64_t x74 = 1LLU;
	int32_t t17 = 331;

	t17 = (((x73/x74)^x75)<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MAX;
	uint64_t x78 = 5163285467301344LLU;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t18 = 1173;

	t18 = (((x77/x78)^x79)<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x83 = 0LL;
	int32_t t19 = -483406449;

	t19 = (((x81/x82)^x83)<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MAX;
	static int16_t x86 = -3757;
	uint16_t x87 = 23U;
	int32_t x88 = -19191299;

	t20 = (((x85/x86)^x87)<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 9LL;
	int32_t x91 = INT32_MIN;
	int32_t x92 = -1;
	int32_t t21 = -13520;

	t21 = (((x89/x90)^x91)<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = INT16_MIN;

	t22 = (((x93/x94)^x95)<=x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = INT32_MIN;
	int64_t x98 = -1LL;
	int32_t x100 = -1;
	static int32_t t23 = 1;

	t23 = (((x97/x98)^x99)<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = 7;
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	int32_t x104 = -1;
	volatile int32_t t24 = 6;

	t24 = (((x101/x102)^x103)<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x106 = -147;
	uint8_t x107 = 88U;
	volatile int8_t x108 = 0;

	t25 = (((x105/x106)^x107)<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 0U;
	static uint16_t x110 = UINT16_MAX;
	int64_t x111 = INT64_MAX;
	int8_t x112 = INT8_MIN;
	volatile int32_t t26 = -304;

	t26 = (((x109/x110)^x111)<=x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MIN;
	int8_t x114 = -40;
	uint16_t x115 = UINT16_MAX;
	static uint64_t x116 = 1562896284948409LLU;
	volatile int32_t t27 = -43465;

	t27 = (((x113/x114)^x115)<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x117 = 0LLU;
	static int64_t x118 = 4403704LL;
	static volatile int64_t x119 = INT64_MIN;
	volatile int8_t x120 = -1;
	volatile int32_t t28 = 28590647;

	t28 = (((x117/x118)^x119)<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	int32_t t29 = -1987;

	t29 = (((x121/x122)^x123)<=x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	volatile uint32_t x126 = 11271U;
	static uint32_t x127 = UINT32_MAX;
	static int32_t t30 = 455567603;

	t30 = (((x125/x126)^x127)<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 956U;
	static uint64_t x130 = 1535755327079681LLU;
	int16_t x131 = INT16_MIN;
	volatile int16_t x132 = -1;
	int32_t t31 = 67;

	t31 = (((x129/x130)^x131)<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = INT8_MIN;
	volatile int16_t x136 = 1;
	volatile int32_t t32 = -1650;

	t32 = (((x133/x134)^x135)<=x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x138 = -129937;
	int16_t x139 = INT16_MAX;
	int16_t x140 = -1;

	t33 = (((x137/x138)^x139)<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x143 = 11623U;
	int32_t t34 = -73510;

	t34 = (((x141/x142)^x143)<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	int64_t x146 = INT64_MAX;
	uint8_t x147 = UINT8_MAX;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t35 = 1028460;

	t35 = (((x145/x146)^x147)<=x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -1LL;
	uint64_t x150 = UINT64_MAX;
	uint16_t x151 = UINT16_MAX;
	volatile uint32_t x152 = 310151398U;
	int32_t t36 = 47;

	t36 = (((x149/x150)^x151)<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	volatile int32_t x154 = INT32_MIN;
	volatile int8_t x156 = INT8_MAX;
	int32_t t37 = 52891709;

	t37 = (((x153/x154)^x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x157 = INT32_MAX;
	uint32_t x158 = UINT32_MAX;
	uint64_t x159 = UINT64_MAX;
	volatile uint8_t x160 = 55U;
	volatile int32_t t38 = 7441;

	t38 = (((x157/x158)^x159)<=x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x162 = UINT32_MAX;
	static int64_t x163 = 520900LL;
	uint8_t x164 = 1U;

	t39 = (((x161/x162)^x163)<=x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x165 = INT32_MIN;
	static volatile uint8_t x166 = UINT8_MAX;
	int32_t x167 = 1041238;
	uint16_t x168 = 1185U;
	int32_t t40 = -914;

	t40 = (((x165/x166)^x167)<=x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MAX;
	uint16_t x170 = UINT16_MAX;
	static int16_t x171 = 1;

	t41 = (((x169/x170)^x171)<=x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x173 = UINT32_MAX;
	static int16_t x175 = -3;
	uint64_t x176 = 28448879550LLU;
	static volatile int32_t t42 = -50979;

	t42 = (((x173/x174)^x175)<=x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MAX;
	static int8_t x179 = 13;
	static int32_t x180 = INT32_MIN;
	static volatile int32_t t43 = 27;

	t43 = (((x177/x178)^x179)<=x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = 8577;
	uint32_t x182 = 257375U;
	uint64_t x183 = 1917303955222865252LLU;
	int8_t x184 = 9;
	volatile int32_t t44 = -2807233;

	t44 = (((x181/x182)^x183)<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 7887;
	uint16_t x187 = 3U;
	static int8_t x188 = INT8_MIN;
	int32_t t45 = -323196190;

	t45 = (((x185/x186)^x187)<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x190 = INT16_MIN;
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = INT16_MAX;
	static volatile int32_t t46 = 48;

	t46 = (((x189/x190)^x191)<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MAX;
	int16_t x195 = 1;
	volatile uint32_t x196 = 89142U;
	volatile int32_t t47 = 3223188;

	t47 = (((x193/x194)^x195)<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	int64_t x199 = -686714LL;
	static uint16_t x200 = 42U;

	t48 = (((x197/x198)^x199)<=x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = 1995750;
	uint64_t x202 = 25159LLU;
	int8_t x203 = INT8_MAX;
	volatile int32_t t49 = -87346;

	t49 = (((x201/x202)^x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MIN;
	int8_t x206 = -8;
	int8_t x207 = -53;

	t50 = (((x205/x206)^x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 605U;
	int16_t x210 = 44;
	int32_t x211 = -1;
	uint8_t x212 = UINT8_MAX;

	t51 = (((x209/x210)^x211)<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x213 = 729U;
	int8_t x214 = INT8_MAX;
	volatile int16_t x216 = 7;

	t52 = (((x213/x214)^x215)<=x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x217 = -1;
	static int32_t x218 = INT32_MIN;
	uint64_t x219 = UINT64_MAX;
	int16_t x220 = INT16_MAX;
	volatile int32_t t53 = 29;

	t53 = (((x217/x218)^x219)<=x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -25;
	static int32_t x222 = 312732688;
	int16_t x223 = -8;
	uint16_t x224 = 158U;
	int32_t t54 = 411652318;

	t54 = (((x221/x222)^x223)<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = 7U;
	int16_t x226 = INT16_MIN;
	uint16_t x228 = 1U;
	static volatile int32_t t55 = 74;

	t55 = (((x225/x226)^x227)<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x230 = 1U;
	static volatile int64_t x232 = -1LL;
	volatile int32_t t56 = 262168786;

	t56 = (((x229/x230)^x231)<=x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = -1LL;
	int32_t x235 = INT32_MAX;
	int16_t x236 = INT16_MAX;
	static int32_t t57 = 0;

	t57 = (((x233/x234)^x235)<=x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = 1670;
	int16_t x238 = INT16_MAX;
	static uint16_t x240 = 6U;

	t58 = (((x237/x238)^x239)<=x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = INT8_MIN;
	int32_t x242 = -1;
	int64_t x243 = INT64_MIN;

	t59 = (((x241/x242)^x243)<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = -1;
	int16_t x246 = 21;
	int16_t x247 = 114;
	volatile int32_t t60 = -71949310;

	t60 = (((x245/x246)^x247)<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x249 = INT64_MIN;
	static volatile int16_t x250 = 524;
	static volatile int16_t x252 = 1268;
	volatile int32_t t61 = -62994697;

	t61 = (((x249/x250)^x251)<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 3911LLU;
	int32_t x254 = -1;
	uint16_t x255 = 70U;
	uint8_t x256 = 3U;
	int32_t t62 = -1942;

	t62 = (((x253/x254)^x255)<=x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	uint16_t x258 = UINT16_MAX;
	int32_t x259 = -1;
	int64_t x260 = INT64_MIN;
	int32_t t63 = 191908995;

	t63 = (((x257/x258)^x259)<=x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = 1593;
	volatile int64_t x263 = 311469LL;
	static volatile int32_t t64 = -2630;

	t64 = (((x261/x262)^x263)<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = 110;
	uint32_t x267 = 3U;
	int16_t x268 = INT16_MIN;
	volatile int32_t t65 = 516887;

	t65 = (((x265/x266)^x267)<=x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x274 = INT64_MIN;
	volatile int32_t x275 = INT32_MIN;

	t66 = (((x273/x274)^x275)<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = INT32_MIN;
	static uint64_t x278 = 10245191320539LLU;
	int16_t x280 = -62;
	int32_t t67 = -1;

	t67 = (((x277/x278)^x279)<=x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = 1903285823751525310LLU;
	int32_t t68 = -1416028;

	t68 = (((x281/x282)^x283)<=x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x285 = INT8_MAX;
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = -1;
	int64_t x288 = -1LL;
	int32_t t69 = -398;

	t69 = (((x285/x286)^x287)<=x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x290 = 3441487LLU;
	uint64_t x291 = 113000166LLU;
	volatile int32_t t70 = 605;

	t70 = (((x289/x290)^x291)<=x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = UINT8_MAX;
	uint32_t x294 = 89U;
	int32_t x295 = -1;
	int32_t x296 = INT32_MIN;
	int32_t t71 = -2036669;

	t71 = (((x293/x294)^x295)<=x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = 12U;
	int32_t x298 = -10709944;
	uint16_t x300 = UINT16_MAX;

	t72 = (((x297/x298)^x299)<=x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = -1;
	volatile int32_t x302 = 233;
	int64_t x304 = -16602401509LL;
	volatile int32_t t73 = -128;

	t73 = (((x301/x302)^x303)<=x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x305 = UINT8_MAX;
	int64_t x307 = -2266208620841241344LL;
	volatile int16_t x308 = INT16_MIN;
	int32_t t74 = -1;

	t74 = (((x305/x306)^x307)<=x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = 501LL;
	static uint8_t x311 = UINT8_MAX;
	uint64_t x312 = 270227611755882371LLU;
	volatile int32_t t75 = 696;

	t75 = (((x309/x310)^x311)<=x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = INT32_MAX;
	static volatile int64_t x314 = 1050528935LL;
	uint16_t x316 = 311U;
	volatile int32_t t76 = 1;

	t76 = (((x313/x314)^x315)<=x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = 124825068875753316LLU;
	uint32_t x318 = 1362U;
	static int16_t x319 = -311;
	int16_t x320 = -1;
	int32_t t77 = 486609350;

	t77 = (((x317/x318)^x319)<=x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x322 = INT64_MIN;
	static uint16_t x323 = UINT16_MAX;
	static uint64_t x324 = UINT64_MAX;
	static volatile int32_t t78 = 55557496;

	t78 = (((x321/x322)^x323)<=x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x325 = INT64_MAX;
	volatile int64_t x326 = INT64_MIN;
	static uint32_t x327 = 521461053U;
	int64_t x328 = INT64_MAX;

	t79 = (((x325/x326)^x327)<=x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x330 = 417401LL;
	volatile uint16_t x331 = 1196U;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t80 = -1;

	t80 = (((x329/x330)^x331)<=x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x334 = -1;
	int32_t x335 = -1;
	static uint64_t x336 = 7037035666LLU;

	t81 = (((x333/x334)^x335)<=x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x337 = -64981;
	int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	int32_t x340 = 12976;
	static volatile int32_t t82 = 5162;

	t82 = (((x337/x338)^x339)<=x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MAX;
	int32_t x342 = -57968;
	int32_t x343 = INT32_MIN;
	int16_t x344 = -1;
	int32_t t83 = 1050047655;

	t83 = (((x341/x342)^x343)<=x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x345 = 0U;
	uint32_t x346 = 10472908U;
	uint8_t x347 = 0U;
	uint8_t x348 = 24U;
	volatile int32_t t84 = -8706110;

	t84 = (((x345/x346)^x347)<=x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MAX;
	uint32_t x352 = 2557353U;
	volatile int32_t t85 = -3080;

	t85 = (((x349/x350)^x351)<=x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = 109LL;
	static volatile int32_t x355 = 1;
	volatile int32_t t86 = 11862214;

	t86 = (((x353/x354)^x355)<=x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x359 = -13;

	t87 = (((x357/x358)^x359)<=x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x361 = 2269LL;
	int32_t x362 = INT32_MAX;
	int32_t x363 = INT32_MIN;
	static int16_t x364 = -1;
	int32_t t88 = 67878;

	t88 = (((x361/x362)^x363)<=x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 60799399538486370LLU;
	volatile int64_t x366 = INT64_MAX;
	int64_t x367 = INT64_MIN;
	static int32_t t89 = 45538672;

	t89 = (((x365/x366)^x367)<=x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x370 = INT64_MAX;
	static int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t90 = 248;

	t90 = (((x369/x370)^x371)<=x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x373 = INT16_MIN;
	static int8_t x374 = -1;
	int64_t x375 = 484190LL;
	volatile int64_t x376 = 1006LL;
	static int32_t t91 = 25173212;

	t91 = (((x373/x374)^x375)<=x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MAX;
	int64_t x378 = 35574706969313777LL;
	static uint8_t x380 = 1U;
	volatile int32_t t92 = 1024401979;

	t92 = (((x377/x378)^x379)<=x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	int64_t x384 = 15330341573442038LL;
	volatile int32_t t93 = 654063886;

	t93 = (((x381/x382)^x383)<=x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x385 = UINT16_MAX;
	static int64_t x386 = INT64_MAX;
	uint16_t x387 = 1015U;
	int64_t x388 = INT64_MAX;
	int32_t t94 = -25900;

	t94 = (((x385/x386)^x387)<=x388);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x389 = 24829496008177LLU;
	static uint64_t x390 = 1708342213231LLU;
	static uint32_t x392 = UINT32_MAX;
	volatile int32_t t95 = -8816;

	t95 = (((x389/x390)^x391)<=x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x394 = 8U;
	int64_t x395 = INT64_MAX;

	t96 = (((x393/x394)^x395)<=x396);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x397 = 5U;
	volatile int64_t x398 = -1LL;
	uint64_t x399 = 19LLU;
	volatile int16_t x400 = INT16_MIN;
	int32_t t97 = -6;

	t97 = (((x397/x398)^x399)<=x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = -1LL;
	uint64_t x402 = 13956247610388LLU;
	uint8_t x403 = 4U;
	int8_t x404 = 7;
	volatile int32_t t98 = -86613;

	t98 = (((x401/x402)^x403)<=x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = 62U;
	volatile int64_t x407 = -1LL;
	uint16_t x408 = 7U;
	volatile int32_t t99 = -443335;

	t99 = (((x405/x406)^x407)<=x408);

	if (t99 != 1) { NG(); } else { ; }
	
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

