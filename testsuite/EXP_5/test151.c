#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
static int64_t x3 = INT64_MAX;
int32_t x4 = -445899;
uint16_t x8 = UINT16_MAX;
volatile int32_t t1 = 602;
volatile int64_t x12 = -1LL;
int16_t x28 = 12089;
static int32_t t5 = -67082537;
volatile uint32_t x35 = UINT32_MAX;
int32_t x44 = INT32_MIN;
volatile int64_t x45 = INT64_MIN;
volatile int32_t x48 = -538;
int8_t x51 = INT8_MIN;
int8_t x52 = INT8_MIN;
volatile int32_t t11 = -48;
static uint8_t x59 = 1U;
volatile int32_t t13 = -94147850;
int16_t x67 = INT16_MIN;
int32_t t15 = -6;
uint16_t x73 = 0U;
int8_t x76 = INT8_MIN;
int16_t x79 = -4;
uint64_t x90 = 235LLU;
int8_t x97 = -1;
static uint32_t x102 = UINT32_MAX;
volatile int32_t t27 = 0;
static volatile uint64_t x126 = UINT64_MAX;
int64_t x127 = 3978476174LL;
volatile int8_t x128 = INT8_MAX;
int32_t t28 = 14294133;
volatile int32_t t30 = 2;
int16_t x150 = -1;
static int32_t x151 = -1;
volatile uint32_t x152 = 0U;
uint8_t x157 = UINT8_MAX;
int8_t x158 = INT8_MIN;
int32_t x167 = INT32_MAX;
int64_t x170 = INT64_MIN;
static int32_t t38 = 2;
static int64_t x173 = INT64_MIN;
uint8_t x180 = UINT8_MAX;
int8_t x181 = 1;
int16_t x185 = INT16_MIN;
static uint16_t x186 = 985U;
int32_t t42 = 43;
volatile int16_t x194 = -7098;
static int32_t x201 = -1;
int64_t x213 = INT64_MIN;
int32_t t49 = 1;
static int64_t x217 = 0LL;
uint64_t x222 = UINT64_MAX;
volatile int32_t t51 = 7;
static uint32_t x226 = UINT32_MAX;
volatile int16_t x227 = -1;
static int32_t t52 = -7;
volatile int64_t x243 = -1LL;
uint64_t x251 = 1169905700LLU;
int32_t x258 = -1;
volatile int32_t t59 = 0;
volatile uint32_t x266 = 2U;
static volatile uint8_t x267 = UINT8_MAX;
int64_t x276 = 3288449LL;
volatile int64_t x279 = INT64_MIN;
volatile int32_t t63 = 57484;
volatile int32_t x283 = INT32_MIN;
static uint32_t x285 = 2962U;
static uint64_t x290 = 326386543658847982LLU;
int32_t t67 = 15496;
int16_t x307 = INT16_MIN;
static int32_t x312 = INT32_MIN;
uint16_t x316 = UINT16_MAX;
static uint64_t x321 = 374033442345LLU;
static uint16_t x322 = 17017U;
static int32_t x324 = -1;
static uint8_t x328 = 13U;
volatile int32_t t74 = 77754;
int8_t x340 = -1;
int32_t t78 = -133010;
int16_t x350 = INT16_MIN;
volatile int64_t x352 = 496281332581458702LL;
int32_t x355 = INT32_MIN;
int8_t x364 = 1;
static int32_t x367 = -1509;
volatile int32_t t83 = -65493404;
uint16_t x378 = UINT16_MAX;
int8_t x386 = -1;
int32_t x392 = INT32_MIN;
volatile int64_t x393 = INT64_MAX;
int32_t x394 = -1;
static int16_t x397 = INT16_MAX;
int32_t x399 = INT32_MIN;
static int8_t x401 = 2;
volatile uint32_t x402 = 9763159U;
uint16_t x410 = 6U;
static uint64_t x412 = UINT64_MAX;
static uint16_t x414 = 3533U;
volatile int16_t x415 = -6;
uint32_t x416 = 192521U;
int64_t x418 = 2225763690392222LL;
uint16_t x424 = 5U;
int32_t t98 = 1798;
static volatile int8_t x429 = -1;
volatile int32_t x430 = -1;


