#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x5 = UINT32_MAX;
int16_t x7 = INT16_MIN;
static int8_t x9 = INT8_MIN;
volatile int32_t t2 = -116197521;
int64_t x14 = INT64_MAX;
static int32_t x16 = -108220;
static uint32_t t3 = 181048U;
int64_t x18 = INT64_MAX;
int32_t x20 = 24242416;
static int64_t x30 = INT64_MIN;
int64_t x40 = 29335751669LL;
int8_t x50 = -1;
uint64_t x51 = UINT64_MAX;
int16_t x56 = -1;
uint64_t x57 = UINT64_MAX;
static int16_t x61 = INT16_MIN;
int64_t x64 = INT64_MAX;
volatile int64_t t15 = 18151068534632LL;
int64_t x69 = 3955251133LL;
uint32_t x70 = UINT32_MAX;
int64_t t17 = -1LL;
uint32_t x75 = 1024472U;
volatile int32_t t19 = 34639;
int16_t x82 = -1;
int32_t x85 = -15908603;
volatile int32_t t22 = -5807;
uint64_t x99 = UINT64_MAX;
uint16_t x101 = UINT16_MAX;
int64_t t29 = 16811242364LL;
volatile uint32_t x127 = UINT32_MAX;
volatile int32_t x128 = 5782;
int32_t x129 = -172696079;
int16_t x132 = -1;
uint8_t x135 = 2U;
volatile uint32_t t32 = 477U;
static volatile int16_t x138 = INT16_MAX;
int64_t x140 = 14556538277324173LL;
uint32_t x146 = 3891U;
int64_t x152 = INT64_MAX;
int32_t x156 = -1;
uint32_t t38 = 536700128U;
volatile uint32_t x167 = UINT32_MAX;
volatile int64_t t40 = -746659863LL;
int16_t x180 = INT16_MIN;
int16_t x183 = 240;
uint32_t x186 = UINT32_MAX;
volatile int16_t x192 = 2;
volatile int16_t x194 = INT16_MAX;
volatile int32_t t47 = 141658558;
volatile int64_t x200 = -117694425996884453LL;
int32_t x202 = INT32_MIN;
int32_t x205 = INT32_MAX;
volatile int32_t t50 = 36;
volatile int32_t t51 = 547074;
volatile uint64_t t52 = 151LLU;
static int32_t x217 = 3221;
volatile int16_t x218 = -2;
int32_t x221 = 31727;
int64_t x222 = INT64_MIN;
int16_t x224 = 6813;
static int32_t t55 = 280813;
int32_t x229 = INT32_MIN;
int32_t t56 = -1048;
static int64_t x236 = INT64_MAX;
volatile int8_t x245 = -6;
int64_t x250 = INT64_MIN;
int64_t x251 = -1LL;
static int8_t x254 = 0;
int32_t t62 = -7;
int32_t t63 = 2484914;
static volatile int32_t t64 = 841;
static volatile uint64_t x267 = UINT64_MAX;
uint32_t x268 = 3U;
volatile int8_t x269 = 57;
uint32_t x270 = 474317811U;
int8_t x272 = -1;
static int32_t x274 = 142140;
uint64_t x275 = UINT64_MAX;
int8_t x281 = INT8_MAX;
int16_t x282 = INT16_MAX;
volatile int32_t x283 = INT32_MIN;
int64_t x287 = INT64_MIN;
static volatile int32_t t70 = -2318303;
int32_t x289 = INT32_MIN;
volatile int8_t x293 = 1;
int64_t x294 = -83546LL;
int64_t x296 = INT64_MAX;
int64_t x297 = 15060750343LL;
volatile int64_t t73 = 6145LL;
volatile int16_t x305 = INT16_MAX;
volatile int32_t x312 = -94655;
static uint64_t x315 = 854286LLU;
volatile int64_t x316 = -1LL;
uint16_t x327 = 7451U;
static uint8_t x331 = 7U;
static uint64_t t81 = 238421LLU;
int64_t x344 = INT64_MIN;
volatile int64_t t84 = 1902602529193LL;
uint8_t x346 = 11U;
uint8_t x357 = UINT8_MAX;
volatile uint64_t x358 = 505678879280LLU;
static uint64_t x367 = UINT64_MAX;
volatile int16_t x381 = INT16_MAX;
int64_t x385 = INT64_MIN;
volatile uint64_t x388 = UINT64_MAX;
int32_t x390 = 7;
int64_t x393 = 234703LL;
int64_t x396 = -1LL;
static int64_t x401 = 1LL;
int16_t x405 = INT16_MIN;


