#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x4 = UINT32_MAX;
uint64_t x6 = 7LLU;
int8_t x10 = INT8_MIN;
int32_t t2 = 110968;
int16_t x13 = -83;
volatile uint16_t x15 = 316U;
static volatile int32_t t3 = 379655547;
static volatile int32_t t4 = 8975744;
uint32_t x23 = 44569243U;
int32_t t5 = 1686063;
static uint64_t x26 = UINT64_MAX;
int64_t x32 = 1124652698LL;
uint16_t x35 = 1U;
static volatile uint32_t x38 = 129274U;
uint32_t x46 = UINT32_MAX;
int8_t x48 = 9;
int32_t t11 = -18909;
int32_t x50 = -72417;
uint64_t x51 = 961378517076051LLU;
int32_t t12 = 1;
volatile int8_t x53 = INT8_MIN;
volatile uint8_t x60 = UINT8_MAX;
int32_t x68 = 59224;
uint64_t x75 = UINT64_MAX;
int16_t x83 = 1182;
volatile int32_t t20 = -15;
int8_t x88 = INT8_MIN;
uint64_t x90 = UINT64_MAX;
int32_t t25 = -325105137;
uint8_t x105 = 60U;
int64_t x107 = INT64_MIN;
static int64_t x108 = 153947727397045LL;
int32_t x113 = INT32_MIN;
static int16_t x114 = INT16_MIN;
int64_t x115 = INT64_MIN;
volatile int32_t x116 = INT32_MAX;
volatile uint16_t x123 = 1U;
uint32_t x127 = 1953U;
int64_t x128 = INT64_MIN;
static uint16_t x130 = 977U;
uint16_t x131 = UINT16_MAX;
volatile int32_t t32 = 5663;
static volatile int64_t x140 = INT64_MIN;
int16_t x142 = -20;
int64_t x147 = -1LL;
int32_t t37 = 8426440;
int16_t x153 = INT16_MAX;
static int16_t x155 = -1;
uint8_t x156 = 13U;
uint64_t x157 = 4872070682301LLU;
static volatile int32_t x160 = -1;
volatile int32_t t39 = 857270;
volatile uint8_t x166 = 6U;
int32_t x175 = INT32_MIN;
volatile int32_t t44 = 2899263;
uint8_t x186 = 6U;
uint8_t x188 = 5U;
static int16_t x201 = 488;
int8_t x202 = INT8_MIN;
int64_t x203 = 0LL;
int8_t x205 = INT8_MIN;
uint8_t x206 = UINT8_MAX;
int32_t t52 = -2196600;
int64_t x218 = INT64_MAX;
static volatile int32_t t56 = -245924;
int32_t t57 = -6824;
volatile int16_t x234 = INT16_MIN;
int32_t t58 = 14072263;
int8_t x237 = 14;
int32_t x240 = INT32_MIN;
uint32_t x242 = 0U;
volatile uint32_t x248 = 7954U;
int8_t x250 = INT8_MIN;
volatile int32_t t63 = 327;
static int64_t x260 = -1LL;
static volatile int32_t t65 = -248545;
uint64_t x267 = 136496093060LLU;
int16_t x272 = INT16_MAX;
int64_t x274 = -8LL;
int32_t t68 = -138;
uint16_t x277 = 109U;
volatile uint8_t x280 = UINT8_MAX;
int32_t t69 = 296840571;
uint8_t x284 = 1U;
volatile int32_t t70 = 4138;
static volatile int16_t x285 = 51;
int64_t x286 = -1LL;
int64_t x288 = 340525383911769LL;
uint16_t x289 = UINT16_MAX;
static int16_t x290 = -12;
volatile int32_t t72 = -1;
int32_t x295 = INT32_MIN;
static int8_t x299 = INT8_MIN;
int16_t x308 = -2364;
int64_t x311 = INT64_MIN;
int8_t x313 = INT8_MIN;
int16_t x314 = INT16_MAX;
static uint16_t x315 = 134U;
int32_t x318 = INT32_MIN;
int64_t x328 = -3678201662LL;
uint64_t x329 = 212572004291452LLU;
uint16_t x333 = 665U;
static int32_t t83 = -2;
int64_t x346 = INT64_MIN;
int16_t x348 = INT16_MIN;
volatile int32_t t87 = 239566767;
static int32_t x363 = 16;
volatile int32_t x364 = INT32_MIN;
volatile int64_t x374 = INT64_MAX;
int32_t t96 = 5;
uint64_t x392 = 76310LLU;
static volatile int32_t t97 = -5922;
volatile int64_t x395 = 3203LL;
int16_t x396 = -1;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MAX;
	uint8_t x3 = UINT8_MAX;
	int32_t t0 = -792274;

	t0 = ((x1<=x2)|(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 542;
	int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -23;

	t1 = ((x5<=x6)|(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 34;
	int8_t x11 = 58;
	static volatile int16_t x12 = INT16_MIN;

	t2 = ((x9<=x10)|(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	volatile int16_t x16 = INT16_MIN;

	t3 = ((x13<=x14)|(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -967;
	uint64_t x18 = 2930487014LLU;
	static int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MIN;

	t4 = ((x17<=x18)|(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	int32_t x22 = INT32_MAX;
	int16_t x24 = -1;

	t5 = ((x21<=x22)|(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int32_t x27 = INT32_MIN;
	int32_t x28 = 305800992;
	volatile int32_t t6 = -19493;

	t6 = ((x25<=x26)|(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 46;
	int64_t x30 = -1LL;
	static volatile int32_t x31 = 57891;
	int32_t t7 = 57;

	t7 = ((x29<=x30)|(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1LL;
	int64_t x34 = INT64_MIN;
	volatile int64_t x36 = -1LL;
	volatile int32_t t8 = 63041002;

	t8 = ((x33<=x34)|(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = UINT16_MAX;
	int32_t t9 = 12054274;

	t9 = ((x37<=x38)|(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 31578557;
	static int32_t x42 = INT32_MAX;
	int32_t x43 = INT32_MIN;
	static volatile int64_t x44 = INT64_MAX;
	volatile int32_t t10 = -458;

	t10 = ((x41<=x42)|(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int8_t x47 = INT8_MAX;

	t11 = ((x45<=x46)|(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 1604231044LL;
	static int16_t x52 = -1;

	t12 = ((x49<=x50)|(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 1304110907LLU;
	static int8_t x55 = -15;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = -6;

	t13 = ((x53<=x54)|(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int8_t x58 = INT8_MAX;
	uint64_t x59 = UINT64_MAX;
	int32_t t14 = -10;

	t14 = ((x57<=x58)|(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = INT8_MAX;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MIN;
	static int32_t t15 = -16373;

	t15 = ((x61<=x62)|(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	uint8_t x66 = UINT8_MAX;
	volatile uint8_t x67 = UINT8_MAX;
	int32_t t16 = 476820;

	t16 = ((x65<=x66)|(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = -1;
	int32_t x71 = 8196642;
	uint64_t x72 = UINT64_MAX;
	int32_t t17 = -2;

	t17 = ((x69<=x70)|(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -15LL;
	int16_t x74 = INT16_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 16636;

	t18 = ((x73<=x74)|(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 844143290U;
	int32_t x78 = INT32_MIN;
	uint16_t x79 = 126U;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -98872635;

	t19 = ((x77<=x78)|(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	volatile int16_t x82 = -1;
	int16_t x84 = 70;

	t20 = ((x81<=x82)|(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	volatile uint32_t x86 = 33U;
	int16_t x87 = -2366;
	static int32_t t21 = -1467;

	t21 = ((x85<=x86)|(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -525;
	static uint32_t x91 = 3U;
	int64_t x92 = INT64_MIN;
	int32_t t22 = -97;

	t22 = ((x89<=x90)|(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	uint32_t x94 = 14316221U;
	int64_t x95 = -177299043976LL;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = -7713939;

	t23 = ((x93<=x94)|(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 54;
	uint32_t x98 = 19741886U;
	uint64_t x99 = 83392LLU;
	uint16_t x100 = 18U;
	volatile int32_t t24 = 4917014;

	t24 = ((x97<=x98)|(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int32_t x102 = 80169;
	int64_t x103 = INT64_MAX;
	int8_t x104 = -1;

	t25 = ((x101<=x102)|(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x106 = INT8_MIN;
	int32_t t26 = -17510;

	t26 = ((x105<=x106)|(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	static int32_t x110 = -504651;
	int8_t x111 = INT8_MIN;
	volatile int8_t x112 = 1;
	volatile int32_t t27 = -43709;

	t27 = ((x109<=x110)|(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t t28 = 97647;

	t28 = ((x113<=x114)|(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static uint32_t x118 = 11807U;
	uint16_t x119 = UINT16_MAX;
	volatile int16_t x120 = 5125;
	static int32_t t29 = -380;

	t29 = ((x117<=x118)|(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 2056117457235414LLU;
	uint32_t x122 = UINT32_MAX;
	int16_t x124 = 1;
	static volatile int32_t t30 = -11088914;

	t30 = ((x121<=x122)|(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	int16_t x126 = -1;
	volatile int32_t t31 = -127;

	t31 = ((x125<=x126)|(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	static int16_t x132 = -400;

	t32 = ((x129<=x130)|(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = UINT16_MAX;
	volatile int16_t x136 = -15739;
	static volatile int32_t t33 = -1180940;

	t33 = ((x133<=x134)|(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MIN;
	uint64_t x139 = 3592080LLU;
	static volatile int32_t t34 = -1;

	t34 = ((x137<=x138)|(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	uint8_t x143 = UINT8_MAX;
	volatile uint8_t x144 = UINT8_MAX;
	volatile int32_t t35 = 4452082;

	t35 = ((x141<=x142)|(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MIN;
	uint8_t x146 = UINT8_MAX;
	int8_t x148 = INT8_MAX;
	int32_t t36 = -6925524;

	t36 = ((x145<=x146)|(x147==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = INT64_MIN;
	uint16_t x152 = 59U;

	t37 = ((x149<=x150)|(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MIN;
	volatile int32_t t38 = -95666;

	t38 = ((x153<=x154)|(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = 1679805333375LL;
	int32_t x159 = 1;

	t39 = ((x157<=x158)|(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	uint16_t x162 = 6U;
	int32_t x163 = -676925492;
	static int32_t x164 = -16;
	int32_t t40 = 3058467;

	t40 = ((x161<=x162)|(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 25498U;
	static int8_t x167 = 10;
	int8_t x168 = -34;
	volatile int32_t t41 = 84140;

	t41 = ((x165<=x166)|(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -6330LL;
	int8_t x170 = -1;
	int16_t x171 = 7;
	int16_t x172 = INT16_MIN;
	int32_t t42 = -51;

	t42 = ((x169<=x170)|(x171==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	static uint16_t x174 = 4876U;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 518989;

	t43 = ((x173<=x174)|(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -25181;
	uint16_t x178 = 5771U;
	uint32_t x179 = 31U;
	uint8_t x180 = 6U;

	t44 = ((x177<=x178)|(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	volatile int32_t x182 = INT32_MAX;
	static uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MAX;
	int32_t t45 = -121;

	t45 = ((x181<=x182)|(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	uint64_t x187 = 256736579039160694LLU;
	int32_t t46 = -751211;

	t46 = ((x185<=x186)|(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = UINT32_MAX;
	static int8_t x190 = 0;
	int32_t x191 = INT32_MIN;
	static uint16_t x192 = 1U;
	volatile int32_t t47 = 8091235;

	t47 = ((x189<=x190)|(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	static uint64_t x194 = 5081228226129489LLU;
	uint64_t x195 = 3968085246LLU;
	static uint32_t x196 = 89957932U;
	static int32_t t48 = -53834174;

	t48 = ((x193<=x194)|(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 204084LL;
	int8_t x198 = INT8_MAX;
	int16_t x199 = -1;
	static uint16_t x200 = 182U;
	int32_t t49 = 45885;

	t49 = ((x197<=x198)|(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x204 = 66U;
	int32_t t50 = -944143;

	t50 = ((x201<=x202)|(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x207 = 1;
	static uint16_t x208 = UINT16_MAX;
	int32_t t51 = 4836;

	t51 = ((x205<=x206)|(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MAX;
	int32_t x211 = -12;
	int16_t x212 = -1830;

	t52 = ((x209<=x210)|(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MAX;
	volatile int16_t x215 = -6045;
	static volatile int32_t x216 = -9;
	volatile int32_t t53 = 213438626;

	t53 = ((x213<=x214)|(x215==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 1;
	int64_t x219 = INT64_MAX;
	int16_t x220 = INT16_MIN;
	int32_t t54 = 16971397;

	t54 = ((x217<=x218)|(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MIN;
	int16_t x224 = -1;
	int32_t t55 = 3702;

	t55 = ((x221<=x222)|(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	static int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MIN;
	int16_t x228 = -7;

	t56 = ((x225<=x226)|(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = UINT64_MAX;
	int8_t x230 = -1;
	int8_t x231 = -7;
	uint16_t x232 = UINT16_MAX;

	t57 = ((x229<=x230)|(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 0LL;
	uint32_t x235 = 606U;
	int16_t x236 = INT16_MIN;

	t58 = ((x233<=x234)|(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x238 = INT32_MAX;
	static int32_t x239 = INT32_MIN;
	int32_t t59 = 603;

	t59 = ((x237<=x238)|(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	volatile uint64_t x243 = 3764570325917LLU;
	volatile uint16_t x244 = UINT16_MAX;
	static int32_t t60 = 18593134;

	t60 = ((x241<=x242)|(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = 5;
	int8_t x246 = -1;
	int8_t x247 = -1;
	volatile int32_t t61 = -2;

	t61 = ((x245<=x246)|(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x249 = INT16_MIN;
	static volatile uint8_t x251 = 1U;
	volatile uint8_t x252 = 53U;
	volatile int32_t t62 = 7329;

	t62 = ((x249<=x250)|(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 59LL;
	static int32_t x254 = 0;
	uint64_t x255 = 468240831LLU;
	uint8_t x256 = 5U;

	t63 = ((x253<=x254)|(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = 4782279U;
	volatile int8_t x259 = INT8_MIN;
	volatile int32_t t64 = 64547;

	t64 = ((x257<=x258)|(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = UINT64_MAX;
	static volatile int16_t x262 = -454;
	uint32_t x263 = UINT32_MAX;
	int64_t x264 = -1LL;

	t65 = ((x261<=x262)|(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = 37141871LL;
	volatile int16_t x266 = INT16_MIN;
	int32_t x268 = -1;
	static volatile int32_t t66 = -61368;

	t66 = ((x265<=x266)|(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int64_t x270 = -2607491030LL;
	uint32_t x271 = UINT32_MAX;
	volatile int32_t t67 = 2441407;

	t67 = ((x269<=x270)|(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	volatile uint16_t x275 = UINT16_MAX;
	int64_t x276 = -748948946616LL;

	t68 = ((x273<=x274)|(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = INT8_MIN;
	static int8_t x279 = INT8_MAX;

	t69 = ((x277<=x278)|(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	uint16_t x282 = UINT16_MAX;
	uint16_t x283 = 163U;

	t70 = ((x281<=x282)|(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x287 = 1U;
	volatile int32_t t71 = -43111;

	t71 = ((x285<=x286)|(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x291 = -709;
	int32_t x292 = -883130;

	t72 = ((x289<=x290)|(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	int8_t x294 = 0;
	int8_t x296 = -1;
	int32_t t73 = 117578870;

	t73 = ((x293<=x294)|(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1663;
	int8_t x298 = INT8_MIN;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -1;

	t74 = ((x297<=x298)|(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	volatile int16_t x303 = -1;
	static int32_t x304 = INT32_MIN;
	int32_t t75 = 841857183;

	t75 = ((x301<=x302)|(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = UINT64_MAX;
	uint32_t x306 = 125007U;
	static uint16_t x307 = UINT16_MAX;
	volatile int32_t t76 = -42448;

	t76 = ((x305<=x306)|(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MAX;
	static volatile uint32_t x310 = 396U;
	static int32_t x312 = -536470;
	int32_t t77 = 0;

	t77 = ((x309<=x310)|(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x316 = -1;
	static volatile int32_t t78 = 1675;

	t78 = ((x313<=x314)|(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = 29798919840995LL;
	int64_t x319 = INT64_MAX;
	static uint8_t x320 = 6U;
	volatile int32_t t79 = -379;

	t79 = ((x317<=x318)|(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	int16_t x322 = -1;
	volatile int8_t x323 = INT8_MAX;
	uint64_t x324 = 210226534557139460LLU;
	volatile int32_t t80 = 144950227;

	t80 = ((x321<=x322)|(x323==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 0U;
	int8_t x326 = 60;
	volatile uint16_t x327 = 8703U;
	volatile int32_t t81 = 3200;

	t81 = ((x325<=x326)|(x327==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x330 = -1LL;
	volatile int32_t x331 = INT32_MAX;
	static int16_t x332 = -1641;
	volatile int32_t t82 = 0;

	t82 = ((x329<=x330)|(x331==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = -1;
	uint64_t x335 = 5630388LLU;
	static int32_t x336 = -1;

	t83 = ((x333<=x334)|(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int32_t x338 = INT32_MAX;
	int64_t x339 = -1LL;
	int32_t x340 = -258747798;
	static int32_t t84 = -6498;

	t84 = ((x337<=x338)|(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = UINT32_MAX;
	static volatile int8_t x342 = INT8_MIN;
	int8_t x343 = -1;
	int8_t x344 = -1;
	static int32_t t85 = -105533;

	t85 = ((x341<=x342)|(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = -1;
	uint64_t x347 = 642465709826484LLU;
	int32_t t86 = -744559762;

	t86 = ((x345<=x346)|(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 7370743;
	volatile int16_t x350 = INT16_MIN;
	int8_t x351 = -3;
	volatile int64_t x352 = 11892523163LL;

	t87 = ((x349<=x350)|(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x354 = -2;
	int32_t x355 = 184;
	int16_t x356 = INT16_MAX;
	volatile int32_t t88 = -2;

	t88 = ((x353<=x354)|(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MIN;
	static int8_t x358 = -1;
	int16_t x359 = -14;
	volatile int64_t x360 = -64690855289792742LL;
	volatile int32_t t89 = 28062885;

	t89 = ((x357<=x358)|(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = 75364329;
	static volatile uint8_t x362 = 10U;
	int32_t t90 = -702700;

	t90 = ((x361<=x362)|(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int32_t x366 = -1;
	static uint8_t x367 = 3U;
	volatile int16_t x368 = -1;
	static volatile int32_t t91 = 107064538;

	t91 = ((x365<=x366)|(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = UINT16_MAX;
	uint32_t x370 = 3U;
	int64_t x371 = -1LL;
	int64_t x372 = -10791LL;
	volatile int32_t t92 = -1;

	t92 = ((x369<=x370)|(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	static int32_t x375 = INT32_MAX;
	uint8_t x376 = UINT8_MAX;
	static int32_t t93 = -427716;

	t93 = ((x373<=x374)|(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = 5U;
	volatile int32_t x378 = -3441315;
	int32_t x379 = INT32_MAX;
	int32_t x380 = 0;
	int32_t t94 = 216;

	t94 = ((x377<=x378)|(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 45;
	int32_t x382 = 441274575;
	int16_t x383 = 1;
	volatile uint16_t x384 = UINT16_MAX;
	int32_t t95 = -7874432;

	t95 = ((x381<=x382)|(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	volatile uint64_t x386 = UINT64_MAX;
	static volatile int16_t x387 = INT16_MIN;
	int32_t x388 = 10382;

	t96 = ((x385<=x386)|(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	static uint32_t x390 = 13402U;
	static int16_t x391 = -1;

	t97 = ((x389<=x390)|(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 21U;
	uint64_t x394 = UINT64_MAX;
	volatile int32_t t98 = -733471;

	t98 = ((x393<=x394)|(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 12371;
	volatile int64_t x398 = -1LL;
	uint64_t x399 = 822811676188322LLU;
	int16_t x400 = INT16_MIN;
	int32_t t99 = 5183;

	t99 = ((x397<=x398)|(x399==x400));

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

