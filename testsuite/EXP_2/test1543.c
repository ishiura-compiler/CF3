#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -7300;
uint32_t x5 = 160U;
int32_t t2 = 376;
int64_t x18 = 42LL;
int64_t x21 = 3362813103LL;
volatile int16_t x36 = 11149;
int64_t x39 = INT64_MIN;
static int64_t x40 = 48105694471498LL;
static uint16_t x52 = 1U;
uint32_t x53 = UINT32_MAX;
int8_t x55 = -15;
static volatile int32_t t12 = -76313829;
int64_t x66 = -121410751625LL;
uint64_t x71 = UINT64_MAX;
uint16_t x77 = UINT16_MAX;
volatile int8_t x79 = INT8_MIN;
int64_t x83 = INT64_MIN;
static volatile int32_t t19 = -13180195;
volatile int64_t x93 = -7573LL;
int64_t x96 = INT64_MAX;
int8_t x98 = INT8_MIN;
volatile int32_t x100 = 37956;
int64_t x101 = -3740723655640LL;
int64_t x105 = -24980LL;
uint64_t x110 = 431557872LLU;
int32_t x115 = INT32_MIN;
static int64_t x124 = INT64_MIN;
volatile uint64_t x129 = UINT64_MAX;
static int16_t x137 = -1;
int32_t t33 = 60514;
volatile int8_t x145 = -31;
int32_t x152 = INT32_MAX;
static int32_t t35 = -47;
int32_t x165 = 3995;
int64_t x166 = 3795424532066825833LL;
volatile int16_t x170 = 12337;
volatile uint64_t x177 = 1609625846945277703LLU;
int64_t x180 = -15LL;
int32_t t43 = -791675261;
int32_t x187 = -1;
int64_t x188 = INT64_MAX;
int16_t x195 = -1;
int32_t x197 = -736749666;
uint8_t x200 = 3U;
int32_t t48 = -5628951;
int32_t x214 = INT32_MIN;
int32_t x215 = INT32_MIN;
uint8_t x216 = 30U;
static uint32_t x223 = 1191U;
uint8_t x231 = UINT8_MAX;
int16_t x232 = INT16_MIN;
int32_t t57 = 623;
int8_t x243 = 5;
int64_t x259 = INT64_MAX;
uint64_t x260 = 3LLU;
static int8_t x261 = 0;
int16_t x277 = INT16_MIN;
uint16_t x278 = 20814U;
int16_t x280 = INT16_MAX;
volatile int8_t x284 = -1;
uint16_t x286 = 83U;
uint16_t x288 = UINT16_MAX;
static int32_t t67 = 1205;
static int64_t x305 = -431LL;
int64_t x307 = INT64_MIN;
volatile int64_t x309 = -1LL;
static int16_t x310 = 26;
static int32_t x319 = -1;
int16_t x329 = -1;
int64_t x335 = INT64_MIN;
static int64_t x344 = INT64_MIN;
static uint64_t x347 = UINT64_MAX;
int16_t x358 = 9;
int16_t x359 = INT16_MAX;
static uint32_t x365 = 1U;
int32_t t85 = -1732302;
uint16_t x373 = 53U;
int8_t x374 = 1;
int32_t t87 = 4152040;
static volatile int16_t x380 = -1;
volatile int64_t x386 = -1LL;
int32_t x389 = -1;
int32_t x405 = INT32_MIN;
uint32_t x408 = 1112103898U;
volatile int32_t x411 = INT32_MAX;
uint16_t x412 = 7395U;
int16_t x414 = INT16_MIN;
static int16_t x416 = INT16_MIN;
int16_t x422 = INT16_MAX;
volatile int32_t t99 = -3;


