#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MIN;
int16_t x12 = 1;
static volatile int64_t x13 = INT64_MIN;
volatile int32_t x16 = -1;
volatile int32_t t3 = -1;
uint8_t x21 = 2U;
int32_t t5 = 7;
uint8_t x26 = 2U;
int64_t x27 = 117077297121936LL;
static int16_t x28 = INT16_MIN;
uint16_t x31 = 1U;
uint32_t x33 = UINT32_MAX;
int32_t x43 = INT32_MAX;
int64_t x44 = 741803056LL;
int16_t x51 = -386;
uint8_t x55 = UINT8_MAX;
static uint8_t x57 = 8U;
volatile uint8_t x61 = UINT8_MAX;
int8_t x62 = -1;
uint16_t x70 = 5685U;
uint16_t x73 = 2U;
volatile int32_t t18 = 560;
uint8_t x79 = 95U;
int64_t x82 = INT64_MAX;
volatile int32_t t20 = 6;
int16_t x87 = -5;
int32_t x93 = INT32_MIN;
static int64_t x95 = -1LL;
int32_t x97 = -730313472;
int64_t x99 = INT64_MIN;
static uint32_t x104 = UINT32_MAX;
static int16_t x109 = INT16_MAX;
volatile int32_t t28 = 20387146;
static uint16_t x117 = 12043U;
uint64_t x121 = 41894286362LLU;
int8_t x122 = 22;
volatile int32_t x124 = -1;
static int32_t x136 = INT32_MIN;
int32_t x137 = INT32_MAX;
volatile int8_t x143 = INT8_MIN;
uint64_t x144 = UINT64_MAX;
int64_t x146 = -115559085044LL;
volatile int64_t x147 = -2169570086295LL;
int32_t t36 = -18806419;
int32_t x151 = -11066588;
static int16_t x153 = -3;
int16_t x158 = INT16_MIN;
int64_t x159 = INT64_MAX;
int8_t x161 = -5;
static volatile int32_t t40 = 24575876;
int32_t x169 = INT32_MIN;
int16_t x170 = 483;
volatile int16_t x171 = INT16_MIN;
int16_t x177 = INT16_MAX;
volatile uint64_t x180 = 3176508701LLU;
int64_t x185 = INT64_MIN;
int8_t x192 = INT8_MIN;
volatile uint8_t x193 = 6U;
int32_t t48 = 7694;
int16_t x197 = INT16_MIN;
static uint8_t x198 = 33U;
static volatile uint8_t x200 = 12U;
int32_t t49 = 11306309;
int32_t x213 = INT32_MIN;
int8_t x215 = INT8_MIN;
int32_t t53 = 3466;
int16_t x217 = INT16_MIN;
static uint32_t x222 = 717422U;
static uint64_t x223 = 3055804201LLU;
static uint16_t x230 = 21U;
volatile int32_t t57 = 0;
static uint16_t x249 = 216U;
int16_t x255 = INT16_MIN;
volatile int32_t t64 = 89240739;
int64_t x262 = -1LL;
uint32_t x263 = 1943U;
static int32_t t68 = 743;
static volatile int8_t x286 = -1;
static volatile int64_t x291 = -1LL;
int32_t x292 = INT32_MIN;
int32_t x297 = -30;
int8_t x298 = 6;
static int32_t x300 = INT32_MIN;
volatile int32_t t75 = -182550511;
int32_t t76 = 6762943;
int32_t x310 = -65160;
uint64_t x320 = UINT64_MAX;
int16_t x322 = 1;
static int16_t x335 = INT16_MIN;
uint64_t x343 = 197590506LLU;
static int8_t x344 = INT8_MIN;
volatile int32_t x349 = -1;
int32_t x353 = INT32_MIN;
uint64_t x358 = 6822686684355LLU;
uint8_t x365 = UINT8_MAX;
int8_t x372 = INT8_MIN;
uint16_t x373 = UINT16_MAX;
volatile int32_t t94 = 60216345;
uint64_t x385 = UINT64_MAX;
int32_t t96 = 34313;
int32_t x389 = INT32_MAX;
static int16_t x395 = 12295;
int64_t x397 = INT64_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x2 = INT64_MAX;
	int64_t x3 = INT64_MIN;
	volatile int8_t x4 = -1;
	volatile int32_t t0 = -2007;

	t0 = ((x1<=x2)<<(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int64_t x6 = -1LL;
	int32_t x7 = -39173;
	volatile int32_t t1 = -331810526;

	t1 = ((x5<=x6)<<(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 42;
	volatile uint32_t x10 = UINT32_MAX;
	volatile uint8_t x11 = 14U;
	volatile int32_t t2 = -480379099;

	t2 = ((x9<=x10)<<(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MIN;
	static uint16_t x15 = UINT16_MAX;

	t3 = ((x13<=x14)<<(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	uint64_t x18 = 34184639308LLU;
	volatile int32_t x19 = INT32_MIN;
	volatile uint8_t x20 = 10U;
	volatile int32_t t4 = 111;

	t4 = ((x17<=x18)<<(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = UINT64_MAX;
	uint16_t x23 = UINT16_MAX;
	static volatile int64_t x24 = -1LL;

	t5 = ((x21<=x22)<<(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int32_t t6 = -123707;

	t6 = ((x25<=x26)<<(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 253121852477438LL;
	int16_t x30 = -1;
	static int8_t x32 = -1;
	volatile int32_t t7 = -25666082;

	t7 = ((x29<=x30)<<(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	int64_t x35 = INT64_MIN;
	static uint32_t x36 = 46416975U;
	volatile int32_t t8 = 2859;

	t8 = ((x33<=x34)<<(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	uint64_t x38 = 2224340806LLU;
	volatile int16_t x39 = INT16_MIN;
	static volatile int32_t x40 = INT32_MIN;
	static volatile int32_t t9 = -516922;

	t9 = ((x37<=x38)<<(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -60;
	int8_t x42 = 3;
	int32_t t10 = 4;

	t10 = ((x41<=x42)<<(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MAX;
	static volatile int8_t x46 = INT8_MAX;
	uint8_t x47 = UINT8_MAX;
	static int32_t x48 = INT32_MIN;
	int32_t t11 = -115533496;

	t11 = ((x45<=x46)<<(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int8_t x50 = -1;
	uint64_t x52 = UINT64_MAX;
	int32_t t12 = -10653;

	t12 = ((x49<=x50)<<(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 4432U;
	static uint32_t x54 = 1196628U;
	int32_t x56 = 318707375;
	int32_t t13 = 142318;

	t13 = ((x53<=x54)<<(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x58 = UINT8_MAX;
	uint16_t x59 = 5U;
	int16_t x60 = INT16_MAX;
	volatile int32_t t14 = -2656519;

	t14 = ((x57<=x58)<<(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x63 = 58;
	static int16_t x64 = INT16_MIN;
	int32_t t15 = 8485295;

	t15 = ((x61<=x62)<<(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 36U;
	int32_t x66 = -1;
	int16_t x67 = 0;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 406680495;

	t16 = ((x65<=x66)<<(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 80LLU;
	int8_t x71 = INT8_MAX;
	int64_t x72 = -1LL;
	int32_t t17 = 14095;

	t17 = ((x69<=x70)<<(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	uint16_t x75 = 5U;
	int32_t x76 = -1;

	t18 = ((x73<=x74)<<(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 3;
	uint16_t x78 = 933U;
	static int8_t x80 = 1;
	volatile int32_t t19 = -22047;

	t19 = ((x77<=x78)<<(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -4736074;
	static int32_t x83 = INT32_MIN;
	uint16_t x84 = 497U;

	t20 = ((x81<=x82)<<(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = -1;
	uint16_t x88 = UINT16_MAX;
	int32_t t21 = 1215;

	t21 = ((x85<=x86)<<(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	volatile int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 3675511;

	t22 = ((x89<=x90)<<(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x94 = INT64_MAX;
	static int8_t x96 = INT8_MIN;
	int32_t t23 = 1755;

	t23 = ((x93<=x94)<<(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MIN;
	uint64_t x100 = 18276335840LLU;
	static int32_t t24 = 455;

	t24 = ((x97<=x98)<<(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int32_t x102 = 54362;
	uint16_t x103 = 6218U;
	static int32_t t25 = -1028;

	t25 = ((x101<=x102)<<(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	volatile uint16_t x106 = 1881U;
	volatile int32_t x107 = 84314;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -792;

	t26 = ((x105<=x106)<<(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MAX;
	static uint64_t x112 = 324831LLU;
	int32_t t27 = -36;

	t27 = ((x109<=x110)<<(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	uint32_t x114 = 2044874U;
	static uint64_t x115 = 498745103766LLU;
	uint32_t x116 = 1098U;

	t28 = ((x113<=x114)<<(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -1;
	int32_t x119 = -1;
	int32_t x120 = -1;
	volatile int32_t t29 = -59400;

	t29 = ((x117<=x118)<<(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x123 = 7166191415367056890LLU;
	int32_t t30 = -860457992;

	t30 = ((x121<=x122)<<(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	static int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = -43239418;

	t31 = ((x125<=x126)<<(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -1;
	uint8_t x130 = 7U;
	int16_t x131 = INT16_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t32 = 427386;

	t32 = ((x129<=x130)<<(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 726712LLU;
	int16_t x134 = 0;
	int16_t x135 = INT16_MAX;
	volatile int32_t t33 = 1066486;

	t33 = ((x133<=x134)<<(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x138 = 12;
	int16_t x139 = 14;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -123;

	t34 = ((x137<=x138)<<(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 1;
	static int8_t x142 = -24;
	int32_t t35 = -1860513;

	t35 = ((x141<=x142)<<(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 6411U;
	static int64_t x148 = INT64_MAX;

	t36 = ((x145<=x146)<<(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 3U;
	volatile uint8_t x150 = 1U;
	int16_t x152 = -7;
	volatile int32_t t37 = -21931082;

	t37 = ((x149<=x150)<<(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x154 = 120U;
	volatile int32_t x155 = 3876740;
	volatile int8_t x156 = -7;
	static int32_t t38 = -2993;

	t38 = ((x153<=x154)<<(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 112897390U;
	int8_t x160 = -8;
	int32_t t39 = -1;

	t39 = ((x157<=x158)<<(x159==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MAX;
	uint8_t x163 = UINT8_MAX;
	int8_t x164 = 16;

	t40 = ((x161<=x162)<<(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	static int8_t x166 = -2;
	static uint16_t x167 = 1U;
	int32_t x168 = INT32_MAX;
	volatile int32_t t41 = -40580;

	t41 = ((x165<=x166)<<(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x172 = -29228536773LL;
	static volatile int32_t t42 = -107;

	t42 = ((x169<=x170)<<(x171==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	static int16_t x174 = INT16_MIN;
	volatile int8_t x175 = INT8_MAX;
	int32_t x176 = -1;
	int32_t t43 = -10133;

	t43 = ((x173<=x174)<<(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x178 = INT64_MAX;
	static int64_t x179 = -1876812925519LL;
	volatile int32_t t44 = -122626;

	t44 = ((x177<=x178)<<(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int16_t x182 = 509;
	int32_t x183 = -1624;
	static int8_t x184 = 2;
	static int32_t t45 = 76325;

	t45 = ((x181<=x182)<<(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = -1;
	int32_t x187 = INT32_MIN;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = 8;

	t46 = ((x185<=x186)<<(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	static uint8_t x190 = UINT8_MAX;
	int16_t x191 = -1;
	static int32_t t47 = 3507969;

	t47 = ((x189<=x190)<<(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = 2547317;
	uint16_t x195 = 286U;
	static volatile uint64_t x196 = 125719644099298641LLU;

	t48 = ((x193<=x194)<<(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x199 = INT64_MIN;

	t49 = ((x197<=x198)<<(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x201 = -30;
	static uint64_t x202 = 740283234LLU;
	uint64_t x203 = 311LLU;
	uint16_t x204 = 8546U;
	volatile int32_t t50 = -20366;

	t50 = ((x201<=x202)<<(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	static int64_t x206 = -451153819918703169LL;
	uint16_t x207 = 3076U;
	static uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = 98;

	t51 = ((x205<=x206)<<(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	static uint16_t x210 = 1521U;
	uint16_t x211 = 53U;
	int64_t x212 = -1335777472476LL;
	volatile int32_t t52 = -121256;

	t52 = ((x209<=x210)<<(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = 9249LLU;
	int32_t x216 = 977;

	t53 = ((x213<=x214)<<(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x218 = -440002501;
	volatile int64_t x219 = -1LL;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = -42277762;

	t54 = ((x217<=x218)<<(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 1U;
	uint32_t x224 = 339U;
	int32_t t55 = -4;

	t55 = ((x221<=x222)<<(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	volatile uint32_t x226 = 44301125U;
	uint8_t x227 = 0U;
	int8_t x228 = 23;
	int32_t t56 = -18;

	t56 = ((x225<=x226)<<(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = 16974;
	uint64_t x231 = 25634LLU;
	int64_t x232 = -1LL;

	t57 = ((x229<=x230)<<(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	static volatile int32_t x234 = INT32_MIN;
	uint32_t x235 = 494U;
	int32_t x236 = INT32_MIN;
	static int32_t t58 = -1;

	t58 = ((x233<=x234)<<(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 15U;
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MIN;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -1;

	t59 = ((x237<=x238)<<(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = -1;
	volatile int16_t x243 = -3;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -30814;

	t60 = ((x241<=x242)<<(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1476789714LL;
	static uint32_t x246 = 28649760U;
	int64_t x247 = 2712403151324523LL;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 39947561;

	t61 = ((x245<=x246)<<(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x250 = UINT32_MAX;
	uint64_t x251 = UINT64_MAX;
	uint64_t x252 = 6061643783354LLU;
	int32_t t62 = -16;

	t62 = ((x249<=x250)<<(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MIN;
	uint16_t x256 = 3576U;
	volatile int32_t t63 = 1632468;

	t63 = ((x253<=x254)<<(x255==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = UINT64_MAX;
	volatile int32_t x258 = INT32_MIN;
	int32_t x259 = INT32_MIN;
	uint32_t x260 = 3U;

	t64 = ((x257<=x258)<<(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	int32_t x264 = INT32_MIN;
	int32_t t65 = 217;

	t65 = ((x261<=x262)<<(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = -1;
	int8_t x266 = INT8_MIN;
	int8_t x267 = 5;
	uint16_t x268 = 38U;
	volatile int32_t t66 = -467;

	t66 = ((x265<=x266)<<(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 19U;
	int8_t x270 = -1;
	int16_t x271 = -4707;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = -27;

	t67 = ((x269<=x270)<<(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 2LLU;
	static int64_t x274 = -9375203294LL;
	static volatile int64_t x275 = INT64_MIN;
	static int16_t x276 = INT16_MAX;

	t68 = ((x273<=x274)<<(x275==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MAX;
	uint16_t x279 = 152U;
	static int32_t x280 = INT32_MIN;
	int32_t t69 = -1631364;

	t69 = ((x277<=x278)<<(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	static int32_t x282 = -334018139;
	static uint8_t x283 = 4U;
	int32_t x284 = INT32_MAX;
	int32_t t70 = 409;

	t70 = ((x281<=x282)<<(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MIN;
	uint64_t x287 = 5789621853LLU;
	int32_t x288 = -1;
	int32_t t71 = -266;

	t71 = ((x285<=x286)<<(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int64_t x290 = 3252LL;
	volatile int32_t t72 = -4;

	t72 = ((x289<=x290)<<(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 3727836744294LLU;
	uint64_t x294 = UINT64_MAX;
	int64_t x295 = -1LL;
	uint64_t x296 = 2785897LLU;
	int32_t t73 = -193582;

	t73 = ((x293<=x294)<<(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x299 = 15074U;
	volatile int32_t t74 = -53;

	t74 = ((x297<=x298)<<(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -52;
	volatile int8_t x302 = -8;
	static int16_t x303 = INT16_MIN;
	volatile int64_t x304 = INT64_MAX;

	t75 = ((x301<=x302)<<(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 35;
	int64_t x306 = INT64_MIN;
	static int8_t x307 = INT8_MAX;
	volatile uint32_t x308 = 5702U;

	t76 = ((x305<=x306)<<(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	int16_t x311 = 3708;
	int16_t x312 = 797;
	int32_t t77 = 14014;

	t77 = ((x309<=x310)<<(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	uint8_t x314 = 1U;
	int64_t x315 = 58086304LL;
	static int8_t x316 = 4;
	volatile int32_t t78 = 58;

	t78 = ((x313<=x314)<<(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 28U;
	uint32_t x318 = 982681808U;
	int64_t x319 = INT64_MAX;
	int32_t t79 = -2617621;

	t79 = ((x317<=x318)<<(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MIN;
	uint32_t x323 = 241U;
	uint32_t x324 = 10379U;
	volatile int32_t t80 = 1880323;

	t80 = ((x321<=x322)<<(x323==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = 27;
	int32_t x326 = 0;
	int64_t x327 = -58028258859788469LL;
	static uint32_t x328 = UINT32_MAX;
	static volatile int32_t t81 = -765174111;

	t81 = ((x325<=x326)<<(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 755753135846588029LL;
	uint64_t x330 = 389730547438309LLU;
	int16_t x331 = -1;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = 984;

	t82 = ((x329<=x330)<<(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = 484192U;
	static int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 24;

	t83 = ((x333<=x334)<<(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 2094U;
	static int32_t x339 = INT32_MAX;
	uint8_t x340 = 7U;
	volatile int32_t t84 = -435413182;

	t84 = ((x337<=x338)<<(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = 1992876U;
	int8_t x342 = -15;
	int32_t t85 = -118595;

	t85 = ((x341<=x342)<<(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 240;
	int16_t x346 = INT16_MIN;
	uint8_t x347 = UINT8_MAX;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = -2745611;

	t86 = ((x345<=x346)<<(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x350 = 4U;
	uint16_t x351 = UINT16_MAX;
	volatile int16_t x352 = INT16_MIN;
	static int32_t t87 = 1;

	t87 = ((x349<=x350)<<(x351==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x354 = UINT8_MAX;
	uint8_t x355 = 0U;
	uint32_t x356 = 39029093U;
	volatile int32_t t88 = -19124996;

	t88 = ((x353<=x354)<<(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 32808LLU;
	int32_t x359 = -1;
	int16_t x360 = -9;
	volatile int32_t t89 = 103;

	t89 = ((x357<=x358)<<(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	static int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MAX;
	static uint8_t x364 = UINT8_MAX;
	int32_t t90 = 154620465;

	t90 = ((x361<=x362)<<(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x366 = INT8_MIN;
	volatile int8_t x367 = 8;
	volatile int8_t x368 = -57;
	int32_t t91 = -435256;

	t91 = ((x365<=x366)<<(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 1183955U;
	uint64_t x370 = 259768760740820LLU;
	volatile int32_t x371 = INT32_MIN;
	static volatile int32_t t92 = 196803911;

	t92 = ((x369<=x370)<<(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x374 = -1;
	static uint32_t x375 = 6197683U;
	static uint16_t x376 = 11U;
	static int32_t t93 = -1;

	t93 = ((x373<=x374)<<(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -459;
	volatile int32_t x378 = INT32_MIN;
	int64_t x379 = -25LL;
	int32_t x380 = INT32_MIN;

	t94 = ((x377<=x378)<<(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = -7;
	static int64_t x383 = INT64_MAX;
	int16_t x384 = INT16_MIN;
	static int32_t t95 = -298233089;

	t95 = ((x381<=x382)<<(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x386 = 73U;
	static volatile int32_t x387 = INT32_MIN;
	uint16_t x388 = 8U;

	t96 = ((x385<=x386)<<(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x390 = 1LLU;
	static int32_t x391 = INT32_MAX;
	static volatile uint64_t x392 = 2862194442LLU;
	int32_t t97 = -44910;

	t97 = ((x389<=x390)<<(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -3;
	volatile uint16_t x394 = UINT16_MAX;
	uint64_t x396 = 1455301322826115LLU;
	int32_t t98 = -84;

	t98 = ((x393<=x394)<<(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x398 = INT64_MIN;
	uint8_t x399 = 64U;
	static int64_t x400 = -2080069LL;
	int32_t t99 = 10;

	t99 = ((x397<=x398)<<(x399==x400));

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

