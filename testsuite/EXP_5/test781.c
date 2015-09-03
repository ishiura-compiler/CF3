#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 2836259;
volatile int8_t x11 = INT8_MIN;
uint32_t t1 = 486U;
int32_t x18 = INT32_MIN;
volatile int32_t x19 = INT32_MIN;
int64_t x32 = -124879165140899682LL;
volatile int32_t t8 = 300691085;
int16_t x46 = 10;
int32_t t11 = 0;
int8_t x53 = -1;
int32_t t12 = -306315;
int16_t x57 = INT16_MIN;
uint16_t x59 = 42U;
volatile int32_t t13 = 34628;
volatile int16_t x74 = 2770;
int16_t x77 = -19;
static int32_t x80 = INT32_MIN;
int64_t x82 = -1243LL;
uint8_t x84 = 59U;
static volatile int64_t x88 = INT64_MIN;
int64_t t22 = -79660LL;
static int8_t x97 = INT8_MAX;
int64_t x111 = INT64_MAX;
int16_t x112 = INT16_MIN;
int32_t x115 = -1;
int64_t x137 = INT64_MIN;
static int64_t x142 = INT64_MIN;
uint32_t x146 = UINT32_MAX;
int64_t x148 = -1606890LL;
volatile int16_t x155 = INT16_MAX;
static volatile int64_t t36 = 1998243352284769LL;
int64_t x161 = 1932575LL;
int32_t x166 = INT32_MAX;
int32_t x168 = 380;
static int32_t x169 = 8364033;
uint32_t x171 = 1187762806U;
int64_t x179 = -1LL;
int8_t x184 = 59;
uint64_t x191 = UINT64_MAX;
volatile int16_t x194 = INT16_MIN;
int16_t x200 = -1;
static int16_t x201 = -1;
int8_t x202 = INT8_MIN;
static int32_t x203 = INT32_MIN;
int8_t x204 = 14;
int8_t x207 = INT8_MAX;
volatile int16_t x232 = INT16_MAX;
int64_t x233 = INT64_MIN;
static uint8_t x235 = 67U;
static volatile uint32_t x242 = 15U;
int64_t x243 = INT64_MIN;
static int8_t x248 = INT8_MIN;
int16_t x253 = 43;
volatile int32_t t61 = 1;
int64_t x263 = INT64_MIN;
int32_t x267 = INT32_MAX;
volatile int8_t x268 = 0;
volatile int16_t x271 = -739;
int32_t x285 = -1;
volatile int8_t x287 = INT8_MIN;
volatile uint32_t x292 = 14020794U;
static int8_t x293 = INT8_MIN;
int16_t x295 = -1;
int32_t x296 = INT32_MIN;
volatile int32_t t72 = 0;
volatile int64_t x311 = -1LL;
volatile int32_t t75 = 9194;
int8_t x322 = -1;
int8_t x324 = INT8_MIN;
int16_t x325 = 213;
static volatile int32_t x332 = -30816816;
int32_t x335 = 1;
int8_t x345 = -1;
int32_t x354 = -1003446283;
uint32_t x361 = 254528U;
volatile int8_t x363 = -1;
uint64_t x364 = 26LLU;
static int16_t x369 = 2;
uint32_t x371 = 257630U;
static uint32_t x374 = UINT32_MAX;
int64_t x382 = INT64_MAX;
uint8_t x403 = 1U;
int32_t x408 = INT32_MIN;
int64_t x411 = 80LL;
int16_t x412 = INT16_MIN;
int8_t x416 = INT8_MAX;


