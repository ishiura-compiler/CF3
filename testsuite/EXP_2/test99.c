#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 93U;
int8_t x3 = INT8_MIN;
int32_t x8 = INT32_MIN;
int32_t t1 = 3523886;
int8_t x9 = INT8_MIN;
static uint16_t x10 = 2436U;
static int32_t t3 = 141;
volatile int8_t x23 = -1;
volatile int16_t x24 = INT16_MIN;
int64_t x26 = INT64_MIN;
volatile int32_t x28 = -1;
static int32_t t7 = 14344847;
uint32_t x33 = UINT32_MAX;
int8_t x39 = -1;
static volatile int8_t x43 = INT8_MAX;
int32_t t10 = 30846024;
uint8_t x46 = UINT8_MAX;
int16_t x51 = -120;
uint8_t x70 = UINT8_MAX;
static int32_t t16 = 31705897;
int64_t x83 = 13399LL;
int8_t x85 = INT8_MIN;
volatile uint8_t x91 = UINT8_MAX;
int16_t x92 = -24;
int32_t x93 = INT32_MAX;
uint64_t x106 = 390032775LLU;
uint64_t x110 = UINT64_MAX;
int32_t t30 = -3797;
volatile int8_t x129 = INT8_MIN;
static uint16_t x134 = UINT16_MAX;
static uint64_t x139 = 792468349LLU;
int32_t x146 = -81899;
static int64_t x149 = 1004405LL;
volatile int32_t t36 = -120;
int8_t x156 = -1;
volatile int32_t t37 = 199729;
int8_t x163 = -1;
int8_t x167 = -1;
int16_t x168 = INT16_MIN;
static int32_t t40 = -29230;
int64_t x173 = INT64_MIN;
volatile int32_t x176 = INT32_MAX;
volatile int32_t t43 = 9755376;
volatile int32_t x182 = INT32_MAX;
int8_t x183 = INT8_MIN;
int32_t x192 = -121;
static int16_t x194 = -1;
int32_t t46 = 6264;
int32_t t47 = -78497;
volatile uint32_t x203 = UINT32_MAX;
int8_t x204 = INT8_MIN;
static uint16_t x205 = 1552U;
volatile int32_t t49 = -1371;
volatile uint16_t x214 = UINT16_MAX;
int64_t x216 = 15334259LL;
volatile uint32_t x219 = 226340U;
volatile int8_t x226 = INT8_MIN;
uint32_t x227 = UINT32_MAX;
int16_t x232 = -1;
int32_t x233 = INT32_MIN;
static int32_t t60 = 78;
static int64_t x254 = -1LL;
int64_t x256 = 1621131291868094LL;
int32_t t65 = -709592366;
volatile int64_t x279 = 34LL;
static int32_t x288 = -1;
int16_t x289 = INT16_MAX;
int8_t x290 = -3;
int32_t x292 = INT32_MAX;
static volatile uint8_t x300 = 109U;
static int16_t x302 = 1;
int32_t t72 = -77597574;
static int32_t x305 = 1129;
volatile int32_t t73 = -3;
volatile int32_t x309 = -1807356;
static int32_t x312 = INT32_MIN;
int32_t x314 = -1;
int16_t x319 = INT16_MAX;
int16_t x321 = INT16_MIN;
int64_t x327 = 91539384518LL;
int16_t x329 = INT16_MIN;
uint32_t x333 = 217U;
int16_t x335 = INT16_MAX;
static int32_t t80 = 13897;
uint32_t x338 = 24652U;
int8_t x341 = INT8_MIN;
static uint32_t x343 = 6U;
volatile int32_t t83 = -9;
volatile uint8_t x364 = 101U;
volatile uint16_t x365 = UINT16_MAX;
int64_t x368 = INT64_MIN;
static volatile int8_t x372 = 0;
static int32_t x376 = -10;
int32_t t90 = -2262;
int32_t x384 = 25;
int32_t t94 = -29246;
volatile int64_t x393 = INT64_MIN;
uint32_t x394 = 116045127U;
int64_t x403 = -1LL;
int32_t x409 = INT32_MIN;


