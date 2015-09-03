#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = -51;
static int32_t t1 = -8102;
static int16_t x12 = -1;
int8_t x21 = INT8_MIN;
static uint8_t x22 = UINT8_MAX;
int16_t x23 = INT16_MAX;
int32_t x26 = 215521;
int32_t t7 = -129864;
volatile int64_t x42 = INT64_MIN;
uint32_t x43 = UINT32_MAX;
uint64_t x52 = 384666285019020LLU;
int16_t x70 = INT16_MIN;
uint64_t x77 = UINT64_MAX;
int8_t x83 = INT8_MIN;
int8_t x88 = -1;
int8_t x89 = INT8_MIN;
volatile int16_t x90 = INT16_MIN;
static uint32_t x93 = UINT32_MAX;
static uint16_t x94 = 5868U;
uint8_t x95 = 3U;
static int32_t x103 = 12150225;
int64_t x109 = INT64_MAX;
int64_t t25 = INT64_MAX;
uint32_t t27 = 647209U;
static volatile uint8_t x123 = 7U;
int64_t t28 = 89203789007LL;
uint64_t x129 = UINT64_MAX;
static int16_t x131 = INT16_MIN;
int16_t x136 = INT16_MIN;
volatile int8_t x138 = 8;
static int8_t x144 = INT8_MIN;
volatile uint32_t t33 = 458U;
volatile int32_t x145 = INT32_MAX;
int8_t x147 = 10;
int32_t x148 = INT32_MIN;
static uint32_t x151 = 2888916U;
static uint32_t x157 = UINT32_MAX;
int8_t x172 = -1;
volatile int64_t x188 = -2944829LL;
static uint16_t x199 = UINT16_MAX;
int16_t x200 = -1;
static volatile uint32_t t48 = 95311U;
volatile uint64_t x210 = 477138107986LLU;
int8_t x211 = INT8_MIN;
volatile int32_t t50 = 90354250;
int64_t x219 = 55725708135439801LL;
uint16_t x220 = 324U;
volatile int64_t x224 = INT64_MAX;
int32_t x229 = INT32_MIN;
int32_t t55 = -201;
static uint16_t x239 = 2U;
uint16_t x240 = 28U;
int16_t x248 = -11569;
int16_t x251 = -1;
uint32_t x254 = 0U;
int16_t x257 = 56;
int8_t x258 = -1;
uint32_t x265 = UINT32_MAX;
int32_t x278 = -1;
int32_t t67 = -3733;
static int32_t t69 = INT32_MIN;
int32_t x290 = INT32_MAX;
int32_t t71 = -2015;
uint16_t x299 = UINT16_MAX;
int32_t t72 = -2918088;
uint32_t x301 = 699U;
int64_t x304 = -3568362316010802793LL;
int32_t x305 = -227636;
int32_t x306 = -52;
volatile uint32_t x309 = 2766503U;
static int8_t x313 = INT8_MIN;
static int32_t t76 = 115;
int32_t x319 = INT32_MAX;
uint64_t t77 = 4619LLU;
int16_t x329 = -4;
volatile uint64_t x332 = UINT64_MAX;
static uint64_t x333 = 373970708778LLU;
static int32_t x338 = -125;
volatile int32_t t84 = -1005;
int32_t t87 = -1;
int16_t x371 = 1;
int64_t x377 = 4563807239061LL;
uint16_t x380 = 45U;
uint64_t x394 = 11289335065464LLU;
volatile int64_t x401 = INT64_MIN;
static volatile uint16_t x407 = 3784U;
volatile uint8_t x411 = UINT8_MAX;
volatile int8_t x412 = INT8_MIN;
int32_t t97 = 96;
int64_t x414 = -396231060261LL;


