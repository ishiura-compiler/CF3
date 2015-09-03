#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = -3446;
static volatile int32_t t0 = 24817;
int64_t x8 = -1LL;
volatile int64_t t1 = -21525741734LL;
static volatile uint32_t t3 = 3U;
int64_t x19 = INT64_MIN;
int16_t x23 = INT16_MAX;
int32_t x26 = 4415257;
int16_t x38 = -38;
uint32_t x45 = 1865553U;
int16_t x47 = INT16_MIN;
static int16_t x62 = INT16_MAX;
int32_t x67 = INT32_MIN;
int16_t x69 = INT16_MIN;
static volatile int32_t t17 = -113812;
static int8_t x73 = -1;
int64_t x75 = 245LL;
volatile int32_t t18 = -9359;
int32_t x85 = INT32_MIN;
int64_t x87 = 16689174LL;
int8_t x88 = INT8_MIN;
volatile int32_t t21 = 25272929;
uint32_t x89 = UINT32_MAX;
uint16_t x93 = UINT16_MAX;
volatile uint64_t x95 = UINT64_MAX;
volatile int32_t t23 = -59;
int8_t x97 = 0;
int32_t x100 = 1;
int32_t t24 = -51;
uint64_t x102 = 8368465416497469878LLU;
volatile uint64_t x105 = UINT64_MAX;
int64_t x108 = INT64_MAX;
static uint64_t x120 = 412242241916028LLU;
volatile uint64_t t29 = 10379765LLU;
volatile int8_t x124 = 7;
volatile int32_t t31 = 2807;
int32_t t32 = 29292;
uint8_t x138 = 3U;
int32_t x143 = 1587;
volatile int32_t t35 = 4421802;
int8_t x145 = -1;
uint32_t x147 = 2145772340U;
int64_t x148 = INT64_MIN;
int8_t x151 = INT8_MAX;
static volatile int32_t t38 = -20076;
uint16_t x157 = 2U;
int64_t x161 = 79915LL;
uint32_t x163 = UINT32_MAX;
uint32_t x166 = 3898605U;
uint8_t x174 = 5U;
uint8_t x176 = UINT8_MAX;
static uint16_t x182 = 1U;
static volatile uint32_t t45 = 1367U;
int64_t x187 = INT64_MIN;
volatile int16_t x193 = -1;
volatile int8_t x196 = -28;
volatile int64_t x197 = -1LL;
uint32_t x202 = UINT32_MAX;
int16_t x205 = -104;
int8_t x209 = -10;
uint8_t x211 = UINT8_MAX;
int64_t x220 = -183935201434270665LL;
uint64_t x225 = UINT64_MAX;
int8_t x230 = INT8_MIN;
int64_t x232 = INT64_MIN;
int32_t x234 = INT32_MAX;
volatile int32_t x238 = -1;
int32_t t59 = 0;
volatile uint16_t x248 = 16U;
static int64_t t65 = -1644123670558188LL;
volatile int8_t x269 = 1;
uint8_t x270 = 125U;
int64_t x272 = INT64_MAX;
int64_t x273 = INT64_MIN;
int32_t t68 = 2;
int8_t x278 = -57;
uint16_t x279 = 117U;
volatile int8_t x286 = INT8_MAX;
int8_t x288 = INT8_MIN;
uint8_t x290 = UINT8_MAX;
volatile int16_t x291 = -1;
int32_t t72 = 1760601;
int32_t x295 = INT32_MIN;
uint64_t x300 = 854801405LLU;
int64_t x303 = INT64_MIN;
int64_t x304 = 6526471926LL;
int8_t x307 = -1;
uint8_t x308 = 0U;
static uint16_t x318 = 3655U;
static volatile uint32_t x319 = UINT32_MAX;
int32_t x324 = -202987344;
static int64_t x339 = 1239308544055355LL;
volatile int32_t t84 = 8852;
uint8_t x343 = 1U;
static int8_t x347 = INT8_MIN;
volatile int32_t x354 = -1;
volatile int32_t t89 = 0;
int64_t x363 = -242886857LL;
static volatile int8_t x364 = INT8_MIN;
int32_t x367 = -5011238;
int64_t x369 = INT64_MIN;
int32_t x376 = 227;
int16_t x377 = -1;
static uint32_t t94 = 1353155288U;
int16_t x381 = INT16_MAX;
volatile int32_t t97 = 17509;
int32_t x394 = INT32_MAX;
static int32_t t98 = 1004;


