#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x1 = -1LL;
volatile int16_t x5 = 1;
static uint16_t x7 = 4703U;
static int64_t x8 = -1LL;
int32_t t4 = 473;
uint64_t x24 = 5774948086488592LLU;
static volatile int64_t t6 = 7914563962LL;
uint64_t x29 = UINT64_MAX;
int8_t x30 = 14;
volatile uint8_t x31 = 0U;
int16_t x32 = -3;
uint8_t x33 = UINT8_MAX;
int64_t x38 = INT64_MAX;
static volatile int8_t x45 = -1;
volatile int64_t x49 = 890662554719114LL;
volatile int64_t t12 = -2979638647284LL;
int64_t x55 = INT64_MIN;
int16_t x56 = INT16_MAX;
uint32_t x63 = 28715U;
int32_t t15 = 966758506;
uint32_t x69 = UINT32_MAX;
int8_t x72 = INT8_MIN;
uint32_t t17 = UINT32_MAX;
volatile uint32_t x73 = UINT32_MAX;
volatile int16_t x78 = INT16_MIN;
uint16_t x83 = 17U;
int64_t x84 = -1LL;
static int64_t x89 = -365165131637962LL;
int64_t t22 = 122149007980LL;
int64_t x96 = INT64_MAX;
static int64_t x99 = 41541598749719661LL;
volatile int32_t x100 = 1;
int32_t x106 = INT32_MIN;
volatile int64_t x109 = 4348502257LL;
volatile int64_t x125 = -1LL;
uint64_t x136 = UINT64_MAX;
volatile int64_t t34 = 217614744792LL;
static uint8_t x144 = 2U;
uint8_t x145 = 12U;
int8_t x147 = 1;
uint64_t x151 = UINT64_MAX;
uint8_t x152 = 0U;
volatile int32_t t37 = INT32_MAX;
int64_t x153 = INT64_MIN;
uint16_t x156 = 5484U;
volatile int64_t t38 = -310517946838837127LL;
uint64_t x162 = UINT64_MAX;
static int16_t x163 = INT16_MIN;
static int32_t x166 = -106;
static volatile int32_t x173 = INT32_MAX;
int64_t x182 = -14LL;
int64_t x187 = INT64_MIN;
static int16_t x191 = -54;
int16_t x202 = INT16_MAX;
volatile int16_t x208 = INT16_MAX;
uint64_t x209 = UINT64_MAX;
int64_t x211 = INT64_MIN;
volatile int8_t x217 = -1;
static uint16_t x220 = UINT16_MAX;
static int64_t x222 = INT64_MAX;
static int32_t x225 = 173;
static int64_t x227 = INT64_MIN;
volatile int32_t t57 = 1;
int16_t x234 = -12016;
int32_t x241 = INT32_MAX;
uint32_t x248 = 1443167U;
volatile int16_t x249 = 4373;
uint64_t x250 = 1030LLU;
volatile int64_t x253 = INT64_MIN;
int64_t t63 = INT64_MIN;
int32_t x257 = INT32_MAX;
int16_t x258 = INT16_MIN;
int16_t x259 = INT16_MAX;
uint64_t t65 = 86433484173LLU;
volatile uint32_t x267 = 37297481U;
int32_t x273 = -1;
int64_t x280 = INT64_MIN;
int8_t x282 = INT8_MIN;
static uint32_t x291 = 315472U;
volatile int64_t x295 = INT64_MIN;
uint16_t x299 = 31U;
uint32_t x300 = 29381U;
uint16_t x303 = 3U;
volatile int32_t t75 = 1;
int16_t x306 = INT16_MIN;
int16_t x307 = 31;
static uint64_t x316 = UINT64_MAX;
int64_t t78 = INT64_MAX;
int64_t x317 = -1LL;
int8_t x318 = -1;
volatile uint32_t x333 = 24U;
int32_t x336 = INT32_MIN;
static int64_t x343 = -16567165772241130LL;
static uint16_t x345 = 0U;
int8_t x348 = -3;
int8_t x360 = -1;
int8_t x364 = 20;
volatile int32_t t90 = -5041184;
int16_t x365 = INT16_MIN;
uint32_t x368 = UINT32_MAX;
volatile int64_t t92 = 786250675663LL;
int16_t x380 = INT16_MIN;
int64_t x389 = 585421LL;
static int32_t x395 = -28;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	int32_t x3 = INT32_MAX;
	static uint32_t x4 = 12254U;
	volatile int64_t t0 = 226448203819152302LL;

	t0 = (x1|((x2==x3)<=x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = 332;
	volatile int32_t t1 = -38974398;

	t1 = (x5|((x6==x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 16U;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MAX;
	volatile int64_t x12 = -1LL;
	volatile int32_t t2 = 409827059;

	t2 = (x9|((x10==x11)<=x12));

	if (t2 != 16) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 22;
	int32_t x14 = INT32_MIN;
	int32_t x15 = -1;
	uint8_t x16 = 21U;
	int32_t t3 = 1009;

	t3 = (x13|((x14==x15)<=x16));

	if (t3 != 23) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	int32_t x18 = 131215769;
	static int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MAX;

	t4 = (x17|((x18==x19)<=x20));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int32_t x22 = 0;
	int8_t x23 = INT8_MAX;
	int32_t t5 = -27093138;

	t5 = (x21|((x22==x23)<=x24));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static int32_t x26 = INT32_MIN;
	uint8_t x27 = 3U;
	uint16_t x28 = 14U;

	t6 = (x25|((x26==x27)<=x28));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t t7 = UINT64_MAX;

	t7 = (x29|((x30==x31)<=x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MAX;
	int64_t x36 = -1552435LL;
	volatile int32_t t8 = -81;

	t8 = (x33|((x34==x35)<=x36));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 105U;
	volatile uint64_t x39 = 22577401568034LLU;
	int64_t x40 = INT64_MIN;
	int32_t t9 = 5;

	t9 = (x37|((x38==x39)<=x40));

	if (t9 != 105) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -44;
	int64_t x42 = INT64_MAX;
	int32_t x43 = 145822;
	static int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -505445286;

	t10 = (x41|((x42==x43)<=x44));

	if (t10 != -43) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x46 = -430;
	static volatile int64_t x47 = INT64_MAX;
	static int32_t x48 = -587;
	static volatile int32_t t11 = -3243556;

	t11 = (x45|((x46==x47)<=x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 133U;
	int32_t x51 = -1;
	uint32_t x52 = 4319U;

	t12 = (x49|((x50==x51)<=x52));

	if (t12 != 890662554719115LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint8_t x54 = 11U;
	int32_t t13 = 897;

	t13 = (x53|((x54==x55)<=x56));

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -1;
	int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MIN;
	int16_t x60 = -1971;
	volatile int32_t t14 = 98320;

	t14 = (x57|((x58==x59)<=x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	int8_t x62 = -2;
	int64_t x64 = INT64_MAX;

	t15 = (x61|((x62==x63)<=x64));

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = -6854;
	static int8_t x67 = INT8_MIN;
	static int32_t x68 = INT32_MAX;
	static volatile int32_t t16 = -525;

	t16 = (x65|((x66==x67)<=x68));

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x70 = INT64_MAX;
	volatile int8_t x71 = -1;

	t17 = (x69|((x70==x71)<=x72));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -1LL;
	int16_t x75 = INT16_MAX;
	static int64_t x76 = INT64_MIN;
	uint32_t t18 = UINT32_MAX;

	t18 = (x73|((x74==x75)<=x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 0;
	uint32_t x79 = 0U;
	uint16_t x80 = 15150U;
	volatile int32_t t19 = -3600;

	t19 = (x77|((x78==x79)<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int8_t x82 = -1;
	int32_t t20 = INT32_MIN;

	t20 = (x81|((x82==x83)<=x84));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 501U;
	uint8_t x86 = 60U;
	static volatile uint8_t x87 = 4U;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 413;

	t21 = (x85|((x86==x87)<=x88));

	if (t21 != 501) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = 1;
	int64_t x91 = -242LL;
	uint32_t x92 = UINT32_MAX;

	t22 = (x89|((x90==x91)<=x92));

	if (t22 != -365165131637961LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -16777;
	uint32_t x94 = 267577332U;
	uint64_t x95 = UINT64_MAX;
	static int32_t t23 = -26;

	t23 = (x93|((x94==x95)<=x96));

	if (t23 != -16777) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MAX;
	int32_t t24 = -1;

	t24 = (x97|((x98==x99)<=x100));

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	volatile int64_t x102 = -1LL;
	static volatile int32_t x103 = 4564;
	int16_t x104 = -1;
	int32_t t25 = -110284217;

	t25 = (x101|((x102==x103)<=x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 2LL;
	int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	volatile int64_t t26 = -139856653LL;

	t26 = (x105|((x106==x107)<=x108));

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MAX;
	int16_t x111 = -768;
	volatile uint16_t x112 = 3504U;
	volatile int64_t t27 = 834933853153330485LL;

	t27 = (x109|((x110==x111)<=x112));

	if (t27 != 4348502257LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int64_t x114 = -2584759439230578039LL;
	int8_t x115 = INT8_MIN;
	uint8_t x116 = UINT8_MAX;
	volatile int64_t t28 = 15LL;

	t28 = (x113|((x114==x115)<=x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static uint8_t x118 = 0U;
	int32_t x119 = -634961787;
	static int8_t x120 = INT8_MAX;
	int32_t t29 = 292897;

	t29 = (x117|((x118==x119)<=x120));

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -1;
	uint16_t x122 = 2U;
	int16_t x123 = INT16_MIN;
	static uint64_t x124 = 420658LLU;
	int32_t t30 = -848062259;

	t30 = (x121|((x122==x123)<=x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = 32273LLU;
	volatile int32_t x127 = -11;
	volatile int16_t x128 = INT16_MIN;
	volatile int64_t t31 = -8081LL;

	t31 = (x125|((x126==x127)<=x128));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = UINT16_MAX;
	volatile int8_t x130 = INT8_MAX;
	volatile uint16_t x131 = 0U;
	static uint64_t x132 = 51171433LLU;
	int32_t t32 = 264131525;

	t32 = (x129|((x130==x131)<=x132));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	volatile int16_t x134 = INT16_MIN;
	volatile int8_t x135 = 15;
	static volatile int32_t t33 = 1;

	t33 = (x133|((x134==x135)<=x136));

	if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = -1573380065276135529LL;
	int16_t x138 = INT16_MIN;
	int32_t x139 = -1;
	int32_t x140 = INT32_MIN;

	t34 = (x137|((x138==x139)<=x140));

	if (t34 != -1573380065276135529LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MIN;
	volatile int64_t x142 = INT64_MIN;
	volatile uint16_t x143 = 2126U;
	volatile int32_t t35 = -4965960;

	t35 = (x141|((x142==x143)<=x144));

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x146 = UINT8_MAX;
	int32_t x148 = -1;
	volatile int32_t t36 = -432100554;

	t36 = (x145|((x146==x147)<=x148));

	if (t36 != 12) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MAX;
	int16_t x150 = INT16_MIN;

	t37 = (x149|((x150==x151)<=x152));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x154 = 4;
	int16_t x155 = -1;

	t38 = (x153|((x154==x155)<=x156));

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static int32_t x158 = INT32_MIN;
	int8_t x159 = -1;
	int32_t x160 = INT32_MAX;
	volatile int32_t t39 = -314128;

	t39 = (x157|((x158==x159)<=x160));

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	volatile uint64_t x164 = UINT64_MAX;
	volatile int32_t t40 = 1394;

	t40 = (x161|((x162==x163)<=x164));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = UINT32_MAX;
	uint16_t x167 = 393U;
	volatile int8_t x168 = INT8_MAX;
	uint32_t t41 = UINT32_MAX;

	t41 = (x165|((x166==x167)<=x168));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -3961602LL;
	uint64_t x170 = 29751409231LLU;
	int16_t x171 = -1;
	int16_t x172 = INT16_MAX;
	volatile int64_t t42 = 130184254355160LL;

	t42 = (x169|((x170==x171)<=x172));

	if (t42 != -3961601LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = 8U;
	static int32_t x175 = INT32_MIN;
	int32_t x176 = -1;
	int32_t t43 = INT32_MAX;

	t43 = (x173|((x174==x175)<=x176));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MIN;
	int32_t x178 = -1;
	int32_t x179 = -2;
	static int8_t x180 = INT8_MIN;
	static int32_t t44 = INT32_MIN;

	t44 = (x177|((x178==x179)<=x180));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MIN;
	int8_t x183 = 1;
	int8_t x184 = -42;
	volatile int32_t t45 = 1;

	t45 = (x181|((x182==x183)<=x184));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 3U;
	int16_t x186 = INT16_MIN;
	static int32_t x188 = -520293;
	volatile int32_t t46 = -54;

	t46 = (x185|((x186==x187)<=x188));

	if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = 5421;
	uint32_t x190 = UINT32_MAX;
	uint32_t x192 = 10U;
	volatile int32_t t47 = -164;

	t47 = (x189|((x190==x191)<=x192));

	if (t47 != 5421) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MIN;
	int64_t x194 = -4852LL;
	int32_t x195 = INT32_MIN;
	static int16_t x196 = INT16_MIN;
	static int64_t t48 = INT64_MIN;

	t48 = (x193|((x194==x195)<=x196));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	uint16_t x198 = UINT16_MAX;
	static int16_t x199 = INT16_MIN;
	volatile uint32_t x200 = UINT32_MAX;
	volatile int32_t t49 = -4533;

	t49 = (x197|((x198==x199)<=x200));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 1U;
	int32_t x203 = -636502193;
	int64_t x204 = INT64_MIN;
	int32_t t50 = 121790;

	t50 = (x201|((x202==x203)<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	int8_t x206 = 0;
	uint8_t x207 = 8U;
	static volatile int32_t t51 = -6133;

	t51 = (x205|((x206==x207)<=x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = -1;
	volatile int64_t x212 = INT64_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x209|((x210==x211)<=x212));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 2U;
	int8_t x214 = INT8_MIN;
	int64_t x215 = 1706210LL;
	static uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = -7037;

	t53 = (x213|((x214==x215)<=x216));

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x218 = UINT16_MAX;
	static volatile uint64_t x219 = UINT64_MAX;
	volatile int32_t t54 = 0;

	t54 = (x217|((x218==x219)<=x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	int16_t x223 = INT16_MIN;
	int8_t x224 = 36;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x221|((x222==x223)<=x224));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x226 = INT32_MIN;
	static int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 421448;

	t56 = (x225|((x226==x227)<=x228));

	if (t56 != 173) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	volatile int16_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	int8_t x232 = 26;

	t57 = (x229|((x230==x231)<=x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 27;
	static int32_t x235 = 4;
	uint16_t x236 = 22637U;
	volatile int32_t t58 = -12952925;

	t58 = (x233|((x234==x235)<=x236));

	if (t58 != 27) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x237 = 1080U;
	uint8_t x238 = 15U;
	volatile int32_t x239 = INT32_MIN;
	volatile uint8_t x240 = UINT8_MAX;
	int32_t t59 = 1;

	t59 = (x237|((x238==x239)<=x240));

	if (t59 != 1081) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	int64_t x243 = -1LL;
	volatile uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x241|((x242==x243)<=x244));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x245 = INT16_MIN;
	volatile int16_t x246 = -1;
	volatile int32_t x247 = INT32_MIN;
	int32_t t61 = 18124;

	t61 = (x245|((x246==x247)<=x248));

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x251 = 36U;
	int64_t x252 = 3089100548015946LL;
	volatile int32_t t62 = -1340904;

	t62 = (x249|((x250==x251)<=x252));

	if (t62 != 4373) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = 127U;
	volatile int8_t x255 = INT8_MAX;
	static int16_t x256 = -1;

	t63 = (x253|((x254==x255)<=x256));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x260 = 3U;
	volatile int32_t t64 = INT32_MAX;

	t64 = (x257|((x258==x259)<=x260));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 258661402963233LLU;
	volatile uint8_t x262 = UINT8_MAX;
	uint32_t x263 = 1041835U;
	int64_t x264 = INT64_MIN;

	t65 = (x261|((x262==x263)<=x264));

	if (t65 != 258661402963233LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = -1;
	static volatile int64_t x266 = 62313716624789LL;
	int8_t x268 = 0;
	volatile int32_t t66 = 72803;

	t66 = (x265|((x266==x267)<=x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 1634351057U;
	static int8_t x270 = INT8_MAX;
	static int32_t x271 = -263280;
	uint64_t x272 = 0LLU;
	volatile uint32_t t67 = 2325U;

	t67 = (x269|((x270==x271)<=x272));

	if (t67 != 1634351057U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x274 = INT16_MIN;
	int8_t x275 = 10;
	int16_t x276 = -1;
	int32_t t68 = 3;

	t68 = (x273|((x274==x275)<=x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = -1;
	uint16_t x278 = 538U;
	int8_t x279 = INT8_MAX;
	volatile int32_t t69 = -45499;

	t69 = (x277|((x278==x279)<=x280));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = -1LL;
	int64_t x283 = INT64_MIN;
	int16_t x284 = INT16_MAX;
	int64_t t70 = 7LL;

	t70 = (x281|((x282==x283)<=x284));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MAX;
	uint64_t x287 = UINT64_MAX;
	int64_t x288 = -2165756283155909LL;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x285|((x286==x287)<=x288));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	uint16_t x290 = 1U;
	static int16_t x292 = -1;
	int64_t t72 = INT64_MIN;

	t72 = (x289|((x290==x291)<=x292));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int64_t x294 = -1LL;
	volatile uint32_t x296 = 544007U;
	int32_t t73 = 1;

	t73 = (x293|((x294==x295)<=x296));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -15;
	int32_t x298 = -267073504;
	int32_t t74 = 197547383;

	t74 = (x297|((x298==x299)<=x300));

	if (t74 != -15) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 14;
	static uint8_t x302 = UINT8_MAX;
	static volatile uint8_t x304 = 8U;

	t75 = (x301|((x302==x303)<=x304));

	if (t75 != 15) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x305 = INT64_MIN;
	int16_t x308 = INT16_MIN;
	volatile int64_t t76 = INT64_MIN;

	t76 = (x305|((x306==x307)<=x308));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 82U;
	static volatile uint64_t x310 = 14318088213LLU;
	uint16_t x311 = UINT16_MAX;
	uint16_t x312 = 472U;
	volatile int32_t t77 = -40302;

	t77 = (x309|((x310==x311)<=x312));

	if (t77 != 83) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	volatile uint32_t x314 = UINT32_MAX;
	int32_t x315 = INT32_MIN;

	t78 = (x313|((x314==x315)<=x316));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x319 = -1;
	uint16_t x320 = 4218U;
	volatile int64_t t79 = -28397262LL;

	t79 = (x317|((x318==x319)<=x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	static int64_t x322 = -168444653966769LL;
	int32_t x323 = INT32_MIN;
	uint64_t x324 = UINT64_MAX;
	int32_t t80 = 17037907;

	t80 = (x321|((x322==x323)<=x324));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int32_t x326 = 7023425;
	int16_t x327 = 268;
	static int32_t x328 = 32675;
	static volatile int32_t t81 = 1560;

	t81 = (x325|((x326==x327)<=x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MAX;
	uint64_t x330 = UINT64_MAX;
	volatile uint64_t x331 = 3530869704LLU;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = 4;

	t82 = (x329|((x330==x331)<=x332));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x334 = -1;
	int8_t x335 = INT8_MIN;
	static uint32_t t83 = 83168U;

	t83 = (x333|((x334==x335)<=x336));

	if (t83 != 24U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = 59U;
	volatile uint32_t x338 = 254096U;
	int8_t x339 = INT8_MIN;
	volatile uint8_t x340 = UINT8_MAX;
	static volatile int32_t t84 = 3336747;

	t84 = (x337|((x338==x339)<=x340));

	if (t84 != 59) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	uint16_t x342 = 19U;
	static int8_t x344 = -1;
	int32_t t85 = INT32_MIN;

	t85 = (x341|((x342==x343)<=x344));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = -26;
	volatile int32_t x347 = -1;
	volatile int32_t t86 = -148;

	t86 = (x345|((x346==x347)<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = 64599050U;
	static int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MIN;
	static int32_t x352 = -1;
	uint32_t t87 = 731542U;

	t87 = (x349|((x350==x351)<=x352));

	if (t87 != 64599050U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 15U;
	int8_t x354 = INT8_MIN;
	uint32_t x355 = UINT32_MAX;
	static volatile int64_t x356 = INT64_MIN;
	uint32_t t88 = 398345254U;

	t88 = (x353|((x354==x355)<=x356));

	if (t88 != 15U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int16_t x358 = INT16_MAX;
	int16_t x359 = 34;
	volatile int32_t t89 = 6;

	t89 = (x357|((x358==x359)<=x360));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 2408U;
	volatile int32_t x362 = INT32_MIN;
	int16_t x363 = 4427;

	t90 = (x361|((x362==x363)<=x364));

	if (t90 != 2409) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MIN;
	uint32_t x367 = UINT32_MAX;
	volatile int32_t t91 = -50108;

	t91 = (x365|((x366==x367)<=x368));

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 280514390LL;
	int64_t x370 = INT64_MIN;
	static int32_t x371 = 14732178;
	volatile uint64_t x372 = UINT64_MAX;

	t92 = (x369|((x370==x371)<=x372));

	if (t92 != 280514391LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	uint32_t x374 = UINT32_MAX;
	static int64_t x375 = INT64_MIN;
	int32_t x376 = -7;
	static int64_t t93 = INT64_MAX;

	t93 = (x373|((x374==x375)<=x376));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	static int32_t x378 = -1752985;
	int16_t x379 = -1;
	volatile int32_t t94 = INT32_MAX;

	t94 = (x377|((x378==x379)<=x380));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 210LLU;
	volatile uint16_t x382 = 3643U;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t95 = 2632206277LLU;

	t95 = (x381|((x382==x383)<=x384));

	if (t95 != 211LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x385 = 616757576721204202LLU;
	static int64_t x386 = INT64_MAX;
	int8_t x387 = 36;
	int32_t x388 = INT32_MAX;
	static uint64_t t96 = 11677LLU;

	t96 = (x385|((x386==x387)<=x388));

	if (t96 != 616757576721204203LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = -1324;
	int8_t x391 = INT8_MIN;
	static int16_t x392 = INT16_MIN;
	int64_t t97 = -116284LL;

	t97 = (x389|((x390==x391)<=x392));

	if (t97 != 585421LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 0;
	int8_t x394 = 0;
	int8_t x396 = INT8_MAX;
	int32_t t98 = 131915;

	t98 = (x393|((x394==x395)<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 2U;
	int64_t x398 = INT64_MIN;
	int8_t x399 = -1;
	static volatile int8_t x400 = 1;
	volatile int32_t t99 = -1;

	t99 = (x397|((x398==x399)<=x400));

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

