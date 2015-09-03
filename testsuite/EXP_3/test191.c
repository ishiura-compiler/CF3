#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = 1;
int64_t x12 = -35989937698083331LL;
uint8_t x17 = 16U;
int32_t t3 = -1699;
int32_t x27 = INT32_MIN;
volatile int32_t x29 = -5777;
uint32_t x33 = 986965U;
volatile int32_t x44 = INT32_MIN;
uint64_t x47 = 377638LLU;
int32_t t9 = -16;
uint32_t x49 = 59866431U;
int16_t x57 = INT16_MAX;
static volatile uint16_t x58 = 31U;
uint64_t x59 = 107920071409LLU;
volatile int32_t t11 = -7;
int32_t x65 = INT32_MIN;
int8_t x66 = -1;
volatile int32_t t13 = -658254;
int16_t x73 = 1;
static int8_t x84 = INT8_MAX;
uint8_t x93 = UINT8_MAX;
int32_t x97 = INT32_MIN;
volatile int8_t x98 = INT8_MIN;
volatile int64_t x99 = INT64_MIN;
int16_t x104 = -1;
uint64_t x114 = 4641549LLU;
int64_t x123 = -1LL;
int8_t x125 = INT8_MIN;
int32_t x126 = -1;
static int32_t x128 = INT32_MIN;
int8_t x129 = -1;
uint64_t x130 = 46160763937LLU;
int64_t x133 = -1LL;
int16_t x140 = INT16_MIN;
volatile uint32_t x142 = 1942217608U;
volatile int32_t x143 = 560999;
int8_t x144 = 1;
volatile int16_t x149 = -1;
uint8_t x151 = UINT8_MAX;
uint16_t x153 = 1U;
volatile uint8_t x155 = 12U;
uint32_t x162 = 72U;
volatile int32_t t34 = 13;
int32_t t35 = -14672434;
static int8_t x169 = -17;
int8_t x173 = -1;
int64_t x178 = INT64_MAX;
volatile int32_t t39 = 1986726;
static int16_t x189 = -1;
int32_t t41 = 238658;
uint32_t x198 = 15476880U;
static int32_t x200 = INT32_MAX;
static int8_t x201 = -1;
volatile int32_t x202 = -2;
int32_t t43 = -35775153;
uint32_t x207 = UINT32_MAX;
int16_t x210 = -152;
int64_t x211 = -1LL;
int8_t x219 = INT8_MAX;
int32_t t48 = 46;
static uint8_t x229 = UINT8_MAX;
int8_t x232 = -3;
volatile uint8_t x236 = 37U;
static int32_t t51 = 2;
volatile int32_t x242 = INT32_MIN;
volatile int32_t t52 = -1;
int8_t x251 = INT8_MIN;
static int64_t x257 = -7LL;
uint16_t x271 = 14U;
volatile int32_t t59 = -5497;
static int16_t x274 = -1;
volatile int64_t x278 = INT64_MIN;
static uint32_t x283 = UINT32_MAX;
int32_t t62 = 4746229;
volatile int16_t x289 = INT16_MIN;
int32_t t66 = 18;
volatile uint8_t x303 = 0U;
volatile int64_t x306 = -3893934LL;
int16_t x308 = -1;
static int32_t t68 = -24919;
int8_t x311 = 0;
uint32_t x312 = 2991U;
uint64_t x327 = UINT64_MAX;
volatile uint64_t x328 = 13516147209032672LLU;
static int8_t x341 = -4;
int32_t x348 = -1;
static volatile int32_t t75 = -1745;
int32_t x354 = INT32_MIN;
int32_t x356 = 948810731;
int32_t x360 = INT32_MIN;
static volatile int32_t t78 = 1030;
volatile int8_t x365 = -1;
uint32_t x371 = 936256U;
int64_t x374 = 442LL;
uint16_t x377 = 1264U;
uint64_t x380 = 3977416230LLU;
volatile int16_t x388 = 80;
uint8_t x391 = 24U;
volatile uint16_t x400 = 7U;
int64_t x412 = INT64_MAX;
int32_t t91 = 571;
int16_t x413 = 4;
uint32_t x421 = UINT32_MAX;
int32_t t93 = 120930;
static int32_t t95 = 140;
volatile int32_t t97 = 11;
int64_t x446 = INT64_MAX;
uint16_t x447 = 2464U;
int8_t x448 = -1;