void f0(void) {
	volatile int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MAX;
	static int8_t x4 = INT8_MIN;

	t0 = (((x1<=x2)<=x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int8_t x6 = INT8_MIN;
	int64_t x7 = INT64_MIN;

	t1 = (((x5<=x6)<=x7)&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -2938431604242062LL;
	volatile int32_t x10 = 5;
	int16_t x11 = INT16_MAX;
	int8_t x12 = 0;
	volatile int32_t t2 = -1;

	t2 = (((x9<=x10)<=x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile uint16_t x14 = UINT16_MAX;
	uint16_t x15 = 808U;
	uint32_t x16 = UINT32_MAX;

	t3 = (((x13<=x14)<=x15)&x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 2218U;
	static int32_t x18 = INT32_MIN;
	uint16_t x20 = 0U;
	volatile int32_t t4 = -102;

	t4 = (((x17<=x18)<=x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint8_t x22 = UINT8_MAX;
	static volatile uint32_t x24 = 4286U;
	volatile uint32_t t5 = 17U;

	t5 = (((x21<=x22)<=x23)&x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = -2;
	int64_t x27 = -1LL;
	int16_t x28 = 1;
	int32_t t6 = -2;

	t6 = (((x25<=x26)<=x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 2U;
	static uint16_t x30 = 29520U;
	volatile uint8_t x31 = UINT8_MAX;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t7 = 12U;

	t7 = (((x29<=x30)<=x31)&x32);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 1U;
	int32_t x34 = INT32_MIN;
	uint8_t x35 = 5U;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -370387;

	t8 = (((x33<=x34)<=x35)&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = UINT64_MAX;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = INT8_MIN;
	static int32_t t9 = -434591538;

	t9 = (((x37<=x38)<=x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 139448160;
	uint8_t x42 = 22U;
	int64_t x43 = INT64_MAX;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -526768;

	t10 = (((x41<=x42)<=x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -138356508893816LL;
	static int16_t x48 = INT16_MIN;
	int32_t t11 = 216;

	t11 = (((x45<=x46)<=x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 0U;
	uint32_t x50 = 3631544U;
	uint8_t x51 = 23U;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t12 = 14165115;

	t12 = (((x49<=x50)<=x51)&x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint16_t x54 = 4U;
	uint8_t x55 = 6U;
	volatile int16_t x56 = 12320;
	volatile int32_t t13 = 1088;

	t13 = (((x53<=x54)<=x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 583621576LLU;
	int64_t x58 = -1LL;
	static int32_t x59 = -57752592;
	static uint32_t x60 = UINT32_MAX;
	uint32_t t14 = 1U;

	t14 = (((x57<=x58)<=x59)&x60);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int32_t x63 = 13286;
	static uint64_t x64 = UINT64_MAX;
	volatile uint64_t t15 = 27998454713LLU;

	t15 = (((x61<=x62)<=x63)&x64);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint32_t x66 = 475854U;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -5987187;

	t16 = (((x65<=x66)<=x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x70 = 139U;
	int32_t x71 = INT32_MAX;
	static int8_t x72 = INT8_MIN;

	t17 = (((x69<=x70)<=x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -971460706152459724LL;
	uint8_t x76 = UINT8_MAX;

	t18 = (((x73<=x74)<=x75)&x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -1;
	int64_t x78 = INT64_MIN;
	static volatile int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 4;

	t19 = (((x77<=x78)<=x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	int8_t x83 = -1;
	static int8_t x84 = -31;
	static int32_t t20 = 1;

	t20 = (((x81<=x82)<=x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = 0;

	t21 = (((x85<=x86)<=x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	volatile int16_t x91 = 1;
	int64_t x92 = INT64_MIN;
	static int64_t t22 = 16735473844074LL;

	t22 = (((x89<=x90)<=x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = -868268025019446255LL;
	int16_t x96 = -1;

	t23 = (((x93<=x94)<=x95)&x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 26494503687735LLU;
	static volatile uint32_t x99 = UINT32_MAX;

	t24 = (((x97<=x98)<=x99)&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	volatile int8_t x103 = INT8_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 1;

	t25 = (((x101<=x102)<=x103)&x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x106 = UINT8_MAX;
	uint32_t x107 = UINT32_MAX;
	volatile int64_t t26 = 56330LL;

	t26 = (((x105<=x106)<=x107)&x108);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 1269U;
	int64_t x110 = INT64_MIN;
	static int8_t x111 = -1;
	uint16_t x112 = UINT16_MAX;
	int32_t t27 = -41678634;

	t27 = (((x109<=x110)<=x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	uint32_t x114 = 1669240U;
	static int64_t x115 = INT64_MIN;
	static int16_t x116 = INT16_MIN;
	static volatile int32_t t28 = -432340212;

	t28 = (((x113<=x114)<=x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -102;
	int8_t x118 = INT8_MAX;
	int8_t x119 = -1;

	t29 = (((x117<=x118)<=x119)&x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = -1;
	volatile int8_t x123 = INT8_MIN;
	static int32_t t30 = 225951196;

	t30 = (((x121<=x122)<=x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -127822;
	static volatile int32_t x126 = INT32_MIN;
	int64_t x127 = -476025738032758LL;
	static int16_t x128 = 1742;

	t31 = (((x125<=x126)<=x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 862U;
	static int32_t x130 = INT32_MIN;
	static volatile uint8_t x131 = 10U;
	static uint16_t x132 = UINT16_MAX;

	t32 = (((x129<=x130)<=x131)&x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -54819108325LL;
	static uint64_t x134 = 218LLU;
	uint8_t x135 = UINT8_MAX;
	int64_t x136 = INT64_MIN;
	volatile int64_t t33 = 5335100LL;

	t33 = (((x133<=x134)<=x135)&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	static int64_t x139 = INT64_MIN;
	static int32_t x140 = 98815282;
	int32_t t34 = -3717;

	t34 = (((x137<=x138)<=x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static int64_t x142 = INT64_MIN;
	int16_t x144 = INT16_MIN;

	t35 = (((x141<=x142)<=x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x146 = UINT64_MAX;
	int64_t t36 = 0LL;

	t36 = (((x145<=x146)<=x147)&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static volatile int16_t x150 = INT16_MIN;
	uint16_t x152 = 17U;
	static int32_t t37 = 572;

	t37 = (((x149<=x150)<=x151)&x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = -1;
	uint16_t x154 = 5564U;
	int8_t x155 = -25;
	static int8_t x156 = 5;

	t38 = (((x153<=x154)<=x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	int64_t x159 = INT64_MIN;
	static uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = 127;

	t39 = (((x157<=x158)<=x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = UINT32_MAX;
	static int32_t x164 = INT32_MIN;
	volatile int32_t t40 = -465;

	t40 = (((x161<=x162)<=x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	uint16_t x167 = 1705U;
	volatile int16_t x168 = -1;
	static volatile int32_t t41 = -13387;

	t41 = (((x165<=x166)<=x167)&x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = -11464427833LL;
	int64_t x170 = -1LL;
	int8_t x171 = INT8_MAX;
	uint64_t x172 = 1110213277330484LLU;
	uint64_t t42 = 8225965134LLU;

	t42 = (((x169<=x170)<=x171)&x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int16_t x175 = INT16_MAX;
	static int32_t t43 = -68333882;

	t43 = (((x173<=x174)<=x175)&x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1586591LL;
	static uint16_t x178 = 44U;
	volatile int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = 1570342;

	t44 = (((x177<=x178)<=x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	volatile int8_t x183 = INT8_MAX;
	static uint32_t x184 = 7853U;

	t45 = (((x181<=x182)<=x183)&x184);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x185 = 1U;
	volatile int8_t x186 = INT8_MIN;
	int32_t x188 = -1;
	volatile int32_t t46 = -3;

	t46 = (((x185<=x186)<=x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = -1LL;
	static int8_t x191 = -1;
	int64_t x192 = INT64_MIN;
	volatile int64_t t47 = 785271094841LL;

	t47 = (((x189<=x190)<=x191)&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = 33801814085LL;
	int32_t x195 = 51;
	static int32_t t48 = 465;

	t48 = (((x193<=x194)<=x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x198 = -1066320938LL;
	uint8_t x199 = UINT8_MAX;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -7010;

	t49 = (((x197<=x198)<=x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static volatile int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t50 = 21522055;

	t50 = (((x201<=x202)<=x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x206 = 241043748U;
	uint64_t x207 = UINT64_MAX;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t51 = -1;

	t51 = (((x205<=x206)<=x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x210 = -3988;
	int64_t x212 = INT64_MIN;
	volatile int64_t t52 = -181938849LL;

	t52 = (((x209<=x210)<=x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 331345;
	int64_t x214 = 7LL;
	volatile int8_t x215 = INT8_MAX;
	static uint32_t x216 = UINT32_MAX;
	volatile uint32_t t53 = 36U;

	t53 = (((x213<=x214)<=x215)&x216);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -13;
	static int64_t x218 = INT64_MAX;
	static uint32_t x219 = UINT32_MAX;
	volatile int64_t t54 = -472704812LL;

	t54 = (((x217<=x218)<=x219)&x220);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	uint16_t x222 = 23U;
	static uint16_t x223 = 593U;
	int8_t x224 = -9;
	volatile int32_t t55 = 188838;

	t55 = (((x221<=x222)<=x223)&x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x226 = -207;
	static int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t56 = 182168;

	t56 = (((x225<=x226)<=x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x231 = INT32_MAX;
	int64_t t57 = -8LL;

	t57 = (((x229<=x230)<=x231)&x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int16_t x235 = 1;
	static volatile int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 251841;

	t58 = (((x233<=x234)<=x235)&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	uint64_t x239 = 2LLU;
	int8_t x240 = INT8_MAX;

	t59 = (((x237<=x238)<=x239)&x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 73U;
	int64_t x242 = INT64_MIN;
	int32_t x243 = -1;
	uint8_t x244 = 29U;
	volatile int32_t t60 = 1449;

	t60 = (((x241<=x242)<=x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -130;
	int8_t x246 = INT8_MIN;
	uint32_t x247 = 16995U;
	volatile int32_t t61 = 31043;

	t61 = (((x245<=x246)<=x247)&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = 832LLU;
	static uint64_t x250 = 957668876725918LLU;
	static int64_t x251 = 6LL;
	static int32_t x252 = 1510752;
	int32_t t62 = 1;

	t62 = (((x249<=x250)<=x251)&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = UINT64_MAX;
	volatile int8_t x254 = INT8_MAX;
	uint32_t x255 = 129841724U;
	int32_t x256 = INT32_MAX;
	volatile int32_t t63 = 108667764;

	t63 = (((x253<=x254)<=x255)&x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = -1;
	static int32_t x258 = 12615193;
	int16_t x259 = -1;
	int16_t x260 = -1;
	static volatile int32_t t64 = -22;

	t64 = (((x257<=x258)<=x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	int32_t x262 = INT32_MAX;
	uint16_t x263 = 1U;
	int64_t x264 = 56635066LL;

	t65 = (((x261<=x262)<=x263)&x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static int32_t x266 = -248163;
	int8_t x267 = INT8_MIN;
	volatile uint32_t x268 = 1691133330U;
	static uint32_t t66 = 59U;

	t66 = (((x265<=x266)<=x267)&x268);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x271 = -1;
	volatile int64_t t67 = -91982474LL;

	t67 = (((x269<=x270)<=x271)&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = UINT64_MAX;
	int32_t x275 = 26671;
	uint16_t x276 = UINT16_MAX;

	t68 = (((x273<=x274)<=x275)&x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 380;
	uint64_t x280 = 323845761298430LLU;
	static uint64_t t69 = 2254878059009104LLU;

	t69 = (((x277<=x278)<=x279)&x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 25;
	static uint64_t x282 = 583LLU;
	int8_t x283 = -1;
	int64_t x284 = 4326275758281565LL;
	int64_t t70 = -1LL;

	t70 = (((x281<=x282)<=x283)&x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	uint8_t x287 = UINT8_MAX;
	int32_t t71 = 154323;

	t71 = (((x285<=x286)<=x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x289 = INT32_MIN;
	int16_t x292 = -3312;

	t72 = (((x289<=x290)<=x291)&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -23612109059782LL;
	int32_t x294 = INT32_MIN;
	static int32_t x296 = INT32_MIN;
	volatile int32_t t73 = -1;

	t73 = (((x293<=x294)<=x295)&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	volatile uint32_t x298 = 88449009U;
	volatile uint32_t x299 = 5668438U;
	static volatile uint64_t t74 = 894187825LLU;

	t74 = (((x297<=x298)<=x299)&x300);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = 98U;
	static volatile uint16_t x302 = UINT16_MAX;
	static int64_t t75 = 7993421143812586LL;

	t75 = (((x301<=x302)<=x303)&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	int64_t x306 = INT64_MIN;
	int32_t t76 = 47299;

	t76 = (((x305<=x306)<=x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	int16_t x310 = INT16_MAX;
	volatile uint8_t x311 = 0U;
	volatile uint16_t x312 = 1U;
	int32_t t77 = 1;

	t77 = (((x309<=x310)<=x311)&x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -3753397;
	int16_t x314 = -652;
	int8_t x315 = 13;
	static volatile uint64_t x316 = 218177LLU;
	static volatile uint64_t t78 = 2713358632434961327LLU;

	t78 = (((x313<=x314)<=x315)&x316);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 9456666989LLU;
	uint32_t x320 = UINT32_MAX;
	uint32_t t79 = 16471891U;

	t79 = (((x317<=x318)<=x319)&x320);

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	uint16_t x322 = UINT16_MAX;
	int8_t x323 = 0;
	volatile int32_t t80 = -8;

	t80 = (((x321<=x322)<=x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	static int32_t x326 = -1;
	int64_t x327 = INT64_MAX;
	static uint8_t x328 = 1U;
	volatile int32_t t81 = -2912;

	t81 = (((x325<=x326)<=x327)&x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 4U;
	int8_t x330 = -8;
	uint16_t x331 = UINT16_MAX;
	volatile int16_t x332 = -1;
	static volatile int32_t t82 = -8;

	t82 = (((x329<=x330)<=x331)&x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	static int8_t x334 = 0;
	int8_t x335 = -49;
	static int32_t x336 = INT32_MIN;
	static volatile int32_t t83 = -516644;

	t83 = (((x333<=x334)<=x335)&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -110212576534631717LL;
	int8_t x338 = INT8_MIN;
	static int8_t x340 = INT8_MIN;

	t84 = (((x337<=x338)<=x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = 6213991959LL;
	static volatile int16_t x344 = INT16_MAX;
	static volatile int32_t t85 = -129849887;

	t85 = (((x341<=x342)<=x343)&x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	int8_t x346 = -1;
	uint64_t x348 = 69113LLU;
	volatile uint64_t t86 = 220298516LLU;

	t86 = (((x345<=x346)<=x347)&x348);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -62;
	static uint32_t x350 = UINT32_MAX;
	volatile uint16_t x351 = 4993U;
	int64_t x352 = -487291001369LL;
	int64_t t87 = 210392LL;

	t87 = (((x349<=x350)<=x351)&x352);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	uint16_t x355 = UINT16_MAX;
	volatile int16_t x356 = INT16_MIN;
	int32_t t88 = -3;

	t88 = (((x353<=x354)<=x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = INT64_MIN;
	int8_t x358 = 11;
	volatile uint64_t x359 = 24834121LLU;
	int32_t x360 = INT32_MIN;

	t89 = (((x357<=x358)<=x359)&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = 240425108U;
	int16_t x362 = INT16_MIN;
	int32_t t90 = 23;

	t90 = (((x361<=x362)<=x363)&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	static volatile int64_t x366 = -1LL;
	int8_t x368 = 3;
	volatile int32_t t91 = -4;

	t91 = (((x365<=x366)<=x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MIN;
	volatile int32_t x372 = -38;
	static volatile int32_t t92 = -1;

	t92 = (((x369<=x370)<=x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -24969531LL;
	volatile int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MAX;
	volatile int32_t t93 = -32495917;

	t93 = (((x373<=x374)<=x375)&x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MAX;
	static int16_t x379 = -11282;
	uint32_t x380 = UINT32_MAX;

	t94 = (((x377<=x378)<=x379)&x380);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -1LL;
	uint32_t x383 = 8932U;
	volatile int32_t x384 = INT32_MAX;
	static int32_t t95 = 775016375;

	t95 = (((x381<=x382)<=x383)&x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	int32_t x386 = -238;
	int16_t x387 = INT16_MIN;
	volatile uint8_t x388 = 103U;
	int32_t t96 = -2;

	t96 = (((x385<=x386)<=x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	int32_t x391 = 50;
	int32_t x392 = 1;

	t97 = (((x389<=x390)<=x391)&x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = -1LL;
	static int32_t x395 = INT32_MIN;
	int16_t x396 = 683;

	t98 = (((x393<=x394)<=x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = 261415263;
	volatile int32_t x398 = 32347;
	int32_t x399 = -1;
	static volatile int16_t x400 = INT16_MIN;
	static int32_t t99 = -783369;

	t99 = (((x397<=x398)<=x399)&x400);

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

