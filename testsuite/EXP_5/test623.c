#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x6 = UINT32_MAX;
uint32_t x11 = UINT32_MAX;
int32_t t3 = 68664;
int16_t x17 = 3016;
int32_t x33 = INT32_MAX;
static uint16_t x40 = UINT16_MAX;
uint64_t x41 = UINT64_MAX;
int8_t x43 = INT8_MAX;
int8_t x58 = INT8_MAX;
int32_t x59 = -1;
volatile int32_t t16 = 2;
static int16_t x71 = -1;
int16_t x87 = 83;
static volatile int32_t t20 = 13;
volatile uint64_t x89 = 9208905442893LLU;
volatile uint64_t x90 = UINT64_MAX;
volatile int8_t x93 = 5;
volatile int32_t x94 = 47584;
static uint16_t x95 = 3U;
volatile int32_t t22 = 29225;
volatile int32_t t23 = -1092979;
int64_t x101 = -1LL;
static uint32_t x106 = 5560322U;
uint8_t x113 = 7U;
uint32_t x120 = UINT32_MAX;
volatile int16_t x122 = INT16_MIN;
uint8_t x127 = 3U;
int64_t x128 = INT64_MAX;
static int8_t x133 = -5;
volatile int32_t t33 = 6;
int8_t x141 = -41;
static volatile int32_t t34 = -958610;
static int8_t x147 = INT8_MAX;
uint16_t x148 = 465U;
volatile uint32_t x159 = 3126U;
uint32_t x160 = UINT32_MAX;
static int64_t x166 = INT64_MAX;
int8_t x170 = -1;
static volatile int64_t t41 = -217805394532185LL;
int16_t x173 = -1;
int32_t x176 = -1;
int16_t x186 = -1;
uint32_t x188 = 398U;
volatile int64_t t44 = -301828905241LL;
int8_t x189 = INT8_MIN;
uint16_t x195 = UINT16_MAX;
int32_t x197 = INT32_MIN;
int32_t x201 = -1;
static uint16_t x202 = 33U;
uint64_t x203 = 1890453280486LLU;
volatile int8_t x204 = INT8_MAX;
int16_t x207 = INT16_MIN;
uint8_t x208 = UINT8_MAX;
static int32_t t50 = -477;
int8_t x222 = INT8_MAX;
int16_t x226 = -1;
int16_t x227 = INT16_MIN;
uint16_t x228 = UINT16_MAX;
int8_t x234 = -1;
uint64_t x242 = 812998610LLU;
int8_t x252 = -1;
volatile int32_t t59 = 9423;
uint16_t x254 = 11U;
volatile int32_t t60 = 716;
static int32_t x258 = INT32_MIN;
static volatile int32_t t61 = -10199636;
volatile uint32_t x262 = 1919160U;
static uint32_t x264 = 8U;
int32_t x273 = -1;
static int8_t x274 = INT8_MIN;
int32_t t65 = -521425;
static int64_t x277 = INT64_MIN;
static uint64_t x279 = 4LLU;
volatile int8_t x282 = -1;
int16_t x283 = -1;
static uint64_t x287 = 8523399100542950LLU;
uint16_t x290 = 88U;
int32_t x296 = INT32_MIN;
int16_t x298 = 0;
volatile uint64_t x300 = UINT64_MAX;
int8_t x302 = INT8_MIN;
volatile uint32_t x303 = UINT32_MAX;
volatile int64_t x305 = -22238LL;
volatile uint16_t x313 = 30U;
volatile int32_t t75 = -10023434;
uint8_t x321 = 63U;
int16_t x324 = INT16_MAX;
int32_t t77 = 31954;
static int64_t x332 = INT64_MIN;
static volatile int16_t x336 = -71;
int8_t x338 = -12;
int32_t t83 = -7248337;
int8_t x352 = 11;
volatile int64_t t84 = INT64_MAX;
volatile int8_t x359 = INT8_MIN;
volatile int32_t t86 = 28;
int8_t x361 = INT8_MIN;
int32_t x363 = INT32_MIN;
int32_t x364 = 725078686;
int32_t x366 = 722;
volatile int32_t t91 = -1062250630;
volatile uint32_t x383 = 512620059U;
uint32_t x396 = 1291286365U;
int32_t t95 = -447739;
uint32_t x400 = 5909U;
uint32_t x407 = 1U;