void f0(void) {
	uint8_t x1 = 3U;
	int16_t x2 = -14570;
	uint32_t x3 = 1679U;
	int64_t x4 = -6520898821937175LL;

	t0 = ((x1-(x2<=x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = 1;
	volatile uint64_t x7 = 105327782003072LLU;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 1;

	t1 = ((x5-(x6<=x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 115U;
	static volatile int64_t x10 = INT64_MIN;
	int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MAX;

	t2 = ((x9-(x10<=x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = 15064U;
	static uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t3 = 1;

	t3 = ((x17-(x18<=x19))<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x22 = 4U;
	int64_t x23 = -887549146LL;
	uint32_t x24 = UINT32_MAX;
	static volatile int32_t t4 = 0;

	t4 = ((x21-(x22<=x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	static int16_t x26 = -1;
	static uint8_t x27 = 44U;
	int64_t x28 = -924LL;
	int32_t t5 = 20312604;

	t5 = ((x25-(x26<=x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 0U;
	int64_t x30 = INT64_MAX;
	uint32_t x31 = 81895U;
	int64_t x32 = INT64_MIN;
	int32_t t6 = 34557277;

	t6 = ((x29-(x30<=x31))<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 3U;
	int8_t x34 = INT8_MAX;
	int8_t x35 = INT8_MIN;
	static volatile int32_t t7 = -10;

	t7 = ((x33-(x34<=x35))<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 113U;
	static uint16_t x38 = UINT16_MAX;
	static int32_t t8 = -1;

	t8 = ((x37-(x38<=x39))<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = 294LLU;
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = 1;
	uint64_t x44 = UINT64_MAX;
	int32_t t9 = 0;

	t9 = ((x41-(x42<=x43))<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = 2580U;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = INT8_MIN;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t10 = 54721271;

	t10 = ((x45-(x46<=x47))<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	static volatile int8_t x50 = INT8_MIN;
	volatile int64_t x51 = INT64_MIN;
	int32_t t11 = -1320037;

	t11 = ((x49-(x50<=x51))<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = INT16_MIN;
	static int32_t x56 = 386990198;

	t12 = ((x53-(x54<=x55))<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x57 = 667U;
	static uint8_t x58 = 7U;
	volatile uint16_t x59 = 199U;
	static volatile int8_t x60 = -1;
	volatile int32_t t13 = 2847437;

	t13 = ((x57-(x58<=x59))<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 481U;
	static int16_t x62 = INT16_MAX;
	uint64_t x63 = 3709582992589745LLU;
	volatile int8_t x64 = INT8_MIN;
	static volatile int32_t t14 = 40066;

	t14 = ((x61-(x62<=x63))<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int16_t x67 = 12956;
	int16_t x68 = -1;
	static int32_t t15 = -9637;

	t15 = ((x65-(x66<=x67))<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 204;
	uint64_t x70 = 65331448099293899LLU;
	int8_t x72 = INT8_MAX;
	volatile int32_t t16 = -584623;

	t16 = ((x69-(x70<=x71))<x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = -1;
	int8_t x75 = 1;
	uint64_t x76 = 3677042472470393943LLU;
	volatile int32_t t17 = 692;

	t17 = ((x73-(x74<=x75))<x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x78 = INT16_MIN;
	int8_t x80 = 1;
	int32_t t18 = 5900794;

	t18 = ((x77-(x78<=x79))<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = -240;
	int8_t x82 = INT8_MAX;
	volatile uint32_t x84 = UINT32_MAX;

	t19 = ((x81-(x82<=x83))<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	uint32_t x86 = 187624231U;
	int64_t x87 = -6LL;
	int64_t x88 = INT64_MIN;
	volatile int32_t t20 = -473;

	t20 = ((x85-(x86<=x87))<x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MIN;
	uint64_t x90 = 3927610LLU;
	int8_t x91 = INT8_MAX;
	int16_t x92 = INT16_MIN;
	volatile int32_t t21 = 29657294;

	t21 = ((x89-(x90<=x91))<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x94 = 98U;
	int32_t x95 = INT32_MAX;
	int32_t t22 = 436869886;

	t22 = ((x93-(x94<=x95))<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -1;
	int8_t x99 = -1;
	int32_t t23 = -126079;

	t23 = ((x97-(x98<=x99))<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x102 = 72U;
	int64_t x103 = -1LL;
	volatile int16_t x104 = INT16_MAX;
	volatile int32_t t24 = -10;

	t24 = ((x101-(x102<=x103))<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = 1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t25 = -19382726;

	t25 = ((x105-(x106<=x107))<x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x109 = 225U;
	volatile int16_t x111 = -82;
	volatile int8_t x112 = INT8_MIN;
	static int32_t t26 = 16413513;

	t26 = ((x109-(x110<=x111))<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 317620715943171444LL;
	volatile int64_t x114 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t27 = 0;

	t27 = ((x113-(x114<=x115))<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x117 = INT8_MIN;
	volatile int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MAX;
	static volatile int32_t x120 = 475005326;
	int32_t t28 = 381336649;

	t28 = ((x117-(x118<=x119))<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	int8_t x122 = -1;
	int64_t x123 = 0LL;
	volatile int32_t t29 = 13499871;

	t29 = ((x121-(x122<=x123))<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = 61;
	int64_t x126 = -1LL;
	int16_t x127 = INT16_MIN;
	static volatile int64_t x128 = 28585595754LL;
	volatile int32_t t30 = -3;

	t30 = ((x125-(x126<=x127))<x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = 138;
	static int16_t x131 = -8;
	volatile uint8_t x132 = 51U;
	volatile int32_t t31 = 240;

	t31 = ((x129-(x130<=x131))<x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x138 = INT8_MAX;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = -1;
	int32_t t32 = 5188875;

	t32 = ((x137-(x138<=x139))<x140);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x141 = INT16_MIN;
	uint8_t x142 = 3U;
	int8_t x143 = -1;
	uint64_t x144 = UINT64_MAX;

	t33 = ((x141-(x142<=x143))<x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MAX;
	int16_t x148 = -1;
	static volatile int32_t t34 = -56;

	t34 = ((x145-(x146<=x147))<x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 51110135LLU;
	int32_t x150 = -1;
	static int32_t x151 = INT32_MIN;

	t35 = ((x149-(x150<=x151))<x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x153 = UINT16_MAX;
	int64_t x154 = INT64_MAX;
	volatile int16_t x155 = -1;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t36 = 0;

	t36 = ((x153-(x154<=x155))<x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x157 = -1;
	int32_t x158 = INT32_MAX;
	int16_t x159 = INT16_MAX;
	static uint64_t x160 = 31088328LLU;
	int32_t t37 = 1221562;

	t37 = ((x157-(x158<=x159))<x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x161 = -6159142;
	static int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MIN;
	int16_t x164 = INT16_MIN;
	static int32_t t38 = -1;

	t38 = ((x161-(x162<=x163))<x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x167 = INT32_MIN;
	uint8_t x168 = 3U;
	int32_t t39 = -106906947;

	t39 = ((x165-(x166<=x167))<x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x169 = -1;
	int32_t x171 = -18732;
	static int16_t x172 = INT16_MAX;
	static int32_t t40 = 2248637;

	t40 = ((x169-(x170<=x171))<x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -19;
	volatile uint64_t x174 = 4914478513895313LLU;
	volatile int16_t x175 = -3;
	int16_t x176 = INT16_MIN;
	int32_t t41 = -949;

	t41 = ((x173-(x174<=x175))<x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x178 = -1LL;
	static int32_t x179 = INT32_MAX;
	volatile int32_t t42 = 65331;

	t42 = ((x177-(x178<=x179))<x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 24192U;
	uint32_t x182 = UINT32_MAX;
	int32_t x183 = -8;
	volatile uint16_t x184 = 0U;

	t43 = ((x181-(x182<=x183))<x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MIN;
	int32_t t44 = -342;

	t44 = ((x185-(x186<=x187))<x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x189 = INT8_MIN;
	static int8_t x190 = -1;
	volatile int64_t x191 = INT64_MAX;
	int8_t x192 = -2;
	volatile int32_t t45 = 2718554;

	t45 = ((x189-(x190<=x191))<x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = 31198519LL;
	static volatile int16_t x194 = -1;
	uint64_t x196 = UINT64_MAX;
	int32_t t46 = -338581;

	t46 = ((x193-(x194<=x195))<x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x198 = 3075997101874LLU;
	int8_t x199 = INT8_MIN;
	int32_t t47 = 46981390;

	t47 = ((x197-(x198<=x199))<x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MAX;
	int64_t x204 = 889137223156264840LL;

	t48 = ((x201-(x202<=x203))<x204);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MAX;
	static uint16_t x206 = 10634U;
	int64_t x207 = INT64_MIN;
	static uint16_t x208 = 164U;
	int32_t t49 = -357847092;

	t49 = ((x205-(x206<=x207))<x208);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MAX;
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	volatile int32_t x212 = INT32_MIN;
	static volatile int32_t t50 = -445;

	t50 = ((x209-(x210<=x211))<x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MAX;
	int32_t t51 = -3;

	t51 = ((x213-(x214<=x215))<x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = -1;
	uint16_t x218 = 32037U;
	int16_t x219 = -1;
	static int64_t x220 = INT64_MAX;
	int32_t t52 = -437448;

	t52 = ((x217-(x218<=x219))<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -1;
	int16_t x222 = INT16_MIN;
	uint64_t x224 = UINT64_MAX;
	int32_t t53 = -48;

	t53 = ((x221-(x222<=x223))<x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x225 = UINT8_MAX;
	int64_t x226 = -448LL;
	static int8_t x227 = 22;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t54 = -635133;

	t54 = ((x225-(x226<=x227))<x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = UINT8_MAX;
	volatile uint32_t x230 = 5U;
	static int32_t t55 = -7239714;

	t55 = ((x229-(x230<=x231))<x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x233 = 39;
	int64_t x234 = 307LL;
	uint32_t x235 = 12841947U;
	uint8_t x236 = 5U;
	volatile int32_t t56 = -374214;

	t56 = ((x233-(x234<=x235))<x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x237 = -1;
	int64_t x238 = INT64_MIN;
	int64_t x239 = 2034LL;
	int16_t x240 = -471;

	t57 = ((x237-(x238<=x239))<x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = 1924945341LL;
	int16_t x242 = -1;
	int16_t x244 = INT16_MAX;
	static volatile int32_t t58 = -118663;

	t58 = ((x241-(x242<=x243))<x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x257 = INT32_MAX;
	uint32_t x258 = UINT32_MAX;
	volatile int32_t t59 = 785529563;

	t59 = ((x257-(x258<=x259))<x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x262 = 7;
	int8_t x263 = 1;
	int32_t x264 = -1;
	int32_t t60 = 249515;

	t60 = ((x261-(x262<=x263))<x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x265 = UINT8_MAX;
	int16_t x266 = INT16_MIN;
	uint8_t x267 = 23U;
	int32_t x268 = -1;
	volatile int32_t t61 = 124;

	t61 = ((x265-(x266<=x267))<x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = -51;
	uint16_t x270 = 28321U;
	uint16_t x271 = 8U;
	volatile int32_t x272 = -1;
	volatile int32_t t62 = -39761;

	t62 = ((x269-(x270<=x271))<x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = 999U;
	uint64_t x274 = 3424625587LLU;
	uint64_t x275 = 10LLU;
	int32_t x276 = 278347150;
	int32_t t63 = 616;

	t63 = ((x273-(x274<=x275))<x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x279 = INT16_MIN;
	int32_t t64 = 382893;

	t64 = ((x277-(x278<=x279))<x280);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x281 = 27U;
	volatile uint8_t x282 = 0U;
	static int64_t x283 = INT64_MIN;
	volatile int32_t t65 = -1;

	t65 = ((x281-(x282<=x283))<x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x285 = UINT32_MAX;
	uint64_t x287 = 29969339071LLU;
	static volatile int32_t t66 = 1;

	t66 = ((x285-(x286<=x287))<x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x289 = -1;
	int32_t x290 = -120;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;

	t67 = ((x289-(x290<=x291))<x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x293 = INT16_MIN;
	uint32_t x294 = 930U;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t68 = 1;

	t68 = ((x293-(x294<=x295))<x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = INT16_MAX;
	static int64_t x298 = INT64_MIN;
	int16_t x299 = -20;
	static uint64_t x300 = 449LLU;
	int32_t t69 = 58;

	t69 = ((x297-(x298<=x299))<x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	uint16_t x303 = 1U;
	volatile int16_t x304 = -96;
	int32_t t70 = -366;

	t70 = ((x301-(x302<=x303))<x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x306 = 1200961780116677846LL;
	uint16_t x308 = 27706U;
	int32_t t71 = -55818;

	t71 = ((x305-(x306<=x307))<x308);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x311 = INT32_MIN;
	int64_t x312 = 41673906770635LL;
	int32_t t72 = -7650970;

	t72 = ((x309-(x310<=x311))<x312);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = -12;
	static uint8_t x314 = 21U;
	static int8_t x315 = INT8_MIN;
	int8_t x316 = 5;
	volatile int32_t t73 = -230697048;

	t73 = ((x313-(x314<=x315))<x316);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x317 = UINT64_MAX;
	int32_t x318 = INT32_MIN;
	int8_t x320 = INT8_MIN;
	volatile int32_t t74 = -830;

	t74 = ((x317-(x318<=x319))<x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MAX;
	uint64_t x322 = 13LLU;
	uint8_t x323 = 2U;
	int32_t x324 = -1;
	volatile int32_t t75 = 100531738;

	t75 = ((x321-(x322<=x323))<x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = 1633816;
	int8_t x326 = -1;
	uint16_t x327 = 10478U;
	volatile int8_t x328 = -20;
	volatile int32_t t76 = -3464120;

	t76 = ((x325-(x326<=x327))<x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x330 = 2;
	static int32_t x331 = 44;
	int8_t x332 = -39;
	volatile int32_t t77 = 264446388;

	t77 = ((x329-(x330<=x331))<x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = 22U;
	uint16_t x334 = 2U;
	int64_t x336 = -1LL;
	volatile int32_t t78 = 132697;

	t78 = ((x333-(x334<=x335))<x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x341 = 2088648LLU;
	int32_t x342 = INT32_MAX;
	uint32_t x343 = 42U;
	int32_t t79 = -77;

	t79 = ((x341-(x342<=x343))<x344);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x345 = -1LL;
	int64_t x346 = INT64_MAX;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t80 = 1;

	t80 = ((x345-(x346<=x347))<x348);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x349 = INT64_MAX;
	static int64_t x350 = 33337LL;
	int32_t x351 = 37898240;
	int16_t x352 = -6;
	volatile int32_t t81 = -169434;

	t81 = ((x349-(x350<=x351))<x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = 897U;
	int64_t x354 = 155437669LL;
	static uint32_t x355 = 7798U;
	volatile uint64_t x356 = 318188947414LLU;
	int32_t t82 = 612165963;

	t82 = ((x353-(x354<=x355))<x356);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = -79;
	static volatile int8_t x360 = INT8_MIN;
	int32_t t83 = 417;

	t83 = ((x357-(x358<=x359))<x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x361 = INT16_MAX;
	uint8_t x362 = 3U;
	uint64_t x363 = 54674022LLU;
	uint16_t x364 = 1291U;
	static volatile int32_t t84 = -420475524;

	t84 = ((x361-(x362<=x363))<x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x366 = INT8_MIN;
	static int64_t x367 = INT64_MIN;
	static volatile int64_t x368 = INT64_MAX;

	t85 = ((x365-(x366<=x367))<x368);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x369 = INT32_MIN;
	int16_t x370 = -1;
	uint32_t x371 = 941847U;
	int16_t x372 = INT16_MIN;
	volatile int32_t t86 = -1;

	t86 = ((x369-(x370<=x371))<x372);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x375 = 152;
	int64_t x376 = 14988593219157LL;

	t87 = ((x373-(x374<=x375))<x376);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x377 = 13370U;
	uint32_t x378 = 7031251U;
	uint64_t x379 = UINT64_MAX;
	volatile int32_t t88 = -186987016;

	t88 = ((x377-(x378<=x379))<x380);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = -1LL;
	static int64_t x382 = INT64_MIN;
	int8_t x383 = INT8_MIN;
	volatile int32_t x384 = INT32_MIN;
	int32_t t89 = -42676936;

	t89 = ((x381-(x382<=x383))<x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x385 = INT8_MIN;
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;
	int32_t t90 = -105;

	t90 = ((x385-(x386<=x387))<x388);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x390 = 3876820LLU;
	volatile int64_t x391 = INT64_MIN;
	int32_t x392 = -3801676;
	static int32_t t91 = -4321829;

	t91 = ((x389-(x390<=x391))<x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x398 = INT64_MIN;
	int32_t x399 = -1;
	int16_t x400 = -92;
	static volatile int32_t t92 = 15;

	t92 = ((x397-(x398<=x399))<x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x401 = 347;
	int8_t x402 = 10;
	volatile int64_t x403 = -1LL;
	int64_t x404 = 1252083LL;
	volatile int32_t t93 = -2027;

	t93 = ((x401-(x402<=x403))<x404);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x406 = 369967216570970LL;
	volatile int16_t x407 = INT16_MIN;
	volatile int32_t t94 = -1;

	t94 = ((x405-(x406<=x407))<x408);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x409 = -1LL;
	uint32_t x410 = 627U;
	int32_t t95 = 1824433;

	t95 = ((x409-(x410<=x411))<x412);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = -139021995LL;
	int16_t x415 = INT16_MIN;
	int32_t t96 = 63;

	t96 = ((x413-(x414<=x415))<x416);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = INT8_MIN;
	uint64_t x418 = UINT64_MAX;
	volatile int64_t x419 = INT64_MAX;
	int8_t x420 = INT8_MAX;
	volatile int32_t t97 = -7;

	t97 = ((x417-(x418<=x419))<x420);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x421 = INT64_MIN;
	uint16_t x423 = 0U;
	uint16_t x424 = 24261U;
	int32_t t98 = -27;

	t98 = ((x421-(x422<=x423))<x424);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = 16846739972014504LL;
	volatile int8_t x426 = -1;
	int32_t x427 = INT32_MAX;
	uint64_t x428 = 281167364384512LLU;

	t99 = ((x425-(x426<=x427))<x428);

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

