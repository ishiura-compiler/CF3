#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -512837;
volatile uint32_t t1 = 1012123U;
int16_t x9 = -1;
int64_t x18 = INT64_MAX;
volatile int32_t t4 = 450679407;
volatile int32_t x21 = 1;
int32_t t6 = -247406736;
int16_t x29 = INT16_MIN;
int32_t t8 = -41110370;
uint64_t x42 = 287LLU;
static int64_t x44 = 5099002386LL;
volatile int8_t x45 = INT8_MIN;
int64_t x46 = 6068LL;
int16_t x49 = INT16_MIN;
int16_t x51 = -13871;
int32_t x52 = INT32_MIN;
int32_t t12 = 2;
uint32_t x57 = 31088442U;
volatile uint64_t x67 = UINT64_MAX;
int32_t x70 = -1;
volatile int32_t x73 = INT32_MAX;
int64_t x80 = 249LL;
volatile int64_t t20 = 1LL;
int64_t x88 = INT64_MIN;
int64_t t21 = -15LL;
int64_t t22 = 221LL;
static uint16_t x96 = UINT16_MAX;
volatile uint32_t x97 = 1U;
static int32_t t24 = 63373922;
static uint32_t x101 = 9U;
uint16_t x102 = 24020U;
int16_t x105 = -2487;
volatile int64_t x108 = -476464505273835LL;
int16_t x112 = INT16_MIN;
volatile int32_t t27 = -18909;
int64_t x113 = -1LL;
static int32_t x118 = 596;
volatile int8_t x127 = -1;
static int32_t x132 = -52120;
int64_t x133 = -399232LL;
int16_t x134 = INT16_MIN;
int64_t x135 = 2643506057831LL;
int64_t x144 = INT64_MIN;
int8_t x149 = INT8_MIN;
volatile int64_t t37 = 362952661LL;
static int8_t x155 = INT8_MAX;
int32_t x157 = -1;
int8_t x171 = -27;
uint32_t x180 = UINT32_MAX;
int64_t x190 = INT64_MIN;
int16_t x192 = -1;
volatile int16_t x195 = INT16_MIN;
static uint8_t x202 = UINT8_MAX;
int32_t t48 = -2239069;
int64_t x206 = -1454823137957LL;
int32_t x210 = -22;
static uint16_t x211 = 544U;
int32_t x214 = -827531;
static uint32_t t51 = 240097502U;
uint32_t x222 = UINT32_MAX;
volatile int16_t x224 = -1;
volatile int32_t t53 = -7905;
int8_t x229 = INT8_MIN;
uint64_t t56 = 96742994034574049LLU;
int64_t x237 = 26159499LL;
int8_t x247 = INT8_MAX;
uint32_t x250 = 0U;
static int64_t t61 = INT64_MIN;
uint8_t x268 = 3U;
volatile int32_t t63 = 710973;
uint32_t t64 = UINT32_MAX;
int8_t x279 = -9;
uint8_t x281 = UINT8_MAX;
int16_t x295 = 7043;
int32_t x296 = INT32_MIN;
volatile int8_t x307 = INT8_MIN;
uint64_t t71 = UINT64_MAX;
static int8_t x313 = 3;
int16_t x328 = INT16_MIN;
uint32_t x338 = UINT32_MAX;
volatile int32_t t78 = -324376164;
volatile int8_t x349 = INT8_MAX;
int8_t x355 = 6;
volatile int32_t x356 = -1552;
volatile int32_t x369 = INT32_MAX;
int8_t x372 = INT8_MAX;
int8_t x391 = -1;
int16_t x396 = -1;
int8_t x401 = 11;
int64_t x406 = 253654084003381LL;
int16_t x412 = -6824;
uint8_t x418 = 10U;
uint64_t t97 = UINT64_MAX;
int32_t x425 = -25509440;
int32_t t99 = 125373543;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int16_t x2 = INT16_MAX;
	int64_t x3 = INT64_MIN;
	static int64_t x4 = INT64_MIN;
	int64_t t0 = INT64_MIN;

	t0 = (((x1+x2)<=x3)|x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 1U;
	int8_t x7 = INT8_MIN;
	uint32_t x8 = 24265U;

	t1 = (((x5+x6)<=x7)|x8);

	if (t1 != 24265U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	volatile int8_t x11 = 1;
	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = INT64_MIN;

	t2 = (((x9+x10)<=x11)|x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile int8_t x14 = -1;
	int64_t x15 = INT64_MAX;
	static uint8_t x16 = 1U;
	volatile int32_t t3 = 82783172;

	t3 = (((x13+x14)<=x15)|x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = INT32_MIN;
	uint64_t x19 = 216668897531LLU;
	int32_t x20 = -1;

	t4 = (((x17+x18)<=x19)|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	int16_t x23 = INT16_MIN;
	int32_t x24 = 5808;
	volatile int32_t t5 = -84;

	t5 = (((x21+x22)<=x23)|x24);

	if (t5 != 5808) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = INT64_MAX;
	int8_t x26 = INT8_MIN;
	int8_t x27 = -5;
	volatile uint16_t x28 = 4U;

	t6 = (((x25+x26)<=x27)|x28);

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -1;
	int16_t x31 = INT16_MAX;
	int64_t x32 = INT64_MIN;
	int64_t t7 = 29568450LL;

	t7 = (((x29+x30)<=x31)|x32);

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	volatile int32_t x34 = -1;
	int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MIN;

	t8 = (((x33+x34)<=x35)|x36);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint32_t x38 = UINT32_MAX;
	static int16_t x39 = 16;
	volatile int8_t x40 = INT8_MAX;
	int32_t t9 = 0;

	t9 = (((x37+x38)<=x39)|x40);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x43 = 555148976506194LLU;
	static volatile int64_t t10 = -796786162462956757LL;

	t10 = (((x41+x42)<=x43)|x44);

	if (t10 != 5099002387LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x47 = INT16_MIN;
	volatile uint64_t x48 = 242539964LLU;
	uint64_t t11 = 50962237LLU;

	t11 = (((x45+x46)<=x47)|x48);

	if (t11 != 242539964LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x50 = INT8_MIN;

	t12 = (((x49+x50)<=x51)|x52);

	if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MAX;
	int16_t x55 = INT16_MIN;
	volatile int8_t x56 = INT8_MIN;
	int32_t t13 = 438872;

	t13 = (((x53+x54)<=x55)|x56);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x58 = -29;
	int16_t x59 = -1614;
	int16_t x60 = INT16_MIN;
	static volatile int32_t t14 = -15;

	t14 = (((x57+x58)<=x59)|x60);

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = 0;
	uint32_t x62 = 44U;
	static volatile int16_t x63 = INT16_MAX;
	static volatile uint64_t x64 = 2297940008364640058LLU;
	static uint64_t t15 = 206731645103736810LLU;

	t15 = (((x61+x62)<=x63)|x64);

	if (t15 != 2297940008364640059LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	int64_t x66 = INT64_MIN;
	int8_t x68 = INT8_MIN;
	int32_t t16 = 72;

	t16 = (((x65+x66)<=x67)|x68);

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 97U;
	volatile uint16_t x71 = UINT16_MAX;
	int32_t x72 = -1;
	int32_t t17 = -3686954;

	t17 = (((x69+x70)<=x71)|x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = -1;
	int32_t x75 = INT32_MIN;
	uint16_t x76 = 889U;
	static int32_t t18 = 6;

	t18 = (((x73+x74)<=x75)|x76);

	if (t18 != 889) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 25;
	uint64_t x78 = 5384441604864527LLU;
	uint8_t x79 = UINT8_MAX;
	volatile int64_t t19 = 3630068182444LL;

	t19 = (((x77+x78)<=x79)|x80);

	if (t19 != 249LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 7681424U;
	static int8_t x82 = INT8_MIN;
	int8_t x83 = -1;
	volatile int64_t x84 = INT64_MIN;

	t20 = (((x81+x82)<=x83)|x84);

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 629U;
	static volatile uint64_t x86 = 242867483855415611LLU;
	int8_t x87 = INT8_MIN;

	t21 = (((x85+x86)<=x87)|x88);

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MAX;
	int32_t x90 = -1;
	int32_t x91 = INT32_MAX;
	int64_t x92 = -1LL;

	t22 = (((x89+x90)<=x91)|x92);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 27853304U;
	int32_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	volatile int32_t t23 = 162385;

	t23 = (((x93+x94)<=x95)|x96);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x98 = 7U;
	int64_t x99 = INT64_MAX;
	int8_t x100 = -5;

	t24 = (((x97+x98)<=x99)|x100);

	if (t24 != -5) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x103 = -1;
	int8_t x104 = INT8_MAX;
	volatile int32_t t25 = -118594441;

	t25 = (((x101+x102)<=x103)|x104);

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x106 = -1;
	volatile int8_t x107 = INT8_MAX;
	volatile int64_t t26 = -1157493LL;

	t26 = (((x105+x106)<=x107)|x108);

	if (t26 != -476464505273835LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = -17999372260835746LL;
	int32_t x111 = 1;

	t27 = (((x109+x110)<=x111)|x112);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x114 = -3099LL;
	uint32_t x115 = 1U;
	int32_t x116 = -1;
	int32_t t28 = -74021894;

	t28 = (((x113+x114)<=x115)|x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	int16_t x119 = INT16_MIN;
	static int32_t x120 = INT32_MIN;
	int32_t t29 = INT32_MIN;

	t29 = (((x117+x118)<=x119)|x120);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	volatile uint64_t x122 = UINT64_MAX;
	uint16_t x123 = 3U;
	uint64_t x124 = 10641728LLU;
	volatile uint64_t t30 = 831114LLU;

	t30 = (((x121+x122)<=x123)|x124);

	if (t30 != 10641728LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 127882900799948513LLU;
	int32_t x126 = INT32_MAX;
	static int16_t x128 = -1;
	int32_t t31 = -22681161;

	t31 = (((x125+x126)<=x127)|x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MIN;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = -1;
	int32_t t32 = -370614679;

	t32 = (((x129+x130)<=x131)|x132);

	if (t32 != -52119) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x136 = -1LL;
	int64_t t33 = -9466LL;

	t33 = (((x133+x134)<=x135)|x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int8_t x138 = INT8_MIN;
	uint32_t x139 = UINT32_MAX;
	uint64_t x140 = UINT64_MAX;
	uint64_t t34 = UINT64_MAX;

	t34 = (((x137+x138)<=x139)|x140);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 824U;
	uint16_t x142 = 6U;
	static uint16_t x143 = 25U;
	int64_t t35 = INT64_MIN;

	t35 = (((x141+x142)<=x143)|x144);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 8U;
	int16_t x146 = INT16_MIN;
	static int64_t x147 = INT64_MIN;
	static int16_t x148 = 7669;
	int32_t t36 = 165;

	t36 = (((x145+x146)<=x147)|x148);

	if (t36 != 7669) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = 3172U;
	int32_t x151 = INT32_MAX;
	int64_t x152 = 24286292LL;

	t37 = (((x149+x150)<=x151)|x152);

	if (t37 != 24286293LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -6;
	int8_t x154 = 45;
	static volatile int64_t x156 = -1LL;
	int64_t t38 = 146549367792LL;

	t38 = (((x153+x154)<=x155)|x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = 44575U;
	volatile int16_t x159 = INT16_MIN;
	uint16_t x160 = 1U;
	int32_t t39 = -3363;

	t39 = (((x157+x158)<=x159)|x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	uint64_t x162 = UINT64_MAX;
	static int32_t x163 = INT32_MIN;
	uint8_t x164 = 6U;
	volatile int32_t t40 = 440548660;

	t40 = (((x161+x162)<=x163)|x164);

	if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -2925668LL;
	int64_t x166 = -12615562281243LL;
	static volatile int16_t x167 = -1;
	int16_t x168 = INT16_MIN;
	int32_t t41 = -1378297;

	t41 = (((x165+x166)<=x167)|x168);

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x169 = -1LL;
	static int32_t x170 = -31941;
	static volatile int64_t x172 = INT64_MIN;
	volatile int64_t t42 = -2386LL;

	t42 = (((x169+x170)<=x171)|x172);

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	uint16_t x178 = UINT16_MAX;
	int16_t x179 = INT16_MIN;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (((x177+x178)<=x179)|x180);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	int16_t x182 = 0;
	static volatile int8_t x183 = INT8_MIN;
	static uint16_t x184 = UINT16_MAX;
	int32_t t44 = 110751997;

	t44 = (((x181+x182)<=x183)|x184);

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 0U;
	uint64_t x186 = 23909225668387279LLU;
	volatile int16_t x187 = -7681;
	int16_t x188 = 4;
	int32_t t45 = 888;

	t45 = (((x185+x186)<=x187)|x188);

	if (t45 != 5) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = UINT64_MAX;
	uint16_t x191 = 39U;
	int32_t t46 = 1376004;

	t46 = (((x189+x190)<=x191)|x192);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MIN;
	int64_t x194 = INT64_MAX;
	volatile uint64_t x196 = 66640915266LLU;
	volatile uint64_t t47 = 26LLU;

	t47 = (((x193+x194)<=x195)|x196);

	if (t47 != 66640915266LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x201 = 45U;
	volatile int16_t x203 = -138;
	static uint8_t x204 = 10U;

	t48 = (((x201+x202)<=x203)|x204);

	if (t48 != 11) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x205 = 10LLU;
	int64_t x207 = INT64_MIN;
	static volatile int64_t x208 = INT64_MIN;
	int64_t t49 = INT64_MIN;

	t49 = (((x205+x206)<=x207)|x208);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -53727;
	int8_t x212 = 51;
	volatile int32_t t50 = 102581001;

	t50 = (((x209+x210)<=x211)|x212);

	if (t50 != 51) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x213 = 10U;
	int64_t x215 = -1LL;
	uint32_t x216 = 224749U;

	t51 = (((x213+x214)<=x215)|x216);

	if (t51 != 224749U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x217 = 22U;
	uint8_t x218 = 111U;
	static int32_t x219 = -1;
	int64_t x220 = -1LL;
	static volatile int64_t t52 = 1LL;

	t52 = (((x217+x218)<=x219)|x220);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = 1U;
	int16_t x223 = -1;

	t53 = (((x221+x222)<=x223)|x224);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = -8757833854157LL;
	int8_t x226 = INT8_MAX;
	int16_t x227 = 2;
	int8_t x228 = 59;
	volatile int32_t t54 = -129756;

	t54 = (((x225+x226)<=x227)|x228);

	if (t54 != 59) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x230 = INT64_MAX;
	uint8_t x231 = 10U;
	int8_t x232 = INT8_MIN;
	volatile int32_t t55 = -393;

	t55 = (((x229+x230)<=x231)|x232);

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = INT64_MAX;
	int16_t x234 = -23;
	static volatile int32_t x235 = 177;
	uint64_t x236 = 179912927LLU;

	t56 = (((x233+x234)<=x235)|x236);

	if (t56 != 179912927LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x238 = INT8_MIN;
	uint16_t x239 = UINT16_MAX;
	int8_t x240 = 0;
	int32_t t57 = 993;

	t57 = (((x237+x238)<=x239)|x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x241 = -1LL;
	int64_t x242 = -50321421279474001LL;
	volatile uint16_t x243 = 882U;
	uint16_t x244 = UINT16_MAX;
	int32_t t58 = 3;

	t58 = (((x241+x242)<=x243)|x244);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = -294880;
	uint8_t x246 = 15U;
	int16_t x248 = INT16_MAX;
	volatile int32_t t59 = 846160348;

	t59 = (((x245+x246)<=x247)|x248);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MIN;
	int8_t x251 = INT8_MIN;
	volatile uint16_t x252 = 2697U;
	volatile int32_t t60 = 1;

	t60 = (((x249+x250)<=x251)|x252);

	if (t60 != 2697) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 1041215717U;
	volatile uint16_t x254 = 6U;
	static int16_t x255 = 1452;
	int64_t x256 = INT64_MIN;

	t61 = (((x253+x254)<=x255)|x256);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = -1LL;
	static int32_t x262 = INT32_MIN;
	static uint16_t x263 = 44U;
	uint16_t x264 = 265U;
	static int32_t t62 = -665333029;

	t62 = (((x261+x262)<=x263)|x264);

	if (t62 != 265) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x265 = 1059409286U;
	volatile int8_t x266 = -1;
	static volatile int8_t x267 = -13;

	t63 = (((x265+x266)<=x267)|x268);

	if (t63 != 3) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -5;
	volatile int16_t x270 = INT16_MAX;
	uint32_t x271 = UINT32_MAX;
	uint32_t x272 = UINT32_MAX;

	t64 = (((x269+x270)<=x271)|x272);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = UINT64_MAX;
	static int64_t x274 = INT64_MIN;
	volatile uint16_t x275 = 30U;
	uint32_t x276 = 1321475363U;
	static uint32_t t65 = 208289286U;

	t65 = (((x273+x274)<=x275)|x276);

	if (t65 != 1321475363U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = 5;
	uint16_t x278 = UINT16_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t66 = INT32_MIN;

	t66 = (((x277+x278)<=x279)|x280);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x282 = INT32_MIN;
	static volatile int8_t x283 = 8;
	static int16_t x284 = INT16_MIN;
	int32_t t67 = 1081678;

	t67 = (((x281+x282)<=x283)|x284);

	if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MAX;
	volatile int16_t x287 = 3616;
	uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t68 = UINT64_MAX;

	t68 = (((x285+x286)<=x287)|x288);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MAX;
	int16_t x290 = INT16_MIN;
	int64_t x291 = 798921284LL;
	volatile int64_t x292 = -4LL;
	static int64_t t69 = -2001LL;

	t69 = (((x289+x290)<=x291)|x292);

	if (t69 != -4LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = INT8_MAX;
	int64_t x294 = 220238LL;
	int32_t t70 = INT32_MIN;

	t70 = (((x293+x294)<=x295)|x296);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x305 = -6688410933LL;
	uint64_t x306 = 498721105284390LLU;
	uint64_t x308 = UINT64_MAX;

	t71 = (((x305+x306)<=x307)|x308);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x309 = 657332LLU;
	static volatile int32_t x310 = INT32_MIN;
	volatile int8_t x311 = INT8_MIN;
	volatile int8_t x312 = INT8_MAX;
	int32_t t72 = -3044358;

	t72 = (((x309+x310)<=x311)|x312);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x314 = 281314148550281LLU;
	int16_t x315 = INT16_MAX;
	int16_t x316 = 10134;
	int32_t t73 = 2045;

	t73 = (((x313+x314)<=x315)|x316);

	if (t73 != 10134) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x321 = -1;
	uint16_t x322 = UINT16_MAX;
	int64_t x323 = INT64_MIN;
	volatile int32_t x324 = 1;
	int32_t t74 = 266579850;

	t74 = (((x321+x322)<=x323)|x324);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = INT8_MIN;
	volatile int64_t x326 = -1829708857478905540LL;
	int8_t x327 = INT8_MIN;
	int32_t t75 = -993246041;

	t75 = (((x325+x326)<=x327)|x328);

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x329 = 2;
	uint8_t x330 = 0U;
	int32_t x331 = INT32_MIN;
	volatile int16_t x332 = -1;
	static volatile int32_t t76 = -94156;

	t76 = (((x329+x330)<=x331)|x332);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x333 = 80065U;
	uint16_t x334 = 3435U;
	uint64_t x335 = 1064242323LLU;
	static int32_t x336 = INT32_MIN;
	volatile int32_t t77 = -92168715;

	t77 = (((x333+x334)<=x335)|x336);

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = -1876;
	static int8_t x339 = -1;
	int8_t x340 = INT8_MIN;

	t78 = (((x337+x338)<=x339)|x340);

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = INT8_MIN;
	volatile int16_t x342 = INT16_MAX;
	int64_t x343 = INT64_MIN;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t79 = 239844476;

	t79 = (((x341+x342)<=x343)|x344);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MIN;
	uint32_t x347 = 196U;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t80 = 64141;

	t80 = (((x345+x346)<=x347)|x348);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x350 = 136LLU;
	static uint64_t x351 = UINT64_MAX;
	int16_t x352 = INT16_MIN;
	int32_t t81 = -59717;

	t81 = (((x349+x350)<=x351)|x352);

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x353 = -1;
	uint32_t x354 = UINT32_MAX;
	volatile int32_t t82 = 22;

	t82 = (((x353+x354)<=x355)|x356);

	if (t82 != -1552) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = 3;
	int64_t x358 = INT64_MIN;
	uint16_t x359 = 7U;
	int32_t x360 = INT32_MIN;
	volatile int32_t t83 = -51047;

	t83 = (((x357+x358)<=x359)|x360);

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x361 = 9576U;
	int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MIN;
	int64_t x364 = INT64_MIN;
	volatile int64_t t84 = 192095LL;

	t84 = (((x361+x362)<=x363)|x364);

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = 1;
	static int32_t x366 = -1;
	int32_t x367 = 23;
	volatile int16_t x368 = INT16_MAX;
	volatile int32_t t85 = 3;

	t85 = (((x365+x366)<=x367)|x368);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x370 = INT64_MIN;
	int64_t x371 = -472349081538601LL;
	int32_t t86 = 53901;

	t86 = (((x369+x370)<=x371)|x372);

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 33U;
	static int32_t x374 = -1;
	volatile int64_t x375 = INT64_MIN;
	volatile int64_t x376 = 3733683322LL;
	static volatile int64_t t87 = -21241888179621LL;

	t87 = (((x373+x374)<=x375)|x376);

	if (t87 != 3733683322LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x377 = UINT16_MAX;
	static uint32_t x378 = 800231U;
	int32_t x379 = -26603112;
	static int16_t x380 = INT16_MIN;
	int32_t t88 = 0;

	t88 = (((x377+x378)<=x379)|x380);

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x385 = INT64_MIN;
	uint16_t x386 = UINT16_MAX;
	static int16_t x387 = INT16_MAX;
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t89 = 3;

	t89 = (((x385+x386)<=x387)|x388);

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x389 = INT8_MIN;
	int32_t x390 = -448;
	uint64_t x392 = 44903137813LLU;
	static uint64_t t90 = 434568LLU;

	t90 = (((x389+x390)<=x391)|x392);

	if (t90 != 44903137813LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x393 = 1176578520U;
	int64_t x394 = -1LL;
	int32_t x395 = 246965974;
	volatile int32_t t91 = 1;

	t91 = (((x393+x394)<=x395)|x396);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x397 = 2;
	static int16_t x398 = -5818;
	int8_t x399 = -1;
	int32_t x400 = 0;
	volatile int32_t t92 = -1292923;

	t92 = (((x397+x398)<=x399)|x400);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x402 = UINT64_MAX;
	static uint32_t x403 = 1689U;
	uint8_t x404 = 40U;
	int32_t t93 = -5514;

	t93 = (((x401+x402)<=x403)|x404);

	if (t93 != 41) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x405 = -1;
	uint32_t x407 = UINT32_MAX;
	volatile int64_t x408 = INT64_MIN;
	volatile int64_t t94 = INT64_MIN;

	t94 = (((x405+x406)<=x407)|x408);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x409 = 115U;
	int32_t x410 = -26211;
	volatile uint64_t x411 = 34379722458567797LLU;
	static volatile int32_t t95 = 50405090;

	t95 = (((x409+x410)<=x411)|x412);

	if (t95 != -6823) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x413 = 112U;
	int64_t x414 = INT64_MIN;
	static int64_t x415 = 1968LL;
	uint16_t x416 = 10136U;
	int32_t t96 = -888;

	t96 = (((x413+x414)<=x415)|x416);

	if (t96 != 10137) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x417 = 221085U;
	static volatile int64_t x419 = INT64_MIN;
	uint64_t x420 = UINT64_MAX;

	t97 = (((x417+x418)<=x419)|x420);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = INT8_MAX;
	int32_t x422 = INT32_MIN;
	int8_t x423 = -1;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t98 = 1027953570;

	t98 = (((x421+x422)<=x423)|x424);

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x426 = -1LL;
	uint16_t x427 = UINT16_MAX;
	volatile uint16_t x428 = 2U;

	t99 = (((x425+x426)<=x427)|x428);

	if (t99 != 3) { NG(); } else { ; }
	
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