void f0(void) {
	uint8_t x1 = 10U;
	uint64_t x2 = 9669LLU;
	int8_t x3 = INT8_MIN;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -100;

	t0 = (x1|((x2/x3)<x4));

	if (t0 != 11) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 58585953U;
	volatile int16_t x7 = INT16_MAX;
	int32_t x8 = INT32_MIN;
	static volatile uint32_t t1 = 528881U;

	t1 = (x5|((x6/x7)<x8));

	if (t1 != 58585953U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 1222931069296641LL;
	int64_t x10 = -13497495LL;
	static volatile uint8_t x12 = UINT8_MAX;
	volatile int64_t t2 = 16043245LL;

	t2 = (x9|((x10/x11)<x12));

	if (t2 != 1222931069296641LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int64_t x14 = INT64_MIN;
	volatile uint32_t x15 = 100U;
	int64_t x16 = -1LL;

	t3 = (x13|((x14/x15)<x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 3817217667771286098LLU;
	volatile int64_t x20 = -875162LL;
	int32_t t4 = 0;

	t4 = (x17|((x18/x19)<x20));

	if (t4 != 3017) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = 5114057303135LL;
	volatile int32_t x23 = -739;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -14298057;

	t5 = (x21|((x22/x23)<x24));

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -1;
	static uint8_t x26 = 3U;
	volatile int16_t x27 = -1;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 6684;

	t6 = (x25|((x26/x27)<x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int8_t x30 = INT8_MAX;
	int64_t x31 = -1LL;
	static int16_t x32 = INT16_MIN;
	int32_t t7 = INT32_MAX;

	t7 = (x29|((x30/x31)<x32));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x34 = 17U;
	int64_t x35 = INT64_MIN;
	static int8_t x36 = INT8_MAX;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x33|((x34/x35)<x36));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint64_t x38 = 226LLU;
	volatile int32_t x39 = INT32_MIN;
	static int32_t t9 = -60010141;

	t9 = (x37|((x38/x39)<x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = -5290;
	static int32_t x44 = 238;
	uint64_t t10 = UINT64_MAX;

	t10 = (x41|((x42/x43)<x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 11U;
	int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MAX;
	static int64_t x48 = -37978059LL;
	static int32_t t11 = -1683;

	t11 = (x45|((x46/x47)<x48));

	if (t11 != 11) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x49 = INT8_MIN;
	static uint16_t x50 = 3909U;
	volatile int32_t x51 = -1;
	int32_t x52 = 1;
	volatile int32_t t12 = 28;

	t12 = (x49|((x50/x51)<x52));

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int16_t x54 = 197;
	int32_t x55 = -1289678;
	int32_t x56 = -1;
	static int64_t t13 = INT64_MAX;

	t13 = (x53|((x54/x55)<x56));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = UINT8_MAX;
	static uint64_t x60 = 4604080694134445LLU;
	volatile int32_t t14 = 233030705;

	t14 = (x57|((x58/x59)<x60));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MAX;
	int32_t x62 = INT32_MIN;
	uint8_t x63 = 5U;
	int8_t x64 = INT8_MAX;
	int32_t t15 = -91625569;

	t15 = (x61|((x62/x63)<x64));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -1208;
	int32_t x66 = INT32_MIN;
	static uint64_t x67 = 31976505376790132LLU;
	int64_t x68 = -1LL;

	t16 = (x65|((x66/x67)<x68));

	if (t16 != -1207) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = 22U;
	uint8_t x70 = UINT8_MAX;
	volatile uint8_t x72 = 19U;
	int32_t t17 = 3;

	t17 = (x69|((x70/x71)<x72));

	if (t17 != 23) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int16_t x74 = INT16_MIN;
	static volatile uint32_t x75 = UINT32_MAX;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -59257;

	t18 = (x73|((x74/x75)<x76));

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	volatile int32_t x82 = -2;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t19 = -8359230;

	t19 = (x81|((x82/x83)<x84));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x85 = 11U;
	int64_t x86 = INT64_MAX;
	int16_t x88 = INT16_MIN;

	t20 = (x85|((x86/x87)<x88));

	if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x91 = 1;
	int32_t x92 = INT32_MAX;
	volatile uint64_t t21 = 863LLU;

	t21 = (x89|((x90/x91)<x92));

	if (t21 != 9208905442893LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x96 = 154995699U;

	t22 = (x93|((x94/x95)<x96));

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = UINT8_MAX;
	volatile int8_t x98 = INT8_MAX;
	int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MIN;

	t23 = (x97|((x98/x99)<x100));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x102 = INT8_MIN;
	int8_t x103 = -18;
	uint32_t x104 = 59736885U;
	volatile int64_t t24 = 40009875693779LL;

	t24 = (x101|((x102/x103)<x104));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = 390;
	volatile int64_t x107 = -1LL;
	int8_t x108 = INT8_MIN;
	volatile int32_t t25 = -3647790;

	t25 = (x105|((x106/x107)<x108));

	if (t25 != 391) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = UINT64_MAX;
	int16_t x110 = -1;
	int8_t x111 = -1;
	volatile int32_t x112 = -11631;
	uint64_t t26 = UINT64_MAX;

	t26 = (x109|((x110/x111)<x112));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = INT16_MAX;
	uint32_t x115 = UINT32_MAX;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t27 = -45562452;

	t27 = (x113|((x114/x115)<x116));

	if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -142866487;
	int16_t x118 = -816;
	volatile uint8_t x119 = UINT8_MAX;
	volatile int32_t t28 = 24335157;

	t28 = (x117|((x118/x119)<x120));

	if (t28 != -142866487) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = UINT64_MAX;
	uint16_t x123 = 15689U;
	uint32_t x124 = 426150U;
	uint64_t t29 = UINT64_MAX;

	t29 = (x121|((x122/x123)<x124));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x125 = INT64_MIN;
	int64_t x126 = -4502436157025LL;
	int64_t t30 = -7520243276729710LL;

	t30 = (x125|((x126/x127)<x128));

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x129 = -1;
	int32_t x130 = -1;
	static int64_t x131 = INT64_MAX;
	int8_t x132 = 48;
	static volatile int32_t t31 = 873003877;

	t31 = (x129|((x130/x131)<x132));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x134 = INT8_MIN;
	static volatile int16_t x135 = 7;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t32 = 6753790;

	t32 = (x133|((x134/x135)<x136));

	if (t32 != -5) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -119;
	static volatile int32_t x138 = -1;
	int16_t x139 = 3;
	int64_t x140 = INT64_MIN;

	t33 = (x137|((x138/x139)<x140));

	if (t33 != -119) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x142 = -1092LL;
	volatile int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;

	t34 = (x141|((x142/x143)<x144));

	if (t34 != -41) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 30LLU;
	int64_t x146 = -19LL;
	uint64_t t35 = 76599LLU;

	t35 = (x145|((x146/x147)<x148));

	if (t35 != 31LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 9U;
	int64_t x150 = -4466123008757667189LL;
	int8_t x151 = -1;
	int8_t x152 = 0;
	int32_t t36 = 12;

	t36 = (x149|((x150/x151)<x152));

	if (t36 != 9) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = INT16_MAX;
	int16_t x154 = 10701;
	volatile int64_t x155 = 10215429789227LL;
	uint32_t x156 = 108089U;
	static volatile int32_t t37 = 41623;

	t37 = (x153|((x154/x155)<x156));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = 31;
	uint32_t x158 = 1692459U;
	int32_t t38 = -181;

	t38 = (x157|((x158/x159)<x160));

	if (t38 != 31) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MIN;
	uint64_t x162 = UINT64_MAX;
	volatile uint32_t x163 = UINT32_MAX;
	static volatile int8_t x164 = INT8_MIN;
	volatile int64_t t39 = -594983684103737LL;

	t39 = (x161|((x162/x163)<x164));

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x165 = 0U;
	uint64_t x167 = 3977052349382071985LLU;
	int32_t x168 = -41744829;
	int32_t t40 = -8;

	t40 = (x165|((x166/x167)<x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = 10373903336LL;
	volatile int8_t x171 = INT8_MIN;
	uint32_t x172 = 31882967U;

	t41 = (x169|((x170/x171)<x172));

	if (t41 != 10373903337LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x174 = 5957098LLU;
	int32_t x175 = INT32_MIN;
	volatile int32_t t42 = 68826;

	t42 = (x173|((x174/x175)<x176));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = INT8_MIN;
	static int16_t x178 = INT16_MIN;
	uint64_t x179 = UINT64_MAX;
	uint16_t x180 = 31U;
	int32_t t43 = 1011410;

	t43 = (x177|((x178/x179)<x180));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -1LL;
	static uint32_t x187 = 1U;

	t44 = (x185|((x186/x187)<x188));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MAX;
	int32_t x192 = -349291808;
	static int32_t t45 = -14;

	t45 = (x189|((x190/x191)<x192));

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x193 = UINT64_MAX;
	static int64_t x194 = INT64_MAX;
	uint8_t x196 = 7U;
	uint64_t t46 = UINT64_MAX;

	t46 = (x193|((x194/x195)<x196));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x198 = UINT64_MAX;
	int32_t x199 = -1;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t47 = 111;

	t47 = (x197|((x198/x199)<x200));

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t t48 = -221130;

	t48 = (x201|((x202/x203)<x204));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x205 = UINT16_MAX;
	static int16_t x206 = INT16_MAX;
	int32_t t49 = -315997011;

	t49 = (x205|((x206/x207)<x208));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MAX;

	t50 = (x213|((x214/x215)<x216));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = -1LL;
	int8_t x218 = -1;
	int8_t x219 = 12;
	int8_t x220 = INT8_MAX;
	int64_t t51 = -1317LL;

	t51 = (x217|((x218/x219)<x220));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -147385611;
	volatile int32_t x223 = -1;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t52 = -17285;

	t52 = (x221|((x222/x223)<x224));

	if (t52 != -147385611) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = UINT8_MAX;
	volatile int32_t t53 = -1722486;

	t53 = (x225|((x226/x227)<x228));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x229 = UINT16_MAX;
	static volatile int8_t x230 = 48;
	static int8_t x231 = 48;
	uint64_t x232 = 18LLU;
	static volatile int32_t t54 = -2658;

	t54 = (x229|((x230/x231)<x232));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = 4228;
	static volatile int16_t x235 = -204;
	int32_t x236 = INT32_MIN;
	int32_t t55 = 11078;

	t55 = (x233|((x234/x235)<x236));

	if (t55 != 4228) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = UINT8_MAX;
	int64_t x238 = -1LL;
	int16_t x239 = INT16_MAX;
	int16_t x240 = -1;
	volatile int32_t t56 = -89;

	t56 = (x237|((x238/x239)<x240));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x241 = INT16_MIN;
	uint64_t x243 = UINT64_MAX;
	static int64_t x244 = -1LL;
	volatile int32_t t57 = 2118345;

	t57 = (x241|((x242/x243)<x244));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x245 = 4096147U;
	uint32_t x246 = 70889U;
	volatile uint16_t x247 = 21U;
	volatile int64_t x248 = INT64_MAX;
	uint32_t t58 = 4155983U;

	t58 = (x245|((x246/x247)<x248));

	if (t58 != 4096147U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -1;
	uint16_t x250 = 0U;
	volatile uint64_t x251 = 1205069776LLU;

	t59 = (x249|((x250/x251)<x252));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x253 = 12U;
	static int32_t x255 = INT32_MIN;
	static int64_t x256 = -18761553954923LL;

	t60 = (x253|((x254/x255)<x256));

	if (t60 != 12) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = 1;
	static int16_t x259 = INT16_MIN;
	uint16_t x260 = 181U;

	t61 = (x257|((x258/x259)<x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = INT32_MIN;
	volatile uint32_t x263 = UINT32_MAX;
	static int32_t t62 = 16143;

	t62 = (x261|((x262/x263)<x264));

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -1;
	uint64_t x266 = 2LLU;
	int16_t x267 = INT16_MIN;
	static int32_t x268 = -29562044;
	int32_t t63 = -91442;

	t63 = (x265|((x266/x267)<x268));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -1;
	int8_t x270 = -1;
	static uint64_t x271 = 246537710795603LLU;
	uint32_t x272 = 14U;
	volatile int32_t t64 = -136965600;

	t64 = (x269|((x270/x271)<x272));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x275 = -1;
	int16_t x276 = INT16_MIN;

	t65 = (x273|((x274/x275)<x276));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x278 = UINT8_MAX;
	volatile int32_t x280 = -1;
	volatile int64_t t66 = 1LL;

	t66 = (x277|((x278/x279)<x280));

	if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 46U;
	int64_t x284 = -144LL;
	static volatile int32_t t67 = 0;

	t67 = (x281|((x282/x283)<x284));

	if (t67 != 46) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 33U;
	volatile int16_t x286 = -1;
	volatile uint8_t x288 = 16U;
	volatile int32_t t68 = 123;

	t68 = (x285|((x286/x287)<x288));

	if (t68 != 33) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = 78509598963747LLU;
	volatile uint64_t x291 = UINT64_MAX;
	uint16_t x292 = 1U;
	uint64_t t69 = 25630215LLU;

	t69 = (x289|((x290/x291)<x292));

	if (t69 != 78509598963747LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = UINT64_MAX;
	volatile uint64_t x294 = UINT64_MAX;
	int64_t x295 = INT64_MAX;
	uint64_t t70 = UINT64_MAX;

	t70 = (x293|((x294/x295)<x296));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = -1;
	int32_t x299 = INT32_MAX;
	int32_t t71 = 1022;

	t71 = (x297|((x298/x299)<x300));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x301 = -1;
	uint8_t x304 = 15U;
	volatile int32_t t72 = 7836;

	t72 = (x301|((x302/x303)<x304));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	uint8_t x308 = 5U;
	volatile int64_t t73 = 40LL;

	t73 = (x305|((x306/x307)<x308));

	if (t73 != -22237LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MIN;
	static int8_t x310 = -1;
	int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	static int32_t t74 = 1104517;

	t74 = (x309|((x310/x311)<x312));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x314 = INT64_MIN;
	uint32_t x315 = 8U;
	int32_t x316 = INT32_MIN;

	t75 = (x313|((x314/x315)<x316));

	if (t75 != 31) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = INT8_MIN;
	volatile int64_t x318 = -1LL;
	static volatile int32_t x319 = 908719;
	int32_t x320 = INT32_MIN;
	volatile int32_t t76 = 19;

	t76 = (x317|((x318/x319)<x320));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x322 = 1608569070545891680LLU;
	int8_t x323 = INT8_MIN;

	t77 = (x321|((x322/x323)<x324));

	if (t77 != 63) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x325 = INT16_MIN;
	int64_t x326 = 4609541487607700710LL;
	int64_t x327 = INT64_MAX;
	uint8_t x328 = 94U;
	int32_t t78 = 32719;

	t78 = (x325|((x326/x327)<x328));

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = -1;
	static uint8_t x331 = 12U;
	int32_t t79 = INT32_MIN;

	t79 = (x329|((x330/x331)<x332));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	volatile int16_t x335 = INT16_MIN;
	volatile int32_t t80 = 164899;

	t80 = (x333|((x334/x335)<x336));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = -131477268LL;
	static uint64_t x339 = 30772952173LLU;
	uint64_t x340 = UINT64_MAX;
	volatile int64_t t81 = -206LL;

	t81 = (x337|((x338/x339)<x340));

	if (t81 != -131477267LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x341 = INT32_MAX;
	int64_t x342 = INT64_MAX;
	int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t82 = INT32_MAX;

	t82 = (x341|((x342/x343)<x344));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x345 = INT8_MIN;
	volatile uint64_t x346 = 5954151LLU;
	int32_t x347 = -122;
	volatile int16_t x348 = INT16_MIN;

	t83 = (x345|((x346/x347)<x348));

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x349 = INT64_MAX;
	int16_t x350 = 5358;
	int16_t x351 = INT16_MIN;

	t84 = (x349|((x350/x351)<x352));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x353 = INT64_MIN;
	volatile int8_t x354 = INT8_MIN;
	uint64_t x355 = 58870721LLU;
	static uint64_t x356 = 8652379LLU;
	int64_t t85 = INT64_MIN;

	t85 = (x353|((x354/x355)<x356));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 51U;
	volatile int64_t x358 = INT64_MIN;
	uint8_t x360 = 3U;

	t86 = (x357|((x358/x359)<x360));

	if (t86 != 51) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x362 = INT32_MAX;
	volatile int32_t t87 = 3;

	t87 = (x361|((x362/x363)<x364));

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x365 = -23;
	int16_t x367 = -1;
	int32_t x368 = INT32_MAX;
	volatile int32_t t88 = -777210598;

	t88 = (x365|((x366/x367)<x368));

	if (t88 != -23) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int32_t x370 = 418750;
	uint16_t x371 = 831U;
	int8_t x372 = INT8_MIN;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (x369|((x370/x371)<x372));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x373 = 1473353LLU;
	int16_t x374 = 469;
	int32_t x375 = INT32_MIN;
	int16_t x376 = -1;
	uint64_t t90 = 3749127LLU;

	t90 = (x373|((x374/x375)<x376));

	if (t90 != 1473353LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x377 = 221U;
	int64_t x378 = 135508421298990LL;
	uint8_t x379 = UINT8_MAX;
	int32_t x380 = -1;

	t91 = (x377|((x378/x379)<x380));

	if (t91 != 221) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x382 = -7;
	static uint32_t x384 = 22U;
	int32_t t92 = 179186;

	t92 = (x381|((x382/x383)<x384));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x385 = 97U;
	int16_t x386 = 10;
	int16_t x387 = 172;
	uint16_t x388 = 456U;
	int32_t t93 = -2660;

	t93 = (x385|((x386/x387)<x388));

	if (t93 != 97) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x389 = INT8_MIN;
	uint16_t x390 = UINT16_MAX;
	int64_t x391 = 1592120147944928110LL;
	int16_t x392 = -1;
	static int32_t t94 = -1;

	t94 = (x389|((x390/x391)<x392));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x394 = -1;
	volatile uint32_t x395 = 3U;

	t95 = (x393|((x394/x395)<x396));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = INT16_MIN;
	volatile int8_t x398 = 0;
	int32_t x399 = INT32_MAX;
	int32_t t96 = -579978437;

	t96 = (x397|((x398/x399)<x400));

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -1;
	volatile int16_t x402 = -1;
	uint8_t x403 = 1U;
	volatile uint64_t x404 = 124421LLU;
	int32_t t97 = -48;

	t97 = (x401|((x402/x403)<x404));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MAX;
	static int64_t x406 = INT64_MIN;
	int16_t x408 = INT16_MAX;
	static volatile int32_t t98 = -30948970;

	t98 = (x405|((x406/x407)<x408));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x413 = UINT8_MAX;
	int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MIN;
	static uint8_t x416 = 0U;
	volatile int32_t t99 = 3468005;

	t99 = (x413|((x414/x415)<x416));

	if (t99 != 255) { NG(); } else { ; }
	
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

