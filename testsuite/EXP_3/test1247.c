#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = -1;
volatile uint16_t x6 = 349U;
int8_t x8 = INT8_MIN;
uint16_t x25 = 9620U;
static uint64_t x28 = 1715552082335LLU;
int64_t x31 = INT64_MAX;
volatile int32_t t6 = -19215733;
volatile uint8_t x33 = 1U;
int32_t x35 = INT32_MIN;
static int32_t x44 = -45842;
static int16_t x52 = -1;
volatile uint8_t x56 = UINT8_MAX;
int32_t x61 = INT32_MIN;
uint32_t x62 = UINT32_MAX;
int8_t x63 = -1;
volatile uint32_t t14 = 445229U;
volatile uint32_t x65 = 87509U;
int8_t x66 = 2;
static int8_t x67 = 5;
volatile int32_t x68 = INT32_MAX;
uint32_t x75 = UINT32_MAX;
volatile int8_t x76 = INT8_MIN;
int64_t t17 = 354890715LL;
int64_t x79 = INT64_MIN;
int32_t x85 = -1;
int32_t x95 = 80;
volatile uint64_t x98 = UINT64_MAX;
int16_t x100 = INT16_MIN;
int16_t x106 = 2613;
uint8_t x108 = 58U;
int16_t x109 = 144;
uint64_t x110 = 99099499998724395LLU;
uint64_t x118 = 2042082LLU;
int64_t x119 = INT64_MIN;
int64_t x120 = 16LL;
int32_t t28 = -235429;
static uint32_t x126 = 346878U;
volatile int64_t t30 = 1984531945157LL;
int16_t x135 = INT16_MIN;
volatile int16_t x137 = INT16_MIN;
int64_t x150 = 648483629534LL;
uint16_t x153 = 310U;
int64_t x158 = 57657184237517LL;
int32_t x160 = 178;
uint16_t x166 = 466U;
int8_t x176 = INT8_MIN;
int16_t x180 = -5;
int32_t t42 = 6390373;
int64_t x183 = INT64_MIN;
int64_t x184 = 211LL;
uint64_t x190 = UINT64_MAX;
uint32_t x194 = 81765097U;
uint16_t x196 = 37U;
int64_t x199 = INT64_MIN;
volatile uint64_t x200 = 8037898988134128LLU;
static int32_t t47 = -1553738;
int16_t x203 = INT16_MIN;
int64_t x211 = INT64_MIN;
uint8_t x212 = UINT8_MAX;
static uint64_t x215 = UINT64_MAX;
int64_t x222 = -86LL;
volatile int64_t t53 = 27723490452756810LL;
uint8_t x228 = UINT8_MAX;
volatile int32_t x229 = INT32_MIN;
static volatile int32_t t56 = 277221;
int64_t t57 = 228799LL;
int8_t x241 = INT8_MIN;
uint64_t x244 = 87289421343373LLU;
static uint32_t x245 = 7125U;
static uint32_t t59 = 1227U;
volatile uint64_t t61 = 1260595LLU;
int16_t x258 = -1;
static volatile int64_t x263 = INT64_MIN;
volatile int16_t x267 = 26;
uint16_t x271 = 3U;
int8_t x273 = INT8_MIN;
int8_t x275 = INT8_MIN;
static int16_t x284 = 0;
uint16_t x285 = UINT16_MAX;
uint8_t x293 = UINT8_MAX;
uint8_t x297 = UINT8_MAX;
int8_t x301 = -1;
volatile uint8_t x312 = 7U;
int32_t x327 = -1;
int64_t x330 = 476868592871012635LL;
int64_t x336 = INT64_MAX;
volatile int8_t x340 = -1;
int32_t t82 = -13396020;
volatile int8_t x344 = -1;
int8_t x345 = INT8_MAX;
uint64_t x346 = 1718351169LLU;
static volatile int16_t x347 = INT16_MIN;
static uint32_t t87 = 226305U;
volatile int64_t x372 = -500011LL;
int64_t x374 = -1LL;
int8_t x380 = -3;
uint16_t x382 = 1U;
uint64_t x391 = UINT64_MAX;
int16_t x393 = -6537;
uint16_t x400 = 3897U;
uint64_t x401 = UINT64_MAX;
static int64_t x404 = INT64_MAX;
static volatile int32_t t99 = -1213029;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int32_t x3 = INT32_MIN;
	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = 207140;

	t0 = ((x1%x2)|(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int8_t x7 = INT8_MIN;
	int64_t t1 = 464663922LL;

	t1 = ((x5%x6)|(x7==x8));

	if (t1 != 283LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	volatile int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MAX;
	int16_t x12 = 0;
	static volatile uint64_t t2 = 8125134710LLU;

	t2 = ((x9%x10)|(x11==x12));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 22518858301LL;
	volatile int16_t x18 = 12;
	int64_t x19 = INT64_MIN;
	uint16_t x20 = 11U;
	int64_t t3 = -990649098LL;

	t3 = ((x17%x18)|(x19==x20));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 1196331LL;
	int8_t x22 = 5;
	volatile uint16_t x23 = UINT16_MAX;
	volatile uint8_t x24 = UINT8_MAX;
	volatile int64_t t4 = 335770956144489260LL;

	t4 = ((x21%x22)|(x23==x24));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = UINT8_MAX;
	int8_t x27 = INT8_MIN;
	volatile int32_t t5 = -231375927;

	t5 = ((x25%x26)|(x27==x28));

	if (t5 != 185) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 5U;
	int8_t x30 = -47;
	uint16_t x32 = 178U;

	t6 = ((x29%x30)|(x31==x32));

	if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = -1;
	uint16_t x36 = 0U;
	static volatile int32_t t7 = -1131448;

	t7 = ((x33%x34)|(x35==x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 0;
	int32_t x38 = -1;
	uint16_t x39 = 366U;
	uint16_t x40 = 406U;
	int32_t t8 = -1736919;

	t8 = ((x37%x38)|(x39==x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 0;
	int32_t x42 = 45900209;
	static int16_t x43 = -1;
	volatile int32_t t9 = -147;

	t9 = ((x41%x42)|(x43==x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	int32_t x46 = -796916326;
	uint32_t x47 = 5U;
	int8_t x48 = INT8_MIN;
	volatile uint32_t t10 = 1U;

	t10 = ((x45%x46)|(x47==x48));

	if (t10 != 796916325U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	uint64_t x50 = UINT64_MAX;
	static int8_t x51 = 0;
	uint64_t t11 = 59984246LLU;

	t11 = ((x49%x50)|(x51==x52));

	if (t11 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = -18037LL;
	int16_t x54 = INT16_MIN;
	int8_t x55 = 3;
	volatile int64_t t12 = 49310892138343LL;

	t12 = ((x53%x54)|(x55==x56));

	if (t12 != -18037LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	uint16_t x58 = UINT16_MAX;
	static uint64_t x59 = UINT64_MAX;
	static int16_t x60 = INT16_MAX;
	uint32_t t13 = 17749619U;

	t13 = ((x57%x58)|(x59==x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x64 = INT32_MAX;

	t14 = ((x61%x62)|(x63==x64));

	if (t14 != 2147483648U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t t15 = 29500U;

	t15 = ((x65%x66)|(x67==x68));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = INT64_MIN;
	uint32_t x70 = UINT32_MAX;
	volatile uint16_t x71 = 12813U;
	int8_t x72 = 11;
	static int64_t t16 = 7987LL;

	t16 = ((x69%x70)|(x71==x72));

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MAX;
	uint16_t x74 = UINT16_MAX;

	t17 = ((x73%x74)|(x75==x76));

	if (t17 != 32767LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	uint32_t x78 = 910929U;
	uint16_t x80 = 214U;
	int64_t t18 = -28796526186777431LL;

	t18 = ((x77%x78)|(x79==x80));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	int32_t x83 = INT32_MIN;
	volatile int8_t x84 = 2;
	volatile uint64_t t19 = 13528731962LLU;

	t19 = ((x81%x82)|(x83==x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x86 = 21939U;
	static int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MAX;
	volatile uint32_t t20 = 1003384U;

	t20 = ((x85%x86)|(x87==x88));

	if (t20 != 13143U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = 10;
	uint32_t x94 = UINT32_MAX;
	int32_t x96 = -1;
	static uint32_t t21 = 94U;

	t21 = ((x93%x94)|(x95==x96));

	if (t21 != 10U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MAX;
	uint16_t x99 = 590U;
	uint64_t t22 = 35584LLU;

	t22 = ((x97%x98)|(x99==x100));

	if (t22 != 2147483647LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MAX;
	int16_t x102 = -2608;
	static volatile uint8_t x103 = 11U;
	uint8_t x104 = 2U;
	int32_t t23 = 529451987;

	t23 = ((x101%x102)|(x103==x104));

	if (t23 != 1471) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 3U;
	uint16_t x107 = 131U;
	uint32_t t24 = 300U;

	t24 = ((x105%x106)|(x107==x108));

	if (t24 != 3U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x111 = INT64_MIN;
	static uint32_t x112 = 765400U;
	uint64_t t25 = 2047796130LLU;

	t25 = ((x109%x110)|(x111==x112));

	if (t25 != 144LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = UINT64_MAX;
	volatile uint32_t x115 = 6031493U;
	volatile int64_t x116 = INT64_MIN;
	volatile uint64_t t26 = 1699156LLU;

	t26 = ((x113%x114)|(x115==x116));

	if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 58785543247LLU;
	uint64_t t27 = 507049830LLU;

	t27 = ((x117%x118)|(x119==x120));

	if (t27 != 128713LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = INT16_MAX;
	volatile int8_t x122 = INT8_MIN;
	int32_t x123 = -327729027;
	uint8_t x124 = 8U;

	t28 = ((x121%x122)|(x123==x124));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	int32_t x127 = -1;
	int32_t x128 = -1;
	volatile uint32_t t29 = 1U;

	t29 = ((x125%x126)|(x127==x128));

	if (t29 != 238011U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MIN;
	static volatile int32_t x130 = -1;
	int16_t x131 = 2;
	static int64_t x132 = -1LL;

	t30 = ((x129%x130)|(x131==x132));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x133 = -1LL;
	static volatile int16_t x134 = INT16_MAX;
	volatile uint8_t x136 = 26U;
	static volatile int64_t t31 = -1LL;

	t31 = ((x133%x134)|(x135==x136));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x138 = INT16_MAX;
	uint8_t x139 = UINT8_MAX;
	static int8_t x140 = INT8_MAX;
	volatile int32_t t32 = -61481;

	t32 = ((x137%x138)|(x139==x140));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MAX;
	uint16_t x142 = 7U;
	int64_t x143 = INT64_MIN;
	volatile uint64_t x144 = 202309LLU;
	volatile int32_t t33 = 4968;

	t33 = ((x141%x142)|(x143==x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = UINT8_MAX;
	int16_t x146 = -1;
	volatile int64_t x147 = -1LL;
	int8_t x148 = -1;
	int32_t t34 = 24282;

	t34 = ((x145%x146)|(x147==x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 18U;
	int64_t x151 = INT64_MAX;
	static int8_t x152 = 39;
	volatile int64_t t35 = -120LL;

	t35 = ((x149%x150)|(x151==x152));

	if (t35 != 18LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x154 = -1042;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MIN;
	int32_t t36 = -22915;

	t36 = ((x153%x154)|(x155==x156));

	if (t36 != 310) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MAX;
	volatile int32_t x159 = -122891;
	int64_t t37 = 180LL;

	t37 = ((x157%x158)|(x159==x160));

	if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x161 = INT64_MIN;
	int32_t x162 = -1;
	static int32_t x163 = INT32_MAX;
	static int32_t x164 = INT32_MIN;
	int64_t t38 = 8895386678842786LL;

	t38 = ((x161%x162)|(x163==x164));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = 0;
	volatile int64_t x167 = -1LL;
	uint64_t x168 = 49830285LLU;
	int32_t t39 = 1641;

	t39 = ((x165%x166)|(x167==x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = 0;
	volatile int16_t x170 = INT16_MIN;
	uint32_t x171 = UINT32_MAX;
	static volatile uint16_t x172 = 339U;
	int32_t t40 = 117481;

	t40 = ((x169%x170)|(x171==x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	static uint16_t x174 = UINT16_MAX;
	int32_t x175 = -1014;
	int64_t t41 = -10LL;

	t41 = ((x173%x174)|(x175==x176));

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = UINT8_MAX;
	static volatile int32_t x178 = INT32_MAX;
	int64_t x179 = INT64_MAX;

	t42 = ((x177%x178)|(x179==x180));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x181 = -1;
	int32_t x182 = INT32_MIN;
	volatile int32_t t43 = 3583379;

	t43 = ((x181%x182)|(x183==x184));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = -1;
	int8_t x186 = INT8_MAX;
	static uint16_t x187 = 13U;
	int16_t x188 = INT16_MIN;
	int32_t t44 = -4146794;

	t44 = ((x185%x186)|(x187==x188));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 77U;
	int32_t x191 = -1;
	uint8_t x192 = 14U;
	uint64_t t45 = 2830493279LLU;

	t45 = ((x189%x190)|(x191==x192));

	if (t45 != 77LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x193 = INT8_MAX;
	int32_t x195 = -7495289;
	static uint32_t t46 = 2564076U;

	t46 = ((x193%x194)|(x195==x196));

	if (t46 != 127U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	volatile int8_t x198 = 1;

	t47 = ((x197%x198)|(x199==x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MIN;
	static volatile uint32_t x202 = UINT32_MAX;
	static uint8_t x204 = 1U;
	volatile uint32_t t48 = 121491453U;

	t48 = ((x201%x202)|(x203==x204));

	if (t48 != 4294934528U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x205 = INT8_MIN;
	static volatile int32_t x206 = 3845707;
	uint16_t x207 = 7U;
	uint8_t x208 = 1U;
	volatile int32_t t49 = 354330;

	t49 = ((x205%x206)|(x207==x208));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MIN;
	uint16_t x210 = UINT16_MAX;
	int32_t t50 = 766181;

	t50 = ((x209%x210)|(x211==x212));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 115U;
	uint64_t x214 = UINT64_MAX;
	uint16_t x216 = UINT16_MAX;
	static volatile uint64_t t51 = 7084091804103458LLU;

	t51 = ((x213%x214)|(x215==x216));

	if (t51 != 115LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = -157;
	int32_t x218 = -1655;
	int8_t x219 = INT8_MIN;
	int8_t x220 = 14;
	volatile int32_t t52 = -11;

	t52 = ((x217%x218)|(x219==x220));

	if (t52 != -157) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x221 = INT64_MIN;
	uint8_t x223 = UINT8_MAX;
	int64_t x224 = INT64_MIN;

	t53 = ((x221%x222)|(x223==x224));

	if (t53 != -42LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x225 = INT32_MIN;
	int8_t x226 = 1;
	int8_t x227 = -1;
	volatile int32_t t54 = 9337728;

	t54 = ((x225%x226)|(x227==x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x230 = INT16_MAX;
	uint64_t x231 = 98627173111175LLU;
	int64_t x232 = 34731LL;
	int32_t t55 = -38052451;

	t55 = ((x229%x230)|(x231==x232));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x233 = INT32_MAX;
	int8_t x234 = INT8_MAX;
	int16_t x235 = -768;
	volatile int64_t x236 = INT64_MAX;

	t56 = ((x233%x234)|(x235==x236));

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x237 = -71;
	int64_t x238 = -5034LL;
	static int16_t x239 = INT16_MAX;
	volatile uint64_t x240 = 24975LLU;

	t57 = ((x237%x238)|(x239==x240));

	if (t57 != -71LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x242 = INT8_MIN;
	uint8_t x243 = 3U;
	volatile int32_t t58 = -527059;

	t58 = ((x241%x242)|(x243==x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x246 = -3681;
	int16_t x247 = INT16_MAX;
	volatile uint64_t x248 = UINT64_MAX;

	t59 = ((x245%x246)|(x247==x248));

	if (t59 != 7125U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -1;
	static int16_t x250 = -6;
	int32_t x251 = INT32_MIN;
	int64_t x252 = -28629LL;
	volatile int32_t t60 = 619710;

	t60 = ((x249%x250)|(x251==x252));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x253 = INT32_MIN;
	uint64_t x254 = 635253721LLU;
	int16_t x255 = INT16_MAX;
	uint64_t x256 = 2241LLU;

	t61 = ((x253%x254)|(x255==x256));

	if (t61 != 158320661LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	int64_t t62 = -376LL;

	t62 = ((x257%x258)|(x259==x260));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = UINT16_MAX;
	int32_t x262 = INT32_MAX;
	uint32_t x264 = UINT32_MAX;
	static int32_t t63 = 34319;

	t63 = ((x261%x262)|(x263==x264));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = INT16_MAX;
	uint64_t x266 = 13791614LLU;
	int16_t x268 = INT16_MIN;
	volatile uint64_t t64 = 1LLU;

	t64 = ((x265%x266)|(x267==x268));

	if (t64 != 32767LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 6039U;
	int16_t x270 = 4;
	int32_t x272 = 0;
	volatile int32_t t65 = 4781;

	t65 = ((x269%x270)|(x271==x272));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x274 = UINT32_MAX;
	int8_t x276 = -1;
	static uint32_t t66 = 583715394U;

	t66 = ((x273%x274)|(x275==x276));

	if (t66 != 4294967168U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x277 = -1;
	int64_t x278 = -505364482LL;
	static int8_t x279 = INT8_MIN;
	int32_t x280 = -7782953;
	int64_t t67 = -5001601LL;

	t67 = ((x277%x278)|(x279==x280));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 406U;
	uint16_t x282 = UINT16_MAX;
	volatile uint8_t x283 = 0U;
	volatile int32_t t68 = 1;

	t68 = ((x281%x282)|(x283==x284));

	if (t68 != 407) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x286 = 2;
	int16_t x287 = INT16_MIN;
	static int8_t x288 = INT8_MIN;
	int32_t t69 = 2;

	t69 = ((x285%x286)|(x287==x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = INT32_MAX;
	volatile int16_t x290 = 83;
	int32_t x291 = 183722;
	uint16_t x292 = 22799U;
	volatile int32_t t70 = -2589867;

	t70 = ((x289%x290)|(x291==x292));

	if (t70 != 79) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x294 = INT8_MIN;
	int8_t x295 = -11;
	int64_t x296 = -1LL;
	int32_t t71 = -1273;

	t71 = ((x293%x294)|(x295==x296));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x298 = INT8_MIN;
	int8_t x299 = 1;
	uint32_t x300 = UINT32_MAX;
	static int32_t t72 = -950;

	t72 = ((x297%x298)|(x299==x300));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x302 = -1599;
	int64_t x303 = -1LL;
	uint8_t x304 = 2U;
	static int32_t t73 = 401;

	t73 = ((x301%x302)|(x303==x304));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x305 = -1;
	static volatile int16_t x306 = 5254;
	static uint16_t x307 = UINT16_MAX;
	uint32_t x308 = UINT32_MAX;
	int32_t t74 = 0;

	t74 = ((x305%x306)|(x307==x308));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MAX;
	int32_t t75 = -14916;

	t75 = ((x309%x310)|(x311==x312));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x313 = -26195;
	int64_t x314 = INT64_MIN;
	int64_t x315 = -1LL;
	uint64_t x316 = 71385562LLU;
	int64_t t76 = 3274322311LL;

	t76 = ((x313%x314)|(x315==x316));

	if (t76 != -26195LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = 13252028035349110LLU;
	static volatile int8_t x318 = 1;
	int64_t x319 = -1LL;
	int32_t x320 = INT32_MIN;
	uint64_t t77 = 3097802LLU;

	t77 = ((x317%x318)|(x319==x320));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x321 = -1;
	static int32_t x322 = -1;
	int8_t x323 = -27;
	int16_t x324 = -1;
	static volatile int32_t t78 = -1;

	t78 = ((x321%x322)|(x323==x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MIN;
	volatile int8_t x326 = -1;
	int32_t x328 = -25;
	volatile int32_t t79 = 199727683;

	t79 = ((x325%x326)|(x327==x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x329 = 28U;
	int32_t x331 = INT32_MIN;
	int8_t x332 = -1;
	volatile int64_t t80 = 63LL;

	t80 = ((x329%x330)|(x331==x332));

	if (t80 != 28LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = -1;
	static int32_t x334 = 19789525;
	static int8_t x335 = 1;
	static volatile int32_t t81 = 504;

	t81 = ((x333%x334)|(x335==x336));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x337 = 3113U;
	int8_t x338 = INT8_MIN;
	int8_t x339 = INT8_MIN;

	t82 = ((x337%x338)|(x339==x340));

	if (t82 != 41) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x341 = 6U;
	volatile uint16_t x342 = 18452U;
	int8_t x343 = INT8_MIN;
	volatile uint32_t t83 = 50551993U;

	t83 = ((x341%x342)|(x343==x344));

	if (t83 != 6U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x348 = INT16_MIN;
	uint64_t t84 = 254LLU;

	t84 = ((x345%x346)|(x347==x348));

	if (t84 != 127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x349 = 120LLU;
	static int32_t x350 = INT32_MAX;
	uint8_t x351 = UINT8_MAX;
	volatile uint16_t x352 = 110U;
	static volatile uint64_t t85 = 53540654LLU;

	t85 = ((x349%x350)|(x351==x352));

	if (t85 != 120LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 123U;
	uint64_t x354 = 14254326080917LLU;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = 903001897832596834LLU;
	volatile uint64_t t86 = 2069130974749LLU;

	t86 = ((x353%x354)|(x355==x356));

	if (t86 != 123LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x357 = INT16_MIN;
	static uint32_t x358 = 333980224U;
	static int8_t x359 = -1;
	volatile int32_t x360 = -31165605;

	t87 = ((x357%x358)|(x359==x360));

	if (t87 != 287171840U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x361 = 13;
	uint64_t x362 = 52828101736LLU;
	int16_t x363 = INT16_MIN;
	int8_t x364 = 29;
	uint64_t t88 = 22970570620365LLU;

	t88 = ((x361%x362)|(x363==x364));

	if (t88 != 13LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x365 = UINT16_MAX;
	uint64_t x366 = 110133LLU;
	int32_t x367 = INT32_MIN;
	int8_t x368 = -1;
	static volatile uint64_t t89 = 90542LLU;

	t89 = ((x365%x366)|(x367==x368));

	if (t89 != 65535LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = -4115;
	uint32_t x370 = 30525720U;
	int64_t x371 = INT64_MIN;
	volatile uint32_t t90 = 23U;

	t90 = ((x369%x370)|(x371==x372));

	if (t90 != 21362381U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = 1;
	static int32_t x375 = -1;
	int64_t x376 = -1LL;
	int64_t t91 = 327387659517729LL;

	t91 = ((x373%x374)|(x375==x376));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x377 = 135U;
	static uint16_t x378 = 7U;
	uint32_t x379 = 366529544U;
	uint32_t t92 = 345027575U;

	t92 = ((x377%x378)|(x379==x380));

	if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = INT32_MIN;
	uint32_t x383 = 5626783U;
	int8_t x384 = -14;
	int32_t t93 = -8;

	t93 = ((x381%x382)|(x383==x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = -1;
	uint16_t x386 = 1U;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MIN;
	int32_t t94 = -169343368;

	t94 = ((x385%x386)|(x387==x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x389 = INT16_MAX;
	int32_t x390 = -32648983;
	uint64_t x392 = 206587358051946245LLU;
	volatile int32_t t95 = 0;

	t95 = ((x389%x390)|(x391==x392));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x394 = INT16_MAX;
	int8_t x395 = -1;
	uint32_t x396 = 6976U;
	volatile int32_t t96 = 3233372;

	t96 = ((x393%x394)|(x395==x396));

	if (t96 != -6537) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x397 = UINT64_MAX;
	int64_t x398 = -1LL;
	int32_t x399 = INT32_MIN;
	uint64_t t97 = 989971483900392LLU;

	t97 = ((x397%x398)|(x399==x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x402 = INT64_MIN;
	uint32_t x403 = 429U;
	static uint64_t t98 = 7135648906743LLU;

	t98 = ((x401%x402)|(x403==x404));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MIN;
	uint16_t x406 = 21495U;
	volatile int16_t x407 = INT16_MIN;
	volatile int16_t x408 = INT16_MAX;

	t99 = ((x405%x406)|(x407==x408));

	if (t99 != -4178) { NG(); } else { ; }
	
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

