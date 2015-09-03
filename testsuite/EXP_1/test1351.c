#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = UINT32_MAX;
volatile int64_t x14 = INT64_MIN;
int16_t x21 = INT16_MIN;
int16_t x25 = -572;
uint64_t t6 = 6649493744655760LLU;
int8_t x29 = -4;
static int8_t x31 = INT8_MIN;
volatile int32_t t9 = INT32_MAX;
static int32_t x41 = -106;
int16_t x43 = -1;
static uint64_t x46 = 687457060890529LLU;
static int8_t x59 = INT8_MAX;
int32_t x63 = INT32_MIN;
uint16_t x65 = UINT16_MAX;
int8_t x76 = INT8_MAX;
uint64_t x79 = 61135535257154LLU;
int8_t x89 = 3;
static uint16_t x90 = 1U;
int8_t x91 = INT8_MAX;
int8_t x92 = 0;
int64_t x97 = INT64_MIN;
int32_t x105 = INT32_MAX;
volatile int32_t t29 = 100167770;
int64_t x122 = INT64_MAX;
uint16_t x125 = UINT16_MAX;
uint32_t x127 = 5571448U;
int32_t x131 = -2957799;
int64_t x132 = INT64_MIN;
int64_t x136 = INT64_MIN;
volatile int32_t x142 = 107929;
static int8_t x152 = INT8_MIN;
static int64_t x159 = -1LL;
static int64_t t42 = -28638168LL;
volatile int8_t x176 = 39;
volatile int32_t t43 = 526197;
uint16_t x192 = 831U;
int64_t t47 = -1LL;
int8_t x194 = 6;
int16_t x196 = INT16_MIN;
volatile int8_t x199 = 1;
volatile int16_t x203 = -1;
uint32_t x204 = UINT32_MAX;
int32_t x217 = INT32_MIN;
static int16_t x222 = 1;
int8_t x225 = INT8_MIN;
int8_t x227 = INT8_MIN;
static uint64_t x235 = UINT64_MAX;
volatile uint16_t x236 = 1U;
int16_t x237 = 0;
int8_t x238 = INT8_MIN;
uint32_t x249 = 5724531U;
static uint16_t x250 = 2625U;
static volatile int16_t x251 = -1;
uint64_t x252 = 926754543LLU;
static uint64_t x254 = 28LLU;
static int16_t x256 = INT16_MIN;
static int16_t x262 = INT16_MAX;
uint32_t t65 = 144646805U;
int64_t t67 = 7471987685LL;
int16_t x273 = INT16_MIN;
int8_t x277 = 28;
volatile uint32_t x280 = 2345U;
int8_t x282 = INT8_MIN;
int64_t t70 = -1302LL;
volatile int64_t x289 = -1LL;
static int16_t x296 = -1;
uint32_t t73 = UINT32_MAX;
uint32_t x297 = 14706755U;
int16_t x301 = -2;
int8_t x302 = -1;
static volatile int8_t x304 = -1;
static int16_t x312 = INT16_MIN;
uint8_t x315 = 107U;
int32_t x318 = 0;
int8_t x319 = -13;
uint64_t x320 = UINT64_MAX;
volatile uint64_t t79 = UINT64_MAX;
static uint32_t x321 = 1064U;
int8_t x327 = 1;
int16_t x331 = 122;
static uint32_t x337 = 1U;
volatile int32_t t84 = -267;
volatile uint64_t x343 = 4726LLU;
volatile int16_t x347 = -215;
volatile int32_t x349 = INT32_MIN;
uint64_t t87 = 1497495650654LLU;
int64_t x354 = INT64_MIN;
volatile int16_t x361 = 1;
int16_t x386 = -1;
int8_t x391 = 11;
static int64_t t98 = 1987390331LL;
volatile uint32_t x400 = 236286610U;
uint32_t t99 = 295U;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static volatile uint16_t x2 = UINT16_MAX;
	int64_t x3 = -1LL;
	uint8_t x4 = UINT8_MAX;
	static volatile int64_t t0 = 119772LL;

	t0 = (((x1==x2)^x3)|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 5583U;
	uint32_t x6 = 67865U;
	int16_t x7 = -10;
	volatile int32_t x8 = -2889;
	static int32_t t1 = -1;

	t1 = (((x5==x6)^x7)|x8);

	if (t1 != -9) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	int8_t x11 = -2;
	uint64_t x12 = 49972237732357LLU;
	static uint64_t t2 = UINT64_MAX;

	t2 = (((x9==x10)^x11)|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x15 = -1;
	int64_t x16 = 79809364746LL;
	int64_t t3 = -241LL;

	t3 = (((x13==x14)^x15)|x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = INT16_MAX;
	int16_t x18 = -4056;
	int64_t x19 = INT64_MAX;
	uint64_t x20 = 51LLU;
	static volatile uint64_t t4 = 188622571679741LLU;

	t4 = (((x17==x18)^x19)|x20);

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x22 = 15;
	int32_t x23 = -59123;
	int64_t x24 = -107854130LL;
	volatile int64_t t5 = 828622775LL;

	t5 = (((x21==x22)^x23)|x24);

	if (t5 != -41009LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	volatile uint64_t x27 = 15389LLU;
	volatile int32_t x28 = 1;

	t6 = (((x25==x26)^x27)|x28);

	if (t6 != 15389LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x30 = 78U;
	int8_t x32 = 53;
	static int32_t t7 = 1;

	t7 = (((x29==x30)^x31)|x32);

	if (t7 != -75) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	uint64_t x34 = 8323099684161839976LLU;
	volatile uint16_t x35 = 1U;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = -74150649;

	t8 = (((x33==x34)^x35)|x36);

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 170890LLU;
	int8_t x38 = 2;
	int32_t x39 = INT32_MAX;
	static int8_t x40 = INT8_MAX;

	t9 = (((x37==x38)^x39)|x40);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = -2;
	volatile int16_t x44 = -1;
	volatile int32_t t10 = -2;

	t10 = (((x41==x42)^x43)|x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	static int32_t x47 = INT32_MAX;
	static int8_t x48 = 1;
	int32_t t11 = INT32_MAX;

	t11 = (((x45==x46)^x47)|x48);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = 2533;
	int16_t x50 = 20;
	uint16_t x51 = 0U;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -593;

	t12 = (((x49==x50)^x51)|x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 2764U;
	uint64_t x54 = UINT64_MAX;
	uint32_t x55 = UINT32_MAX;
	int32_t x56 = INT32_MIN;
	static volatile uint32_t t13 = UINT32_MAX;

	t13 = (((x53==x54)^x55)|x56);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 0U;
	uint8_t x58 = UINT8_MAX;
	int16_t x60 = -1;
	int32_t t14 = 10167062;

	t14 = (((x57==x58)^x59)|x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int8_t x62 = INT8_MAX;
	int8_t x64 = 6;
	int32_t t15 = -231391415;

	t15 = (((x61==x62)^x63)|x64);

	if (t15 != -2147483642) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 0U;
	static uint16_t x67 = 260U;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 4640;

	t16 = (((x65==x66)^x67)|x68);

	if (t16 != -32508) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MAX;
	uint64_t x70 = UINT64_MAX;
	static int8_t x71 = INT8_MIN;
	uint64_t x72 = 12274460609149340LLU;
	volatile uint64_t t17 = 5499693520LLU;

	t17 = (((x69==x70)^x71)|x72);

	if (t17 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	static uint16_t x74 = 10952U;
	int16_t x75 = -3;
	volatile int32_t t18 = 11;

	t18 = (((x73==x74)^x75)|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 9U;
	int32_t x78 = -4159091;
	uint16_t x80 = UINT16_MAX;
	uint64_t t19 = 310640729LLU;

	t19 = (((x77==x78)^x79)|x80);

	if (t19 != 61135535276031LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -16582780;
	static int32_t x82 = INT32_MIN;
	int8_t x83 = -5;
	static int64_t x84 = 227993232LL;
	static volatile int64_t t20 = 5537455529291722LL;

	t20 = (((x81==x82)^x83)|x84);

	if (t20 != -5LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 4830U;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = 70U;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = INT32_MAX;

	t21 = (((x85==x86)^x87)|x88);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t t22 = -6;

	t22 = (((x89==x90)^x91)|x92);

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	uint64_t x94 = 0LLU;
	int8_t x95 = INT8_MIN;
	volatile int64_t x96 = -1LL;
	volatile int64_t t23 = -4057127786LL;

	t23 = (((x93==x94)^x95)|x96);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x98 = -1;
	int64_t x99 = INT64_MAX;
	uint8_t x100 = 2U;
	volatile int64_t t24 = INT64_MAX;

	t24 = (((x97==x98)^x99)|x100);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x101 = INT16_MAX;
	static int8_t x102 = INT8_MIN;
	static int8_t x103 = 0;
	int16_t x104 = -1;
	int32_t t25 = 8269;

	t25 = (((x101==x102)^x103)|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = -1;
	int32_t x107 = 217284;
	volatile uint64_t x108 = 214982688507LLU;
	volatile uint64_t t26 = 625951303LLU;

	t26 = (((x105==x106)^x107)|x108);

	if (t26 != 214982688511LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MIN;
	volatile int64_t x110 = INT64_MIN;
	int64_t x111 = 7LL;
	volatile int16_t x112 = 1;
	int64_t t27 = -492255297661217421LL;

	t27 = (((x109==x110)^x111)|x112);

	if (t27 != 7LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 2288U;
	volatile uint32_t x114 = UINT32_MAX;
	int64_t x115 = INT64_MAX;
	int64_t x116 = -1LL;
	int64_t t28 = 18311LL;

	t28 = (((x113==x114)^x115)|x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 0;
	static volatile int32_t x118 = INT32_MIN;
	static int16_t x119 = -1;
	int8_t x120 = 2;

	t29 = (((x117==x118)^x119)|x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int32_t x123 = -1;
	static int8_t x124 = 47;
	volatile int32_t t30 = 27858133;

	t30 = (((x121==x122)^x123)|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = 102;
	int32_t x128 = INT32_MIN;
	static uint32_t t31 = 1U;

	t31 = (((x125==x126)^x127)|x128);

	if (t31 != 2153055096U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 888U;
	int64_t x130 = INT64_MIN;
	int64_t t32 = -228394105644242LL;

	t32 = (((x129==x130)^x131)|x132);

	if (t32 != -2957799LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -11LL;
	int64_t x134 = -1LL;
	int32_t x135 = -1;
	int64_t t33 = 142640LL;

	t33 = (((x133==x134)^x135)|x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = UINT64_MAX;
	volatile int32_t x138 = -24479;
	int16_t x139 = INT16_MIN;
	int32_t x140 = -15705472;
	static int32_t t34 = 29560;

	t34 = (((x137==x138)^x139)|x140);

	if (t34 != -9600) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = UINT8_MAX;
	uint64_t x143 = 93213LLU;
	static int32_t x144 = -863398;
	static volatile uint64_t t35 = 15689LLU;

	t35 = (((x141==x142)^x143)|x144);

	if (t35 != 18446744073708765023LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 94LL;
	int8_t x146 = -1;
	int32_t x147 = -407097;
	int64_t x148 = -1LL;
	volatile int64_t t36 = -52186LL;

	t36 = (((x145==x146)^x147)|x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = -779305;
	int16_t x150 = INT16_MAX;
	uint8_t x151 = 0U;
	static volatile int32_t t37 = -122348090;

	t37 = (((x149==x150)^x151)|x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	static int64_t x154 = -1293039500LL;
	int32_t x155 = 134;
	uint64_t x156 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

	t38 = (((x153==x154)^x155)|x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	static uint64_t x158 = UINT64_MAX;
	uint64_t x160 = 68516773083553588LLU;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (((x157==x158)^x159)|x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 8096;
	int64_t x162 = -1LL;
	int16_t x163 = INT16_MIN;
	static uint8_t x164 = 69U;
	volatile int32_t t40 = -991297;

	t40 = (((x161==x162)^x163)|x164);

	if (t40 != -32699) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -1;
	static volatile uint16_t x166 = 3U;
	int16_t x167 = -1;
	static int16_t x168 = -3;
	int32_t t41 = -19830;

	t41 = (((x165==x166)^x167)|x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MIN;
	volatile int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MIN;

	t42 = (((x169==x170)^x171)|x172);

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MIN;
	volatile int16_t x175 = INT16_MAX;

	t43 = (((x173==x174)^x175)|x176);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int64_t x178 = INT64_MAX;
	int64_t x179 = -193LL;
	int32_t x180 = 3795;
	int64_t t44 = -343822984419563239LL;

	t44 = (((x177==x178)^x179)|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 24592U;
	int16_t x182 = -99;
	int8_t x183 = INT8_MIN;
	volatile uint32_t x184 = 326578067U;
	volatile uint32_t t45 = 34U;

	t45 = (((x181==x182)^x183)|x184);

	if (t45 != 4294967187U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int8_t x186 = INT8_MIN;
	static int8_t x187 = INT8_MIN;
	static volatile int64_t x188 = -1LL;
	volatile int64_t t46 = -4264223469LL;

	t46 = (((x185==x186)^x187)|x188);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MAX;
	static int64_t x191 = INT64_MIN;

	t47 = (((x189==x190)^x191)|x192);

	if (t47 != -9223372036854774977LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	int32_t x195 = INT32_MIN;
	int32_t t48 = -11;

	t48 = (((x193==x194)^x195)|x196);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = UINT16_MAX;
	int64_t x198 = -1LL;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = -9;

	t49 = (((x197==x198)^x199)|x200);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 1916058547LL;
	uint32_t x202 = 824488803U;
	static uint32_t t50 = UINT32_MAX;

	t50 = (((x201==x202)^x203)|x204);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int8_t x206 = INT8_MIN;
	volatile int32_t x207 = -1;
	int32_t x208 = INT32_MIN;
	static int32_t t51 = 855972201;

	t51 = (((x205==x206)^x207)|x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int8_t x210 = INT8_MAX;
	static int16_t x211 = INT16_MIN;
	uint8_t x212 = 8U;
	int32_t t52 = -24828614;

	t52 = (((x209==x210)^x211)|x212);

	if (t52 != -32760) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = 14;
	volatile int64_t x215 = 1741LL;
	volatile int64_t x216 = INT64_MIN;
	int64_t t53 = -255LL;

	t53 = (((x213==x214)^x215)|x216);

	if (t53 != -9223372036854774067LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 70U;
	int16_t x219 = -1;
	volatile int32_t x220 = INT32_MAX;
	volatile int32_t t54 = 3273211;

	t54 = (((x217==x218)^x219)|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = 20;
	int32_t x223 = INT32_MIN;
	int64_t x224 = -9LL;
	volatile int64_t t55 = 248717160889LL;

	t55 = (((x221==x222)^x223)|x224);

	if (t55 != -9LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x226 = INT32_MAX;
	int64_t x228 = INT64_MAX;
	volatile int64_t t56 = 415LL;

	t56 = (((x225==x226)^x227)|x228);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 243178507U;
	int16_t x230 = INT16_MIN;
	static uint32_t x231 = 11599228U;
	int64_t x232 = INT64_MIN;
	volatile int64_t t57 = -659LL;

	t57 = (((x229==x230)^x231)|x232);

	if (t57 != -9223372036843176580LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 1LLU;
	int16_t x234 = -1;
	uint64_t t58 = UINT64_MAX;

	t58 = (((x233==x234)^x235)|x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x239 = UINT32_MAX;
	volatile int8_t x240 = -1;
	uint32_t t59 = UINT32_MAX;

	t59 = (((x237==x238)^x239)|x240);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 36230083887LL;
	int16_t x242 = INT16_MAX;
	volatile int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MIN;
	volatile int64_t t60 = INT64_MIN;

	t60 = (((x241==x242)^x243)|x244);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -973;
	int16_t x246 = 7;
	static volatile uint16_t x247 = UINT16_MAX;
	int16_t x248 = INT16_MAX;
	int32_t t61 = 7;

	t61 = (((x245==x246)^x247)|x248);

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (((x249==x250)^x251)|x252);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -3956;
	int16_t x255 = INT16_MIN;
	volatile int32_t t63 = -475;

	t63 = (((x253==x254)^x255)|x256);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x258 = INT16_MIN;
	static int8_t x259 = INT8_MIN;
	int32_t x260 = -26066;
	int32_t t64 = -32320;

	t64 = (((x257==x258)^x259)|x260);

	if (t64 != -82) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	uint32_t x263 = 129U;
	int16_t x264 = INT16_MIN;

	t65 = (((x261==x262)^x263)|x264);

	if (t65 != 4294934657U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = -202701LL;
	static int32_t x267 = -1;
	volatile int16_t x268 = 7;
	volatile int32_t t66 = -78582;

	t66 = (((x265==x266)^x267)|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 190;
	volatile int32_t x270 = INT32_MAX;
	static int64_t x271 = INT64_MIN;
	uint16_t x272 = UINT16_MAX;

	t67 = (((x269==x270)^x271)|x272);

	if (t67 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x274 = INT32_MAX;
	uint8_t x275 = 1U;
	volatile uint32_t x276 = UINT32_MAX;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (((x273==x274)^x275)|x276);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x278 = INT16_MIN;
	volatile int8_t x279 = INT8_MAX;
	static uint32_t t69 = 951600U;

	t69 = (((x277==x278)^x279)|x280);

	if (t69 != 2431U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int32_t x283 = 3;
	static int64_t x284 = INT64_MIN;

	t70 = (((x281==x282)^x283)|x284);

	if (t70 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -278888689788528087LL;
	uint32_t x286 = UINT32_MAX;
	uint64_t x287 = 55207996LLU;
	volatile uint32_t x288 = 6U;
	volatile uint64_t t71 = 295157LLU;

	t71 = (((x285==x286)^x287)|x288);

	if (t71 != 55207998LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x290 = INT32_MAX;
	volatile uint64_t x291 = 1401LLU;
	static volatile int64_t x292 = INT64_MIN;
	uint64_t t72 = 48LLU;

	t72 = (((x289==x290)^x291)|x292);

	if (t72 != 9223372036854777209LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MAX;
	int32_t x294 = 30480;
	volatile uint32_t x295 = UINT32_MAX;

	t73 = (((x293==x294)^x295)|x296);

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	static int32_t x300 = -1;
	static volatile int32_t t74 = 1;

	t74 = (((x297==x298)^x299)|x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x303 = UINT32_MAX;
	uint32_t t75 = UINT32_MAX;

	t75 = (((x301==x302)^x303)|x304);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x305 = -1LL;
	int8_t x306 = 51;
	int32_t x307 = INT32_MIN;
	volatile int16_t x308 = -1;
	volatile int32_t t76 = 9557662;

	t76 = (((x305==x306)^x307)|x308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 1992866577373101LLU;
	volatile int32_t x310 = INT32_MAX;
	int32_t x311 = -1;
	static int32_t t77 = 100;

	t77 = (((x309==x310)^x311)|x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x313 = 3690569;
	static uint64_t x314 = UINT64_MAX;
	int32_t x316 = INT32_MAX;
	volatile int32_t t78 = INT32_MAX;

	t78 = (((x313==x314)^x315)|x316);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;

	t79 = (((x317==x318)^x319)|x320);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x322 = INT64_MIN;
	int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t80 = -8928;

	t80 = (((x321==x322)^x323)|x324);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	static int16_t x326 = INT16_MIN;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = -74471671;

	t81 = (((x325==x326)^x327)|x328);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	int16_t x330 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 0;

	t82 = (((x329==x330)^x331)|x332);

	if (t82 != -32646) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 2U;
	int16_t x334 = -1;
	static uint8_t x335 = 5U;
	int32_t x336 = -662719;
	int32_t t83 = 120007428;

	t83 = (((x333==x334)^x335)|x336);

	if (t83 != -662715) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	int8_t x340 = INT8_MIN;

	t84 = (((x337==x338)^x339)|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	static int64_t x342 = 30833598LL;
	int16_t x344 = INT16_MIN;
	static volatile uint64_t t85 = 963729268739LLU;

	t85 = (((x341==x342)^x343)|x344);

	if (t85 != 18446744073709523574LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -6051074258054LL;
	int32_t x346 = 14;
	int32_t x348 = INT32_MAX;
	int32_t t86 = -190;

	t86 = (((x345==x346)^x347)|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = INT64_MAX;
	uint64_t x351 = 7582072LLU;
	volatile uint32_t x352 = UINT32_MAX;

	t87 = (((x349==x350)^x351)|x352);

	if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	volatile int16_t x355 = -9;
	int64_t x356 = 167073004565LL;
	static volatile int64_t t88 = -7622639180130LL;

	t88 = (((x353==x354)^x355)|x356);

	if (t88 != -9LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MIN;
	volatile int8_t x359 = INT8_MAX;
	volatile int8_t x360 = INT8_MAX;
	static volatile int32_t t89 = 446479406;

	t89 = (((x357==x358)^x359)|x360);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x362 = 239;
	int32_t x363 = -1;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = -1;

	t90 = (((x361==x362)^x363)|x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	int64_t x366 = INT64_MIN;
	int16_t x367 = -7;
	volatile int64_t x368 = -104485LL;
	volatile int64_t t91 = -3873998954858259LL;

	t91 = (((x365==x366)^x367)|x368);

	if (t91 != -5LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 149U;
	int16_t x370 = INT16_MIN;
	int16_t x371 = -2;
	uint8_t x372 = 1U;
	int32_t t92 = 130042;

	t92 = (((x369==x370)^x371)|x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 3;
	int32_t x374 = 413101;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = INT16_MAX;
	int32_t t93 = 3407;

	t93 = (((x373==x374)^x375)|x376);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	uint32_t x378 = 3225774U;
	int8_t x379 = INT8_MAX;
	volatile int64_t x380 = -5648953426010067LL;
	volatile int64_t t94 = 0LL;

	t94 = (((x377==x378)^x379)|x380);

	if (t94 != -5648953426009985LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	volatile int64_t x382 = INT64_MAX;
	uint8_t x383 = 19U;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 12;

	t95 = (((x381==x382)^x383)|x384);

	if (t95 != -2147483629) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = -27;
	volatile uint16_t x387 = 362U;
	int32_t x388 = INT32_MIN;
	int32_t t96 = 3153953;

	t96 = (((x385==x386)^x387)|x388);

	if (t96 != -2147483286) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	static int32_t x390 = INT32_MAX;
	uint8_t x392 = 1U;
	static int32_t t97 = -4535;

	t97 = (((x389==x390)^x391)|x392);

	if (t97 != 11) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 170900166LLU;
	int16_t x394 = -362;
	uint32_t x395 = UINT32_MAX;
	volatile int64_t x396 = 28233LL;

	t98 = (((x393==x394)^x395)|x396);

	if (t98 != 4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static volatile int32_t x398 = -206;
	int16_t x399 = 15677;

	t99 = (((x397==x398)^x399)|x400);

	if (t99 != 236289983U) { NG(); } else { ; }
	
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

