#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 5175;
volatile int32_t t0 = 3744;
volatile int8_t x6 = INT8_MAX;
static int32_t t1 = -60;
volatile int32_t t2 = -892;
volatile uint16_t x19 = 423U;
uint64_t x36 = 50642LLU;
int64_t x38 = INT64_MIN;
volatile int32_t t9 = -28067;
volatile uint64_t x44 = UINT64_MAX;
int16_t x49 = INT16_MIN;
volatile int64_t x51 = 12LL;
volatile uint16_t x62 = UINT16_MAX;
volatile int32_t t15 = 1437;
uint32_t x68 = 47678U;
int64_t x75 = INT64_MIN;
int16_t x81 = -1;
int32_t x86 = -2694842;
volatile uint8_t x97 = UINT8_MAX;
uint64_t x98 = 191LLU;
int8_t x103 = 1;
volatile int32_t t25 = -2;
int64_t x105 = INT64_MIN;
uint64_t x107 = 15088781780597LLU;
static volatile int8_t x109 = INT8_MIN;
volatile int32_t t29 = 18270;
static int64_t x121 = -1LL;
int32_t t30 = 2660;
uint32_t x129 = 1433U;
volatile uint32_t x132 = 15640204U;
volatile uint32_t x139 = 61309037U;
uint16_t x142 = 1U;
int16_t x143 = 3;
int32_t t35 = 319543;
int16_t x147 = INT16_MIN;
int16_t x152 = -1;
int16_t x153 = INT16_MIN;
int32_t x154 = -6917;
static int64_t x165 = INT64_MAX;
int16_t x166 = 6930;
uint64_t x167 = UINT64_MAX;
static int16_t x169 = 6;
volatile int32_t t42 = -396238764;
volatile int8_t x176 = INT8_MIN;
int32_t x177 = INT32_MIN;
volatile int32_t x182 = INT32_MIN;
static uint8_t x184 = UINT8_MAX;
int32_t t45 = -1;
int8_t x185 = INT8_MIN;
uint8_t x199 = 36U;
volatile int32_t t49 = 387;
int8_t x210 = 11;
volatile uint32_t x215 = 21307U;
int32_t t53 = -3793521;
int32_t x220 = -11499;
uint8_t x224 = 0U;
int8_t x231 = INT8_MIN;
int32_t t57 = 21549;
volatile int32_t t58 = 633;
static volatile int16_t x237 = -1;
int32_t t59 = -18398;
int16_t x244 = INT16_MIN;
int32_t t60 = 49;
int8_t x246 = INT8_MIN;
uint16_t x251 = UINT16_MAX;
volatile int32_t x253 = INT32_MIN;
static int64_t x256 = -1LL;
volatile int32_t t63 = 61208310;
uint16_t x257 = UINT16_MAX;
int64_t x266 = INT64_MIN;
int64_t x267 = INT64_MIN;
int8_t x270 = -52;
int16_t x279 = 144;
int64_t x282 = INT64_MIN;
uint32_t x285 = 30405U;
uint16_t x287 = UINT16_MAX;
volatile int64_t x290 = INT64_MAX;
int32_t t74 = -573563157;
static int16_t x301 = -1;
int16_t x315 = 16317;
volatile int32_t t78 = 43951;
static int32_t x317 = 1575865;
int8_t x318 = INT8_MIN;
volatile int16_t x328 = -1;
uint32_t x333 = UINT32_MAX;
volatile uint16_t x336 = 460U;
static int32_t x337 = INT32_MIN;
static int32_t t84 = -1763;
int8_t x343 = INT8_MIN;
int8_t x344 = 2;
int32_t t86 = 409;
volatile int64_t x353 = 479287399015LL;
volatile uint32_t x355 = 0U;
static int8_t x380 = INT8_MAX;
static uint8_t x387 = 0U;
int16_t x394 = INT16_MAX;
volatile int32_t t98 = -750156867;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int32_t x2 = -1;
	int64_t x4 = INT64_MAX;

	t0 = ((x1*(x2==x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2126U;
	volatile int16_t x7 = INT16_MAX;
	uint32_t x8 = UINT32_MAX;

	t1 = ((x5*(x6==x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 204U;
	static uint32_t x10 = 6U;
	uint64_t x11 = 102LLU;
	int64_t x12 = INT64_MAX;

	t2 = ((x9*(x10==x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	int64_t x14 = -1LL;
	int64_t x15 = -1LL;
	volatile int32_t x16 = INT32_MIN;
	int32_t t3 = -177780725;

	t3 = ((x13*(x14==x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	static int32_t x18 = 0;
	volatile int64_t x20 = -1LL;
	int32_t t4 = 46096831;

	t4 = ((x17*(x18==x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	int64_t x22 = INT64_MAX;
	volatile int16_t x23 = -207;
	volatile int64_t x24 = -1LL;
	volatile int32_t t5 = -954645;

	t5 = ((x21*(x22==x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MIN;
	int64_t x26 = 71838780632292LL;
	static int16_t x27 = INT16_MIN;
	uint8_t x28 = 18U;
	volatile int32_t t6 = -121951140;

	t6 = ((x25*(x26==x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int32_t x30 = INT32_MIN;
	uint16_t x31 = 1U;
	static int32_t x32 = 265527;
	int32_t t7 = 19626198;

	t7 = ((x29*(x30==x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = 14;
	static uint32_t x34 = 21507U;
	int64_t x35 = -1LL;
	volatile int32_t t8 = 1;

	t8 = ((x33*(x34==x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 25;
	static int32_t x39 = INT32_MIN;
	volatile int16_t x40 = INT16_MAX;

	t9 = ((x37*(x38==x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = INT16_MAX;
	int32_t t10 = -6693201;

	t10 = ((x41*(x42==x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 3U;
	int64_t x46 = -1LL;
	int16_t x47 = -472;
	volatile uint16_t x48 = 0U;
	int32_t t11 = -179049;

	t11 = ((x45*(x46==x47))==x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MAX;
	uint32_t x52 = 5106719U;
	volatile int32_t t12 = -1;

	t12 = ((x49*(x50==x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint8_t x54 = 18U;
	int64_t x55 = -23LL;
	volatile int64_t x56 = -1LL;
	int32_t t13 = -37;

	t13 = ((x53*(x54==x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = UINT16_MAX;
	static int64_t x58 = -1LL;
	int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -12;

	t14 = ((x57*(x58==x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 47;
	uint32_t x63 = UINT32_MAX;
	uint8_t x64 = UINT8_MAX;

	t15 = ((x61*(x62==x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 18U;
	volatile int64_t x66 = 0LL;
	int64_t x67 = INT64_MIN;
	static int32_t t16 = 49609643;

	t16 = ((x65*(x66==x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 316LL;
	int16_t x70 = 1;
	static int16_t x71 = INT16_MIN;
	uint8_t x72 = 0U;
	volatile int32_t t17 = -19620;

	t17 = ((x69*(x70==x71))==x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int32_t x74 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 824938808;

	t18 = ((x73*(x74==x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	int16_t x78 = 9148;
	int16_t x79 = INT16_MIN;
	int16_t x80 = 2668;
	volatile int32_t t19 = -29693;

	t19 = ((x77*(x78==x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MAX;
	uint32_t x83 = 7U;
	static int16_t x84 = 174;
	volatile int32_t t20 = 5673833;

	t20 = ((x81*(x82==x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int64_t x87 = INT64_MAX;
	static int16_t x88 = -21;
	int32_t t21 = -15879;

	t21 = ((x85*(x86==x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 134576213314372LLU;
	volatile int64_t x90 = INT64_MIN;
	volatile int16_t x91 = INT16_MIN;
	uint8_t x92 = 21U;
	volatile int32_t t22 = 53;

	t22 = ((x89*(x90==x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x93 = -1LL;
	int64_t x94 = -1283747340128598LL;
	static volatile uint32_t x95 = 13U;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = -3224982;

	t23 = ((x93*(x94==x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x99 = 0U;
	static volatile int32_t x100 = 4186;
	int32_t t24 = 26;

	t24 = ((x97*(x98==x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 23465206204LLU;
	volatile int64_t x102 = 0LL;
	uint32_t x104 = 44U;

	t25 = ((x101*(x102==x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -1581;
	uint64_t x108 = 3145969612500597LLU;
	volatile int32_t t26 = 67507;

	t26 = ((x105*(x106==x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = 13436919U;
	int64_t x111 = INT64_MIN;
	volatile int8_t x112 = 0;
	int32_t t27 = -4;

	t27 = ((x109*(x110==x111))==x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	volatile uint32_t x114 = 188910U;
	static volatile int8_t x115 = INT8_MIN;
	static volatile int8_t x116 = -26;
	volatile int32_t t28 = -416;

	t28 = ((x113*(x114==x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 49985810771LLU;
	static uint16_t x118 = 118U;
	volatile int64_t x119 = INT64_MIN;
	uint32_t x120 = 0U;

	t29 = ((x117*(x118==x119))==x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = 4U;
	uint32_t x123 = 3U;
	uint32_t x124 = 1U;

	t30 = ((x121*(x122==x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 1U;
	int32_t x126 = INT32_MIN;
	static int8_t x127 = INT8_MIN;
	volatile int16_t x128 = 18;
	int32_t t31 = -566;

	t31 = ((x125*(x126==x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x130 = -1;
	volatile uint64_t x131 = UINT64_MAX;
	int32_t t32 = -8452718;

	t32 = ((x129*(x130==x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint32_t x134 = 19310364U;
	volatile int64_t x135 = INT64_MIN;
	volatile uint8_t x136 = 1U;
	static volatile int32_t t33 = 11192;

	t33 = ((x133*(x134==x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	uint64_t x138 = 1423626LLU;
	volatile int8_t x140 = -20;
	int32_t t34 = -58629;

	t34 = ((x137*(x138==x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	static int16_t x144 = 80;

	t35 = ((x141*(x142==x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -1;
	uint16_t x146 = 20678U;
	static uint32_t x148 = 27180U;
	volatile int32_t t36 = -92;

	t36 = ((x145*(x146==x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -54;
	int32_t x150 = 5;
	int32_t x151 = -1;
	volatile int32_t t37 = 664;

	t37 = ((x149*(x150==x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x155 = 94U;
	int16_t x156 = -1;
	int32_t t38 = 16920;

	t38 = ((x153*(x154==x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -7276248LL;
	static int8_t x158 = 19;
	uint64_t x159 = 37407927LLU;
	volatile int16_t x160 = INT16_MIN;
	static int32_t t39 = -313;

	t39 = ((x157*(x158==x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	static int32_t x162 = -1;
	uint32_t x163 = 65957786U;
	volatile uint64_t x164 = UINT64_MAX;
	volatile int32_t t40 = -147;

	t40 = ((x161*(x162==x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x168 = 47670740955823837LLU;
	static int32_t t41 = 3;

	t41 = ((x165*(x166==x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -1;
	uint8_t x171 = 20U;
	static int64_t x172 = -1LL;

	t42 = ((x169*(x170==x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int32_t x174 = -105406;
	int16_t x175 = 0;
	int32_t t43 = 346;

	t43 = ((x173*(x174==x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MIN;
	int32_t x179 = -1;
	static volatile uint16_t x180 = UINT16_MAX;
	static int32_t t44 = -7568;

	t44 = ((x177*(x178==x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	int64_t x183 = 6090LL;

	t45 = ((x181*(x182==x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x186 = 1LL;
	int8_t x187 = INT8_MIN;
	volatile int32_t x188 = -1;
	int32_t t46 = -181;

	t46 = ((x185*(x186==x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 90U;
	int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MAX;
	int32_t x192 = -1;
	volatile int32_t t47 = 22;

	t47 = ((x189*(x190==x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	int32_t x194 = INT32_MIN;
	int64_t x195 = -650LL;
	volatile int16_t x196 = -1;
	volatile int32_t t48 = 80899;

	t48 = ((x193*(x194==x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	int16_t x198 = INT16_MAX;
	int16_t x200 = INT16_MAX;

	t49 = ((x197*(x198==x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 28U;
	static int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t50 = 35124968;

	t50 = ((x201*(x202==x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = 78U;
	int8_t x206 = INT8_MAX;
	volatile uint32_t x207 = UINT32_MAX;
	int8_t x208 = -1;
	int32_t t51 = -60977;

	t51 = ((x205*(x206==x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int64_t x211 = -18531071972604600LL;
	int32_t x212 = -92836756;
	int32_t t52 = 477;

	t52 = ((x209*(x210==x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = -4541469828LL;
	int32_t x214 = INT32_MAX;
	int32_t x216 = INT32_MIN;

	t53 = ((x213*(x214==x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	int32_t x218 = -1;
	int64_t x219 = INT64_MIN;
	int32_t t54 = -11977233;

	t54 = ((x217*(x218==x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 1U;
	static uint32_t x222 = UINT32_MAX;
	int32_t x223 = INT32_MAX;
	volatile int32_t t55 = 113;

	t55 = ((x221*(x222==x223))==x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	static uint16_t x226 = UINT16_MAX;
	volatile int8_t x227 = INT8_MIN;
	uint8_t x228 = 0U;
	int32_t t56 = -465;

	t56 = ((x225*(x226==x227))==x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 290450733;
	volatile int8_t x230 = -1;
	volatile uint16_t x232 = 13U;

	t57 = ((x229*(x230==x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	uint16_t x234 = 311U;
	static int32_t x235 = -1;
	uint64_t x236 = 1459408015682002LLU;

	t58 = ((x233*(x234==x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = -100265459;
	volatile int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MIN;

	t59 = ((x237*(x238==x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	static int64_t x242 = INT64_MIN;
	volatile uint32_t x243 = UINT32_MAX;

	t60 = ((x241*(x242==x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MAX;
	int8_t x247 = INT8_MAX;
	volatile int32_t x248 = INT32_MIN;
	static volatile int32_t t61 = 192795;

	t61 = ((x245*(x246==x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x249 = -1;
	volatile uint16_t x250 = 253U;
	uint16_t x252 = 4725U;
	int32_t t62 = -6176089;

	t62 = ((x249*(x250==x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = 77U;
	uint64_t x255 = 9472LLU;

	t63 = ((x253*(x254==x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x258 = INT64_MIN;
	static int16_t x259 = -1837;
	static int16_t x260 = -1;
	int32_t t64 = 247868583;

	t64 = ((x257*(x258==x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = 9U;
	int16_t x262 = INT16_MIN;
	uint8_t x263 = 34U;
	volatile int64_t x264 = 2032LL;
	volatile int32_t t65 = 4;

	t65 = ((x261*(x262==x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	uint32_t x268 = 114606512U;
	volatile int32_t t66 = 508586794;

	t66 = ((x265*(x266==x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = UINT32_MAX;
	int16_t x271 = INT16_MIN;
	int64_t x272 = 10235948458LL;
	volatile int32_t t67 = 95710775;

	t67 = ((x269*(x270==x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = -1;
	static volatile int64_t x275 = INT64_MIN;
	int8_t x276 = -1;
	volatile int32_t t68 = -1160788;

	t68 = ((x273*(x274==x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = UINT16_MAX;
	int16_t x278 = INT16_MAX;
	static int64_t x280 = INT64_MIN;
	volatile int32_t t69 = 621616;

	t69 = ((x277*(x278==x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 2;
	uint16_t x283 = 25877U;
	int32_t x284 = 462721107;
	volatile int32_t t70 = -32818539;

	t70 = ((x281*(x282==x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = 646042208628794571LL;
	int16_t x288 = -1;
	int32_t t71 = -3300863;

	t71 = ((x285*(x286==x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = INT64_MIN;
	int8_t x291 = INT8_MAX;
	uint8_t x292 = UINT8_MAX;
	int32_t t72 = -532664204;

	t72 = ((x289*(x290==x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = UINT8_MAX;
	int64_t x294 = INT64_MIN;
	uint32_t x295 = UINT32_MAX;
	int64_t x296 = INT64_MAX;
	int32_t t73 = -417353608;

	t73 = ((x293*(x294==x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	uint32_t x298 = 262519U;
	uint64_t x299 = 816813750LLU;
	int16_t x300 = 3525;

	t74 = ((x297*(x298==x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 74U;
	int16_t x303 = INT16_MAX;
	volatile int32_t x304 = -1;
	volatile int32_t t75 = 84671017;

	t75 = ((x301*(x302==x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = 1;
	int8_t x306 = INT8_MAX;
	int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MAX;
	int32_t t76 = 26;

	t76 = ((x305*(x306==x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = -108;
	int16_t x311 = -1920;
	static volatile int64_t x312 = INT64_MAX;
	volatile int32_t t77 = 1;

	t77 = ((x309*(x310==x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	int16_t x314 = INT16_MIN;
	uint16_t x316 = 1U;

	t78 = ((x313*(x314==x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x319 = 1036533U;
	uint32_t x320 = 278163084U;
	static int32_t t79 = 13132;

	t79 = ((x317*(x318==x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile uint64_t x322 = 249593097475092511LLU;
	int32_t x323 = -1;
	uint32_t x324 = UINT32_MAX;
	static int32_t t80 = 120;

	t80 = ((x321*(x322==x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	volatile uint32_t x326 = UINT32_MAX;
	static uint8_t x327 = 40U;
	int32_t t81 = 158957;

	t81 = ((x325*(x326==x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 5U;
	static int16_t x330 = INT16_MAX;
	int16_t x331 = 3880;
	uint32_t x332 = 7U;
	int32_t t82 = 27;

	t82 = ((x329*(x330==x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x334 = UINT64_MAX;
	static int16_t x335 = INT16_MIN;
	static volatile int32_t t83 = 7;

	t83 = ((x333*(x334==x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x338 = -1;
	uint8_t x339 = 3U;
	static int16_t x340 = -1;

	t84 = ((x337*(x338==x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static uint16_t x342 = UINT16_MAX;
	int32_t t85 = 443443;

	t85 = ((x341*(x342==x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	static volatile int64_t x346 = INT64_MAX;
	static int32_t x347 = INT32_MIN;
	int16_t x348 = 0;

	t86 = ((x345*(x346==x347))==x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 16698636135LLU;
	int8_t x350 = -1;
	static uint16_t x351 = 28U;
	int64_t x352 = 244LL;
	volatile int32_t t87 = 795418529;

	t87 = ((x349*(x350==x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x354 = INT64_MIN;
	uint32_t x356 = 20932U;
	int32_t t88 = -19841;

	t88 = ((x353*(x354==x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = INT8_MAX;
	static uint32_t x358 = UINT32_MAX;
	int32_t x359 = -1;
	static uint16_t x360 = UINT16_MAX;
	volatile int32_t t89 = -713262;

	t89 = ((x357*(x358==x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x361 = INT16_MIN;
	volatile int16_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int64_t x364 = -1LL;
	int32_t t90 = -198400126;

	t90 = ((x361*(x362==x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MAX;
	uint64_t x367 = UINT64_MAX;
	uint8_t x368 = 8U;
	int32_t t91 = 143;

	t91 = ((x365*(x366==x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	int64_t x370 = -3775948758893578LL;
	uint8_t x371 = UINT8_MAX;
	uint64_t x372 = 3437LLU;
	int32_t t92 = -11;

	t92 = ((x369*(x370==x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 1108U;
	volatile int8_t x374 = INT8_MIN;
	uint8_t x375 = UINT8_MAX;
	volatile int32_t x376 = INT32_MIN;
	int32_t t93 = 103455;

	t93 = ((x373*(x374==x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = 5680LL;
	uint8_t x378 = 0U;
	uint32_t x379 = 1U;
	static int32_t t94 = -69;

	t94 = ((x377*(x378==x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	volatile uint64_t x382 = UINT64_MAX;
	static volatile int32_t x383 = -1;
	int8_t x384 = -1;
	static int32_t t95 = -745;

	t95 = ((x381*(x382==x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MAX;
	volatile int16_t x388 = -1;
	int32_t t96 = 1330982;

	t96 = ((x385*(x386==x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -771;
	int32_t x390 = 3;
	static int64_t x391 = INT64_MIN;
	int32_t x392 = -416147;
	static int32_t t97 = -319358886;

	t97 = ((x389*(x390==x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	int32_t x395 = INT32_MAX;
	int32_t x396 = INT32_MAX;

	t98 = ((x393*(x394==x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = 4483U;
	uint32_t x398 = UINT32_MAX;
	volatile int8_t x399 = INT8_MIN;
	uint16_t x400 = 77U;
	static int32_t t99 = 305080277;

	t99 = ((x397*(x398==x399))==x400);

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