void f0(void) {
	int64_t x2 = -1LL;
	volatile int32_t t0 = -1167;

	t0 = (x1==((x2+x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	static volatile int32_t x6 = 15449;
	int8_t x7 = -1;

	t1 = (x5==((x6+x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	int32_t x11 = INT32_MAX;
	static int32_t t2 = -3998;

	t2 = (x9==((x10+x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 9242262;
	static volatile uint64_t x14 = UINT64_MAX;
	uint64_t x15 = 1116274477032062857LLU;
	static volatile int8_t x16 = -1;
	volatile int32_t t3 = -3;

	t3 = (x13==((x14+x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int64_t x22 = 894LL;
	uint64_t x23 = UINT64_MAX;
	static int64_t x24 = 3378195709LL;
	int32_t t4 = 33553777;

	t4 = (x21==((x22+x23)|x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	uint64_t x26 = 168745025LLU;
	int16_t x27 = INT16_MIN;

	t5 = (x25==((x26+x27)|x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 28U;
	volatile uint16_t x30 = 6U;
	uint8_t x31 = 4U;
	static int32_t x32 = INT32_MIN;
	int32_t t6 = 4515;

	t6 = (x29==((x30+x31)|x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = INT8_MIN;
	int32_t x34 = 10237;
	uint16_t x36 = UINT16_MAX;
	int32_t t7 = -2;

	t7 = (x33==((x34+x35)|x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	volatile uint64_t x38 = UINT64_MAX;
	int32_t x39 = -5624398;
	uint64_t x40 = UINT64_MAX;
	static volatile int32_t t8 = 4808;

	t8 = (x37==((x38+x39)|x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x41 = 44U;
	uint16_t x42 = 1206U;
	int64_t x43 = -37LL;
	int32_t t9 = 48097400;

	t9 = (x41==((x42+x43)|x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x46 = UINT32_MAX;
	uint16_t x47 = 1U;
	static int32_t t10 = 37736;

	t10 = (x45==((x46+x47)|x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 537;
	uint64_t x50 = 344278291LLU;

	t11 = (x49==((x50+x51)|x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = INT8_MIN;
	uint64_t x58 = UINT64_MAX;
	uint8_t x60 = UINT8_MAX;
	static volatile int32_t t12 = 11732;

	t12 = (x57==((x58+x59)|x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MIN;
	volatile int64_t x63 = -1506055746LL;
	volatile uint64_t x64 = UINT64_MAX;

	t13 = (x61==((x62+x63)|x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 177857544U;
	int64_t x66 = INT64_MAX;
	volatile int16_t x68 = 3;
	volatile int32_t t14 = 1;

	t14 = (x65==((x66+x67)|x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = 0;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MAX;

	t15 = (x69==((x70+x71)|x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x74 = 1U;
	volatile uint32_t x75 = 4070795U;
	volatile int32_t t16 = 104691;

	t16 = (x73==((x74+x75)|x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	int16_t x78 = INT16_MIN;
	int32_t x80 = -54846;
	int32_t t17 = 5221509;

	t17 = (x77==((x78+x79)|x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x81 = -2;
	uint16_t x82 = UINT16_MAX;
	int64_t x83 = -17552LL;
	volatile int32_t x84 = INT32_MAX;
	static int32_t t18 = -5222965;

	t18 = (x81==((x82+x83)|x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x85 = -1;
	static uint64_t x86 = UINT64_MAX;
	int16_t x87 = INT16_MAX;
	volatile int16_t x88 = INT16_MAX;
	int32_t t19 = -63626;

	t19 = (x85==((x86+x87)|x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = 0;
	static uint64_t x91 = 4LLU;
	int64_t x92 = -1LL;
	static volatile int32_t t20 = 0;

	t20 = (x89==((x90+x91)|x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = UINT32_MAX;
	uint64_t x94 = 49568199LLU;
	static int32_t x95 = 51;
	int8_t x96 = -1;
	int32_t t21 = 168;

	t21 = (x93==((x94+x95)|x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x98 = -105615392LL;
	int32_t x99 = INT32_MIN;
	int32_t x100 = INT32_MAX;
	volatile int32_t t22 = -32093526;

	t22 = (x97==((x98+x99)|x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	static int64_t x103 = -1LL;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t23 = 15076508;

	t23 = (x101==((x102+x103)|x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	static volatile int32_t x106 = -66225252;
	uint8_t x107 = 55U;
	volatile int32_t x108 = -197086097;
	int32_t t24 = -878204;

	t24 = (x105==((x106+x107)|x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MIN;
	int32_t x111 = 5;
	uint8_t x112 = 41U;
	static volatile int32_t t25 = -5717175;

	t25 = (x109==((x110+x111)|x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MAX;
	static uint8_t x114 = 2U;
	volatile int32_t x115 = INT32_MIN;
	int8_t x116 = -1;
	volatile int32_t t26 = -10095204;

	t26 = (x113==((x114+x115)|x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = -3983;
	volatile uint8_t x122 = 0U;
	uint16_t x123 = 23845U;
	static volatile int32_t x124 = 802073;

	t27 = (x121==((x122+x123)|x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -3;

	t28 = (x125==((x126+x127)|x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x129 = 1981LLU;
	int32_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t29 = -3230;

	t29 = (x129==((x130+x131)|x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 781U;
	uint8_t x134 = UINT8_MAX;
	volatile uint8_t x135 = UINT8_MAX;
	int64_t x136 = INT64_MIN;

	t30 = (x133==((x134+x135)|x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MAX;
	static int64_t x139 = INT64_MIN;
	static int32_t x140 = INT32_MAX;
	int32_t t31 = 193087;

	t31 = (x137==((x138+x139)|x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MIN;
	int64_t x143 = 120605014LL;
	static uint8_t x144 = 2U;
	volatile int32_t t32 = 4045027;

	t32 = (x141==((x142+x143)|x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int32_t t33 = 42;

	t33 = (x149==((x150+x151)|x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x153 = INT16_MAX;
	uint8_t x154 = UINT8_MAX;
	static uint16_t x155 = UINT16_MAX;
	int64_t x156 = INT64_MIN;
	int32_t t34 = -128730;

	t34 = (x153==((x154+x155)|x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x159 = 59U;
	volatile int64_t x160 = -1LL;
	static volatile int32_t t35 = -1588;

	t35 = (x157==((x158+x159)|x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MIN;
	int16_t x162 = -1;
	uint8_t x163 = 2U;
	int8_t x164 = INT8_MIN;
	int32_t t36 = -11;

	t36 = (x161==((x162+x163)|x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x165 = UINT32_MAX;
	static volatile uint32_t x166 = 23215611U;
	static int16_t x168 = INT16_MAX;
	volatile int32_t t37 = 208085;

	t37 = (x165==((x166+x167)|x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x169 = 338;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = -1LL;

	t38 = (x169==((x170+x171)|x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x174 = 7293877218381LLU;
	int64_t x175 = INT64_MAX;
	int8_t x176 = INT8_MIN;
	int32_t t39 = 838;

	t39 = (x173==((x174+x175)|x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MIN;
	int16_t x179 = INT16_MIN;
	int32_t t40 = -37741;

	t40 = (x177==((x178+x179)|x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x182 = INT8_MIN;
	int64_t x183 = INT64_MAX;
	int32_t x184 = -1;
	int32_t t41 = -443419405;

	t41 = (x181==((x182+x183)|x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x187 = 807004388172811866LLU;
	uint8_t x188 = 27U;

	t42 = (x185==((x186+x187)|x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x189 = 2LLU;
	static volatile int16_t x190 = INT16_MIN;
	int16_t x191 = INT16_MIN;
	int64_t x192 = -1LL;
	static int32_t t43 = -21;

	t43 = (x189==((x190+x191)|x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = 3848488051660LLU;
	volatile int8_t x195 = INT8_MIN;
	uint32_t x196 = 6U;
	int32_t t44 = -321;

	t44 = (x193==((x194+x195)|x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = -1;
	uint64_t x198 = 1062LLU;
	uint16_t x199 = 362U;
	volatile int16_t x200 = -380;
	int32_t t45 = 106462236;

	t45 = (x197==((x198+x199)|x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MAX;
	int64_t x204 = INT64_MIN;
	int32_t t46 = -29595;

	t46 = (x201==((x202+x203)|x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x205 = 897735305621397353LLU;
	int32_t x206 = -49225;
	volatile int64_t x207 = INT64_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t47 = 15432149;

	t47 = (x205==((x206+x207)|x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x209 = -1LL;
	uint8_t x210 = 4U;
	int16_t x211 = INT16_MAX;
	static int16_t x212 = -1;
	volatile int32_t t48 = 0;

	t48 = (x209==((x210+x211)|x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x214 = 755;
	static uint32_t x215 = UINT32_MAX;
	int16_t x216 = 0;

	t49 = (x213==((x214+x215)|x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x218 = -1;
	int16_t x219 = INT16_MAX;
	int16_t x220 = 248;
	static int32_t t50 = 15291079;

	t50 = (x217==((x218+x219)|x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	volatile int32_t x223 = INT32_MIN;
	static int64_t x224 = 1618447LL;

	t51 = (x221==((x222+x223)|x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x225 = INT64_MIN;
	static volatile int64_t x228 = -3251905LL;

	t52 = (x225==((x226+x227)|x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x229 = 47U;
	int8_t x230 = INT8_MIN;
	int64_t x231 = -1LL;
	volatile uint16_t x232 = 11781U;
	int32_t t53 = -1;

	t53 = (x229==((x230+x231)|x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = INT8_MIN;
	volatile int32_t x234 = 322;
	uint32_t x235 = 78149U;
	int32_t x236 = INT32_MIN;
	int32_t t54 = 0;

	t54 = (x233==((x234+x235)|x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = 2;
	uint8_t x238 = 42U;
	volatile uint8_t x239 = 0U;
	int32_t x240 = INT32_MIN;
	volatile int32_t t55 = 51;

	t55 = (x237==((x238+x239)|x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = -1;
	volatile uint8_t x244 = UINT8_MAX;
	static int32_t t56 = -2;

	t56 = (x241==((x242+x243)|x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x249 = INT64_MIN;
	static volatile uint16_t x250 = UINT16_MAX;
	int64_t x252 = INT64_MIN;
	volatile int32_t t57 = -56089;

	t57 = (x249==((x250+x251)|x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x254 = INT16_MAX;
	int32_t x255 = 146364;
	volatile int32_t x256 = INT32_MIN;
	static int32_t t58 = -258898518;

	t58 = (x253==((x254+x255)|x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x257 = -146LL;
	static int16_t x259 = -1;
	static int8_t x260 = 2;

	t59 = (x257==((x258+x259)|x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = -52;
	uint64_t x262 = 15510566332661899LLU;
	uint32_t x263 = 232987011U;
	uint64_t x264 = 15907360LLU;
	volatile int32_t t60 = -27889;

	t60 = (x261==((x262+x263)|x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = -141;
	int64_t x268 = 14197LL;
	int32_t t61 = 4105248;

	t61 = (x265==((x266+x267)|x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x273 = UINT16_MAX;
	uint64_t x274 = 19581LLU;
	int64_t x275 = INT64_MAX;
	int32_t t62 = 797527381;

	t62 = (x273==((x274+x275)|x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x277 = UINT64_MAX;
	static volatile int32_t x278 = 24722;
	uint64_t x280 = 1565884607626LLU;

	t63 = (x277==((x278+x279)|x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = 2;
	uint16_t x284 = 47U;
	int32_t t64 = -4;

	t64 = (x281==((x282+x283)|x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x286 = 44U;
	int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MAX;
	volatile int32_t t65 = 33723672;

	t65 = (x285==((x286+x287)|x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x289 = -9;
	int8_t x291 = INT8_MIN;
	int64_t x292 = 2754799347295259LL;
	static volatile int32_t t66 = 15;

	t66 = (x289==((x290+x291)|x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MAX;
	int8_t x294 = -1;
	uint16_t x295 = 1U;
	volatile int64_t x296 = INT64_MAX;

	t67 = (x293==((x294+x295)|x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = INT16_MAX;
	volatile int32_t x302 = 0;
	uint16_t x303 = UINT16_MAX;
	static int8_t x304 = INT8_MIN;
	volatile int32_t t68 = 7543771;

	t68 = (x301==((x302+x303)|x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x305 = INT64_MIN;
	int32_t x306 = 275701;
	int8_t x308 = 1;
	volatile int32_t t69 = -52182;

	t69 = (x305==((x306+x307)|x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = -1;
	uint32_t x310 = 218U;
	uint8_t x311 = 0U;
	static volatile int32_t t70 = -3518707;

	t70 = (x309==((x310+x311)|x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MAX;
	int8_t x315 = INT8_MIN;
	volatile int32_t t71 = 10907641;

	t71 = (x313==((x314+x315)|x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = 0LL;
	int16_t x319 = -7;
	int64_t x320 = INT64_MIN;
	int32_t t72 = -156460;

	t72 = (x317==((x318+x319)|x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x323 = INT64_MIN;
	static int32_t t73 = 56;

	t73 = (x321==((x322+x323)|x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;

	t74 = (x325==((x326+x327)|x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x333 = -1;
	static uint64_t x334 = 87391031LLU;
	int64_t x335 = -1LL;
	static int32_t x336 = INT32_MIN;
	int32_t t75 = 271023081;

	t75 = (x333==((x334+x335)|x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x337 = 4U;
	int64_t x338 = -1LL;
	volatile int16_t x339 = INT16_MAX;
	volatile int32_t t76 = -892;

	t76 = (x337==((x338+x339)|x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = -1;
	int32_t x342 = -1;
	int64_t x343 = -706677700LL;
	int16_t x344 = INT16_MAX;
	static int32_t t77 = 11413406;

	t77 = (x341==((x342+x343)|x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x345 = 233536787;
	int64_t x346 = -4552076952015663812LL;
	static volatile int32_t x347 = INT32_MAX;
	volatile int32_t x348 = 1333;

	t78 = (x345==((x346+x347)|x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x349 = INT32_MIN;
	int16_t x351 = -127;
	int32_t t79 = 1;

	t79 = (x349==((x350+x351)|x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x353 = INT64_MIN;
	volatile int32_t x354 = INT32_MAX;
	static int64_t x356 = -1LL;
	volatile int32_t t80 = -3062566;

	t80 = (x353==((x354+x355)|x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x357 = 49U;
	volatile uint32_t x358 = 191U;
	int32_t x359 = -1;
	uint64_t x360 = 57239497LLU;
	volatile int32_t t81 = 414;

	t81 = (x357==((x358+x359)|x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x361 = -1;
	volatile int32_t x362 = -236471660;
	static int32_t x363 = 179;
	volatile int32_t t82 = -4765234;

	t82 = (x361==((x362+x363)|x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x365 = 96U;
	int32_t x366 = -262623;
	int16_t x368 = INT16_MAX;

	t83 = (x365==((x366+x367)|x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = 1265271456262LLU;
	int8_t x370 = 1;
	static int32_t x371 = -1;
	int16_t x372 = INT16_MAX;
	volatile int32_t t84 = 45342;

	t84 = (x369==((x370+x371)|x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x373 = UINT16_MAX;
	int32_t x374 = INT32_MIN;
	volatile int64_t x375 = 192LL;
	volatile int32_t x376 = INT32_MAX;
	volatile int32_t t85 = 233;

	t85 = (x373==((x374+x375)|x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = 738LL;
	uint64_t x379 = 255203902454745221LLU;
	int16_t x380 = 623;
	static volatile int32_t t86 = -43472743;

	t86 = (x377==((x378+x379)|x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x381 = 6125;
	uint8_t x382 = UINT8_MAX;
	uint16_t x383 = UINT16_MAX;
	static uint64_t x384 = UINT64_MAX;
	int32_t t87 = 51981798;

	t87 = (x381==((x382+x383)|x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = 33U;
	int16_t x387 = 249;
	int64_t x388 = INT64_MIN;
	volatile int32_t t88 = 1;

	t88 = (x385==((x386+x387)|x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x389 = 1LL;
	uint8_t x390 = UINT8_MAX;
	int32_t x391 = INT32_MIN;
	static int32_t t89 = 152547;

	t89 = (x389==((x390+x391)|x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x395 = 4;
	int64_t x396 = -1683669LL;
	volatile int32_t t90 = -1;

	t90 = (x393==((x394+x395)|x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x398 = 65551U;
	int32_t x400 = INT32_MIN;
	int32_t t91 = 4032;

	t91 = (x397==((x398+x399)|x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x403 = -1;
	int16_t x404 = INT16_MAX;
	int32_t t92 = 0;

	t92 = (x401==((x402+x403)|x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MIN;
	static uint8_t x406 = 113U;
	static int16_t x407 = INT16_MIN;
	volatile uint8_t x408 = 2U;
	int32_t t93 = -25;

	t93 = (x405==((x406+x407)|x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = 31U;
	int64_t x411 = INT64_MIN;
	int32_t t94 = 4446016;

	t94 = (x409==((x410+x411)|x412));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = -1;
	int32_t t95 = 333;

	t95 = (x413==((x414+x415)|x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = INT64_MIN;
	int16_t x419 = INT16_MIN;
	int64_t x420 = INT64_MIN;
	volatile int32_t t96 = -120593;

	t96 = (x417==((x418+x419)|x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x421 = 59U;
	int8_t x422 = 3;
	int16_t x423 = INT16_MIN;
	volatile int32_t t97 = 2;

	t97 = (x421==((x422+x423)|x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x425 = 805617571U;
	int32_t x426 = INT32_MAX;
	volatile int64_t x427 = -130650432853603LL;
	int64_t x428 = -1LL;

	t98 = (x425==((x426+x427)|x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x431 = INT8_MAX;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t99 = 0;

	t99 = (x429==((x430+x431)|x432));

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

