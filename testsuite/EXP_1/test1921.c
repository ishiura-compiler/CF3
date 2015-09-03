#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
volatile int64_t x5 = INT64_MIN;
uint16_t x11 = 26630U;
int8_t x14 = INT8_MIN;
uint32_t x17 = UINT32_MAX;
static volatile uint64_t x23 = 222835212LLU;
int8_t x33 = INT8_MIN;
int8_t x34 = INT8_MAX;
int16_t x64 = INT16_MAX;
volatile int64_t x74 = INT64_MAX;
static int16_t x75 = -1;
int32_t t18 = 3757799;
static uint32_t x77 = 6U;
int64_t x78 = 32032LL;
static volatile int32_t t21 = -279330855;
int16_t x95 = -1;
static int32_t x96 = -41265;
int8_t x103 = INT8_MIN;
int32_t x109 = 1;
int64_t x112 = INT64_MAX;
int32_t t27 = 227705;
volatile uint8_t x113 = 0U;
int16_t x114 = INT16_MAX;
int8_t x116 = -1;
int32_t t28 = -627532;
int32_t x124 = -36198034;
static int32_t x125 = -7443;
int32_t x126 = -1;
int32_t t31 = 821560165;
int32_t t32 = 2648;
static int64_t x138 = 563545698631384944LL;
int32_t t34 = 355;
volatile int64_t x144 = -52508915LL;
int64_t x148 = INT64_MIN;
uint16_t x150 = UINT16_MAX;
volatile int8_t x156 = INT8_MIN;
static int8_t x159 = INT8_MAX;
int16_t x162 = 11;
volatile int32_t t40 = 6;
int16_t x175 = INT16_MIN;
int32_t x178 = -15844;
int32_t t47 = 1;
int64_t x196 = -274286LL;
uint16_t x199 = 12U;
int32_t x204 = INT32_MIN;
int8_t x215 = INT8_MAX;
static int32_t t54 = 8;
int16_t x221 = -13262;
int8_t x224 = INT8_MIN;
int16_t x226 = 6;
int64_t x246 = INT64_MIN;
static int8_t x247 = -1;
uint64_t x250 = 26LLU;
uint32_t x251 = 503150U;
volatile int8_t x259 = 1;
volatile int32_t t63 = -1676;
static int64_t x265 = -1LL;
int16_t x271 = 3;
int32_t x272 = -1;
static int16_t x273 = INT16_MIN;
volatile uint64_t x274 = 536LLU;
int8_t x275 = INT8_MIN;
int16_t x284 = INT16_MIN;
uint32_t x292 = 217U;
volatile int32_t t71 = -81890133;
volatile uint64_t x299 = UINT64_MAX;
volatile int16_t x300 = -11584;
int32_t x305 = INT32_MIN;
static int32_t t76 = 1;
volatile int32_t t77 = 43;
int64_t x328 = INT64_MIN;
int32_t t83 = -5702;
static volatile int16_t x350 = -1;
static int64_t x351 = 7LL;
int8_t x356 = -1;
int16_t x374 = INT16_MIN;
uint32_t x388 = UINT32_MAX;
volatile int32_t t93 = -3;
volatile uint32_t x401 = UINT32_MAX;
static int32_t t98 = 43192264;
int16_t x410 = 6661;
uint8_t x411 = 5U;


