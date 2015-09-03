#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
static int8_t x7 = INT8_MAX;
static uint16_t x8 = 2U;
int8_t x9 = -2;
static uint16_t x11 = 5U;
int64_t x15 = INT64_MIN;
int32_t x17 = INT32_MAX;
int64_t x18 = INT64_MAX;
int8_t x25 = INT8_MIN;
static int64_t x26 = INT64_MIN;
volatile int16_t x31 = INT16_MIN;
int64_t x35 = INT64_MAX;
volatile int32_t x39 = INT32_MIN;
static volatile uint64_t t10 = 2614340567LLU;
int32_t x50 = -2592;
static int32_t t11 = 30392;
int32_t x56 = -23;
int32_t x67 = INT32_MAX;
volatile uint32_t x69 = 0U;
int64_t x70 = 24640147LL;
int64_t x72 = -1LL;
int64_t x77 = 21225619240993288LL;
int16_t x78 = 976;
int64_t t18 = -1LL;
volatile uint64_t t19 = 156936509243182LLU;
volatile int8_t x87 = INT8_MIN;
uint16_t x97 = 56U;
static int16_t x98 = INT16_MIN;
static uint64_t t24 = 964LLU;
uint32_t x105 = 339U;
volatile uint8_t x111 = 31U;
int64_t x112 = 384922128497603LL;
static int8_t x116 = INT8_MIN;
int64_t x123 = INT64_MIN;
static uint16_t x124 = 3U;
int64_t t29 = 421658083192632896LL;
static volatile int64_t t30 = -2700407431722LL;
uint64_t x129 = 7413304LLU;
int64_t x132 = INT64_MIN;
uint8_t x134 = UINT8_MAX;
volatile int64_t t32 = 230167752191114534LL;
uint64_t t33 = 301LLU;
static uint16_t x143 = 2U;
volatile uint64_t t35 = 153326789LLU;
uint64_t t36 = UINT64_MAX;
int16_t x153 = -12443;
volatile int32_t x156 = INT32_MIN;
int16_t x161 = 15;
volatile int32_t t39 = -1646742;
static int16_t x169 = -1;
int32_t x170 = INT32_MIN;
int8_t x174 = INT8_MIN;
int32_t x178 = -1;
int32_t x179 = -1111;
volatile int64_t t43 = -1817649034LL;
static int64_t x181 = INT64_MAX;
int8_t x182 = INT8_MAX;
int8_t x184 = -1;
static volatile uint8_t x188 = 45U;
int32_t t45 = -765760704;
static int64_t x190 = -31LL;
int16_t x202 = INT16_MIN;
uint8_t x203 = UINT8_MAX;
int64_t x207 = INT64_MIN;
int32_t x209 = INT32_MIN;
int8_t x210 = INT8_MIN;
int8_t x215 = -1;
volatile uint64_t t52 = 209015667350LLU;
volatile uint32_t x219 = 77U;
volatile uint32_t t53 = 1025281U;
volatile uint16_t x223 = 0U;
int64_t t55 = 24405LL;
int32_t x232 = -87;
int64_t t56 = 26901811951218LL;
uint32_t x240 = 173983817U;
uint16_t x247 = UINT16_MAX;
int32_t t60 = 1783005;
static volatile int32_t x250 = -6089;
volatile uint64_t x255 = UINT64_MAX;
uint64_t t62 = 35LLU;
int8_t x260 = INT8_MIN;
uint32_t x262 = 44145523U;
int8_t x266 = -1;
uint32_t t65 = 7U;
volatile uint16_t x276 = UINT16_MAX;
static int8_t x284 = INT8_MIN;
uint64_t x287 = UINT64_MAX;
int8_t x290 = INT8_MAX;
static uint32_t x294 = 422193U;
volatile int64_t t72 = -6LL;
uint32_t x297 = 58555U;
int32_t x299 = 2705;
volatile int64_t x300 = INT64_MIN;
static int64_t x304 = INT64_MIN;
static uint16_t x311 = 16035U;
volatile int16_t x315 = 3143;
static uint16_t x319 = 8U;
static volatile int64_t t78 = INT64_MIN;
static int64_t x325 = INT64_MIN;
uint8_t x330 = UINT8_MAX;
uint32_t x333 = 2U;
static int64_t x335 = -1LL;
int64_t t83 = -3LL;
int8_t x343 = 3;
int32_t x352 = -1;
uint32_t x367 = 2781U;
volatile uint32_t t90 = 3U;
uint64_t x372 = UINT64_MAX;
int16_t x375 = INT16_MAX;
uint32_t t92 = UINT32_MAX;
static volatile int16_t x379 = INT16_MAX;
uint32_t x380 = 0U;
uint16_t x383 = 981U;
volatile int32_t t94 = 28079363;
int8_t x385 = -3;
int8_t x386 = INT8_MIN;
static uint16_t x387 = 75U;
static uint8_t x391 = UINT8_MAX;
volatile int16_t x393 = INT16_MIN;
volatile int32_t t98 = 53;
static int32_t x401 = 2254394;