void f0(void) {
	volatile uint8_t x1 = 23U;
	int16_t x2 = 26;
	static uint16_t x4 = 28U;
	static volatile int32_t t0 = 2099;

	t0 = (x1+((x2/x3)<=x4));

	if (t0 != 24) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	volatile int32_t x6 = INT32_MIN;
	static uint64_t x7 = 323003231626930LLU;
	int16_t x8 = INT16_MIN;

	t1 = (x5+((x6/x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int32_t x10 = -12;
	int32_t x11 = INT32_MIN;
	volatile int32_t t2 = INT32_MIN;

	t2 = (x9+((x10/x11)<=x12));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int16_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	int64_t x16 = 66438316278LL;
	volatile uint64_t t3 = 1124180616261LLU;

	t3 = (x13+((x14/x15)<=x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -879;
	int32_t x18 = INT32_MAX;
	int64_t x19 = INT64_MIN;
	int32_t x20 = 5;
	int32_t t4 = 2;

	t4 = (x17+((x18/x19)<=x20));

	if (t4 != -878) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x24 = 0U;
	volatile int32_t t5 = -1010;

	t5 = (x21+((x22/x23)<=x24));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	static uint32_t x27 = UINT32_MAX;
	uint8_t x28 = 2U;
	static volatile int64_t t6 = 837LL;

	t6 = (x25+((x26/x27)<=x28));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -10;
	int8_t x30 = -1;
	int16_t x31 = INT16_MIN;
	uint8_t x32 = 2U;

	t7 = (x29+((x30/x31)<=x32));

	if (t7 != -9) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -4236946005LL;
	int8_t x38 = -1;
	uint8_t x39 = 57U;
	uint64_t x40 = UINT64_MAX;
	int64_t t8 = -26690600787677596LL;

	t8 = (x37+((x38/x39)<=x40));

	if (t8 != -4236946004LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MAX;
	int32_t x44 = 23;
	static volatile int32_t t9 = -42;

	t9 = (x41+((x42/x43)<=x44));

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	volatile int64_t x46 = -15784950794844LL;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;
	int64_t t10 = INT64_MAX;

	t10 = (x45+((x46/x47)<=x48));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 6;
	int32_t x50 = INT32_MIN;
	static uint32_t x51 = 4191006U;
	int32_t t11 = 91;

	t11 = (x49+((x50/x51)<=x52));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 800U;
	int8_t x54 = 22;
	uint16_t x55 = 28U;
	uint32_t x56 = 15561U;
	int32_t t12 = 195648011;

	t12 = (x53+((x54/x55)<=x56));

	if (t12 != 801) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MAX;
	int64_t x62 = INT64_MIN;
	int64_t x63 = -52904735LL;
	static uint32_t x64 = 378987U;
	volatile int32_t t13 = 480;

	t13 = (x61+((x62/x63)<=x64));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x65 = 55784U;
	static int8_t x66 = -1;
	int16_t x67 = INT16_MIN;
	static uint32_t x68 = UINT32_MAX;
	volatile uint32_t t14 = 7885002U;

	t14 = (x65+((x66/x67)<=x68));

	if (t14 != 55785U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 0U;
	int32_t x71 = 5880;
	int8_t x72 = 31;
	volatile int32_t t15 = 42;

	t15 = (x69+((x70/x71)<=x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = -1LL;
	uint16_t x74 = UINT16_MAX;
	volatile int32_t x75 = INT32_MIN;
	static int8_t x76 = INT8_MAX;
	volatile int64_t t16 = 5588519LL;

	t16 = (x73+((x74/x75)<=x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x78 = 106U;
	static int32_t x79 = INT32_MIN;
	static int64_t x80 = INT64_MIN;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x77+((x78/x79)<=x80));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	int16_t x82 = INT16_MAX;
	volatile int16_t x84 = 397;
	int32_t t18 = 2175514;

	t18 = (x81+((x82/x83)<=x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -28;
	static int16_t x86 = 0;
	volatile uint64_t x87 = 9206484LLU;
	volatile int32_t t19 = 1;

	t19 = (x85+((x86/x87)<=x88));

	if (t19 != -27) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x91 = INT16_MIN;
	int64_t x92 = -1LL;
	volatile int32_t t20 = 1110;

	t20 = (x89+((x90/x91)<=x92));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x96 = INT8_MAX;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x93+((x94/x95)<=x96));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -1;
	int8_t x98 = INT8_MIN;
	uint32_t x99 = 3U;
	static uint64_t x100 = UINT64_MAX;
	static volatile int32_t t22 = 6330;

	t22 = (x97+((x98/x99)<=x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	uint32_t x102 = UINT32_MAX;
	uint16_t x104 = 40U;
	static int32_t t23 = -131777592;

	t23 = (x101+((x102/x103)<=x104));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = INT64_MIN;
	uint8_t x106 = UINT8_MAX;
	uint16_t x107 = UINT16_MAX;
	uint16_t x108 = UINT16_MAX;
	static volatile int64_t t24 = 703LL;

	t24 = (x105+((x106/x107)<=x108));

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x110 = -1;
	volatile uint8_t x111 = UINT8_MAX;
	int32_t x112 = INT32_MIN;

	t25 = (x109+((x110/x111)<=x112));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = 0;
	int16_t x114 = INT16_MIN;
	static int16_t x115 = 5953;
	uint16_t x116 = 7681U;
	volatile int32_t t26 = -20245074;

	t26 = (x113+((x114/x115)<=x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 593499U;
	uint32_t x118 = 4252761U;
	uint64_t x119 = 30776163850LLU;
	static int64_t x120 = INT64_MIN;

	t27 = (x117+((x118/x119)<=x120));

	if (t27 != 593500U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x121 = INT64_MIN;
	uint32_t x122 = 5658U;
	int8_t x124 = INT8_MIN;

	t28 = (x121+((x122/x123)<=x124));

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 3U;
	int8_t x126 = INT8_MIN;
	static int32_t x127 = -1;
	volatile uint64_t x128 = 0LLU;
	int32_t t29 = 5954;

	t29 = (x125+((x126/x127)<=x128));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x130 = UINT64_MAX;
	volatile int16_t x132 = INT16_MIN;
	uint64_t t30 = 78148051LLU;

	t30 = (x129+((x130/x131)<=x132));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MAX;
	int32_t x134 = -2;
	uint32_t x135 = 993929U;
	volatile int32_t t31 = -2525903;

	t31 = (x133+((x134/x135)<=x136));

	if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -31;
	int32_t x139 = INT32_MIN;
	uint16_t x140 = 0U;
	static volatile int32_t t32 = -229285;

	t32 = (x137+((x138/x139)<=x140));

	if (t32 != -30) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 7821U;
	uint8_t x142 = 4U;
	static int8_t x143 = 15;

	t33 = (x141+((x142/x143)<=x144));

	if (t33 != 7821U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x146 = UINT8_MAX;
	volatile int32_t t34 = INT32_MAX;

	t34 = (x145+((x146/x147)<=x148));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	static uint64_t x150 = 26940793555080LLU;
	uint16_t x152 = 4567U;
	int32_t t35 = 498424375;

	t35 = (x149+((x150/x151)<=x152));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 87U;
	int64_t x154 = INT64_MIN;
	uint8_t x155 = 11U;
	int8_t x156 = -58;
	int32_t t36 = 871;

	t36 = (x153+((x154/x155)<=x156));

	if (t36 != 88) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = 39;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = -8;
	uint32_t t37 = 3756U;

	t37 = (x157+((x158/x159)<=x160));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x161 = 54U;
	volatile int16_t x162 = 296;
	int16_t x163 = -2107;
	int32_t x164 = -1;
	int32_t t38 = 2073206;

	t38 = (x161+((x162/x163)<=x164));

	if (t38 != 54) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x165 = UINT8_MAX;
	uint64_t x166 = UINT64_MAX;
	int32_t x167 = 14;
	int16_t x168 = -1;
	int32_t t39 = 1550;

	t39 = (x165+((x166/x167)<=x168));

	if (t39 != 256) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 22U;
	int8_t x170 = INT8_MAX;
	int16_t x171 = 1;
	volatile int32_t t40 = -29;

	t40 = (x169+((x170/x171)<=x172));

	if (t40 != 22) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -1LL;
	uint16_t x174 = UINT16_MAX;
	int32_t x175 = INT32_MIN;
	int16_t x176 = 4010;
	volatile int64_t t41 = -160756373214779LL;

	t41 = (x173+((x174/x175)<=x176));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = -6;
	int32_t x179 = INT32_MAX;
	volatile uint64_t x180 = UINT64_MAX;
	static int64_t t42 = -161033998LL;

	t42 = (x177+((x178/x179)<=x180));

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 8U;
	uint64_t x182 = 118666517LLU;
	volatile int8_t x183 = INT8_MAX;
	uint16_t x184 = 342U;
	static int32_t t43 = 3056;

	t43 = (x181+((x182/x183)<=x184));

	if (t43 != 8) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = INT32_MIN;
	volatile uint32_t x186 = 1694593297U;
	static volatile int32_t x187 = INT32_MIN;
	static volatile int32_t t44 = INT32_MIN;

	t44 = (x185+((x186/x187)<=x188));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = 0;
	int16_t x190 = 3126;
	int32_t x191 = INT32_MIN;
	int8_t x192 = -2;
	volatile int32_t t45 = 0;

	t45 = (x189+((x190/x191)<=x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	volatile uint32_t x194 = 17202U;
	int32_t x195 = INT32_MAX;
	static int32_t x196 = INT32_MIN;
	int64_t t46 = 6899029877303LL;

	t46 = (x193+((x194/x195)<=x196));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x197 = 33167LLU;
	int16_t x198 = 10;
	uint64_t t47 = 119158973185052LLU;

	t47 = (x197+((x198/x199)<=x200));

	if (t47 != 33167LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int16_t x202 = INT16_MAX;
	uint16_t x203 = 18140U;
	int16_t x204 = INT16_MAX;

	t48 = (x201+((x202/x203)<=x204));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MAX;
	static int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MIN;
	static int64_t x208 = -1LL;
	volatile int64_t t49 = INT64_MAX;

	t49 = (x205+((x206/x207)<=x208));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 15441U;
	uint16_t x212 = 6U;

	t50 = (x209+((x210/x211)<=x212));

	if (t50 != 15442) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = INT64_MIN;
	static volatile uint32_t x214 = 93396U;
	volatile int8_t x215 = INT8_MIN;
	static int64_t x216 = -1LL;
	volatile int64_t t51 = INT64_MIN;

	t51 = (x213+((x214/x215)<=x216));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = 7U;
	uint64_t x218 = UINT64_MAX;
	static volatile int32_t t52 = 40609109;

	t52 = (x217+((x218/x219)<=x220));

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -633;
	static int64_t x222 = -1LL;
	uint32_t x223 = 1U;
	int32_t t53 = 1936;

	t53 = (x221+((x222/x223)<=x224));

	if (t53 != -632) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x225 = UINT32_MAX;
	int8_t x226 = -1;
	volatile int8_t x227 = -1;
	uint16_t x228 = 2483U;
	static volatile uint32_t t54 = 3U;

	t54 = (x225+((x226/x227)<=x228));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x230 = 1748;
	uint8_t x231 = 1U;
	volatile uint32_t x232 = 2961U;

	t55 = (x229+((x230/x231)<=x232));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x233 = INT64_MIN;
	int16_t x234 = INT16_MIN;
	volatile uint16_t x235 = 20287U;
	int8_t x236 = INT8_MIN;
	volatile int64_t t56 = INT64_MIN;

	t56 = (x233+((x234/x235)<=x236));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = UINT64_MAX;
	static volatile int32_t x238 = INT32_MIN;
	volatile uint64_t t57 = 294085344760705LLU;

	t57 = (x237+((x238/x239)<=x240));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x241 = 12751;
	volatile uint64_t x242 = 879154LLU;
	int32_t x243 = -1;
	static uint16_t x244 = UINT16_MAX;
	static volatile int32_t t58 = 26654;

	t58 = (x241+((x242/x243)<=x244));

	if (t58 != 12752) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x245 = UINT32_MAX;
	int16_t x246 = 121;
	uint8_t x247 = UINT8_MAX;
	static uint32_t t59 = UINT32_MAX;

	t59 = (x245+((x246/x247)<=x248));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MAX;
	int16_t x252 = -1;
	volatile uint32_t t60 = 9376090U;

	t60 = (x249+((x250/x251)<=x252));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 11099U;
	int16_t x255 = 7;
	static int32_t x256 = INT32_MIN;
	static volatile uint32_t t61 = 13405U;

	t61 = (x253+((x254/x255)<=x256));

	if (t61 != 11100U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x259 = INT64_MIN;
	static volatile int64_t x260 = INT64_MIN;
	volatile int32_t t62 = 4162108;

	t62 = (x257+((x258/x259)<=x260));

	if (t62 != 56) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x261 = 0U;
	volatile int32_t x262 = -96;
	static int64_t x263 = INT64_MIN;
	int32_t x264 = -4;
	static volatile int32_t t63 = -341150;

	t63 = (x261+((x262/x263)<=x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x266 = 337U;
	uint16_t x267 = 99U;
	int32_t x268 = -1;
	volatile uint32_t t64 = 3940796U;

	t64 = (x265+((x266/x267)<=x268));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x269 = 115492062105LLU;
	int64_t x270 = -1LL;
	uint64_t x271 = 8535509134127742LLU;
	volatile int8_t x272 = INT8_MAX;
	volatile uint64_t t65 = 4480LLU;

	t65 = (x269+((x270/x271)<=x272));

	if (t65 != 115492062105LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x273 = 48937944LL;
	static int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	int16_t x276 = -1;
	int64_t t66 = 51725355389373598LL;

	t66 = (x273+((x274/x275)<=x276));

	if (t66 != 48937944LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x277 = 1231U;
	volatile int64_t x279 = INT64_MIN;
	static uint16_t x280 = UINT16_MAX;

	t67 = (x277+((x278/x279)<=x280));

	if (t67 != 1232) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = 1177917272U;
	volatile uint8_t x282 = 1U;
	volatile int32_t x283 = -1;
	int16_t x284 = -1336;
	static uint32_t t68 = 1877442651U;

	t68 = (x281+((x282/x283)<=x284));

	if (t68 != 1177917272U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x285 = INT32_MIN;
	int64_t x286 = -1LL;
	int32_t x287 = 466;
	int64_t x288 = -1LL;

	t69 = (x285+((x286/x287)<=x288));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = UINT64_MAX;
	uint16_t x291 = 1474U;
	static int32_t x292 = INT32_MIN;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x289+((x290/x291)<=x292));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = -1;
	static uint64_t x294 = 151064252LLU;
	int16_t x295 = INT16_MAX;
	static uint64_t x296 = 7548904002170745LLU;

	t71 = (x293+((x294/x295)<=x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MIN;
	uint32_t x298 = 32421U;
	uint8_t x300 = 21U;

	t72 = (x297+((x298/x299)<=x300));

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x302 = 21U;
	static uint64_t x303 = 73119703264079LLU;
	volatile uint32_t t73 = 724635U;

	t73 = (x301+((x302/x303)<=x304));

	if (t73 != 700U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x307 = 29U;
	static volatile int64_t x308 = INT64_MAX;
	volatile int32_t t74 = 14;

	t74 = (x305+((x306/x307)<=x308));

	if (t74 != -227635) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x310 = 25;
	uint32_t x311 = 1U;
	int8_t x312 = INT8_MIN;
	uint32_t t75 = 58063289U;

	t75 = (x309+((x310/x311)<=x312));

	if (t75 != 2766504U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x314 = 233874141;
	uint64_t x315 = UINT64_MAX;
	int8_t x316 = INT8_MAX;

	t76 = (x313+((x314/x315)<=x316));

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = 9635208113601148LLU;
	int16_t x318 = -1;
	uint64_t x320 = 8LLU;

	t77 = (x317+((x318/x319)<=x320));

	if (t77 != 9635208113601149LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x321 = INT8_MIN;
	uint16_t x322 = 1297U;
	uint16_t x323 = 14740U;
	uint32_t x324 = 958U;
	int32_t t78 = -1;

	t78 = (x321+((x322/x323)<=x324));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = -1;
	static int64_t x326 = INT64_MIN;
	static int8_t x327 = -3;
	int64_t x328 = INT64_MIN;
	volatile int32_t t79 = 0;

	t79 = (x325+((x326/x327)<=x328));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x330 = INT8_MIN;
	volatile uint64_t x331 = UINT64_MAX;
	static volatile int32_t t80 = 4819882;

	t80 = (x329+((x330/x331)<=x332));

	if (t80 != -3) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = -4;
	static int32_t x336 = INT32_MIN;
	uint64_t t81 = 1352069061LLU;

	t81 = (x333+((x334/x335)<=x336));

	if (t81 != 373970708778LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x337 = 140926U;
	volatile uint8_t x339 = 62U;
	int16_t x340 = INT16_MIN;
	static volatile uint32_t t82 = 14U;

	t82 = (x337+((x338/x339)<=x340));

	if (t82 != 140926U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MAX;
	volatile int8_t x342 = INT8_MAX;
	uint32_t x343 = 125U;
	volatile int64_t x344 = 73142LL;
	static volatile int32_t t83 = 241;

	t83 = (x341+((x342/x343)<=x344));

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x353 = -1;
	uint8_t x354 = 11U;
	uint16_t x355 = 7821U;
	int8_t x356 = -24;

	t84 = (x353+((x354/x355)<=x356));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x357 = -1;
	static int32_t x358 = INT32_MAX;
	uint32_t x359 = 17237U;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t85 = 1;

	t85 = (x357+((x358/x359)<=x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 929LLU;
	uint16_t x362 = 0U;
	uint16_t x363 = UINT16_MAX;
	uint64_t x364 = 1688566845177802LLU;
	volatile uint64_t t86 = 9LLU;

	t86 = (x361+((x362/x363)<=x364));

	if (t86 != 930LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MIN;
	volatile int32_t x367 = INT32_MIN;
	volatile int32_t x368 = INT32_MIN;

	t87 = (x365+((x366/x367)<=x368));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = -3388767LL;
	static int32_t x370 = INT32_MAX;
	static int16_t x372 = 10486;
	volatile int64_t t88 = 14204069673649593LL;

	t88 = (x369+((x370/x371)<=x372));

	if (t88 != -3388767LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = 240;
	uint64_t x374 = 262036LLU;
	volatile int8_t x375 = -1;
	int16_t x376 = INT16_MAX;
	volatile int32_t t89 = 27765921;

	t89 = (x373+((x374/x375)<=x376));

	if (t89 != 241) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MIN;
	volatile int64_t t90 = -11348774LL;

	t90 = (x377+((x378/x379)<=x380));

	if (t90 != 4563807239062LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x382 = 1U;
	int32_t x383 = INT32_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t91 = -116;

	t91 = (x381+((x382/x383)<=x384));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x385 = -1026LL;
	static volatile int16_t x386 = -1;
	uint64_t x387 = 272336525291718486LLU;
	int8_t x388 = INT8_MIN;
	int64_t t92 = -146613839703945894LL;

	t92 = (x385+((x386/x387)<=x388));

	if (t92 != -1025LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = -1;
	int64_t x390 = -42891270628390LL;
	uint16_t x391 = UINT16_MAX;
	static uint32_t x392 = UINT32_MAX;
	int32_t t93 = -314849;

	t93 = (x389+((x390/x391)<=x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MIN;
	int64_t x395 = INT64_MAX;
	volatile uint8_t x396 = 15U;
	volatile int32_t t94 = -944466;

	t94 = (x393+((x394/x395)<=x396));

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x402 = INT16_MIN;
	int16_t x403 = 69;
	volatile uint8_t x404 = 4U;
	int64_t t95 = 4240917123678255LL;

	t95 = (x401+((x402/x403)<=x404));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x405 = INT32_MIN;
	int64_t x406 = 18551924360LL;
	int32_t x408 = INT32_MAX;
	volatile int32_t t96 = 407;

	t96 = (x405+((x406/x407)<=x408));

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = UINT16_MAX;
	static int16_t x410 = INT16_MIN;

	t97 = (x409+((x410/x411)<=x412));

	if (t97 != 65536) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = INT8_MAX;
	int8_t x415 = 4;
	int8_t x416 = -1;
	static volatile int32_t t98 = -43;

	t98 = (x413+((x414/x415)<=x416));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int16_t x418 = 1;
	uint8_t x419 = UINT8_MAX;
	volatile int8_t x420 = INT8_MAX;
	uint64_t t99 = 20422309LLU;

	t99 = (x417+((x418/x419)<=x420));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

