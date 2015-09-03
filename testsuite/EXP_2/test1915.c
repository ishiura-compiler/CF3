#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 4;
uint64_t x3 = 68655LLU;
static uint64_t t0 = 60560626100LLU;
int32_t x7 = INT32_MAX;
int64_t x9 = INT64_MIN;
int32_t t5 = -126320;
volatile uint64_t t6 = 4649784611550852343LLU;
uint64_t x30 = 0LLU;
uint32_t x32 = 1523673U;
static uint32_t x33 = UINT32_MAX;
volatile uint8_t x37 = 0U;
uint8_t x39 = 0U;
static volatile uint32_t t9 = 39607543U;
int64_t x44 = 800748LL;
volatile uint64_t t10 = 413135LLU;
uint32_t x49 = 292498U;
uint64_t x53 = 483930733895876LLU;
int8_t x56 = 13;
uint64_t x66 = 1414596492947LLU;
volatile int64_t t17 = 877LL;
static int16_t x97 = 1559;
static int16_t x99 = 218;
int64_t x103 = -2799438151LL;
uint8_t x105 = UINT8_MAX;
static int64_t t24 = 680271794LL;
int32_t x117 = -1;
int64_t t27 = 50386550LL;
volatile uint64_t t28 = 66001113031812690LLU;
int32_t t29 = -126;
volatile int64_t x135 = INT64_MIN;
static volatile int64_t t30 = 20406459705736090LL;
uint64_t x140 = 13531153931323LLU;
int16_t x143 = INT16_MAX;
uint32_t x146 = 0U;
uint8_t x147 = UINT8_MAX;
static int8_t x155 = INT8_MIN;
static volatile uint64_t t38 = 484563474079LLU;
int8_t x169 = -1;
int32_t x172 = INT32_MIN;
int32_t t39 = 32562462;
static volatile int64_t t40 = -190639939538774LL;
int64_t t42 = -187674863144104972LL;
int16_t x186 = INT16_MIN;
static uint8_t x188 = 3U;
volatile uint64_t t45 = 1056959916LLU;
uint32_t x197 = UINT32_MAX;
static volatile uint32_t x198 = UINT32_MAX;
static uint64_t x209 = 914517174332101695LLU;
uint64_t t49 = 59581261LLU;
volatile uint8_t x217 = UINT8_MAX;
volatile int32_t x218 = INT32_MAX;
static int32_t x221 = INT32_MIN;
uint64_t x223 = 9LLU;
volatile int64_t t53 = -30147LL;
int32_t x235 = -1;
int32_t x236 = INT32_MIN;
int32_t x240 = INT32_MIN;
int64_t x243 = INT64_MAX;
volatile uint8_t x249 = 13U;
volatile uint32_t t58 = 20U;
static int8_t x270 = -41;
int16_t x289 = -4939;
int32_t x292 = -1;
volatile int32_t t66 = -6;
volatile uint16_t x296 = 1U;
volatile uint64_t t67 = 3483541166LLU;
static volatile int64_t x303 = INT64_MIN;
static uint64_t t69 = 56LLU;
uint32_t x307 = 3944U;
uint64_t x308 = 5172704904679LLU;
int64_t x321 = INT64_MIN;
uint16_t x324 = 219U;
volatile int32_t x329 = INT32_MIN;
static int32_t x336 = INT32_MAX;
static volatile int8_t x342 = 0;
int64_t x344 = -1LL;
static int8_t x345 = INT8_MIN;
int64_t x349 = 0LL;
static uint32_t x350 = 148639U;
uint16_t x351 = 29U;
uint8_t x358 = 59U;
int32_t x363 = INT32_MAX;
volatile int64_t x369 = -59419292LL;
int32_t x373 = INT32_MAX;
volatile uint32_t x377 = 101221123U;
int64_t x384 = -1LL;
uint64_t x386 = 5489LLU;
int16_t x393 = INT16_MAX;
volatile int64_t t91 = 1LL;
int32_t x398 = INT32_MIN;
volatile uint64_t x400 = 11842675331LLU;
static uint32_t x408 = 16105377U;
uint32_t t94 = 7U;
int16_t x414 = -1;
uint8_t x421 = 3U;
uint64_t x422 = 3609LLU;
uint64_t t98 = 14094LLU;
volatile uint32_t x425 = UINT32_MAX;
uint32_t x428 = 32732U;