void f0(void) {
	static volatile uint32_t x1 = 30724676U;
	int8_t x2 = INT8_MIN;
	volatile uint8_t x3 = UINT8_MAX;
	static int16_t x4 = INT16_MAX;
	uint32_t t0 = 945202862U;

	t0 = (((x1%x2)&x3)^x4);

	if (t0 != 32699U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = -43;
	static volatile int64_t t1 = -3LL;

	t1 = (((x5%x6)&x7)^x8);

	if (t1 != 84LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 7U;
	uint32_t x12 = 24U;
	static uint32_t t2 = 52U;

	t2 = (((x9%x10)&x11)^x12);

	if (t2 != 28U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int16_t x14 = -24;
	int8_t x16 = -1;
	volatile int64_t t3 = 18LL;

	t3 = (((x13%x14)&x15)^x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = -70;
	int16_t x20 = 1;
	volatile int64_t t4 = 34LL;

	t4 = (((x17%x18)&x19)^x20);

	if (t4 != 2147483579LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	int16_t x22 = 6543;
	uint16_t x23 = 231U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -204;

	t5 = (((x21%x22)&x23)^x24);

	if (t5 != -32537) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x27 = INT64_MAX;
	static int32_t x28 = INT32_MIN;
	volatile int64_t t6 = -21381797981360512LL;

	t6 = (((x25%x26)&x27)^x28);

	if (t6 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int32_t x30 = INT32_MAX;
	int32_t x32 = -1;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (((x29%x30)&x31)^x32);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int32_t x34 = -109677;
	uint32_t x36 = UINT32_MAX;
	volatile int64_t t8 = 2992343445LL;

	t8 = (((x33%x34)&x35)^x36);

	if (t8 != 4294905359LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	static int16_t x38 = INT16_MIN;
	int64_t x40 = 17397961LL;
	volatile int64_t t9 = 220486670831LL;

	t9 = (((x37%x38)&x39)^x40);

	if (t9 != -2130085687LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	uint64_t x42 = 1323612518LLU;
	static int8_t x43 = INT8_MIN;
	int64_t x44 = -1LL;

	t10 = (((x41%x42)&x43)^x44);

	if (t10 != 18446744073161167615LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 1218808;
	int8_t x51 = INT8_MIN;
	int32_t x52 = 1632228;

	t11 = (((x49%x50)&x51)^x52);

	if (t11 != 1631716) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	static int8_t x54 = -1;
	static int16_t x55 = INT16_MAX;
	uint32_t t12 = 1422U;

	t12 = (((x53%x54)&x55)^x56);

	if (t12 != 4294967273U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	int64_t x58 = -1913933612067721981LL;
	volatile int16_t x59 = -1;
	uint64_t x60 = 3555188256302334LLU;
	uint64_t t13 = 10828LLU;

	t13 = (((x57%x58)&x59)^x60);

	if (t13 != 3555188256302081LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	int8_t x62 = 5;
	uint32_t x63 = 756841U;
	uint64_t x64 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

	t14 = (((x61%x62)&x63)^x64);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = 53;
	int64_t x66 = INT64_MAX;
	int32_t x68 = 23863182;
	int64_t t15 = 1594LL;

	t15 = (((x65%x66)&x67)^x68);

	if (t15 != 23863227LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x71 = INT32_MIN;
	volatile int64_t t16 = 11580LL;

	t16 = (((x69%x70)&x71)^x72);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MAX;
	int16_t x74 = INT16_MAX;
	uint32_t x75 = UINT32_MAX;
	int64_t x76 = INT64_MAX;
	int64_t t17 = 122800317LL;

	t17 = (((x73%x74)&x75)^x76);

	if (t17 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MIN;

	t18 = (((x77%x78)&x79)^x80);

	if (t18 != -2147483624LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 1770U;
	int8_t x82 = INT8_MIN;
	int64_t x83 = -1210494LL;
	uint64_t x84 = 10482LLU;

	t19 = (((x81%x82)&x83)^x84);

	if (t19 != 10480LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 137U;
	volatile int8_t x86 = -18;
	uint32_t x88 = 1305909U;
	volatile uint32_t t20 = 2129U;

	t20 = (((x85%x86)&x87)^x88);

	if (t20 != 1306037U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = INT16_MAX;
	int8_t x90 = INT8_MIN;
	static uint16_t x91 = 74U;
	static volatile uint32_t x92 = 8102U;
	uint32_t t21 = 962910239U;

	t21 = (((x89%x90)&x91)^x92);

	if (t21 != 8172U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = -1;
	volatile uint64_t x94 = UINT64_MAX;
	int8_t x95 = INT8_MAX;
	int64_t x96 = 1LL;
	static volatile uint64_t t22 = 8176783408310298LLU;

	t22 = (((x93%x94)&x95)^x96);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x99 = UINT16_MAX;
	static int16_t x100 = INT16_MAX;
	volatile int32_t t23 = -1725827;

	t23 = (((x97%x98)&x99)^x100);

	if (t23 != 32711) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = 749010795;
	int64_t x102 = INT64_MIN;
	uint16_t x103 = UINT16_MAX;
	uint64_t x104 = UINT64_MAX;

	t24 = (((x101%x102)&x103)^x104);

	if (t24 != 18446744073709486228LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x106 = -30;
	int16_t x107 = INT16_MAX;
	static uint64_t x108 = 506235688626LLU;
	volatile uint64_t t25 = 1LLU;

	t25 = (((x105%x106)&x107)^x108);

	if (t25 != 506235688929LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = INT64_MIN;
	uint16_t x110 = 1497U;
	volatile int64_t t26 = -174965231535LL;

	t26 = (((x109%x110)&x111)^x112);

	if (t26 != 384922128497607LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	int16_t x114 = INT16_MIN;
	uint32_t x115 = 60U;
	static int64_t t27 = 258606138609LL;

	t27 = (((x113%x114)&x115)^x116);

	if (t27 != -128LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x117 = 0U;
	volatile int16_t x118 = INT16_MAX;
	uint8_t x119 = UINT8_MAX;
	uint8_t x120 = 2U;
	volatile int32_t t28 = -34973177;

	t28 = (((x117%x118)&x119)^x120);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -33;
	uint32_t x122 = UINT32_MAX;

	t29 = (((x121%x122)&x123)^x124);

	if (t29 != 3LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1LL;
	int8_t x126 = 22;
	int32_t x127 = 1396149;
	int8_t x128 = -25;

	t30 = (((x125%x126)&x127)^x128);

	if (t30 != -1396142LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x130 = -1LL;
	static int32_t x131 = -254555974;
	uint64_t t31 = 5596943229560831801LLU;

	t31 = (((x129%x130)&x131)^x132);

	if (t31 != 9223372036860086328LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 7U;
	static int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MIN;

	t32 = (((x133%x134)&x135)^x136);

	if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -1;
	uint8_t x138 = UINT8_MAX;
	uint64_t x139 = 513666809501319776LLU;
	uint64_t x140 = 971478811LLU;

	t33 = (((x137%x138)&x139)^x140);

	if (t33 != 513666809360782715LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -1;
	int64_t x142 = INT64_MIN;
	volatile uint8_t x144 = UINT8_MAX;
	static volatile int64_t t34 = -78700LL;

	t34 = (((x141%x142)&x143)^x144);

	if (t34 != 253LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = 0;
	uint64_t x146 = 208109691491627LLU;
	int32_t x147 = -1;
	static uint32_t x148 = UINT32_MAX;

	t35 = (((x145%x146)&x147)^x148);

	if (t35 != 4294967295LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 0LLU;
	int32_t x150 = INT32_MAX;
	uint64_t x151 = 21606092683573LLU;
	int16_t x152 = -1;

	t36 = (((x149%x150)&x151)^x152);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x154 = 4;
	static uint32_t x155 = UINT32_MAX;
	uint32_t t37 = 63895458U;

	t37 = (((x153%x154)&x155)^x156);

	if (t37 != 2147483645U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MAX;
	uint64_t x158 = 127651629902LLU;
	int32_t x159 = INT32_MIN;
	int64_t x160 = -1LL;
	volatile uint64_t t38 = 457030734527018LLU;

	t38 = (((x157%x158)&x159)^x160);

	if (t38 != 18446744052234715135LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = INT16_MAX;
	volatile int32_t x163 = -1343900;
	int16_t x164 = -325;

	t39 = (((x161%x162)&x163)^x164);

	if (t39 != -321) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = INT8_MIN;
	uint64_t x166 = UINT64_MAX;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = INT16_MAX;
	static volatile uint64_t t40 = 1504571LLU;

	t40 = (((x165%x166)&x167)^x168);

	if (t40 != 32895LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x171 = INT32_MAX;
	int64_t x172 = -1LL;
	volatile int64_t t41 = 11703989LL;

	t41 = (((x169%x170)&x171)^x172);

	if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 58U;
	int8_t x175 = INT8_MIN;
	static uint32_t x176 = 190U;
	uint32_t t42 = 4U;

	t42 = (((x173%x174)&x175)^x176);

	if (t42 != 190U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x177 = INT64_MAX;
	uint16_t x180 = 3U;

	t43 = (((x177%x178)&x179)^x180);

	if (t43 != 3LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x183 = INT8_MIN;
	int64_t t44 = 68709LL;

	t44 = (((x181%x182)&x183)^x184);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = 3;
	volatile int16_t x187 = -14382;

	t45 = (((x185%x186)&x187)^x188);

	if (t45 != -14337) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = -19352LL;
	static volatile int16_t x191 = INT16_MAX;
	volatile int64_t x192 = -1LL;
	int64_t t46 = -85LL;

	t46 = (((x189%x190)&x191)^x192);

	if (t46 != -32761LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MAX;
	int8_t x194 = 12;
	volatile uint8_t x195 = 7U;
	uint16_t x196 = UINT16_MAX;
	volatile int64_t t47 = 372591987217370831LL;

	t47 = (((x193%x194)&x195)^x196);

	if (t47 != 65528LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	uint8_t x198 = 97U;
	static uint32_t x199 = UINT32_MAX;
	int16_t x200 = 82;
	volatile uint32_t t48 = 29177312U;

	t48 = (((x197%x198)&x199)^x200);

	if (t48 != 4294967276U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x201 = INT8_MIN;
	int8_t x204 = -21;
	static volatile int32_t t49 = -5;

	t49 = (((x201%x202)&x203)^x204);

	if (t49 != -149) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = INT8_MIN;
	int64_t x206 = 44051LL;
	int64_t x208 = -4227867672LL;
	volatile int64_t t50 = 53153LL;

	t50 = (((x205%x206)&x207)^x208);

	if (t50 != 9223372032626908136LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x211 = UINT8_MAX;
	uint16_t x212 = UINT16_MAX;
	int32_t t51 = -4;

	t51 = (((x209%x210)&x211)^x212);

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 7088171584490LLU;
	static uint16_t x214 = 503U;
	volatile uint32_t x216 = 39U;

	t52 = (((x213%x214)&x215)^x216);

	if (t52 != 223LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -1;
	volatile int16_t x218 = INT16_MIN;
	int16_t x220 = INT16_MIN;

	t53 = (((x217%x218)&x219)^x220);

	if (t53 != 4294934605U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x221 = 3U;
	int16_t x222 = INT16_MAX;
	volatile uint16_t x224 = 0U;
	int32_t t54 = 154425335;

	t54 = (((x221%x222)&x223)^x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x225 = -2;
	volatile int64_t x226 = -10051216LL;
	uint16_t x227 = UINT16_MAX;
	int64_t x228 = -25144LL;

	t55 = (((x225%x226)&x227)^x228);

	if (t55 != -40394LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;

	t56 = (((x229%x230)&x231)^x232);

	if (t56 != -87LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x233 = INT64_MAX;
	uint8_t x234 = 7U;
	int64_t x235 = -1LL;
	volatile int32_t x236 = -496612;
	int64_t t57 = 107542978LL;

	t57 = (((x233%x234)&x235)^x236);

	if (t57 != -496612LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -1;
	uint32_t x238 = 1041090U;
	int8_t x239 = -1;
	uint32_t t58 = 7808U;

	t58 = (((x237%x238)&x239)^x240);

	if (t58 != 173668428U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = 1;
	static int64_t x242 = INT64_MIN;
	int64_t x243 = INT64_MAX;
	static uint16_t x244 = 5U;
	int64_t t59 = 154704599710483LL;

	t59 = (((x241%x242)&x243)^x244);

	if (t59 != 4LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = -1;
	int8_t x246 = -1;
	volatile int8_t x248 = INT8_MIN;

	t60 = (((x245%x246)&x247)^x248);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x249 = -1LL;
	uint8_t x251 = 32U;
	int32_t x252 = INT32_MIN;
	volatile int64_t t61 = -120571459778LL;

	t61 = (((x249%x250)&x251)^x252);

	if (t61 != -2147483616LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = 3;
	uint64_t x254 = 839759679LLU;
	int32_t x256 = -1;

	t62 = (((x253%x254)&x255)^x256);

	if (t62 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 1152U;
	int64_t x258 = INT64_MIN;
	int16_t x259 = -1;
	volatile int64_t t63 = 788LL;

	t63 = (((x257%x258)&x259)^x260);

	if (t63 != -1280LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x261 = INT64_MIN;
	int16_t x263 = INT16_MAX;
	static uint8_t x264 = 0U;
	static int64_t t64 = 8484LL;

	t64 = (((x261%x262)&x263)^x264);

	if (t64 != 26756LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int8_t x267 = INT8_MAX;
	static volatile int32_t x268 = 34823183;

	t65 = (((x265%x266)&x267)^x268);

	if (t65 != 34823183U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = 8U;
	uint32_t x270 = UINT32_MAX;
	volatile int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MIN;
	uint32_t t66 = 717035264U;

	t66 = (((x269%x270)&x271)^x272);

	if (t66 != 4294934528U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x273 = 11U;
	int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	int32_t t67 = -115814225;

	t67 = (((x273%x274)&x275)^x276);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 0U;
	uint32_t x278 = 8371351U;
	uint16_t x279 = 12U;
	uint16_t x280 = 87U;
	uint32_t t68 = 12223001U;

	t68 = (((x277%x278)&x279)^x280);

	if (t68 != 87U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x281 = 1U;
	static int16_t x282 = INT16_MIN;
	int32_t x283 = -1;
	static int32_t t69 = 23104;

	t69 = (((x281%x282)&x283)^x284);

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = 1;
	uint32_t x286 = 23U;
	int32_t x288 = -1;
	volatile uint64_t t70 = 453LLU;

	t70 = (((x285%x286)&x287)^x288);

	if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = 4;
	static uint64_t x291 = 10788LLU;
	int32_t x292 = -1;
	uint64_t t71 = 12600LLU;

	t71 = (((x289%x290)&x291)^x292);

	if (t71 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = -44496856LL;
	static volatile uint32_t x295 = UINT32_MAX;
	int64_t x296 = INT64_MAX;

	t72 = (((x293%x294)&x295)^x296);

	if (t72 != 9223372032559975102LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x298 = 8U;
	volatile int64_t t73 = 468348942628810LL;

	t73 = (((x297%x298)&x299)^x300);

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = 0;
	uint8_t x302 = 2U;
	int32_t x303 = -1;
	int64_t t74 = INT64_MIN;

	t74 = (((x301%x302)&x303)^x304);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x305 = -16604291858872185LL;
	uint32_t x306 = UINT32_MAX;
	int64_t x307 = 559LL;
	uint64_t x308 = 131310388LLU;
	volatile uint64_t t75 = 7896066LLU;

	t75 = (((x305%x306)&x307)^x308);

	if (t75 != 131309872LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MAX;
	volatile int8_t x310 = INT8_MAX;
	int32_t x312 = 81;
	static volatile int32_t t76 = 11;

	t76 = (((x309%x310)&x311)^x312);

	if (t76 != 81) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = 698;
	static uint64_t x314 = 721LLU;
	uint8_t x316 = 9U;
	uint64_t t77 = 22186441546960LLU;

	t77 = (((x313%x314)&x315)^x316);

	if (t77 != 11LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x317 = 0U;
	int16_t x318 = -1;
	int64_t x320 = INT64_MIN;

	t78 = (((x317%x318)&x319)^x320);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = 1;
	int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	uint8_t x324 = 13U;
	static int64_t t79 = -7816750130LL;

	t79 = (((x321%x322)&x323)^x324);

	if (t79 != 13LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x326 = -1;
	int8_t x327 = 6;
	volatile uint64_t x328 = 176935032164466LLU;
	uint64_t t80 = 481463853831382LLU;

	t80 = (((x325%x326)&x327)^x328);

	if (t80 != 176935032164466LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x329 = INT16_MIN;
	int8_t x331 = -25;
	int8_t x332 = INT8_MAX;
	static int32_t t81 = 25000;

	t81 = (((x329%x330)&x331)^x332);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x334 = INT64_MAX;
	int16_t x336 = INT16_MIN;
	int64_t t82 = -387100LL;

	t82 = (((x333%x334)&x335)^x336);

	if (t82 != -32766LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = 42194659079005191LL;
	volatile int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MIN;
	uint32_t x340 = UINT32_MAX;

	t83 = (((x337%x338)&x339)^x340);

	if (t83 != 4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MIN;
	int32_t x344 = -1;
	int32_t t84 = -468;

	t84 = (((x341%x342)&x343)^x344);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = -8135008;
	int32_t x346 = -1;
	volatile uint32_t x347 = 35U;
	static int32_t x348 = INT32_MIN;
	static volatile uint32_t t85 = 14254676U;

	t85 = (((x345%x346)&x347)^x348);

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x349 = INT64_MAX;
	static uint8_t x350 = 3U;
	int32_t x351 = -1;
	static volatile int64_t t86 = 1359000819455372LL;

	t86 = (((x349%x350)&x351)^x352);

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x354 = -1;
	uint16_t x355 = 1122U;
	uint32_t x356 = UINT32_MAX;
	uint32_t t87 = UINT32_MAX;

	t87 = (((x353%x354)&x355)^x356);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = -3139;
	uint8_t x358 = 4U;
	static volatile int8_t x359 = INT8_MIN;
	uint64_t x360 = 1LLU;
	volatile uint64_t t88 = 5128016LLU;

	t88 = (((x357%x358)&x359)^x360);

	if (t88 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = 1;
	int16_t x362 = INT16_MIN;
	int16_t x363 = -616;
	static int8_t x364 = INT8_MIN;
	int32_t t89 = 26032708;

	t89 = (((x361%x362)&x363)^x364);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = -1;
	int16_t x366 = INT16_MAX;
	int32_t x368 = -1;

	t90 = (((x365%x366)&x367)^x368);

	if (t90 != 4294964514U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = 53U;
	int8_t x370 = -1;
	volatile int32_t x371 = -249130227;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (((x369%x370)&x371)^x372);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x373 = 9230U;
	volatile uint8_t x374 = 1U;
	int8_t x376 = -1;

	t92 = (((x373%x374)&x375)^x376);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x377 = 114460U;
	int32_t x378 = 517;
	static uint32_t t93 = 11461213U;

	t93 = (((x377%x378)&x379)^x380);

	if (t93 != 203U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x381 = UINT16_MAX;
	static int16_t x382 = INT16_MIN;
	static int32_t x384 = -3325;

	t94 = (((x381%x382)&x383)^x384);

	if (t94 != -3882) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x388 = -2;
	int32_t t95 = 7;

	t95 = (((x385%x386)&x387)^x388);

	if (t95 != -73) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x389 = INT64_MIN;
	int8_t x390 = -1;
	int32_t x392 = 3635;
	int64_t t96 = 196LL;

	t96 = (((x389%x390)&x391)^x392);

	if (t96 != 3635LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x394 = 5328229144LL;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	volatile int64_t t97 = -2435275631092337293LL;

	t97 = (((x393%x394)&x395)^x396);

	if (t97 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = INT8_MAX;
	uint16_t x398 = 4U;
	int32_t x399 = -1;
	volatile int32_t x400 = INT32_MIN;

	t98 = (((x397%x398)&x399)^x400);

	if (t98 != -2147483645) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x402 = 6U;
	int64_t x403 = -5LL;
	int8_t x404 = 0;
	int64_t t99 = -1472734007337LL;

	t99 = (((x401%x402)&x403)^x404);

	if (t99 != 2LL) { NG(); } else { ; }
	
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