void f0(void) {
	static int16_t x5 = -1;
	static uint32_t x6 = UINT32_MAX;
	int16_t x7 = -1;
	static uint32_t x8 = UINT32_MAX;

	t0 = (x5+((x6%x7)<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 65455302U;
	int64_t x10 = INT64_MIN;
	uint32_t x12 = 330U;

	t1 = (x9+((x10%x11)<x12));

	if (t1 != 65455303U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	int32_t x14 = INT32_MIN;
	volatile uint32_t x15 = 1551579U;
	int64_t x16 = -13772LL;
	volatile int32_t t2 = 41;

	t2 = (x13+((x14%x15)<x16));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = -33703;
	int8_t x20 = INT8_MAX;
	volatile int32_t t3 = 1;

	t3 = (x17+((x18%x19)<x20));

	if (t3 != -33702) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	static uint64_t x22 = 12476958123344LLU;
	int16_t x23 = -13;
	static uint32_t x24 = 501699561U;
	int32_t t4 = -12;

	t4 = (x21+((x22%x23)<x24));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -1LL;
	int8_t x26 = -55;
	uint64_t x27 = 62498LLU;
	uint64_t x28 = 200LLU;
	static volatile int64_t t5 = 10219878084894LL;

	t5 = (x25+((x26%x27)<x28));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 193426LLU;
	volatile int16_t x30 = INT16_MIN;
	uint64_t x31 = 14651671573401382LLU;
	uint64_t t6 = 3068478280306460LLU;

	t6 = (x29+((x30%x31)<x32));

	if (t6 != 193427LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = 7948023262423LL;
	int8_t x34 = 2;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = -1;
	int64_t t7 = 310350LL;

	t7 = (x33+((x34%x35)<x36));

	if (t7 != 7948023262423LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = -1;
	int32_t x38 = INT32_MIN;
	int8_t x39 = -3;
	volatile uint64_t x40 = 95045219LLU;

	t8 = (x37+((x38%x39)<x40));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 43U;
	int64_t x42 = -1LL;
	uint8_t x43 = 5U;
	int64_t x44 = 1LL;
	int32_t t9 = -120686836;

	t9 = (x41+((x42%x43)<x44));

	if (t9 != 44) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x45 = 1333LLU;
	uint16_t x47 = 136U;
	uint8_t x48 = 15U;
	volatile uint64_t t10 = 8371460316650964LLU;

	t10 = (x45+((x46%x47)<x48));

	if (t10 != 1334LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	uint8_t x50 = 1U;
	int64_t x51 = -3LL;
	uint64_t x52 = 2139LLU;

	t11 = (x49+((x50%x51)<x52));

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = INT32_MAX;
	uint64_t x55 = 296073329LLU;
	int8_t x56 = -1;

	t12 = (x53+((x54%x55)<x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = INT16_MIN;
	uint8_t x60 = 4U;

	t13 = (x57+((x58%x59)<x60));

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 213U;
	int32_t x62 = INT32_MAX;
	uint64_t x63 = 90709017568LLU;
	uint8_t x64 = 0U;
	uint32_t t14 = 3486311U;

	t14 = (x61+((x62%x63)<x64));

	if (t14 != 213U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	int32_t x66 = -1;
	int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MAX;
	uint64_t t15 = 4948826654577006848LLU;

	t15 = (x65+((x66%x67)<x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	volatile int64_t x70 = -1LL;
	volatile uint32_t x71 = 13U;
	volatile int8_t x72 = INT8_MAX;
	volatile int32_t t16 = -357865939;

	t16 = (x69+((x70%x71)<x72));

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MIN;
	int16_t x75 = INT16_MIN;
	static int8_t x76 = -1;
	volatile int32_t t17 = -730;

	t17 = (x73+((x74%x75)<x76));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x78 = UINT16_MAX;
	static int32_t x79 = -743;
	volatile int32_t t18 = -60;

	t18 = (x77+((x78%x79)<x80));

	if (t18 != -19) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 50U;
	static int8_t x83 = INT8_MIN;
	static int32_t t19 = 279;

	t19 = (x81+((x82%x83)<x84));

	if (t19 != 51) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	int16_t x86 = INT16_MIN;
	static uint8_t x87 = 12U;
	int32_t t20 = INT32_MAX;

	t20 = (x85+((x86%x87)<x88));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = INT16_MIN;
	int32_t x90 = -1;
	int32_t x91 = INT32_MAX;
	uint32_t x92 = UINT32_MAX;
	int32_t t21 = 235551137;

	t21 = (x89+((x90%x91)<x92));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = 207287932LL;
	uint8_t x94 = UINT8_MAX;
	static uint16_t x95 = UINT16_MAX;
	int16_t x96 = -1;

	t22 = (x93+((x94%x95)<x96));

	if (t22 != 207287932LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = INT16_MIN;
	int64_t x99 = -1LL;
	uint32_t x100 = 2258U;
	static volatile int32_t t23 = -3;

	t23 = (x97+((x98%x99)<x100));

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = 151399398089176LL;
	uint32_t x102 = 271829U;
	int16_t x103 = INT16_MAX;
	int32_t x104 = INT32_MIN;
	volatile int64_t t24 = 563607LL;

	t24 = (x101+((x102%x103)<x104));

	if (t24 != 151399398089177LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	int32_t x106 = -1;
	uint32_t x107 = 1U;
	uint64_t x108 = 0LLU;
	static uint32_t t25 = UINT32_MAX;

	t25 = (x105+((x106%x107)<x108));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = 3309;
	uint32_t x110 = 15261212U;
	int32_t t26 = 0;

	t26 = (x109+((x110%x111)<x112));

	if (t26 != 3309) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MIN;
	int8_t x116 = -1;
	volatile int32_t t27 = INT32_MIN;

	t27 = (x113+((x114%x115)<x116));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = UINT8_MAX;
	int16_t x118 = INT16_MIN;
	volatile uint32_t x119 = 14969U;
	static int32_t x120 = 183;
	volatile int32_t t28 = -230;

	t28 = (x117+((x118%x119)<x120));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MIN;
	static int32_t x123 = INT32_MIN;
	int32_t x124 = -1;
	volatile int32_t t29 = 124872575;

	t29 = (x121+((x122%x123)<x124));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	uint8_t x126 = UINT8_MAX;
	int64_t x127 = INT64_MIN;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int32_t t30 = -945;

	t30 = (x125+((x126%x127)<x128));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = -1;
	volatile uint64_t x130 = UINT64_MAX;
	volatile int64_t x131 = INT64_MAX;
	static volatile int64_t x132 = -1LL;
	volatile int32_t t31 = 16;

	t31 = (x129+((x130%x131)<x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MIN;
	static int64_t x134 = -1LL;
	int64_t x135 = INT64_MIN;
	uint32_t x136 = 4386389U;
	static int32_t t32 = 186086869;

	t32 = (x133+((x134%x135)<x136));

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = 2227607509483886307LL;
	volatile int32_t x139 = INT32_MIN;
	volatile int64_t x140 = -60102841532LL;
	int64_t t33 = INT64_MIN;

	t33 = (x137+((x138%x139)<x140));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x141 = 10U;
	int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	static int32_t t34 = 13;

	t34 = (x141+((x142%x143)<x144));

	if (t34 != 10) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = INT32_MIN;
	volatile uint32_t x147 = 4174022U;
	int32_t t35 = INT32_MIN;

	t35 = (x145+((x146%x147)<x148));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x153 = -1LL;
	volatile int64_t x154 = 7734025LL;
	int8_t x156 = INT8_MIN;

	t36 = (x153+((x154%x155)<x156));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -1LL;
	int16_t x158 = INT16_MAX;
	static int8_t x159 = 4;
	static int32_t x160 = INT32_MAX;
	int64_t t37 = -14504605298077107LL;

	t37 = (x157+((x158%x159)<x160));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x162 = -1;
	int32_t x163 = INT32_MAX;
	int16_t x164 = INT16_MIN;
	static volatile int64_t t38 = 7LL;

	t38 = (x161+((x162%x163)<x164));

	if (t38 != 1932575LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = 82U;
	int16_t x167 = INT16_MIN;
	volatile int32_t t39 = -13448;

	t39 = (x165+((x166%x167)<x168));

	if (t39 != 82) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x170 = INT32_MAX;
	int16_t x172 = 127;
	static volatile int32_t t40 = 1722;

	t40 = (x169+((x170%x171)<x172));

	if (t40 != 8364033) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = INT64_MIN;
	int32_t x174 = -73550;
	uint8_t x175 = 1U;
	int32_t x176 = INT32_MIN;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x173+((x174%x175)<x176));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = -1;
	uint16_t x178 = 38U;
	volatile uint16_t x180 = 17415U;
	volatile int32_t t42 = 342;

	t42 = (x177+((x178%x179)<x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = -1;
	int8_t x182 = INT8_MAX;
	int64_t x183 = INT64_MIN;
	int32_t t43 = 10747;

	t43 = (x181+((x182%x183)<x184));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x186 = 8393613U;
	int16_t x187 = INT16_MIN;
	static uint64_t x188 = UINT64_MAX;
	int32_t t44 = -115578653;

	t44 = (x185+((x186%x187)<x188));

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 239LLU;
	uint32_t x190 = 14U;
	uint16_t x192 = 0U;
	volatile uint64_t t45 = 18304984537758613LLU;

	t45 = (x189+((x190%x191)<x192));

	if (t45 != 239LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MIN;
	static int32_t x195 = INT32_MIN;
	int32_t x196 = INT32_MIN;
	volatile int32_t t46 = 285796;

	t46 = (x193+((x194%x195)<x196));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	int64_t x198 = 4095LL;
	volatile int16_t x199 = -10;
	volatile int32_t t47 = 13629747;

	t47 = (x197+((x198%x199)<x200));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t t48 = 513909452;

	t48 = (x201+((x202%x203)<x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x205 = INT32_MIN;
	static volatile uint32_t x206 = 48548U;
	volatile int8_t x208 = -1;
	volatile int32_t t49 = -966966829;

	t49 = (x205+((x206%x207)<x208));

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = 77675377;
	int8_t x210 = INT8_MIN;
	volatile uint32_t x211 = UINT32_MAX;
	int64_t x212 = INT64_MAX;
	volatile int32_t t50 = 15267981;

	t50 = (x209+((x210%x211)<x212));

	if (t50 != 77675378) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -1;
	static int32_t x214 = 1;
	int64_t x215 = 6525790108628LL;
	int32_t x216 = INT32_MIN;
	volatile int32_t t51 = 117863;

	t51 = (x213+((x214%x215)<x216));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MIN;
	volatile uint32_t x218 = 6U;
	uint64_t x219 = 49903LLU;
	static int32_t x220 = -1;
	volatile int32_t t52 = 29111;

	t52 = (x217+((x218%x219)<x220));

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = -1;
	static uint64_t x222 = 259227421571996242LLU;
	int8_t x223 = INT8_MIN;
	int8_t x224 = INT8_MAX;
	int32_t t53 = -2;

	t53 = (x221+((x222%x223)<x224));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x225 = 30;
	uint32_t x226 = UINT32_MAX;
	int16_t x227 = -1;
	int64_t x228 = -203914358399125LL;
	int32_t t54 = -1;

	t54 = (x225+((x226%x227)<x228));

	if (t54 != 30) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = -1;
	int8_t x230 = INT8_MIN;
	int32_t x231 = -22;
	volatile int32_t t55 = -210;

	t55 = (x229+((x230%x231)<x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x234 = 1;
	static uint8_t x236 = 7U;
	int64_t t56 = -4392197800325LL;

	t56 = (x233+((x234%x235)<x236));

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x237 = 37U;
	int32_t x238 = -1;
	static int32_t x239 = INT32_MAX;
	int16_t x240 = -1;
	volatile int32_t t57 = 6;

	t57 = (x237+((x238%x239)<x240));

	if (t57 != 37) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = INT8_MAX;
	int64_t x244 = INT64_MIN;
	int32_t t58 = 10805;

	t58 = (x241+((x242%x243)<x244));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = 5;
	int32_t x246 = -1;
	int32_t x247 = INT32_MIN;
	int32_t t59 = -277222;

	t59 = (x245+((x246%x247)<x248));

	if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -1;
	volatile int16_t x250 = INT16_MAX;
	static uint8_t x251 = 28U;
	uint32_t x252 = 15U;
	int32_t t60 = 45650410;

	t60 = (x249+((x250%x251)<x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x254 = UINT8_MAX;
	int16_t x255 = INT16_MAX;
	int8_t x256 = -1;

	t61 = (x253+((x254%x255)<x256));

	if (t61 != 43) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = 39531;
	static int8_t x258 = -1;
	volatile int16_t x259 = INT16_MAX;
	volatile int8_t x260 = -48;
	int32_t t62 = -61281221;

	t62 = (x257+((x258%x259)<x260));

	if (t62 != 39531) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = INT16_MIN;
	uint64_t x262 = 126693125LLU;
	static volatile uint8_t x264 = UINT8_MAX;
	int32_t t63 = -1;

	t63 = (x261+((x262%x263)<x264));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x265 = 102U;
	volatile int32_t x266 = -1244759;
	volatile int32_t t64 = 0;

	t64 = (x265+((x266%x267)<x268));

	if (t64 != 103) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -34119171542408899LL;
	int8_t x270 = 8;
	uint16_t x272 = 1U;
	static int64_t t65 = -3083832274090611151LL;

	t65 = (x269+((x270%x271)<x272));

	if (t65 != -34119171542408899LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = -1;
	volatile int16_t x275 = -1;
	int64_t x276 = -1LL;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x273+((x274%x275)<x276));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x277 = UINT8_MAX;
	int64_t x278 = -1LL;
	volatile int32_t x279 = -1;
	int64_t x280 = -1LL;
	int32_t t67 = 2440;

	t67 = (x277+((x278%x279)<x280));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = INT16_MAX;
	static uint16_t x282 = UINT16_MAX;
	uint16_t x283 = 47U;
	int8_t x284 = -1;
	volatile int32_t t68 = -1059;

	t68 = (x281+((x282%x283)<x284));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x286 = 1;
	volatile int16_t x288 = INT16_MIN;
	int32_t t69 = -73157011;

	t69 = (x285+((x286%x287)<x288));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = INT32_MIN;
	int32_t x290 = 4743;
	int32_t x291 = INT32_MIN;
	int32_t t70 = 27;

	t70 = (x289+((x290%x291)<x292));

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x294 = UINT16_MAX;
	volatile int32_t t71 = 6;

	t71 = (x293+((x294%x295)<x296));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x297 = 347U;
	volatile int16_t x298 = -13365;
	static int32_t x299 = INT32_MIN;
	int16_t x300 = -1;

	t72 = (x297+((x298%x299)<x300));

	if (t72 != 348) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x310 = INT16_MIN;
	volatile uint16_t x312 = 16976U;
	static int32_t t73 = -43952184;

	t73 = (x309+((x310%x311)<x312));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = 13;
	static uint8_t x314 = 5U;
	static int32_t x315 = 3609;
	uint16_t x316 = UINT16_MAX;
	int32_t t74 = 82291;

	t74 = (x313+((x314%x315)<x316));

	if (t74 != 14) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x317 = INT32_MIN;
	static volatile uint16_t x318 = UINT16_MAX;
	volatile uint64_t x319 = 3861617860979370LLU;
	int8_t x320 = -21;

	t75 = (x317+((x318%x319)<x320));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int8_t x323 = INT8_MAX;
	int32_t t76 = -32755;

	t76 = (x321+((x322%x323)<x324));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x326 = 1187352588594053LLU;
	static int16_t x327 = 187;
	volatile uint8_t x328 = UINT8_MAX;
	int32_t t77 = 43;

	t77 = (x325+((x326%x327)<x328));

	if (t77 != 214) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x329 = 461U;
	int16_t x330 = -1;
	uint8_t x331 = 71U;
	volatile uint32_t t78 = 172U;

	t78 = (x329+((x330%x331)<x332));

	if (t78 != 461U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x333 = -629163;
	static volatile int64_t x334 = INT64_MIN;
	uint16_t x336 = 17659U;
	static volatile int32_t t79 = -3636335;

	t79 = (x333+((x334%x335)<x336));

	if (t79 != -629162) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x337 = -1;
	int16_t x338 = INT16_MIN;
	volatile int16_t x339 = INT16_MAX;
	uint8_t x340 = 36U;
	volatile int32_t t80 = 1;

	t80 = (x337+((x338%x339)<x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = -230;
	volatile int16_t x342 = -1;
	uint8_t x343 = 4U;
	int64_t x344 = INT64_MIN;
	static volatile int32_t t81 = -2;

	t81 = (x341+((x342%x343)<x344));

	if (t81 != -230) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x346 = -1;
	int16_t x347 = -31;
	int8_t x348 = 2;
	int32_t t82 = -4;

	t82 = (x345+((x346%x347)<x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = INT16_MIN;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x349+((x350%x351)<x352));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = 55;
	int64_t x355 = INT64_MIN;
	uint64_t x356 = 1130386040240LLU;
	int32_t t84 = -152859;

	t84 = (x353+((x354%x355)<x356));

	if (t84 != 55) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = 5993LL;
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MAX;
	uint8_t x360 = 2U;
	volatile int64_t t85 = -316548924008LL;

	t85 = (x357+((x358%x359)<x360));

	if (t85 != 5994LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x362 = INT8_MIN;
	uint32_t t86 = 3738611U;

	t86 = (x361+((x362%x363)<x364));

	if (t86 != 254529U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x365 = -31;
	int8_t x366 = INT8_MIN;
	int32_t x367 = INT32_MAX;
	int8_t x368 = 0;
	volatile int32_t t87 = 1;

	t87 = (x365+((x366%x367)<x368));

	if (t87 != -30) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x370 = -1LL;
	int32_t x372 = INT32_MIN;
	volatile int32_t t88 = 86878643;

	t88 = (x369+((x370%x371)<x372));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = 169740247384563LL;
	int32_t x375 = 59248893;
	static int64_t x376 = 15947520LL;
	int64_t t89 = 2756LL;

	t89 = (x373+((x374%x375)<x376));

	if (t89 != 169740247384563LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MIN;
	int32_t x378 = -1;
	int64_t x379 = -1243499LL;
	int8_t x380 = INT8_MIN;
	volatile int32_t t90 = -30661;

	t90 = (x377+((x378%x379)<x380));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	int16_t x384 = -61;
	volatile int32_t t91 = 106155029;

	t91 = (x381+((x382%x383)<x384));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x385 = -472671LL;
	uint16_t x386 = 8U;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	int64_t t92 = 370406664LL;

	t92 = (x385+((x386%x387)<x388));

	if (t92 != -472671LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = INT32_MIN;
	int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MIN;
	int32_t t93 = -602307;

	t93 = (x389+((x390%x391)<x392));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x393 = UINT16_MAX;
	static int32_t x394 = -491;
	static int32_t x395 = INT32_MIN;
	uint16_t x396 = 7U;
	static int32_t t94 = -573587517;

	t94 = (x393+((x394%x395)<x396));

	if (t94 != 65536) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x398 = INT32_MIN;
	uint64_t x399 = 88249LLU;
	int16_t x400 = INT16_MAX;
	static int32_t t95 = -52;

	t95 = (x397+((x398%x399)<x400));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x401 = 1856096U;
	int16_t x402 = INT16_MIN;
	uint16_t x404 = 30U;
	uint32_t t96 = 55992U;

	t96 = (x401+((x402%x403)<x404));

	if (t96 != 1856097U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = -1;
	int32_t x406 = 122321242;
	volatile uint16_t x407 = 3U;
	int32_t t97 = 1;

	t97 = (x405+((x406%x407)<x408));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = -30;
	uint32_t x410 = 80U;
	volatile int32_t t98 = -29946347;

	t98 = (x409+((x410%x411)<x412));

	if (t98 != -30) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x413 = 1167611381391560967LLU;
	int8_t x414 = INT8_MAX;
	int32_t x415 = INT32_MAX;
	volatile uint64_t t99 = 23LLU;

	t99 = (x413+((x414%x415)<x416));

	if (t99 != 1167611381391560967LLU) { NG(); } else { ; }
	
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