void f0(void) {
	int16_t x1 = -1;
	uint64_t x2 = 29487556LLU;
	int64_t x3 = INT64_MIN;
	int16_t x4 = -2731;
	int32_t t0 = -2626837;

	t0 = ((x1*(x2<=x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -137391907;
	int32_t x8 = 1;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = ((x5*(x6<=x7))/x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 204U;
	static int32_t x11 = -1;
	int16_t x12 = INT16_MAX;

	t2 = ((x9*(x10<=x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 1184U;
	volatile uint64_t x15 = 174999366LLU;

	t3 = ((x13*(x14<=x15))/x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint32_t x19 = 677603U;
	int32_t t4 = 496735;

	t4 = ((x17*(x18<=x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 2752988195590LLU;
	int16_t x22 = 399;
	int64_t x23 = INT64_MAX;
	int32_t x24 = -3055;
	volatile uint64_t t5 = 5622064033533338LLU;

	t5 = ((x21*(x22<=x23))/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	uint8_t x26 = 11U;
	uint64_t x27 = 32951271153LLU;
	volatile uint32_t x28 = 16417509U;
	volatile uint64_t t6 = 1LLU;

	t6 = ((x25*(x26<=x27))/x28);

	if (t6 != 1123601885871LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 8U;
	int64_t x31 = -1LL;
	int32_t x32 = -1;
	volatile int32_t t7 = 33921811;

	t7 = ((x29*(x30<=x31))/x32);

	if (t7 != -8) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 26U;
	volatile int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 2958;

	t8 = ((x33*(x34<=x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int32_t x38 = INT32_MAX;
	volatile int16_t x39 = INT16_MIN;
	static volatile int64_t t9 = -96964715LL;

	t9 = ((x37*(x38<=x39))/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	uint8_t x42 = UINT8_MAX;
	static uint64_t x43 = UINT64_MAX;
	uint32_t x44 = UINT32_MAX;
	static volatile uint32_t t10 = 1917166458U;

	t10 = ((x41*(x42<=x43))/x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MAX;
	uint8_t x48 = 1U;
	volatile int32_t t11 = 232643;

	t11 = ((x45*(x46<=x47))/x48);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -118584;

	t12 = ((x49*(x50<=x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	uint32_t x54 = 10844U;
	static uint32_t x55 = 1U;
	int32_t t13 = 955051;

	t13 = ((x53*(x54<=x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x58 = INT64_MAX;
	int32_t x59 = 1059205849;
	uint32_t x60 = UINT32_MAX;
	volatile uint64_t t14 = 149230413LLU;

	t14 = ((x57*(x58<=x59))/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 145480391LLU;
	int32_t x63 = -22;

	t15 = ((x61*(x62<=x63))/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint32_t x66 = 1220U;
	int32_t x67 = 70;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 9913086;

	t16 = ((x65*(x66<=x67))/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x71 = INT8_MIN;
	int16_t x72 = -1;

	t17 = ((x69*(x70<=x71))/x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x73 = -2132;
	volatile uint32_t x74 = 2651U;
	static int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 1074501;

	t18 = ((x73*(x74<=x75))/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 0U;
	static uint16_t x78 = 2281U;
	int16_t x79 = INT16_MAX;
	uint8_t x80 = 43U;

	t19 = ((x77*(x78<=x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = -56;
	volatile int16_t x83 = -1;
	volatile uint8_t x84 = UINT8_MAX;
	int32_t t20 = 39;

	t20 = ((x81*(x82<=x83))/x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	int8_t x87 = -1;
	uint64_t x88 = UINT64_MAX;
	uint64_t t21 = 73350801101588262LLU;

	t21 = ((x85*(x86<=x87))/x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x93 = 1U;
	uint16_t x94 = UINT16_MAX;
	volatile int8_t x95 = -1;
	static int16_t x96 = 1;

	t22 = ((x93*(x94<=x95))/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	volatile int8_t x98 = -1;
	volatile uint32_t x100 = 58U;
	static uint32_t t23 = 475370599U;

	t23 = ((x97*(x98<=x99))/x100);

	if (t23 != 74050595U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x102 = INT32_MIN;
	uint32_t x103 = UINT32_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t24 = 12;

	t24 = ((x101*(x102<=x103))/x104);

	if (t24 != -511) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MIN;
	volatile uint64_t x107 = 87822060585LLU;
	volatile int64_t x108 = INT64_MAX;
	int64_t t25 = -26998LL;

	t25 = ((x105*(x106<=x107))/x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = 35;
	static uint8_t x110 = 83U;
	uint8_t x111 = UINT8_MAX;
	uint64_t x112 = 129677LLU;
	uint64_t t26 = 547LLU;

	t26 = ((x109*(x110<=x111))/x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MIN;
	int64_t x114 = -7733LL;
	uint8_t x115 = 1U;
	int16_t x116 = INT16_MAX;
	volatile int64_t t27 = -746207739808737LL;

	t27 = ((x113*(x114<=x115))/x116);

	if (t27 != -281483566907400LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -333LL;
	volatile uint16_t x118 = 162U;
	volatile int64_t x119 = 1479LL;
	int8_t x120 = -1;
	int64_t t28 = -29LL;

	t28 = ((x117*(x118<=x119))/x120);

	if (t28 != 333LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = -1LL;
	int8_t x122 = -29;
	static volatile int32_t x123 = -1;
	int8_t x124 = INT8_MAX;

	t29 = ((x121*(x122<=x123))/x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	uint16_t x126 = 7053U;
	static volatile int64_t t30 = 18620926LL;

	t30 = ((x125*(x126<=x127))/x128);

	if (t30 != 1595187138854163LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x130 = INT16_MIN;
	static int16_t x131 = -1380;
	static int32_t t31 = 976;

	t31 = ((x129*(x130<=x131))/x132);

	if (t31 != 172696079) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x133 = 1U;
	int32_t x134 = INT32_MIN;
	uint32_t x136 = 4119845U;

	t32 = ((x133*(x134<=x135))/x136);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 0;
	int32_t x139 = -1;
	static volatile int64_t t33 = -1249296023419LL;

	t33 = ((x137*(x138<=x139))/x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	volatile int8_t x142 = 7;
	int32_t x143 = INT32_MIN;
	volatile uint8_t x144 = UINT8_MAX;
	int32_t t34 = 828;

	t34 = ((x141*(x142<=x143))/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = INT32_MIN;
	static int64_t x147 = 5067293LL;
	int8_t x148 = INT8_MAX;
	volatile int32_t t35 = -169;

	t35 = ((x145*(x146<=x147))/x148);

	if (t35 != -16909320) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = -1;
	int8_t x150 = INT8_MIN;
	volatile int32_t x151 = 32850671;
	int64_t t36 = -11163047610311914LL;

	t36 = ((x149*(x150<=x151))/x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = INT64_MAX;
	uint32_t x154 = UINT32_MAX;
	uint32_t x155 = UINT32_MAX;
	volatile int64_t t37 = -1069316562963LL;

	t37 = ((x153*(x154<=x155))/x156);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 137832U;
	int16_t x158 = INT16_MAX;
	int16_t x159 = 967;
	volatile int32_t x160 = INT32_MIN;

	t38 = ((x157*(x158<=x159))/x160);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = UINT16_MAX;
	int8_t x162 = INT8_MIN;
	int16_t x163 = 1856;
	int16_t x164 = -1;
	volatile int32_t t39 = 0;

	t39 = ((x161*(x162<=x163))/x164);

	if (t39 != -65535) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = -1;
	int16_t x166 = INT16_MIN;
	static int64_t x168 = -1LL;

	t40 = ((x165*(x166<=x167))/x168);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = 8382;
	int16_t x170 = 1;
	volatile uint16_t x171 = 3071U;
	int16_t x172 = INT16_MIN;
	int32_t t41 = 2;

	t41 = ((x169*(x170<=x171))/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	static int32_t x174 = INT32_MIN;
	static uint16_t x175 = UINT16_MAX;
	int32_t x176 = 694730251;
	int64_t t42 = 400753608886LL;

	t42 = ((x173*(x174<=x175))/x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 1920U;
	static int32_t x178 = INT32_MIN;
	static int32_t x179 = -3333174;
	static volatile uint32_t t43 = 219070U;

	t43 = ((x177*(x178<=x179))/x180);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MAX;
	static int32_t x182 = INT32_MAX;
	static uint16_t x184 = UINT16_MAX;
	int32_t t44 = 7;

	t44 = ((x181*(x182<=x183))/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1LL;
	uint8_t x187 = 61U;
	static volatile int32_t x188 = -6697;
	static int64_t t45 = -3255658937786943LL;

	t45 = ((x185*(x186<=x187))/x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = -1LL;
	uint32_t x190 = UINT32_MAX;
	int8_t x191 = 1;
	volatile int64_t t46 = -51871341486825LL;

	t46 = ((x189*(x190<=x191))/x192);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MAX;
	int16_t x195 = -741;
	int16_t x196 = INT16_MIN;

	t47 = ((x193*(x194<=x195))/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x197 = -204914499585LL;
	static int16_t x198 = 640;
	static uint64_t x199 = 123038695350044303LLU;
	int64_t t48 = -4LL;

	t48 = ((x197*(x198<=x199))/x200);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	int8_t x203 = -1;
	uint64_t x204 = 22394LLU;
	uint64_t t49 = 8032670636LLU;

	t49 = ((x201*(x202<=x203))/x204);

	if (t49 != 823736004005962LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x206 = 980582LL;
	int8_t x207 = -2;
	volatile int8_t x208 = -1;

	t50 = ((x205*(x206<=x207))/x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -28;
	int8_t x210 = 0;
	int16_t x211 = INT16_MIN;
	volatile int8_t x212 = 11;

	t51 = ((x209*(x210<=x211))/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 22036LLU;
	int8_t x214 = 0;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;

	t52 = ((x213*(x214<=x215))/x216);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x219 = INT32_MAX;
	int8_t x220 = INT8_MIN;
	volatile int32_t t53 = 1;

	t53 = ((x217*(x218<=x219))/x220);

	if (t53 != -25) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x223 = INT32_MIN;
	volatile int32_t t54 = 292;

	t54 = ((x221*(x222<=x223))/x224);

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = UINT16_MAX;
	volatile uint8_t x226 = UINT8_MAX;
	uint16_t x227 = 96U;
	uint8_t x228 = UINT8_MAX;

	t55 = ((x225*(x226<=x227))/x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x230 = 15369U;
	static int32_t x231 = 3564484;
	int8_t x232 = INT8_MAX;

	t56 = ((x229*(x230<=x231))/x232);

	if (t56 != -16909320) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x233 = 1597688U;
	static uint16_t x234 = 1922U;
	volatile uint32_t x235 = 4794272U;
	volatile int64_t t57 = -494662481764LL;

	t57 = ((x233*(x234<=x235))/x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 2148631969523LLU;
	static volatile int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MIN;
	static uint8_t x240 = UINT8_MAX;
	volatile uint64_t t58 = 59169LLU;

	t58 = ((x237*(x238<=x239))/x240);

	if (t58 != 8426007723LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;
	static int64_t x243 = INT64_MIN;
	uint8_t x244 = 47U;
	int64_t t59 = 1854883001034982179LL;

	t59 = ((x241*(x242<=x243))/x244);

	if (t59 != -196241958230952676LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x246 = 0U;
	uint64_t x247 = 1402010877LLU;
	volatile int64_t x248 = INT64_MAX;
	int64_t t60 = 81421LL;

	t60 = ((x245*(x246<=x247))/x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x249 = INT16_MAX;
	uint8_t x252 = UINT8_MAX;
	int32_t t61 = -670524;

	t61 = ((x249*(x250<=x251))/x252);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MAX;
	static uint32_t x255 = 2938U;
	uint8_t x256 = 2U;

	t62 = ((x253*(x254<=x255))/x256);

	if (t62 != 16383) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MIN;
	static int64_t x258 = INT64_MAX;
	int32_t x259 = INT32_MIN;
	uint16_t x260 = 1U;

	t63 = ((x257*(x258<=x259))/x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = 11U;
	int16_t x262 = -1;
	int8_t x263 = INT8_MIN;
	int8_t x264 = 4;

	t64 = ((x261*(x262<=x263))/x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x265 = 160238526U;
	static int8_t x266 = -1;
	volatile uint32_t t65 = 609704249U;

	t65 = ((x265*(x266<=x267))/x268);

	if (t65 != 53412842U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x271 = -1;
	static volatile int32_t t66 = 238592;

	t66 = ((x269*(x270<=x271))/x272);

	if (t66 != -57) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t67 = -365515;

	t67 = ((x273*(x274<=x275))/x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x277 = UINT8_MAX;
	static int16_t x278 = INT16_MIN;
	int16_t x279 = -1;
	int8_t x280 = INT8_MIN;
	volatile int32_t t68 = -4069922;

	t68 = ((x277*(x278<=x279))/x280);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x284 = -3668069;
	int32_t t69 = 5;

	t69 = ((x281*(x282<=x283))/x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x285 = 5U;
	uint8_t x286 = UINT8_MAX;
	int16_t x288 = -1;

	t70 = ((x285*(x286<=x287))/x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x290 = UINT64_MAX;
	int64_t x291 = INT64_MAX;
	volatile uint64_t x292 = 113076601LLU;
	uint64_t t71 = 1282835077526LLU;

	t71 = ((x289*(x290<=x291))/x292);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x295 = INT8_MIN;
	volatile int64_t t72 = 6138387374LL;

	t72 = ((x293*(x294<=x295))/x296);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x298 = -237;
	uint16_t x299 = UINT16_MAX;
	int64_t x300 = 850270298669LL;

	t73 = ((x297*(x298<=x299))/x300);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t74 = 4997;

	t74 = ((x301*(x302<=x303))/x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x306 = UINT64_MAX;
	volatile int16_t x307 = -1;
	volatile int8_t x308 = -1;
	volatile int32_t t75 = 144;

	t75 = ((x305*(x306<=x307))/x308);

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	volatile int32_t x310 = INT32_MAX;
	volatile int64_t x311 = -19394217387532775LL;
	static volatile int64_t t76 = 9550803133LL;

	t76 = ((x309*(x310<=x311))/x312);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = INT32_MIN;
	volatile uint32_t x314 = 0U;
	static int64_t t77 = -110078LL;

	t77 = ((x313*(x314<=x315))/x316);

	if (t77 != 2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = 30U;
	volatile int32_t x318 = -259029763;
	int16_t x319 = -29;
	static volatile int16_t x320 = -1;
	int32_t t78 = 406;

	t78 = ((x317*(x318<=x319))/x320);

	if (t78 != -30) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = INT8_MIN;
	uint16_t x322 = UINT16_MAX;
	int32_t x323 = INT32_MIN;
	static uint8_t x324 = 2U;
	int32_t t79 = 8298;

	t79 = ((x321*(x322<=x323))/x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	static uint16_t x328 = 15762U;
	volatile int32_t t80 = 1018;

	t80 = ((x325*(x326<=x327))/x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x329 = INT8_MIN;
	static volatile int32_t x330 = 121;
	volatile uint64_t x332 = 65686928575209049LLU;

	t81 = ((x329*(x330<=x331))/x332);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x333 = INT64_MIN;
	volatile int64_t x334 = -126184294504926402LL;
	uint64_t x335 = 4LLU;
	int16_t x336 = -1357;
	static volatile int64_t t82 = 20171612356956LL;

	t82 = ((x333*(x334<=x335))/x336);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x337 = 233144861483016281LL;
	int16_t x338 = INT16_MIN;
	uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MAX;
	volatile int64_t t83 = -10541830455847LL;

	t83 = ((x337*(x338<=x339))/x340);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint8_t x342 = UINT8_MAX;
	int16_t x343 = -787;

	t84 = ((x341*(x342<=x343))/x344);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = 0;
	volatile uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MIN;
	int64_t t85 = -2631050638LL;

	t85 = ((x345*(x346<=x347))/x348);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = INT16_MAX;
	int64_t x350 = INT64_MIN;
	volatile int32_t x351 = INT32_MIN;
	volatile int16_t x352 = 2;
	int32_t t86 = 126;

	t86 = ((x349*(x350<=x351))/x352);

	if (t86 != 16383) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = -1621;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = INT8_MIN;
	volatile int16_t x356 = 30;
	volatile int32_t t87 = 555055;

	t87 = ((x353*(x354<=x355))/x356);

	if (t87 != -54) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x359 = INT8_MIN;
	int16_t x360 = -1;
	int32_t t88 = -2704;

	t88 = ((x357*(x358<=x359))/x360);

	if (t88 != -255) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = -3;
	uint64_t x362 = 7630084067000932725LLU;
	uint32_t x363 = 13020U;
	static int16_t x364 = INT16_MIN;
	int32_t t89 = 13944;

	t89 = ((x361*(x362<=x363))/x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x365 = UINT64_MAX;
	static int16_t x366 = -1;
	static uint8_t x368 = UINT8_MAX;
	volatile uint64_t t90 = 261586852188LLU;

	t90 = ((x365*(x366<=x367))/x368);

	if (t90 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = -1;
	uint64_t x374 = UINT64_MAX;
	static int16_t x375 = -1;
	int64_t x376 = 169894576581LL;
	int64_t t91 = -229542875LL;

	t91 = ((x373*(x374<=x375))/x376);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x377 = 1755;
	int16_t x378 = INT16_MIN;
	uint64_t x379 = 1498987504401863015LLU;
	int16_t x380 = -1;
	int32_t t92 = 61795;

	t92 = ((x377*(x378<=x379))/x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x382 = 33;
	int16_t x383 = -1;
	int64_t x384 = 77677021011980898LL;
	volatile int64_t t93 = 129251617316057LL;

	t93 = ((x381*(x382<=x383))/x384);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x386 = 1896U;
	static int64_t x387 = INT64_MIN;
	volatile uint64_t t94 = 643000487473784LLU;

	t94 = ((x385*(x386<=x387))/x388);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x389 = INT32_MAX;
	int64_t x391 = INT64_MIN;
	int64_t x392 = -1LL;
	int64_t t95 = -52862414LL;

	t95 = ((x389*(x390<=x391))/x392);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x394 = INT32_MIN;
	uint32_t x395 = 68728987U;
	int64_t t96 = -5853134LL;

	t96 = ((x393*(x394<=x395))/x396);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MIN;
	static int64_t x398 = INT64_MAX;
	int64_t x399 = INT64_MAX;
	static int16_t x400 = INT16_MIN;
	int32_t t97 = 251864;

	t97 = ((x397*(x398<=x399))/x400);

	if (t97 != 65536) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x402 = 1;
	static int16_t x403 = 22;
	static int8_t x404 = -7;
	volatile int64_t t98 = -9304622712712LL;

	t98 = ((x401*(x402<=x403))/x404);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x406 = UINT64_MAX;
	static int8_t x407 = INT8_MAX;
	static volatile int64_t x408 = 898879991853LL;
	volatile int64_t t99 = -10452599LL;

	t99 = ((x405*(x406<=x407))/x408);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