void f0(void) {
	int8_t x1 = 31;
	static int32_t x4 = -1;
	volatile int32_t t0 = -533;

	t0 = ((x1==(x2+x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int32_t x6 = INT32_MAX;
	volatile int32_t x7 = INT32_MIN;

	t1 = ((x5==(x6+x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x11 = -1LL;
	volatile uint32_t x12 = 573610U;
	static int32_t t2 = -63519652;

	t2 = ((x9==(x10+x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int32_t x14 = -20;
	int32_t x15 = INT32_MAX;
	uint64_t x16 = 5001780081LLU;

	t3 = ((x13==(x14+x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 871U;
	volatile int16_t x18 = -1;
	int16_t x19 = 11064;
	static int64_t x20 = 89LL;
	volatile int32_t t4 = -10;

	t4 = ((x17==(x18+x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 53U;
	volatile int8_t x22 = INT8_MAX;
	int32_t t5 = 810839;

	t5 = ((x21==(x22+x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static int64_t x27 = INT64_MAX;
	int32_t t6 = -1;

	t6 = ((x25==(x26+x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;
	uint16_t x31 = 6U;
	volatile uint8_t x32 = UINT8_MAX;

	t7 = ((x29==(x30+x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x34 = INT8_MIN;
	uint8_t x35 = 5U;
	uint32_t x36 = 4036U;
	volatile int32_t t8 = 13721564;

	t8 = ((x33==(x34+x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = -1;
	uint64_t x38 = 42200340556280618LLU;
	volatile int32_t x40 = -1;
	static volatile int32_t t9 = 13072464;

	t9 = ((x37==(x38+x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = 124;
	int32_t x42 = -4306277;
	int32_t x44 = INT32_MIN;

	t10 = ((x41==(x42+x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int64_t x47 = 1971LL;
	volatile int8_t x48 = INT8_MIN;
	static int32_t t11 = -391;

	t11 = ((x45==(x46+x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 5472U;
	static int32_t x50 = -1;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 6089962;

	t12 = ((x49==(x50+x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 49U;
	uint64_t x54 = UINT64_MAX;
	volatile int64_t x55 = INT64_MAX;
	int32_t x56 = INT32_MAX;
	int32_t t13 = 6;

	t13 = ((x53==(x54+x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 598622030239767925LL;
	int32_t x58 = INT32_MIN;
	uint16_t x59 = 1U;
	int64_t x60 = 791678691742610LL;
	volatile int32_t t14 = 3368;

	t14 = ((x57==(x58+x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int32_t x62 = -1;
	volatile int8_t x63 = INT8_MAX;
	uint8_t x64 = 3U;
	int32_t t15 = -1;

	t15 = ((x61==(x62+x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	int64_t x72 = -1LL;

	t16 = ((x69==(x70+x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 5761U;
	int32_t x74 = INT32_MIN;
	static volatile int32_t x75 = 23255483;
	uint8_t x76 = 0U;
	int32_t t17 = 23947;

	t17 = ((x73==(x74+x75))==x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	int32_t x78 = INT32_MIN;
	int64_t x79 = -3740344534LL;
	volatile uint32_t x80 = 7222747U;
	int32_t t18 = -5752041;

	t18 = ((x77==(x78+x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = UINT8_MAX;
	uint8_t x82 = 1U;
	uint64_t x84 = UINT64_MAX;
	int32_t t19 = -28;

	t19 = ((x81==(x82+x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = 27;
	int64_t x87 = INT64_MIN;
	static int16_t x88 = INT16_MAX;
	volatile int32_t t20 = -143810;

	t20 = ((x85==(x86+x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 1U;
	int32_t x90 = INT32_MIN;
	volatile int32_t t21 = -418;

	t21 = ((x89==(x90+x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x94 = UINT8_MAX;
	int64_t x95 = -56LL;
	int32_t x96 = -1;
	volatile int32_t t22 = 23;

	t22 = ((x93==(x94+x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MAX;
	int32_t x100 = -1;
	volatile int32_t t23 = -803;

	t23 = ((x97==(x98+x99))==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -236256LL;
	static uint64_t x102 = 217948374734025LLU;
	volatile int8_t x103 = INT8_MIN;
	uint8_t x104 = 7U;
	volatile int32_t t24 = -38;

	t24 = ((x101==(x102+x103))==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MAX;
	int8_t x107 = INT8_MAX;
	int64_t x108 = -484946011096833LL;
	volatile int32_t t25 = 455237776;

	t25 = ((x105==(x106+x107))==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	int64_t x111 = -1LL;
	int16_t x112 = -1;
	int32_t t26 = 1774011;

	t26 = ((x109==(x110+x111))==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x113 = 1U;
	int16_t x114 = INT16_MAX;
	uint16_t x115 = 28541U;
	int64_t x116 = 67282985LL;
	int32_t t27 = -869;

	t27 = ((x113==(x114+x115))==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 3U;
	int8_t x118 = INT8_MIN;
	static int64_t x119 = -1LL;
	uint8_t x120 = UINT8_MAX;
	int32_t t28 = -1738;

	t28 = ((x117==(x118+x119))==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MAX;
	static int64_t x122 = 2LL;
	static volatile int32_t x123 = -144174562;
	int16_t x124 = INT16_MIN;
	int32_t t29 = -6035174;

	t29 = ((x121==(x122+x123))==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = 2370U;
	volatile int64_t x126 = -34053803905LL;
	uint8_t x127 = 16U;
	int64_t x128 = -1LL;

	t30 = ((x125==(x126+x127))==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x130 = -1;
	volatile int32_t x131 = 1;
	int32_t x132 = INT32_MIN;
	int32_t t31 = -88;

	t31 = ((x129==(x130+x131))==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = 3;
	volatile uint64_t x135 = 3390901465LLU;
	static uint64_t x136 = 2LLU;
	volatile int32_t t32 = 1;

	t32 = ((x133==(x134+x135))==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MAX;
	int8_t x138 = -1;
	int16_t x140 = 6;
	volatile int32_t t33 = -1890;

	t33 = ((x137==(x138+x139))==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = -1LL;
	int8_t x142 = -1;
	uint64_t x143 = 166921LLU;
	volatile uint32_t x144 = 543U;
	int32_t t34 = -34552;

	t34 = ((x141==(x142+x143))==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	uint32_t x147 = UINT32_MAX;
	static uint32_t x148 = UINT32_MAX;
	volatile int32_t t35 = -830913628;

	t35 = ((x145==(x146+x147))==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x150 = 176383;
	int8_t x151 = -44;
	static int16_t x152 = -1;

	t36 = ((x149==(x150+x151))==x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	int16_t x154 = INT16_MIN;
	volatile int16_t x155 = INT16_MIN;

	t37 = ((x153==(x154+x155))==x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = -1;
	int8_t x158 = -1;
	uint8_t x159 = 1U;
	uint32_t x160 = 13026U;
	int32_t t38 = 3;

	t38 = ((x157==(x158+x159))==x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = 1627306942374633160LL;
	uint8_t x162 = 8U;
	int16_t x164 = -1;
	static volatile int32_t t39 = 162362;

	t39 = ((x161==(x162+x163))==x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x165 = 19U;
	int16_t x166 = INT16_MIN;

	t40 = ((x165==(x166+x167))==x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MAX;
	static uint8_t x170 = 0U;
	int8_t x171 = INT8_MIN;
	volatile int16_t x172 = -1;
	int32_t t41 = 4523;

	t41 = ((x169==(x170+x171))==x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x174 = 101U;
	static volatile uint16_t x175 = 62U;
	volatile int32_t t42 = 27204;

	t42 = ((x173==(x174+x175))==x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MAX;
	uint32_t x179 = 10274U;
	static int8_t x180 = INT8_MIN;

	t43 = ((x177==(x178+x179))==x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	int16_t x184 = -1;
	volatile int32_t t44 = 0;

	t44 = ((x181==(x182+x183))==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x189 = 15;
	int16_t x190 = INT16_MAX;
	int16_t x191 = INT16_MIN;
	int32_t t45 = -106;

	t45 = ((x189==(x190+x191))==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -2;

	t46 = ((x193==(x194+x195))==x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	static uint8_t x198 = UINT8_MAX;
	int16_t x199 = -1;
	volatile uint32_t x200 = UINT32_MAX;

	t47 = ((x197==(x198+x199))==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	int8_t x202 = 0;
	int32_t t48 = 11;

	t48 = ((x201==(x202+x203))==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x206 = 4U;
	int16_t x207 = INT16_MIN;
	static uint64_t x208 = UINT64_MAX;

	t49 = ((x205==(x206+x207))==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x209 = 1U;
	uint8_t x210 = UINT8_MAX;
	uint64_t x211 = 8547952329574372LLU;
	static volatile int8_t x212 = INT8_MAX;
	volatile int32_t t50 = 1;

	t50 = ((x209==(x210+x211))==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -1LL;
	int32_t x215 = INT32_MIN;
	volatile int32_t t51 = 150572;

	t51 = ((x213==(x214+x215))==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x217 = 25U;
	uint8_t x218 = 4U;
	uint64_t x220 = 1262833607LLU;
	static int32_t t52 = 882;

	t52 = ((x217==(x218+x219))==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = 0;
	static volatile int16_t x222 = INT16_MIN;
	int16_t x223 = -1;
	static uint16_t x224 = 341U;
	int32_t t53 = 980;

	t53 = ((x221==(x222+x223))==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MAX;
	static volatile int64_t x228 = 472LL;
	int32_t t54 = -22471894;

	t54 = ((x225==(x226+x227))==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x229 = INT8_MAX;
	volatile uint8_t x230 = 124U;
	static int32_t x231 = -1;
	int32_t t55 = 174;

	t55 = ((x229==(x230+x231))==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	volatile int16_t x236 = INT16_MIN;
	static int32_t t56 = 140335510;

	t56 = ((x233==(x234+x235))==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = UINT8_MAX;
	int64_t x238 = INT64_MAX;
	uint64_t x239 = UINT64_MAX;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t57 = 73;

	t57 = ((x237==(x238+x239))==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = 82U;
	int8_t x242 = -7;
	uint32_t x243 = 13U;
	uint64_t x244 = 70746695LLU;
	static int32_t t58 = 796301;

	t58 = ((x241==(x242+x243))==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = 15808LLU;
	volatile uint8_t x246 = 38U;
	int16_t x247 = INT16_MAX;
	static int64_t x248 = INT64_MIN;
	volatile int32_t t59 = -24;

	t59 = ((x245==(x246+x247))==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MIN;
	volatile int64_t x250 = -1LL;
	uint32_t x251 = 608U;
	int64_t x252 = INT64_MIN;

	t60 = ((x249==(x250+x251))==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x253 = -1;
	int64_t x255 = -1LL;
	volatile int32_t t61 = 8731327;

	t61 = ((x253==(x254+x255))==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 2202772LLU;
	uint32_t x258 = 0U;
	int16_t x259 = -272;
	int64_t x260 = INT64_MIN;
	int32_t t62 = -696345;

	t62 = ((x257==(x258+x259))==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x261 = 1053;
	static uint16_t x262 = 6948U;
	int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MAX;
	int32_t t63 = -81251524;

	t63 = ((x261==(x262+x263))==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = 281392599476LL;
	int64_t x266 = 2628363989720712491LL;
	int64_t x267 = INT64_MIN;
	volatile int8_t x268 = -2;
	volatile int32_t t64 = 18148375;

	t64 = ((x265==(x266+x267))==x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 32U;
	volatile uint16_t x270 = UINT16_MAX;
	int16_t x271 = -1;
	int8_t x272 = 1;

	t65 = ((x269==(x270+x271))==x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = 107125090;
	int16_t x274 = INT16_MIN;
	volatile uint16_t x275 = 123U;
	uint32_t x276 = 842913350U;
	static volatile int32_t t66 = 5;

	t66 = ((x273==(x274+x275))==x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	int32_t x278 = 9;
	int64_t x280 = INT64_MAX;
	static int32_t t67 = 562336;

	t67 = ((x277==(x278+x279))==x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = 1984590LLU;
	int16_t x282 = INT16_MIN;
	static int64_t x283 = 27395729LL;
	int32_t x284 = INT32_MIN;
	volatile int32_t t68 = 240804;

	t68 = ((x281==(x282+x283))==x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	int32_t x286 = 15220238;
	volatile int8_t x287 = -32;
	int32_t t69 = 53813;

	t69 = ((x285==(x286+x287))==x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x291 = -1;
	int32_t t70 = 16825610;

	t70 = ((x289==(x290+x291))==x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MAX;
	uint64_t x299 = 0LLU;
	int32_t t71 = -1496139;

	t71 = ((x297==(x298+x299))==x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x301 = 21;
	int64_t x303 = 12068736679LL;
	int32_t x304 = INT32_MIN;

	t72 = ((x301==(x302+x303))==x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x306 = UINT8_MAX;
	volatile uint64_t x307 = UINT64_MAX;
	int64_t x308 = 58927156819900578LL;

	t73 = ((x305==(x306+x307))==x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x310 = INT8_MAX;
	static int8_t x311 = INT8_MIN;
	int32_t t74 = -5880;

	t74 = ((x309==(x310+x311))==x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x313 = UINT32_MAX;
	static uint16_t x315 = 0U;
	int16_t x316 = INT16_MAX;
	volatile int32_t t75 = -92;

	t75 = ((x313==(x314+x315))==x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x317 = 0;
	int8_t x318 = -1;
	static volatile uint16_t x320 = UINT16_MAX;
	static volatile int32_t t76 = 1224;

	t76 = ((x317==(x318+x319))==x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x322 = 0;
	volatile int64_t x323 = 3834592373445924390LL;
	static uint8_t x324 = UINT8_MAX;
	int32_t t77 = -174228038;

	t77 = ((x321==(x322+x323))==x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MAX;
	uint8_t x326 = UINT8_MAX;
	int8_t x328 = 1;
	int32_t t78 = 204810;

	t78 = ((x325==(x326+x327))==x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x330 = -1;
	int64_t x331 = 956688496LL;
	volatile int64_t x332 = 355LL;
	volatile int32_t t79 = 137062498;

	t79 = ((x329==(x330+x331))==x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x334 = INT64_MIN;
	volatile uint16_t x336 = 0U;

	t80 = ((x333==(x334+x335))==x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 156U;
	volatile int32_t x339 = 910210;
	int16_t x340 = INT16_MIN;
	int32_t t81 = 32075;

	t81 = ((x337==(x338+x339))==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x342 = 0U;
	uint16_t x344 = 1U;
	static int32_t t82 = 5;

	t82 = ((x341==(x342+x343))==x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = UINT8_MAX;
	int8_t x346 = 0;
	uint8_t x347 = 13U;
	int8_t x348 = INT8_MIN;

	t83 = ((x345==(x346+x347))==x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = INT8_MAX;
	static uint8_t x350 = UINT8_MAX;
	int8_t x351 = INT8_MIN;
	int64_t x352 = 38LL;
	static int32_t t84 = -755293;

	t84 = ((x349==(x350+x351))==x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x353 = 33326718031282952LLU;
	uint64_t x354 = UINT64_MAX;
	uint16_t x355 = 8412U;
	volatile uint8_t x356 = 59U;
	volatile int32_t t85 = 27;

	t85 = ((x353==(x354+x355))==x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = 3U;
	volatile int32_t x358 = INT32_MIN;
	uint64_t x359 = 72368172564LLU;
	int16_t x360 = 0;
	volatile int32_t t86 = 2;

	t86 = ((x357==(x358+x359))==x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x361 = 6U;
	int8_t x362 = INT8_MAX;
	int32_t x363 = -3;
	static int32_t t87 = 43740505;

	t87 = ((x361==(x362+x363))==x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x366 = INT16_MIN;
	int64_t x367 = -1LL;
	volatile int32_t t88 = -989512;

	t88 = ((x365==(x366+x367))==x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 2042981175LLU;
	volatile uint64_t x370 = 77LLU;
	volatile int8_t x371 = 1;
	static int32_t t89 = 0;

	t89 = ((x369==(x370+x371))==x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x373 = 27793464LLU;
	int64_t x374 = 51161964394211410LL;
	uint64_t x375 = 4036902322456487LLU;

	t90 = ((x373==(x374+x375))==x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MIN;
	int64_t x378 = -595408637695369154LL;
	static uint64_t x379 = 116019197915LLU;
	uint8_t x380 = 2U;
	volatile int32_t t91 = -8;

	t91 = ((x377==(x378+x379))==x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x381 = INT16_MIN;
	int32_t x382 = 466;
	uint64_t x383 = 428006365896891640LLU;
	static volatile int32_t t92 = 776732;

	t92 = ((x381==(x382+x383))==x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = -1;
	int16_t x386 = INT16_MIN;
	volatile int64_t x387 = -5LL;
	int32_t x388 = -183;
	int32_t t93 = 3341;

	t93 = ((x385==(x386+x387))==x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = -1;
	static uint64_t x390 = 216405LLU;
	int16_t x391 = -1;
	volatile uint16_t x392 = 24990U;

	t94 = ((x389==(x390+x391))==x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x395 = INT8_MIN;
	static volatile uint64_t x396 = 3716904251719085LLU;
	int32_t t95 = 136776;

	t95 = ((x393==(x394+x395))==x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = 1773;
	static int64_t x398 = 64293864LL;
	int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t96 = -7910;

	t96 = ((x397==(x398+x399))==x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MAX;
	int32_t x402 = 3992;
	volatile int8_t x404 = INT8_MAX;
	int32_t t97 = -3483468;

	t97 = ((x401==(x402+x403))==x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	int16_t x406 = -3;
	uint32_t x407 = 0U;
	int8_t x408 = 4;
	int32_t t98 = -928970216;

	t98 = ((x405==(x406+x407))==x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x410 = -20467LL;
	int32_t x411 = -290628;
	int8_t x412 = INT8_MIN;
	int32_t t99 = -13894;

	t99 = ((x409==(x410+x411))==x412);

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