void f0(void) {
	static volatile uint8_t x5 = 2U;
	int32_t x7 = 28310;
	int8_t x8 = INT8_MIN;
	int32_t t0 = 185495107;

	t0 = ((x5-x6)<(x7-x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = -5600128422896LL;
	volatile uint16_t x10 = UINT16_MAX;
	int16_t x11 = -1;
	volatile int32_t t1 = -4800;

	t1 = ((x9-x10)<(x11-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = -1LL;
	int64_t x14 = -1LL;
	static volatile int16_t x15 = INT16_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t2 = -766989143;

	t2 = ((x13-x14)<(x15-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x18 = INT8_MAX;
	uint32_t x19 = 697504039U;
	int64_t x20 = INT64_MAX;

	t3 = ((x17-x18)<(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = UINT32_MAX;
	uint32_t x26 = UINT32_MAX;
	int32_t x28 = -17359888;
	volatile int32_t t4 = -740428;

	t4 = ((x25-x26)<(x27-x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x30 = UINT32_MAX;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = 751277506LLU;
	volatile int32_t t5 = -118585;

	t5 = ((x29-x30)<(x31-x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = 901;
	volatile int16_t x35 = INT16_MAX;
	uint16_t x36 = 382U;
	int32_t t6 = 3071624;

	t6 = ((x33-x34)<(x35-x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -1;
	static uint8_t x38 = UINT8_MAX;
	static uint32_t x39 = 584893U;
	int32_t x40 = INT32_MAX;
	static int32_t t7 = -13922;

	t7 = ((x37-x38)<(x39-x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	static int16_t x43 = INT16_MIN;
	int32_t t8 = 380360;

	t8 = ((x41-x42)<(x43-x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = -500LL;
	int32_t x46 = -1;
	int8_t x48 = INT8_MIN;

	t9 = ((x45-x46)<(x47-x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x50 = 92U;
	uint32_t x51 = UINT32_MAX;
	volatile int16_t x52 = INT16_MIN;
	volatile int32_t t10 = -46469;

	t10 = ((x49-x50)<(x51-x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x60 = INT8_MIN;

	t11 = ((x57-x58)<(x59-x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MAX;
	int64_t x62 = INT64_MAX;
	int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;
	volatile int32_t t12 = -70;

	t12 = ((x61-x62)<(x63-x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x67 = UINT32_MAX;
	uint16_t x68 = 28U;

	t13 = ((x65-x66)<(x67-x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = -1;
	int8_t x71 = -1;
	static uint16_t x72 = UINT16_MAX;
	volatile int32_t t14 = -1844587;

	t14 = ((x69-x70)<(x71-x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x74 = INT16_MIN;
	uint64_t x75 = 23790260455952LLU;
	volatile int64_t x76 = 20LL;
	int32_t t15 = -497;

	t15 = ((x73-x74)<(x75-x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x77 = -1;
	int16_t x78 = -6;
	static int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MIN;
	int32_t t16 = 62;

	t16 = ((x77-x78)<(x79-x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x81 = INT16_MAX;
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MAX;
	int32_t t17 = -6966;

	t17 = ((x81-x82)<(x83-x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 2U;
	int8_t x86 = -1;
	int64_t x87 = -1LL;
	int16_t x88 = INT16_MIN;
	volatile int32_t t18 = 3927;

	t18 = ((x85-x86)<(x87-x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = 0U;
	static int16_t x90 = INT16_MIN;
	volatile int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t19 = -1724;

	t19 = ((x89-x90)<(x91-x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x94 = 105LL;
	uint8_t x95 = 38U;
	uint32_t x96 = 78750695U;
	volatile int32_t t20 = -179;

	t20 = ((x93-x94)<(x95-x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x100 = INT32_MIN;
	volatile int32_t t21 = -3;

	t21 = ((x97-x98)<(x99-x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MIN;
	volatile int32_t x102 = INT32_MIN;
	int32_t x103 = 0;
	int32_t t22 = 173263;

	t22 = ((x101-x102)<(x103-x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = 0;
	static int64_t x115 = 73064090969984LL;
	int32_t x116 = -1;
	static int32_t t23 = -468;

	t23 = ((x113-x114)<(x115-x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = 119LLU;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = INT64_MIN;
	static volatile int32_t x120 = -1;
	volatile int32_t t24 = 183;

	t24 = ((x117-x118)<(x119-x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x121 = 20U;
	volatile int8_t x122 = -10;
	int32_t x124 = INT32_MAX;
	int32_t t25 = 656753171;

	t25 = ((x121-x122)<(x123-x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x127 = INT64_MIN;
	volatile int32_t t26 = -36;

	t26 = ((x125-x126)<(x127-x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x131 = -1;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t27 = 10;

	t27 = ((x129-x130)<(x131-x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x134 = 172474;
	int64_t x135 = INT64_MAX;
	volatile uint32_t x136 = 4300099U;
	volatile int32_t t28 = -18;

	t28 = ((x133-x134)<(x135-x136));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = 4489512910137LLU;
	static volatile uint8_t x138 = 9U;
	int64_t x139 = 0LL;
	static volatile int32_t t29 = 30646;

	t29 = ((x137-x138)<(x139-x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 2514208U;
	int32_t t30 = -3250;

	t30 = ((x141-x142)<(x143-x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = 538538773645LLU;
	int16_t x146 = INT16_MAX;
	int32_t x147 = -26;
	static int16_t x148 = INT16_MAX;
	volatile int32_t t31 = -9885874;

	t31 = ((x145-x146)<(x147-x148));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x150 = UINT8_MAX;
	static int16_t x152 = 604;
	volatile int32_t t32 = -1;

	t32 = ((x149-x150)<(x151-x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x154 = INT32_MAX;
	volatile int64_t x156 = -27512LL;
	volatile int32_t t33 = -24706;

	t33 = ((x153-x154)<(x155-x156));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x161 = UINT32_MAX;
	uint64_t x163 = 4524051LLU;
	int32_t x164 = -1;

	t34 = ((x161-x162)<(x163-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = INT64_MIN;
	static int16_t x166 = INT16_MIN;
	static int8_t x167 = 0;
	static volatile int64_t x168 = -1957632578LL;

	t35 = ((x165-x166)<(x167-x168));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x170 = INT32_MIN;
	uint8_t x171 = 0U;
	int8_t x172 = 1;
	volatile int32_t t36 = -38;

	t36 = ((x169-x170)<(x171-x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x174 = INT8_MAX;
	uint16_t x175 = 2675U;
	static int32_t x176 = -124318393;
	static volatile int32_t t37 = -83478;

	t37 = ((x173-x174)<(x175-x176));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x177 = 2U;
	int64_t x179 = INT64_MAX;
	uint32_t x180 = 441903U;
	volatile int32_t t38 = 2844;

	t38 = ((x177-x178)<(x179-x180));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MAX;
	static uint8_t x182 = 102U;
	uint16_t x183 = 38U;
	int16_t x184 = 0;

	t39 = ((x181-x182)<(x183-x184));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x190 = INT8_MIN;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = 32;
	volatile int32_t t40 = -1922163;

	t40 = ((x189-x190)<(x191-x192));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x193 = UINT8_MAX;
	int16_t x194 = INT16_MIN;
	static volatile int32_t x195 = INT32_MIN;
	int64_t x196 = -3590LL;

	t41 = ((x193-x194)<(x195-x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = INT8_MIN;
	int32_t x199 = INT32_MAX;
	volatile int32_t t42 = -131;

	t42 = ((x197-x198)<(x199-x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x203 = 0;
	int32_t x204 = -401028;

	t43 = ((x201-x202)<(x203-x204));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x205 = 65U;
	volatile int64_t x206 = 23LL;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t44 = -15195;

	t44 = ((x205-x206)<(x207-x208));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x209 = 161;
	int16_t x212 = INT16_MAX;
	static volatile int32_t t45 = -842011713;

	t45 = ((x209-x210)<(x211-x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x213 = INT8_MIN;
	uint8_t x214 = UINT8_MAX;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = 121812;
	volatile int32_t t46 = -553;

	t46 = ((x213-x214)<(x215-x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = -1;
	int8_t x218 = INT8_MIN;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t47 = 204;

	t47 = ((x217-x218)<(x219-x220));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = 3U;
	uint8_t x226 = UINT8_MAX;
	int16_t x227 = 14801;
	int8_t x228 = -15;

	t48 = ((x225-x226)<(x227-x228));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x230 = -2940527;
	uint64_t x231 = 369840LLU;
	int32_t t49 = -60064;

	t49 = ((x229-x230)<(x231-x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = -1LL;
	int16_t x234 = -239;
	static int64_t x235 = 256156218LL;
	volatile int32_t t50 = -1;

	t50 = ((x233-x234)<(x235-x236));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x237 = 21;
	int32_t x238 = -25;
	uint8_t x239 = 0U;
	static int32_t x240 = -6520867;

	t51 = ((x237-x238)<(x239-x240));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = -1LL;
	int16_t x243 = -1;
	uint16_t x244 = 2203U;

	t52 = ((x241-x242)<(x243-x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x245 = UINT16_MAX;
	int64_t x246 = 68214253787LL;
	int32_t x247 = INT32_MIN;
	volatile uint64_t x248 = 1301010414058LLU;
	int32_t t53 = -1;

	t53 = ((x245-x246)<(x247-x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x249 = -1;
	int32_t x250 = 22619788;
	int64_t x252 = INT64_MIN;
	volatile int32_t t54 = 6533823;

	t54 = ((x249-x250)<(x251-x252));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x253 = INT32_MIN;
	uint32_t x254 = 31177161U;
	static int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MIN;
	volatile int32_t t55 = 42759;

	t55 = ((x253-x254)<(x255-x256));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x258 = 410014930U;
	static volatile uint16_t x259 = 76U;
	int16_t x260 = INT16_MIN;
	volatile int32_t t56 = -4110633;

	t56 = ((x257-x258)<(x259-x260));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = 6;
	uint64_t x262 = 363513379935387661LLU;
	uint8_t x263 = UINT8_MAX;
	volatile uint16_t x264 = 30U;
	int32_t t57 = -22590;

	t57 = ((x261-x262)<(x263-x264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x265 = UINT32_MAX;
	static uint16_t x266 = 0U;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t58 = -88792;

	t58 = ((x265-x266)<(x267-x268));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x269 = -1;
	static uint32_t x270 = 1U;
	volatile int8_t x272 = 11;

	t59 = ((x269-x270)<(x271-x272));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = 10;
	static uint8_t x275 = 1U;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t60 = 246200833;

	t60 = ((x273-x274)<(x275-x276));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x277 = -1;
	uint64_t x279 = 249LLU;
	int32_t x280 = INT32_MIN;
	volatile int32_t t61 = 3;

	t61 = ((x277-x278)<(x279-x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = INT8_MAX;
	volatile int16_t x282 = INT16_MAX;
	int16_t x284 = -1;

	t62 = ((x281-x282)<(x283-x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x285 = 11222U;
	static int16_t x286 = INT16_MIN;
	int64_t x287 = 13924093LL;
	uint16_t x288 = 5829U;
	int32_t t63 = 6057019;

	t63 = ((x285-x286)<(x287-x288));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MIN;
	static volatile int8_t x292 = -1;
	static volatile int32_t t64 = -2696459;

	t64 = ((x289-x290)<(x291-x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x293 = INT32_MIN;
	int32_t x294 = -1;
	volatile int64_t x295 = INT64_MIN;
	int8_t x296 = -1;
	static int32_t t65 = 96658;

	t65 = ((x293-x294)<(x295-x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x297 = UINT16_MAX;
	static uint32_t x298 = 817U;
	int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MIN;

	t66 = ((x297-x298)<(x299-x300));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = 55667883U;
	int64_t x302 = INT64_MAX;
	int64_t x304 = INT64_MAX;
	static int32_t t67 = 808;

	t67 = ((x301-x302)<(x303-x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x305 = 922LLU;
	uint16_t x307 = UINT16_MAX;

	t68 = ((x305-x306)<(x307-x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = -732;
	static int64_t x310 = -1LL;
	int32_t t69 = 37;

	t69 = ((x309-x310)<(x311-x312));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x321 = -1;
	static uint64_t x322 = 204515LLU;
	int32_t x323 = -1;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t70 = -4989;

	t70 = ((x321-x322)<(x323-x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x325 = -1;
	int16_t x326 = 15242;
	volatile int32_t t71 = 16698759;

	t71 = ((x325-x326)<(x327-x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = 7228360589555661LL;
	static int16_t x334 = INT16_MAX;
	volatile int16_t x335 = INT16_MAX;
	int16_t x336 = -1;
	volatile int32_t t72 = 209461;

	t72 = ((x333-x334)<(x335-x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = 3265;
	int64_t x338 = -1333477015LL;
	static int64_t x339 = -1LL;
	int64_t x340 = -1LL;
	static volatile int32_t t73 = -51294;

	t73 = ((x337-x338)<(x339-x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x342 = INT16_MIN;
	volatile int8_t x343 = INT8_MAX;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t74 = 10620655;

	t74 = ((x341-x342)<(x343-x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = INT8_MIN;
	uint64_t x346 = 16300LLU;
	int16_t x347 = 25;

	t75 = ((x345-x346)<(x347-x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x349 = UINT32_MAX;
	volatile int64_t x350 = -157197LL;
	volatile uint8_t x351 = 0U;
	uint64_t x352 = 481LLU;
	volatile int32_t t76 = -11241;

	t76 = ((x349-x350)<(x351-x352));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = 308LL;
	uint32_t x355 = UINT32_MAX;
	static int32_t t77 = 10701;

	t77 = ((x353-x354)<(x355-x356));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x357 = INT64_MIN;
	static volatile uint64_t x358 = 108969847525883816LLU;
	int8_t x359 = INT8_MIN;

	t78 = ((x357-x358)<(x359-x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x361 = 665U;
	volatile int64_t x362 = -1LL;
	int32_t x363 = -1;
	uint64_t x364 = 60382326715521LLU;
	int32_t t79 = 0;

	t79 = ((x361-x362)<(x363-x364));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x366 = UINT64_MAX;
	int32_t x367 = 32258673;
	int64_t x368 = 77828375285127788LL;
	int32_t t80 = -191;

	t80 = ((x365-x366)<(x367-x368));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = INT32_MAX;
	int64_t x370 = -2488893051586LL;
	volatile int32_t x372 = -1;
	volatile int32_t t81 = -1508;

	t81 = ((x369-x370)<(x371-x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x373 = -12;
	static int16_t x375 = INT16_MAX;
	int64_t x376 = -1LL;
	int32_t t82 = 8889;

	t82 = ((x373-x374)<(x375-x376));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x378 = INT8_MAX;
	int64_t x379 = -1LL;
	volatile int32_t t83 = -29;

	t83 = ((x377-x378)<(x379-x380));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x381 = INT8_MAX;
	int32_t x382 = -111612510;
	int64_t x383 = INT64_MIN;
	static int8_t x384 = 0;
	int32_t t84 = 60;

	t84 = ((x381-x382)<(x383-x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x385 = 1U;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MAX;
	int32_t t85 = 52;

	t85 = ((x385-x386)<(x387-x388));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x389 = INT64_MIN;
	static int64_t x390 = INT64_MIN;
	int64_t x392 = -456231LL;
	volatile int32_t t86 = 518;

	t86 = ((x389-x390)<(x391-x392));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x393 = 65LLU;
	int8_t x394 = -1;
	int16_t x395 = -1;
	int64_t x396 = -210171279985LL;
	int32_t t87 = 68350;

	t87 = ((x393-x394)<(x395-x396));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = INT8_MIN;
	static int64_t x398 = INT64_MIN;
	static int16_t x399 = -1;
	int32_t t88 = 3;

	t88 = ((x397-x398)<(x399-x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x401 = 6U;
	static int32_t x402 = INT32_MIN;
	static uint32_t x403 = 4U;
	uint32_t x404 = 360U;
	static volatile int32_t t89 = -867345;

	t89 = ((x401-x402)<(x403-x404));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x405 = 4749U;
	uint32_t x406 = 3252U;
	uint32_t x407 = 3U;
	int16_t x408 = INT16_MIN;
	volatile int32_t t90 = 287901476;

	t90 = ((x405-x406)<(x407-x408));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x409 = 618414608725781LLU;
	uint8_t x410 = 3U;
	static uint8_t x411 = 5U;

	t91 = ((x409-x410)<(x411-x412));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x414 = 154686905U;
	static volatile int8_t x415 = -1;
	int16_t x416 = INT16_MIN;
	int32_t t92 = 7382606;

	t92 = ((x413-x414)<(x415-x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x422 = 1LL;
	volatile uint32_t x423 = 0U;
	static int8_t x424 = INT8_MIN;

	t93 = ((x421-x422)<(x423-x424));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = -1LL;
	static int16_t x426 = -1;
	int64_t x427 = 8069LL;
	static uint8_t x428 = 28U;
	int32_t t94 = 121441092;

	t94 = ((x425-x426)<(x427-x428));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x429 = 393992LLU;
	int16_t x430 = INT16_MIN;
	uint32_t x431 = 625U;
	int32_t x432 = -1;

	t95 = ((x429-x430)<(x431-x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x433 = INT32_MAX;
	static volatile uint64_t x434 = 6935216LLU;
	volatile uint64_t x435 = 723658365LLU;
	volatile int32_t x436 = INT32_MIN;
	volatile int32_t t96 = 523755;

	t96 = ((x433-x434)<(x435-x436));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x437 = UINT16_MAX;
	static int8_t x438 = -1;
	int32_t x439 = INT32_MAX;
	int64_t x440 = -1LL;

	t97 = ((x437-x438)<(x439-x440));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = 308913;
	static uint8_t x442 = 17U;
	static int8_t x443 = -3;
	uint32_t x444 = 1532096U;
	int32_t t98 = 588148807;

	t98 = ((x441-x442)<(x443-x444));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x445 = 16065106LLU;
	volatile int32_t t99 = -94078900;

	t99 = ((x445-x446)<(x447-x448));

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