void f0(void) {
	uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MIN;
	static int64_t x4 = -47313252141161LL;
	volatile int32_t t0 = -299523803;

	t0 = (((x1|x2)%x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = INT16_MIN;
	volatile int32_t x7 = 130911214;
	uint8_t x8 = 61U;
	int32_t t1 = 123687138;

	t1 = (((x5|x6)%x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	uint16_t x10 = 63U;
	static uint64_t x12 = 140900715LLU;
	int32_t t2 = -417;

	t2 = (((x9|x10)%x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 2909;
	static int32_t x15 = -1;
	int8_t x16 = 11;
	int32_t t3 = 46;

	t3 = (((x13|x14)%x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	int64_t x19 = INT64_MIN;
	uint8_t x20 = 122U;
	volatile int32_t t4 = -116918482;

	t4 = (((x17|x18)%x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	static int8_t x22 = INT8_MIN;
	int64_t x24 = INT64_MAX;
	volatile int32_t t5 = 208086184;

	t5 = (((x21|x22)%x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	int64_t x26 = INT64_MIN;
	volatile int64_t x27 = -1LL;
	volatile uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = -946;

	t6 = (((x25|x26)%x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	volatile int32_t x30 = INT32_MIN;
	int64_t x31 = -1LL;
	static int32_t x32 = 2;
	volatile int32_t t7 = 637;

	t7 = (((x29|x30)%x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x35 = -1;
	int8_t x36 = -27;
	volatile int32_t t8 = 2;

	t8 = (((x33|x34)%x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -3055LL;
	static int8_t x38 = INT8_MAX;
	int8_t x39 = 48;
	uint64_t x40 = 136592438701827LLU;
	volatile int32_t t9 = 1;

	t9 = (((x37|x38)%x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	int16_t x42 = -1;
	int64_t x43 = INT64_MIN;
	int8_t x44 = INT8_MAX;
	static volatile int32_t t10 = -24;

	t10 = (((x41|x42)%x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 859LL;
	int8_t x46 = INT8_MIN;
	static volatile int32_t x47 = -1;
	int16_t x48 = -392;
	int32_t t11 = -166489060;

	t11 = (((x45|x46)%x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = 43947747652955LL;
	volatile int64_t x50 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	static int32_t x52 = -1143243;
	int32_t t12 = -1983937;

	t12 = (((x49|x50)%x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 24;
	volatile int64_t x54 = INT64_MIN;
	int16_t x55 = INT16_MAX;
	int64_t x56 = 3625096LL;
	volatile int32_t t13 = -7243;

	t13 = (((x53|x54)%x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	static int32_t x58 = INT32_MAX;
	static volatile int16_t x59 = 382;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -214;

	t14 = (((x57|x58)%x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint32_t x62 = UINT32_MAX;
	uint32_t x63 = UINT32_MAX;
	int32_t t15 = 728;

	t15 = (((x61|x62)%x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = UINT32_MAX;
	volatile uint32_t x67 = 28575399U;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 6497084;

	t16 = (((x65|x66)%x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -114474;
	volatile uint64_t x70 = 9854LLU;
	int8_t x71 = -1;
	int64_t x72 = -20958200LL;
	static volatile int32_t t17 = -1;

	t17 = (((x69|x70)%x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -93813501;
	uint16_t x76 = 3U;

	t18 = (((x73|x74)%x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x79 = INT16_MIN;
	static uint32_t x80 = UINT32_MAX;
	volatile int32_t t19 = 0;

	t19 = (((x77|x78)%x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 52U;
	uint64_t x82 = UINT64_MAX;
	static int16_t x83 = INT16_MIN;
	int32_t x84 = -1003;
	int32_t t20 = -565;

	t20 = (((x81|x82)%x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	int32_t x86 = 14187;
	int8_t x87 = INT8_MIN;
	int8_t x88 = -10;

	t21 = (((x85|x86)%x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int32_t x90 = -1;
	uint64_t x91 = UINT64_MAX;
	static int8_t x92 = 1;
	volatile int32_t t22 = 1;

	t22 = (((x89|x90)%x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MIN;
	int32_t t23 = -4967291;

	t23 = (((x93|x94)%x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 55LLU;
	int16_t x98 = INT16_MIN;
	volatile int16_t x99 = INT16_MIN;
	static uint64_t x100 = UINT64_MAX;
	static int32_t t24 = 37084;

	t24 = (((x97|x98)%x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -5;
	volatile int8_t x102 = 0;
	uint64_t x104 = UINT64_MAX;
	int32_t t25 = 1;

	t25 = (((x101|x102)%x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = 26098351U;
	uint32_t x106 = 334123U;
	int32_t x107 = 6828;
	int64_t x108 = -13002LL;
	int32_t t26 = -996;

	t26 = (((x105|x106)%x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x110 = -734;
	static int16_t x111 = INT16_MIN;

	t27 = (((x109|x110)%x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x115 = 6U;

	t28 = (((x113|x114)%x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static int16_t x118 = INT16_MAX;
	volatile int32_t x119 = 1857;
	int8_t x120 = 2;
	int32_t t29 = 522457381;

	t29 = (((x117|x118)%x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	uint8_t x122 = UINT8_MAX;
	int64_t x123 = INT64_MIN;
	int32_t t30 = -79689;

	t30 = (((x121|x122)%x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x127 = 14324795894450750LLU;
	uint64_t x128 = 101071590413121LLU;

	t31 = (((x125|x126)%x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 354223561LLU;
	volatile uint64_t x130 = UINT64_MAX;
	uint32_t x131 = 359620U;
	int64_t x132 = -49590305LL;

	t32 = (((x129|x130)%x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -3;
	uint64_t x134 = 22631291402764LLU;
	static int32_t x135 = 96285;
	uint16_t x136 = UINT16_MAX;
	int32_t t33 = 21;

	t33 = (((x133|x134)%x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 3515721314LLU;
	int64_t x139 = INT64_MIN;
	static uint16_t x140 = 2075U;

	t34 = (((x137|x138)%x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = 44703661825976760LL;
	int64_t x142 = INT64_MAX;
	int8_t x143 = INT8_MIN;
	volatile int32_t t35 = 10341;

	t35 = (((x141|x142)%x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 1U;
	int32_t x146 = -1572213;
	static uint16_t x147 = 639U;
	static int32_t t36 = -90;

	t36 = (((x145|x146)%x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 54724U;
	uint8_t x151 = 95U;
	static uint32_t x152 = UINT32_MAX;
	volatile int32_t t37 = -58006071;

	t37 = (((x149|x150)%x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	uint64_t x154 = 448334119LLU;
	int64_t x155 = -1LL;
	volatile int32_t t38 = 20775;

	t38 = (((x153|x154)%x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	static uint32_t x158 = UINT32_MAX;
	static volatile int32_t x160 = -37020;
	volatile int32_t t39 = 20195;

	t39 = (((x157|x158)%x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	uint32_t x164 = 3U;

	t40 = (((x161|x162)%x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 0U;
	int32_t x166 = INT32_MIN;
	static uint16_t x167 = UINT16_MAX;
	static int8_t x168 = INT8_MIN;
	int32_t t41 = -163661980;

	t41 = (((x165|x166)%x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int16_t x170 = INT16_MIN;
	uint64_t x171 = 7671597454819LLU;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 11823;

	t42 = (((x169|x170)%x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 13018349501885LLU;
	int64_t x174 = -1LL;
	volatile int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 5543127;

	t43 = (((x173|x174)%x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 126393131LLU;
	static uint8_t x179 = 1U;
	uint8_t x180 = 98U;
	int32_t t44 = 2236611;

	t44 = (((x177|x178)%x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	static uint16_t x182 = 36U;
	int32_t x183 = INT32_MIN;
	int64_t x184 = -1LL;
	int32_t t45 = -162132712;

	t45 = (((x181|x182)%x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = INT64_MIN;
	int8_t x186 = 55;
	uint8_t x187 = 12U;
	int16_t x188 = -1;
	int32_t t46 = 176;

	t46 = (((x185|x186)%x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = 93;
	int64_t x191 = 124108491246634540LL;
	int8_t x192 = INT8_MIN;

	t47 = (((x189|x190)%x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MAX;
	int64_t x195 = -1LL;
	volatile int32_t t48 = 6680;

	t48 = (((x193|x194)%x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = INT8_MIN;
	uint16_t x198 = UINT16_MAX;
	uint8_t x200 = 97U;
	int32_t t49 = 5491;

	t49 = (((x197|x198)%x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	int16_t x202 = 3;
	int16_t x203 = -14083;
	static volatile int32_t t50 = -77;

	t50 = (((x201|x202)%x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	uint32_t x206 = 1736329U;
	static int16_t x207 = INT16_MIN;
	int32_t x208 = -1;
	static volatile int32_t t51 = -173703980;

	t51 = (((x205|x206)%x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 1U;
	int8_t x210 = -1;
	volatile uint32_t x211 = 229172U;
	int32_t x212 = -18022549;
	volatile int32_t t52 = 12;

	t52 = (((x209|x210)%x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MAX;
	static int32_t x214 = -1;
	uint8_t x216 = 0U;
	int32_t t53 = -361230;

	t53 = (((x213|x214)%x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	int8_t x218 = INT8_MIN;
	int64_t x219 = -101270996978571LL;
	int32_t x220 = -1;

	t54 = (((x217|x218)%x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 1752378468557465101LLU;
	int8_t x223 = INT8_MIN;
	static volatile int32_t t55 = -171885;

	t55 = (((x221|x222)%x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 8808847330108LLU;
	volatile int8_t x227 = -1;
	static int32_t x228 = INT32_MIN;
	int32_t t56 = -8988;

	t56 = (((x225|x226)%x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MAX;
	uint16_t x234 = 241U;
	int32_t x235 = INT32_MAX;
	int16_t x236 = -1;
	volatile int32_t t57 = 3650495;

	t57 = (((x233|x234)%x235)<=x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = 326267;
	int64_t x239 = INT64_MAX;
	volatile uint8_t x240 = UINT8_MAX;
	volatile int32_t t58 = -1;

	t58 = (((x237|x238)%x239)<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x241 = UINT8_MAX;
	uint16_t x242 = 0U;
	int16_t x243 = INT16_MIN;
	uint64_t x244 = 248004LLU;
	int32_t t59 = 240;

	t59 = (((x241|x242)%x243)<=x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	int64_t x248 = INT64_MIN;
	int32_t t60 = 1517;

	t60 = (((x245|x246)%x247)<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x249 = UINT64_MAX;
	volatile int64_t x252 = INT64_MAX;
	volatile int32_t t61 = 93;

	t61 = (((x249|x250)%x251)<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -1;
	volatile uint8_t x254 = 13U;
	static int8_t x255 = -1;
	uint32_t x256 = 7723524U;
	int32_t t62 = 462;

	t62 = (((x253|x254)%x255)<=x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = -1;
	static uint32_t x258 = 1936U;
	uint32_t x260 = UINT32_MAX;

	t63 = (((x257|x258)%x259)<=x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 33328911LLU;
	int64_t x262 = INT64_MIN;
	static volatile int16_t x263 = 102;
	int32_t x264 = 1;
	volatile int32_t t64 = 15089;

	t64 = (((x261|x262)%x263)<=x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	int8_t x268 = -1;
	volatile int32_t t65 = 32;

	t65 = (((x265|x266)%x267)<=x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MAX;
	volatile int8_t x270 = INT8_MIN;
	volatile int32_t t66 = 1626;

	t66 = (((x269|x270)%x271)<=x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x276 = INT8_MAX;
	int32_t t67 = -19840544;

	t67 = (((x273|x274)%x275)<=x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = UINT16_MAX;
	uint16_t x282 = UINT16_MAX;
	uint32_t x283 = UINT32_MAX;
	static int32_t t68 = 19380970;

	t68 = (((x281|x282)%x283)<=x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = 10;
	volatile int16_t x286 = 0;
	uint64_t x287 = 1851574042084414821LLU;
	int64_t x288 = INT64_MIN;
	volatile int32_t t69 = -357;

	t69 = (((x285|x286)%x287)<=x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x289 = -1;
	volatile int64_t x290 = -1LL;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t t70 = -1;

	t70 = (((x289|x290)%x291)<=x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = UINT32_MAX;
	static int8_t x294 = -39;
	volatile int8_t x295 = INT8_MIN;
	volatile uint16_t x296 = UINT16_MAX;

	t71 = (((x293|x294)%x295)<=x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -1;
	uint8_t x298 = UINT8_MAX;
	int32_t t72 = -4294;

	t72 = (((x297|x298)%x299)<=x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MAX;
	uint8_t x302 = UINT8_MAX;
	uint32_t x303 = 283462U;
	int64_t x304 = -1LL;
	int32_t t73 = -48;

	t73 = (((x301|x302)%x303)<=x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x306 = -1;
	static uint8_t x307 = 1U;
	int64_t x308 = -1LL;
	static volatile int32_t t74 = -10710022;

	t74 = (((x305|x306)%x307)<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = INT16_MAX;
	static volatile uint32_t x310 = 10U;
	static int64_t x311 = INT64_MAX;
	volatile int64_t x312 = -1LL;
	static volatile int32_t t75 = -15;

	t75 = (((x309|x310)%x311)<=x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -1LL;
	int16_t x318 = INT16_MIN;
	static uint8_t x319 = 46U;
	int64_t x320 = INT64_MIN;

	t76 = (((x317|x318)%x319)<=x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MIN;
	volatile int64_t x322 = -1LL;
	int32_t x323 = INT32_MAX;
	uint32_t x324 = 324U;

	t77 = (((x321|x322)%x323)<=x324);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MIN;
	static uint8_t x326 = 0U;
	uint64_t x327 = 36260441246LLU;
	volatile int32_t t78 = -195;

	t78 = (((x325|x326)%x327)<=x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x329 = INT8_MIN;
	uint16_t x330 = UINT16_MAX;
	volatile uint8_t x331 = 36U;
	int64_t x332 = INT64_MAX;
	int32_t t79 = 1851;

	t79 = (((x329|x330)%x331)<=x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x333 = 1955LLU;
	volatile uint16_t x334 = UINT16_MAX;
	uint64_t x335 = UINT64_MAX;
	int8_t x336 = INT8_MIN;
	int32_t t80 = -380;

	t80 = (((x333|x334)%x335)<=x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x337 = -1;
	static int32_t x338 = -12204;
	int16_t x339 = INT16_MIN;
	int8_t x340 = -1;
	volatile int32_t t81 = 7;

	t81 = (((x337|x338)%x339)<=x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x341 = 12521U;
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MAX;
	uint16_t x344 = 5835U;
	int32_t t82 = 212138486;

	t82 = (((x341|x342)%x343)<=x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -44855LL;
	static int16_t x346 = 2915;
	int8_t x347 = -1;
	static uint16_t x348 = 0U;

	t83 = (((x345|x346)%x347)<=x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = UINT8_MAX;
	int8_t x352 = INT8_MAX;
	volatile int32_t t84 = -3;

	t84 = (((x349|x350)%x351)<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x353 = 6377119204497LLU;
	static int64_t x354 = INT64_MAX;
	static volatile uint8_t x355 = 36U;
	volatile int32_t t85 = -255;

	t85 = (((x353|x354)%x355)<=x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = 4;
	int64_t x358 = -1LL;
	static uint16_t x359 = UINT16_MAX;
	int32_t x360 = -1;
	volatile int32_t t86 = 228709533;

	t86 = (((x357|x358)%x359)<=x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	static uint64_t x363 = 3590928200541214LLU;
	uint32_t x364 = UINT32_MAX;
	int32_t t87 = 893769820;

	t87 = (((x361|x362)%x363)<=x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x365 = -1LL;
	int64_t x366 = -1LL;
	uint64_t x367 = 1088418LLU;
	int16_t x368 = -1;
	volatile int32_t t88 = -1;

	t88 = (((x365|x366)%x367)<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -1LL;
	static int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MAX;
	uint8_t x372 = 0U;
	int32_t t89 = 2578;

	t89 = (((x369|x370)%x371)<=x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = 1217U;
	int16_t x375 = INT16_MIN;
	uint32_t x376 = 14225410U;
	volatile int32_t t90 = 289854304;

	t90 = (((x373|x374)%x375)<=x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x377 = 336405866U;
	static uint16_t x378 = 95U;
	int8_t x379 = -1;
	int16_t x380 = INT16_MIN;
	volatile int32_t t91 = -2781;

	t91 = (((x377|x378)%x379)<=x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x381 = 32U;
	int32_t x382 = -1;
	static int8_t x383 = 44;
	uint32_t x384 = UINT32_MAX;
	static volatile int32_t t92 = -25305;

	t92 = (((x381|x382)%x383)<=x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = -48;
	int8_t x386 = INT8_MIN;
	static uint8_t x387 = 8U;

	t93 = (((x385|x386)%x387)<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MAX;
	int32_t x391 = -146893738;
	int8_t x392 = INT8_MAX;
	volatile int32_t t94 = 609224;

	t94 = (((x389|x390)%x391)<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x393 = 29389U;
	int64_t x394 = INT64_MIN;
	static uint32_t x395 = UINT32_MAX;
	int16_t x396 = INT16_MIN;
	int32_t t95 = 0;

	t95 = (((x393|x394)%x395)<=x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = UINT8_MAX;
	uint32_t x398 = 12U;
	volatile int32_t x399 = -1;
	int64_t x400 = 16787776915501615LL;
	volatile int32_t t96 = -1;

	t96 = (((x397|x398)%x399)<=x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x402 = 22LLU;
	int16_t x403 = -484;
	uint8_t x404 = UINT8_MAX;
	int32_t t97 = -1005437;

	t97 = (((x401|x402)%x403)<=x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MAX;
	static volatile uint16_t x407 = 20U;
	int32_t x408 = INT32_MIN;

	t98 = (((x405|x406)%x407)<=x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = -1;
	uint64_t x412 = 449256LLU;
	volatile int32_t t99 = 3;

	t99 = (((x409|x410)%x411)<=x412);

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