void f0(void) {
	volatile uint16_t x2 = 9U;
	int16_t x4 = INT16_MIN;

	t0 = ((x1%(x2|x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint8_t x6 = 24U;
	static uint64_t x8 = 319224LLU;
	uint64_t t1 = 14LLU;

	t1 = ((x5%(x6|x7))/x8);

	if (t1 != 57786206781788LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = INT16_MIN;
	static int64_t x11 = INT64_MIN;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 16138LLU;

	t2 = ((x9%(x10|x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = 50;
	int32_t x15 = -1;
	volatile int16_t x16 = INT16_MIN;
	volatile int64_t t3 = -570943463LL;

	t3 = ((x13%(x14|x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	uint64_t x18 = 25907029349041LLU;
	int64_t x19 = -1LL;
	int64_t x20 = -1LL;
	uint64_t t4 = 7052854945456LLU;

	t4 = ((x17%(x18|x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -3;
	volatile int16_t x22 = INT16_MAX;
	uint16_t x23 = 13538U;
	int32_t x24 = INT32_MIN;

	t5 = ((x21%(x22|x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int32_t x26 = -1;
	int16_t x27 = -1;
	uint64_t x28 = 486306LLU;

	t6 = ((x25%(x26|x27))/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static int8_t x31 = -39;
	static volatile uint64_t t7 = 686LLU;

	t7 = ((x29%(x30|x31))/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x34 = 68U;
	uint8_t x35 = 47U;
	int8_t x36 = -1;
	volatile uint32_t t8 = 628U;

	t8 = ((x33%(x34|x35))/x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = UINT16_MAX;
	uint32_t x40 = UINT32_MAX;

	t9 = ((x37%(x38|x39))/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int8_t x42 = 6;
	int8_t x43 = INT8_MIN;

	t10 = ((x41%(x42|x43))/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 2069693059061LLU;
	static int16_t x46 = -1;
	static int32_t x47 = INT32_MAX;
	int32_t x48 = INT32_MIN;
	static uint64_t t11 = 440201LLU;

	t11 = ((x45%(x46|x47))/x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = -4564;
	uint64_t x51 = 3934575LLU;
	int8_t x52 = INT8_MIN;
	static volatile uint64_t t12 = 478610006465074LLU;

	t12 = ((x49%(x50|x51))/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x54 = INT16_MIN;
	int32_t x55 = 1098697;
	volatile uint64_t t13 = 25219LLU;

	t13 = ((x53%(x54|x55))/x56);

	if (t13 != 37225441068913LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static int64_t x58 = -1LL;
	int8_t x59 = INT8_MAX;
	static int64_t x60 = -3258696370379LL;
	volatile int64_t t14 = 3LL;

	t14 = ((x57%(x58|x59))/x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = -1LL;
	static int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MAX;
	uint64_t t15 = 1LLU;

	t15 = ((x65%(x66|x67))/x68);

	if (t15 != 18165LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -3199652208380328LL;
	static uint32_t x70 = UINT32_MAX;
	volatile int8_t x71 = INT8_MIN;
	int8_t x72 = 62;
	volatile int64_t t16 = -11993355877193745LL;

	t16 = ((x69%(x70|x71))/x72);

	if (t16 != -5771824LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MAX;
	int64_t x75 = INT64_MAX;
	uint8_t x76 = 4U;

	t17 = ((x73%(x74|x75))/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	uint16_t x78 = 1U;
	uint32_t x79 = 58968U;
	static uint64_t x80 = UINT64_MAX;
	uint64_t t18 = 517630925210962LLU;

	t18 = ((x77%(x78|x79))/x80);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1LL;
	uint64_t x82 = 2LLU;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = INT16_MIN;
	static uint64_t t19 = 47281642LLU;

	t19 = ((x81%(x82|x83))/x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x85 = 4443U;
	static int32_t x86 = INT32_MIN;
	static int16_t x87 = INT16_MAX;
	int64_t x88 = 6431LL;
	volatile int64_t t20 = -1709004361060069LL;

	t20 = ((x85%(x86|x87))/x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = 3;
	static int8_t x94 = INT8_MIN;
	volatile int64_t x95 = -1LL;
	int32_t x96 = -1;
	volatile int64_t t21 = 5978688LL;

	t21 = ((x93%(x94|x95))/x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x98 = UINT16_MAX;
	static uint8_t x100 = 34U;
	static volatile int32_t t22 = 1;

	t22 = ((x97%(x98|x99))/x100);

	if (t22 != 45) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = INT32_MIN;
	int16_t x102 = -48;
	int16_t x104 = -1;
	int64_t t23 = -201578070843331LL;

	t23 = ((x101%(x102|x103))/x104);

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x106 = -75398059285LL;
	static uint8_t x107 = UINT8_MAX;
	uint32_t x108 = 1U;

	t24 = ((x105%(x106|x107))/x108);

	if (t24 != 255LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 14116372707011LLU;
	int64_t x114 = -85288901920698LL;
	int16_t x115 = -35;
	volatile int64_t x116 = INT64_MIN;
	volatile uint64_t t25 = 97LLU;

	t25 = ((x113%(x114|x115))/x116);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x118 = INT32_MAX;
	int16_t x119 = -1178;
	volatile uint32_t x120 = 7U;
	volatile uint32_t t26 = 496904517U;

	t26 = ((x117%(x118|x119))/x120);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MAX;
	int8_t x122 = -1;
	static int16_t x123 = INT16_MAX;
	volatile int8_t x124 = INT8_MAX;

	t27 = ((x121%(x122|x123))/x124);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x125 = 55702192238176LLU;
	static uint64_t x126 = 131LLU;
	static uint32_t x127 = 203U;
	static volatile int8_t x128 = INT8_MIN;

	t28 = ((x125%(x126|x127))/x128);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MAX;
	static uint8_t x130 = 3U;
	volatile uint16_t x131 = 534U;
	volatile uint16_t x132 = 93U;

	t29 = ((x129%(x130|x131))/x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = UINT8_MAX;
	static volatile uint16_t x134 = UINT16_MAX;
	static int32_t x136 = INT32_MIN;

	t30 = ((x133%(x134|x135))/x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x137 = UINT32_MAX;
	static int8_t x138 = INT8_MAX;
	int32_t x139 = -66640622;
	volatile uint64_t t31 = 3148434607367LLU;

	t31 = ((x137%(x138|x139))/x140);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x141 = INT16_MIN;
	int8_t x142 = 2;
	int64_t x144 = INT64_MIN;
	int64_t t32 = -2384274960985040LL;

	t32 = ((x141%(x142|x143))/x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MIN;
	volatile uint16_t x148 = 463U;
	volatile int64_t t33 = -98093697121670LL;

	t33 = ((x145%(x146|x147))/x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x149 = -820;
	int32_t x150 = INT32_MIN;
	int8_t x151 = -1;
	int32_t x152 = INT32_MIN;
	volatile int32_t t34 = 47008;

	t34 = ((x149%(x150|x151))/x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x153 = 12U;
	int16_t x154 = INT16_MIN;
	int64_t x156 = 2234805943662406235LL;
	volatile int64_t t35 = 51LL;

	t35 = ((x153%(x154|x155))/x156);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = -99;
	int8_t x160 = INT8_MIN;
	int32_t t36 = 6;

	t36 = ((x157%(x158|x159))/x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x161 = INT16_MAX;
	static volatile int64_t x162 = -1LL;
	uint32_t x163 = 12772742U;
	int64_t x164 = INT64_MIN;
	static int64_t t37 = 76407386LL;

	t37 = ((x161%(x162|x163))/x164);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 1871249287779LLU;
	int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	volatile int8_t x168 = INT8_MIN;

	t38 = ((x165%(x166|x167))/x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x170 = -49;
	int32_t x171 = -364306324;

	t39 = ((x169%(x170|x171))/x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x173 = UINT16_MAX;
	int32_t x174 = -1;
	int8_t x175 = -1;
	int64_t x176 = 2563674146338193882LL;

	t40 = ((x173%(x174|x175))/x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x177 = 31LL;
	int32_t x178 = INT32_MAX;
	int16_t x179 = -1;
	volatile uint64_t x180 = UINT64_MAX;
	volatile uint64_t t41 = 70380158122009566LLU;

	t41 = ((x177%(x178|x179))/x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MIN;
	int16_t x182 = -1;
	static uint32_t x183 = 950U;
	static uint8_t x184 = 1U;

	t42 = ((x181%(x182|x183))/x184);

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MIN;
	static int64_t x187 = INT64_MIN;
	volatile int64_t t43 = 3LL;

	t43 = ((x185%(x186|x187))/x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x189 = 0U;
	int64_t x190 = 12757264LL;
	volatile uint32_t x191 = UINT32_MAX;
	uint32_t x192 = 189U;
	int64_t t44 = -6908959634612268LL;

	t44 = ((x189%(x190|x191))/x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x193 = 0;
	uint64_t x194 = UINT64_MAX;
	int32_t x195 = -1;
	static int64_t x196 = -3214277LL;

	t45 = ((x193%(x194|x195))/x196);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x199 = INT16_MAX;
	volatile uint32_t x200 = UINT32_MAX;
	volatile uint32_t t46 = 174310558U;

	t46 = ((x197%(x198|x199))/x200);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MIN;
	volatile int32_t x204 = -1;
	int64_t t47 = -10160036628LL;

	t47 = ((x201%(x202|x203))/x204);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -289;
	int8_t x206 = -1;
	uint16_t x207 = UINT16_MAX;
	int16_t x208 = 44;
	volatile int32_t t48 = 2;

	t48 = ((x205%(x206|x207))/x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x210 = INT32_MAX;
	int64_t x211 = -55805LL;
	uint32_t x212 = 762476528U;

	t49 = ((x209%(x210|x211))/x212);

	if (t49 != 1199403707LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x219 = 1;
	int32_t x220 = INT32_MAX;
	volatile int32_t t50 = -15678611;

	t50 = ((x217%(x218|x219))/x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x222 = -2782643162LL;
	uint16_t x224 = 410U;
	static uint64_t t51 = 42702LLU;

	t51 = ((x221%(x222|x223))/x224);

	if (t51 != 1549169LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x225 = -1;
	static int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	int64_t x228 = 52587237627110143LL;
	static int64_t t52 = 13LL;

	t52 = ((x225%(x226|x227))/x228);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x229 = UINT16_MAX;
	uint8_t x230 = 13U;
	static int64_t x231 = INT64_MAX;
	int16_t x232 = INT16_MAX;

	t53 = ((x229%(x230|x231))/x232);

	if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = -8174;
	uint8_t x234 = 6U;
	volatile int32_t t54 = 27;

	t54 = ((x233%(x234|x235))/x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x237 = -2936;
	int32_t x238 = 12042715;
	uint16_t x239 = 1U;
	int32_t t55 = -14627;

	t55 = ((x237%(x238|x239))/x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = -1LL;
	int64_t x242 = -59614573976LL;
	int8_t x244 = -1;
	volatile int64_t t56 = -1724874LL;

	t56 = ((x241%(x242|x243))/x244);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = UINT64_MAX;
	volatile int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MIN;
	volatile int32_t x248 = -1;
	volatile uint64_t t57 = 395028072738890123LLU;

	t57 = ((x245%(x246|x247))/x248);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x250 = UINT32_MAX;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = UINT32_MAX;

	t58 = ((x249%(x250|x251))/x252);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MIN;
	static int16_t x254 = -27;
	static uint8_t x255 = 0U;
	int16_t x256 = INT16_MIN;
	volatile int32_t t59 = 1207;

	t59 = ((x253%(x254|x255))/x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = 3014407068848619968LLU;
	uint16_t x258 = 0U;
	uint32_t x259 = 9U;
	uint8_t x260 = 3U;
	uint64_t t60 = 472782430297LLU;

	t60 = ((x257%(x258|x259))/x260);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = UINT64_MAX;
	int8_t x262 = 24;
	int32_t x263 = INT32_MIN;
	static int8_t x264 = INT8_MIN;
	uint64_t t61 = 258298889678398035LLU;

	t61 = ((x261%(x262|x263))/x264);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = 1;
	int32_t x266 = -1;
	static int32_t x267 = INT32_MIN;
	volatile int8_t x268 = 4;
	int32_t t62 = 448064;

	t62 = ((x265%(x266|x267))/x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x269 = UINT32_MAX;
	uint32_t x271 = UINT32_MAX;
	static uint16_t x272 = 172U;
	volatile uint32_t t63 = 0U;

	t63 = ((x269%(x270|x271))/x272);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = -181;
	static uint64_t x274 = 648394663LLU;
	static volatile int16_t x275 = 1;
	uint64_t x276 = 6123LLU;
	volatile uint64_t t64 = 5419287874032640LLU;

	t64 = ((x273%(x274|x275))/x276);

	if (t64 != 59873LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x285 = UINT64_MAX;
	volatile uint16_t x286 = 22U;
	uint16_t x287 = UINT16_MAX;
	uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t65 = 31417086850LLU;

	t65 = ((x285%(x286|x287))/x288);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x290 = INT32_MAX;
	int32_t x291 = INT32_MIN;

	t66 = ((x289%(x290|x291))/x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x293 = 4294291914LLU;
	int8_t x294 = INT8_MIN;
	volatile int16_t x295 = 1;

	t67 = ((x293%(x294|x295))/x296);

	if (t67 != 4294291914LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x297 = 1;
	int8_t x298 = -2;
	int8_t x299 = -26;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t68 = 10321959169004103LLU;

	t68 = ((x297%(x298|x299))/x300);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x301 = INT64_MAX;
	uint32_t x302 = 254702U;
	volatile uint64_t x304 = 28947200235LLU;

	t69 = ((x301%(x302|x303))/x304);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = -93899093579591LL;
	uint16_t x306 = UINT16_MAX;
	volatile uint64_t t70 = 592LLU;

	t70 = ((x305%(x306|x307))/x308);

	if (t70 != 3566169LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = 28;
	static uint16_t x310 = 23838U;
	int64_t x311 = -1LL;
	int32_t x312 = INT32_MIN;
	static volatile int64_t t71 = 0LL;

	t71 = ((x309%(x310|x311))/x312);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = -1;
	int16_t x314 = INT16_MIN;
	uint8_t x315 = 3U;
	int64_t x316 = INT64_MIN;
	volatile int64_t t72 = 373809670LL;

	t72 = ((x313%(x314|x315))/x316);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x322 = UINT16_MAX;
	static volatile uint8_t x323 = UINT8_MAX;
	volatile int64_t t73 = -7004728579LL;

	t73 = ((x321%(x322|x323))/x324);

	if (t73 != -149LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 1LLU;
	uint64_t x326 = 45960252888016112LLU;
	static int32_t x327 = INT32_MAX;
	int16_t x328 = INT16_MIN;
	volatile uint64_t t74 = 886364884LLU;

	t74 = ((x325%(x326|x327))/x328);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x330 = 3895493U;
	int64_t x331 = -1LL;
	volatile int64_t x332 = INT64_MIN;
	volatile int64_t t75 = 4038316573906LL;

	t75 = ((x329%(x330|x331))/x332);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int16_t x335 = -10;
	int32_t t76 = -259803;

	t76 = ((x333%(x334|x335))/x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = -1LL;
	uint16_t x338 = 5U;
	int16_t x339 = INT16_MIN;
	int16_t x340 = -1;
	int64_t t77 = 19639767953296LL;

	t77 = ((x337%(x338|x339))/x340);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x341 = 195;
	int32_t x343 = INT32_MAX;
	int64_t t78 = 208191LL;

	t78 = ((x341%(x342|x343))/x344);

	if (t78 != -195LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x346 = 12;
	int64_t x347 = INT64_MAX;
	int32_t x348 = INT32_MIN;
	int64_t t79 = 135LL;

	t79 = ((x345%(x346|x347))/x348);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x352 = -1;
	volatile int64_t t80 = -507176937523832002LL;

	t80 = ((x349%(x350|x351))/x352);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x353 = 1U;
	uint64_t x354 = 437LLU;
	int64_t x355 = -37929662LL;
	int64_t x356 = INT64_MAX;
	volatile uint64_t t81 = 316733684278894621LLU;

	t81 = ((x353%(x354|x355))/x356);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = -1;
	volatile int8_t x359 = INT8_MAX;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t82 = 360501;

	t82 = ((x357%(x358|x359))/x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = -1;
	int8_t x362 = 21;
	static int32_t x364 = INT32_MAX;
	int32_t t83 = -14844463;

	t83 = ((x361%(x362|x363))/x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MIN;
	volatile int64_t x368 = 135LL;
	int64_t t84 = 11316714103812LL;

	t84 = ((x365%(x366|x367))/x368);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x370 = -378466697652252LL;
	int64_t x371 = INT64_MAX;
	int64_t x372 = 975LL;
	int64_t t85 = 685LL;

	t85 = ((x369%(x370|x371))/x372);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x374 = -1;
	uint8_t x375 = UINT8_MAX;
	uint64_t x376 = 209929779765521385LLU;
	volatile uint64_t t86 = 59LLU;

	t86 = ((x373%(x374|x375))/x376);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x378 = 81598632935069LLU;
	uint32_t x379 = UINT32_MAX;
	int8_t x380 = -1;
	volatile uint64_t t87 = 34517LLU;

	t87 = ((x377%(x378|x379))/x380);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x381 = 7U;
	int64_t x382 = INT64_MIN;
	volatile int16_t x383 = INT16_MIN;
	int64_t t88 = 7324494220345269LL;

	t88 = ((x381%(x382|x383))/x384);

	if (t88 != -7LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x385 = 281142U;
	int64_t x387 = INT64_MIN;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t89 = 2086351163266009LLU;

	t89 = ((x385%(x386|x387))/x388);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x389 = UINT64_MAX;
	static uint8_t x390 = 3U;
	volatile uint32_t x391 = 9025404U;
	int32_t x392 = INT32_MIN;
	volatile uint64_t t90 = 3063367422564LLU;

	t90 = ((x389%(x390|x391))/x392);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x394 = -1LL;
	int64_t x395 = INT64_MAX;
	int32_t x396 = INT32_MIN;

	t91 = ((x393%(x394|x395))/x396);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = INT8_MAX;
	volatile uint16_t x399 = 62U;
	volatile uint64_t t92 = 118743333LLU;

	t92 = ((x397%(x398|x399))/x400);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MAX;
	volatile int8_t x403 = 1;
	int8_t x404 = -1;
	volatile int32_t t93 = -725109;

	t93 = ((x401%(x402|x403))/x404);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x405 = INT16_MIN;
	static uint32_t x406 = 5804U;
	static int16_t x407 = 4873;

	t94 = ((x405%(x406|x407))/x408);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x409 = INT8_MAX;
	volatile uint32_t x410 = UINT32_MAX;
	uint64_t x411 = 2054563986416740LLU;
	uint32_t x412 = 461U;
	uint64_t t95 = 3199437697040251543LLU;

	t95 = ((x409%(x410|x411))/x412);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x413 = INT16_MAX;
	uint16_t x415 = 11U;
	static volatile int16_t x416 = INT16_MAX;
	int32_t t96 = -56415;

	t96 = ((x413%(x414|x415))/x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x417 = 332U;
	uint16_t x418 = UINT16_MAX;
	int64_t x419 = 1LL;
	int16_t x420 = INT16_MIN;
	volatile int64_t t97 = -112005661642LL;

	t97 = ((x417%(x418|x419))/x420);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x423 = 7881;
	static int16_t x424 = -1;

	t98 = ((x421%(x422|x423))/x424);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x426 = UINT64_MAX;
	volatile uint8_t x427 = 1U;
	volatile uint64_t t99 = 2LLU;

	t99 = ((x425%(x426|x427))/x428);

	if (t99 != 131216LLU) { NG(); } else { ; }
	
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

