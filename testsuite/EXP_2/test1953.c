#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t1 = 178971135U;
uint8_t x11 = UINT8_MAX;
int32_t x17 = 2448755;
int32_t x22 = -1;
static volatile uint64_t x24 = 102604572099LLU;
volatile uint64_t t5 = 6532070747LLU;
volatile uint64_t x30 = UINT64_MAX;
uint16_t x31 = 624U;
uint32_t x32 = 86U;
static int32_t x35 = INT32_MAX;
uint16_t x38 = 5992U;
int8_t x40 = INT8_MAX;
int8_t x48 = 5;
static volatile int32_t t11 = 170782454;
uint8_t x52 = 22U;
volatile int8_t x57 = INT8_MIN;
uint16_t x58 = UINT16_MAX;
int64_t x62 = -1LL;
int8_t x63 = -1;
int8_t x65 = 6;
static uint64_t x67 = 2845006811021LLU;
int16_t x76 = INT16_MIN;
int8_t x80 = INT8_MIN;
int32_t x89 = -1935186;
uint32_t x90 = 24939U;
int32_t t22 = -6407520;
int64_t x93 = -57502436496LL;
int16_t x95 = INT16_MIN;
static int16_t x102 = INT16_MAX;
volatile uint64_t x116 = 2360553788191LLU;
uint64_t t28 = 56LLU;
volatile uint16_t x119 = 62U;
static int16_t x124 = INT16_MIN;
volatile int64_t x126 = 58566009456LL;
static int64_t t31 = 24203538729LL;
volatile uint32_t x141 = UINT32_MAX;
static int32_t t35 = -693;
static uint16_t x147 = UINT16_MAX;
volatile int8_t x150 = INT8_MIN;
volatile int32_t t37 = -21;
static int32_t x155 = INT32_MAX;
uint64_t t38 = 10LLU;
int16_t x157 = INT16_MAX;
uint32_t x158 = 283039U;
int32_t x159 = INT32_MIN;
int8_t x164 = 1;
int32_t t40 = 34;
uint64_t x171 = 8935599LLU;
volatile int32_t x173 = INT32_MIN;
int8_t x175 = -22;
int64_t x187 = -156535982794098LL;
volatile int32_t x188 = INT32_MIN;
volatile int64_t x190 = INT64_MAX;
static int32_t t47 = 0;
int32_t t48 = -361;
int64_t x199 = -663LL;
uint32_t x200 = 148U;
static volatile int8_t x209 = -21;
int32_t x210 = 51397841;
int32_t t53 = 2702;
static int32_t x223 = -218534772;
uint16_t x226 = UINT16_MAX;
uint64_t x227 = UINT64_MAX;
uint32_t x229 = UINT32_MAX;
static int32_t x230 = INT32_MIN;
int32_t t58 = 5456004;
volatile uint16_t x240 = UINT16_MAX;
static volatile int32_t t59 = 0;
static int32_t x244 = 5;
volatile int32_t x245 = INT32_MIN;
int64_t x246 = INT64_MIN;
static int64_t x251 = INT64_MIN;
int32_t x252 = INT32_MIN;
int16_t x262 = INT16_MAX;
int32_t x266 = -1;
static int8_t x269 = INT8_MIN;
volatile uint32_t t68 = 5255906U;
uint64_t x282 = 603258LLU;
uint64_t t72 = 1552467178158683241LLU;
int16_t x293 = 50;
uint32_t x296 = UINT32_MAX;
uint8_t x305 = UINT8_MAX;
static volatile int64_t x315 = INT64_MIN;
static int8_t x316 = -1;
uint64_t x321 = 66287LLU;
static uint32_t x322 = 3U;
volatile uint32_t t80 = 1780U;
int64_t x331 = -1LL;
volatile int32_t t83 = -8;
int32_t x337 = -1;
int8_t x339 = -1;
volatile int32_t t84 = -30582284;
static int32_t t86 = 56490;
uint16_t x349 = 4U;
int8_t x351 = 1;
uint64_t x352 = 6276296LLU;
uint64_t t87 = 1943876217636430314LLU;
static volatile int8_t x354 = -1;
uint8_t x360 = UINT8_MAX;
int16_t x362 = 3791;
int32_t t90 = -207;
int16_t x365 = INT16_MIN;
int16_t x370 = -11;
volatile int64_t x373 = -1LL;
static volatile int32_t t93 = 55;
int16_t x393 = -253;
static volatile uint32_t x395 = 2254U;
int8_t x400 = INT8_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = -1;
	volatile uint8_t x3 = UINT8_MAX;
	uint32_t x4 = 2U;
	uint32_t t0 = 1U;

	t0 = ((x1==(x2|x3))*x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int8_t x6 = 2;
	uint8_t x7 = UINT8_MAX;
	uint32_t x8 = 1564087U;

	t1 = ((x5==(x6|x7))*x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = 283095;
	uint16_t x10 = 5581U;
	volatile int64_t x12 = -1LL;
	volatile int64_t t2 = 25135082385LL;

	t2 = ((x9==(x10|x11))*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 50U;
	volatile int8_t x14 = -11;
	int16_t x15 = INT16_MAX;
	int16_t x16 = -1;
	volatile int32_t t3 = 16939698;

	t3 = ((x13==(x14|x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 14975U;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 346U;
	static volatile int32_t t4 = 61099373;

	t4 = ((x17==(x18|x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 7138U;
	int16_t x23 = INT16_MAX;

	t5 = ((x21==(x22|x23))*x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static uint64_t x26 = 8618371046966939352LLU;
	volatile int8_t x27 = INT8_MAX;
	volatile int32_t x28 = INT32_MAX;
	static int32_t t6 = 89031901;

	t6 = ((x25==(x26|x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile uint32_t t7 = 3153U;

	t7 = ((x29==(x30|x31))*x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static volatile int16_t x34 = -1;
	uint8_t x36 = 61U;
	volatile int32_t t8 = 826653512;

	t8 = ((x33==(x34|x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int32_t x39 = INT32_MIN;
	static int32_t t9 = -230503;

	t9 = ((x37==(x38|x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = -1LL;
	int8_t x42 = INT8_MIN;
	int16_t x43 = 0;
	static volatile int8_t x44 = 0;
	volatile int32_t t10 = -423348;

	t10 = ((x41==(x42|x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 14789U;
	int64_t x46 = INT64_MAX;
	static int16_t x47 = INT16_MAX;

	t11 = ((x45==(x46|x47))*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile uint32_t x50 = 37891U;
	volatile int64_t x51 = INT64_MIN;
	int32_t t12 = 4;

	t12 = ((x49==(x50|x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 77U;
	static int64_t x54 = -1LL;
	volatile int64_t x55 = INT64_MAX;
	int8_t x56 = INT8_MAX;
	int32_t t13 = 0;

	t13 = ((x53==(x54|x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x59 = UINT64_MAX;
	static volatile int8_t x60 = INT8_MIN;
	int32_t t14 = -11739634;

	t14 = ((x57==(x58|x59))*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 434923446061LLU;
	uint64_t x64 = 617436438664722781LLU;
	static volatile uint64_t t15 = 0LLU;

	t15 = ((x61==(x62|x63))*x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x66 = -217;
	int16_t x68 = INT16_MAX;
	volatile int32_t t16 = 246640;

	t16 = ((x65==(x66|x67))*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static volatile int16_t x70 = INT16_MIN;
	int32_t x71 = INT32_MIN;
	uint64_t x72 = 28859LLU;
	volatile uint64_t t17 = 8148915410175LLU;

	t17 = ((x69==(x70|x71))*x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 372819301013946LL;
	volatile int64_t x74 = -33465LL;
	int32_t x75 = INT32_MIN;
	int32_t t18 = 280;

	t18 = ((x73==(x74|x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int16_t x78 = INT16_MIN;
	uint32_t x79 = 1758331622U;
	int32_t t19 = 103;

	t19 = ((x77==(x78|x79))*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = -1;
	volatile uint16_t x82 = 1U;
	uint16_t x83 = 88U;
	int32_t x84 = 194010079;
	volatile int32_t t20 = 8;

	t20 = ((x81==(x82|x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 6668U;
	volatile int32_t x86 = INT32_MIN;
	volatile uint64_t x87 = 5518903LLU;
	static volatile int16_t x88 = -9652;
	int32_t t21 = -31070148;

	t21 = ((x85==(x86|x87))*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x91 = UINT8_MAX;
	uint16_t x92 = UINT16_MAX;

	t22 = ((x89==(x90|x91))*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = 343594589481418LLU;
	uint64_t x96 = 1761LLU;
	uint64_t t23 = 6LLU;

	t23 = ((x93==(x94|x95))*x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MIN;
	uint16_t x99 = 12565U;
	int32_t x100 = -10995482;
	volatile int32_t t24 = -27320;

	t24 = ((x97==(x98|x99))*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 60LLU;
	static int64_t x103 = INT64_MIN;
	uint8_t x104 = 0U;
	int32_t t25 = -4047427;

	t25 = ((x101==(x102|x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -4234;
	int64_t x106 = -2071684430273329LL;
	int64_t x107 = INT64_MIN;
	static int64_t x108 = 1384321063LL;
	static volatile int64_t t26 = 18326767LL;

	t26 = ((x105==(x106|x107))*x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	volatile int16_t x110 = INT16_MIN;
	int32_t x111 = -1;
	int16_t x112 = INT16_MAX;
	int32_t t27 = 3437933;

	t27 = ((x109==(x110|x111))*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -13;
	static int16_t x114 = INT16_MIN;
	volatile int32_t x115 = INT32_MAX;

	t28 = ((x113==(x114|x115))*x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile uint64_t x118 = UINT64_MAX;
	static volatile uint8_t x120 = 7U;
	int32_t t29 = -11;

	t29 = ((x117==(x118|x119))*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	volatile int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MAX;
	static int32_t t30 = 201366794;

	t30 = ((x121==(x122|x123))*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = INT8_MIN;
	static volatile int32_t x127 = INT32_MAX;
	int64_t x128 = INT64_MIN;

	t31 = ((x125==(x126|x127))*x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	int8_t x130 = 0;
	uint8_t x131 = 9U;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = 1910698;

	t32 = ((x129==(x130|x131))*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	static int64_t x134 = INT64_MAX;
	volatile int64_t x135 = -65039772LL;
	int32_t x136 = 170;
	int32_t t33 = 6;

	t33 = ((x133==(x134|x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x138 = 4459U;
	uint32_t x139 = 155050U;
	int16_t x140 = -4032;
	volatile int32_t t34 = 3;

	t34 = ((x137==(x138|x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x142 = 1165646087243LLU;
	int8_t x143 = INT8_MAX;
	int32_t x144 = -1;

	t35 = ((x141==(x142|x143))*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -220;
	int16_t x146 = 2605;
	volatile int8_t x148 = 2;
	static int32_t t36 = -64131283;

	t36 = ((x145==(x146|x147))*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -488;
	uint64_t x151 = 17681LLU;
	volatile int16_t x152 = INT16_MIN;

	t37 = ((x149==(x150|x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	static int16_t x154 = 16;
	uint64_t x156 = 41273824LLU;

	t38 = ((x153==(x154|x155))*x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x160 = -1945058279465970037LL;
	static volatile int64_t t39 = -13LL;

	t39 = ((x157==(x158|x159))*x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 918237U;

	t40 = ((x161==(x162|x163))*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = UINT32_MAX;
	uint8_t x167 = 1U;
	volatile int16_t x168 = 2249;
	int32_t t41 = -10046235;

	t41 = ((x165==(x166|x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static int64_t x170 = -1LL;
	static uint8_t x172 = 125U;
	static volatile int32_t t42 = 15326306;

	t42 = ((x169==(x170|x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = -1;
	volatile uint16_t x176 = 0U;
	static int32_t t43 = 22;

	t43 = ((x173==(x174|x175))*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MIN;
	volatile int64_t x179 = INT64_MIN;
	static int8_t x180 = -1;
	static volatile int32_t t44 = -7;

	t44 = ((x177==(x178|x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = UINT64_MAX;
	int64_t x182 = INT64_MAX;
	uint64_t x183 = 2633077001388LLU;
	volatile int16_t x184 = -2573;
	int32_t t45 = 4978477;

	t45 = ((x181==(x182|x183))*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	static int32_t t46 = 95597978;

	t46 = ((x185==(x186|x187))*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x191 = INT16_MIN;
	uint16_t x192 = 0U;

	t47 = ((x189==(x190|x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	int8_t x194 = INT8_MAX;
	static int32_t x195 = INT32_MIN;
	volatile int32_t x196 = INT32_MAX;

	t48 = ((x193==(x194|x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	int16_t x198 = INT16_MAX;
	uint32_t t49 = 886903696U;

	t49 = ((x197==(x198|x199))*x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 1867402U;
	int32_t x202 = INT32_MIN;
	static uint64_t x203 = 31814879LLU;
	int16_t x204 = 1;
	static int32_t t50 = -3;

	t50 = ((x201==(x202|x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = 143U;
	int64_t x206 = INT64_MIN;
	int64_t x207 = INT64_MIN;
	volatile int16_t x208 = 22;
	volatile int32_t t51 = 2;

	t51 = ((x205==(x206|x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x211 = INT32_MIN;
	uint8_t x212 = 0U;
	int32_t t52 = 1540;

	t52 = ((x209==(x210|x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	int64_t x214 = INT64_MIN;
	uint64_t x215 = 71LLU;
	static int8_t x216 = 25;

	t53 = ((x213==(x214|x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 9501309U;
	int32_t x218 = INT32_MIN;
	volatile uint8_t x219 = 20U;
	uint64_t x220 = 5LLU;
	volatile uint64_t t54 = 8701180680284787LLU;

	t54 = ((x217==(x218|x219))*x220);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 1027625160LL;
	uint64_t x222 = 462533534LLU;
	int64_t x224 = INT64_MIN;
	volatile int64_t t55 = -50742LL;

	t55 = ((x221==(x222|x223))*x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -8;
	volatile int8_t x228 = INT8_MIN;
	static volatile int32_t t56 = 13334772;

	t56 = ((x225==(x226|x227))*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x231 = -3597250140416LL;
	int16_t x232 = -30;
	volatile int32_t t57 = 21436;

	t57 = ((x229==(x230|x231))*x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 1752633;
	volatile int64_t x234 = INT64_MIN;
	uint16_t x235 = 5697U;
	static volatile int8_t x236 = -1;

	t58 = ((x233==(x234|x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x237 = INT8_MAX;
	int16_t x238 = INT16_MAX;
	int16_t x239 = INT16_MIN;

	t59 = ((x237==(x238|x239))*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 794040289877189LLU;
	static int32_t x242 = INT32_MIN;
	static volatile int32_t x243 = -16233;
	volatile int32_t t60 = 115;

	t60 = ((x241==(x242|x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x247 = 44;
	volatile int8_t x248 = -1;
	int32_t t61 = 16520219;

	t61 = ((x245==(x246|x247))*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x249 = 20301U;
	uint16_t x250 = UINT16_MAX;
	int32_t t62 = 1065549102;

	t62 = ((x249==(x250|x251))*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = UINT8_MAX;
	int8_t x254 = INT8_MIN;
	int16_t x255 = 1;
	int32_t x256 = INT32_MAX;
	volatile int32_t t63 = 0;

	t63 = ((x253==(x254|x255))*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	volatile int16_t x258 = INT16_MAX;
	uint16_t x259 = 3U;
	int16_t x260 = -1;
	static volatile int32_t t64 = 382749;

	t64 = ((x257==(x258|x259))*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 2U;
	static int64_t x263 = -59167453394723LL;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 0;

	t65 = ((x261==(x262|x263))*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -856351;
	int8_t x267 = INT8_MAX;
	int32_t x268 = 5562;
	static volatile int32_t t66 = 22163;

	t66 = ((x265==(x266|x267))*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x270 = -22;
	int8_t x271 = -2;
	int16_t x272 = 0;
	volatile int32_t t67 = 54046;

	t67 = ((x269==(x270|x271))*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 7636711741591550LLU;
	uint16_t x274 = 0U;
	int64_t x275 = INT64_MIN;
	uint32_t x276 = 64710U;

	t68 = ((x273==(x274|x275))*x276);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = INT8_MIN;
	static volatile uint16_t x278 = 0U;
	static uint8_t x279 = UINT8_MAX;
	volatile int32_t x280 = INT32_MIN;
	volatile int32_t t69 = 19944860;

	t69 = ((x277==(x278|x279))*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = 134;
	int16_t x283 = INT16_MAX;
	int16_t x284 = 4;
	int32_t t70 = 12122047;

	t70 = ((x281==(x282|x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	static int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MIN;
	int64_t x288 = -10601425952312LL;
	volatile int64_t t71 = -100955280LL;

	t71 = ((x285==(x286|x287))*x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static volatile uint32_t x290 = 1U;
	int16_t x291 = INT16_MIN;
	static uint64_t x292 = 24140400LLU;

	t72 = ((x289==(x290|x291))*x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x294 = 149U;
	int64_t x295 = -1LL;
	uint32_t t73 = 60797U;

	t73 = ((x293==(x294|x295))*x296);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = 8239987U;
	int64_t x298 = 31856814443503751LL;
	int32_t x299 = -2970071;
	volatile int8_t x300 = INT8_MAX;
	int32_t t74 = 453;

	t74 = ((x297==(x298|x299))*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 7;
	static int32_t x302 = -1;
	uint32_t x303 = 453519U;
	static uint64_t x304 = UINT64_MAX;
	static volatile uint64_t t75 = 155219441474174LLU;

	t75 = ((x301==(x302|x303))*x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x306 = 24U;
	static int8_t x307 = INT8_MIN;
	uint32_t x308 = UINT32_MAX;
	uint32_t t76 = 37U;

	t76 = ((x305==(x306|x307))*x308);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = -1;
	static uint16_t x311 = UINT16_MAX;
	static int8_t x312 = -1;
	static volatile int32_t t77 = -1;

	t77 = ((x309==(x310|x311))*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = 14;
	int32_t t78 = -1;

	t78 = ((x313==(x314|x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int64_t x318 = -1LL;
	int8_t x319 = INT8_MIN;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t79 = 124688;

	t79 = ((x317==(x318|x319))*x320);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x323 = UINT16_MAX;
	uint32_t x324 = 5593605U;

	t80 = ((x321==(x322|x323))*x324);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	int64_t x326 = INT64_MIN;
	uint32_t x327 = UINT32_MAX;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = -16;

	t81 = ((x325==(x326|x327))*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	int32_t t82 = 8;

	t82 = ((x329==(x330|x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int64_t x334 = INT64_MAX;
	volatile int8_t x335 = INT8_MIN;
	static int8_t x336 = INT8_MIN;

	t83 = ((x333==(x334|x335))*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x338 = 35887505025552LLU;
	int32_t x340 = -7954770;

	t84 = ((x337==(x338|x339))*x340);

	if (t84 != -7954770) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 5U;
	static volatile uint64_t x342 = 230236750521LLU;
	static volatile int32_t x343 = INT32_MIN;
	int32_t x344 = INT32_MAX;
	volatile int32_t t85 = 1953;

	t85 = ((x341==(x342|x343))*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x345 = UINT16_MAX;
	static uint16_t x346 = 0U;
	int64_t x347 = -2510649953LL;
	volatile int8_t x348 = INT8_MAX;

	t86 = ((x345==(x346|x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MAX;

	t87 = ((x349==(x350|x351))*x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1;
	volatile uint64_t x355 = UINT64_MAX;
	uint32_t x356 = 59545113U;
	uint32_t t88 = 35U;

	t88 = ((x353==(x354|x355))*x356);

	if (t88 != 59545113U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = INT8_MAX;
	uint16_t x358 = UINT16_MAX;
	volatile uint32_t x359 = 1184807U;
	volatile int32_t t89 = 163937191;

	t89 = ((x357==(x358|x359))*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 15;
	int32_t x363 = INT32_MIN;
	static int16_t x364 = -3187;

	t90 = ((x361==(x362|x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = UINT32_MAX;
	volatile uint64_t x367 = 2074570847903012LLU;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -702;

	t91 = ((x365==(x366|x367))*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	int16_t x371 = INT16_MIN;
	static volatile int64_t x372 = -1LL;
	static int64_t t92 = -1LL;

	t92 = ((x369==(x370|x371))*x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x374 = INT16_MIN;
	uint32_t x375 = 689526U;
	int8_t x376 = -1;

	t93 = ((x373==(x374|x375))*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	int8_t x378 = INT8_MIN;
	int8_t x379 = -2;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t94 = 310404188LLU;

	t94 = ((x377==(x378|x379))*x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 628302046057846687LL;
	int64_t x382 = INT64_MAX;
	int16_t x383 = -26;
	static int8_t x384 = -7;
	volatile int32_t t95 = 14;

	t95 = ((x381==(x382|x383))*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	static volatile int16_t x386 = INT16_MAX;
	volatile int16_t x387 = 9;
	uint32_t x388 = 420502U;
	uint32_t t96 = 0U;

	t96 = ((x385==(x386|x387))*x388);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	volatile uint32_t x390 = 58U;
	uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MAX;
	volatile int32_t t97 = 1;

	t97 = ((x389==(x390|x391))*x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x394 = INT32_MIN;
	uint16_t x396 = 1064U;
	static int32_t t98 = -3827;

	t98 = ((x393==(x394|x395))*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static int64_t x398 = -1LL;
	int64_t x399 = -1719LL;
	int32_t t99 = -21;

	t99 = ((x397==(x398|x399))*x400);

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

